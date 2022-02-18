/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CMP;CMPENV-DECLARE.LSP                            */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/cmp/cmpenv-declare.eclh"
/*      function definition for VALID-FORM-P                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L1valid_form_p(cl_narg narg, cl_object v1x, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2test;
  va_list args; va_start(args,v1x);
  {
   int i = 1;
   if (i >= narg) {
    v2test = ECL_NIL;
   } else {
    i++;
    v2test = va_arg(args,cl_object);
   }
  }
  va_end(args);
  if (Null(si_proper_list_p(v1x))) { goto L3; }
  value0 = ecl_make_bool(v2test==ECL_NIL);
  if ((value0)!=ECL_NIL) { goto L6; }
  value0 = cl_every(2, v2test, v1x);
  return value0;
L6:;
  cl_env_copy->nvalues = 1;
  return value0;
L3:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for TYPE-NAME-P                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L2type_name_p(cl_object v1name)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = si_get_sysprop(v1name, VV[1]);
  if ((value0)!=ECL_NIL) { goto L2; }
  value0 = cl_find_class(2, v1name, ECL_NIL);
  if ((value0)!=ECL_NIL) { goto L2; }
  value0 = si_get_sysprop(v1name, VV[2]);
  return value0;
L2:;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for VALIDATE-ALIEN-DECLARATION            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L3validate_alien_declaration(cl_object v1names_list, cl_object v2error)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   v3 = v1names_list;
   goto L4;
L3:;
   {
    cl_object v4new_declaration;
    v4new_declaration = ecl_car(v3);
    if (ECL_SYMBOLP(v4new_declaration)) { goto L8; }
    ecl_function_dispatch(cl_env_copy,v2error)(2, VV[4], v4new_declaration);
L8:;
    if (Null(L2type_name_p(v4new_declaration))) { goto L10; }
    ecl_function_dispatch(cl_env_copy,v2error)(2, VV[5], v4new_declaration);
L10:;
   }
   v3 = ecl_cdr(v3);
L4:;
   if (Null(v3)) { goto L14; }
   goto L3;
L14:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for ALIEN-DECLARATION-P                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L4alien_declaration_p(cl_narg narg, cl_object v1name, ...)
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
    v2env = ecl_symbol_value(VV[7]);
   } else {
    i++;
    v2env = va_arg(args,cl_object);
   }
  }
  va_end(args);
  if (!(ECL_SYMBOLP(v1name))) { goto L3; }
  T0 = ecl_function_dispatch(cl_env_copy,VV[42])(3, VV[8], v2env, ecl_symbol_value(ECL_SYM("*ALIEN-DECLARATIONS*",1647))) /*  CMP-ENV-SEARCH-DECLARATION */;
  value0 = si_memq(v1name,T0);
  cl_env_copy->nvalues = 1;
  return value0;
L3:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for PARSE-IGNORE-DECLARATION              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L5parse_ignore_declaration(cl_object v1decl_args, cl_object v2expected_ref_number, cl_object v3tail)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v4name;
   cl_object v5;
   v4name = ECL_NIL;
   {
    cl_object v6;
    v6 = v1decl_args;
    if (ecl_unlikely(!ECL_LISTP(v6))) FEtype_error_list(v6);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v5 = v6;
   }
L6:;
   if (!(ecl_endp(v5))) { goto L8; }
   goto L7;
L8:;
   v4name = _ecl_car(v5);
   {
    cl_object v6;
    v6 = _ecl_cdr(v5);
    if (ecl_unlikely(!ECL_LISTP(v6))) FEtype_error_list(v6);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v5 = v6;
   }
   if (!(ECL_SYMBOLP(v4name))) { goto L17; }
   T0 = CONS(v4name,v2expected_ref_number);
   v3tail = CONS(T0,v3tail);
   goto L16;
L17:;
   if (!(ECL_CONSP(v4name))) { goto L22; }
   {
    cl_fixnum v6;
    v6 = ecl_length(v4name);
    if (!((v6)==(2))) { goto L22; }
   }
   T0 = ecl_car(v4name);
   if ((T0)==(ECL_SYM("FUNCTION",398))) { goto L16; }
   goto L20;
L22:;
   goto L20;
L20:;
   ecl_function_dispatch(cl_env_copy,VV[43])(2, VV[10], v4name) /*  CMPERR */;
L16:;
   goto L6;
