/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CMP;CMPLAM.LSP                                    */
#include <ecl/ecl-cmp.h>
#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/cmp/cmplam.eclh"
/*      function definition for C1LAMBDA-DOC                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L1c1lambda_doc(cl_object v1form)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,VV[96])(1, v1form) /*  C1FORM-ARGS */;
  value0 = ecl_cadr(T0);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for C1LAMBDA-BODY                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L2c1lambda_body(cl_object v1form)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,VV[96])(1, v1form) /*  C1FORM-ARGS */;
  value0 = ecl_caddr(T0);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for C1LAMBDA-LIST                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L3c1lambda_list(cl_object v1form)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,VV[96])(1, v1form) /*  C1FORM-ARGS */;
  value0 = ecl_car(T0);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for FUN-NEEDS-NARG                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L4fun_needs_narg(cl_object v1fun)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = L5fun_fixed_narg(v1fun);
  value0 = Null(T0)?ECL_T:ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for FUN-FIXED-NARG                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L5fun_fixed_narg(cl_object v1fun)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2narg;
   v2narg = ECL_NIL;
   T0 = ecl_function_dispatch(cl_env_copy,VV[101])(1, v1fun) /*  FUN-CLOSURE */;
   if ((T0)==(VV[4])) { goto L3; }
   T0 = ecl_function_dispatch(cl_env_copy,VV[102])(1, v1fun) /*  FUN-MINARG */;
   v2narg = ecl_function_dispatch(cl_env_copy,VV[103])(1, v1fun) /*  FUN-MAXARG */;
   if (!(ecl_number_equalp(T0,v2narg))) { goto L3; }
   if (!(ecl_lowereq(v2narg,ecl_make_fixnum(63)))) { goto L3; }
   value0 = v2narg;
   cl_env_copy->nvalues = 1;
   return value0;
L3:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for ADD-TO-FUN-REFERENCED-VARS            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L6add_to_fun_referenced_vars(cl_object v1fun, cl_object v2var_list)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3new_vars;
   v3new_vars = ecl_function_dispatch(cl_env_copy,VV[105])(1, v1fun) /*  FUN-REFERENCED-VARS */;
   {
    cl_object v4locals;
    v4locals = ecl_function_dispatch(cl_env_copy,VV[106])(1, v1fun) /*  FUN-LOCAL-VARS */;
    {
     cl_object v5change;
     v5change = ECL_NIL;
     {
      cl_object v6v;
      cl_object v7;
      v6v = ECL_NIL;
      {
       cl_object v8;
       v8 = v2var_list;
       if (ecl_unlikely(!ECL_LISTP(v8))) FEtype_error_list(v8);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v7 = v8;
      }
L8:;
      if (!(ecl_endp(v7))) { goto L10; }
      goto L9;
L10:;
      v6v = _ecl_car(v7);
      {
       cl_object v8;
       v8 = _ecl_cdr(v7);
       if (ecl_unlikely(!ECL_LISTP(v8))) FEtype_error_list(v8);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v7 = v8;
      }
      if ((si_memq(v6v,v4locals))!=ECL_NIL) { goto L18; }
      if ((si_memq(v6v,v3new_vars))!=ECL_NIL) { goto L18; }
      v5change = ECL_T;
      v3new_vars = CONS(v6v,v3new_vars);
L18:;
      goto L8;
L9:;
      if (Null(v5change)) { goto L25; }
      ecl_structure_set(v1fun,VV[6],22,v3new_vars);
      value0 = ECL_T;
      cl_env_copy->nvalues = 1;
      return value0;
L25:;
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 1;
      return value0;
     }
    }
   }
  }
 }
}
/*      function definition for ADD-TO-FUN-REFERENCED-FUNS            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L7add_to_fun_referenced_funs(cl_object v1fun, cl_object v2fun_list)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3new_funs;
   v3new_funs = ecl_function_dispatch(cl_env_copy,VV[108])(1, v1fun) /*  FUN-REFERENCED-FUNS */;
   {
    cl_object v4change;
    v4change = ECL_NIL;
    {
     cl_object v5f;
     cl_object v6;
     v5f = ECL_NIL;
     {
      cl_object v7;
      v7 = v2fun_list;
      if (ecl_unlikely(!ECL_LISTP(v7))) FEtype_error_list(v7);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v6 = v7;
     }
L7:;
     if (!(ecl_endp(v6))) { goto L9; }
     goto L8;
L9:;
     v5f = _ecl_car(v6);
     {
      cl_object v7;
      v7 = _ecl_cdr(v6);
      if (ecl_unlikely(!ECL_LISTP(v7))) FEtype_error_list(v7);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v6 = v7;
     }
     if ((v1fun)==(v5f)) { goto L17; }
     if ((si_memq(v5f,v3new_funs))!=ECL_NIL) { goto L17; }
     if ((ecl_function_dispatch(cl_env_copy,VV[109])(2, v1fun, v5f) /*  CHILD-FUNCTION-P */)!=ECL_NIL) { goto L17; }
     v4change = ECL_T;
     v3new_funs = CONS(v5f,v3new_funs);
     {
      cl_object v7;
      T0 = ecl_function_dispatch(cl_env_copy,VV[110])(1, v5f) /*  FUN-REFERENCING-FUNS */;
      v7 = CONS(v1fun,T0);
      ecl_structure_set(v5f,VV[6],24,v7);
     }
L17:;
     goto L7;
L8:;
     if (Null(v4change)) { goto L27; }
     ecl_structure_set(v1fun,VV[6],23,v3new_funs);
     value0 = ECL_T;
     cl_env_copy->nvalues = 1;
     return value0;
L27:;
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 1;
     return value0;
    }
   }
  }
 }
}
/*      function definition for FUNCTION-BLOCK-NAME-DECLARATION       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L8function_block_name_declaration(cl_object v1declarations)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2i;
   cl_object v3;
   v2i = ECL_NIL;
   {
    cl_object v4;
    v4 = v1declarations;
    if (ecl_unlikely(!ECL_LISTP(v4))) FEtype_error_list(v4);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v3 = v4;
   }
L5:;
   if (!(ecl_endp(v3))) { goto L7; }
   goto L6;
L7:;
   v2i = _ecl_car(v3);
   {
    cl_object v4;
    v4 = _ecl_cdr(v3);
    if (ecl_unlikely(!ECL_LISTP(v4))) FEtype_error_list(v4);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v3 = v4;
   }
   if (!(ECL_CONSP(v2i))) { goto L15; }
   T0 = ecl_car(v2i);
   if (!((T0)==(ECL_SYM("FUNCTION-BLOCK-NAME",1085)))) { goto L15; }
   T0 = ecl_cdr(v2i);
   if (!(ECL_CONSP(T0))) { goto L15; }
   value0 = ecl_cadr(v2i);
   cl_env_copy->nvalues = 1;
   return value0;
L15:;
   goto L5;
L6:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for C1COMPILE-FUNCTION                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L9c1compile_function(cl_narg narg, cl_object v1lambda_list_and_body, ...)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2fun;
  cl_object v3name;
  ecl_va_list args; ecl_va_start(args,v1lambda_list_and_body,narg,1);
  {
   cl_object keyvars[4];
   cl_parse_key(args,2,L9c1compile_functionkeys,keyvars,NULL,FALSE);
   ecl_va_end(args);
   if (Null(keyvars[2])) {
    v2fun = ecl_function_dispatch(cl_env_copy,VV[113])(0) /*  MAKE-FUN */;
   } else {
    v2fun = keyvars[0];
   }
   if (Null(keyvars[3])) {
    v3name = ecl_function_dispatch(cl_env_copy,VV[114])(1, v2fun) /*  FUN-NAME */;
   } else {
    v3name = keyvars[1];
   }
  }
  {
   cl_object v4lambda;
   if (Null(v3name)) { goto L5; }
   v4lambda = cl_listX(3, ECL_SYM("LAMBDA-BLOCK",1367), v3name, v1lambda_list_and_body);
   goto L4;
L5:;
   v4lambda = CONS(ECL_SYM("LAMBDA",454),v1lambda_list_and_body);
L4:;
   ecl_structure_set(v2fun,VV[6],0,v3name);
   ecl_structure_set(v2fun,VV[6],16,v4lambda);
   {
    cl_object v5;
    v5 = ecl_symbol_value(VV[10]);
    ecl_structure_set(v2fun,VV[6],20,v5);
   }
  }
  if (Null(ecl_symbol_value(VV[10]))) { goto L10; }
  {
   cl_object v4;
   cl_object v5;
   v4 = ecl_symbol_value(VV[10]);
   T0 = ecl_function_dispatch(cl_env_copy,VV[117])(1, v4) /*  FUN-CHILD-FUNS */;
   v5 = CONS(v2fun,T0);
   ecl_structure_set(v4,VV[6],25,v5);
  }
