/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CMP;CMPTYPE.LSP                                   */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/build/cmp/cmptype.eclh"
/*      function definition for AND-FORM-TYPE                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L1and_form_type(cl_narg narg, cl_object v1type, cl_object v2form, cl_object v3original_form, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<3)) FEwrong_num_arguments_anonym();
 {
  cl_object v4mode;
  cl_object v5format_string;
  cl_object v6format_args;
  ecl_va_list args; ecl_va_start(args,v3original_form,narg,3);
  {
   int i = 3;
   if (i >= narg) {
    v4mode = VV[0];
   } else {
    i++;
    v4mode = ecl_va_arg(args);
   }
   if (i >= narg) {
    v5format_string = VV[1];
   } else {
    i++;
    v5format_string = ecl_va_arg(args);
   }
  }
  v6format_args = cl_grab_rest_args(args);
  ecl_va_end(args);
  {
   cl_object v7type2;
   cl_object v8type1;
   v7type2 = ecl_function_dispatch(cl_env_copy,VV[36])(1, v2form) /*  C1FORM-PRIMARY-TYPE */;
   v8type1 = ecl_function_dispatch(cl_env_copy,VV[37])(2, v1type, v7type2) /*  TYPE-AND */;
   if (Null(v8type1)) { goto L6; }
   ecl_structure_set(v2form,VV[2],1,v8type1);
   goto L5;
L6:;
   if (!((v4mode)==(VV[0]))) { goto L9; }
   T0 = ecl_fdefinition(VV[38]);
   goto L8;
L9:;
   T0 = ecl_fdefinition(VV[39]);
L8:;
   ecl_function_dispatch(cl_env_copy,T0)(6, VV[3], v5format_string, v6format_args, v3original_form, v7type2, v1type);
L5:;
   value0 = v2form;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for DEFAULT-INIT                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L2default_init(cl_narg narg, cl_object v1var, ...)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2warn;
  va_list args; va_start(args,v1var);
  {
   int i = 1;
   if (i >= narg) {
    v2warn = ECL_NIL;
   } else {
    i++;
    v2warn = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v3new_value;
   {
    cl_object v4;
    v4 = ecl_function_dispatch(cl_env_copy,VV[41])(1, v1var) /*  VAR-TYPE */;
    {
     cl_object v5;
     v5 = VV[5];
     goto L8;
L7:;
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
      if (Null(v7)) { goto L10; }
      {
       cl_object v8;
       {
        cl_object v9;
        v9 = v7;
        if (ecl_unlikely(ECL_ATOM(v9))) FEtype_error_cons(v9);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        T1 = v9;
       }
       v8 = ECL_CONS_CAR(T1);
       if (Null(cl_subtypep(2, v4, v8))) { goto L10; }
       T0 = v7;
       goto L3;
      }
     }
L10:;
     v5 = ECL_CONS_CDR(v5);
L8:;
     if (v5==ECL_NIL) { goto L23; }
     goto L7;
L23:;
     T0 = ECL_NIL;
    }
   }
L3:;
   v3new_value = ecl_cdr(T0);
   if (Null(v3new_value)) { goto L25; }
   value0 = ecl_function_dispatch(cl_env_copy,VV[42])(3, v3new_value, VV[6], ECL_T) /*  C1CONSTANT-VALUE */;
   return value0;
L25:;
   value0 = ecl_function_dispatch(cl_env_copy,VV[43])(0) /*  C1NIL    */;
   return value0;
  }
 }
}
/*      function definition for LAMBDA-TYPE-CHECK-ASSOCIATE           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L3lambda_type_check_associate(cl_object v1fname, cl_object v2requireds, cl_object v3optionals, cl_object v4keywords, cl_object v5global_fun_p)
{
 cl_object T0, T1, T2, T3, T4;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v7;                                  /*  ARG-TYPES       */
   cl_object v8;                                  /*  FOUND           */
   if (Null(v5global_fun_p)) { goto L3; }
   value0 = ecl_function_dispatch(cl_env_copy,VV[45])(3, v1fname, ecl_symbol_value(VV[8]), v5global_fun_p) /*  GET-ARG-TYPES */;
   goto L1;
