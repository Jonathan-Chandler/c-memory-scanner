#line 1 "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/src/c/ffi.d"
/* -*- Mode: C; c-basic-offset: 2; indent-tabs-mode: nil -*- */
/* vim: set filetype=c tabstop=2 shiftwidth=2 expandtab: */

/*
 * ffi.d - user defined data types and foreign functions interface
 *
 * Copyright (c) 2001 Juan Jose Garcia Ripoll
 *
 * See file 'LICENSE' for the copyright details.
 *
 */

#include <string.h>
#define ECL_INCLUDE_FFI_H
#include <ecl/ecl.h>
#include <ecl/internal.h>

static const cl_object ecl_aet_to_ffi_table[ecl_aet_bc+1] = {
  ECL_SYM(":VOID",1414), /* ecl_aet_object */
  ECL_SYM(":FLOAT",1400), /* ecl_aet_sf */
  ECL_SYM(":DOUBLE",1398), /* ecl_aet_df */
  ECL_SYM(":LONG-DOUBLE",1407), /* ecl_aet_lf */
#ifdef ECL_COMPLEX_FLOAT
  ECL_SYM(":CSFLOAT",1394), /* ecl_aet_csf */
  ECL_SYM(":CDFLOAT",1395), /* ecl_aet_cdf */
  ECL_SYM(":CLFLOAT",1396), /* ecl_aet_clf */
#endif
  ECL_SYM(":VOID",1414), /* ecl_aet_bit */
#if ECL_FIXNUM_BITS == 32 && defined(ecl_uint32_t)
  ECL_SYM(":INT32-T",1404), /* ecl_aet_fix */
  ECL_SYM(":UINT32-T",1417), /* ecl_aet_index */
#else
# if ECL_FIXNUM_BITS == 64 && defined(ecl_uint64_t)
  ECL_SYM(":INT64-T",1405), /* ecl_aet_fix */
  ECL_SYM(":UINT64-T",1418), /* ecl_aet_index */
# else
  ECL_SYM(":VOID",1414), /* ecl_aet_fix */
  ECL_SYM(":VOID",1414), /* ecl_aet_index */
# endif
#endif
  ECL_SYM(":UINT8-T",1415), /* ecl_aet_b8 */
  ECL_SYM(":INT8-T",1402), /* ecl_aet_i8 */
#ifdef ecl_uint16_t
  ECL_SYM(":UINT16-T",1416), /* ecl_aet_b16 */
  ECL_SYM(":INT16-T",1403), /* ecl_aet_i16 */
#endif
#ifdef ecl_uint32_t
  ECL_SYM(":UINT32-T",1417), /* ecl_aet_b32 */
  ECL_SYM(":INT32-T",1404), /* ecl_aet_i32 */
#endif
#ifdef ecl_uint64_t
  ECL_SYM(":UINT64-T",1418), /* ecl_aet_b64 */
  ECL_SYM(":INT64-T",1405), /* ecl_aet_i64 */
#endif
#ifdef ECL_UNICODE
# ifdef ecl_int32_t
  ECL_SYM(":INT32-T",1404), /* ecl_aet_ch */
# else
  ECL_SYM(":VOID",1414), /* ecl_aet_ch */
# endif
#endif
  ECL_SYM(":CHAR",1393) /* ecl_aet_bc */
};

#define AUX_PTR(type)                                                   \
  ((struct { char a[1]; union { type c[1]; char d[sizeof(type)]; } b; } *)0)
#ifdef __GNUC__
typedef struct {
  cl_object name;
  cl_index size;
  cl_index alignment;
} ecl_foreign_type_record;
# define ALIGNMENT(tag) (ecl_foreign_type_table[tag].alignment)
# define FFI_DESC(symbol,type)                                          \
  {symbol, sizeof(type), (AUX_PTR(type)->b.d - AUX_PTR(type)->a)}
#else
typedef struct {
  cl_object name;
  cl_index size;
  char *d, *a;
} ecl_foreign_type_record;
#define ALIGNMENT(tag) (ecl_foreign_type_table[tag].d - ecl_foreign_type_table[tag].a)
#define AUX_PTR(type)                                                   \
  ((struct { char a[1]; union { type c[1]; char d[sizeof(type)]; } b; } *)0)
#define FFI_DESC(symbol,type)                                   \
  {symbol, sizeof(type), AUX_PTR(type)->b.d, AUX_PTR(type)->a}
#endif

static const ecl_foreign_type_record
ecl_foreign_type_table[] = {
  FFI_DESC(ECL_SYM(":CHAR",1393), char),
  FFI_DESC(ECL_SYM(":UNSIGNED-CHAR",1420), unsigned char),
  FFI_DESC(ECL_SYM(":BYTE",1392), ecl_int8_t),
  FFI_DESC(ECL_SYM(":UNSIGNED-BYTE",1419), ecl_uint8_t),
  FFI_DESC(ECL_SYM(":SHORT",1411), short),
  FFI_DESC(ECL_SYM(":UNSIGNED-SHORT",1424), unsigned short),
  FFI_DESC(ECL_SYM(":INT",1401), int),
  FFI_DESC(ECL_SYM(":UNSIGNED-INT",1421), unsigned int),
  FFI_DESC(ECL_SYM(":LONG",1406), long),
  FFI_DESC(ECL_SYM(":UNSIGNED-LONG",1422), unsigned long),
#ifdef ecl_uint8_t
  FFI_DESC(ECL_SYM(":INT8-T",1402), ecl_int8_t),
  FFI_DESC(ECL_SYM(":UINT8-T",1415), ecl_uint8_t),
#endif
#ifdef ecl_uint16_t
  FFI_DESC(ECL_SYM(":INT16-T",1403), ecl_int16_t),
  FFI_DESC(ECL_SYM(":UINT16-T",1416), ecl_uint16_t),
#endif
#ifdef ecl_uint32_t
  FFI_DESC(ECL_SYM(":INT32-T",1404), ecl_int32_t),
  FFI_DESC(ECL_SYM(":UINT32-T",1417), ecl_uint32_t),
#endif
#ifdef ecl_uint64_t
  FFI_DESC(ECL_SYM(":INT64-T",1405), ecl_int64_t),
  FFI_DESC(ECL_SYM(":UINT64-T",1418), ecl_uint64_t),
#endif
#ifdef ecl_long_long_t
  FFI_DESC(ECL_SYM(":LONG-LONG",1408), long long),
  FFI_DESC(ECL_SYM(":UNSIGNED-LONG-LONG",1423), unsigned long long),
#endif
  FFI_DESC(ECL_SYM(":POINTER-VOID",1410), void *),
  FFI_DESC(ECL_SYM(":CSTRING",1397), char *),
  FFI_DESC(ECL_SYM(":OBJECT",1305), cl_object),
  FFI_DESC(ECL_SYM(":FLOAT",1400), float),
  FFI_DESC(ECL_SYM(":DOUBLE",1398), double),
  FFI_DESC(ECL_SYM(":LONG-DOUBLE",1407), long double),
#ifdef ECL_COMPLEX_FLOAT
  FFI_DESC(ECL_SYM(":CSFLOAT",1394), _Complex float),
  FFI_DESC(ECL_SYM(":CDFLOAT",1395), _Complex double),
  FFI_DESC(ECL_SYM(":CLFLOAT",1396), _Complex long double),
#endif
  {ECL_SYM(":VOID",1414), 0, 0}
};

