/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:LSP;PACKLIB.LSP                                   */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/build/lsp/packlib.eclh"
/*      function definition for FIND-ALL-SYMBOLS                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_find_all_symbols(cl_object v1string_or_symbol)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object env1 = env0;
   T0 = cl_string(v1string_or_symbol);
   env1 = ECL_NIL;
   CLV0 = env1 = CONS(T0,env1);                   /*  SYMBOL-NAME     */
   {
    cl_object v2;
    {
     cl_object v3;
     v3 = ecl_make_cclosure_va((cl_objectfn)LC1__lambda5,env1,Cblock,1);
     v2 = v3;
    }
    {
     cl_object v3;
     cl_object v4;
     cl_object v5;
     v3 = cl_list_all_packages();
     v4 = ECL_NIL;
     v5 = v3;
     {
      cl_object v6;
      cl_object v7;
      v6 = ecl_list1(ECL_NIL);
      v7 = v6;
L7:;
      if (!(ecl_endp(v5))) { goto L9; }
      goto L8;
L9:;
      v4 = _ecl_car(v5);
      {
       cl_object v8;
       v8 = _ecl_cdr(v5);
       if (ecl_unlikely(!ECL_LISTP(v8))) FEtype_error_list(v8);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v5 = v8;
      }
      {
       cl_object v8;
       v8 = ecl_function_dispatch(cl_env_copy,v2)(1, v4);
       {
        cl_object v9;
        v9 = v7;
        if (ecl_unlikely(ECL_ATOM(v9))) FEtype_error_cons(v9);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        T0 = v9;
       }
       (ECL_CONS_CDR(T0)=v8,T0);
       if (Null(v8)) { goto L17; }
      }
      T0 = ecl_cdr(v7);
      v7 = ecl_last(T0,1);
L17:;
      goto L7;
L8:;
      value0 = ecl_cdr(v6);
      cl_env_copy->nvalues = 1;
      return value0;
     }
    }
   }
  }
 }
}
/*      closure LAMBDA5                                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC1__lambda5(cl_narg narg, cl_object v1p, ...)
{
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV0 = env0;                                     /*  SYMBOL-NAME     */
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=1)) FEwrong_num_arguments_anonym();
 {
TTL:
  {
   cl_object v3;                                  /*  S               */
   cl_object v4;                                  /*  I               */
   value0 = cl_find_symbol(2, ECL_CONS_CAR(CLV0), v1p);
   {
    v3 = value0;
    v4 = cl_env_copy->values[1];
   }
   if ((v4)==(ECL_SYM("INTERNAL",1284))) { goto L4; }
   if (!((v4)==(ECL_SYM("EXTERNAL",1257)))) { goto L2; }
   goto L3;
L4:;
L3:;
   value0 = ecl_list1(v3);
   cl_env_copy->nvalues = 1;
   return value0;
L2:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
 }
}
/*      function definition for PACKAGES-ITERATOR                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L4packages_iterator(cl_object v1packages, cl_object v2options, cl_object v3maybe_list)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 cl_object CLV0, CLV1, CLV2, CLV3, CLV4;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object env1 = env0;
   env1 = ECL_NIL;
   CLV0 = env1 = CONS(ECL_NIL,env1);              /*  ALL-SYMBOLS     */
   if (ECL_ATOM(v1packages)) { goto L3; }
   if ((v3maybe_list)!=ECL_NIL) { goto L1; }
   goto L2;
L3:;
L2:;
   v1packages = ecl_list1(v1packages);
