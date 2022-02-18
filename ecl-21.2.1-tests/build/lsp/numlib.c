/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:LSP;NUMLIB.LSP                                    */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/lsp/numlib.eclh"
/*      function definition for ISQRT                                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_isqrt(cl_object v1i)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ECL_FIXNUMP(v1i)||ECL_BIGNUMP(v1i))) { goto L4; }
  if (ecl_greatereq(v1i,ecl_make_fixnum(0))) { goto L1; }
  goto L2;
L4:;
  goto L2;
L2:;
  cl_error(5, ECL_SYM("TYPE-ERROR",872), ECL_SYM("DATUM",1236), v1i, ECL_SYM("EXPECTED-TYPE",1254), ECL_SYM("UNSIGNED-BYTE",887));
L1:;
  if (!(ecl_zerop(v1i))) { goto L6; }
  value0 = ecl_make_fixnum(0);
  cl_env_copy->nvalues = 1;
  return value0;
L6:;
  {
   cl_fixnum v2n;
   v2n = (cl_fixnum)(ecl_integer_length(v1i));
   {
    cl_object v3;
    cl_object v4x;
    cl_object v5y;
    T0 = ecl_ceiling2(ecl_make_fixnum(v2n),ecl_make_fixnum(2));
    v3 = cl_ash(ecl_make_fixnum(1), T0);
    v4x = v3;
    v5y = ECL_NIL;
    goto L14;
L13:;
    v5y = ecl_floor2(v1i,v4x);
    if (!(ecl_lowereq(v4x,v5y))) { goto L18; }
    value0 = v4x;
    cl_env_copy->nvalues = 1;
    return value0;
L18:;
    T0 = ecl_plus(v4x,v5y);
    v4x = ecl_floor2(T0,ecl_make_fixnum(2));
L14:;
    goto L13;
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      function definition for PHASE                                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_phase(cl_object v1x)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ecl_zerop(v1x))) { goto L1; }
  if (!((v1x)==(ecl_make_fixnum(0)))) { goto L3; }
  value0 = cl_core.singlefloat_zero;
  cl_env_copy->nvalues = 1;
  return value0;
L3:;
  T0 = cl_realpart(v1x);
  value0 = cl_float(2, ecl_make_fixnum(0), T0);
  return value0;
L1:;
  T0 = cl_imagpart(v1x);
  T1 = cl_realpart(v1x);
  value0 = cl_atan(2, T0, T1);
  return value0;
 }
}
/*      function definition for SIGNUM                                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_signum(cl_object v1x)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(cl_complexp(v1x))) { goto L1; }
  if (!(ecl_zerop(v1x))) { goto L3; }
  value0 = v1x;
  cl_env_copy->nvalues = 1;
  return value0;
L3:;
  T0 = cl_imagpart(v1x);
  T1 = cl_realpart(v1x);
  T2 = cl_atan(2, T0, T1);
  value0 = cl_cis(T2);
  return value0;
L1:;
  {
   cl_object v2result;
   if (!(ecl_greater(v1x,ecl_make_fixnum(0)))) { goto L6; }
   v2result = ecl_make_fixnum(1);
   goto L5;
L6:;
   if (!(ecl_lower(v1x,ecl_make_fixnum(0)))) { goto L8; }
   v2result = ecl_make_fixnum(-1);
   goto L5;
L8:;
   v2result = v1x;
L5:;
   if (!(floatp(v1x))) { goto L10; }
   value0 = cl_float(2, v2result, v1x);
   return value0;
L10:;
   value0 = v2result;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for CIS                                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_cis(cl_object v1x)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_realp(v1x);
  if (ecl_unlikely(!((T0)!=ECL_NIL)))
         FEwrong_type_argument(ECL_SYM("REAL",705),v1x);
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 0;
  T0 = ecl_times(ecl_symbol_value(VV[0]),v1x);
  value0 = ecl_exp(T0);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for ASIN                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_asin(cl_object v1x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(cl_rationalp(v1x))) { goto L1; }
  v1x = cl_float(1, v1x);
L1:;
  {
   cl_object v2;
   v2 = v1x;
   if (!(ECL_SINGLE_FLOAT_P(v2))) { goto L5; }
   if ((cl_LE(3, _ecl_static_7, v1x, _ecl_static_8))!=ECL_NIL) { goto L9; }
   if (Null(si_float_nan_p(v1x))) { goto L7; }
   goto L8;
L9:;
L8:;
   value0 = ecl_make_single_float(asinf(ecl_to_float(v1x)));
   cl_env_copy->nvalues = 1;
   return value0;
L7:;
   value0 = ecl_make_csfloat(casinf(ecl_to_float(v1x) + I*0.0f));
   cl_env_copy->nvalues = 1;
   return value0;
L5:;
   if (!(ECL_DOUBLE_FLOAT_P(v2))) { goto L11; }
   if ((cl_LE(3, _ecl_static_7, v1x, _ecl_static_8))!=ECL_NIL) { goto L15; }
   if (Null(si_float_nan_p(v1x))) { goto L13; }
   goto L14;
L15:;
L14:;
   value0 = ecl_make_double_float(asin(ecl_to_double(v1x)));
   cl_env_copy->nvalues = 1;
   return value0;
L13:;
   value0 = ecl_make_cdfloat(casin(ecl_to_double(v1x) + I*0.0));
   cl_env_copy->nvalues = 1;
   return value0;
L11:;
   if (!(ECL_LONG_FLOAT_P(v2))) { goto L17; }
   if ((cl_LE(3, _ecl_static_7, v1x, _ecl_static_8))!=ECL_NIL) { goto L21; }
   if (Null(si_float_nan_p(v1x))) { goto L19; }
   goto L20;
L21:;
L20:;
   value0 = ecl_make_long_float(asinl(ecl_to_long_double(v1x)));
   cl_env_copy->nvalues = 1;
   return value0;
L19:;
   value0 = ecl_make_clfloat(casinl(ecl_to_long_double(v1x) + I*0.0l));
   cl_env_copy->nvalues = 1;
   return value0;
L17:;
   if (!(ECL_COMPLEX_SINGLE_FLOAT_P(v2))) { goto L23; }
   value0 = ecl_make_csfloat(casinf(ecl_to_csfloat(v1x)));
   cl_env_copy->nvalues = 1;
   return value0;
L23:;
   if (!(ECL_COMPLEX_DOUBLE_FLOAT_P(v2))) { goto L25; }
   value0 = ecl_make_cdfloat(casin(ecl_to_cdfloat(v1x)));
   cl_env_copy->nvalues = 1;
   return value0;
L25:;
   if (!(ECL_COMPLEX_LONG_FLOAT_P(v2))) { goto L27; }
   value0 = ecl_make_clfloat(casinl(ecl_to_clfloat(v1x)));
   cl_env_copy->nvalues = 1;
   return value0;
L27:;
   if (Null(cl_complexp(v2))) { goto L29; }
   T0 = cl_realpart(v1x);
   T1 = cl_float(1, T0);
   T2 = cl_imagpart(v1x);
   T3 = cl_float(1, T2);
   value0 = ecl_make_csfloat(casinf(ecl_to_float(T1) + I*(ecl_to_float(T3))));
   cl_env_copy->nvalues = 1;
   return value0;
L29:;
   value0 = cl_error(5, ECL_SYM("TYPE-ERROR",872), ECL_SYM("DATUM",1236), v1x, ECL_SYM("EXPECTED-TYPE",1254), ECL_SYM("NUMBER",608));
   return value0;
  }
 }
}
/*      function definition for ACOS                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_acos(cl_object v1x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(cl_rationalp(v1x))) { goto L1; }
  v1x = cl_float(1, v1x);
L1:;
  {
   cl_object v2;
   v2 = v1x;
   if (!(ECL_SINGLE_FLOAT_P(v2))) { goto L5; }
   if ((cl_LE(3, _ecl_static_7, v1x, _ecl_static_8))!=ECL_NIL) { goto L9; }
   if (Null(si_float_nan_p(v1x))) { goto L7; }
   goto L8;
L9:;
L8:;
   value0 = ecl_make_single_float(acosf(ecl_to_float(v1x)));
   cl_env_copy->nvalues = 1;
   return value0;
L7:;
   value0 = ecl_make_csfloat(cacosf(ecl_to_float(v1x) + I*0.0f));
   cl_env_copy->nvalues = 1;
   return value0;
L5:;
   if (!(ECL_DOUBLE_FLOAT_P(v2))) { goto L11; }
   if ((cl_LE(3, _ecl_static_7, v1x, _ecl_static_8))!=ECL_NIL) { goto L15; }
   if (Null(si_float_nan_p(v1x))) { goto L13; }
   goto L14;
L15:;
L14:;
   value0 = ecl_make_double_float(acos(ecl_to_double(v1x)));
   cl_env_copy->nvalues = 1;
   return value0;
L13:;
   value0 = ecl_make_cdfloat(cacos(ecl_to_double(v1x) + I*0.0));
   cl_env_copy->nvalues = 1;
   return value0;
L11:;
   if (!(ECL_LONG_FLOAT_P(v2))) { goto L17; }
   if ((cl_LE(3, _ecl_static_7, v1x, _ecl_static_8))!=ECL_NIL) { goto L21; }
   if (Null(si_float_nan_p(v1x))) { goto L19; }
   goto L20;
L21:;
L20:;
   value0 = ecl_make_long_float(acosl(ecl_to_long_double(v1x)));
   cl_env_copy->nvalues = 1;
   return value0;
L19:;
   value0 = ecl_make_clfloat(cacosl(ecl_to_long_double(v1x) + I*0.0l));
   cl_env_copy->nvalues = 1;
   return value0;
L17:;
   if (!(ECL_COMPLEX_SINGLE_FLOAT_P(v2))) { goto L23; }
   value0 = ecl_make_csfloat(cacosf(ecl_to_csfloat(v1x)));
   cl_env_copy->nvalues = 1;
   return value0;
L23:;
   if (!(ECL_COMPLEX_DOUBLE_FLOAT_P(v2))) { goto L25; }
   value0 = ecl_make_cdfloat(cacos(ecl_to_cdfloat(v1x)));
   cl_env_copy->nvalues = 1;
   return value0;
L25:;
   if (!(ECL_COMPLEX_LONG_FLOAT_P(v2))) { goto L27; }
   value0 = ecl_make_clfloat(cacosl(ecl_to_clfloat(v1x)));
   cl_env_copy->nvalues = 1;
   return value0;
L27:;
   if (Null(cl_complexp(v2))) { goto L29; }
   T0 = cl_realpart(v1x);
   T1 = cl_float(1, T0);
   T2 = cl_imagpart(v1x);
   T3 = cl_float(1, T2);
   value0 = ecl_make_csfloat(cacosf(ecl_to_float(T1) + I*(ecl_to_float(T3))));
   cl_env_copy->nvalues = 1;
   return value0;
L29:;
   value0 = cl_error(5, ECL_SYM("TYPE-ERROR",872), ECL_SYM("DATUM",1236), v1x, ECL_SYM("EXPECTED-TYPE",1254), ECL_SYM("NUMBER",608));
   return value0;
  }
 }
}
/*      function definition for ASINH                                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_asinh(cl_object v1x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(cl_rationalp(v1x))) { goto L1; }
  v1x = cl_float(1, v1x);
L1:;
  {
   cl_object v2;
   v2 = v1x;
   if (!(ECL_SINGLE_FLOAT_P(v2))) { goto L5; }
   goto L9;
   if (Null(si_float_nan_p(v1x))) { goto L7; }
   goto L8;
L9:;
L8:;
   value0 = ecl_make_single_float(asinhf(ecl_to_float(v1x)));
   cl_env_copy->nvalues = 1;
   return value0;
L7:;
   value0 = ecl_make_csfloat(casinhf(ecl_to_float(v1x) + I*0.0f));
   cl_env_copy->nvalues = 1;
   return value0;
L5:;
   if (!(ECL_DOUBLE_FLOAT_P(v2))) { goto L11; }
   goto L15;
   if (Null(si_float_nan_p(v1x))) { goto L13; }
   goto L14;
L15:;
L14:;
   value0 = ecl_make_double_float(asinh(ecl_to_double(v1x)));
   cl_env_copy->nvalues = 1;
   return value0;
L13:;
   value0 = ecl_make_cdfloat(casinh(ecl_to_double(v1x) + I*0.0));
   cl_env_copy->nvalues = 1;
   return value0;
L11:;
   if (!(ECL_LONG_FLOAT_P(v2))) { goto L17; }
   goto L21;
   if (Null(si_float_nan_p(v1x))) { goto L19; }
   goto L20;
L21:;
L20:;
   value0 = ecl_make_long_float(asinhl(ecl_to_long_double(v1x)));
   cl_env_copy->nvalues = 1;
   return value0;
L19:;
   value0 = ecl_make_clfloat(casinhl(ecl_to_long_double(v1x) + I*0.0l));
   cl_env_copy->nvalues = 1;
   return value0;
L17:;
   if (!(ECL_COMPLEX_SINGLE_FLOAT_P(v2))) { goto L23; }
   value0 = ecl_make_csfloat(casinhf(ecl_to_csfloat(v1x)));
   cl_env_copy->nvalues = 1;
   return value0;
L23:;
   if (!(ECL_COMPLEX_DOUBLE_FLOAT_P(v2))) { goto L25; }
   value0 = ecl_make_cdfloat(casinh(ecl_to_cdfloat(v1x)));
   cl_env_copy->nvalues = 1;
   return value0;
L25:;
   if (!(ECL_COMPLEX_LONG_FLOAT_P(v2))) { goto L27; }
   value0 = ecl_make_clfloat(casinhl(ecl_to_clfloat(v1x)));
   cl_env_copy->nvalues = 1;
   return value0;
L27:;
   if (Null(cl_complexp(v2))) { goto L29; }
   T0 = cl_realpart(v1x);
   T1 = cl_float(1, T0);
   T2 = cl_imagpart(v1x);
   T3 = cl_float(1, T2);
   value0 = ecl_make_csfloat(casinhf(ecl_to_float(T1) + I*(ecl_to_float(T3))));
   cl_env_copy->nvalues = 1;
   return value0;
L29:;
   value0 = cl_error(5, ECL_SYM("TYPE-ERROR",872), ECL_SYM("DATUM",1236), v1x, ECL_SYM("EXPECTED-TYPE",1254), ECL_SYM("NUMBER",608));
   return value0;
  }
 }
}
/*      function definition for ACOSH                                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_acosh(cl_object v1x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(cl_rationalp(v1x))) { goto L1; }
  v1x = cl_float(1, v1x);
L1:;
  {
   cl_object v2;
   v2 = v1x;
   if (!(ECL_SINGLE_FLOAT_P(v2))) { goto L5; }
   if (ecl_lowereq(_ecl_static_8,v1x)) { goto L9; }
   if (Null(si_float_nan_p(v1x))) { goto L7; }
   goto L8;
L9:;
L8:;
   value0 = ecl_make_single_float(acoshf(ecl_to_float(v1x)));
   cl_env_copy->nvalues = 1;
   return value0;
L7:;
   value0 = ecl_make_csfloat(cacoshf(ecl_to_float(v1x) + I*0.0f));
   cl_env_copy->nvalues = 1;
   return value0;
L5:;
   if (!(ECL_DOUBLE_FLOAT_P(v2))) { goto L11; }
   if (ecl_lowereq(_ecl_static_8,v1x)) { goto L15; }
   if (Null(si_float_nan_p(v1x))) { goto L13; }
   goto L14;
L15:;
L14:;
   value0 = ecl_make_double_float(acosh(ecl_to_double(v1x)));
   cl_env_copy->nvalues = 1;
   return value0;
L13:;
   value0 = ecl_make_cdfloat(cacosh(ecl_to_double(v1x) + I*0.0));
   cl_env_copy->nvalues = 1;
   return value0;
L11:;
   if (!(ECL_LONG_FLOAT_P(v2))) { goto L17; }
   if (ecl_lowereq(_ecl_static_8,v1x)) { goto L21; }
   if (Null(si_float_nan_p(v1x))) { goto L19; }
   goto L20;
L21:;
L20:;
   value0 = ecl_make_long_float(acoshl(ecl_to_long_double(v1x)));
   cl_env_copy->nvalues = 1;
   return value0;
L19:;
   value0 = ecl_make_clfloat(cacoshl(ecl_to_long_double(v1x) + I*0.0l));
   cl_env_copy->nvalues = 1;
   return value0;
L17:;
   if (!(ECL_COMPLEX_SINGLE_FLOAT_P(v2))) { goto L23; }
   value0 = ecl_make_csfloat(cacoshf(ecl_to_csfloat(v1x)));
   cl_env_copy->nvalues = 1;
   return value0;
L23:;
   if (!(ECL_COMPLEX_DOUBLE_FLOAT_P(v2))) { goto L25; }
   value0 = ecl_make_cdfloat(cacosh(ecl_to_cdfloat(v1x)));
   cl_env_copy->nvalues = 1;
   return value0;
L25:;
   if (!(ECL_COMPLEX_LONG_FLOAT_P(v2))) { goto L27; }
   value0 = ecl_make_clfloat(cacoshl(ecl_to_clfloat(v1x)));
   cl_env_copy->nvalues = 1;
   return value0;
L27:;
   if (Null(cl_complexp(v2))) { goto L29; }
   T0 = cl_realpart(v1x);
   T1 = cl_float(1, T0);
   T2 = cl_imagpart(v1x);
   T3 = cl_float(1, T2);
   value0 = ecl_make_csfloat(cacoshf(ecl_to_float(T1) + I*(ecl_to_float(T3))));
   cl_env_copy->nvalues = 1;
   return value0;
L29:;
   value0 = cl_error(5, ECL_SYM("TYPE-ERROR",872), ECL_SYM("DATUM",1236), v1x, ECL_SYM("EXPECTED-TYPE",1254), ECL_SYM("NUMBER",608));
   return value0;
  }
 }
}
/*      function definition for ATANH                                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_atanh(cl_object v1x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(cl_rationalp(v1x))) { goto L1; }
  v1x = cl_float(1, v1x);
L1:;
  {
   cl_object v2;
   v2 = v1x;
   if (!(ECL_SINGLE_FLOAT_P(v2))) { goto L5; }
   if ((cl_LE(3, _ecl_static_7, v1x, _ecl_static_8))!=ECL_NIL) { goto L9; }
   if (Null(si_float_nan_p(v1x))) { goto L7; }
   goto L8;
L9:;
L8:;
   value0 = ecl_make_single_float(atanhf(ecl_to_float(v1x)));
   cl_env_copy->nvalues = 1;
   return value0;
L7:;
   value0 = ecl_make_csfloat(catanhf(ecl_to_float(v1x) + I*0.0f));
   cl_env_copy->nvalues = 1;
   return value0;
L5:;
   if (!(ECL_DOUBLE_FLOAT_P(v2))) { goto L11; }
   if ((cl_LE(3, _ecl_static_7, v1x, _ecl_static_8))!=ECL_NIL) { goto L15; }
   if (Null(si_float_nan_p(v1x))) { goto L13; }
   goto L14;
L15:;
L14:;
   value0 = ecl_make_double_float(atanh(ecl_to_double(v1x)));
   cl_env_copy->nvalues = 1;
   return value0;
L13:;
   value0 = ecl_make_cdfloat(catanh(ecl_to_double(v1x) + I*0.0));
   cl_env_copy->nvalues = 1;
   return value0;
L11:;
   if (!(ECL_LONG_FLOAT_P(v2))) { goto L17; }
   if ((cl_LE(3, _ecl_static_7, v1x, _ecl_static_8))!=ECL_NIL) { goto L21; }
   if (Null(si_float_nan_p(v1x))) { goto L19; }
   goto L20;
L21:;
L20:;
   value0 = ecl_make_long_float(atanhl(ecl_to_long_double(v1x)));
   cl_env_copy->nvalues = 1;
   return value0;
L19:;
   value0 = ecl_make_clfloat(catanhl(ecl_to_long_double(v1x) + I*0.0l));
   cl_env_copy->nvalues = 1;
   return value0;
L17:;
   if (!(ECL_COMPLEX_SINGLE_FLOAT_P(v2))) { goto L23; }
   value0 = ecl_make_csfloat(catanhf(ecl_to_csfloat(v1x)));
   cl_env_copy->nvalues = 1;
   return value0;
L23:;
   if (!(ECL_COMPLEX_DOUBLE_FLOAT_P(v2))) { goto L25; }
   value0 = ecl_make_cdfloat(catanh(ecl_to_cdfloat(v1x)));
   cl_env_copy->nvalues = 1;
   return value0;
L25:;
   if (!(ECL_COMPLEX_LONG_FLOAT_P(v2))) { goto L27; }
   value0 = ecl_make_clfloat(catanhl(ecl_to_clfloat(v1x)));
   cl_env_copy->nvalues = 1;
   return value0;
L27:;
   if (Null(cl_complexp(v2))) { goto L29; }
   T0 = cl_realpart(v1x);
   T1 = cl_float(1, T0);
   T2 = cl_imagpart(v1x);
   T3 = cl_float(1, T2);
   value0 = ecl_make_csfloat(catanhf(ecl_to_float(T1) + I*(ecl_to_float(T3))));
   cl_env_copy->nvalues = 1;
   return value0;
L29:;
   value0 = cl_error(5, ECL_SYM("TYPE-ERROR",872), ECL_SYM("DATUM",1236), v1x, ECL_SYM("EXPECTED-TYPE",1254), ECL_SYM("NUMBER",608));
   return value0;
  }
 }
}
/*      function definition for FFLOOR                                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_ffloor(cl_narg narg, cl_object v1x, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2y;
  va_list args; va_start(args,v1x);
  {
   int i = 1;
   if (i >= narg) {
    v2y = _ecl_static_8;
   } else {
    i++;
    v2y = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v4;                                  /*  I               */
   cl_object v5;                                  /*  R               */
   value0 = ecl_floor2(v1x,v2y);
   {
    v4 = value0;
    v5 = cl_env_copy->values[1];
   }
   if (!(floatp(v5))) { goto L4; }
   T0 = cl_float(2, v4, v5);
   goto L3;
