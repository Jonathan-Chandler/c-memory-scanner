/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CMP;CMPC-WT.LSP                                   */
#include <ecl/ecl-cmp.h>
#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/cmp/cmpc-wt.eclh"
/*      function definition for WT1                                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L1wt1(cl_object v1form)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (floatp(v1form)) { goto L1; }
  {
   cl_object v2;
   v2 = v1form;
   if (!(ECL_FIXNUMP(v2)||ECL_BIGNUMP(v2))) { goto L4; }
   ecl_princ(v1form,ecl_symbol_value(VV[0]));
   T1 = ecl_function_dispatch(cl_env_copy,VV[61])(1, ECL_SYM("INT",1401)) /*  REP-TYPE->LISP-TYPE */;
   if (Null(cl_typep(2, v1form, T1))) { goto L8; }
   T0 = VV[1];
   goto L7;
L8:;
   T1 = ecl_function_dispatch(cl_env_copy,VV[61])(1, ECL_SYM("UNSIGNED-INT",1421)) /*  REP-TYPE->LISP-TYPE */;
   if (Null(cl_typep(2, v1form, T1))) { goto L10; }
   T0 = VV[2];
   goto L7;
L10:;
   T1 = ecl_function_dispatch(cl_env_copy,VV[61])(1, ECL_SYM("LONG",1406)) /*  REP-TYPE->LISP-TYPE */;
   if (Null(cl_typep(2, v1form, T1))) { goto L12; }
   T0 = VV[3];
   goto L7;
L12:;
   T1 = ecl_function_dispatch(cl_env_copy,VV[61])(1, ECL_SYM("UNSIGNED-LONG",1422)) /*  REP-TYPE->LISP-TYPE */;
   if (Null(cl_typep(2, v1form, T1))) { goto L14; }
   T0 = VV[4];
   goto L7;
L14:;
   T1 = ecl_function_dispatch(cl_env_copy,VV[61])(1, ECL_SYM("LONG-LONG",1408)) /*  REP-TYPE->LISP-TYPE */;
   if (Null(cl_typep(2, v1form, T1))) { goto L16; }
   T0 = VV[5];
   goto L7;
L16:;
   T1 = ecl_function_dispatch(cl_env_copy,VV[61])(1, ECL_SYM("UNSIGNED-LONG-LONG",1423)) /*  REP-TYPE->LISP-TYPE */;
   if (Null(cl_typep(2, v1form, T1))) { goto L18; }
   T0 = VV[6];
   goto L7;
L18:;
   T0 = ecl_function_dispatch(cl_env_copy,VV[62])(3, ECL_SYM("FORMAT-CONTROL",1263), VV[7], v1form) /*  BABOON */;
L7:;
   value0 = ecl_princ(T0,ecl_symbol_value(VV[0]));
   cl_env_copy->nvalues = 1;
   return value0;
L4:;
   if (ECL_STRINGP(v2)) { goto L22; }
   if (!(ECL_CHARACTERP(v2))) { goto L20; }
   goto L21;
L22:;
L21:;
   value0 = ecl_princ(v1form,ecl_symbol_value(VV[0]));
   cl_env_copy->nvalues = 1;
   return value0;
L20:;
   if (Null(si_of_class_p(2, v2, VV[8]))) { goto L24; }
   value0 = ecl_function_dispatch(cl_env_copy,VV[63])(1, v1form) /*  WT-VAR */;
   return value0;
L24:;
   value0 = ecl_function_dispatch(cl_env_copy,VV[64])(1, v1form) /*  WT-LOC */;
   return value0;
  }
L1:;
  if (Null(si_float_infinity_p(v1form))) { goto L26; }
  if (!(ecl_minusp(v1form))) { goto L28; }
  value0 = cl_format(2, ecl_symbol_value(VV[0]), VV[9]);
  return value0;
L28:;
  value0 = cl_format(2, ecl_symbol_value(VV[0]), VV[10]);
  return value0;
