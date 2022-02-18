/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CLOS;METHOD.LSP                                   */
#include <ecl/ecl-cmp.h>
#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/clos/method.eclh"
/*      function definition for GENERIC-FUNCTION-METHOD-CLASS         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L1generic_function_method_class(cl_object v1generic_function)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(ecl_symbol_value(VV[3]))) { goto L1; }
  value0 = cl_slot_value(v1generic_function, VV[4]);
  return value0;
L1:;
  value0 = cl_find_class(1, ECL_SYM("STANDARD-METHOD",977));
  return value0;
 }
}
/*      function definition for PROTOTYPES-FOR-MAKE-METHOD-LAMBDA     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L2prototypes_for_make_method_lambda(cl_object v1name)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if ((ecl_symbol_value(VV[3]))!=ECL_NIL) { goto L1; }
  cl_env_copy->nvalues = 2;
  cl_env_copy->values[1] = ECL_NIL;
  cl_env_copy->values[0] = ECL_NIL;
  return cl_env_copy->values[0];
L1:;
  {
   cl_object v2gf_;
   if (Null(cl_fboundp(v1name))) { goto L5; }
   v2gf_ = cl_fdefinition(v1name);
   goto L3;
L5:;
   v2gf_ = ECL_NIL;
   goto L3;
L3:;
   if (v2gf_==ECL_NIL) { goto L9; }
   if (ECL_INSTANCEP(v2gf_)) { goto L7; }
   goto L8;
L9:;
L8:;
   T0 = cl_find_class(1, ECL_SYM("STANDARD-GENERIC-FUNCTION",976));
   T1 = ecl_function_dispatch(cl_env_copy,ECL_SYM("CLASS-PROTOTYPE",1554))(1, T0) /*  CLASS-PROTOTYPE */;
   T2 = cl_find_class(1, ECL_SYM("STANDARD-METHOD",977));
   T3 = ecl_function_dispatch(cl_env_copy,ECL_SYM("CLASS-PROTOTYPE",1554))(1, T2) /*  CLASS-PROTOTYPE */;
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = T3;
   cl_env_copy->values[0] = T1;
   return cl_env_copy->values[0];
L7:;
   value0 = L1generic_function_method_class(v2gf_);
   if ((value0)!=ECL_NIL) { goto L13; }
   T0 = cl_find_class(1, ECL_SYM("STANDARD-METHOD",977));
   goto L11;
L13:;
   T0 = value0;
   goto L11;
