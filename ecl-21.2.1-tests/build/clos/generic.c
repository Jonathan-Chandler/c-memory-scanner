/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CLOS;GENERIC.LSP                                  */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/clos/generic.eclh"
/*      local function DEFGENERIC                                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC1defgeneric(cl_object v1, cl_object v2)
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
   v3 = ecl_cdr(v1);
   {
    cl_object v5;                                 /*  FUNCTION-SPECIFIER */
    cl_object v6;                                 /*  LAMBDA-LIST     */
    cl_object v7;                                 /*  OPTIONS         */
    value0 = L2parse_defgeneric(v3);
    {
     const int v8 = cl_env_copy->nvalues;
     v5 = value0;
     cl_object v9;
     v9 = (v8<=1)? ECL_NIL : cl_env_copy->values[1];
     v6 = v9;
     v9 = (v8<=2)? ECL_NIL : cl_env_copy->values[2];
     v7 = v9;
    }
    L4parse_lambda_list(1, v6);
    {
     cl_object v9;                                /*  OPTION-LIST     */
     cl_object v10;                               /*  METHOD-LIST     */
     value0 = L3parse_generic_options(v7, v6);
     {
      const int v11 = cl_env_copy->nvalues;
      v9 = value0;
      cl_object v12;
      v12 = (v11<=1)? ECL_NIL : cl_env_copy->values[1];
      v10 = v12;
     }
     {
      cl_object v11output;
      T0 = cl_list(2, ECL_SYM("QUOTE",681), v5);
      v11output = cl_listX(5, ECL_SYM("ENSURE-GENERIC-FUNCTION",944), T0, VV[0], ECL_T, v9);
      if (Null(ecl_symbol_value(ECL_SYM("*REGISTER-WITH-PDE-HOOK*",1203)))) { goto L6; }
      T0 = cl_copy_tree(ecl_symbol_value(ECL_SYM("*SOURCE-LOCATION*",1202)));
      if (Null(v10)) { goto L9; }
      T2 = cl_list(2, ECL_SYM("QUOTE",681), v5);
      {
       cl_object v12m;
       cl_object v13;
       v12m = ECL_NIL;
       {
        cl_object v14;
        v14 = v10;
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
L18:;
        if (!(ecl_endp(v13))) { goto L20; }
        goto L19;
L20:;
        v12m = _ecl_car(v13);
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
         T4 = v16;
        }
        T5 = cl_listX(3, ECL_SYM("DEFMETHOD",942), v5, v12m);
        v15 = ecl_list1(T5);
        (ECL_CONS_CDR(T4)=v15,T4);
        goto L18;
L19:;
        T3 = ecl_cdr(v14);
        goto L11;
       }
      }
L11:;
      T4 = cl_listX(3, VV[1], T2, T3);
      T1 = cl_list(3, ECL_SYM("PROGN",673), v11output, T4);
      goto L8;
L9:;
      T1 = v11output;
L8:;
      value0 = ecl_function_dispatch(cl_env_copy,ecl_symbol_value(ECL_SYM("*REGISTER-WITH-PDE-HOOK*",1203)))(3, T0, v1, T1);
      return value0;
L6:;
      if (Null(v10)) { goto L35; }
      T0 = cl_list(2, ECL_SYM("QUOTE",681), v5);
      {
       cl_object v12m;
       cl_object v13;
       v12m = ECL_NIL;
       {
        cl_object v14;
        v14 = v10;
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
L44:;
        if (!(ecl_endp(v13))) { goto L46; }
        goto L45;
L46:;
        v12m = _ecl_car(v13);
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
         T2 = v16;
        }
        T3 = cl_listX(3, ECL_SYM("DEFMETHOD",942), v5, v12m);
        v15 = ecl_list1(T3);
        (ECL_CONS_CDR(T2)=v15,T2);
        goto L44;
L45:;
        T1 = ecl_cdr(v14);
        goto L37;
       }
      }
L37:;
      T2 = cl_listX(3, VV[1], T0, T1);
      value0 = cl_list(3, ECL_SYM("PROGN",673), v11output, T2);
      return value0;
