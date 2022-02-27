/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CMP;CMPIF.LSP                                     */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/build/cmp/cmpif.eclh"
/*      function definition for C1IF                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L1c1if(cl_object v1args)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  ecl_function_dispatch(cl_env_copy,VV[40])(4, ECL_SYM("IF",948), v1args, ecl_make_fixnum(2), ecl_make_fixnum(3)) /*  CHECK-ARGS-NUMBER */;
  {
   cl_object v2test;
   T0 = ecl_car(v1args);
   v2test = ecl_function_dispatch(cl_env_copy,VV[41])(1, T0) /*  C1EXPR */;
   {
    cl_object v4;                                 /*  CONSTANT-P      */
    cl_object v5;                                 /*  VALUE           */
    value0 = ecl_function_dispatch(cl_env_copy,VV[42])(1, v2test) /*  C1FORM-CONSTANT-P */;
    {
     const int v6 = cl_env_copy->nvalues;
     v4 = value0;
     cl_object v7;
     v7 = (v6<=1)? ECL_NIL : cl_env_copy->values[1];
     v5 = v7;
    }
    if (Null(v4)) { goto L3; }
    if (Null(v5)) { goto L6; }
    value0 = ecl_cadr(v1args);
    cl_env_copy->nvalues = 1;
    return value0;
L6:;
    value0 = ecl_caddr(v1args);
    cl_env_copy->nvalues = 1;
    return value0;
   }
L3:;
   {
    cl_object v3true_branch;
    cl_object v4false_branch;
    T0 = ecl_cadr(v1args);
    v3true_branch = ecl_function_dispatch(cl_env_copy,VV[41])(1, T0) /*  C1EXPR */;
    T0 = ecl_caddr(v1args);
    v4false_branch = ecl_function_dispatch(cl_env_copy,VV[41])(1, T0) /*  C1EXPR */;
    T0 = ecl_function_dispatch(cl_env_copy,VV[43])(1, v3true_branch) /*  C1FORM-TYPE */;
    T1 = ecl_function_dispatch(cl_env_copy,VV[43])(1, v4false_branch) /*  C1FORM-TYPE */;
    T2 = ecl_function_dispatch(cl_env_copy,VV[44])(2, T0, T1) /*  VALUES-TYPE-OR */;
    value0 = ecl_function_dispatch(cl_env_copy,VV[45])(7, ECL_SYM("IF",948), ECL_SYM("TYPE",1346), T2, VV[0], v2test, v3true_branch, v4false_branch) /*  MAKE-C1FORM* */;
    return value0;
   }
  }
 }
}
/*      function definition for C1NOT                                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L2c1not(cl_object v1args)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  ecl_function_dispatch(cl_env_copy,VV[40])(4, ECL_SYM("NOT",586), v1args, ecl_make_fixnum(1), ecl_make_fixnum(1)) /*  CHECK-ARGS-NUMBER */;
  {
   cl_object v2value;
   T0 = ecl_car(v1args);
   v2value = ecl_function_dispatch(cl_env_copy,VV[41])(1, T0) /*  C1EXPR */;
   {
    cl_object v4;                                 /*  CONSTANT-P      */
    cl_object v5;                                 /*  VALUE           */
    value0 = ecl_function_dispatch(cl_env_copy,VV[42])(1, v2value) /*  C1FORM-CONSTANT-P */;
    {
     const int v6 = cl_env_copy->nvalues;
     v4 = value0;
     cl_object v7;
     v7 = (v6<=1)? ECL_NIL : cl_env_copy->values[1];
     v5 = v7;
    }
    if (Null(v4)) { goto L3; }
    value0 = Null(v5)?ECL_T:ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
   }
L3:;
   value0 = ecl_function_dispatch(cl_env_copy,VV[45])(5, VV[2], ECL_SYM("TYPE",1346), VV[3], VV[0], v2value) /*  MAKE-C1FORM* */;
   return value0;
  }
 }
}
/*      function definition for C1AND                                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L3c1and(cl_object v1args)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(v1args==ECL_NIL)) { goto L1; }
  value0 = ecl_function_dispatch(cl_env_copy,VV[48])(0) /*  C1T       */;
  return value0;
