/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CMP;CMPCALL.LSP                                   */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/cmp/cmpcall.eclh"
/*      function definition for UNOPTIMIZED-LONG-CALL                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L1unoptimized_long_call(cl_object v1fun, cl_object v2arguments)
{
 cl_object T0, T1, T2, T3, T4, T5, T6;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, v4, v1fun);
   T1 = ecl_list1(T0);
   {
    cl_object v5i;
    cl_object v6;
    v5i = ECL_NIL;
    {
     cl_object v7;
     v7 = v2arguments;
     if (ecl_unlikely(!ECL_LISTP(v7))) FEtype_error_list(v7);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v6 = v7;
    }
    {
     cl_object v7;
     cl_object v8;
     v7 = ecl_list1(ECL_NIL);
     v8 = v7;
L10:;
     if (!(ecl_endp(v6))) { goto L12; }
     goto L11;
L12:;
     v5i = _ecl_car(v6);
     {
      cl_object v9;
      v9 = _ecl_cdr(v6);
      if (ecl_unlikely(!ECL_LISTP(v9))) FEtype_error_list(v9);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v6 = v9;
     }
     {
      cl_object v9;
      v9 = v8;
      if (ecl_unlikely(ECL_ATOM(v9))) FEtype_error_cons(v9);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      T3 = v9;
     }
     T4 = cl_list(3, VV[1], v3, v5i);
     v8 = ecl_list1(T4);
     (ECL_CONS_CDR(T3)=v8,T3);
     goto L10;
L11:;
     T2 = ecl_cdr(v7);
     goto L3;
    }
   }
L3:;
   T3 = cl_list(3, ECL_SYM("APPLY-FROM-STACK-FRAME",1670), v3, v4);
   T4 = ecl_list1(T3);
   T5 = ecl_append(T2,T4);
   T6 = cl_listX(3, ECL_SYM("LET",479), T1, T5);
   value0 = cl_list(3, VV[0], v3, T6);
   return value0;
  }
 }
}
/*      function definition for UNOPTIMIZED-FUNCALL                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L2unoptimized_funcall(cl_object v1fun, cl_object v2arguments)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_fixnum v3l;
   v3l = ecl_length(v2arguments);
   if (!((v3l)<=(63))) { goto L2; }
   T0 = ecl_function_dispatch(cl_env_copy,VV[67])(1, v1fun) /*  C1EXPR */;
   T1 = ecl_function_dispatch(cl_env_copy,VV[68])(1, v2arguments) /*  C1ARGS* */;
   value0 = ecl_function_dispatch(cl_env_copy,VV[69])(8, ECL_SYM("FUNCALL",396), VV[3], ECL_T, VV[4], ECL_T, VV[5], T0, T1) /*  MAKE-C1FORM* */;
   return value0;
