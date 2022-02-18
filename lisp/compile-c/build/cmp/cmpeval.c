/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CMP;CMPEVAL.LSP                                   */
#include <ecl/ecl-cmp.h>
#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/cmp/cmpeval.eclh"
/*      function definition for C1EXPR-INNER                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L1c1expr_inner(cl_object v1form)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ECL_SYMBOLP(v1form))) { goto L1; }
  v1form = ecl_function_dispatch(cl_env_copy,VV[53])(1, v1form) /*  CHK-SYMBOL-MACROLET */;
  if (ECL_SYMBOLP(v1form)) { goto L5; }
  value0 = v1form;
  cl_env_copy->nvalues = 1;
  return value0;
L5:;
  if (!((v1form)==(ECL_NIL))) { goto L7; }
  value0 = L3c1nil();
  return value0;
L7:;
  if (!((v1form)==(ECL_T))) { goto L9; }
  value0 = L4c1t();
  return value0;
L9:;
  if (Null(cl_keywordp(v1form))) { goto L11; }
  T0 = ecl_function_dispatch(cl_env_copy,VV[54])(1, v1form) /*  OBJECT-TYPE */;
  T1 = ecl_function_dispatch(cl_env_copy,VV[55])(1, v1form) /*  ADD-SYMBOL */;
  value0 = ecl_function_dispatch(cl_env_copy,VV[56])(5, ECL_SYM("LOCATION",1842), ECL_SYM("TYPE",1346), T0, VV[0], T1) /*  MAKE-C1FORM* */;
  return value0;
L11:;
  if (Null(cl_constantp(1, v1form))) { goto L13; }
  T0 = cl_symbol_value(v1form);
  value0 = ecl_function_dispatch(cl_env_copy,VV[57])(3, T0, VV[1], ECL_T) /*  C1CONSTANT-VALUE */;
  if ((value0)!=ECL_NIL) { goto L16; }
  value0 = ecl_function_dispatch(cl_env_copy,VV[58])(1, v1form) /*  C1VAR */;
  return value0;
L16:;
  cl_env_copy->nvalues = 1;
  return value0;
L13:;
  value0 = ecl_function_dispatch(cl_env_copy,VV[58])(1, v1form) /*  C1VAR */;
  return value0;
L1:;
  if (!(ECL_CONSP(v1form))) { goto L18; }
  if ((si_proper_list_p(v1form))!=ECL_NIL) { goto L20; }
  ecl_function_dispatch(cl_env_copy,VV[59])(2, VV[2], v1form) /*  CMPERR */;
L20:;
  {
   cl_object v2fun;
   v2fun = ecl_car(v1form);
   {
    cl_object v3fd;
    v3fd = ecl_gethash_safe(v2fun,ecl_symbol_value(VV[3]),ECL_NIL);
    if (Null(v3fd)) { goto L23; }
    v2fun = v3fd;
    if (Null(v2fun)) { goto L23; }
   }
   T0 = ecl_cdr(v1form);
   value0 = ecl_function_dispatch(cl_env_copy,v2fun)(1, T0);
   return value0;
L23:;
   if (!(ECL_SYMBOLP(v2fun))) { goto L28; }
   T0 = ecl_cdr(v1form);
   value0 = L5c1call(v2fun, T0, ECL_T);
   return value0;
L28:;
   if (!(ECL_CONSP(v2fun))) { goto L30; }
   T0 = ecl_car(v2fun);
   if (!((T0)==(ECL_SYM("LAMBDA",454)))) { goto L30; }
   value0 = ecl_function_dispatch(cl_env_copy,VV[60])(1, v1form) /*  C1FUNCALL */;
   return value0;
L30:;
   value0 = ecl_function_dispatch(cl_env_copy,VV[59])(2, VV[4], v2fun) /*  CMPERR */;
   return value0;
  }
L18:;
  value0 = ecl_function_dispatch(cl_env_copy,VV[57])(3, v1form, VV[5], ECL_T) /*  C1CONSTANT-VALUE */;
  return value0;
 }
}
/*      function definition for C1EXPR                                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L2c1expr(cl_object v1form)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  ecl_bds_bind(cl_env_copy,VV[6],v1form);         /*  *CURRENT-FORM*  */
L1:;
  v1form = L1c1expr_inner(v1form);
  if (Null(ecl_function_dispatch(cl_env_copy,VV[62])(1, v1form) /*  C1FORM-P */)) { goto L2; }
  value0 = v1form;
  cl_env_copy->nvalues = 1;
  ecl_bds_unwind1(cl_env_copy);
  return value0;
L2:;
  goto L1;
 }
}
/*      function definition for C1NIL                                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L3c1nil()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ecl_symbol_value(VV[8]);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for C1T                                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L4c1t()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ecl_symbol_value(VV[10]);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for C1CALL                                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L5c1call(cl_object v1fname, cl_object v2args, cl_object v3macros_allowed)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v4fd;
   cl_object v5success;
   cl_object v6can_inline;
   v4fd = ECL_NIL;
   v5success = ECL_NIL;
   v6can_inline = ECL_NIL;
   {
    cl_fixnum v7;
    v7 = ecl_length(v2args);
    if (!((v7)>(63))) { goto L4; }
   }
   if (Null(v3macros_allowed)) { goto L6; }
   v4fd = ecl_function_dispatch(cl_env_copy,VV[66])(1, v1fname) /*  CMP-MACRO-FUNCTION */;
   if (Null(v4fd)) { goto L6; }
   T0 = CONS(v1fname,v2args);
   value0 = ecl_function_dispatch(cl_env_copy,VV[67])(2, v4fd, T0) /*  CMP-EXPAND-MACRO */;
   return value0;