L1:;
  {
   cl_object v2values;
   cl_object v3last;
   cl_object v4butlast;
   v2values = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1args) /*  C1ARGS* */;
   T0 = ecl_last(v2values,1);
   v3last = ecl_car(T0);
   v4butlast = ecl_nbutlast(v2values,1);
   if (Null(v4butlast)) { goto L6; }
   T0 = ecl_function_dispatch(cl_env_copy,VV[50])(1, v3last) /*  C1FORM-PRIMARY-TYPE */;
   T1 = ecl_function_dispatch(cl_env_copy,VV[51])(2, ECL_SYM("NULL",607), T0) /*  TYPE-OR */;
   value0 = ecl_function_dispatch(cl_env_copy,VV[45])(6, VV[5], ECL_SYM("TYPE",1346), T1, VV[0], v4butlast, v3last) /*  MAKE-C1FORM* */;
   return value0;
L6:;
   value0 = v3last;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for C1OR                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L4c1or(cl_object v1args)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(v1args==ECL_NIL)) { goto L1; }
  value0 = ecl_function_dispatch(cl_env_copy,VV[53])(0) /*  C1NIL     */;
  return value0;
L1:;
  {
   cl_object v2values;
   cl_object v3last;
   cl_object v4butlast;
   v2values = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1args) /*  C1ARGS* */;
   T0 = ecl_last(v2values,1);
   v3last = ecl_car(T0);
   v4butlast = ecl_butlast(v2values,1);
   if (Null(v4butlast)) { goto L6; }
   T0 = ecl_fdefinition(VV[51]);
   T1 = ecl_fdefinition(VV[50]);
   T2 = ecl_function_dispatch(cl_env_copy,VV[50])(1, v3last) /*  C1FORM-PRIMARY-TYPE */;
   T3 = cl_reduce(6, T0, v4butlast, ECL_SYM("KEY",1288), T1, VV[8], T2);
   value0 = ecl_function_dispatch(cl_env_copy,VV[45])(6, VV[7], ECL_SYM("TYPE",1346), T3, VV[0], v4butlast, v3last) /*  MAKE-C1FORM* */;
   return value0;
L6:;
   value0 = v3last;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for C2IF                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L5c2if(cl_object v1c1form, cl_object v2fmla, cl_object v3form1, cl_object v4form2)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!((ecl_symbol_value(VV[10]))==(VV[11]))) { goto L1; }
  T0 = ecl_function_dispatch(cl_env_copy,VV[55])(1, v4form2) /*  C1FORM-NAME */;
  if (!((T0)==(ECL_SYM("LOCATION",1842)))) { goto L1; }
  {
   cl_object v5false_label;
   v5false_label = ecl_function_dispatch(cl_env_copy,VV[56])(0) /*  MAYBE-NEXT-LABEL */;
   T0 = cl_adjoin(2, v5false_label, ecl_symbol_value(VV[12]));
   ecl_bds_bind(cl_env_copy,VV[12],T0);           /*  *UNWIND-EXIT*   */
   T0 = cl_list(2, VV[13], v5false_label);
   ecl_bds_bind(cl_env_copy,VV[10],T0);           /*  *DESTINATION*   */
   ecl_function_dispatch(cl_env_copy,VV[57])(1, v2fmla) /*  C2EXPR*   */;
   ecl_bds_unwind1(cl_env_copy);
   ecl_function_dispatch(cl_env_copy,VV[58])(1, v3form1) /*  C2EXPR   */;
   value0 = ecl_function_dispatch(cl_env_copy,VV[59])(1, v5false_label) /*  MAYBE-WT-LABEL */;
   ecl_bds_unwind1(cl_env_copy);
   return value0;
  }