L2:;
   value0 = L1unoptimized_long_call(v1fun, v2arguments);
   return value0;
  }
 }
}
/*      function definition for MACROEXPAND-LAMBDA-BLOCK              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L3macroexpand_lambda_block(cl_object v1lambda)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_car(v1lambda);
  if (!((T0)==(ECL_SYM("LAMBDA-BLOCK",1367)))) { goto L1; }
  value0 = cl_macroexpand_1(1, v1lambda);
  return value0;
L1:;
  value0 = v1lambda;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for C1FUNCALL                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L4c1funcall(cl_object v1args)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  ecl_function_dispatch(cl_env_copy,VV[72])(3, ECL_SYM("FUNCALL",396), v1args, ecl_make_fixnum(1)) /*  CHECK-ARGS-NUMBER */;
  {
   cl_object v2;
   cl_object v3;
   cl_object v4fun;
   cl_object v5fd;
   v2 = ecl_car(v1args);
   v3 = ecl_cdr(v1args);
   v4fun = v2;
   v5fd = ECL_NIL;
   if (!(ECL_CONSP(v4fun))) { goto L6; }
   {
    cl_object v6;
    v6 = ecl_car(v4fun);
    if (!((v6)==(ECL_SYM("LAMBDA",454)))) { goto L13; }
    goto L10;
    goto L11;
L13:;
    goto L11;
L11:;
    if (!((v6)==(ECL_SYM("LAMBDA-BLOCK",1367)))) { goto L6; }
    goto L7;
L10:;
   }
L7:;
   T0 = L3macroexpand_lambda_block(v4fun);
   value0 = ecl_function_dispatch(cl_env_copy,VV[73])(3, T0, v3, ECL_NIL) /*  OPTIMIZE-FUNCALL/APPLY-LAMBDA */;
   return value0;
L6:;
   if (!(ECL_ATOM(v4fun))) { goto L16; }
   value0 = L2unoptimized_funcall(v4fun, v3);
   return value0;
L16:;
   {
    cl_object v6name;
    v6name = ecl_car(v4fun);
    if (!(ECL_SYMBOLP(v6name))) { goto L23; }
    if ((v6name)==(ECL_SYM("THE",858))) { goto L23; }
    v5fd = ecl_function_dispatch(cl_env_copy,VV[74])(1, v6name) /*  CMP-MACRO-FUNCTION */;
    goto L21;
L23:;
    v5fd = ECL_NIL;
    goto L21;
L21:;
    if (Null(v5fd)) { goto L18; }
   }
   T0 = ecl_function_dispatch(cl_env_copy,VV[75])(2, v5fd, v4fun) /*  CMP-EXPAND-MACRO */;
   v1args = CONS(T0,v3);
   goto TTL;
L18:;
   T0 = ecl_car(v4fun);
   if ((T0)==(ECL_SYM("FUNCTION",398))) { goto L28; }
   value0 = L2unoptimized_funcall(v4fun, v3);
   return value0;
L28:;
   v4fun = ecl_cadr(v4fun);
   if (Null(si_valid_function_name_p(v4fun))) { goto L30; }
   value0 = ecl_function_dispatch(cl_env_copy,VV[76])(3, v4fun, v3, ECL_NIL) /*  C1CALL */;
   return value0;
L30:;
   if (!(ECL_CONSP(v4fun))) { goto L33; }
   {
    cl_object v6;
    v6 = ecl_car(v4fun);
    if (!((v6)==(ECL_SYM("LAMBDA",454)))) { goto L40; }
    goto L37;
    goto L38;
L40:;
    goto L38;
L38:;
    if (!((v6)==(ECL_SYM("LAMBDA-BLOCK",1367)))) { goto L33; }
    goto L34;
L37:;
   }
L34:;
   T0 = L3macroexpand_lambda_block(v4fun);
   value0 = ecl_function_dispatch(cl_env_copy,VV[73])(3, T0, v3, ECL_NIL) /*  OPTIMIZE-FUNCALL/APPLY-LAMBDA */;
   return value0;
L33:;
   value0 = ecl_function_dispatch(cl_env_copy,VV[77])(2, VV[10], v4fun) /*  CMPERR */;
   return value0;
  }
 }
}
/*      function definition for C2FUNCALL                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L5c2funcall(cl_object v1c1form, cl_object v2form, cl_object v3args)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v4form_type;
   cl_object v5function_p;
   cl_object v6loc;
   ecl_bds_bind(cl_env_copy,VV[12],ecl_make_fixnum(0)); /*  *INLINE-BLOCKS* */
   ecl_bds_push(cl_env_copy,VV[13]);              /*  *TEMP*          */
   v4form_type = ecl_function_dispatch(cl_env_copy,VV[79])(1, v2form) /*  C1FORM-PRIMARY-TYPE */;
   if (Null(cl_subtypep(2, v4form_type, ECL_SYM("FUNCTION",398)))) { goto L4; }
   v5function_p = ecl_function_dispatch(cl_env_copy,VV[80])(0) /*  POLICY-ASSUME-RIGHT-TYPE */;
   goto L2;
L4:;
   v5function_p = ECL_NIL;
   goto L2;
