/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CMP;CMPCT.LSP                                     */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/cmp/cmpct.eclh"
/*      function definition for C1CONSTANT-VALUE                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L1c1constant_value(cl_narg narg, cl_object v1val, ...)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2always;
  cl_object v3only_small_values;
  ecl_va_list args; ecl_va_start(args,v1val,narg,1);
  {
   cl_object keyvars[4];
   cl_parse_key(args,2,L1c1constant_valuekeys,keyvars,NULL,FALSE);
   ecl_va_end(args);
   v2always = keyvars[0];
   v3only_small_values = keyvars[1];
  }
  {
   cl_object v4;
   {
    cl_object v5x;
    v5x = ecl_assql(v1val,ecl_symbol_value(VV[1]));
    if (Null(v5x)) { goto L3; }
    cl_set(VV[2],cl_adjoin(2, VV[3], ecl_symbol_value(VV[2])));
    cl_set(VV[2],cl_adjoin(2, VV[4], ecl_symbol_value(VV[2])));
    v5x = ecl_cdr(v5x);
    if (!(ECL_LISTP(v5x))) { goto L11; }
    v4 = ecl_function_dispatch(cl_env_copy,VV[71])(1, v5x) /*  C1EXPR */;
    goto L1;
L11:;
    v4 = v5x;
    goto L1;
L3:;
    v4 = ECL_NIL;
   }
L1:;
   if (Null(v4)) { goto L13; }
   value0 = v4;
   cl_env_copy->nvalues = 1;
   return value0;
L13:;
   if (!((v1val)==(ECL_NIL))) { goto L15; }
   value0 = ecl_function_dispatch(cl_env_copy,VV[72])(0) /*  C1NIL    */;
   return value0;
L15:;
   if (!((v1val)==(ECL_T))) { goto L17; }
   value0 = ecl_function_dispatch(cl_env_copy,VV[73])(0) /*  C1T      */;
   return value0;
L17:;
   if (!(ECL_FIXNUMP(v1val))) { goto L19; }
   T0 = cl_list(2, VV[6], v1val);
   value0 = ecl_function_dispatch(cl_env_copy,VV[74])(5, ECL_SYM("LOCATION",1842), ECL_SYM("TYPE",1346), ECL_SYM("FIXNUM",374), VV[5], T0) /*  MAKE-C1FORM* */;
   return value0;
L19:;
   if (!(ECL_CHARACTERP(v1val))) { goto L21; }
   T0 = cl_char_code(v1val);
   T1 = cl_list(2, VV[7], T0);
   value0 = ecl_function_dispatch(cl_env_copy,VV[74])(5, ECL_SYM("LOCATION",1842), ECL_SYM("TYPE",1346), ECL_SYM("CHARACTER",224), VV[5], T1) /*  MAKE-C1FORM* */;
   return value0;
L21:;
   if (!(ECL_DOUBLE_FLOAT_P(v1val))) { goto L23; }
   if (Null(si_float_nan_p(v1val))) { goto L25; }
   if ((v3only_small_values)!=ECL_NIL) { goto L25; }
   ecl_function_dispatch(cl_env_copy,VV[75])(2, VV[8], v1val) /*  CMPERR */;
L25:;
   T0 = ecl_function_dispatch(cl_env_copy,VV[76])(1, v1val) /*  ADD-OBJECT */;
   T1 = cl_list(3, VV[9], v1val, T0);
   value0 = ecl_function_dispatch(cl_env_copy,VV[74])(5, ECL_SYM("LOCATION",1842), ECL_SYM("TYPE",1346), ECL_SYM("DOUBLE-FLOAT",317), VV[5], T1) /*  MAKE-C1FORM* */;
   return value0;
L23:;
   if (!(ECL_SINGLE_FLOAT_P(v1val))) { goto L28; }
   if (Null(si_float_nan_p(v1val))) { goto L30; }
   if ((v3only_small_values)!=ECL_NIL) { goto L30; }
   ecl_function_dispatch(cl_env_copy,VV[75])(2, VV[8], v1val) /*  CMPERR */;