L6:;
   T0 = cl_list(2, ECL_SYM("FUNCTION",398), v1fname);
   value0 = ecl_function_dispatch(cl_env_copy,VV[68])(2, T0, v2args) /*  UNOPTIMIZED-LONG-CALL */;
   return value0;
L4:;
   v4fd = ecl_function_dispatch(cl_env_copy,VV[69])(1, v1fname) /*  LOCAL-FUNCTION-REF */;
   if (Null(v4fd)) { goto L10; }
   value0 = L7c1call_local(v1fname, v4fd, v2args);
   return value0;
L10:;
   if (Null(v3macros_allowed)) { goto L13; }
   v4fd = ecl_function_dispatch(cl_env_copy,VV[70])(1, v1fname) /*  CMP-ENV-SEARCH-MACRO */;
   if (Null(v4fd)) { goto L13; }
   T0 = CONS(v1fname,v2args);
   value0 = ecl_function_dispatch(cl_env_copy,VV[67])(2, v4fd, T0) /*  CMP-EXPAND-MACRO */;
   return value0;
L13:;
   v6can_inline = ecl_function_dispatch(cl_env_copy,VV[71])(1, v1fname) /*  INLINE-POSSIBLE */;
   if (Null(v6can_inline)) { goto L17; }
   v4fd = (cl_env_copy->function=(ECL_SYM("COMPILER-MACRO-FUNCTION",241)->symbol.gfdef))->cfun.entry(1, v1fname) /*  COMPILER-MACRO-FUNCTION */;
   if (Null(v4fd)) { goto L17; }
   value0 = ecl_function_dispatch(cl_env_copy,VV[72])(3, v4fd, v1fname, v2args) /*  CMP-EXPAND-COMPILER-MACRO */;
   {
    const int v7 = cl_env_copy->nvalues;
    v4fd = value0;
    cl_object v8;
    v8 = (v7<=1)? ECL_NIL : cl_env_copy->values[1];
    v5success = v8;
   }
   if (Null(v5success)) { goto L17; }
   value0 = v4fd;
   cl_env_copy->nvalues = 1;
   return value0;
L17:;
   if (Null(v6can_inline)) { goto L25; }
   value0 = ecl_function_dispatch(cl_env_copy,VV[73])(2, v1fname, v2args) /*  CLOS-COMPILER-MACRO-EXPAND */;
   {
    const int v7 = cl_env_copy->nvalues;
    v4fd = value0;
    cl_object v8;
    v8 = (v7<=1)? ECL_NIL : cl_env_copy->values[1];
    v5success = v8;
   }
   if (Null(v5success)) { goto L25; }
   value0 = v4fd;
   cl_env_copy->nvalues = 1;
   return value0;
L25:;
   if (Null(v3macros_allowed)) { goto L30; }
   v4fd = cl_macro_function(1, v1fname);
   if (Null(v4fd)) { goto L30; }
   T0 = CONS(v1fname,v2args);
   value0 = ecl_function_dispatch(cl_env_copy,VV[67])(2, v4fd, T0) /*  CMP-EXPAND-MACRO */;
   return value0;
L30:;
   v6can_inline = ecl_function_dispatch(cl_env_copy,VV[74])(1, v1fname) /*  DECLARED-INLINE-P */;
   if (Null(v6can_inline)) { goto L34; }
   if (!(ECL_CONSP(v6can_inline))) { goto L34; }
   T0 = ecl_car(v6can_inline);
   if (!((T0)==(ECL_SYM("FUNCTION",398)))) { goto L34; }
   if (!(ecl_plusp(ecl_symbol_value(VV[12])))) { goto L34; }
   T0 = ecl_function_dispatch(cl_env_copy,VV[75])(1, ECL_SYM("SPACE",790)) /*  CMP-ENV-OPTIMIZATION */;
   if (!(ecl_lowereq(T0,ecl_make_fixnum(1)))) { goto L34; }
   T0 = ecl_one_minus(ecl_symbol_value(VV[12]));
   ecl_bds_bind(cl_env_copy,VV[12],T0);           /*  *INLINE-MAX-DEPTH* */
   ecl_function_dispatch(cl_env_copy,VV[76])(2, VV[13], v1fname) /*  CMPNOTE */;
   value0 = cl_listX(3, ECL_SYM("FUNCALL",396), v6can_inline, v2args);
   ecl_bds_unwind1(cl_env_copy);
   return value0;