L2:;
   v6loc = L11maybe_save_value(2, v2form, v3args);
   T0 = ecl_function_dispatch(cl_env_copy,VV[81])(1, v3args) /*  INLINE-ARGS */;
   T1 = L10call_unknown_global_loc(4, ECL_NIL, v6loc, T0, v5function_p);
   ecl_function_dispatch(cl_env_copy,VV[82])(1, T1) /*  UNWIND-EXIT   */;
   value0 = ecl_function_dispatch(cl_env_copy,VV[83])(0) /*  CLOSE-INLINE-BLOCKS */;
   ecl_bds_unwind1(cl_env_copy);
   ecl_bds_unwind1(cl_env_copy);
   return value0;
  }
 }
}
/*      function definition for C2CALL-GLOBAL                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L6c2call_global(cl_object v1c1form, cl_object v2fname, cl_object v3args)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v4fun;
   {
    cl_object v5;
    cl_object v6;
    v5 = ecl_symbol_value(VV[15]);
    v6 = ecl_function_dispatch(cl_env_copy,VV[85])(2, v5, ecl_make_fixnum(0)) /*  MAKE-SEQ-ITERATOR */;
L4:;
    if ((v6)!=ECL_NIL) { goto L6; }
    v4fun = ECL_NIL;
    goto L1;
L6:;
    {
     cl_object v7;
     v7 = ecl_function_dispatch(cl_env_copy,VV[86])(2, v5, v6) /*  SEQ-ITERATOR-REF */;
     T0 = ecl_function_dispatch(cl_env_copy,VV[87])(1, v7) /*  FUN-NAME */;
     if (Null(ecl_function_dispatch(cl_env_copy,VV[88])(2, v2fname, T0) /*  SAME-FNAME-P */)) { goto L8; }
     v4fun = v7;
     goto L1;
    }
L8:;
    v6 = ecl_function_dispatch(cl_env_copy,VV[89])(2, v5, v6) /*  SEQ-ITERATOR-NEXT */;
    goto L4;
   }
L1:;
   if (Null(v4fun)) { goto L14; }
   if (Null(ecl_function_dispatch(cl_env_copy,VV[90])(2, v4fun, v3args) /*  C2TRY-TAIL-RECURSIVE-CALL */)) { goto L14; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L14:;
   ecl_bds_bind(cl_env_copy,VV[12],ecl_make_fixnum(0)); /*  *INLINE-BLOCKS* */
   ecl_bds_push(cl_env_copy,VV[13]);              /*  *TEMP*          */
   T0 = ecl_function_dispatch(cl_env_copy,VV[79])(1, v1c1form) /*  C1FORM-PRIMARY-TYPE */;
   T1 = ecl_function_dispatch(cl_env_copy,VV[91])(1, ecl_symbol_value(VV[16])) /*  LOC-TYPE */;
   T2 = L7call_global_loc(v2fname, v4fun, v3args, T0, T1);
   ecl_function_dispatch(cl_env_copy,VV[82])(1, T2) /*  UNWIND-EXIT   */;
   value0 = ecl_function_dispatch(cl_env_copy,VV[83])(0) /*  CLOSE-INLINE-BLOCKS */;
   ecl_bds_unwind1(cl_env_copy);
   ecl_bds_unwind1(cl_env_copy);
   return value0;
  }
 }
}
/*      function definition for CALL-GLOBAL-LOC                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L7call_global_loc(cl_object v1fname, cl_object v2fun, cl_object v3args, cl_object v4return_type, cl_object v5expected_type)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (v2fun==ECL_NIL) { goto L4; }
  if (Null(ecl_function_dispatch(cl_env_copy,VV[93])(1, v2fun) /*  FUN-GLOBAL */)) { goto L1; }
  goto L3;
L4:;
L3:;
  if ((ecl_function_dispatch(cl_env_copy,VV[94])(1, v1fname) /*  INLINE-POSSIBLE */)!=ECL_NIL) { goto L1; }
  T0 = ecl_function_dispatch(cl_env_copy,VV[81])(1, v3args) /*  INLINE-ARGS */;
  value0 = L10call_unknown_global_loc(3, v1fname, ECL_NIL, T0);
  return value0;
L1:;
  v3args = ecl_function_dispatch(cl_env_copy,VV[81])(1, v3args) /*  INLINE-ARGS */;
  {
   cl_object v6inline_loc;
   T0 = ecl_function_dispatch(cl_env_copy,VV[95])(2, v4return_type, v5expected_type) /*  TYPE-AND */;
   v6inline_loc = ecl_function_dispatch(cl_env_copy,VV[96])(3, v1fname, T0, v3args) /*  APPLY-INLINER */;
   if (Null(v6inline_loc)) { goto L8; }
   value0 = v6inline_loc;
   cl_env_copy->nvalues = 1;
   return value0;
  }
