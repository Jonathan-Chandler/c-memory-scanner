/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:LSP;CDR-5.LSP                                     */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/lsp/cdr-5.eclh"
/*      local function LAMBDA3                                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC1__lambda3(cl_object v1)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(v1)) { goto L1; }
  ecl_function_dispatch(cl_env_copy,VV[2])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L1:;
  value0 = cl_list(3, ECL_SYM("INTEGER",439), ecl_make_fixnum(-536870912), ecl_make_fixnum(-1));
  return value0;
 }
}
/*      local function LAMBDA6                                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC2__lambda6(cl_object v1)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(v1)) { goto L1; }
  ecl_function_dispatch(cl_env_copy,VV[2])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L1:;
  value0 = cl_list(3, ECL_SYM("INTEGER",439), ecl_make_fixnum(-536870912), ecl_make_fixnum(0));
  return value0;
 }
}
/*      local function LAMBDA9                                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC3__lambda9(cl_object v1)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(v1)) { goto L1; }
  ecl_function_dispatch(cl_env_copy,VV[2])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L1:;
  value0 = cl_list(3, ECL_SYM("INTEGER",439), ecl_make_fixnum(0), ecl_make_fixnum(536870911));
  return value0;
 }
}
/*      local function LAMBDA12                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC4__lambda12(cl_object v1)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(v1)) { goto L1; }
  ecl_function_dispatch(cl_env_copy,VV[2])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L1:;
  value0 = cl_list(3, ECL_SYM("INTEGER",439), ecl_make_fixnum(1), ecl_make_fixnum(536870911));
  return value0;
 }
}
/*      function definition for NEGATIVE-FIXNUM-P                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object si_negative_fixnum_p(cl_object v1p)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ECL_FIXNUMP(v1p))) { goto L2; }
  value0 = ecl_make_bool((ecl_to_fixnum(v1p))<0);
  cl_env_copy->nvalues = 1;
  return value0;
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for POSITIVE-FIXNUM-P                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object si_positive_fixnum_p(cl_object v1p)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ECL_FIXNUMP(v1p))) { goto L2; }
  value0 = ecl_make_bool((ecl_to_fixnum(v1p))>0);
  cl_env_copy->nvalues = 1;
  return value0;
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for NON-NEGATIVE-FIXNUM-P                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object si_non_negative_fixnum_p(cl_object v1p)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ECL_FIXNUMP(v1p))) { goto L2; }
  {
   bool v2;
   v2 = (ecl_to_fixnum(v1p))<0;
   value0 = (v2)?ECL_NIL:ECL_T;
   cl_env_copy->nvalues = 1;
   return value0;
  }
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for NON-POSITIVE-FIXNUM-P                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object si_non_positive_fixnum_p(cl_object v1p)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ECL_FIXNUMP(v1p))) { goto L2; }
  {
   bool v2;
   v2 = (ecl_to_fixnum(v1p))>0;
   value0 = (v2)?ECL_NIL:ECL_T;
   cl_env_copy->nvalues = 1;
   return value0;
  }
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for ARRAY-INDEX-P                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object si_array_index_p(cl_object v1p)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ECL_FIXNUMP(v1p))) { goto L2; }
  value0 = ecl_make_bool(((0)<=(ecl_to_fixnum(v1p)) && (ecl_to_fixnum(v1p))<=(536870911)));
  cl_env_copy->nvalues = 1;
  return value0;
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for NEGATIVE-INTEGER-P                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object si_negative_integer_p(cl_object v1p)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ECL_FIXNUMP(v1p)||ECL_BIGNUMP(v1p))) { goto L2; }
  value0 = ecl_make_bool(ecl_minusp(v1p));
  cl_env_copy->nvalues = 1;
  return value0;
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for POSITIVE-INTEGER-P                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object si_positive_integer_p(cl_object v1p)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ECL_FIXNUMP(v1p)||ECL_BIGNUMP(v1p))) { goto L2; }
  value0 = ecl_make_bool(ecl_plusp(v1p));
  cl_env_copy->nvalues = 1;
  return value0;
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for NON-NEGATIVE-INTEGER-P                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object si_non_negative_integer_p(cl_object v1p)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ECL_FIXNUMP(v1p)||ECL_BIGNUMP(v1p))) { goto L2; }
  {
   bool v2;
   v2 = ecl_minusp(v1p);
   value0 = (v2)?ECL_NIL:ECL_T;
   cl_env_copy->nvalues = 1;
   return value0;
  }
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for NON-POSITIVE-INTEGER-P                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object si_non_positive_integer_p(cl_object v1p)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ECL_FIXNUMP(v1p)||ECL_BIGNUMP(v1p))) { goto L2; }
  {
   bool v2;
   v2 = ecl_plusp(v1p);
   value0 = (v2)?ECL_NIL:ECL_T;
   cl_env_copy->nvalues = 1;
   return value0;
  }
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for NEGATIVE-RATIONAL-P                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object si_negative_rational_p(cl_object v1p)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(cl_rationalp(v1p))) { goto L2; }
  value0 = ecl_make_bool(ecl_minusp(v1p));
  cl_env_copy->nvalues = 1;
  return value0;
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for POSITIVE-RATIONAL-P                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object si_positive_rational_p(cl_object v1p)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(cl_rationalp(v1p))) { goto L2; }
  value0 = ecl_make_bool(ecl_plusp(v1p));
  cl_env_copy->nvalues = 1;
  return value0;
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for NON-NEGATIVE-RATIONAL-P               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object si_non_negative_rational_p(cl_object v1p)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(cl_rationalp(v1p))) { goto L2; }
  {
   bool v2;
   v2 = ecl_minusp(v1p);
   value0 = (v2)?ECL_NIL:ECL_T;
   cl_env_copy->nvalues = 1;
   return value0;
  }
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for NON-POSITIVE-RATIONAL-P               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object si_non_positive_rational_p(cl_object v1p)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(cl_rationalp(v1p))) { goto L2; }
  {
   bool v2;
   v2 = ecl_plusp(v1p);
   value0 = (v2)?ECL_NIL:ECL_T;
   cl_env_copy->nvalues = 1;
   return value0;
  }
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for RATIOP                                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L5ratiop(cl_object v1x)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_type_of(v1x);
  value0 = ecl_make_bool((T0)==(ECL_SYM("RATIO",688)));
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for POSITIVE-RATIO-P                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object si_positive_ratio_p(cl_object v1x)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(L5ratiop(v1x))) { goto L2; }
  value0 = ecl_make_bool(ecl_plusp(v1x));
  cl_env_copy->nvalues = 1;
  return value0;
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for NEGATIVE-RATIO-P                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object si_negative_ratio_p(cl_object v1x)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(L5ratiop(v1x))) { goto L2; }
  value0 = ecl_make_bool(ecl_minusp(v1x));
  cl_env_copy->nvalues = 1;
  return value0;
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for NON-NEGATIVE-RATIO-P                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object si_non_negative_ratio_p(cl_object v1p)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = si_positive_ratio_p(v1p);
  return value0;
 }
}
/*      function definition for NON-POSITIVE-RATIO-P                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object si_non_positive_ratio_p(cl_object v1p)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = si_negative_ratio_p(v1p);
  return value0;
 }
}
/*      function definition for NEGATIVE-REAL-P                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object si_negative_real_p(cl_object v1p)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(cl_realp(v1p))) { goto L2; }
  value0 = ecl_make_bool(ecl_minusp(v1p));
  cl_env_copy->nvalues = 1;
  return value0;
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for POSITIVE-REAL-P                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object si_positive_real_p(cl_object v1p)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(cl_realp(v1p))) { goto L2; }
  value0 = ecl_make_bool(ecl_plusp(v1p));
  cl_env_copy->nvalues = 1;
  return value0;
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for NON-NEGATIVE-REAL-P                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object si_non_negative_real_p(cl_object v1p)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(cl_realp(v1p))) { goto L2; }
  {
   bool v2;
   v2 = ecl_minusp(v1p);
   value0 = (v2)?ECL_NIL:ECL_T;
   cl_env_copy->nvalues = 1;
   return value0;
  }
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for NON-POSITIVE-REAL-P                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object si_non_positive_real_p(cl_object v1p)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(cl_realp(v1p))) { goto L2; }
  {
   bool v2;
   v2 = ecl_plusp(v1p);
   value0 = (v2)?ECL_NIL:ECL_T;
   cl_env_copy->nvalues = 1;
   return value0;
  }
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for NEGATIVE-FLOAT-P                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object si_negative_float_p(cl_object v1p)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(floatp(v1p))) { goto L2; }
  value0 = ecl_make_bool(ecl_minusp(v1p));
  cl_env_copy->nvalues = 1;
  return value0;
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for POSITIVE-FLOAT-P                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object si_positive_float_p(cl_object v1p)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(floatp(v1p))) { goto L2; }
  value0 = ecl_make_bool(ecl_plusp(v1p));
  cl_env_copy->nvalues = 1;
  return value0;
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for NON-NEGATIVE-FLOAT-P                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object si_non_negative_float_p(cl_object v1p)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(floatp(v1p))) { goto L2; }
  {
   bool v2;
   v2 = ecl_minusp(v1p);
   value0 = (v2)?ECL_NIL:ECL_T;
   cl_env_copy->nvalues = 1;
   return value0;
  }
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for NON-POSITIVE-FLOAT-P                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object si_non_positive_float_p(cl_object v1p)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(floatp(v1p))) { goto L2; }
  {
   bool v2;
   v2 = ecl_plusp(v1p);
   value0 = (v2)?ECL_NIL:ECL_T;
   cl_env_copy->nvalues = 1;
   return value0;
  }
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for NEGATIVE-SHORT-FLOAT-P                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object si_negative_short_float_p(cl_object v1p)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(ecl_function_dispatch(cl_env_copy,VV[4])(1, v1p) /*  SHORT-FLOATP */)) { goto L2; }
  value0 = ecl_make_bool((ecl_to_float(v1p))<0);
  cl_env_copy->nvalues = 1;
  return value0;
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for POSITIVE-SHORT-FLOAT-P                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object si_positive_short_float_p(cl_object v1p)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(ecl_function_dispatch(cl_env_copy,VV[4])(1, v1p) /*  SHORT-FLOATP */)) { goto L2; }
  value0 = ecl_make_bool((ecl_to_float(v1p))>0);
  cl_env_copy->nvalues = 1;
  return value0;
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for NON-NEGATIVE-SHORT-FLOAT-P            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object si_non_negative_short_float_p(cl_object v1p)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(ecl_function_dispatch(cl_env_copy,VV[4])(1, v1p) /*  SHORT-FLOATP */)) { goto L2; }
  {
   bool v2;
   v2 = (ecl_to_float(v1p))<0;
   value0 = (v2)?ECL_NIL:ECL_T;
   cl_env_copy->nvalues = 1;
   return value0;
  }
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for NON-POSITIVE-SHORT-FLOAT-P            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object si_non_positive_short_float_p(cl_object v1p)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(ecl_function_dispatch(cl_env_copy,VV[4])(1, v1p) /*  SHORT-FLOATP */)) { goto L2; }
  {
   bool v2;
   v2 = (ecl_to_float(v1p))>0;
   value0 = (v2)?ECL_NIL:ECL_T;
   cl_env_copy->nvalues = 1;
   return value0;
  }
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for NEGATIVE-SINGLE-FLOAT-P               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object si_negative_single_float_p(cl_object v1p)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(ecl_function_dispatch(cl_env_copy,VV[5])(1, v1p) /*  SINGLE-FLOATP */)) { goto L2; }
  value0 = ecl_make_bool((ecl_to_float(v1p))<0);
  cl_env_copy->nvalues = 1;
  return value0;
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for POSITIVE-SINGLE-FLOAT-P               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object si_positive_single_float_p(cl_object v1p)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(ecl_function_dispatch(cl_env_copy,VV[5])(1, v1p) /*  SINGLE-FLOATP */)) { goto L2; }
  value0 = ecl_make_bool((ecl_to_float(v1p))>0);
  cl_env_copy->nvalues = 1;
  return value0;
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for NON-NEGATIVE-SINGLE-FLOAT-P           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object si_non_negative_single_float_p(cl_object v1p)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(ecl_function_dispatch(cl_env_copy,VV[5])(1, v1p) /*  SINGLE-FLOATP */)) { goto L2; }
  {
   bool v2;
   v2 = (ecl_to_float(v1p))<0;
   value0 = (v2)?ECL_NIL:ECL_T;
   cl_env_copy->nvalues = 1;
   return value0;
  }
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for NON-POSITIVE-SINGLE-FLOAT-P           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object si_non_positive_single_float_p(cl_object v1p)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(ecl_function_dispatch(cl_env_copy,VV[5])(1, v1p) /*  SINGLE-FLOATP */)) { goto L2; }
  {
   bool v2;
   v2 = (ecl_to_float(v1p))>0;
   value0 = (v2)?ECL_NIL:ECL_T;
   cl_env_copy->nvalues = 1;
   return value0;
  }
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for NEGATIVE-DOUBLE-FLOAT-P               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object si_negative_double_float_p(cl_object v1p)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(ecl_function_dispatch(cl_env_copy,VV[6])(1, v1p) /*  DOUBLE-FLOATP */)) { goto L2; }
  value0 = ecl_make_bool((ecl_to_double(v1p))<0);
  cl_env_copy->nvalues = 1;
  return value0;
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for POSITIVE-DOUBLE-FLOAT-P               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object si_positive_double_float_p(cl_object v1p)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(ecl_function_dispatch(cl_env_copy,VV[6])(1, v1p) /*  DOUBLE-FLOATP */)) { goto L2; }
  value0 = ecl_make_bool((ecl_to_double(v1p))>0);
  cl_env_copy->nvalues = 1;
  return value0;
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for NON-NEGATIVE-DOUBLE-FLOAT-P           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object si_non_negative_double_float_p(cl_object v1p)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(ecl_function_dispatch(cl_env_copy,VV[6])(1, v1p) /*  DOUBLE-FLOATP */)) { goto L2; }
  {
   bool v2;
   v2 = (ecl_to_double(v1p))<0;
   value0 = (v2)?ECL_NIL:ECL_T;
   cl_env_copy->nvalues = 1;
   return value0;
  }
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for NON-POSITIVE-DOUBLE-FLOAT-P           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object si_non_positive_double_float_p(cl_object v1p)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(ecl_function_dispatch(cl_env_copy,VV[6])(1, v1p) /*  DOUBLE-FLOATP */)) { goto L2; }
  {
   bool v2;
   v2 = (ecl_to_double(v1p))>0;
   value0 = (v2)?ECL_NIL:ECL_T;
   cl_env_copy->nvalues = 1;
   return value0;
  }
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for NEGATIVE-LONG-FLOAT-P                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object si_negative_long_float_p(cl_object v1p)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(ecl_function_dispatch(cl_env_copy,VV[7])(1, v1p) /*  LONG-FLOATP */)) { goto L2; }
  value0 = ecl_make_bool((ecl_to_long_double(v1p))<0);
  cl_env_copy->nvalues = 1;
  return value0;
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for POSITIVE-LONG-FLOAT-P                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object si_positive_long_float_p(cl_object v1p)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(ecl_function_dispatch(cl_env_copy,VV[7])(1, v1p) /*  LONG-FLOATP */)) { goto L2; }
  value0 = ecl_make_bool((ecl_to_long_double(v1p))>0);
  cl_env_copy->nvalues = 1;
  return value0;
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for NON-NEGATIVE-LONG-FLOAT-P             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object si_non_negative_long_float_p(cl_object v1p)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(ecl_function_dispatch(cl_env_copy,VV[7])(1, v1p) /*  LONG-FLOATP */)) { goto L2; }
  {
   bool v2;
   v2 = (ecl_to_long_double(v1p))<0;
   value0 = (v2)?ECL_NIL:ECL_T;
   cl_env_copy->nvalues = 1;
   return value0;
  }
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for NON-POSITIVE-LONG-FLOAT-P             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object si_non_positive_long_float_p(cl_object v1p)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(ecl_function_dispatch(cl_env_copy,VV[7])(1, v1p) /*  LONG-FLOATP */)) { goto L2; }
  {
   bool v2;
   v2 = (ecl_to_long_double(v1p))>0;
   value0 = (v2)?ECL_NIL:ECL_T;
   cl_env_copy->nvalues = 1;
   return value0;
  }
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}