L10:;
  {
   cl_object v4setjmps;
   cl_object v5decl;
   cl_object v6global;
   cl_object v7no_entry;
   cl_object v8cfun;
   cl_object v9exported;
   cl_object v10minarg;
   cl_object v11maxarg;
   cl_object v12proclamation_found_p;
   ecl_bds_bind(cl_env_copy,VV[10],v2fun);        /*  *CURRENT-FUNCTION* */
   {
    cl_object v13;
    v13 = ecl_function_dispatch(cl_env_copy,VV[118])(1, ECL_SYM("FUNCTION-BOUNDARY",1918)) /*  CMP-ENV-MARK */;
    T0 = ecl_structure_set(v2fun,VV[6],28,v13);
   }
   ecl_bds_bind(cl_env_copy,VV[11],T0);           /*  *CMP-ENV*       */
   v4setjmps = ecl_symbol_value(VV[12]);
   T0 = ecl_cdr(v1lambda_list_and_body);
   v5decl = si_process_declarations(1, T0);
   if (Null(ecl_symbol_value(VV[13]))) { goto L20; }
   if (Null(ecl_assql(VV[14],v5decl))) { goto L20; }
   v6global = ecl_structure_set(v2fun,VV[6],8,ECL_T);
   goto L18;
L20:;
   v6global = ECL_NIL;
   goto L18;
L18:;
   v7no_entry = ecl_assql(VV[15],v5decl);
   v8cfun = ECL_NIL;
   v9exported = ECL_NIL;
   v10minarg = ECL_NIL;
   v11maxarg = ECL_NIL;
   v12proclamation_found_p = ECL_NIL;
   {
    cl_object v14;                                /*  LAMBDA-EXPR     */
    cl_object v15;                                /*  OPTIONAL-TYPE-CHECKS */
    cl_object v16;                                /*  KEYWORD-TYPE-CHECKS */
    T0 = si_function_block_name(v3name);
    value0 = L14c1lambda_expr(v1lambda_list_and_body, v3name, T0);
    {
     const int v17 = cl_env_copy->nvalues;
     v14 = value0;
     cl_object v18;
     v18 = (v17<=1)? ECL_NIL : cl_env_copy->values[1];
     v15 = v18;
     v18 = (v17<=2)? ECL_NIL : cl_env_copy->values[2];
     v16 = v18;
    }
    if (Null(v7no_entry)) { goto L31; }
    if (Null(ecl_function_dispatch(cl_env_copy,VV[119])(0) /*  POLICY-DEBUG-IHS-FRAME */)) { goto L31; }
    v7no_entry = ECL_NIL;
    ecl_function_dispatch(cl_env_copy,VV[120])(2, VV[16], v3name) /*  CMPNOTE */;
L31:;
    if (ecl_eql(v4setjmps,ecl_symbol_value(VV[12]))) { goto L36; }
    ecl_structure_set(v14,VV[17],3,ECL_T);
L36:;
    ecl_structure_set(v2fun,VV[6],15,v14);
    if (Null(v6global)) { goto L40; }
    value0 = ecl_function_dispatch(cl_env_copy,VV[121])(1, v3name) /*  EXPORTED-FNAME */;
    {
     const int v17 = cl_env_copy->nvalues;
     v8cfun = value0;
     cl_object v18;
     v18 = (v17<=1)? ECL_NIL : cl_env_copy->values[1];
     v9exported = v18;
    }
    goto L39;
L40:;
    v8cfun = ecl_function_dispatch(cl_env_copy,VV[122])(2, VV[18], v3name) /*  NEXT-CFUN */;
    v9exported = ECL_NIL;
L39:;
    if (Null(v9exported)) { goto L47; }
    value0 = ecl_function_dispatch(cl_env_copy,VV[123])(1, v3name) /*  GET-PROCLAIMED-NARG */;
    {
     const int v17 = cl_env_copy->nvalues;
     v10minarg = value0;
     cl_object v18;
     v18 = (v17<=1)? ECL_NIL : cl_env_copy->values[1];
     v11maxarg = v18;
     v18 = (v17<=2)? ECL_NIL : cl_env_copy->values[2];
     v12proclamation_found_p = v18;
    }
    ecl_function_dispatch(cl_env_copy,VV[124])(4, VV[19], v3name, v10minarg, v11maxarg) /*  CMPDEBUG */;
    {
     cl_object v18;                               /*  FOUND-MINARG    */
     cl_object v19;                               /*  FOUND-MAXARG    */
     value0 = L15lambda_form_allowed_nargs(v14);
     {
      const int v20 = cl_env_copy->nvalues;
      v18 = value0;
      cl_object v21;
      v21 = (v20<=1)? ECL_NIL : cl_env_copy->values[1];
      v19 = v21;
     }
     if (Null(v12proclamation_found_p)) { goto L53; }
     if (!ecl_number_equalp(v10minarg,v18)) { goto L56; }
     if (!(!ecl_number_equalp(v11maxarg,v19))) { goto L46; }
     goto L55;
L56:;
L55:;
     ecl_function_dispatch(cl_env_copy,VV[125])(6, VV[20], v3name, v18, v19, v10minarg, v11maxarg) /*  CMPERR */;
     goto L46;
L53:;
     v10minarg = v18;
     goto L46;
    }
L47:;
    value0 = L15lambda_form_allowed_nargs(v14);
    {
     const int v17 = cl_env_copy->nvalues;
     v10minarg = value0;
     cl_object v18;
     v18 = (v17<=1)? ECL_NIL : cl_env_copy->values[1];
     v11maxarg = v18;
    }
L46:;
    ecl_structure_set(v2fun,VV[6],5,v8cfun);
    ecl_structure_set(v2fun,VV[6],9,v9exported);
    ecl_structure_set(v2fun,VV[6],12,ECL_NIL);
    ecl_structure_set(v2fun,VV[6],17,v10minarg);
    ecl_structure_set(v2fun,VV[6],18,v11maxarg);
    {
     cl_object v17;
     value0 = L8function_block_name_declaration(v5decl);
     if ((value0)!=ECL_NIL) { goto L69; }
     v17 = v3name;
     goto L67;
L69:;
     v17 = value0;
     goto L67;
L67:;
     ecl_structure_set(v2fun,VV[6],14,v17);
    }
    ecl_structure_set(v2fun,VV[6],10,v7no_entry);
    ecl_structure_set(v2fun,VV[6],30,v15);
    ecl_structure_set(v2fun,VV[6],31,v16);
    {
     cl_object v17;
     cl_object v18child;
     cl_object v19;
     v17 = ecl_function_dispatch(cl_env_copy,VV[117])(1, v2fun) /*  FUN-CHILD-FUNS */;
     v18child = ECL_NIL;
     {
      cl_object v20;
      v20 = v17;
      if (ecl_unlikely(!ECL_LISTP(v20))) FEtype_error_list(v20);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v19 = v20;
     }
L79:;
     if (!(ecl_endp(v19))) { goto L81; }
     goto L80;
L81:;
     v18child = _ecl_car(v19);
     {
      cl_object v20;
      v20 = _ecl_cdr(v19);
      if (ecl_unlikely(!ECL_LISTP(v20))) FEtype_error_list(v20);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v19 = v20;
     }
     T0 = ecl_function_dispatch(cl_env_copy,VV[105])(1, v18child) /*  FUN-REFERENCED-VARS */;
     L6add_to_fun_referenced_vars(v2fun, T0);
     T0 = ecl_function_dispatch(cl_env_copy,VV[108])(1, v18child) /*  FUN-REFERENCED-FUNS */;
     L7add_to_fun_referenced_funs(v2fun, T0);
     goto L79;
L80:;
    }
    {
     cl_object v17;
     cl_object v18f;
     cl_object v19;
     v17 = ecl_function_dispatch(cl_env_copy,VV[108])(1, v2fun) /*  FUN-REFERENCED-FUNS */;
     v18f = ECL_NIL;
     {
      cl_object v20;
      v20 = v17;
      if (ecl_unlikely(!ECL_LISTP(v20))) FEtype_error_list(v20);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v19 = v20;
     }
L98:;
     if (!(ecl_endp(v19))) { goto L100; }
     goto L99;
L100:;
     v18f = _ecl_car(v19);
     {
      cl_object v20;
      v20 = _ecl_cdr(v19);
      if (ecl_unlikely(!ECL_LISTP(v20))) FEtype_error_list(v20);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v19 = v20;
     }
     T0 = ecl_function_dispatch(cl_env_copy,VV[105])(1, v18f) /*  FUN-REFERENCED-VARS */;
     L6add_to_fun_referenced_vars(v2fun, T0);
     goto L98;
L99:;
    }
    ecl_function_dispatch(cl_env_copy,VV[126])(1, v2fun) /*  UPDATE-FUN-CLOSURE-TYPE */;
    if (Null(v6global)) { goto L29; }
    if (Null(ecl_function_dispatch(cl_env_copy,VV[101])(1, v2fun) /*  FUN-CLOSURE */)) { goto L112; }
    T0 = ecl_function_dispatch(cl_env_copy,VV[114])(1, v2fun) /*  FUN-NAME */;
    {
     cl_object v17;
     v17 = ecl_fdefinition(VV[127]);
     {
      cl_object v18;
      cl_object v19;
      cl_object v20;
      v18 = ecl_function_dispatch(cl_env_copy,VV[105])(1, v2fun) /*  FUN-REFERENCED-VARS */;
      v19 = ECL_NIL;
      {
       cl_object v21;
       v21 = v18;
       if (ecl_unlikely(!ECL_LISTP(v21))) FEtype_error_list(v21);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v20 = v21;
      }
      {
       cl_object v21;
       cl_object v22;
       v21 = ecl_list1(ECL_NIL);
       v22 = v21;
L123:;
       if (!(ecl_endp(v20))) { goto L125; }
       goto L124;
L125:;
       v19 = _ecl_car(v20);
       {
        cl_object v23;
        v23 = _ecl_cdr(v20);
        if (ecl_unlikely(!ECL_LISTP(v23))) FEtype_error_list(v23);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v20 = v23;
       }
       {
        cl_object v23;
        v23 = v22;
        if (ecl_unlikely(ECL_ATOM(v23))) FEtype_error_cons(v23);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        T2 = v23;
       }
       T3 = ecl_function_dispatch(cl_env_copy,v17)(1, v19);
       v22 = ecl_list1(T3);
       (ECL_CONS_CDR(T2)=v22,T2);
       goto L123;
L124:;
       T1 = ecl_cdr(v21);
       goto L114;
      }
     }
    }
L114:;
    ecl_function_dispatch(cl_env_copy,VV[120])(3, VV[21], T0, T1) /*  CMPNOTE */;
    goto L29;
L112:;
    T0 = ecl_function_dispatch(cl_env_copy,VV[128])(1, v2fun) /*  FUN-NO-ENTRY */;
    ecl_function_dispatch(cl_env_copy,VV[129])(2, v2fun, T0) /*  NEW-DEFUN */;
   }
L29:;
   value0 = v2fun;
   cl_env_copy->nvalues = 1;
   ecl_bds_unwind1(cl_env_copy);
   ecl_bds_unwind1(cl_env_copy);
   return value0;
  }
 }
}
/*      function definition for CMP-PROCESS-LAMBDA-LIST               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L11cmp_process_lambda_list(cl_object volatile v1list)
{
 cl_object T0, T1, T2, T3;
 cl_object volatile env0 = ECL_NIL;
 cl_object volatile CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
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
     if (cl_env_copy->values[0]==ecl_make_fixnum(0))goto L1;
     ecl_internal_error("GO found an inexistent tag");
     }
    }
    {
     cl_object v2;
     v2 = ecl_make_cclosure_va((cl_objectfn)LC10__lambda75,env2,Cblock,1);
     T0 = v2;
    }
    T1 = CONS(ECL_SYM("ERROR",339),T0);
    T2 = ecl_list1(T1);
    T3 = CONS(T2,ecl_symbol_value(ECL_SYM("*HANDLER-CLUSTERS*",6)));
    ecl_bds_bind(cl_env_copy,ECL_SYM("*HANDLER-CLUSTERS*",6),T3); /*  *HANDLER-CLUSTERS* */
    value0 = si_process_lambda_list(v1list, ECL_SYM("FUNCTION",398));
    ecl_frs_pop(cl_env_copy);
    ecl_bds_unwind1(cl_env_copy);
    return value0;
L1:;
    {
     cl_object v2c;
     v2c = ECL_CONS_CAR(CLV0);
     value0 = ecl_function_dispatch(cl_env_copy,VV[125])(3, VV[23], v1list, v2c) /*  CMPERR */;
     ecl_frs_pop(cl_env_copy);
     return value0;
    }
   }
  }
 }
}
/*      closure LAMBDA75                                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC10__lambda75(cl_narg narg, cl_object v1si__temp, ...)
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
/*      function definition for C1LAMBDA-EXPR                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L14c1lambda_expr(cl_object v1lambda_expr, cl_object v2function_name, cl_object v3block_name)
{
 cl_object T0, T1, T2, T3, T4, T5;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v4doc;
   cl_object v5body;
   cl_object v6ss;
   cl_object v7is;
   cl_object v8ts;
   cl_object v9other_decls;
   cl_object v10type_checks;
   cl_object v11old_env;
   v4doc = ECL_NIL;
   v5body = ECL_NIL;
   v6ss = ECL_NIL;
   v7is = ECL_NIL;
   v8ts = ECL_NIL;
   v9other_decls = ECL_NIL;
   v10type_checks = ECL_NIL;
   ecl_bds_bind(cl_env_copy,VV[25],ECL_T);        /*  *PERMANENT-DATA* */
   v11old_env = ecl_symbol_value(VV[11]);
   T0 = ecl_function_dispatch(cl_env_copy,VV[131])(0) /*  CMP-ENV-COPY */;
   ecl_bds_bind(cl_env_copy,VV[11],T0);           /*  *CMP-ENV*       */
   if (!(ecl_endp(v1lambda_expr))) { goto L9; }
   T0 = CONS(ECL_SYM("LAMBDA",454),v1lambda_expr);
   ecl_function_dispatch(cl_env_copy,VV[125])(2, VV[26], T0) /*  CMPERR */;