#ifdef HAVE_LIBFFI

/* FIXME libffi does not define long long. */
# ifndef ffi_type_slonglong
#  define ffi_type_slonglong ffi_type_sint64
#  define ffi_type_ulonglong ffi_type_uint64
# endif

static struct {
  const cl_object symbol;
  ffi_abi abi;
} ecl_foreign_cc_table[] = {
  {ECL_SYM(":DEFAULT",1237), FFI_DEFAULT_ABI},
#ifdef FFI_MS_CDECL
  {ECL_SYM(":CDECL",1781), FFI_MS_CDECL}
#elif defined(FFI_SYSV)
  {ECL_SYM(":CDECL",1781), FFI_SYSV}
#endif
#ifdef FFI_EABI
  {ECL_SYM(":EABI",1782), FFI_EABI}
#endif
#ifdef FFI_GNUW64
  {ECL_SYM(":GNUW64",1783), FFI_GNUW64}
#endif
#ifdef FFI_STDCALL
  {ECL_SYM(":STDCALL",1784), FFI_STDCALL}
#endif
#ifdef FFI_SYSV
  {ECL_SYM(":SYSV",1785), FFI_SYSV}
#endif
#ifdef FFI_UNIX
  {ECL_SYM(":UNIX",1786), FFI_UNIX}
#endif
#ifdef FFI_UNIX64
  {ECL_SYM(":UNIX64",1787), FFI_UNIX64}
#endif
#ifdef FFI_VFP
  {ECL_SYM(":VFP",1788), FFI_VFP}
#endif
#ifdef FFI_WIN64
  {ECL_SYM(":WIN64",1789), FFI_WIN64}
#endif
  {NULL, 0}
};

static ffi_type *ecl_type_to_libffi_types[] = {
  &ffi_type_schar,              /*ECL_SYM(":CHAR",1393),*/
  &ffi_type_uchar,              /*ECL_SYM(":UNSIGNED-CHAR",1420),*/
  &ffi_type_sint8,              /*ECL_SYM(":BYTE",1392),*/
  &ffi_type_uint8,              /*ECL_SYM(":UNSIGNED-BYTE",1419),*/
  &ffi_type_sshort,             /*ECL_SYM(":SHORT",1411),*/
  &ffi_type_ushort,             /*ECL_SYM(":UNSIGNED-SHORT",1424),*/
  &ffi_type_sint,               /*ECL_SYM(":INT",1401),*/
  &ffi_type_uint,               /*ECL_SYM(":UNSIGNED-INT",1421),*/
  &ffi_type_slong,              /*ECL_SYM(":LONG",1406),*/
  &ffi_type_ulong,              /*ECL_SYM(":UNSIGNED-LONG",1422),*/
#ifdef ecl_uint8_t
  &ffi_type_sint8,              /*ECL_SYM(":INT8-T",1402),*/
  &ffi_type_uint8,              /*ECL_SYM(":UINT8-T",1415),*/
#endif
#ifdef ecl_uint16_t
  &ffi_type_sint16,             /*ECL_SYM(":INT16-T",1403),*/
  &ffi_type_uint16,             /*ECL_SYM(":UINT16-T",1416),*/
#endif
#ifdef ecl_uint32_t
  &ffi_type_sint32,             /*ECL_SYM(":INT32-T",1404),*/
  &ffi_type_uint32,             /*ECL_SYM(":UINT32-T",1417),*/
#endif
#ifdef ecl_uint64_t
  &ffi_type_sint64,             /*ECL_SYM(":INT64-T",1405),*/
  &ffi_type_uint64,             /*ECL_SYM(":UINT64-T",1418),*/
#endif
#ifdef ecl_long_long_t
  &ffi_type_slonglong,          /*ECL_SYM(":LONG-LONG",1408),*/
  &ffi_type_ulonglong,          /*ECL_SYM(":UNSIGNED-LONG-LONG",1423),*/
#endif
  &ffi_type_pointer,            /*ECL_SYM(":POINTER-VOID",1410),*/
  &ffi_type_pointer,            /*ECL_SYM(":CSTRING",1397),*/
  &ffi_type_pointer,            /*ECL_SYM(":OBJECT",1305),*/
  &ffi_type_float,              /*ECL_SYM(":FLOAT",1400),*/
  &ffi_type_double,             /*ECL_SYM(":DOUBLE",1398),*/
  &ffi_type_longdouble,         /*ECL_SYM(":LONG-DOUBLE",1407),*/
#ifdef ECL_COMPLEX_FLOAT
# ifdef FFI_TARGET_HAS_COMPLEX_TYPE
  &ffi_type_complex_float,      /*ECL_SYM(":CSFLOAT",1394),*/
  &ffi_type_complex_double,     /*ECL_SYM(":CDFLOAT",1395),*/
  &ffi_type_complex_longdouble, /*ECL_SYM(":CLFLOAT",1396),*/
# else
  NULL,                         /*ECL_SYM(":CSFLOAT",1394),*/
  NULL,                         /*ECL_SYM(":CDFLOAT",1395),*/
  NULL,                         /*ECL_SYM(":CLFLOAT",1396),*/
# endif
#endif
  &ffi_type_void /*ECL_SYM(":VOID",1414)*/
};

static ffi_type *
ecl_type_to_libffi_type(cl_object type) {
  enum ecl_ffi_tag tag = ecl_foreign_type_code(type);
  ffi_type *result = ecl_type_to_libffi_types[tag];
  if (result == NULL) {
    FEerror("Dynamic FFI cannot encode argument of type ~s.", 1, type);
  }
  return result;
}
#endif /* HAVE_LIBFFI */

cl_object
ecl_make_foreign_data(cl_object tag, cl_index size, void *data)
{
  cl_object output = ecl_alloc_object(t_foreign);
  output->foreign.tag = tag == ECL_NIL ? ECL_SYM(":VOID",1414) : tag;
  output->foreign.size = size;
  output->foreign.data = (char*)data;
  return output;
}