L11:;
   T1 = ecl_function_dispatch(cl_env_copy,ECL_SYM("CLASS-PROTOTYPE",1554))(1, T0) /*  CLASS-PROTOTYPE */;
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = T1;
   cl_env_copy->values[0] = v2gf_;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function DEFMETHOD                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC3defmethod(cl_object v1, cl_object v2env)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4name;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[39])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v5;
    v5 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4name = v5;
   }
   {
    cl_object v6;                                 /*  QUALIFIERS      */
    cl_object v7;                                 /*  SPECIALIZED-LAMBDA-LIST */
    cl_object v8;                                 /*  BODY            */
    value0 = L14parse_defmethod(v3);
    {
     const int v9 = cl_env_copy->nvalues;
     v6 = value0;
     cl_object v10;
     v10 = (v9<=1)? ECL_NIL : cl_env_copy->values[1];
     v7 = v10;
     v10 = (v9<=2)? ECL_NIL : cl_env_copy->values[2];
     v8 = v10;
    }
    {
     cl_object v10;                               /*  LAMBDA-LIST     */
     cl_object v11;                               /*  REQUIRED-PARAMETERS */
     cl_object v12;                               /*  SPECIALIZERS    */
     value0 = L16parse_specialized_lambda_list(v7);
     {
      const int v13 = cl_env_copy->nvalues;
      v10 = value0;
      cl_object v14;
      v14 = (v13<=1)? ECL_NIL : cl_env_copy->values[1];
      v11 = v14;
      v14 = (v13<=2)? ECL_NIL : cl_env_copy->values[2];
      v12 = v14;
     }
     {
      cl_object v14;                              /*  LAMBDA-FORM     */
      cl_object v15;                              /*  DOCUMENTATION   */
      value0 = L7make_raw_lambda(v4name, v10, v11, v12, v8, v2env);
      {
       const int v16 = cl_env_copy->nvalues;
       v14 = value0;
       cl_object v17;
       v17 = (v16<=2)? ECL_NIL : cl_env_copy->values[2];
       v15 = v17;
      }
      {
       cl_object v17;                             /*  PROTO-GF        */
       cl_object v18;                             /*  PROTO-METHOD    */
       value0 = L2prototypes_for_make_method_lambda(v4name);
       {
        const int v19 = cl_env_copy->nvalues;
        v17 = value0;
        cl_object v20;
        v20 = (v19<=1)? ECL_NIL : cl_env_copy->values[1];
        v18 = v20;
       }
       {
        cl_object v20;                            /*  FN-FORM         */
        cl_object v21;                            /*  OPTIONS         */
        value0 = ecl_function_dispatch(cl_env_copy,VV[16])(4, v17, v18, v14, v2env) /*  MAKE-METHOD-LAMBDA */;
        {
         const int v22 = cl_env_copy->nvalues;
         v20 = value0;
         cl_object v23;
         v23 = (v22<=1)? ECL_NIL : cl_env_copy->values[1];
         v21 = v23;
        }
        if (Null(v15)) { goto L13; }
        v21 = cl_listX(3, ECL_SYM("DOCUMENTATION",1244), v15, v21);
L13:;
        if (Null(ecl_symbol_value(ECL_SYM("*REGISTER-WITH-PDE-HOOK*",1203)))) { goto L16; }
        T0 = ecl_symbol_value(ECL_SYM("*REGISTER-WITH-PDE-HOOK*",1203));
        T1 = cl_copy_tree(ecl_symbol_value(ECL_SYM("*SOURCE-LOCATION*",1202)));
        T2 = cl_list(2, ECL_SYM("QUOTE",681), v4name);
        T3 = cl_list(2, ECL_SYM("QUOTE",681), v6);
        T4 = L4specializers_expression(v12);
        T5 = cl_list(2, ECL_SYM("QUOTE",681), v10);
        T6 = L6simplify_lambda(v20);
        T7 = L5maybe_remove_block(T6);
        {
         cl_object v22;
         v22 = ecl_fdefinition(ECL_SYM("MAYBE-QUOTE",1742));
         {
          cl_object v23;
          cl_object v24;
          v23 = ECL_NIL;
          {
          cl_object v25;
          v25 = v21;
          if (ecl_unlikely(!ECL_LISTP(v25))) FEtype_error_list(v25);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          v24 = v25;
          }
          {
          cl_object v25;
          cl_object v26;
          v25 = ecl_list1(ECL_NIL);
          v26 = v25;
L27:;
          if (!(ecl_endp(v24))) { goto L29; }
          goto L28;
L29:;
          v23 = _ecl_car(v24);
          {
          cl_object v27;
          v27 = _ecl_cdr(v24);
          if (ecl_unlikely(!ECL_LISTP(v27))) FEtype_error_list(v27);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          v24 = v27;
          }
          {
          cl_object v27;
          v27 = v26;
          if (ecl_unlikely(ECL_ATOM(v27))) FEtype_error_cons(v27);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          T9 = v27;
          }
          T10 = ecl_function_dispatch(cl_env_copy,v22)(1, v23);
          v26 = ecl_list1(T10);
          (ECL_CONS_CDR(T9)=v26,T9);
          goto L27;
L28:;
          T8 = ecl_cdr(v25);
          goto L19;
          }
         }
        }
L19:;
        T9 = cl_listX(7, VV[7], T2, T3, T4, T5, T7, T8);
        value0 = ecl_function_dispatch(cl_env_copy,T0)(3, T1, v1, T9);
        return value0;
L16:;
        T0 = cl_list(2, ECL_SYM("QUOTE",681), v4name);
        T1 = cl_list(2, ECL_SYM("QUOTE",681), v6);
        T2 = L4specializers_expression(v12);
        T3 = cl_list(2, ECL_SYM("QUOTE",681), v10);
        T4 = L6simplify_lambda(v20);
        T5 = L5maybe_remove_block(T4);
        {
         cl_object v22;
         v22 = ecl_fdefinition(ECL_SYM("MAYBE-QUOTE",1742));
         {
          cl_object v23;
          cl_object v24;
          v23 = ECL_NIL;
          {
          cl_object v25;
          v25 = v21;
          if (ecl_unlikely(!ECL_LISTP(v25))) FEtype_error_list(v25);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          v24 = v25;
          }
          {
          cl_object v25;
          cl_object v26;
          v25 = ecl_list1(ECL_NIL);
          v26 = v25;
L53:;
          if (!(ecl_endp(v24))) { goto L55; }
          goto L54;
L55:;
          v23 = _ecl_car(v24);
          {
          cl_object v27;
          v27 = _ecl_cdr(v24);
          if (ecl_unlikely(!ECL_LISTP(v27))) FEtype_error_list(v27);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          v24 = v27;
          }
          {
          cl_object v27;
          v27 = v26;
          if (ecl_unlikely(ECL_ATOM(v27))) FEtype_error_cons(v27);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          T7 = v27;
          }
          T8 = ecl_function_dispatch(cl_env_copy,v22)(1, v23);
          v26 = ecl_list1(T8);
          (ECL_CONS_CDR(T7)=v26,T7);
          goto L53;
L54:;
          T6 = ecl_cdr(v25);
          goto L45;
          }
         }
        }
L45:;
        value0 = cl_listX(7, VV[7], T0, T1, T2, T3, T5, T6);
        return value0;
       }
      }
     }
    }
   }
  }
 }
}
/*      function definition for SPECIALIZERS-EXPRESSION               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L4specializers_expression(cl_object v1specializers)
{
 cl_object T0, T1, T2, T3, T4;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2spec;
   cl_object v3;
   v2spec = ECL_NIL;
   {
    cl_object v4;
    v4 = v1specializers;
    if (ecl_unlikely(!ECL_LISTP(v4))) FEtype_error_list(v4);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v3 = v4;
   }
   {
    cl_object v4;
    cl_object v5;
    v4 = ecl_list1(ECL_NIL);
    v5 = v4;
L8:;
    if (!(ecl_endp(v3))) { goto L10; }
    goto L9;
L10:;
    v2spec = _ecl_car(v3);
    {
     cl_object v6;
     v6 = _ecl_cdr(v3);
     if (ecl_unlikely(!ECL_LISTP(v6))) FEtype_error_list(v6);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v3 = v6;
    }
    {
     cl_object v6;
     v6 = v5;
     if (ecl_unlikely(ECL_ATOM(v6))) FEtype_error_cons(v6);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     T1 = v6;
    }
    if (!(ECL_ATOM(v2spec))) { goto L24; }
    T2 = v2spec;
    goto L23;
L24:;
    {
     cl_object v6value;
     v6value = ecl_cadr(v2spec);
     if (!(ECL_ATOM(v6value))) { goto L30; }
     if (ECL_SYMBOLP(v6value)) { goto L28; }
     goto L29;
L30:;
     T4 = ecl_car(v6value);
     if (!((T4)==(ECL_SYM("QUOTE",681)))) { goto L28; }
L29:;
     T3 = ecl_function_dispatch(cl_env_copy,ECL_SYM("CONSTANT-FORM-VALUE",2118))(1, v6value) /*  CONSTANT-FORM-VALUE */;
     goto L26;
L28:;
     T3 = cl_list(2, ECL_SYM("UNQUOTE",1036), v6value);
    }
L26:;
    T2 = cl_list(2, ECL_SYM("EQL",336), T3);
L23:;
    v5 = ecl_list1(T2);
    (ECL_CONS_CDR(T1)=v5,T1);
    goto L8;
L9:;
    T0 = ecl_cdr(v4);
    goto L1;
   }
  }
L1:;
  value0 = cl_list(2, ECL_SYM("QUASIQUOTE",1532), T0);
  return value0;
 }
}
/*      function definition for MAYBE-REMOVE-BLOCK                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L5maybe_remove_block(cl_object v1method_lambda)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_car(v1method_lambda);
  if (!((T0)==(ECL_SYM("LAMBDA",454)))) { goto L1; }
  {
   cl_object v3;                                  /*  DECLARATIONS    */
   cl_object v4;                                  /*  BODY            */
   T0 = ecl_cddr(v1method_lambda);
   value0 = ecl_function_dispatch(cl_env_copy,VV[41])(1, T0) /*  FIND-DECLARATIONS */;
   {
    const int v5 = cl_env_copy->nvalues;
    v3 = value0;
    cl_object v6;
    v6 = (v5<=1)? ECL_NIL : cl_env_copy->values[1];
    v4 = v6;
   }
   {
    cl_object v5block;
    v5block = ECL_NIL;
    T0 = ecl_cdr(v4);
    if (!(T0==ECL_NIL)) { goto L1; }
    v5block = ecl_car(v4);
    if (!(ECL_LISTP(v5block))) { goto L1; }
    T0 = ecl_car(v5block);
    if (!((T0)==(ECL_SYM("BLOCK",139)))) { goto L1; }
    T0 = ecl_cadr(v5block);
    T1 = ecl_cadr(v1method_lambda);
    T2 = ecl_cddr(v5block);
    T3 = ecl_append(v3,T2);
    v1method_lambda = cl_listX(4, ECL_SYM("LAMBDA-BLOCK",1367), T0, T1, T3);
   }
  }
