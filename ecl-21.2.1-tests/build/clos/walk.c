/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CLOS;WALK.LSP                                     */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/clos/walk.eclh"
/*      function definition for UNBOUND-LEXICAL-FUNCTION              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L1unbound_lexical_function(cl_narg narg, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  value0 = cl_error(1, VV[1]);
  return value0;
 }
}
/*      local function WITH-AUGMENTED-ENVIRONMENT                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC2with_augmented_environment(cl_object v1, cl_object v2)
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
   cl_object v4;
   cl_object v5;
   cl_object v6new_env;
   cl_object v7old_env;
   cl_object v8;
   cl_object v9functions;
   cl_object v10;
   cl_object v11macros;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[102])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v12;
    v12 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4 = v12;
   }
   v5 = v4;
   if (!(v5==ECL_NIL)) { goto L10; }
   ecl_function_dispatch(cl_env_copy,VV[102])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L10:;
   {
    cl_object v12;
    v12 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v6new_env = v12;
   }
   if (!(v5==ECL_NIL)) { goto L16; }
   ecl_function_dispatch(cl_env_copy,VV[102])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L16:;
   {
    cl_object v12;
    v12 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v7old_env = v12;
   }
   v8 = ecl_function_dispatch(cl_env_copy,VV[103])(2, v5, VV[3]) /*  SEARCH-KEYWORD */;
   if (!((v8)==(ECL_SYM("MISSING-KEYWORD",2015)))) { goto L23; }
   v9functions = ECL_NIL;
   goto L22;
L23:;
   v9functions = v8;
L22:;
   v10 = ecl_function_dispatch(cl_env_copy,VV[103])(2, v5, VV[4]) /*  SEARCH-KEYWORD */;
   if (!((v10)==(ECL_SYM("MISSING-KEYWORD",2015)))) { goto L27; }
   v11macros = ECL_NIL;
   goto L26;
L27:;
   v11macros = v10;
