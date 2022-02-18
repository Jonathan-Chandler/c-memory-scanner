/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CMP;CMPOPT-PRINTER.LSP                            */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/cmp/cmpopt-printer.eclh"
/*      function definition for PRINTER-DEFAULT-STREAM                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L1printer_default_stream(cl_object v1stream, cl_object v2env)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(cl_constantp(2, v1stream, v2env))) { goto L1; }
  {
   cl_object v3value;
   v3value = ecl_function_dispatch(cl_env_copy,ECL_SYM("CONSTANT-FORM-VALUE",2118))(2, v1stream, v2env) /*  CONSTANT-FORM-VALUE */;
   if (!((v3value)==(ECL_NIL))) { goto L4; }
   value0 = ECL_SYM("*STANDARD-OUTPUT*",69);
   cl_env_copy->nvalues = 1;
   return value0;
L4:;
   if (!(ecl_eql(v3value,ECL_T))) { goto L7; }
   value0 = ECL_SYM("*TERMINAL-IO*",70);
   cl_env_copy->nvalues = 1;
   return value0;
L7:;
   if (Null(cl_streamp(v3value))) { goto L12; }
   T0 = VV[2];
   goto L11;
L12:;
   T0 = VV[3];
L11:;
   ecl_function_dispatch(cl_env_copy,VV[14])(2, T0, v1stream) /*  CMPWARN */;
   value0 = v1stream;
   cl_env_copy->nvalues = 1;
   return value0;
  }
L1:;
  T0 = ecl_list1(v1stream);
  value0 = cl_listX(3, ECL_SYM("C-INLINE",2063), T0, VV[4]);
  return value0;
 }
}
/*      local function LAMBDA5                                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC2__lambda5(cl_object v1, cl_object v2env)
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
   cl_object v4expression;
   cl_object v5stream;
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
   ecl_function_dispatch(cl_env_copy,VV[15])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L6:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4expression = v6;
   }
   if (Null(v3)) { goto L12; }
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5stream = v6;
    goto L11;
   }
L12:;
   v5stream = ECL_NIL;
L11:;
   if (Null(v3)) { goto L17; }
   ecl_function_dispatch(cl_env_copy,VV[16])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L17:;
   if (Null(cl_constantp(2, v4expression, v2env))) { goto L19; }
   {
    cl_object v6value;
    v6value = ecl_function_dispatch(cl_env_copy,ECL_SYM("CONSTANT-FORM-VALUE",2118))(2, v4expression, v2env) /*  CONSTANT-FORM-VALUE */;
    if (!(((v6value)==ECL_CODE_CHAR((ecl_character)(10))))) { goto L22; }
    value0 = cl_list(2, ECL_SYM("TERPRI",857), v5stream);
    return value0;
L22:;
    if (!(ECL_CHARACTERP(v6value))) { goto L24; }
    T0 = cl_list(2, v6value, v5stream);
    value0 = cl_listX(3, ECL_SYM("C-INLINE",2063), T0, VV[5]);
    return value0;
L24:;
    if (!(ECL_STRINGP(v6value))) { goto L26; }
    {
     cl_fixnum v7;
     v7 = ecl_length(v6value);
     if (!((v7)==(1))) { goto L26; }
    }
    {
     cl_object v7;
     v7 = v6value;
     T1 = v7;
     {
      cl_fixnum v8;
      if (ecl_unlikely((0)>=(v7)->vector.dim))
           FEwrong_index(ECL_NIL,v7,-1,ecl_make_fixnum(0),(v7)->vector.dim);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v8 = 0;
      T0 = ecl_aref_unsafe(T1,v8);
     }
    }
    T1 = cl_list(2, T0, v5stream);
    value0 = cl_listX(3, ECL_SYM("C-INLINE",2063), T1, VV[5]);
    return value0;
