/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CMP;CMPTYPE-ASSERT.LSP                            */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/build/cmp/cmptype-assert.eclh"
/*      function definition for C1COMPILER-TYPECASE                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L1c1compiler_typecase(cl_object v1args)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2form;
   v2form = ecl_car(v1args);
   {
    cl_object v4;                                 /*  CONSTANTP       */
    cl_object v5;                                 /*  VALUE           */
    value0 = ecl_function_dispatch(cl_env_copy,VV[28])(2, v2form, ecl_symbol_value(VV[0])) /*  CONSTANT-VALUE-P */;
    {
     const int v6 = cl_env_copy->nvalues;
     v4 = value0;
     cl_object v7;
     v7 = (v6<=1)? ECL_NIL : cl_env_copy->values[1];
     v5 = v7;
    }
    if (Null(v4)) { goto L1; }
    {
     cl_object v6;
     cl_object v7type;
     cl_object v8forms;
     cl_object v9;
     v6 = ecl_cdr(v1args);
     v7type = ECL_NIL;
     v8forms = ECL_NIL;
     {
      cl_object v10;
      v10 = v6;
      if (ecl_unlikely(!ECL_LISTP(v10))) FEtype_error_list(v10);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v9 = v10;
     }
L11:;
     if (!(ecl_endp(v9))) { goto L13; }
     goto L12;
L13:;
     {
      cl_object v10;
      v10 = _ecl_car(v9);
      v7type = ecl_car(v10);
      v10 = ecl_cdr(v10);
      v8forms = v10;
     }
     {
      cl_object v10;
      v10 = _ecl_cdr(v9);
      if (ecl_unlikely(!ECL_LISTP(v10))) FEtype_error_list(v10);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v9 = v10;
     }
     if (Null(cl_typep(2, v5, v7type))) { goto L26; }
     value0 = ecl_function_dispatch(cl_env_copy,VV[29])(1, v8forms) /*  C1PROGN */;
     return value0;
L26:;
     goto L11;
L12:;
     ecl_function_dispatch(cl_env_copy,VV[30])(2, ECL_SYM("FORMAT-CONTROL",1263), VV[1]) /*  BABOON */;
    }
   }
  }