L26:;
   ecl_function_dispatch(cl_env_copy,VV[104])(2, v5, VV[5]) /*  CHECK-KEYWORD */;
   T0 = cl_list(4, VV[6], v7old_env, v9functions, v11macros);
   T1 = cl_list(2, v6new_env, T0);
   T2 = ecl_list1(T1);
   value0 = cl_listX(3, ECL_SYM("LET",479), T2, v3);
   return value0;
  }
 }
}
/*      function definition for WITH-AUGMENTED-ENVIRONMENT-INTERNAL   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L3with_augmented_environment_internal(cl_object v1env, cl_object v2functions, cl_object v3macros)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v4vars;
   cl_object v5funs;
   v4vars = ecl_car(v1env);
   v5funs = ecl_cdr(v1env);
   {
    cl_object v6;
    v6 = v2functions;
    goto L7;
L6:;
    {
     cl_object v7f;
     v7f = ecl_car(v6);
     T0 = ecl_car(v7f);
     T1 = ecl_fdefinition(VV[2]);
     T2 = cl_list(3, T0, ECL_SYM("FUNCTION",398), T1);
     v5funs = CONS(T2,v5funs);
    }
    v6 = ecl_cdr(v6);
L7:;
    if (Null(v6)) { goto L16; }
    goto L6;
L16:;
   }
   {
    cl_object v6;
    v6 = v3macros;
    goto L22;
L21:;
    {
     cl_object v7m;
     v7m = ecl_car(v6);
     T0 = ecl_car(v7m);
     T1 = ecl_cadr(v7m);
     T2 = cl_list(3, T0, VV[8], T1);
     v5funs = CONS(T2,v5funs);
    }
    v6 = ecl_cdr(v6);
L22:;
    if (Null(v6)) { goto L30; }
    goto L21;
L30:;
   }
   value0 = CONS(v4vars,v5funs);
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for ENVIRONMENT-MACRO                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L4environment_macro(cl_object v1env, cl_object v2macro)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(v1env)) { goto L1; }
  {
   cl_object v3entry;
   T0 = ecl_cdr(v1env);
   v3entry = ecl_assql(v2macro,T0);
   if (Null(v3entry)) { goto L5; }
   T0 = ecl_cadr(v3entry);
   if (!((T0)==(VV[8]))) { goto L5; }
   value0 = ecl_caddr(v3entry);
   cl_env_copy->nvalues = 1;
   return value0;
L5:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
L1:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function WITH-NEW-DEFINITION-IN-ENVIRONMENT             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC5with_new_definition_in_environment(cl_object v1, cl_object v2)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   cl_object v5;
   cl_object v6new_env;
   cl_object v7old_env;
   cl_object v8macrolet_flet_labels_form;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[102])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v9;
    v9 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4 = v9;
   }
   v5 = v4;
   if (!(v5==ECL_NIL)) { goto L10; }
   ecl_function_dispatch(cl_env_copy,VV[102])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L10:;
   {
    cl_object v9;
    v9 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v6new_env = v9;
   }
   if (!(v5==ECL_NIL)) { goto L16; }
   ecl_function_dispatch(cl_env_copy,VV[102])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L16:;
   {
    cl_object v9;
    v9 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v7old_env = v9;
   }
   if (!(v5==ECL_NIL)) { goto L22; }
   ecl_function_dispatch(cl_env_copy,VV[102])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L22:;
   {
    cl_object v9;
    v9 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v8macrolet_flet_labels_form = v9;
   }
   if (Null(v5)) { goto L27; }
   ecl_function_dispatch(cl_env_copy,VV[107])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L27:;
   {
    cl_object v9functions;
    cl_object v10macros;
    v9functions = cl_make_symbol(VV[9]);
    v10macros = cl_make_symbol(VV[10]);
    T0 = cl_list(2, v9functions, ECL_NIL);
    T1 = cl_list(2, v10macros, ECL_NIL);
    T2 = cl_list(2, T0, T1);
    T3 = cl_list(2, ECL_SYM("CAR",182), v8macrolet_flet_labels_form);
    T4 = cl_list(2, ECL_SYM("SECOND",742), v8macrolet_flet_labels_form);
    T5 = cl_list(2, VV[12], T4);
    T6 = cl_list(3, ECL_SYM("PUSH",679), VV[12], v9functions);
    T7 = cl_list(3, ECL_SYM("DOLIST",315), T5, T6);
    T8 = cl_list(2, VV[11], T7);
    T9 = cl_list(2, ECL_SYM("SECOND",742), v8macrolet_flet_labels_form);
    T10 = cl_list(2, VV[14], T9);
    T11 = cl_list(3, ECL_SYM("PUSH",679), VV[15], v10macros);
    T12 = cl_list(3, ECL_SYM("DOLIST",315), T10, T11);
    T13 = cl_list(2, VV[13], T12);
    T14 = cl_list(4, ECL_SYM("ECASE",323), T3, T8, T13);
    T15 = cl_list(6, v6new_env, v7old_env, VV[3], v9functions, VV[4], v10macros);
    T16 = cl_listX(3, VV[7], T15, v3);
    value0 = cl_list(4, ECL_SYM("LET",479), T2, T14, T16);
    return value0;
   }
  }
 }
}
/*      function definition for CONVERT-MACRO-TO-LAMBDA               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L6convert_macro_to_lambda(cl_narg narg, cl_object v1llist, cl_object v2body, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>3)) FEwrong_num_arguments_anonym();
 {
  cl_object v3name;
  va_list args; va_start(args,v2body);
  {
   int i = 2;
   if (i >= narg) {
    v3name = VV[17];
   } else {
    i++;
    v3name = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v4gensym;
   v4gensym = cl_make_symbol(v3name);
   T0 = cl_listX(4, ECL_SYM("DEFMACRO",285), v4gensym, v1llist, v2body);
   cl_eval(T0);
   value0 = cl_macro_function(1, v4gensym);
   return value0;
  }
 }
}
/*      local function WALKER-ENVIRONMENT-BIND                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC7walker_environment_bind(cl_object v1, cl_object v2)
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
   cl_object v4;
   cl_object v5;
   cl_object v6var;
   cl_object v7env;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[102])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v8;
    v8 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4 = v8;
   }
   v5 = v4;
   if (!(v5==ECL_NIL)) { goto L10; }
   ecl_function_dispatch(cl_env_copy,VV[102])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L10:;
   {
    cl_object v8;
    v8 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v6var = v8;
   }
   if (!(v5==ECL_NIL)) { goto L16; }
   ecl_function_dispatch(cl_env_copy,VV[102])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L16:;
   {
    cl_object v8;
    v8 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v7env = v8;
   }
   T0 = cl_listX(3, VV[18], v7env, v5);
   T1 = cl_list(4, v6var, v7env, VV[4], T0);
   value0 = cl_listX(3, VV[7], T1, v3);
   return value0;
  }
 }
}
/*      function definition for ENV-LOCK                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L8env_lock(cl_object v1env)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = L4environment_macro(v1env, ecl_symbol_value(VV[20]));
  return value0;
 }
}
/*      function definition for WALKER-ENVIRONMENT-BIND-1             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L9walker_environment_bind_1(cl_narg narg, cl_object v1env, ...)
{
 cl_object T0, T1, T2, T3, T4, T5;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2walk_function;
  cl_object v3wfnp;
  cl_object v4walk_form;
  cl_object v5wfop;
  cl_object v6declarations;
  cl_object v7decp;
  cl_object v8lexical_variables;
  cl_object v9lexp;
  ecl_va_list args; ecl_va_start(args,v1env,narg,1);
  {
   cl_object keyvars[8];
   cl_parse_key(args,4,L9walker_environment_bind_1keys,keyvars,NULL,FALSE);
   ecl_va_end(args);
   v2walk_function = keyvars[0];
   v3wfnp = keyvars[4];
   v4walk_form = keyvars[1];
   v5wfop = keyvars[5];
   v6declarations = keyvars[2];
   v7decp = keyvars[6];
   v8lexical_variables = keyvars[3];
   v9lexp = keyvars[7];
  }
  {
   cl_object v10lock;
   v10lock = L8env_lock(v1env);
   if (Null(v3wfnp)) { goto L3; }
   T0 = v2walk_function;
   goto L2;
L3:;
   T0 = ecl_car(v10lock);
L2:;
   if (Null(v5wfop)) { goto L6; }
   T1 = v4walk_form;
   goto L5;
L6:;
   T1 = ecl_cadr(v10lock);
L5:;
   if (Null(v7decp)) { goto L9; }
   T2 = v6declarations;
   goto L8;
L9:;
   T2 = ecl_caddr(v10lock);
L8:;
   if (Null(v9lexp)) { goto L12; }
   T3 = v8lexical_variables;
   goto L11;
L12:;
   T3 = ecl_cadddr(v10lock);
L11:;
   T4 = cl_list(4, T0, T1, T2, T3);
   T5 = cl_list(2, ecl_symbol_value(VV[20]), T4);
   value0 = ecl_list1(T5);
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for ENV-WALK-FUNCTION                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L10env_walk_function(cl_object v1env)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = L8env_lock(v1env);
  value0 = ecl_car(T0);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for ENV-WALK-FORM                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L11env_walk_form(cl_object v1env)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = L8env_lock(v1env);
  value0 = ecl_cadr(T0);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for ENV-DECLARATIONS                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L12env_declarations(cl_object v1env)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = L8env_lock(v1env);
  value0 = ecl_caddr(T0);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for ENV-LEXICAL-VARIABLES                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L13env_lexical_variables(cl_object v1env)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = L8env_lock(v1env);
  value0 = ecl_cadddr(T0);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for NOTE-DECLARATION                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L14note_declaration(cl_object v1declaration, cl_object v2env)
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
   cl_object v4;
   v3 = L8env_lock(v2env);
   T0 = ecl_caddr(v3);
   v4 = CONS(v1declaration,T0);
   {
    cl_object v5;
    v5 = ecl_cddr(v3);
    if (ecl_unlikely(ECL_ATOM(v5))) FEtype_error_cons(v5);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    T0 = v5;
   }
   (ECL_CONS_CAR(T0)=v4,T0);
   value0 = v4;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for NOTE-LEXICAL-BINDING                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L15note_lexical_binding(cl_object v1thing, cl_object v2env)
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
   cl_object v4;
   cl_object v5;
   v3 = cl_list(2, v1thing, VV[21]);
   v4 = L8env_lock(v2env);
   T0 = ecl_cadddr(v4);
   v5 = CONS(v3,T0);
   {
    cl_object v6;
    v6 = ecl_cdddr(v4);
    if (ecl_unlikely(ECL_ATOM(v6))) FEtype_error_cons(v6);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    T0 = v6;
   }
   (ECL_CONS_CAR(T0)=v5,T0);
   value0 = v5;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for VARIABLE-LEXICAL-P                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L16variable_lexical_p(cl_object v1var, cl_object v2env)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3entry;
   {
    cl_object v4;
    v4 = L13env_lexical_variables(v2env);
    {
     cl_object v5;
     v5 = v4;
     goto L6;
L5:;
     {
      cl_object v6;
      cl_object v7;
      {
       cl_object v8;
       v8 = v5;
       if (ecl_unlikely(ECL_ATOM(v8))) FEtype_error_cons(v8);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v6 = v8;
      }
      v7 = ECL_CONS_CAR(v6);
      T0 = ecl_car(v7);
      if (!(ecl_eql(v1var,T0))) { goto L8; }
      v3entry = v6;
      goto L1;
     }
L8:;
     v5 = ECL_CONS_CDR(v5);
L6:;
     if (v5==ECL_NIL) { goto L16; }
     goto L5;
L16:;
     v3entry = ECL_NIL;
    }
   }
L1:;
   T0 = ecl_cadar(v3entry);
   if (!((T0)==(VV[21]))) { goto L18; }
   value0 = v3entry;
   cl_env_copy->nvalues = 1;
   return value0;
L18:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for VARIABLE-SYMBOL-MACRO-P               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L17variable_symbol_macro_p(cl_object v1var, cl_object v2env)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3entry;
   {
    cl_object v4;
    v4 = L13env_lexical_variables(v2env);
    {
     cl_object v5;
     v5 = v4;
     goto L6;
L5:;
     {
      cl_object v6;
      cl_object v7;
      {
       cl_object v8;
       v8 = v5;
       if (ecl_unlikely(ECL_ATOM(v8))) FEtype_error_cons(v8);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v6 = v8;
      }
      v7 = ECL_CONS_CAR(v6);
      T0 = ecl_car(v7);
      if (!(ecl_eql(v1var,T0))) { goto L8; }
      v3entry = v6;
      goto L1;
     }
L8:;
     v5 = ECL_CONS_CDR(v5);
L6:;
     if (v5==ECL_NIL) { goto L16; }
     goto L5;
L16:;
     v3entry = ECL_NIL;
    }
   }
L1:;
   T0 = ecl_cadar(v3entry);
   if (!((T0)==(VV[23]))) { goto L18; }
   value0 = v3entry;
   cl_env_copy->nvalues = 1;
   return value0;
L18:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for VARIABLE-DECLARATION                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L18variable_declaration(cl_object v1declaration, cl_object v2var, cl_object v3env)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if ((ecl_memql(v1declaration,ecl_symbol_value(VV[24])))!=ECL_NIL) { goto L1; }
  value0 = cl_error(2, VV[25], v1declaration);
  return value0;
L1:;
  {
   cl_object v4id;
   value0 = L16variable_lexical_p(v2var, v3env);
   if ((value0)!=ECL_NIL) { goto L5; }
   v4id = v2var;
   goto L3;
L5:;
   v4id = value0;
   goto L3;
L3:;
   {
    cl_object v5;
    v5 = L12env_declarations(v3env);
    goto L10;
L9:;
    {
     cl_object v6decl;
     v6decl = ecl_car(v5);
     T0 = ecl_car(v6decl);
     if (!((T0)==(v1declaration))) { goto L14; }
     T0 = ecl_cadr(v6decl);
     if ((T0)==(v4id)) { goto L17; }
     T0 = ecl_car(v6decl);
     if (!((ECL_SYM("TYPE",871))==(T0))) { goto L14; }
     T0 = ecl_cddr(v6decl);
     if (Null(si_memq(v2var,T0))) { goto L14; }
     goto L15;
L17:;
L15:;
     value0 = v6decl;
     cl_env_copy->nvalues = 1;
     return value0;
L14:;
    }
    v5 = ecl_cdr(v5);
L10:;
    if (Null(v5)) { goto L22; }
    goto L9;
L22:;
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      function definition for VARIABLE-SPECIAL-P                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L19variable_special_p(cl_object v1var, cl_object v2env)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = L18variable_declaration(ECL_SYM("SPECIAL",791), v1var, v2env);
  {
   bool v3;
   v3 = T0==ECL_NIL;
   value0 = (v3)?ECL_NIL:ECL_T;
  }
  if ((value0)!=ECL_NIL) { goto L2; }
  value0 = L20variable_globally_special_p(v1var);
  return value0;
L2:;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for VARIABLE-GLOBALLY-SPECIAL-P           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L20variable_globally_special_p(cl_object v1symbol)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = si_specialp(v1symbol);
  return value0;
 }
}
/*      local function GET-WALKER-TEMPLATE-INTERNAL                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC21get_walker_template_internal(cl_object v1, cl_object v2)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4x;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[102])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v5;
    v5 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4x = v5;
   }
   if (Null(v3)) { goto L8; }
   ecl_function_dispatch(cl_env_copy,VV[107])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L8:;
   value0 = cl_list(3, ECL_SYM("GET-SYSPROP",1087), v4x, VV[29]);
   return value0;
  }
 }
}
/*      local function DEFINE-WALKER-TEMPLATE                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC22define_walker_template(cl_object v1, cl_object v2)
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
   cl_object v4name;
   cl_object v5template;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[102])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4name = v6;
   }
   if (Null(v3)) { goto L9; }
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5template = v6;
    goto L8;
   }
L9:;
   v5template = VV[31];
L8:;
   if (Null(v3)) { goto L14; }
   ecl_function_dispatch(cl_env_copy,VV[107])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L14:;
   T0 = cl_list(2, ECL_SYM("QUOTE",681), v4name);
   T1 = cl_list(2, ECL_SYM("QUOTE",681), v5template);
   T2 = cl_list(4, ECL_SYM("PUT-SYSPROP",1141), T0, VV[29], T1);
   value0 = cl_list(3, ECL_SYM("EVAL-WHEN",342), VV[32], T2);
   return value0;
  }
 }
}
/*      function definition for GET-WALKER-TEMPLATE                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L23get_walker_template(cl_object v1x)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ECL_SYMBOLP(v1x))) { goto L1; }
  value0 = si_get_sysprop(v1x, VV[34]);
  if ((value0)!=ECL_NIL) { goto L4; }
  value0 = L24get_implementation_dependent_walker_template(v1x);
  return value0;
L4:;
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  if (!(ECL_LISTP(v1x))) { goto L6; }
  T0 = ecl_car(v1x);
  if (!((T0)==(ECL_SYM("LAMBDA",454)))) { goto L6; }
  value0 = VV[35];
  cl_env_copy->nvalues = 1;
  return value0;
L6:;
  value0 = cl_error(2, VV[36], v1x);
  return value0;
 }
}
/*      function definition for GET-IMPLEMENTATION-DEPENDENT-WALKER-TEMPLATE */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L24get_implementation_dependent_walker_template(cl_object v1x)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for MACROEXPAND-ALL                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L25macroexpand_all(cl_narg narg, cl_object v1form, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2environment;
  va_list args; va_start(args,v1form);
  {
   int i = 1;
   if (i >= narg) {
    v2environment = ECL_NIL;
   } else {
    i++;
    v2environment = va_arg(args,cl_object);
   }
  }
  va_end(args);
  ecl_bds_bind(cl_env_copy,VV[63],ECL_T);         /*  WALK-FORM-EXPAND-MACROS-P */
  value0 = L27walk_form(2, v1form, v2environment);
  ecl_bds_unwind1(cl_env_copy);
  return value0;
 }
}
/*      function definition for WALK-FORM                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L27walk_form(cl_narg narg, cl_object v1form, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>3)) FEwrong_num_arguments_anonym();
 {
  cl_object v2environment;
  cl_object v3walk_function;
  va_list args; va_start(args,v1form);
  {
   int i = 1;
   if (i >= narg) {
    v2environment = ECL_NIL;
   } else {
    i++;
    v2environment = va_arg(args,cl_object);
   }
   if (i >= narg) {
    {
     cl_object v4;
     v4 = ecl_make_cfun((cl_objectfn_fixed)LC26__lambda93,ECL_NIL,Cblock,3);
     v3walk_function = v4;
    }
   } else {
    i++;
    v3walk_function = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v4new_env;
   T0 = L9walker_environment_bind_1(3, v2environment, VV[65], v3walk_function);
   v4new_env = L3with_augmented_environment_internal(v2environment, ECL_NIL, T0);
   value0 = ecl_function_dispatch(cl_env_copy,VV[71])(3, v1form, VV[66], v4new_env) /*  WALK-FORM-INTERNAL */;
   return value0;
  }
 }
}
/*      local function LAMBDA93                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC26__lambda93(cl_object v1subform, cl_object v2context, cl_object v3env)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = v1subform;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for WALK-FORM-INTERNAL                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L28walk_form_internal(cl_object volatile v1form, cl_object volatile v2context, cl_object volatile v3env)
{
 cl_object T0;
 cl_object volatile env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   volatile cl_object v4fn;
   volatile cl_object v5template;
   v4fn = ECL_NIL;
   v5template = ECL_NIL;
   value0 = v1form;
   {
    ecl_frs_push(cl_env_copy,value0);
    if (__ecl_frs_push_result) {                  /*  BEGIN CATCH 3   */
     value0 = cl_env_copy->values[0];
    } else {
     {
      cl_object volatile v7;                      /*  NEWFORM         */
      cl_object volatile v8;                      /*  WALK-NO-MORE-P  */
      T0 = L10env_walk_function(v3env);
      value0 = ecl_function_dispatch(cl_env_copy,T0)(3, v1form, v2context, v3env);
      {
       const int v9 = cl_env_copy->nvalues;
       v7 = value0;
       cl_object v10;
       v10 = (v9<=1)? ECL_NIL : cl_env_copy->values[1];
       v8 = v10;
      }
      value0 = v7;
      {
       ecl_frs_push(cl_env_copy,value0);
       if (__ecl_frs_push_result) {               /*  BEGIN CATCH 9   */
        value0 = cl_env_copy->values[0];
       } else {
        if (Null(v8)) { goto L13; }
        value0 = v7;
        cl_env_copy->nvalues = 1;
        goto L12;
L13:;
        if ((v1form)==(v7)) { goto L15; }
        value0 = ecl_function_dispatch(cl_env_copy,VV[71])(3, v7, v2context, v3env) /*  WALK-FORM-INTERNAL */;
        goto L12;
L15:;
        if (ECL_CONSP(v7)) { goto L17; }
        {
         cl_object v9symmac;
         T0 = L17variable_symbol_macro_p(v7, v3env);
         v9symmac = ecl_car(T0);
         if (Null(v9symmac)) { goto L20; }
         {
          cl_object v10newnewform;
          T0 = ecl_cddr(v9symmac);
          v10newnewform = ecl_function_dispatch(cl_env_copy,VV[71])(3, T0, v2context, v3env) /*  WALK-FORM-INTERNAL */;
          T0 = ecl_cddr(v9symmac);
          if (!((v10newnewform)==(T0))) { goto L23; }
          if (Null(ecl_symbol_value(VV[63]))) { goto L25; }
          value0 = v10newnewform;
          cl_env_copy->nvalues = 1;
          goto L12;
L25:;
          value0 = v7;
          cl_env_copy->nvalues = 1;
          goto L12;
L23:;
          value0 = v10newnewform;
          cl_env_copy->nvalues = 1;
          goto L12;
         }
L20:;
         value0 = v7;
         cl_env_copy->nvalues = 1;
         goto L12;
        }
L17:;
        v4fn = ecl_car(v7);
        v5template = L23get_walker_template(v4fn);
        if (Null(v5template)) { goto L27; }
        if (!(ECL_SYMBOLP(v5template))) { goto L31; }
        value0 = ecl_function_dispatch(cl_env_copy,v5template)(3, v7, v2context, v3env);
        goto L12;
L31:;
        value0 = L29walk_template(v7, v5template, v2context, v3env);
        goto L12;
L27:;
        {
         cl_object volatile v12;                  /*  NEWNEWFORM      */
         cl_object volatile v13;                  /*  MACROP          */
         {
          cl_object v14new_env;
          T0 = L9walker_environment_bind_1(3, v3env, VV[68], v7);
          v14new_env = L3with_augmented_environment_internal(v3env, ECL_NIL, T0);
          value0 = cl_macroexpand_1(2, v7, v14new_env);
         }
         {
          v12 = value0;
          v13 = cl_env_copy->values[1];
         }
         if (Null(v13)) { goto L35; }
         {
          cl_object v14newnewnewform;
          v14newnewnewform = ecl_function_dispatch(cl_env_copy,VV[71])(3, v12, v2context, v3env) /*  WALK-FORM-INTERNAL */;
          if (!((v14newnewnewform)==(v12))) { goto L38; }
          if (Null(ecl_symbol_value(VV[63]))) { goto L40; }
          value0 = v12;
          cl_env_copy->nvalues = 1;
          goto L12;
L40:;
          value0 = v7;
          cl_env_copy->nvalues = 1;
          goto L12;
L38:;
          value0 = v14newnewnewform;
          cl_env_copy->nvalues = 1;
          goto L12;
         }
L35:;
         if (!(ECL_SYMBOLP(v4fn))) { goto L42; }
         if ((cl_fboundp(v4fn))!=ECL_NIL) { goto L42; }
         if (Null(cl_special_operator_p(v4fn))) { goto L42; }
         value0 = cl_error(2, VV[69], v4fn);
         goto L12;
L42:;
         value0 = L29walk_template(v12, VV[70], v2context, v3env);
        }
L12:;
       }
       ecl_frs_pop(cl_env_copy);                  /*  END CATCH 9     */
      }
     }
    }
    ecl_frs_pop(cl_env_copy);                     /*  END CATCH 3     */
   }
   return value0;
  }
 }
}
/*      function definition for WALK-TEMPLATE                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L29walk_template(cl_object v1form, cl_object v2template, cl_object v3context, cl_object v4env)
{
 cl_object T0, T1, T2, T3, T4, T5;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ECL_ATOM(v2template))) { goto L1; }
  {
   cl_object v5;
   v5 = v2template;
   if (Null(ecl_memql(v5,VV[72]))) { goto L4; }
   value0 = ecl_function_dispatch(cl_env_copy,VV[71])(3, v1form, VV[66], v4env) /*  WALK-FORM-INTERNAL */;
   return value0;