L1:;
  if (!((ecl_symbol_value(VV[10]))==(VV[11]))) { goto L7; }
  T0 = ecl_function_dispatch(cl_env_copy,VV[55])(1, v3form1) /*  C1FORM-NAME */;
  if (!((T0)==(ECL_SYM("LOCATION",1842)))) { goto L7; }
  {
   cl_object v6true_label;
   v6true_label = ecl_function_dispatch(cl_env_copy,VV[56])(0) /*  MAYBE-NEXT-LABEL */;
   T0 = cl_adjoin(2, v6true_label, ecl_symbol_value(VV[12]));
   ecl_bds_bind(cl_env_copy,VV[12],T0);           /*  *UNWIND-EXIT*   */
   T0 = cl_list(2, VV[14], v6true_label);
   ecl_bds_bind(cl_env_copy,VV[10],T0);           /*  *DESTINATION*   */
   ecl_function_dispatch(cl_env_copy,VV[57])(1, v2fmla) /*  C2EXPR*   */;
   ecl_bds_unwind1(cl_env_copy);
   ecl_function_dispatch(cl_env_copy,VV[58])(1, v4form2) /*  C2EXPR   */;
   value0 = ecl_function_dispatch(cl_env_copy,VV[59])(1, v6true_label) /*  MAYBE-WT-LABEL */;
   ecl_bds_unwind1(cl_env_copy);
   return value0;
  }
L7:;
  {
   cl_object v7false_label;
   v7false_label = ecl_function_dispatch(cl_env_copy,VV[60])(0) /*  NEXT-LABEL */;
   T0 = CONS(v7false_label,ecl_symbol_value(VV[12]));
   ecl_bds_bind(cl_env_copy,VV[12],T0);           /*  *UNWIND-EXIT*   */
   T0 = cl_list(2, VV[13], v7false_label);
   ecl_bds_bind(cl_env_copy,VV[10],T0);           /*  *DESTINATION*   */
   ecl_function_dispatch(cl_env_copy,VV[57])(1, v2fmla) /*  C2EXPR*   */;
   ecl_bds_unwind1(cl_env_copy);
   ecl_function_dispatch(cl_env_copy,VV[58])(1, v3form1) /*  C2EXPR   */;
   ecl_function_dispatch(cl_env_copy,VV[61])(1, v7false_label) /*  WT-LABEL */;
   ecl_bds_unwind1(cl_env_copy);
  }
  value0 = ecl_function_dispatch(cl_env_copy,VV[58])(1, v4form2) /*  C2EXPR */;
  return value0;
 }
}
/*      function definition for NEGATE-ARGUMENT                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L6negate_argument(cl_object v1inlined_arg, cl_object v2dest_loc)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3loc;
   cl_object v4rep_type;
   v3loc = ecl_cadr(v1inlined_arg);
   v4rep_type = ecl_function_dispatch(cl_env_copy,VV[62])(1, v3loc) /*  LOC-REPRESENTATION-TYPE */;
   T0 = ecl_fdefinition(VV[63]);
   T1 = ecl_list1(v1inlined_arg);
   T3 = ecl_function_dispatch(cl_env_copy,VV[62])(1, v2dest_loc) /*  LOC-REPRESENTATION-TYPE */;
   if (!((T3)==(VV[16]))) { goto L5; }
   if (!(ecl_eql(v4rep_type,VV[16]))) { goto L7; }
   T2 = VV[17];
   goto L4;
L7:;
   if (!(ecl_eql(v4rep_type,ECL_SYM("OBJECT",1305)))) { goto L9; }
   T2 = VV[18];
   goto L4;
L9:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L5:;
   if (!(ecl_eql(v4rep_type,VV[16]))) { goto L11; }
   T2 = VV[19];
   goto L4;