L9:;
   T0 = ecl_cdr(v1lambda_expr);
   value0 = ecl_function_dispatch(cl_env_copy,VV[132])(2, T0, ECL_T) /*  C1BODY */;
   {
    const int v12 = cl_env_copy->nvalues;
    v5body = value0;
    cl_object v13;
    v13 = (v12<=1)? ECL_NIL : cl_env_copy->values[1];
    v6ss = v13;
    v13 = (v12<=2)? ECL_NIL : cl_env_copy->values[2];
    v8ts = v13;
    v13 = (v12<=3)? ECL_NIL : cl_env_copy->values[3];
    v7is = v13;
    v13 = (v12<=4)? ECL_NIL : cl_env_copy->values[4];
    v9other_decls = v13;
    v13 = (v12<=5)? ECL_NIL : cl_env_copy->values[5];
    v4doc = v13;
   }
   if (Null(v3block_name)) { goto L13; }
   T0 = cl_listX(3, ECL_SYM("BLOCK",139), v3block_name, v5body);
   v5body = ecl_list1(T0);
L13:;
   {
    cl_object v13;                                /*  REQUIREDS       */
    cl_object v14;                                /*  OPTIONALS       */
    cl_object v15;                                /*  REST            */
    cl_object v16;                                /*  KEY-FLAG        */
    cl_object v17;                                /*  KEYWORDS        */
    cl_object v18;                                /*  ALLOW-OTHER-KEYS */
    cl_object v19;                                /*  AUX-VARS        */
    T0 = ecl_car(v1lambda_expr);
    value0 = L11cmp_process_lambda_list(T0);
    {
     const int v20 = cl_env_copy->nvalues;
     v13 = value0;
     cl_object v21;
     v21 = (v20<=1)? ECL_NIL : cl_env_copy->values[1];
     v14 = v21;
     v21 = (v20<=2)? ECL_NIL : cl_env_copy->values[2];
     v15 = v21;
     v21 = (v20<=3)? ECL_NIL : cl_env_copy->values[3];
     v16 = v21;
     v21 = (v20<=4)? ECL_NIL : cl_env_copy->values[4];
     v17 = v21;
     v21 = (v20<=5)? ECL_NIL : cl_env_copy->values[5];
     v18 = v21;
     v21 = (v20<=6)? ECL_NIL : cl_env_copy->values[6];
     v19 = v21;
    }
    {
     cl_object v20specs;
     v13 = ecl_cdr(v13);
     v20specs = v13;
     goto L22;
L21:;
     {
      cl_object v21name;
      cl_object v22var;
      v21name = ecl_car(v20specs);
      v22var = ecl_function_dispatch(cl_env_copy,VV[133])(4, v21name, v6ss, v7is, v8ts) /*  C1MAKE-VAR */;
      v10type_checks = CONS(v22var,v10type_checks);
      {
       cl_object v23;
       v23 = v22var;
       {
        cl_object v24;
        v24 = v20specs;
        if (ecl_unlikely(ECL_ATOM(v24))) FEtype_error_cons(v24);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        T0 = v24;
       }
       (ECL_CONS_CAR(T0)=v23,T0);
      }
      ecl_function_dispatch(cl_env_copy,VV[134])(1, v22var) /*  PUSH-VARS */;
     }
     v20specs = ecl_cdr(v20specs);
L22:;
     if (ecl_endp(v20specs)) { goto L37; }
     goto L21;
L37:;
    }
    {
     cl_object v20specs;
     v14 = ecl_cdr(v14);
     v20specs = v14;
     goto L44;
L43:;
     {
      cl_object v21name;
      cl_object v22var;
      cl_object v23init;
      cl_object v24flag;
      v21name = ecl_car(v20specs);
      v22var = ecl_function_dispatch(cl_env_copy,VV[133])(4, v21name, v6ss, v7is, v8ts) /*  C1MAKE-VAR */;
      v23init = ecl_cadr(v20specs);
      v24flag = ecl_caddr(v20specs);
      if (Null(v23init)) { goto L53; }
      T0 = ecl_function_dispatch(cl_env_copy,VV[135])(1, v22var) /*  VAR-TYPE */;
      T1 = ecl_function_dispatch(cl_env_copy,VV[136])(1, v23init) /*  C1EXPR */;
      v23init = ecl_function_dispatch(cl_env_copy,VV[137])(6, T0, T1, v23init, VV[27], VV[28], v2function_name) /*  AND-FORM-TYPE */;
      goto L52;
L53:;
      v23init = ecl_function_dispatch(cl_env_copy,VV[138])(1, v22var) /*  DEFAULT-INIT */;
L52:;
      v10type_checks = CONS(v22var,v10type_checks);
      ecl_function_dispatch(cl_env_copy,VV[134])(1, v22var) /*  PUSH-VARS */;
      if (Null(v24flag)) { goto L58; }
      v24flag = ecl_function_dispatch(cl_env_copy,VV[133])(4, v24flag, v6ss, v7is, v8ts) /*  C1MAKE-VAR */;
      ecl_function_dispatch(cl_env_copy,VV[134])(1, v24flag) /*  PUSH-VARS */;
L58:;
      {
       cl_object v25;
       v25 = v22var;
       {
        cl_object v26;
        v26 = v20specs;
        if (ecl_unlikely(ECL_ATOM(v26))) FEtype_error_cons(v26);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        T0 = v26;
       }
       (ECL_CONS_CAR(T0)=v25,T0);
      }
      {
       cl_object v25;
       v25 = v23init;
       {
        cl_object v26;
        v26 = ecl_cdr(v20specs);
        if (ecl_unlikely(ECL_ATOM(v26))) FEtype_error_cons(v26);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        T0 = v26;
       }
       (ECL_CONS_CAR(T0)=v25,T0);
      }
      {
       cl_object v25;
       v25 = v24flag;
       {
        cl_object v26;
        v26 = ecl_cddr(v20specs);
        if (ecl_unlikely(ECL_ATOM(v26))) FEtype_error_cons(v26);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        T0 = v26;
       }
       (ECL_CONS_CAR(T0)=v25,T0);
      }
     }
     v20specs = ecl_cdddr(v20specs);
L44:;
     if (ecl_endp(v20specs)) { goto L80; }
     goto L43;
L80:;
    }
    if (Null(v15)) { goto L82; }
    v15 = ecl_function_dispatch(cl_env_copy,VV[133])(4, v15, v6ss, v7is, v8ts) /*  C1MAKE-VAR */;
    ecl_function_dispatch(cl_env_copy,VV[134])(1, v15) /*  PUSH-VARS  */;
L82:;
    {
     cl_object v20specs;
     v17 = ecl_cdr(v17);
     v20specs = v17;
     goto L90;
L89:;
     {
      cl_object v21name;
      cl_object v22var;
      cl_object v23init;
      cl_object v24flag;
      v21name = ecl_cadr(v20specs);
      v22var = ecl_function_dispatch(cl_env_copy,VV[133])(4, v21name, v6ss, v7is, v8ts) /*  C1MAKE-VAR */;
      v23init = ecl_caddr(v20specs);
      v24flag = ecl_cadddr(v20specs);
      if (Null(v23init)) { goto L99; }
      T0 = ecl_function_dispatch(cl_env_copy,VV[135])(1, v22var) /*  VAR-TYPE */;
      T1 = ecl_function_dispatch(cl_env_copy,VV[136])(1, v23init) /*  C1EXPR */;
      v23init = ecl_function_dispatch(cl_env_copy,VV[137])(6, T0, T1, v23init, VV[27], VV[28], v2function_name) /*  AND-FORM-TYPE */;
      goto L98;
L99:;
      v23init = ecl_function_dispatch(cl_env_copy,VV[138])(1, v22var) /*  DEFAULT-INIT */;
L98:;
      v10type_checks = CONS(v22var,v10type_checks);
      ecl_function_dispatch(cl_env_copy,VV[134])(1, v22var) /*  PUSH-VARS */;
      if (Null(v24flag)) { goto L104; }
      v24flag = ecl_function_dispatch(cl_env_copy,VV[133])(4, v24flag, v6ss, v7is, v8ts) /*  C1MAKE-VAR */;
      ecl_function_dispatch(cl_env_copy,VV[134])(1, v24flag) /*  PUSH-VARS */;
L104:;
      {
       cl_object v25;
       v25 = v22var;
       {
        cl_object v26;
        v26 = ecl_cdr(v20specs);
        if (ecl_unlikely(ECL_ATOM(v26))) FEtype_error_cons(v26);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        T0 = v26;
       }
       (ECL_CONS_CAR(T0)=v25,T0);
      }
      {
       cl_object v25;
       v25 = v23init;
       {
        cl_object v26;
        v26 = ecl_cddr(v20specs);
        if (ecl_unlikely(ECL_ATOM(v26))) FEtype_error_cons(v26);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        T0 = v26;
       }
       (ECL_CONS_CAR(T0)=v25,T0);
      }
      {
       cl_object v25;
       v25 = v24flag;
       {
        cl_object v26;
        v26 = ecl_cdddr(v20specs);
        if (ecl_unlikely(ECL_ATOM(v26))) FEtype_error_cons(v26);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        T0 = v26;
       }
       (ECL_CONS_CAR(T0)=v25,T0);
      }
     }
     v20specs = ecl_cddddr(v20specs);
L90:;
     if (ecl_endp(v20specs)) { goto L126; }
     goto L89;
L126:;
    }
    T0 = ecl_fdefinition(VV[139]);
    cl_set(VV[11],cl_reduce(4, T0, v9other_decls, VV[29], ecl_symbol_value(VV[11])));
    {
     cl_object v21;                               /*  REQUIRED-TYPE-CHECK-FORMS */
     cl_object v22;                               /*  OPTIONAL-TYPE-CHECK-FORMS */
     cl_object v23;                               /*  KEYWORD-TYPE-CHECK-FORMS */
     cl_object v24;                               /*  NEW-AUXS        */
     value0 = ecl_function_dispatch(cl_env_copy,VV[140])(6, v2function_name, v13, v14, v17, v8ts, v9other_decls) /*  EXTRACT-LAMBDA-TYPE-CHECKS */;
     {
      const int v25 = cl_env_copy->nvalues;
      v21 = value0;
      cl_object v26;
      v26 = (v25<=1)? ECL_NIL : cl_env_copy->values[1];
      v22 = v26;
      v26 = (v25<=2)? ECL_NIL : cl_env_copy->values[2];
      v23 = v26;
      v26 = (v25<=3)? ECL_NIL : cl_env_copy->values[3];
      v24 = v26;
     }
     {
      cl_object v25declarations;
      cl_object v26let_vars;
      cl_object v27new_variables;
      cl_object v28already_declared_names;
      v25declarations = v9other_decls;
      {
       cl_object v29spec;
       v29spec = ecl_nconc(v24,v19);
       {
        cl_object v30name;
        v30name = ECL_NIL;
        {
         cl_object v31init;
         v31init = ECL_NIL;
         {
          cl_object v32;
          cl_object v33;
          v32 = ecl_list1(ECL_NIL);
          v33 = v32;
L139:;
          if (!(ECL_ATOM(v29spec))) { goto L141; }
          goto L140;
L141:;
          v30name = ecl_car(v29spec);
          v31init = ecl_cadr(v29spec);
          {
          cl_object v34;
          v34 = v33;
          if (ecl_unlikely(ECL_ATOM(v34))) FEtype_error_cons(v34);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          T0 = v34;
          }
          T1 = cl_list(2, v30name, v31init);
          v33 = ecl_list1(T1);
          (ECL_CONS_CDR(T0)=v33,T0);
          v29spec = ecl_cddr(v29spec);
          goto L139;
L140:;
          v26let_vars = ecl_cdr(v32);
          goto L133;
         }
        }
       }
      }
L133:;
      v27new_variables = ecl_function_dispatch(cl_env_copy,VV[141])(2, ecl_symbol_value(VV[11]), v11old_env) /*  CMP-ENV-NEW-VARIABLES */;
      {
       cl_object v29;
       v29 = ecl_fdefinition(VV[127]);
       {
        cl_object v30;
        cl_object v31;
        v30 = ECL_NIL;
        {
         cl_object v32;
         v32 = v27new_variables;
         if (ecl_unlikely(!ECL_LISTP(v32))) FEtype_error_list(v32);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         v31 = v32;
        }
        {
         cl_object v32;
         cl_object v33;
         v32 = ecl_list1(ECL_NIL);
         v33 = v32;
L166:;
         if (!(ecl_endp(v31))) { goto L168; }
         goto L167;
L168:;
         v30 = _ecl_car(v31);
         {
          cl_object v34;
          v34 = _ecl_cdr(v31);
          if (ecl_unlikely(!ECL_LISTP(v34))) FEtype_error_list(v34);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          v31 = v34;
         }
         {
          cl_object v34;
          v34 = v33;
          if (ecl_unlikely(ECL_ATOM(v34))) FEtype_error_cons(v34);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          T1 = v34;
         }
         T2 = ecl_function_dispatch(cl_env_copy,v29)(1, v30);
         v33 = ecl_list1(T2);
         (ECL_CONS_CDR(T1)=v33,T1);
         goto L166;
L167:;
         T0 = ecl_cdr(v32);
         goto L158;
        }
       }
      }
L158:;
      {
       cl_object v29;
       v29 = (ECL_SYM("CAR",182)->symbol.gfdef);
       {
        cl_object v30;
        cl_object v31;
        v30 = ECL_NIL;
        {
         cl_object v32;
         v32 = v26let_vars;
         if (ecl_unlikely(!ECL_LISTP(v32))) FEtype_error_list(v32);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         v31 = v32;
        }
        {
         cl_object v32;
         cl_object v33;
         v32 = ecl_list1(ECL_NIL);
         v33 = v32;
L192:;
         if (!(ecl_endp(v31))) { goto L194; }
         goto L193;
L194:;
         v30 = _ecl_car(v31);
         {
          cl_object v34;
          v34 = _ecl_cdr(v31);
          if (ecl_unlikely(!ECL_LISTP(v34))) FEtype_error_list(v34);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          v31 = v34;
         }
         {
          cl_object v34;
          v34 = v33;
          if (ecl_unlikely(ECL_ATOM(v34))) FEtype_error_cons(v34);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          T2 = v34;
         }
         T3 = ecl_function_dispatch(cl_env_copy,v29)(1, v30);
         v33 = ecl_list1(T3);
         (ECL_CONS_CDR(T2)=v33,T2);
         goto L192;
L193:;
         T1 = ecl_cdr(v32);
         goto L184;
        }
       }
      }
L184:;
      v28already_declared_names = cl_set_difference(2, T0, T1);
      {
       cl_object v29specials;
       v29specials = cl_set_difference(2, v6ss, v28already_declared_names);
       if (Null(v29specials)) { goto L210; }
       T0 = CONS(ECL_SYM("SPECIAL",791),v29specials);
       v25declarations = CONS(T0,v25declarations);
      }
L210:;
      {
       cl_object v29ignorables;
       {
        cl_object v30var;
        cl_object v31expected_uses;
        cl_object v32;
        v30var = ECL_NIL;
        v31expected_uses = ECL_NIL;
        {
         cl_object v33;
         v33 = v7is;
         if (ecl_unlikely(!ECL_LISTP(v33))) FEtype_error_list(v33);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         v32 = v33;
        }
        {
         cl_object v33;
         cl_object v34;
         v33 = ecl_list1(ECL_NIL);
         v34 = v33;
L223:;
         if (!(ecl_endp(v32))) { goto L225; }
         goto L224;
L225:;
         {
          cl_object v35;
          v35 = _ecl_car(v32);
          v30var = ecl_car(v35);
          v35 = ecl_cdr(v35);
          v31expected_uses = v35;
         }
         {
          cl_object v35;
          v35 = _ecl_cdr(v32);
          if (ecl_unlikely(!ECL_LISTP(v35))) FEtype_error_list(v35);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          v32 = v35;
         }
         if ((ecl_memql(v30var,v28already_declared_names))!=ECL_NIL) { goto L238; }
         {
          cl_object v35;
          v35 = v34;
          if (ecl_unlikely(ECL_ATOM(v35))) FEtype_error_cons(v35);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          T0 = v35;
         }
         v34 = ecl_list1(v30var);
         (ECL_CONS_CDR(T0)=v34,T0);
L238:;
         goto L223;
L224:;
         v29ignorables = ecl_cdr(v33);
         goto L215;
        }
       }
L215:;
       if (Null(v29ignorables)) { goto L214; }
       T0 = CONS(ECL_SYM("IGNORABLE",429),v29ignorables);
       v25declarations = CONS(T0,v25declarations);
      }
L214:;
      {
       cl_object v29var;
       cl_object v30type;
       cl_object v31;
       v29var = ECL_NIL;
       v30type = ECL_NIL;
       {
        cl_object v32;
        v32 = v8ts;
        if (ecl_unlikely(!ECL_LISTP(v32))) FEtype_error_list(v32);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v31 = v32;
       }
L254:;
       if (!(ecl_endp(v31))) { goto L256; }
       goto L255;
L256:;
       {
        cl_object v32;
        v32 = _ecl_car(v31);
        v29var = ecl_car(v32);
        v32 = ecl_cdr(v32);
        v30type = v32;
       }
       {
        cl_object v32;
        v32 = _ecl_cdr(v31);
        if (ecl_unlikely(!ECL_LISTP(v32))) FEtype_error_list(v32);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v31 = v32;
       }
       if ((ecl_memql(v29var,v28already_declared_names))!=ECL_NIL) { goto L269; }
       T0 = cl_list(3, ECL_SYM("TYPE",871), v30type, v29var);
       v25declarations = CONS(T0,v25declarations);
L269:;
       goto L254;
L255:;
      }
      if ((v26let_vars)!=ECL_NIL) { goto L275; }
      if (Null(v25declarations)) { goto L273; }
      goto L274;
L275:;
L274:;
      T0 = CONS(ECL_SYM("DECLARE",276),v25declarations);
      T1 = cl_listX(4, ECL_SYM("LET*",480), v26let_vars, T0, v5body);
      v5body = ecl_list1(T1);
L273:;
      T0 = cl_delete(2, ECL_NIL, v21);
      v5body = ecl_nconc(T0,v5body);
      T0 = ecl_function_dispatch(cl_env_copy,VV[131])(1, ecl_symbol_value(VV[11])) /*  CMP-ENV-COPY */;
      ecl_bds_bind(cl_env_copy,VV[11],T0);        /*  *CMP-ENV*       */
      v5body = ecl_function_dispatch(cl_env_copy,VV[142])(1, v5body) /*  C1PROGN */;
      ecl_bds_unwind1(cl_env_copy);
      {
       cl_object v29;
       v29 = v27new_variables;
       goto L286;
L285:;
       {
        cl_object v30var;
        v30var = ecl_car(v29);
        ecl_function_dispatch(cl_env_copy,VV[143])(1, v30var) /*  CHECK-VREF */;
       }
       v29 = ecl_cdr(v29);
L286:;
       if (Null(v29)) { goto L293; }
       goto L285;
L293:;
      }
      T0 = cl_list(6, v13, v14, v15, v16, v17, v18);
      T1 = ecl_function_dispatch(cl_env_copy,VV[144])(7, ECL_SYM("LAMBDA",454), VV[30], v27new_variables, VV[31], T0, v4doc, v5body) /*  MAKE-C1FORM* */;
      {
       cl_object v29;
       {
        cl_object v30;
        v30 = ecl_make_cfun((cl_objectfn_fixed)LC12__lambda138,ECL_NIL,Cblock,1);
        v29 = v30;
       }
       {
        cl_object v30;
        cl_object v31;
        v30 = ECL_NIL;
        {
         cl_object v32;
         v32 = v22;
         if (ecl_unlikely(!ECL_LISTP(v32))) FEtype_error_list(v32);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         v31 = v32;
        }
        {
         cl_object v32;
         cl_object v33;
         v32 = ecl_list1(ECL_NIL);
         v33 = v32;
L303:;
         if (!(ecl_endp(v31))) { goto L305; }
         goto L304;
L305:;
         v30 = _ecl_car(v31);
         {
          cl_object v34;
          v34 = _ecl_cdr(v31);
          if (ecl_unlikely(!ECL_LISTP(v34))) FEtype_error_list(v34);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          v31 = v34;
         }
         {
          cl_object v34;
          v34 = v33;
          if (ecl_unlikely(ECL_ATOM(v34))) FEtype_error_cons(v34);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          T3 = v34;
         }
         T4 = ecl_function_dispatch(cl_env_copy,v29)(1, v30);
         v33 = ecl_list1(T4);
         (ECL_CONS_CDR(T3)=v33,T3);
         goto L303;
L304:;
         T2 = ecl_cdr(v32);
         goto L295;
        }
       }
      }
L295:;
      {
       cl_object v29;
       {
        cl_object v30;
        v30 = ecl_make_cfun((cl_objectfn_fixed)LC13__lambda146,ECL_NIL,Cblock,1);
        v29 = v30;
       }
       {
        cl_object v30;
        cl_object v31;
        v30 = ECL_NIL;
        {
         cl_object v32;
         v32 = v23;
         if (ecl_unlikely(!ECL_LISTP(v32))) FEtype_error_list(v32);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         v31 = v32;
        }
        {
         cl_object v32;
         cl_object v33;
         v32 = ecl_list1(ECL_NIL);
         v33 = v32;
L329:;
         if (!(ecl_endp(v31))) { goto L331; }
         goto L330;
L331:;
         v30 = _ecl_car(v31);
         {
          cl_object v34;
          v34 = _ecl_cdr(v31);
          if (ecl_unlikely(!ECL_LISTP(v34))) FEtype_error_list(v34);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          v31 = v34;
         }
         {
          cl_object v34;
          v34 = v33;
          if (ecl_unlikely(ECL_ATOM(v34))) FEtype_error_cons(v34);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          T4 = v34;
         }
         T5 = ecl_function_dispatch(cl_env_copy,v29)(1, v30);
         v33 = ecl_list1(T5);
         (ECL_CONS_CDR(T4)=v33,T4);
         goto L329;
L330:;
         T3 = ecl_cdr(v32);
         goto L321;
        }
       }
      }
L321:;
      cl_env_copy->nvalues = 3;
      cl_env_copy->values[2] = T3;
      cl_env_copy->values[1] = T2;
      cl_env_copy->values[0] = T1;
      ecl_bds_unwind1(cl_env_copy);
      ecl_bds_unwind1(cl_env_copy);
      return cl_env_copy->values[0];
     }
    }
   }
  }
 }
}
/*      local function LAMBDA138                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC12__lambda138(cl_object v1x)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(v1x)) { goto L1; }
  value0 = ecl_function_dispatch(cl_env_copy,VV[136])(1, v1x) /*  C1EXPR */;
  return value0;