L4:;
   if (!((v5)==(ECL_SYM("QUOTE",681)))) { goto L11; }
   goto L8;
   goto L9;
L11:;
   goto L9;
L9:;
   if (!((v5)==(ECL_NIL))) { goto L6; }
   goto L7;
L8:;
L7:;
   value0 = v1form;
   cl_env_copy->nvalues = 1;
   return value0;
L6:;
   if (!((v5)==(ECL_SYM("SET",745)))) { goto L14; }
   value0 = ecl_function_dispatch(cl_env_copy,VV[71])(3, v1form, VV[75], v4env) /*  WALK-FORM-INTERNAL */;
   return value0;
L14:;
   if (!((v5)==(ECL_SYM("LAMBDA",454)))) { goto L21; }
   goto L18;
   goto L19;
L21:;
   goto L19;
L19:;
   if (!((v5)==(VV[77]))) { goto L16; }
   goto L17;
L18:;
L17:;
   if (ECL_SYMBOLP(v1form)) { goto L26; }
   if (!(ECL_LISTP(v1form))) { goto L24; }
   {
    cl_fixnum v6;
    v6 = ecl_length(v1form);
    if (!((v6)==(2))) { goto L24; }
   }
   T0 = ecl_car(v1form);
   if (!((T0)==(ECL_SYM("SETF",752)))) { goto L24; }
   goto L25;
L26:;
L25:;
   value0 = v1form;
   cl_env_copy->nvalues = 1;
   return value0;
L24:;
   value0 = ecl_function_dispatch(cl_env_copy,VV[71])(3, v1form, v3context, v4env) /*  WALK-FORM-INTERNAL */;
   return value0;
L16:;
   value0 = si_ecase_error(v2template, VV[79]);
   return value0;
  }
L1:;
  {
   cl_object v6;
   v6 = ecl_car(v2template);
   if (!((v6)==(VV[80]))) { goto L31; }
   T0 = ecl_cdr(v2template);
   T2 = ecl_cddr(v2template);
   if (!(T2==ECL_NIL)) { goto L34; }
   T1 = ECL_NIL;
   goto L33;
L34:;
   {
    cl_fixnum v7;
    v7 = ecl_length(v1form);
    T2 = ecl_cddr(v2template);
    {
     cl_fixnum v8;
     v8 = ecl_length(T2);
     T3 = ecl_minus(ecl_make_fixnum(v7),ecl_make_fixnum(v8));
     T1 = ecl_nthcdr(ecl_to_size(T3),v1form);
    }
   }
L33:;
   value0 = L30walk_template_handle_repeat(v1form, T0, T1, v3context, v4env);
   return value0;
L31:;
   if (!((v6)==(ECL_SYM("IF",948)))) { goto L36; }
   {
    cl_object v7;
    v7 = v1form;
    T0 = ecl_cadr(v2template);
    if (!(ECL_LISTP(T0))) { goto L43; }
    T0 = ecl_cadr(v2template);
    if (Null(cl_eval(T0))) { goto L41; }
    goto L42;
L43:;
    T0 = ecl_cadr(v2template);
    if (Null(ecl_function_dispatch(cl_env_copy,T0)(1, v1form))) { goto L41; }
L42:;
    v2template = ecl_caddr(v2template);
    goto L40;
L41:;
    v2template = ecl_cadddr(v2template);
L40:;
    v1form = v7;
   }
   goto TTL;
L36:;
   if (!((v6)==(VV[81]))) { goto L48; }
   v2template = ecl_cadr(v2template);
   goto TTL;
L48:;
   if (!(ECL_ATOM(v1form))) { goto L55; }
   value0 = v1form;
   cl_env_copy->nvalues = 1;
   return value0;
L55:;
   T0 = ecl_car(v1form);
   T1 = ecl_car(v2template);
   T2 = L29walk_template(T0, T1, v3context, v4env);
   T3 = ecl_cdr(v1form);
   T4 = ecl_cdr(v2template);
   T5 = L29walk_template(T3, T4, v3context, v4env);
   value0 = L33recons(v1form, T2, T5);
   return value0;
  }
 }
}
/*      function definition for WALK-TEMPLATE-HANDLE-REPEAT           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L30walk_template_handle_repeat(cl_object v1form, cl_object v2template, cl_object v3stop_form, cl_object v4context, cl_object v5env)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!((v1form)==(v3stop_form))) { goto L1; }
  T0 = ecl_cdr(v2template);
  value0 = L29walk_template(v1form, T0, v4context, v5env);
  return value0;
L1:;
  T0 = ecl_car(v2template);
  value0 = L31walk_template_handle_repeat_1(v1form, v2template, T0, v3stop_form, v4context, v5env);
  return value0;
 }
}
/*      function definition for WALK-TEMPLATE-HANDLE-REPEAT-1         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L31walk_template_handle_repeat_1(cl_object v1form, cl_object v2template, cl_object v3repeat_template, cl_object v4stop_form, cl_object v5context, cl_object v6env)
{
 cl_object T0, T1, T2, T3, T4, T5;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(v1form==ECL_NIL)) { goto L1; }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  if (!((v1form)==(v4stop_form))) { goto L3; }
  if (!(v3repeat_template==ECL_NIL)) { goto L5; }
  T0 = ecl_cdr(v2template);
  value0 = L29walk_template(v4stop_form, T0, v5context, v6env);
  return value0;
L5:;
  value0 = cl_error(1, VV[82]);
  return value0;
L3:;
  if (!(v3repeat_template==ECL_NIL)) { goto L7; }
  {
   cl_object v7;
   v7 = v2template;
   v3repeat_template = ecl_car(v2template);
   v2template = v7;
  }
  goto TTL;
L7:;
  T0 = ecl_car(v1form);
  T1 = ecl_car(v3repeat_template);
  T2 = L29walk_template(T0, T1, v5context, v6env);
  T3 = ecl_cdr(v1form);
  T4 = ecl_cdr(v3repeat_template);
  T5 = L31walk_template_handle_repeat_1(T3, v2template, T4, v4stop_form, v5context, v6env);
  value0 = L33recons(v1form, T2, T5);
  return value0;
 }
}
/*      function definition for WALK-REPEAT-EVAL                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L32walk_repeat_eval(cl_object v1form, cl_object v2env)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(v1form)) { goto L2; }
  T0 = ecl_car(v1form);
  T1 = ecl_function_dispatch(cl_env_copy,VV[71])(3, T0, VV[66], v2env) /*  WALK-FORM-INTERNAL */;
  T2 = ecl_cdr(v1form);
  T3 = L32walk_repeat_eval(T2, v2env);
  value0 = L33recons(v1form, T1, T3);
  return value0;
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for RECONS                                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L33recons(cl_object v1x, cl_object v2car, cl_object v3cdr)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_car(v1x);
  if (!((T0)==(v2car))) { goto L3; }
  T0 = ecl_cdr(v1x);
  if ((T0)==(v3cdr)) { goto L1; }
  goto L2;