L8:;
  if (Null(ecl_function_dispatch(cl_env_copy,VV[97])(0) /*  POLICY-USE-DIRECT-C-CALL */)) { goto L11; }
  if ((ecl_function_dispatch(cl_env_copy,VV[98])(1, v2fun) /*  FUN-P  */)!=ECL_NIL) { goto L14; }
  if (!(v2fun==ECL_NIL)) { goto L11; }
  {
   cl_object v6;
   cl_object v7;
   v6 = ecl_symbol_value(VV[15]);
   v7 = ecl_function_dispatch(cl_env_copy,VV[85])(2, v6, ecl_make_fixnum(0)) /*  MAKE-SEQ-ITERATOR */;
L20:;
   if ((v7)!=ECL_NIL) { goto L22; }
   v2fun = ECL_NIL;
   goto L17;
L22:;
   {
    cl_object v8;
    v8 = ecl_function_dispatch(cl_env_copy,VV[86])(2, v6, v7) /*  SEQ-ITERATOR-REF */;
    T0 = ecl_function_dispatch(cl_env_copy,VV[87])(1, v8) /*  FUN-NAME */;
    if (Null(ecl_function_dispatch(cl_env_copy,VV[88])(2, v1fname, T0) /*  SAME-FNAME-P */)) { goto L24; }
    v2fun = v8;
    goto L17;
   }
L24:;
   v7 = ecl_function_dispatch(cl_env_copy,VV[89])(2, v6, v7) /*  SEQ-ITERATOR-NEXT */;
   goto L20;
  }
L17:;
  if (Null(v2fun)) { goto L11; }
  goto L12;
L14:;
L12:;
  value0 = L8call_loc(v1fname, v2fun, v3args, v4return_type);
  return value0;
L11:;
  if (ECL_SYMBOLP(v1fname)) { goto L30; }
  value0 = L10call_unknown_global_loc(3, v1fname, ECL_NIL, v3args);
  return value0;
L30:;
  {
   cl_object v7;                                  /*  FOUND           */
   cl_object v8;                                  /*  FD              */
   cl_object v9;                                  /*  MINARG          */
   cl_object v10;                                 /*  MAXARG          */
   value0 = si_mangle_name(2, v1fname, ECL_T);
   {
    const int v11 = cl_env_copy->nvalues;
    v7 = value0;
    cl_object v12;
    v12 = (v11<=1)? ECL_NIL : cl_env_copy->values[1];
    v8 = v12;
    v12 = (v11<=2)? ECL_NIL : cl_env_copy->values[2];
    v9 = v12;
    v12 = (v11<=3)? ECL_NIL : cl_env_copy->values[3];
    v10 = v12;
   }
   if (Null(v7)) { goto L32; }
   value0 = L9call_exported_function_loc(v1fname, v3args, v8, v9, v10, ECL_T, v4return_type);
   return value0;
  }
L32:;
  if (Null(ecl_function_dispatch(cl_env_copy,VV[97])(0) /*  POLICY-USE-DIRECT-C-CALL */)) { goto L35; }
  {
   cl_object v6fd;
   v6fd = si_get_sysprop(v1fname, VV[18]);
   if (Null(v6fd)) { goto L35; }
   {
    cl_object v8;                                 /*  MINARG          */
    cl_object v9;                                 /*  MAXARG          */
    cl_object v10;                                /*  FOUND           */
    value0 = ecl_function_dispatch(cl_env_copy,VV[99])(1, v1fname) /*  GET-PROCLAIMED-NARG */;
    {
     const int v11 = cl_env_copy->nvalues;
     v8 = value0;
     cl_object v12;
     v12 = (v11<=1)? ECL_NIL : cl_env_copy->values[1];
     v9 = v12;
     v12 = (v11<=2)? ECL_NIL : cl_env_copy->values[2];
     v10 = v12;
    }
    if ((v10)!=ECL_NIL) { goto L40; }
    ecl_function_dispatch(cl_env_copy,VV[77])(3, VV[19], v1fname, v6fd) /*  CMPERR */;
L40:;
    T0 = si_mangle_name(1, v1fname);
    value0 = L9call_exported_function_loc(v1fname, v3args, v6fd, v8, v9, T0, v4return_type);
    return value0;
   }
  }
