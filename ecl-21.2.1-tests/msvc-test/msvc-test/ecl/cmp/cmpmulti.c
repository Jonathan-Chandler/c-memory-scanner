/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CMP;CMPMULTI.LSP                                  */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/build/cmp/cmpmulti.eclh"
/*      function definition for C1MULTIPLE-VALUE-CALL                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L1c1multiple_value_call(cl_object v1args)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2forms;
   v2forms = ECL_NIL;
   ecl_function_dispatch(cl_env_copy,VV[53])(3, ECL_SYM("MULTIPLE-VALUE-CALL",575), v1args, ecl_make_fixnum(1)) /*  CHECK-ARGS-NUMBER */;
   T0 = ecl_cdr(v1args);
   if (!(ecl_endp(T0))) { goto L3; }
   value0 = ecl_function_dispatch(cl_env_copy,VV[54])(1, v1args) /*  C1FUNCALL */;
   return value0;
L3:;
   {
    cl_fixnum v3;
    v3 = ecl_length(v1args);
    if (!((v3)==(2))) { goto L5; }
   }
   v2forms = ecl_cadr(v1args);
   if (!(ECL_CONSP(v2forms))) { goto L5; }
   T0 = ecl_car(v2forms);
   if (!((ECL_SYM("VALUES",897))==(T0))) { goto L5; }
   T0 = ecl_car(v1args);
   T1 = ecl_cdr(v2forms);
   T2 = CONS(T0,T1);
   value0 = ecl_function_dispatch(cl_env_copy,VV[54])(1, T2) /*  C1FUNCALL */;
   return value0;
L5:;
   {
    cl_object v3;
    cl_object v4;
    v3 = cl_gensym(0);
    v4 = cl_gensym(0);
    T0 = ecl_car(v1args);
    T1 = cl_list(2, v3, T0);
    T2 = ecl_list1(T1);
    {
     cl_object v5;
     cl_object v6i;
     cl_object v7;
     v5 = ecl_cdr(v1args);
     v6i = ECL_NIL;
     {
      cl_object v8;
      v8 = v5;
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
L20:;
      if (!(ecl_endp(v7))) { goto L22; }
      goto L21;
L22:;
      v6i = _ecl_car(v7);
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
       T4 = v10;
      }
      T5 = cl_list(3, VV[1], v4, v6i);
      v9 = ecl_list1(T5);
      (ECL_CONS_CDR(T4)=v9,T4);
      goto L20;
L21:;
      T3 = ecl_cdr(v8);
      goto L12;
     }
    }
L12:;
    T4 = cl_list(3, ECL_SYM("APPLY-FROM-STACK-FRAME",1670), v4, v3);
    T5 = ecl_list1(T4);
    T6 = ecl_append(T3,T5);
    T7 = cl_listX(3, ECL_SYM("LET*",480), T2, T6);
    value0 = cl_list(3, VV[0], v4, T7);
    return value0;
   }
  }
 }
}
/*      function definition for C1MULTIPLE-VALUE-PROG1                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L2c1multiple_value_prog1(cl_object v1args)
{
 cl_object T0, T1, T2, T3, T4, T5;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  ecl_function_dispatch(cl_env_copy,VV[53])(3, ECL_SYM("MULTIPLE-VALUE-PROG1",577), v1args, ecl_make_fixnum(1)) /*  CHECK-ARGS-NUMBER */;
  {
   cl_object v2frame;
   v2frame = cl_gensym(0);
   T0 = ecl_car(v1args);
   T1 = cl_list(3, VV[1], v2frame, T0);
   T2 = ecl_cdr(v1args);
   T3 = cl_list(2, VV[3], v2frame);
   T4 = ecl_list1(T3);
   T5 = ecl_append(T2,T4);
   value0 = cl_listX(4, VV[0], v2frame, T1, T5);
   return value0;
  }
 }
}
/*      function definition for C1VALUES                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L3c1values(cl_object v1args)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,VV[56])(1, v1args) /*  C1ARGS* */;
  value0 = ecl_function_dispatch(cl_env_copy,VV[57])(3, ECL_SYM("VALUES",897), VV[5], T0) /*  MAKE-C1FORM* */;
  return value0;
 }
}
/*      function definition for C2VALUES                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L4c2values(cl_object v1c1form, cl_object v2forms)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!((ecl_symbol_value(VV[7]))==(VV[8]))) { goto L1; }
  if (Null(ecl_cdr(v2forms))) { goto L1; }
  if (!(ECL_CONSP(ecl_symbol_value(VV[9])))) { goto L1; }
  T0 = ecl_car(ecl_symbol_value(VV[9]));
  if (!((ECL_SYM("DEFUN",291))==(T0))) { goto L1; }
  T0 = ecl_cadr(ecl_symbol_value(VV[9]));
  ecl_function_dispatch(cl_env_copy,VV[59])(2, VV[10], T0) /*  CMPWARN */;