L30:;
   T0 = ecl_function_dispatch(cl_env_copy,VV[76])(1, v1val) /*  ADD-OBJECT */;
   T1 = cl_list(3, VV[10], v1val, T0);
   value0 = ecl_function_dispatch(cl_env_copy,VV[74])(5, ECL_SYM("LOCATION",1842), ECL_SYM("TYPE",1346), ECL_SYM("SINGLE-FLOAT",780), VV[5], T1) /*  MAKE-C1FORM* */;
   return value0;
L28:;
   if (!(ECL_LONG_FLOAT_P(v1val))) { goto L33; }
   if (Null(si_float_nan_p(v1val))) { goto L35; }
   if ((v3only_small_values)!=ECL_NIL) { goto L35; }
   ecl_function_dispatch(cl_env_copy,VV[75])(2, VV[8], v1val) /*  CMPERR */;
L35:;
   T0 = ecl_function_dispatch(cl_env_copy,VV[76])(1, v1val) /*  ADD-OBJECT */;
   T1 = cl_list(3, VV[11], v1val, T0);
   value0 = ecl_function_dispatch(cl_env_copy,VV[74])(5, ECL_SYM("LOCATION",1842), ECL_SYM("TYPE",1346), ECL_SYM("LONG-FLOAT",510), VV[5], T1) /*  MAKE-C1FORM* */;
   return value0;
L33:;
   if (Null(v3only_small_values)) { goto L38; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L38:;
   if (Null(v2always)) { goto L40; }
   T0 = ecl_function_dispatch(cl_env_copy,VV[77])(1, v1val) /*  OBJECT-TYPE */;
   T1 = ecl_function_dispatch(cl_env_copy,VV[76])(1, v1val) /*  ADD-OBJECT */;
   value0 = ecl_function_dispatch(cl_env_copy,VV[74])(5, ECL_SYM("LOCATION",1842), ECL_SYM("TYPE",1346), T0, VV[5], T1) /*  MAKE-C1FORM* */;
   return value0;
L40:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for MAKE-SINGLE-CONSTANT-OPTIMIZER        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L2make_single_constant_optimizer(cl_object v1name, cl_object v2c_value)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ECL_SYMBOLP(v1name))) { goto L1; }
  {
   cl_object v3value;
   cl_object v4type;
   v3value = cl_symbol_value(v1name);
   T0 = cl_type_of(v3value);
   v4type = ecl_function_dispatch(cl_env_copy,VV[79])(1, T0) /*  LISP-TYPE->REP-TYPE */;
   T0 = cl_listX(6, ECL_SYM("C-INLINE",2063), ECL_NIL, ECL_NIL, v4type, v2c_value, VV[13]);
   value0 = CONS(v3value,T0);
   cl_env_copy->nvalues = 1;
   return value0;
  }
L1:;
  if (!(floatp(v1name))) { goto L5; }
  {
   cl_object v5type;
   cl_object v6loc_type;
   cl_object v7location;
   v5type = cl_type_of(v1name);
   if (!((v5type)==(ECL_SYM("SINGLE-FLOAT",780)))) { goto L9; }
   v6loc_type = VV[10];
   goto L8;
L9:;
   if (!((v5type)==(ECL_SYM("DOUBLE-FLOAT",317)))) { goto L11; }
   v6loc_type = VV[9];
   goto L8;
L11:;
   if (!((v5type)==(ECL_SYM("LONG-FLOAT",510)))) { goto L13; }
   v6loc_type = VV[11];
   goto L8;
L13:;
   if (!((v5type)==(ECL_SYM("COMPLEX-SINGLE-FLOAT",1872)))) { goto L15; }
   v6loc_type = VV[14];
   goto L8;
L15:;
   if (!((v5type)==(ECL_SYM("COMPLEX-DOUBLE-FLOAT",1873)))) { goto L17; }
   v6loc_type = VV[15];
   goto L8;
L17:;
   if (!((v5type)==(ECL_SYM("COMPLEX-LONG-FLOAT",1874)))) { goto L19; }
   v6loc_type = VV[16];
   goto L8;
L19:;
   v6loc_type = ECL_NIL;
L8:;
   v7location = ecl_function_dispatch(cl_env_copy,VV[80])(4, ECL_SYM("LOCATION",1001), v2c_value, ECL_SYM("VALUE",2032), v1name) /*  MAKE-VV */;
   T0 = cl_list(3, v6loc_type, v1name, v7location);
   T1 = ecl_function_dispatch(cl_env_copy,VV[74])(5, ECL_SYM("LOCATION",1842), ECL_SYM("TYPE",1346), v5type, VV[5], T0) /*  MAKE-C1FORM* */;
   value0 = CONS(v1name,T1);
   cl_env_copy->nvalues = 1;
   return value0;
  }