L3:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   goto L1;
L1:;
   {
    const int v9 = cl_env_copy->nvalues;
    v7 = value0;
    cl_object v10;
    v10 = (v9<=1)? ECL_NIL : cl_env_copy->values[1];
    v8 = v10;
   }
   if (Null(v8)) { goto L5; }
   {
    cl_object v10;                                /*  REQ-TYPES       */
    cl_object v11;                                /*  OPT-TYPES       */
    cl_object v12;                                /*  KEY-TYPES       */
    value0 = si_process_lambda_list(v7, ECL_SYM("FTYPE",395));
    {
     const int v13 = cl_env_copy->nvalues;
     v10 = value0;
     cl_object v14;
     v14 = (v13<=1)? ECL_NIL : cl_env_copy->values[1];
     v11 = v14;
     v14 = (v13<=4)? ECL_NIL : cl_env_copy->values[4];
     v12 = v14;
    }
    {
     cl_object v13var;
     cl_object v14;
     v13var = ECL_NIL;
     {
      cl_object v15;
      v15 = v2requireds;
      if (ecl_unlikely(!ECL_LISTP(v15))) FEtype_error_list(v15);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v14 = v15;
     }
     {
      cl_object v15;
      cl_object v16type;
      cl_object v17;
      v15 = ecl_cdr(v10);
      v16type = ECL_NIL;
      {
       cl_object v18;
       v18 = v15;
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
L20:;
       if (!(ecl_endp(v14))) { goto L22; }
       goto L21;
L22:;
       v13var = _ecl_car(v14);
       {
        cl_object v20;
        v20 = _ecl_cdr(v14);
        if (ecl_unlikely(!ECL_LISTP(v20))) FEtype_error_list(v20);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v14 = v20;
       }
       if (!(ecl_endp(v17))) { goto L30; }
       goto L21;
L30:;
       v16type = _ecl_car(v17);
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
       T2 = CONS(v13var,v16type);
       v19 = ecl_list1(T2);
       (ECL_CONS_CDR(T1)=v19,T1);
       goto L20;
L21:;
       T0 = ecl_cdr(v18);
       goto L8;
      }
     }
    }
L8:;
    {
     cl_object v13optional;
     cl_object v14;
     v13optional = ECL_NIL;
     {
      cl_object v15;
      v15 = v3optionals;
      if (ecl_unlikely(!ECL_LISTP(v15))) FEtype_error_list(v15);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v14 = v15;
     }
     {
      cl_object v15;
      cl_object v16type;
      cl_object v17;
      v15 = ecl_cdr(v11);
      v16type = ECL_NIL;
      {
       cl_object v18;
       v18 = v15;
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
L57:;
       if (!(ecl_endp(v14))) { goto L59; }
       goto L58;
L59:;
       v13optional = _ecl_car(v14);
       {
        cl_object v20;
        v20 = ecl_cdddr(v14);
        if (ecl_unlikely(!ECL_LISTP(v20))) FEtype_error_list(v20);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v14 = v20;
       }
       if (!(ecl_endp(v17))) { goto L67; }
       goto L58;
L67:;
       v16type = _ecl_car(v17);
       {
        cl_object v20;
        v20 = ecl_cdddr(v17);
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
        T2 = v20;
       }
       T3 = CONS(v13optional,v16type);
       v19 = ecl_list1(T3);
       (ECL_CONS_CDR(T2)=v19,T2);
       goto L57;
L58:;
       T1 = ecl_cdr(v18);
       goto L45;
      }
     }
    }
L45:;
    {
     cl_object v13key_list;
     v13key_list = v4keywords;
     {
      cl_object v14keyword;
      v14keyword = ECL_NIL;
      {
       cl_object v15key_var;
       v15key_var = ECL_NIL;
       {
        cl_object v16type;
        v16type = ECL_NIL;
        {
         cl_object v17;
         cl_object v18;
         v17 = ecl_list1(ECL_NIL);
         v18 = v17;
L89:;
         if (!(ECL_ATOM(v13key_list))) { goto L91; }
         goto L90;
L91:;
         v14keyword = ecl_car(v13key_list);
         v15key_var = ecl_cadr(v13key_list);
         {
          cl_object v19key_list;
          v19key_list = ecl_cdr(v12);
L100:;
          if (!(ECL_ATOM(v19key_list))) { goto L102; }
          goto L101;
L102:;
          T3 = ecl_car(v19key_list);
          if (!((v14keyword)==(T3))) { goto L104; }
          v16type = ecl_cadr(v19key_list);
          goto L98;
L104:;
          v19key_list = ecl_cddr(v19key_list);
          goto L100;
L101:;
          v16type = ECL_T;
          goto L98;
         }
L98:;
         {
          cl_object v19;
          v19 = v18;
          if (ecl_unlikely(ECL_ATOM(v19))) FEtype_error_cons(v19);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          T3 = v19;
         }
         T4 = CONS(v15key_var,v16type);
         v18 = ecl_list1(T4);
         (ECL_CONS_CDR(T3)=v18,T3);
         v13key_list = ecl_cddddr(v13key_list);
         goto L89;
L90:;
         T2 = ecl_cdr(v17);
         goto L82;
        }
       }
      }
     }
    }
L82:;
    value0 = cl_list(3, T0, T1, T2);
    return value0;
   }
