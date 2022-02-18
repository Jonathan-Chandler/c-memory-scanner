/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:LSP;UNICODE.LSP                                   */
#include <ecl/ecl-cmp.h>
#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/clos/unicode.eclh"
/*      local function LAMBDA0                                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC2__lambda0()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC1__lambda1,ECL_NIL,Cblock,2);
   value0 = v1;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function LAMBDA1                                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC1__lambda1(cl_object v1c, cl_object v2s)
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
   cl_object v4;
   v3 = (cl_env_copy->function=(ECL_SYM("STREAM-ERROR-STREAM",804)->symbol.gfdef))->cfun.entry(1, v1c) /*  STREAM-ERROR-STREAM */;
   v4 = ecl_function_dispatch(cl_env_copy,ECL_SYM("CHARACTER-ENCODING-ERROR-CODE",1908))(1, v1c) /*  CHARACTER-ENCODING-ERROR-CODE */;
   T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("CHARACTER-CODING-ERROR-EXTERNAL-FORMAT",1906))(1, v1c) /*  CHARACTER-CODING-ERROR-EXTERNAL-FORMAT */;
   value0 = cl_format(6, v2s, VV[0], v3, ECL_SYM("EXTERNAL-FORMAT",1258), T0, v4);
   return value0;
  }
 }
}
/*      local function LAMBDA4                                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC4__lambda4()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC3__lambda5,ECL_NIL,Cblock,2);
   value0 = v1;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function LAMBDA5                                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC3__lambda5(cl_object v1c, cl_object v2s)
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
   cl_object v4;
   v3 = (cl_env_copy->function=(ECL_SYM("STREAM-ERROR-STREAM",804)->symbol.gfdef))->cfun.entry(1, v1c) /*  STREAM-ERROR-STREAM */;
   v4 = ecl_function_dispatch(cl_env_copy,ECL_SYM("CHARACTER-DECODING-ERROR-OCTETS",1910))(1, v1c) /*  CHARACTER-DECODING-ERROR-OCTETS */;
   T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("CHARACTER-CODING-ERROR-EXTERNAL-FORMAT",1906))(1, v1c) /*  CHARACTER-CODING-ERROR-EXTERNAL-FORMAT */;
   value0 = cl_format(6, v2s, VV[1], v3, ECL_SYM("EXTERNAL-FORMAT",1258), T0, v4);
   return value0;
  }
 }
}
/*      function definition for ENCODING-ERROR                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L9encoding_error(cl_object volatile v1stream, cl_object volatile v2external_format, cl_object volatile v3code)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7;
 cl_object volatile env0 = ECL_NIL;
 cl_object volatile CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
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
     if (cl_env_copy->values[0]==ecl_make_fixnum(0))goto L1;
     if (cl_env_copy->values[0]==ecl_make_fixnum(1))goto L2;
     ecl_internal_error("GO found an inexistent tag");
     }
    }
    {
     cl_object v4;
     v4 = ecl_make_cclosure_va((cl_objectfn)LC5__lambda13,env2,Cblock,0);
     T0 = v4;
    }
    {
     cl_object v4;
     v4 = ecl_make_cfun((cl_objectfn_fixed)LC6__lambda14,ECL_NIL,Cblock,1);
     T1 = v4;
    }
    T2 = ecl_function_dispatch(cl_env_copy,VV[11])(6, ECL_SYM("NAME",1300), ECL_SYM("CONTINUE",252), ECL_SYM("FUNCTION",1264), T0, VV[2], T1) /*  MAKE-RESTART */;
    {
     cl_object v4;
     v4 = ecl_make_cclosure_va((cl_objectfn)LC7__lambda15,env2,Cblock,0);
     T3 = v4;
    }
    {
     cl_object v4;
     v4 = ecl_make_cfun((cl_objectfn_fixed)LC8__lambda16,ECL_NIL,Cblock,1);
     T4 = v4;
    }
    T5 = ecl_function_dispatch(cl_env_copy,VV[11])(6, ECL_SYM("NAME",1300), ECL_SYM("USE-VALUE",895), ECL_SYM("FUNCTION",1264), T3, VV[2], T4) /*  MAKE-RESTART */;
    T6 = cl_list(2, T2, T5);
    T7 = CONS(T6,ecl_symbol_value(ECL_SYM("*RESTART-CLUSTERS*",5)));
    ecl_bds_bind(cl_env_copy,ECL_SYM("*RESTART-CLUSTERS*",5),T7); /*  *RESTART-CLUSTERS* */
    {
     cl_object v4;
     T0 = cl_list(6, ECL_SYM("STREAM",1340), v1stream, ECL_SYM("EXTERNAL-FORMAT",1258), v2external_format, ECL_SYM("CODE",1887), v3code);
     v4 = ecl_function_dispatch(cl_env_copy,VV[12])(4, ECL_SYM("STREAM-ENCODING-ERROR",1912), T0, ECL_SYM("SIMPLE-ERROR",772), ECL_SYM("ERROR",339)) /*  COERCE-TO-CONDITION */;
     T0 = ecl_car(ecl_symbol_value(ECL_SYM("*RESTART-CLUSTERS*",5)));
     T1 = CONS(v4,T0);
     T2 = CONS(T1,ecl_symbol_value(VV[5]));
     ecl_bds_bind(cl_env_copy,VV[5],T2);          /*  *CONDITION-RESTARTS* */
     value0 = cl_error(1, v4);
     ecl_frs_pop(cl_env_copy);
     ecl_bds_unwind1(cl_env_copy);
     ecl_bds_unwind1(cl_env_copy);
     return value0;
    }