L35:;
  value0 = L10call_unknown_global_loc(3, v1fname, ECL_NIL, v3args);
  return value0;
 }
}
/*      function definition for CALL-LOC                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L8call_loc(cl_object v1fname, cl_object v2fun, cl_object v3args, cl_object v4type)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,VV[101])(1, v3args) /*  COERCE-LOCS */;
  value0 = cl_list(4, VV[21], v2fun, T0, v4type);
  return value0;
 }
}
/*      function definition for CALL-EXPORTED-FUNCTION-LOC            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L9call_exported_function_loc(cl_object v1fname, cl_object v2args, cl_object v3fun_c_name, cl_object v4minarg, cl_object v5maxarg, cl_object v6in_core, cl_object v7return_type)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if ((v6in_core)!=ECL_NIL) { goto L1; }
  {
   cl_object v9;                                  /*  DECLARED        */
   value0 = cl_gethash(2, v3fun_c_name, ecl_symbol_value(VV[23]));
   {
    v9 = cl_env_copy->values[1];
   }
   if ((v9)!=ECL_NIL) { goto L1; }
   if (!(ecl_number_equalp(v5maxarg,v4minarg))) { goto L6; }
   ecl_function_dispatch(cl_env_copy,VV[103])(3, VV[24], v3fun_c_name, VV[25]) /*  WT-NL-H */;
   {
    cl_object v10i;
    v10i = ecl_make_fixnum(0);
    goto L12;
L11:;
    if (!(ecl_greater(v10i,ecl_make_fixnum(0)))) { goto L14; }
    ecl_function_dispatch(cl_env_copy,VV[104])(1, VV[26]) /*  WT-H1   */;
L14:;
    ecl_function_dispatch(cl_env_copy,VV[104])(1, VV[27]) /*  WT-H1   */;
    v10i = ecl_one_plus(v10i);
L12:;
    if (!(ecl_lower(v10i,v5maxarg))) { goto L19; }
    goto L11;
L19:;
   }
   ecl_function_dispatch(cl_env_copy,VV[104])(1, VV[28]) /*  WT-H1    */;
   goto L5;
L6:;
   ecl_function_dispatch(cl_env_copy,VV[103])(3, VV[24], v3fun_c_name, VV[29]) /*  WT-NL-H */;
   {
    cl_object v10;
    v10 = ((ecl_float_nan_p(ecl_make_fixnum(63)) || ecl_lowereq(v4minarg,ecl_make_fixnum(63)))?v4minarg:ecl_make_fixnum(63));
    {
     cl_object v11i;
     v11i = ecl_make_fixnum(0);
     goto L26;
L25:;
     ecl_function_dispatch(cl_env_copy,VV[104])(1, VV[30]) /*  WT-H1  */;
     v11i = ecl_one_plus(v11i);
L26:;
     if (!(ecl_lower(v11i,v10))) { goto L31; }
     goto L25;
L31:;
    }
   }
   ecl_function_dispatch(cl_env_copy,VV[104])(1, VV[31]) /*  WT-H1    */;
L5:;
   si_hash_set(v3fun_c_name, ecl_symbol_value(VV[23]), ecl_make_fixnum(1));
  }
L1:;
  {
   cl_object v8fun;
   v8fun = ecl_function_dispatch(cl_env_copy,VV[105])(12, ECL_SYM("NAME",1300), v1fname, VV[32], ECL_T, VV[33], v3fun_c_name, VV[34], ECL_NIL, VV[35], v4minarg, VV[36], v5maxarg) /*  MAKE-FUN */;
   value0 = L8call_loc(v1fname, v8fun, v2args, v7return_type);
   return value0;
  }
 }
}
/*      function definition for CALL-UNKNOWN-GLOBAL-LOC               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L10call_unknown_global_loc(cl_narg narg, cl_object v1fname, cl_object v2loc, cl_object v3args, ...)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<3)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>4)) FEwrong_num_arguments_anonym();
 {
  cl_object v4function_p;
  va_list args; va_start(args,v3args);
  {
   int i = 3;
   if (i >= narg) {
    v4function_p = ECL_NIL;
   } else {
    i++;
    v4function_p = va_arg(args,cl_object);
   }
  }
  va_end(args);
  if ((v2loc)!=ECL_NIL) { goto L2; }
  if (!(ECL_SYMBOLP(v1fname))) { goto L4; }
  T0 = cl_symbol_package(v1fname);
  T1 = cl_find_package(VV[38]);
  if ((T0)==(T1)) { goto L4; }
  v2loc = ecl_function_dispatch(cl_env_copy,VV[107])(1, v1fname) /*  ADD-SYMBOL */;
  v4function_p = ECL_NIL;
  goto L2;