L35:;
      value0 = v11output;
      cl_env_copy->nvalues = 1;
      return value0;
     }
    }
   }
  }
 }
}
/*      function definition for PARSE-DEFGENERIC                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L2parse_defgeneric(cl_object v1args)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2function_specifier;
   v2function_specifier = ECL_NIL;
   if ((v1args)!=ECL_NIL) { goto L2; }
   si_simple_program_error(1, VV[3]);
L2:;
   {
    cl_object v3;
    v3 = v1args;
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
     v1args = v4;
     v3 = ECL_CONS_CAR(v3);
    }
L10:;
    v2function_specifier = v3;
   }
   if ((v1args)!=ECL_NIL) { goto L16; }
   si_simple_program_error(1, VV[4]);
L16:;
   T0 = ecl_car(v1args);
   T1 = ecl_cdr(v1args);
   cl_env_copy->nvalues = 3;
   cl_env_copy->values[2] = T1;
   cl_env_copy->values[1] = T0;
   cl_env_copy->values[0] = v2function_specifier;
   return cl_env_copy->values[0];
  }
 }
}
/*      function definition for PARSE-GENERIC-OPTIONS                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L3parse_generic_options(cl_object v1options, cl_object v2lambda_list)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3processed_options;
   cl_object v4method_list;
   cl_object v5declarations;
   cl_object v6arg_list;
   v3processed_options = ECL_NIL;
   v4method_list = ECL_NIL;
   v5declarations = ECL_NIL;
   v6arg_list = ECL_NIL;
   {
    cl_object v7;
    v7 = v1options;
    goto L9;
L8:;
    {
     cl_object v8option;
     v8option = ecl_car(v7);
     {
      cl_object v9;
      cl_object v10option_name;
      cl_object v11option_value;
      v9 = ecl_car(v8option);
      v10option_name = v9;
      v11option_value = ECL_NIL;
      if (!((v10option_name)==(ECL_SYM("METHOD",1003)))) { goto L17; }
      T0 = ecl_cdr(v8option);
      v4method_list = CONS(T0,v4method_list);
      goto L13;
L17:;
      if (!((v10option_name)==(ECL_SYM("DECLARE",276)))) { goto L20; }
      T0 = ecl_cdr(v8option);
      v5declarations = ecl_append(T0,v5declarations);
      goto L13;
L20:;
      if (Null(ecl_memql(v10option_name,v3processed_options))) { goto L23; }
      si_simple_program_error(2, VV[5], v10option_name);
      goto L13;
L23:;
      v3processed_options = CONS(v10option_name,v3processed_options);
      if (!(ecl_eql(v10option_name,ECL_SYM("ARGUMENT-PRECEDENCE-ORDER",986)))) { goto L29; }
      v11option_value = ecl_cdr(v8option);
      goto L28;
L29:;
      if (!(ecl_eql(v10option_name,ECL_SYM("METHOD-COMBINATION",1005)))) { goto L31; }
      v11option_value = ecl_cdr(v8option);
      goto L28;
L31:;
      if (!(ecl_eql(v10option_name,ECL_SYM("DOCUMENTATION",1244)))) { goto L38; }
      goto L35;
      goto L36;
L38:;
      goto L36;
L36:;
      if (!(ecl_eql(v10option_name,ECL_SYM("GENERIC-FUNCTION-CLASS",994)))) { goto L42; }
      goto L35;
      goto L40;
L42:;
      goto L40;
L40:;
      if (!(ecl_eql(v10option_name,ECL_SYM("METHOD-CLASS",1004)))) { goto L33; }
      goto L34;
L35:;
L34:;
      T0 = ecl_cddr(v8option);
      if (ecl_endp(T0)) { goto L45; }
      si_simple_program_error(2, VV[9], v10option_name);
L45:;
      v11option_value = ecl_cadr(v8option);
      goto L28;
L33:;
      v11option_value = si_simple_program_error(2, VV[10], v10option_name);
L28:;
      T0 = cl_list(2, ECL_SYM("QUOTE",681), v10option_name);
      T1 = cl_list(2, ECL_SYM("QUOTE",681), v11option_value);
      v6arg_list = cl_listX(3, T0, T1, v6arg_list);
     }
L13:;
    }
    v7 = ecl_cdr(v7);
L9:;
    if (Null(v7)) { goto L50; }
    goto L8;
L50:;
   }
   T0 = cl_list(2, ECL_SYM("QUOTE",681), v2lambda_list);
   if (Null(v5declarations)) { goto L53; }
   T2 = cl_list(2, ECL_SYM("QUOTE",681), v5declarations);
   T1 = cl_list(2, VV[11], T2);
   goto L52;
L53:;
   T1 = ECL_NIL;
L52:;
   T2 = ecl_append(v6arg_list,T1);
   T3 = cl_listX(3, ECL_SYM("LAMBDA-LIST",1000), T0, T2);
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v4method_list;
   cl_env_copy->values[0] = T3;
   return cl_env_copy->values[0];
  }
 }
}
/*      function definition for PARSE-LAMBDA-LIST                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L4parse_lambda_list(cl_narg narg, cl_object v1lambda_list, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2post_keyword;
  va_list args; va_start(args,v1lambda_list);
  {
   int i = 1;
   if (i >= narg) {
    v2post_keyword = ECL_NIL;
   } else {
    i++;
    v2post_keyword = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v3arg;
   v3arg = ecl_car(v1lambda_list);
   {
    cl_object v4;
    v4 = ecl_make_bool(v1lambda_list==ECL_NIL);
    if (Null(v4)) { goto L4; }
    value0 = v4;
    cl_env_copy->nvalues = 1;
    return value0;
L4:;
    if (!((v3arg)==(ECL_SYM("&AUX",9)))) { goto L6; }
    value0 = si_simple_program_error(1, VV[12]);
    return value0;
L6:;
    if (Null(ecl_memql(v3arg,VV[13]))) { goto L8; }
    T0 = ecl_cdr(v1lambda_list);
    value0 = L4parse_lambda_list(2, T0, ECL_T);
    return value0;
L8:;
    if (Null(v2post_keyword)) { goto L10; }
    T0 = ecl_cdr(v1lambda_list);
    value0 = L4parse_lambda_list(2, T0, ECL_T);
    return value0;
L10:;
    if (!(ECL_LISTP(v3arg))) { goto L12; }
    value0 = si_simple_program_error(1, VV[14]);
    return value0;
L12:;
    T0 = ecl_cdr(v1lambda_list);
    value0 = L4parse_lambda_list(1, T0);
    return value0;
   }
  }
 }
}
/*      function definition for VALID-DECLARATION-P                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L5valid_declaration_p(cl_object v1decl)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_car(v1decl);
  if (!((T0)==(ECL_SYM("OPTIMIZE",615)))) { goto L2; }
  {
   cl_object v2item;
   cl_object v3;
   v2item = ECL_NIL;
   {
    cl_object v4;
    v4 = v1decl;
    if (ecl_unlikely(!ECL_LISTP(v4))) FEtype_error_list(v4);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v3 = v4;
   }
L8:;
   if (!(ecl_endp(v3))) { goto L10; }
   goto L9;
L10:;
   v2item = _ecl_car(v3);
   {
    cl_object v4;
    v4 = _ecl_cdr(v3);
    if (ecl_unlikely(!ECL_LISTP(v4))) FEtype_error_list(v4);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v3 = v4;
   }
   if (ECL_ATOM(v2item)) { goto L18; }
   if (!(ECL_CONSP(v2item))) { goto L22; }
   T0 = ecl_car(v2item);
   if ((ecl_memql(T0,VV[15]))!=ECL_NIL) { goto L18; }
   goto L19;
L22:;
   goto L19;
L19:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L18:;
   goto L8;
L9:;
   value0 = ECL_T;
   cl_env_copy->nvalues = 1;
   return value0;
  }
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for LAMBDA-LIST-REQUIRED-ARGUMENTS        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L6lambda_list_required_arguments(cl_object v1lambda_list)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = si_process_lambda_list(v1lambda_list, ECL_T);
  value0 = ecl_cdr(T0);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function SHARED-INITIALIZE                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC8shared_initialize(cl_narg narg, cl_object v1gfun, cl_object v2slot_names, ...)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 {
  cl_object v3name;
  cl_object v4l_l_p;
  cl_object v5argument_precedence_order;
  cl_object v6a_o_p;
  cl_object v7documentation;
  cl_object v8declarations;
  cl_object v9method_class;
  ecl_va_list args; ecl_va_start(args,v2slot_names,narg,2);
  {
   cl_object keyvars[12];
   cl_parse_key(args,6,LC8shared_initializekeys,keyvars,NULL,TRUE);
   ecl_va_end(args);
   v3name = keyvars[0];
   env0 = ECL_NIL;
   CLV0 = env0 = CONS(keyvars[1],env0);           /*  LAMBDA-LIST     */
   v4l_l_p = keyvars[7];
   v5argument_precedence_order = keyvars[2];
   v6a_o_p = keyvars[8];
   v7documentation = keyvars[3];
   v8declarations = keyvars[4];
   if (Null(keyvars[11])) {
    v9method_class = cl_find_class(1, ECL_SYM("METHOD",956));
   } else {
    v9method_class = keyvars[5];
   }
  }
  {
   cl_object v10gfun_name;
   if (Null(cl_slot_boundp(v1gfun, ECL_SYM("NAME",1596)))) { goto L3; }
   v10gfun_name = cl_slot_value(v1gfun, ECL_SYM("NAME",1596));
   goto L2;
L3:;
   value0 = v3name;
   if ((value0)!=ECL_NIL) { goto L6; }
   v10gfun_name = VV[18];
   goto L2;
L6:;
   v10gfun_name = value0;
   goto L2;
L2:;
   if (Null(v6a_o_p)) { goto L8; }
   if ((v4l_l_p)!=ECL_NIL) { goto L10; }
   si_simple_program_error(2, VV[19], v10gfun_name);
L10:;
   {
    cl_object v11;
    v11 = L6lambda_list_required_arguments(ECL_CONS_CAR(CLV0));
    goto L15;
L14:;
    {
     cl_object v12l;
     v12l = ecl_car(v11);
     T0 = cl_count(2, v12l, v5argument_precedence_order);
     if ((ecl_to_fixnum(T0))==(1)) { goto L19; }
     si_simple_program_error(4, VV[20], v10gfun_name, v12l, v5argument_precedence_order);
L19:;
    }
    v11 = ecl_cdr(v11);
L15:;
    if (Null(v11)) { goto L23; }
    goto L14;
L23:;
   }
L8:;
   T0 = (VV[16]->symbol.gfdef);
   if ((cl_every(2, T0, v8declarations))!=ECL_NIL) { goto L25; }
   si_simple_program_error(3, VV[21], v10gfun_name, v8declarations);
L25:;
   if (v7documentation==ECL_NIL) { goto L28; }
   if (ECL_STRINGP(v7documentation)) { goto L28; }
   T0 = cl_list(2, v10gfun_name, v7documentation);
   cl_error(9, ECL_SYM("SIMPLE-TYPE-ERROR",775), ECL_SYM("FORMAT-CONTROL",1263), VV[22], ECL_SYM("FORMAT-ARGUMENTS",1262), T0, ECL_SYM("DATUM",1236), v7documentation, ECL_SYM("EXPECTED-TYPE",1254), VV[23]);
L28:;
   T0 = cl_find_class(1, ECL_SYM("METHOD",956));
   if ((si_subclassp(2, v9method_class, T0))!=ECL_NIL) { goto L31; }
   T0 = cl_list(2, v10gfun_name, v9method_class);
   cl_error(9, ECL_SYM("SIMPLE-TYPE-ERROR",775), ECL_SYM("FORMAT-CONTROL",1263), VV[24], ECL_SYM("FORMAT-ARGUMENTS",1262), T0, ECL_SYM("DATUM",1236), v9method_class, ECL_SYM("EXPECTED-TYPE",1254), ECL_SYM("METHOD",956));
L31:;
   if (Null(v4l_l_p)) { goto L33; }
   if (Null(cl_slot_boundp(v1gfun, VV[25]))) { goto L33; }
   {
    cl_object v11;
    v11 = ecl_make_cclosure_va((cl_objectfn)LC7__lambda67,env0,Cblock,1);
    T0 = v11;
   }
   {
    cl_object v11;
    v11 = (ECL_SYM("METHOD-LAMBDA-LIST",1594)->symbol.gfdef);
    {
     cl_object v12;
     cl_object v13;
     cl_object v14;
     v12 = ecl_function_dispatch(cl_env_copy,ECL_SYM("GENERIC-FUNCTION-METHODS",1585))(1, v1gfun) /*  GENERIC-FUNCTION-METHODS */;
     v13 = ECL_NIL;
     {
      cl_object v15;
      v15 = v12;
      if (ecl_unlikely(!ECL_LISTP(v15))) FEtype_error_list(v15);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v14 = v15;
     }
     {
      cl_object v15;
      cl_object v16;
      v15 = ecl_list1(ECL_NIL);
      v16 = v15;
L47:;
      if (!(ecl_endp(v14))) { goto L49; }
      goto L48;
L49:;
      v13 = _ecl_car(v14);
      {
       cl_object v17;
       v17 = _ecl_cdr(v14);
       if (ecl_unlikely(!ECL_LISTP(v17))) FEtype_error_list(v17);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v14 = v17;
      }
      {
       cl_object v17;
       v17 = v16;
       if (ecl_unlikely(ECL_ATOM(v17))) FEtype_error_cons(v17);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       T2 = v17;
      }
      T3 = ecl_function_dispatch(cl_env_copy,v11)(1, v13);
      v16 = ecl_list1(T3);
      (ECL_CONS_CDR(T2)=v16,T2);
      goto L47;
L48:;
      T1 = ecl_cdr(v15);
      goto L38;
     }
    }
   }
L38:;
   if ((cl_every(2, T0, T1))!=ECL_NIL) { goto L33; }
   si_simple_program_error(3, VV[26], v1gfun, ECL_CONS_CAR(CLV0));
L33:;
   if (Null(ecl_symbol_value(ECL_SYM("*NEXT-METHODS*",1536)))) { goto L66; }
   T0 = ecl_car(ecl_symbol_value(ECL_SYM("*NEXT-METHODS*",1536)));
   T1 = ecl_cdr(ecl_symbol_value(ECL_SYM("*NEXT-METHODS*",1536)));
   ecl_function_dispatch(cl_env_copy,T0)(2, ecl_symbol_value(ECL_SYM(".COMBINED-METHOD-ARGS.",1534)), T1);
   goto L65;
L66:;
   cl_error(1, VV[27]);
L65:;
   {
    cl_object v11combination;
    v11combination = ecl_function_dispatch(cl_env_copy,ECL_SYM("GENERIC-FUNCTION-METHOD-COMBINATION",1584))(1, v1gfun) /*  GENERIC-FUNCTION-METHOD-COMBINATION */;
    if ((si_of_class_p(2, v11combination, ECL_SYM("METHOD-COMBINATION",958)))!=ECL_NIL) { goto L69; }
    {
     cl_object v12;
     T0 = ecl_car(v11combination);
     T1 = ecl_cdr(v11combination);
     v12 = ecl_function_dispatch(cl_env_copy,ECL_SYM("FIND-METHOD-COMBINATION",1575))(3, v1gfun, T0, T1) /*  FIND-METHOD-COMBINATION */;
     (cl_env_copy->function=ECL_CONS_CAR(VV[47]))->cfun.entry(2, v12, v1gfun) /*  (SETF GENERIC-FUNCTION-METHOD-COMBINATION) */;
    }
   }
L69:;
   if (Null(v4l_l_p)) { goto L73; }
   if ((v6a_o_p)!=ECL_NIL) { goto L73; }
   {
    cl_object v11;
    v11 = L6lambda_list_required_arguments(ECL_CONS_CAR(CLV0));
    (cl_env_copy->function=ECL_CONS_CAR(VV[48]))->cfun.entry(2, v11, v1gfun) /*  (SETF GENERIC-FUNCTION-ARGUMENT-PRECEDENCE-ORDER) */;
   }
L73:;
   ecl_function_dispatch(cl_env_copy,VV[49])(1, v1gfun) /*  SET-GENERIC-FUNCTION-DISPATCH */;
   value0 = v1gfun;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      closure LAMBDA67                                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC7__lambda67(cl_narg narg, cl_object v1x, ...)
{
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV0 = env0;                                     /*  LAMBDA-LIST     */
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=1)) FEwrong_num_arguments_anonym();
 {
TTL:
  value0 = ecl_function_dispatch(cl_env_copy,VV[50])(2, ECL_CONS_CAR(CLV0), v1x) /*  CONGRUENT-LAMBDA-P */;
  return value0;
 }
 }
}
/*      local function SHARED-INITIALIZE                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC9shared_initialize(cl_narg narg, cl_object v1gfun, cl_object v2slot_names, ...)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 {
  cl_object v3initargs;
  ecl_va_list args; ecl_va_start(args,v2slot_names,narg,2);
  v3initargs = cl_grab_rest_args(args);
  ecl_va_end(args);
  if (Null(ecl_symbol_value(ECL_SYM("*NEXT-METHODS*",1536)))) { goto L2; }
  T0 = ecl_car(ecl_symbol_value(ECL_SYM("*NEXT-METHODS*",1536)));
  T1 = ecl_cdr(ecl_symbol_value(ECL_SYM("*NEXT-METHODS*",1536)));
  ecl_function_dispatch(cl_env_copy,T0)(2, ecl_symbol_value(ECL_SYM(".COMBINED-METHOD-ARGS.",1534)), T1);
  goto L1;
L2:;
  cl_error(1, VV[27]);
L1:;
  if (Null(ecl_function_dispatch(cl_env_copy,ECL_SYM("GENERIC-FUNCTION-METHODS",1585))(1, v1gfun) /*  GENERIC-FUNCTION-METHODS */)) { goto L5; }
  ecl_function_dispatch(cl_env_copy,VV[51])(1, v1gfun) /*  COMPUTE-G-F-SPEC-LIST */;