L1:;
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    ecl_frs_pop(cl_env_copy);
    return value0;
L2:;
    {
     cl_object v4;
     cl_object v5c;
     v4 = ECL_CONS_CAR(CLV0);
     if (Null(v4)) { goto L13; }
     {
      cl_object v6;
      v6 = v4;
      {
       cl_object v7;
       v7 = v6;
       if (ecl_unlikely(!ECL_LISTP(v7))) FEtype_error_list(v7);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v6)) { goto L19; }
      {
       cl_object v7;
       v7 = ECL_CONS_CDR(v6);
       v4 = v7;
       v6 = ECL_CONS_CAR(v6);
      }
L19:;
      v5c = v6;
      goto L12;
     }
L13:;
     v5c = ecl_function_dispatch(cl_env_copy,VV[13])(1, ECL_NIL) /*  DM-TOO-FEW-ARGUMENTS */;
L12:;
     if (!(ECL_CHARACTERP(v5c))) { goto L25; }
     value0 = v5c;
     cl_env_copy->nvalues = 1;
     ecl_frs_pop(cl_env_copy);
     return value0;
L25:;
     value0 = cl_code_char(v5c);
     ecl_frs_pop(cl_env_copy);
     return value0;
    }
   }
  }
 }
}
/*      closure LAMBDA13                                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC5__lambda13(cl_narg narg, ...)
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
 {
  cl_object v1temp;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  v1temp = cl_grab_rest_args(args);
  ecl_va_end(args);
  ECL_CONS_CAR(CLV0) = v1temp;
  cl_go(ECL_CONS_CAR(CLV1),ecl_make_fixnum(0));
 }
 }
}
/*      local function LAMBDA14                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC6__lambda14(cl_object v1stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_write_string(2, VV[3], v1stream);
  return value0;
 }
}
/*      closure LAMBDA15                                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC7__lambda15(cl_narg narg, ...)
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
 {
  cl_object v1temp;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  v1temp = cl_grab_rest_args(args);
  ecl_va_end(args);
  ECL_CONS_CAR(CLV0) = v1temp;
  cl_go(ECL_CONS_CAR(CLV1),ecl_make_fixnum(1));
 }
 }
}
/*      local function LAMBDA16                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC8__lambda16(cl_object v1stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_write_string(2, VV[4], v1stream);
  return value0;
 }
}
/*      function definition for DECODING-ERROR                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L14decoding_error(cl_object volatile v1stream, cl_object volatile v2external_format, cl_object volatile v3octets)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7;
 cl_object volatile env0 = ECL_NIL;
 cl_object volatile CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
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
     if (cl_env_copy->values[0]==ecl_make_fixnum(0))goto L1;
     if (cl_env_copy->values[0]==ecl_make_fixnum(1))goto L2;
     ecl_internal_error("GO found an inexistent tag");
     }
    }
    {
     cl_object v4;
     v4 = ecl_make_cclosure_va((cl_objectfn)LC10__lambda26,env2,Cblock,0);
     T0 = v4;
    }
    {
     cl_object v4;
     v4 = ecl_make_cfun((cl_objectfn_fixed)LC11__lambda27,ECL_NIL,Cblock,1);
     T1 = v4;
    }
    T2 = ecl_function_dispatch(cl_env_copy,VV[11])(6, ECL_SYM("NAME",1300), ECL_SYM("CONTINUE",252), ECL_SYM("FUNCTION",1264), T0, VV[2], T1) /*  MAKE-RESTART */;
    {
     cl_object v4;
     v4 = ecl_make_cclosure_va((cl_objectfn)LC12__lambda28,env2,Cblock,0);
     T3 = v4;
    }
    {
     cl_object v4;
     v4 = ecl_make_cfun((cl_objectfn_fixed)LC13__lambda29,ECL_NIL,Cblock,1);
     T4 = v4;
    }
    T5 = ecl_function_dispatch(cl_env_copy,VV[11])(6, ECL_SYM("NAME",1300), ECL_SYM("USE-VALUE",895), ECL_SYM("FUNCTION",1264), T3, VV[2], T4) /*  MAKE-RESTART */;
    T6 = cl_list(2, T2, T5);
    T7 = CONS(T6,ecl_symbol_value(ECL_SYM("*RESTART-CLUSTERS*",5)));
    ecl_bds_bind(cl_env_copy,ECL_SYM("*RESTART-CLUSTERS*",5),T7); /*  *RESTART-CLUSTERS* */
    {
     cl_object v4;
     T0 = cl_list(6, ECL_SYM("STREAM",1340), v1stream, ECL_SYM("EXTERNAL-FORMAT",1258), v2external_format, ECL_SYM("OCTETS",1904), v3octets);
     v4 = ecl_function_dispatch(cl_env_copy,VV[12])(4, ECL_SYM("STREAM-DECODING-ERROR",1911), T0, ECL_SYM("SIMPLE-ERROR",772), ECL_SYM("ERROR",339)) /*  COERCE-TO-CONDITION */;
     T0 = ecl_car(ecl_symbol_value(ECL_SYM("*RESTART-CLUSTERS*",5)));
     T1 = CONS(v4,T0);
     T2 = CONS(T1,ecl_symbol_value(VV[5]));
     ecl_bds_bind(cl_env_copy,VV[5],T2);          /*  *CONDITION-RESTARTS* */
     value0 = cl_error(1, v4);
     ecl_frs_pop(cl_env_copy);
     ecl_bds_unwind1(cl_env_copy);
     ecl_bds_unwind1(cl_env_copy);
     return value0;
    }
