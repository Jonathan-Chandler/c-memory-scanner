/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CMP;CMPC-MACHINE.LSP                              */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/build/cmp/cmpc-machine.eclh"
/*      function definition for MAKE-REP-TYPE                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L1make_rep_type(cl_narg narg, cl_object v1all_c_types, cl_object v2name, cl_object v3lisp_type, cl_object v4c_name, ...)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<4)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>7)) FEwrong_num_arguments_anonym();
 {
  cl_object v5to_lisp;
  cl_object v6from_lisp;
  cl_object v7from_lisp_unsafe;
  va_list args; va_start(args,v4c_name);
  {
   int i = 4;
   if (i >= narg) {
    v5to_lisp = ECL_NIL;
   } else {
    i++;
    v5to_lisp = va_arg(args,cl_object);
   }
   if (i >= narg) {
    v6from_lisp = ECL_NIL;
   } else {
    i++;
    v6from_lisp = va_arg(args,cl_object);
   }
   if (i >= narg) {
    v7from_lisp_unsafe = ECL_NIL;
   } else {
    i++;
    v7from_lisp_unsafe = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v8record;
   cl_object v9bits;
   v8record = ecl_assql(v2name,v1all_c_types);
   v9bits = ecl_cdr(v8record);
   if (Null(v8record)) { goto L6; }
   if (Null(v9bits)) { goto L8; }
   if (!(ecl_plusp(v9bits))) { goto L10; }
   v3lisp_type = cl_list(2, ECL_SYM("UNSIGNED-BYTE",887), v9bits);
   goto L8;
L10:;
   v9bits = ecl_negate(v9bits);
   v3lisp_type = cl_list(2, ECL_SYM("SIGNED-BYTE",763), v9bits);
L8:;
   T0 = cl_subtypep(2, v3lisp_type, ECL_SYM("NUMBER",608));
   T1 = cl_subtypep(2, v3lisp_type, ECL_SYM("INTEGER",439));
   value0 = ecl_function_dispatch(cl_env_copy,VV[25])(18, ECL_SYM("NAME",1300), v2name, VV[3], v3lisp_type, VV[4], v9bits, VV[5], T0, VV[6], T1, VV[7], v4c_name, VV[8], v5to_lisp, VV[9], v6from_lisp, VV[10], v7from_lisp_unsafe) /*  %MAKE-REP-TYPE */;
   return value0;
L6:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for DEFAULT-MACHINE                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L2default_machine()
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v1all_c_types;
   cl_object v2table;
   cl_object v3sorted_rep_types;
   v1all_c_types = ecl_append(ecl_symbol_value(VV[1]),ecl_symbol_value(VV[2]));
   v2table = cl_make_hash_table(4, ECL_SYM("SIZE",1335), ecl_make_fixnum(128), ECL_SYM("TEST",1343), ECL_SYM("EQ",335));
   {
    cl_object v4i;
    v4i = ecl_make_fixnum(0);
    {
     cl_object v5;
     cl_object v6record;
     cl_object v7;
     v5 = ecl_symbol_value(VV[0]);
     v6record = ECL_NIL;
     {
      cl_object v8;
      v8 = v5;
      value0 = ecl_make_bool(ECL_LISTP(v8));
      if ((value0)!=ECL_NIL) { goto L12; }
      T0 = ecl_make_bool(ECL_SYMBOLP(v8));
      goto L10;
L12:;
      T0 = value0;
      goto L10;
L10:;
      if (ecl_unlikely(!((T0)!=ECL_NIL)))
         FEwrong_type_argument(VV[12],v8);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v7 = v8;
     }
     {
      cl_object v8rep_type;
      v8rep_type = ECL_NIL;
      {
       cl_object v9;
       cl_object v10;
       v9 = ecl_list1(ECL_NIL);
       v10 = v9;
L17:;
       v6record = _ecl_car(v7);
       {
        cl_object v11;
        v11 = _ecl_cdr(v7);
        value0 = ecl_make_bool(ECL_LISTP(v11));
        if ((value0)!=ECL_NIL) { goto L27; }
        T0 = ecl_make_bool(ECL_SYMBOLP(v11));
        goto L25;
L27:;
        T0 = value0;
        goto L25;
L25:;
        if (ecl_unlikely(!((T0)!=ECL_NIL)))
         FEwrong_type_argument(VV[12],v11);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v7 = v11;
       }
       T0 = ecl_fdefinition(VV[11]);
       v8rep_type = cl_apply(3, T0, v1all_c_types, v6record);
       if (Null(v8rep_type)) { goto L32; }
       ecl_structure_set(v8rep_type,VV[13],0,v4i);
       {
        cl_object v11;
        v11 = v10;
        if (ecl_unlikely(ECL_ATOM(v11))) FEtype_error_cons(v11);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        T0 = v11;
       }
       T1 = ecl_function_dispatch(cl_env_copy,VV[27])(1, v8rep_type) /*  REP-TYPE-NAME */;
       T2 = si_hash_set(T1, v2table, v8rep_type);
       v10 = ecl_list1(T2);
       (ECL_CONS_CDR(T0)=v10,T0);
L32:;
       v4i = ecl_one_plus(v4i);
       if (!(ecl_endp(v7))) { goto L41; }
       goto L18;
L41:;
       goto L17;
L18:;
       v3sorted_rep_types = ecl_cdr(v9);
       goto L3;
      }
     }
    }
   }