cl_object
ecl_allocate_foreign_data(cl_object tag, cl_index size)
{
  cl_object output = ecl_alloc_object(t_foreign);
  output->foreign.tag = tag;
  output->foreign.size = size;
  output->foreign.data = (char*)ecl_alloc_atomic(size);
  return output;
}

void *
ecl_foreign_data_pointer_safe(cl_object f)
{
  if (ecl_unlikely(ecl_t_of(f) != t_foreign)) {
    FEwrong_type_only_arg(ecl_make_fixnum(/*SI::FOREIGN-DATA-POINTER*/1377), f,
                          ecl_make_fixnum(/*SI::FOREIGN-DATA*/1373));
  }
  return f->foreign.data;
}

char *
ecl_base_string_pointer_safe(cl_object f)
{
  unsigned char *s;
  if (ecl_unlikely(!ECL_BASE_STRING_P(f))) {
    FEwrong_type_argument(ecl_make_fixnum(/*BASE-STRING*/123), f);
  }
  s = f->base_string.self;
  if (ecl_unlikely(ECL_ARRAY_HAS_FILL_POINTER_P(f) &&
                   s[f->base_string.fillp] != 0)) {
    FEerror("Cannot coerce a string with fill pointer to (char *)", 0);
  }
  return (char *)s;
}

cl_object
ecl_null_terminated_base_string(cl_object f)
{
  if (ecl_unlikely(!ECL_STRINGP(f))) {
    FEwrong_type_argument(ecl_make_fixnum(/*STRING*/807), f);
  }
  if (ecl_t_of(f) == t_base_string) {
    if (ECL_ARRAY_HAS_FILL_POINTER_P(f) &&
        f->base_string.self[f->base_string.fillp] != 0) {
      return cl_copy_seq(f);
    } else {
      return f;
    }
  } else {
    return si_copy_to_simple_base_string(f);
  }
}

cl_object
si_allocate_foreign_data(cl_object tag, cl_object size)
{
  cl_object output = ecl_alloc_object(t_foreign);
  cl_index bytes = ecl_to_size(size);
  output->foreign.tag = tag;
  output->foreign.size = bytes;
  /* FIXME! Should be atomic uncollectable or malloc, but we do not export
   * that garbage collector interface and malloc may be overwritten
   * by the GC library */
  output->foreign.data = bytes? ecl_alloc_uncollectable(bytes) : NULL;
  {
#line 316
	const cl_env_ptr the_env = ecl_process_env();
#line 316
	#line 316
	cl_object __value0 = output;
#line 316
	the_env->nvalues = 1;
#line 316
	the_env->values[0] = __value0;
#line 316
	#line 316
	return __value0;
#line 316
}
;
}

cl_object
si_free_foreign_data(cl_object f)
{
  if (ecl_unlikely(ecl_t_of(f) != t_foreign)) {
    FEwrong_type_only_arg(ecl_make_fixnum(/*SI::FREE-FOREIGN-DATA*/1385), f,
                          ecl_make_fixnum(/*SI::FOREIGN-DATA*/1373));
  }
  if (f->foreign.size) {
    /* See si_allocate_foreign_data() */
    ecl_free_uncollectable(f->foreign.data);
  }
  f->foreign.size = 0;
  f->foreign.data = NULL;
  {
#line 332
	const cl_env_ptr the_env = ecl_process_env();
the_env->nvalues = 0; return ECL_NIL;
#line 332
}
;
}

cl_object
si_make_foreign_data_from_array(cl_object array)
{
  cl_object tag;
  if (!ECL_ARRAYP (array))
    FEwrong_type_only_arg(ecl_make_fixnum(/*SI::MAKE-FOREIGN-DATA-FROM-ARRAY*/1386),
                          array, ecl_make_fixnum(/*ARRAY*/98));
  tag = ecl_aet_to_ffi_table[array->array.elttype];
  if (ecl_unlikely(Null(tag))) {
    FEerror("Cannot make foreign object from array "
            "with element type ~S.", 1,
            ecl_elttype_to_symbol(array->array.elttype));
  }
  {
#line 348
	const cl_env_ptr the_env = ecl_process_env();
#line 348
	#line 348
	cl_object __value0 = ecl_make_foreign_data(tag, 0, array->array.self.bc);
#line 348
	the_env->nvalues = 1;
#line 348
	the_env->values[0] = __value0;
#line 348
	#line 348
	return __value0;
#line 348
}
;
}

cl_object
si_foreign_data_p(cl_object f)
{
  {
#line 354
	const cl_env_ptr the_env = ecl_process_env();
#line 354
	#line 354
	cl_object __value0 = (ECL_FOREIGN_DATA_P(f)? ECL_T : ECL_NIL);
#line 354
	the_env->nvalues = 1;
#line 354
	the_env->values[0] = __value0;
#line 354
	#line 354
	return __value0;
#line 354
}
;
}

cl_object
si_foreign_data_address(cl_object f)
{
  if (ecl_unlikely(ecl_t_of(f) != t_foreign)) {
    FEwrong_type_only_arg(ecl_make_fixnum(/*SI::FOREIGN-DATA-ADDRESS*/1374), f,
                          ecl_make_fixnum(/*SI::FOREIGN-DATA*/1373));
  }
  {
#line 364
	const cl_env_ptr the_env = ecl_process_env();
#line 364
	#line 364
	cl_object __value0 = ecl_make_unsigned_integer((cl_index)f->foreign.data);
#line 364
	the_env->nvalues = 1;
#line 364
	the_env->values[0] = __value0;
#line 364
	#line 364
	return __value0;
#line 364
}
;
}

cl_object
si_foreign_data_tag(cl_object f)
{
  if (ecl_unlikely(ecl_t_of(f) != t_foreign)) {
    FEwrong_type_only_arg(ecl_make_fixnum(/*SI::FOREIGN-DATA-TAG*/1383), f,
                          ecl_make_fixnum(/*SI::FOREIGN-DATA*/1373));
  }
  {
#line 374
	const cl_env_ptr the_env = ecl_process_env();
#line 374
	#line 374
	cl_object __value0 = f->foreign.tag;
#line 374
	the_env->nvalues = 1;
#line 374
	the_env->values[0] = __value0;
#line 374
	#line 374
	return __value0;
#line 374
}
;
}