L26:;
  if (!(ECL_SINGLE_FLOAT_P(v1form))) { goto L30; }
  value0 = cl_format(3, ecl_symbol_value(VV[0]), VV[11], v1form);
  return value0;
L30:;
  if (!(ECL_DOUBLE_FLOAT_P(v1form))) { goto L32; }
  value0 = cl_format(3, ecl_symbol_value(VV[0]), VV[12], v1form);
  return value0;
L32:;
  if (!(ECL_LONG_FLOAT_P(v1form))) { goto L34; }
  value0 = cl_format(3, ecl_symbol_value(VV[0]), VV[13], v1form);
  return value0;
L34:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for WT-H1                                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L2wt_h1(cl_object v1form)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  ecl_bds_bind(cl_env_copy,VV[0],ecl_symbol_value(VV[15])); /*  *COMPILER-OUTPUT1* */
  value0 = L1wt1(v1form);
  ecl_bds_unwind1(cl_env_copy);
  return value0;
 }
}
/*      function definition for WT                                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L3wt(cl_narg narg, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  cl_object v1forms;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  v1forms = cl_grab_rest_args(args);
  ecl_va_end(args);
  {
   cl_object v2;
   v2 = ecl_fdefinition(VV[14]);
   {
    cl_object v3;
    cl_object v4;
    v3 = ECL_NIL;
    {
     cl_object v5;
     v5 = v1forms;
     if (ecl_unlikely(!ECL_LISTP(v5))) FEtype_error_list(v5);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v4 = v5;
    }
L6:;
    if (!(ecl_endp(v4))) { goto L8; }
    goto L7;
L8:;
    v3 = _ecl_car(v4);
    {
     cl_object v5;
     v5 = _ecl_cdr(v4);
     if (ecl_unlikely(!ECL_LISTP(v5))) FEtype_error_list(v5);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v4 = v5;
    }
    ecl_function_dispatch(cl_env_copy,v2)(1, v3);
    goto L6;
L7:;
    value0 = v1forms;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      function definition for WT-H                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L4wt_h(cl_narg narg, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  cl_object v1forms;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  v1forms = cl_grab_rest_args(args);
  ecl_va_end(args);
  {
   cl_object v2;
   v2 = ecl_fdefinition(VV[16]);
   {
    cl_object v3;
    cl_object v4;
    v3 = ECL_NIL;
    {
     cl_object v5;
     v5 = v1forms;
     if (ecl_unlikely(!ECL_LISTP(v5))) FEtype_error_list(v5);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v4 = v5;
    }
L6:;
    if (!(ecl_endp(v4))) { goto L8; }
    goto L7;
L8:;
    v3 = _ecl_car(v4);
    {
     cl_object v5;
     v5 = _ecl_cdr(v4);
     if (ecl_unlikely(!ECL_LISTP(v5))) FEtype_error_list(v5);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v4 = v5;
    }
    ecl_function_dispatch(cl_env_copy,v2)(1, v3);
    goto L6;
L7:;
    value0 = v1forms;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      function definition for WT-NL-H                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L5wt_nl_h(cl_narg narg, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  cl_object v1forms;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  v1forms = cl_grab_rest_args(args);
  ecl_va_end(args);
  ecl_terpri(ecl_symbol_value(VV[15]));
  {
   cl_object v2;
   v2 = ecl_fdefinition(VV[16]);
   {
    cl_object v3;
    cl_object v4;
    v3 = ECL_NIL;
    {
     cl_object v5;
     v5 = v1forms;
     if (ecl_unlikely(!ECL_LISTP(v5))) FEtype_error_list(v5);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v4 = v5;
    }
L7:;
    if (!(ecl_endp(v4))) { goto L9; }
    goto L8;
L9:;
    v3 = _ecl_car(v4);
    {
     cl_object v5;
     v5 = _ecl_cdr(v4);
     if (ecl_unlikely(!ECL_LISTP(v5))) FEtype_error_list(v5);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v4 = v5;
    }
    ecl_function_dispatch(cl_env_copy,v2)(1, v3);
    goto L7;
L8:;
    value0 = v1forms;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      function definition for PRINC-H                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L6princ_h(cl_object v1form)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ecl_princ(v1form,ecl_symbol_value(VV[15]));
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for WT-NL                                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L7wt_nl(cl_narg narg, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  cl_object v1forms;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  v1forms = cl_grab_rest_args(args);
  ecl_va_end(args);
  L9wt_nl_indent();
  {
   cl_object v2;
   v2 = ecl_fdefinition(VV[14]);
   {
    cl_object v3;
    cl_object v4;
    v3 = ECL_NIL;
    {
     cl_object v5;
     v5 = v1forms;
     if (ecl_unlikely(!ECL_LISTP(v5))) FEtype_error_list(v5);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v4 = v5;
    }
L7:;
    if (!(ecl_endp(v4))) { goto L9; }
    goto L8;
L9:;
    v3 = _ecl_car(v4);
    {
     cl_object v5;
     v5 = _ecl_cdr(v4);
     if (ecl_unlikely(!ECL_LISTP(v5))) FEtype_error_list(v5);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v4 = v5;
    }
    ecl_function_dispatch(cl_env_copy,v2)(1, v3);
    goto L7;
L8:;
    value0 = v1forms;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      function definition for WT-NL1                                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L8wt_nl1(cl_narg narg, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  cl_object v1forms;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  v1forms = cl_grab_rest_args(args);
  ecl_va_end(args);
  L1wt1(CODE_CHAR(10));
  {
   cl_object v2;
   v2 = ecl_fdefinition(VV[14]);
   {
    cl_object v3;
    cl_object v4;
    v3 = ECL_NIL;
    {
     cl_object v5;
     v5 = v1forms;
     if (ecl_unlikely(!ECL_LISTP(v5))) FEtype_error_list(v5);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v4 = v5;
    }
L7:;
    if (!(ecl_endp(v4))) { goto L9; }
    goto L8;
L9:;
    v3 = _ecl_car(v4);
    {
     cl_object v5;
     v5 = _ecl_cdr(v4);
     if (ecl_unlikely(!ECL_LISTP(v5))) FEtype_error_list(v5);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v4 = v5;
    }
    ecl_function_dispatch(cl_env_copy,v2)(1, v3);
    goto L7;
L8:;
    value0 = v1forms;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      function definition for WT-NL-INDENT                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L9wt_nl_indent()
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v1;
   v1 = ecl_symbol_value(VV[24]);
   T1 = v1;
   {
    cl_fixnum v2;
    {
     cl_object v3;
     v3 = ((ecl_float_nan_p(ECL_SYM_VAL(cl_env_copy,VV[23])) || ecl_lowereq(ECL_SYM_VAL(cl_env_copy,VV[25]),ECL_SYM_VAL(cl_env_copy,VV[23])))?ECL_SYM_VAL(cl_env_copy,VV[25]):ECL_SYM_VAL(cl_env_copy,VV[23]));
     if (ecl_unlikely((ecl_fixnum(v3))>=(v1)->vector.dim))
           FEwrong_index(ECL_NIL,v1,-1,ecl_make_fixnum(ecl_fixnum(v3)),(v1)->vector.dim);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v2 = ecl_fixnum(v3);
    }
    T0 = ecl_aref_unsafe(T1,v2);
   }
  }
  value0 = L1wt1(T0);
  return value0;
 }
}
/*      function definition for WT-OPEN-BRACE                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L10wt_open_brace()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  L1wt1(CODE_CHAR(123));
  cl_set(VV[25],ecl_plus(ecl_symbol_value(VV[25]),ecl_make_fixnum(1)));
  value0 = ecl_symbol_value(VV[25]);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for WT-NL-OPEN-BRACE                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L11wt_nl_open_brace()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  L9wt_nl_indent();
  value0 = L10wt_open_brace();
  return value0;
 }
}
/*      function definition for WT-NL-CLOSE-MANY-BRACES               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L12wt_nl_close_many_braces(cl_object v1final_value)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2diff;
   v2diff = ecl_minus(ecl_symbol_value(VV[25]),v1final_value);
   if (!(ecl_minusp(v2diff))) { goto L2; }
   ecl_function_dispatch(cl_env_copy,VV[62])(2, ECL_SYM("FORMAT-CONTROL",1263), VV[29]) /*  BABOON */;