L1:;
  {
   cl_object v2var_name;
   cl_object v3var;
   cl_object v4first_case;
   {
    cl_object v5;
    v5 = v1args;
    {
     cl_object v6;
     v6 = v5;
     if (ecl_unlikely(!ECL_LISTP(v6))) FEtype_error_list(v6);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
    }
    if (Null(v5)) { goto L35; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v1args = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L35:;
    v2var_name = v5;
   }
   v3var = ecl_function_dispatch(cl_env_copy,VV[31])(1, v2var_name) /*  C1VREF */;
   v4first_case = ecl_car(v1args);
   T0 = ecl_function_dispatch(cl_env_copy,VV[32])(1, v3var) /*  VAR-TYPE */;
   T1 = ecl_car(v4first_case);
   if (Null(cl_subtypep(2, T0, T1))) { goto L43; }
   T0 = ecl_cdr(v4first_case);
   value0 = ecl_function_dispatch(cl_env_copy,VV[29])(1, T0) /*  C1PROGN */;
   return value0;
L43:;
   {
    cl_object v5types;
    cl_object v6expressions;
    v5types = ECL_NIL;
    {
     cl_object v7type;
     cl_object v8forms;
     cl_object v9;
     v7type = ECL_NIL;
     v8forms = ECL_NIL;
     {
      cl_object v10;
      v10 = v1args;
      if (ecl_unlikely(!ECL_LISTP(v10))) FEtype_error_list(v10);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v9 = v10;
     }
     {
      cl_object v10c1form;
      v10c1form = ECL_NIL;
      {
       cl_object v11c1form_type;
       v11c1form_type = ECL_NIL;
       {
        cl_object v12;
        cl_object v13;
        v12 = ecl_list1(ECL_NIL);
        v13 = v12;
L56:;
        if (!(ecl_endp(v9))) { goto L58; }
        goto L57;
L58:;
        {
         cl_object v14;
         v14 = _ecl_car(v9);
         v7type = ecl_car(v14);
         v14 = ecl_cdr(v14);
         v8forms = v14;
        }
        {
         cl_object v14;
         v14 = _ecl_cdr(v9);
         if (ecl_unlikely(!ECL_LISTP(v14))) FEtype_error_list(v14);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         v9 = v14;
        }
        v10c1form = ecl_function_dispatch(cl_env_copy,VV[29])(1, v8forms) /*  C1PROGN */;
        v11c1form_type = ecl_function_dispatch(cl_env_copy,VV[33])(1, v10c1form) /*  C1FORM-PRIMARY-TYPE */;
        v5types = CONS(v11c1form_type,v5types);
        {
         cl_object v14;
         v14 = v13;
         if (ecl_unlikely(ECL_ATOM(v14))) FEtype_error_cons(v14);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         T0 = v14;
        }
        T1 = cl_list(2, v7type, v10c1form);
        v13 = ecl_list1(T1);
        (ECL_CONS_CDR(T0)=v13,T0);
        goto L56;
L57:;
        v6expressions = ecl_cdr(v12);
        goto L46;
       }
      }
     }
    }
L46:;
    T0 = ecl_fdefinition(VV[34]);
    T1 = cl_reduce(2, T0, v5types);
    value0 = ecl_function_dispatch(cl_env_copy,VV[35])(6, ECL_SYM("COMPILER-TYPECASE",1860), ECL_SYM("TYPE",1346), T1, VV[2], v3var, v6expressions) /*  MAKE-C1FORM* */;
    return value0;
   }
  }
 }
}
/*      function definition for C2COMPILER-TYPECASE                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L2c2compiler_typecase(cl_object v1c1form, cl_object v2var, cl_object v3expressions)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v4var_type;
   v4var_type = ecl_function_dispatch(cl_env_copy,VV[32])(1, v2var) /*  VAR-TYPE */;
   {
    cl_object v5type;
    cl_object v6form;
    cl_object v7;
    v5type = ECL_NIL;
    v6form = ECL_NIL;
    {
     cl_object v8;
     v8 = v3expressions;
     if (ecl_unlikely(!ECL_LISTP(v8))) FEtype_error_list(v8);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v7 = v8;
    }
L7:;
    if (!(ecl_endp(v7))) { goto L9; }
    goto L8;
L9:;
    {
     cl_object v8;
     v8 = _ecl_car(v7);
     v5type = ecl_car(v8);
     v8 = ecl_cdr(v8);
     v6form = ecl_car(v8);
    }
    {
     cl_object v8;
     v8 = _ecl_cdr(v7);
     if (ecl_unlikely(!ECL_LISTP(v8))) FEtype_error_list(v8);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v7 = v8;
    }
    if (!(ecl_eql(v5type,ECL_T))) { goto L28; }
    goto L24;
    goto L26;
L28:;
    goto L26;
L26:;
    if (!((v5type)==(ECL_SYM("OTHERWISE",617)))) { goto L31; }
    goto L24;
    goto L25;
L31:;
    goto L25;
L25:;
    if (Null(cl_subtypep(2, v4var_type, v5type))) { goto L22; }
    goto L23;
L24:;
L23:;
    value0 = ecl_function_dispatch(cl_env_copy,VV[37])(1, v6form) /*  C2EXPR */;
    return value0;
L22:;
    goto L7;
L8:;
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      function definition for SIMPLE-TYPE-ASSERTION                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L3simple_type_assertion(cl_object v1value, cl_object v2type)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3simple_form;
   T0 = ecl_assql(v2type,ecl_symbol_value(VV[7]));
   v3simple_form = ecl_cdr(T0);
   if (Null(v3simple_form)) { goto L3; }
   T0 = ecl_list1(v1value);
   value0 = cl_listX(6, ECL_SYM("C-INLINE",2063), T0, VV[8], ECL_SYM("VOID",1414), v3simple_form, VV[9]);
   return value0;
L3:;
   T0 = cl_list(2, ECL_SYM("QUOTE",681), v2type);
   T1 = cl_list(3, ECL_SYM("TYPEP",877), v1value, T0);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), v2type);
   T3 = cl_list(3, T1, T2, v1value);
   value0 = cl_listX(3, ECL_SYM("C-INLINE",2063), T3, VV[10]);
   return value0;
  }
 }
}
/*      function definition for EXPAND-TYPE-ASSERTION                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L4expand_type_assertion(cl_object v1value, cl_object v2type, cl_object v3env, cl_object v4compulsory)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ECL_SYMBOLP(v1value))) { goto L3; }
  if ((ecl_function_dispatch(cl_env_copy,VV[40])(1, v1value) /*  SPECIAL-VARIABLE-P */)!=ECL_NIL) { goto L3; }
  if (Null(ecl_function_dispatch(cl_env_copy,VV[41])(1, v1value) /*  SYMBOL-MACRO-P */)) { goto L1; }
  goto L2;
L3:;
L2:;
  T0 = cl_list(2, VV[12], v1value);
  T1 = ecl_list1(T0);
  T2 = L4expand_type_assertion(VV[12], v2type, v3env, v4compulsory);
  value0 = cl_list(4, ECL_SYM("LET*",480), T1, VV[13], T2);
  return value0;
L1:;
  if (Null(v4compulsory)) { goto L6; }
  value0 = L3simple_type_assertion(v1value, v2type);
  return value0;