L7:;
  }
  value0 = v3tail;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for COLLECT-DECLARED                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L6collect_declared(cl_object v1type, cl_object v2var_list, cl_object v3tail)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = (ECL_SYM("SYMBOLP",849)->symbol.gfdef);
  if ((L1valid_form_p(2, v2var_list, T0))!=ECL_NIL) { goto L1; }
  T0 = cl_list(3, ECL_SYM("TYPE",871), v1type, v2var_list);
  ecl_function_dispatch(cl_env_copy,VV[43])(2, VV[11], T0) /*  CMPERR */;
L1:;
  {
   cl_object v4var_name;
   cl_object v5;
   v4var_name = ECL_NIL;
   {
    cl_object v6;
    v6 = v2var_list;
    if (ecl_unlikely(!ECL_LISTP(v6))) FEtype_error_list(v6);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v5 = v6;
   }
L9:;
   if (!(ecl_endp(v5))) { goto L11; }
   goto L10;
L11:;
   v4var_name = _ecl_car(v5);
   {
    cl_object v6;
    v6 = _ecl_cdr(v5);
    if (ecl_unlikely(!ECL_LISTP(v6))) FEtype_error_list(v6);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v5 = v6;
   }
   T0 = CONS(v4var_name,v1type);
   v3tail = CONS(T0,v3tail);
   goto L9;
L10:;
  }
  value0 = v3tail;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for C1BODY                                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L7c1body(cl_object v1body, cl_object v2doc_p)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v4;                                  /*  ALL-DECLARATIONS */
   cl_object v5;                                  /*  BODY            */
   cl_object v6;                                  /*  DOC             */
   cl_object v7;                                  /*  SPECIALS        */
   value0 = si_process_declarations(2, v1body, v2doc_p);
   {
    const int v8 = cl_env_copy->nvalues;
    v4 = value0;
    cl_object v9;
    v9 = (v8<=1)? ECL_NIL : cl_env_copy->values[1];
    v5 = v9;
    v9 = (v8<=2)? ECL_NIL : cl_env_copy->values[2];
    v6 = v9;
    v9 = (v8<=3)? ECL_NIL : cl_env_copy->values[3];
    v7 = v9;
   }
   {
    cl_object v8others;
    v8others = ECL_NIL;
    {
     cl_object v9types;
     v9types = ECL_NIL;
     {
      cl_object v10ignored;
      v10ignored = ECL_NIL;
      {
       cl_object v11decl;
       cl_object v12;
       v11decl = ECL_NIL;
       {
        cl_object v13;
        v13 = v4;
        if (ecl_unlikely(!ECL_LISTP(v13))) FEtype_error_list(v13);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v12 = v13;
       }
       {
        cl_object v13decl_name;
        v13decl_name = ECL_NIL;
        {
         cl_object v14decl_args;
         v14decl_args = ECL_NIL;
L11:;
         if (!(ecl_endp(v12))) { goto L13; }
         goto L12;
L13:;
         v11decl = _ecl_car(v12);
         {
          cl_object v15;
          v15 = _ecl_cdr(v12);
          if (ecl_unlikely(!ECL_LISTP(v15))) FEtype_error_list(v15);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          v12 = v15;
         }
         v13decl_name = ecl_car(v11decl);
         v14decl_args = ecl_cdr(v11decl);
         if (Null(L1valid_form_p(1, v14decl_args))) { goto L28; }
         if (ECL_SYMBOLP(v13decl_name)) { goto L25; }
         if (!(ECL_CONSP(v13decl_name))) { goto L32; }
         if ((ecl_function_dispatch(cl_env_copy,VV[45])(1, v13decl_name) /*  VALID-TYPE-SPECIFIER */)!=ECL_NIL) { goto L25; }
         goto L26;
L32:;
         goto L26;
L28:;
         goto L26;
L26:;
         ecl_function_dispatch(cl_env_copy,VV[43])(2, VV[11], v11decl) /*  CMPERR */;
L25:;
         {
          cl_object v15;
          v15 = v13decl_name;
          if ((v15)==(ECL_SYM("SPECIAL",791))) { goto L34; }
          if (!((v15)==(ECL_SYM("IGNORE",430)))) { goto L37; }
          if ((L1valid_form_p(1, v14decl_args))!=ECL_NIL) { goto L39; }
          ecl_function_dispatch(cl_env_copy,VV[43])(2, VV[11], v11decl) /*  CMPERR */;
L39:;
          v10ignored = L5parse_ignore_declaration(v14decl_args, ecl_make_fixnum(-1), v10ignored);
          goto L34;
L37:;
          if (!((v15)==(ECL_SYM("IGNORABLE",429)))) { goto L42; }
          if ((L1valid_form_p(1, v14decl_args))!=ECL_NIL) { goto L44; }
          ecl_function_dispatch(cl_env_copy,VV[43])(2, VV[11], v11decl) /*  CMPERR */;
L44:;
          v10ignored = L5parse_ignore_declaration(v14decl_args, ecl_make_fixnum(0), v10ignored);
          goto L34;
L42:;
          if (!((v15)==(ECL_SYM("TYPE",871)))) { goto L47; }
          if (!(ECL_CONSP(v14decl_args))) { goto L52; }
          T0 = ecl_cdr(v14decl_args);
          T1 = (ECL_SYM("SYMBOLP",849)->symbol.gfdef);
          if ((L1valid_form_p(2, T0, T1))!=ECL_NIL) { goto L49; }
          goto L50;
L52:;
          goto L50;
L50:;
          ecl_function_dispatch(cl_env_copy,VV[43])(2, VV[11], v11decl) /*  CMPERR */;
L49:;
          T0 = ecl_car(v14decl_args);
          T1 = ecl_cdr(v14decl_args);
          v9types = L6collect_declared(T0, T1, v9types);
          goto L34;
L47:;
          if (!((v15)==(ECL_SYM("OBJECT",2105)))) { goto L56; }
          T0 = (ECL_SYM("SYMBOLP",849)->symbol.gfdef);
          if ((L1valid_form_p(2, v14decl_args, T0))!=ECL_NIL) { goto L58; }
          ecl_function_dispatch(cl_env_copy,VV[43])(2, VV[11], v11decl) /*  CMPERR */;
L58:;
          v9types = L6collect_declared(ECL_SYM("OBJECT",2105), v14decl_args, v9types);
          goto L34;
L56:;
          if (Null(ecl_memql(v15,VV[12]))) { goto L62; }
          v8others = CONS(v11decl,v8others);
          goto L34;
L62:;
          if ((v15)==(ECL_SYM("FUNCTION-BLOCK-NAME",1085))) { goto L34; }
          if ((L4alien_declaration_p(1, v13decl_name))!=ECL_NIL) { goto L68; }
          if (Null(ecl_function_dispatch(cl_env_copy,VV[46])(1, v13decl_name) /*  POLICY-DECLARATION-NAME-P */)) { goto L66; }
          goto L67;
L68:;
L67:;
          v8others = CONS(v11decl,v8others);
          goto L34;
L66:;
          {
          cl_object v17;                          /*  OK              */
          cl_object v18;                          /*  TYPE            */
          if (Null(ecl_function_dispatch(cl_env_copy,VV[47])(1, v13decl_name) /*  MACHINE-C-TYPE-P */)) { goto L72; }
          cl_env_copy->nvalues = 2;
          cl_env_copy->values[1] = v13decl_name;
          cl_env_copy->values[0] = ECL_T;
          value0 = cl_env_copy->values[0];
          goto L71;
L72:;
          value0 = ecl_function_dispatch(cl_env_copy,VV[45])(1, v13decl_name) /*  VALID-TYPE-SPECIFIER */;
L71:;
          {
          const int v19 = cl_env_copy->nvalues;
          v17 = value0;
          cl_object v20;
          v20 = (v19<=1)? ECL_NIL : cl_env_copy->values[1];
          v18 = v20;
          }
          if (!(v17==ECL_NIL)) { goto L74; }
          ecl_function_dispatch(cl_env_copy,VV[48])(2, VV[13], v13decl_name) /*  CMPWARN */;
          goto L34;
L74:;
          v9types = L6collect_declared(v18, v14decl_args, v9types);
          }
         }
L34:;
         goto L11;
L12:;
         T0 = cl_nreverse(v8others);
         cl_env_copy->nvalues = 7;
         cl_env_copy->values[6] = v4;
         cl_env_copy->values[5] = v6;
         cl_env_copy->values[4] = T0;
         cl_env_copy->values[3] = v10ignored;
         cl_env_copy->values[2] = v9types;
         cl_env_copy->values[1] = v7;
         cl_env_copy->values[0] = v5;
         return cl_env_copy->values[0];
        }
       }
      }
     }
    }
   }
  }
 }
}
/*      function definition for ADD-ONE-DECLARATION                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L8add_one_declaration(cl_object v1env, cl_object v2decl)
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
   v3 = ecl_car(v2decl);
   if (!((v3)==(ECL_SYM("OPTIMIZE",615)))) { goto L2; }
   T0 = ecl_cdr(v2decl);
   value0 = ecl_function_dispatch(cl_env_copy,VV[50])(2, T0, v1env) /*  CMP-ENV-ADD-OPTIMIZATIONS */;
   return value0;