L5:;
   {
    cl_object v9var;
    cl_object v10;
    v9var = ECL_NIL;
    {
     cl_object v11;
     v11 = v2requireds;
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
L126:;
     if (!(ecl_endp(v10))) { goto L128; }
     goto L127;
L128:;
     v9var = _ecl_car(v10);
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
      T1 = v13;
     }
     T2 = CONS(v9var,ECL_T);
     v12 = ecl_list1(T2);
     (ECL_CONS_CDR(T1)=v12,T1);
     goto L126;
L127:;
     T0 = ecl_cdr(v11);
     goto L119;
    }
   }
L119:;
   {
    cl_object v9optional;
    cl_object v10;
    v9optional = ECL_NIL;
    {
     cl_object v11;
     v11 = v3optionals;
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
L150:;
     if (!(ecl_endp(v10))) { goto L152; }
     goto L151;
L152:;
     v9optional = _ecl_car(v10);
     {
      cl_object v13;
      v13 = ecl_cdddr(v10);
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
      T2 = v13;
     }
     T3 = CONS(v9optional,ECL_T);
     v12 = ecl_list1(T3);
     (ECL_CONS_CDR(T2)=v12,T2);
     goto L150;
L151:;
     T1 = ecl_cdr(v11);
     goto L143;
    }
   }
L143:;
   {
    cl_object v9key_list;
    v9key_list = v4keywords;
    {
     cl_object v10key_var;
     v10key_var = ECL_NIL;
     {
      cl_object v11;
      cl_object v12;
      v11 = ecl_list1(ECL_NIL);
      v12 = v11;
L172:;
      if (!(ECL_ATOM(v9key_list))) { goto L174; }
      goto L173;
L174:;
      v10key_var = ecl_cadr(v9key_list);
      {
       cl_object v13;
       v13 = v12;
       if (ecl_unlikely(ECL_ATOM(v13))) FEtype_error_cons(v13);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       T3 = v13;
      }
      T4 = CONS(v10key_var,ECL_T);
      v12 = ecl_list1(T4);
      (ECL_CONS_CDR(T3)=v12,T3);
      v9key_list = ecl_cddddr(v9key_list);
      goto L172;
L173:;
      T2 = ecl_cdr(v11);
      goto L167;
     }
    }
   }