L3:;
L2:;
  value0 = CONS(v2car,v3cdr);
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  value0 = v1x;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for RELIST                                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L34relist(cl_narg narg, cl_object v1x, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2args;
  ecl_va_list args; ecl_va_start(args,v1x,narg,1);
  v2args = cl_grab_rest_args(args);
  ecl_va_end(args);
  if (!(v2args==ECL_NIL)) { goto L1; }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  value0 = L36relist_internal(v1x, v2args, ECL_NIL);
  return value0;
 }
}
/*      function definition for RELIST*                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L35relist_(cl_narg narg, cl_object v1x, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2args;
  ecl_va_list args; ecl_va_start(args,v1x,narg,1);
  v2args = cl_grab_rest_args(args);
  ecl_va_end(args);
  value0 = L36relist_internal(v1x, v2args, ECL_T);
  return value0;
 }
}
/*      function definition for RELIST-INTERNAL                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L36relist_internal(cl_object v1x, cl_object v2args, cl_object v3_p)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_cdr(v2args);
  if (!(T0==ECL_NIL)) { goto L1; }
  if (Null(v3_p)) { goto L3; }
  value0 = ecl_car(v2args);
  cl_env_copy->nvalues = 1;
  return value0;
L3:;
  T0 = ecl_car(v2args);
  value0 = L33recons(v1x, T0, ECL_NIL);
  return value0;
L1:;
  T0 = ecl_car(v2args);
  T1 = ecl_cdr(v1x);
  T2 = ecl_cdr(v2args);
  T3 = L36relist_internal(T1, T2, v3_p);
  value0 = L33recons(v1x, T0, T3);
  return value0;
 }
}
/*      function definition for WALK-DECLARATIONS                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L37walk_declarations(cl_narg narg, cl_object v1body, cl_object v2fn, cl_object v3env, ...)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<3)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>6)) FEwrong_num_arguments_anonym();
 {
  cl_object v4doc_string_p;
  cl_object v5declarations;
  cl_object v6old_body;
  va_list args; va_start(args,v3env);
  {
   int i = 3;
   if (i >= narg) {
    v4doc_string_p = ECL_NIL;
   } else {
    i++;
    v4doc_string_p = va_arg(args,cl_object);
   }
   if (i >= narg) {
    v5declarations = ECL_NIL;
   } else {
    i++;
    v5declarations = va_arg(args,cl_object);
   }
   if (i >= narg) {
    v6old_body = ECL_NIL;
   } else {
    i++;
    v6old_body = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v7form;
   cl_object v8macrop;
   cl_object v9new_form;
   v7form = ecl_car(v1body);
   v8macrop = ECL_NIL;
   v9new_form = ECL_NIL;
   if (!(ECL_STRINGP(v7form))) { goto L7; }
   if (Null(ecl_cdr(v1body))) { goto L7; }
   if (!(v4doc_string_p==ECL_NIL)) { goto L7; }
   if (!(v5declarations==ECL_NIL)) { goto L7; }
   T0 = ecl_cdr(v1body);
   T1 = L37walk_declarations(4, T0, v2fn, v3env, ECL_T);
   value0 = L33recons(v1body, v7form, T1);
   return value0;
L7:;
   if (!(ECL_LISTP(v7form))) { goto L12; }
   T0 = ecl_car(v7form);
   if (!((T0)==(ECL_SYM("DECLARE",276)))) { goto L12; }
   {
    cl_object v10;
    v10 = ecl_cdr(v7form);
    goto L19;
L18:;
    {
     cl_object v11declaration;
     v11declaration = ecl_car(v10);
     {
      cl_object v12type;
      cl_object v13name;
      cl_object v14args;
      v12type = ecl_car(v11declaration);
      v13name = ecl_cadr(v11declaration);
      v14args = ecl_cddr(v11declaration);
      if (Null(ecl_memql(v12type,ecl_symbol_value(VV[24])))) { goto L28; }
      value0 = L16variable_lexical_p(v13name, v3env);
      if ((value0)!=ECL_NIL) { goto L32; }
      T0 = v13name;
      goto L30;
L32:;
      T0 = value0;
      goto L30;
L30:;
      T1 = cl_listX(3, v12type, T0, v14args);
      L14note_declaration(T1, v3env);
      goto L27;
L28:;
      L14note_declaration(v11declaration, v3env);
L27:;
      v5declarations = CONS(v11declaration,v5declarations);
     }
    }
    v10 = ecl_cdr(v10);
L19:;
    if (Null(v10)) { goto L37; }
    goto L18;
L37:;
   }
   T0 = ecl_cdr(v1body);
   T1 = L37walk_declarations(5, T0, v2fn, v3env, v4doc_string_p, v5declarations);
   value0 = L33recons(v1body, v7form, T1);
   return value0;
L12:;
   if (Null(v7form)) { goto L39; }
   if (!(ECL_LISTP(v7form))) { goto L39; }
   T0 = ecl_car(v7form);
   T1 = L23get_walker_template(T0);
   if (!(T1==ECL_NIL)) { goto L39; }
   value0 = cl_macroexpand_1(2, v7form, v3env);
   {
    v9new_form = value0;
    v8macrop = cl_env_copy->values[1];
   }
   if (Null(v8macrop)) { goto L39; }
   T0 = ecl_cdr(v1body);
   T1 = L33recons(v1body, v9new_form, T0);
   value0 = v6old_body;
   if ((value0)!=ECL_NIL) { goto L48; }
   T2 = v1body;
   goto L46;
L48:;
   T2 = value0;
   goto L46;
L46:;
   value0 = L37walk_declarations(6, T1, v2fn, v3env, v4doc_string_p, v5declarations, T2);
   return value0;
L39:;
   value0 = v6old_body;
   if ((value0)!=ECL_NIL) { goto L52; }
   T0 = v1body;
   goto L50;
L52:;
   T0 = value0;
   goto L50;
L50:;
   value0 = ecl_function_dispatch(cl_env_copy,v2fn)(2, T0, v3env);
   return value0;
  }
 }
}
/*      function definition for WALK-UNEXPECTED-DECLARE               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L38walk_unexpected_declare(cl_object v1form, cl_object v2context, cl_object v3env)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  (cl_env_copy->function=(ECL_SYM("WARN",905)->symbol.gfdef))->cfun.entry(2, VV[85], v1form) /*  WARN */;
  value0 = v1form;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for WALK-ARGLIST                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L39walk_arglist(cl_narg narg, cl_object v1arglist, cl_object v2context, cl_object v3env, ...)
{
 cl_object T0, T1, T2, T3, T4;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<3)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>4)) FEwrong_num_arguments_anonym();
 {
  cl_object v4destructuringp;
  va_list args; va_start(args,v3env);
  {
   int i = 3;
   if (i >= narg) {
    v4destructuringp = ECL_NIL;
   } else {
    i++;
    v4destructuringp = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v5arg;
   v5arg = ECL_NIL;
   if (!(v1arglist==ECL_NIL)) { goto L3; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L3:;
   v5arg = ecl_car(v1arglist);
   if (!(ECL_SYMBOLP(v5arg))) { goto L5; }
   value0 = ecl_memql(v5arg,VV[86]);
   if ((value0)!=ECL_NIL) { goto L10; }
   ecl_function_dispatch(cl_env_copy,VV[22])(2, v5arg, v3env) /*  NOTE-LEXICAL-BINDING */;
   goto L8;
L10:;
   goto L8;
L8:;
   T0 = v5arg;
   T1 = ecl_cdr(v1arglist);
   if (Null(v4destructuringp)) { goto L14; }
   T3 = ecl_memql(v5arg,VV[86]);
   T2 = Null(T3)?ECL_T:ECL_NIL;
   goto L12;
L14:;
   T2 = ECL_NIL;
   goto L12;
L12:;
   T3 = L39walk_arglist(4, T1, v2context, v3env, T2);
   value0 = L33recons(v1arglist, T0, T3);
   return value0;
L5:;
   if (!(ECL_CONSP(v5arg))) { goto L17; }
   {
    cl_object v6;
    if (Null(v4destructuringp)) { goto L21; }
    T0 = L39walk_arglist(4, v5arg, v2context, v3env, v4destructuringp);
    goto L20;
L21:;
    T1 = ecl_car(v5arg);
    T2 = ecl_cadr(v5arg);
    T3 = ecl_function_dispatch(cl_env_copy,VV[71])(3, T2, VV[66], v3env) /*  WALK-FORM-INTERNAL */;
    T4 = ecl_cddr(v5arg);
    T0 = L35relist_(4, v5arg, T1, T3, T4);
L20:;
    T1 = ecl_cdr(v1arglist);
    T2 = L39walk_arglist(4, T1, v2context, v3env, ECL_NIL);
    v6 = L33recons(v1arglist, T0, T2);
    T0 = ecl_car(v5arg);
    if (!(ECL_SYMBOLP(T0))) { goto L24; }
    T0 = ecl_car(v5arg);
    ecl_function_dispatch(cl_env_copy,VV[22])(2, T0, v3env) /*  NOTE-LEXICAL-BINDING */;
    goto L23;
L24:;
    T0 = ecl_cadar(v5arg);
    ecl_function_dispatch(cl_env_copy,VV[22])(2, T0, v3env) /*  NOTE-LEXICAL-BINDING */;
L23:;
    T0 = ecl_cddr(v5arg);
    value0 = ecl_make_bool(T0==ECL_NIL);
    if ((value0)!=ECL_NIL) { goto L28; }
    T0 = ecl_caddr(v5arg);
    {
     bool v7;
     v7 = ECL_SYMBOLP(T0);
     value0 = (v7)?ECL_NIL:ECL_T;
    }
    if ((value0)!=ECL_NIL) { goto L28; }
    T0 = ecl_caddr(v5arg);
    ecl_function_dispatch(cl_env_copy,VV[22])(2, T0, v3env) /*  NOTE-LEXICAL-BINDING */;
    goto L26;
L28:;
    goto L26;
L26:;
    value0 = v6;
    cl_env_copy->nvalues = 1;
    return value0;
   }
L17:;
   value0 = cl_error(2, VV[87], v1arglist);
   return value0;
  }
 }
}
/*      function definition for WALK-LET                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L40walk_let(cl_object v1form, cl_object v2context, cl_object v3env)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ecl_function_dispatch(cl_env_copy,VV[88])(4, v1form, v2context, v3env, ECL_NIL) /*  WALK-LET/LET* */;
  return value0;
 }
}
/*      function definition for WALK-LET*                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L41walk_let_(cl_object v1form, cl_object v2context, cl_object v3env)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ecl_function_dispatch(cl_env_copy,VV[88])(4, v1form, v2context, v3env, ECL_T) /*  WALK-LET/LET* */;
  return value0;
 }
}
/*      function definition for WALK-PROG                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L42walk_prog(cl_object v1form, cl_object v2context, cl_object v3env)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = L49walk_prog_prog_(v1form, v2context, v3env, ECL_NIL);
  return value0;
 }
}
/*      function definition for WALK-PROG*                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L43walk_prog_(cl_object v1form, cl_object v2context, cl_object v3env)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = L49walk_prog_prog_(v1form, v2context, v3env, ECL_T);
  return value0;
 }
}
/*      function definition for WALK-DO                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L44walk_do(cl_object v1form, cl_object v2context, cl_object v3env)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = L50walk_do_do_(v1form, v2context, v3env, ECL_NIL);
  return value0;
 }
}
/*      function definition for WALK-DO*                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L45walk_do_(cl_object v1form, cl_object v2context, cl_object v3env)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = L50walk_do_do_(v1form, v2context, v3env, ECL_T);
  return value0;
 }
}
/*      function definition for WALK-LET/LET*                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L46walk_let_let_(cl_object v1form, cl_object v2context, cl_object v3old_env, cl_object v4sequentialp)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v5new_env;
   T0 = L9walker_environment_bind_1(1, v3old_env);
   v5new_env = L3with_augmented_environment_internal(v3old_env, ECL_NIL, T0);
   {
    cl_object v6let_let_;
    cl_object v7bindings;
    cl_object v8body;
    cl_object v9walked_bindings;
    cl_object v10walked_body;
    v6let_let_ = ecl_car(v1form);
    v7bindings = ecl_cadr(v1form);
    v8body = ecl_cddr(v1form);
    v9walked_bindings = ecl_function_dispatch(cl_env_copy,VV[93])(5, v7bindings, v3old_env, v5new_env, v2context, v4sequentialp) /*  WALK-BINDINGS-1 */;
    T0 = ecl_fdefinition(VV[83]);
    v10walked_body = L37walk_declarations(3, v8body, T0, v5new_env);
    value0 = L35relist_(4, v1form, v6let_let_, v9walked_bindings, v10walked_body);
    return value0;
   }
  }
 }
}
/*      function definition for WALK-LOCALLY                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L47walk_locally(cl_object v1form, cl_object v2context, cl_object v3env)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v4locally;
   cl_object v5body;
   cl_object v6walked_body;
   v4locally = ecl_car(v1form);
   v5body = ecl_cdr(v1form);
   T0 = ecl_fdefinition(VV[83]);
   v6walked_body = L37walk_declarations(3, v5body, T0, v3env);
   value0 = L35relist_(3, v1form, v4locally, v6walked_body);
   return value0;
  }
 }
}
/*      function definition for WALK-PROG/PROG*                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L49walk_prog_prog_(cl_object v1form, cl_object v2context, cl_object v3old_env, cl_object v4sequentialp)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  env0 = ECL_NIL;
  CLV0 = env0 = CONS(v2context,env0);             /*  CONTEXT         */
  {
   cl_object v5new_env;
   T0 = L9walker_environment_bind_1(1, v3old_env);
   v5new_env = L3with_augmented_environment_internal(v3old_env, ECL_NIL, T0);
   {
    cl_object v6possible_block_name;
    cl_object v7blocked_prog;
    v6possible_block_name = ecl_cadr(v1form);
    if (!(ECL_SYMBOLP(v6possible_block_name))) { goto L5; }
    {
     bool v8;
     v8 = (v6possible_block_name)==(ECL_NIL);
     v7blocked_prog = (v8)?ECL_NIL:ECL_T;
     goto L3;
    }
L5:;
    v7blocked_prog = ECL_NIL;
    goto L3;
L3:;
    {
     cl_object v9;                                /*  LET/LET*        */
     cl_object v10;                               /*  BLOCK-NAME      */
     cl_object v11;                               /*  BINDINGS        */
     cl_object v12;                               /*  BODY            */
     if (Null(v7blocked_prog)) { goto L8; }
     T0 = ecl_car(v1form);
     T1 = ecl_cadr(v1form);
     T2 = ecl_caddr(v1form);
     T3 = ecl_cdddr(v1form);
     cl_env_copy->nvalues = 4;
     cl_env_copy->values[3] = T3;
     cl_env_copy->values[2] = T2;
     cl_env_copy->values[1] = T1;
     cl_env_copy->values[0] = T0;
     value0 = cl_env_copy->values[0];
     goto L7;
L8:;
     T0 = ecl_car(v1form);
     T1 = ecl_cadr(v1form);
     T2 = ecl_cddr(v1form);
     cl_env_copy->nvalues = 4;
     cl_env_copy->values[3] = T2;
     cl_env_copy->values[2] = T1;
     cl_env_copy->values[1] = ECL_NIL;
     cl_env_copy->values[0] = T0;
     value0 = cl_env_copy->values[0];
L7:;
     {
      v9 = value0;
      v10 = cl_env_copy->values[1];
      v11 = cl_env_copy->values[2];
      v12 = cl_env_copy->values[3];
     }
     {
      cl_object v13walked_bindings;
      cl_object v14walked_body;
      v13walked_bindings = ecl_function_dispatch(cl_env_copy,VV[93])(5, v11, v3old_env, v5new_env, ECL_CONS_CAR(CLV0), v4sequentialp) /*  WALK-BINDINGS-1 */;
      {
       cl_object v15;
       v15 = ecl_make_cclosure_va((cl_objectfn)LC48__lambda104,env0,Cblock,2);
       T0 = v15;
      }
      v14walked_body = L37walk_declarations(3, v12, T0, v5new_env);
      if (Null(v10)) { goto L13; }
      value0 = L35relist_(5, v1form, v9, v10, v13walked_bindings, v14walked_body);
      return value0;
L13:;
      value0 = L35relist_(4, v1form, v9, v13walked_bindings, v14walked_body);
      return value0;
     }
    }
   }
  }
 }
}
/*      closure LAMBDA104                                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC48__lambda104(cl_narg narg, cl_object v1real_body, cl_object v2real_env, ...)
{
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV0 = env0;                                     /*  CONTEXT         */
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=2)) FEwrong_num_arguments_anonym();
 {
TTL:
  value0 = L66walk_tagbody_1(v1real_body, ECL_CONS_CAR(CLV0), v2real_env);
  return value0;
 }
 }
}
/*      function definition for WALK-DO/DO*                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L50walk_do_do_(cl_object v1form, cl_object v2context, cl_object v3old_env, cl_object v4sequentialp)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v5new_env;
   T0 = L9walker_environment_bind_1(1, v3old_env);
   v5new_env = L3with_augmented_environment_internal(v3old_env, ECL_NIL, T0);
   {
    cl_object v6do_do_;
    cl_object v7bindings;
    cl_object v8end_test;
    cl_object v9body;
    cl_object v10walked_bindings;
    cl_object v11walked_body;
    v6do_do_ = ecl_car(v1form);
    v7bindings = ecl_cadr(v1form);
    v8end_test = ecl_caddr(v1form);
    v9body = ecl_cdddr(v1form);
    v10walked_bindings = ecl_function_dispatch(cl_env_copy,VV[93])(5, v7bindings, v3old_env, v5new_env, v2context, v4sequentialp) /*  WALK-BINDINGS-1 */;
    T0 = ecl_fdefinition(VV[83]);
    v11walked_body = L37walk_declarations(3, v9body, T0, v5new_env);
    T0 = L59walk_bindings_2(v7bindings, v10walked_bindings, v2context, v5new_env);
    T1 = L29walk_template(v8end_test, VV[90], v2context, v5new_env);
    value0 = L35relist_(5, v1form, v6do_do_, T0, T1, v11walked_body);
    return value0;
   }
  }
 }
}
/*      function definition for WALK-DOTIMES/DOLIST                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L51walk_dotimes_dolist(cl_object v1form, cl_object v2context, cl_object v3old_env)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v4new_env;
   T0 = L9walker_environment_bind_1(1, v3old_env);
   v4new_env = L3with_augmented_environment_internal(v3old_env, ECL_NIL, T0);
   {
    cl_object v5dotimes_dolist;
    cl_object v6bindings;
    cl_object v7body;
    cl_object v8walked_bindings;
    cl_object v9walked_body;
    v5dotimes_dolist = ecl_car(v1form);
    v6bindings = ecl_cadr(v1form);
    v7body = ecl_cddr(v1form);
    v8walked_bindings = ecl_function_dispatch(cl_env_copy,VV[93])(5, v6bindings, v3old_env, v4new_env, v2context, ECL_T) /*  WALK-BINDINGS-1 */;
    T0 = ecl_fdefinition(VV[83]);
    v9walked_body = L37walk_declarations(3, v7body, T0, v4new_env);
    T0 = L59walk_bindings_2(v6bindings, v8walked_bindings, v2context, v4new_env);
    value0 = L35relist_(4, v1form, v5dotimes_dolist, T0, v9walked_body);
    return value0;
   }
  }
 }
}
/*      function definition for WALK-MULTIPLE-VALUE-SETQ              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L55walk_multiple_value_setq(cl_object v1form, cl_object v2context, cl_object v3env)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  env0 = ECL_NIL;
  CLV0 = env0 = CONS(v3env,env0);                 /*  ENV             */
  {
   cl_object v4vars;
   v4vars = ecl_cadr(v1form);
   {
    cl_object v5;
    v5 = ecl_make_cclosure_va((cl_objectfn)LC52__lambda105,env0,Cblock,1);
    T0 = v5;
   }
   if (Null(cl_some(2, T0, v4vars))) { goto L2; }
   {
    cl_object v5temps;
    cl_object v6sets;
    cl_object v7expanded;
    cl_object v8walked;
    {
     cl_object v9;
     {
      cl_object v10;
      v10 = ecl_make_cfun((cl_objectfn_fixed)LC53__lambda111,ECL_NIL,Cblock,1);
      v9 = v10;
     }
     {
      cl_object v10;
      cl_object v11;
      v10 = ECL_NIL;
      {
       cl_object v12;
       v12 = v4vars;
       if (ecl_unlikely(!ECL_LISTP(v12))) FEtype_error_list(v12);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v11 = v12;
      }
      {
       cl_object v12;
       cl_object v13;
       v12 = ecl_list1(ECL_NIL);
       v13 = v12;
L13:;
       if (!(ecl_endp(v11))) { goto L15; }
       goto L14;
L15:;
       v10 = _ecl_car(v11);
       {
        cl_object v14;
        v14 = _ecl_cdr(v11);
        if (ecl_unlikely(!ECL_LISTP(v14))) FEtype_error_list(v14);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v11 = v14;
       }
       {
        cl_object v14;
        v14 = v13;
        if (ecl_unlikely(ECL_ATOM(v14))) FEtype_error_cons(v14);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        T0 = v14;
       }
       T1 = ecl_function_dispatch(cl_env_copy,v9)(1, v10);
       v13 = ecl_list1(T1);
       (ECL_CONS_CDR(T0)=v13,T0);
       goto L13;
L14:;
       v5temps = ecl_cdr(v12);
       goto L5;
      }
     }
    }
L5:;
    {
     cl_object v9;
     {
      cl_object v10;
      v10 = ecl_make_cfun((cl_objectfn_fixed)LC54__lambda121,ECL_NIL,Cblock,2);
      v9 = v10;
     }
     {
      cl_object v10;
      cl_object v11;
      v10 = ECL_NIL;
      {
       cl_object v12;
       v12 = v4vars;
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
        v14 = v5temps;
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
L43:;
        if (!(ecl_endp(v11))) { goto L45; }
        goto L44;
L45:;
        v10 = _ecl_car(v11);
        {
         cl_object v16;
         v16 = _ecl_cdr(v11);
         if (ecl_unlikely(!ECL_LISTP(v16))) FEtype_error_list(v16);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         v11 = v16;
        }
        if (!(ecl_endp(v13))) { goto L53; }
        goto L44;
L53:;
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
         T0 = v16;
        }
        T1 = ecl_function_dispatch(cl_env_copy,v9)(2, v10, v12);
        v15 = ecl_list1(T1);
        (ECL_CONS_CDR(T0)=v15,T0);
        goto L43;
L44:;
        v6sets = ecl_cdr(v14);
        goto L31;
       }
      }
     }
    }
