/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CMP;CMPENV-API.LSP                                */
#include <ecl/ecl-cmp.h>
#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/cmp/cmpenv-api.eclh"
/*      function definition for CMP-ENV-ROOT                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L1cmp_env_root(cl_narg narg, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg>1)) FEwrong_num_arguments_anonym();
 {
  cl_object v1env;
  va_list args; va_start(args,narg);
  {
   int i = 0;
   if (i >= narg) {
    v1env = ecl_symbol_value(VV[0]);
   } else {
    i++;
    v1env = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v2env;
   v2env = L2cmp_env_copy(1, v1env);
   value0 = ecl_function_dispatch(cl_env_copy,VV[42])(1, v2env) /*  ADD-DEFAULT-OPTIMIZATIONS */;
   return value0;
  }
 }
}
/*      function definition for CMP-ENV-COPY                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L2cmp_env_copy(cl_narg narg, ...)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg>1)) FEwrong_num_arguments_anonym();
 {
  cl_object v1env;
  va_list args; va_start(args,narg);
  {
   int i = 0;
   if (i >= narg) {
    v1env = ecl_symbol_value(VV[2]);
   } else {
    i++;
    v1env = va_arg(args,cl_object);
   }
  }
  va_end(args);
  T0 = ecl_car(v1env);
  T1 = ecl_cdr(v1env);
  value0 = CONS(T0,T1);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for SET-CLOSURE-ENV                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L3set_closure_env(cl_narg narg, cl_object v1definition, cl_object v2lexenv, ...)
{
 cl_object T0, T1, T2, T3, T4;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>3)) FEwrong_num_arguments_anonym();
 {
  cl_object v3env;
  va_list args; va_start(args,v2lexenv);
  {
   int i = 2;
   if (i >= narg) {
    v3env = ecl_symbol_value(VV[2]);
   } else {
    i++;
    v3env = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v4record;
   cl_object v5;
   v4record = ECL_NIL;
   {
    cl_object v6;
    v6 = v2lexenv;
    if (ecl_unlikely(!ECL_LISTP(v6))) FEtype_error_list(v6);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v5 = v6;
   }
L6:;
   if (!(ecl_endp(v5))) { goto L8; }
   goto L7;
L8:;
   v4record = _ecl_car(v5);
   {
    cl_object v6;
    v6 = _ecl_cdr(v5);
    if (ecl_unlikely(!ECL_LISTP(v6))) FEtype_error_list(v6);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v5 = v6;
   }
   if (ECL_LISTP(v4record)) { goto L17; }
   {
    cl_object v7;                                 /*  RECORD-DEF      */
    cl_object v8;                                 /*  RECORD-LEXENV   */
    value0 = cl_function_lambda_expression(v4record);
    {
     v7 = value0;
     v8 = cl_env_copy->values[1];
    }
    T0 = ecl_car(v7);
    if (!((T0)==(ECL_SYM("LAMBDA",454)))) { goto L21; }
    v7 = ecl_cdr(v7);
    goto L20;
L21:;
    T0 = ecl_car(v7);
    if (!((T0)==(ECL_SYM("LAMBDA-BLOCK",1367)))) { goto L24; }
    v7 = ecl_cddr(v7);
    goto L20;
L24:;
    cl_error(2, VV[4], v7);
L20:;
    {
     cl_object v9;
     {
      cl_fixnum v10;
      v10 = ecl_length(v7);
      if (!((v10)==(2))) { goto L30; }
     }
     T0 = ecl_cadr(v7);
     goto L29;
L30:;
     T1 = ecl_cdr(v7);
     T0 = CONS(ECL_SYM("PROGN",673),T1);
L29:;
     T1 = L3set_closure_env(3, T0, v8, v3env);
     v9 = ecl_list1(T1);
     {
      cl_object v10;
      v10 = v7;
      if (ecl_unlikely(ECL_ATOM(v10))) FEtype_error_cons(v10);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      T0 = v10;
     }
     (ECL_CONS_CDR(T0)=v9,T0);
    }
    T0 = si_compiled_function_name(v4record);
    T1 = CONS(T0,v7);
    T2 = ecl_list1(T1);
    v1definition = cl_list(3, ECL_SYM("FLET",375), T2, v1definition);
    goto L16;
   }
L17:;
   if (!(ECL_LISTP(v4record))) { goto L16; }
   T0 = ecl_car(v4record);
   if (!(ECL_SYMBOLP(T0))) { goto L16; }
   T0 = ecl_car(v4record);
   if (!((T0)==(ECL_SYM("MACRO",1105)))) { goto L39; }
   T0 = ecl_cddr(v4record);
   T1 = ecl_cadr(v4record);
   L13cmp_env_register_macro(3, T0, T1, v3env);
   goto L16;