L1:;
   {
    cl_object v4;
    v4 = v1packages;
    goto L10;
L9:;
    {
     cl_object v5p;
     v5p = ecl_car(v4);
     {
      cl_object v6package;
      v6package = si_coerce_to_package(v5p);
      {
       cl_object v8;                              /*  HASH-EXT        */
       cl_object v9;                              /*  HASH-INT        */
       cl_object v10;                             /*  PACKAGES-USED   */
       value0 = si_package_hash_tables(v6package);
       {
        v8 = value0;
        v9 = cl_env_copy->values[1];
        v10 = cl_env_copy->values[2];
       }
       if (Null(ecl_memql(ECL_SYM("EXTERNAL",1257),v2options))) { goto L17; }
       T0 = cl_list(3, v6package, ECL_SYM("EXTERNAL",1257), v8);
       ECL_CONS_CAR(CLV0) = CONS(T0,ECL_CONS_CAR(CLV0));
L17:;
       if (Null(ecl_memql(ECL_SYM("INTERNAL",1284),v2options))) { goto L20; }
       T0 = cl_list(3, v6package, ECL_SYM("INTERNAL",1284), v9);
       ECL_CONS_CAR(CLV0) = CONS(T0,ECL_CONS_CAR(CLV0));
L20:;
       if (Null(ecl_memql(ECL_SYM("INHERITED",1276),v2options))) { goto L14; }
       {
        cl_object v11;
        v11 = v10;
        goto L27;
L26:;
        {
         cl_object v12p;
         v12p = ecl_car(v11);
         T0 = si_package_hash_tables(v12p);
         T1 = cl_list(3, v6package, ECL_SYM("INHERITED",1276), T0);
         ECL_CONS_CAR(CLV0) = CONS(T1,ECL_CONS_CAR(CLV0));
        }
        v11 = ecl_cdr(v11);
L27:;
        if (Null(v11)) { goto L35; }
        goto L26;
L35:;
       }
      }
     }
L14:;
    }
    v4 = ecl_cdr(v4);
L10:;
    if (Null(v4)) { goto L39; }
    goto L9;
L39:;
   }
   if ((ECL_CONS_CAR(CLV0))!=ECL_NIL) { goto L41; }
   {
    cl_object v4;
    v4 = ecl_make_cfun((cl_objectfn_fixed)LC2__lambda19,ECL_NIL,Cblock,0);
    value0 = v4;
    cl_env_copy->nvalues = 1;
    return value0;
   }