L6:;
  T0 = ecl_list1(v2type);
  T1 = L3simple_type_assertion(v1value, v2type);
  T2 = cl_list(2, ECL_T, T1);
  value0 = cl_list(4, ECL_SYM("COMPILER-TYPECASE",1860), v1value, T0, T2);
  return value0;
 }
}
/*      function definition for C1CHECKED-VALUE                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L5c1checked_value(cl_object v1args)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2type;
   cl_object v3value;
   cl_object v4form;
   cl_object v5form_type;
   cl_object v6and_type;
   {
    cl_object v7;
    v7 = v1args;
    {
     cl_object v8;
     v8 = v7;
     if (ecl_unlikely(!ECL_LISTP(v8))) FEtype_error_list(v8);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
    }
    if (Null(v7)) { goto L6; }
    {
     cl_object v8;
     v8 = ECL_CONS_CDR(v7);
     v1args = v8;
     v7 = ECL_CONS_CAR(v7);
    }
L6:;
    v2type = v7;
   }
   {
    cl_object v7;
    v7 = v1args;
    {
     cl_object v8;
     v8 = v7;
     if (ecl_unlikely(!ECL_LISTP(v8))) FEtype_error_list(v8);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
    }
    if (Null(v7)) { goto L17; }
    {
     cl_object v8;
     v8 = ECL_CONS_CDR(v7);
     v1args = v8;
     v7 = ECL_CONS_CAR(v7);
    }
L17:;
    v3value = v7;
   }
   v4form = ECL_NIL;
   v5form_type = ECL_NIL;
   v6and_type = ECL_NIL;
   if ((ecl_function_dispatch(cl_env_copy,VV[43])(1, v1args) /*  TRIVIAL-TYPE-P */)!=ECL_NIL) { goto L28; }
   if ((ecl_function_dispatch(cl_env_copy,VV[44])(0) /*  POLICY-TYPE-ASSERTIONS */)!=ECL_NIL) { goto L26; }
   goto L27;
L28:;
L27:;
   value0 = v3value;
   cl_env_copy->nvalues = 1;
   return value0;
L26:;
   if (!(ECL_CONSP(v2type))) { goto L30; }
   T0 = ecl_car(v2type);
   if (!((T0)==(ECL_SYM("VALUES",897)))) { goto L30; }
   T0 = ecl_function_dispatch(cl_env_copy,VV[45])(1, v2type) /*  VALUES-TYPE-PRIMARY-TYPE */;
   v1args = cl_list(2, T0, v3value);
   goto TTL;
L30:;
   if (Null(ecl_function_dispatch(cl_env_copy,VV[46])(0) /*  POLICY-EVALUATE-FORMS */)) { goto L35; }
   if (Null(cl_constantp(2, v3value, ecl_symbol_value(VV[0])))) { goto L35; }
   T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("CONSTANT-FORM-VALUE",2118))(2, v3value, ecl_symbol_value(VV[0])) /*  CONSTANT-FORM-VALUE */;
   if (Null(cl_typep(2, T0, v2type))) { goto L38; }
   value0 = v3value;
   cl_env_copy->nvalues = 1;
   return value0;
L38:;
   ecl_function_dispatch(cl_env_copy,VV[47])(3, VV[15], v3value, v2type) /*  CMPWARN */;
   T0 = cl_list(2, ECL_SYM("QUOTE",681), v2type);
   T1 = cl_list(2, ECL_SYM("QUOTE",681), v2type);
   T2 = cl_list(3, ECL_SYM("LIST",483), v3value, T1);
   T3 = cl_list(10, ECL_SYM("ERROR",339), VV[16], ECL_SYM("DATUM",1236), v3value, ECL_SYM("EXPECTED-TYPE",1254), T0, ECL_SYM("FORMAT-CONTROL",1263), VV[17], ECL_SYM("FORMAT-ARGUMENTS",1262), T2);
   value0 = ecl_function_dispatch(cl_env_copy,VV[48])(1, T3) /*  C1EXPR */;
   return value0;
L35:;
   v4form = ecl_function_dispatch(cl_env_copy,VV[48])(1, v3value) /*  C1EXPR */;
   v5form_type = ecl_function_dispatch(cl_env_copy,VV[33])(1, v4form) /*  C1FORM-PRIMARY-TYPE */;
   v6and_type = ecl_function_dispatch(cl_env_copy,VV[49])(2, v5form_type, v2type) /*  TYPE-AND */;
   if (!((v6and_type)==(v5form_type))) { goto L41; }
   value0 = v4form;
   cl_env_copy->nvalues = 1;
   return value0;