L34:;
   value0 = L8c1call_global(v1fname, v2args);
   return value0;
  }
 }
}
/*      function definition for INLINE-LOCAL                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L6inline_local(cl_object v1lambda, cl_object v2fun, cl_object v3args)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v4;
   cl_object v5;
   cl_object v6;
   v4 = ecl_one_minus(ecl_symbol_value(VV[12]));
   v5 = ecl_symbol_value(VV[15]);
   v6 = ecl_function_dispatch(cl_env_copy,VV[77])(0) /*  CMP-ENV-COPY */;
   ecl_bds_bind(cl_env_copy,VV[12],v4);           /*  *INLINE-MAX-DEPTH* */
   ecl_bds_bind(cl_env_copy,VV[16],v6);           /*  *CMP-ENV*       */
   {
    cl_object v8;                                 /*  BINDINGS        */
    cl_object v9;                                 /*  BODY            */
    T0 = ecl_function_dispatch(cl_env_copy,VV[78])(1, v1lambda) /*  MACROEXPAND-LAMBDA-BLOCK */;
    value0 = ecl_function_dispatch(cl_env_copy,VV[79])(3, T0, v3args, ECL_NIL) /*  TRANSFORM-FUNCALL/APPLY-INTO-LET* */;
    {
     const int v10 = cl_env_copy->nvalues;
     v8 = value0;
     cl_object v11;
     v11 = (v10<=1)? ECL_NIL : cl_env_copy->values[1];
     v9 = v11;
    }
    {
     cl_object v11;                               /*  LET-VARS        */
     cl_object v12;                               /*  LET-INITS       */
     cl_object v13;                               /*  SPECIALS        */
     cl_object v14;                               /*  OTHER-DECLS     */
     cl_object v15;                               /*  BODY            */
     value0 = ecl_function_dispatch(cl_env_copy,VV[80])(3, ECL_SYM("LET*",480), v8, v9) /*  PROCESS-LET-BINDINGS */;
     {
      const int v16 = cl_env_copy->nvalues;
      v11 = value0;
      cl_object v17;
      v17 = (v16<=1)? ECL_NIL : cl_env_copy->values[1];
      v12 = v17;
      v17 = (v16<=2)? ECL_NIL : cl_env_copy->values[2];
      v13 = v17;
      v17 = (v16<=3)? ECL_NIL : cl_env_copy->values[3];
      v14 = v17;
      v17 = (v16<=4)? ECL_NIL : cl_env_copy->values[4];
      v15 = v17;
     }
     T0 = ecl_function_dispatch(cl_env_copy,VV[81])(1, v2fun) /*  FUN-CMP-ENV */;
     T1 = ecl_function_dispatch(cl_env_copy,VV[77])(1, T0) /*  CMP-ENV-COPY */;
     ecl_bds_bind(cl_env_copy,VV[16],T1);         /*  *CMP-ENV*       */
     {
      cl_object v16;
      v16 = ecl_fdefinition(VV[82]);
      {
       cl_object v17;
       cl_object v18;
       v17 = ECL_NIL;
       {
        cl_object v19;
        v19 = v11;
        if (ecl_unlikely(!ECL_LISTP(v19))) FEtype_error_list(v19);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v18 = v19;
       }
L12:;
       if (!(ecl_endp(v18))) { goto L14; }
       goto L13;
L14:;
       v17 = _ecl_car(v18);
       {
        cl_object v19;
        v19 = _ecl_cdr(v18);
        if (ecl_unlikely(!ECL_LISTP(v19))) FEtype_error_list(v19);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v18 = v19;
       }
       ecl_function_dispatch(cl_env_copy,v16)(1, v17);
       goto L12;
L13:;
       goto L6;
      }
     }
L6:;
     value0 = ecl_function_dispatch(cl_env_copy,VV[83])(7, ECL_SYM("LET*",480), v11, v12, v13, v14, v15, v5) /*  PROCESS-LET-BODY */;
     ecl_bds_unwind1(cl_env_copy);
     ecl_bds_unwind1(cl_env_copy);
     ecl_bds_unwind1(cl_env_copy);
     return value0;
    }
   }
  }
 }
}
/*      function definition for C1CALL-LOCAL                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L7c1call_local(cl_object v1fname, cl_object v2fun, cl_object v3args)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v4lambda;
   v4lambda = ecl_function_dispatch(cl_env_copy,VV[84])(1, v2fun) /*  FUN-LAMBDA-EXPRESSION */;
   if (Null(v4lambda)) { goto L1; }
   if (Null(ecl_function_dispatch(cl_env_copy,VV[74])(1, v1fname) /*  DECLARED-INLINE-P */)) { goto L1; }
   if (!(ecl_plusp(ecl_symbol_value(VV[12])))) { goto L1; }
   value0 = L6inline_local(v4lambda, v2fun, v3args);
   return value0;
  }
L1:;
  {
   cl_object v4forms;
   cl_object v5return_type;
   cl_object v6arg_types;
   v4forms = L17c1args_(v3args);
   value0 = ecl_function_dispatch(cl_env_copy,VV[85])(1, v2fun) /*  GET-LOCAL-RETURN-TYPE */;
   if ((value0)!=ECL_NIL) { goto L9; }
   v5return_type = ECL_T;
   goto L7;
L9:;
   v5return_type = value0;
   goto L7;
L7:;
   v6arg_types = ecl_function_dispatch(cl_env_copy,VV[86])(1, v2fun) /*  GET-LOCAL-ARG-TYPES */;
   if (Null(v6arg_types)) { goto L12; }
   {
    cl_object v7fl;
    v7fl = ECL_NIL;
    {
     cl_object v8;
     v8 = v4forms;
     goto L19;
L18:;
     {
      cl_object v9form;
      v9form = ecl_car(v8);
      if (!(ecl_endp(v6arg_types))) { goto L24; }
      v7fl = CONS(v9form,v7fl);
      goto L23;
L24:;
      T0 = ecl_car(v6arg_types);
      T1 = ecl_car(v3args);
      T2 = ecl_function_dispatch(cl_env_copy,VV[87])(6, T0, v9form, T1, VV[17], VV[18], v1fname) /*  AND-FORM-TYPE */;
      v7fl = CONS(T2,v7fl);
      {
       cl_object v10;
       v10 = v6arg_types;
       {
        cl_object v11;
        v11 = v10;
        if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v10)) { goto L34; }
       {
        cl_object v11;
        v11 = ECL_CONS_CDR(v10);
        v6arg_types = v11;
        v10 = ECL_CONS_CAR(v10);
       }
L34:;
      }
      {
       cl_object v10;
       v10 = v3args;
       {
        cl_object v11;
        v11 = v10;
        if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v10)) { goto L44; }
       {
        cl_object v11;
        v11 = ECL_CONS_CDR(v10);
        v3args = v11;
        v10 = ECL_CONS_CAR(v10);
       }
L44:;
      }
L23:;
     }
     v8 = ecl_cdr(v8);
L19:;
     if (Null(v8)) { goto L52; }
     goto L18;
L52:;
    }
    v4forms = cl_nreverse(v7fl);
   }