L11:;
   if (!(ecl_eql(v4rep_type,ECL_SYM("OBJECT",1305)))) { goto L13; }
   T2 = VV[20];
   goto L4;
L13:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L4:;
   value0 = cl_apply(3, T0, T1, T2);
   return value0;
  }
 }
}
/*      function definition for C2FMLA-NOT                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L7c2fmla_not(cl_object v1c1form, cl_object v2arg)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3dest;
   v3dest = ecl_symbol_value(VV[10]);
   if (Null(L8jump_true_destination_p(v3dest))) { goto L2; }
   T0 = ecl_cdr(v3dest);
   T1 = CONS(VV[13],T0);
   ecl_bds_bind(cl_env_copy,VV[10],T1);           /*  *DESTINATION*   */
   value0 = ecl_function_dispatch(cl_env_copy,VV[58])(1, v2arg) /*  C2EXPR */;
   ecl_bds_unwind1(cl_env_copy);
   return value0;
L2:;
   if (Null(L9jump_false_destination_p(v3dest))) { goto L4; }
   T0 = ecl_cdr(v3dest);
   T1 = CONS(VV[14],T0);
   ecl_bds_bind(cl_env_copy,VV[10],T1);           /*  *DESTINATION*   */
   value0 = ecl_function_dispatch(cl_env_copy,VV[58])(1, v2arg) /*  C2EXPR */;
   ecl_bds_unwind1(cl_env_copy);
   return value0;
L4:;
   {
    cl_object v4;
    v4 = ecl_symbol_value(VV[21]);
    ecl_bds_bind(cl_env_copy,VV[22],ecl_make_fixnum(0)); /*  *INLINE-BLOCKS* */
    ecl_bds_bind(cl_env_copy,VV[21],v4);          /*  *TEMP*          */
    T0 = ecl_function_dispatch(cl_env_copy,VV[65])(2, v2arg, ECL_NIL) /*  EMIT-INLINE-FORM */;
    T1 = L6negate_argument(T0, v3dest);
    ecl_function_dispatch(cl_env_copy,VV[66])(1, T1) /*  UNWIND-EXIT  */;
    value0 = ecl_function_dispatch(cl_env_copy,VV[67])(0) /*  CLOSE-INLINE-BLOCKS */;
    ecl_bds_unwind1(cl_env_copy);
    ecl_bds_unwind1(cl_env_copy);
    return value0;
   }
  }
 }
}
/*      function definition for JUMP-TRUE-DESTINATION-P               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L8jump_true_destination_p(cl_object v1dest)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ECL_CONSP(v1dest))) { goto L2; }
  T0 = _ecl_car(v1dest);
  value0 = ecl_make_bool((T0)==(VV[14]));
  cl_env_copy->nvalues = 1;
  return value0;
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for JUMP-FALSE-DESTINATION-P              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L9jump_false_destination_p(cl_object v1dest)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ECL_CONSP(v1dest))) { goto L2; }
  T0 = _ecl_car(v1dest);
  value0 = ecl_make_bool((T0)==(VV[13]));
  cl_env_copy->nvalues = 1;
  return value0;
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for C2FMLA-AND                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L10c2fmla_and(cl_object v1c1form, cl_object v2butlast, cl_object v3last)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(L9jump_false_destination_p(ecl_symbol_value(VV[10])))) { goto L1; }
  {
   cl_object v4;
   v4 = ecl_fdefinition(VV[57]);
   {
    cl_object v5;
    cl_object v6;
    v5 = ECL_NIL;
    {
     cl_object v7;
     v7 = v2butlast;
     if (ecl_unlikely(!ECL_LISTP(v7))) FEtype_error_list(v7);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v6 = v7;
    }
L9:;
    if (!(ecl_endp(v6))) { goto L11; }
    goto L10;
L11:;
    v5 = _ecl_car(v6);
    {
     cl_object v7;
     v7 = _ecl_cdr(v6);
     if (ecl_unlikely(!ECL_LISTP(v7))) FEtype_error_list(v7);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v6 = v7;
    }
    ecl_function_dispatch(cl_env_copy,v4)(1, v5);
    goto L9;
L10:;
    goto L3;
   }
  }
L3:;
  value0 = ecl_function_dispatch(cl_env_copy,VV[58])(1, v3last) /*  C2EXPR */;
  return value0;