L1:;
  value0 = v1method_lambda;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for SIMPLIFY-LAMBDA                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L6simplify_lambda(cl_object v1fn_form)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2aux;
   v2aux = v1fn_form;
   {
    cl_object v3;
    v3 = v2aux;
    {
     cl_object v4;
     v4 = v3;
     if (ecl_unlikely(!ECL_LISTP(v4))) FEtype_error_list(v4);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
    }
    if (Null(v3)) { goto L10; }
    {
     cl_object v4;
     v4 = ECL_CONS_CDR(v3);
     v2aux = v4;
     v3 = ECL_CONS_CAR(v3);
    }
L10:;
    T0 = v3;
   }
   if (!((T0)==(ECL_SYM("LAMBDA",454)))) { goto L2; }
   {
    cl_object v3;
    v3 = v2aux;
    {
     cl_object v4;
     v4 = v3;
     if (ecl_unlikely(!ECL_LISTP(v4))) FEtype_error_list(v4);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
    }
    if (Null(v3)) { goto L22; }
    {
     cl_object v4;
     v4 = ECL_CONS_CDR(v3);
     v2aux = v4;
     v3 = ECL_CONS_CAR(v3);
    }
L22:;
    T0 = v3;
   }
   if (!(ecl_equalp(T0,VV[10]))) { goto L2; }
   {
    cl_object v3;
    v3 = v2aux;
    {
     cl_object v4;
     v4 = v3;
     if (ecl_unlikely(!ECL_LISTP(v4))) FEtype_error_list(v4);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
    }
    if (Null(v3)) { goto L34; }
    {
     cl_object v4;
     v4 = ECL_CONS_CDR(v3);
     v2aux = v4;
     v3 = ECL_CONS_CAR(v3);
    }
L34:;
    T0 = v3;
   }
   if (!(ecl_equalp(T0,VV[11]))) { goto L2; }
   T0 = ecl_cdr(v2aux);
   if (!(T0==ECL_NIL)) { goto L2; }
   v2aux = ecl_car(v2aux);
   {
    cl_fixnum v3;
    v3 = ecl_length(v2aux);
    if (!((v3)==(3))) { goto L2; }
   }
   T0 = ecl_car(v2aux);
   if (!((T0)==(ECL_SYM("APPLY",91)))) { goto L2; }
   T0 = ecl_caddr(v2aux);
   if (!((T0)==(ECL_SYM(".COMBINED-METHOD-ARGS.",1534)))) { goto L2; }
   v2aux = ecl_cadr(v2aux);
   if (!(ECL_LISTP(v2aux))) { goto L2; }
   T0 = ecl_car(v2aux);
   if (!((T0)==(ECL_SYM("LAMBDA",454)))) { goto L2; }
   value0 = v2aux;
   cl_env_copy->nvalues = 1;
   return value0;
L2:;
   value0 = cl_error(1, VV[12]);
   return value0;
  }
 }
}
/*      function definition for MAKE-RAW-LAMBDA                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L7make_raw_lambda(cl_object v1name, cl_object v2lambda_list, cl_object v3required_parameters, cl_object v4specializers, cl_object v5body, cl_object v6env)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v8;                                  /*  DECLARATIONS    */
   cl_object v9;                                  /*  REAL-BODY       */
   cl_object v10;                                 /*  DOCUMENTATION   */
   value0 = ecl_function_dispatch(cl_env_copy,VV[41])(1, v5body) /*  FIND-DECLARATIONS */;
   {
    const int v11 = cl_env_copy->nvalues;
    v8 = value0;
    cl_object v12;
    v12 = (v11<=1)? ECL_NIL : cl_env_copy->values[1];
    v9 = v12;
    v12 = (v11<=2)? ECL_NIL : cl_env_copy->values[2];
    v10 = v12;
   }
   if (Null(ecl_memql(ECL_SYM("&KEY",12),v2lambda_list))) { goto L2; }
   if ((ecl_memql(ECL_SYM("&ALLOW-OTHER-KEYS",8),v2lambda_list))!=ECL_NIL) { goto L2; }
   {
    cl_object v11x;
    v11x = cl_position(2, ECL_SYM("&AUX",9), v2lambda_list);
    T0 = cl_subseq(3, v2lambda_list, ecl_make_fixnum(0), v11x);
    if (Null(v11x)) { goto L9; }
    T1 = cl_subseq(2, v2lambda_list, v11x);
    goto L7;
L9:;
    T1 = ECL_NIL;
    goto L7;
L7:;
    v2lambda_list = cl_append(4, T0, VV[14], T1, ECL_NIL);
   }
