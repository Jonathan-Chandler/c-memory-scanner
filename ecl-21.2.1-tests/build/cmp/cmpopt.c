/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CMP;CMPOPT.LSP                                    */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/cmp/cmpopt.eclh"
/*      function definition for EXPAND-IN-INTERVAL-P                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L1expand_in_interval_p(cl_object v1var, cl_object v2interval)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3forms;
   v3forms = ECL_NIL;
   {
    cl_object v4;
    cl_object v5lower_limit;
    cl_object v6upper_limit;
    v4 = v2interval;
    if (Null(v4)) { goto L5; }
    {
     cl_object v7;
     v7 = ecl_car(v4);
     v4 = ecl_cdr(v4);
     v5lower_limit = v7;
     goto L4;
    }
L5:;
    v5lower_limit = ECL_SYM("*",20);
L4:;
    if (Null(v4)) { goto L11; }
    {
     cl_object v7;
     v7 = ecl_car(v4);
     v4 = ecl_cdr(v4);
     v6upper_limit = v7;
     goto L10;
    }
L11:;
    v6upper_limit = ECL_SYM("*",20);
L10:;
    if (Null(v4)) { goto L16; }
    ecl_function_dispatch(cl_env_copy,VV[31])(1, v2interval) /*  DM-TOO-MANY-ARGUMENTS */;
L16:;
    if ((v5lower_limit)==(ECL_SYM("*",20))) { goto L18; }
    if (!(ECL_CONSP(v5lower_limit))) { goto L22; }
    T1 = ecl_car(v5lower_limit);
    T0 = cl_list(3, ECL_SYM(">",77), v1var, T1);
    goto L21;
L22:;
    T0 = cl_list(3, ECL_SYM(">=",78), v1var, v5lower_limit);
L21:;
    v3forms = CONS(T0,v3forms);
L18:;
    if ((v6upper_limit)==(ECL_SYM("*",20))) { goto L2; }
    if (!(ECL_CONSP(v6upper_limit))) { goto L27; }
    T1 = ecl_car(v6upper_limit);
    T0 = cl_list(3, ECL_SYM("<",74), v1var, T1);
    goto L26;
L27:;
    T0 = cl_list(3, ECL_SYM("<=",75), v1var, v6upper_limit);
L26:;
    v3forms = CONS(T0,v3forms);
   }
L2:;
   value0 = v3forms;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for EXPAND-TYPEP                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L2expand_typep(cl_object v1form, cl_object v2object, cl_object v3type, cl_object v4env)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v5aux;
   cl_object v6first;
   cl_object v7rest;
   cl_object v8function;
   v5aux = ECL_NIL;
   v6first = ECL_NIL;
   v7rest = ECL_NIL;
   v8function = ECL_NIL;
   if (Null(cl_constantp(2, v3type, v4env))) { goto L6; }
   v3type = ecl_function_dispatch(cl_env_copy,ECL_SYM("CONSTANT-FORM-VALUE",2118))(2, v3type, v4env) /*  CONSTANT-FORM-VALUE */;
   goto L5;
L6:;
   value0 = v1form;
   cl_env_copy->nvalues = 1;
   return value0;
L5:;
   if (!(ECL_SYMBOLP(v2object))) { goto L9; }
   v5aux = ecl_function_dispatch(cl_env_copy,VV[33])(2, v2object, v4env) /*  CMP-ENV-SEARCH-VAR */;
   if (Null(v5aux)) { goto L9; }
   T0 = ecl_function_dispatch(cl_env_copy,VV[34])(1, v5aux) /*  VAR-TYPE */;
   if (Null(cl_subtypep(2, T0, v3type))) { goto L9; }
   value0 = ECL_T;
   cl_env_copy->nvalues = 1;
   return value0;
L9:;
   if (Null(cl_subtypep(2, ECL_T, v3type))) { goto L14; }
   value0 = ECL_T;
   cl_env_copy->nvalues = 1;
   return value0;