L12:;
   value0 = ecl_function_dispatch(cl_env_copy,VV[56])(10, VV[19], VV[20], ECL_T, VV[21], ECL_T, ECL_SYM("TYPE",1346), v5return_type, VV[0], v2fun, v4forms) /*  MAKE-C1FORM* */;
   return value0;
  }
 }
}
/*      function definition for C1CALL-GLOBAL                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L8c1call_global(cl_object v1fname, cl_object v2args)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3forms;
   v3forms = L17c1args_(v2args);
   {
    cl_object v4value;
    v4value = L11c1call_constant_fold(v1fname, v3forms);
    if (Null(v4value)) { goto L2; }
    value0 = v4value;
    cl_env_copy->nvalues = 1;
    return value0;
   }
L2:;
   T0 = ecl_function_dispatch(cl_env_copy,VV[89])(1, v1fname) /*  FUNCTION-MAY-CHANGE-SP */;
   T1 = ecl_function_dispatch(cl_env_copy,VV[90])(1, v1fname) /*  FUNCTION-MAY-HAVE-SIDE-EFFECTS */;
   T2 = ecl_function_dispatch(cl_env_copy,VV[91])(2, v1fname, v3forms) /*  PROPAGATE-TYPES */;
   value0 = ecl_function_dispatch(cl_env_copy,VV[56])(10, VV[22], VV[20], T0, VV[21], T1, ECL_SYM("TYPE",1346), T2, VV[0], v1fname, v3forms) /*  MAKE-C1FORM* */;
   return value0;
  }
 }
}
/*      function definition for C1CALL-CONSTANT-FOLD                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L11c1call_constant_fold(cl_object volatile v1fname, cl_object volatile v2forms)
{
 cl_object T0, T1, T2, T3;
 cl_object volatile env0 = ECL_NIL;
 cl_object volatile CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(si_get_sysprop(v1fname, VV[24]))) { goto L1; }
  if (Null(ecl_function_dispatch(cl_env_copy,VV[93])(0) /*  POLICY-EVALUATE-FORMS */)) { goto L1; }
  if (Null(ecl_function_dispatch(cl_env_copy,VV[71])(1, v1fname) /*  INLINE-POSSIBLE */)) { goto L1; }
  {
   volatile cl_object env1 = env0;
   env1 = ECL_NIL;
   CLV0 = env1 = CONS(ECL_NIL,env1);
   {
    volatile cl_object env2 = env1;
    CLV1 = env2 = CONS(ECL_NEW_FRAME_ID(cl_env_copy),env2); /*  TAGBODY */
    {
     ecl_frs_push(cl_env_copy,ECL_CONS_CAR(CLV1));
     if (__ecl_frs_push_result) {
     if (cl_env_copy->values[0]==ecl_make_fixnum(0))goto L5;
     ecl_internal_error("GO found an inexistent tag");
     }
    }
    {
     cl_object v3;
     v3 = ecl_make_cclosure_va((cl_objectfn)LC9__lambda25,env2,Cblock,1);
     T0 = v3;
    }
    T1 = CONS(ECL_SYM("ERROR",339),T0);
    T2 = ecl_list1(T1);
    T3 = CONS(T2,ecl_symbol_value(ECL_SYM("*HANDLER-CLUSTERS*",6)));
    ecl_bds_bind(cl_env_copy,ECL_SYM("*HANDLER-CLUSTERS*",6),T3); /*  *HANDLER-CLUSTERS* */
    {
     cl_object v3all_values;
     v3all_values = ECL_NIL;
     {
      cl_object v4constant_p;
      v4constant_p = ECL_NIL;
      {
       cl_object v5v;
       v5v = ECL_NIL;
       {
        cl_object v6form;
        cl_object v7;
        v6form = ECL_NIL;
        {
         cl_object v8;
         v8 = v2forms;
         if (ecl_unlikely(!ECL_LISTP(v8))) FEtype_error_list(v8);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         v7 = v8;
        }
L15:;
        if (!(ecl_endp(v7))) { goto L17; }
        goto L16;
L17:;
        v6form = _ecl_car(v7);
        {
         cl_object v8;
         v8 = _ecl_cdr(v7);
         if (ecl_unlikely(!ECL_LISTP(v8))) FEtype_error_list(v8);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         v7 = v8;
        }
        value0 = ecl_function_dispatch(cl_env_copy,VV[94])(1, v6form) /*  C1FORM-CONSTANT-P */;
        {
         const int v8 = cl_env_copy->nvalues;
         v4constant_p = value0;
         cl_object v9;
         v9 = (v8<=1)? ECL_NIL : cl_env_copy->values[1];
         v5v = v9;
        }
        if (Null(value0)) { goto L26; }
        v3all_values = CONS(v5v,v3all_values);
        goto L25;
L26:;
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 1;
        ecl_frs_pop(cl_env_copy);
        ecl_bds_unwind1(cl_env_copy);
        return value0;
L25:;
        goto L15;
L16:;
        {
         cl_object v8results;
         {
          struct ecl_stack_frame _ecl_inner_frame_aux;
          cl_object _ecl_inner_frame = ecl_stack_frame_open(cl_env_copy,(cl_object)&_ecl_inner_frame_aux,0);
          {
          cl_object v9;
          v9 = _ecl_inner_frame;
          {
          cl_object v10;
          v10 = ECL_SYM("LIST",483);
          T0 = cl_nreverse(v3all_values);
          cl_env_copy->values[0] = cl_apply(2, v1fname, T0);
          ecl_stack_frame_push_values(v9);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;cl_env_copy->values[0]=ecl_apply_from_stack_frame(v9,v10);
          value0 = cl_env_copy->values[0];
          }
          }
          ecl_stack_frame_close(_ecl_inner_frame);
         }
         v8results = value0;
         T0 = ecl_cdr(v8results);
         if (!(ecl_endp(T0))) { goto L38; }
         T0 = ecl_car(v8results);
         ecl_function_dispatch(cl_env_copy,VV[57])(3, T0, VV[1], ECL_NIL) /*  C1CONSTANT-VALUE */;
         goto L31;
L38:;
         {
          cl_object v9results;
          {
          cl_object v10;
          {
          cl_object v11;
          v11 = ecl_make_cfun((cl_objectfn_fixed)LC10__lambda37,ECL_NIL,Cblock,1);
          v10 = v11;
          }
          {
          cl_object v11;
          cl_object v12;
          v11 = ECL_NIL;
          {
          cl_object v13;
          v13 = v8results;
          if (ecl_unlikely(!ECL_LISTP(v13))) FEtype_error_list(v13);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          v12 = v13;
          }
          {
          cl_object v13;
          cl_object v14;
          v13 = ecl_list1(ECL_NIL);
          v14 = v13;
L48:;
          if (!(ecl_endp(v12))) { goto L50; }
          goto L49;
L50:;
          v11 = _ecl_car(v12);
          {
          cl_object v15;
          v15 = _ecl_cdr(v12);
          if (ecl_unlikely(!ECL_LISTP(v15))) FEtype_error_list(v15);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          v12 = v15;
          }
          {
          cl_object v15;
          v15 = v14;
          if (ecl_unlikely(ECL_ATOM(v15))) FEtype_error_cons(v15);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          T0 = v15;
          }
          T1 = ecl_function_dispatch(cl_env_copy,v10)(1, v11);
          v14 = ecl_list1(T1);
          (ECL_CONS_CDR(T0)=v14,T0);
          goto L48;
L49:;
          v9results = ecl_cdr(v13);
          goto L40;
          }
          }
          }
L40:;
          T0 = (ECL_SYM("IDENTITY",428)->symbol.gfdef);
          if (Null(cl_every(2, T0, v9results))) { goto L31; }
          ecl_function_dispatch(cl_env_copy,VV[56])(3, ECL_SYM("VALUES",897), VV[0], v9results) /*  MAKE-C1FORM* */;
         }
        }
L31:;
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 1;
        ecl_frs_pop(cl_env_copy);
        ecl_bds_unwind1(cl_env_copy);
        return value0;
       }
      }
     }
    }
L5:;
    {
     cl_object v3c;
     v3c = ECL_CONS_CAR(CLV0);
     value0 = ecl_function_dispatch(cl_env_copy,VV[95])(4, VV[25], v1fname, v2forms, v3c) /*  CMPDEBUG */;
     ecl_frs_pop(cl_env_copy);
     return value0;
    }
   }
  }