L2:;
   if (!((v3)==(VV[15]))) { goto L4; }
   {
    cl_object v4flag;
    value0 = ecl_cdr(v2decl);
    if ((value0)!=ECL_NIL) { goto L8; }
    v4flag = VV[16];
    goto L6;
L8:;
    v4flag = value0;
    goto L6;
L6:;
    if (Null(ecl_symbol_value(VV[17]))) { goto L10; }
    T0 = ecl_function_dispatch(cl_env_copy,VV[51])(1, ecl_symbol_value(VV[17])) /*  FUN-CMP-ENV */;
    ecl_function_dispatch(cl_env_copy,VV[52])(3, VV[15], v4flag, T0) /*  CMP-ENV-ADD-DECLARATION */;
    value0 = v1env;
    cl_env_copy->nvalues = 1;
    return value0;
L10:;
    value0 = ecl_function_dispatch(cl_env_copy,VV[52])(3, VV[15], v4flag, v1env) /*  CMP-ENV-ADD-DECLARATION */;
    return value0;
   }
L4:;
   if (!((v3)==(ECL_SYM("FTYPE",395)))) { goto L13; }
   T0 = ecl_cdr(v2decl);
   if (!(ECL_ATOM(T0))) { goto L16; }
   ecl_function_dispatch(cl_env_copy,VV[48])(2, VV[18], v2decl) /*  CMPWARN */;
   goto L15;