L1:;
  if (!((ecl_symbol_value(VV[7]))==(VV[11]))) { goto L6; }
  {
   cl_object v3;
   v3 = ecl_fdefinition(VV[60]);
   {
    cl_object v4;
    cl_object v5;
    v4 = ECL_NIL;
    {
     cl_object v6;
     v6 = v2forms;
     if (ecl_unlikely(!ECL_LISTP(v6))) FEtype_error_list(v6);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v5 = v6;
    }
L14:;
    if (!(ecl_endp(v5))) { goto L16; }
    goto L15;
L16:;
    v4 = _ecl_car(v5);
    {
     cl_object v6;
     v6 = _ecl_cdr(v5);
     if (ecl_unlikely(!ECL_LISTP(v6))) FEtype_error_list(v6);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v5 = v6;
    }
    ecl_function_dispatch(cl_env_copy,v3)(1, v4);
    goto L14;
L15:;
    goto L8;
   }
  }
L8:;
  value0 = ecl_function_dispatch(cl_env_copy,VV[61])(1, VV[12]) /*  UNWIND-EXIT */;
  return value0;
L6:;
  if (!(ecl_endp(v2forms))) { goto L27; }
  if (!((ecl_symbol_value(VV[7]))==(ECL_SYM("RETURN",726)))) { goto L29; }
  ecl_function_dispatch(cl_env_copy,VV[62])(1, VV[13]) /*  WT-NL      */;
  ecl_function_dispatch(cl_env_copy,VV[62])(1, VV[14]) /*  WT-NL      */;
  value0 = ecl_function_dispatch(cl_env_copy,VV[61])(1, ECL_SYM("RETURN",726)) /*  UNWIND-EXIT */;
  return value0;
L29:;
  if (!((ecl_symbol_value(VV[7]))==(ECL_SYM("VALUES",897)))) { goto L33; }
  ecl_function_dispatch(cl_env_copy,VV[62])(1, VV[15]) /*  WT-NL      */;
  ecl_function_dispatch(cl_env_copy,VV[62])(1, VV[14]) /*  WT-NL      */;
  value0 = ecl_function_dispatch(cl_env_copy,VV[61])(1, ECL_SYM("VALUES",897)) /*  UNWIND-EXIT */;
  return value0;
L33:;
  value0 = ecl_function_dispatch(cl_env_copy,VV[61])(1, ECL_NIL) /*  UNWIND-EXIT */;
  return value0;
L27:;
  T0 = ecl_cdr(v2forms);
  if (!(ecl_endp(T0))) { goto L37; }
  {
   cl_object v3form;
   v3form = ecl_car(v2forms);
   {
    cl_object v4;
    v4 = ecl_symbol_value(VV[7]);
    if (!((v4)==(ECL_SYM("RETURN",726)))) { goto L48; }
    goto L45;
    goto L46;
L48:;
    goto L46;
L46:;
    if (!((v4)==(ECL_SYM("VALUES",897)))) { goto L42; }
    goto L43;
L45:;
   }
L43:;
   if (Null(ecl_function_dispatch(cl_env_copy,VV[63])(1, v3form) /*  C1FORM-SINGLE-VALUED-P */)) { goto L40; }
   goto L41;
L42:;
L41:;
   value0 = ecl_function_dispatch(cl_env_copy,VV[64])(1, v3form) /*  C2EXPR */;
   return value0;
L40:;
   ecl_bds_bind(cl_env_copy,VV[7],VV[12]);        /*  *DESTINATION*   */
   ecl_function_dispatch(cl_env_copy,VV[60])(1, v3form) /*  C2EXPR*   */;
   ecl_bds_unwind1(cl_env_copy);
   value0 = ecl_function_dispatch(cl_env_copy,VV[61])(1, VV[12]) /*  UNWIND-EXIT */;
   return value0;
  }