L1:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      closure LAMBDA25                                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC9__lambda25(cl_narg narg, cl_object v1si__temp, ...)
{
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV1 = env0;                                     /*  TAGBODY         */
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=1)) FEwrong_num_arguments_anonym();
 {
TTL:
  ECL_CONS_CAR(CLV0) = v1si__temp;
  cl_go(ECL_CONS_CAR(CLV1),ecl_make_fixnum(0));
 }
 }
}
/*      local function LAMBDA37                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC10__lambda37(cl_object v1r)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ecl_function_dispatch(cl_env_copy,VV[57])(3, v1r, VV[1], ECL_NIL) /*  C1CONSTANT-VALUE */;
  return value0;
 }
}
/*      function definition for C2EXPR                                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L12c2expr(cl_object v1form)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,VV[97])(1, v1form) /*  C1FORM-FILE */;
  ecl_bds_bind(cl_env_copy,ECL_SYM("*COMPILE-FILE-TRUENAME*",29),T0); /*  *COMPILE-FILE-TRUENAME* */
  T0 = ecl_function_dispatch(cl_env_copy,VV[98])(1, v1form) /*  C1FORM-FILE-POSITION */;
  ecl_bds_bind(cl_env_copy,VV[27],T0);            /*  *COMPILE-FILE-POSITION* */
  T0 = ecl_function_dispatch(cl_env_copy,VV[99])(1, v1form) /*  C1FORM-TOPLEVEL-FORM */;
  ecl_bds_bind(cl_env_copy,VV[28],T0);            /*  *CURRENT-TOPLEVEL-FORM* */
  T0 = ecl_function_dispatch(cl_env_copy,VV[100])(1, v1form) /*  C1FORM-FORM */;
  ecl_bds_bind(cl_env_copy,VV[6],T0);             /*  *CURRENT-FORM*  */
  T0 = ecl_function_dispatch(cl_env_copy,VV[101])(1, v1form) /*  C1FORM-ENV */;
  ecl_bds_bind(cl_env_copy,VV[16],T0);            /*  *CMP-ENV*       */
  {
   cl_object v2name;
   cl_object v3args;
   cl_object v4dispatch;
   v2name = ecl_function_dispatch(cl_env_copy,VV[102])(1, v1form) /*  C1FORM-NAME */;
   v3args = ecl_function_dispatch(cl_env_copy,VV[103])(1, v1form) /*  C1FORM-ARGS */;
   v4dispatch = ecl_gethash_safe(v2name,ecl_symbol_value(VV[29]),ECL_NIL);
   value0 = cl_apply(3, v4dispatch, v1form, v3args);
   ecl_bds_unwind_n(cl_env_copy,5);
   return value0;
  }
 }
}
/*      function definition for C2EXPR*                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L13c2expr_(cl_object v1form)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2label;
   v2label = ecl_function_dispatch(cl_env_copy,VV[105])(0) /*  NEXT-LABEL */;
   T0 = CONS(v2label,ecl_symbol_value(VV[31]));
   ecl_bds_bind(cl_env_copy,VV[31],T0);           /*  *UNWIND-EXIT*   */
   ecl_bds_bind(cl_env_copy,VV[32],v2label);      /*  *EXIT*          */
   T0 = CONS(ecl_symbol_value(VV[32]),ecl_symbol_value(VV[31]));
   ecl_bds_bind(cl_env_copy,VV[31],T0);           /*  *UNWIND-EXIT*   */
   ecl_bds_push(cl_env_copy,VV[33]);              /*  *LCL*           */
   ecl_bds_push(cl_env_copy,VV[34]);              /*  *TEMP*          */
   L12c2expr(v1form);
   ecl_bds_unwind_n(cl_env_copy,4);
   value0 = ecl_function_dispatch(cl_env_copy,VV[106])(1, v2label) /*  WT-LABEL */;
   ecl_bds_unwind1(cl_env_copy);
   return value0;
  }
 }
}
/*      function definition for C1WITH-BACKEND                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L14c1with_backend(cl_object v1forms)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2tag;
   v2tag = ECL_NIL;
   {
    cl_object v3form;
    v3form = ECL_NIL;
    {
     cl_object v4;
     cl_object v5;
     v4 = ecl_list1(ECL_NIL);
     v5 = v4;
L6:;
     {
      cl_object v6;
      v6 = v1forms;
      {
       cl_object v7;
       v7 = v6;
       if (ecl_unlikely(!ECL_LISTP(v7))) FEtype_error_list(v7);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v6)) { goto L14; }
      {
       cl_object v7;
       v7 = ECL_CONS_CDR(v6);
       v1forms = v7;
       v6 = ECL_CONS_CAR(v6);
      }
L14:;
      v2tag = v6;
     }
     {
      cl_object v6;
      v6 = v1forms;
      {
       cl_object v7;
       v7 = v6;
       if (ecl_unlikely(!ECL_LISTP(v7))) FEtype_error_list(v7);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v6)) { goto L26; }
      {
       cl_object v7;
       v7 = ECL_CONS_CDR(v6);
       v1forms = v7;
       v6 = ECL_CONS_CAR(v6);
      }
L26:;
      v3form = v6;
     }
     if ((v2tag)!=ECL_NIL) { goto L32; }
     goto L7;
L32:;
     if (!((v2tag)==(ECL_SYM("C/C++",1849)))) { goto L34; }
     {
      cl_object v6;
      v6 = v5;
      if (ecl_unlikely(ECL_ATOM(v6))) FEtype_error_cons(v6);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      T1 = v6;
     }
     v5 = ecl_list1(v3form);
     (ECL_CONS_CDR(T1)=v5,T1);
L34:;
     goto L6;
L7:;
     T0 = ecl_cdr(v4);
     goto L1;
    }
   }
  }
L1:;
  value0 = L15c1progn(T0);
  return value0;
 }
}
/*      function definition for C1PROGN                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L15c1progn(cl_object v1forms)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ecl_endp(v1forms))) { goto L1; }
  value0 = ecl_function_dispatch(cl_env_copy,VV[109])(1, ECL_NIL) /*  T1/C1EXPR */;
  return value0;