L39:;
   T0 = ecl_car(v4record);
   if (!((T0)==(ECL_SYM("SYMBOL-MACRO",1175)))) { goto L41; }
   T0 = ecl_cddr(v4record);
   T1 = ecl_cadr(v4record);
   L17cmp_env_register_symbol_macro_function(3, T0, T1, v3env);
   goto L16;
L41:;
   T0 = ecl_car(v4record);
   T1 = ecl_cdr(v4record);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), T1);
   T3 = cl_list(2, T0, T2);
   T4 = ecl_list1(T3);
   v1definition = cl_list(3, ECL_SYM("LET",479), T4, v1definition);
L16:;
   goto L6;
L7:;
   value0 = v1definition;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function CMP-ENV-VARIABLES                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC4cmp_env_variables(cl_object v1, cl_object v2)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4env;
   v3 = ecl_cdr(v1);
   if (Null(v3)) { goto L3; }
   {
    cl_object v5;
    v5 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4env = v5;
    goto L2;
   }
L3:;
   v4env = VV[2];
L2:;
   if (Null(v3)) { goto L8; }
   ecl_function_dispatch(cl_env_copy,VV[46])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L8:;
   value0 = cl_list(2, ECL_SYM("CAR",182), v4env);
   return value0;
  }
 }
}
/*      local function CMP-ENV-FUNCTIONS                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC5cmp_env_functions(cl_object v1, cl_object v2)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4env;
   v3 = ecl_cdr(v1);
   if (Null(v3)) { goto L3; }
   {
    cl_object v5;
    v5 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4env = v5;
    goto L2;
   }
L3:;
   v4env = VV[2];
L2:;
   if (Null(v3)) { goto L8; }
   ecl_function_dispatch(cl_env_copy,VV[46])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L8:;
   value0 = cl_list(2, ECL_SYM("CDR",200), v4env);
   return value0;
  }
 }
}
/*      function definition for CMP-ENV-CLEANUPS                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L6cmp_env_cleanups(cl_object v1env)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2specials;
   v2specials = ECL_NIL;
   {
    cl_object v3end;
    v3end = ecl_car(v1env);
    {
     cl_object v4cleanup_forms;
     v4cleanup_forms = ECL_NIL;
     {
      cl_object v5records_list;
      v5records_list = ecl_car(ecl_symbol_value(VV[2]));
L5:;
      if (!(ECL_ATOM(v5records_list))) { goto L7; }
      goto L6;
L7:;
      if (!((v5records_list)==(v3end))) { goto L9; }
      goto L6;
L9:;
      {
       cl_object v6record;
       v6record = ecl_car(v5records_list);
       {
        cl_object v7;
        v7 = ecl_make_bool(ECL_ATOM(v6record));
        if (Null(v7)) { goto L14; }
        goto L11;
L14:;
        T0 = ecl_car(v6record);
        if (!(ECL_SYMBOLP(T0))) { goto L16; }
        T0 = ecl_cadr(v6record);
        if (!((T0)==(ECL_SYM("SPECIAL",1336)))) { goto L16; }
        T0 = ecl_cadddr(v6record);
        v2specials = CONS(T0,v2specials);
        goto L11;
L16:;
        T0 = ecl_car(v6record);
        if (!((T0)==(VV[8]))) { goto L11; }
        T0 = ecl_cadr(v6record);
        v4cleanup_forms = CONS(T0,v4cleanup_forms);
       }
      }
L11:;
      v5records_list = _ecl_cdr(v5records_list);
      goto L5;
L6:;
      if ((v5records_list)==(v3end)) { goto L26; }
      cl_error(1, VV[9]);
L26:;
      T0 = (ECL_SYM("NCONC",583)->symbol.gfdef);
      {
       cl_object v6;
       v6 = (ECL_SYM("COPY-LIST",259)->symbol.gfdef);
       {
        cl_object v7;
        cl_object v8;
        v7 = ECL_NIL;
        {
         cl_object v9;
         v9 = v4cleanup_forms;
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
L37:;
         if (!(ecl_endp(v8))) { goto L39; }
         goto L38;
L39:;
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
          T2 = v11;
         }
         T3 = ecl_function_dispatch(cl_env_copy,v6)(1, v7);
         v10 = ecl_list1(T3);
         (ECL_CONS_CDR(T2)=v10,T2);
         goto L37;
L38:;
         T1 = ecl_cdr(v9);
         goto L29;
        }
       }
      }
L29:;
      T2 = cl_apply(2, T0, T1);
      cl_env_copy->nvalues = 2;
      cl_env_copy->values[1] = T2;
      cl_env_copy->values[0] = v2specials;
      return cl_env_copy->values[0];
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 1;
      return value0;
     }
    }
   }
  }
 }
}
/*      function definition for CMP-ENV-REGISTER-VAR                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L7cmp_env_register_var(cl_narg narg, cl_object v1var, ...)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>3)) FEwrong_num_arguments_anonym();
 {
  cl_object v2env;
  cl_object v3boundp;
  va_list args; va_start(args,v1var);
  {
   int i = 1;
   if (i >= narg) {
    v2env = ecl_symbol_value(VV[2]);
   } else {
    i++;
    v2env = va_arg(args,cl_object);
   }
   if (i >= narg) {
    v3boundp = ECL_T;
   } else {
    i++;
    v3boundp = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v4;
   cl_object v5;
   T0 = ecl_function_dispatch(cl_env_copy,VV[50])(1, v1var) /*  VAR-NAME */;
   {
    cl_object v6;
    v6 = ecl_function_dispatch(cl_env_copy,VV[51])(1, v1var) /*  VAR-KIND */;
    if (!((v6)==(ECL_SYM("SPECIAL",791)))) { goto L12; }
    goto L9;
    goto L10;
L12:;
    goto L10;
L10:;
    if (!((v6)==(VV[12]))) { goto L6; }
    goto L7;
L9:;
   }
