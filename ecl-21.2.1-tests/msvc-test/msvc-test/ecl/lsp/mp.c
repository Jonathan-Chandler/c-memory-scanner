/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:LSP;MP.LSP                                        */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/build/lsp/mp.eclh"
/*      local function WITHOUT-INTERRUPTS                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC1without_interrupts(cl_object v1, cl_object v2)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26;
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
    cl_object v4outer_allow_with_interrupts;
    cl_object v5outer_interrupts_enabled;
    v4outer_allow_with_interrupts = cl_gensym(1, _ecl_static_0);
    v5outer_interrupts_enabled = cl_gensym(1, _ecl_static_1);
    T0 = cl_list(2, ECL_SYM("QUOTE",681), v4outer_allow_with_interrupts);
    T1 = cl_list(3, ECL_SYM("LIST",483), VV[2], T0);
    T2 = cl_list(2, ECL_SYM("LIST",483), T1);
    T3 = cl_list(4, ECL_SYM("LIST*",484), VV[1], T2, VV[3]);
    T4 = cl_list(3, ECL_SYM("ALLOW-WITH-INTERRUPTS",1807), VV[0], T3);
    T5 = cl_list(2, ECL_SYM("QUOTE",681), v5outer_interrupts_enabled);
    T6 = cl_list(3, ECL_SYM("LIST",483), VV[5], T5);
    T7 = cl_list(2, ECL_SYM("LIST",483), T6);
    T8 = cl_list(4, ECL_SYM("LIST*",484), VV[1], T7, VV[6]);
    T9 = cl_list(3, ECL_SYM("WITH-RESTORED-INTERRUPTS",1805), VV[4], T8);
    T10 = cl_list(2, ECL_SYM("QUOTE",681), v4outer_allow_with_interrupts);
    T11 = cl_list(3, ECL_SYM("LIST",483), VV[2], T10);
    T12 = cl_list(2, ECL_SYM("QUOTE",681), v4outer_allow_with_interrupts);
    T13 = cl_list(3, ECL_SYM("LIST",483), VV[5], T12);
    T14 = cl_list(3, ECL_SYM("LIST",483), T11, T13);
    T15 = cl_list(2, ECL_SYM("QUOTE",681), v4outer_allow_with_interrupts);
    T16 = cl_list(4, ECL_SYM("LIST",483), VV[8], T15, VV[9]);
    T17 = cl_list(5, ECL_SYM("LIST",483), VV[7], T14, T16, VV[10]);
    T18 = cl_list(3, ECL_SYM("WITH-LOCAL-INTERRUPTS",1806), VV[4], T17);
    T19 = cl_list(3, T4, T9, T18);
    T20 = cl_list(2, v5outer_interrupts_enabled, ECL_SYM("*INTERRUPTS-ENABLED*",7));
    T21 = cl_list(2, v4outer_allow_with_interrupts, ECL_SYM("*ALLOW-WITH-INTERRUPTS*",1793));
    T22 = cl_list(4, T20, VV[11], T21, VV[12]);
    T23 = cl_list(3, ECL_SYM("IGNORABLE",429), v4outer_allow_with_interrupts, v5outer_interrupts_enabled);
    T24 = cl_list(2, ECL_SYM("DECLARE",276), T23);
    T25 = cl_listX(4, ECL_SYM("LET*",480), T22, T24, v3);
    T26 = cl_list(3, ECL_SYM("MACROLET",523), T19, T25);
    value0 = cl_list(3, ECL_SYM("MULTIPLE-VALUE-PROG1",577), T26, VV[13]);
    return value0;
   }
  }
 }
}
/*      local function WITH-INTERRUPTS                                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC2with_interrupts(cl_object v1, cl_object v2)
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
   v3 = ecl_cdr(v1);
   {
    cl_object v4allowp;
    cl_object v5enablep;
    v4allowp = cl_gensym(1, _ecl_static_2);
    v5enablep = cl_gensym(1, _ecl_static_3);
    T0 = cl_list(2, v4allowp, ECL_SYM("*ALLOW-WITH-INTERRUPTS*",1793));
    T1 = cl_list(2, v5enablep, ECL_SYM("*INTERRUPTS-ENABLED*",7));
    T2 = cl_list(3, ECL_SYM("OR",616), v5enablep, v4allowp);
    T3 = cl_list(2, ECL_SYM("*INTERRUPTS-ENABLED*",7), T2);
    T4 = cl_list(3, T0, T1, T3);
    T5 = cl_list(2, ECL_SYM("NOT",586), v5enablep);
    T6 = cl_list(3, ECL_SYM("AND",89), v4allowp, T5);
    T7 = cl_list(3, ECL_SYM("WHEN",907), T6, VV[15]);
    T8 = CONS(ECL_SYM("LOCALLY",492),v3);
    value0 = cl_list(4, ECL_SYM("LET*",480), T4, T7, T8);
    return value0;
   }
  }
 }
}
/*      local function WITH-LOCK                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC3with_lock(cl_object v1, cl_object v2)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27;
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
   cl_object v6lock_form;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[62])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v7;
    v7 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4 = v7;
   }
   v5 = v4;
   if (!(v5==ECL_NIL)) { goto L10; }
   ecl_function_dispatch(cl_env_copy,VV[62])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L10:;
   {
    cl_object v7;
    v7 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v6lock_form = v7;
   }
   {
    cl_object v7lock;
    cl_object v8owner;
    cl_object v9count;
    cl_object v10process;
    v7lock = cl_gensym(1, _ecl_static_4);
    v8owner = cl_gensym(1, _ecl_static_5);
    v9count = cl_gensym(1, _ecl_static_6);
    v10process = cl_gensym(1, _ecl_static_7);
    T0 = cl_list(2, v7lock, v6lock_form);
    T1 = cl_list(2, ECL_SYM("LOCK-OWNER",1450), v7lock);
    T2 = cl_list(2, v8owner, T1);
    T3 = cl_list(2, ECL_SYM("LOCK-COUNT",1451), v7lock);
    T4 = cl_list(2, v9count, T3);
    T5 = cl_list(3, T0, T2, T4);
    T6 = cl_list(3, ECL_SYM("TYPE",871), ECL_SYM("FIXNUM",374), v9count);
    T7 = cl_list(2, ECL_SYM("DECLARE",276), T6);
    T8 = cl_list(2, ECL_SYM("GET-LOCK",1452), v7lock);
    T9 = CONS(ECL_SYM("LOCALLY",492),v3);
    T10 = cl_list(3, ECL_SYM("WITH-RESTORED-INTERRUPTS",1805), T8, T9);
    T11 = cl_list(2, v10process, ECL_SYM("*CURRENT-PROCESS*",1432));
    T12 = ecl_list1(T11);
    T13 = cl_list(2, ECL_SYM("LOCK-OWNER",1450), v7lock);
    T14 = cl_list(3, ECL_SYM("EQ",335), v10process, T13);
    T15 = cl_list(3, ECL_SYM("EQ",335), v8owner, v10process);
    T16 = cl_list(2, ECL_SYM("NOT",586), T15);
    T17 = cl_list(2, ECL_SYM("LOCK-COUNT",1451), v7lock);
    T18 = cl_list(3, ECL_SYM("THE",858), ECL_SYM("FIXNUM",374), T17);
    T19 = cl_list(3, ECL_SYM("THE",858), ECL_SYM("FIXNUM",374), v9count);
    T20 = cl_list(3, ECL_SYM(">",77), T18, T19);
    T21 = cl_list(3, ECL_SYM("OR",616), T16, T20);
    T22 = cl_list(3, ECL_SYM("AND",89), T14, T21);
    T23 = cl_list(2, ECL_SYM("GIVEUP-LOCK",1453), v7lock);
    T24 = cl_list(3, ECL_SYM("WHEN",907), T22, T23);
    T25 = cl_list(4, ECL_SYM("LET",479), T12, VV[17], T24);
    T26 = cl_list(3, ECL_SYM("UNWIND-PROTECT",890), T10, T25);
    T27 = cl_list(2, VV[14], T26);
    value0 = cl_list(4, ECL_SYM("LET*",480), T5, T7, T27);
    return value0;
   }
  }
 }
}
/*      local function DEFINE-CAS-EXPANDER                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC4define_cas_expander(cl_object v1, cl_object v2)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4accessor;
   cl_object v5lambda_list;
   cl_object v6body;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[62])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v7;
    v7 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4accessor = v7;
   }
   if (!(v3==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[62])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v7;
    v7 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5lambda_list = v7;
   }
   v6body = v3;
   {
    cl_object v7env;
    v7env = si_memq(ECL_SYM("&ENVIRONMENT",11),v5lambda_list);
    if (Null(v7env)) { goto L17; }
    T0 = ecl_cadr(v7env);
    T1 = cl_ldiff(v5lambda_list, v7env);
    T2 = ecl_cddr(v7env);
    T3 = ecl_nconc(T1,T2);
    v5lambda_list = CONS(T0,T3);
    goto L15;
L17:;
    v7env = cl_gensym(0);
    v5lambda_list = CONS(v7env,v5lambda_list);
    T0 = cl_list(2, ECL_SYM("IGNORE",430), v7env);
    T1 = cl_list(2, ECL_SYM("DECLARE",276), T0);
    v6body = CONS(T1,v6body);
   }
L15:;
   T0 = cl_list(2, ECL_SYM("QUOTE",681), v4accessor);
   T1 = cl_list(2, ECL_SYM("SYMBOL-PACKAGE",846), T0);
   T2 = cl_list(2, ECL_SYM("PACKAGE",619), T1);
   T3 = ecl_list1(T2);
   T4 = ecl_list1(v4accessor);
   T5 = cl_list(2, ECL_SYM("QUOTE",681), T4);
   T6 = cl_listX(6, ECL_SYM("SIGNAL-SIMPLE-ERROR",1160), VV[21], VV[22], VV[23], T5, VV[24]);
   T7 = cl_list(3, ECL_SYM("WHEN",907), VV[20], T6);
   T8 = cl_list(3, ECL_SYM("LET",479), T3, T7);
   T9 = cl_list(2, ECL_SYM("QUOTE",681), v4accessor);
   {
    cl_object v8;                                 /*  DECLS           */
    cl_object v9;                                 /*  BODY            */
    value0 = ecl_function_dispatch(cl_env_copy,VV[64])(1, v6body) /*  FIND-DECLARATIONS */;
    {
     const int v10 = cl_env_copy->nvalues;
     v8 = value0;
     cl_object v11;
     v11 = (v10<=1)? ECL_NIL : cl_env_copy->values[1];
     v9 = v11;
    }
    T11 = cl_listX(3, ECL_SYM("BLOCK",139), v4accessor, v9);
    T12 = ecl_list1(T11);
    T13 = ecl_append(v8,T12);
    T14 = cl_listX(3, ECL_SYM("LAMBDA",454), v5lambda_list, T13);
    T10 = cl_list(2, ECL_SYM("FUNCTION",398), T14);
   }
   T11 = cl_list(4, ECL_SYM("PUT-SYSPROP",1141), T9, VV[25], T10);
   T12 = cl_list(2, ECL_SYM("QUOTE",681), v4accessor);
   value0 = cl_list(5, ECL_SYM("EVAL-WHEN",342), VV[19], T8, T11, T12);
   return value0;
  }
 }
}
/*      local function DEFCAS                                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC5defcas(cl_object v1, cl_object v2)
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
   cl_object v4accessor;
   cl_object v5cas_fun;
   cl_object v6documentation;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[62])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v7;
    v7 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4accessor = v7;
   }
   if (!(v3==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[62])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v7;
    v7 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5cas_fun = v7;
   }
   if (Null(v3)) { goto L15; }
   {
    cl_object v7;
    v7 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v6documentation = v7;
    goto L14;
   }
L15:;
   v6documentation = ECL_NIL;
L14:;
   if (Null(v3)) { goto L20; }
   ecl_function_dispatch(cl_env_copy,VV[66])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L20:;
   T0 = cl_list(2, ECL_SYM("QUOTE",681), v5cas_fun);
   T1 = cl_list(3, ECL_SYM("LIST*",484), T0, VV[31]);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), v4accessor);
   T3 = cl_list(3, ECL_SYM("LIST*",484), T2, VV[32]);
   T4 = cl_list(7, ECL_SYM("VALUES",897), ECL_NIL, ECL_NIL, VV[29], VV[30], T1, T3);
   T5 = cl_list(3, ECL_SYM("LET",479), VV[28], T4);
   value0 = cl_list(4, VV[26], v4accessor, VV[27], T5);
   return value0;
  }
 }
}
/*      function definition for SPECIAL-VARIABLE-P                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L6special_variable_p(cl_object v1place)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ECL_SYMBOLP(v1place))) { goto L2; }
  if (Null(cl_fboundp(VV[34]))) { goto L8; }
  value0 = ecl_function_dispatch(cl_env_copy,VV[34])(1, v1place) /*  SPECIAL-VARIABLE-P */;
  goto L6;