L5:;
  T0 = cl_type_of(v1name);
  T1 = ecl_function_dispatch(cl_env_copy,VV[80])(4, ECL_SYM("LOCATION",1001), v2c_value, ECL_SYM("VALUE",2032), v1name) /*  MAKE-VV */;
  T2 = ecl_function_dispatch(cl_env_copy,VV[74])(5, ECL_SYM("LOCATION",1842), ECL_SYM("TYPE",1346), T0, VV[5], T1) /*  MAKE-C1FORM* */;
  value0 = CONS(v1name,T2);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for MAKE-OPTIMIZABLE-CONSTANTS            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L3make_optimizable_constants(cl_object v1machine)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2;
   cl_object v3value;
   cl_object v4name;
   cl_object v5;
   v2 = L4optimizable_constants_list(v1machine);
   v3value = ECL_NIL;
   v4name = ECL_NIL;
   {
    cl_object v6;
    v6 = v2;
    if (ecl_unlikely(!ECL_LISTP(v6))) FEtype_error_list(v6);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v5 = v6;
   }
   {
    cl_object v6;
    cl_object v7;
    v6 = ecl_list1(ECL_NIL);
    v7 = v6;
L9:;
    if (!(ecl_endp(v5))) { goto L11; }
    goto L10;
L11:;
    {
     cl_object v8;
     v8 = _ecl_car(v5);
     v3value = ecl_car(v8);
     v8 = ecl_cdr(v8);
     v4name = ecl_car(v8);
    }
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
     v8 = v7;
     if (ecl_unlikely(ECL_ATOM(v8))) FEtype_error_cons(v8);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     T0 = v8;
    }
    T1 = L2make_single_constant_optimizer(v3value, v4name);
    v7 = ecl_list1(T1);
    (ECL_CONS_CDR(T0)=v7,T0);
    goto L9;
L10:;
    value0 = ecl_cdr(v6);
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      function definition for OPTIMIZABLE-CONSTANTS-LIST            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L4optimizable_constants_list(cl_object v1machine)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!((v1machine)==(ecl_symbol_value(VV[46])))) { goto L2; }
  T1 = ecl_append(VV[65],VV[66]);
  T0 = cl_listX(19, VV[47], VV[48], VV[49], VV[50], VV[51], VV[52], VV[53], VV[54], VV[55], VV[56], VV[57], VV[58], VV[59], VV[60], VV[61], VV[62], VV[63], VV[64], T1);
  goto L1;
L2:;
  T0 = ECL_NIL;
L1:;
  value0 = ecl_append(VV[19],T0);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}