L7:;
   T1 = ECL_SYM("SPECIAL",1336);
   goto L5;
L6:;
   T1 = ECL_T;
L5:;
   v4 = cl_list(4, T0, T1, v3boundp, v1var);
   T0 = ecl_car(v2env);
   v5 = CONS(v4,T0);
   {
    cl_object v6;
    v6 = v2env;
    if (ecl_unlikely(ECL_ATOM(v6))) FEtype_error_cons(v6);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    T0 = v6;
   }
   (ECL_CONS_CAR(T0)=v5,T0);
  }
  value0 = v2env;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for CMP-ENV-DECLARE-SPECIAL               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L8cmp_env_declare_special(cl_narg narg, cl_object v1name, ...)
{
 cl_object T0;
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
    v2env = ecl_symbol_value(VV[2]);
   } else {
    i++;
    v2env = va_arg(args,cl_object);
   }
  }
  va_end(args);
  T0 = ecl_function_dispatch(cl_env_copy,VV[53])(5, v1name, VV[15], ECL_NIL, VV[16], ECL_SYM("SPECIAL",791)) /*  C1MAKE-GLOBAL-VARIABLE */;
  L7cmp_env_register_var(3, T0, v2env, ECL_NIL);
  value0 = v2env;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for CMP-ENV-ADD-DECLARATION               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L9cmp_env_add_declaration(cl_narg narg, cl_object v1type, cl_object v2arguments, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>3)) FEwrong_num_arguments_anonym();
 {
  cl_object v3env;
  va_list args; va_start(args,v2arguments);
  {
   int i = 2;
   if (i >= narg) {
    v3env = ecl_symbol_value(VV[2]);
   } else {
    i++;
    v3env = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v4;
   cl_object v5;
   v4 = cl_listX(3, ECL_SYM("DECLARE",988), v1type, v2arguments);
   T0 = ecl_car(v3env);
   v5 = CONS(v4,T0);
   {
    cl_object v6;
    v6 = v3env;
    if (ecl_unlikely(ECL_ATOM(v6))) FEtype_error_cons(v6);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    T0 = v6;
   }
   (ECL_CONS_CAR(T0)=v5,T0);
  }
  value0 = v3env;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for CMP-ENV-EXTEND-DECLARATION            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L10cmp_env_extend_declaration(cl_narg narg, cl_object v1type, cl_object v2arguments, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>4)) FEwrong_num_arguments_anonym();
 {
  cl_object v3env;
  cl_object v4default;
  va_list args; va_start(args,v2arguments);
  {
   int i = 2;
   if (i >= narg) {
    v3env = ecl_symbol_value(VV[2]);
   } else {
    i++;
    v3env = va_arg(args,cl_object);
   }
   if (i >= narg) {
    v4default = ECL_NIL;
   } else {
    i++;
    v4default = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v5x;
   v5x = L31cmp_env_search_declaration(3, v1type, v3env, v4default);
   T0 = ecl_append(v2arguments,v5x);
   L9cmp_env_add_declaration(3, v1type, T0, v3env);
   value0 = v3env;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for CMP-ENV-REGISTER-FUNCTION             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L11cmp_env_register_function(cl_narg narg, cl_object v1fun, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2env;
  va_list args; va_start(args,v1fun);
  {
   int i = 1;
   if (i >= narg) {
    v2env = ecl_symbol_value(VV[2]);
   } else {
    i++;
    v2env = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v3;
   cl_object v4;
   T0 = ecl_function_dispatch(cl_env_copy,VV[57])(1, v1fun) /*  FUN-NAME */;
   v3 = cl_list(3, T0, ECL_SYM("FUNCTION",398), v1fun);
   T0 = ecl_cdr(v2env);
   v4 = CONS(v3,T0);
   {
    cl_object v5;
    v5 = v2env;
    if (ecl_unlikely(ECL_ATOM(v5))) FEtype_error_cons(v5);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    T0 = v5;
   }
   (ECL_CONS_CDR(T0)=v4,T0);
  }
  value0 = v2env;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for CMP-ENV-REGISTER-GLOBAL-MACRO         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L12cmp_env_register_global_macro(cl_object v1name, cl_object v2function)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  L13cmp_env_register_macro(3, v1name, v2function, ecl_symbol_value(VV[2]));
  L13cmp_env_register_macro(3, v1name, v2function, ecl_symbol_value(VV[0]));
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 0;
  return value0;
 }
}
/*      function definition for CMP-ENV-REGISTER-MACRO                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L13cmp_env_register_macro(cl_narg narg, cl_object v1name, cl_object v2function, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>3)) FEwrong_num_arguments_anonym();
 {
  cl_object v3env;
  va_list args; va_start(args,v2function);
  {
   int i = 2;
   if (i >= narg) {
    v3env = ecl_symbol_value(VV[2]);
   } else {
    i++;
    v3env = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v4;
   cl_object v5;
   v4 = cl_list(3, v1name, ECL_SYM("MACRO",1105), v2function);
   T0 = ecl_cdr(v3env);
   v5 = CONS(v4,T0);
   {
    cl_object v6;
    v6 = v3env;
    if (ecl_unlikely(ECL_ATOM(v6))) FEtype_error_cons(v6);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    T0 = v6;
   }
   (ECL_CONS_CDR(T0)=v5,T0);
  }
  value0 = v3env;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for CMP-ENV-REGISTER-FTYPE                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L14cmp_env_register_ftype(cl_narg narg, cl_object v1name, cl_object v2declaration, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>3)) FEwrong_num_arguments_anonym();
 {
  cl_object v3env;
  va_list args; va_start(args,v2declaration);
  {
   int i = 2;
   if (i >= narg) {
    v3env = ecl_symbol_value(VV[2]);
   } else {
    i++;
    v3env = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v4;
   cl_object v5;
   v4 = cl_listX(3, ECL_SYM("DECLARE",988), v1name, v2declaration);
   T0 = ecl_cdr(v3env);
   v5 = CONS(v4,T0);
   {
    cl_object v6;
    v6 = v3env;
    if (ecl_unlikely(ECL_ATOM(v6))) FEtype_error_cons(v6);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    T0 = v6;
   }
   (ECL_CONS_CDR(T0)=v5,T0);
  }
  value0 = v3env;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for CMP-ENV-REGISTER-SYMBOL-MACRO         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L16cmp_env_register_symbol_macro(cl_narg narg, cl_object v1name, cl_object v2form, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>3)) FEwrong_num_arguments_anonym();
 {
  cl_object v3env;
  va_list args; va_start(args,v2form);
  env0 = ECL_NIL;
  CLV0 = env0 = CONS(v2form,env0);                /*  FORM            */
  {
   int i = 2;
   if (i >= narg) {
    v3env = ecl_symbol_value(VV[2]);
   } else {
    i++;
    v3env = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v4;
   cl_object v5;
   {
    cl_object v6;
    v6 = ecl_make_cclosure_va((cl_objectfn)LC15__lambda52,env0,Cblock,2);
    T0 = v6;
   }
   v4 = cl_list(3, v1name, ECL_SYM("SYMBOL-MACRO",1175), T0);
   T0 = ecl_car(v3env);
   v5 = CONS(v4,T0);
   {
    cl_object v6;
    v6 = v3env;
    if (ecl_unlikely(ECL_ATOM(v6))) FEtype_error_cons(v6);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    T0 = v6;
   }
   (ECL_CONS_CAR(T0)=v5,T0);
  }
  value0 = v3env;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      closure LAMBDA52                                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC15__lambda52(cl_narg narg, cl_object v1whole, cl_object v2env, ...)
{
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV0 = env0;                                     /*  FORM            */
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=2)) FEwrong_num_arguments_anonym();
 {
TTL:
  value0 = ECL_CONS_CAR(CLV0);
  cl_env_copy->nvalues = 1;
  return value0;
 }
 }
}
/*      function definition for CMP-ENV-REGISTER-SYMBOL-MACRO-FUNCTION */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L17cmp_env_register_symbol_macro_function(cl_narg narg, cl_object v1name, cl_object v2function, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>3)) FEwrong_num_arguments_anonym();
 {
  cl_object v3env;
  va_list args; va_start(args,v2function);
  {
   int i = 2;
   if (i >= narg) {
    v3env = ecl_symbol_value(VV[2]);
   } else {
    i++;
    v3env = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v4;
   cl_object v5;
   v4 = cl_list(3, v1name, ECL_SYM("SYMBOL-MACRO",1175), v2function);
   T0 = ecl_car(v3env);
   v5 = CONS(v4,T0);
   {
    cl_object v6;
    v6 = v3env;
    if (ecl_unlikely(ECL_ATOM(v6))) FEtype_error_cons(v6);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    T0 = v6;
   }
   (ECL_CONS_CAR(T0)=v5,T0);
  }
  value0 = v3env;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for CMP-ENV-REGISTER-BLOCK                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L18cmp_env_register_block(cl_narg narg, cl_object v1blk, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2env;
  va_list args; va_start(args,v1blk);
  {
   int i = 1;
   if (i >= narg) {
    v2env = ecl_symbol_value(VV[2]);
   } else {
    i++;
    v2env = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v3;
   cl_object v4;
   T0 = ecl_function_dispatch(cl_env_copy,VV[64])(1, v1blk) /*  BLK-NAME */;
   v3 = cl_list(3, ECL_SYM("BLOCK",1224), T0, v1blk);
   T0 = ecl_car(v2env);
   v4 = CONS(v3,T0);
   {
    cl_object v5;
    v5 = v2env;
    if (ecl_unlikely(ECL_ATOM(v5))) FEtype_error_cons(v5);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    T0 = v5;
   }
   (ECL_CONS_CAR(T0)=v4,T0);
  }
  value0 = v2env;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for CMP-ENV-REGISTER-TAG                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L19cmp_env_register_tag(cl_narg narg, cl_object v1name, cl_object v2tag, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>3)) FEwrong_num_arguments_anonym();
 {
  cl_object v3env;
  va_list args; va_start(args,v2tag);
  {
   int i = 2;
   if (i >= narg) {
    v3env = ecl_symbol_value(VV[2]);
   } else {
    i++;
    v3env = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v4;
   cl_object v5;
   T0 = ecl_list1(v1name);
   v4 = cl_list(3, ECL_SYM("TAG",1342), T0, v2tag);
   T0 = ecl_car(v3env);
   v5 = CONS(v4,T0);
   {
    cl_object v6;
    v6 = v3env;
    if (ecl_unlikely(ECL_ATOM(v6))) FEtype_error_cons(v6);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    T0 = v6;
   }
   (ECL_CONS_CAR(T0)=v5,T0);
  }
  value0 = v3env;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for CMP-ENV-REGISTER-CLEANUP              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L20cmp_env_register_cleanup(cl_narg narg, cl_object v1form, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2env;
  va_list args; va_start(args,v1form);
  {
   int i = 1;
   if (i >= narg) {
    v2env = ecl_symbol_value(VV[2]);
   } else {
    i++;
    v2env = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v3;
   cl_object v4;
   T0 = cl_copy_list(v1form);
   v3 = cl_list(2, VV[8], T0);
   T0 = ecl_car(v2env);
   v4 = CONS(v3,T0);
   {
    cl_object v5;
    v5 = v2env;
    if (ecl_unlikely(ECL_ATOM(v5))) FEtype_error_cons(v5);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    T0 = v5;
   }
   (ECL_CONS_CAR(T0)=v4,T0);
  }
  value0 = v2env;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for CMP-ENV-SEARCH-FUNCTION               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L21cmp_env_search_function(cl_narg narg, cl_object v1name, ...)
{
 cl_object T0;
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
    v2env = ecl_symbol_value(VV[2]);
   } else {
    i++;
    v2env = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v3cfb;
   cl_object v4unw;
   cl_object v5found;
   v3cfb = ECL_NIL;
   v4unw = ECL_NIL;
   v5found = ECL_NIL;
   {
    cl_object v6;
    v6 = ecl_cdr(v2env);
    goto L9;
L8:;
    {
     cl_object v7record;
     v7record = ecl_car(v6);
     if (!((v7record)==(ECL_SYM("FUNCTION-BOUNDARY",1918)))) { goto L14; }
     v3cfb = ECL_T;
     goto L13;
L14:;
     if (!((v7record)==(ECL_SYM("UNWIND-PROTECT-BOUNDARY",1919)))) { goto L17; }
     v4unw = ECL_T;
     goto L13;
L17:;
     if (!(ECL_ATOM(v7record))) { goto L20; }
     T0 = ecl_list1(v7record);
     ecl_function_dispatch(cl_env_copy,VV[68])(4, ECL_SYM("FORMAT-CONTROL",1263), VV[29], ECL_SYM("FORMAT-ARGUMENTS",1262), T0) /*  BABOON */;
     goto L13;
L20:;
     T0 = ecl_car(v7record);
     if (!(ecl_equal(T0,v1name))) { goto L13; }
     T0 = ecl_last(v7record,1);
     v5found = ecl_car(T0);
     goto L5;
L13:;
    }
    v6 = ecl_cdr(v6);
L9:;
    if (Null(v6)) { goto L27; }
    goto L8;
L27:;
   }
L5:;
   cl_env_copy->nvalues = 3;
   cl_env_copy->values[2] = v4unw;
   cl_env_copy->values[1] = v3cfb;
   cl_env_copy->values[0] = v5found;
   return cl_env_copy->values[0];
  }
 }
}
/*      function definition for CMP-ENV-SEARCH-VARIABLES              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L22cmp_env_search_variables(cl_object v1type, cl_object v2name, cl_object v3env)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v4cfb;
   cl_object v5unw;
   cl_object v6found;
   v4cfb = ECL_NIL;
   v5unw = ECL_NIL;
   v6found = ECL_NIL;
   {
    cl_object v7;
    v7 = ecl_car(v3env);
    goto L8;
L7:;
    {
     cl_object v8record;
     v8record = ecl_car(v7);
     if (!((v8record)==(ECL_SYM("FUNCTION-BOUNDARY",1918)))) { goto L13; }
     v4cfb = ECL_T;
     goto L12;
L13:;
     if (!((v8record)==(ECL_SYM("UNWIND-PROTECT-BOUNDARY",1919)))) { goto L16; }
     v5unw = ECL_T;
     goto L12;
L16:;
     if (!(ECL_ATOM(v8record))) { goto L19; }
     T0 = ecl_list1(v8record);
     ecl_function_dispatch(cl_env_copy,VV[68])(4, ECL_SYM("FORMAT-CONTROL",1263), VV[29], ECL_SYM("FORMAT-ARGUMENTS",1262), T0) /*  BABOON */;
     goto L12;
L19:;
     {
      cl_object v9;
      T0 = ecl_car(v8record);
      {
       bool v10;
       v10 = (T0)==(v1type);
       v9 = (v10)?ECL_NIL:ECL_T;
      }
      if (Null(v9)) { goto L22; }
      goto L12;
L22:;
      if (!((v1type)==(ECL_SYM("BLOCK",1224)))) { goto L24; }
      T0 = ecl_cadr(v8record);
      if (!((v2name)==(T0))) { goto L12; }
      v6found = v8record;
      goto L4;
L24:;
      if (!((v1type)==(ECL_SYM("TAG",1342)))) { goto L29; }
      T0 = ecl_cadr(v8record);
      if (Null(ecl_memql(v2name,T0))) { goto L12; }
      v6found = v8record;
      goto L4;
L29:;
      T0 = ecl_cadr(v8record);
      if (!((T0)==(ECL_SYM("SYMBOL-MACRO",1175)))) { goto L34; }
      if (!((v2name)==(ECL_SYM("SYMBOL-MACRO",1175)))) { goto L36; }
      v6found = v8record;
L36:;
      goto L4;
L34:;
      v6found = v8record;
      goto L4;
     }
L12:;
    }
    v7 = ecl_cdr(v7);
L8:;
    if (Null(v7)) { goto L43; }
    goto L7;
L43:;
   }
L4:;
   T0 = ecl_last(v6found,1);
   T1 = ecl_car(T0);
   cl_env_copy->nvalues = 3;
   cl_env_copy->values[2] = v5unw;
   cl_env_copy->values[1] = v4cfb;
   cl_env_copy->values[0] = T1;
   return cl_env_copy->values[0];
  }
 }
}
/*      function definition for CMP-ENV-SEARCH-BLOCK                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L23cmp_env_search_block(cl_narg narg, cl_object v1name, ...)
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
    v2env = ecl_symbol_value(VV[2]);
   } else {
    i++;
    v2env = va_arg(args,cl_object);
   }
  }
  va_end(args);
  value0 = L22cmp_env_search_variables(ECL_SYM("BLOCK",1224), v1name, v2env);
  return value0;
 }
}
/*      function definition for CMP-ENV-SEARCH-TAG                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L24cmp_env_search_tag(cl_narg narg, cl_object v1name, ...)
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
    v2env = ecl_symbol_value(VV[2]);
   } else {
    i++;
    v2env = va_arg(args,cl_object);
   }
  }
  va_end(args);
  value0 = L22cmp_env_search_variables(ECL_SYM("TAG",1342), v1name, v2env);
  return value0;
 }
}
/*      function definition for CMP-ENV-SEARCH-SYMBOL-MACRO           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L25cmp_env_search_symbol_macro(cl_narg narg, cl_object v1name, ...)
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
    v2env = ecl_symbol_value(VV[2]);
   } else {
    i++;
    v2env = va_arg(args,cl_object);
   }
  }
  va_end(args);
  value0 = L22cmp_env_search_variables(v1name, ECL_SYM("SYMBOL-MACRO",1175), v2env);
  return value0;
 }
}
/*      function definition for CMP-ENV-SEARCH-VAR                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L26cmp_env_search_var(cl_narg narg, cl_object v1name, ...)
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
    v2env = ecl_symbol_value(VV[2]);
   } else {
    i++;
    v2env = va_arg(args,cl_object);
   }
  }
  va_end(args);
  value0 = L22cmp_env_search_variables(v1name, ECL_T, v2env);
  return value0;
 }
}
/*      function definition for CMP-ENV-SEARCH-MACRO                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L27cmp_env_search_macro(cl_narg narg, cl_object v1name, ...)
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
    v2env = ecl_symbol_value(VV[2]);
   } else {
    i++;
    v2env = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v3f;
   v3f = L21cmp_env_search_function(2, v1name, v2env);
   if (Null(cl_functionp(v3f))) { goto L3; }
   value0 = v3f;
   cl_env_copy->nvalues = 1;
   return value0;
L3:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for CMP-ENV-SEARCH-FTYPE                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L28cmp_env_search_ftype(cl_narg narg, cl_object v1name, ...)
{
 cl_object T0;
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
    v2env = ecl_symbol_value(VV[2]);
   } else {
    i++;
    v2env = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v3;
   v3 = v2env;
   goto L5;
L4:;
   {
    cl_object v4i;
    v4i = ecl_car(v3);
    if (!(ECL_CONSP(v4i))) { goto L9; }
    {
     cl_object v5;
     v5 = v4i;
     {
      cl_object v6;
      v6 = v5;
      if (ecl_unlikely(!ECL_LISTP(v6))) FEtype_error_list(v6);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
     }
     if (Null(v5)) { goto L18; }
     {
      cl_object v6;
      v6 = ECL_CONS_CDR(v5);
      v4i = v6;
      v5 = ECL_CONS_CAR(v5);
     }
L18:;
     T0 = v5;
    }
    if (!((T0)==(ECL_SYM("DECLARE",988)))) { goto L9; }
    {
     cl_object v5;
     v5 = v4i;
     {
      cl_object v6;
      v6 = v5;
      if (ecl_unlikely(!ECL_LISTP(v6))) FEtype_error_list(v6);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
     }
     if (Null(v5)) { goto L29; }
     {
      cl_object v6;
      v6 = ECL_CONS_CDR(v5);
      v4i = v6;
      v5 = ECL_CONS_CAR(v5);
     }
L29:;
     T0 = v5;
    }
    if (Null(ecl_function_dispatch(cl_env_copy,VV[76])(2, T0, v1name) /*  SAME-FNAME-P */)) { goto L9; }
    value0 = v4i;
    cl_env_copy->nvalues = 1;
    return value0;