L4:;
   T0 = cl_float(1, v4);
L3:;
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v5;
   cl_env_copy->values[0] = T0;
   return cl_env_copy->values[0];
  }
 }
}
/*      function definition for FCEILING                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_fceiling(cl_narg narg, cl_object v1x, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2y;
  va_list args; va_start(args,v1x);
  {
   int i = 1;
   if (i >= narg) {
    v2y = _ecl_static_8;
   } else {
    i++;
    v2y = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v4;                                  /*  I               */
   cl_object v5;                                  /*  R               */
   value0 = ecl_ceiling2(v1x,v2y);
   {
    v4 = value0;
    v5 = cl_env_copy->values[1];
   }
   if (!(floatp(v5))) { goto L4; }
   T0 = cl_float(2, v4, v5);
   goto L3;
L4:;
   T0 = cl_float(1, v4);
L3:;
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v5;
   cl_env_copy->values[0] = T0;
   return cl_env_copy->values[0];
  }
 }
}
/*      function definition for FTRUNCATE                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_ftruncate(cl_narg narg, cl_object v1x, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2y;
  va_list args; va_start(args,v1x);
  {
   int i = 1;
   if (i >= narg) {
    v2y = _ecl_static_8;
   } else {
    i++;
    v2y = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v4;                                  /*  I               */
   cl_object v5;                                  /*  R               */
   value0 = ecl_truncate2(v1x,v2y);
   {
    v4 = value0;
    v5 = cl_env_copy->values[1];
   }
   if (!(floatp(v5))) { goto L4; }
   T0 = cl_float(2, v4, v5);
   goto L3;