L1:;
  T0 = ecl_cdr(v1forms);
  if (!(ecl_endp(T0))) { goto L3; }
  T0 = ecl_car(v1forms);
  value0 = ecl_function_dispatch(cl_env_copy,VV[109])(1, T0) /*  T1/C1EXPR */;
  return value0;
L3:;
  {
   cl_object v2fl;
   cl_object v3output_form;
   cl_object v4output_type;
   {
    cl_object v5;
    v5 = ecl_fdefinition(VV[109]);
    {
     cl_object v6;
     cl_object v7;
     v6 = ECL_NIL;
     {
      cl_object v8;
      v8 = v1forms;
      if (ecl_unlikely(!ECL_LISTP(v8))) FEtype_error_list(v8);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v7 = v8;
     }
     {
      cl_object v8;
      cl_object v9;
      v8 = ecl_list1(ECL_NIL);
      v9 = v8;
L13:;
      if (!(ecl_endp(v7))) { goto L15; }
      goto L14;
L15:;
      v6 = _ecl_car(v7);
      {
       cl_object v10;
       v10 = _ecl_cdr(v7);
       if (ecl_unlikely(!ECL_LISTP(v10))) FEtype_error_list(v10);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v7 = v10;
      }
      {
       cl_object v10;
       v10 = v9;
       if (ecl_unlikely(ECL_ATOM(v10))) FEtype_error_cons(v10);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       T0 = v10;
      }
      T1 = ecl_function_dispatch(cl_env_copy,v5)(1, v6);
      v9 = ecl_list1(T1);
      (ECL_CONS_CDR(T0)=v9,T0);
      goto L13;
L14:;
      v2fl = ecl_cdr(v8);
      goto L5;
     }
    }
   }
L5:;
   T0 = ecl_last(v2fl,1);
   v3output_form = ecl_car(T0);
   if (Null(v3output_form)) { goto L34; }
   v4output_type = ecl_function_dispatch(cl_env_copy,VV[110])(1, v3output_form) /*  C1FORM-TYPE */;
   goto L32;
L34:;
   v4output_type = ECL_NIL;
   goto L32;
L32:;
   value0 = ecl_function_dispatch(cl_env_copy,VV[56])(5, ECL_SYM("PROGN",673), ECL_SYM("TYPE",1346), v4output_type, VV[0], v2fl) /*  MAKE-C1FORM* */;
   return value0;
  }
 }
}
/*      function definition for C2PROGN                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L16c2progn(cl_object v1c1form, cl_object v2forms)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4l;
   v3 = ecl_symbol_value(VV[38]);
   v4l = v2forms;
   goto L5;
L4:;
   {
    cl_object v5this_form;
    cl_object v6name;
    v5this_form = ecl_car(v4l);
    v6name = ecl_function_dispatch(cl_env_copy,VV[102])(1, v5this_form) /*  C1FORM-NAME */;
    ecl_bds_bind(cl_env_copy,VV[39],VV[40]);      /*  *DESTINATION*   */
    T0 = ecl_car(v4l);
    L13c2expr_(T0);
    ecl_bds_unwind1(cl_env_copy);
    cl_set(VV[38],v3);
    if ((v6name)==(ECL_SYM("GO",416))) { goto L14; }
    if (!((v6name)==(ECL_SYM("RETURN-FROM",727)))) { goto L7; }
    goto L13;