L167:;
   value0 = cl_list(3, T0, T1, T2);
   return value0;
  }
 }
}
/*      function definition for LAMBDA-TYPE-CHECK-PRECISE             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L4lambda_type_check_precise(cl_object v1assoc_list, cl_object v2ts)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3record;
   cl_object v4;
   v3record = ECL_NIL;
   {
    cl_object v5;
    v5 = v1assoc_list;
    if (ecl_unlikely(!ECL_LISTP(v5))) FEtype_error_list(v5);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v4 = v5;
   }
   {
    cl_object v5var;
    v5var = ECL_NIL;
    {
     cl_object v6type;
     v6type = ECL_NIL;
L8:;
     if (!(ecl_endp(v4))) { goto L10; }
     goto L9;
L10:;
     v3record = _ecl_car(v4);
     {
      cl_object v7;
      v7 = _ecl_cdr(v4);
      if (ecl_unlikely(!ECL_LISTP(v7))) FEtype_error_list(v7);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v4 = v7;
     }
     v5var = ecl_car(v3record);
     T0 = ecl_function_dispatch(cl_env_copy,VV[47])(1, v5var) /*  VAR-NAME */;
     v6type = ecl_assql(T0,v2ts);
     if (Null(v6type)) { goto L22; }
     {
      cl_object v7;
      v7 = v3record;
      if (ecl_unlikely(ECL_ATOM(v7))) FEtype_error_cons(v7);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      T0 = v7;
     }
     T1 = ecl_cdr(v6type);
     (ECL_CONS_CDR(T0)=T1,T0);
L22:;
     goto L8;