L8:;
  value0 = ECL_NIL;
  goto L6;
L6:;
  if ((value0)!=ECL_NIL) { goto L5; }
  value0 = si_specialp(v1place);
  return value0;
L5:;
  cl_env_copy->nvalues = 1;
  return value0;
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for REMCAS                                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L7remcas(cl_object v1symbol)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2package;
   v2package = cl_symbol_package(v1symbol);
   if (Null(v2package)) { goto L1; }
   if (Null(si_package_locked_p(v2package))) { goto L1; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L1; }
   T0 = ecl_list1(v1symbol);
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VV[22], VV[23], T0, ECL_SYM("PACKAGE",1311), v2package);
  }
L1:;
  value0 = si_rem_sysprop(v1symbol, VV[35]);
  return value0;
 }
}
/*      function definition for GET-CAS-EXPANSION                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L8get_cas_expansion(cl_narg narg, cl_object v1place, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2environment;
  va_list args; va_start(args,v1place);
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
  {
   cl_object v3f;
   v3f = ECL_NIL;
   if (Null(L6special_variable_p(v1place))) { goto L3; }
   T0 = cl_list(2, ECL_SYM("QUOTE",681), v1place);
   v1place = cl_list(2, ECL_SYM("SYMBOL-VALUE",848), T0);
L3:;
   if (!(ECL_LISTP(v1place))) { goto L6; }
   T0 = ecl_car(v1place);
   v3f = si_get_sysprop(T0, VV[35]);
   if (Null(v3f)) { goto L6; }
   T0 = ecl_cdr(v1place);
   value0 = cl_apply(3, v3f, v2environment, T0);
   return value0;
L6:;
   v3f = cl_macroexpand_1(2, v1place, v2environment);
   if (Null(v3f)) { goto L10; }
   if (ecl_equal(v3f,v1place)) { goto L10; }
   value0 = L8get_cas_expansion(2, v3f, v2environment);
   return value0;
L10:;
   value0 = cl_error(2, VV[37], v1place);
   return value0;
  }
 }
}
/*      local function COMPARE-AND-SWAP                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC9compare_and_swap(cl_object v1, cl_object v2env)
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
   cl_object v4place;
   cl_object v5old;
   cl_object v6new;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[62])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v7;
    v7 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4place = v7;
   }
   if (!(v3==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[62])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v7;
    v7 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5old = v7;
   }
   if (!(v3==ECL_NIL)) { goto L15; }
   ecl_function_dispatch(cl_env_copy,VV[62])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L15:;
   {
    cl_object v7;
    v7 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v6new = v7;
   }
   if (Null(v3)) { goto L20; }
   ecl_function_dispatch(cl_env_copy,VV[66])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L20:;
   {
    cl_object v8;                                 /*  VARS            */
    cl_object v9;                                 /*  VALS            */
    cl_object v10;                                /*  OLD-VAR         */
    cl_object v11;                                /*  NEW-VAR         */
    cl_object v12;                                /*  CAS-FORM        */
    value0 = L8get_cas_expansion(2, v4place, v2env);
    {
     const int v13 = cl_env_copy->nvalues;
     v8 = value0;
     cl_object v14;
     v14 = (v13<=1)? ECL_NIL : cl_env_copy->values[1];
     v9 = v14;
     v14 = (v13<=2)? ECL_NIL : cl_env_copy->values[2];
     v10 = v14;
     v14 = (v13<=3)? ECL_NIL : cl_env_copy->values[3];
     v11 = v14;
     v14 = (v13<=4)? ECL_NIL : cl_env_copy->values[4];
     v12 = v14;
    }
    {
     cl_object v13;
     v13 = (ECL_SYM("LIST",483)->symbol.gfdef);
     {
      cl_object v14;
      cl_object v15;
      v14 = ECL_NIL;
      {
       cl_object v16;
       v16 = v8;
       if (ecl_unlikely(!ECL_LISTP(v16))) FEtype_error_list(v16);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v15 = v16;
      }
      {
       cl_object v16;
       cl_object v17;
       v16 = ECL_NIL;
       {
        cl_object v18;
        v18 = v9;
        if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v17 = v18;
       }
       {
        cl_object v18;
        cl_object v19;
        v18 = ecl_list1(ECL_NIL);
        v19 = v18;
L35:;
        if (!(ecl_endp(v15))) { goto L37; }
        goto L36;
L37:;
        v14 = _ecl_car(v15);
        {
         cl_object v20;
         v20 = _ecl_cdr(v15);
         if (ecl_unlikely(!ECL_LISTP(v20))) FEtype_error_list(v20);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         v15 = v20;
        }
        if (!(ecl_endp(v17))) { goto L45; }
        goto L36;
L45:;
        v16 = _ecl_car(v17);
        {
         cl_object v20;
         v20 = _ecl_cdr(v17);
         if (ecl_unlikely(!ECL_LISTP(v20))) FEtype_error_list(v20);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         v17 = v20;
        }
        {
         cl_object v20;
         v20 = v19;
         if (ecl_unlikely(ECL_ATOM(v20))) FEtype_error_cons(v20);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         T1 = v20;
        }
        T2 = ecl_function_dispatch(cl_env_copy,v13)(2, v14, v16);
        v19 = ecl_list1(T2);
        (ECL_CONS_CDR(T1)=v19,T1);
        goto L35;
L36:;
        T0 = ecl_cdr(v18);
        goto L23;
       }
      }
     }
    }