L5:;
  ecl_function_dispatch(cl_env_copy,VV[52])(2, v1gfun, v3initargs) /*  UPDATE-DEPENDENTS */;
  value0 = v1gfun;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for ASSOCIATE-METHODS-TO-GFUN             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L10associate_methods_to_gfun(cl_narg narg, cl_object v1name, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2methods;
  ecl_va_list args; ecl_va_start(args,v1name,narg,1);
  v2methods = cl_grab_rest_args(args);
  ecl_va_end(args);
  {
   cl_object v3gfun;
   v3gfun = cl_fdefinition(v1name);
   {
    cl_object v4;
    v4 = v2methods;
    goto L6;
L5:;
    {
     cl_object v5method;
     v5method = ecl_car(v4);
     {
      cl_object v6;
      T0 = ecl_function_dispatch(cl_env_copy,VV[54])(1, v5method) /*  METHOD-PLIST */;
      v6 = si_put_f(T0, ECL_T, VV[28]);
      (cl_env_copy->function=ECL_CONS_CAR(VV[55]))->cfun.entry(2, v6, v5method) /*  (SETF METHOD-PLIST) */;
     }
    }
    v4 = ecl_cdr(v4);
L6:;
    if (Null(v4)) { goto L15; }
    goto L5;
L15:;
   }
   value0 = v3gfun;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function ENSURE-GENERIC-FUNCTION-USING-CLASS            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC11ensure_generic_function_using_class(cl_narg narg, cl_object v1gfun, cl_object v2name, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 {
  cl_object v3args;
  cl_object v4method_class;
  cl_object v5method_class_p;
  cl_object v6generic_function_class;
  cl_object v7delete_methods;
  ecl_va_list args; ecl_va_start(args,v2name,narg,2);
  {
   cl_object keyvars[6];
   cl_parse_key(args,3,LC11ensure_generic_function_using_classkeys,keyvars,(cl_object*)&v3args,TRUE);
   ecl_va_end(args);
   if (Null(keyvars[3])) {
    v4method_class = ECL_SYM("STANDARD-METHOD",977);
   } else {
    v4method_class = keyvars[0];
   }
   v5method_class_p = keyvars[3];
   if (Null(keyvars[4])) {
    v6generic_function_class = cl_class_of(v1gfun);
   } else {
    v6generic_function_class = keyvars[1];
   }
   v7delete_methods = keyvars[2];
  }
  v3args = cl_copy_list(v3args);
  {
   cl_object v9;
   cl_object v10;                                 /*  FLAG            */
   value0 = si_rem_f(v3args, ECL_SYM("GENERIC-FUNCTION-CLASS",994));
   {
    v9 = value0;
    v10 = cl_env_copy->values[1];
   }
   v3args = v9;
  }
  {
   cl_object v9;
   cl_object v10;                                 /*  FLAG            */
   value0 = si_rem_f(v3args, ECL_SYM("DECLARE",988));
   {
    v9 = value0;
    v10 = cl_env_copy->values[1];
   }
   v3args = v9;
  }
  {
   cl_object v9;
   cl_object v10;                                 /*  FLAG            */
   value0 = si_rem_f(v3args, VV[29]);
   {
    v9 = value0;
    v10 = cl_env_copy->values[1];
   }
   v3args = v9;
  }
  {
   cl_object v9;
   cl_object v10;                                 /*  FLAG            */
   value0 = si_rem_f(v3args, VV[0]);
   {
    v9 = value0;
    v10 = cl_env_copy->values[1];
   }
   v3args = v9;
  }
  if (!(ECL_SYMBOLP(v6generic_function_class))) { goto L21; }
  v6generic_function_class = cl_find_class(1, v6generic_function_class);
L21:;
  T0 = cl_find_class(1, ECL_SYM("GENERIC-FUNCTION",947));
  if ((si_subclassp(2, v6generic_function_class, T0))!=ECL_NIL) { goto L24; }
  cl_error(2, VV[30], v6generic_function_class);
L24:;
  if (Null(v5method_class_p)) { goto L26; }
  if (!(ECL_SYMBOLP(v4method_class))) { goto L26; }
  T0 = cl_find_class(1, v4method_class);
  v3args = cl_listX(3, ECL_SYM("METHOD-CLASS",1004), T0, v3args);
L26:;
  if (Null(v7delete_methods)) { goto L30; }
  {
   cl_object v8;
   T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("GENERIC-FUNCTION-METHODS",1585))(1, v1gfun) /*  GENERIC-FUNCTION-METHODS */;
   v8 = cl_copy_list(T0);
   goto L35;
L34:;
   {
    cl_object v9m;
    v9m = ecl_car(v8);
    T0 = ecl_function_dispatch(cl_env_copy,VV[54])(1, v9m) /*  METHOD-PLIST */;
    if (Null(cl_getf(2, T0, VV[28]))) { goto L39; }
    (cl_env_copy->function=(ECL_SYM("REMOVE-METHOD",966)->symbol.gfdef))->cfun.entry(2, v1gfun, v9m) /*  REMOVE-METHOD */;
L39:;
   }
   v8 = ecl_cdr(v8);
L35:;
   if (Null(v8)) { goto L43; }
   goto L34;
L43:;
  }
L30:;
  T0 = cl_class_of(v1gfun);
  if (!((T0)==(v6generic_function_class))) { goto L45; }
  T0 = (ECL_SYM("REINITIALIZE-INSTANCE",965)->symbol.gfdef);
  value0 = cl_apply(3, T0, v1gfun, v3args);
  return value0;
L45:;
  T0 = (ECL_SYM("CHANGE-CLASS",934)->symbol.gfdef);
  value0 = cl_apply(4, T0, v1gfun, v6generic_function_class, v3args);
  return value0;
 }
}
/*      local function ENSURE-GENERIC-FUNCTION-USING-CLASS            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC12ensure_generic_function_using_class(cl_narg narg, cl_object v1gfun, cl_object v2name, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 {
  cl_object v3args;
  cl_object v4method_class;
  cl_object v5method_class_p;
  cl_object v6generic_function_class;
  cl_object v7delete_methods;
  ecl_va_list args; ecl_va_start(args,v2name,narg,2);
  {
   cl_object keyvars[6];
   cl_parse_key(args,3,LC12ensure_generic_function_using_classkeys,keyvars,(cl_object*)&v3args,TRUE);
   ecl_va_end(args);
   if (Null(keyvars[3])) {
    v4method_class = ECL_SYM("STANDARD-METHOD",977);
   } else {
    v4method_class = keyvars[0];
   }
   v5method_class_p = keyvars[3];
   if (Null(keyvars[4])) {
    v6generic_function_class = ECL_SYM("STANDARD-GENERIC-FUNCTION",976);
   } else {
    v6generic_function_class = keyvars[1];
   }
   v7delete_methods = keyvars[2];
  }
  v3args = cl_copy_list(v3args);
  {
   cl_object v9;
   cl_object v10;                                 /*  FLAG            */
   value0 = si_rem_f(v3args, ECL_SYM("GENERIC-FUNCTION-CLASS",994));
   {
    v9 = value0;
    v10 = cl_env_copy->values[1];
   }
   v3args = v9;
  }
  {
   cl_object v9;
   cl_object v10;                                 /*  FLAG            */
   value0 = si_rem_f(v3args, ECL_SYM("DECLARE",988));
   {
    v9 = value0;
    v10 = cl_env_copy->values[1];
   }
   v3args = v9;
  }
  {
   cl_object v9;
   cl_object v10;                                 /*  FLAG            */
   value0 = si_rem_f(v3args, VV[29]);
   {
    v9 = value0;
    v10 = cl_env_copy->values[1];
   }
   v3args = v9;
  }
  {
   cl_object v9;
   cl_object v10;                                 /*  FLAG            */
   value0 = si_rem_f(v3args, VV[0]);
   {
    v9 = value0;
    v10 = cl_env_copy->values[1];
   }
   v3args = v9;
  }
  if (Null(v5method_class_p)) { goto L21; }
  if (!(ECL_SYMBOLP(v6generic_function_class))) { goto L21; }
  T0 = cl_find_class(1, v4method_class);
  v3args = cl_listX(3, ECL_SYM("METHOD-CLASS",1004), T0, v3args);