L37:;
  {
   cl_fixnum v4nv;
   cl_object v5forms;
   v4nv = ecl_length(v2forms);
   ecl_bds_bind(cl_env_copy,VV[18],ecl_make_fixnum(0)); /*  *INLINE-BLOCKS* */
   ecl_bds_push(cl_env_copy,VV[19]);              /*  *TEMP*          */
   T0 = ecl_function_dispatch(cl_env_copy,VV[65])(1, v2forms) /*  INLINE-ARGS */;
   T1 = ecl_function_dispatch(cl_env_copy,VV[66])(1, T0) /*  COERCE-LOCS */;
   v5forms = cl_nreverse(T1);
   ecl_function_dispatch(cl_env_copy,VV[62])(3, VV[20], ecl_make_fixnum(v4nv), VV[21]) /*  WT-NL */;
   {
    cl_object v6;
    cl_object v7vl;
    cl_fixnum v8i;
    {
     cl_fixnum v9;
     v9 = ecl_length(v5forms);
     v6 = ecl_make_integer((v9)-1);
    }
    v7vl = v5forms;
    {
     cl_object v9;
     v9 = v6;
     {
      bool v10;
      v10 = ECL_FIXNUMP(v9);
      if (ecl_unlikely(!(v10)))
         FEwrong_type_argument(ECL_SYM("FIXNUM",374),v9);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
     }
     v8i = ecl_fixnum(v9);
    }
    goto L63;
L62:;
    T0 = ecl_car(v7vl);
    ecl_function_dispatch(cl_env_copy,VV[62])(5, VV[22], ecl_make_fixnum(v8i), VV[23], T0, VV[21]) /*  WT-NL */;
    v7vl = ecl_cdr(v7vl);
    {
     cl_object v9;
     v9 = ecl_make_integer((v8i)-1);
     {
      bool v10;
      v10 = ECL_FIXNUMP(v9);
      if (ecl_unlikely(!(v10)))
         FEwrong_type_argument(ECL_SYM("FIXNUM",374),v9);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
     }
     v8i = ecl_fixnum(v9);
    }
L63:;
    if (v7vl==ECL_NIL) { goto L71; }
    goto L62;
L71:;
   }
   ecl_function_dispatch(cl_env_copy,VV[61])(1, ECL_SYM("VALUES",897)) /*  UNWIND-EXIT */;
   value0 = ecl_function_dispatch(cl_env_copy,VV[67])(0) /*  CLOSE-INLINE-BLOCKS */;
   ecl_bds_unwind1(cl_env_copy);
   ecl_bds_unwind1(cl_env_copy);
   return value0;
  }
 }
}
/*      function definition for C1MULTIPLE-VALUE-SETQ                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L5c1multiple_value_setq(cl_object v1args)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2vars;
   cl_object v3temp_vars;
   cl_object v4late_bindings;
   v2vars = ECL_NIL;
   v3temp_vars = ECL_NIL;
   v4late_bindings = ECL_NIL;
   ecl_function_dispatch(cl_env_copy,VV[53])(4, ECL_SYM("MULTIPLE-VALUE-SETQ",578), v1args, ecl_make_fixnum(2), ecl_make_fixnum(2)) /*  CHECK-ARGS-NUMBER */;
   {
    cl_object v5;
    T0 = ecl_car(v1args);
    v5 = cl_reverse(T0);
    goto L9;
L8:;
    {
     cl_object v6var;
     v6var = ecl_car(v5);
     if (ECL_SYMBOLP(v6var)) { goto L13; }
     ecl_function_dispatch(cl_env_copy,VV[69])(2, VV[25], v6var) /*  CMPERR */;
L13:;
     {
      cl_object v7var_or_form;
      cl_object v8type;
      v7var_or_form = ecl_function_dispatch(cl_env_copy,VV[70])(1, v6var) /*  CHK-SYMBOL-MACROLET */;
      v8type = ECL_T;
      if (!(ECL_SYMBOLP(v7var_or_form))) { goto L19; }
      if (Null(cl_constantp(1, v7var_or_form))) { goto L21; }
      ecl_function_dispatch(cl_env_copy,VV[69])(2, VV[26], v7var_or_form) /*  CMPERR */;
L21:;
      if (Null(ecl_function_dispatch(cl_env_copy,VV[71])(0) /*  POLICY-TYPE-ASSERTIONS */)) { goto L25; }
      v8type = ecl_function_dispatch(cl_env_copy,VV[72])(1, v7var_or_form) /*  VARIABLE-TYPE-IN-ENV */;
      if (Null(ecl_function_dispatch(cl_env_copy,VV[73])(1, v8type) /*  TRIVIAL-TYPE-P */)) { goto L23; }
      goto L24;
L25:;
L24:;
      v2vars = CONS(v7var_or_form,v2vars);
      goto L15;
L23:;
      goto L18;
L19:;
L18:;
      {
       cl_object v9new_var;
       v9new_var = cl_gensym(0);
       v2vars = CONS(v9new_var,v2vars);
       v3temp_vars = CONS(v9new_var,v3temp_vars);
       T0 = cl_list(3, ECL_SYM("CHECKED-VALUE",2040), v8type, v9new_var);
       T1 = cl_list(3, ECL_SYM("SETF",752), v7var_or_form, T0);
       v4late_bindings = CONS(T1,v4late_bindings);
      }
     }
L15:;
    }
    v5 = ecl_cdr(v5);
L9:;
    if (Null(v5)) { goto L38; }
    goto L8;
L38:;
   }
   {
    cl_object v5value;
    v5value = ecl_cadr(v1args);
    if (Null(v3temp_vars)) { goto L41; }
    T0 = cl_list(3, ECL_SYM("MULTIPLE-VALUE-SETQ",578), v2vars, v5value);
    value0 = cl_listX(4, ECL_SYM("LET*",480), v3temp_vars, T0, v4late_bindings);
    return value0;
L41:;
    if (!(ecl_endp(v2vars))) { goto L43; }
    value0 = cl_list(2, ECL_SYM("VALUES",897), v5value);
    return value0;
L43:;
    {
     cl_fixnum v6;
     v6 = ecl_length(v2vars);
     if (!((v6)==(1))) { goto L45; }
    }
    T0 = ecl_car(v2vars);
    value0 = cl_list(3, ECL_SYM("SETQ",753), T0, v5value);
    return value0;
L45:;
    v5value = ecl_function_dispatch(cl_env_copy,VV[74])(1, v5value) /*  C1EXPR */;
    {
     cl_object v6;
     v6 = ecl_fdefinition(VV[75]);
     {
      cl_object v7;
      cl_object v8;
      v7 = ECL_NIL;
      {
       cl_object v9;
       v9 = v2vars;
       if (ecl_unlikely(!ECL_LISTP(v9))) FEtype_error_list(v9);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v8 = v9;
      }
      {
       cl_object v9;
       cl_object v10;
       v9 = ecl_list1(ECL_NIL);
       v10 = v9;
L58:;
       if (!(ecl_endp(v8))) { goto L60; }
       goto L59;
L60:;
       v7 = _ecl_car(v8);
       {
        cl_object v11;
        v11 = _ecl_cdr(v8);
        if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v8 = v11;
       }
       {
        cl_object v11;
        v11 = v10;
        if (ecl_unlikely(ECL_ATOM(v11))) FEtype_error_cons(v11);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        T0 = v11;
       }
       T1 = ecl_function_dispatch(cl_env_copy,v6)(1, v7);
       v10 = ecl_list1(T1);
       (ECL_CONS_CDR(T0)=v10,T0);
       goto L58;
L59:;
       v2vars = ecl_cdr(v9);
       goto L50;
      }
     }
    }
L50:;
    T0 = ecl_function_dispatch(cl_env_copy,VV[57])(4, ECL_SYM("MULTIPLE-VALUE-SETQ",578), VV[5], v2vars, v5value) /*  MAKE-C1FORM* */;
    value0 = ecl_function_dispatch(cl_env_copy,VV[76])(2, v2vars, T0) /*  ADD-TO-SET-NODES-OF-VAR-LIST */;
    return value0;
   }
  }
 }
}
/*      function definition for BIND-OR-SET                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L6bind_or_set(cl_object v1loc, cl_object v2v, cl_object v3use_bind)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if ((v3use_bind)!=ECL_NIL) { goto L1; }
  value0 = ecl_function_dispatch(cl_env_copy,VV[77])(2, v1loc, v2v) /*  SET-VAR */;
  return value0;