L4:;
  v2loc = cl_list(2, ECL_SYM("FDEFINITION",351), v1fname);
  v4function_p = ECL_T;
L2:;
  T0 = ecl_function_dispatch(cl_env_copy,VV[101])(1, v3args) /*  COERCE-LOCS */;
  value0 = cl_list(5, VV[39], v2loc, T0, v1fname, v4function_p);
  return value0;
 }
}
/*      function definition for MAYBE-SAVE-VALUE                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L11maybe_save_value(cl_narg narg, cl_object v1value, ...)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2other_forms;
  cl_object v3other_forms_flag;
  va_list args; va_start(args,v1value);
  {
   int i = 1;
   if (i >= narg) {
    v2other_forms = ECL_NIL;
    v3other_forms_flag = ECL_NIL;
   } else {
    i++;
    v2other_forms = va_arg(args,cl_object);
    v3other_forms_flag = ECL_T;
   }
  }
  va_end(args);
  {
   cl_object v4name;
   v4name = ecl_function_dispatch(cl_env_copy,VV[109])(1, v1value) /*  C1FORM-NAME */;
   if (!((v4name)==(ECL_SYM("LOCATION",1842)))) { goto L3; }
   T0 = ecl_function_dispatch(cl_env_copy,VV[110])(1, v1value) /*  C1FORM-ARGS */;
   value0 = ecl_car(T0);
   cl_env_copy->nvalues = 1;
   return value0;
L3:;
   if (!((v4name)==(VV[41]))) { goto L5; }
   if (Null(v3other_forms_flag)) { goto L5; }
   T0 = ecl_function_dispatch(cl_env_copy,VV[110])(1, v1value) /*  C1FORM-ARGS */;
   T1 = ecl_car(T0);
   if ((ecl_function_dispatch(cl_env_copy,VV[111])(2, T1, v2other_forms) /*  VAR-CHANGED-IN-FORM-LIST */)!=ECL_NIL) { goto L5; }
   T0 = ecl_function_dispatch(cl_env_copy,VV[110])(1, v1value) /*  C1FORM-ARGS */;
   value0 = ecl_car(T0);
   cl_env_copy->nvalues = 1;
   return value0;
L5:;
   {
    cl_object v5temp;
    v5temp = ecl_function_dispatch(cl_env_copy,VV[112])(0) /*  MAKE-TEMP-VAR */;
    ecl_bds_bind(cl_env_copy,VV[16],v5temp);      /*  *DESTINATION*   */
    ecl_function_dispatch(cl_env_copy,VV[113])(1, v1value) /*  C2EXPR* */;
    value0 = v5temp;
    cl_env_copy->nvalues = 1;
    ecl_bds_unwind1(cl_env_copy);
    return value0;
   }
  }
 }
}
/*      function definition for WT-STACK-POINTER                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L12wt_stack_pointer(cl_object v1narg)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ecl_function_dispatch(cl_env_copy,VV[115])(2, VV[44], v1narg) /*  WT */;
  return value0;
 }
}
/*      function definition for WT-CALL                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L13wt_call(cl_narg narg, cl_object v1fun, cl_object v2args, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>4)) FEwrong_num_arguments_anonym();
 {
  cl_object v3fname;
  cl_object v4env;
  va_list args; va_start(args,v2args);
  {
   int i = 2;
   if (i >= narg) {
    v3fname = ECL_NIL;
   } else {
    i++;
    v3fname = va_arg(args,cl_object);
   }
   if (i >= narg) {
    v4env = ECL_NIL;
   } else {
    i++;
    v4env = va_arg(args,cl_object);
   }
  }
  va_end(args);
  if (Null(v4env)) { goto L4; }
  cl_set(VV[46],ECL_T);
  ecl_function_dispatch(cl_env_copy,VV[115])(3, VV[47], v4env, VV[48]) /*  WT */;
  L13wt_call(2, v1fun, v2args);
  ecl_function_dispatch(cl_env_copy,VV[115])(1, VV[49]) /*  WT        */;
  goto L3;