L1:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function LAMBDA146                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC13__lambda146(cl_object v1x)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(v1x)) { goto L1; }
  value0 = ecl_function_dispatch(cl_env_copy,VV[136])(1, v1x) /*  C1EXPR */;
  return value0;
L1:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for LAMBDA-FORM-ALLOWED-NARGS             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L15lambda_form_allowed_nargs(cl_object v1lambda)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2minarg;
   cl_object v3maxarg;
   v2minarg = ecl_make_fixnum(0);
   v3maxarg = ecl_make_fixnum(65536);
   {
    cl_object v4;
    cl_object v5;
    cl_object v6requireds;
    cl_object v7optionals;
    cl_object v8rest;
    cl_object v9key_flag;
    cl_object v10keywords;
    cl_object v11a_o_k;
    T0 = ecl_function_dispatch(cl_env_copy,VV[96])(1, v1lambda) /*  C1FORM-ARGS */;
    v4 = ecl_car(T0);
    v5 = v4;
    if (!(v5==ECL_NIL)) { goto L7; }
    ecl_function_dispatch(cl_env_copy,VV[146])(1, v4) /*  DM-TOO-FEW-ARGUMENTS */;
L7:;
    {
     cl_object v12;
     v12 = ecl_car(v5);
     v5 = ecl_cdr(v5);
     v6requireds = v12;
    }
    if (!(v5==ECL_NIL)) { goto L13; }
    ecl_function_dispatch(cl_env_copy,VV[146])(1, v4) /*  DM-TOO-FEW-ARGUMENTS */;
L13:;
    {
     cl_object v12;
     v12 = ecl_car(v5);
     v5 = ecl_cdr(v5);
     v7optionals = v12;
    }
    if (!(v5==ECL_NIL)) { goto L19; }
    ecl_function_dispatch(cl_env_copy,VV[146])(1, v4) /*  DM-TOO-FEW-ARGUMENTS */;
L19:;
    {
     cl_object v12;
     v12 = ecl_car(v5);
     v5 = ecl_cdr(v5);
     v8rest = v12;
    }
    if (!(v5==ECL_NIL)) { goto L25; }
    ecl_function_dispatch(cl_env_copy,VV[146])(1, v4) /*  DM-TOO-FEW-ARGUMENTS */;
L25:;
    {
     cl_object v12;
     v12 = ecl_car(v5);
     v5 = ecl_cdr(v5);
     v9key_flag = v12;
    }
    if (!(v5==ECL_NIL)) { goto L31; }
    ecl_function_dispatch(cl_env_copy,VV[146])(1, v4) /*  DM-TOO-FEW-ARGUMENTS */;
L31:;
    {
     cl_object v12;
     v12 = ecl_car(v5);
     v5 = ecl_cdr(v5);
     v10keywords = v12;
    }
    if (!(v5==ECL_NIL)) { goto L37; }
    ecl_function_dispatch(cl_env_copy,VV[146])(1, v4) /*  DM-TOO-FEW-ARGUMENTS */;
L37:;
    {
     cl_object v12;
     v12 = ecl_car(v5);
     v5 = ecl_cdr(v5);
     v11a_o_k = v12;
    }
    if (Null(v5)) { goto L42; }
    ecl_function_dispatch(cl_env_copy,VV[147])(1, v4) /*  DM-TOO-MANY-ARGUMENTS */;
L42:;
    v2minarg = ecl_make_fixnum(ecl_length(v6requireds));
    if (!(v8rest==ECL_NIL)) { goto L3; }
    if ((v9key_flag)!=ECL_NIL) { goto L3; }
    if ((v11a_o_k)!=ECL_NIL) { goto L3; }
    {
     cl_fixnum v12;
     v12 = ecl_length(v7optionals);
     T0 = ecl_divide(ecl_make_fixnum(v12),ecl_make_fixnum(3));
     v3maxarg = ecl_plus(v2minarg,T0);
    }
   }