L41:;
   {
    cl_object env2 = env1;
    {
     cl_object v4;
     v4 = ECL_CONS_CAR(CLV0);
     {
      cl_object v5;
      v5 = v4;
      if (ecl_unlikely(!ECL_LISTP(v5))) FEtype_error_list(v5);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
     }
     if (Null(v4)) { goto L48; }
     {
      cl_object v5;
      v5 = ECL_CONS_CDR(v4);
      ECL_CONS_CAR(CLV0) = v5;
      v4 = ECL_CONS_CAR(v4);
     }
L48:;
     T0 = v4;
    }
    CLV1 = env2 = CONS(T0,env2);                  /*  CURRENT         */
    T0 = ecl_car(ECL_CONS_CAR(CLV1));
    CLV2 = env2 = CONS(T0,env2);                  /*  PACKAGE         */
    T0 = ecl_cadr(ECL_CONS_CAR(CLV1));
    CLV3 = env2 = CONS(T0,env2);                  /*  TYPE            */
    T0 = ecl_caddr(ECL_CONS_CAR(CLV1));
    T1 = si_hash_table_iterator(T0);
    CLV4 = env2 = CONS(T1,env2);                  /*  ITERATOR        */
    {
     cl_object v4;
     v4 = ecl_make_cclosure_va((cl_objectfn)LC3iterate,env2,Cblock,0);
     value0 = v4;
     cl_env_copy->nvalues = 1;
     return value0;
    }
   }
  }
 }
}
/*      local function LAMBDA19                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC2__lambda19()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  cl_env_copy->nvalues = 4;
  cl_env_copy->values[3] = ECL_NIL;
  cl_env_copy->values[2] = ECL_NIL;
  cl_env_copy->values[1] = ECL_NIL;
  cl_env_copy->values[0] = ECL_NIL;
  return cl_env_copy->values[0];
 }
}
/*      closure ITERATE                                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC3iterate(cl_narg narg, ...)
{
 cl_object T0;
 cl_object CLV0, CLV1, CLV2, CLV3, CLV4;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV4 = env0;                                     /*  ITERATOR        */
 CLV3 = _ecl_cdr(CLV4);
 CLV2 = _ecl_cdr(CLV3);
 CLV1 = _ecl_cdr(CLV2);
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=0)) FEwrong_num_arguments_anonym();
 {
TTL:
L1:;
  {
   cl_object v2;                                  /*  FOUND           */
   cl_object v3;                                  /*  KEY             */
   cl_object v4;                                  /*  VALUE           */
   value0 = ecl_function_dispatch(cl_env_copy,ECL_CONS_CAR(CLV4))(0);
   {
    const int v5 = cl_env_copy->nvalues;
    v2 = value0;
    cl_object v6;
    v6 = (v5<=1)? ECL_NIL : cl_env_copy->values[1];
    v3 = v6;
    v6 = (v5<=2)? ECL_NIL : cl_env_copy->values[2];
    v4 = v6;
   }
   if (Null(v2)) { goto L4; }
   T0 = ECL_CONS_CAR(CLV3);
   if (!((T0)==(ECL_SYM("INHERITED",1276)))) { goto L6; }
   {
    cl_object v6;                                 /*  S               */
    cl_object v7;                                 /*  ACCESS          */
    T0 = ecl_symbol_name(v4);
    value0 = cl_find_symbol(2, T0, ECL_CONS_CAR(CLV2));
    {
     v6 = value0;
     v7 = cl_env_copy->values[1];
    }
    if (!((v6)==(v4))) { goto L11; }
    if ((v7)==(ECL_CONS_CAR(CLV3))) { goto L6; }
    goto L9;
L11:;
    goto L9;
L9:;
    goto L1;
   }
L6:;
   T0 = ECL_CONS_CAR(CLV3);
   cl_env_copy->nvalues = 4;
   cl_env_copy->values[3] = ECL_CONS_CAR(CLV2);
   cl_env_copy->values[2] = T0;
   cl_env_copy->values[1] = v4;
   cl_env_copy->values[0] = ECL_T;
   return cl_env_copy->values[0];
L4:;
   if (!(ECL_CONS_CAR(CLV0)==ECL_NIL)) { goto L13; }
   cl_env_copy->nvalues = 4;
   cl_env_copy->values[3] = ECL_NIL;
   cl_env_copy->values[2] = ECL_NIL;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
L13:;
   {
    cl_object v5;
    v5 = ECL_CONS_CAR(CLV0);
    {
     cl_object v6;
     v6 = v5;
     if (ecl_unlikely(!ECL_LISTP(v6))) FEtype_error_list(v6);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
    }
    if (Null(v5)) { goto L21; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     ECL_CONS_CAR(CLV0) = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L21:;
    ECL_CONS_CAR(CLV1) = v5;
   }
   ECL_CONS_CAR(CLV2) = ecl_car(ECL_CONS_CAR(CLV1));
   ECL_CONS_CAR(CLV3) = ecl_cadr(ECL_CONS_CAR(CLV1));
   T0 = ecl_caddr(ECL_CONS_CAR(CLV1));
   ECL_CONS_CAR(CLV4) = si_hash_table_iterator(T0);
  }
  goto L1;
 }
 }
}
/*      local function WITH-PACKAGE-ITERATOR                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC5with_package_iterator(cl_object v1, cl_object v2)
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
   cl_object v4;
   cl_object v5;
   cl_object v6iterator;
   cl_object v7package_list;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[24])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v8;
    v8 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4 = v8;
   }
   v5 = v4;
   if (!(v5==ECL_NIL)) { goto L10; }
   ecl_function_dispatch(cl_env_copy,VV[24])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L10:;
   {
    cl_object v8;
    v8 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v6iterator = v8;
   }
   if (!(v5==ECL_NIL)) { goto L16; }
   ecl_function_dispatch(cl_env_copy,VV[24])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L16:;
   {
    cl_object v8;
    v8 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v7package_list = v8;
   }
   if (Null(v5)) { goto L22; }
   {
    cl_object v8aux;
    v8aux = cl_set_difference(2, v5, VV[1]);
    if (Null(v8aux)) { goto L21; }
    T0 = ecl_list1(v8aux);
    si_signal_simple_error(4, ECL_SYM("PROGRAM-ERROR",674), ECL_NIL, VV[2], T0);
    goto L21;
   }
L22:;
   si_signal_simple_error(4, ECL_SYM("PROGRAM-ERROR",674), ECL_NIL, VV[3], ECL_NIL);
L21:;
   T0 = cl_list(2, ECL_SYM("QUOTE",681), v5);
   T1 = cl_list(4, VV[0], v7package_list, T0, ECL_T);
   T2 = cl_list(2, v6iterator, T1);
   T3 = ecl_list1(T2);
   T4 = cl_list(2, ECL_SYM("QUOTE",681), v6iterator);
   T5 = cl_list(3, ECL_SYM("LIST",483), VV[4], T4);
   T6 = cl_list(3, v6iterator, ECL_NIL, T5);
   T7 = ecl_list1(T6);
   T8 = cl_listX(3, ECL_SYM("MACROLET",523), T7, v3);
   value0 = cl_list(3, ECL_SYM("LET",479), T3, T8);
   return value0;
  }
 }
}
/*      function definition for EXPAND-DO-SYMBOLS                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L6expand_do_symbols(cl_object v1var, cl_object v2package, cl_object v3result_form, cl_object v4body, cl_object v5options)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v6i;
   cl_object v7found;
   cl_object v8declaration;
   cl_object v9doc;
   v6i = cl_gensym(0);
   v7found = cl_gensym(0);
   v8declaration = ECL_NIL;
   v9doc = ECL_NIL;
   value0 = ecl_function_dispatch(cl_env_copy,VV[25])(2, v4body, ECL_NIL) /*  FIND-DECLARATIONS */;
   {
    const int v10 = cl_env_copy->nvalues;
    v8declaration = value0;
    cl_object v11;
    v11 = (v10<=1)? ECL_NIL : cl_env_copy->values[1];
    v4body = v11;
    v11 = (v10<=2)? ECL_NIL : cl_env_copy->values[2];
    v9doc = v11;
   }
   T0 = cl_list(2, ECL_SYM("QUOTE",681), v5options);
   T1 = cl_list(4, VV[0], v2package, T0, ECL_T);
   T2 = cl_list(2, v6i, T1);
   T3 = cl_list(3, T2, v7found, v1var);
   T4 = cl_list(2, v7found, v1var);
   T5 = cl_list(2, ECL_SYM("FUNCALL",396), v6i);
   T6 = cl_list(3, ECL_SYM("MULTIPLE-VALUE-SETQ",578), T4, T5);
   T7 = cl_list(2, ECL_SYM("RETURN",726), v3result_form);
   T8 = cl_list(3, ECL_SYM("UNLESS",885), v7found, T7);
   T9 = cl_listX(3, T6, T8, v4body);
   T10 = ecl_append(v8declaration,T9);
   value0 = cl_listX(4, ECL_SYM("DO*",310), T3, VV[6], T10);
   return value0;
  }
 }
}
/*      local function DO-SYMBOLS                                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC7do_symbols(cl_object v1, cl_object v2)
{
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
   cl_object v7package;
   cl_object v8result_form;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[24])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v9;
    v9 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4 = v9;
   }
   v5 = v4;
   if (!(v5==ECL_NIL)) { goto L10; }
   ecl_function_dispatch(cl_env_copy,VV[24])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L10:;
   {
    cl_object v9;
    v9 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v6var = v9;
   }
   if (Null(v5)) { goto L16; }
   {
    cl_object v9;
    v9 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v7package = v9;
    goto L15;
   }
L16:;
   v7package = ECL_SYM("*PACKAGE*",45);
L15:;
   if (Null(v5)) { goto L22; }
   {
    cl_object v9;
    v9 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v8result_form = v9;
    goto L21;
   }
L22:;
   v8result_form = ECL_NIL;
L21:;
   if (Null(v5)) { goto L27; }
   ecl_function_dispatch(cl_env_copy,VV[27])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L27:;
   value0 = L6expand_do_symbols(v6var, v7package, v8result_form, v3, VV[7]);
   return value0;
  }
 }
}
/*      local function DO-EXTERNAL-SYMBOLS                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC8do_external_symbols(cl_object v1, cl_object v2)
{
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
   cl_object v7package;
   cl_object v8result_form;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[24])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v9;
    v9 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4 = v9;
   }
   v5 = v4;
   if (!(v5==ECL_NIL)) { goto L10; }
   ecl_function_dispatch(cl_env_copy,VV[24])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L10:;
   {
    cl_object v9;
    v9 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v6var = v9;
   }
   if (Null(v5)) { goto L16; }
   {
    cl_object v9;
    v9 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v7package = v9;
    goto L15;
   }
L16:;
   v7package = ECL_SYM("*PACKAGE*",45);
L15:;
   if (Null(v5)) { goto L22; }
   {
    cl_object v9;
    v9 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v8result_form = v9;
    goto L21;
   }
L22:;
   v8result_form = ECL_NIL;
L21:;
   if (Null(v5)) { goto L27; }
   ecl_function_dispatch(cl_env_copy,VV[27])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L27:;
   value0 = L6expand_do_symbols(v6var, v7package, v8result_form, v3, VV[9]);
   return value0;
  }
 }
}
/*      local function DO-ALL-SYMBOLS                                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC9do_all_symbols(cl_object v1, cl_object v2)
{
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
   cl_object v7result_form;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[24])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v8;
    v8 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4 = v8;
   }
   v5 = v4;
   if (!(v5==ECL_NIL)) { goto L10; }
   ecl_function_dispatch(cl_env_copy,VV[24])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L10:;
   {
    cl_object v8;
    v8 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v6var = v8;
   }
   if (Null(v5)) { goto L16; }
   {
    cl_object v8;
    v8 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v7result_form = v8;
    goto L15;
   }
L16:;
   v7result_form = ECL_NIL;
L15:;
   if (Null(v5)) { goto L21; }
   ecl_function_dispatch(cl_env_copy,VV[27])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L21:;
   value0 = L6expand_do_symbols(v6var, VV[11], v7result_form, v3, VV[12]);
   return value0;
  }
 }
}
/*      function definition for PRINT-SYMBOL-APROPOS                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L10print_symbol_apropos(cl_object v1symbol)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  ecl_prin1(v1symbol,ECL_NIL);
  if (Null(cl_fboundp(v1symbol))) { goto L2; }
  if (Null(cl_special_operator_p(v1symbol))) { goto L4; }
  ecl_princ(VV[14],ECL_NIL);
  goto L2;
L4:;
  if (Null(cl_macro_function(1, v1symbol))) { goto L6; }
  ecl_princ(VV[15],ECL_NIL);
  goto L2;
L6:;
  ecl_princ(VV[16],ECL_NIL);
L2:;
  if (!(ecl_boundp(cl_env_copy,v1symbol))) { goto L8; }
  if (Null(cl_constantp(1, v1symbol))) { goto L11; }
  ecl_princ(VV[17],ECL_NIL);
  goto L10;
L11:;
  ecl_princ(VV[18],ECL_NIL);
L10:;
  T0 = cl_symbol_value(v1symbol);
  ecl_prin1(T0,ECL_NIL);
L8:;
  value0 = ecl_terpri(ECL_NIL);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for APROPOS                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_apropos(cl_narg narg, cl_object v1string, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2package;
  va_list args; va_start(args,v1string);
  {
   int i = 1;
   if (i >= narg) {
    v2package = ECL_NIL;
   } else {
    i++;
    v2package = va_arg(args,cl_object);
   }
  }
  va_end(args);
  v1string = cl_string(v1string);
  {
   cl_object v3;
   v3 = (VV[19]->symbol.gfdef);
   {
    cl_object v4;
    v4 = cl_apropos_list(2, v1string, v2package);
    {
     cl_object v5;
     cl_object v6;
     v5 = ECL_NIL;
     v6 = v4;
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
     ecl_function_dispatch(cl_env_copy,v3)(1, v5);
     goto L9;
L10:;
     goto L4;
    }
   }
  }
L4:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 0;
  return value0;
 }
}
/*      function definition for APROPOS-LIST                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_apropos_list(cl_narg narg, cl_object v1string, ...)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2package;
  va_list args; va_start(args,v1string);
  {
   int i = 1;
   if (i >= narg) {
    v2package = ECL_NIL;
   } else {
    i++;
    v2package = va_arg(args,cl_object);
   }
  }
  va_end(args);
  T0 = L12apropos_list_inner(v1string, v2package);
  T1 = cl_delete_duplicates(1, T0);
  {
   cl_object v3;
   v3 = ecl_make_cfun((cl_objectfn_fixed)LC11__lambda84,ECL_NIL,Cblock,2);
   T2 = v3;
  }
  value0 = cl_sort(2, T1, T2);
  return value0;
 }
}
/*      local function LAMBDA84                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC11__lambda84(cl_object v1s1, cl_object v2s2)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_prin1_to_string(v1s1);
  T1 = cl_prin1_to_string(v2s2);
  value0 = cl_string_lessp(2, T0, T1);
  return value0;
 }
}
/*      function definition for APROPOS-LIST-INNER                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L12apropos_list_inner(cl_object v1string, cl_object v2package)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3list;
   cl_object v4string;
   v3list = ECL_NIL;
   v4string = cl_string(v1string);
   if (Null(v2package)) { goto L4; }
   {
    cl_object v5;
    v5 = cl_package_use_list(v2package);
    goto L10;
L9:;
    {
     cl_object v6p;
     v6p = ecl_car(v5);
     T0 = L12apropos_list_inner(v4string, v6p);
     v3list = ecl_nconc(T0,v3list);
    }
    v5 = ecl_cdr(v5);
L10:;
    if (Null(v5)) { goto L18; }
    goto L9;
L18:;
   }
   {
    cl_object v5;
    cl_object v6;
    cl_object v7symbol;
    v5 = L4packages_iterator(v2package, VV[7], ECL_T);
    v6 = ECL_NIL;
    v7symbol = ECL_NIL;
    goto L25;
L24:;
    value0 = ecl_function_dispatch(cl_env_copy,v5)(0);
    {
     const int v8 = cl_env_copy->nvalues;
     v6 = value0;
     cl_object v9;
     v9 = (v8<=1)? ECL_NIL : cl_env_copy->values[1];
     v7symbol = v9;
    }
    if ((v6)!=ECL_NIL) { goto L29; }
    goto L3;
L29:;
    T0 = cl_string(v7symbol);
    T1 = (ECL_SYM("CHAR-EQUAL",209)->symbol.gfdef);
    if (Null(cl_search(4, v4string, T0, ECL_SYM("TEST",1343), T1))) { goto L31; }
    v3list = CONS(v7symbol,v3list);
L31:;
L25:;
    goto L24;
    goto L3;
   }
L4:;
   {
    cl_object v8;
    cl_object v9;
    cl_object v10symbol;
    T0 = cl_list_all_packages();
    v8 = L4packages_iterator(T0, VV[12], ECL_T);
    v9 = ECL_NIL;
    v10symbol = ECL_NIL;
    goto L41;
L40:;
    value0 = ecl_function_dispatch(cl_env_copy,v8)(0);
    {
     const int v11 = cl_env_copy->nvalues;
     v9 = value0;
     cl_object v12;
     v12 = (v11<=1)? ECL_NIL : cl_env_copy->values[1];
     v10symbol = v12;
    }
    if ((v9)!=ECL_NIL) { goto L45; }
    goto L3;
L45:;
    T0 = cl_string(v10symbol);
    T1 = (ECL_SYM("CHAR-EQUAL",209)->symbol.gfdef);
    if (Null(cl_search(4, v4string, T0, ECL_SYM("TEST",1343), T1))) { goto L47; }
    v3list = CONS(v10symbol,v3list);
L47:;
L41:;
    goto L40;
   }
L3:;
   value0 = v3list;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for ADD-PACKAGE-LOCAL-NICKNAME            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L13add_package_local_nickname(cl_narg narg, cl_object v1local_nickname, cl_object v2nicknamed_package, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>3)) FEwrong_num_arguments_anonym();
 {
  cl_object v3package;
  va_list args; va_start(args,v2nicknamed_package);
  {
   int i = 2;
   if (i >= narg) {
    v3package = ecl_symbol_value(ECL_SYM("*PACKAGE*",45));
   } else {
    i++;
    v3package = va_arg(args,cl_object);
   }
  }
  va_end(args);
  value0 = si_add_package_local_nickname(v1local_nickname, v2nicknamed_package, v3package);
  return value0;
 }
}
/*      function definition for REMOVE-PACKAGE-LOCAL-NICKNAME         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L14remove_package_local_nickname(cl_narg narg, cl_object v1old_nickname, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2package;
  va_list args; va_start(args,v1old_nickname);
  {
   int i = 1;
   if (i >= narg) {
    v2package = ecl_symbol_value(ECL_SYM("*PACKAGE*",45));
   } else {
    i++;
    v2package = va_arg(args,cl_object);
   }
  }
  va_end(args);
  value0 = si_remove_package_local_nickname(v1old_nickname, v2package);
  return value0;
 }
}

#include "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/build/lsp/packlib.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _ecl2sSUinZ7_AgYZTr51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:LSP;PACKLIB.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_ecl2sSUinZ7_AgYZTr51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  (void)0; /* No entry created for FIND-ALL-SYMBOLS */
  ecl_cmp_defun(VV[22]);                          /*  PACKAGES-ITERATOR */
  ecl_cmp_defmacro(VV[23]);                       /*  WITH-PACKAGE-ITERATOR */
  (void)0; /* No entry created for EXPAND-DO-SYMBOLS */
  ecl_cmp_defmacro(VV[26]);                       /*  DO-SYMBOLS      */
  ecl_cmp_defmacro(VV[28]);                       /*  DO-EXTERNAL-SYMBOLS */
  ecl_cmp_defmacro(VV[29]);                       /*  DO-ALL-SYMBOLS  */
  ecl_cmp_defun(VV[30]);                          /*  PRINT-SYMBOL-APROPOS */
  (void)0; /* No entry created for APROPOS */
  (void)0; /* No entry created for APROPOS-LIST */
  (void)0; /* No entry created for APROPOS-LIST-INNER */
  ecl_cmp_defun(VV[31]);                          /*  ADD-PACKAGE-LOCAL-NICKNAME */
  ecl_cmp_defun(VV[32]);                          /*  REMOVE-PACKAGE-LOCAL-NICKNAME */
}
