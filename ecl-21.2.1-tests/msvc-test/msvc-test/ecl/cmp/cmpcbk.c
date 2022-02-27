/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CMP;CMPCBK.LSP                                    */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/build/cmp/cmpcbk.eclh"
/*      function definition for FOREIGN-ELT-TYPE-CODE                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L1foreign_elt_type_code(cl_object v1type)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2x;
   v2x = ecl_assql(v1type,ecl_symbol_value(VV[0]));
   if ((v2x)!=ECL_NIL) { goto L2; }
   ecl_function_dispatch(cl_env_copy,VV[39])(2, VV[1], v1type) /*  CMPERR */;
L2:;
   value0 = ecl_cdr(v2x);
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for C1-DEFCALLBACK                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L2c1_defcallback(cl_object v1args)
{
 cl_object T0, T1, T2, T3, T4, T5, T6;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2;
   cl_object v3name;
   cl_object v4return_type;
   cl_object v5arg_list;
   v2 = v1args;
   if (!(v2==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[41])(1, v1args) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v6;
    v6 = ecl_car(v2);
    v2 = ecl_cdr(v2);
    v3name = v6;
   }
   if (!(v2==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[41])(1, v1args) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v6;
    v6 = ecl_car(v2);
    v2 = ecl_cdr(v2);
    v4return_type = v6;
   }
   if (!(v2==ECL_NIL)) { goto L15; }
   ecl_function_dispatch(cl_env_copy,VV[41])(1, v1args) /*  DM-TOO-FEW-ARGUMENTS */;
L15:;
   {
    cl_object v6;
    v6 = ecl_car(v2);
    v2 = ecl_cdr(v2);
    v5arg_list = v6;
   }
   if (!((v4return_type)==(ECL_NIL))) { goto L21; }
   v4return_type = ECL_SYM("VOID",1414);
   goto L20;
L21:;
   if (!(ECL_CONSP(v4return_type))) { goto L20; }
   {
    cl_object v6;
    v6 = ecl_car(v4return_type);
    if (!((v6)==(ECL_SYM("*",20)))) { goto L30; }
    goto L27;
    goto L28;
L30:;
    goto L28;
L28:;
    if (!((v6)==(ECL_SYM("ARRAY",98)))) { goto L20; }
    goto L24;
L27:;
   }
L24:;
   v4return_type = ECL_SYM("POINTER-VOID",1410);
L20:;
   {
    cl_object v6;
    cl_object v7;
    cl_object v8;
    cl_object v9arg_types;
    cl_object v10arg_type_constants;
    cl_object v11arg_variables;
    {
     cl_fixnum v12;
     v12 = ecl_length(ecl_symbol_value(VV[6]));
     v6 = cl_format(3, ECL_NIL, VV[5], ecl_make_fixnum(v12));
    }
    if (!(ECL_CONSP(v3name))) { goto L36; }
    v7 = ecl_car(v3name);
    goto L35;
L36:;
    v7 = v3name;
L35:;
    if (!(ECL_CONSP(v3name))) { goto L39; }
    v8 = ecl_cadr(v3name);
    goto L38;
L39:;
    v8 = ECL_SYM("CDECL",1781);
L38:;
    v9arg_types = ECL_NIL;
    v10arg_type_constants = ECL_NIL;
    v11arg_variables = ECL_NIL;
    {
     cl_object v12;
     v12 = v5arg_list;
     goto L48;
L47:;
     {
      cl_object v13i;
      v13i = ecl_car(v12);
      if (ECL_CONSP(v13i)) { goto L52; }
      ecl_function_dispatch(cl_env_copy,VV[39])(2, VV[7], v13i) /*  CMPERR */;
L52:;
      T0 = ecl_car(v13i);
      v11arg_variables = CONS(T0,v11arg_variables);
      {
       cl_object v14type;
       v14type = ecl_cadr(v13i);
       v9arg_types = CONS(v14type,v9arg_types);
       T0 = L1foreign_elt_type_code(v14type);
       v10arg_type_constants = CONS(T0,v10arg_type_constants);
      }
     }
     v12 = ecl_cdr(v12);
L48:;
     if (Null(v12)) { goto L63; }
     goto L47;
L63:;
    }
    T0 = ecl_function_dispatch(cl_env_copy,VV[42])(1, v7) /*  ADD-OBJECT */;
    T1 = L1foreign_elt_type_code(v4return_type);
    T2 = cl_reverse(v9arg_types);
    T3 = cl_reverse(v10arg_type_constants);
    T4 = cl_list(8, v7, v6, T0, v4return_type, T1, T2, T3, v8);
    cl_set(VV[6],CONS(T4,ecl_symbol_value(VV[6])));
    T0 = cl_reverse(v11arg_variables);
    T1 = cl_listX(4, ECL_SYM("DEFUN",291), v7, T0, v2);
    T2 = cl_list(2, ECL_SYM("QUOTE",681), v7);
    T3 = cl_format(3, ECL_NIL, VV[8], v6);
    T4 = cl_listX(6, ECL_SYM("C-INLINE",2063), ECL_NIL, ECL_NIL, ECL_SYM("OBJECT",1305), T3, VV[9]);
    T5 = cl_list(4, ECL_SYM("PUT-SYSPROP",1141), T2, ECL_SYM("CALLBACK",1651), T4);
    T6 = cl_list(3, ECL_SYM("PROGN",673), T1, T5);
    value0 = ecl_function_dispatch(cl_env_copy,VV[43])(1, T6) /*  C1EXPR */;
    return value0;
   }
  }
 }
}
/*      function definition for T3-DEFCALLBACK                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L3t3_defcallback(cl_object v1lisp_name, cl_object v2c_name, cl_object v3c_name_constant, cl_object v4return_type, cl_object v5return_type_code, cl_object v6arg_types, cl_object v7arg_type_constants, cl_object v8call_type)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v9return_p;
   v9return_p = ECL_T;
   if (!(ecl_eql(v4return_type,ECL_SYM("VOID",1414)))) { goto L2; }
   v9return_p = ECL_NIL;
L2:;
   {
    cl_object v10;
    cl_object v11;
    T0 = ecl_function_dispatch(cl_env_copy,VV[45])(1, v4return_type) /*  %CONVERT-TO-ARG-TYPE */;
    v10 = ecl_function_dispatch(cl_env_copy,VV[46])(1, T0) /*  REP-TYPE->C-NAME */;
    if (!(ecl_eql(v8call_type,ECL_SYM("CDECL",1781)))) { goto L12; }
    goto L9;
    goto L10;