cl_object
si_foreign_data_equal(cl_object f1, cl_object f2)
{
  if (ecl_unlikely(!ECL_FOREIGN_DATA_P(f1))) {
    FEwrong_type_only_arg(ecl_make_fixnum(/*SI::FOREIGN-DATA-ADDRESS*/1374), f1,
                          ecl_make_fixnum(/*SI::FOREIGN-DATA*/1373));
  }
  if (ecl_unlikely(!ECL_FOREIGN_DATA_P(f2))) {
    FEwrong_type_only_arg(ecl_make_fixnum(/*SI::FOREIGN-DATA-ADDRESS*/1374), f2,
                          ecl_make_fixnum(/*SI::FOREIGN-DATA*/1373));
  }
  {
#line 388
	const cl_env_ptr the_env = ecl_process_env();
#line 388
	#line 388
	cl_object __value0 = ((f1->foreign.data == f2->foreign.data)? ECL_T : ECL_NIL);
#line 388
	the_env->nvalues = 1;
#line 388
	the_env->values[0] = __value0;
#line 388
	#line 388
	return __value0;
#line 388
}
;
}

cl_object
si_foreign_data_pointer(cl_object f, cl_object andx, cl_object asize,
                        cl_object tag)
{
  cl_index ndx = ecl_to_size(andx);
  cl_index size = ecl_to_size(asize);
  cl_object output;

  if (ecl_unlikely(ecl_t_of(f) != t_foreign)) {
    FEwrong_type_only_arg(ecl_make_fixnum(/*SI::FOREIGN-DATA-POINTER*/1377), f,
                          ecl_make_fixnum(/*SI::FOREIGN-DATA*/1373));
  }
  if (ecl_unlikely(ndx >= f->foreign.size || (f->foreign.size - ndx) < size)) {
    FEerror("Out of bounds reference into foreign data type ~A.", 1, f);
  }
  output = ecl_alloc_object(t_foreign);
  output->foreign.tag = tag;
  output->foreign.size = size;
  output->foreign.data = f->foreign.data + ndx;
  {
#line 410
	const cl_env_ptr the_env = ecl_process_env();
#line 410
	#line 410
	cl_object __value0 = output;
#line 410
	the_env->nvalues = 1;
#line 410
	the_env->values[0] = __value0;
#line 410
	#line 410
	return __value0;
#line 410
}
;
}

cl_object
si_foreign_data_ref(cl_object f, cl_object andx, cl_object asize, cl_object tag)
{
  cl_index ndx = ecl_to_size(andx);
  cl_index size = ecl_to_size(asize);
  cl_object output;

  if (ecl_unlikely(ecl_t_of(f) != t_foreign)) {
    FEwrong_type_nth_arg(ecl_make_fixnum(/*SI::FOREIGN-DATA-REF*/1379), 1, f,
                         ecl_make_fixnum(/*SI::FOREIGN-DATA*/1373));
  }
  if (ecl_unlikely(ndx >= f->foreign.size || (f->foreign.size - ndx) < size)) {
    FEerror("Out of bounds reference into foreign data type ~A.", 1, f);
  }
  output = ecl_allocate_foreign_data(tag, size);
  memcpy(output->foreign.data, f->foreign.data + ndx, size);
  {
#line 429
	const cl_env_ptr the_env = ecl_process_env();
#line 429
	#line 429
	cl_object __value0 = output;
#line 429
	the_env->nvalues = 1;
#line 429
	the_env->values[0] = __value0;
#line 429
	#line 429
	return __value0;
#line 429
}
;
}

cl_object
si_foreign_data_set(cl_object f, cl_object andx, cl_object value)
{
  cl_index ndx = ecl_to_size(andx);
  cl_index size, limit;

  if (ecl_unlikely(ecl_t_of(f) != t_foreign)) {
    FEwrong_type_nth_arg(ecl_make_fixnum(/*SI::FOREIGN-DATA-SET*/1381), 1, f,
                         ecl_make_fixnum(/*SI::FOREIGN-DATA*/1373));
  }
  if (ecl_unlikely(ecl_t_of(value) != t_foreign)) {
    FEwrong_type_nth_arg(ecl_make_fixnum(/*SI::FOREIGN-DATA-SET*/1381), 3, value,
                         ecl_make_fixnum(/*SI::FOREIGN-DATA*/1373));
  }
  size = value->foreign.size;
  limit = f->foreign.size;
  if (ecl_unlikely(ndx >= limit || (limit - ndx) < size)) {
    FEerror("Out of bounds reference into foreign data type ~A.", 1, f);
  }
  memcpy(f->foreign.data + ndx, value->foreign.data, size);
  {
#line 452
	const cl_env_ptr the_env = ecl_process_env();
#line 452
	#line 452
	cl_object __value0 = value;
#line 452
	the_env->nvalues = 1;
#line 452
	the_env->values[0] = __value0;
#line 452
	#line 452
	return __value0;
#line 452
}
;
}

static int
foreign_type_code(cl_object type)
{
  int i;
  for (i = 0; i <= ECL_FFI_VOID; i++) {
    if (type == ecl_foreign_type_table[i].name)
      return i;
  }
  return -1;
}

enum ecl_ffi_tag
ecl_foreign_type_code(cl_object type)
{
  int i = foreign_type_code(type);
  if (ecl_unlikely(i < 0)) {
    FEerror("~A does not denote an elementary foreign type.", 1, type);
  }
  return (enum ecl_ffi_tag)i;
}

#ifdef HAVE_LIBFFI
ffi_abi
ecl_foreign_cc_code(cl_object cc)
{
  int i;
  for (i = 0; ecl_foreign_cc_table[i].symbol != NULL; i++) {
    if (cc == ecl_foreign_cc_table[i].symbol)
      return ecl_foreign_cc_table[i].abi;
  }
  FEerror("~A does no denote a valid calling convention.", 1, cc);
  return FFI_DEFAULT_ABI;
}
#endif

static void wrong_ffi_tag(enum ecl_ffi_tag tag) ecl_attr_noreturn;

static void
wrong_ffi_tag(enum ecl_ffi_tag tag)
{
  FEerror("Invalid ecl_ffi_tag code ~D", 1, ecl_make_integer(tag));
}