L1:;
  T0 = ecl_function_dispatch(cl_env_copy,VV[78])(1, v2v) /*  VAR-REF  */;
  if (ecl_plusp(T0)) { goto L5; }
  {
   cl_object v4;
   v4 = ecl_function_dispatch(cl_env_copy,VV[79])(1, v2v) /*  VAR-KIND */;
   if (!((v4)==(ECL_SYM("SPECIAL",791)))) { goto L11; }
   goto L8;
   goto L9;
L11:;
   goto L9;
L9:;
   if (!((v4)==(VV[29]))) { goto L3; }
   goto L4;
L8:;
   goto L4;
  }
L5:;
L4:;
  value0 = ecl_function_dispatch(cl_env_copy,VV[80])(2, v1loc, v2v) /*  BIND */;
  return value0;
L3:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for VALUES-LOC-OR-VALUE0                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L7values_loc_or_value0(cl_object v1i)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ecl_plusp(v1i))) { goto L1; }
  value0 = ecl_function_dispatch(cl_env_copy,VV[81])(1, v1i) /*  VALUES-LOC */;
  return value0;
L1:;
  value0 = VV[12];
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for DO-M-V-SETQ                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L8do_m_v_setq(cl_object v1vars, cl_object v2form, cl_object v3use_bind)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_fixnum v4;
   v4 = ecl_length(v1vars);
   if (!((v4)==(1))) { goto L1; }
  }
  T0 = ecl_car(v1vars);
  ecl_bds_bind(cl_env_copy,VV[7],T0);             /*  *DESTINATION*   */
  ecl_function_dispatch(cl_env_copy,VV[60])(1, v2form) /*  C2EXPR*    */;
  value0 = ecl_symbol_value(VV[7]);
  cl_env_copy->nvalues = 1;
  ecl_bds_unwind1(cl_env_copy);
  return value0;