L16:;
   {
    cl_object v6;                                 /*  TYPE-NAME       */
    cl_object v7;                                 /*  ARGS            */
    T0 = ecl_cadr(v2decl);
    value0 = ecl_function_dispatch(cl_env_copy,VV[53])(1, T0) /*  NORMALIZE-TYPE */;
    {
     const int v8 = cl_env_copy->nvalues;
     v6 = value0;
     cl_object v9;
     v9 = (v8<=1)? ECL_NIL : cl_env_copy->values[1];
     v7 = v9;
    }
    if (!((v6)==(ECL_SYM("FUNCTION",398)))) { goto L19; }
    {
     cl_object v8;
     v8 = ecl_cddr(v2decl);
     goto L24;
L23:;
     {
      cl_object v9v;
      v9v = ecl_car(v8);
      v1env = ecl_function_dispatch(cl_env_copy,VV[54])(3, v9v, v7, v1env) /*  ADD-FUNCTION-DECLARATION */;
     }
     v8 = ecl_cdr(v8);
L24:;
     if (Null(v8)) { goto L32; }
     goto L23;
L32:;
     goto L15;
    }
L19:;
    T0 = ecl_cadr(v2decl);
    ecl_function_dispatch(cl_env_copy,VV[48])(2, VV[19], T0) /*  CMPWARN */;
   }
L15:;
   value0 = v1env;
   cl_env_copy->nvalues = 1;
   return value0;
L13:;
   if (!((v3)==(ECL_SYM("INLINE",436)))) { goto L34; }
   {
    cl_object v5;
    cl_object v6name;
    cl_object v7;
    v5 = ecl_cdr(v2decl);
    v6name = ECL_NIL;
    {
     cl_object v8;
     v8 = v5;
     if (ecl_unlikely(!ECL_LISTP(v8))) FEtype_error_list(v8);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v7 = v8;
    }
L42:;
    if (!(ecl_endp(v7))) { goto L44; }
    goto L43;
L44:;
    v6name = _ecl_car(v7);
    {
     cl_object v8;
     v8 = _ecl_cdr(v7);
     if (ecl_unlikely(!ECL_LISTP(v8))) FEtype_error_list(v8);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v7 = v8;
    }
    v1env = ecl_function_dispatch(cl_env_copy,VV[55])(2, v6name, v1env) /*  DECLARE-INLINE */;
    goto L42;
L43:;
   }
   value0 = v1env;
   cl_env_copy->nvalues = 1;
   return value0;