L12:;
    goto L10;
L10:;
    if (!(ecl_eql(v8call_type,ECL_SYM("DEFAULT",1237)))) { goto L7; }
    goto L8;
L9:;
L8:;
    v11 = VV[13];
    goto L6;
L7:;
    if (!(ecl_eql(v8call_type,ECL_SYM("STDCALL",1784)))) { goto L15; }
    v11 = VV[14];
    goto L6;
L15:;
    v11 = ecl_function_dispatch(cl_env_copy,VV[39])(2, VV[15], v8call_type) /*  CMPERR */;
L6:;
    ecl_function_dispatch(cl_env_copy,VV[47])(6, VV[16], v10, VV[17], v11, v2c_name, VV[18]) /*  WT-NL-H */;
    ecl_function_dispatch(cl_env_copy,VV[48])(6, VV[16], v10, VV[17], v11, v2c_name, VV[18]) /*  WT-NL1 */;
    {
     cl_object v12comma;
     v12comma = VV[13];
     {
      cl_object v13n;
      v13n = ecl_make_fixnum(0);
      {
       cl_object v14type;
       cl_object v15;
       v14type = ECL_NIL;
       {
        cl_object v16;
        v16 = v6arg_types;
        if (ecl_unlikely(!ECL_LISTP(v16))) FEtype_error_list(v16);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v15 = v16;
       }
       {
        cl_object v16arg_type_name;
        v16arg_type_name = ECL_NIL;
L27:;
        if (!(ecl_endp(v15))) { goto L29; }
        goto L28;
L29:;
        v14type = _ecl_car(v15);
        {
         cl_object v17;
         v17 = _ecl_cdr(v15);
         if (ecl_unlikely(!ECL_LISTP(v17))) FEtype_error_list(v17);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         v15 = v17;
        }
        T0 = ecl_function_dispatch(cl_env_copy,VV[45])(1, v14type) /*  %CONVERT-TO-ARG-TYPE */;
        v16arg_type_name = ecl_function_dispatch(cl_env_copy,VV[46])(1, T0) /*  REP-TYPE->C-NAME */;
        ecl_function_dispatch(cl_env_copy,VV[49])(4, v12comma, v16arg_type_name, VV[19], v13n) /*  WT-H */;
        ecl_function_dispatch(cl_env_copy,VV[50])(4, v12comma, v16arg_type_name, VV[19], v13n) /*  WT */;
        v12comma = VV[20];
        v13n = ecl_one_plus(v13n);
        goto L27;
L28:;
       }
      }
     }
    }
    ecl_function_dispatch(cl_env_copy,VV[50])(1, VV[21]) /*  WT       */;
    ecl_function_dispatch(cl_env_copy,VV[49])(1, VV[22]) /*  WT-H     */;
    ecl_function_dispatch(cl_env_copy,VV[51])(0)  /*  WT-NL-OPEN-BRACE */;
    if (Null(v9return_p)) { goto L49; }
    ecl_function_dispatch(cl_env_copy,VV[52])(2, v10, VV[23]) /*  WT-NL */;