cl_object
ecl_foreign_data_ref_elt(void *p, enum ecl_ffi_tag tag)
{
  switch (tag) {
  case ECL_FFI_CHAR:
    return ECL_CODE_CHAR(*(char *)p);
  case ECL_FFI_UNSIGNED_CHAR:
    return ECL_CODE_CHAR(*(unsigned char *)p);
  case ECL_FFI_BYTE:
    return ecl_make_fixnum(*(int8_t *)p);
  case ECL_FFI_UNSIGNED_BYTE:
    return ecl_make_fixnum(*(uint8_t *)p);
  case ECL_FFI_SHORT:
    return ecl_make_fixnum(*(short *)p);
  case ECL_FFI_UNSIGNED_SHORT:
    return ecl_make_fixnum(*(unsigned short *)p);
  case ECL_FFI_INT:
    return ecl_make_integer(*(int *)p);
  case ECL_FFI_UNSIGNED_INT:
    return ecl_make_unsigned_integer(*(unsigned int *)p);
  case ECL_FFI_LONG:
    return ecl_make_integer(*(long *)p);
#ifdef ecl_uint8_t
  case ECL_FFI_INT8_T:
    return ecl_make_fixnum(*(ecl_int8_t *)p);
  case ECL_FFI_UINT8_T:
    return ecl_make_fixnum(*(ecl_uint8_t *)p);
#endif
#ifdef ecl_uint16_t
  case ECL_FFI_INT16_T:
    return ecl_make_int16_t(*(ecl_int16_t *)p);
  case ECL_FFI_UINT16_T:
    return ecl_make_uint16_t(*(ecl_uint16_t *)p);
#endif
#ifdef ecl_uint32_t
  case ECL_FFI_INT32_T:
    return ecl_make_int32_t(*(ecl_int32_t *)p);
  case ECL_FFI_UINT32_T:
    return ecl_make_uint32_t(*(ecl_uint32_t *)p);
#endif
#ifdef ecl_uint64_t
  case ECL_FFI_INT64_T:
    return ecl_make_int64_t(*(ecl_int64_t *)p);
  case ECL_FFI_UINT64_T:
    return ecl_make_uint64_t(*(ecl_uint64_t *)p);
#endif
#ifdef ecl_long_long_t
  case ECL_FFI_LONG_LONG:
    return ecl_make_long_long(*(ecl_long_long_t *)p);
  case ECL_FFI_UNSIGNED_LONG_LONG:
    return ecl_make_ulong_long(*(ecl_ulong_long_t *)p);
#endif
  case ECL_FFI_UNSIGNED_LONG:
    return ecl_make_unsigned_integer(*(unsigned long *)p);
  case ECL_FFI_POINTER_VOID:
    return ecl_make_foreign_data(ECL_SYM(":POINTER-VOID",1410), 0, *(void **)p);
  case ECL_FFI_CSTRING:
    return *(char **)p ?
      ecl_make_constant_base_string(*(char **)p, -1) : ECL_NIL;
  case ECL_FFI_OBJECT:
    return *(cl_object *)p;
  case ECL_FFI_FLOAT:
    return ecl_make_single_float(*(float *)p);
  case ECL_FFI_DOUBLE:
    return ecl_make_double_float(*(double *)p);
  case ECL_FFI_LONG_DOUBLE:
    return ecl_make_long_float(*(long double *)p);
#ifdef ECL_COMPLEX_FLOAT
  case ECL_FFI_CSFLOAT:
    return ecl_make_csfloat(*(_Complex float *)p);
  case ECL_FFI_CDFLOAT:
    return ecl_make_cdfloat(*(_Complex double *)p);
  case ECL_FFI_CLFLOAT:
    return ecl_make_clfloat(*(_Complex long double *)p);
#endif
  case ECL_FFI_VOID:
    return ECL_NIL;
  default:
    wrong_ffi_tag(tag);
  }
}

void
ecl_foreign_data_set_elt(void *p, enum ecl_ffi_tag tag, cl_object value)
{
  switch (tag) {
  case ECL_FFI_CHAR:
    *(char *)p = (char)ecl_base_char_code(value);
    break;
  case ECL_FFI_UNSIGNED_CHAR:
    *(unsigned char*)p = (unsigned char)ecl_base_char_code(value);
    break;
  case ECL_FFI_BYTE:
    *(int8_t *)p = ecl_to_int8_t(value);
    break;
  case ECL_FFI_UNSIGNED_BYTE:
    *(uint8_t *)p = ecl_to_uint8_t(value);
    break;
  case ECL_FFI_SHORT:
    *(short *)p = ecl_to_short(value);
    break;
  case ECL_FFI_UNSIGNED_SHORT:
    *(unsigned short *)p = ecl_to_ushort(value);
    break;
  case ECL_FFI_INT:
    *(int *)p = ecl_to_int(value);
    break;
  case ECL_FFI_UNSIGNED_INT:
    *(unsigned int *)p = ecl_to_uint(value);
    break;
  case ECL_FFI_LONG:
    *(long *)p = ecl_to_long(value);
    break;
  case ECL_FFI_UNSIGNED_LONG:
    *(unsigned long *)p = ecl_to_ulong(value);
    break;
  case ECL_FFI_INT8_T:
    *(ecl_int8_t *)p = ecl_to_int8_t(value);
    break;
  case ECL_FFI_UINT8_T:
    *(ecl_uint8_t *)p = ecl_to_uint8_t(value);
    break;
#ifdef ecl_uint16_t
  case ECL_FFI_INT16_T:
    *(ecl_int16_t *)p = ecl_to_int16_t(value);
    break;
  case ECL_FFI_UINT16_T:
    *(ecl_uint16_t *)p = ecl_to_uint16_t(value);
    break;
#endif
#ifdef ecl_uint32_t
  case ECL_FFI_INT32_T:
    *(ecl_int32_t *)p = ecl_to_int32_t(value);
    break;
  case ECL_FFI_UINT32_T:
    *(ecl_uint32_t *)p = ecl_to_uint32_t(value);
    break;
#endif
#ifdef ecl_uint64_t
  case ECL_FFI_INT64_T:
    *(ecl_int64_t *)p = ecl_to_int64_t(value);
    break;
  case ECL_FFI_UINT64_T:
    *(ecl_uint64_t *)p = ecl_to_uint64_t(value);
    break;
#endif
#ifdef ecl_long_long_t
  case ECL_FFI_LONG_LONG:
    *(ecl_long_long_t *)p = ecl_to_long_long(value);
    break;
  case ECL_FFI_UNSIGNED_LONG_LONG:
    *(ecl_ulong_long_t *)p = ecl_to_ulong_long(value);
    break;
#endif
  case ECL_FFI_POINTER_VOID:
    *(void **)p = ecl_foreign_data_pointer_safe(value);
    break;
  case ECL_FFI_CSTRING:
    *(char **)p = value == ECL_NIL ? NULL : (char*)value->base_string.self;
    break;
  case ECL_FFI_OBJECT:
    *(cl_object *)p = value;
    break;
  case ECL_FFI_FLOAT:
    *(float *)p = ecl_to_float(value);
    break;
  case ECL_FFI_DOUBLE:
    *(double *)p = ecl_to_double(value);
    break;
  case ECL_FFI_LONG_DOUBLE:
    *(long double *)p = ecl_to_long_double(value);
    break;
#ifdef ECL_COMPLEX_FLOAT
  case ECL_FFI_CSFLOAT:
    *(_Complex float *)p = ecl_to_csfloat(value);
    break;
  case ECL_FFI_CDFLOAT:
    *(_Complex double *)p = ecl_to_cdfloat(value);
    break;
  case ECL_FFI_CLFLOAT:
    *(_Complex long double *)p = ecl_to_clfloat(value);
    break;
#endif
  case ECL_FFI_VOID:
    break;
  default:
    wrong_ffi_tag(tag);
  }
}