L34:;
   if (!((v3)==(ECL_SYM("NOTINLINE",589)))) { goto L55; }
   {
    cl_object v5;
    cl_object v6name;
    cl_object v7;
    v5 = ecl_cdr(v2decl);
    v6name = ECL_NIL;
    {
     cl_object v8;
     v8 = v5;
     if (ecl_unlikely(!ECL_LISTP(v8))) FEtype_error_list(v8);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v7 = v8;
    }
L63:;
    if (!(ecl_endp(v7))) { goto L65; }
    goto L64;
L65:;
    v6name = _ecl_car(v7);
    {
     cl_object v8;
     v8 = _ecl_cdr(v7);
     if (ecl_unlikely(!ECL_LISTP(v8))) FEtype_error_list(v8);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v7 = v8;
    }
    v1env = ecl_function_dispatch(cl_env_copy,VV[56])(2, v6name, v1env) /*  DECLARE-NOTINLINE */;
    goto L63;
L64:;
   }
   value0 = v1env;
   cl_env_copy->nvalues = 1;
   return value0;
L55:;
   if (!((v3)==(ECL_SYM("DECLARATION",275)))) { goto L76; }
   T0 = ecl_cdr(v2decl);
   T1 = ecl_fdefinition(VV[43]);
   L3validate_alien_declaration(T0, T1);
   T0 = ecl_cdr(v2decl);
   value0 = ecl_function_dispatch(cl_env_copy,VV[57])(4, VV[8], T0, v1env, ecl_symbol_value(ECL_SYM("*ALIEN-DECLARATIONS*",1647))) /*  CMP-ENV-EXTEND-DECLARATION */;
   return value0;
L76:;
   if (!((v3)==(VV[20]))) { goto L85; }
   goto L82;
   goto L83;
L85:;
   goto L83;
L83:;
   if (!((v3)==(VV[22]))) { goto L89; }
   goto L82;
   goto L87;
L89:;
   goto L87;
L87:;
   if (!((v3)==(VV[24]))) { goto L93; }
   goto L82;
   goto L91;
L93:;
   goto L91;
L91:;
   if (!(ecl_eql(v3,VV[26]))) { goto L80; }
   goto L81;
L82:;
L81:;
   value0 = v1env;
   cl_env_copy->nvalues = 1;
   return value0;
L80:;
   if (!((v3)==(ECL_SYM("DYNAMIC-EXTENT",322)))) { goto L101; }
   goto L98;
   goto L99;
L101:;
   goto L99;
L99:;
   if (!((v3)==(ECL_SYM("IGNORABLE",429)))) { goto L105; }
   goto L98;
   goto L103;
L105:;
   goto L103;
L103:;
   if (!((v3)==(ECL_SYM("FUNCTION-BLOCK-NAME",1085)))) { goto L96; }
   goto L97;
L98:;
L97:;
   value0 = v1env;
   cl_env_copy->nvalues = 1;
   return value0;
L96:;
   T0 = ecl_car(v2decl);
   if (Null(L4alien_declaration_p(2, T0, v1env))) { goto L108; }
   value0 = v1env;
   cl_env_copy->nvalues = 1;
   return value0;