L2:;
   {
    cl_object v3i;
    cl_object v4;
    v3i = ecl_make_fixnum(0);
    v4 = v2diff;
L6:;
    if (!(ecl_greatereq(v3i,v4))) { goto L8; }
    goto L7;
L8:;
    L13wt_nl_close_brace();
    v3i = ecl_one_plus(v3i);
    goto L6;
L7:;
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      function definition for WT-NL-CLOSE-BRACE                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L13wt_nl_close_brace()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ecl_plusp(ecl_symbol_value(VV[25])))) { goto L1; }
  cl_set(VV[25],ecl_minus(ecl_symbol_value(VV[25]),ecl_make_fixnum(1)));
  L9wt_nl_indent();
  value0 = L1wt1(CODE_CHAR(125));
  return value0;
L1:;
  value0 = ecl_function_dispatch(cl_env_copy,VV[62])(2, ECL_SYM("FORMAT-CONTROL",1263), VV[29]) /*  BABOON */;
  return value0;
 }
}
/*      local function WITH-INDENTATION                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC14with_indentation(cl_object v1, cl_object v2)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   v3 = ecl_cdr(v1);
   value0 = cl_listX(3, ECL_SYM("LET",479), VV[32], v3);
   return value0;
  }
 }
}
/*      function definition for WT-GO                                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L15wt_go(cl_object v1label)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2;
   v2 = ECL_T;
   {
    cl_object v3;
    v3 = v1label;
    if (ecl_unlikely(ECL_ATOM(v3))) FEtype_error_cons(v3);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    T0 = v3;
   }
   (ECL_CONS_CDR(T0)=v2,T0);
  }
  v1label = ecl_car(v1label);
  value0 = L3wt(3, VV[34], v1label, VV[35]);
  return value0;
 }
}
/*      function definition for WT-LABEL                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L16wt_label(cl_object v1label)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(ecl_cdr(v1label))) { goto L1; }
  T0 = ecl_car(v1label);
  value0 = L8wt_nl1(3, VV[3], T0, VV[37]);
  return value0;
L1:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for WT-FILTERED-COMMENT                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L17wt_filtered_comment(cl_object v1text, cl_object v2stream, cl_object v3single_line)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(v3single_line)) { goto L2; }
  cl_fresh_line(1, v2stream);
  ecl_princ(VV[39],v2stream);
  goto L1;
L2:;
  cl_format(2, v2stream, VV[40]);
L1:;
  {
   cl_fixnum v4l;
   {
    cl_object v5;
    {
     cl_fixnum v6;
     v6 = ecl_length(v1text);
     v5 = ecl_make_integer((v6)-1);
    }
    {
     bool v6;
     v6 = ECL_FIXNUMP(v5);
     if (ecl_unlikely(!(v6)))
         FEwrong_type_argument(ECL_SYM("FIXNUM",374),v5);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
    }
    v4l = ecl_fixnum(v5);
   }
   {
    cl_fixnum v5n;
    v5n = 0;
    goto L12;
L11:;
    {
     cl_object v6c;
     cl_fixnum v7code;
     v6c = CODE_CHAR(ecl_char(v1text,v5n));
     v7code = ecl_fixnum(cl_char_code(v6c));
     if ((v6c)==(CODE_CHAR(10))) { goto L19; }
     if (!((v6c)==(CODE_CHAR(9)))) { goto L17; }
     goto L18;
L19:;
L18:;
     ecl_princ(v6c,v2stream);
     goto L14;
L17:;
     if ((v7code)<(32)) { goto L23; }
     if (!((v7code)>(127))) { goto L21; }
     goto L22;
L23:;
L22:;
     cl_format(3, v2stream, VV[41], ecl_make_fixnum(v7code));
     goto L14;
L21:;
     if (!(ecl_char_code(v6c)==ecl_char_code(CODE_CHAR(42)))) { goto L25; }
     T0 = ecl_make_integer((v5n)+1);
     T1 = ecl_elt(v1text,ecl_to_size(T0));
     if (!((ecl_char_code(T1))==((ecl_character)(47)))) { goto L25; }
     ecl_princ_char((ecl_character)(92),v2stream);
     goto L14;
L25:;
     ecl_princ(v6c,v2stream);
    }
L14:;
    v5n = (v5n)+1;
L12:;
    if (!((v5n)<(v4l))) { goto L30; }
    goto L11;
L30:;
   }
   {
    ecl_character v5;
    v5 = ecl_char(v1text,v4l);
    ecl_princ(CODE_CHAR(v5),v2stream);
   }
  }
  value0 = cl_format(2, v2stream, VV[42]);
  return value0;
 }
}
/*      function definition for DO-WT-COMMENT                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L18do_wt_comment(cl_object v1message_or_format, cl_object v2args, cl_object v3single_line_p)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ECL_SYMBOLP(v1message_or_format))) { goto L4; }
  if (Null(cl_symbol_package(v1message_or_format))) { goto L1; }
  goto L2;
L4:;
  goto L2;
L2:;
  if (!(ECL_STRINGP(v1message_or_format))) { goto L7; }
  if (Null(v2args)) { goto L9; }
  T1 = (ECL_SYM("FORMAT",389)->symbol.gfdef);
  T0 = cl_apply(4, T1, ECL_NIL, v1message_or_format, v2args);
  goto L6;
L9:;
  T0 = v1message_or_format;
  goto L6;
L7:;
  T0 = cl_princ_to_string(v1message_or_format);
L6:;
  value0 = L17wt_filtered_comment(T0, ecl_symbol_value(VV[0]), v3single_line_p);
  return value0;
L1:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for WT-COMMENT                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L19wt_comment(cl_narg narg, cl_object v1message, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2extra;
  ecl_va_list args; ecl_va_start(args,v1message,narg,1);
  v2extra = cl_grab_rest_args(args);
  ecl_va_end(args);
  value0 = L18do_wt_comment(v1message, v2extra, ECL_NIL);
  return value0;
 }
}
/*      function definition for WT-COMMENT-NL                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L20wt_comment_nl(cl_narg narg, cl_object v1message, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2extra;
  ecl_va_list args; ecl_va_start(args,v1message,narg,1);
  v2extra = cl_grab_rest_args(args);
  ecl_va_end(args);
  value0 = L18do_wt_comment(v1message, v2extra, ECL_T);
  return value0;
 }
}
/*      function definition for ENCODE-STRING                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L21encode_string(cl_object v1string, cl_object v2format)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3output;
   cl_object v4stream;
   {
    cl_fixnum v5;
    v5 = ecl_length(v1string);
    T0 = ecl_times(_ecl_static_0,ecl_make_fixnum(v5));
    T1 = ecl_round1(T0);
    v3output = si_make_pure_array(ECL_SYM("BASE-CHAR",122), T1, ECL_T, ecl_make_fixnum(0), ECL_NIL, ecl_make_fixnum(0));
   }
   v4stream = si_make_sequence_output_stream(3, v3output, ECL_SYM("EXTERNAL-FORMAT",1258), v2format);
   cl_write_string(2, v1string, v4stream);
   value0 = v3output;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for WT-FILTERED-DATA                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L22wt_filtered_data(cl_narg narg, cl_object v1string, cl_object v2stream, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 {
  cl_object v3one_liner;
  cl_object v4external_format;
  ecl_va_list args; ecl_va_start(args,v2stream,narg,2);
  {
   cl_object keyvars[4];
   cl_parse_key(args,2,L22wt_filtered_datakeys,keyvars,NULL,FALSE);
   ecl_va_end(args);
   v3one_liner = keyvars[0];
   if (Null(keyvars[3])) {
    v4external_format = ECL_SYM("UTF-8",1737);
   } else {
    v4external_format = keyvars[1];
   }
  }
  v1string = L21encode_string(v1string, v4external_format);
  {
   cl_fixnum v5;
   cl_object v6wt_data_column;
   v5 = ecl_length(v1string);
   v6wt_data_column = ecl_make_fixnum(80);
   cl_set(VV[47],ecl_plus(ecl_symbol_value(VV[47]),ecl_make_fixnum(v5)));
   if (Null(v3one_liner)) { goto L10; }
   T0 = VV[49];
   goto L9;
L10:;
   T0 = VV[50];
L9:;
   cl_format(2, v2stream, T0);
   {
    cl_object v7i;
    v7i = ecl_make_fixnum(0);
    goto L15;
L14:;
    v6wt_data_column = ecl_minus(v6wt_data_column,ecl_make_fixnum(1));
    if (!(ecl_lower(v6wt_data_column,ecl_make_fixnum(0)))) { goto L19; }
    cl_format(2, v2stream, VV[51]);
    v6wt_data_column = ecl_make_fixnum(79);
L19:;
    {
     cl_object v8x;
     {
      cl_object v9;
      v9 = v1string;
      T0 = v9;
      {
       cl_fixnum v10;
       {
        cl_object v11;
        v11 = v7i;
        if (ecl_unlikely((ecl_fixnum(v11))>=(v9)->vector.dim))
           FEwrong_index(ECL_NIL,v9,-1,ecl_make_fixnum(ecl_fixnum(v11)),(v9)->vector.dim);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v10 = ecl_fixnum(v11);
       }
       v8x = ecl_aref_unsafe(T0,v10);
      }
     }
     T0 = cl_char_code(v8x);
     if ((ecl_to_fixnum(T0))<(32)) { goto L32; }
     T0 = cl_char_code(v8x);
     if (!((ecl_to_fixnum(T0))>(127))) { goto L30; }
     goto L31;
L32:;
L31:;
     if (!(((v8x)==ECL_CODE_CHAR((ecl_character)(10))))) { goto L34; }
     ecl_princ(VV[52],v2stream);
     goto L23;
L34:;
     if (!(((v8x)==ECL_CODE_CHAR((ecl_character)(9))))) { goto L36; }
     ecl_princ(VV[53],v2stream);
     goto L23;
L36:;
     T0 = cl_char_code(v8x);
     cl_format(3, v2stream, VV[54], T0);
     goto L23;
L30:;
     if (!(ecl_char_code(v8x)==ecl_char_code(CODE_CHAR(92)))) { goto L38; }
     ecl_princ(VV[55],v2stream);
     goto L23;
L38:;
     if (!(ecl_char_code(v8x)==ecl_char_code(CODE_CHAR(34)))) { goto L40; }
     ecl_princ(VV[56],v2stream);
     goto L23;
L40:;
     ecl_princ(v8x,v2stream);
    }
L23:;
    v7i = ecl_one_plus(v7i);
L15:;
    if (!(ecl_lower(v7i,ecl_make_fixnum(v5)))) { goto L44; }
    goto L14;
L44:;
   }
   ecl_princ_char((ecl_character)(34),v2stream);
   value0 = v1string;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for C-FILTERED-STRING                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L23c_filtered_string(volatile cl_narg narg, cl_object volatile v1string, ...)
{
 cl_object T0;
 cl_object volatile env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object volatile v2args;
  ecl_va_list args; ecl_va_start(args,v1string,narg,1);
  v2args = cl_grab_rest_args(args);
  ecl_va_end(args);
  {
   volatile cl_object v3aux_stream;
   v3aux_stream = cl_make_string_output_stream(0);
   {
    volatile bool unwinding = FALSE;
    cl_index v4=ECL_STACK_INDEX(cl_env_copy),v5;
    ecl_frame_ptr next_fr;
    ecl_frs_push(cl_env_copy,ECL_PROTECT_TAG);
    if (__ecl_frs_push_result) {
      unwinding = TRUE; next_fr=cl_env_copy->nlj_fr;
    } else {
    T0 = ecl_fdefinition(VV[57]);
    cl_apply(6, T0, v1string, v3aux_stream, VV[58], ECL_T, v2args);
    cl_env_copy->values[0] = cl_get_output_stream_string(v3aux_stream);
    }
    ecl_frs_pop(cl_env_copy);
    v5=ecl_stack_push_values(cl_env_copy);
    cl_close(1, v3aux_stream);
    ecl_stack_pop_values(cl_env_copy,v5);
    if (unwinding) ecl_unwind(cl_env_copy,next_fr);
    ECL_STACK_SET_INDEX(cl_env_copy,v4);
    return cl_env_copy->values[0];
   }
  }
 }
}

#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/cmp/cmpc-wt.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclmVtIkfb7_fUS6lq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CMP;CMPC-WT.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclmVtIkfb7_fUS6lq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  ecl_cmp_defun(VV[60]);                          /*  WT1             */
  ecl_cmp_defun(VV[65]);                          /*  WT-H1           */
  ecl_cmp_defun(VV[66]);                          /*  WT              */
  ecl_cmp_defun(VV[67]);                          /*  WT-H            */
  ecl_cmp_defun(VV[68]);                          /*  WT-NL-H         */
  ecl_cmp_defun(VV[69]);                          /*  PRINC-H         */
  ecl_cmp_defun(VV[70]);                          /*  WT-NL           */
  ecl_cmp_defun(VV[71]);                          /*  WT-NL1          */
  si_Xmake_special(VV[23]);
  if (ecl_boundp(cl_env_copy,VV[23])) { goto L35; }
  cl_set(VV[23],ecl_make_fixnum(10));
