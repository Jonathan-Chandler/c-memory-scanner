/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CMP;CMPOPT-CONSTANT.LSP                           */
#include <ecl/ecl-cmp.h>
#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/cmp/cmpopt-constant.eclh"
/*      function definition for CONSTANT-EXPRESSION-P                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L1constant_expression_p(cl_narg narg, cl_object v1form, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2env;
  va_list args; va_start(args,v1form);
  {
   int i = 1;
   if (i >= narg) {
    v2env = ecl_symbol_value(VV[0]);
   } else {
    i++;
    v2env = va_arg(args,cl_object);
   }
  }
  va_end(args);
  value0 = cl_constantp(2, v1form, v2env);
  if ((value0)!=ECL_NIL) { goto L3; }
  if (!(ECL_CONSP(v1form))) { goto L6; }
  {
   cl_object v3head;
   v3head = ecl_car(v1form);
   if ((ecl_memql(v3head,VV[1]))!=ECL_NIL) { goto L10; }
   if (Null(si_get_sysprop(v3head, VV[2]))) { goto L6; }
   if (Null(ecl_function_dispatch(cl_env_copy,VV[7])(1, v3head) /*  INLINE-POSSIBLE */)) { goto L6; }
   goto L8;
L10:;
  }
L8:;
  {
   cl_object v3;
   cl_object v4c;
   cl_object v5;
   v3 = ecl_cdr(v1form);
   v4c = ECL_NIL;
   {
    cl_object v6;
    v6 = v3;
    if (ecl_unlikely(!ECL_LISTP(v6))) FEtype_error_list(v6);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v5 = v6;
   }
L18:;
   if (!(ecl_endp(v5))) { goto L20; }
   goto L19;
L20:;
   v4c = _ecl_car(v5);
   {
    cl_object v6;
    v6 = _ecl_cdr(v5);
    if (ecl_unlikely(!ECL_LISTP(v6))) FEtype_error_list(v6);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v5 = v6;
   }
   if ((L1constant_expression_p(2, v4c, v2env))!=ECL_NIL) { goto L28; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L28:;
   goto L18;
L19:;
   value0 = ECL_T;
   cl_env_copy->nvalues = 1;
   return value0;
  }
L6:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L3:;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for EXTRACT-CONSTANT-VALUE                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L3extract_constant_value(volatile cl_narg narg, cl_object volatile v1form, ...)
{
 cl_object T0, T1, T2, T3;
 cl_object volatile env0 = ECL_NIL;
 cl_object volatile CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>3)) FEwrong_num_arguments_anonym();
 {
  cl_object volatile v2failure;
  cl_object volatile v3env;
  va_list args; va_start(args,v1form);
  {
   int i = 1;
   if (i >= narg) {
    v2failure = ECL_NIL;
   } else {
    i++;
    v2failure = va_arg(args,cl_object);
   }
   if (i >= narg) {
    v3env = ecl_symbol_value(VV[0]);
   } else {
    i++;
    v3env = va_arg(args,cl_object);
   }
  }
  va_end(args);
  if (Null(L1constant_expression_p(2, v1form, v3env))) { goto L3; }
  {
   volatile cl_object env1 = env0;
   env1 = ECL_NIL;
   CLV0 = env1 = CONS(ECL_NIL,env1);
   {
    volatile cl_object env2 = env1;
    CLV1 = env2 = CONS(ECL_NEW_FRAME_ID(cl_env_copy),env2); /*  TAGBODY */
    {
     ecl_frs_push(cl_env_copy,ECL_CONS_CAR(CLV1));
     if (__ecl_frs_push_result) {
     if (cl_env_copy->values[0]==ecl_make_fixnum(0))goto L5;
     ecl_internal_error("GO found an inexistent tag");
     }
    }
    {
     cl_object v4;
     v4 = ecl_make_cclosure_va((cl_objectfn)LC2__lambda6,env2,Cblock,1);
     T0 = v4;
    }
    T1 = CONS(ECL_SYM("ERROR",339),T0);
    T2 = ecl_list1(T1);
    T3 = CONS(T2,ecl_symbol_value(ECL_SYM("*HANDLER-CLUSTERS*",6)));
    ecl_bds_bind(cl_env_copy,ECL_SYM("*HANDLER-CLUSTERS*",6),T3); /*  *HANDLER-CLUSTERS* */
    value0 = ecl_function_dispatch(cl_env_copy,VV[9])(2, v1form, v3env) /*  CMP-EVAL */;
    ecl_frs_pop(cl_env_copy);
    ecl_bds_unwind1(cl_env_copy);
    return value0;
L5:;
    value0 = v2failure;
    cl_env_copy->nvalues = 1;
    ecl_frs_pop(cl_env_copy);
    return value0;
   }
  }
L3:;
  value0 = v2failure;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      closure LAMBDA6                                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC2__lambda6(cl_narg narg, cl_object v1si__temp, ...)
{
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV1 = env0;                                     /*  TAGBODY         */
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=1)) FEwrong_num_arguments_anonym();
 {
TTL:
  ECL_CONS_CAR(CLV0) = v1si__temp;
  cl_go(ECL_CONS_CAR(CLV1),ecl_make_fixnum(0));
 }
 }
}
/*      function definition for CONSTANT-VALUE-P                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L5constant_value_p(volatile cl_narg narg, cl_object volatile v1form, ...)
{
 cl_object T0, T1, T2, T3;
 cl_object volatile env0 = ECL_NIL;
 cl_object volatile CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object volatile v2env;
  va_list args; va_start(args,v1form);
  {
   int i = 1;
   if (i >= narg) {
    v2env = ecl_symbol_value(VV[0]);
   } else {
    i++;
    v2env = va_arg(args,cl_object);
   }
  }
  va_end(args);
  if (Null(L1constant_expression_p(2, v1form, v2env))) { goto L2; }
  {
   volatile cl_object env1 = env0;
   env1 = ECL_NIL;
   CLV0 = env1 = CONS(ECL_NIL,env1);
   {
    volatile cl_object env2 = env1;
    CLV1 = env2 = CONS(ECL_NEW_FRAME_ID(cl_env_copy),env2); /*  TAGBODY */
    {
     ecl_frs_push(cl_env_copy,ECL_CONS_CAR(CLV1));
     if (__ecl_frs_push_result) {
     if (cl_env_copy->values[0]==ecl_make_fixnum(0))goto L4;
     ecl_internal_error("GO found an inexistent tag");
     }
    }
    {
     cl_object v3;
     v3 = ecl_make_cclosure_va((cl_objectfn)LC4__lambda10,env2,Cblock,1);
     T0 = v3;
    }
    T1 = CONS(ECL_SYM("ERROR",339),T0);
    T2 = ecl_list1(T1);
    T3 = CONS(T2,ecl_symbol_value(ECL_SYM("*HANDLER-CLUSTERS*",6)));
    ecl_bds_bind(cl_env_copy,ECL_SYM("*HANDLER-CLUSTERS*",6),T3); /*  *HANDLER-CLUSTERS* */
    T0 = ecl_function_dispatch(cl_env_copy,VV[9])(2, v1form, v2env) /*  CMP-EVAL */;
    cl_env_copy->nvalues = 2;
    cl_env_copy->values[1] = T0;
    cl_env_copy->values[0] = ECL_T;
    value0 = cl_env_copy->values[0];
    ecl_frs_pop(cl_env_copy);
    ecl_bds_unwind1(cl_env_copy);
    return value0;