L14:;
   if (!((v3type)==(ECL_NIL))) { goto L16; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L16:;
   if (Null(cl_subtypep(2, v3type, ECL_NIL))) { goto L18; }
   ecl_function_dispatch(cl_env_copy,VV[35])(2, VV[0], v3type) /*  CMPWARN */;
   value0 = v1form;
   cl_env_copy->nvalues = 1;
   return value0;
L18:;
   v8function = si_get_sysprop(v3type, VV[1]);
   if (Null(v8function)) { goto L21; }
   value0 = cl_list(2, v8function, v2object);
   return value0;
L21:;
   {
    cl_object v9;
    {
     cl_object v10;
     cl_object v11a_type;
     cl_object v12function_name;
     cl_object v13;
     v10 = ecl_symbol_value(VV[2]);
     v11a_type = ECL_NIL;
     v12function_name = ECL_NIL;
     {
      cl_object v14;
      v14 = v10;
      value0 = ecl_make_bool(ECL_LISTP(v14));
      if ((value0)!=ECL_NIL) { goto L33; }
      T0 = ecl_make_bool(ECL_SYMBOLP(v14));
      goto L31;
L33:;
      T0 = value0;
      goto L31;
L31:;
      if (ecl_unlikely(!((T0)!=ECL_NIL)))
         FEwrong_type_argument(VV[3],v14);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v13 = v14;
     }
L35:;
     {
      cl_object v14;
      v14 = _ecl_car(v13);
      v11a_type = ecl_car(v14);
      v14 = ecl_cdr(v14);
      v12function_name = v14;
     }
     {
      cl_object v14;
      v14 = _ecl_cdr(v13);
      value0 = ecl_make_bool(ECL_LISTP(v14));
      if ((value0)!=ECL_NIL) { goto L50; }
      T0 = ecl_make_bool(ECL_SYMBOLP(v14));
      goto L48;
L50:;
      T0 = value0;
      goto L48;
L48:;
      if (ecl_unlikely(!((T0)!=ECL_NIL)))
         FEwrong_type_argument(VV[3],v14);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v13 = v14;
     }
     if (Null(ecl_function_dispatch(cl_env_copy,VV[36])(2, v3type, v11a_type) /*  TYPE= */)) { goto L52; }
     v9 = cl_list(2, v12function_name, v2object);
     goto L24;
L52:;
     if (!(ecl_endp(v13))) { goto L54; }
     goto L36;
L54:;
     goto L35;
L36:;
     v9 = ECL_NIL;
    }
L24:;
    if (Null(v9)) { goto L57; }
    value0 = v9;
    cl_env_copy->nvalues = 1;
    return value0;
L57:;
    if (!(ECL_ATOM(v3type))) { goto L59; }
    v8function = si_get_sysprop(v3type, VV[4]);
    if (Null(v8function)) { goto L59; }
    T0 = ecl_function_dispatch(cl_env_copy,v8function)(1, ECL_NIL);
    v3type = cl_list(2, ECL_SYM("QUOTE",681), T0);
    goto TTL;
L59:;
    if ((ecl_function_dispatch(cl_env_copy,VV[37])(0) /*  POLICY-INLINE-TYPE-CHECKS */)!=ECL_NIL) { goto L69; }
    value0 = v1form;
    cl_env_copy->nvalues = 1;
    return value0;
L69:;
    if (!(ECL_CONSP(v3type))) { goto L71; }
    T0 = ecl_car(v3type);
    if (!((T0)==(ECL_SYM("CONS",253)))) { goto L71; }
    value0 = v1form;
    cl_env_copy->nvalues = 1;
    return value0;
L71:;
    if (!(ECL_SYMBOLP(v3type))) { goto L74; }
    v5aux = cl_find_class(2, v3type, ECL_NIL);
    if (Null(v5aux)) { goto L74; }
    T0 = cl_list(2, ECL_SYM("QUOTE",681), v3type);
    value0 = cl_list(3, ECL_SYM("OF-CLASS-P",1201), v2object, T0);
    return value0;
L74:;
    if (!(ECL_ATOM(v3type))) { goto L78; }
    value0 = v1form;
    cl_env_copy->nvalues = 1;
    return value0;
L78:;
    v7rest = ecl_cdr(v3type);
    v6first = ecl_car(v3type);
    if (!((v6first)==(ECL_SYM("NOT",586)))) { goto L80; }
    T0 = ecl_car(v7rest);
    T1 = cl_list(2, ECL_SYM("QUOTE",681), T0);
    T2 = cl_list(3, ECL_SYM("TYPEP",877), v2object, T1);
    value0 = cl_list(2, ECL_SYM("NOT",586), T2);
    return value0;
L80:;
    if (!((v6first)==(ECL_SYM("OR",616)))) { goto L91; }
    goto L88;
    goto L89;
L91:;
    goto L89;
L89:;
    if (!((v6first)==(ECL_SYM("AND",89)))) { goto L86; }
    goto L87;
L88:;
L87:;
    {
     cl_object v10var;
     v10var = cl_gensym(0);
     T0 = cl_list(2, v10var, v2object);
     T1 = ecl_list1(T0);
     T2 = cl_list(2, VV[7], v10var);
     T3 = cl_list(2, ECL_SYM("DECLARE",276), T2);
     {
      cl_object v11type;
      cl_object v12;
      v11type = ECL_NIL;
      {
       cl_object v13;
       v13 = v7rest;
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
L102:;
       if (!(ecl_endp(v12))) { goto L104; }
       goto L103;
L104:;
       v11type = _ecl_car(v12);
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
        T5 = v15;
       }
       T6 = cl_list(2, ECL_SYM("QUOTE",681), v11type);
       T7 = cl_list(3, ECL_SYM("TYPEP",877), v10var, T6);
       v14 = ecl_list1(T7);
       (ECL_CONS_CDR(T5)=v14,T5);
       goto L102;
L103:;
       T4 = ecl_cdr(v13);
       goto L95;
      }
     }
L95:;
     T5 = CONS(v6first,T4);
     value0 = cl_list(4, ECL_SYM("LET",479), T1, T3, T5);
     return value0;
    }
L86:;
    if (!((v6first)==(ECL_SYM("MEMBER",554)))) { goto L119; }
    T0 = cl_list(2, ECL_SYM("QUOTE",681), v7rest);
    value0 = cl_list(3, ECL_SYM("MEMBER",554), v2object, T0);
    return value0;
L119:;
    if (Null(ecl_memql(v6first,VV[8]))) { goto L121; }
    {
     cl_object v11;
     cl_object v12;
     v11 = cl_gensym(0);
     v12 = cl_gensym(0);
     if (!((v6first)==(ECL_SYM("INTEGER",439)))) { goto L125; }
     if (Null(cl_subtypep(2, v3type, ECL_SYM("FIXNUM",374)))) { goto L125; }
     v6first = ECL_SYM("FIXNUM",374);
L125:;
     T0 = cl_list(2, v11, v2object);
     T1 = cl_coerce(ecl_make_fixnum(0), v6first);
     T2 = cl_list(2, v12, T1);
     T3 = cl_list(2, T0, T2);
     T4 = cl_list(2, VV[7], v11);
     T5 = cl_list(3, ECL_SYM("TYPE",871), v6first, v12);
     T6 = cl_list(3, ECL_SYM("DECLARE",276), T4, T5);
     T7 = cl_list(2, ECL_SYM("QUOTE",681), v6first);
     T8 = cl_list(3, ECL_SYM("TYPEP",877), v11, T7);
     T9 = cl_list(3, ECL_SYM("TRULY-THE",2039), v6first, v11);
     T10 = cl_list(3, ECL_SYM("SETF",752), v12, T9);
     T11 = L1expand_in_interval_p(v12, v7rest);
     T12 = CONS(ECL_SYM("AND",89),T11);
     T13 = cl_list(4, ECL_SYM("LOCALLY",492), VV[9], T10, T12);
     T14 = cl_list(3, ECL_SYM("AND",89), T8, T13);
     value0 = cl_list(4, ECL_SYM("LET",479), T3, T6, T14);
     return value0;
    }
L121:;
    if (!((v6first)==(ECL_SYM("COMPLEX",243)))) { goto L129; }
    T0 = cl_list_length(v3type);
    if (!(ecl_number_equalp(T0,ecl_make_fixnum(2)))) { goto L129; }
    T0 = cl_list(2, ECL_SYM("REALPART",707), v2object);
    T1 = ecl_cadr(v3type);
    T2 = cl_list(2, ECL_SYM("QUOTE",681), T1);
    T3 = cl_list(3, ECL_SYM("TYPEP",877), T0, T2);
    T4 = cl_list(2, ECL_SYM("IMAGPART",432), v2object);
    T5 = ecl_cadr(v3type);
    T6 = cl_list(2, ECL_SYM("QUOTE",681), T5);
    T7 = cl_list(3, ECL_SYM("TYPEP",877), T4, T6);
    value0 = cl_list(3, ECL_SYM("AND",89), T3, T7);
    return value0;
L129:;
    if (!((v6first)==(ECL_SYM("SATISFIES",737)))) { goto L132; }
    T0 = cl_list_length(v3type);
    if (!(ecl_number_equalp(T0,ecl_make_fixnum(2)))) { goto L132; }
    v8function = ecl_cadr(v3type);
    if (!(ECL_SYMBOLP(v8function))) { goto L132; }
    value0 = cl_list(2, v8function, v2object);
    return value0;
L132:;
    v8function = si_get_sysprop(v6first, VV[4]);
    if (Null(v8function)) { goto L137; }
    T0 = ecl_function_dispatch(cl_env_copy,v8function)(1, v7rest);
    v3type = cl_list(2, ECL_SYM("QUOTE",681), T0);
    goto TTL;
L137:;
    value0 = v1form;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      local function LAMBDA32                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC3__lambda32(cl_object v1, cl_object v2env)
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
   cl_object v4object;
   cl_object v5type;
   cl_object v6e;
   T0 = ecl_car(v1);
   if (!((T0)==(ECL_SYM("FUNCALL",396)))) { goto L2; }
   T0 = ecl_caadr(v1);
   if (!((T0)==(ECL_SYM("FUNCTION",398)))) { goto L2; }
   v3 = ecl_cddr(v1);
   goto L1;
L2:;
   v3 = ecl_cdr(v1);
L1:;
   if (!(v3==ECL_NIL)) { goto L6; }
   ecl_function_dispatch(cl_env_copy,VV[38])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L6:;
   {
    cl_object v7;
    v7 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4object = v7;
   }
   if (!(v3==ECL_NIL)) { goto L12; }
   ecl_function_dispatch(cl_env_copy,VV[38])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L12:;
   {
    cl_object v7;
    v7 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5type = v7;
   }
   if (Null(v3)) { goto L18; }
   {
    cl_object v7;
    v7 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v6e = v7;
    goto L17;
   }
L18:;
   v6e = ECL_NIL;
L17:;
   if (Null(v3)) { goto L23; }
   ecl_function_dispatch(cl_env_copy,VV[31])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L23:;
   value0 = L2expand_typep(v1, v4object, v5type, v2env);
   return value0;
  }
 }
}
/*      local function LAMBDA40                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC5__lambda40(cl_object v1, cl_object v2env)
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
   cl_object v4;
   cl_object v5;
   cl_object v6var;
   cl_object v7expression;
   cl_object v8output_form;
   T0 = ecl_car(v1);
   if (!((T0)==(ECL_SYM("FUNCALL",396)))) { goto L2; }
   T0 = ecl_caadr(v1);
   if (!((T0)==(ECL_SYM("FUNCTION",398)))) { goto L2; }
   v3 = ecl_cddr(v1);
   goto L1;
L2:;
   v3 = ecl_cdr(v1);
L1:;
   if (!(v3==ECL_NIL)) { goto L6; }
   ecl_function_dispatch(cl_env_copy,VV[38])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L6:;
   {
    cl_object v9;
    v9 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4 = v9;
   }
   v5 = v4;
   if (!(v5==ECL_NIL)) { goto L13; }
   ecl_function_dispatch(cl_env_copy,VV[38])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L13:;
   {
    cl_object v9;
    v9 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v6var = v9;
   }
   if (!(v5==ECL_NIL)) { goto L19; }
   ecl_function_dispatch(cl_env_copy,VV[38])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L19:;
   {
    cl_object v9;
    v9 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v7expression = v9;
   }
   if (Null(v5)) { goto L25; }
   {
    cl_object v9;
    v9 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v8output_form = v9;
    goto L24;
   }
L25:;
   v8output_form = ECL_NIL;
L24:;
   if (Null(v5)) { goto L30; }
   ecl_function_dispatch(cl_env_copy,VV[31])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L30:;
   {
    cl_object v10;                                /*  DECLARATIONS    */
    cl_object v11;                                /*  BODY            */
    value0 = si_process_declarations(2, v3, ECL_NIL);
    {
     const int v12 = cl_env_copy->nvalues;
     v10 = value0;
     cl_object v13;
     v13 = (v12<=1)? ECL_NIL : cl_env_copy->values[1];
     v11 = v13;
    }
    {
     cl_object v12filtered_declarations;
     cl_object v13list_var;
     cl_object v14typed_var;
     T0 = cl_list(2, ECL_SYM("IGNORABLE",429), v6var);
     {
      cl_object v15;
      v15 = ecl_make_cfun((cl_objectfn_fixed)LC4__lambda45,ECL_NIL,Cblock,1);
      T1 = v15;
     }
     T2 = cl_remove_if(2, T1, v10);
     v12filtered_declarations = CONS(T0,T2);
     v13list_var = cl_gensym(0);
     if (Null(ecl_function_dispatch(cl_env_copy,VV[39])(1, v2env) /*  POLICY-ASSUME-NO-ERRORS */)) { goto L37; }
     v14typed_var = v13list_var;
     goto L36;
L37:;
     v14typed_var = cl_list(3, ECL_SYM("TRULY-THE",2039), ECL_SYM("CONS",253), v13list_var);
L36:;
     T0 = cl_list(2, v13list_var, v7expression);
     T1 = ecl_list1(T0);
     T2 = cl_list(2, ECL_SYM("FIRST",373), v14typed_var);
     T3 = cl_list(2, v6var, T2);
     T4 = ecl_list1(T3);
     T5 = CONS(ECL_SYM("DECLARE",276),v10);
     T6 = CONS(ECL_SYM("TAGBODY",852),v11);
     T7 = cl_list(4, ECL_SYM("LET",479), T4, T5, T6);
     T8 = cl_list(2, ECL_SYM("REST",721), v14typed_var);
     T9 = cl_list(3, ECL_SYM("SETQ",753), v13list_var, T8);
     T10 = cl_list(4, ECL_SYM("WHILE",1530), v13list_var, T7, T9);
     if (Null(v8output_form)) { goto L40; }
     T12 = cl_list(2, v6var, ECL_NIL);
     T13 = ecl_list1(T12);
     T14 = CONS(ECL_SYM("DECLARE",276),v12filtered_declarations);
     T11 = cl_list(4, ECL_SYM("LET",479), T13, T14, v8output_form);
     goto L39;
L40:;
     T11 = ECL_NIL;
L39:;
     T12 = cl_list(4, ECL_SYM("LET*",480), T1, T10, T11);
     value0 = cl_list(3, ECL_SYM("BLOCK",139), ECL_NIL, T12);
     return value0;
    }
   }
  }
 }
}
/*      local function LAMBDA45                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC4__lambda45(cl_object v1clause)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ECL_CONSP(v1clause))) { goto L2; }
  T0 = ecl_car(v1clause);
  value0 = ecl_make_bool((T0)==(ECL_SYM("TYPE",871)));
  if ((value0)!=ECL_NIL) { goto L5; }
  T0 = ecl_car(v1clause);
  value0 = ecl_make_bool((T0)==(ECL_SYM("IGNORE",430)));
  cl_env_copy->nvalues = 1;
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
/*      function definition for EXPAND-COERCE                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L6expand_coerce(cl_object v1form, cl_object v2value, cl_object v3type, cl_object v4env)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v5first;
   cl_object v6rest;
   v5first = ECL_NIL;
   v6rest = ECL_NIL;
   if (Null(cl_constantp(2, v3type, v4env))) { goto L4; }
   v3type = ecl_function_dispatch(cl_env_copy,ECL_SYM("CONSTANT-FORM-VALUE",2118))(2, v3type, v4env) /*  CONSTANT-FORM-VALUE */;
   goto L3;