L14:;
L13:;
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
   }
L7:;
   v4l = ecl_cdr(v4l);
L5:;
   T0 = ecl_cdr(v4l);
   if (ecl_endp(T0)) { goto L18; }
   goto L4;
L18:;
   T0 = ecl_car(v4l);
   value0 = L12c2expr(T0);
   return value0;
  }
 }
}
/*      function definition for C1ARGS*                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L17c1args_(cl_object v1forms)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2;
   v2 = ecl_fdefinition(VV[7]);
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
    {
     cl_object v5;
     cl_object v6;
     v5 = ecl_list1(ECL_NIL);
     v6 = v5;
L8:;
     if (!(ecl_endp(v4))) { goto L10; }
     goto L9;
L10:;
     v3 = _ecl_car(v4);
     {
      cl_object v7;
      v7 = _ecl_cdr(v4);
      if (ecl_unlikely(!ECL_LISTP(v7))) FEtype_error_list(v7);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v4 = v7;
     }
     {
      cl_object v7;
      v7 = v6;
      if (ecl_unlikely(ECL_ATOM(v7))) FEtype_error_cons(v7);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      T0 = v7;
     }
     T1 = ecl_function_dispatch(cl_env_copy,v2)(1, v3);
     v6 = ecl_list1(T1);
     (ECL_CONS_CDR(T0)=v6,T0);
     goto L8;
L9:;
     value0 = ecl_cdr(v5);
     cl_env_copy->nvalues = 1;
     return value0;
    }
   }
  }
 }
}
/*      local function DEFINE-INLINE-FUNCTION                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC19si__define_inline_function(cl_object v1, cl_object v2)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4name;
   cl_object v5vars;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[114])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4name = v6;
   }
   if (!(v3==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[114])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5vars = v6;
   }
   {
    cl_object v6;
    cl_object v7temps;
    v6 = ecl_symbol_value(VV[43]);
    v7temps = ECL_NIL;
    ecl_bds_bind(cl_env_copy,VV[43],v6);          /*  *COMPILER-TEMPS* */
    {
     cl_object v8;
     v8 = v5vars;
     goto L20;
L19:;
     {
      cl_object v9var;
      v9var = ecl_car(v8);
      if (!(ECL_SYMBOLP(v9var))) { goto L25; }
      if (!((v9var)==(ECL_SYM("&OPTIONAL",13)))) { goto L30; }
      goto L25;
      goto L28;
L30:;
      goto L28;
L28:;
      if (!((v9var)==(ECL_SYM("&REST",14)))) { goto L34; }
      goto L25;
      goto L32;
L34:;
      goto L32;
L32:;
      if (!((v9var)==(ECL_SYM("&KEY",12)))) { goto L38; }
      goto L25;
      goto L36;
L38:;
      goto L36;
L36:;
      if (!((v9var)==(ECL_SYM("&AUX",9)))) { goto L41; }
      goto L25;
      goto L26;
L41:;
      goto L26;
L26:;
      {
       cl_object v10;
       v10 = ecl_symbol_value(VV[43]);
       {
        cl_object v11;
        v11 = v10;
        if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v10)) { goto L52; }
       {
        cl_object v11;
        v11 = ECL_CONS_CDR(v10);
        cl_set(VV[43],v11);
        v10 = ECL_CONS_CAR(v10);
       }
L52:;
       value0 = v10;
      }
      if ((value0)!=ECL_NIL) { goto L46; }
      T1 = cl_find_package(VV[49]);
      T0 = cl_gentemp(2, VV[48], T1);
      goto L44;
L46:;
      T0 = value0;
      goto L44;
L44:;
      v7temps = CONS(T0,v7temps);
      goto L24;
L25:;
      cl_error(3, VV[50], v9var, v4name);
L24:;
     }
     v8 = ecl_cdr(v8);
L20:;
     if (Null(v8)) { goto L60; }
     goto L19;