L21:;
  T0 = (ECL_SYM("MAKE-INSTANCE",951)->symbol.gfdef);
  value0 = cl_apply(5, T0, v6generic_function_class, ECL_SYM("NAME",1300), v2name, v3args);
  return value0;
 }
}
/*      function definition for ENSURE-GENERIC-FUNCTION               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L13ensure_generic_function(cl_narg narg, cl_object v1name, ...)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2args;
  ecl_va_list args; ecl_va_start(args,v1name,narg,1);
  cl_parse_key(args,0,NULL,NULL,(cl_object*)&v2args,TRUE);
  ecl_va_end(args);
  {
   cl_object v3gfun;
   v3gfun = si_traced_old_definition(v1name);
   if ((ecl_function_dispatch(cl_env_copy,VV[60])(1, v1name) /*  LEGAL-GENERIC-FUNCTION-NAME-P */)!=ECL_NIL) { goto L2; }
   value0 = si_simple_program_error(2, VV[31], v1name);
   return value0;
L2:;
   if ((cl_fboundp(v1name))!=ECL_NIL) { goto L4; }
   T0 = (ECL_SYM("ENSURE-GENERIC-FUNCTION-USING-CLASS",1569)->symbol.gfdef);
   T1 = cl_apply(4, T0, v3gfun, v1name, v2args);
   value0 = si_fset(2, v1name, T1);
   return value0;
