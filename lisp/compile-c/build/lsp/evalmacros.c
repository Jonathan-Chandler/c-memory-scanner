/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:LSP;EVALMACROS.LSP                                */
#include <ecl/ecl-cmp.h>
#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/lsp/evalmacros.eclh"
/*      local function UNLESS                                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC1unless(cl_object v1, cl_object v2)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4pred;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[50])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v5;
    v5 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4pred = v5;
   }
   T0 = cl_list(2, ECL_SYM("NOT",586), v4pred);
   T1 = CONS(ECL_SYM("PROGN",673),v3);
   value0 = cl_list(3, ECL_SYM("IF",948), T0, T1);
   return value0;
  }
 }
}
/*      local function DEFMACRO                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC2defmacro(cl_object v1, cl_object v2)
{
 cl_object T0, T1, T2, T3, T4;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4name;
   cl_object v5vl;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[50])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4name = v6;
   }
   if (!(v3==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[50])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5vl = v6;
   }
   {
    cl_object v7;                                 /*  FUNCTION        */
    cl_object v8;                                 /*  PPRINT          */
    cl_object v9;                                 /*  DOC-STRING      */
    value0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("EXPAND-DEFMACRO",1071))(3, v4name, v5vl, v3) /*  EXPAND-DEFMACRO */;
    {
     const int v10 = cl_env_copy->nvalues;
     v7 = value0;
     cl_object v11;
     v11 = (v10<=1)? ECL_NIL : cl_env_copy->values[1];
     v8 = v11;
     v11 = (v10<=2)? ECL_NIL : cl_env_copy->values[2];
     v9 = v11;
    }
    v7 = cl_list(2, ECL_SYM("FUNCTION",398), v7);
    if (Null(ecl_symbol_value(VV[1]))) { goto L17; }
    ecl_print(v7,ECL_NIL);
    v7 = cl_list(2, ECL_SYM("BC-DISASSEMBLE",1046), v7);
L17:;
    if (Null(ecl_symbol_value(ECL_SYM("*REGISTER-WITH-PDE-HOOK*",1203)))) { goto L22; }
    T1 = cl_copy_tree(ecl_symbol_value(ECL_SYM("*SOURCE-LOCATION*",1202)));
    T2 = cl_list(2, ECL_SYM("QUOTE",681), v4name);
    T3 = cl_list(5, ECL_SYM("FSET",1084), T2, v7, ECL_T, v8);
    T0 = ecl_function_dispatch(cl_env_copy,ecl_symbol_value(ECL_SYM("*REGISTER-WITH-PDE-HOOK*",1203)))(3, T1, v1, T3);
    goto L21;
L22:;
    T1 = cl_list(2, ECL_SYM("QUOTE",681), v4name);
    T0 = cl_list(5, ECL_SYM("FSET",1084), T1, v7, ECL_T, v8);
L21:;
    T1 = ecl_function_dispatch(cl_env_copy,VV[52])(3, v4name, ECL_SYM("FUNCTION",398), v9) /*  EXPAND-SET-DOCUMENTATION */;
    T2 = cl_list(2, ECL_SYM("QUOTE",681), v4name);
    T3 = ecl_list1(T2);
    T4 = ecl_append(T1,T3);
    value0 = cl_listX(4, ECL_SYM("EVAL-WHEN",342), VV[2], T0, T4);
    return value0;
   }
  }
 }
}
/*      local function DEFVAR                                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC3defvar(cl_object v1, cl_object v2)
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
   cl_object v4var;
   cl_object v5form;
   cl_object v6form_sp;
   cl_object v7doc_string;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[50])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v8;
    v8 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4var = v8;
   }
   if (Null(v3)) { goto L9; }
   v5form = ecl_car(v3);
   goto L8;
L9:;
   v5form = ECL_NIL;
L8:;
   if (Null(v3)) { goto L13; }
   v3 = ecl_cdr(v3);
   v6form_sp = ECL_T;
   goto L11;
L13:;
   v6form_sp = ECL_NIL;
   goto L11;
L11:;
   if (Null(v3)) { goto L18; }
   {
    cl_object v8;
    v8 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v7doc_string = v8;
    goto L17;
   }
L18:;
   v7doc_string = ECL_NIL;
L17:;
   if (Null(v3)) { goto L23; }
   ecl_function_dispatch(cl_env_copy,VV[54])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L23:;
   T0 = cl_list(2, ECL_SYM("SPECIAL",791), v4var);
   T1 = cl_list(2, ECL_SYM("DECLARE",276), T0);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), v4var);
   T3 = cl_list(2, ECL_SYM("*MAKE-SPECIAL",1029), T2);
   if (Null(v6form_sp)) { goto L26; }
   T5 = cl_list(2, ECL_SYM("QUOTE",681), v4var);
   T6 = cl_list(2, ECL_SYM("BOUNDP",159), T5);
   T7 = cl_list(3, ECL_SYM("SETQ",753), v4var, v5form);
   T8 = cl_list(3, VV[0], T6, T7);
   T4 = ecl_list1(T8);
   goto L25;
L26:;
   T4 = ECL_NIL;
L25:;
   T5 = ecl_function_dispatch(cl_env_copy,VV[52])(3, v4var, ECL_SYM("VARIABLE",899), v7doc_string) /*  EXPAND-SET-DOCUMENTATION */;
   if (Null(ecl_symbol_value(ECL_SYM("*REGISTER-WITH-PDE-HOOK*",1203)))) { goto L29; }
   T7 = cl_copy_tree(ecl_symbol_value(ECL_SYM("*SOURCE-LOCATION*",1202)));
   T6 = ecl_function_dispatch(cl_env_copy,ecl_symbol_value(ECL_SYM("*REGISTER-WITH-PDE-HOOK*",1203)))(3, T7, v1, ECL_NIL);
   goto L28;