L1:;
  {
   cl_object v5;                                  /*  MIN-VALUES      */
   value0 = ecl_function_dispatch(cl_env_copy,VV[82])(1, v2form) /*  C1FORM-VALUES-NUMBER */;
   {
    v5 = value0;
   }
   ecl_bds_bind(cl_env_copy,VV[7],ECL_SYM("RETURN",726)); /*  *DESTINATION* */
   ecl_function_dispatch(cl_env_copy,VV[60])(1, v2form) /*  C2EXPR*   */;
   ecl_bds_unwind1(cl_env_copy);
   v5 = ((ecl_float_nan_p(v5) || ecl_greatereq(ecl_make_fixnum(1),v5))?ecl_make_fixnum(1):v5);
   {
    cl_object v6useful_extra_vars;
    cl_object v7nr;
    ecl_bds_push(cl_env_copy,VV[31]);             /*  *LCL*           */
    T0 = ecl_fdefinition(VV[83]);
    T1 = ecl_nthcdr(ecl_to_size(v5),v1vars);
    v6useful_extra_vars = cl_some(2, T0, T1);
    v7nr = ecl_function_dispatch(cl_env_copy,VV[84])(2, ECL_SYM("TYPE",1346), ECL_SYM("INT",1401)) /*  MAKE-LCL-VAR */;
    ecl_function_dispatch(cl_env_copy,VV[85])(0)  /*  WT-NL-OPEN-BRACE */;
    if (Null(v6useful_extra_vars)) { goto L13; }
    ecl_function_dispatch(cl_env_copy,VV[62])(3, VV[32], v7nr, VV[33]) /*  WT-NL */;
L13:;
    {
     cl_object v8i;
     v8i = ecl_make_fixnum(0);
     goto L18;
L17:;
     if (Null(v1vars)) { goto L20; }
     {
      cl_object v9;
      cl_object v10;
      {
       cl_object v11;
       v11 = v1vars;
       {
        cl_object v12;
        v12 = v11;
        if (ecl_unlikely(!ECL_LISTP(v12))) FEtype_error_list(v12);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v11)) { goto L27; }
       {
        cl_object v12;
        v12 = ECL_CONS_CDR(v11);
        v1vars = v12;
        v11 = ECL_CONS_CAR(v11);
       }
L27:;
       v9 = v11;
      }
      v10 = L7values_loc_or_value0(v8i);
      L6bind_or_set(v10, v9, v3use_bind);
     }
L20:;
     v8i = ecl_one_plus(v8i);
L18:;
     if (!(ecl_lower(v8i,v5))) { goto L36; }
     goto L17;
L36:;
    }
    if (Null(v6useful_extra_vars)) { goto L38; }
    {
     cl_object v8tmp;
     v8tmp = ecl_function_dispatch(cl_env_copy,VV[84])(0) /*  MAKE-LCL-VAR */;
     ecl_function_dispatch(cl_env_copy,VV[62])(3, VV[34], v8tmp, VV[21]) /*  WT-NL */;
     {
      cl_object v9v;
      cl_object v10;
      v9v = ECL_NIL;
      {
       cl_object v11;
       v11 = v1vars;
       if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v10 = v11;
      }
      {
       cl_object v11i;
       {
        cl_object v12;
        v12 = v5;
        {
         bool v13;
         v13 = ecl_numberp(v12);
         if (ecl_unlikely(!(v13)))
         FEwrong_type_argument(ECL_SYM("NUMBER",608),v12);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
        }
        v11i = v12;
       }
       {
        cl_object v12loc;
        v12loc = ECL_NIL;
        if (!(ecl_endp(v10))) { goto L52; }
        goto L51;
L52:;
        v9v = _ecl_car(v10);
        {
         cl_object v13;
         v13 = _ecl_cdr(v10);
         if (ecl_unlikely(!ECL_LISTP(v13))) FEtype_error_list(v13);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         v10 = v13;
        }
L50:;
        v12loc = L7values_loc_or_value0(v11i);
        if (Null(ecl_function_dispatch(cl_env_copy,VV[83])(1, v9v) /*  USEFUL-VAR-P */)) { goto L62; }
        ecl_function_dispatch(cl_env_copy,VV[62])(8, v8tmp, VV[35], v7nr, VV[36], v11i, VV[37], v12loc, VV[21]) /*  WT-NL */;
        L6bind_or_set(v8tmp, v9v, v3use_bind);
L62:;
        if (!(ecl_endp(v10))) { goto L65; }
        goto L51;
L65:;
        v9v = _ecl_car(v10);
        {
         cl_object v13;
         v13 = _ecl_cdr(v10);
         if (ecl_unlikely(!ECL_LISTP(v13))) FEtype_error_list(v13);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         v10 = v13;
        }
        v11i = ecl_one_plus(v11i);
        goto L50;
L51:;
       }
      }
     }
    }
L38:;
    ecl_function_dispatch(cl_env_copy,VV[86])(0)  /*  WT-NL-CLOSE-BRACE */;
    ecl_bds_unwind1(cl_env_copy);
   }
   value0 = VV[12];
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for C2MULTIPLE-VALUE-SETQ                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L9c2multiple_value_setq(cl_object v1c1form, cl_object v2vars, cl_object v3form)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = L8do_m_v_setq(v2vars, v3form, ECL_NIL);
  value0 = ecl_function_dispatch(cl_env_copy,VV[61])(1, T0) /*  UNWIND-EXIT */;
  return value0;
 }
}
/*      function definition for C1MULTIPLE-VALUE-BIND                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L10c1multiple_value_bind(cl_object v1args)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  ecl_function_dispatch(cl_env_copy,VV[53])(3, ECL_SYM("MULTIPLE-VALUE-BIND",574), v1args, ecl_make_fixnum(2)) /*  CHECK-ARGS-NUMBER */;
  {
   cl_object v2variables;
   cl_object v3init_form;
   T0 = ecl_function_dispatch(cl_env_copy,VV[89])(0) /*  CMP-ENV-COPY */;
   ecl_bds_bind(cl_env_copy,VV[39],T0);           /*  *CMP-ENV*       */
   {
    cl_object v4;
    v4 = v1args;
    {
     cl_object v5;
     v5 = v4;
     if (ecl_unlikely(!ECL_LISTP(v5))) FEtype_error_list(v5);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
    }
    if (Null(v4)) { goto L7; }
    {
     cl_object v5;
     v5 = ECL_CONS_CDR(v4);
     v1args = v5;
     v4 = ECL_CONS_CAR(v4);
    }
L7:;
    v2variables = v4;
   }
   {
    cl_object v4;
    v4 = v1args;
    {
     cl_object v5;
     v5 = v4;
     if (ecl_unlikely(!ECL_LISTP(v5))) FEtype_error_list(v5);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
    }
    if (Null(v4)) { goto L18; }
    {
     cl_object v5;
     v5 = ECL_CONS_CDR(v4);
     v1args = v5;
     v4 = ECL_CONS_CAR(v4);
    }
L18:;
    v3init_form = v4;
   }
   {
    cl_fixnum v4;
    v4 = ecl_length(v2variables);
    if (!((v4)==(1))) { goto L24; }
   }
   T0 = ecl_car(v2variables);
   T1 = cl_list(2, T0, v3init_form);
   T2 = ecl_list1(T1);
   value0 = cl_listX(3, ECL_SYM("LET*",480), T2, v1args);
   ecl_bds_unwind1(cl_env_copy);
   return value0;
L24:;
   {
    cl_object v5;                                 /*  BODY            */
    cl_object v6;                                 /*  SS              */
    cl_object v7;                                 /*  TS              */
    cl_object v8;                                 /*  IS              */
    cl_object v9;                                 /*  OTHER-DECLS     */
    value0 = ecl_function_dispatch(cl_env_copy,VV[90])(2, v1args, ECL_NIL) /*  C1BODY */;
    {
     const int v10 = cl_env_copy->nvalues;
     v5 = value0;
     cl_object v11;
     v11 = (v10<=1)? ECL_NIL : cl_env_copy->values[1];
     v6 = v11;
     v11 = (v10<=2)? ECL_NIL : cl_env_copy->values[2];
     v7 = v11;
     v11 = (v10<=3)? ECL_NIL : cl_env_copy->values[3];
     v8 = v11;
     v11 = (v10<=4)? ECL_NIL : cl_env_copy->values[4];
     v9 = v11;
    }
    {
     cl_object v10;
     v10 = ecl_fdefinition(VV[91]);
     {
      cl_object v11;
      cl_object v12;
      v11 = ECL_NIL;
      {
       cl_object v13;
       v13 = v6;
       if (ecl_unlikely(!ECL_LISTP(v13))) FEtype_error_list(v13);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v12 = v13;
      }
L33:;
      if (!(ecl_endp(v12))) { goto L35; }
      goto L34;
L35:;
      v11 = _ecl_car(v12);
      {
       cl_object v13;
       v13 = _ecl_cdr(v12);
       if (ecl_unlikely(!ECL_LISTP(v13))) FEtype_error_list(v13);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v12 = v13;
      }
      ecl_function_dispatch(cl_env_copy,v10)(1, v11);
      goto L33;
L34:;
      goto L27;
     }
    }
L27:;
    {
     cl_object v10vars;
     {
      cl_object v11name;
      cl_object v12;
      v11name = ECL_NIL;
      {
       cl_object v13;
       v13 = v2variables;
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
L53:;
       if (!(ecl_endp(v12))) { goto L55; }
       goto L54;
L55:;
       v11name = _ecl_car(v12);
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
       T1 = ecl_function_dispatch(cl_env_copy,VV[92])(4, v11name, v6, v8, v7) /*  C1MAKE-VAR */;
       v14 = ecl_list1(T1);
       (ECL_CONS_CDR(T0)=v14,T0);
       goto L53;
L54:;
       v10vars = ecl_cdr(v13);
       goto L46;
      }
     }
L46:;
     v3init_form = ecl_function_dispatch(cl_env_copy,VV[74])(1, v3init_form) /*  C1EXPR */;
     {
      cl_object v11;
      v11 = ecl_fdefinition(VV[93]);
      {
       cl_object v12;
       cl_object v13;
       v12 = ECL_NIL;
       {
        cl_object v14;
        v14 = v10vars;
        if (ecl_unlikely(!ECL_LISTP(v14))) FEtype_error_list(v14);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v13 = v14;
       }
L78:;
       if (!(ecl_endp(v13))) { goto L80; }
       goto L79;
L80:;
       v12 = _ecl_car(v13);
       {
        cl_object v14;
        v14 = _ecl_cdr(v13);
        if (ecl_unlikely(!ECL_LISTP(v14))) FEtype_error_list(v14);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v13 = v14;
       }
       ecl_function_dispatch(cl_env_copy,v11)(1, v12);
       goto L78;
L79:;
       goto L72;
      }
     }
L72:;
     ecl_function_dispatch(cl_env_copy,VV[94])(3, v2variables, v7, v8) /*  CHECK-VDECL */;
     v5 = ecl_function_dispatch(cl_env_copy,VV[95])(2, v9, v5) /*  C1DECL-BODY */;
     {
      cl_object v11;
      v11 = ecl_fdefinition(VV[96]);
      {
       cl_object v12;
       cl_object v13;
       v12 = ECL_NIL;
       {
        cl_object v14;
        v14 = v10vars;
        if (ecl_unlikely(!ECL_LISTP(v14))) FEtype_error_list(v14);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v13 = v14;
       }
L100:;
       if (!(ecl_endp(v13))) { goto L102; }
       goto L101;
L102:;
       v12 = _ecl_car(v13);
       {
        cl_object v14;
        v14 = _ecl_cdr(v13);
        if (ecl_unlikely(!ECL_LISTP(v14))) FEtype_error_list(v14);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v13 = v14;
       }
       ecl_function_dispatch(cl_env_copy,v11)(1, v12);
       goto L100;
L101:;
       goto L94;
      }
     }
L94:;
     T0 = ecl_function_dispatch(cl_env_copy,VV[97])(1, v5) /*  C1FORM-TYPE */;
     value0 = ecl_function_dispatch(cl_env_copy,VV[57])(9, ECL_SYM("MULTIPLE-VALUE-BIND",574), ECL_SYM("TYPE",1346), T0, VV[40], v10vars, VV[5], v10vars, v3init_form, v5) /*  MAKE-C1FORM* */;
     ecl_bds_unwind1(cl_env_copy);
     return value0;
    }
   }
  }
 }
}
/*      function definition for C2MULTIPLE-VALUE-BIND                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L11c2multiple_value_bind(cl_object v1c1form, cl_object v2vars, cl_object v3init_form, cl_object v4body)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v5env_grows;
   cl_object v6nr;
   cl_object v7min_values;
   cl_object v8max_values;
   ecl_bds_push(cl_env_copy,VV[42]);              /*  *UNWIND-EXIT*   */
   ecl_bds_push(cl_env_copy,VV[43]);              /*  *ENV-LVL*       */
   ecl_bds_push(cl_env_copy,VV[44]);              /*  *ENV*           */
   ecl_bds_push(cl_env_copy,VV[31]);              /*  *LCL*           */
   v5env_grows = ECL_NIL;
   v6nr = ecl_function_dispatch(cl_env_copy,VV[84])(2, ECL_SYM("TYPE",1346), ECL_SYM("INT",1401)) /*  MAKE-LCL-VAR */;
   ecl_bds_bind(cl_env_copy,VV[18],ecl_make_fixnum(0)); /*  *INLINE-BLOCKS* */
   v7min_values = ECL_NIL;
   v8max_values = ECL_NIL;
   value0 = ecl_function_dispatch(cl_env_copy,VV[82])(1, v3init_form) /*  C1FORM-VALUES-NUMBER */;
   {
    const int v9 = cl_env_copy->nvalues;
    v7min_values = value0;
    cl_object v10;
    v10 = (v9<=1)? ECL_NIL : cl_env_copy->values[1];
    v8max_values = v10;
   }
   {
    cl_object v9;
    v9 = v2vars;
    goto L11;
L10:;
    {
     cl_object v10var;
     {
      cl_object v11;
      v11 = ecl_car(v9);
      T0 = si_of_class_p(2, v11, VV[45]);
      if (ecl_unlikely(!((T0)!=ECL_NIL)))
         FEwrong_type_argument(VV[45],v11);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v10var = v11;
     }
     {
      cl_object v11kind;
      v11kind = ecl_function_dispatch(cl_env_copy,VV[99])(1, v10var) /*  LOCAL */;
      if (Null(v11kind)) { goto L19; }
      if (Null(ecl_function_dispatch(cl_env_copy,VV[83])(1, v10var) /*  USEFUL-VAR-P */)) { goto L17; }
      ecl_function_dispatch(cl_env_copy,VV[100])(0) /*  MAYBE-OPEN-INLINE-BLOCK */;
      T0 = ecl_function_dispatch(cl_env_copy,VV[101])(0) /*  NEXT-LCL */;
      ecl_function_dispatch(cl_env_copy,VV[80])(2, T0, v10var) /*  BIND */;
      T0 = ecl_function_dispatch(cl_env_copy,VV[102])(1, v11kind) /*  REP-TYPE->C-NAME */;
      ecl_function_dispatch(cl_env_copy,VV[62])(5, T0, VV[46], ecl_symbol_value(VV[47]), v10var, VV[21]) /*  WT-NL */;
      T0 = ecl_function_dispatch(cl_env_copy,VV[103])(1, v10var) /*  VAR-NAME */;
      ecl_function_dispatch(cl_env_copy,VV[104])(1, T0) /*  WT-COMMENT */;
      goto L17;
L19:;
      if ((v5env_grows)!=ECL_NIL) { goto L17; }
      v5env_grows = ecl_function_dispatch(cl_env_copy,VV[105])(1, v10var) /*  VAR-REF-CCB */;
     }
L17:;
    }
    v9 = ecl_cdr(v9);
L11:;
    if (Null(v9)) { goto L29; }
    goto L10;
L29:;
   }
   v5env_grows = ecl_function_dispatch(cl_env_copy,VV[106])(1, v5env_grows) /*  ENV-GROWS */;
   if (Null(v5env_grows)) { goto L31; }
   {
    cl_object v9env_lvl;
    v9env_lvl = ecl_symbol_value(VV[43]);
    ecl_function_dispatch(cl_env_copy,VV[100])(0) /*  MAYBE-OPEN-INLINE-BLOCK */;
    cl_set(VV[43],ecl_plus(ecl_symbol_value(VV[43]),ecl_make_fixnum(1)));
    T0 = ecl_symbol_value(VV[43]);
    ecl_function_dispatch(cl_env_copy,VV[62])(5, VV[48], T0, VV[49], v9env_lvl, VV[21]) /*  WT-NL */;
   }