L4:;
   value0 = v3gfun;
   if ((value0)!=ECL_NIL) { goto L11; }
   v3gfun = cl_fdefinition(v1name);
   T0 = v3gfun;
   goto L9;
L11:;
   T0 = value0;
   goto L9;
L9:;
   if (!(ECL_INSTANCEP(T0))) { goto L7; }
   T0 = (ECL_SYM("ENSURE-GENERIC-FUNCTION-USING-CLASS",1569)->symbol.gfdef);
   value0 = cl_apply(4, T0, v3gfun, v1name, v2args);
   return value0;
L7:;
   if (Null(cl_special_operator_p(v1name))) { goto L15; }
   value0 = si_simple_program_error(2, VV[32], v1name);
   return value0;
L15:;
   if (Null(cl_macro_function(1, v1name))) { goto L17; }
   value0 = si_simple_program_error(2, VV[33], v1name);
   return value0;
L17:;
   if ((ecl_symbol_value(VV[34]))!=ECL_NIL) { goto L19; }
   T0 = (ECL_SYM("ENSURE-GENERIC-FUNCTION-USING-CLASS",1569)->symbol.gfdef);
   T1 = cl_apply(4, T0, ECL_NIL, v1name, v2args);
   si_fset(2, v1name, T1);
   value0 = cl_fdefinition(v1name);
   return value0;