L31:;
    T0 = ecl_caddr(v1form);
    v7expanded = cl_listX(4, ECL_SYM("MULTIPLE-VALUE-BIND",574), v5temps, T0, v6sets);
    v8walked = ecl_function_dispatch(cl_env_copy,VV[71])(3, v7expanded, v2context, ECL_CONS_CAR(CLV0)) /*  WALK-FORM-INTERNAL */;
    if (!((v8walked)==(v7expanded))) { goto L71; }
    value0 = v1form;
    cl_env_copy->nvalues = 1;
    return value0;
L71:;
    value0 = v8walked;
    cl_env_copy->nvalues = 1;
    return value0;
   }
L2:;
   value0 = L29walk_template(v1form, VV[92], v2context, ECL_CONS_CAR(CLV0));
   return value0;
  }
 }
}
/*      closure LAMBDA105                                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC52__lambda105(cl_narg narg, cl_object v1var, ...)
{
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV0 = env0;                                     /*  ENV             */
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=1)) FEwrong_num_arguments_anonym();
 {
TTL:
  value0 = L17variable_symbol_macro_p(v1var, ECL_CONS_CAR(CLV0));
  return value0;
 }
 }
}
/*      local function LAMBDA111                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC53__lambda111(cl_object v1var)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_gensym(0);
  return value0;
 }
}
/*      local function LAMBDA121                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC54__lambda121(cl_object v1var, cl_object v2temp)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_list(3, ECL_SYM("SETQ",753), v1var, v2temp);
  return value0;
 }
}
/*      function definition for WALK-MULTIPLE-VALUE-BIND              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L57walk_multiple_value_bind(cl_object v1form, cl_object v2context, cl_object v3old_env)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 cl_object CLV0, CLV1, CLV2, CLV3, CLV4;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  env0 = ECL_NIL;
  CLV0 = env0 = CONS(v2context,env0);             /*  CONTEXT         */
  CLV1 = env0 = CONS(v3old_env,env0);             /*  OLD-ENV         */
  {
   cl_object env1 = env0;
   T0 = L9walker_environment_bind_1(1, ECL_CONS_CAR(CLV1));
   T1 = L3with_augmented_environment_internal(ECL_CONS_CAR(CLV1), ECL_NIL, T0);
   CLV2 = env1 = CONS(T1,env1);                   /*  NEW-ENV         */
   {
    cl_object v4mvb;
    cl_object v5mv_form;
    cl_object v6body;
    cl_object v7walked_body;
    cl_object env2 = env1;
    v4mvb = ecl_car(v1form);
    T0 = ecl_cadr(v1form);
    CLV3 = env2 = CONS(T0,env2);                  /*  BINDINGS        */
    T0 = ecl_caddr(v1form);
    v5mv_form = L29walk_template(T0, ECL_SYM("EVAL",341), ECL_CONS_CAR(CLV0), ECL_CONS_CAR(CLV1));
    v6body = ecl_cdddr(v1form);
    CLV4 = env2 = CONS(ECL_NIL,env2);             /*  WALKED-BINDINGS */
    {
     cl_object v8;
     v8 = ecl_make_cclosure_va((cl_objectfn)LC56__lambda126,env2,Cblock,2);
     T0 = v8;
    }
    v7walked_body = L37walk_declarations(3, v6body, T0, ECL_CONS_CAR(CLV2));
    T0 = ECL_CONS_CAR(CLV4);
    value0 = L35relist_(5, v1form, v4mvb, T0, v5mv_form, v7walked_body);
    return value0;
   }
  }
 }
}
/*      closure LAMBDA126                                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC56__lambda126(cl_narg narg, cl_object v1real_body, cl_object v2real_env, ...)
{
 cl_object CLV0, CLV1, CLV2, CLV3, CLV4;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV4 = env0;                                     /*  WALKED-BINDINGS */
 CLV3 = _ecl_cdr(CLV4);
 CLV2 = _ecl_cdr(CLV3);
 CLV1 = _ecl_cdr(CLV2);
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=2)) FEwrong_num_arguments_anonym();
 {
TTL:
  ECL_CONS_CAR(CLV4) = ecl_function_dispatch(cl_env_copy,VV[93])(5, ECL_CONS_CAR(CLV3), ECL_CONS_CAR(CLV1), ECL_CONS_CAR(CLV2), ECL_CONS_CAR(CLV0), ECL_NIL) /*  WALK-BINDINGS-1 */;
  value0 = L32walk_repeat_eval(v1real_body, v2real_env);
  return value0;
 }
 }
}
/*      function definition for WALK-BINDINGS-1                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L58walk_bindings_1(cl_object v1bindings, cl_object v2old_env, cl_object v3new_env, cl_object v4context, cl_object v5sequentialp)
{
 cl_object T0, T1, T2, T3, T4, T5;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(v1bindings)) { goto L2; }
  {
   cl_object v6binding;
   v6binding = ecl_car(v1bindings);
   if (!(ECL_SYMBOLP(v6binding))) { goto L6; }
   ecl_function_dispatch(cl_env_copy,VV[22])(2, v6binding, v3new_env) /*  NOTE-LEXICAL-BINDING */;
   T0 = v6binding;
   goto L5;