L4:;
   value0 = v1form;
   cl_env_copy->nvalues = 1;
   return value0;
L3:;
   if (Null(cl_subtypep(2, ECL_T, v3type))) { goto L7; }
   value0 = v2value;
   cl_env_copy->nvalues = 1;
   return value0;
L7:;
   if (Null(cl_subtypep(2, v3type, ECL_NIL))) { goto L9; }
   value0 = ecl_function_dispatch(cl_env_copy,VV[40])(1, VV[12]) /*  CMPERROR */;
   return value0;
L9:;
   if ((ecl_function_dispatch(cl_env_copy,VV[37])(0) /*  POLICY-INLINE-TYPE-CHECKS */)!=ECL_NIL) { goto L11; }
   value0 = v1form;
   cl_env_copy->nvalues = 1;
   return value0;
L11:;
   {
    cl_object v7;
    {
     cl_object v8;
     cl_object v9a_type;
     cl_object v10template;
     cl_object v11;
     v8 = ecl_symbol_value(VV[11]);
     v9a_type = ECL_NIL;
     v10template = ECL_NIL;
     {
      cl_object v12;
      v12 = v8;
      if (ecl_unlikely(!ECL_LISTP(v12))) FEtype_error_list(v12);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v11 = v12;
     }
L20:;
     if (!(ecl_endp(v11))) { goto L22; }
     goto L21;
L22:;
     {
      cl_object v12;
      v12 = _ecl_car(v11);
      v9a_type = ecl_car(v12);
      v12 = ecl_cdr(v12);
      v10template = v12;
     }
     {
      cl_object v12;
      v12 = _ecl_cdr(v11);
      if (ecl_unlikely(!ECL_LISTP(v12))) FEtype_error_list(v12);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v11 = v12;
     }
     if (!((v3type)==(v9a_type))) { goto L35; }
     v7 = cl_subst(3, v2value, VV[13], v10template);
     goto L13;
L35:;
     goto L20;
L21:;
     v7 = ECL_NIL;
    }
L13:;
    if (Null(v7)) { goto L38; }
    value0 = v7;
    cl_env_copy->nvalues = 1;
    return value0;
L38:;
    if (!(ECL_ATOM(v3type))) { goto L40; }
    v5first = si_get_sysprop(v3type, VV[4]);
    if (Null(v5first)) { goto L40; }
    T0 = ecl_function_dispatch(cl_env_copy,v5first)(1, ECL_NIL);
    v3type = cl_list(2, ECL_SYM("QUOTE",681), T0);
    goto TTL;
L40:;
    if (!(ECL_CONSP(v3type))) { goto L50; }
    T0 = ecl_car(v3type);
    if (!((T0)==(ECL_SYM("CONS",253)))) { goto L50; }
    value0 = v1form;
    cl_env_copy->nvalues = 1;
    return value0;
L50:;
    {
     cl_object v8;
     {
      cl_object v9;
      cl_object v10a_type;
      cl_object v11template;
      cl_object v12;
      v9 = ecl_symbol_value(VV[11]);
      v10a_type = ECL_NIL;
      v11template = ECL_NIL;
      {
       cl_object v13;
       v13 = v9;
       if (ecl_unlikely(!ECL_LISTP(v13))) FEtype_error_list(v13);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v12 = v13;
      }
L60:;
      if (!(ecl_endp(v12))) { goto L62; }
      goto L61;
L62:;
      {
       cl_object v13;
       v13 = _ecl_car(v12);
       v10a_type = ecl_car(v13);
       v13 = ecl_cdr(v13);
       v11template = v13;
      }
      {
       cl_object v13;
       v13 = _ecl_cdr(v12);
       if (ecl_unlikely(!ECL_LISTP(v13))) FEtype_error_list(v13);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v12 = v13;
      }
      if (Null(ecl_function_dispatch(cl_env_copy,VV[36])(2, v3type, v10a_type) /*  TYPE= */)) { goto L75; }
      v8 = cl_subst(3, v2value, VV[13], v11template);
      goto L53;
L75:;
      goto L60;
L61:;
      v8 = ECL_NIL;
     }
L53:;
     if (Null(v8)) { goto L78; }
     value0 = v8;
     cl_env_copy->nvalues = 1;
     return value0;
L78:;
     if (Null(cl_subtypep(2, v3type, ECL_SYM("SEQUENCE",743)))) { goto L80; }
     {
      cl_object v10;                              /*  ELT-TYPE        */
      cl_object v11;                              /*  LENGTH          */
      value0 = ecl_function_dispatch(cl_env_copy,VV[41])(1, v3type) /*  CLOSEST-SEQUENCE-TYPE */;
      {
       const int v12 = cl_env_copy->nvalues;
       v10 = value0;
       cl_object v13;
       v13 = (v12<=1)? ECL_NIL : cl_env_copy->values[1];
       v11 = v13;
      }
      if ((v11)==(ECL_SYM("*",20))) { goto L85; }
      if (Null(ecl_function_dispatch(cl_env_copy,VV[42])(0) /*  POLICY-ASSUME-RIGHT-TYPE */)) { goto L83; }
      goto L84;
L85:;
L84:;
      if (!((v10)==(ECL_SYM("LIST",483)))) { goto L87; }
      value0 = cl_list(2, VV[14], v2value);
      return value0;
L87:;
      T0 = cl_list(2, ECL_SYM("QUOTE",681), v10);
      T1 = cl_list(2, ECL_SYM("QUOTE",681), v11);
      if (Null(cl_subtypep(2, v3type, ECL_SYM("SIMPLE-ARRAY",765)))) { goto L91; }
      T2 = ECL_T;
      goto L89;
L91:;
      T2 = ECL_NIL;
      goto L89;
L89:;
      value0 = cl_list(5, VV[15], v2value, T0, T1, T2);
      return value0;
L83:;
      value0 = v1form;
      cl_env_copy->nvalues = 1;
      return value0;
     }
L80:;
     if (!(ECL_ATOM(v3type))) { goto L93; }
     value0 = v1form;
     cl_env_copy->nvalues = 1;
     return value0;
L93:;
     v6rest = ecl_cdr(v3type);
     v5first = ecl_car(v3type);
     if (!((v5first)==(ECL_SYM("AND",89)))) { goto L95; }
     T0 = cl_list(2, VV[13], v2value);
     T1 = ecl_list1(T0);
     {
      cl_object v9i;
      cl_object v10;
      v9i = ECL_NIL;
      {
       cl_object v11;
       v11 = v6rest;
       if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v10 = v11;
      }
      {
       cl_object v11;
       cl_object v12;
       v11 = ecl_list1(ECL_NIL);
       v12 = v11;
L108:;
       if (!(ecl_endp(v10))) { goto L110; }
       goto L109;
L110:;
       v9i = _ecl_car(v10);
       {
        cl_object v13;
        v13 = _ecl_cdr(v10);
        if (ecl_unlikely(!ECL_LISTP(v13))) FEtype_error_list(v13);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v10 = v13;
       }
       {
        cl_object v13;
        v13 = v12;
        if (ecl_unlikely(ECL_ATOM(v13))) FEtype_error_cons(v13);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        T3 = v13;
       }
       T4 = cl_list(2, ECL_SYM("QUOTE",681), v9i);
       T5 = cl_list(3, ECL_SYM("COERCE",233), VV[13], T4);
       T6 = cl_list(3, ECL_SYM("SETF",752), VV[13], T5);
       v12 = ecl_list1(T6);
       (ECL_CONS_CDR(T3)=v12,T3);
       goto L108;
L109:;
       T2 = ecl_cdr(v11);
       goto L101;
      }
     }
L101:;
     T3 = ecl_append(T2,VV[16]);
     value0 = cl_listX(3, ECL_SYM("LET",479), T1, T3);
     return value0;
L95:;
     if (!((v5first)==(ECL_SYM("COMPLEX",243)))) { goto L125; }
     {
      cl_fixnum v9;
      v9 = ecl_length(v6rest);
      if (!((v9)==(1))) { goto L125; }
     }
     T0 = cl_list(2, VV[17], v2value);
     T1 = ecl_list1(T0);
     T2 = ecl_car(v6rest);
     T3 = cl_list(2, ECL_SYM("QUOTE",681), T2);
     T4 = cl_list(3, ECL_SYM("COERCE",233), VV[19], T3);
     T5 = ecl_car(v6rest);
     T6 = cl_list(2, ECL_SYM("QUOTE",681), T5);
     T7 = cl_list(3, ECL_SYM("COERCE",233), VV[20], T6);
     T8 = cl_list(3, ECL_SYM("COMPLEX",243), T4, T7);
     value0 = cl_list(4, ECL_SYM("LET",479), T1, VV[18], T8);
     return value0;
L125:;
     if (Null(ecl_memql(v5first,VV[8]))) { goto L128; }
     {
      cl_object v9unchecked;
      T0 = cl_list(2, ECL_SYM("QUOTE",681), v5first);
      v9unchecked = L6expand_coerce(v1form, v2value, T0, v4env);
      if (Null(ecl_function_dispatch(cl_env_copy,VV[39])(0) /*  POLICY-ASSUME-NO-ERRORS */)) { goto L131; }
      value0 = v9unchecked;
      cl_env_copy->nvalues = 1;
      return value0;
L131:;
      T0 = cl_list(2, VV[13], v9unchecked);
      T1 = ecl_list1(T0);
      T2 = cl_list(2, v5first, VV[13]);
      T3 = cl_list(2, ECL_SYM("DECLARE",276), T2);
      T4 = ecl_cdr(v3type);
      T5 = L1expand_in_interval_p(VV[13], T4);
      T6 = CONS(ECL_SYM("AND",89),T5);
      T7 = cl_list(2, ECL_SYM("QUOTE",681), v3type);
      T8 = cl_listX(4, ECL_SYM("DO-CHECK-TYPE",1866), VV[13], T7, VV[21]);
      T9 = cl_list(3, ECL_SYM("UNLESS",885), T6, T8);
      value0 = cl_list(5, ECL_SYM("LET",479), T1, T3, T9, VV[13]);
      return value0;
     }
L128:;
     value0 = v1form;
     cl_env_copy->nvalues = 1;
     return value0;
    }
   }
  }
 }
}
/*      local function LAMBDA66                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC7__lambda66(cl_object v1, cl_object v2env)
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
   cl_object v4value;
   cl_object v5type;
   T0 = ecl_car(v1);
   if (!((T0)==(ECL_SYM("FUNCALL",396)))) { goto L2; }
   T0 = ecl_caadr(v1);
   if (!((T0)==(ECL_SYM("FUNCTION",398)))) { goto L2; }
   v3 = ecl_cddr(v1);
   goto L1;
L2:;
   v3 = ecl_cdr(v1);
L1:;
   if (!(v3==ECL_NIL)) { goto L6; }
   ecl_function_dispatch(cl_env_copy,VV[38])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L6:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4value = v6;
   }
   if (!(v3==ECL_NIL)) { goto L12; }
   ecl_function_dispatch(cl_env_copy,VV[38])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L12:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5type = v6;
   }
   if (Null(v3)) { goto L17; }
   ecl_function_dispatch(cl_env_copy,VV[31])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L17:;
   value0 = L6expand_coerce(v1, v4value, v5type, v2env);
   return value0;
  }
 }
}
/*      local function LAMBDA71                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC8__lambda71(cl_object v1, cl_object v2env)
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
   cl_object v4value;
   cl_object v5float;
   T0 = ecl_car(v1);
   if (!((T0)==(ECL_SYM("FUNCALL",396)))) { goto L2; }
   T0 = ecl_caadr(v1);
   if (!((T0)==(ECL_SYM("FUNCTION",398)))) { goto L2; }
   v3 = ecl_cddr(v1);
   goto L1;
L2:;
   v3 = ecl_cdr(v1);
L1:;
   if (!(v3==ECL_NIL)) { goto L6; }
   ecl_function_dispatch(cl_env_copy,VV[38])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L6:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4value = v6;
   }
   if (Null(v3)) { goto L12; }
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5float = v6;
    goto L11;
   }
L12:;
   v5float = ECL_NIL;
L11:;
   if (Null(v3)) { goto L17; }
   ecl_function_dispatch(cl_env_copy,VV[31])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L17:;
   if (Null(v5float)) { goto L23; }
   if (Null(ecl_function_dispatch(cl_env_copy,VV[37])(1, v2env) /*  POLICY-INLINE-TYPE-CHECKS */)) { goto L23; }
   {
    cl_object v7;                                 /*  CONSTANT-P      */
    cl_object v8;                                 /*  FLOAT           */
    value0 = ecl_function_dispatch(cl_env_copy,VV[43])(2, v5float, v2env) /*  CONSTANT-VALUE-P */;
    {
     const int v9 = cl_env_copy->nvalues;
     v7 = value0;
     cl_object v10;
     v10 = (v9<=1)? ECL_NIL : cl_env_copy->values[1];
     v8 = v10;
    }
    if (Null(v7)) { goto L27; }
    if (!(floatp(v8))) { goto L27; }
    {
     cl_object v9float;
     cl_object v10c_type;
     v9float = cl_type_of(v8);
     v10c_type = ecl_function_dispatch(cl_env_copy,VV[44])(1, v9float) /*  LISP-TYPE->REP-TYPE */;
     T0 = cl_list(2, VV[22], v4value);
     T1 = ecl_list1(T0);
     T2 = cl_list(2, v9float, VV[22]);
     if (!(ecl_eql(v10c_type,ECL_SYM("DOUBLE",1398)))) { goto L33; }
     T3 = VV[26];
     goto L32;
L33:;
     if (!(ecl_eql(v10c_type,ECL_SYM("FLOAT",1400)))) { goto L35; }
     T3 = VV[27];
     goto L32;
L35:;
     if (!(ecl_eql(v10c_type,ECL_SYM("LONG-DOUBLE",1407)))) { goto L37; }
     T3 = VV[28];
     goto L32;
L37:;
     T3 = si_ecase_error(v10c_type, VV[29]);
L32:;
     T4 = cl_listX(6, ECL_SYM("C-INLINE",2063), VV[24], VV[25], v10c_type, T3, VV[30]);
     T5 = cl_list(2, ECL_T, T4);
     T6 = cl_list(4, ECL_SYM("COMPILER-TYPECASE",1860), VV[22], T2, T5);
     value0 = cl_list(4, ECL_SYM("LET",479), T1, VV[23], T6);
     goto L21;
    }
L27:;
    value0 = ECL_NIL;
    goto L21;
   }