L1:;
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    ecl_frs_pop(cl_env_copy);
    return value0;
L2:;
    {
     cl_object v4;
     cl_object v5c;
     v4 = ECL_CONS_CAR(CLV0);
     if (Null(v4)) { goto L13; }
     {
      cl_object v6;
      v6 = v4;
      {
       cl_object v7;
       v7 = v6;
       if (ecl_unlikely(!ECL_LISTP(v7))) FEtype_error_list(v7);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v6)) { goto L19; }
      {
       cl_object v7;
       v7 = ECL_CONS_CDR(v6);
       v4 = v7;
       v6 = ECL_CONS_CAR(v6);
      }
L19:;
      v5c = v6;
      goto L12;
     }
L13:;
     v5c = ecl_function_dispatch(cl_env_copy,VV[13])(1, ECL_NIL) /*  DM-TOO-FEW-ARGUMENTS */;
L12:;
     if (!(ECL_CHARACTERP(v5c))) { goto L25; }
     value0 = v5c;
     cl_env_copy->nvalues = 1;
     ecl_frs_pop(cl_env_copy);
     return value0;
L25:;
     value0 = cl_code_char(v5c);
     ecl_frs_pop(cl_env_copy);
     return value0;
    }
   }
  }
 }
}
/*      closure LAMBDA26                                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC10__lambda26(cl_narg narg, ...)
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
 {
  cl_object v1temp;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  v1temp = cl_grab_rest_args(args);
  ecl_va_end(args);
  ECL_CONS_CAR(CLV0) = v1temp;
  cl_go(ECL_CONS_CAR(CLV1),ecl_make_fixnum(0));
 }
 }
}
/*      local function LAMBDA27                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC11__lambda27(cl_object v1stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_write_string(2, VV[7], v1stream);
  return value0;
 }
}
/*      closure LAMBDA28                                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC12__lambda28(cl_narg narg, ...)
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
 {
  cl_object v1temp;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  v1temp = cl_grab_rest_args(args);
  ecl_va_end(args);
  ECL_CONS_CAR(CLV0) = v1temp;
  cl_go(ECL_CONS_CAR(CLV1),ecl_make_fixnum(1));
 }
 }
}
/*      local function LAMBDA29                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC13__lambda29(cl_object v1stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_write_string(2, VV[8], v1stream);
  return value0;
 }
}

#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/clos/unicode.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclouhaLQb7_CgM6lq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:LSP;UNICODE.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclouhaLQb7_CgM6lq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  clos_load_defclass(ECL_SYM("CHARACTER-CODING-ERROR",1905), VVtemp[1], VVtemp[2], ECL_NIL);
  clos_load_defclass(ECL_SYM("CHARACTER-ENCODING-ERROR",1907), VVtemp[3], VVtemp[4], ECL_NIL);
  clos_load_defclass(ECL_SYM("CHARACTER-DECODING-ERROR",1909), VVtemp[3], VVtemp[5], ECL_NIL);
 {
  cl_object T0, T1, T2;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC2__lambda0,ECL_NIL,Cblock,0);
   T0 = v1;
  }
  T1 = cl_listX(3, ECL_SYM("INITFUNCTION",999), T0, VVtemp[7]);
  T2 = ecl_list1(T1);
  clos_load_defclass(ECL_SYM("STREAM-ENCODING-ERROR",1912), VVtemp[6], T2, ECL_NIL);
 }
 {
  cl_object T0, T1, T2;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC4__lambda4,ECL_NIL,Cblock,0);
   T0 = v1;
  }
  T1 = cl_listX(3, ECL_SYM("INITFUNCTION",999), T0, VVtemp[9]);
  T2 = ecl_list1(T1);
  clos_load_defclass(ECL_SYM("STREAM-DECODING-ERROR",1911), VVtemp[8], T2, ECL_NIL);
 }
  ecl_cmp_defun(VV[10]);                          /*  ENCODING-ERROR  */
  ecl_cmp_defun(VV[14]);                          /*  DECODING-ERROR  */
}