L23:;
    T1 = cl_list(2, v10, v5old);
    T2 = cl_list(2, v11, v6new);
    T3 = cl_list(2, T1, T2);
    T4 = ecl_append(T0,T3);
    value0 = cl_list(3, ECL_SYM("LET*",480), T4, v12);
    return value0;
   }
  }
 }
}
/*      local function LAMBDA66                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC10__lambda66(cl_narg narg, cl_object v1, ...)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2args;
  ecl_va_list args; ecl_va_start(args,v1,narg,1);
  v2args = cl_grab_rest_args(args);
  ecl_va_end(args);
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, v3, v4);
   T1 = ecl_append(v2args,T0);
   T2 = CONS(ECL_SYM("COMPARE-AND-SWAP-CAR",1508),T1);
   T3 = CONS(ECL_SYM("CAR",182),v2args);
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T2;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA70                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC11__lambda70(cl_narg narg, cl_object v1, ...)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2args;
  ecl_va_list args; ecl_va_start(args,v1,narg,1);
  v2args = cl_grab_rest_args(args);
  ecl_va_end(args);
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, v3, v4);
   T1 = ecl_append(v2args,T0);
   T2 = CONS(ECL_SYM("COMPARE-AND-SWAP-CAR",1508),T1);
   T3 = CONS(ECL_SYM("FIRST",373),v2args);
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T2;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA74                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC12__lambda74(cl_narg narg, cl_object v1, ...)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2args;
  ecl_va_list args; ecl_va_start(args,v1,narg,1);
  v2args = cl_grab_rest_args(args);
  ecl_va_end(args);
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, v3, v4);
   T1 = ecl_append(v2args,T0);
   T2 = CONS(ECL_SYM("COMPARE-AND-SWAP-CDR",1509),T1);
   T3 = CONS(ECL_SYM("CDR",200),v2args);
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T2;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA78                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC13__lambda78(cl_narg narg, cl_object v1, ...)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2args;
  ecl_va_list args; ecl_va_start(args,v1,narg,1);
  v2args = cl_grab_rest_args(args);
  ecl_va_end(args);
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, v3, v4);
   T1 = ecl_append(v2args,T0);
   T2 = CONS(ECL_SYM("COMPARE-AND-SWAP-CDR",1509),T1);
   T3 = CONS(ECL_SYM("REST",721),v2args);
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T2;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA82                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC14__lambda82(cl_narg narg, cl_object v1, ...)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2args;
  ecl_va_list args; ecl_va_start(args,v1,narg,1);
  v2args = cl_grab_rest_args(args);
  ecl_va_end(args);
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, v3, v4);
   T1 = ecl_append(v2args,T0);
   T2 = CONS(ECL_SYM("COMPARE-AND-SWAP-SYMBOL-VALUE",1511),T1);
   T3 = CONS(ECL_SYM("SYMBOL-VALUE",848),v2args);
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T2;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA86                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC15__lambda86(cl_narg narg, cl_object v1, ...)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2args;
  ecl_va_list args; ecl_va_start(args,v1,narg,1);
  v2args = cl_grab_rest_args(args);
  ecl_va_end(args);
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, v3, v4);
   T1 = ecl_append(v2args,T0);
   T2 = CONS(ECL_SYM("COMPARE-AND-SWAP-SYMBOL-PLIST",1510),T1);
   T3 = CONS(ECL_SYM("SYMBOL-PLIST",847),v2args);
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T2;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA90                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC16__lambda90(cl_narg narg, cl_object v1, ...)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2args;
  ecl_va_list args; ecl_va_start(args,v1,narg,1);
  v2args = cl_grab_rest_args(args);
  ecl_va_end(args);
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, v3, v4);
   T1 = ecl_append(v2args,T0);
   T2 = CONS(ECL_SYM("COMPARE-AND-SWAP-SVREF",1512),T1);
   T3 = CONS(ECL_SYM("SVREF",840),v2args);
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T2;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA94                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC17__lambda94(cl_narg narg, cl_object v1, ...)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2args;
  ecl_va_list args; ecl_va_start(args,v1,narg,1);
  v2args = cl_grab_rest_args(args);
  ecl_va_end(args);
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, v3, v4);
   T1 = ecl_append(v2args,T0);
   T2 = CONS(VV[40],T1);
   T3 = CONS(ECL_SYM("SLOT-VALUE",973),v2args);
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T2;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA98                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC18__lambda98(cl_narg narg, cl_object v1, ...)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2args;
  ecl_va_list args; ecl_va_start(args,v1,narg,1);
  v2args = cl_grab_rest_args(args);
  ecl_va_end(args);
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, v3, v4);
   T1 = ecl_append(v2args,T0);
   T2 = CONS(VV[41],T1);
   T3 = CONS(ECL_SYM("STANDARD-INSTANCE-ACCESS",1623),v2args);
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T2;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA102                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC19__lambda102(cl_narg narg, cl_object v1, ...)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2args;
  ecl_va_list args; ecl_va_start(args,v1,narg,1);
  v2args = cl_grab_rest_args(args);
  ecl_va_end(args);
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, v3, v4);
   T1 = ecl_append(v2args,T0);
   T2 = CONS(VV[41],T1);
   T3 = CONS(ECL_SYM("FUNCALLABLE-STANDARD-INSTANCE-ACCESS",1578),v2args);
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T2;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function ATOMIC-UPDATE                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC20atomic_update(cl_object v1, cl_object v2)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4place;
   cl_object v5update_fn;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[62])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4place = v6;
   }
   if (!(v3==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[62])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5update_fn = v6;
   }
   {
    cl_object v6;
    cl_object v7;
    v6 = cl_gensym(0);
    v7 = cl_gensym(0);
    T0 = cl_list(2, v7, v4place);
    T1 = ecl_list1(T0);
    T2 = ecl_list1(v7);
    T3 = ecl_append(v3,T2);
    T4 = cl_listX(3, ECL_SYM("FUNCALL",396), v5update_fn, T3);
    T5 = cl_list(4, VV[39], v4place, v7, v6);
    T6 = cl_list(3, ECL_SYM("SETF",752), v7, T5);
    T7 = cl_list(3, ECL_SYM("EQ",335), v7, T6);
    T8 = cl_list(2, ECL_SYM("RETURN",726), v6);
    T9 = cl_list(9, ECL_SYM("LOOP",514), VV[42], v6, ECL_SYM("=",76), T4, VV[43], T7, VV[44], T8);
    value0 = cl_list(3, ECL_SYM("LET",479), T1, T9);
    return value0;
   }
  }
 }
}
/*      local function ATOMIC-PUSH                                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC21atomic_push(cl_object v1, cl_object v2)
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
   cl_object v4obj;
   cl_object v5place;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[62])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4obj = v6;
   }
   if (!(v3==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[62])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5place = v6;
   }
   if (Null(v3)) { goto L14; }
   ecl_function_dispatch(cl_env_copy,VV[66])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L14:;
   {
    cl_object v6;
    cl_object v7;
    v6 = cl_gensym(0);
    v7 = cl_gensym(0);
    T0 = cl_list(2, v7, v5place);
    T1 = cl_list(3, ECL_SYM("CONS",253), v4obj, v7);
    T2 = cl_list(2, v6, T1);
    T3 = cl_list(2, T0, T2);
    T4 = cl_list(4, VV[39], v5place, v7, v6);
    T5 = cl_list(3, ECL_SYM("SETF",752), v7, T4);
    T6 = cl_list(3, ECL_SYM("EQ",335), v7, T5);
    T7 = cl_list(2, ECL_SYM("CDR",200), v6);
    T8 = cl_list(3, ECL_SYM("SETF",752), T7, v7);
    T9 = cl_list(2, ECL_SYM("RETURN",726), v6);
    T10 = cl_list(7, ECL_SYM("LOOP",514), VV[43], T6, ECL_SYM("DO",309), T8, VV[44], T9);
    value0 = cl_list(3, ECL_SYM("LET*",480), T3, T10);
    return value0;
   }
  }
 }
}
/*      local function ATOMIC-POP                                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC22atomic_pop(cl_object v1, cl_object v2)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4place;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[62])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v5;
    v5 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4place = v5;
   }
   if (Null(v3)) { goto L8; }
   ecl_function_dispatch(cl_env_copy,VV[66])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L8:;
   {
    cl_object v5;
    cl_object v6;
    v5 = cl_gensym(0);
    v6 = cl_gensym(0);
    T0 = cl_list(2, v6, v4place);
    T1 = ecl_list1(T0);
    T2 = cl_list(2, ECL_SYM("CDR",200), v6);
    T3 = cl_list(4, VV[39], v4place, v6, v5);
    T4 = cl_list(3, ECL_SYM("SETF",752), v6, T3);
    T5 = cl_list(3, ECL_SYM("EQ",335), v6, T4);
    T6 = cl_list(3, ECL_SYM("TRULY-THE",2039), ECL_SYM("LIST",483), v6);
    T7 = cl_list(2, ECL_SYM("CAR",182), T6);
    T8 = cl_list(2, ECL_SYM("RETURN",726), T7);
    T9 = cl_list(9, ECL_SYM("LOOP",514), VV[42], v5, ECL_SYM("=",76), T2, VV[43], T5, VV[44], T8);
    value0 = cl_list(3, ECL_SYM("LET*",480), T1, T9);
    return value0;
   }
  }
 }
}
/*      local function ATOMIC-INCF                                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC23atomic_incf(cl_object v1, cl_object v2)
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
   cl_object v4place;
   cl_object v5increment;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[62])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4place = v6;
   }
   if (Null(v3)) { goto L9; }
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5increment = v6;
    goto L8;
   }
L9:;
   v5increment = ecl_make_fixnum(1);
L8:;
   if (Null(v3)) { goto L14; }
   ecl_function_dispatch(cl_env_copy,VV[66])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L14:;
   v4place = cl_macroexpand(1, v4place);
   if (Null(L6special_variable_p(v4place))) { goto L18; }
   T0 = cl_list(2, ECL_SYM("QUOTE",681), v4place);
   v4place = cl_list(2, ECL_SYM("SYMBOL-VALUE",848), T0);
L18:;
   {
    cl_object v6fun;
    if (!(ECL_LISTP(v4place))) { goto L22; }
    {
     cl_object v7;
     v7 = ecl_car(v4place);
     if (!((v7)==(ECL_SYM("CAR",182)))) { goto L30; }
     goto L27;
     goto L28;
L30:;
     goto L28;
L28:;
     if (!((v7)==(ECL_SYM("FIRST",373)))) { goto L25; }
     goto L26;
L27:;
L26:;
     v6fun = ECL_SYM("ATOMIC-INCF-CAR",1515);
     goto L21;
L25:;
     if (!((v7)==(ECL_SYM("CDR",200)))) { goto L38; }
     goto L35;
     goto L36;
L38:;
     goto L36;
L36:;
     if (!((v7)==(ECL_SYM("REST",721)))) { goto L33; }
     goto L34;
L35:;
L34:;
     v6fun = ECL_SYM("ATOMIC-INCF-CDR",1516);
     goto L21;
L33:;
     if (!((v7)==(ECL_SYM("SYMBOL-VALUE",848)))) { goto L41; }
     v6fun = ECL_SYM("ATOMIC-INCF-SYMBOL-VALUE",1517);
     goto L21;
L41:;
     if (!((v7)==(ECL_SYM("SVREF",840)))) { goto L43; }
     v6fun = ECL_SYM("ATOMIC-INCF-SVREF",1518);
     goto L21;
L43:;
     if (!((v7)==(ECL_SYM("SLOT-VALUE",973)))) { goto L45; }
     v6fun = VV[52];
     goto L21;
L45:;
     if (!((v7)==(ECL_SYM("STANDARD-INSTANCE-ACCESS",1623)))) { goto L52; }
     goto L49;
     goto L50;
L52:;
     goto L50;
L50:;
     if (!((v7)==(ECL_SYM("FUNCALLABLE-STANDARD-INSTANCE-ACCESS",1578)))) { goto L47; }
     goto L48;
L49:;
L48:;
     v6fun = VV[55];
     goto L21;
L47:;
     v6fun = ECL_NIL;
     goto L21;
    }
L22:;
    v6fun = ECL_NIL;
L21:;
    if ((v6fun)!=ECL_NIL) { goto L55; }
    cl_error(2, VV[56], v4place);
L55:;
    T0 = ecl_cdr(v4place);
    T1 = ecl_list1(v5increment);
    T2 = ecl_append(T0,T1);
    value0 = CONS(v6fun,T2);
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      local function ATOMIC-DECF                                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC24atomic_decf(cl_object v1, cl_object v2)
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
   cl_object v4place;
   cl_object v5decrement;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[62])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4place = v6;
   }
   if (Null(v3)) { goto L9; }
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5decrement = v6;
    goto L8;
   }
L9:;
   v5decrement = ecl_make_fixnum(1);
L8:;
   if (Null(v3)) { goto L14; }
   ecl_function_dispatch(cl_env_copy,VV[66])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L14:;
   T0 = cl_list(2, ECL_SYM("-",19), v5decrement);
   value0 = cl_list(3, VV[57], v4place, T0);
   return value0;
  }
 }
}

#include "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/build/lsp/mp.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _ecl7B0AIVZ7_WWcZTr51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:LSP;MP.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_ecl7B0AIVZ7_WWcZTr51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  ecl_cmp_defmacro(VV[59]);                       /*  WITHOUT-INTERRUPTS */
  ecl_cmp_defmacro(VV[60]);                       /*  WITH-INTERRUPTS */
  ecl_cmp_defmacro(VV[61]);                       /*  WITH-LOCK       */
  ecl_cmp_defmacro(VV[63]);                       /*  DEFINE-CAS-EXPANDER */
  ecl_cmp_defmacro(VV[65]);                       /*  DEFCAS          */
  (void)0; /* No entry created for SPECIAL-VARIABLE-P */
  ecl_cmp_defun(VV[67]);                          /*  REMCAS          */
  ecl_cmp_defun(VV[68]);                          /*  GET-CAS-EXPANSION */
  ecl_cmp_defmacro(VV[69]);                       /*  COMPARE-AND-SWAP */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object v1package;
   v1package = cl_symbol_package(ECL_SYM("CAR",182));
   if (Null(v1package)) { goto L26; }
   if (Null(si_package_locked_p(v1package))) { goto L26; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L26; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VV[22], VV[23], VVtemp[1], ECL_SYM("PACKAGE",1311), v1package);
  }