L49:;
    ecl_function_dispatch(cl_env_copy,VV[52])(1, VV[24]) /*  WT-NL    */;
    ecl_function_dispatch(cl_env_copy,VV[52])(1, VV[25]) /*  WT-NL    */;
    ecl_function_dispatch(cl_env_copy,VV[52])(1, VV[26]) /*  WT-NL    */;
    {
     cl_object v12n;
     cl_object v13type;
     cl_object v14;
     cl_object v15ct;
     cl_object v16;
     v12n = ecl_make_fixnum(0);
     v13type = ECL_NIL;
     {
      cl_object v17;
      v17 = v6arg_types;
      if (ecl_unlikely(!ECL_LISTP(v17))) FEtype_error_list(v17);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v14 = v17;
     }
     v15ct = ECL_NIL;
     {
      cl_object v17;
      v17 = v7arg_type_constants;
      if (ecl_unlikely(!ECL_LISTP(v17))) FEtype_error_list(v17);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v16 = v17;
     }
     if (ecl_endp(v14)) { goto L68; }
     if (!(ecl_endp(v16))) { goto L66; }
     goto L67;
L68:;
L67:;
     goto L65;
L66:;
     {
      cl_object v17;
      v17 = _ecl_car(v14);
      v15ct = _ecl_car(v16);
      v13type = v17;
     }
L64:;
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
      v17 = _ecl_cdr(v16);
      if (ecl_unlikely(!ECL_LISTP(v17))) FEtype_error_list(v17);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v16 = v17;
     }
     ecl_function_dispatch(cl_env_copy,VV[52])(8, VV[27], VV[28], VV[29], v12n, VV[20], v15ct, VV[21], VV[22]) /*  WT-NL */;
     if (ecl_endp(v14)) { goto L86; }
     if (!(ecl_endp(v16))) { goto L84; }
     goto L85;
L86:;
L85:;
     goto L65;
L84:;
     {
      cl_object v17;
      {
       cl_object v18;
       v18 = ecl_one_plus(v12n);
       {
        cl_object v19;
        v19 = _ecl_car(v14);
        v15ct = _ecl_car(v16);
        v13type = v19;
       }
       v17 = v18;
      }
      {
       bool v18;
       v18 = ECL_FIXNUMP(v17)||ECL_BIGNUMP(v17);
       if (ecl_unlikely(!(v18)))
         FEwrong_type_argument(ECL_SYM("INTEGER",439),v17);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      v12n = v17;
     }
     goto L64;
L65:;
    }
    ecl_function_dispatch(cl_env_copy,VV[52])(4, VV[30], VV[31], v3c_name_constant, VV[32]) /*  WT-NL */;
    ecl_function_dispatch(cl_env_copy,VV[52])(1, VV[33]) /*  WT-NL    */;
    if (Null(v9return_p)) { goto L101; }
    ecl_function_dispatch(cl_env_copy,VV[52])(3, VV[34], v5return_type_code, VV[35]) /*  WT-NL */;
    ecl_function_dispatch(cl_env_copy,VV[52])(1, VV[36]) /*  WT-NL    */;
L101:;
    value0 = ecl_function_dispatch(cl_env_copy,VV[53])(0) /*  WT-NL-CLOSE-BRACE */;
    return value0;
   }
  }
 }
}

#include "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/build/cmp/cmpcbk.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclfVY8vfa7_9fuZTr51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CMP;CMPCBK.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclfVY8vfa7_9fuZTr51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  si_Xmake_constant(VV[0], VVtemp[1]);
  ecl_cmp_defun(VV[38]);                          /*  FOREIGN-ELT-TYPE-CODE */
  ecl_cmp_defun(VV[40]);                          /*  C1-DEFCALLBACK  */
  ecl_cmp_defun(VV[44]);                          /*  T3-DEFCALLBACK  */
}