L1:;
  {
   cl_object v4normal_exit;
   v4normal_exit = ecl_function_dispatch(cl_env_copy,VV[60])(0) /*  NEXT-LABEL */;
   T0 = CONS(v4normal_exit,ecl_symbol_value(VV[12]));
   ecl_bds_bind(cl_env_copy,VV[12],T0);           /*  *UNWIND-EXIT*   */
   {
    cl_object v5false_label;
    v5false_label = ecl_function_dispatch(cl_env_copy,VV[60])(0) /*  NEXT-LABEL */;
    T0 = CONS(v5false_label,ecl_symbol_value(VV[12]));
    ecl_bds_bind(cl_env_copy,VV[12],T0);          /*  *UNWIND-EXIT*   */
    T0 = cl_list(2, VV[13], v5false_label);
    ecl_bds_bind(cl_env_copy,VV[10],T0);          /*  *DESTINATION*   */
    {
     cl_object v6;
     v6 = ecl_fdefinition(VV[57]);
     {
      cl_object v7;
      cl_object v8;
      v7 = ECL_NIL;
      {
       cl_object v9;
       v9 = v2butlast;
       if (ecl_unlikely(!ECL_LISTP(v9))) FEtype_error_list(v9);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v8 = v9;
      }
L31:;
      if (!(ecl_endp(v8))) { goto L33; }
      goto L32;
L33:;
      v7 = _ecl_car(v8);
      {
       cl_object v9;
       v9 = _ecl_cdr(v8);
       if (ecl_unlikely(!ECL_LISTP(v9))) FEtype_error_list(v9);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v8 = v9;
      }
      ecl_function_dispatch(cl_env_copy,v6)(1, v7);
      goto L31;
L32:;
      ecl_bds_unwind1(cl_env_copy);
      goto L25;
     }
    }
L25:;
    ecl_function_dispatch(cl_env_copy,VV[58])(1, v3last) /*  C2EXPR   */;
    ecl_function_dispatch(cl_env_copy,VV[61])(1, v5false_label) /*  WT-LABEL */;
    ecl_bds_unwind1(cl_env_copy);
   }
   ecl_function_dispatch(cl_env_copy,VV[66])(1, ECL_NIL) /*  UNWIND-EXIT */;
   value0 = ecl_function_dispatch(cl_env_copy,VV[61])(1, v4normal_exit) /*  WT-LABEL */;
   ecl_bds_unwind1(cl_env_copy);
   return value0;
  }
 }
}
/*      function definition for C2FMLA-OR                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L11c2fmla_or(cl_object v1c1form, cl_object v2butlast, cl_object v3last)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(L8jump_true_destination_p(ecl_symbol_value(VV[10])))) { goto L1; }
  {
   cl_object v4;
   v4 = ecl_fdefinition(VV[57]);
   {
    cl_object v5;
    cl_object v6;
    v5 = ECL_NIL;
    {
     cl_object v7;
     v7 = v2butlast;
     if (ecl_unlikely(!ECL_LISTP(v7))) FEtype_error_list(v7);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v6 = v7;
    }
L9:;
    if (!(ecl_endp(v6))) { goto L11; }
    goto L10;
L11:;
    v5 = _ecl_car(v6);
    {
     cl_object v7;
     v7 = _ecl_cdr(v6);
     if (ecl_unlikely(!ECL_LISTP(v7))) FEtype_error_list(v7);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v6 = v7;
    }
    ecl_function_dispatch(cl_env_copy,v4)(1, v5);
    goto L9;
L10:;
    goto L3;
   }
  }
L3:;
  value0 = ecl_function_dispatch(cl_env_copy,VV[58])(1, v3last) /*  C2EXPR */;
  return value0;