L4:;
   T0 = cl_float(1, v4);
L3:;
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v5;
   cl_env_copy->values[0] = T0;
   return cl_env_copy->values[0];
  }
 }
}
/*      function definition for FROUND                                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_fround(cl_narg narg, cl_object v1x, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2y;
  va_list args; va_start(args,v1x);
  {
   int i = 1;
   if (i >= narg) {
    v2y = _ecl_static_8;
   } else {
    i++;
    v2y = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v4;                                  /*  I               */
   cl_object v5;                                  /*  R               */
   value0 = ecl_round2(v1x,v2y);
   {
    v4 = value0;
    v5 = cl_env_copy->values[1];
   }
   if (!(floatp(v5))) { goto L4; }
   T0 = cl_float(2, v4, v5);
   goto L3;
L4:;
   T0 = cl_float(1, v4);
L3:;
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v5;
   cl_env_copy->values[0] = T0;
   return cl_env_copy->values[0];
  }
 }
}
/*      function definition for LOGTEST                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_logtest(cl_object v1x, cl_object v2y)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_boole(ECL_BOOLAND,(v1x),(v2y));
  {
   bool v3;
   v3 = ecl_zerop(T0);
   value0 = (v3)?ECL_NIL:ECL_T;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for BYTE                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_byte(cl_object v1size, cl_object v2position)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = CONS(v1size,v2position);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for BYTE-SIZE                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_byte_size(cl_object v1bytespec)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ecl_car(v1bytespec);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for BYTE-POSITION                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_byte_position(cl_object v1bytespec)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ecl_cdr(v1bytespec);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for LDB                                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_ldb(cl_object v1bytespec, cl_object v2integer)
{
 cl_object T0, T1, T2, T3, T4, T5;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_byte_position(v1bytespec);
  T1 = ecl_negate(T0);
  T2 = cl_ash(v2integer, T1);
  T3 = cl_byte_size(v1bytespec);
  T4 = cl_ash(ecl_make_fixnum(-1), T3);
  T5 = ecl_boole(ECL_BOOLXOR,(T4),ecl_make_fixnum(-1));
  value0 = ecl_boole(ECL_BOOLAND,(T2),(T5));
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for LDB-TEST                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_ldb_test(cl_object v1bytespec, cl_object v2integer)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_mask_field(v1bytespec, v2integer);
  {
   bool v3;
   v3 = ecl_zerop(T0);
   value0 = (v3)?ECL_NIL:ECL_T;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for MASK-FIELD                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_mask_field(cl_object v1bytespec, cl_object v2integer)
{
 cl_object T0, T1, T2, T3, T4;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_byte_size(v1bytespec);
  T1 = cl_ash(ecl_make_fixnum(-1), T0);
  T2 = ecl_boole(ECL_BOOLXOR,(T1),ecl_make_fixnum(-1));
  T3 = cl_byte_position(v1bytespec);
  T4 = cl_ash(T2, T3);
  value0 = ecl_boole(ECL_BOOLAND,(T4),(v2integer));
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for DPB                                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_dpb(cl_object v1newbyte, cl_object v2bytespec, cl_object v3integer)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_fixnum v4pos;
   cl_fixnum v5size;
   cl_object v6mask;
   v4pos = ecl_fixnum(cl_byte_position(v2bytespec));
   v5size = ecl_fixnum(cl_byte_size(v2bytespec));
   T0 = cl_ash(ecl_make_fixnum(-1), ecl_make_fixnum(v5size));
   T1 = ecl_boole(ECL_BOOLXOR,(T0),ecl_make_fixnum(-1));
   v6mask = cl_ash(T1, ecl_make_fixnum(v4pos));
   T0 = ecl_boole(ECL_BOOLANDC2,(v3integer),(v6mask));
   T1 = cl_ash(v1newbyte, ecl_make_fixnum(v4pos));
   T2 = ecl_boole(ECL_BOOLAND,(T1),(v6mask));
   value0 = ecl_boole(ECL_BOOLIOR,(T0),(T2));
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for DEPOSIT-FIELD                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_deposit_field(cl_object v1newbyte, cl_object v2bytespec, cl_object v3integer)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_fixnum v4pos;
   cl_fixnum v5size;
   cl_object v6mask;
   v4pos = ecl_fixnum(cl_byte_position(v2bytespec));
   v5size = ecl_fixnum(cl_byte_size(v2bytespec));
   T0 = cl_ash(ecl_make_fixnum(-1), ecl_make_fixnum(v5size));
   T1 = ecl_boole(ECL_BOOLXOR,(T0),ecl_make_fixnum(-1));
   v6mask = cl_ash(T1, ecl_make_fixnum(v4pos));
   T0 = ecl_boole(ECL_BOOLANDC2,(v3integer),(v6mask));
   T1 = ecl_boole(ECL_BOOLAND,(v1newbyte),(v6mask));
   value0 = ecl_boole(ECL_BOOLIOR,(T0),(T1));
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}

#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/lsp/numlib.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _ecllqJxvfb7_i99mqq51(cl_object flag)
{
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 cl_object *VVtemp;
 if (flag != OBJNULL){
 Cblock = flag;
 #ifndef ECL_DYNAMIC_VV
 flag->cblock.data = VV;
 #endif
 flag->cblock.data_size = VM;
 flag->cblock.temp_data_size = VMtemp;
 flag->cblock.data_text = compiler_data_text;
 flag->cblock.cfuns_size = compiler_cfuns_size;
 flag->cblock.cfuns = compiler_cfuns;
 flag->cblock.source = ecl_make_constant_base_string("SRC:LSP;NUMLIB.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_ecllqJxvfb7_i99mqq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  si_Xmake_constant(ECL_SYM("SHORT-FLOAT-EPSILON",759), _ecl_static_0);
  si_Xmake_constant(ECL_SYM("SINGLE-FLOAT-EPSILON",781), _ecl_static_0);
  si_Xmake_constant(ECL_SYM("DOUBLE-FLOAT-EPSILON",318), _ecl_static_1);
  si_Xmake_constant(ECL_SYM("LONG-FLOAT-EPSILON",511), _ecl_static_2);
  si_Xmake_constant(ECL_SYM("SHORT-FLOAT-NEGATIVE-EPSILON",760), _ecl_static_3);
  si_Xmake_constant(ECL_SYM("SINGLE-FLOAT-NEGATIVE-EPSILON",782), _ecl_static_3);
  si_Xmake_constant(ECL_SYM("DOUBLE-FLOAT-NEGATIVE-EPSILON",319), _ecl_static_4);
  si_Xmake_constant(ECL_SYM("LONG-FLOAT-NEGATIVE-EPSILON",512), _ecl_static_5);
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   volatile cl_object v1bits;
   v1bits = si_trap_fpe(ECL_SYM("LAST",457), ECL_NIL);
   {
    volatile bool unwinding = FALSE;
    cl_index v2=ECL_STACK_INDEX(cl_env_copy),v3;
    ecl_frame_ptr next_fr;
    ecl_frs_push(cl_env_copy,ECL_PROTECT_TAG);
    if (__ecl_frs_push_result) {
      unwinding = TRUE; next_fr=cl_env_copy->nlj_fr;
    } else {
    {
     float v4a;
     {
      float v5;
      v5 = ecl_to_float(ecl_make_fixnum(1));
      {
       float v6;
       v6 = (float)    0.    ;
       v4a = ecl_to_float(ecl_divide(ecl_make_single_float(v5),ecl_make_single_float(v6)));
      }
     }
     si_Xmake_constant(ECL_SYM("SHORT-FLOAT-POSITIVE-INFINITY",1763), ecl_make_single_float(v4a));
     T0 = (cl_env_copy->function=(ECL_SYM("-",19)->symbol.gfdef))->cfun.entry(1, ecl_make_single_float(v4a)) /*  - */;
     si_Xmake_constant(ECL_SYM("SHORT-FLOAT-NEGATIVE-INFINITY",1767), T0);
    }
    {
     float v4a;
     {
      float v5;
      v5 = ecl_to_float(ecl_make_fixnum(1));
      {
       float v6;
       v6 = (float)    0.    ;
       v4a = ecl_to_float(ecl_divide(ecl_make_single_float(v5),ecl_make_single_float(v6)));
      }
     }
     si_Xmake_constant(ECL_SYM("SINGLE-FLOAT-POSITIVE-INFINITY",1764), ecl_make_single_float(v4a));
     T0 = (cl_env_copy->function=(ECL_SYM("-",19)->symbol.gfdef))->cfun.entry(1, ecl_make_single_float(v4a)) /*  - */;
     si_Xmake_constant(ECL_SYM("SINGLE-FLOAT-NEGATIVE-INFINITY",1768), T0);
    }
    {
     double v4a;
     {
      double v5;
      v5 = ecl_to_double(ecl_make_fixnum(1));
      {
       double v6;
       v6 = ecl_to_double(cl_core.singlefloat_zero);
       v4a = ecl_to_double(ecl_divide(ecl_make_double_float(v5),ecl_make_double_float(v6)));
      }
     }
     si_Xmake_constant(ECL_SYM("DOUBLE-FLOAT-POSITIVE-INFINITY",1765), ecl_make_double_float(v4a));
     T0 = (cl_env_copy->function=(ECL_SYM("-",19)->symbol.gfdef))->cfun.entry(1, ecl_make_double_float(v4a)) /*  - */;
     si_Xmake_constant(ECL_SYM("DOUBLE-FLOAT-NEGATIVE-INFINITY",1769), T0);
    }
    {
     long double v4a;
     {
      long double v5;
      v5 = ecl_to_long_double(ecl_make_fixnum(1));
      {
       long double v6;
       v6 = ecl_to_long_double(cl_core.singlefloat_zero);
       v4a = ecl_to_long_double(ecl_divide(ecl_make_long_float(v5),ecl_make_long_float(v6)));
      }
     }
     si_Xmake_constant(ECL_SYM("LONG-FLOAT-POSITIVE-INFINITY",1766), ecl_make_long_float(v4a));
     T0 = (cl_env_copy->function=(ECL_SYM("-",19)->symbol.gfdef))->cfun.entry(1, ecl_make_long_float(v4a)) /*  - */;
     si_Xmake_constant(ECL_SYM("LONG-FLOAT-NEGATIVE-INFINITY",1770), T0);
     cl_env_copy->values[0] = ECL_SYM("LONG-FLOAT-NEGATIVE-INFINITY",1770);
     cl_env_copy->nvalues = 1;
    }
    }
    ecl_frs_pop(cl_env_copy);
    v3=ecl_stack_push_values(cl_env_copy);
    si_trap_fpe(v1bits, ECL_T);
    ecl_stack_pop_values(cl_env_copy,v3);
    if (unwinding) ecl_unwind(cl_env_copy,next_fr);
    ECL_STACK_SET_INDEX(cl_env_copy,v2);
   }
  }
 }
  si_Xmake_constant(VV[0], _ecl_static_6);
  (void)0; /* No entry created for ISQRT */
  (void)0; /* No entry created for PHASE */
  (void)0; /* No entry created for SIGNUM */
  (void)0; /* No entry created for CIS */
  (void)0; /* No entry created for ASIN */
  (void)0; /* No entry created for ACOS */
  (void)0; /* No entry created for ASINH */
  (void)0; /* No entry created for ACOSH */
  (void)0; /* No entry created for ATANH */
  (void)0; /* No entry created for FFLOOR */
  (void)0; /* No entry created for FCEILING */
  (void)0; /* No entry created for FTRUNCATE */
  (void)0; /* No entry created for FROUND */
  (void)0; /* No entry created for LOGTEST */
  (void)0; /* No entry created for BYTE */
  (void)0; /* No entry created for BYTE-SIZE */
  (void)0; /* No entry created for BYTE-POSITION */
  (void)0; /* No entry created for LDB */
  (void)0; /* No entry created for LDB-TEST */
  (void)0; /* No entry created for MASK-FIELD */
  (void)0; /* No entry created for DPB */
  (void)0; /* No entry created for DEPOSIT-FIELD */
}