L35:;
  si_Xmake_special(VV[24]);
  if (ecl_boundp(cl_env_copy,VV[24])) { goto L42; }
  cl_set(VV[24],VVtemp[1]);
L42:;
  ecl_cmp_defun(VV[72]);                          /*  WT-NL-INDENT    */
  ecl_cmp_defun(VV[73]);                          /*  WT-OPEN-BRACE   */
  ecl_cmp_defun(VV[74]);                          /*  WT-NL-OPEN-BRACE */
  ecl_cmp_defun(VV[75]);                          /*  WT-NL-CLOSE-MANY-BRACES */
  ecl_cmp_defun(VV[76]);                          /*  WT-NL-CLOSE-BRACE */
  ecl_cmp_defmacro(VV[77]);                       /*  WITH-INDENTATION */
  ecl_cmp_defun(VV[78]);                          /*  WT-GO           */
  ecl_cmp_defun(VV[79]);                          /*  WT-LABEL        */
  ecl_cmp_defun(VV[80]);                          /*  WT-FILTERED-COMMENT */
  ecl_cmp_defun(VV[81]);                          /*  DO-WT-COMMENT   */
  ecl_cmp_defun(VV[82]);                          /*  WT-COMMENT      */
  ecl_cmp_defun(VV[83]);                          /*  WT-COMMENT-NL   */
  si_Xmake_special(VV[47]);
  if (ecl_boundp(cl_env_copy,VV[47])) { goto L95; }
  cl_set(VV[47],ecl_make_fixnum(0));
L95:;
  ecl_cmp_defun(VV[84]);                          /*  ENCODE-STRING   */
  ecl_cmp_defun(VV[85]);                          /*  WT-FILTERED-DATA */
  ecl_cmp_defun(VV[88]);                          /*  C-FILTERED-STRING */
}