L2:;
   {
    cl_object v11copied_variables;
    cl_object v12ignorable;
    cl_object v13class_declarations;
    cl_object v14block;
    cl_object v15method_lambda;
    v11copied_variables = ECL_NIL;
    T0 = CONS(ECL_SYM("IGNORABLE",429),v3required_parameters);
    v12ignorable = cl_list(2, ECL_SYM("DECLARE",276), T0);
    if (Null(ecl_symbol_value(VV[2]))) { goto L15; }
    {
     cl_object v16name;
     cl_object v17;
     v16name = ECL_NIL;
     {
      cl_object v18;
      v18 = v3required_parameters;
      if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v17 = v18;
     }
     {
      cl_object v18type;
      cl_object v19;
      v18type = ECL_NIL;
      {
       cl_object v20;
       v20 = v4specializers;
       if (ecl_unlikely(!ECL_LISTP(v20))) FEtype_error_list(v20);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v19 = v20;
      }
      {
       cl_object v20;
       cl_object v21;
       v20 = ecl_list1(ECL_NIL);
       v21 = v20;
L27:;
       if (!(ecl_endp(v17))) { goto L29; }
       goto L28;
L29:;
       v16name = _ecl_car(v17);
       {
        cl_object v22;
        v22 = _ecl_cdr(v17);
        if (ecl_unlikely(!ECL_LISTP(v22))) FEtype_error_list(v22);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v17 = v22;
       }
       if (!(ecl_endp(v19))) { goto L37; }
       goto L28;
L37:;
       v18type = _ecl_car(v19);
       {
        cl_object v22;
        v22 = _ecl_cdr(v19);
        if (ecl_unlikely(!ECL_LISTP(v22))) FEtype_error_list(v22);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v19 = v22;
       }
       if ((v18type)==(ECL_T)) { goto L45; }
       if (!(ECL_SYMBOLP(v18type))) { goto L45; }
       T1 = cl_list(2, v16name, v16name);
       v11copied_variables = CONS(T1,v11copied_variables);
       {
        cl_object v22;
        T2 = cl_list(3, ECL_SYM("TYPE",871), v18type, v16name);
        T3 = cl_list(2, VV[15], v16name);
        v22 = cl_list(2, T2, T3);
        {
         cl_object v23;
         v23 = v21;
         if (ecl_unlikely(ECL_ATOM(v23))) FEtype_error_cons(v23);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         T2 = v23;
        }
        (ECL_CONS_CDR(T2)=v22,T2);
        T1 = v22;
       }
       v21 = ecl_cdr(T1);
L45:;
       goto L27;
L28:;
       T0 = ecl_cdr(v20);
       goto L14;
      }
     }
    }
L15:;
    T0 = ECL_NIL;
L14:;
    T1 = cl_list(2, ECL_SYM("FUNCTION-BLOCK-NAME",1085), v1name);
    T2 = ecl_list1(T1);
    T3 = ecl_cdar(v8);
    v13class_declarations = cl_nconc(3, T0, T2, T3);
    T0 = si_function_block_name(v1name);
    v14block = cl_listX(3, ECL_SYM("BLOCK",139), T0, v9);
    if (Null(v13class_declarations)) { goto L63; }
    T1 = CONS(ECL_SYM("DECLARE",276),v13class_declarations);
    T0 = ecl_list1(T1);
    goto L61;
L63:;
    T0 = ECL_NIL;
    goto L61;
L61:;
    if (Null(v11copied_variables)) { goto L66; }
    T1 = cl_list(4, ECL_SYM("LET*",480), v11copied_variables, v12ignorable, v14block);
    goto L65;
L66:;
    T1 = v14block;
L65:;
    T2 = cl_list(2, v12ignorable, T1);
    T3 = ecl_append(T0,T2);
    v15method_lambda = cl_listX(3, ECL_SYM("LAMBDA",454), v2lambda_list, T3);
    cl_env_copy->nvalues = 3;
    cl_env_copy->values[2] = v10;
    cl_env_copy->values[1] = v8;
    cl_env_copy->values[0] = v15method_lambda;
    return cl_env_copy->values[0];
   }
  }
 }
}
/*      function definition for MAKE-METHOD-LAMBDA                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L8make_method_lambda(cl_object v1gf, cl_object v2method, cl_object v3method_lambda, cl_object v4env)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v6;                                  /*  IN-CLOSURE-P    */
   value0 = L12walk_method_lambda(v3method_lambda, v4env);
   {
    const int v7 = cl_env_copy->nvalues;
    cl_object v8;
    v8 = (v7<=2)? ECL_NIL : cl_env_copy->values[2];
    v6 = v8;
   }
   if (Null(v6)) { goto L3; }
   T0 = L9add_call_next_method_closure(v3method_lambda);
   goto L2;
L3:;
   T0 = v3method_lambda;