L31:;
   L8do_m_v_setq(v2vars, v3init_form, ECL_T);
   ecl_function_dispatch(cl_env_copy,VV[64])(1, v4body) /*  C2EXPR    */;
   value0 = ecl_function_dispatch(cl_env_copy,VV[67])(0) /*  CLOSE-INLINE-BLOCKS */;
   ecl_bds_unwind_n(cl_env_copy,5);
   return value0;
  }
 }
}

#include "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/build/cmp/cmpmulti.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclt6SmzFa7_4xsZTr51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CMP;CMPMULTI.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclt6SmzFa7_4xsZTr51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  ecl_cmp_defun(VV[51]);                          /*  C1MULTIPLE-VALUE-CALL */
  ecl_cmp_defun(VV[52]);                          /*  C1MULTIPLE-VALUE-PROG1 */
  ecl_cmp_defun(VV[55]);                          /*  C1VALUES        */
  ecl_cmp_defun(VV[58]);                          /*  C2VALUES        */
  ecl_cmp_defun(VV[68]);                          /*  C1MULTIPLE-VALUE-SETQ */
  (void)0; /* No entry created for BIND-OR-SET */
  (void)0; /* No entry created for VALUES-LOC-OR-VALUE0 */
  (void)0; /* No entry created for DO-M-V-SETQ */
  ecl_cmp_defun(VV[87]);                          /*  C2MULTIPLE-VALUE-SETQ */
  ecl_cmp_defun(VV[88]);                          /*  C1MULTIPLE-VALUE-BIND */
  ecl_cmp_defun(VV[98]);                          /*  C2MULTIPLE-VALUE-BIND */
}
