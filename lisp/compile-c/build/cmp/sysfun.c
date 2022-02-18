/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CMP;SYSFUN.LSP                                    */
#include <ecl/ecl-cmp.h>
#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/cmp/sysfun.eclh"
/*      function definition for MAKE-INLINE-INFORMATION               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L1make_inline_information(cl_object v1c___machine_)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  ecl_bds_bind(cl_env_copy,VV[0],v1c___machine_); /*  *MACHINE*       */
TTL:
  T0 = cl_make_hash_table(4, ECL_SYM("SIZE",1335), ecl_make_fixnum(512), ECL_SYM("TEST",1343), ECL_SYM("EQUAL",337));
  ecl_bds_bind(cl_env_copy,VV[1],T0);             /*  *INLINE-INFORMATION* */
  {
   cl_object v2c__i;
   cl_object v3;
   v2c__i = ECL_NIL;
   v3 = VV[2];
L5:;
   v2c__i = _ecl_car(v3);
   {
    cl_object v4;
    v4 = _ecl_cdr(v3);
    if (ecl_unlikely(!ECL_LISTP(v4))) FEtype_error_list(v4);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v3 = v4;
   }
   T0 = ecl_fdefinition(VV[24]);
   cl_apply(2, T0, v2c__i);
   if (!(ecl_endp(v3))) { goto L15; }
   goto L6;
L15:;
   goto L5;
L6:;
  }
  value0 = ecl_symbol_value(VV[1]);
  cl_env_copy->nvalues = 1;
  ecl_bds_unwind1(cl_env_copy);
  ecl_bds_unwind1(cl_env_copy);
  return value0;
 }
}
/*      function definition for INLINE-INFORMATION                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L2inline_information(cl_object v1c__name, cl_object v2safety)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_list(2, v1c__name, v2safety);
  value0 = cl_gethash(2, T0, ecl_symbol_value(VV[1]));
  return value0;
 }
}
/*      function definition for (SETF INLINE-INFORMATION)             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L3_setf_inline_information_(cl_object v1c__value, cl_object v2c__name, cl_object v3safety)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_list(2, v2c__name, v3safety);
  value0 = si_hash_set(T0, ecl_symbol_value(VV[1]), v1c__value);
  return value0;
 }
}
/*      function definition for DEF-INLINE                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L5def_inline(cl_narg narg, cl_object v1c__name, cl_object v2safety, cl_object v3c__arg_types, cl_object v4c__return_rep_type, cl_object v5c__expansion, ...)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<5)) FEwrong_num_arguments_anonym();
 {
  cl_object v6c__one_liner;
  cl_object v7c__exact_return_type;
  cl_object v8c__inline_or_warn;
  cl_object v9c__multiple_values;
  ecl_va_list args; ecl_va_start(args,v5c__expansion,narg,5);
  {
   cl_object keyvars[8];
   cl_parse_key(args,4,L5def_inlinekeys,keyvars,NULL,FALSE);
   ecl_va_end(args);
   if (Null(keyvars[4])) {
    v6c__one_liner = ECL_T;
   } else {
    v6c__one_liner = keyvars[0];
   }
   v7c__exact_return_type = keyvars[1];
   v8c__inline_or_warn = keyvars[2];
   if (Null(keyvars[7])) {
    v9c__multiple_values = ECL_T;
   } else {
    v9c__multiple_values = keyvars[3];
   }
  }
  {
   cl_object v10c__arg_rep_types;
   v10c__arg_rep_types = ECL_NIL;
   if (!(ecl_eql(v2safety,VV[6]))) { goto L6; }
   v2safety = VV[7];
   goto L5;
L6:;
   if (!(ecl_eql(v2safety,VV[8]))) { goto L8; }
   v2safety = VV[9];
   goto L5;
L8:;
   if (!(ecl_eql(v2safety,VV[10]))) { goto L10; }
   v2safety = VV[11];
   goto L5;
L10:;
   v2safety = cl_error(1, VV[12]);
L5:;
   {
    cl_object v11;
    cl_object v12type;
    cl_object v13;
    v11 = CONS(v4c__return_rep_type,v3c__arg_types);
    v12type = ECL_NIL;
    {
     cl_object v14;
     v14 = v11;
     if (ecl_unlikely(!ECL_LISTP(v14))) FEtype_error_list(v14);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v13 = v14;
    }
L18:;
    if (!(ecl_endp(v13))) { goto L20; }
    goto L19;
L20:;
    v12type = _ecl_car(v13);
    {
     cl_object v14;
     v14 = _ecl_cdr(v13);
     if (ecl_unlikely(!ECL_LISTP(v14))) FEtype_error_list(v14);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v13 = v14;
    }
    if ((v12type)==(VV[13])) { goto L28; }
    if (!(ECL_CONSP(v12type))) { goto L33; }
    T0 = ecl_car(v12type);
    if ((T0)==(ECL_SYM("VALUES",897))) { goto L28; }
    goto L31;
L33:;
    goto L31;
L31:;
    if ((ecl_function_dispatch(cl_env_copy,VV[57])(1, v12type) /*  LISP-TYPE-P */)!=ECL_NIL) { goto L28; }
    if ((ecl_function_dispatch(cl_env_copy,VV[58])(1, v12type) /*  MACHINE-C-TYPE-P */)!=ECL_NIL) { goto L28; }
    (cl_env_copy->function=(ECL_SYM("WARN",905)->symbol.gfdef))->cfun.entry(3, VV[14], v1c__name, v12type) /*  WARN */;
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
L28:;
    goto L18;