L2:;
   T1 = cl_list(3, ECL_SYM("APPLY",91), T0, ECL_SYM(".COMBINED-METHOD-ARGS.",1534));
   T2 = cl_list(4, ECL_SYM("LAMBDA",454), VV[10], VV[11], T1);
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = T2;
   return cl_env_copy->values[0];
  }
 }
}
/*      function definition for ADD-CALL-NEXT-METHOD-CLOSURE          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L9add_call_next_method_closure(cl_object v1method_lambda)
{
 cl_object T0, T1, T2, T3, T4;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;                                  /*  DECLARATIONS    */
   cl_object v4;                                  /*  REAL-BODY       */
   T0 = ecl_cddr(v1method_lambda);
   value0 = ecl_function_dispatch(cl_env_copy,VV[41])(1, T0) /*  FIND-DECLARATIONS */;
   {
    const int v5 = cl_env_copy->nvalues;
    v3 = value0;
    cl_object v6;
    v6 = (v5<=1)? ECL_NIL : cl_env_copy->values[1];
    v4 = v6;
   }
   T0 = ecl_cadr(v1method_lambda);
   T1 = cl_listX(3, ECL_SYM("FLET",375), VV[18], v4);
   T2 = cl_list(3, ECL_SYM("LET*",480), VV[17], T1);
   T3 = ecl_list1(T2);
   T4 = ecl_append(v3,T3);
   value0 = cl_listX(3, ECL_SYM("LAMBDA",454), T0, T4);
   return value0;
  }
 }
}
/*      function definition for ENVIRONMENT-CONTAINS-CLOSURE          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L10environment_contains_closure(cl_object v1env)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_fixnum v2counter;
   v2counter = 0;
   {
    cl_object v3;
    v3 = ecl_car(v1env);
    goto L5;
L4:;
    {
     cl_object v4item;
     v4item = ecl_car(v3);
     if (!((v4item)==(ECL_SYM("FUNCTION-BOUNDARY",1918)))) { goto L9; }
     {
      cl_fixnum v5;
      {
       cl_object v6;
       v6 = ecl_plus(ecl_make_fixnum(v2counter),ecl_make_fixnum(1));
       {
        bool v7;
        v7 = ECL_FIXNUMP(v6);
        if (ecl_unlikely(!(v7)))
         FEwrong_type_argument(ECL_SYM("FIXNUM",374),v6);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       v2counter = ecl_fixnum(v6);
      }
      v5 = v2counter;
      if (!((v5)>(1))) { goto L9; }
     }
     value0 = ECL_T;
     cl_env_copy->nvalues = 1;
     return value0;
L9:;
    }
    v3 = ecl_cdr(v3);
L5:;
    if (Null(v3)) { goto L18; }
    goto L4;
L18:;
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      function definition for WALK-METHOD-LAMBDA                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L12walk_method_lambda(cl_object v1method_lambda, cl_object v2env)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 cl_object CLV0, CLV1, CLV2;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object env1 = env0;
   env1 = ECL_NIL;
   CLV0 = env1 = CONS(ECL_NIL,env1);              /*  CALL-NEXT-METHOD-P */
   CLV1 = env1 = CONS(ECL_NIL,env1);              /*  NEXT-METHOD-P-P */
   CLV2 = env1 = CONS(ECL_NIL,env1);              /*  IN-CLOSURE-P    */
   {
    cl_object v3;
    v3 = ecl_make_cclosure_va((cl_objectfn)LC11code_walker,env1,Cblock,2);
    ecl_bds_bind(cl_env_copy,ECL_SYM("*CODE-WALKER*",1649),v3); /*  *CODE-WALKER* */
    si_eval_with_env(5, v1method_lambda, v2env, ECL_NIL, ECL_T, ECL_SYM("COMPILE-TOPLEVEL",1229));
    ecl_bds_unwind1(cl_env_copy);
   }
   T0 = ECL_CONS_CAR(CLV0);
   T1 = ECL_CONS_CAR(CLV1);
   cl_env_copy->nvalues = 3;
   cl_env_copy->values[2] = ECL_CONS_CAR(CLV2);
   cl_env_copy->values[1] = T1;
   cl_env_copy->values[0] = T0;
   return cl_env_copy->values[0];
  }
 }
}
/*      closure CODE-WALKER                                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC11code_walker(cl_narg narg, cl_object v1form, cl_object v2env, ...)
{
 cl_object T0;
 cl_object CLV0, CLV1, CLV2;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV2 = env0;                                     /*  IN-CLOSURE-P    */
 CLV1 = _ecl_cdr(CLV2);
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=2)) FEwrong_num_arguments_anonym();
 {
TTL:
  if (ECL_ATOM(v1form)) { goto L1; }
  {
   cl_object v3name;
   v3name = ecl_car(v1form);
   if (!((v3name)==(ECL_SYM("CALL-NEXT-METHOD",933)))) { goto L4; }
   value0 = ECL_CONS_CAR(CLV0);
   if ((value0)!=ECL_NIL) { goto L9; }
   ECL_CONS_CAR(CLV0) = ECL_T;
   goto L7;
L9:;
   ECL_CONS_CAR(CLV0) = value0;
   goto L7;
L7:;
   value0 = ECL_CONS_CAR(CLV2);
   if ((value0)!=ECL_NIL) { goto L13; }
   ECL_CONS_CAR(CLV2) = L10environment_contains_closure(v2env);
   goto L11;
L13:;
   ECL_CONS_CAR(CLV2) = value0;
   goto L11;
L11:;
   goto L1;
L4:;
   if (!((v3name)==(ECL_SYM("NEXT-METHOD-P",960)))) { goto L15; }
   ECL_CONS_CAR(CLV1) = ECL_T;
   value0 = ECL_CONS_CAR(CLV2);
   if ((value0)!=ECL_NIL) { goto L21; }
   ECL_CONS_CAR(CLV2) = L10environment_contains_closure(v2env);
   goto L19;
L21:;
   ECL_CONS_CAR(CLV2) = value0;
   goto L19;
L19:;
   goto L1;
L15:;
   if (!((v3name)==(ECL_SYM("FUNCTION",398)))) { goto L1; }
   T0 = ecl_cadr(v1form);
   if (!((T0)==(ECL_SYM("CALL-NEXT-METHOD",933)))) { goto L24; }
   ECL_CONS_CAR(CLV2) = ECL_T;
   ECL_CONS_CAR(CLV0) = ECL_SYM("FUNCTION",398);
L24:;
   T0 = ecl_cadr(v1form);
   if (!((T0)==(ECL_SYM("NEXT-METHOD-P",960)))) { goto L1; }
   ECL_CONS_CAR(CLV1) = ECL_SYM("FUNCTION",398);
   ECL_CONS_CAR(CLV2) = ECL_T;
  }
L1:;
  value0 = v1form;
  cl_env_copy->nvalues = 1;
  return value0;
 }
 }
}
/*      function definition for LEGAL-GENERIC-FUNCTION-NAME-P         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L13legal_generic_function_name_p(cl_object v1name)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = si_valid_function_name_p(v1name);
  return value0;
 }
}
/*      function definition for PARSE-DEFMETHOD                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L14parse_defmethod(cl_object v1cdr_of_form)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2qualifiers;
   cl_object v3spec_ll;
   v2qualifiers = ECL_NIL;
   v3spec_ll = ECL_NIL;
L4:;
   if (Null(ecl_car(v1cdr_of_form))) { goto L6; }
   T0 = ecl_car(v1cdr_of_form);
   if (!(ECL_ATOM(T0))) { goto L6; }
   {
    cl_object v4;
    v4 = v1cdr_of_form;
    {
     cl_object v5;
     v5 = v4;
     if (ecl_unlikely(!ECL_LISTP(v5))) FEtype_error_list(v5);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
    }
    if (Null(v4)) { goto L15; }
    {
     cl_object v5;
     v5 = ECL_CONS_CDR(v4);
     {
      cl_object v6;
      v6 = v5;
      if (ecl_unlikely(!ECL_LISTP(v6))) FEtype_error_list(v6);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v1cdr_of_form = v6;
     }
     v4 = ECL_CONS_CAR(v4);
    }
L15:;
    T0 = v4;
   }
   v2qualifiers = CONS(T0,v2qualifiers);
   goto L5;
L6:;
   v2qualifiers = cl_nreverse(v2qualifiers);
   goto L3;
L5:;
   goto L4;
L3:;
   {
    cl_object v4;
    v4 = v1cdr_of_form;
    {
     cl_object v5;
     v5 = v4;
     if (ecl_unlikely(!ECL_LISTP(v5))) FEtype_error_list(v5);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
    }
    if (Null(v4)) { goto L31; }
    {
     cl_object v5;
     v5 = ECL_CONS_CDR(v4);
     {
      cl_object v6;
      v6 = v5;
      if (ecl_unlikely(!ECL_LISTP(v6))) FEtype_error_list(v6);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v1cdr_of_form = v6;
     }
     v4 = ECL_CONS_CAR(v4);
    }
L31:;
    v3spec_ll = v4;
   }
   cl_env_copy->nvalues = 3;
   cl_env_copy->values[2] = v1cdr_of_form;
   cl_env_copy->values[1] = v3spec_ll;
   cl_env_copy->values[0] = v2qualifiers;
   return cl_env_copy->values[0];
  }
 }
}
/*      function definition for IMPLICIT-GENERIC-LAMBDA               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L15implicit_generic_lambda(cl_object v1lambda_list)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(v1lambda_list)) { goto L1; }
  {
   cl_object v2acc;
   v2acc = ECL_NIL;
   {
    cl_object v3ll;
    cl_object v4elt;
    v3ll = v1lambda_list;
    v4elt = ecl_car(v3ll);
    goto L8;
L7:;
    v2acc = CONS(v4elt,v2acc);
    v3ll = ecl_cdr(v3ll);
    v4elt = ecl_car(v3ll);
L8:;
    T0 = ecl_cdr(v3ll);
    if (ecl_endp(T0)) { goto L16; }
    if ((v4elt)==(ECL_SYM("&KEY",12))) { goto L16; }
    goto L7;
L16:;
    T0 = CONS(v4elt,v2acc);
    value0 = cl_nreverse(T0);
    return value0;
   }
  }
L1:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for EXTRACT-LAMBDA-LIST                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object clos_extract_lambda_list(cl_object v1specialized_lambda_list)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = L16parse_specialized_lambda_list(v1specialized_lambda_list);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for EXTRACT-SPECIALIZER-NAMES             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object clos_extract_specializer_names(cl_object v1specialized_lambda_list)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   struct ecl_stack_frame _ecl_inner_frame_aux;
   cl_object _ecl_inner_frame = ecl_stack_frame_open(cl_env_copy,(cl_object)&_ecl_inner_frame_aux,0);
   {
    cl_object v2;
    v2 = _ecl_inner_frame;
    {
     cl_object v3;
     v3 = ECL_SYM("LIST",483);
     cl_env_copy->values[0] = L16parse_specialized_lambda_list(v1specialized_lambda_list);
     ecl_stack_frame_push_values(v2);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;cl_env_copy->values[0]=ecl_apply_from_stack_frame(v2,v3);
     value0 = cl_env_copy->values[0];
    }
   }
   ecl_stack_frame_close(_ecl_inner_frame);
  }
  T0 = value0;
  value0 = ecl_caddr(T0);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for PARSE-SPECIALIZED-LAMBDA-LIST         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L16parse_specialized_lambda_list(cl_object v1specialized_lambda_list)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2arglist;
   cl_object v3lambda_list;
   cl_object v4ll;
   cl_object v5required_parameters;
   cl_object v6specializers;
   cl_object v7arg;
   cl_object v8variable;
   cl_object v9specializer;
   T0 = si_process_lambda_list(v1specialized_lambda_list, ECL_SYM("METHOD",956));
   v2arglist = ecl_cdr(T0);
   v3lambda_list = cl_copy_list(v1specialized_lambda_list);
   v4ll = v3lambda_list;
   v5required_parameters = ECL_NIL;
   v6specializers = ECL_NIL;
   v7arg = ECL_NIL;
   v8variable = ECL_NIL;
   v9specializer = ECL_NIL;
   goto L11;
L10:;
   v7arg = ecl_car(v2arglist);
   if (!(ECL_ATOM(v7arg))) { goto L16; }
   v8variable = v7arg;
   v9specializer = ECL_T;
   goto L15;
L16:;
   T0 = ecl_cddr(v7arg);
   if (ecl_endp(T0)) { goto L21; }
   si_simple_program_error(2, VV[23], v7arg);
   goto L15;
L21:;
   v8variable = ecl_car(v7arg);
   v9specializer = ecl_cadr(v7arg);
   if (!(v9specializer==ECL_NIL)) { goto L23; }
   si_simple_program_error(1, VV[24]);
   goto L15;
L23:;
   {
    cl_object v10;
    v10 = ecl_make_bool(ECL_ATOM(v9specializer));
    if (Null(v10)) { goto L29; }
    goto L15;
L29:;
    {
     cl_object v11;
     T0 = ecl_car(v9specializer);
     if (!((T0)==(ECL_SYM("EQL",336)))) { goto L33; }
     if (Null(ecl_cdr(v9specializer))) { goto L33; }
     T0 = ecl_cddr(v9specializer);
     v11 = ecl_make_bool(ecl_endp(T0));
     goto L31;
L33:;
     v11 = ECL_NIL;
     goto L31;
L31:;
     if (Null(v11)) { goto L36; }
     goto L15;
L36:;
     si_simple_program_error(2, VV[23], v7arg);
    }
   }
L15:;
   {
    cl_object v10;
    v10 = v8variable;
    {
     cl_object v11;
     v11 = v4ll;
     if (ecl_unlikely(ECL_ATOM(v11))) FEtype_error_cons(v11);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     T0 = v11;
    }
    (ECL_CONS_CAR(T0)=v10,T0);
   }
   v5required_parameters = CONS(v8variable,v5required_parameters);
   v6specializers = CONS(v9specializer,v6specializers);
   v2arglist = ecl_cdr(v2arglist);
   v4ll = ecl_cdr(v4ll);
L11:;
   if (v2arglist==ECL_NIL) { goto L52; }
   goto L10;
L52:;
   T0 = cl_nreverse(v5required_parameters);
   T1 = cl_nreverse(v6specializers);
   cl_env_copy->nvalues = 3;
   cl_env_copy->values[2] = T1;
   cl_env_copy->values[1] = T0;
   cl_env_copy->values[0] = v3lambda_list;
   return cl_env_copy->values[0];
  }
 }
}
/*      function definition for DECLARATION-SPECIALIZERS              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L17declaration_specializers(cl_object v1arglist, cl_object v2declarations)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4argscan;
   cl_object v5declist;
   if (Null(v2declarations)) { goto L2; }
   v3 = ecl_cdr(v2declarations);
   goto L1;
L2:;
   v3 = ECL_NIL;
L1:;
   v4argscan = v1arglist;
   v5declist = v3;
   goto L8;
L7:;
   T0 = ecl_car(v4argscan);
   if (!(ECL_LISTP(T0))) { goto L10; }
   T0 = ecl_cadar(v4argscan);
   T1 = ecl_caar(v4argscan);
   T2 = cl_list(3, ECL_SYM("TYPE",871), T0, T1);
   v5declist = CONS(T2,v5declist);
L10:;
   v4argscan = ecl_cdr(v4argscan);
L8:;
   if (v4argscan==ECL_NIL) { goto L15; }
   T0 = ecl_car(v4argscan);
   if ((ecl_memql(T0,VV[25]))!=ECL_NIL) { goto L15; }
   goto L7;
L15:;
   value0 = CONS(ECL_SYM("DECLARE",276),v5declist);
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for COMPUTE-METHOD-KEYWORDS               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L18compute_method_keywords(cl_object v1lambda_list)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;                                  /*  KEYWORDS        */
   cl_object v4;                                  /*  ALLOW-OTHER-KEYS */
   value0 = si_process_lambda_list(v1lambda_list, ECL_T);
   {
    const int v5 = cl_env_copy->nvalues;
    cl_object v6;
    v6 = (v5<=4)? ECL_NIL : cl_env_copy->values[4];
    v3 = v6;
    v6 = (v5<=5)? ECL_NIL : cl_env_copy->values[5];
    v4 = v6;
   }
   if (Null(v4)) { goto L2; }
   value0 = ECL_T;
   cl_env_copy->nvalues = 1;
   return value0;