L4:;
    cl_env_copy->nvalues = 2;
    cl_env_copy->values[1] = v1form;
    cl_env_copy->values[0] = ECL_NIL;
    value0 = cl_env_copy->values[0];
    ecl_frs_pop(cl_env_copy);
    return value0;
   }
  }
L2:;
  cl_env_copy->nvalues = 2;
  cl_env_copy->values[1] = v1form;
  cl_env_copy->values[0] = ECL_NIL;
  return cl_env_copy->values[0];
 }
}
/*      closure LAMBDA10                                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC4__lambda10(cl_narg narg, cl_object v1si__temp, ...)
{
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV1 = env0;                                     /*  TAGBODY         */
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=1)) FEwrong_num_arguments_anonym();
 {
TTL:
  ECL_CONS_CAR(CLV0) = v1si__temp;
  cl_go(ECL_CONS_CAR(CLV1),ecl_make_fixnum(0));
 }
 }
}

#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/cmp/cmpopt-constant.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclSczb42a7_0tY6lq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CMP;CMPOPT-CONSTANT.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclSczb42a7_0tY6lq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  ecl_cmp_defun(VV[6]);                           /*  CONSTANT-EXPRESSION-P */
  ecl_cmp_defun(VV[8]);                           /*  EXTRACT-CONSTANT-VALUE */
  ecl_cmp_defun(VV[10]);                          /*  CONSTANT-VALUE-P */
}
