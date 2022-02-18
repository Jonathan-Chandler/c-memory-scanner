/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:LSP;CMUUTIL.LSP                                   */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/lsp/cmuutil.eclh"
/*      function definition for COLLECT-NORMAL-EXPANDER               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L2collect_normal_expander(cl_object v1n_value, cl_object v2fun, cl_object v3forms)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  env0 = ECL_NIL;
  CLV0 = env0 = CONS(v1n_value,env0);             /*  N-VALUE         */
  CLV1 = env0 = CONS(v2fun,env0);                 /*  FUN             */
  {
   cl_object v4;
   {
    cl_object v5;
    v5 = ecl_make_cclosure_va((cl_objectfn)LC1__lambda5,env0,Cblock,1);
    v4 = v5;
   }
   {
    cl_object v5;
    cl_object v6;
    v5 = ECL_NIL;
    {
     cl_object v7;
     v7 = v3forms;
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
L9:;
     if (!(ecl_endp(v6))) { goto L11; }
     goto L10;
L11:;
     v5 = _ecl_car(v6);
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
      T1 = v9;
     }
     T2 = ecl_function_dispatch(cl_env_copy,v4)(1, v5);
     v8 = ecl_list1(T2);
     (ECL_CONS_CDR(T1)=v8,T1);
     goto L9;
L10:;
     T0 = ecl_cdr(v7);
     goto L1;
    }
   }
  }
L1:;
  T1 = ecl_list1(ECL_CONS_CAR(CLV0));
  T2 = ecl_append(T0,T1);
  value0 = CONS(ECL_SYM("PROGN",673),T2);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      closure LAMBDA5                                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC1__lambda5(cl_narg narg, cl_object v1form, ...)
{
 cl_object T0;
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV1 = env0;                                     /*  FUN             */
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=1)) FEwrong_num_arguments_anonym();
 {
TTL:
  T0 = cl_list(3, ECL_CONS_CAR(CLV1), v1form, ECL_CONS_CAR(CLV0));
  value0 = cl_list(3, ECL_SYM("SETQ",753), ECL_CONS_CAR(CLV0), T0);
  return value0;
 }
 }
}
/*      function definition for COLLECT-LIST-EXPANDER                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L4collect_list_expander(cl_object v1n_value, cl_object v2n_tail, cl_object v3forms)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 cl_object CLV0, CLV1, CLV2;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  env0 = ECL_NIL;
  CLV0 = env0 = CONS(v1n_value,env0);             /*  N-VALUE         */
  CLV1 = env0 = CONS(v2n_tail,env0);              /*  N-TAIL          */
  {
   cl_object env1 = env0;
   T0 = cl_gensym(0);
   CLV2 = env1 = CONS(T0,env1);                   /*  N-RES           */
   {
    cl_object v4;
    {
     cl_object v5;
     v5 = ecl_make_cclosure_va((cl_objectfn)LC3__lambda13,env1,Cblock,1);
     v4 = v5;
    }
    {
     cl_object v5;
     cl_object v6;
     v5 = ECL_NIL;
     {
      cl_object v7;
      v7 = v3forms;
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
L9:;
      if (!(ecl_endp(v6))) { goto L11; }
      goto L10;
L11:;
      v5 = _ecl_car(v6);
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
       T1 = v9;
      }
      T2 = ecl_function_dispatch(cl_env_copy,v4)(1, v5);
      v8 = ecl_list1(T2);
      (ECL_CONS_CDR(T1)=v8,T1);
      goto L9;
L10:;
      T0 = ecl_cdr(v7);
      goto L1;
     }
    }
   }