L2:;
   {
    cl_object v5;
    cl_object v6k;
    cl_object v7;
    v5 = ecl_cdr(v3);
    v6k = ECL_NIL;
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
L11:;
     if (!(ecl_endp(v7))) { goto L13; }
     goto L12;
L13:;
     v6k = _ecl_car(v7);
     {
      cl_object v10;
      v10 = ecl_cddddr(v7);
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
     v9 = ecl_list1(v6k);
     (ECL_CONS_CDR(T0)=v9,T0);
     goto L11;
L12:;
     value0 = ecl_cdr(v8);
     cl_env_copy->nvalues = 1;
     return value0;
    }
   }
  }
 }
}
/*      function definition for MAKE-METHOD                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L19make_method(cl_object v1method_class, cl_object v2qualifiers, cl_object v3specializers, cl_object v4lambda_list, cl_object v5fun, cl_object v6options)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v7_class;
   cl_object v8method;
   if (!(ECL_INSTANCEP(v1method_class))) { goto L2; }
   v7_class = v1method_class;
   goto L1;
L2:;
   v7_class = cl_find_class(1, v1method_class);
L1:;
   v8method = si_allocate_raw_instance(ECL_NIL, v7_class, ecl_make_fixnum(9));
   si_instance_set(v8method, ecl_make_fixnum(0), ECL_NIL);
   si_instance_set(v8method, ecl_make_fixnum(1), v4lambda_list);
   si_instance_set(v8method, ecl_make_fixnum(2), v3specializers);
   si_instance_set(v8method, ecl_make_fixnum(3), v2qualifiers);
   si_instance_set(v8method, ecl_make_fixnum(4), v5fun);
   si_instance_set(v8method, ecl_make_fixnum(5), ECL_NIL);
   si_instance_set(v8method, ecl_make_fixnum(6), ECL_NIL);
   si_instance_set(v8method, ecl_make_fixnum(7), ECL_NIL);
   si_instance_set(v8method, ecl_make_fixnum(8), ECL_NIL);
   if (Null(v7_class)) { goto L14; }
   si_instance_sig_set(v8method);
L14:;
   value0 = v8method;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for METHOD-P                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L20method_p(cl_object v1x)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ecl_make_bool(ECL_INSTANCEP(v1x));
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for ADD-METHOD                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L21add_method(cl_object v1gf, cl_object v2method)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3name;
   cl_object v4method_entry;
   v3name = cl_slot_value(v1gf, ECL_SYM("NAME",1596));
   v4method_entry = ecl_assql(v3name,ecl_symbol_value(VV[1]));
   if ((v4method_entry)!=ECL_NIL) { goto L3; }
   v4method_entry = ecl_list1(v3name);
   cl_set(VV[1],CONS(v4method_entry,ecl_symbol_value(VV[1])));
L3:;
   {
    cl_object v5;
    T0 = ecl_cdr(v4method_entry);
    v5 = CONS(v2method,T0);
    {
     cl_object v6;
     v6 = v4method_entry;
     if (ecl_unlikely(ECL_ATOM(v6))) FEtype_error_cons(v6);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     T0 = v6;
    }
    (ECL_CONS_CDR(T0)=v5,T0);
   }
   {
    cl_object v5;
    T0 = ecl_instance_ref((v1gf),(7));
    v5 = CONS(v2method,T0);
    si_instance_set(v1gf, ecl_make_fixnum(7), v5);
   }
   si_instance_set(v2method, ecl_make_fixnum(0), v1gf);
   T0 = ecl_instance_ref((v1gf),(3));
   if ((T0)!=ECL_UNBOUND) { goto L17; }
   {
    cl_object v5;
    T0 = ecl_instance_ref((v2method),(1));
    v5 = L15implicit_generic_lambda(T0);
    si_instance_set(v1gf, ecl_make_fixnum(3), v5);
   }
   {
    cl_object v5;
    T0 = ecl_instance_ref((v2method),(1));
    T1 = si_process_lambda_list(T0, ECL_T);
    v5 = ecl_cdr(T1);
    si_instance_set(v1gf, ecl_make_fixnum(4), v5);
   }
L17:;
   ecl_function_dispatch(cl_env_copy,VV[52])(1, v1gf) /*  COMPUTE-G-F-SPEC-LIST */;
   ecl_function_dispatch(cl_env_copy,VV[53])(1, v1gf) /*  SET-GENERIC-FUNCTION-DISPATCH */;
   value0 = v2method;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for FIND-METHOD                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L24find_method(cl_narg narg, cl_object v1gf, cl_object v2qualifiers, cl_object v3specializers, ...)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<3)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>4)) FEwrong_num_arguments_anonym();
 {
  cl_object v4errorp;
  va_list args; va_start(args,v3specializers);
  {
   int i = 3;
   if (i >= narg) {
    v4errorp = ECL_T;
   } else {
    i++;
    v4errorp = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v5;
   cl_object v6;
   v5 = ecl_make_cfun((cl_objectfn_fixed)LC23specializer_,ECL_NIL,Cblock,2);
   v6 = ecl_make_cfun((cl_objectfn_fixed)LC22filter_specializer,ECL_NIL,Cblock,1);
   {
    cl_fixnum v7;
    v7 = ecl_length(v3specializers);
    T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("GENERIC-FUNCTION-ARGUMENT-PRECEDENCE-ORDER",1580))(1, v1gf) /*  GENERIC-FUNCTION-ARGUMENT-PRECEDENCE-ORDER */;
    {
     cl_fixnum v8;
     v8 = ecl_length(T0);
     if (!((v7)!=(v8))) { goto L3; }
    }
   }
   T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("GENERIC-FUNCTION-NAME",1586))(1, v1gf) /*  GENERIC-FUNCTION-NAME */;
   cl_error(3, VV[31], v3specializers, T0);
L3:;
   {
    cl_object v7specializers;
    {
     cl_object v8;
     cl_object v9;
     v8 = ECL_NIL;
     {
      cl_object v10;
      v10 = v3specializers;
      if (ecl_unlikely(!ECL_LISTP(v10))) FEtype_error_list(v10);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v9 = v10;
     }
     {
      cl_object v10;
      cl_object v11;
      v10 = ecl_list1(ECL_NIL);
      v11 = v10;
L13:;
      if (!(ecl_endp(v9))) { goto L15; }
      goto L14;
L15:;
      v8 = _ecl_car(v9);
      {
       cl_object v12;
       v12 = _ecl_cdr(v9);
       if (ecl_unlikely(!ECL_LISTP(v12))) FEtype_error_list(v12);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v9 = v12;
      }
      {
       cl_object v12;
       v12 = v11;
       if (ecl_unlikely(ECL_ATOM(v12))) FEtype_error_cons(v12);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       T0 = v12;
      }
      T1 = ecl_function_dispatch(cl_env_copy,v6)(1, v8);
      v11 = ecl_list1(T1);
      (ECL_CONS_CDR(T0)=v11,T0);
      goto L13;
L14:;
      v7specializers = ecl_cdr(v10);
      goto L6;
     }
    }
L6:;
    {
     cl_object v8;
     cl_object v9method;
     cl_object v10;
     v8 = ecl_function_dispatch(cl_env_copy,ECL_SYM("GENERIC-FUNCTION-METHODS",1585))(1, v1gf) /*  GENERIC-FUNCTION-METHODS */;
     v9method = ECL_NIL;
     {
      cl_object v11;
      v11 = v8;
      if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v10 = v11;
     }
L36:;
     if (!(ecl_endp(v10))) { goto L38; }
     goto L37;
L38:;
     v9method = _ecl_car(v10);
     {
      cl_object v11;
      v11 = _ecl_cdr(v10);
      if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v10 = v11;
     }
     T0 = (cl_env_copy->function=(ECL_SYM("METHOD-QUALIFIERS",959)->symbol.gfdef))->cfun.entry(1, v9method) /*  METHOD-QUALIFIERS */;
     if (!(ecl_equal(v2qualifiers,T0))) { goto L46; }
     T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("METHOD-SPECIALIZERS",1595))(1, v9method) /*  METHOD-SPECIALIZERS */;
     if (Null(cl_every(3, v5, v7specializers, T0))) { goto L46; }
     value0 = v9method;
     cl_env_copy->nvalues = 1;
     return value0;
L46:;
     goto L36;
L37:;
    }
   }
   if (Null(v4errorp)) { goto L2; }
   T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("GENERIC-FUNCTION-NAME",1586))(1, v1gf) /*  GENERIC-FUNCTION-NAME */;
   cl_error(4, VV[32], T0, v2qualifiers, v3specializers);
  }
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function SPECIALIZER=                                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC23specializer_(cl_object v1cons_or_class, cl_object v2specializer)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ECL_CONSP(v1cons_or_class))) { goto L1; }
  if (Null(ecl_function_dispatch(cl_env_copy,VV[55])(1, v2specializer) /*  EQL-SPECIALIZER-FLAG */)) { goto L4; }
  T0 = ecl_car(v1cons_or_class);
  T1 = ecl_function_dispatch(cl_env_copy,ECL_SYM("EQL-SPECIALIZER-OBJECT",1571))(1, v2specializer) /*  EQL-SPECIALIZER-OBJECT */;
  value0 = ecl_make_bool(ecl_eql(T0,T1));
  cl_env_copy->nvalues = 1;
  return value0;