L60:;
    }
    {
     cl_object v8binding;
     {
      cl_object v9;
      {
       cl_object v10;
       v10 = ecl_make_cfun((cl_objectfn_fixed)LC18__lambda104,ECL_NIL,Cblock,2);
       v9 = v10;
      }
      {
       cl_object v10;
       cl_object v11;
       v10 = ECL_NIL;
       {
        cl_object v12;
        v12 = v5vars;
        if (ecl_unlikely(!ECL_LISTP(v12))) FEtype_error_list(v12);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v11 = v12;
       }
       {
        cl_object v12;
        cl_object v13;
        v12 = ECL_NIL;
        {
         cl_object v14;
         v14 = v7temps;
         if (ecl_unlikely(!ECL_LISTP(v14))) FEtype_error_list(v14);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         v13 = v14;
        }
        {
         cl_object v14;
         cl_object v15;
         v14 = ecl_list1(ECL_NIL);
         v15 = v14;
L75:;
         if (!(ecl_endp(v11))) { goto L77; }
         goto L76;
L77:;
         v10 = _ecl_car(v11);
         {
          cl_object v16;
          v16 = _ecl_cdr(v11);
          if (ecl_unlikely(!ECL_LISTP(v16))) FEtype_error_list(v16);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          v11 = v16;
         }
         if (!(ecl_endp(v13))) { goto L85; }
         goto L76;
L85:;
         v12 = _ecl_car(v13);
         {
          cl_object v16;
          v16 = _ecl_cdr(v13);
          if (ecl_unlikely(!ECL_LISTP(v16))) FEtype_error_list(v16);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          v13 = v16;
         }
         {
          cl_object v16;
          v16 = v15;
          if (ecl_unlikely(ECL_ATOM(v16))) FEtype_error_cons(v16);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          T1 = v16;
         }
         T2 = ecl_function_dispatch(cl_env_copy,v9)(2, v10, v12);
         v15 = ecl_list1(T2);
         (ECL_CONS_CDR(T1)=v15,T1);
         goto L75;
L76:;
         T0 = ecl_cdr(v14);
         goto L63;
        }
       }
      }
     }
L63:;
     v8binding = CONS(ECL_SYM("LIST",483),T0);
     T0 = cl_listX(4, ECL_SYM("DEFUN",291), v4name, v5vars, v3);
     T1 = cl_list(2, ECL_SYM("QUOTE",681), v3);
     T2 = cl_list(4, ECL_SYM("LIST*",484), VV[51], v8binding, T1);
     T3 = cl_list(4, ECL_SYM("DEFINE-COMPILER-MACRO",281), v4name, v7temps, T2);
     value0 = cl_list(3, ECL_SYM("PROGN",673), T0, T3);
     ecl_bds_unwind1(cl_env_copy);
     return value0;
    }
   }
  }
 }
}
/*      local function LAMBDA104                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC18__lambda104(cl_object v1var, cl_object v2temp)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_list(2, ECL_SYM("QUOTE",681), v1var);
  value0 = cl_list(3, ECL_SYM("LIST",483), T0, v2temp);
  return value0;
 }
}

#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/cmp/cmpeval.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclBArhxza7_KkT6lq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CMP;CMPEVAL.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclBArhxza7_KkT6lq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  (void)0; /* No entry created for C1EXPR-INNER */
  ecl_cmp_defun(VV[61]);                          /*  C1EXPR          */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  si_Xmake_special(VV[8]);
  if (ecl_boundp(cl_env_copy,VV[8])) { goto L11; }
  T0 = ecl_function_dispatch(cl_env_copy,VV[54])(1, ECL_NIL) /*  OBJECT-TYPE */;
  cl_set(VV[8],ecl_function_dispatch(cl_env_copy,VV[56])(5, ECL_SYM("LOCATION",1842), ECL_SYM("TYPE",1346), T0, VV[0], ECL_NIL) /*  MAKE-C1FORM* */);
L11:;
 }
  ecl_cmp_defun(VV[63]);                          /*  C1NIL           */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  si_Xmake_special(VV[10]);
  if (ecl_boundp(cl_env_copy,VV[10])) { goto L22; }
  T0 = ecl_function_dispatch(cl_env_copy,VV[54])(1, ECL_T) /*  OBJECT-TYPE */;
  cl_set(VV[10],ecl_function_dispatch(cl_env_copy,VV[56])(5, ECL_SYM("LOCATION",1842), ECL_SYM("TYPE",1346), T0, VV[0], ECL_T) /*  MAKE-C1FORM* */);
L22:;
 }
  ecl_cmp_defun(VV[64]);                          /*  C1T             */
  ecl_cmp_defun(VV[65]);                          /*  C1CALL          */
  (void)0; /* No entry created for INLINE-LOCAL */
  (void)0; /* No entry created for C1CALL-LOCAL */
  ecl_cmp_defun(VV[88]);                          /*  C1CALL-GLOBAL   */
  ecl_cmp_defun(VV[92]);                          /*  C1CALL-CONSTANT-FOLD */
  ecl_cmp_defun(VV[96]);                          /*  C2EXPR          */
  ecl_cmp_defun(VV[104]);                         /*  C2EXPR*         */
  ecl_cmp_defun(VV[107]);                         /*  C1WITH-BACKEND  */
  ecl_cmp_defun(VV[108]);                         /*  C1PROGN         */
  ecl_cmp_defun(VV[111]);                         /*  C2PROGN         */
  ecl_cmp_defun(VV[112]);                         /*  C1ARGS*         */
  si_Xmake_special(VV[43]);
  if (ecl_boundp(cl_env_copy,VV[43])) { goto L77; }
  cl_set(VV[43],VVtemp[1]);
L77:;
  ecl_cmp_defmacro(VV[113]);                      /*  DEFINE-INLINE-FUNCTION */
}