#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/lsp/cdr-5.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclzUToeBa7_oxDmqq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:LSP;CDR-5.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclzUToeBa7_oxDmqq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  cl_set(ECL_SYM("*FEATURES*",36),cl_adjoin(2, VV[0], ecl_symbol_value(ECL_SYM("*FEATURES*",36))));
  si_select_package(VVtemp[0]);
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC1__lambda3,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  si_do_deftype(3, ECL_SYM("NEGATIVE-FIXNUM",1930), VVtemp[1], T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC2__lambda6,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  si_do_deftype(3, ECL_SYM("NON-POSITIVE-FIXNUM",1932), VVtemp[2], T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC3__lambda9,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  si_do_deftype(3, ECL_SYM("NON-NEGATIVE-FIXNUM",1931), VVtemp[3], T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC4__lambda12,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  si_do_deftype(3, ECL_SYM("POSITIVE-FIXNUM",1933), VVtemp[4], T0);
 }
  (void)0; /* No entry created for NEGATIVE-FIXNUM-P */
  (void)0; /* No entry created for POSITIVE-FIXNUM-P */
  (void)0; /* No entry created for NON-NEGATIVE-FIXNUM-P */
  (void)0; /* No entry created for NON-POSITIVE-FIXNUM-P */
  (void)0; /* No entry created for ARRAY-INDEX-P */
  si_do_deftype(3, ECL_SYM("NEGATIVE-INTEGER",1938), VVtemp[5], VVtemp[6]);
  si_do_deftype(3, ECL_SYM("NON-POSITIVE-INTEGER",1940), VVtemp[7], VVtemp[8]);
  si_do_deftype(3, ECL_SYM("NON-NEGATIVE-INTEGER",1939), VVtemp[9], VVtemp[10]);
  si_do_deftype(3, ECL_SYM("POSITIVE-INTEGER",1941), VVtemp[11], VVtemp[12]);
  (void)0; /* No entry created for NEGATIVE-INTEGER-P */
  (void)0; /* No entry created for POSITIVE-INTEGER-P */
  (void)0; /* No entry created for NON-NEGATIVE-INTEGER-P */
  (void)0; /* No entry created for NON-POSITIVE-INTEGER-P */
  si_do_deftype(3, ECL_SYM("NEGATIVE-RATIONAL",1946), VVtemp[13], VVtemp[14]);
  si_do_deftype(3, ECL_SYM("NON-POSITIVE-RATIONAL",1948), VVtemp[15], VVtemp[16]);
  si_do_deftype(3, ECL_SYM("NON-NEGATIVE-RATIONAL",1947), VVtemp[17], VVtemp[18]);
  si_do_deftype(3, ECL_SYM("POSITIVE-RATIONAL",1949), VVtemp[19], VVtemp[20]);
  (void)0; /* No entry created for NEGATIVE-RATIONAL-P */
  (void)0; /* No entry created for POSITIVE-RATIONAL-P */
  (void)0; /* No entry created for NON-NEGATIVE-RATIONAL-P */
  (void)0; /* No entry created for NON-POSITIVE-RATIONAL-P */
  ecl_cmp_defun(VV[3]);                           /*  RATIOP          */
  (void)0; /* No entry created for POSITIVE-RATIO-P */
  (void)0; /* No entry created for NEGATIVE-RATIO-P */
  si_do_deftype(3, ECL_SYM("NEGATIVE-RATIO",1954), VVtemp[21], VVtemp[22]);
  si_do_deftype(3, ECL_SYM("NON-POSITIVE-RATIO",1956), VVtemp[23], ECL_SYM("NEGATIVE-RATIO",1954));
  si_do_deftype(3, ECL_SYM("NON-NEGATIVE-RATIO",1955), VVtemp[24], ECL_SYM("POSITIVE-RATIO",1957));
  si_do_deftype(3, ECL_SYM("POSITIVE-RATIO",1957), VVtemp[25], VVtemp[26]);
  (void)0; /* No entry created for NON-NEGATIVE-RATIO-P */
  (void)0; /* No entry created for NON-POSITIVE-RATIO-P */
  si_do_deftype(3, ECL_SYM("NEGATIVE-REAL",1962), VVtemp[27], VVtemp[28]);
  si_do_deftype(3, ECL_SYM("NON-POSITIVE-REAL",1964), VVtemp[29], VVtemp[30]);
  si_do_deftype(3, ECL_SYM("NON-NEGATIVE-REAL",1963), VVtemp[31], VVtemp[32]);
  si_do_deftype(3, ECL_SYM("POSITIVE-REAL",1965), VVtemp[33], VVtemp[34]);
  (void)0; /* No entry created for NEGATIVE-REAL-P */
  (void)0; /* No entry created for POSITIVE-REAL-P */
  (void)0; /* No entry created for NON-NEGATIVE-REAL-P */
  (void)0; /* No entry created for NON-POSITIVE-REAL-P */
  si_do_deftype(3, ECL_SYM("NEGATIVE-FLOAT",1970), VVtemp[35], VVtemp[36]);
  si_do_deftype(3, ECL_SYM("NON-POSITIVE-FLOAT",1972), VVtemp[37], VVtemp[38]);
  si_do_deftype(3, ECL_SYM("NON-NEGATIVE-FLOAT",1971), VVtemp[39], VVtemp[40]);
  si_do_deftype(3, ECL_SYM("POSITIVE-FLOAT",1973), VVtemp[41], VVtemp[42]);
  (void)0; /* No entry created for NEGATIVE-FLOAT-P */
  (void)0; /* No entry created for POSITIVE-FLOAT-P */
  (void)0; /* No entry created for NON-NEGATIVE-FLOAT-P */
  (void)0; /* No entry created for NON-POSITIVE-FLOAT-P */
  si_do_deftype(3, ECL_SYM("NEGATIVE-SHORT-FLOAT",1978), VVtemp[43], VVtemp[44]);
  si_do_deftype(3, ECL_SYM("NON-POSITIVE-SHORT-FLOAT",1980), VVtemp[45], VVtemp[46]);
  si_do_deftype(3, ECL_SYM("NON-NEGATIVE-SHORT-FLOAT",1979), VVtemp[47], VVtemp[48]);
  si_do_deftype(3, ECL_SYM("POSITIVE-SHORT-FLOAT",1981), VVtemp[49], VVtemp[50]);
  (void)0; /* No entry created for NEGATIVE-SHORT-FLOAT-P */
  (void)0; /* No entry created for POSITIVE-SHORT-FLOAT-P */
  (void)0; /* No entry created for NON-NEGATIVE-SHORT-FLOAT-P */
  (void)0; /* No entry created for NON-POSITIVE-SHORT-FLOAT-P */
  si_do_deftype(3, ECL_SYM("NEGATIVE-SINGLE-FLOAT",1986), VVtemp[51], VVtemp[52]);
  si_do_deftype(3, ECL_SYM("NON-POSITIVE-SINGLE-FLOAT",1988), VVtemp[53], VVtemp[54]);
  si_do_deftype(3, ECL_SYM("NON-NEGATIVE-SINGLE-FLOAT",1987), VVtemp[55], VVtemp[56]);
  si_do_deftype(3, ECL_SYM("POSITIVE-SINGLE-FLOAT",1989), VVtemp[57], VVtemp[58]);
  (void)0; /* No entry created for NEGATIVE-SINGLE-FLOAT-P */
  (void)0; /* No entry created for POSITIVE-SINGLE-FLOAT-P */
  (void)0; /* No entry created for NON-NEGATIVE-SINGLE-FLOAT-P */
  (void)0; /* No entry created for NON-POSITIVE-SINGLE-FLOAT-P */
  si_do_deftype(3, ECL_SYM("NEGATIVE-DOUBLE-FLOAT",1994), VVtemp[59], VVtemp[60]);
  si_do_deftype(3, ECL_SYM("NON-POSITIVE-DOUBLE-FLOAT",1996), VVtemp[61], VVtemp[62]);
  si_do_deftype(3, ECL_SYM("NON-NEGATIVE-DOUBLE-FLOAT",1995), VVtemp[63], VVtemp[64]);
  si_do_deftype(3, ECL_SYM("POSITIVE-DOUBLE-FLOAT",1997), VVtemp[65], VVtemp[66]);
  (void)0; /* No entry created for NEGATIVE-DOUBLE-FLOAT-P */
  (void)0; /* No entry created for POSITIVE-DOUBLE-FLOAT-P */
  (void)0; /* No entry created for NON-NEGATIVE-DOUBLE-FLOAT-P */
  (void)0; /* No entry created for NON-POSITIVE-DOUBLE-FLOAT-P */
  si_do_deftype(3, ECL_SYM("NEGATIVE-LONG-FLOAT",2002), VVtemp[67], VVtemp[68]);
  si_do_deftype(3, ECL_SYM("NON-POSITIVE-LONG-FLOAT",2004), VVtemp[69], VVtemp[70]);
  si_do_deftype(3, ECL_SYM("NON-NEGATIVE-LONG-FLOAT",2003), VVtemp[71], VVtemp[72]);
  si_do_deftype(3, ECL_SYM("POSITIVE-LONG-FLOAT",2005), VVtemp[73], VVtemp[74]);
  (void)0; /* No entry created for NEGATIVE-LONG-FLOAT-P */
  (void)0; /* No entry created for POSITIVE-LONG-FLOAT-P */
  (void)0; /* No entry created for NON-NEGATIVE-LONG-FLOAT-P */
  (void)0; /* No entry created for NON-POSITIVE-LONG-FLOAT-P */
}