L108:;
   {
    cl_object v5;
    v5 = ecl_function_dispatch(cl_env_copy,VV[58])(2, v2decl, v1env) /*  MAYBE-ADD-POLICY */;
    if (Null(v5)) { goto L111; }
    value0 = v5;
    cl_env_copy->nvalues = 1;
    return value0;
L111:;
    T0 = ecl_car(v2decl);
    ecl_function_dispatch(cl_env_copy,VV[48])(2, VV[31], T0) /*  CMPWARN */;
    value0 = v1env;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      function definition for SYMBOL-MACRO-DECLARATION-P            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L9symbol_macro_declaration_p(cl_object v1name, cl_object v2type)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3record;
   v3record = ecl_function_dispatch(cl_env_copy,VV[60])(1, v1name) /*  CMP-ENV-SEARCH-SYMBOL-MACRO */;
   if (Null(v3record)) { goto L2; }
   if (Null(cl_functionp(v3record))) { goto L2; }
   {
    cl_object v4expression;
    v4expression = ecl_function_dispatch(cl_env_copy,v3record)(2, v1name, ECL_NIL);
    T0 = cl_list(3, ECL_SYM("THE",858), v2type, v4expression);
    ecl_function_dispatch(cl_env_copy,VV[61])(2, v1name, T0) /*  CMP-ENV-REGISTER-SYMBOL-MACRO */;
   }
   value0 = ECL_T;
   cl_env_copy->nvalues = 1;
   return value0;
L2:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for CHECK-VDECL                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L10check_vdecl(cl_object v1vnames, cl_object v2ts, cl_object v3is)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v4name;
   cl_object v5type;
   cl_object v6;
   v4name = ECL_NIL;
   v5type = ECL_NIL;
   {
    cl_object v7;
    v7 = v2ts;
    if (ecl_unlikely(!ECL_LISTP(v7))) FEtype_error_list(v7);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v6 = v7;
   }
L7:;
   if (!(ecl_endp(v6))) { goto L9; }
   goto L8;
L9:;
   {
    cl_object v7;
    v7 = _ecl_car(v6);
    v4name = ecl_car(v7);
    v7 = ecl_cdr(v7);
    v5type = v7;
   }
   {
    cl_object v7;
    v7 = _ecl_cdr(v6);
    if (ecl_unlikely(!ECL_LISTP(v7))) FEtype_error_list(v7);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v6 = v7;
   }
   if ((si_memq(v4name,v1vnames))!=ECL_NIL) { goto L22; }
   if ((L9symbol_macro_declaration_p(v4name, v5type))!=ECL_NIL) { goto L22; }
   ecl_function_dispatch(cl_env_copy,VV[48])(3, VV[34], v5type, v4name) /*  CMPWARN */;
L22:;
   goto L7;
L8:;
  }
  {
   cl_object v4name;
   cl_object v5expected_uses;
   cl_object v6;
   v4name = ECL_NIL;
   v5expected_uses = ECL_NIL;
   {
    cl_object v7;
    v7 = v3is;
    if (ecl_unlikely(!ECL_LISTP(v7))) FEtype_error_list(v7);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v6 = v7;
   }
L31:;
   if (!(ecl_endp(v6))) { goto L33; }
   goto L32;
L33:;
   {
    cl_object v7;
    v7 = _ecl_car(v6);
    v4name = ecl_car(v7);
    v7 = ecl_cdr(v7);
    v5expected_uses = v7;
   }
   {
    cl_object v7;
    v7 = _ecl_cdr(v6);
    if (ecl_unlikely(!ECL_LISTP(v7))) FEtype_error_list(v7);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v6 = v7;
   }
   if ((si_memq(v4name,v1vnames))!=ECL_NIL) { goto L46; }
   if ((ecl_function_dispatch(cl_env_copy,VV[60])(1, v4name) /*  CMP-ENV-SEARCH-SYMBOL-MACRO */)!=ECL_NIL) { goto L46; }
   if ((ecl_function_dispatch(cl_env_copy,VV[63])(1, v4name) /*  CMP-ENV-SEARCH-MACRO */)!=ECL_NIL) { goto L46; }
   if (!(ecl_minusp(v5expected_uses))) { goto L51; }
   T0 = VV[35];
   goto L50;
L51:;
   T0 = VV[36];
L50:;
   ecl_function_dispatch(cl_env_copy,VV[48])(2, T0, v4name) /*  CMPWARN */;
L46:;
   goto L31;
L32:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}

#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/cmp/cmpenv-declare.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclokXGZYZ7_eoPmqq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CMP;CMPENV-DECLARE.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclokXGZYZ7_eoPmqq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  ecl_cmp_defun(VV[38]);                          /*  VALID-FORM-P    */
  ecl_cmp_defun(VV[39]);                          /*  TYPE-NAME-P     */
  ecl_cmp_defun(VV[40]);                          /*  VALIDATE-ALIEN-DECLARATION */
  ecl_cmp_defun(VV[41]);                          /*  ALIEN-DECLARATION-P */
  (void)0; /* No entry created for PARSE-IGNORE-DECLARATION */
  (void)0; /* No entry created for COLLECT-DECLARED */
  ecl_cmp_defun(VV[44]);                          /*  C1BODY          */
  ecl_cmp_defun(VV[49]);                          /*  ADD-ONE-DECLARATION */
  ecl_cmp_defun(VV[59]);                          /*  SYMBOL-MACRO-DECLARATION-P */
  ecl_cmp_defun(VV[62]);                          /*  CHECK-VDECL     */
}