L3:;
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v3maxarg;
   cl_env_copy->values[0] = v2minarg;
   return cl_env_copy->values[0];
  }
 }
}
/*      function definition for C2LAMBDA-EXPR                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L19c2lambda_expr(cl_object v1lambda_list, cl_object v2body, cl_object v3cfun, cl_object v4fname, cl_object v5description, cl_object v6use_narg, cl_object v7required_lcls, cl_object v8closure_type, cl_object v9optional_type_check_forms, cl_object v10keyword_type_check_forms)
{
 cl_object T0, T1, T2;
 volatile cl_object lex0[2];
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  lex0[0] = v7required_lcls;                      /*  REQUIRED-LCLS   */
  lex0[1] = v8closure_type;                       /*  CLOSURE-TYPE    */
TTL:
  {
   cl_object v11requireds;
   cl_object v12optionals;
   cl_object v13rest;
   cl_object v14rest_loc;
   cl_object v15key_flag;
   cl_object v16keywords;
   cl_object v17allow_other_keys;
   cl_fixnum v18nreq;
   cl_object v19nopt;
   cl_fixnum v20nkey;
   cl_object v21varargs;
   cl_object v22fname_in_ihs_p;
   cl_object v23simple_varargs;
   v11requireds = ecl_car(v1lambda_list);
   v12optionals = ecl_cadr(v1lambda_list);
   v13rest = ecl_caddr(v1lambda_list);
   v14rest_loc = ECL_NIL;
   v15key_flag = ecl_cadddr(v1lambda_list);
   T0 = ecl_cddddr(v1lambda_list);
   v16keywords = ecl_car(T0);
   T0 = ecl_cddddr(v1lambda_list);
   v17allow_other_keys = ecl_cadr(T0);
   v18nreq = ecl_length(v11requireds);
   {
    cl_fixnum v24;
    v24 = ecl_length(v12optionals);
    v19nopt = ecl_divide(ecl_make_fixnum(v24),ecl_make_fixnum(3));
   }
   {
    cl_object v24;
    {
     cl_fixnum v25;
     v25 = ecl_length(v16keywords);
     v24 = ecl_divide(ecl_make_fixnum(v25),ecl_make_fixnum(4));
    }
    {
     bool v25;
     v25 = ECL_FIXNUMP(v24);
     if (ecl_unlikely(!(v25)))
         FEwrong_type_argument(ECL_SYM("FIXNUM",374),v24);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
    }
    v20nkey = ecl_fixnum(v24);
   }
   value0 = v12optionals;
   if ((value0)!=ECL_NIL) { goto L15; }
   value0 = v13rest;
   if ((value0)!=ECL_NIL) { goto L15; }
   value0 = v15key_flag;
   if ((value0)!=ECL_NIL) { goto L15; }
   v21varargs = v17allow_other_keys;
   goto L13;
L15:;
   v21varargs = value0;
   goto L13;
L13:;
   value0 = ecl_function_dispatch(cl_env_copy,VV[149])(0) /*  POLICY-DEBUG-VARIABLE-BINDINGS */;
   if ((value0)!=ECL_NIL) { goto L21; }
   if (Null(ecl_function_dispatch(cl_env_copy,VV[119])(0) /*  POLICY-DEBUG-IHS-FRAME */)) { goto L24; }
   value0 = v5description;
   if ((value0)!=ECL_NIL) { goto L27; }
   v22fname_in_ihs_p = v4fname;
   goto L19;
L27:;
   v22fname_in_ihs_p = value0;
   goto L19;
L24:;
   v22fname_in_ihs_p = ECL_NIL;
   goto L19;
L21:;
   v22fname_in_ihs_p = value0;
   goto L19;
L19:;
   v23simple_varargs = ECL_NIL;
   ecl_bds_bind(cl_env_copy,VV[25],ECL_T);        /*  *PERMANENT-DATA* */
   ecl_bds_push(cl_env_copy,VV[33]);              /*  *UNWIND-EXIT*   */
   ecl_bds_push(cl_env_copy,VV[34]);              /*  *ENV*           */
   ecl_bds_bind(cl_env_copy,VV[35],ecl_make_fixnum(0)); /*  *INLINE-BLOCKS* */
   if (Null(v4fname)) { goto L31; }
   {
    cl_object v24;
    v24 = v11requireds;
    goto L38;
L37:;
    {
     cl_object v25var;
     {
      cl_object v26;
      v26 = ecl_car(v24);
      T0 = si_of_class_p(2, v26, VV[36]);
      if (ecl_unlikely(!((T0)!=ECL_NIL)))
         FEwrong_type_argument(VV[36],v26);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v25var = v26;
     }
     if (Null(ecl_function_dispatch(cl_env_copy,VV[150])(1, v25var) /*  VAR-REF-CCB */)) { goto L44; }
     goto L31;
L44:;
    }
    v24 = ecl_cdr(v24);
L38:;
    if (Null(v24)) { goto L48; }
    goto L37;
L48:;
   }
   if (!(v12optionals==ECL_NIL)) { goto L31; }
   if (!(v13rest==ECL_NIL)) { goto L31; }
   if (!(v15key_flag==ECL_NIL)) { goto L31; }
   cl_set(VV[37],CONS(ecl_symbol_value(VV[37]),v11requireds));
   goto L30;
L31:;
   cl_set(VV[37],ECL_NIL);
L30:;
   if (Null(ecl_function_dispatch(cl_env_copy,VV[151])(0) /*  POLICY-CHECK-NARGS */)) { goto L54; }
   if (Null(v6use_narg)) { goto L57; }
   if ((v21varargs)!=ECL_NIL) { goto L57; }
   ecl_function_dispatch(cl_env_copy,VV[152])(3, VV[38], ecl_make_fixnum(v18nreq), VV[39]) /*  WT-NL */;
   goto L56;
L57:;
   if (Null(v21varargs)) { goto L56; }
   if (Null(v11requireds)) { goto L61; }
   ecl_function_dispatch(cl_env_copy,VV[152])(3, VV[40], ecl_make_fixnum(v18nreq), VV[39]) /*  WT-NL */;
L61:;
   if ((v13rest)!=ECL_NIL) { goto L56; }
   if ((v15key_flag)!=ECL_NIL) { goto L56; }
   if ((v17allow_other_keys)!=ECL_NIL) { goto L56; }
   T0 = ecl_plus(ecl_make_fixnum(v18nreq),v19nopt);
   ecl_function_dispatch(cl_env_copy,VV[152])(3, VV[41], T0, VV[39]) /*  WT-NL */;
L56:;
   ecl_function_dispatch(cl_env_copy,VV[153])(0)  /*  OPEN-INLINE-BLOCK */;
L54:;
   if (!((v18nreq)>(63))) { goto L66; }
   T0 = ecl_minus(ecl_make_fixnum(v18nreq),ecl_make_fixnum(63));
   v19nopt = ecl_plus(v19nopt,T0);
   v18nreq = 63;
   {
    cl_object v24;
    cl_object v25var;
    cl_object v26;
    v24 = cl_subseq(2, v11requireds, ecl_make_fixnum(63));
    v25var = ECL_NIL;
    {
     cl_object v27;
     v27 = v24;
     if (ecl_unlikely(!ECL_LISTP(v27))) FEtype_error_list(v27);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v26 = v27;
    }
    {
     cl_object v27;
     cl_object v28;
     v27 = ecl_list1(ECL_NIL);
     v28 = v27;
L82:;
     if (!(ecl_endp(v26))) { goto L84; }
     goto L83;
L84:;
     v25var = _ecl_car(v26);
     {
      cl_object v29;
      v29 = _ecl_cdr(v26);
      if (ecl_unlikely(!ECL_LISTP(v29))) FEtype_error_list(v29);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v26 = v29;
     }
     {
      cl_object v29;
      v29 = cl_list(3, v25var, ecl_symbol_value(VV[42]), ECL_NIL);
      {
       cl_object v30;
       v30 = v28;
       if (ecl_unlikely(ECL_ATOM(v30))) FEtype_error_cons(v30);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       T2 = v30;
      }
      (ECL_CONS_CDR(T2)=v29,T2);
      T1 = v29;
     }
     v28 = ecl_cddr(T1);
     goto L82;
L83:;
     T0 = ecl_cdr(v27);
     goto L74;
    }
   }
L74:;
   v12optionals = ecl_nconc(T0,v12optionals);
   v11requireds = cl_subseq(3, v11requireds, ecl_make_fixnum(0), ecl_make_fixnum(63));
   v21varargs = ECL_T;
L66:;
   {
    cl_object v24var;
    cl_object v25;
    v24var = ECL_NIL;
    {
     cl_object v26;
     v26 = v11requireds;
     if (ecl_unlikely(!ECL_LISTP(v26))) FEtype_error_list(v26);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v25 = v26;
    }
L111:;
    if (!(ecl_endp(v25))) { goto L113; }
    goto L112;
L113:;
    v24var = _ecl_car(v25);
    {
     cl_object v26;
     v26 = _ecl_cdr(v25);
     if (ecl_unlikely(!ECL_LISTP(v26))) FEtype_error_list(v26);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v25 = v26;
    }
    if (Null(ecl_function_dispatch(cl_env_copy,VV[154])(1, v24var) /*  UNBOXED */)) { goto L121; }
    {
     cl_object v26;
     v26 = LC16wt_decl(v24var);
     ecl_structure_set(v24var,VV[36],10,v26);
    }
L121:;
    goto L111;
L112:;
   }
   if (Null(v13rest)) { goto L125; }
   T0 = ecl_function_dispatch(cl_env_copy,VV[155])(1, v13rest) /*  VAR-REF */;
   if (!(ecl_lower(T0,ecl_make_fixnum(1)))) { goto L125; }
   T0 = ecl_function_dispatch(cl_env_copy,VV[156])(1, v13rest) /*  VAR-KIND */;
   if ((T0)==(ECL_SYM("SPECIAL",791))) { goto L125; }
   v13rest = ECL_NIL;
   value0 = v12optionals;
   if ((value0)!=ECL_NIL) { goto L133; }
   value0 = v15key_flag;
   if ((value0)!=ECL_NIL) { goto L133; }
   v21varargs = v17allow_other_keys;
   goto L131;
L133:;
   v21varargs = value0;
   goto L131;
L131:;
L125:;
   {
    cl_object v24opt;
    v24opt = v12optionals;
    goto L140;
L139:;
    T0 = ecl_car(v24opt);
    LC17do_decl(T0);
    if (Null(ecl_caddr(v24opt))) { goto L143; }
    T0 = ecl_caddr(v24opt);
    LC17do_decl(T0);
L143:;
    v24opt = ecl_cdddr(v24opt);
L140:;
    if (ecl_endp(v24opt)) { goto L147; }
    goto L139;
L147:;
   }
   if (Null(v13rest)) { goto L149; }
   v14rest_loc = LC16wt_decl(v13rest);
L149:;
   {
    cl_object v24key;
    v24key = v16keywords;
    goto L155;
L154:;
    T0 = ecl_cadr(v24key);
    LC17do_decl(T0);
    if (Null(ecl_cadddr(v24key))) { goto L158; }
    T0 = ecl_cadddr(v24key);
    LC17do_decl(T0);
L158:;
    v24key = ecl_cddddr(v24key);
L155:;
    if (ecl_endp(v24key)) { goto L162; }
    goto L154;
L162:;
   }
   if (Null(v21varargs)) { goto L164; }
   if ((v13rest)!=ECL_NIL) { goto L170; }
   if ((v15key_flag)!=ECL_NIL) { goto L170; }
   if ((v17allow_other_keys)!=ECL_NIL) { goto L170; }
   T0 = ecl_plus(ecl_make_fixnum(v18nreq),v19nopt);
   v23simple_varargs = ecl_make_bool(ecl_lowereq(T0,ecl_make_fixnum(63)));
   goto L168;
L170:;
   v23simple_varargs = ECL_NIL;
   goto L168;
L168:;
   if (Null(v23simple_varargs)) { goto L166; }
   T0 = LC18last_variable(lex0);
   ecl_function_dispatch(cl_env_copy,VV[152])(3, VV[50], T0, VV[51]) /*  WT-NL */;
   goto L164;
L166:;
   T0 = LC18last_variable(lex0);
   ecl_function_dispatch(cl_env_copy,VV[152])(5, VV[52], T0, VV[53], ecl_make_fixnum(v18nreq), VV[51]) /*  WT-NL */;
L164:;
   {
    cl_object v24;
    v24 = ecl_fdefinition(VV[157]);
    {
     cl_object v25;
     cl_object v26;
     v25 = ECL_NIL;
     {
      cl_object v27;
      v27 = lex0[0];
      if (ecl_unlikely(!ECL_LISTP(v27))) FEtype_error_list(v27);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v26 = v27;
     }
     {
      cl_object v27;
      cl_object v28;
      v27 = ECL_NIL;
      {
       cl_object v29;
       v29 = v11requireds;
       if (ecl_unlikely(!ECL_LISTP(v29))) FEtype_error_list(v29);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v28 = v29;
      }
L186:;
      if (!(ecl_endp(v26))) { goto L188; }
      goto L187;
L188:;
      v25 = _ecl_car(v26);
      {
       cl_object v29;
       v29 = _ecl_cdr(v26);
       if (ecl_unlikely(!ECL_LISTP(v29))) FEtype_error_list(v29);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v26 = v29;
      }
      if (!(ecl_endp(v28))) { goto L196; }
      goto L187;
L196:;
      v27 = _ecl_car(v28);
      {
       cl_object v29;
       v29 = _ecl_cdr(v28);
       if (ecl_unlikely(!ECL_LISTP(v29))) FEtype_error_list(v29);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v28 = v29;
      }
      ecl_function_dispatch(cl_env_copy,v24)(2, v25, v27);
      goto L186;
L187:;
      goto L176;
     }
    }
   }
L176:;
   if (Null(v22fname_in_ihs_p)) { goto L207; }
   ecl_function_dispatch(cl_env_copy,VV[153])(0)  /*  OPEN-INLINE-BLOCK */;
   cl_set(VV[54],ECL_T);
   cl_set(VV[33],CONS(VV[55],ecl_symbol_value(VV[33])));
   if (Null(ecl_function_dispatch(cl_env_copy,VV[149])(0) /*  POLICY-DEBUG-VARIABLE-BINDINGS */)) { goto L214; }
   T0 = cl_reverse(v11requireds);
   ecl_function_dispatch(cl_env_copy,VV[158])(2, T0, ECL_T) /*  BUILD-DEBUG-LEXICAL-ENV */;
L214:;
   value0 = v5description;
   if ((value0)!=ECL_NIL) { goto L218; }
   T0 = v4fname;
   goto L216;
L218:;
   T0 = value0;
   goto L216;
L216:;
   T1 = ecl_function_dispatch(cl_env_copy,VV[159])(1, T0) /*  ADD-SYMBOL */;
   ecl_function_dispatch(cl_env_copy,VV[152])(3, VV[56], T1, VV[57]) /*  WT-NL */;
L207:;
   if (Null(v12optionals)) { goto L220; }
   {
    cl_object v24va_arg_loc;
    if (Null(v23simple_varargs)) { goto L223; }
    v24va_arg_loc = VV[58];
    goto L222;
L223:;
    v24va_arg_loc = VV[59];
L222:;
    ecl_function_dispatch(cl_env_copy,VV[160])(0) /*  WT-NL-OPEN-BRACE */;
    ecl_function_dispatch(cl_env_copy,VV[152])(3, VV[60], ecl_make_fixnum(v18nreq), VV[45]) /*  WT-NL */;
    {
     cl_object v25opt;
     cl_object v26type_check;
     v25opt = v12optionals;
     v26type_check = v9optional_type_check_forms;
     goto L232;
L231:;
     ecl_function_dispatch(cl_env_copy,VV[152])(1, VV[61]) /*  WT-NL  */;
     T0 = ecl_one_plus(ecl_symbol_value(VV[62]));
     ecl_bds_bind(cl_env_copy,VV[62],T0);         /*  *OPENED-C-BRACES* */
     T0 = ecl_cadr(v25opt);
     T1 = ecl_car(v25opt);
     ecl_function_dispatch(cl_env_copy,VV[161])(2, T0, T1) /*  BIND-INIT */;
     if (Null(ecl_caddr(v25opt))) {
     ecl_bds_unwind1(cl_env_copy);
      goto L235;
     }
     T0 = ecl_caddr(v25opt);
     ecl_function_dispatch(cl_env_copy,VV[157])(2, ECL_NIL, T0) /*  BIND */;
     ecl_bds_unwind1(cl_env_copy);
L235:;
     ecl_function_dispatch(cl_env_copy,VV[152])(1, VV[63]) /*  WT-NL  */;
     {
      cl_object v27;
      cl_object v28;
      v27 = ecl_one_plus(ecl_symbol_value(VV[62]));
      v28 = ecl_symbol_value(VV[33]);
      ecl_bds_bind(cl_env_copy,VV[62],v27);       /*  *OPENED-C-BRACES* */
      ecl_bds_bind(cl_env_copy,VV[33],v28);       /*  *UNWIND-EXIT*   */
      ecl_function_dispatch(cl_env_copy,VV[152])(1, VV[64]) /*  WT-NL */;
      T0 = ecl_car(v25opt);
      ecl_function_dispatch(cl_env_copy,VV[157])(2, v24va_arg_loc, T0) /*  BIND */;
      if (Null(ecl_car(v26type_check))) { goto L244; }
      T0 = ecl_car(v26type_check);
      ecl_function_dispatch(cl_env_copy,VV[162])(1, T0) /*  C2EXPR*   */;
L244:;
      if (Null(ecl_caddr(v25opt))) {
      ecl_bds_unwind1(cl_env_copy);
      ecl_bds_unwind1(cl_env_copy);
       goto L239;
      }
      T0 = ecl_caddr(v25opt);
      ecl_function_dispatch(cl_env_copy,VV[157])(2, ECL_T, T0) /*  BIND */;
      ecl_bds_unwind1(cl_env_copy);
      ecl_bds_unwind1(cl_env_copy);
     }
L239:;
     ecl_function_dispatch(cl_env_copy,VV[152])(1, VV[65]) /*  WT-NL  */;
     v25opt = ecl_cdddr(v25opt);
     v26type_check = ecl_cdr(v26type_check);
L232:;
     if (ecl_endp(v25opt)) { goto L251; }
     goto L231;
L251:;
    }
    ecl_function_dispatch(cl_env_copy,VV[163])(0) /*  WT-NL-CLOSE-BRACE */;
   }
L220:;
   if ((v13rest)!=ECL_NIL) { goto L255; }
   if ((v15key_flag)!=ECL_NIL) { goto L255; }
   if (Null(v17allow_other_keys)) { goto L253; }
   goto L254;
L255:;
L254:;
   if ((v15key_flag)!=ECL_NIL) { goto L259; }
   if ((v17allow_other_keys)!=ECL_NIL) { goto L259; }
   ecl_function_dispatch(cl_env_copy,VV[152])(2, v14rest_loc, VV[66]) /*  WT-NL */;
   goto L258;
L259:;
   if (Null(v16keywords)) { goto L263; }
   ecl_function_dispatch(cl_env_copy,VV[160])(0)  /*  WT-NL-OPEN-BRACE */;
   T0 = ecl_times(ecl_make_fixnum(2),ecl_make_fixnum(v20nkey));
   ecl_function_dispatch(cl_env_copy,VV[152])(3, VV[67], T0, VV[68]) /*  WT-NL */;
   ecl_function_dispatch(cl_env_copy,VV[152])(5, VV[69], ecl_make_fixnum(v20nkey), VV[70], v3cfun, VV[71]) /*  WT-NL */;
   goto L262;
L263:;
   ecl_function_dispatch(cl_env_copy,VV[152])(1, VV[72]) /*  WT-NL    */;
L262:;
   if (Null(v13rest)) { goto L268; }
   ecl_function_dispatch(cl_env_copy,VV[164])(2, VV[73], v14rest_loc) /*  WT */;
   goto L267;
L268:;
   ecl_function_dispatch(cl_env_copy,VV[164])(1, VV[74]) /*  WT       */;
L267:;
   if (Null(v17allow_other_keys)) { goto L271; }
   T0 = VV[75];
   goto L270;
L271:;
   T0 = VV[76];
L270:;
   ecl_function_dispatch(cl_env_copy,VV[164])(1, T0) /*  WT           */;
L258:;
   if (Null(v13rest)) { goto L253; }
   ecl_function_dispatch(cl_env_copy,VV[157])(2, v14rest_loc, v13rest) /*  BIND */;
L253:;
   if (Null(v21varargs)) { goto L274; }
   if (Null(v23simple_varargs)) { goto L277; }
   T0 = VV[77];
   goto L276;
L277:;
   T0 = VV[78];
L276:;
   ecl_function_dispatch(cl_env_copy,VV[152])(1, T0) /*  WT-NL        */;
L274:;
   {
    cl_object v24kwd;
    cl_object v25all_kwd;
    cl_fixnum v26i;
    cl_object v27type_check;
    v24kwd = v16keywords;
    v25all_kwd = ECL_NIL;
    v26i = 0;
    v27type_check = v10keyword_type_check_forms;
    goto L286;
L285:;
    T0 = ecl_car(v24kwd);
    v25all_kwd = CONS(T0,v25all_kwd);
    {
     cl_object v28;
     cl_object v29;
     cl_object v30;
     cl_object v31;
     v28 = ecl_car(v24kwd);
     v29 = ecl_cadr(v24kwd);
     v30 = ecl_caddr(v24kwd);
     v31 = ecl_cadddr(v24kwd);
     T0 = ecl_function_dispatch(cl_env_copy,VV[165])(1, v30) /*  C1FORM-NAME */;
     if (!((T0)==(ECL_SYM("LOCATION",1842)))) { goto L296; }
     T0 = ecl_function_dispatch(cl_env_copy,VV[96])(1, v30) /*  C1FORM-ARGS */;
     T1 = ecl_car(T0);
     if (!(T1==ECL_NIL)) { goto L296; }
     {
      cl_object v32;
      v32 = ecl_make_fixnum(v26i);
      {
       cl_object v33;
       v33 = ecl_cdr(VV[79]);
       if (ecl_unlikely(ECL_ATOM(v33))) FEtype_error_cons(v33);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       T0 = v33;
      }
      (ECL_CONS_CAR(T0)=v32,T0);
     }
     ecl_function_dispatch(cl_env_copy,VV[157])(2, VV[79], v29) /*  BIND */;
     goto L295;
L296:;
     {
      cl_object v32;
      v32 = ecl_plus(ecl_make_fixnum(v20nkey),ecl_make_fixnum(v26i));
      {
       cl_object v33;
       v33 = ecl_cdr(VV[79]);
       if (ecl_unlikely(ECL_ATOM(v33))) FEtype_error_cons(v33);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       T0 = v33;
      }
      (ECL_CONS_CAR(T0)=v32,T0);
     }
     ecl_function_dispatch(cl_env_copy,VV[152])(1, VV[80]) /*  WT-NL  */;
     ecl_function_dispatch(cl_env_copy,VV[166])(1, VV[79]) /*  WT-LOC */;
     ecl_function_dispatch(cl_env_copy,VV[164])(1, VV[81]) /*  WT     */;
     {
      cl_object v32;
      cl_object v33;
      v32 = ecl_symbol_value(VV[33]);
      v33 = ecl_one_plus(ecl_symbol_value(VV[62]));
      ecl_bds_bind(cl_env_copy,VV[33],v32);       /*  *UNWIND-EXIT*   */
      ecl_bds_bind(cl_env_copy,VV[62],v33);       /*  *OPENED-C-BRACES* */
      ecl_function_dispatch(cl_env_copy,VV[161])(2, v30, v29) /*  BIND-INIT */;
      ecl_bds_unwind1(cl_env_copy);
      ecl_bds_unwind1(cl_env_copy);
     }
     ecl_function_dispatch(cl_env_copy,VV[152])(1, VV[63]) /*  WT-NL  */;
     T0 = ecl_one_plus(ecl_symbol_value(VV[62]));
     ecl_bds_bind(cl_env_copy,VV[62],T0);         /*  *OPENED-C-BRACES* */
     {
      cl_object v32;
      v32 = ecl_make_fixnum(v26i);
      {
       cl_object v33;
       v33 = ecl_cdr(VV[79]);
       if (ecl_unlikely(ECL_ATOM(v33))) FEtype_error_cons(v33);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       T0 = v33;
      }
      (ECL_CONS_CAR(T0)=v32,T0);
     }
     ecl_function_dispatch(cl_env_copy,VV[157])(2, VV[79], v29) /*  BIND */;
     if (Null(ecl_car(v27type_check))) {
     ecl_bds_unwind1(cl_env_copy);
      goto L318;
     }
     T0 = ecl_car(v27type_check);
     ecl_function_dispatch(cl_env_copy,VV[162])(1, T0) /*  C2EXPR*    */;
     ecl_bds_unwind1(cl_env_copy);
L318:;
     ecl_function_dispatch(cl_env_copy,VV[152])(1, VV[65]) /*  WT-NL  */;
L295:;
     if (Null(v31)) { goto L290; }
     {
      cl_object v32;
      v32 = ecl_plus(ecl_make_fixnum(v20nkey),ecl_make_fixnum(v26i));
      {
       cl_object v33;
       v33 = ecl_cdr(VV[79]);
       if (ecl_unlikely(ECL_ATOM(v33))) FEtype_error_cons(v33);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       T0 = v33;
      }
      (ECL_CONS_CAR(T0)=v32,T0);
     }
     ecl_function_dispatch(cl_env_copy,VV[157])(2, VV[79], v31) /*  BIND */;
    }
L290:;
    v24kwd = ecl_cddddr(v24kwd);
    {
     cl_object v28;
     v28 = ecl_make_integer((v26i)+1);
     {
      bool v29;
      v29 = ECL_FIXNUMP(v28);
      if (ecl_unlikely(!(v29)))
         FEwrong_type_argument(ECL_SYM("FIXNUM",374),v28);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
     }
     v26i = ecl_fixnum(v28);
    }
    v27type_check = ecl_cdr(v27type_check);
L286:;
    if (ecl_endp(v24kwd)) { goto L340; }
    goto L285;
L340:;
    if (Null(v25all_kwd)) { goto L279; }
    T0 = cl_nreverse(v25all_kwd);
    T1 = ecl_function_dispatch(cl_env_copy,VV[167])(1, T0) /*  ADD-KEYWORDS */;
    ecl_function_dispatch(cl_env_copy,VV[168])(5, VV[82], v3cfun, VV[83], T1, VV[84]) /*  WT-NL-H */;
    ecl_function_dispatch(cl_env_copy,VV[163])(0) /*  WT-NL-CLOSE-BRACE */;
   }
L279:;
   if (Null(ecl_symbol_value(VV[37]))) { goto L344; }
   cl_set(VV[33],CONS(VV[85],ecl_symbol_value(VV[33])));
   ecl_function_dispatch(cl_env_copy,VV[169])(1, VV[86]) /*  WT-NL1   */;
L344:;
   ecl_function_dispatch(cl_env_copy,VV[170])(1, v2body) /*  C2EXPR   */;
   value0 = ecl_function_dispatch(cl_env_copy,VV[171])(0) /*  CLOSE-INLINE-BLOCKS */;
   ecl_bds_unwind_n(cl_env_copy,4);
   return value0;
  }
 }
}
/*      local function DO-DECL                                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC17do_decl(cl_object v1var)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(ecl_function_dispatch(cl_env_copy,VV[172])(1, v1var) /*  LOCAL */)) { goto L1; }
  {
   cl_object v2;
   v2 = LC16wt_decl(v1var);
   value0 = ecl_structure_set(v1var,VV[36],10,v2);
   cl_env_copy->nvalues = 1;
   return value0;
  }