L9:;
    }
   }
  }
  value0 = v1assoc_list;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for LAMBDA-TYPE-CHECK-EXPAND              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L5lambda_type_check_expand(cl_object v1type_checks, cl_object v2policy_check_type, cl_object v3other_decls)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v4checks;
   v4checks = ECL_NIL;
   {
    cl_object v5new_auxs;
    v5new_auxs = ECL_NIL;
    {
     cl_object v6var;
     cl_object v7type;
     cl_object v8;
     v6var = ECL_NIL;
     v7type = ECL_NIL;
     {
      cl_object v9;
      v9 = v1type_checks;
      if (ecl_unlikely(!ECL_LISTP(v9))) FEtype_error_list(v9);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v8 = v9;
     }
     {
      cl_object v9name;
      v9name = ECL_NIL;
L9:;
      if (!(ecl_endp(v8))) { goto L11; }
      goto L10;
L11:;
      {
       cl_object v10;
       v10 = _ecl_car(v8);
       v6var = ecl_car(v10);
       v10 = ecl_cdr(v10);
       v7type = v10;
      }
      {
       cl_object v10;
       v10 = _ecl_cdr(v8);
       if (ecl_unlikely(!ECL_LISTP(v10))) FEtype_error_list(v10);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v8 = v10;
      }
      v9name = ecl_function_dispatch(cl_env_copy,VV[47])(1, v6var) /*  VAR-NAME */;
      if (!((v7type)==(ECL_T))) { goto L27; }
      v4checks = CONS(ECL_NIL,v4checks);
      goto L26;
L27:;
      if (Null(v2policy_check_type)) { goto L30; }
      {
       cl_object v10decl;
       cl_object v11;
       v10decl = ECL_NIL;
       {
        cl_object v12;
        v12 = v3other_decls;
        if (ecl_unlikely(!ECL_LISTP(v12))) FEtype_error_list(v12);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v11 = v12;
       }
L37:;
       if (!(ecl_endp(v11))) { goto L39; }
       goto L38;
L39:;
       v10decl = _ecl_car(v11);
       {
        cl_object v12;
        v12 = _ecl_cdr(v11);
        if (ecl_unlikely(!ECL_LISTP(v12))) FEtype_error_list(v12);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v11 = v12;
       }
       if (!(ECL_CONSP(v10decl))) { goto L47; }
       T0 = ecl_car(v10decl);
       if (!((T0)==(VV[11]))) { goto L47; }
       T0 = ecl_cdr(v10decl);
       if (Null(ecl_memql(v9name,T0))) { goto L47; }
       goto L30;
L47:;
       goto L37;
L38:;
       goto L31;
      }
L31:;
      ecl_structure_set(v6var,VV[12],11,ECL_T);
      T0 = cl_list(3, VV[13], v9name, v7type);
      v4checks = CONS(T0,v4checks);
      T0 = cl_list(3, ECL_SYM("TRULY-THE",2039), v7type, v9name);
      v5new_auxs = cl_listX(3, T0, v9name, v5new_auxs);
      goto L26;
L30:;
      {
       cl_object v10;
       T0 = ecl_function_dispatch(cl_env_copy,VV[41])(1, v6var) /*  VAR-TYPE */;
       v10 = ecl_function_dispatch(cl_env_copy,VV[37])(2, T0, v7type) /*  TYPE-AND */;
       ecl_structure_set(v6var,VV[12],11,v10);
      }
L26:;
      goto L9;
L10:;
      cl_env_copy->nvalues = 2;
      cl_env_copy->values[1] = v5new_auxs;
      cl_env_copy->values[0] = v4checks;
      return cl_env_copy->values[0];
     }
    }
   }
  }
 }
}
/*      function definition for EXTRACT-LAMBDA-TYPE-CHECKS            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L7extract_lambda_type_checks(cl_object v1fname, cl_object v2requireds, cl_object v3optionals, cl_object v4keywords, cl_object v5ts, cl_object v6other_decls)
{
 cl_object T0, T1, T2, T3, T4, T5, T6;
 cl_object env0 = ECL_NIL;
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  env0 = ECL_NIL;
  CLV0 = env0 = CONS(v5ts,env0);                  /*  TS              */
  {
   cl_object v7global_fun_p;
   cl_object v8policy_check_type;
   cl_object v9all_type_checks;
   cl_object v10checks;
   cl_object v11new_auxs;
   v7global_fun_p = ecl_member(VV[15],v6other_decls);
   v8policy_check_type = ecl_function_dispatch(cl_env_copy,VV[50])(0) /*  POLICY-CHECK-ARGUMENTS-TYPE */;
   {
    cl_object v12;
    {
     cl_object v13;
     v13 = ecl_make_cclosure_va((cl_objectfn)LC6__lambda63,env0,Cblock,1);
     v12 = v13;
    }
    {
     cl_object v13;
     cl_object v14;
     cl_object v15;
     v13 = L3lambda_type_check_associate(v1fname, v2requireds, v3optionals, v4keywords, v7global_fun_p);
     v14 = ECL_NIL;
     {
      cl_object v16;
      v16 = v13;
      if (ecl_unlikely(!ECL_LISTP(v16))) FEtype_error_list(v16);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v15 = v16;
     }
     {
      cl_object v16;
      cl_object v17;
      v16 = ecl_list1(ECL_NIL);
      v17 = v16;
L12:;
      if (!(ecl_endp(v15))) { goto L14; }
      goto L13;
L14:;
      v14 = _ecl_car(v15);
      {
       cl_object v18;
       v18 = _ecl_cdr(v15);
       if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v15 = v18;
      }
      {
       cl_object v18;
       v18 = v17;
       if (ecl_unlikely(ECL_ATOM(v18))) FEtype_error_cons(v18);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       T0 = v18;
      }
      T1 = ecl_function_dispatch(cl_env_copy,v12)(1, v14);
      v17 = ecl_list1(T1);
      (ECL_CONS_CDR(T0)=v17,T0);
      goto L12;
L13:;
      v9all_type_checks = ecl_cdr(v16);
      goto L3;
     }
    }
   }
L3:;
   v10checks = ECL_NIL;
   v11new_auxs = ECL_NIL;
   {
    cl_object v12i;
    cl_object v13;
    v12i = ECL_NIL;
    {
     cl_object v14;
     v14 = v9all_type_checks;
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
L40:;
     if (!(ecl_endp(v13))) { goto L42; }
     goto L41;
L42:;
     v12i = _ecl_car(v13);
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
     {
      cl_object v17;                              /*  CHECK           */
      cl_object v18;                              /*  NEW-AUX         */
      value0 = L5lambda_type_check_expand(v12i, v8policy_check_type, v6other_decls);
      {
       const int v19 = cl_env_copy->nvalues;
       v17 = value0;
       cl_object v20;
       v20 = (v19<=1)? ECL_NIL : cl_env_copy->values[1];
       v18 = v20;
      }
      v11new_auxs = ecl_nconc(v18,v11new_auxs);
      T1 = v17;
     }
     v15 = ecl_list1(T1);
     (ECL_CONS_CDR(T0)=v15,T0);
     goto L40;
L41:;
     v10checks = ecl_cdr(v14);
     goto L33;
    }
   }
L33:;
   if (Null(v11new_auxs)) { goto L61; }
   T0 = ecl_function_dispatch(cl_env_copy,VV[51])(1, ecl_symbol_value(VV[17])) /*  FUN-NAME */;
   {
    cl_object v12;
    cl_object v13i;
    cl_object v14;
    v12 = ecl_cdr(v11new_auxs);
    v13i = ECL_NIL;
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
L71:;
     if (!(ecl_endp(v14))) { goto L73; }
     goto L72;
L73:;
     v13i = _ecl_car(v14);
     {
      cl_object v17;
      v17 = ecl_cddr(v14);
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
     v16 = ecl_list1(v13i);
     (ECL_CONS_CDR(T2)=v16,T2);
     goto L71;
L72:;
     T1 = ecl_cdr(v15);
     goto L63;
    }
   }
L63:;
   T2 = cl_nreverse(T1);
   ecl_function_dispatch(cl_env_copy,VV[52])(3, VV[16], T0, T2) /*  CMPNOTE */;
L61:;
   T0 = ecl_car(v10checks);
   T1 = cl_nreverse(T0);
   T2 = ecl_cadr(v10checks);
   T3 = cl_nreverse(T2);
   T4 = ecl_caddr(v10checks);
   T5 = cl_nreverse(T4);
   T6 = cl_nreverse(v11new_auxs);
   cl_env_copy->nvalues = 4;
   cl_env_copy->values[3] = T6;
   cl_env_copy->values[2] = T5;
   cl_env_copy->values[1] = T3;
   cl_env_copy->values[0] = T1;
   return cl_env_copy->values[0];
  }
 }
}
/*      closure LAMBDA63                                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC6__lambda63(cl_narg narg, cl_object v1checks, ...)
{
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV0 = env0;                                     /*  TS              */
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=1)) FEwrong_num_arguments_anonym();
 {
TTL:
  value0 = L4lambda_type_check_precise(v1checks, ECL_CONS_CAR(CLV0));
  return value0;
 }
 }
}
/*      function definition for TYPE-ERROR-CHECK                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L8type_error_check(cl_object v1value, cl_object v2type)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!((v2type)==(ECL_SYM("CONS",253)))) { goto L1; }
  T0 = ecl_list1(v1value);
  value0 = cl_listX(3, ECL_SYM("C-INLINE",2063), T0, VV[19]);
  return value0;
L1:;
  if (!((v2type)==(ECL_SYM("ARRAY",98)))) { goto L3; }
  T0 = ecl_list1(v1value);
  value0 = cl_listX(3, ECL_SYM("C-INLINE",2063), T0, VV[20]);
  return value0;
L3:;
  if (!((v2type)==(ECL_SYM("LIST",483)))) { goto L5; }
  T0 = ecl_list1(v1value);
  value0 = cl_listX(3, ECL_SYM("C-INLINE",2063), T0, VV[21]);
  return value0;
L5:;
  if (!((v2type)==(ECL_SYM("SEQUENCE",743)))) { goto L7; }
  T0 = ecl_list1(v1value);
  value0 = cl_listX(3, ECL_SYM("C-INLINE",2063), T0, VV[22]);
  return value0;
L7:;
  T0 = cl_list(2, ECL_SYM("QUOTE",681), v2type);
  T1 = cl_list(3, ECL_SYM("TYPEP",877), v1value, T0);
  T2 = cl_list(2, ECL_SYM("QUOTE",681), v2type);
  T3 = cl_list(3, T1, T2, v1value);
  value0 = cl_listX(3, ECL_SYM("C-INLINE",2063), T3, VV[23]);
  return value0;
 }
}
/*      local function ASSERT-TYPE-IF-KNOWN                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC9assert_type_if_known(cl_object v1, cl_object v2env)
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
   cl_object v4value;
   cl_object v5type;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[55])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4value = v6;
   }
   if (!(v3==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[55])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5type = v6;
   }
   if (Null(v3)) { goto L14; }
   ecl_function_dispatch(cl_env_copy,VV[56])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L14:;
   {
    cl_object v7;                                 /*  TRIVIAL         */
    cl_object v8;                                 /*  VALID           */
    value0 = cl_subtypep(2, ECL_T, v5type);
    {
     v7 = value0;
     v8 = cl_env_copy->values[1];
    }
    if (Null(v7)) { goto L17; }
    if (Null(v8)) { goto L17; }
    value0 = v4value;
    cl_env_copy->nvalues = 1;
    return value0;