L26:;
  {
   cl_object volatile v2;
   v2 = ecl_make_cfun_va((cl_objectfn)LC10__lambda66,ECL_NIL,Cblock,1);
   T0 = v2;
  }
  si_put_sysprop(ECL_SYM("CAR",182), VV[35], T0);
  {
   cl_object v2package;
   v2package = cl_symbol_package(ECL_SYM("FIRST",373));
   if (Null(v2package)) { goto L34; }
   if (Null(si_package_locked_p(v2package))) { goto L34; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L34; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VV[22], VV[23], VVtemp[2], ECL_SYM("PACKAGE",1311), v2package);
  }
L34:;
  {
   cl_object volatile v3;
   v3 = ecl_make_cfun_va((cl_objectfn)LC11__lambda70,ECL_NIL,Cblock,1);
   T0 = v3;
  }
  si_put_sysprop(ECL_SYM("FIRST",373), VV[35], T0);
  {
   cl_object v3package;
   v3package = cl_symbol_package(ECL_SYM("CDR",200));
   if (Null(v3package)) { goto L42; }
   if (Null(si_package_locked_p(v3package))) { goto L42; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L42; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VV[22], VV[23], VVtemp[3], ECL_SYM("PACKAGE",1311), v3package);
  }
L42:;
  {
   cl_object volatile v4;
   v4 = ecl_make_cfun_va((cl_objectfn)LC12__lambda74,ECL_NIL,Cblock,1);
   T0 = v4;
  }
  si_put_sysprop(ECL_SYM("CDR",200), VV[35], T0);
  {
   cl_object v4package;
   v4package = cl_symbol_package(ECL_SYM("REST",721));
   if (Null(v4package)) { goto L50; }
   if (Null(si_package_locked_p(v4package))) { goto L50; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L50; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VV[22], VV[23], VVtemp[4], ECL_SYM("PACKAGE",1311), v4package);
  }