L1:;
  if (Null(L9jump_false_destination_p(ecl_symbol_value(VV[10])))) { goto L22; }
  {
   cl_object v4true_label;
   v4true_label = ecl_function_dispatch(cl_env_copy,VV[60])(0) /*  NEXT-LABEL */;
   T0 = CONS(v4true_label,ecl_symbol_value(VV[12]));
   ecl_bds_bind(cl_env_copy,VV[12],T0);           /*  *UNWIND-EXIT*   */
   T0 = cl_list(2, VV[14], v4true_label);
   ecl_bds_bind(cl_env_copy,VV[10],T0);           /*  *DESTINATION*   */
   {
    cl_object v5;
    v5 = ecl_fdefinition(VV[57]);
    {
     cl_object v6;
     cl_object v7;
     v6 = ECL_NIL;
     {
      cl_object v8;
      v8 = v2butlast;
      if (ecl_unlikely(!ECL_LISTP(v8))) FEtype_error_list(v8);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v7 = v8;
     }
L32:;
     if (!(ecl_endp(v7))) { goto L34; }
     goto L33;
L34:;
     v6 = _ecl_car(v7);
     {
      cl_object v8;
      v8 = _ecl_cdr(v7);
      if (ecl_unlikely(!ECL_LISTP(v8))) FEtype_error_list(v8);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v7 = v8;
     }
     ecl_function_dispatch(cl_env_copy,v5)(1, v6);
     goto L32;
L33:;
     ecl_bds_unwind1(cl_env_copy);
     goto L26;
    }
   }
L26:;
   ecl_function_dispatch(cl_env_copy,VV[58])(1, v3last) /*  C2EXPR    */;
   ecl_function_dispatch(cl_env_copy,VV[61])(1, v4true_label) /*  WT-LABEL */;
   ecl_bds_unwind1(cl_env_copy);
  }
  value0 = ecl_function_dispatch(cl_env_copy,VV[66])(1, ECL_T) /*  UNWIND-EXIT */;
  return value0;
L22:;
  {
   cl_object v4common_exit;
   v4common_exit = ecl_function_dispatch(cl_env_copy,VV[60])(0) /*  NEXT-LABEL */;
   T0 = CONS(v4common_exit,ecl_symbol_value(VV[12]));
   ecl_bds_bind(cl_env_copy,VV[12],T0);           /*  *UNWIND-EXIT*   */
   {
    cl_object v5normal_exit;
    v5normal_exit = ecl_function_dispatch(cl_env_copy,VV[60])(0) /*  NEXT-LABEL */;
    T0 = CONS(v5normal_exit,ecl_symbol_value(VV[12]));
    ecl_bds_bind(cl_env_copy,VV[12],T0);          /*  *UNWIND-EXIT*   */
    {
     cl_object v6;
     v6 = v2butlast;
     goto L53;
L52:;
     {
      cl_object v7f;
      v7f = ecl_car(v6);
      ecl_bds_bind(cl_env_copy,VV[10],VV[25]);    /*  *DESTINATION*   */
      ecl_function_dispatch(cl_env_copy,VV[57])(1, v7f) /*  C2EXPR*   */;
      ecl_bds_unwind1(cl_env_copy);
      L12set_jump_true(VV[25], v5normal_exit);
     }
     v6 = ecl_cdr(v6);
L53:;
     if (Null(v6)) { goto L61; }
     goto L52;
L61:;
    }
    ecl_function_dispatch(cl_env_copy,VV[58])(1, v3last) /*  C2EXPR   */;
    ecl_function_dispatch(cl_env_copy,VV[61])(1, v5normal_exit) /*  WT-LABEL */;
    ecl_bds_unwind1(cl_env_copy);
   }
   ecl_function_dispatch(cl_env_copy,VV[66])(1, VV[25]) /*  UNWIND-EXIT */;
   value0 = ecl_function_dispatch(cl_env_copy,VV[61])(1, v4common_exit) /*  WT-LABEL */;
   ecl_bds_unwind1(cl_env_copy);
   return value0;
  }
 }
}
/*      function definition for SET-JUMP-TRUE                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L12set_jump_true(cl_object v1loc, cl_object v2label)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v4;                                  /*  CONSTANTP       */
   cl_object v5;                                  /*  VALUE           */
   value0 = ecl_function_dispatch(cl_env_copy,VV[71])(1, v1loc) /*  LOC-IMMEDIATE-VALUE-P */;
   {
    const int v6 = cl_env_copy->nvalues;
    v4 = value0;
    cl_object v7;
    v7 = (v6<=1)? ECL_NIL : cl_env_copy->values[1];
    v5 = v7;
   }
   if ((v4)!=ECL_NIL) { goto L2; }
   T0 = ecl_function_dispatch(cl_env_copy,VV[62])(1, v1loc) /*  LOC-REPRESENTATION-TYPE */;
   if (!((T0)==(VV[16]))) { goto L5; }
   ecl_function_dispatch(cl_env_copy,VV[72])(3, VV[27], v1loc, VV[28]) /*  WT-NL */;
   goto L4;