L19:;
   }
   {
    cl_object v11;
    {
     cl_object v12;
     v12 = ecl_make_cfun((cl_objectfn_fixed)LC4__lambda17,ECL_NIL,Cblock,1);
     v11 = v12;
    }
    {
     cl_object v12;
     cl_object v13;
     v12 = ECL_NIL;
     {
      cl_object v14;
      v14 = v3c__arg_types;
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
L47:;
      if (!(ecl_endp(v13))) { goto L49; }
      goto L48;
L49:;
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
      T1 = ecl_function_dispatch(cl_env_copy,v11)(1, v12);
      v15 = ecl_list1(T1);
      (ECL_CONS_CDR(T0)=v15,T0);
      goto L47;
L48:;
      v10c__arg_rep_types = ecl_cdr(v14);
      goto L39;
     }
    }
   }
L39:;
   if (!((v4c__return_rep_type)==(ECL_T))) { goto L65; }
   v4c__return_rep_type = ECL_SYM("OBJECT",1305);
L65:;
   if (Null(v8c__inline_or_warn)) { goto L68; }
   L3_setf_inline_information_(ECL_T, v1c__name, VV[15]);
L68:;
   {
    cl_object v11c__return_type;
    cl_object v12c__inline_info;
    if (!(ECL_CONSP(v4c__return_rep_type))) { goto L71; }
    T0 = ecl_car(v4c__return_rep_type);
    if (!((T0)==(ECL_SYM("VALUES",897)))) { goto L71; }
    v11c__return_type = ECL_T;
    goto L70;
L71:;
    v11c__return_type = ecl_function_dispatch(cl_env_copy,VV[59])(1, v4c__return_rep_type) /*  REP-TYPE->LISP-TYPE */;
L70:;
    v12c__inline_info = ecl_function_dispatch(cl_env_copy,VV[60])(18, ECL_SYM("NAME",1300), v1c__name, VV[16], v10c__arg_rep_types, VV[17], v4c__return_rep_type, VV[18], v11c__return_type, VV[19], v3c__arg_types, VV[20], v7c__exact_return_type, VV[21], v9c__multiple_values, VV[22], v6c__one_liner, VV[23], v5c__expansion) /*  MAKE-INLINE-INFO */;
    {
     cl_object v13;
     cl_object v14;
     cl_object v15;
     v13 = cl_list(2, v1c__name, v2safety);
     v14 = ecl_symbol_value(VV[1]);
     T0 = ecl_gethash_safe(v13,v14,ECL_NIL);
     v15 = CONS(v12c__inline_info,T0);
     value0 = si_hash_set(v13, v14, v15);
     return value0;
    }
   }
  }
 }
}
/*      local function LAMBDA17                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC4__lambda17(cl_object v1c__x)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!((v1c__x)==(ECL_SYM("*",20)))) { goto L1; }
  value0 = v1c__x;
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  value0 = ecl_function_dispatch(cl_env_copy,VV[61])(1, v1c__x) /*  LISP-TYPE->REP-TYPE */;
  return value0;
 }
}

#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/cmp/sysfun.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _ecl9gge9oa7_dtb6lq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CMP;SYSFUN.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_ecl9gge9oa7_dtb6lq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  ecl_cmp_defun(VV[49]);                          /*  MAKE-INLINE-INFORMATION */
  ecl_cmp_defun(VV[50]);                          /*  INLINE-INFORMATION */
  ecl_cmp_defun(VV[51]);                          /*  (SETF INLINE-INFORMATION) */
  ecl_cmp_defun(VV[52]);                          /*  DEF-INLINE      */
  {
   cl_object v1;
   v1 = ecl_symbol_value(VV[25]);
   {
    cl_object v2;
    v2 = L1make_inline_information(ecl_symbol_value(VV[25]));
    ecl_structure_set(v1,VV[26],3,v2);
   }
  }
  si_select_package(VVtemp[1]);
 {
  cl_object T0, T1;
  cl_object volatile env0 = ECL_NIL;
  T0 = ecl_append(VVtemp[2],VVtemp[3]);
  T1 = cl_listX(23, VV[27], VV[28], VV[29], VV[30], VV[31], VV[32], VV[33], VV[34], VV[35], VV[36], VV[37], VV[38], VV[39], VV[40], VV[41], VV[42], VV[43], VV[44], VV[45], VV[46], VV[47], VV[48], T0);
  (cl_env_copy->function=(ECL_SYM("PROCLAIM",668)->symbol.gfdef))->cfun.entry(1, T1) /*  PROCLAIM */;
 }
}