L6:;
   {
    cl_object v7;
    T1 = ecl_car(v6binding);
    T2 = ecl_cadr(v6binding);
    if (Null(v5sequentialp)) { goto L11; }
    T3 = v3new_env;
    goto L10;
L11:;
    T3 = v2old_env;
L10:;
    T4 = ecl_function_dispatch(cl_env_copy,VV[71])(3, T2, v4context, T3) /*  WALK-FORM-INTERNAL */;
    T5 = ecl_cddr(v6binding);
    v7 = L35relist_(4, v6binding, T1, T4, T5);
    T1 = ecl_car(v6binding);
    ecl_function_dispatch(cl_env_copy,VV[22])(2, T1, v3new_env) /*  NOTE-LEXICAL-BINDING */;
    T0 = v7;
   }
L5:;
   T1 = ecl_cdr(v1bindings);
   T2 = ecl_function_dispatch(cl_env_copy,VV[93])(5, T1, v2old_env, v3new_env, v4context, v5sequentialp) /*  WALK-BINDINGS-1 */;
   value0 = L33recons(v1bindings, T0, T2);
   return value0;
  }
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for WALK-BINDINGS-2                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L59walk_bindings_2(cl_object v1bindings, cl_object v2walked_bindings, cl_object v3context, cl_object v4env)
{
 cl_object T0, T1, T2, T3, T4;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(v1bindings)) { goto L2; }
  {
   cl_object v5;
   cl_object v6;
   v5 = ecl_car(v1bindings);
   v6 = ecl_car(v2walked_bindings);
   if (!(ECL_SYMBOLP(v5))) { goto L7; }
   T0 = v5;
   goto L6;
L7:;
   T1 = ecl_car(v6);
   T2 = ecl_cadr(v6);
   T3 = ecl_cddr(v5);
   T4 = L29walk_template(T3, VV[94], v3context, v4env);
   T0 = L35relist_(4, v5, T1, T2, T4);
L6:;
   T1 = ecl_cdr(v1bindings);
   T2 = ecl_cdr(v2walked_bindings);
   T3 = L59walk_bindings_2(T1, T2, v3context, v4env);
   value0 = L33recons(v1bindings, T0, T3);
   return value0;
  }
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for WALK-LAMBDA                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L60walk_lambda(cl_object v1form, cl_object v2context, cl_object v3old_env)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v4new_env;
   T0 = L9walker_environment_bind_1(1, v3old_env);
   v4new_env = L3with_augmented_environment_internal(v3old_env, ECL_NIL, T0);
   {
    cl_object v5arglist;
    cl_object v6body;
    cl_object v7walked_arglist;
    cl_object v8walked_body;
    v5arglist = ecl_cadr(v1form);
    v6body = ecl_cddr(v1form);
    v7walked_arglist = L39walk_arglist(3, v5arglist, v2context, v4new_env);
    T0 = ecl_fdefinition(VV[83]);
    v8walked_body = L37walk_declarations(3, v6body, T0, v4new_env);
    T0 = ecl_car(v1form);
    value0 = L35relist_(4, v1form, T0, v7walked_arglist, v8walked_body);
    return value0;
   }
  }
 }
}
/*      function definition for WALK-NAMED-LAMBDA                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L61walk_named_lambda(cl_object v1form, cl_object v2context, cl_object v3old_env)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v4new_env;
   T0 = L9walker_environment_bind_1(1, v3old_env);
   v4new_env = L3with_augmented_environment_internal(v3old_env, ECL_NIL, T0);
   {
    cl_object v5name;
    cl_object v6arglist;
    cl_object v7body;
    cl_object v8walked_arglist;
    cl_object v9walked_body;
    v5name = ecl_cadr(v1form);
    v6arglist = ecl_caddr(v1form);
    v7body = ecl_cdddr(v1form);
    v8walked_arglist = L39walk_arglist(3, v6arglist, v2context, v4new_env);
    T0 = ecl_fdefinition(VV[83]);
    v9walked_body = L37walk_declarations(3, v7body, T0, v4new_env);
    T0 = ecl_car(v1form);
    value0 = L35relist_(5, v1form, T0, v5name, v8walked_arglist, v9walked_body);
    return value0;
   }
  }
 }
}
/*      function definition for WALK-SETQ                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L62walk_setq(cl_object v1form, cl_object v2context, cl_object v3env)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(ecl_cdddr(v1form))) { goto L1; }
  {
   cl_object v4expanded;
   cl_object v5walked;
   {
    cl_object v6rforms;
    cl_object v7tail;
    v6rforms = ECL_NIL;
    v7tail = ecl_cdr(v1form);
L6:;
    if (!(v7tail==ECL_NIL)) { goto L8; }
    v4expanded = cl_nreverse(v6rforms);
    goto L3;
L8:;
    {
     cl_object v8;
     cl_object v9;
     {
      cl_object v10;
      v10 = v7tail;
      {
       cl_object v11;
       v11 = v10;
       if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v10)) { goto L15; }
      {
       cl_object v11;
       v11 = ECL_CONS_CDR(v10);
       v7tail = v11;
       v10 = ECL_CONS_CAR(v10);
      }
L15:;
      v8 = v10;
     }
     {
      cl_object v10;
      v10 = v7tail;
      {
       cl_object v11;
       v11 = v10;
       if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v10)) { goto L26; }
      {
       cl_object v11;
       v11 = ECL_CONS_CDR(v10);
       v7tail = v11;
       v10 = ECL_CONS_CAR(v10);
      }
L26:;
      v9 = v10;
     }
     T0 = cl_list(3, ECL_SYM("SETQ",753), v8, v9);
     v6rforms = CONS(T0,v6rforms);
    }
    goto L6;
   }
L3:;
   v5walked = L32walk_repeat_eval(v4expanded, v3env);
   if (!((v4expanded)==(v5walked))) { goto L35; }
   value0 = v1form;
   cl_env_copy->nvalues = 1;
   return value0;
L35:;
   value0 = CONS(ECL_SYM("PROGN",673),v5walked);
   cl_env_copy->nvalues = 1;
   return value0;
  }
L1:;
  {
   cl_object v6var;
   cl_object v7val;
   cl_object v8symmac;
   v6var = ecl_cadr(v1form);
   v7val = ecl_caddr(v1form);
   T0 = L17variable_symbol_macro_p(v6var, v3env);
   v8symmac = ecl_car(T0);
   if (Null(v8symmac)) { goto L40; }
   {
    cl_object v9expanded;
    cl_object v10walked;
    T0 = ecl_cddr(v8symmac);
    v9expanded = cl_list(3, ECL_SYM("SETF",752), T0, v7val);
    v10walked = ecl_function_dispatch(cl_env_copy,VV[71])(3, v9expanded, v2context, v3env) /*  WALK-FORM-INTERNAL */;
    if (!((v9expanded)==(v10walked))) { goto L44; }
    value0 = v1form;
    cl_env_copy->nvalues = 1;
    return value0;
L44:;
    value0 = v10walked;
    cl_env_copy->nvalues = 1;
    return value0;
   }