L5:;
   ecl_function_dispatch(cl_env_copy,VV[72])(1, VV[29]) /*  WT-NL     */;
   ecl_function_dispatch(cl_env_copy,VV[73])(2, ECL_SYM("OBJECT",1305), v1loc) /*  WT-COERCE-LOC */;
   ecl_function_dispatch(cl_env_copy,VV[74])(1, VV[30]) /*  WT        */;
L4:;
   if (Null(ecl_function_dispatch(cl_env_copy,VV[75])(1, v2label) /*  UNWIND-NO-EXIT */)) { goto L9; }
   cl_set(VV[31],ecl_plus(ecl_symbol_value(VV[31]),ecl_make_fixnum(1)));
   ecl_function_dispatch(cl_env_copy,VV[72])(0)   /*  WT-NL           */;
   ecl_function_dispatch(cl_env_copy,VV[76])(1, v2label) /*  WT-GO    */;
   value0 = ecl_function_dispatch(cl_env_copy,VV[77])(0) /*  WT-NL-CLOSE-BRACE */;
   return value0;
L9:;
   ecl_function_dispatch(cl_env_copy,VV[74])(1, VV[32]) /*  WT        */;
   ecl_function_dispatch(cl_env_copy,VV[76])(1, v2label) /*  WT-GO    */;
   value0 = ecl_function_dispatch(cl_env_copy,VV[74])(1, VV[33]) /*  WT */;
   return value0;
L2:;
   {
    cl_object v6;
    v6 = ecl_make_bool(v5==ECL_NIL);
    if (Null(v6)) { goto L18; }
    value0 = v6;
    cl_env_copy->nvalues = 1;
    return value0;
L18:;
    ecl_function_dispatch(cl_env_copy,VV[75])(1, v2label) /*  UNWIND-NO-EXIT */;
    ecl_function_dispatch(cl_env_copy,VV[72])(0)  /*  WT-NL           */;
    value0 = ecl_function_dispatch(cl_env_copy,VV[76])(1, v2label) /*  WT-GO */;
    return value0;
   }
  }
 }
}
/*      function definition for SET-JUMP-FALSE                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L13set_jump_false(cl_object v1loc, cl_object v2label)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v4;                                  /*  CONSTANTP       */
   cl_object v5;                                  /*  VALUE           */
   value0 = ecl_function_dispatch(cl_env_copy,VV[71])(1, v1loc) /*  LOC-IMMEDIATE-VALUE-P */;
   {
    const int v6 = cl_env_copy->nvalues;
    v4 = value0;
    cl_object v7;
    v7 = (v6<=1)? ECL_NIL : cl_env_copy->values[1];
    v5 = v7;
   }
   if ((v4)!=ECL_NIL) { goto L2; }
   T0 = ecl_function_dispatch(cl_env_copy,VV[62])(1, v1loc) /*  LOC-REPRESENTATION-TYPE */;
   if (!((T0)==(VV[16]))) { goto L5; }
   ecl_function_dispatch(cl_env_copy,VV[72])(3, VV[35], v1loc, VV[36]) /*  WT-NL */;
   goto L4;