L29:;
   T6 = ECL_NIL;
L28:;
   if (Null(ecl_symbol_value(ECL_SYM("*BYTECODES-COMPILER*",1761)))) { goto L32; }
   T8 = cl_list(2, ECL_SYM("QUOTE",681), v4var);
   T9 = cl_list(2, ECL_SYM("*MAKE-SPECIAL",1029), T8);
   T7 = cl_list(3, ECL_SYM("EVAL-WHEN",342), VV[4], T9);
   goto L31;
L32:;
   T8 = cl_list(2, ECL_SYM("QUOTE",681), v4var);
   T9 = cl_list(2, VV[5], T8);
   T7 = cl_list(3, ECL_SYM("EVAL-WHEN",342), VV[4], T9);
L31:;
   T8 = cl_list(2, ECL_SYM("QUOTE",681), v4var);
   T9 = cl_list(3, T6, T7, T8);
   T10 = cl_append(3, T4, T5, T9);
   value0 = cl_listX(4, ECL_SYM("LOCALLY",492), T1, T3, T10);
   return value0;
  }
 }
}
/*      local function DEFPARAMETER                                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC4defparameter(cl_object v1, cl_object v2)
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
   cl_object v4var;
   cl_object v5form;
   cl_object v6doc_string;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[50])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v7;
    v7 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4var = v7;
   }
   if (!(v3==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[50])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v7;
    v7 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5form = v7;
   }
   if (Null(v3)) { goto L15; }
   {
    cl_object v7;
    v7 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v6doc_string = v7;
    goto L14;
   }
L15:;
   v6doc_string = ECL_NIL;
L14:;
   if (Null(v3)) { goto L20; }
   ecl_function_dispatch(cl_env_copy,VV[54])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L20:;
   T0 = cl_list(2, ECL_SYM("SPECIAL",791), v4var);
   T1 = cl_list(2, ECL_SYM("DECLARE",276), T0);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), v4var);
   T3 = cl_list(2, ECL_SYM("*MAKE-SPECIAL",1029), T2);
   T4 = cl_list(3, ECL_SYM("SETQ",753), v4var, v5form);
   T5 = ecl_function_dispatch(cl_env_copy,VV[52])(3, v4var, ECL_SYM("VARIABLE",899), v6doc_string) /*  EXPAND-SET-DOCUMENTATION */;
   if (Null(ecl_symbol_value(ECL_SYM("*REGISTER-WITH-PDE-HOOK*",1203)))) { goto L23; }
   T7 = cl_copy_tree(ecl_symbol_value(ECL_SYM("*SOURCE-LOCATION*",1202)));
   T6 = ecl_function_dispatch(cl_env_copy,ecl_symbol_value(ECL_SYM("*REGISTER-WITH-PDE-HOOK*",1203)))(3, T7, v1, ECL_NIL);
   goto L22;
L23:;
   T6 = ECL_NIL;
L22:;
   if (Null(ecl_symbol_value(ECL_SYM("*BYTECODES-COMPILER*",1761)))) { goto L26; }
   T8 = cl_list(2, ECL_SYM("QUOTE",681), v4var);
   T9 = cl_list(2, ECL_SYM("*MAKE-SPECIAL",1029), T8);
   T7 = cl_list(3, ECL_SYM("EVAL-WHEN",342), VV[4], T9);
   goto L25;
L26:;
   T8 = cl_list(2, ECL_SYM("QUOTE",681), v4var);
   T9 = cl_list(2, VV[5], T8);
   T7 = cl_list(3, ECL_SYM("EVAL-WHEN",342), VV[4], T9);
L25:;
   T8 = cl_list(2, ECL_SYM("QUOTE",681), v4var);
   T9 = cl_list(3, T6, T7, T8);
   T10 = ecl_append(T5,T9);
   value0 = cl_listX(5, ECL_SYM("LOCALLY",492), T1, T3, T4, T10);
   return value0;
  }
 }
}
/*      local function DEFCONSTANT                                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC5defconstant(cl_object v1, cl_object v2)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4var;
   cl_object v5form;
   cl_object v6doc_string;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[50])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v7;
    v7 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4var = v7;
   }
   if (!(v3==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[50])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v7;
    v7 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5form = v7;
   }
   if (Null(v3)) { goto L15; }
   {
    cl_object v7;
    v7 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v6doc_string = v7;
    goto L14;
   }
L15:;
   v6doc_string = ECL_NIL;
L14:;
   if (Null(v3)) { goto L20; }
   ecl_function_dispatch(cl_env_copy,VV[54])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L20:;
   T0 = cl_list(2, ECL_SYM("QUOTE",681), v4var);
   T1 = cl_list(3, ECL_SYM("*MAKE-CONSTANT",1028), T0, v5form);
   T2 = ecl_function_dispatch(cl_env_copy,VV[52])(3, v4var, ECL_SYM("VARIABLE",899), v6doc_string) /*  EXPAND-SET-DOCUMENTATION */;
   if (Null(ecl_symbol_value(ECL_SYM("*REGISTER-WITH-PDE-HOOK*",1203)))) { goto L23; }
   T4 = cl_copy_tree(ecl_symbol_value(ECL_SYM("*SOURCE-LOCATION*",1202)));
   T3 = ecl_function_dispatch(cl_env_copy,ecl_symbol_value(ECL_SYM("*REGISTER-WITH-PDE-HOOK*",1203)))(3, T4, v1, ECL_NIL);
   goto L22;
L23:;
   T3 = ECL_NIL;