L17:;
    value0 = ecl_function_dispatch(cl_env_copy,VV[57])(2, v4value, v2env) /*  CONSTANT-VALUE-P */;
    {
     const int v9 = cl_env_copy->nvalues;
     v8 = value0;
     cl_object v10;
     v10 = (v9<=1)? ECL_NIL : cl_env_copy->values[1];
     v4value = v10;
    }
    if (Null(value0)) { goto L20; }
    value0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("MAYBE-QUOTE",1742))(1, v4value) /*  MAYBE-QUOTE */;
    return value0;
L20:;
    T0 = cl_list(2, VV[25], v4value);
    T1 = ecl_list1(T0);
    T2 = L10replace_invalid_types(v5type);
    T3 = L8type_error_check(VV[25], T2);
    T4 = cl_list(3, ECL_SYM("TRULY-THE",2039), v5type, VV[25]);
    value0 = cl_list(4, ECL_SYM("LET*",480), T1, T3, T4);
    return value0;
   }
  }
 }
}
/*      function definition for REPLACE-INVALID-TYPES                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L10replace_invalid_types(cl_object v1type)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ECL_ATOM(v1type))) { goto L1; }
  value0 = v1type;
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  {
   cl_object v2name;
   v2name = ecl_car(v1type);
   if (!((v2name)==(ECL_SYM("FUNCTION",398)))) { goto L4; }
   value0 = ECL_SYM("FUNCTION",398);
   cl_env_copy->nvalues = 1;
   return value0;
L4:;
   if (!((v2name)==(ECL_SYM("OR",616)))) { goto L11; }
   goto L8;
   goto L9;
L11:;
   goto L9;
L9:;
   if (!((v2name)==(ECL_SYM("AND",89)))) { goto L15; }
   goto L8;
   goto L13;
L15:;
   goto L13;
L13:;
   if (!((v2name)==(ECL_SYM("NOT",586)))) { goto L19; }
   goto L8;
   goto L17;
L19:;
   goto L17;
L17:;
   if (!((v2name)==(ECL_SYM("CONS",253)))) { goto L6; }
   goto L7;
L8:;
L7:;
   {
    cl_object v3;
    v3 = ecl_fdefinition(VV[31]);
    {
     cl_object v4;
     cl_object v5;
     cl_object v6;
     v4 = ecl_cdr(v1type);
     v5 = ECL_NIL;
     {
      cl_object v7;
      v7 = v4;
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
L31:;
      if (!(ecl_endp(v6))) { goto L33; }
      goto L32;
L33:;
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
      T2 = ecl_function_dispatch(cl_env_copy,v3)(1, v5);
      v8 = ecl_list1(T2);
      (ECL_CONS_CDR(T1)=v8,T1);
      goto L31;
L32:;
      T0 = ecl_cdr(v7);
      goto L22;
     }
    }
   }
L22:;
   value0 = CONS(v2name,T0);
   cl_env_copy->nvalues = 1;
   return value0;
L6:;
   value0 = v1type;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function OPTIONAL-TYPE-CHECK                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC11optional_type_check(cl_object v1, cl_object v2env)
{
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
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[55])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4value = v6;
   }
   if (!(v3==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[55])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5type = v6;
   }
   if (Null(v3)) { goto L14; }
   ecl_function_dispatch(cl_env_copy,VV[56])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L14:;
   if (Null(ecl_function_dispatch(cl_env_copy,VV[60])(0) /*  POLICY-ASSUME-RIGHT-TYPE */)) { goto L16; }
   value0 = v4value;
   cl_env_copy->nvalues = 1;
   return value0;