L1:;
   T1 = ecl_list1(ECL_CONS_CAR(CLV0));
   T2 = ecl_append(T0,T1);
   value0 = CONS(ECL_SYM("PROGN",673),T2);
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      closure LAMBDA13                                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC3__lambda13(cl_narg narg, cl_object v1form, ...)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9;
 cl_object CLV0, CLV1, CLV2;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV2 = env0;                                     /*  N-RES           */
 CLV1 = _ecl_cdr(CLV2);
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=1)) FEwrong_num_arguments_anonym();
 {
TTL:
  T0 = cl_list(3, ECL_SYM("CONS",253), v1form, ECL_NIL);
  T1 = cl_list(2, ECL_CONS_CAR(CLV2), T0);
  T2 = ecl_list1(T1);
  T3 = cl_list(2, ECL_SYM("CDR",200), ECL_CONS_CAR(CLV1));
  T4 = cl_list(3, ECL_SYM("SETF",752), T3, ECL_CONS_CAR(CLV2));
  T5 = cl_list(3, ECL_SYM("SETQ",753), ECL_CONS_CAR(CLV1), ECL_CONS_CAR(CLV2));
  T6 = cl_list(3, ECL_CONS_CAR(CLV1), T4, T5);
  T7 = cl_list(5, ECL_SYM("SETQ",753), ECL_CONS_CAR(CLV1), ECL_CONS_CAR(CLV2), ECL_CONS_CAR(CLV0), ECL_CONS_CAR(CLV2));
  T8 = cl_list(2, ECL_T, T7);
  T9 = cl_list(3, ECL_SYM("COND",249), T6, T8);
  value0 = cl_list(3, ECL_SYM("LET",479), T2, T9);
  return value0;
 }
 }
}
/*      local function COLLECT                                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC5collect(cl_object v1, cl_object v2)
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
   cl_object v4collections;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[19])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v5;
    v5 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4collections = v5;
   }
   {
    cl_object v5macros;
    cl_object v6binds;
    v5macros = ECL_NIL;
    v6binds = ECL_NIL;
    {
     cl_object v7;
     v7 = v4collections;
     goto L14;
L13:;
     {
      cl_object v8spec;
      v8spec = ecl_car(v7);
      if (!(ECL_ATOM(v8spec))) { goto L19; }
      v8spec = ecl_list1(v8spec);
      goto L18;
L19:;
      {
       cl_fixnum v9;
       v9 = ecl_length(v8spec);
       if (((1)<=(v9) && (v9)<=(3))) { goto L18; }
      }
      cl_error(2, VV[2], v8spec);
L18:;
      {
       cl_object v9;
       cl_object v10;
       cl_object v11;
       cl_object v12;
       v9 = cl_gensym(0);
       v10 = ecl_car(v8spec);
       v11 = ecl_cadr(v8spec);
       value0 = ecl_caddr(v8spec);
       if ((value0)!=ECL_NIL) { goto L29; }
       v12 = ECL_SYM("COLLECT",1795);
       goto L27;
L29:;
       v12 = value0;
       goto L27;
L27:;
       T0 = cl_list(2, v9, v11);
       v6binds = CONS(T0,v6binds);
       if (!((v12)==(ECL_SYM("COLLECT",1795)))) { goto L33; }
       {
        cl_object v13n_tail;
        v13n_tail = cl_gensym(0);
        if (Null(v11)) { goto L37; }
        T0 = cl_list(2, ECL_SYM("LAST",457), v9);
        T1 = cl_list(2, v13n_tail, T0);
        v6binds = CONS(T1,v6binds);
        goto L36;
L37:;
        v6binds = CONS(v13n_tail,v6binds);
L36:;
        T0 = cl_list(2, ECL_SYM("QUOTE",681), v9);
        T1 = cl_list(2, ECL_SYM("QUOTE",681), v13n_tail);
        T2 = cl_list(4, VV[1], T0, T1, VV[4]);
        T3 = cl_list(3, v10, VV[3], T2);
        v5macros = CONS(T3,v5macros);
        goto L23;
       }
L33:;
       T0 = cl_list(2, ECL_SYM("QUOTE",681), v9);
       T1 = cl_list(2, ECL_SYM("QUOTE",681), v12);
       T2 = cl_list(4, VV[0], T0, T1, VV[4]);
       T3 = cl_list(3, v10, VV[3], T2);
       v5macros = CONS(T3,v5macros);
      }
L23:;
     }
     v7 = ecl_cdr(v7);
L14:;
     if (Null(v7)) { goto L45; }
     goto L13;
L45:;
    }
    T0 = cl_nreverse(v6binds);
    T1 = cl_listX(3, ECL_SYM("LET*",480), T0, v3);
    value0 = cl_list(3, ECL_SYM("MACROLET",523), v5macros, T1);
    return value0;
   }
  }
 }
}
/*      local function ONCE-ONLY                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC7once_only(cl_object v1, cl_object v2)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4specs;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[19])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v5;
    v5 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4specs = v5;
   }
   value0 = LC6frob(v4specs, v3);
   return value0;
  }
 }
}
/*      local function FROB                                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC6frob(cl_object v1specs, cl_object v2body)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(v1specs==ECL_NIL)) { goto L1; }
  value0 = CONS(ECL_SYM("PROGN",673),v2body);
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  {
   cl_object v3spec;
   v3spec = ecl_car(v1specs);
   if (!(ECL_ATOM(v3spec))) { goto L5; }
   v3spec = cl_list(2, v3spec, v3spec);
   goto L4;
L5:;
   {
    cl_fixnum v4;
    v4 = ecl_length(v3spec);
    if (!((v4)!=(2))) { goto L4; }
   }
   cl_error(2, VV[6], v3spec);
L4:;
   {
    cl_object v4;
    cl_object v5;
    v4 = ecl_car(v3spec);
    v5 = cl_gensym(0);
    T0 = ecl_cadr(v3spec);
    T1 = cl_list(2, v5, T0);
    T2 = cl_list(2, v4, VV[7]);
    T3 = cl_list(2, T1, T2);
    T4 = cl_list(3, ECL_SYM("LIST",483), v4, v5);
    T5 = cl_list(2, ECL_SYM("LIST",483), T4);
    T7 = ecl_cdr(v1specs);
    T6 = LC6frob(T7, v2body);
    T7 = cl_list(4, ECL_SYM("LIST",483), VV[8], T5, T6);
    value0 = cl_list(3, ECL_SYM("LET",479), T3, T7);
    return value0;
   }
  }
 }
}
/*      local function WITH-UNIQUE-NAMES                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC9with_unique_names(cl_object v1, cl_object v2)
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
   cl_object v4symbols;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[19])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v5;
    v5 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4symbols = v5;
   }
   {
    cl_object v5;
    {
     cl_object v6;
     v6 = ecl_make_cfun((cl_objectfn_fixed)LC8__lambda114,ECL_NIL,Cblock,1);
     v5 = v6;
    }
    {
     cl_object v6;
     cl_object v7;
     v6 = ECL_NIL;
     {
      cl_object v8;
      v8 = v4symbols;
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
L16:;
      if (!(ecl_endp(v7))) { goto L18; }
      goto L17;
L18:;
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
       T1 = v10;
      }
      T2 = ecl_function_dispatch(cl_env_copy,v5)(1, v6);
      v9 = ecl_list1(T2);
      (ECL_CONS_CDR(T1)=v9,T1);
      goto L16;
L17:;
      T0 = ecl_cdr(v8);
      goto L8;
     }
    }
   }
L8:;
   value0 = cl_listX(3, ECL_SYM("LET*",480), T0, v3);
   return value0;
  }
 }
}
/*      local function LAMBDA114                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC8__lambda114(cl_object v1symbol)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2symbol_name;
   v2symbol_name = ecl_symbol_name(v1symbol);
   T0 = cl_list(2, ECL_SYM("GENSYM",402), v2symbol_name);
   value0 = cl_list(2, v1symbol, T0);
   return value0;
  }
 }
}
/*      local function WITH-GENSYMS                                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC10with_gensyms(cl_object v1, cl_object v2)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4symbols;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[19])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v5;
    v5 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4symbols = v5;
   }
   value0 = cl_listX(3, VV[10], v4symbols, v3);
   return value0;
  }
 }
}
/*      local function WITH-CLEAN-SYMBOLS                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC12with_clean_symbols(cl_object v1, cl_object v2)
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
   cl_object v4symbols;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[19])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v5;
    v5 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4symbols = v5;
   }
   {
    cl_object v5;
    {
     cl_object v6;
     v6 = ecl_make_cfun((cl_objectfn_fixed)LC11__lambda136,ECL_NIL,Cblock,1);
     v5 = v6;
    }
    {
     cl_object v6;
     cl_object v7;
     v6 = ECL_NIL;
     {
      cl_object v8;
      v8 = v4symbols;
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
L16:;
      if (!(ecl_endp(v7))) { goto L18; }
      goto L17;
L18:;
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
       T1 = v10;
      }
      T2 = ecl_function_dispatch(cl_env_copy,v5)(1, v6);
      v9 = ecl_list1(T2);
      (ECL_CONS_CDR(T1)=v9,T1);
      goto L16;
L17:;
      T0 = ecl_cdr(v8);
      goto L8;
     }
    }
   }
L8:;
   T1 = cl_sublis(2, T0, v3);
   value0 = CONS(ECL_SYM("PROGN",673),T1);
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function LAMBDA136                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC11__lambda136(cl_object v1s)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_symbol_name(v1s);
  T1 = cl_make_symbol(T0);
  value0 = CONS(v1s,T1);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function IF-LET                                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC13if_let(cl_object v1, cl_object v2)
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
   cl_object v4bindings;
   cl_object v5;
   cl_object v6then_form;
   cl_object v7else_form;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[19])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v8;
    v8 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4bindings = v8;
   }
   v5 = v3;
   if (!(v5==ECL_NIL)) { goto L10; }
   ecl_function_dispatch(cl_env_copy,VV[19])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L10:;
   {
    cl_object v8;
    v8 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v6then_form = v8;
   }
   if (Null(v5)) { goto L16; }
   {
    cl_object v8;
    v8 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v7else_form = v8;
    goto L15;
   }
L16:;
   v7else_form = ECL_NIL;
L15:;
   if (Null(v5)) { goto L21; }
   ecl_function_dispatch(cl_env_copy,VV[25])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L21:;
   {
    cl_object v8binding_list;
    cl_object v9variables;
    if (!(ECL_CONSP(v4bindings))) { goto L24; }
    T0 = ecl_car(v4bindings);
    if (!(ECL_SYMBOLP(T0))) { goto L24; }
    v8binding_list = ecl_list1(v4bindings);
    goto L23;
L24:;
    v8binding_list = v4bindings;
L23:;
    {
     cl_object v10;
     v10 = (ECL_SYM("CAR",182)->symbol.gfdef);
     {
      cl_object v11;
      cl_object v12;
      v11 = ECL_NIL;
      {
       cl_object v13;
       v13 = v8binding_list;
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
L35:;
       if (!(ecl_endp(v12))) { goto L37; }
       goto L36;
L37:;
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
       goto L35;
L36:;
       v9variables = ecl_cdr(v13);
       goto L27;
      }
     }
    }
L27:;
    T0 = CONS(ECL_SYM("AND",89),v9variables);
    T1 = cl_list(4, ECL_SYM("IF",948), T0, v6then_form, v7else_form);
    value0 = cl_list(3, ECL_SYM("LET",479), v8binding_list, T1);
    return value0;
   }
  }
 }
}
/*      local function WHEN-LET                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC14when_let(cl_object v1, cl_object v2)
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
   cl_object v4bindings;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[19])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v5;
    v5 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4bindings = v5;
   }
   T0 = CONS(ECL_SYM("PROGN",673),v3);
   value0 = cl_list(3, VV[13], v4bindings, T0);
   return value0;
  }
 }
}
/*      local function WHEN-LET*                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC16when_let_(cl_object v1, cl_object v2)
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
   cl_object v4bindings;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[19])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v5;
    v5 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4bindings = v5;
   }
   {
    cl_object v5binding_list;
    if (!(ECL_CONSP(v4bindings))) { goto L9; }
    T0 = ecl_car(v4bindings);
    if (!(ECL_SYMBOLP(T0))) { goto L9; }
    v5binding_list = ecl_list1(v4bindings);
    goto L8;
L9:;
    v5binding_list = v4bindings;
L8:;
    T0 = ecl_car(v5binding_list);
    T1 = ecl_list1(T0);
    T2 = ecl_caar(v5binding_list);
    T4 = ecl_cdr(v5binding_list);
    T3 = LC15bind(T4, v3);
    T4 = cl_listX(3, ECL_SYM("WHEN",907), T2, T3);
    value0 = cl_list(3, ECL_SYM("LET",479), T1, T4);
    return value0;
   }
  }
 }
}
/*      local function BIND                                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC15bind(cl_object v1bindings, cl_object v2body)
{
 cl_object T0, T1, T2, T3, T4, T5;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(v1bindings)) { goto L1; }
  T0 = ecl_car(v1bindings);
  T1 = ecl_list1(T0);
  T2 = ecl_caar(v1bindings);
  T4 = ecl_cdr(v1bindings);
  T3 = LC15bind(T4, v2body);
  T4 = cl_listX(3, ECL_SYM("WHEN",907), T2, T3);
  T5 = cl_list(3, ECL_SYM("LET",479), T1, T4);
  value0 = ecl_list1(T5);
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  value0 = v2body;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}

#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/lsp/cmuutil.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclA6w4AJb7_wT6mqq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:LSP;CMUUTIL.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclA6w4AJb7_wT6mqq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  ecl_cmp_defun(VV[16]);                          /*  COLLECT-NORMAL-EXPANDER */
  ecl_cmp_defun(VV[17]);                          /*  COLLECT-LIST-EXPANDER */
  ecl_cmp_defmacro(VV[18]);                       /*  COLLECT         */
  ecl_cmp_defmacro(VV[20]);                       /*  ONCE-ONLY       */
  ecl_cmp_defmacro(VV[21]);                       /*  WITH-UNIQUE-NAMES */
  ecl_cmp_defmacro(VV[22]);                       /*  WITH-GENSYMS    */
  ecl_cmp_defmacro(VV[23]);                       /*  WITH-CLEAN-SYMBOLS */
  ecl_cmp_defmacro(VV[24]);                       /*  IF-LET          */
  ecl_cmp_defmacro(VV[26]);                       /*  WHEN-LET        */
  ecl_cmp_defmacro(VV[27]);                       /*  WHEN-LET*       */
}