L9:;
   }
   v3 = ecl_cdr(v3);
L5:;
   if (Null(v3)) { goto L37; }
   goto L4;
L37:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for CMP-ENV-MARK                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L29cmp_env_mark(cl_narg narg, cl_object v1mark, ...)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2env;
  va_list args; va_start(args,v1mark);
  {
   int i = 1;
   if (i >= narg) {
    v2env = ecl_symbol_value(VV[2]);
   } else {
    i++;
    v2env = va_arg(args,cl_object);
   }
  }
  va_end(args);
  T0 = ecl_car(v2env);
  T1 = CONS(v1mark,T0);
  T2 = ecl_cdr(v2env);
  value0 = cl_listX(3, T1, v1mark, T2);
  return value0;
 }
}
/*      function definition for CMP-ENV-NEW-VARIABLES                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L30cmp_env_new_variables(cl_object v1new_env, cl_object v2old_env)
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
   cl_object v4i;
   cl_object v5;
   T0 = ecl_car(v1new_env);
   T1 = ecl_car(v2old_env);
   v3 = cl_ldiff(T0, T1);
   v4i = ECL_NIL;
   v5 = v3;
   {
    cl_object v6;
    cl_object v7;
    v6 = ecl_list1(ECL_NIL);
    v7 = v6;
L6:;
    if (!(ecl_endp(v5))) { goto L8; }
    goto L7;
L8:;
    v4i = _ecl_car(v5);
    {
     cl_object v8;
     v8 = _ecl_cdr(v5);
     if (ecl_unlikely(!ECL_LISTP(v8))) FEtype_error_list(v8);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v5 = v8;
    }
    if (!(ECL_CONSP(v4i))) { goto L16; }
    T0 = ecl_cadddr(v4i);
    if (Null(ecl_function_dispatch(cl_env_copy,VV[79])(1, T0) /*  VAR-P */)) { goto L16; }
    {
     cl_object v8;
     v8 = v7;
     if (ecl_unlikely(ECL_ATOM(v8))) FEtype_error_cons(v8);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     T0 = v8;
    }
    T1 = ecl_cadddr(v4i);
    v7 = ecl_list1(T1);
    (ECL_CONS_CDR(T0)=v7,T0);