L50:;
  {
   cl_object volatile v5;
   v5 = ecl_make_cfun_va((cl_objectfn)LC13__lambda78,ECL_NIL,Cblock,1);
   T0 = v5;
  }
  si_put_sysprop(ECL_SYM("REST",721), VV[35], T0);
  {
   cl_object v5package;
   v5package = cl_symbol_package(ECL_SYM("SYMBOL-VALUE",848));
   if (Null(v5package)) { goto L58; }
   if (Null(si_package_locked_p(v5package))) { goto L58; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L58; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VV[22], VV[23], VVtemp[5], ECL_SYM("PACKAGE",1311), v5package);
  }
L58:;
  {
   cl_object volatile v6;
   v6 = ecl_make_cfun_va((cl_objectfn)LC14__lambda82,ECL_NIL,Cblock,1);
   T0 = v6;
  }
  si_put_sysprop(ECL_SYM("SYMBOL-VALUE",848), VV[35], T0);
  {
   cl_object v6package;
   v6package = cl_symbol_package(ECL_SYM("SYMBOL-PLIST",847));
   if (Null(v6package)) { goto L66; }
   if (Null(si_package_locked_p(v6package))) { goto L66; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L66; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VV[22], VV[23], VVtemp[6], ECL_SYM("PACKAGE",1311), v6package);
  }