L40:;
   T0 = ecl_function_dispatch(cl_env_copy,VV[71])(3, v6var, VV[75], v3env) /*  WALK-FORM-INTERNAL */;
   T1 = ecl_function_dispatch(cl_env_copy,VV[71])(3, v7val, VV[66], v3env) /*  WALK-FORM-INTERNAL */;
   value0 = L34relist(4, v1form, ECL_SYM("SETQ",753), T0, T1);
   return value0;
  }
 }
}
/*      function definition for WALK-SYMBOL-MACROLET                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L64walk_symbol_macrolet(cl_object v1form, cl_object v2context, cl_object v3old_env)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v4bindings;
   v4bindings = ecl_cadr(v1form);
   {
    cl_object v5new_env;
    {
     cl_object v6;
     {
      cl_object v7;
      v7 = ecl_make_cfun((cl_objectfn_fixed)LC63__lambda144,ECL_NIL,Cblock,1);
      v6 = v7;
     }
     {
      cl_object v7;
      cl_object v8;
      v7 = ECL_NIL;
      {
       cl_object v9;
       v9 = v4bindings;
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
L11:;
       if (!(ecl_endp(v8))) { goto L13; }
       goto L12;
L13:;
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
        T1 = v11;
       }
       T2 = ecl_function_dispatch(cl_env_copy,v6)(1, v7);
       v10 = ecl_list1(T2);
       (ECL_CONS_CDR(T1)=v10,T1);
       goto L11;
L12:;
       T0 = ecl_cdr(v9);
       goto L3;
      }
     }
    }
L3:;
    T1 = L13env_lexical_variables(v3old_env);
    T2 = ecl_append(T0,T1);
    T3 = L9walker_environment_bind_1(3, v3old_env, VV[95], T2);
    v5new_env = L3with_augmented_environment_internal(v3old_env, ECL_NIL, T3);
    T0 = ecl_cddr(v1form);
    T1 = L32walk_repeat_eval(T0, v5new_env);
    value0 = L35relist_(4, v1form, ECL_SYM("SYMBOL-MACROLET",844), v4bindings, T1);
    return value0;
   }
  }
 }
}
/*      local function LAMBDA144                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC63__lambda144(cl_object v1binding)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_car(v1binding);
  T1 = ecl_cadr(v1binding);
  value0 = cl_listX(3, T0, VV[23], T1);
  return value0;
 }
}
/*      function definition for WALK-TAGBODY                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L65walk_tagbody(cl_object v1form, cl_object v2context, cl_object v3env)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_car(v1form);
  T1 = ecl_cdr(v1form);
  T2 = L66walk_tagbody_1(T1, v2context, v3env);
  value0 = L33recons(v1form, T0, T2);
  return value0;
 }
}
/*      function definition for WALK-TAGBODY-1                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L66walk_tagbody_1(cl_object v1form, cl_object v2context, cl_object v3env)
{
 cl_object T0, T1, T2, T3, T4;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(v1form)) { goto L2; }
  T0 = ecl_car(v1form);
  T2 = ecl_car(v1form);
  if (!(ECL_SYMBOLP(T2))) { goto L5; }
  T1 = ECL_SYM("QUOTE",681);
  goto L4;
L5:;
  T1 = v2context;
L4:;
  T2 = ecl_function_dispatch(cl_env_copy,VV[71])(3, T0, T1, v3env) /*  WALK-FORM-INTERNAL */;
  T3 = ecl_cdr(v1form);
  T4 = L66walk_tagbody_1(T3, v2context, v3env);
  value0 = L33recons(v1form, T2, T4);
  return value0;
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for WALK-COMPILER-LET                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L67walk_compiler_let(cl_object v1form, cl_object v2context, cl_object v3old_env)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v4vars;
   cl_object v5vals;
   v4vars = ECL_NIL;
   v5vals = ECL_NIL;
   {
    cl_object v6;
    v6 = ecl_cadr(v1form);
    goto L7;
L6:;
    {
     cl_object v7binding;
     v7binding = ecl_car(v6);
     if (!(ECL_SYMBOLP(v7binding))) { goto L12; }
     v4vars = CONS(v7binding,v4vars);
     v5vals = CONS(ECL_NIL,v5vals);
     goto L11;
L12:;
     T0 = ecl_car(v7binding);
     v4vars = CONS(T0,v4vars);
     T0 = ecl_cadr(v7binding);
     T1 = cl_eval(T0);
     v5vals = CONS(T1,v5vals);
L11:;
    }
    v6 = ecl_cdr(v6);
L7:;
    if (Null(v6)) { goto L22; }
    goto L6;
L22:;
   }
   T0 = ecl_car(v1form);
   T1 = ecl_cadr(v1form);
   {
    cl_object v7, v8; cl_index v6;
    v7 = v4vars;
    v8 = v5vals;
    v6 = ecl_progv(cl_env_copy, v7, v8);
    T3 = ecl_cddr(v1form);
    T2 = L32walk_repeat_eval(T3, v3old_env);
    ecl_bds_unwind(cl_env_copy,v6);
   }
   value0 = L35relist_(4, v1form, T0, T1, T2);
   return value0;
  }
 }
}
/*      function definition for WALK-MACROLET                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L69walk_macrolet(cl_object v1form, cl_object v2context, cl_object v3old_env)
{
 cl_object T0, T1, T2, T3, T4, T5, T6;
 volatile cl_object lex0[2];
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  lex0[0] = v2context;                            /*  CONTEXT         */
TTL:
  T0 = L10env_walk_function(v3old_env);
  T1 = L9walker_environment_bind_1(3, ECL_NIL, VV[65], T0);
  T2 = L3with_augmented_environment_internal(ECL_NIL, ECL_NIL, T1);
  lex0[1] = T2;                                   /*  MACRO-ENV       */
  {
   cl_object v4;
   cl_object v5;
   v4 = ECL_NIL;
   v5 = ECL_NIL;
   {
    cl_object v6;
    v6 = ecl_car(v1form);
    if (!((v6)==(ECL_SYM("FLET",375)))) { goto L10; }
    goto L7;
    goto L8;
L10:;
    goto L8;
L8:;
    if (!((v6)==(ECL_SYM("LABELS",453)))) { goto L5; }
    goto L6;
L7:;
L6:;
    {
     cl_object v7;
     v7 = ecl_cadr(v1form);
     goto L16;
L15:;
     {
      cl_object v8fn;
      v8fn = ecl_car(v7);
      v4 = CONS(v8fn,v4);
     }
     v7 = ecl_cdr(v7);
L16:;
     if (Null(v7)) { goto L24; }
     goto L15;
L24:;
     goto L3;
    }
L5:;
    if (!((v6)==(ECL_SYM("MACROLET",523)))) { goto L26; }
    {
     cl_object v8;
     v8 = ecl_cadr(v1form);
     goto L32;
L31:;
     {
      cl_object v9mac;
      v9mac = ecl_car(v8);
      T0 = ecl_car(v9mac);
      T1 = ecl_cadr(v9mac);
      T2 = ecl_cddr(v9mac);
      T3 = ecl_car(v9mac);
      T4 = cl_string(T3);
      T5 = L6convert_macro_to_lambda(3, T1, T2, T4);
      T6 = cl_list(2, T0, T5);
      v5 = CONS(T6,v5);
     }
     v8 = ecl_cdr(v8);
L32:;
     if (Null(v8)) { goto L40; }
     goto L31;
L40:;
     goto L3;
    }
L26:;
    si_ecase_error(v6, VV[97]);
   }
L3:;
   {
    cl_object v6new_env;
    v6new_env = L3with_augmented_environment_internal(v3old_env, v4, v5);
    T0 = ecl_car(v1form);
    T2 = ecl_cadr(v1form);
    T1 = LC68walk_definitions(lex0, T2);
    T2 = ecl_cddr(v1form);
    T3 = ecl_fdefinition(VV[83]);
    T4 = L37walk_declarations(3, T2, T3, v6new_env);
    value0 = L35relist_(4, v1form, T0, T1, T4);
    return value0;
   }
  }
 }
}
/*      local function WALK-DEFINITIONS                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC68walk_definitions(volatile cl_object *lex0, cl_object v1definitions)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(v1definitions)) { goto L2; }
  {
   cl_object v2definition;
   v2definition = ecl_car(v1definitions);
   T0 = ecl_car(v2definition);
   T1 = ecl_cadr(v2definition);
   T2 = L39walk_arglist(4, T1, lex0[0], lex0[1], ECL_T);
   T3 = ecl_cddr(v2definition);
   T4 = ecl_fdefinition(VV[83]);
   T5 = L37walk_declarations(3, T3, T4, lex0[1]);
   T6 = L35relist_(4, v2definition, T0, T2, T5);
   T8 = ecl_cdr(v1definitions);
   T7 = LC68walk_definitions(lex0, T8);
   value0 = L33recons(v1definitions, T6, T7);
   return value0;
  }
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for WALK-FLET                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L71walk_flet(cl_object v1form, cl_object v2context, cl_object v3old_env)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10;
 volatile cl_object lex0[2];
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  lex0[0] = v2context;                            /*  CONTEXT         */
  lex0[1] = v3old_env;                            /*  OLD-ENV         */
TTL:
  T0 = ecl_car(v1form);
  T1 = ecl_cdr(v1form);
  T3 = ecl_cadr(v1form);
  T2 = LC70walk_definitions(lex0, T3);
  {
   cl_object v4;
   cl_object v5;
   v4 = ECL_NIL;
   v5 = ECL_NIL;
   {
    cl_object v6;
    v6 = ecl_car(v1form);
    if (!((v6)==(ECL_SYM("FLET",375)))) { goto L12; }
    goto L9;
    goto L10;
L12:;
    goto L10;
L10:;
    if (!((v6)==(ECL_SYM("LABELS",453)))) { goto L7; }
    goto L8;
L9:;
L8:;
    {
     cl_object v7;
     v7 = ecl_cadr(v1form);
     goto L18;
L17:;
     {
      cl_object v8fn;
      v8fn = ecl_car(v7);
      v4 = CONS(v8fn,v4);
     }
     v7 = ecl_cdr(v7);
L18:;
     if (Null(v7)) { goto L26; }
     goto L17;
L26:;
     goto L5;
    }
L7:;
    if (!((v6)==(ECL_SYM("MACROLET",523)))) { goto L28; }
    {
     cl_object v8;
     v8 = ecl_cadr(v1form);
     goto L34;
L33:;
     {
      cl_object v9mac;
      v9mac = ecl_car(v8);
      T4 = ecl_car(v9mac);
      T5 = ecl_cadr(v9mac);
      T6 = ecl_cddr(v9mac);
      T7 = ecl_car(v9mac);
      T8 = cl_string(T7);
      T9 = L6convert_macro_to_lambda(3, T5, T6, T8);
      T10 = cl_list(2, T4, T9);
      v5 = CONS(T10,v5);
     }
     v8 = ecl_cdr(v8);
L34:;
     if (Null(v8)) { goto L42; }
     goto L33;
L42:;
     goto L5;
    }
L28:;
    si_ecase_error(v6, VV[97]);
   }
L5:;
   {
    cl_object v6new_env;
    v6new_env = L3with_augmented_environment_internal(lex0[1], v4, v5);
    T4 = ecl_cddr(v1form);
    T5 = ecl_fdefinition(VV[83]);
    T3 = L37walk_declarations(3, T4, T5, v6new_env);
   }
  }
  T4 = L33recons(T1, T2, T3);
  value0 = L33recons(v1form, T0, T4);
  return value0;
 }
}
/*      local function WALK-DEFINITIONS                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC70walk_definitions(volatile cl_object *lex0, cl_object v1definitions)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(v1definitions==ECL_NIL)) { goto L1; }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  T0 = ecl_car(v1definitions);
  T1 = L60walk_lambda(T0, lex0[0], lex0[1]);
  T3 = ecl_cdr(v1definitions);
  T2 = LC70walk_definitions(lex0, T3);
  value0 = L33recons(v1definitions, T1, T2);
  return value0;
 }
}
/*      function definition for WALK-LABELS                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L73walk_labels(cl_object v1form, cl_object v2context, cl_object v3old_env)
{
 cl_object T0, T1, T2, T3, T4, T5, T6;
 volatile cl_object lex0[2];
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  lex0[0] = v2context;                            /*  CONTEXT         */
TTL:
  {
   cl_object v4;
   cl_object v5;
   v4 = ECL_NIL;
   v5 = ECL_NIL;
   {
    cl_object v6;
    v6 = ecl_car(v1form);
    if (!((v6)==(ECL_SYM("FLET",375)))) { goto L10; }
    goto L7;
    goto L8;
L10:;
    goto L8;
L8:;
    if (!((v6)==(ECL_SYM("LABELS",453)))) { goto L5; }
    goto L6;
L7:;
L6:;
    {
     cl_object v7;
     v7 = ecl_cadr(v1form);
     goto L16;
L15:;
     {
      cl_object v8fn;
      v8fn = ecl_car(v7);
      v4 = CONS(v8fn,v4);
     }
     v7 = ecl_cdr(v7);
L16:;
     if (Null(v7)) { goto L24; }
     goto L15;
L24:;
     goto L3;
    }
L5:;
    if (!((v6)==(ECL_SYM("MACROLET",523)))) { goto L26; }
    {
     cl_object v8;
     v8 = ecl_cadr(v1form);
     goto L32;
L31:;
     {
      cl_object v9mac;
      v9mac = ecl_car(v8);
      T0 = ecl_car(v9mac);
      T1 = ecl_cadr(v9mac);
      T2 = ecl_cddr(v9mac);
      T3 = ecl_car(v9mac);
      T4 = cl_string(T3);
      T5 = L6convert_macro_to_lambda(3, T1, T2, T4);
      T6 = cl_list(2, T0, T5);
      v5 = CONS(T6,v5);
     }
     v8 = ecl_cdr(v8);
L32:;
     if (Null(v8)) { goto L40; }
     goto L31;
L40:;
     goto L3;
    }
L26:;
    si_ecase_error(v6, VV[97]);
   }
L3:;
   T0 = L3with_augmented_environment_internal(v3old_env, v4, v5);
   lex0[1] = T0;                                  /*  NEW-ENV         */
   T0 = ecl_car(v1form);
   T1 = ecl_cdr(v1form);
   T3 = ecl_cadr(v1form);
   T2 = LC72walk_definitions(lex0, T3);
   T3 = ecl_cddr(v1form);
   T4 = ecl_fdefinition(VV[83]);
   T5 = L37walk_declarations(3, T3, T4, lex0[1]);
   T6 = L33recons(T1, T2, T5);
   value0 = L33recons(v1form, T0, T6);
   return value0;
  }
 }
}
/*      local function WALK-DEFINITIONS                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC72walk_definitions(volatile cl_object *lex0, cl_object v1definitions)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(v1definitions==ECL_NIL)) { goto L1; }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  T0 = ecl_car(v1definitions);
  T1 = L60walk_lambda(T0, lex0[0], lex0[1]);
  T3 = ecl_cdr(v1definitions);
  T2 = LC72walk_definitions(lex0, T3);
  value0 = L33recons(v1definitions, T1, T2);
  return value0;
 }
}
/*      function definition for WALK-IF                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L74walk_if(cl_object v1form, cl_object v2context, cl_object v3env)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v4predicate;
   cl_object v5arm1;
   cl_object v6arm2;
   v4predicate = ecl_cadr(v1form);
   v5arm1 = ecl_caddr(v1form);
   if (Null(ecl_cddddr(v1form))) { goto L4; }
   T0 = ecl_cdr(v1form);
   {
    cl_fixnum v7;
    v7 = ecl_length(T0);
    (cl_env_copy->function=(ECL_SYM("WARN",905)->symbol.gfdef))->cfun.entry(3, VV[98], v1form, ecl_make_fixnum(v7)) /*  WARN */;
   }
   T0 = ecl_cdddr(v1form);
   v6arm2 = CONS(ECL_SYM("PROGN",673),T0);
   goto L3;
L4:;
   v6arm2 = ecl_cadddr(v1form);