L22:;
   if (Null(ecl_symbol_value(ECL_SYM("*BYTECODES-COMPILER*",1761)))) { goto L26; }
   T5 = cl_list(2, ECL_SYM("QUOTE",681), v4var);
   T6 = cl_list(3, ECL_SYM("*MAKE-CONSTANT",1028), T5, v5form);
   T4 = cl_list(3, ECL_SYM("EVAL-WHEN",342), VV[4], T6);
   goto L25;
L26:;
   T5 = cl_list(2, ECL_SYM("QUOTE",681), v4var);
   T6 = cl_list(3, ECL_SYM("*MAKE-CONSTANT",1028), T5, v5form);
   T7 = cl_list(2, ECL_SYM("QUOTE",681), v4var);
   T8 = cl_list(2, VV[5], T7);
   T4 = cl_list(4, ECL_SYM("EVAL-WHEN",342), VV[4], T6, T8);
L25:;
   T5 = cl_list(2, ECL_SYM("QUOTE",681), v4var);
   T6 = cl_list(3, T3, T4, T5);
   T7 = ecl_append(T2,T6);
   value0 = cl_listX(3, ECL_SYM("PROGN",673), T1, T7);
   return value0;
  }
 }
}
/*      local function LAMBDA41                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC6__lambda41(cl_object v1fname, cl_object v2form, cl_object v3env)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v4proclaimed;
   v4proclaimed = si_get_sysprop(v1fname, ECL_SYM("INLINE",436));
   if (Null(v4proclaimed)) { goto L2; }
   T0 = cl_list(2, ECL_SYM("QUOTE",681), v1fname);
   T1 = cl_list(2, ECL_SYM("QUOTE",681), v2form);
   T2 = cl_list(4, ECL_SYM("PUT-SYSPROP",1141), T0, VV[10], T1);
   value0 = cl_list(3, ECL_SYM("EVAL-WHEN",342), VV[2], T2);
   return value0;
L2:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function DEFUN                                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC7defun(cl_object v1, cl_object v2env)
{
 cl_object T0, T1, T2, T3, T4, T5;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4name;
   cl_object v5vl;
   cl_object v6body;
   cl_object v7doc_string;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[50])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v8;
    v8 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4name = v8;
   }
   if (!(v3==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[50])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v8;
    v8 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5vl = v8;
   }
   v6body = v3;
   v7doc_string = ECL_NIL;
   value0 = ecl_function_dispatch(cl_env_copy,VV[58])(1, v6body) /*  REMOVE-DOCUMENTATION */;
   {
    const int v8 = cl_env_copy->nvalues;
    v6body = value0;
    cl_object v9;
    v9 = (v8<=1)? ECL_NIL : cl_env_copy->values[1];
    v7doc_string = v9;
   }
   {
    cl_object v8function;
    cl_object v9global_function;
    T0 = cl_listX(4, ECL_SYM("LAMBDA-BLOCK",1367), v4name, v5vl, v6body);
    v8function = cl_list(2, ECL_SYM("FUNCTION",398), T0);
    T0 = cl_listX(5, ECL_SYM("LAMBDA-BLOCK",1367), v4name, v5vl, VV[11], v6body);
    v9global_function = cl_list(2, ECL_SYM("FUNCTION",398), T0);
    if (Null(ecl_symbol_value(VV[1]))) { goto L20; }
    ecl_print(v8function,ECL_NIL);
    v8function = cl_list(2, ECL_SYM("BC-DISASSEMBLE",1046), v8function);
L20:;
    if (Null(ecl_symbol_value(ECL_SYM("*REGISTER-WITH-PDE-HOOK*",1203)))) { goto L25; }
    T1 = cl_copy_tree(ecl_symbol_value(ECL_SYM("*SOURCE-LOCATION*",1202)));
    T2 = cl_list(2, ECL_SYM("QUOTE",681), v4name);
    T3 = cl_list(3, ECL_SYM("FSET",1084), T2, v9global_function);
    T0 = ecl_function_dispatch(cl_env_copy,ecl_symbol_value(ECL_SYM("*REGISTER-WITH-PDE-HOOK*",1203)))(3, T1, v1, T3);
    goto L24;
L25:;
    T1 = cl_list(2, ECL_SYM("QUOTE",681), v4name);
    T0 = cl_list(3, ECL_SYM("FSET",1084), T1, v9global_function);
L24:;
    T1 = ecl_function_dispatch(cl_env_copy,VV[52])(3, v4name, ECL_SYM("FUNCTION",398), v7doc_string) /*  EXPAND-SET-DOCUMENTATION */;
    {
     cl_object v10hook;
     v10hook = ecl_symbol_value(VV[9]);
     if (Null(v10hook)) { goto L30; }
     T2 = ecl_function_dispatch(cl_env_copy,v10hook)(3, v4name, v9global_function, v2env);
     goto L27;
L30:;
     T2 = ECL_NIL;
     goto L27;
    }
L27:;
    T3 = cl_list(2, ECL_SYM("QUOTE",681), v4name);
    T4 = cl_list(2, T2, T3);
    T5 = ecl_append(T1,T4);
    value0 = cl_listX(3, ECL_SYM("PROGN",673), T0, T5);
    return value0;
   }
  }
 }
}
/*      local function DEFINE-COMPILER-MACRO                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC8define_compiler_macro(cl_object v1, cl_object v2)
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
   cl_object v4name;
   cl_object v5vl;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[50])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4name = v6;
   }
   if (!(v3==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[50])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5vl = v6;
   }
   {
    cl_object v7;                                 /*  FUNCTION        */
    cl_object v8;                                 /*  DOC-STRING      */
    value0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("EXPAND-DEFMACRO",1071))(4, v4name, v5vl, v3, ECL_SYM("DEFINE-COMPILER-MACRO",281)) /*  EXPAND-DEFMACRO */;
    {
     const int v9 = cl_env_copy->nvalues;
     v7 = value0;
     cl_object v10;
     v10 = (v9<=2)? ECL_NIL : cl_env_copy->values[2];
     v8 = v10;
    }
    v7 = cl_list(2, ECL_SYM("FUNCTION",398), v7);
    if (Null(ecl_symbol_value(VV[1]))) { goto L17; }
    ecl_print(v7,ECL_NIL);
    v7 = cl_list(2, ECL_SYM("BC-DISASSEMBLE",1046), v7);