L66:;
  {
   cl_object volatile v7;
   v7 = ecl_make_cfun_va((cl_objectfn)LC15__lambda86,ECL_NIL,Cblock,1);
   T0 = v7;
  }
  si_put_sysprop(ECL_SYM("SYMBOL-PLIST",847), VV[35], T0);
  {
   cl_object v7package;
   v7package = cl_symbol_package(ECL_SYM("SVREF",840));
   if (Null(v7package)) { goto L74; }
   if (Null(si_package_locked_p(v7package))) { goto L74; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L74; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VV[22], VV[23], VVtemp[7], ECL_SYM("PACKAGE",1311), v7package);
  }
L74:;
  {
   cl_object volatile v8;
   v8 = ecl_make_cfun_va((cl_objectfn)LC16__lambda90,ECL_NIL,Cblock,1);
   T0 = v8;
  }
  si_put_sysprop(ECL_SYM("SVREF",840), VV[35], T0);
  {
   cl_object v8package;
   v8package = cl_symbol_package(ECL_SYM("SLOT-VALUE",973));
   if (Null(v8package)) { goto L82; }
   if (Null(si_package_locked_p(v8package))) { goto L82; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L82; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VV[22], VV[23], VVtemp[8], ECL_SYM("PACKAGE",1311), v8package);
  }