L1:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function WT-DECL                                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC16wt_decl(cl_object v1var)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2lcl;
   T0 = ecl_function_dispatch(cl_env_copy,VV[127])(1, v1var) /*  VAR-NAME */;
   v2lcl = ecl_function_dispatch(cl_env_copy,VV[173])(1, T0) /*  NEXT-LCL */;
   ecl_function_dispatch(cl_env_copy,VV[152])(0)  /*  WT-NL           */;
   T0 = ecl_function_dispatch(cl_env_copy,VV[174])(1, v1var) /*  VAR-REP-TYPE */;
   T1 = ecl_function_dispatch(cl_env_copy,VV[175])(1, T0) /*  REP-TYPE->C-NAME */;
   ecl_function_dispatch(cl_env_copy,VV[164])(5, T1, VV[43], ecl_symbol_value(VV[44]), v2lcl, VV[45]) /*  WT */;
   value0 = v2lcl;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function LAST-VARIABLE                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC18last_variable(volatile cl_object *lex0)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(lex0[0])) { goto L1; }
  T0 = ecl_last(lex0[0],1);
  value0 = ecl_car(T0);
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  if (!((lex0[1])==(VV[46]))) { goto L3; }
  T0 = ecl_one_minus(ecl_symbol_value(VV[48]));
  value0 = cl_format(3, ECL_NIL, VV[47], T0);
  return value0;