L17:;
    T0 = cl_list(2, ECL_SYM("QUOTE",681), v4name);
    T1 = cl_list(4, ECL_SYM("PUT-SYSPROP",1141), T0, VV[13], v7);
    T2 = ecl_function_dispatch(cl_env_copy,VV[52])(3, v4name, ECL_SYM("FUNCTION",398), v8) /*  EXPAND-SET-DOCUMENTATION */;
    if (Null(ecl_symbol_value(ECL_SYM("*REGISTER-WITH-PDE-HOOK*",1203)))) { goto L22; }
    T4 = cl_copy_tree(ecl_symbol_value(ECL_SYM("*SOURCE-LOCATION*",1202)));
    T3 = ecl_function_dispatch(cl_env_copy,ecl_symbol_value(ECL_SYM("*REGISTER-WITH-PDE-HOOK*",1203)))(3, T4, v1, ECL_NIL);
    goto L21;
L22:;
    T3 = ECL_NIL;
L21:;
    T4 = cl_list(2, ECL_SYM("QUOTE",681), v4name);
    T5 = cl_list(2, T3, T4);
    T6 = ecl_append(T2,T5);
    value0 = cl_listX(3, ECL_SYM("PROGN",673), T1, T6);
    return value0;
   }
  }
 }
}
/*      function definition for COMPILER-MACRO-FUNCTION               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L9compiler_macro_function(cl_narg narg, cl_object v1name, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2env;
  va_list args; va_start(args,v1name);
  {
   int i = 1;
   if (i >= narg) {
    v2env = ECL_NIL;
   } else {
    i++;
    v2env = va_arg(args,cl_object);
   }
  }
  va_end(args);
  value0 = si_get_sysprop(v1name, ECL_SYM("COMPILER-MACRO",240));
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function LOOP                                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC10loop(cl_object v1, cl_object v2)
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
   cl_object v4tag;
   v3 = ecl_cdr(v1);
   v4tag = cl_gensym(0);
   T0 = CONS(ECL_SYM("PROGN",673),v3);
   T1 = cl_list(2, ECL_SYM("GO",416), v4tag);
   T2 = cl_list(4, ECL_SYM("TAGBODY",852), v4tag, T0, T1);
   value0 = cl_list(3, ECL_SYM("BLOCK",139), ECL_NIL, T2);
   return value0;
  }
 }
}
/*      local function LAMBDA                                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC11lambda(cl_object v1, cl_object v2)
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
   v3 = ecl_cdr(v1);
   T0 = CONS(ECL_SYM("LAMBDA",454),v3);
   value0 = cl_list(2, ECL_SYM("FUNCTION",398), T0);
   return value0;
  }
 }
}
/*      local function LAMBDA-BLOCK                                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC12lambda_block(cl_object v1, cl_object v2)
{
 cl_object T0, T1, T2, T3, T4;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4name;
   cl_object v5lambda_list;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[50])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4name = v6;
   }
   if (!(v3==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[50])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5lambda_list = v6;
   }
   {
    cl_object v7;                                 /*  DECL            */
    cl_object v8;                                 /*  BODY            */
    cl_object v9;                                 /*  DOC             */
    value0 = si_process_declarations(1, v3);
    {
     const int v10 = cl_env_copy->nvalues;
     v7 = value0;
     cl_object v11;
     v11 = (v10<=1)? ECL_NIL : cl_env_copy->values[1];
     v8 = v11;
     v11 = (v10<=2)? ECL_NIL : cl_env_copy->values[2];
     v9 = v11;
    }
    {
     cl_object v10;
     cl_object v11;
     if (Null(v7)) { goto L17; }
     T0 = CONS(ECL_SYM("DECLARE",276),v7);
     v10 = ecl_list1(T0);
     goto L15;
L17:;
     v10 = ECL_NIL;
     goto L15;
L15:;
     v11 = si_function_block_name(v4name);
     T0 = cl_list(2, ECL_SYM("FUNCTION-BLOCK-NAME",1085), v11);
     T1 = cl_list(2, ECL_SYM("DECLARE",276), T0);
     T2 = cl_listX(3, ECL_SYM("BLOCK",139), v11, v8);
     T3 = cl_list(2, T1, T2);
     T4 = cl_append(3, v9, v10, T3);
     value0 = cl_listX(3, VV[16], v5lambda_list, T4);
     return value0;
    }
   }
  }
 }
}
/*      local function PSETQ                                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC13psetq(cl_object v1, cl_object v2)
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
   v3 = ecl_cdr(v1);
   {
    cl_object v4l;
    cl_object v5forms;
    cl_object v6bindings;
    v4l = v3;
    v5forms = ECL_NIL;
    v6bindings = ECL_NIL;
    goto L7;
L6:;
    {
     cl_object v7sym;
     v7sym = cl_gensym(0);
     T0 = ecl_cadr(v4l);
     T1 = cl_list(2, v7sym, T0);
     v6bindings = CONS(T1,v6bindings);
     T0 = ecl_car(v4l);
     T1 = cl_list(3, ECL_SYM("SETQ",753), T0, v7sym);
     v5forms = CONS(T1,v5forms);
    }
    v4l = ecl_cddr(v4l);
L7:;
    if (ecl_endp(v4l)) { goto L16; }
    goto L6;
L16:;
    T0 = cl_nreverse(v6bindings);
    T1 = CONS(ECL_NIL,v5forms);
    T2 = cl_nreverse(T1);
    value0 = cl_listX(3, ECL_SYM("LET*",480), T0, T2);
    return value0;
   }
  }
 }
}
/*      local function COND                                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC14cond(cl_object v1, cl_object v2)
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
   cl_object v4form;
   v3 = ecl_cdr(v1);
   v4form = ECL_NIL;
   {
    cl_object v5;
    v5 = cl_reverse(v3);
    goto L6;
L5:;
    {
     cl_object v6l;
     v6l = ecl_car(v5);
     T0 = ecl_cdr(v6l);
     if (!(ecl_endp(T0))) { goto L11; }
     T0 = ecl_car(v6l);
     if (!((T0)==(ECL_T))) { goto L13; }
     v4form = ECL_T;
     goto L10;
L13:;
     {
      cl_object v7sym;
      v7sym = cl_gensym(0);
      T0 = ecl_car(v6l);
      T1 = cl_list(2, v7sym, T0);
      T2 = ecl_list1(T1);
      T3 = cl_list(4, ECL_SYM("IF",948), v7sym, v7sym, v4form);
      v4form = cl_list(3, ECL_SYM("LET",479), T2, T3);
      goto L10;
     }
L11:;
     T0 = ecl_car(v6l);
     if (!((T0)==(ECL_T))) { goto L18; }
     T0 = ecl_cddr(v6l);
     if (!(ecl_endp(T0))) { goto L21; }
     v4form = ecl_cadr(v6l);
     goto L20;
L21:;
     T0 = ecl_cdr(v6l);
     v4form = CONS(ECL_SYM("PROGN",673),T0);
L20:;
     goto L10;
L18:;
     T0 = ecl_cddr(v6l);
     if (!(ecl_endp(T0))) { goto L24; }
     T0 = ecl_car(v6l);
     T1 = ecl_cadr(v6l);
     v4form = cl_list(4, ECL_SYM("IF",948), T0, T1, v4form);
     goto L23;
L24:;
     T0 = ecl_car(v6l);
     T1 = ecl_cdr(v6l);
     T2 = CONS(ECL_SYM("PROGN",673),T1);
     v4form = cl_list(4, ECL_SYM("IF",948), T0, T2, v4form);
L23:;
L10:;
    }
    v5 = ecl_cdr(v5);
L6:;
    if (Null(v5)) { goto L28; }
    goto L5;
L28:;
    value0 = v4form;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      local function PROG                                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC15prog(cl_object v1, cl_object v2)
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
   cl_object v4vl;
   cl_object v5body;
   cl_object v6decl;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[50])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v7;
    v7 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4vl = v7;
   }
   v5body = v3;
   v6decl = ECL_NIL;
   value0 = ecl_function_dispatch(cl_env_copy,VV[66])(1, v5body) /*  FIND-DECLARATIONS */;
   {
    const int v7 = cl_env_copy->nvalues;
    v6decl = value0;
    cl_object v8;
    v8 = (v7<=1)? ECL_NIL : cl_env_copy->values[1];
    v5body = v8;
   }
   T0 = CONS(ECL_SYM("TAGBODY",852),v5body);
   T1 = ecl_list1(T0);
   T2 = ecl_append(v6decl,T1);
   T3 = cl_listX(3, ECL_SYM("LET",479), v4vl, T2);
   value0 = cl_list(3, ECL_SYM("BLOCK",139), ECL_NIL, T3);
   return value0;
  }
 }
}
/*      local function PROG*                                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC16prog_(cl_object v1, cl_object v2)
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
   cl_object v4vl;
   cl_object v5body;
   cl_object v6decl;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[50])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v7;
    v7 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4vl = v7;
   }
   v5body = v3;
   v6decl = ECL_NIL;
   value0 = ecl_function_dispatch(cl_env_copy,VV[66])(1, v5body) /*  FIND-DECLARATIONS */;
   {
    const int v7 = cl_env_copy->nvalues;
    v6decl = value0;
    cl_object v8;
    v8 = (v7<=1)? ECL_NIL : cl_env_copy->values[1];
    v5body = v8;
   }
   T0 = CONS(ECL_SYM("TAGBODY",852),v5body);
   T1 = ecl_list1(T0);
   T2 = ecl_append(v6decl,T1);
   T3 = cl_listX(3, ECL_SYM("LET*",480), v4vl, T2);
   value0 = cl_list(3, ECL_SYM("BLOCK",139), ECL_NIL, T3);
   return value0;
  }
 }
}
/*      local function PROG1                                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC17prog1(cl_object v1, cl_object v2)
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
   cl_object v4first;
   cl_object v5sym;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[50])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4first = v6;
   }
   v5sym = cl_gensym(0);
   if (!(v3==ECL_NIL)) { goto L9; }
   value0 = v4first;
   cl_env_copy->nvalues = 1;
   return value0;
L9:;
   T0 = cl_list(2, v5sym, v4first);
   T1 = ecl_list1(T0);
   T2 = ecl_list1(v5sym);
   T3 = ecl_append(v3,T2);
   value0 = cl_listX(3, ECL_SYM("LET",479), T1, T3);
   return value0;
  }
 }
}
/*      local function PROG2                                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC18prog2(cl_object v1, cl_object v2)
{
 cl_object T0, T1, T2, T3, T4;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4first;
   cl_object v5second;
   cl_object v6sym;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[50])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v7;
    v7 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4first = v7;
   }
   if (!(v3==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[50])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v7;
    v7 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5second = v7;
   }
   v6sym = cl_gensym(0);
   T0 = cl_list(2, v6sym, v5second);
   T1 = ecl_list1(T0);
   T2 = ecl_list1(v6sym);
   T3 = ecl_append(v3,T2);
   T4 = cl_listX(3, ECL_SYM("LET",479), T1, T3);
   value0 = cl_list(3, ECL_SYM("PROGN",673), v4first, T4);
   return value0;
  }
 }
}
/*      local function MULTIPLE-VALUE-LIST                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC19multiple_value_list(cl_object v1, cl_object v2)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4form;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[50])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v5;
    v5 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4form = v5;
   }
   if (Null(v3)) { goto L8; }
   ecl_function_dispatch(cl_env_copy,VV[54])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L8:;
   value0 = cl_list(3, ECL_SYM("MULTIPLE-VALUE-CALL",575), VV[24], v4form);
   return value0;
  }
 }
}
/*      local function MULTIPLE-VALUE-SETQ                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC20multiple_value_setq(cl_object v1, cl_object v2)
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
   cl_object v4vars;
   cl_object v5form;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[50])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4vars = v6;
   }
   if (!(v3==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[50])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5form = v6;
   }
   if (Null(v3)) { goto L14; }
   ecl_function_dispatch(cl_env_copy,VV[54])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L14:;
   {
    cl_object v6;
    cl_object v7vl;
    cl_object v8forms;
    cl_fixnum v9n;
    v6 = cl_gensym(0);
    v7vl = v4vars;
    v8forms = ECL_NIL;
    v9n = 0;
    goto L22;
L21:;
    T0 = ecl_car(v7vl);
    T1 = cl_list(3, ECL_SYM("NTH",604), ecl_make_fixnum(v9n), v6);
    T2 = cl_list(3, ECL_SYM("SETQ",753), T0, T1);
    v8forms = CONS(T2,v8forms);
    v7vl = ecl_cdr(v7vl);
    v9n = ecl_to_fixnum(ecl_make_integer((v9n)+1));
L22:;
    if (ecl_endp(v7vl)) { goto L29; }
    goto L21;
L29:;
    T0 = cl_list(2, VV[25], v5form);
    T1 = cl_list(2, v6, T0);
    T2 = ecl_list1(T1);
    value0 = cl_listX(3, ECL_SYM("LET",479), T2, v8forms);
    return value0;
   }
  }
 }
}
/*      local function MULTIPLE-VALUE-BIND                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC21multiple_value_bind(cl_object v1, cl_object v2)
{
 cl_object T0, T1, T2, T3, T4;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4vars;
   cl_object v5form;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[50])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4vars = v6;
   }
   if (!(v3==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[50])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5form = v6;
   }
   T0 = (ECL_SYM("LIST",483)->symbol.gfdef);
   T1 = (cl_env_copy->function=(ECL_SYM("MAPCAR",547)->symbol.gfdef))->cfun.entry(2, T0, v4vars) /*  MAPCAR */;
   T2 = CONS(ECL_SYM("&OPTIONAL",13),T1);
   T3 = cl_listX(3, VV[16], T2, v3);
   T4 = cl_list(2, ECL_SYM("FUNCTION",398), T3);
   value0 = cl_list(3, ECL_SYM("MULTIPLE-VALUE-CALL",575), T4, v5form);
   return value0;
  }
 }
}
/*      function definition for WHILE-UNTIL                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L22while_until(cl_object v1test, cl_object v2body, cl_object v3jmp_op)
{
 cl_object T0, T1, T2, T3, T4;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v4;
   cl_object v5;
   v4 = cl_gensym(0);
   v5 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("GO",416), v5);
   T1 = cl_list(2, ECL_SYM("GO",416), v4);
   T2 = cl_list(3, v3jmp_op, v1test, T1);
   T3 = cl_list(2, v5, T2);
   T4 = ecl_append(v2body,T3);
   value0 = cl_listX(4, ECL_SYM("TAGBODY",852), T0, v4, T4);
   return value0;
  }
 }
}
/*      local function WHILE                                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC23while(cl_object v1, cl_object v2)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4test;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[50])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v5;
    v5 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4test = v5;
   }
   value0 = L22while_until(v4test, v3, ECL_SYM("WHEN",907));
   return value0;
  }
 }
}
/*      local function UNTIL                                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC24until(cl_object v1, cl_object v2)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4test;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[50])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v5;
    v5 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4test = v5;
   }
   value0 = L22while_until(v4test, v3, VV[0]);
   return value0;
  }
 }
}
/*      local function CASE                                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC25case(cl_object v1, cl_object v2)
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
   cl_object v4keyform;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[50])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v5;
    v5 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4keyform = v5;
   }
   {
    cl_object v5last;
    cl_object v6form;
    cl_object v7key;
    v5last = ECL_T;
    v6form = ECL_NIL;
    v7key = cl_gensym(0);
    {
     cl_object v8;
     v8 = cl_reverse(v3);
     goto L14;
L13:;
     {
      cl_object v9clause;
      v9clause = ecl_car(v8);
      {
       cl_object v10selector;
       v10selector = ecl_car(v9clause);
       if ((v10selector)==(ECL_T)) { goto L23; }
       if (!((v10selector)==(ECL_SYM("OTHERWISE",617)))) { goto L21; }
       goto L22;
L23:;
L22:;
       if ((v5last)!=ECL_NIL) { goto L25; }
       T0 = ecl_list1(v10selector);
       si_signal_simple_error(4, ECL_SYM("PROGRAM-ERROR",674), ECL_NIL, VV[30], T0);
L25:;
       T0 = ecl_cdr(v9clause);
       v6form = CONS(ECL_SYM("PROGN",673),T0);
       goto L20;
L21:;
       if (!(ECL_CONSP(v10selector))) { goto L28; }
       T0 = cl_list(2, ECL_SYM("QUOTE",681), v10selector);
       T1 = cl_list(3, ECL_SYM("MEMBER",554), v7key, T0);
       T2 = ecl_cdr(v9clause);
       T3 = CONS(ECL_SYM("PROGN",673),T2);
       v6form = cl_list(4, ECL_SYM("IF",948), T1, T3, v6form);
       goto L20;
L28:;
       if (Null(v10selector)) { goto L20; }
       T0 = cl_list(2, ECL_SYM("QUOTE",681), v10selector);
       T1 = cl_list(3, ECL_SYM("EQL",336), v7key, T0);
       T2 = ecl_cdr(v9clause);
       T3 = CONS(ECL_SYM("PROGN",673),T2);
       v6form = cl_list(4, ECL_SYM("IF",948), T1, T3, v6form);
L20:;
       v5last = ECL_NIL;
      }
     }
     v8 = ecl_cdr(v8);
L14:;
     if (Null(v8)) { goto L36; }
     goto L13;
L36:;
     T0 = cl_list(2, v7key, v4keyform);
     T1 = ecl_list1(T0);
     value0 = cl_list(3, ECL_SYM("LET",479), T1, v6form);
     return value0;
    }
   }
  }
 }
}
/*      local function RETURN                                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC26return(cl_object v1, cl_object v2)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4val;
   v3 = ecl_cdr(v1);
   if (Null(v3)) { goto L3; }
   {
    cl_object v5;
    v5 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4val = v5;
    goto L2;
   }
L3:;
   v4val = ECL_NIL;
L2:;
   if (Null(v3)) { goto L8; }
   ecl_function_dispatch(cl_env_copy,VV[54])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L8:;
   value0 = cl_list(3, ECL_SYM("RETURN-FROM",727), ECL_NIL, v4val);
   return value0;
  }
 }
}
/*      local function DECLAIM                                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC27declaim(cl_object v1, cl_object v2)
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
   v3 = ecl_cdr(v1);
   if (Null(ecl_cdr(v3))) { goto L2; }
   T0 = cl_list(2, ECL_SYM("QUOTE",681), v3);
   T1 = cl_list(3, ECL_SYM("MAPCAR",547), VV[33], T0);
   value0 = cl_list(3, ECL_SYM("EVAL-WHEN",342), VV[2], T1);
   return value0;
L2:;
   T0 = ecl_car(v3);
   T1 = cl_list(2, ECL_SYM("QUOTE",681), T0);
   T2 = cl_list(2, ECL_SYM("PROCLAIM",668), T1);
   value0 = cl_list(3, ECL_SYM("EVAL-WHEN",342), VV[2], T2);
   return value0;
  }
 }
}
/*      local function C-DECLAIM                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC28c_declaim(cl_object v1, cl_object v2)
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
   v3 = ecl_cdr(v1);
   if (Null(ecl_cdr(v3))) { goto L2; }
   T0 = cl_list(2, ECL_SYM("QUOTE",681), v3);
   T1 = cl_list(3, ECL_SYM("MAPCAR",547), VV[33], T0);
   value0 = cl_list(3, ECL_SYM("EVAL-WHEN",342), VV[4], T1);
   return value0;
L2:;
   T0 = ecl_car(v3);
   T1 = cl_list(2, ECL_SYM("QUOTE",681), T0);
   T2 = cl_list(2, ECL_SYM("PROCLAIM",668), T1);
   value0 = cl_list(3, ECL_SYM("EVAL-WHEN",342), VV[4], T2);
   return value0;
  }
 }
}
/*      local function IN-PACKAGE                                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC29in_package(cl_object v1, cl_object v2)
{
 cl_object T0, T1;
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
   ecl_function_dispatch(cl_env_copy,VV[50])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v5;
    v5 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4name = v5;
   }
   if (Null(v3)) { goto L8; }
   ecl_function_dispatch(cl_env_copy,VV[54])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L8:;
   T0 = cl_string(v4name);
   T1 = cl_list(2, ECL_SYM("SELECT-PACKAGE",1154), T0);
   value0 = cl_list(3, ECL_SYM("EVAL-WHEN",342), VV[2], T1);
   return value0;
  }
 }
}
/*      local function DEFINE-SYMBOL-MACRO                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC30define_symbol_macro(cl_object v1, cl_object v2)
{
 cl_object T0, T1, T2, T3, T4, T5;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4symbol;
   cl_object v5expansion;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[50])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4symbol = v6;
   }
   if (!(v3==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[50])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5expansion = v6;
   }
   if (Null(v3)) { goto L14; }
   ecl_function_dispatch(cl_env_copy,VV[54])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L14:;
   if (ECL_SYMBOLP(v4symbol)) { goto L16; }
   value0 = cl_error(2, VV[36], v4symbol);
   return value0;
L16:;
   if (Null(si_specialp(v4symbol))) { goto L18; }
   value0 = cl_error(2, VV[37], v4symbol);
   return value0;
L18:;
   T0 = cl_list(2, ECL_SYM("QUOTE",681), v4symbol);
   T1 = cl_list(2, ECL_SYM("QUOTE",681), v5expansion);
   T2 = cl_list(4, VV[16], VV[39], VV[40], T1);
   T3 = cl_list(4, ECL_SYM("PUT-SYSPROP",1141), T0, VV[38], T2);
   if (Null(ecl_symbol_value(ECL_SYM("*REGISTER-WITH-PDE-HOOK*",1203)))) { goto L21; }
   T5 = cl_copy_tree(ecl_symbol_value(ECL_SYM("*SOURCE-LOCATION*",1202)));
   T4 = ecl_function_dispatch(cl_env_copy,ecl_symbol_value(ECL_SYM("*REGISTER-WITH-PDE-HOOK*",1203)))(3, T5, v1, ECL_NIL);
   goto L20;
L21:;
   T4 = ECL_NIL;
L20:;
   T5 = cl_list(2, ECL_SYM("QUOTE",681), v4symbol);
   value0 = cl_list(5, ECL_SYM("EVAL-WHEN",342), VV[2], T3, T4, T5);
   return value0;
  }
 }
}
/*      local function NTH-VALUE                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC31nth_value(cl_object v1, cl_object v2)
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
   cl_object v4n;
   cl_object v5expr;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[50])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4n = v6;
   }
   if (!(v3==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[50])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5expr = v6;
   }
   if (Null(v3)) { goto L14; }
   ecl_function_dispatch(cl_env_copy,VV[54])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L14:;
   T0 = cl_list(2, VV[25], v5expr);
   value0 = cl_list(3, ECL_SYM("NTH",604), v4n, T0);
   return value0;
  }
 }
}
/*      function definition for MAYBE-UNQUOTE                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L32maybe_unquote(cl_object v1form)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ECL_CONSP(v1form))) { goto L1; }
  T0 = ecl_car(v1form);
  if (!((T0)==(ECL_SYM("QUOTE",681)))) { goto L1; }
  value0 = ecl_cadr(v1form);
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  value0 = v1form;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for MAYBE-QUOTE                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L33maybe_quote(cl_object v1form)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ECL_ATOM(v1form))) { goto L3; }
  if (!(ECL_SYMBOLP(v1form))) { goto L1; }
  if ((cl_keywordp(v1form))!=ECL_NIL) { goto L1; }
  if (!((v1form)==(ECL_NIL))) { goto L9; }
  goto L1;
  goto L7;
L9:;
  goto L7;
L7:;
  if (!(ecl_eql(v1form,ECL_T))) { goto L12; }
  goto L1;
  goto L2;
L12:;
  goto L2;
L3:;
  T0 = ecl_car(v1form);
  if ((T0)==(ECL_SYM("QUOTE",681))) { goto L1; }
L2:;
  value0 = cl_list(2, ECL_SYM("QUOTE",681), v1form);
  return value0;
L1:;
  value0 = v1form;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function TRULY-THE                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC34truly_the(cl_object v1, cl_object v2)
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
   value0 = CONS(ECL_SYM("THE",858),v3);
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function CHECKED-VALUE                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC35checked_value(cl_object v1, cl_object v2)
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
   value0 = CONS(ECL_SYM("THE",858),v3);
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}

#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/lsp/evalmacros.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclop1cghZ7_Dz66lq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:LSP;EVALMACROS.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclop1cghZ7_Dz66lq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  ecl_cmp_defmacro(VV[49]);                       /*  UNLESS          */
  ecl_cmp_defmacro(VV[51]);                       /*  DEFMACRO        */
  ecl_cmp_defmacro(VV[53]);                       /*  DEFVAR          */
  ecl_cmp_defmacro(VV[55]);                       /*  DEFPARAMETER    */
  ecl_cmp_defmacro(VV[56]);                       /*  DEFCONSTANT     */
  si_Xmake_special(VV[9]);
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC6__lambda41,ECL_NIL,Cblock,3);
   cl_set(VV[9],v1);
  }
  ecl_cmp_defmacro(VV[57]);                       /*  DEFUN           */
  ecl_cmp_defmacro(VV[59]);                       /*  DEFINE-COMPILER-MACRO */
  ecl_cmp_defun(VV[60]);                          /*  COMPILER-MACRO-FUNCTION */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC10loop,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_fset(4, ECL_SYM("LOOP",514), T0, ECL_T, ecl_make_fixnum(1));
 }
  ecl_cmp_defmacro(VV[61]);                       /*  LAMBDA          */
  ecl_cmp_defmacro(VV[62]);                       /*  LAMBDA-BLOCK    */
  ecl_cmp_defmacro(VV[63]);                       /*  PSETQ           */
  ecl_cmp_defmacro(VV[64]);                       /*  COND            */
  ecl_cmp_defmacro(VV[65]);                       /*  PROG            */
  ecl_cmp_defmacro(VV[67]);                       /*  PROG*           */
  ecl_cmp_defmacro(VV[68]);                       /*  PROG1           */
  ecl_cmp_defmacro(VV[69]);                       /*  PROG2           */
  ecl_cmp_defmacro(VV[70]);                       /*  MULTIPLE-VALUE-LIST */
  ecl_cmp_defmacro(VV[71]);                       /*  MULTIPLE-VALUE-SETQ */
  ecl_cmp_defmacro(VV[72]);                       /*  MULTIPLE-VALUE-BIND */
  (void)0; /* No entry created for WHILE-UNTIL */
  ecl_cmp_defmacro(VV[73]);                       /*  WHILE           */
  ecl_cmp_defmacro(VV[74]);                       /*  UNTIL           */
  ecl_cmp_defmacro(VV[75]);                       /*  CASE            */
  ecl_cmp_defmacro(VV[76]);                       /*  RETURN          */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC27declaim,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_fset(4, ECL_SYM("DECLAIM",274), T0, ECL_T, ecl_make_fixnum(1));
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC28c_declaim,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_fset(4, VV[34], T0, ECL_T, ecl_make_fixnum(1));
 }
  ecl_cmp_defmacro(VV[77]);                       /*  IN-PACKAGE      */
  ecl_cmp_defmacro(VV[78]);                       /*  DEFINE-SYMBOL-MACRO */
  ecl_cmp_defmacro(VV[79]);                       /*  NTH-VALUE       */
  ecl_cmp_defun(VV[80]);                          /*  MAYBE-UNQUOTE   */
  ecl_cmp_defun(VV[81]);                          /*  MAYBE-QUOTE     */
  ecl_cmp_defmacro(VV[82]);                       /*  TRULY-THE       */
  ecl_cmp_defmacro(VV[83]);                       /*  CHECKED-VALUE   */
}
