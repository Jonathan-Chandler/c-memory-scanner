/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CMP;CMPENV-DECLAIM.LSP                            */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/cmp/cmpenv-declaim.eclh"
/*      function definition for PROCESS-DECLAIM-ARGS                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L2process_declaim_args(cl_object v1args)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;                                  /*  SPECIALS        */
   cl_object v4;                                  /*  TYPES           */
   cl_object v5;                                  /*  IGNORED         */
   cl_object v6;                                  /*  OTHERS          */
   T0 = CONS(ECL_SYM("DECLARE",276),v1args);
   T1 = ecl_list1(T0);
   value0 = ecl_function_dispatch(cl_env_copy,VV[14])(2, T1, ECL_NIL) /*  C1BODY */;
   {
    const int v7 = cl_env_copy->nvalues;
    cl_object v8;
    v8 = (v7<=1)? ECL_NIL : cl_env_copy->values[1];
    v3 = v8;
    v8 = (v7<=2)? ECL_NIL : cl_env_copy->values[2];
    v4 = v8;
    v8 = (v7<=3)? ECL_NIL : cl_env_copy->values[3];
    v5 = v8;
    v8 = (v7<=4)? ECL_NIL : cl_env_copy->values[4];
    v6 = v8;
   }
   if (Null(v5)) { goto L2; }
   ecl_function_dispatch(cl_env_copy,VV[15])(1, VV[2]) /*  CMPWARN-STYLE */;
L2:;
   T0 = ecl_fdefinition(VV[16]);
   T1 = LC1add_variables(ecl_symbol_value(VV[4]), v4, v3);
   cl_reduce(4, T0, v6, VV[3], T1);
   T0 = ecl_fdefinition(VV[16]);
   T1 = LC1add_variables(ecl_symbol_value(VV[5]), v4, v3);
   value0 = cl_reduce(4, T0, v6, VV[3], T1);
   return value0;
  }
 }
}
/*      local function ADD-VARIABLES                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC1add_variables(cl_object v1env, cl_object v2types, cl_object v3specials)
{
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
    v6 = v3specials;
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
   if ((ecl_assql(v4name,v2types))!=ECL_NIL) { goto L16; }
   {
    cl_object v6v;
    v6v = ecl_function_dispatch(cl_env_copy,VV[17])(3, v4name, VV[0], ECL_SYM("SPECIAL",791)) /*  C1MAKE-GLOBAL-VARIABLE */;
    v1env = ecl_function_dispatch(cl_env_copy,VV[18])(3, v6v, v1env, ECL_NIL) /*  CMP-ENV-REGISTER-VAR */;
   }
L16:;
   goto L6;
L7:;
  }
  {
   cl_object v4name;
   cl_object v5type;
   cl_object v6;
   v4name = ECL_NIL;
   v5type = ECL_NIL;
   {
    cl_object v7;
    v7 = v2types;
    if (ecl_unlikely(!ECL_LISTP(v7))) FEtype_error_list(v7);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v6 = v7;
   }
   {
    cl_object v7specialp;
    v7specialp = ECL_NIL;
    {
     cl_object v8kind;
     v8kind = ECL_NIL;
     {
      cl_object v9v;
      v9v = ECL_NIL;
L30:;
      if (!(ecl_endp(v6))) { goto L32; }
      goto L31;
L32:;
      {
       cl_object v10;
       v10 = _ecl_car(v6);
       v4name = ecl_car(v10);
       v10 = ecl_cdr(v10);
       v5type = v10;
      }
      {
       cl_object v10;
       v10 = _ecl_cdr(v6);
       if (ecl_unlikely(!ECL_LISTP(v10))) FEtype_error_list(v10);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v6 = v10;
      }
      value0 = si_specialp(v4name);
      if ((value0)!=ECL_NIL) { goto L48; }
      v7specialp = ecl_memql(v4name,v3specials);
      goto L46;
L48:;
      v7specialp = value0;
      goto L46;
L46:;
      if (Null(v7specialp)) { goto L52; }
      v8kind = ECL_SYM("SPECIAL",791);
      goto L51;
L52:;
      v8kind = VV[1];
L51:;
      v9v = ecl_function_dispatch(cl_env_copy,VV[17])(5, v4name, ECL_SYM("TYPE",1346), v5type, VV[0], v8kind) /*  C1MAKE-GLOBAL-VARIABLE */;
      v1env = ecl_function_dispatch(cl_env_copy,VV[18])(3, v9v, v1env, ECL_NIL) /*  CMP-ENV-REGISTER-VAR */;
      goto L30;
L31:;
     }
    }
   }
  }
  value0 = v1env;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function DECLAIM                                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC3declaim(cl_object v1, cl_object v2)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   v3 = ecl_cdr(v1);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), v3);
   T1 = cl_list(2, VV[6], T0);
   T2 = cl_list(3, ECL_SYM("EVAL-WHEN",342), VV[8], T1);
   T3 = cl_list(2, ECL_SYM("QUOTE",681), v3);
   T4 = cl_list(3, ECL_SYM("MAPC",545), VV[9], T3);
   T5 = cl_list(3, ECL_SYM("EVAL-WHEN",342), VV[8], T4);
   T6 = cl_list(5, ECL_SYM("WITH-BACKEND",1847), ECL_SYM("C/C++",1849), T2, ECL_SYM("BYTECODES",1848), T5);
   T7 = cl_list(2, ECL_SYM("QUOTE",681), v3);
   T8 = cl_list(3, ECL_SYM("MAPC",545), VV[9], T7);
   T9 = cl_list(3, ECL_SYM("EVAL-WHEN",342), VV[10], T8);
   value0 = cl_list(4, ECL_SYM("LOCALLY",492), VV[7], T6, T9);
   return value0;
  }
 }
}
/*      local function C-DECLAIM                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC4ext__c_declaim(cl_object v1, cl_object v2)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   v3 = ecl_cdr(v1);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), v3);
   T1 = cl_list(2, VV[6], T0);
   T2 = cl_list(3, ECL_SYM("EVAL-WHEN",342), VV[8], T1);
   value0 = cl_list(3, ECL_SYM("WITH-BACKEND",1847), ECL_SYM("C/C++",1849), T2);
   return value0;
  }
 }
}

#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/cmp/cmpenv-declaim.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclPmdd89a7_EsPmqq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CMP;CMPENV-DECLAIM.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclPmdd89a7_EsPmqq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  ecl_cmp_defun(VV[13]);                          /*  PROCESS-DECLAIM-ARGS */
  ecl_cmp_defmacro(VV[19]);                       /*  DECLAIM         */
  ecl_cmp_defmacro(VV[20]);                       /*  C-DECLAIM       */
}