L82:;
  {
   cl_object volatile v9;
   v9 = ecl_make_cfun_va((cl_objectfn)LC17__lambda94,ECL_NIL,Cblock,1);
   T0 = v9;
  }
  si_put_sysprop(ECL_SYM("SLOT-VALUE",973), VV[35], T0);
  {
   cl_object v9package;
   v9package = cl_symbol_package(ECL_SYM("STANDARD-INSTANCE-ACCESS",1623));
   if (Null(v9package)) { goto L90; }
   if (Null(si_package_locked_p(v9package))) { goto L90; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L90; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VV[22], VV[23], VVtemp[9], ECL_SYM("PACKAGE",1311), v9package);
  }
L90:;
  {
   cl_object volatile v10;
   v10 = ecl_make_cfun_va((cl_objectfn)LC18__lambda98,ECL_NIL,Cblock,1);
   T0 = v10;
  }
  si_put_sysprop(ECL_SYM("STANDARD-INSTANCE-ACCESS",1623), VV[35], T0);
  {
   cl_object v10package;
   v10package = cl_symbol_package(ECL_SYM("FUNCALLABLE-STANDARD-INSTANCE-ACCESS",1578));
   if (Null(v10package)) { goto L98; }
   if (Null(si_package_locked_p(v10package))) { goto L98; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L98; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VV[22], VV[23], VVtemp[10], ECL_SYM("PACKAGE",1311), v10package);
  }
L98:;
  {
   cl_object volatile v11;
   v11 = ecl_make_cfun_va((cl_objectfn)LC19__lambda102,ECL_NIL,Cblock,1);
   T0 = v11;
  }
  si_put_sysprop(ECL_SYM("FUNCALLABLE-STANDARD-INSTANCE-ACCESS",1578), VV[35], T0);
 }
  ecl_cmp_defmacro(VV[70]);                       /*  ATOMIC-UPDATE   */
  ecl_cmp_defmacro(VV[71]);                       /*  ATOMIC-PUSH     */
  ecl_cmp_defmacro(VV[72]);                       /*  ATOMIC-POP      */
  ecl_cmp_defmacro(VV[73]);                       /*  ATOMIC-INCF     */
  ecl_cmp_defmacro(VV[74]);                       /*  ATOMIC-DECF     */
}