#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/cmp/cmpct.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclsnpn6Wa7_LkVmqq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CMP;CMPCT.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclsnpn6Wa7_LkVmqq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  si_Xmake_special(VV[0]);
  cl_set(VV[0],ECL_NIL);
  ecl_cmp_defun(VV[68]);                          /*  C1CONSTANT-VALUE */
  ecl_cmp_defun(VV[78]);                          /*  MAKE-SINGLE-CONSTANT-OPTIMIZER */
  ecl_cmp_defun(VV[81]);                          /*  MAKE-OPTIMIZABLE-CONSTANTS */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  VV[19]= CONS(ECL_NIL,ECL_NIL);
  VV[21]= CONS(ECL_NIL,ECL_NIL);
  VV[23]= CONS(ECL_NIL,ECL_NIL);
  VV[25]= CONS(ECL_NIL,ECL_NIL);
  VV[27]= CONS(ECL_NIL,ECL_NIL);
  VV[29]= CONS(ECL_NIL,ECL_NIL);
  VV[31]= CONS(ECL_NIL,ECL_NIL);
  VV[32]= CONS(ECL_NIL,ECL_NIL);
  T0 = VV[32];
  (ECL_CONS_CAR(T0)=cl_core.lisp_package,T0);
  T0 = VV[32];
  (ECL_CONS_CDR(T0)=VV[33],T0);
  VV[34]= CONS(ECL_NIL,ECL_NIL);
  VV[35]= CONS(ECL_NIL,ECL_NIL);
  T0 = VV[35];
  (ECL_CONS_CAR(T0)=cl_core.user_package,T0);
  T0 = VV[35];
  (ECL_CONS_CDR(T0)=VV[36],T0);
  VV[37]= CONS(ECL_NIL,ECL_NIL);
  VV[38]= CONS(ECL_NIL,ECL_NIL);
  T0 = VV[38];
  (ECL_CONS_CAR(T0)=cl_core.keyword_package,T0);
  T0 = VV[38];
  (ECL_CONS_CDR(T0)=VV[39],T0);
  VV[40]= CONS(ECL_NIL,ECL_NIL);
  VV[41]= CONS(ECL_NIL,ECL_NIL);
  T0 = VV[41];
  (ECL_CONS_CAR(T0)=cl_core.clos_package,T0);
  T0 = VV[41];
  (ECL_CONS_CDR(T0)=VV[42],T0);
  VV[43]= CONS(ECL_NIL,ECL_NIL);
  VV[44]= CONS(ECL_NIL,ECL_NIL);
  T0 = VV[44];
  (ECL_CONS_CAR(T0)=cl_core.mp_package,T0);
  T0 = VV[44];
  (ECL_CONS_CDR(T0)=VV[45],T0);
  T0 = VV[43];
  (ECL_CONS_CAR(T0)=VV[44],T0);
  T0 = VV[43];
  (ECL_CONS_CDR(T0)=ECL_NIL,T0);
  T0 = VV[40];
  (ECL_CONS_CAR(T0)=VV[41],T0);
  T0 = VV[40];
  (ECL_CONS_CDR(T0)=VV[43],T0);
  T0 = VV[37];
  (ECL_CONS_CAR(T0)=VV[38],T0);
  T0 = VV[37];
  (ECL_CONS_CDR(T0)=VV[40],T0);
  T0 = VV[34];
  (ECL_CONS_CAR(T0)=VV[35],T0);
  T0 = VV[34];
  (ECL_CONS_CDR(T0)=VV[37],T0);
  T0 = VV[31];
  (ECL_CONS_CAR(T0)=VV[32],T0);
  T0 = VV[31];
  (ECL_CONS_CDR(T0)=VV[34],T0);
  T0 = VV[29];
  (ECL_CONS_CAR(T0)=VV[30],T0);
  T0 = VV[29];
  (ECL_CONS_CDR(T0)=VV[31],T0);
  T0 = VV[27];
  (ECL_CONS_CAR(T0)=VV[28],T0);
  T0 = VV[27];
  (ECL_CONS_CDR(T0)=VV[29],T0);
  T0 = VV[25];
  (ECL_CONS_CAR(T0)=VV[26],T0);
  T0 = VV[25];
  (ECL_CONS_CDR(T0)=VV[27],T0);
  T0 = VV[23];
  (ECL_CONS_CAR(T0)=VV[24],T0);
  T0 = VV[23];
  (ECL_CONS_CDR(T0)=VV[25],T0);
  T0 = VV[21];
  (ECL_CONS_CAR(T0)=VV[22],T0);
  T0 = VV[21];
  (ECL_CONS_CDR(T0)=VV[23],T0);
  T0 = VV[19];
  (ECL_CONS_CAR(T0)=VV[20],T0);
  T0 = VV[19];
  (ECL_CONS_CDR(T0)=VV[21],T0);
  ecl_cmp_defun(VV[82]);                          /*  OPTIMIZABLE-CONSTANTS-LIST */
 }
}