L4:;
  ecl_function_dispatch(cl_env_copy,VV[115])(2, v1fun, VV[25]) /*  WT */;
  {
   cl_object v5comma;
   v5comma = VV[50];
   {
    cl_object v6;
    v6 = v2args;
    goto L16;
L15:;
    {
     cl_object v7arg;
     v7arg = ecl_car(v6);
     ecl_function_dispatch(cl_env_copy,VV[115])(2, v5comma, v7arg) /*  WT */;
     v5comma = VV[51];
    }
    v6 = ecl_cdr(v6);
L16:;
    if (Null(v6)) { goto L25; }
    goto L15;
L25:;
   }
  }
  ecl_function_dispatch(cl_env_copy,VV[115])(1, VV[49]) /*  WT        */;
L3:;
  if (Null(v3fname)) { goto L27; }
  value0 = ecl_function_dispatch(cl_env_copy,VV[117])(1, v3fname) /*  WT-COMMENT */;
  return value0;
L27:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for WT-CALL-INDIRECT                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L14wt_call_indirect(cl_object v1fun_loc, cl_object v2args, cl_object v3fname, cl_object v4function_p)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_fixnum v5narg;
   v5narg = ecl_length(v2args);
   if (Null(v4function_p)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[115])(4, VV[53], v1fun_loc, VV[54], ecl_make_fixnum(v5narg)) /*  WT */;
   goto L2;
L3:;
   ecl_function_dispatch(cl_env_copy,VV[115])(4, VV[55], v1fun_loc, VV[56], ecl_make_fixnum(v5narg)) /*  WT */;
L2:;
   {
    cl_object v6;
    v6 = v2args;
    goto L9;
L8:;
    {
     cl_object v7arg;
     v7arg = ecl_car(v6);
     ecl_function_dispatch(cl_env_copy,VV[115])(2, VV[51], v7arg) /*  WT */;
    }
    v6 = ecl_cdr(v6);
L9:;
    if (Null(v6)) { goto L16; }
    goto L8;
L16:;
   }
   ecl_function_dispatch(cl_env_copy,VV[115])(1, VV[49]) /*  WT       */;
   if (Null(v3fname)) { goto L19; }
   value0 = ecl_function_dispatch(cl_env_copy,VV[117])(1, v3fname) /*  WT-COMMENT */;
   return value0;
L19:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for WT-CALL-NORMAL                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L15wt_call_normal(cl_object v1fun, cl_object v2args, cl_object v3type)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if ((ecl_function_dispatch(cl_env_copy,VV[120])(1, v1fun) /*  FUN-CFUN */)!=ECL_NIL) { goto L1; }
  T0 = ecl_function_dispatch(cl_env_copy,VV[87])(1, v1fun) /*  FUN-NAME */;
  ecl_function_dispatch(cl_env_copy,VV[121])(2, VV[58], T0) /*  BABOON */;