L5:;
   ecl_function_dispatch(cl_env_copy,VV[72])(1, VV[37]) /*  WT-NL     */;
   ecl_function_dispatch(cl_env_copy,VV[73])(2, ECL_SYM("OBJECT",1305), v1loc) /*  WT-COERCE-LOC */;
   ecl_function_dispatch(cl_env_copy,VV[74])(1, VV[36]) /*  WT        */;
L4:;
   if (Null(ecl_function_dispatch(cl_env_copy,VV[75])(1, v2label) /*  UNWIND-NO-EXIT */)) { goto L9; }
   cl_set(VV[31],ecl_plus(ecl_symbol_value(VV[31]),ecl_make_fixnum(1)));
   ecl_function_dispatch(cl_env_copy,VV[72])(0)   /*  WT-NL           */;
   ecl_function_dispatch(cl_env_copy,VV[76])(1, v2label) /*  WT-GO    */;
   value0 = ecl_function_dispatch(cl_env_copy,VV[77])(0) /*  WT-NL-CLOSE-BRACE */;
   return value0;
L9:;
   ecl_function_dispatch(cl_env_copy,VV[74])(1, VV[32]) /*  WT        */;
   ecl_function_dispatch(cl_env_copy,VV[76])(1, v2label) /*  WT-GO    */;
   value0 = ecl_function_dispatch(cl_env_copy,VV[74])(1, VV[33]) /*  WT */;
   return value0;
L2:;
   if (Null(v5)) { goto L17; }
   value0 = v5;
   cl_env_copy->nvalues = 1;
   return value0;
L17:;
   ecl_function_dispatch(cl_env_copy,VV[75])(1, v2label) /*  UNWIND-NO-EXIT */;
   ecl_function_dispatch(cl_env_copy,VV[72])(0)   /*  WT-NL           */;
   value0 = ecl_function_dispatch(cl_env_copy,VV[76])(1, v2label) /*  WT-GO */;
   return value0;
  }
 }
}

#include "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/build/cmp/cmpif.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclQ9ze6xa7_kdrZTr51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CMP;CMPIF.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclQ9ze6xa7_kdrZTr51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  ecl_cmp_defun(VV[39]);                          /*  C1IF            */
  ecl_cmp_defun(VV[46]);                          /*  C1NOT           */
  ecl_cmp_defun(VV[47]);                          /*  C1AND           */
  ecl_cmp_defun(VV[52]);                          /*  C1OR            */
  ecl_cmp_defun(VV[54]);                          /*  C2IF            */
  (void)0; /* No entry created for NEGATE-ARGUMENT */
  ecl_cmp_defun(VV[64]);                          /*  C2FMLA-NOT      */
  (void)0; /* No entry created for JUMP-TRUE-DESTINATION-P */
  (void)0; /* No entry created for JUMP-FALSE-DESTINATION-P */
  ecl_cmp_defun(VV[68]);                          /*  C2FMLA-AND      */
  ecl_cmp_defun(VV[69]);                          /*  C2FMLA-OR       */
  ecl_cmp_defun(VV[70]);                          /*  SET-JUMP-TRUE   */
  ecl_cmp_defun(VV[78]);                          /*  SET-JUMP-FALSE  */
}