L26:;
    if (Null(si_base_string_p(v6value))) { goto L34; }
    {
     cl_fixnum v7;
     v7 = ecl_length(v6value);
     if (!((v7)<(80))) { goto L34; }
    }
    T0 = ecl_list1(v5stream);
    T1 = ecl_function_dispatch(cl_env_copy,VV[17])(1, v6value) /*  C-INLINE-SAFE-STRING */;
    T2 = cl_concatenate(4, ECL_SYM("STRING",807), VV[7], T1, VV[8]);
    T3 = cl_listX(6, ECL_SYM("C-INLINE",2063), T0, VV[6], ECL_SYM("VOID",1414), T2, VV[9]);
    value0 = cl_list(3, ECL_SYM("PROGN",673), T3, v6value);
    return value0;
L34:;
    T0 = cl_list(2, v4expression, v5stream);
    value0 = cl_listX(3, ECL_SYM("C-INLINE",2063), T0, VV[10]);
    return value0;
   }
L19:;
   T0 = cl_list(2, v4expression, v5stream);
   value0 = cl_listX(3, ECL_SYM("C-INLINE",2063), T0, VV[10]);
   return value0;
  }
 }
}
/*      local function LAMBDA11                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC3__lambda11(cl_object v1, cl_object v2)
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
   cl_object v4stream;
   T0 = ecl_car(v1);
   if (!((T0)==(ECL_SYM("FUNCALL",396)))) { goto L2; }
   T0 = ecl_caadr(v1);
   if (!((T0)==(ECL_SYM("FUNCTION",398)))) { goto L2; }
   v3 = ecl_cddr(v1);
   goto L1;
L2:;
   v3 = ecl_cdr(v1);
L1:;
   if (Null(v3)) { goto L6; }
   {
    cl_object v5;
    v5 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4stream = v5;
    goto L5;
   }
L6:;
   v4stream = ECL_NIL;
L5:;
   if (Null(v3)) { goto L11; }
   ecl_function_dispatch(cl_env_copy,VV[16])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L11:;
   T0 = ecl_list1(v4stream);
   value0 = cl_listX(3, ECL_SYM("C-INLINE",2063), T0, VV[11]);
   return value0;
  }
 }
}
/*      local function LAMBDA16                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC4__lambda16(cl_object v1, cl_object v2)
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
   cl_object v5stream;
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
   ecl_function_dispatch(cl_env_copy,VV[15])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
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
    v5stream = v6;
    goto L11;
   }
L12:;
   v5stream = ECL_NIL;
L11:;
   if (Null(v3)) { goto L17; }
   ecl_function_dispatch(cl_env_copy,VV[16])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L17:;
   T0 = cl_list(2, v4value, v5stream);
   value0 = cl_listX(3, ECL_SYM("C-INLINE",2063), T0, VV[12]);
   return value0;
  }
 }
}
/*      local function LAMBDA22                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC5__lambda22(cl_object v1, cl_object v2)
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
   cl_object v5stream;
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
   ecl_function_dispatch(cl_env_copy,VV[15])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
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
    v5stream = v6;
    goto L11;
   }
L12:;
   v5stream = ECL_NIL;
L11:;
   if (Null(v3)) { goto L17; }
   ecl_function_dispatch(cl_env_copy,VV[16])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L17:;
   T0 = cl_list(2, v4value, v5stream);
   value0 = cl_listX(3, ECL_SYM("C-INLINE",2063), T0, VV[13]);
   return value0;
  }
 }
}

#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/cmp/cmpopt-printer.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclKgC1pkb7_Y6Xmqq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CMP;CMPOPT-PRINTER.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclKgC1pkb7_Y6Xmqq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  (void)0; /* No entry created for PRINTER-DEFAULT-STREAM */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC2__lambda5,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_put_sysprop(ECL_SYM("PRINC",662), ECL_SYM("COMPILER-MACRO",240), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC3__lambda11,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_put_sysprop(ECL_SYM("TERPRI",857), ECL_SYM("COMPILER-MACRO",240), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC4__lambda16,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_put_sysprop(ECL_SYM("PRINT",664), ECL_SYM("COMPILER-MACRO",240), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC5__lambda22,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_put_sysprop(ECL_SYM("PRIN1",660), ECL_SYM("COMPILER-MACRO",240), T0);
 }
}