L19:;
   value0 = si_simple_program_error(2, VV[35], v1name);
   return value0;
  }
 }
}

#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/clos/generic.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _ecltFIrdKa7_MxGmqq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CLOS;GENERIC.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_ecltFIrdKa7_MxGmqq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  ecl_cmp_defmacro(VV[37]);                       /*  DEFGENERIC      */
  (void)0; /* No entry created for PARSE-DEFGENERIC */
  (void)0; /* No entry created for PARSE-GENERIC-OPTIONS */
  (void)0; /* No entry created for PARSE-LAMBDA-LIST */
  ecl_cmp_defun(VV[38]);                          /*  VALID-DECLARATION-P */
  ecl_cmp_defun(VV[39]);                          /*  LAMBDA-LIST-REQUIRED-ARGUMENTS */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC8shared_initialize,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[40])(5, ECL_SYM("SHARED-INITIALIZE",967), ECL_NIL, VVtemp[1], VVtemp[2], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC9shared_initialize,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[40])(5, ECL_SYM("SHARED-INITIALIZE",967), ECL_NIL, VVtemp[3], VVtemp[4], T0) /*  INSTALL-METHOD */;
 }
  ecl_cmp_defun(VV[53]);                          /*  ASSOCIATE-METHODS-TO-GFUN */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC11ensure_generic_function_using_class,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[40])(5, ECL_SYM("ENSURE-GENERIC-FUNCTION-USING-CLASS",1569), ECL_NIL, VVtemp[1], VVtemp[5], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC12ensure_generic_function_using_class,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[40])(5, ECL_SYM("ENSURE-GENERIC-FUNCTION-USING-CLASS",1569), ECL_NIL, VVtemp[6], VVtemp[7], T0) /*  INSTALL-METHOD */;
 }
  ecl_cmp_defun(VV[59]);                          /*  ENSURE-GENERIC-FUNCTION */
}