L3:;
  value0 = VV[49];
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for TRANSFORM-FUNCALL/APPLY-INTO-LET*     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L20transform_funcall_apply_into_let_(cl_object v1lambda_form, cl_object v2arguments, cl_object v3apply_p)
{
 cl_object T0, T1, T2, T3, T4, T5;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v4apply_list;
   cl_object v5apply_var;
   cl_object v6let_vars;
   cl_object v7extra_stmts;
   cl_object v8all_keys;
   v4apply_list = ECL_NIL;
   v5apply_var = ECL_NIL;
   v6let_vars = ECL_NIL;
   v7extra_stmts = ECL_NIL;
   v8all_keys = ECL_NIL;
   {
    cl_object v10;                                /*  REQUIREDS       */
    cl_object v11;                                /*  OPTIONALS       */
    cl_object v12;                                /*  REST            */
    cl_object v13;                                /*  KEY-FLAG        */
    cl_object v14;                                /*  KEYWORDS        */
    cl_object v15;                                /*  ALLOW-OTHER-KEYS */
    cl_object v16;                                /*  AUX-VARS        */
    T0 = ecl_cadr(v1lambda_form);
    value0 = L11cmp_process_lambda_list(T0);
    {
     const int v17 = cl_env_copy->nvalues;
     v10 = value0;
     cl_object v18;
     v18 = (v17<=1)? ECL_NIL : cl_env_copy->values[1];
     v11 = v18;
     v18 = (v17<=2)? ECL_NIL : cl_env_copy->values[2];
     v12 = v18;
     v18 = (v17<=3)? ECL_NIL : cl_env_copy->values[3];
     v13 = v18;
     v18 = (v17<=4)? ECL_NIL : cl_env_copy->values[4];
     v14 = v18;
     v18 = (v17<=5)? ECL_NIL : cl_env_copy->values[5];
     v15 = v18;
     v18 = (v17<=6)? ECL_NIL : cl_env_copy->values[6];
     v16 = v18;
    }
    if (Null(v3apply_p)) { goto L7; }
    T0 = ecl_last(v2arguments,1);
    v4apply_list = ecl_car(T0);
    v5apply_var = cl_gensym(0);
    v2arguments = ecl_butlast(v2arguments,1);
L7:;
    v2arguments = cl_copy_list(v2arguments);
    {
     cl_object v17scan;
     v17scan = v2arguments;
     goto L20;
L19:;
     {
      cl_object v18form;
      v18form = ecl_car(v17scan);
      if ((cl_constantp(1, v18form))!=ECL_NIL) { goto L22; }
      {
       cl_object v19aux_var;
       v19aux_var = cl_gensym(0);
       T0 = cl_list(2, v19aux_var, v18form);
       v6let_vars = CONS(T0,v6let_vars);
       {
        cl_object v20;
        v20 = v19aux_var;
        {
         cl_object v21;
         v21 = v17scan;
         if (ecl_unlikely(ECL_ATOM(v21))) FEtype_error_cons(v21);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         T0 = v21;
        }
        (ECL_CONS_CAR(T0)=v20,T0);
       }
      }
     }
L22:;
     v17scan = ecl_cdr(v17scan);
L20:;
     if (ecl_endp(v17scan)) { goto L35; }
     goto L19;
L35:;
    }
    if (Null(v5apply_var)) { goto L37; }
    T0 = cl_list(2, v5apply_var, v4apply_list);
    v6let_vars = CONS(T0,v6let_vars);
L37:;
    {
     cl_object v17;
     v17 = ecl_cdr(v10);
     goto L44;
L43:;
     {
      cl_object v18i;
      v18i = ecl_car(v17);
      if (Null(v2arguments)) { goto L51; }
      {
       cl_object v19;
       v19 = v2arguments;
       {
        cl_object v20;
        v20 = v19;
        if (ecl_unlikely(!ECL_LISTP(v20))) FEtype_error_list(v20);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v19)) { goto L57; }
       {
        cl_object v20;
        v20 = ECL_CONS_CDR(v19);
        v2arguments = v20;
        v19 = ECL_CONS_CAR(v19);
       }
L57:;
       T0 = v19;
       goto L50;
      }
L51:;
      if (Null(v3apply_p)) { goto L63; }
      T1 = cl_list(2, ECL_SYM("POP",645), v5apply_var);
      T0 = cl_list(4, ECL_SYM("IF",948), v5apply_var, T1, VV[88]);
      goto L50;
L63:;
      T1 = CONS(ECL_SYM("LAMBDA",454),v1lambda_form);
      T0 = ecl_function_dispatch(cl_env_copy,VV[125])(2, VV[89], T1) /*  CMPERR */;
L50:;
      T1 = cl_list(2, v18i, T0);
      v6let_vars = CONS(T1,v6let_vars);
     }
     v17 = ecl_cdr(v17);
L44:;
     if (Null(v17)) { goto L67; }
     goto L43;
L67:;
    }
    {
     cl_object v17scan;
     v17scan = ecl_cdr(v11);
     goto L73;
L72:;
     {
      cl_object v18;
      cl_object v19;
      cl_object v20;
      v18 = ecl_car(v17scan);
      v19 = ecl_caddr(v17scan);
      v20 = ecl_cadr(v17scan);
      if (Null(v2arguments)) { goto L79; }
      {
       cl_object v21;
       v21 = v2arguments;
       {
        cl_object v22;
        v22 = v21;
        if (ecl_unlikely(!ECL_LISTP(v22))) FEtype_error_list(v22);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v21)) { goto L87; }
       {
        cl_object v22;
        v22 = ECL_CONS_CDR(v21);
        v2arguments = v22;
        v21 = ECL_CONS_CAR(v21);
       }
L87:;
       T0 = v21;
      }
      T1 = cl_list(2, v18, T0);
      T2 = cl_list(2, v19, ECL_T);
      v6let_vars = cl_listX(3, T1, T2, v6let_vars);
      goto L75;
L79:;
      if (Null(v3apply_p)) { goto L93; }
      T0 = cl_list(2, ECL_SYM("POP",645), v5apply_var);
      T1 = cl_list(4, ECL_SYM("IF",948), v5apply_var, T0, v20);
      T2 = cl_list(2, v18, T1);
      T3 = cl_list(2, v19, v5apply_var);
      v6let_vars = cl_listX(3, T2, T3, v6let_vars);
      goto L75;
L93:;
      T0 = cl_list(2, v18, v20);
      T1 = cl_list(2, v19, ECL_NIL);
      v6let_vars = cl_listX(3, T0, T1, v6let_vars);
     }
L75:;
     v17scan = ecl_cdddr(v17scan);
L73:;
     if (ecl_endp(v17scan)) { goto L99; }
     goto L72;
L99:;
    }
    if ((v13)!=ECL_NIL) { goto L103; }
    if (Null(v15)) { goto L101; }
    goto L102;