L41:;
   if (!(v6and_type==ECL_NIL)) { goto L49; }
   ecl_function_dispatch(cl_env_copy,VV[47])(3, VV[18], v3value, v2type) /*  CMPWARN */;
   value0 = v4form;
   cl_env_copy->nvalues = 1;
   return value0;
L49:;
   ecl_function_dispatch(cl_env_copy,VV[50])(3, VV[19], v3value, v2type) /*  CMPDEBUG */;
   {
    cl_object v7full_check;
    T0 = cl_list(2, VV[20], v3value);
    T1 = ecl_list1(T0);
    T2 = L4expand_type_assertion(VV[20], v2type, ecl_symbol_value(VV[0]), ECL_NIL);
    T3 = cl_list(3, ECL_SYM("TRULY-THE",2039), v2type, VV[20]);
    v7full_check = cl_list(5, ECL_SYM("LET*",480), T1, VV[21], T2, T3);
    T0 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v7full_check) /*  C1EXPR */;
    value0 = ecl_function_dispatch(cl_env_copy,VV[35])(7, ECL_SYM("CHECKED-VALUE",2040), ECL_SYM("TYPE",1346), v2type, VV[2], v2type, v4form, T0) /*  MAKE-C1FORM* */;
    return value0;
   }
  }
 }
}
/*      function definition for C2CHECKED-VALUE                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L6c2checked_value(cl_object v1c1form, cl_object v2type, cl_object v3value, cl_object v4let_form)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T1 = ecl_function_dispatch(cl_env_copy,VV[33])(1, v3value) /*  C1FORM-PRIMARY-TYPE */;
  if (Null(cl_subtypep(2, T1, v2type))) { goto L2; }
  T0 = v3value;
  goto L1;
L2:;
  T0 = v4let_form;
L1:;
  value0 = ecl_function_dispatch(cl_env_copy,VV[37])(1, T0) /*  C2EXPR */;
  return value0;
 }
}
/*      local function OPTIONAL-TYPE-ASSERTION                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC7optional_type_assertion(cl_object v1, cl_object v2env)
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
   ecl_function_dispatch(cl_env_copy,VV[53])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4value = v6;
   }
   if (!(v3==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[53])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5type = v6;
   }
   if (Null(v3)) { goto L14; }
   ecl_function_dispatch(cl_env_copy,VV[54])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L14:;
   if (Null(ecl_function_dispatch(cl_env_copy,VV[44])(1, v2env) /*  POLICY-TYPE-ASSERTIONS */)) { goto L16; }
   if ((ecl_function_dispatch(cl_env_copy,VV[43])(1, v5type) /*  TRIVIAL-TYPE-P */)!=ECL_NIL) { goto L16; }
   ecl_function_dispatch(cl_env_copy,VV[50])(3, VV[24], v4value, v5type) /*  CMPDEBUG */;
   value0 = cl_list(3, ECL_SYM("CHECKED-VALUE",2040), v5type, v4value);
   return value0;
L16:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function TYPE-ASSERTION                                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC8type_assertion(cl_object v1, cl_object v2env)
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
   ecl_function_dispatch(cl_env_copy,VV[53])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4value = v6;
   }
   if (!(v3==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[53])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5type = v6;
   }
   if (Null(v3)) { goto L14; }
   ecl_function_dispatch(cl_env_copy,VV[54])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L14:;
   ecl_function_dispatch(cl_env_copy,VV[50])(3, VV[24], v4value, v5type) /*  CMPDEBUG */;
   if ((ecl_function_dispatch(cl_env_copy,VV[43])(1, v5type) /*  TRIVIAL-TYPE-P */)!=ECL_NIL) { goto L17; }
   value0 = L4expand_type_assertion(v4value, v5type, v2env, ECL_T);
   return value0;
L17:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}

#include "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/build/cmp/cmptype-assert.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _ecl0nlTIoa7_fVoZTr51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CMP;CMPTYPE-ASSERT.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_ecl0nlTIoa7_fVoZTr51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  ecl_cmp_defun(VV[27]);                          /*  C1COMPILER-TYPECASE */
  ecl_cmp_defun(VV[36]);                          /*  C2COMPILER-TYPECASE */
  si_Xmake_constant(VV[7], VVtemp[1]);
  ecl_cmp_defun(VV[38]);                          /*  SIMPLE-TYPE-ASSERTION */
  ecl_cmp_defun(VV[39]);                          /*  EXPAND-TYPE-ASSERTION */
  ecl_cmp_defun(VV[42]);                          /*  C1CHECKED-VALUE */
  ecl_cmp_defun(VV[51]);                          /*  C2CHECKED-VALUE */
  ecl_cmp_defmacro(VV[52]);                       /*  OPTIONAL-TYPE-ASSERTION */
  ecl_cmp_defmacro(VV[55]);                       /*  TYPE-ASSERTION  */
}