L16:;
   value0 = cl_list(3, VV[26], v4value, v5type);
   return value0;
  }
 }
}
/*      local function WITH-LET*-TYPE-CHECK                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC12with_let__type_check(cl_object v1, cl_object v2)
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
   cl_object v4triplets;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[55])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v5;
    v5 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4triplets = v5;
   }
   {
    cl_object v5var;
    cl_object v6value;
    cl_object v7type;
    cl_object v8;
    v5var = ECL_NIL;
    v6value = ECL_NIL;
    v7type = ECL_NIL;
    {
     cl_object v9;
     v9 = v4triplets;
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
L17:;
     if (!(ecl_endp(v8))) { goto L19; }
     goto L18;
L19:;
     {
      cl_object v11;
      v11 = _ecl_car(v8);
      v5var = ecl_car(v11);
      v11 = ecl_cdr(v11);
      v6value = ecl_car(v11);
      v11 = ecl_cdr(v11);
      v7type = ecl_car(v11);
     }
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
     T2 = cl_list(3, VV[26], v6value, v7type);
     T3 = cl_list(2, v5var, T2);
     v10 = ecl_list1(T3);
     (ECL_CONS_CDR(T1)=v10,T1);
     goto L17;
L18:;
     T0 = ecl_cdr(v9);
     goto L8;
    }
   }
L8:;
   {
    cl_object v5;
    v5 = (ECL_SYM("CAR",182)->symbol.gfdef);
    {
     cl_object v6;
     cl_object v7;
     v6 = ECL_NIL;
     {
      cl_object v8;
      v8 = v4triplets;
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
L51:;
      if (!(ecl_endp(v7))) { goto L53; }
      goto L52;
L53:;
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
       T2 = v10;
      }
      T3 = ecl_function_dispatch(cl_env_copy,v5)(1, v6);
      v9 = ecl_list1(T3);
      (ECL_CONS_CDR(T2)=v9,T2);
      goto L51;
L52:;
      T1 = ecl_cdr(v8);
      goto L43;
     }
    }
   }
L43:;
   T2 = CONS(VV[33],T1);
   T3 = cl_list(2, ECL_SYM("DECLARE",276), T2);
   value0 = cl_listX(4, ECL_SYM("LET*",480), T0, T3, v3);
   return value0;
  }
 }
}

#include "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/build/cmp/cmptype.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _ecl8V42fva7_1JoZTr51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CMP;CMPTYPE.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_ecl8V42fva7_1JoZTr51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  ecl_cmp_defun(VV[35]);                          /*  AND-FORM-TYPE   */
  ecl_cmp_defun(VV[40]);                          /*  DEFAULT-INIT    */
  ecl_cmp_defun(VV[44]);                          /*  LAMBDA-TYPE-CHECK-ASSOCIATE */
  ecl_cmp_defun(VV[46]);                          /*  LAMBDA-TYPE-CHECK-PRECISE */
  ecl_cmp_defun(VV[48]);                          /*  LAMBDA-TYPE-CHECK-EXPAND */
  ecl_cmp_defun(VV[49]);                          /*  EXTRACT-LAMBDA-TYPE-CHECKS */
  ecl_cmp_defun(VV[53]);                          /*  TYPE-ERROR-CHECK */
  ecl_cmp_defmacro(VV[54]);                       /*  ASSERT-TYPE-IF-KNOWN */
  ecl_cmp_defun(VV[58]);                          /*  REPLACE-INVALID-TYPES */
  ecl_cmp_defmacro(VV[59]);                       /*  OPTIONAL-TYPE-CHECK */
  ecl_cmp_defmacro(VV[61]);                       /*  WITH-LET*-TYPE-CHECK */
}