L103:;
L102:;
    if ((v12)!=ECL_NIL) { goto L101; }
    v12 = cl_gensym(0);
L101:;
    if (Null(v12)) { goto L107; }
    if (Null(v2arguments)) { goto L111; }
    if (Null(v3apply_p)) { goto L113; }
    T1 = ecl_list1(v5apply_var);
    T2 = ecl_append(v2arguments,T1);
    T0 = CONS(ECL_SYM("LIST*",484),T2);
    goto L110;
L113:;
    T0 = CONS(ECL_SYM("LIST",483),v2arguments);
    goto L110;
L111:;
    if (Null(v3apply_p)) { goto L115; }
    T0 = v5apply_var;
    goto L110;
L115:;
    T0 = ECL_NIL;
L110:;
    T1 = cl_list(2, v12, T0);
    v6let_vars = CONS(T1,v6let_vars);
L107:;
L118:;
    if ((v16)!=ECL_NIL) { goto L120; }
    goto L119;
L120:;
    {
     cl_object v17;
     v17 = v16;
     {
      cl_object v18;
      v18 = v17;
      if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
     }
     if (Null(v17)) { goto L129; }
     {
      cl_object v18;
      v18 = ECL_CONS_CDR(v17);
      v16 = v18;
      v17 = ECL_CONS_CAR(v17);
     }
L129:;
     T0 = v17;
    }
    {
     cl_object v17;
     v17 = v16;
     {
      cl_object v18;
      v18 = v17;
      if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
     }
     if (Null(v17)) { goto L140; }
     {
      cl_object v18;
      v18 = ECL_CONS_CDR(v17);
      v16 = v18;
      v17 = ECL_CONS_CAR(v17);
     }
L140:;
     T1 = v17;
    }
    T2 = cl_list(2, T0, T1);
    v6let_vars = CONS(T2,v6let_vars);
    goto L118;
L119:;
    {
     cl_object v17scan;
     v17scan = ecl_cdr(v14);
     goto L151;
L150:;
     {
      cl_object v18;
      cl_object v19;
      cl_object v20;
      cl_object v21;
      v18 = ecl_car(v17scan);
      v19 = ecl_cadr(v17scan);
      v20 = ecl_caddr(v17scan);
      value0 = ecl_cadddr(v17scan);
      if ((value0)!=ECL_NIL) { goto L159; }
      v21 = cl_gensym(0);
      goto L157;
L159:;
      v21 = value0;
      goto L157;
L157:;
      v8all_keys = CONS(v18,v8all_keys);
      T0 = cl_list(3, ECL_SYM("EQ",335), v21, VV[90]);
      T1 = cl_list(4, ECL_SYM("IF",948), T0, v20, v21);
      T2 = cl_list(2, v19, T1);
      T3 = cl_list(3, VV[91], v12, v18);
      T4 = cl_list(2, v21, T3);
      v6let_vars = cl_listX(3, T2, T4, v6let_vars);
      if (Null(ecl_cadddr(v17scan))) { goto L153; }
      T0 = cl_list(3, ECL_SYM("EQ",335), v21, VV[90]);
      T1 = cl_list(2, ECL_SYM("NOT",586), T0);
      T2 = cl_list(3, ECL_SYM("SETF",752), v21, T1);
      v7extra_stmts = CONS(T2,v7extra_stmts);
     }
L153:;
     v17scan = ecl_cddddr(v17scan);
L151:;
     if (ecl_endp(v17scan)) { goto L169; }
     goto L150;
L169:;
    }
    if (Null(v13)) { goto L171; }
    if ((v15)!=ECL_NIL) { goto L171; }
    T0 = cl_list(2, ECL_SYM("QUOTE",681), v8all_keys);
    T1 = cl_list(3, VV[92], v12, T0);
    v7extra_stmts = CONS(T1,v7extra_stmts);
L171:;
    T0 = (ECL_SYM("FIRST",373)->symbol.gfdef);
    T1 = cl_delete_if_not(2, T0, v6let_vars);
    T2 = cl_nreverse(T1);
    if (Null(v5apply_var)) { goto L178; }
    T4 = cl_list(2, ECL_SYM("IGNORABLE",429), v5apply_var);
    T5 = cl_list(2, ECL_SYM("DECLARE",276), T4);
    T3 = ecl_list1(T5);
    goto L176;
L178:;
    T3 = ECL_NIL;
    goto L176;
L176:;
    {
     cl_object v18;                               /*  DECL            */
     cl_object v19;                               /*  BODY            */
     T5 = ecl_cddr(v1lambda_form);
     value0 = ecl_function_dispatch(cl_env_copy,VV[177])(1, T5) /*  FIND-DECLARATIONS */;
     {
      const int v20 = cl_env_copy->nvalues;
      v18 = value0;
      cl_object v21;
      v21 = (v20<=1)? ECL_NIL : cl_env_copy->values[1];
      v19 = v21;
     }
     T4 = cl_append(3, v18, v7extra_stmts, v19);
    }
    T5 = ecl_append(T3,T4);
    cl_env_copy->nvalues = 2;
    cl_env_copy->values[1] = T5;
    cl_env_copy->values[0] = T2;
    return cl_env_copy->values[0];
   }
  }
 }
}
/*      function definition for OPTIMIZE-FUNCALL/APPLY-LAMBDA         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L21optimize_funcall_apply_lambda(cl_object v1lambda_form, cl_object v2arguments, cl_object v3apply_p)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v5;                                  /*  BINDINGS        */
   cl_object v6;                                  /*  BODY            */
   value0 = L20transform_funcall_apply_into_let_(v1lambda_form, v2arguments, v3apply_p);
   {
    const int v7 = cl_env_copy->nvalues;
    v5 = value0;
    cl_object v8;
    v8 = (v7<=1)? ECL_NIL : cl_env_copy->values[1];
    v6 = v8;
   }
   value0 = cl_listX(3, ECL_SYM("LET*",480), v5, v6);
   return value0;
  }
 }
}

#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/cmp/cmplam.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _ecliSu0faZ7_HlU6lq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CMP;CMPLAM.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_ecliSu0faZ7_HlU6lq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  ecl_cmp_defun(VV[95]);                          /*  C1LAMBDA-DOC    */
  ecl_cmp_defun(VV[97]);                          /*  C1LAMBDA-BODY   */
  ecl_cmp_defun(VV[98]);                          /*  C1LAMBDA-LIST   */
  ecl_cmp_defun(VV[99]);                          /*  FUN-NEEDS-NARG  */
  ecl_cmp_defun(VV[100]);                         /*  FUN-FIXED-NARG  */
  ecl_cmp_defun(VV[104]);                         /*  ADD-TO-FUN-REFERENCED-VARS */
  ecl_cmp_defun(VV[107]);                         /*  ADD-TO-FUN-REFERENCED-FUNS */
  ecl_cmp_defun(VV[111]);                         /*  FUNCTION-BLOCK-NAME-DECLARATION */
  ecl_cmp_defun(VV[112]);                         /*  C1COMPILE-FUNCTION */
  ecl_cmp_defun(VV[130]);                         /*  CMP-PROCESS-LAMBDA-LIST */
  (void)0; /* No entry created for C1LAMBDA-EXPR */
  ecl_cmp_defun(VV[145]);                         /*  LAMBDA-FORM-ALLOWED-NARGS */
  ecl_cmp_defun(VV[148]);                         /*  C2LAMBDA-EXPR   */
  ecl_cmp_defun(VV[176]);                         /*  TRANSFORM-FUNCALL/APPLY-INTO-LET* */
  ecl_cmp_defun(VV[178]);                         /*  OPTIMIZE-FUNCALL/APPLY-LAMBDA */
}