L4:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  value0 = ecl_make_bool((v1cons_or_class)==(v2specializer));
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function FILTER-SPECIALIZER                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC22filter_specializer(cl_object v1name)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(si_of_class_p(2, v1name, ECL_SYM("SPECIALIZER",1617)))) { goto L1; }
  value0 = v1name;
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  if (!(ECL_ATOM(v1name))) { goto L3; }
  {
   cl_object v2class;
   v2class = cl_find_class(2, v1name, ECL_NIL);
   if ((v2class)!=ECL_NIL) { goto L6; }
   cl_error(2, VV[30], v1name);
L6:;
   value0 = v2class;
   cl_env_copy->nvalues = 1;
   return value0;
  }
L3:;
  T0 = ecl_car(v1name);
  if (!((T0)==(ECL_SYM("EQL",336)))) { goto L8; }
  T0 = ecl_cddr(v1name);
  if (!(T0==ECL_NIL)) { goto L8; }
  value0 = ecl_cdr(v1name);
  cl_env_copy->nvalues = 1;
  return value0;
L8:;
  value0 = cl_error(2, VV[30], v1name);
  return value0;
 }
}
/*      local function WITH-ACCESSORS                                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC25with_accessors(cl_object v1, cl_object v2)
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
   cl_object v4slot_accessor_pairs;
   cl_object v5instance_form;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[39])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4slot_accessor_pairs = v6;
   }
   if (!(v3==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[39])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5instance_form = v6;
   }
   {
    cl_object v6temp;
    cl_object v7accessors;
    v6temp = cl_gensym(0);
    {
     cl_object v8scan;
     cl_object v9res;
     v8scan = v4slot_accessor_pairs;
     v9res = ECL_NIL;
     goto L20;
L19:;
     T0 = ecl_caar(v8scan);
     T1 = ecl_cadar(v8scan);
     T2 = cl_list(2, T1, v6temp);
     T3 = cl_list(2, T0, T2);
     v9res = CONS(T3,v9res);
     v8scan = ecl_cdr(v8scan);
L20:;
     if (v8scan==ECL_NIL) { goto L26; }
     goto L19;
L26:;
     v7accessors = cl_nreverse(v9res);
    }
    T0 = cl_list(2, v6temp, v5instance_form);
    T1 = ecl_list1(T0);
    T2 = cl_listX(3, ECL_SYM("SYMBOL-MACROLET",844), v7accessors, v3);
    value0 = cl_list(3, ECL_SYM("LET",479), T1, T2);
    return value0;
   }
  }
 }
}

#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/clos/method.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclL0qsa7b7_QXG6lq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CLOS;METHOD.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclL0qsa7b7_QXG6lq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  si_Xmake_special(VV[0]);
  cl_set(VV[0],ecl_make_fixnum(32));
  si_Xmake_special(VV[1]);
  cl_set(VV[1],ECL_NIL);
  si_Xmake_special(ECL_SYM("*NEXT-METHODS*",1536));
  cl_set(ECL_SYM("*NEXT-METHODS*",1536),ECL_NIL);
  si_Xmake_special(VV[2]);
  cl_set(VV[2],ECL_NIL);
  ecl_cmp_defun(VV[36]);                          /*  GENERIC-FUNCTION-METHOD-CLASS */
  ecl_cmp_defun(VV[37]);                          /*  PROTOTYPES-FOR-MAKE-METHOD-LAMBDA */
  ecl_cmp_defmacro(VV[38]);                       /*  DEFMETHOD       */
  (void)0; /* No entry created for SPECIALIZERS-EXPRESSION */
  ecl_cmp_defun(VV[40]);                          /*  MAYBE-REMOVE-BLOCK */
  ecl_cmp_defun(VV[42]);                          /*  SIMPLIFY-LAMBDA */
  (void)0; /* No entry created for MAKE-RAW-LAMBDA */
  ecl_cmp_defun(VV[43]);                          /*  MAKE-METHOD-LAMBDA */
  ecl_cmp_defun(VV[44]);                          /*  ADD-CALL-NEXT-METHOD-CLOSURE */
  ecl_cmp_defun(VV[45]);                          /*  ENVIRONMENT-CONTAINS-CLOSURE */
  (void)0; /* No entry created for WALK-METHOD-LAMBDA */
  ecl_cmp_defun(VV[46]);                          /*  LEGAL-GENERIC-FUNCTION-NAME-P */
  (void)0; /* No entry created for PARSE-DEFMETHOD */
  ecl_cmp_defun(VV[47]);                          /*  IMPLICIT-GENERIC-LAMBDA */
  (void)0; /* No entry created for EXTRACT-LAMBDA-LIST */
  (void)0; /* No entry created for EXTRACT-SPECIALIZER-NAMES */
  (void)0; /* No entry created for PARSE-SPECIALIZED-LAMBDA-LIST */
  (void)0; /* No entry created for DECLARATION-SPECIALIZERS */
  ecl_cmp_defun(VV[48]);                          /*  COMPUTE-METHOD-KEYWORDS */
  ecl_cmp_defun(VV[49]);                          /*  MAKE-METHOD     */
  ecl_cmp_defun(VV[50]);                          /*  METHOD-P        */
  ecl_cmp_defun(VV[51]);                          /*  ADD-METHOD      */
  ecl_cmp_defun(VV[54]);                          /*  FIND-METHOD     */
  ecl_cmp_defmacro(VV[56]);                       /*  WITH-ACCESSORS  */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  T0 = cl_symbol_function(ECL_SYM("GETHASH",415));
  si_fset(2, VV[35], T0);
 }
}