cl_object
si_foreign_data_ref_elt(cl_object f, cl_object andx, cl_object type)
{
  cl_index ndx = ecl_to_size(andx);
  cl_index limit = f->foreign.size;
  enum ecl_ffi_tag tag = ecl_foreign_type_code(type);
  if (ecl_unlikely(ndx >= limit ||
                   (ndx + ecl_foreign_type_table[tag].size > limit))) {
    FEerror("Out of bounds reference into foreign data type ~A.", 1, f);
  }
  if (ecl_unlikely(ecl_t_of(f) != t_foreign)) {
    FEwrong_type_nth_arg(ecl_make_fixnum(/*SI::FOREIGN-DATA-REF-ELT*/1380), 1, f,
                         ecl_make_fixnum(/*SI::FOREIGN-DATA*/1373));
  }
  {
#line 702
	const cl_env_ptr the_env = ecl_process_env();
#line 702
	#line 702
	cl_object __value0 = ecl_foreign_data_ref_elt((void*)(f->foreign.data + ndx), tag);
#line 702
	the_env->nvalues = 1;
#line 702
	the_env->values[0] = __value0;
#line 702
	#line 702
	return __value0;
#line 702
}
;
}

cl_object
si_foreign_data_set_elt(cl_object f, cl_object andx, cl_object type, cl_object value)
{
  cl_index ndx = ecl_to_size(andx);
  cl_index limit = f->foreign.size;
  enum ecl_ffi_tag tag = ecl_foreign_type_code(type);
  if (ecl_unlikely(ndx >= limit ||
                   ndx + ecl_foreign_type_table[tag].size > limit)) {
    FEerror("Out of bounds reference into foreign data type ~A.", 1, f);
  }
  if (ecl_unlikely(ecl_t_of(f) != t_foreign)) {
    FEwrong_type_nth_arg(ecl_make_fixnum(/*SI::FOREIGN-DATA-SET-ELT*/1382), 1, f,
                         ecl_make_fixnum(/*SI::FOREIGN-DATA*/1373));
  }
  ecl_foreign_data_set_elt((void*)(f->foreign.data + ndx), tag, value);
  {
#line 720
	const cl_env_ptr the_env = ecl_process_env();
#line 720
	#line 720
	cl_object __value0 = value;
#line 720
	the_env->nvalues = 1;
#line 720
	the_env->values[0] = __value0;
#line 720
	#line 720
	return __value0;
#line 720
}
;
}

cl_object
si_size_of_foreign_elt_type(cl_object type)
{
  enum ecl_ffi_tag tag = ecl_foreign_type_code(type);
  {
#line 727
	const cl_env_ptr the_env = ecl_process_env();
#line 727
	#line 727
	cl_object __value0 = ecl_make_fixnum(ecl_foreign_type_table[tag].size);
#line 727
	the_env->nvalues = 1;
#line 727
	the_env->values[0] = __value0;
#line 727
	#line 727
	return __value0;
#line 727
}
;
}

cl_object
si_alignment_of_foreign_elt_type(cl_object type)
{
  enum ecl_ffi_tag tag = ecl_foreign_type_code(type);
  {
#line 734
	const cl_env_ptr the_env = ecl_process_env();
#line 734
	#line 734
	cl_object __value0 = ecl_make_fixnum(ALIGNMENT(tag));
#line 734
	the_env->nvalues = 1;
#line 734
	the_env->values[0] = __value0;
#line 734
	#line 734
	return __value0;
#line 734
}
;
}