L1:;
  {
   cl_object v4minarg;
   cl_object v5maxarg;
   cl_object v6fun_c_name;
   cl_object v7fun_lisp_name;
   cl_fixnum v8narg;
   cl_object v9env;
   v4minarg = ecl_function_dispatch(cl_env_copy,VV[122])(1, v1fun) /*  FUN-MINARG */;
   v5maxarg = ecl_function_dispatch(cl_env_copy,VV[123])(1, v1fun) /*  FUN-MAXARG */;
   v6fun_c_name = ecl_function_dispatch(cl_env_copy,VV[120])(1, v1fun) /*  FUN-CFUN */;
   v7fun_lisp_name = ecl_function_dispatch(cl_env_copy,VV[87])(1, v1fun) /*  FUN-NAME */;
   v8narg = ecl_length(v2args);
   v9env = ECL_NIL;
   {
    cl_object v10;
    v10 = ecl_function_dispatch(cl_env_copy,VV[124])(1, v1fun) /*  FUN-CLOSURE */;
    if (!((v10)==(VV[59]))) { goto L11; }
    if (!(ecl_plusp(ecl_symbol_value(VV[60])))) { goto L9; }
    v9env = ecl_function_dispatch(cl_env_copy,VV[125])(1, v1fun) /*  ENVIRONMENT-ACCESSOR */;
    goto L9;
L11:;
    if (!((v10)==(VV[61]))) { goto L9; }
    {
     cl_object v11lex_lvl;
     v11lex_lvl = ecl_function_dispatch(cl_env_copy,VV[126])(1, v1fun) /*  FUN-LEVEL */;
     {
      cl_object v12n;
      v12n = ecl_make_fixnum(0);
      goto L19;
L18:;
      {
       cl_object v13j;
       cl_object v14x;
       T0 = ecl_minus(v11lex_lvl,v12n);
       v13j = ecl_minus(T0,ecl_make_fixnum(1));
       v14x = ecl_function_dispatch(cl_env_copy,VV[127])(1, v13j) /*  LEX-ENV-VAR-NAME */;
       v2args = CONS(v14x,v2args);
      }
      v12n = ecl_one_plus(v12n);
L19:;
      if (!(ecl_lower(v12n,v11lex_lvl))) { goto L27; }
      goto L18;
L27:;
     }
    }
   }
L9:;
   if ((cl_LE(3, v4minarg, ecl_make_fixnum(v8narg), v5maxarg))!=ECL_NIL) { goto L29; }
   value0 = v7fun_lisp_name;
   if ((value0)!=ECL_NIL) { goto L33; }
   T0 = VV[63];
   goto L31;
L33:;
   T0 = value0;
   goto L31;
L31:;
   ecl_function_dispatch(cl_env_copy,VV[77])(2, VV[62], T0) /*  CMPERR */;
L29:;
   if (Null(ecl_function_dispatch(cl_env_copy,VV[128])(1, v1fun) /*  FUN-NEEDS-NARG */)) { goto L35; }
   v2args = CONS(ecl_make_fixnum(v8narg),v2args);
L35:;
   value0 = L13wt_call(4, v6fun_c_name, v2args, ECL_NIL, v9env);
   return value0;
  }
 }
}

#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/cmp/cmpcall.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclUwhkr6a7_Q4Rmqq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CMP;CMPCALL.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclUwhkr6a7_Q4Rmqq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  ecl_cmp_defun(VV[65]);                          /*  UNOPTIMIZED-LONG-CALL */
  ecl_cmp_defun(VV[66]);                          /*  UNOPTIMIZED-FUNCALL */
  ecl_cmp_defun(VV[70]);                          /*  MACROEXPAND-LAMBDA-BLOCK */
  ecl_cmp_defun(VV[71]);                          /*  C1FUNCALL       */
  ecl_cmp_defun(VV[78]);                          /*  C2FUNCALL       */
  ecl_cmp_defun(VV[84]);                          /*  C2CALL-GLOBAL   */
  ecl_cmp_defun(VV[92]);                          /*  CALL-GLOBAL-LOC */
  ecl_cmp_defun(VV[100]);                         /*  CALL-LOC        */
  ecl_cmp_defun(VV[102]);                         /*  CALL-EXPORTED-FUNCTION-LOC */
  ecl_cmp_defun(VV[106]);                         /*  CALL-UNKNOWN-GLOBAL-LOC */
  ecl_cmp_defun(VV[108]);                         /*  MAYBE-SAVE-VALUE */
  si_Xmake_special(VV[43]);
  if (ecl_boundp(cl_env_copy,VV[43])) { goto L47; }
  cl_set(VV[43],VVtemp[1]);
L47:;
  ecl_cmp_defun(VV[114]);                         /*  WT-STACK-POINTER */
  ecl_cmp_defun(VV[116]);                         /*  WT-CALL         */
  ecl_cmp_defun(VV[118]);                         /*  WT-CALL-INDIRECT */
  ecl_cmp_defun(VV[119]);                         /*  WT-CALL-NORMAL  */
}