L23:;
   value0 = ECL_NIL;
   goto L21;
L21:;
   if ((value0)!=ECL_NIL) { goto L20; }
   value0 = v1;
   cl_env_copy->nvalues = 1;
   return value0;
L20:;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}

#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/cmp/cmpopt.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclfSPqgIa7_NHWmqq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CMP;CMPOPT.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclfSPqgIa7_NHWmqq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  (void)0; /* No entry created for EXPAND-IN-INTERVAL-P */
  ecl_cmp_defun(VV[32]);                          /*  EXPAND-TYPEP    */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC3__lambda32,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_put_sysprop(ECL_SYM("TYPEP",877), ECL_SYM("COMPILER-MACRO",240), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC5__lambda40,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_put_sysprop(ECL_SYM("DOLIST",315), ECL_SYM("COMPILER-MACRO",240), T0);
 }
  si_Xmake_special(VV[11]);
  cl_set(VV[11],VVtemp[1]);
  (void)0; /* No entry created for EXPAND-COERCE */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC7__lambda66,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_put_sysprop(ECL_SYM("COERCE",233), ECL_SYM("COMPILER-MACRO",240), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC8__lambda71,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_put_sysprop(ECL_SYM("FLOAT",376), ECL_SYM("COMPILER-MACRO",240), T0);
 }
}