L16:;
    goto L6;
L7:;
    value0 = ecl_cdr(v6);
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      function definition for CMP-ENV-SEARCH-DECLARATION            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L31cmp_env_search_declaration(cl_narg narg, cl_object v1kind, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>3)) FEwrong_num_arguments_anonym();
 {
  cl_object v2env;
  cl_object v3default;
  va_list args; va_start(args,v1kind);
  {
   int i = 1;
   if (i >= narg) {
    v2env = ecl_symbol_value(VV[2]);
   } else {
    i++;
    v2env = va_arg(args,cl_object);
   }
   if (i >= narg) {
    v3default = ECL_NIL;
   } else {
    i++;
    v3default = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v4;
   cl_object v5i;
   cl_object v6;
   v4 = ecl_car(v2env);
   v5i = ECL_NIL;
   {
    cl_object v7;
    v7 = v4;
    if (ecl_unlikely(!ECL_LISTP(v7))) FEtype_error_list(v7);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v6 = v7;
   }
L8:;
   if (!(ecl_endp(v6))) { goto L10; }
   goto L9;
L10:;
   v5i = _ecl_car(v6);
   {
    cl_object v7;
    v7 = _ecl_cdr(v6);
    if (ecl_unlikely(!ECL_LISTP(v7))) FEtype_error_list(v7);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v6 = v7;
   }
   if (!(ECL_CONSP(v5i))) { goto L18; }
   T0 = ecl_car(v5i);
   if (!((T0)==(ECL_SYM("DECLARE",988)))) { goto L18; }
   T0 = ecl_cadr(v5i);
   if (!((T0)==(v1kind))) { goto L18; }
   value0 = ecl_cddr(v5i);
   cl_env_copy->nvalues = 1;
   return value0;
L18:;
   goto L8;
L9:;
   value0 = v3default;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}

#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/cmp/cmpenv-api.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclQqxC8VZ7_PQR6lq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CMP;CMPENV-API.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclQqxC8VZ7_PQR6lq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  ecl_cmp_defun(VV[41]);                          /*  CMP-ENV-ROOT    */
  ecl_cmp_defun(VV[43]);                          /*  CMP-ENV-COPY    */
  ecl_cmp_defun(VV[44]);                          /*  SET-CLOSURE-ENV */
  ecl_cmp_defmacro(VV[45]);                       /*  CMP-ENV-VARIABLES */
  ecl_cmp_defmacro(VV[47]);                       /*  CMP-ENV-FUNCTIONS */
  ecl_cmp_defun(VV[48]);                          /*  CMP-ENV-CLEANUPS */
  ecl_cmp_defun(VV[49]);                          /*  CMP-ENV-REGISTER-VAR */
  ecl_cmp_defun(VV[52]);                          /*  CMP-ENV-DECLARE-SPECIAL */
  ecl_cmp_defun(VV[54]);                          /*  CMP-ENV-ADD-DECLARATION */
  ecl_cmp_defun(VV[55]);                          /*  CMP-ENV-EXTEND-DECLARATION */
  ecl_cmp_defun(VV[56]);                          /*  CMP-ENV-REGISTER-FUNCTION */
  ecl_cmp_defun(VV[58]);                          /*  CMP-ENV-REGISTER-GLOBAL-MACRO */
  ecl_cmp_defun(VV[59]);                          /*  CMP-ENV-REGISTER-MACRO */
  ecl_cmp_defun(VV[60]);                          /*  CMP-ENV-REGISTER-FTYPE */
  ecl_cmp_defun(VV[61]);                          /*  CMP-ENV-REGISTER-SYMBOL-MACRO */
  ecl_cmp_defun(VV[62]);                          /*  CMP-ENV-REGISTER-SYMBOL-MACRO-FUNCTION */
  ecl_cmp_defun(VV[63]);                          /*  CMP-ENV-REGISTER-BLOCK */
  ecl_cmp_defun(VV[65]);                          /*  CMP-ENV-REGISTER-TAG */
  ecl_cmp_defun(VV[66]);                          /*  CMP-ENV-REGISTER-CLEANUP */
  ecl_cmp_defun(VV[67]);                          /*  CMP-ENV-SEARCH-FUNCTION */
  ecl_cmp_defun(VV[69]);                          /*  CMP-ENV-SEARCH-VARIABLES */
  ecl_cmp_defun(VV[70]);                          /*  CMP-ENV-SEARCH-BLOCK */
  ecl_cmp_defun(VV[71]);                          /*  CMP-ENV-SEARCH-TAG */
  ecl_cmp_defun(VV[72]);                          /*  CMP-ENV-SEARCH-SYMBOL-MACRO */
  ecl_cmp_defun(VV[73]);                          /*  CMP-ENV-SEARCH-VAR */
  ecl_cmp_defun(VV[74]);                          /*  CMP-ENV-SEARCH-MACRO */
  ecl_cmp_defun(VV[75]);                          /*  CMP-ENV-SEARCH-FTYPE */
  ecl_cmp_defun(VV[77]);                          /*  CMP-ENV-MARK    */
  ecl_cmp_defun(VV[78]);                          /*  CMP-ENV-NEW-VARIABLES */
  ecl_cmp_defun(VV[80]);                          /*  CMP-ENV-SEARCH-DECLARATION */
}