cl_object
si_foreign_elt_type_p(cl_object type)
{
  {
#line 740
	const cl_env_ptr the_env = ecl_process_env();
#line 740
	#line 740
	cl_object __value0 = ((foreign_type_code(type) < 0)? ECL_NIL : ECL_T);
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

cl_object
si_null_pointer_p(cl_object f)
{
  if (ecl_unlikely(ecl_t_of(f) != t_foreign))
    FEwrong_type_only_arg(ecl_make_fixnum(/*SI::NULL-POINTER-P*/1389), f,
                          ecl_make_fixnum(/*SI::FOREIGN-DATA*/1373));
  {
#line 749
	const cl_env_ptr the_env = ecl_process_env();
#line 749
	#line 749
	cl_object __value0 = ((f->foreign.data == NULL)? ECL_T : ECL_NIL);
#line 749
	the_env->nvalues = 1;
#line 749
	the_env->values[0] = __value0;
#line 749
	#line 749
	return __value0;
#line 749
}
;
}

cl_object
si_foreign_data_recast(cl_object f, cl_object size, cl_object tag)
{
  if (ecl_unlikely(ecl_t_of(f) != t_foreign))
    FEwrong_type_nth_arg(ecl_make_fixnum(/*SI::FOREIGN-DATA-RECAST*/1378), 1, f,
                         ecl_make_fixnum(/*SI::FOREIGN-DATA*/1373));
  f->foreign.size = ecl_to_size(size);
  f->foreign.tag = tag;
  {
#line 760
	const cl_env_ptr the_env = ecl_process_env();
#line 760
	#line 760
	cl_object __value0 = f;
#line 760
	the_env->nvalues = 1;
#line 760
	the_env->values[0] = __value0;
#line 760
	#line 760
	return __value0;
#line 760
}
;
}

cl_object
si_load_foreign_module(cl_object filename)
{
#if !defined(ENABLE_DLOPEN)
  FEerror("SI:LOAD-FOREIGN-MODULE does not work when ECL is statically linked", 0);
#else
  cl_object output;

# ifdef ECL_THREADS
  mp_get_lock_wait(ecl_symbol_value(ECL_SYM("MP::+LOAD-COMPILE-LOCK+",1461)));
  ECL_UNWIND_PROTECT_BEGIN(ecl_process_env()) {
# endif
    output = ecl_library_open(filename, 0);
    if (output->cblock.handle == NULL) {
      cl_object aux = ecl_library_error(output);
      ecl_library_close(output);
      output = aux;
    }
# ifdef ECL_THREADS
    (void)0; /* MSVC complains about missing ';' before '}' */
  } ECL_UNWIND_PROTECT_THREAD_SAFE_EXIT {
    mp_giveup_lock(ecl_symbol_value(ECL_SYM("MP::+LOAD-COMPILE-LOCK+",1461)));
  } ECL_UNWIND_PROTECT_THREAD_SAFE_END;
# endif
  if (ecl_unlikely(ecl_t_of(output) != t_codeblock)) {
    FEerror("LOAD-FOREIGN-MODULE: Could not load "
            "foreign module ~S (Error: ~S)", 2, filename, output);
  }
  output->cblock.locked |= 1;
  {
#line 792
	const cl_env_ptr the_env = ecl_process_env();
#line 792
	#line 792
	cl_object __value0 = output;
#line 792
	the_env->nvalues = 1;
#line 792
	the_env->values[0] = __value0;
#line 792
	#line 792
	return __value0;
#line 792
}
;
#endif
}

cl_object
si_unload_foreign_module(cl_object module)
{
#if !defined(ENABLE_DLOPEN)
  FEerror("SI:UNLOAD-FOREIGN-MODULE does not work when ECL is statically linked", 0);
#else
  cl_object output = ECL_NIL;

  if (ecl_unlikely(ecl_t_of(module) != t_codeblock)) {
    FEerror("UNLOAD-FOREIGN-MODULE: Argument is not a foreign module: ~S ",
            1, module);
  }
# ifdef ECL_THREADS
  mp_get_lock_wait(ecl_symbol_value(ECL_SYM("MP::+LOAD-COMPILE-LOCK+",1461)));
  ECL_UNWIND_PROTECT_BEGIN(ecl_process_env()) {
# endif
    if (ecl_likely(ecl_library_close(module))) output = ECL_T;
# ifdef ECL_THREADS
    (void)0; /* MSVC complains about missing ';' before '}' */
  } ECL_UNWIND_PROTECT_THREAD_SAFE_EXIT {
    mp_giveup_lock(ecl_symbol_value(ECL_SYM("MP::+LOAD-COMPILE-LOCK+",1461)));
  } ECL_UNWIND_PROTECT_THREAD_SAFE_END;
# endif
  {
#line 819
	const cl_env_ptr the_env = ecl_process_env();
#line 819
	#line 819
	cl_object __value0 = output;
#line 819
	the_env->nvalues = 1;
#line 819
	the_env->values[0] = __value0;
#line 819
	#line 819
	return __value0;
#line 819
}
;
#endif
}

cl_object
si_find_foreign_symbol(cl_object var, cl_object module, cl_object type, cl_object size)
{
#if !defined(ENABLE_DLOPEN)
  FEerror("SI:FIND-FOREIGN-SYMBOL does not work when ECL is statically linked", 0);
#else
  cl_object block;
  cl_object output = ECL_NIL;
  void *sym;

  block = (module == ECL_SYM(":DEFAULT",1237) ? module : si_load_foreign_module(module));
  var = ecl_null_terminated_base_string(var);
  sym = ecl_library_symbol(block, (char*)var->base_string.self, 1);
  if (sym == NULL) {
    if (block != ECL_SYM(":DEFAULT",1237))
      output = ecl_library_error(block);
    goto OUTPUT;
  }
  output = ecl_make_foreign_data(type, ecl_to_fixnum(size), sym);
 OUTPUT:
  if (ecl_unlikely(ecl_t_of(output) != t_foreign))
    FEerror("FIND-FOREIGN-SYMBOL: Could not load "
            "foreign symbol ~S from module ~S (Error: ~S)",
            3, var, module, output);
  {
#line 847
	const cl_env_ptr the_env = ecl_process_env();
#line 847
	#line 847
	cl_object __value0 = output;
#line 847
	the_env->nvalues = 1;
#line 847
	the_env->values[0] = __value0;
#line 847
	#line 847
	return __value0;
#line 847
}
;
#endif
}

#ifdef HAVE_LIBFFI
static void
resize_call_stack(cl_env_ptr env, cl_index new_size)
{
  cl_index i;
  ffi_type **types =
    ecl_alloc_atomic((new_size + 1) * sizeof(ffi_type*));
  union ecl_ffi_values *values =
    ecl_alloc_atomic((new_size + 1) * sizeof(union ecl_ffi_values));
  union ecl_ffi_values **values_ptrs =
    ecl_alloc_atomic(new_size * sizeof(union ecl_ffi_values *));
  memcpy(types, env->ffi_types, env->ffi_args_limit * sizeof(ffi_type*));
  memcpy(values, env->ffi_values, env->ffi_args_limit *
         sizeof(union ecl_ffi_values));
  for (i = 0; i < new_size; i++) {
    values_ptrs[i] = (values + i + 1);
  }
  env->ffi_args_limit = new_size;
  ecl_dealloc(env->ffi_types);
  env->ffi_types = types;
  ecl_dealloc(env->ffi_values);
  env->ffi_values = values;
  ecl_dealloc(env->ffi_values_ptrs);
  env->ffi_values_ptrs = values_ptrs;
}

static int
prepare_cif(cl_env_ptr the_env, ffi_cif *cif, cl_object return_type,
            cl_object arg_types, cl_object args,
            cl_object cc_type, ffi_type ***output_copy)
{
  int n, ok;
  ffi_type **types;
  enum ecl_ffi_tag type;
  cl_object arg_type;
  if (!the_env->ffi_args_limit)
    resize_call_stack(the_env, 32);
  the_env->ffi_types[0] = ecl_type_to_libffi_type(return_type);
  for (n=0; !Null(arg_types); ) {
    if (!LISTP(arg_types)) {
      FEerror("In CALL-CFUN, types lists is not a proper list", 0);
    }
    if (n >= the_env->ffi_args_limit) {
      resize_call_stack(the_env, n + 32);
    }
    arg_type = ECL_CONS_CAR(arg_types);
    arg_types = ECL_CONS_CDR(arg_types);
    type = ecl_foreign_type_code(arg_type);
    the_env->ffi_types[++n] = ecl_type_to_libffi_type(arg_type);
    if (CONSP(args)) {
      cl_object object = ECL_CONS_CAR(args);
      if (type == ECL_FFI_CSTRING) {
        object = ecl_null_terminated_base_string(object);
        /* Push the newly allocated object onto the stack so that it
         * is reachable by the garbage collector */
        if (ECL_CONS_CAR(args) != object) {
          ECL_STACK_PUSH(the_env, object);
        }
      }
      args = ECL_CONS_CDR(args);
      ecl_foreign_data_set_elt(the_env->ffi_values + n, type, object);
    }
  }
  if (output_copy) {
    cl_index bytes = (n + 1) * sizeof(ffi_type*);
    *output_copy = types = (ffi_type**)ecl_alloc_atomic(bytes);
    memcpy(types, the_env->ffi_types, bytes);
  } else {
    types = the_env->ffi_types;
  }
  ok = ffi_prep_cif(cif, ecl_foreign_cc_code(cc_type), n, types[0], types + 1);
  if (ok != FFI_OK) {
    if (ok == FFI_BAD_ABI) {
      FEerror("In CALL-CFUN, not a valid ABI: ~A", 1,
              cc_type);
    }
    if (ok == FFI_BAD_TYPEDEF) {
      FEerror("In CALL-CFUN, wrong or malformed argument types", 0);
    }
  }
  return n;
}

#line 934
cl_object si_call_cfun(cl_narg narg, cl_object fun, cl_object return_type, cl_object arg_types, cl_object args, ...)
{
#line 934

  void *cfun = ecl_foreign_data_pointer_safe(fun);
  cl_object object;
  volatile cl_index sp;
  ffi_cif cif;
#line 939
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 939
	cl_object cc_type;
#line 939
	va_list ARGS;
	va_start(ARGS, args);
#line 939
	if (ecl_unlikely(narg < 4|| narg > 5)) FEwrong_num_arguments(ecl_make_fixnum(1650));
#line 939
	if (narg > 4) {
#line 939
		cc_type = va_arg(ARGS,cl_object);
#line 939
	} else {
#line 939
		cc_type = ECL_SYM(":DEFAULT",1237);
#line 939
	}
#line 939
{
  sp = ECL_STACK_INDEX(the_env);
  prepare_cif(the_env, &cif, return_type, arg_types, args, cc_type, NULL);
  ffi_call(&cif, cfun, the_env->ffi_values, (void **)the_env->ffi_values_ptrs);
  object = ecl_foreign_data_ref_elt(the_env->ffi_values,
                                    ecl_foreign_type_code(return_type));
  ECL_STACK_SET_INDEX(the_env, sp);
  if (object != ECL_NIL) {
    {
#line 947
	#line 947
	cl_object __value0 = object;
#line 947
	the_env->nvalues = 1;
#line 947
	the_env->values[0] = __value0;
#line 947
	va_end(ARGS);
#line 947
	return __value0;
#line 947
}
;
  } else {
    {
the_env->nvalues = 0; return ECL_NIL;
#line 949
}
;
  }
} }

static void
callback_executor(ffi_cif *cif, void *result, void **args, void *userdata)
{
  cl_object data = (cl_object)userdata;
  cl_object fun = ECL_CONS_CAR(data);
  cl_object ret_type = (data = ECL_CONS_CDR(data), ECL_CONS_CAR(data));
  cl_object arg_types = (data = ECL_CONS_CDR(data), ECL_CONS_CAR(data));
  cl_env_ptr the_env = ecl_process_env();
  struct ecl_stack_frame frame_aux;
  const cl_object frame = ecl_stack_frame_open(the_env, (cl_object)&frame_aux, 0);
  cl_object x;
  while (arg_types != ECL_NIL) {
    cl_object type = ECL_CONS_CAR(arg_types);
    enum ecl_ffi_tag tag = ecl_foreign_type_code(type);
    x = ecl_foreign_data_ref_elt(*args, tag);
    ecl_stack_frame_push(frame, x);
    arg_types = ECL_CONS_CDR(arg_types);
    args++;
  }
  x = ecl_apply_from_stack_frame(frame, fun);
  ecl_stack_frame_close(frame);
  ecl_foreign_data_set_elt(result, ecl_foreign_type_code(ret_type), x);
}

cl_object
si_free_ffi_closure(cl_object closure)
{
  ffi_closure_free(ecl_foreign_data_pointer_safe(closure));
  {
#line 981
	const cl_env_ptr the_env = ecl_process_env();
the_env->nvalues = 0; return ECL_NIL;
#line 981
}
;
}

#line 985
cl_object si_make_dynamic_callback(cl_narg narg, cl_object fun, cl_object sym, cl_object return_type, cl_object arg_types, ...)
{
#line 985

#line 986
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 986
	cl_object cc_type;
#line 986
	va_list ARGS;
	va_start(ARGS, arg_types);
#line 986
	if (ecl_unlikely(narg < 4|| narg > 5)) FEwrong_num_arguments(ecl_make_fixnum(1652));
#line 986
	if (narg > 4) {
#line 986
		cc_type = va_arg(ARGS,cl_object);
#line 986
	} else {
#line 986
		cc_type = ECL_SYM(":DEFAULT",1237);
#line 986
	}
#line 986
{
    ffi_cif *cif = ecl_alloc(sizeof(ffi_cif));
    ffi_type **types;
    int n = prepare_cif(the_env, cif, return_type, arg_types, ECL_NIL, cc_type,
                        &types);

    /* libffi allocates executable memory for us. ffi_closure_alloc()
     * returns a pointer to memory and a pointer to the beginning of
     * the actual executable region (executable_closure) which is
     * where the code resides. */
    void *executable_region;
    ffi_closure *closure = ffi_closure_alloc(sizeof(ffi_closure), &executable_region);

    cl_object closure_object = ecl_make_foreign_data(ECL_SYM(":POINTER-VOID",1410),
                                                     sizeof(ffi_closure),
                                                     closure);
    si_set_finalizer(closure_object, ECL_SYM("SI::FREE-FFI-CLOSURE",1653));

    cl_object data = cl_list(5,
                             fun, return_type, arg_types, cc_type,
                             ecl_make_foreign_data(ECL_SYM(":POINTER-VOID",1410),
                                                   sizeof(*cif), cif),
                             ecl_make_foreign_data(ECL_SYM(":POINTER-VOID",1410),
                                                   (n + 1) * sizeof(ffi_type*),
                                                   types));
    int status = ffi_prep_closure_loc(closure, cif, callback_executor,
                                      data, executable_region);

    if (status != FFI_OK) {
      FEerror("Unable to build callback. libffi returns ~D", 1,
              ecl_make_fixnum(status));
    }
    si_put_sysprop(sym, ECL_SYM(":CALLBACK",1651), closure_object);
    {
#line 1019
	#line 1019
	cl_object __value0 = closure_object;
#line 1019
	the_env->nvalues = 1;
#line 1019
	the_env->values[0] = __value0;
#line 1019
	va_end(ARGS);
#line 1019
	return __value0;
#line 1019
}
;
} }
#endif /* HAVE_LIBFFI */