L3:;
   T0 = ecl_function_dispatch(cl_env_copy,VV[71])(3, v4predicate, v2context, v3env) /*  WALK-FORM-INTERNAL */;
   T1 = ecl_function_dispatch(cl_env_copy,VV[71])(3, v5arm1, v2context, v3env) /*  WALK-FORM-INTERNAL */;
   T2 = ecl_function_dispatch(cl_env_copy,VV[71])(3, v6arm2, v2context, v3env) /*  WALK-FORM-INTERNAL */;
   value0 = L34relist(5, v1form, ECL_SYM("IF",948), T0, T1, T2);
   return value0;
  }
 }
}
/*      function definition for WALK-WHEN/UNLESS                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L75walk_when_unless(cl_object v1form, cl_object v2context, cl_object v3env)
{
 cl_object T0, T1, T2, T3, T4;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_car(v1form);
  T1 = ecl_cadr(v1form);
  T2 = ecl_function_dispatch(cl_env_copy,VV[71])(3, T1, v2context, v3env) /*  WALK-FORM-INTERNAL */;
  T3 = ecl_cddr(v1form);
  T4 = L32walk_repeat_eval(T3, v3env);
  value0 = L35relist_(4, v1form, T0, T2, T4);
  return value0;
 }
}
/*      function definition for WALK-C-INLINE                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L76walk_c_inline(cl_object v1form, cl_object v2context, cl_object v3env)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_car(v1form);
  T1 = ecl_cadr(v1form);
  T2 = L32walk_repeat_eval(T1, v3env);
  T3 = ecl_cddr(v1form);
  value0 = L35relist_(4, v1form, T0, T2, T3);
  return value0;
 }
}

#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/clos/walk.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _ecl3wAkcDb7_atLmqq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CLOS;WALK.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_ecl3wAkcDb7_atLmqq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  cl_set(ECL_SYM("*FEATURES*",36),cl_adjoin(2, VV[0], ecl_symbol_value(ECL_SYM("*FEATURES*",36))));
  ecl_function_dispatch(cl_env_copy,VV[99])(12, VVtemp[0], ECL_NIL, ECL_NIL, ECL_NIL, VVtemp[1], ECL_NIL, ECL_NIL, ECL_NIL, VVtemp[2], ECL_NIL, VVtemp[3], ECL_NIL) /*  DODEFPACKAGE */;
  si_select_package(VVtemp[0]);
  (cl_env_copy->function=(ECL_SYM("MAPC",545)->symbol.gfdef))->cfun.entry(2, ECL_SYM("PROCLAIM",668), VVtemp[4]) /*  MAPC */;
  ecl_cmp_defun(VV[100]);                         /*  UNBOUND-LEXICAL-FUNCTION */
  ecl_cmp_defmacro(VV[101]);                      /*  WITH-AUGMENTED-ENVIRONMENT */
  ecl_cmp_defun(VV[105]);                         /*  WITH-AUGMENTED-ENVIRONMENT-INTERNAL */
  (void)0; /* No entry created for ENVIRONMENT-MACRO */
  ecl_cmp_defmacro(VV[106]);                      /*  WITH-NEW-DEFINITION-IN-ENVIRONMENT */
  (void)0; /* No entry created for CONVERT-MACRO-TO-LAMBDA */
  ecl_cmp_defmacro(VV[108]);                      /*  WALKER-ENVIRONMENT-BIND */
  si_Xmake_special(VV[20]);
  if (ecl_boundp(cl_env_copy,VV[20])) { goto L30; }
  cl_set(VV[20],cl_gensym(0));
L30:;
  (void)0; /* No entry created for ENV-LOCK */
  (void)0; /* No entry created for WALKER-ENVIRONMENT-BIND-1 */
  (void)0; /* No entry created for ENV-WALK-FUNCTION */
  (void)0; /* No entry created for ENV-WALK-FORM */
  (void)0; /* No entry created for ENV-DECLARATIONS */
  (void)0; /* No entry created for ENV-LEXICAL-VARIABLES */
  (void)0; /* No entry created for NOTE-DECLARATION */
  ecl_cmp_defun(VV[113]);                         /*  NOTE-LEXICAL-BINDING */
  (void)0; /* No entry created for VARIABLE-LEXICAL-P */
  (void)0; /* No entry created for VARIABLE-SYMBOL-MACRO-P */
  si_Xmake_special(VV[24]);
  if (ecl_boundp(cl_env_copy,VV[24])) { goto L77; }
  cl_set(VV[24],VVtemp[5]);
L77:;
  ecl_cmp_defun(VV[114]);                         /*  VARIABLE-DECLARATION */
  ecl_cmp_defun(VV[115]);                         /*  VARIABLE-SPECIAL-P */
  ecl_cmp_defun(VV[116]);                         /*  VARIABLE-GLOBALLY-SPECIAL-P */
  ecl_cmp_defmacro(VV[117]);                      /*  GET-WALKER-TEMPLATE-INTERNAL */
  ecl_cmp_defmacro(VV[118]);                      /*  DEFINE-WALKER-TEMPLATE */
  ecl_cmp_defun(VV[119]);                         /*  GET-WALKER-TEMPLATE */
  ecl_cmp_defun(VV[120]);                         /*  GET-IMPLEMENTATION-DEPENDENT-WALKER-TEMPLATE */
  si_put_sysprop(ECL_SYM("BLOCK",139), VV[34], VVtemp[6]);
  si_put_sysprop(ECL_SYM("CATCH",184), VV[34], VVtemp[7]);
  si_put_sysprop(VV[39], VV[34], VV[40]);
  si_put_sysprop(ECL_SYM("DECLARE",276), VV[34], VV[41]);
  si_put_sysprop(ECL_SYM("EVAL-WHEN",342), VV[34], VVtemp[8]);
  si_put_sysprop(ECL_SYM("FLET",375), VV[34], VV[42]);
  si_put_sysprop(ECL_SYM("FUNCTION",398), VV[34], VVtemp[9]);
  si_put_sysprop(ECL_SYM("GO",416), VV[34], VVtemp[10]);
  si_put_sysprop(ECL_SYM("IF",948), VV[34], VV[43]);
  si_put_sysprop(ECL_SYM("LABELS",453), VV[34], VV[44]);
  si_put_sysprop(ECL_SYM("LAMBDA",454), VV[34], VV[45]);
  si_put_sysprop(ECL_SYM("LET",479), VV[34], VV[46]);
  si_put_sysprop(ECL_SYM("LET*",480), VV[34], VV[47]);
  si_put_sysprop(ECL_SYM("LOCALLY",492), VV[34], VV[48]);
  si_put_sysprop(ECL_SYM("MACROLET",523), VV[34], VV[49]);
  si_put_sysprop(ECL_SYM("MULTIPLE-VALUE-CALL",575), VV[34], VVtemp[7]);
  si_put_sysprop(ECL_SYM("MULTIPLE-VALUE-PROG1",577), VV[34], VVtemp[11]);
  si_put_sysprop(ECL_SYM("MULTIPLE-VALUE-SETQ",578), VV[34], VV[50]);
  si_put_sysprop(ECL_SYM("MULTIPLE-VALUE-BIND",574), VV[34], VV[51]);
  si_put_sysprop(ECL_SYM("PROGN",673), VV[34], VV[31]);
  si_put_sysprop(ECL_SYM("PROGV",675), VV[34], VVtemp[12]);
  si_put_sysprop(ECL_SYM("QUOTE",681), VV[34], VVtemp[10]);
  si_put_sysprop(ECL_SYM("RETURN-FROM",727), VV[34], VVtemp[13]);
  si_put_sysprop(ECL_SYM("SETQ",753), VV[34], VV[52]);
  si_put_sysprop(ECL_SYM("SYMBOL-MACROLET",844), VV[34], VV[53]);
  si_put_sysprop(ECL_SYM("TAGBODY",852), VV[34], VV[54]);
  si_put_sysprop(ECL_SYM("THE",858), VV[34], VVtemp[14]);
  si_put_sysprop(ECL_SYM("THROW",860), VV[34], VVtemp[15]);
  si_put_sysprop(ECL_SYM("UNWIND-PROTECT",890), VV[34], VVtemp[11]);
  si_put_sysprop(ECL_SYM("DOTIMES",316), VV[34], VV[55]);
  si_put_sysprop(ECL_SYM("DOLIST",315), VV[34], VV[55]);
  si_put_sysprop(ECL_SYM("WHEN",907), VV[34], VV[56]);
  si_put_sysprop(ECL_SYM("UNLESS",885), VV[34], VV[56]);
  si_put_sysprop(ECL_SYM("DO",309), VV[34], VV[57]);
  si_put_sysprop(ECL_SYM("DO*",310), VV[34], VV[58]);
  si_put_sysprop(ECL_SYM("PROG",669), VV[34], VV[59]);
  si_put_sysprop(ECL_SYM("PROG*",670), VV[34], VV[60]);
  si_put_sysprop(ECL_SYM("COND",249), VV[34], VVtemp[16]);
  si_put_sysprop(ECL_SYM("LAMBDA-BLOCK",1367), VV[34], VV[61]);
  si_put_sysprop(ECL_SYM("C-INLINE",2063), VV[34], VV[62]);
  si_Xmake_special(VV[63]);
  if (ecl_boundp(cl_env_copy,VV[63])) { goto L148; }
  cl_set(VV[63],ECL_NIL);
L148:;
  ecl_cmp_defun(VV[121]);                         /*  MACROEXPAND-ALL */
  ecl_cmp_defun(VV[122]);                         /*  WALK-FORM       */
  ecl_cmp_defun(VV[123]);                         /*  WALK-FORM-INTERNAL */
  (void)0; /* No entry created for WALK-TEMPLATE */
  (void)0; /* No entry created for WALK-TEMPLATE-HANDLE-REPEAT */
  (void)0; /* No entry created for WALK-TEMPLATE-HANDLE-REPEAT-1 */
  ecl_cmp_defun(VV[124]);                         /*  WALK-REPEAT-EVAL */
  ecl_cmp_defun(VV[125]);                         /*  RECONS          */
  (void)0; /* No entry created for RELIST */
  (void)0; /* No entry created for RELIST* */
  (void)0; /* No entry created for RELIST-INTERNAL */
  (void)0; /* No entry created for WALK-DECLARATIONS */
  (void)0; /* No entry created for WALK-UNEXPECTED-DECLARE */
  (void)0; /* No entry created for WALK-ARGLIST */
  ecl_cmp_defun(VV[126]);                         /*  WALK-LET        */
  ecl_cmp_defun(VV[127]);                         /*  WALK-LET*       */
  ecl_cmp_defun(VV[128]);                         /*  WALK-PROG       */
  ecl_cmp_defun(VV[129]);                         /*  WALK-PROG*      */
  ecl_cmp_defun(VV[130]);                         /*  WALK-DO         */
  ecl_cmp_defun(VV[131]);                         /*  WALK-DO*        */
  ecl_cmp_defun(VV[132]);                         /*  WALK-LET/LET*   */
  ecl_cmp_defun(VV[133]);                         /*  WALK-LOCALLY    */
  ecl_cmp_defun(VV[134]);                         /*  WALK-PROG/PROG* */
  ecl_cmp_defun(VV[135]);                         /*  WALK-DO/DO*     */
  ecl_cmp_defun(VV[136]);                         /*  WALK-DOTIMES/DOLIST */
  ecl_cmp_defun(VV[137]);                         /*  WALK-MULTIPLE-VALUE-SETQ */
  ecl_cmp_defun(VV[138]);                         /*  WALK-MULTIPLE-VALUE-BIND */
  ecl_cmp_defun(VV[139]);                         /*  WALK-BINDINGS-1 */
  (void)0; /* No entry created for WALK-BINDINGS-2 */
  ecl_cmp_defun(VV[140]);                         /*  WALK-LAMBDA     */
  ecl_cmp_defun(VV[141]);                         /*  WALK-NAMED-LAMBDA */
  ecl_cmp_defun(VV[142]);                         /*  WALK-SETQ       */
  ecl_cmp_defun(VV[143]);                         /*  WALK-SYMBOL-MACROLET */
  ecl_cmp_defun(VV[144]);                         /*  WALK-TAGBODY    */
  (void)0; /* No entry created for WALK-TAGBODY-1 */
  ecl_cmp_defun(VV[145]);                         /*  WALK-COMPILER-LET */
  ecl_cmp_defun(VV[146]);                         /*  WALK-MACROLET   */
  ecl_cmp_defun(VV[147]);                         /*  WALK-FLET       */
  ecl_cmp_defun(VV[148]);                         /*  WALK-LABELS     */
  ecl_cmp_defun(VV[149]);                         /*  WALK-IF         */
  ecl_cmp_defun(VV[150]);                         /*  WALK-WHEN/UNLESS */
  ecl_cmp_defun(VV[151]);                         /*  WALK-C-INLINE   */
}