L3:;
   {
    cl_object v4r;
    v4r = ecl_gethash_safe(VV[14],v2table,ECL_NIL);
    if (Null(v4r)) { goto L45; }
    ecl_structure_set(v4r,VV[13],0,ECL_SYM("INT-SSE-PACK",1880));
   }
L45:;
   {
    cl_object v4fixnum_rep_type;
    v4fixnum_rep_type = ecl_gethash_safe(ECL_SYM("FIXNUM",1399),v2table,ECL_NIL);
    {
     cl_object v5fixnum_lisp_type;
     v5fixnum_lisp_type = ecl_function_dispatch(cl_env_copy,VV[28])(1, v4fixnum_rep_type) /*  REP-TYPE-LISP-TYPE */;
     {
      cl_object v6;
      cl_object v7name;
      cl_object v8rest;
      cl_object v9;
      v6 = ecl_symbol_value(VV[0]);
      v7name = ECL_NIL;
      v8rest = ECL_NIL;
      {
       cl_object v10;
       v10 = v6;
       value0 = ecl_make_bool(ECL_LISTP(v10));
       if ((value0)!=ECL_NIL) { goto L59; }
       T0 = ecl_make_bool(ECL_SYMBOLP(v10));
       goto L57;
L59:;
       T0 = value0;
       goto L57;
L57:;
       if (ecl_unlikely(!((T0)!=ECL_NIL)))
         FEwrong_type_argument(VV[12],v10);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v9 = v10;
      }
      {
       cl_object v10r;
       v10r = ECL_NIL;
L62:;
       {
        cl_object v11;
        v11 = _ecl_car(v9);
        v7name = ecl_car(v11);
        v11 = ecl_cdr(v11);
        v8rest = v11;
       }
       {
        cl_object v11;
        v11 = _ecl_cdr(v9);
        value0 = ecl_make_bool(ECL_LISTP(v11));
        if ((value0)!=ECL_NIL) { goto L77; }
        T0 = ecl_make_bool(ECL_SYMBOLP(v11));
        goto L75;
L77:;
        T0 = value0;
        goto L75;
L75:;
        if (ecl_unlikely(!((T0)!=ECL_NIL)))
         FEwrong_type_argument(VV[12],v11);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v9 = v11;
       }
       v10r = ecl_gethash_safe(v7name,v2table,ECL_NIL);
       if (Null(v10r)) { goto L81; }
       T0 = ecl_function_dispatch(cl_env_copy,VV[28])(1, v10r) /*  REP-TYPE-LISP-TYPE */;
       if (Null(cl_subtypep(2, T0, v5fixnum_lisp_type))) { goto L81; }
       ecl_structure_set(v10r,VV[13],9,VV[15]);
L81:;
       if (!(ecl_endp(v9))) { goto L84; }
       goto L63;
L84:;
       goto L62;
L63:;
      }
     }
    }
   }
   value0 = ecl_function_dispatch(cl_env_copy,VV[29])(6, VV[16], v1all_c_types, VV[17], v2table, VV[18], v3sorted_rep_types) /*  MAKE-MACHINE */;
   return value0;
  }
 }
}
/*      function definition for MACHINE-C-TYPE-P                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L3machine_c_type_p(cl_object v1name)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,VV[31])(1, ecl_symbol_value(VV[20])) /*  MACHINE-REP-TYPE-HASH */;
  value0 = cl_gethash(2, v1name, T0);
  return value0;
 }
}
/*      function definition for MACHINE-FIXNUMP                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L4machine_fixnump(cl_object v1number)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_gethash(2, ECL_SYM("FIXNUM",1399), v1number);
  T1 = ecl_function_dispatch(cl_env_copy,VV[28])(1, T0) /*  REP-TYPE-LISP-TYPE */;
  value0 = cl_typep(2, v1number, T1);
  return value0;
 }
}

#include "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/build/cmp/cmpc-machine.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclCN6EDVb7_DXpZTr51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CMP;CMPC-MACHINE.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclCN6EDVb7_DXpZTr51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  si_Xmake_constant(VV[0], VVtemp[1]);
  si_Xmake_constant(VV[1], VVtemp[2]);
  si_Xmake_constant(VV[2], VVtemp[3]);
  ecl_cmp_defun(VV[24]);                          /*  MAKE-REP-TYPE   */
  ecl_cmp_defun(VV[26]);                          /*  DEFAULT-MACHINE */
  ecl_cmp_defun(VV[30]);                          /*  MACHINE-C-TYPE-P */
  ecl_cmp_defun(VV[32]);                          /*  MACHINE-FIXNUMP */
  si_Xmake_special(VV[23]);
  if (ecl_boundp(cl_env_copy,VV[23])) { goto L31; }
  cl_set(VV[20],L2default_machine());
  cl_set(VV[23],ecl_symbol_value(VV[20]));
L31:;
}
