/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:LSP;ASSERT.LSP                                    */
#include <ecl/ecl-cmp.h>
#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/lsp/assert.eclh"
/*      function definition for READ-EVALUATED-FORM                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L1read_evaluated_form()
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  cl_format(2, ecl_symbol_value(ECL_SYM("*QUERY-IO*",61)), VV[0]);
  T0 = cl_read(1, ecl_symbol_value(ECL_SYM("*QUERY-IO*",61)));
  T1 = cl_eval(T0);
  value0 = ecl_list1(T1);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for WRONG-TYPE-ARGUMENT                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object si_wrong_type_argument(volatile cl_narg narg, cl_object volatile v1object, cl_object volatile v2type, ...)
{
 cl_object T0, T1, T2, T3, T4, T5;
 cl_object volatile env0 = ECL_NIL;
 cl_object volatile CLV0, CLV1, CLV2;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>4)) FEwrong_num_arguments_anonym();
 {
  cl_object volatile v3place;
  cl_object volatile v4function;
  va_list args; va_start(args,v2type);
  env0 = ECL_NIL;
  CLV0 = env0 = CONS(v2type,env0);                /*  TYPE            */
  {
   int i = 2;
   if (i >= narg) {
    v3place = ECL_NIL;
   } else {
    i++;
    v3place = va_arg(args,cl_object);
   }
   if (i >= narg) {
    v4function = ECL_NIL;
   } else {
    i++;
    v4function = va_arg(args,cl_object);
   }
  }
  va_end(args);
L4:;
  {
   volatile cl_object env1 = env0;
   CLV1 = env1 = CONS(ECL_NIL,env1);
   {
    volatile cl_object env2 = env1;
    CLV2 = env2 = CONS(ECL_NEW_FRAME_ID(cl_env_copy),env2); /*  TAGBODY */
    {
     ecl_frs_push(cl_env_copy,ECL_CONS_CAR(CLV2));
     if (__ecl_frs_push_result) {
     if (cl_env_copy->values[0]==ecl_make_fixnum(0))goto L6;
     ecl_internal_error("GO found an inexistent tag");
     }
    }
    {
     cl_object v5;
     v5 = ecl_make_cclosure_va((cl_objectfn)LC2__lambda4,env2,Cblock,0);
     T0 = v5;
    }
    {
     cl_object v5;
     v5 = ecl_make_cclosure_va((cl_objectfn)LC3__lambda5,env2,Cblock,1);
     T1 = v5;
    }
    T2 = (VV[1]->symbol.gfdef);
    T3 = ecl_function_dispatch(cl_env_copy,VV[23])(8, ECL_SYM("NAME",1300), ECL_SYM("USE-VALUE",895), ECL_SYM("FUNCTION",1264), T0, VV[2], T1, VV[4], T2) /*  MAKE-RESTART */;
    T4 = ecl_list1(T3);
    T5 = CONS(T4,ecl_symbol_value(ECL_SYM("*RESTART-CLUSTERS*",5)));
    ecl_bds_bind(cl_env_copy,ECL_SYM("*RESTART-CLUSTERS*",5),T5); /*  *RESTART-CLUSTERS* */
    {
     cl_object v5;
     T0 = cl_list(4, v4function, v3place, v1object, ECL_CONS_CAR(CLV0));
     T1 = cl_list(8, ECL_SYM("FORMAT-CONTROL",1263), VV[5], ECL_SYM("FORMAT-ARGUMENTS",1262), T0, ECL_SYM("DATUM",1236), v1object, ECL_SYM("EXPECTED-TYPE",1254), ECL_CONS_CAR(CLV0));
     v5 = ecl_function_dispatch(cl_env_copy,VV[24])(4, ECL_SYM("SIMPLE-TYPE-ERROR",775), T1, ECL_SYM("SIMPLE-ERROR",772), ECL_SYM("ERROR",339)) /*  COERCE-TO-CONDITION */;
     T0 = ecl_car(ecl_symbol_value(ECL_SYM("*RESTART-CLUSTERS*",5)));
     T1 = CONS(v5,T0);
     T2 = CONS(T1,ecl_symbol_value(VV[6]));
     ecl_bds_bind(cl_env_copy,VV[6],T2);          /*  *CONDITION-RESTARTS* */
     cl_error(1, v5);
     ecl_frs_pop(cl_env_copy);
     ecl_bds_unwind1(cl_env_copy);
     ecl_bds_unwind1(cl_env_copy);
     goto L5;
    }
L6:;
    {
     cl_object v5;
     cl_object v6value;
     v5 = ECL_CONS_CAR(CLV1);
     if (Null(v5)) { goto L15; }
     {
      cl_object v7;
      v7 = v5;
      {
       cl_object v8;
       v8 = v7;
       if (ecl_unlikely(!ECL_LISTP(v8))) FEtype_error_list(v8);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v7)) { goto L21; }
      {
       cl_object v8;
       v8 = ECL_CONS_CDR(v7);
       v5 = v8;
       v7 = ECL_CONS_CAR(v7);
      }
L21:;
      v6value = v7;
      goto L14;
     }
L15:;
     v6value = ecl_function_dispatch(cl_env_copy,VV[25])(1, ECL_NIL) /*  DM-TOO-FEW-ARGUMENTS */;
L14:;
     v1object = v6value;
     if ((cl_typep(2, v1object, ECL_CONS_CAR(CLV0)))!=ECL_NIL) {
     ecl_frs_pop(cl_env_copy); goto L5; }
     ecl_frs_pop(cl_env_copy);
     goto L4;
    }
   }
  }
L5:;
  value0 = v1object;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      closure LAMBDA4                                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC2__lambda4(cl_narg narg, ...)
{
 cl_object CLV0, CLV1, CLV2;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV2 = env0;                                     /*  TAGBODY         */
 CLV1 = _ecl_cdr(CLV2);
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 {
  cl_object v1temp;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  v1temp = cl_grab_rest_args(args);
  ecl_va_end(args);
  ECL_CONS_CAR(CLV1) = v1temp;
  cl_go(ECL_CONS_CAR(CLV2),ecl_make_fixnum(0));
 }
 }
}
/*      closure LAMBDA5                                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC3__lambda5(cl_narg narg, cl_object v1stream, ...)
{
 cl_object CLV0, CLV1, CLV2;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV2 = env0;
 CLV1 = _ecl_cdr(CLV2);
 CLV0 = _ecl_cdr(CLV1);                           /*  TYPE            */
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=1)) FEwrong_num_arguments_anonym();
 {
TTL:
  value0 = cl_format(3, v1stream, VV[3], ECL_CONS_CAR(CLV0));
  return value0;
 }
 }
}
/*      local function CHECK-TYPE                                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC4check_type(cl_object v1, cl_object v2)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4place;
   cl_object v5type;
   cl_object v6type_string;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[25])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v7;
    v7 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4place = v7;
   }
   if (!(v3==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[25])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v7;
    v7 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5type = v7;
   }
   if (Null(v3)) { goto L15; }
   {
    cl_object v7;
    v7 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v6type_string = v7;
    goto L14;
   }
L15:;
   v6type_string = ECL_NIL;
L14:;
   if (Null(v3)) { goto L20; }
   ecl_function_dispatch(cl_env_copy,VV[27])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L20:;
   {
    cl_object v7aux;
    v7aux = cl_gensym(0);
    T0 = cl_list(2, v7aux, v4place);
    T1 = ecl_list1(T0);
    T2 = cl_list(2, VV[7], v7aux);
    T3 = cl_list(2, ECL_SYM("DECLARE",276), T2);
    T4 = cl_list(2, ECL_SYM("QUOTE",681), v5type);
    T5 = cl_list(3, ECL_SYM("TYPEP",877), v7aux, T4);
    T6 = cl_list(2, ECL_SYM("QUOTE",681), v5type);
    T7 = cl_list(2, ECL_SYM("QUOTE",681), v6type_string);
    T8 = cl_list(2, ECL_SYM("QUOTE",681), v4place);
    T9 = cl_list(5, ECL_SYM("DO-CHECK-TYPE",1866), v7aux, T6, T7, T8);
    T10 = cl_list(3, ECL_SYM("SETF",752), v4place, T9);
    T11 = cl_list(3, ECL_SYM("UNLESS",885), T5, T10);
    value0 = cl_list(5, ECL_SYM("LET",479), T1, T3, T11, ECL_NIL);
    return value0;
   }
  }
 }
}
/*      function definition for DO-CHECK-TYPE                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object si_do_check_type(cl_object volatile v1value, cl_object volatile v2type, cl_object volatile v3type_string, cl_object volatile v4place)
{
 cl_object T0, T1, T2, T3, T4, T5;
 cl_object volatile env0 = ECL_NIL;
 cl_object volatile CLV0, CLV1, CLV2;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  env0 = ECL_NIL;
  CLV0 = env0 = CONS(v4place,env0);               /*  PLACE           */
L2:;
  if ((cl_typep(2, v1value, v2type))!=ECL_NIL) { goto L3; }
  {
   volatile cl_object env1 = env0;
   CLV1 = env1 = CONS(ECL_NIL,env1);
   {
    volatile cl_object env2 = env1;
    CLV2 = env2 = CONS(ECL_NEW_FRAME_ID(cl_env_copy),env2); /*  TAGBODY */
    {
     ecl_frs_push(cl_env_copy,ECL_CONS_CAR(CLV2));
     if (__ecl_frs_push_result) {
     if (cl_env_copy->values[0]==ecl_make_fixnum(0))goto L5;
     ecl_internal_error("GO found an inexistent tag");
     }
    }
    {
     cl_object v5;
     v5 = ecl_make_cclosure_va((cl_objectfn)LC5__lambda23,env2,Cblock,0);
     T0 = v5;
    }
    {
     cl_object v5;
     v5 = ecl_make_cclosure_va((cl_objectfn)LC6__lambda24,env2,Cblock,1);
     T1 = v5;
    }
    T2 = (VV[1]->symbol.gfdef);
    T3 = ecl_function_dispatch(cl_env_copy,VV[23])(8, ECL_SYM("NAME",1300), ECL_SYM("STORE-VALUE",800), ECL_SYM("FUNCTION",1264), T0, VV[2], T1, VV[4], T2) /*  MAKE-RESTART */;
    T4 = ecl_list1(T3);
    T5 = CONS(T4,ecl_symbol_value(ECL_SYM("*RESTART-CLUSTERS*",5)));
    ecl_bds_bind(cl_env_copy,ECL_SYM("*RESTART-CLUSTERS*",5),T5); /*  *RESTART-CLUSTERS* */
    {
     cl_object v5;
     T0 = cl_list(4, ECL_CONS_CAR(CLV0), v1value, v3type_string, v2type);
     T1 = cl_list(8, ECL_SYM("DATUM",1236), v1value, ECL_SYM("EXPECTED-TYPE",1254), v2type, ECL_SYM("FORMAT-CONTROL",1263), VV[10], ECL_SYM("FORMAT-ARGUMENTS",1262), T0);
     v5 = ecl_function_dispatch(cl_env_copy,VV[24])(4, ECL_SYM("SIMPLE-TYPE-ERROR",775), T1, ECL_SYM("SIMPLE-ERROR",772), ECL_SYM("ERROR",339)) /*  COERCE-TO-CONDITION */;
     T0 = ecl_car(ecl_symbol_value(ECL_SYM("*RESTART-CLUSTERS*",5)));
     T1 = CONS(v5,T0);
     T2 = CONS(T1,ecl_symbol_value(VV[6]));
     ecl_bds_bind(cl_env_copy,VV[6],T2);          /*  *CONDITION-RESTARTS* */
     cl_error(1, v5);
     ecl_frs_pop(cl_env_copy);
     ecl_bds_unwind1(cl_env_copy);
     ecl_bds_unwind1(cl_env_copy);
     goto L3;
    }
L5:;
    {
     cl_object v5;
     cl_object v6new_value;
     v5 = ECL_CONS_CAR(CLV1);
     if (Null(v5)) { goto L14; }
     {
      cl_object v7;
      v7 = v5;
      {
       cl_object v8;
       v8 = v7;
       if (ecl_unlikely(!ECL_LISTP(v8))) FEtype_error_list(v8);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v7)) { goto L20; }
      {
       cl_object v8;
       v8 = ECL_CONS_CDR(v7);
       v5 = v8;
       v7 = ECL_CONS_CAR(v7);
      }
L20:;
      v6new_value = v7;
      goto L13;
     }
L14:;
     v6new_value = ecl_function_dispatch(cl_env_copy,VV[25])(1, ECL_NIL) /*  DM-TOO-FEW-ARGUMENTS */;
L13:;
     v1value = v6new_value;
     ecl_frs_pop(cl_env_copy);
     goto L2;
    }
   }
  }
L3:;
  value0 = v1value;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      closure LAMBDA23                                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC5__lambda23(cl_narg narg, ...)
{
 cl_object CLV0, CLV1, CLV2;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV2 = env0;                                     /*  TAGBODY         */
 CLV1 = _ecl_cdr(CLV2);
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 {
  cl_object v1temp;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  v1temp = cl_grab_rest_args(args);
  ecl_va_end(args);
  ECL_CONS_CAR(CLV1) = v1temp;
  cl_go(ECL_CONS_CAR(CLV2),ecl_make_fixnum(0));
 }
 }
}
/*      closure LAMBDA24                                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC6__lambda24(cl_narg narg, cl_object v1stream, ...)
{
 cl_object CLV0, CLV1, CLV2;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV2 = env0;
 CLV1 = _ecl_cdr(CLV2);
 CLV0 = _ecl_cdr(CLV1);                           /*  PLACE           */
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=1)) FEwrong_num_arguments_anonym();
 {
TTL:
  value0 = cl_format(3, v1stream, VV[9], ECL_CONS_CAR(CLV0));
  return value0;
 }
 }
}
/*      local function ASSERT                                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC7assert(cl_object v1, cl_object v2)
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
   cl_object v4test_form;
   cl_object v5places;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[25])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4test_form = v6;
   }
   if (Null(v3)) { goto L9; }
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5places = v6;
    goto L8;
   }
L9:;
   v5places = ECL_NIL;
L8:;
   {
    cl_object v6repl;
    if (Null(v5places)) { goto L15; }
    T0 = CONS(ECL_SYM("VALUES",897),v5places);
    T1 = cl_list(2, ECL_SYM("QUOTE",681), v4test_form);
    T2 = cl_list(2, ECL_SYM("QUOTE",681), v5places);
    T3 = CONS(ECL_SYM("LIST",483),v5places);
    T4 = cl_listX(5, ECL_SYM("ASSERT-FAILURE",1861), T1, T2, T3, v3);
    v6repl = cl_list(3, ECL_SYM("SETF",752), T0, T4);
    goto L14;
L15:;
    T0 = cl_list(2, ECL_SYM("QUOTE",681), v4test_form);
    if (Null(v3)) { goto L19; }
    T1 = cl_listX(3, ECL_NIL, ECL_NIL, v3);
    goto L17;
L19:;
    T1 = ECL_NIL;
    goto L17;
L17:;
    v6repl = cl_listX(3, ECL_SYM("ASSERT-FAILURE",1861), T0, T1);
L14:;
    T0 = cl_list(2, ECL_SYM("NOT",586), v4test_form);
    value0 = cl_list(3, ECL_SYM("WHILE",1530), T0, v6repl);
    return value0;
   }
  }
 }
}
/*      function definition for ACCUMULATE-CASES                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L8accumulate_cases(cl_object v1cases, cl_object v2list_is_atom_p)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3c;
   cl_object v4l;
   v3c = v1cases;
   v4l = ECL_NIL;
   goto L5;
L4:;
   {
    cl_object v5keys;
    v5keys = ecl_caar(v3c);
    if (!(ECL_ATOM(v5keys))) { goto L9; }
    if (v5keys==ECL_NIL) { goto L7; }
    v4l = CONS(v5keys,v4l);
    goto L7;
L9:;
    if (Null(v2list_is_atom_p)) { goto L13; }
    v4l = CONS(v5keys,v4l);
    goto L7;
L13:;
    v4l = ecl_append(v5keys,v4l);
   }
L7:;
   v3c = ecl_cdr(v3c);
L5:;
   if (v3c==ECL_NIL) { goto L19; }
   goto L4;
L19:;
   value0 = cl_nreverse(v4l);
   return value0;
  }
 }
}
/*      function definition for ECASE-ERROR                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object si_ecase_error(cl_object v1value, cl_object v2values)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = CONS(ECL_SYM("MEMBER",554),v2values);
  value0 = cl_error(9, VV[12], ECL_SYM("NAME",1300), ECL_SYM("ECASE",323), ECL_SYM("DATUM",1236), v1value, ECL_SYM("EXPECTED-TYPE",1254), T0, VV[13], v2values);
  return value0;
 }
}
/*      local function ECASE                                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC9ecase(cl_object v1, cl_object v2)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4keyform;
   cl_object v5clauses;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[25])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4keyform = v6;
   }
   v5clauses = v3;
   v5clauses = L13remove_otherwise_from_clauses(v5clauses);
   {
    cl_object v6key;
    v6key = cl_gensym(0);
    T0 = cl_list(2, v6key, v4keyform);
    T1 = ecl_list1(T0);
    T2 = L8accumulate_cases(v5clauses, ECL_NIL);
    T3 = cl_list(2, ECL_SYM("QUOTE",681), T2);
    T4 = cl_list(3, ECL_SYM("ECASE-ERROR",1863), v6key, T3);
    T5 = cl_list(2, ECL_T, T4);
    T6 = ecl_list1(T5);
    T7 = ecl_append(v5clauses,T6);
    T8 = cl_listX(3, ECL_SYM("CASE",183), v6key, T7);
    value0 = cl_list(3, ECL_SYM("LET",479), T1, T8);
    return value0;
   }
  }
 }
}
/*      function definition for CCASE-ERROR                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object si_ccase_error(cl_object volatile v1keyform, cl_object volatile v2key, cl_object volatile v3values)
{
 cl_object T0, T1, T2, T3, T4, T5;
 cl_object volatile env0 = ECL_NIL;
 cl_object volatile CLV0, CLV1, CLV2;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  env0 = ECL_NIL;
  CLV0 = env0 = CONS(v1keyform,env0);             /*  KEYFORM         */
  {
   volatile cl_object env1 = env0;
   CLV1 = env1 = CONS(ECL_NIL,env1);
   CLV2 = env1 = CONS(ECL_NEW_FRAME_ID(cl_env_copy),env1); /*  TAGBODY */
   {
    ecl_frs_push(cl_env_copy,ECL_CONS_CAR(CLV2));
    if (__ecl_frs_push_result) {
    if (cl_env_copy->values[0]==ecl_make_fixnum(0))goto L1;
    ecl_internal_error("GO found an inexistent tag");
    }
   }
   {
    cl_object v4;
    v4 = ecl_make_cclosure_va((cl_objectfn)LC10__lambda54,env1,Cblock,0);
    T0 = v4;
   }
   {
    cl_object v4;
    v4 = ecl_make_cclosure_va((cl_objectfn)LC11__lambda55,env1,Cblock,1);
    T1 = v4;
   }
   T2 = (VV[1]->symbol.gfdef);
   T3 = ecl_function_dispatch(cl_env_copy,VV[23])(8, ECL_SYM("NAME",1300), ECL_SYM("STORE-VALUE",800), ECL_SYM("FUNCTION",1264), T0, VV[2], T1, VV[4], T2) /*  MAKE-RESTART */;
   T4 = ecl_list1(T3);
   T5 = CONS(T4,ecl_symbol_value(ECL_SYM("*RESTART-CLUSTERS*",5)));
   ecl_bds_bind(cl_env_copy,ECL_SYM("*RESTART-CLUSTERS*",5),T5); /*  *RESTART-CLUSTERS* */
   {
    cl_object v4;
    T0 = CONS(ECL_SYM("MEMBER",554),v3values);
    T1 = cl_list(8, ECL_SYM("NAME",1300), ECL_SYM("CCASE",185), ECL_SYM("DATUM",1236), v2key, ECL_SYM("EXPECTED-TYPE",1254), T0, VV[13], v3values);
    v4 = ecl_function_dispatch(cl_env_copy,VV[24])(4, VV[12], T1, ECL_SYM("SIMPLE-ERROR",772), ECL_SYM("ERROR",339)) /*  COERCE-TO-CONDITION */;
    T0 = ecl_car(ecl_symbol_value(ECL_SYM("*RESTART-CLUSTERS*",5)));
    T1 = CONS(v4,T0);
    T2 = CONS(T1,ecl_symbol_value(VV[6]));
    ecl_bds_bind(cl_env_copy,VV[6],T2);           /*  *CONDITION-RESTARTS* */
    value0 = cl_error(1, v4);
    ecl_frs_pop(cl_env_copy);
    ecl_bds_unwind1(cl_env_copy);
    ecl_bds_unwind1(cl_env_copy);
    return value0;
   }
L1:;
   {
    cl_object v4;
    cl_object v5value;
    v4 = ECL_CONS_CAR(CLV1);
    if (Null(v4)) { goto L10; }
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
     if (Null(v6)) { goto L16; }
     {
      cl_object v7;
      v7 = ECL_CONS_CDR(v6);
      v4 = v7;
      v6 = ECL_CONS_CAR(v6);
     }
L16:;
     v5value = v6;
     goto L9;
    }
L10:;
    v5value = ecl_function_dispatch(cl_env_copy,VV[25])(1, ECL_NIL) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
    value0 = v5value;
    cl_env_copy->nvalues = 1;
    ecl_frs_pop(cl_env_copy);
    return value0;
   }
  }
 }
}
/*      closure LAMBDA54                                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC10__lambda54(cl_narg narg, ...)
{
 cl_object CLV0, CLV1, CLV2;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV2 = env0;                                     /*  TAGBODY         */
 CLV1 = _ecl_cdr(CLV2);
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 {
  cl_object v1temp;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  v1temp = cl_grab_rest_args(args);
  ecl_va_end(args);
  ECL_CONS_CAR(CLV1) = v1temp;
  cl_go(ECL_CONS_CAR(CLV2),ecl_make_fixnum(0));
 }
 }
}
/*      closure LAMBDA55                                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC11__lambda55(cl_narg narg, cl_object v1stream, ...)
{
 cl_object CLV0, CLV1, CLV2;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV2 = env0;
 CLV1 = _ecl_cdr(CLV2);
 CLV0 = _ecl_cdr(CLV1);                           /*  KEYFORM         */
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=1)) FEwrong_num_arguments_anonym();
 {
TTL:
  value0 = cl_format(3, v1stream, VV[9], ECL_CONS_CAR(CLV0));
  return value0;
 }
 }
}
/*      function definition for REMOVE-OTHERWISE-FROM-CLAUSES         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L13remove_otherwise_from_clauses(cl_object v1clauses)
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
   {
    cl_object v3;
    v3 = ecl_make_cfun((cl_objectfn_fixed)LC12__lambda64,ECL_NIL,Cblock,1);
    v2 = v3;
   }
   {
    cl_object v3;
    cl_object v4;
    v3 = ECL_NIL;
    {
     cl_object v5;
     v5 = v1clauses;
     if (ecl_unlikely(!ECL_LISTP(v5))) FEtype_error_list(v5);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v4 = v5;
    }
    {
     cl_object v5;
     cl_object v6;
     v5 = ecl_list1(ECL_NIL);
     v6 = v5;
L8:;
     if (!(ecl_endp(v4))) { goto L10; }
     goto L9;
L10:;
     v3 = _ecl_car(v4);
     {
      cl_object v7;
      v7 = _ecl_cdr(v4);
      if (ecl_unlikely(!ECL_LISTP(v7))) FEtype_error_list(v7);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v4 = v7;
     }
     {
      cl_object v7;
      v7 = v6;
      if (ecl_unlikely(ECL_ATOM(v7))) FEtype_error_cons(v7);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      T0 = v7;
     }
     T1 = ecl_function_dispatch(cl_env_copy,v2)(1, v3);
     v6 = ecl_list1(T1);
     (ECL_CONS_CDR(T0)=v6,T0);
     goto L8;
L9:;
     value0 = ecl_cdr(v5);
     cl_env_copy->nvalues = 1;
     return value0;
    }
   }
  }
 }
}
/*      local function LAMBDA64                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC12__lambda64(cl_object v1clause)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2options;
   v2options = ecl_car(v1clause);
   if (!(ecl_eql(v2options,ECL_T))) { goto L7; }
   goto L4;
   goto L5;
L7:;
   goto L5;
L5:;
   if (!((v2options)==(ECL_SYM("OTHERWISE",617)))) { goto L2; }
   goto L3;
L4:;
L3:;
   T0 = ecl_list1(v2options);
   T1 = ecl_cdr(v1clause);
   value0 = CONS(T0,T1);
   cl_env_copy->nvalues = 1;
   return value0;
L2:;
   value0 = v1clause;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function CCASE                                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC14ccase(cl_object v1, cl_object v2)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4keyplace;
   cl_object v5clauses;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[25])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4keyplace = v6;
   }
   v5clauses = v3;
   {
    cl_object v6key;
    cl_object v7repeat;
    cl_object v8block;
    v6key = cl_gensym(0);
    v7repeat = cl_gensym(0);
    v8block = cl_gensym(0);
    v5clauses = L13remove_otherwise_from_clauses(v5clauses);
    T0 = cl_list(2, v6key, v4keyplace);
    T1 = ecl_list1(T0);
    T2 = cl_list(2, ECL_SYM("QUOTE",681), v4keyplace);
    T3 = L8accumulate_cases(v5clauses, ECL_NIL);
    T4 = cl_list(2, ECL_SYM("QUOTE",681), T3);
    T5 = cl_list(4, ECL_SYM("CCASE-ERROR",1862), T2, v6key, T4);
    T6 = cl_list(3, ECL_SYM("SETF",752), v4keyplace, T5);
    T7 = cl_list(2, ECL_SYM("GO",416), v7repeat);
    T8 = cl_list(3, ECL_T, T6, T7);
    T9 = ecl_list1(T8);
    T10 = ecl_append(v5clauses,T9);
    T11 = cl_listX(3, ECL_SYM("CASE",183), v6key, T10);
    T12 = cl_list(3, ECL_SYM("RETURN-FROM",727), v8block, T11);
    T13 = cl_list(3, ECL_SYM("LET",479), T1, T12);
    T14 = cl_list(3, ECL_SYM("TAGBODY",852), v7repeat, T13);
    value0 = cl_list(3, ECL_SYM("BLOCK",139), v8block, T14);
    return value0;
   }
  }
 }
}
/*      local function TYPECASE                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC15typecase(cl_object v1, cl_object v2)
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
   cl_object v4keyform;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[25])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v5;
    v5 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4keyform = v5;
   }
   {
    cl_object v5;
    cl_object v6;
    cl_object v7l;
    cl_object v8form;
    v5 = cl_reverse(v3);
    v6 = cl_gensym(0);
    v7l = v5;
    v8form = ECL_NIL;
    goto L14;
L13:;
    T0 = ecl_caar(v7l);
    if ((T0)==(ECL_T)) { goto L19; }
    T0 = ecl_caar(v7l);
    if (!((T0)==(ECL_SYM("OTHERWISE",617)))) { goto L17; }
    goto L18;
L19:;
L18:;
    T0 = ecl_cdar(v7l);
    v8form = CONS(ECL_SYM("PROGN",673),T0);
    goto L16;
L17:;
    T0 = ecl_caar(v7l);
    T1 = cl_list(2, ECL_SYM("QUOTE",681), T0);
    T2 = cl_list(3, ECL_SYM("TYPEP",877), v6, T1);
    T3 = ecl_cdar(v7l);
    T4 = CONS(ECL_SYM("PROGN",673),T3);
    v8form = cl_list(4, ECL_SYM("IF",948), T2, T4, v8form);
L16:;
    v7l = ecl_cdr(v7l);
L14:;
    if (ecl_endp(v7l)) { goto L25; }
    goto L13;
L25:;
    T0 = cl_list(2, v6, v4keyform);
    T1 = ecl_list1(T0);
    value0 = cl_list(3, ECL_SYM("LET",479), T1, v8form);
    return value0;
   }
  }
 }
}
/*      function definition for ETYPECASE-ERROR                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object si_etypecase_error(cl_object v1value, cl_object v2types)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = CONS(ECL_SYM("OR",616),v2types);
  value0 = cl_error(9, VV[12], ECL_SYM("NAME",1300), ECL_SYM("ETYPECASE",340), ECL_SYM("DATUM",1236), v1value, ECL_SYM("EXPECTED-TYPE",1254), T0, VV[13], v2types);
  return value0;
 }
}
/*      local function ETYPECASE                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC16etypecase(cl_object v1, cl_object v2)
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
   cl_object v4keyform;
   cl_object v5clauses;
   cl_object v6key;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[25])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v7;
    v7 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4keyform = v7;
   }
   v5clauses = v3;
   v6key = cl_gensym(0);
   v5clauses = L13remove_otherwise_from_clauses(v5clauses);
   {
    cl_object v7;
    cl_object v8;
    cl_object v9l;
    cl_object v10form;
    v7 = cl_reverse(v5clauses);
    T0 = L8accumulate_cases(v5clauses, ECL_T);
    T1 = cl_list(2, ECL_SYM("QUOTE",681), T0);
    v8 = cl_list(3, ECL_SYM("ETYPECASE-ERROR",1864), v6key, T1);
    v9l = v7;
    v10form = v8;
    goto L18;
L17:;
    T0 = ecl_caar(v9l);
    T1 = cl_list(2, ECL_SYM("QUOTE",681), T0);
    T2 = cl_list(3, ECL_SYM("TYPEP",877), v6key, T1);
    T3 = ecl_cdar(v9l);
    T4 = CONS(ECL_SYM("PROGN",673),T3);
    v10form = cl_list(4, ECL_SYM("IF",948), T2, T4, v10form);
    v9l = ecl_cdr(v9l);
L18:;
    if (ecl_endp(v9l)) { goto L24; }
    goto L17;
L24:;
    T0 = cl_list(2, v6key, v4keyform);
    T1 = ecl_list1(T0);
    value0 = cl_list(3, ECL_SYM("LET",479), T1, v10form);
    return value0;
   }
  }
 }
}
/*      function definition for CTYPECASE-ERROR                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object si_ctypecase_error(cl_object volatile v1keyplace, cl_object volatile v2value, cl_object volatile v3types)
{
 cl_object T0, T1, T2, T3, T4, T5;
 cl_object volatile env0 = ECL_NIL;
 cl_object volatile CLV0, CLV1, CLV2;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  env0 = ECL_NIL;
  CLV0 = env0 = CONS(v1keyplace,env0);            /*  KEYPLACE        */
  {
   volatile cl_object env1 = env0;
   CLV1 = env1 = CONS(ECL_NIL,env1);
   CLV2 = env1 = CONS(ECL_NEW_FRAME_ID(cl_env_copy),env1); /*  TAGBODY */
   {
    ecl_frs_push(cl_env_copy,ECL_CONS_CAR(CLV2));
    if (__ecl_frs_push_result) {
    if (cl_env_copy->values[0]==ecl_make_fixnum(0))goto L1;
    ecl_internal_error("GO found an inexistent tag");
    }
   }
   {
    cl_object v4;
    v4 = ecl_make_cclosure_va((cl_objectfn)LC17__lambda102,env1,Cblock,0);
    T0 = v4;
   }
   {
    cl_object v4;
    v4 = ecl_make_cclosure_va((cl_objectfn)LC18__lambda103,env1,Cblock,1);
    T1 = v4;
   }
   T2 = (VV[1]->symbol.gfdef);
   T3 = ecl_function_dispatch(cl_env_copy,VV[23])(8, ECL_SYM("NAME",1300), ECL_SYM("STORE-VALUE",800), ECL_SYM("FUNCTION",1264), T0, VV[2], T1, VV[4], T2) /*  MAKE-RESTART */;
   T4 = ecl_list1(T3);
   T5 = CONS(T4,ecl_symbol_value(ECL_SYM("*RESTART-CLUSTERS*",5)));
   ecl_bds_bind(cl_env_copy,ECL_SYM("*RESTART-CLUSTERS*",5),T5); /*  *RESTART-CLUSTERS* */
   {
    cl_object v4;
    T0 = CONS(ECL_SYM("OR",616),v3types);
    T1 = cl_list(8, ECL_SYM("NAME",1300), ECL_SYM("CTYPECASE",271), ECL_SYM("DATUM",1236), v2value, ECL_SYM("EXPECTED-TYPE",1254), T0, VV[13], v3types);
    v4 = ecl_function_dispatch(cl_env_copy,VV[24])(4, VV[12], T1, ECL_SYM("SIMPLE-ERROR",772), ECL_SYM("ERROR",339)) /*  COERCE-TO-CONDITION */;
    T0 = ecl_car(ecl_symbol_value(ECL_SYM("*RESTART-CLUSTERS*",5)));
    T1 = CONS(v4,T0);
    T2 = CONS(T1,ecl_symbol_value(VV[6]));
    ecl_bds_bind(cl_env_copy,VV[6],T2);           /*  *CONDITION-RESTARTS* */
    value0 = cl_error(1, v4);
    ecl_frs_pop(cl_env_copy);
    ecl_bds_unwind1(cl_env_copy);
    ecl_bds_unwind1(cl_env_copy);
    return value0;
   }
L1:;
   {
    cl_object v4;
    cl_object v5value;
    v4 = ECL_CONS_CAR(CLV1);
    if (Null(v4)) { goto L10; }
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
     if (Null(v6)) { goto L16; }
     {
      cl_object v7;
      v7 = ECL_CONS_CDR(v6);
      v4 = v7;
      v6 = ECL_CONS_CAR(v6);
     }
L16:;
     v5value = v6;
     goto L9;
    }
L10:;
    v5value = ecl_function_dispatch(cl_env_copy,VV[25])(1, ECL_NIL) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
    value0 = v5value;
    cl_env_copy->nvalues = 1;
    ecl_frs_pop(cl_env_copy);
    return value0;
   }
  }
 }
}
/*      closure LAMBDA102                                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC17__lambda102(cl_narg narg, ...)
{
 cl_object CLV0, CLV1, CLV2;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV2 = env0;                                     /*  TAGBODY         */
 CLV1 = _ecl_cdr(CLV2);
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 {
  cl_object v1temp;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  v1temp = cl_grab_rest_args(args);
  ecl_va_end(args);
  ECL_CONS_CAR(CLV1) = v1temp;
  cl_go(ECL_CONS_CAR(CLV2),ecl_make_fixnum(0));
 }
 }
}
/*      closure LAMBDA103                                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC18__lambda103(cl_narg narg, cl_object v1stream, ...)
{
 cl_object CLV0, CLV1, CLV2;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV2 = env0;
 CLV1 = _ecl_cdr(CLV2);
 CLV0 = _ecl_cdr(CLV1);                           /*  KEYPLACE        */
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=1)) FEwrong_num_arguments_anonym();
 {
TTL:
  value0 = cl_format(3, v1stream, VV[20], ECL_CONS_CAR(CLV0));
  return value0;
 }
 }
}
/*      local function CTYPECASE                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC20ctypecase(cl_object v1, cl_object v2)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10;
 cl_object env0 = ECL_NIL;
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4keyplace;
   cl_object v5clauses;
   cl_object env1 = env0;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[25])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4keyplace = v6;
   }
   v5clauses = v3;
   T0 = cl_gensym(0);
   env1 = ECL_NIL;
   CLV0 = env1 = CONS(T0,env1);                   /*  KEY             */
   v5clauses = L13remove_otherwise_from_clauses(v5clauses);
   T0 = cl_list(2, ECL_CONS_CAR(CLV0), v4keyplace);
   T1 = ecl_list1(T0);
   {
    cl_object v6;
    {
     cl_object v7;
     v7 = ecl_make_cclosure_va((cl_objectfn)LC19__lambda119,env1,Cblock,1);
     v6 = v7;
    }
    {
     cl_object v7;
     cl_object v8;
     v7 = ECL_NIL;
     {
      cl_object v9;
      v9 = v5clauses;
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
L19:;
      if (!(ecl_endp(v8))) { goto L21; }
      goto L20;
L21:;
      v7 = _ecl_car(v8);
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
       T3 = v11;
      }
      T4 = ecl_function_dispatch(cl_env_copy,v6)(1, v7);
      v10 = ecl_list1(T4);
      (ECL_CONS_CDR(T3)=v10,T3);
      goto L19;
L20:;
      T2 = ecl_cdr(v9);
      goto L11;
     }
    }
   }
L11:;
   T3 = cl_list(2, ECL_SYM("QUOTE",681), v4keyplace);
   T4 = L8accumulate_cases(v5clauses, ECL_T);
   T5 = cl_list(2, ECL_SYM("QUOTE",681), T4);
   T6 = cl_list(4, ECL_SYM("CTYPECASE-ERROR",1865), T3, ECL_CONS_CAR(CLV0), T5);
   T7 = cl_list(3, ECL_SYM("SETF",752), v4keyplace, T6);
   T8 = ecl_list1(T7);
   T9 = ecl_append(T2,T8);
   T10 = cl_listX(3, ECL_SYM("LET",479), T1, T9);
   value0 = cl_list(2, ECL_SYM("LOOP",514), T10);
   return value0;
  }
 }
}
/*      closure LAMBDA119                                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC19__lambda119(cl_narg narg, cl_object v1l, ...)
{
 cl_object T0, T1, T2, T3, T4, T5;
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV0 = env0;                                     /*  KEY             */
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=1)) FEwrong_num_arguments_anonym();
 {
TTL:
  T0 = ecl_car(v1l);
  T1 = cl_list(2, ECL_SYM("QUOTE",681), T0);
  T2 = cl_list(3, ECL_SYM("TYPEP",877), ECL_CONS_CAR(CLV0), T1);
  T3 = ecl_cdr(v1l);
  T4 = CONS(ECL_SYM("PROGN",673),T3);
  T5 = cl_list(2, ECL_SYM("RETURN",726), T4);
  value0 = cl_list(3, ECL_SYM("WHEN",907), T2, T5);
  return value0;
 }
 }
}

#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/lsp/assert.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclYNV2Ubb7_eB96lq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:LSP;ASSERT.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclYNV2Ubb7_eB96lq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  ecl_cmp_defun(VV[22]);                          /*  READ-EVALUATED-FORM */
  (void)0; /* No entry created for WRONG-TYPE-ARGUMENT */
  ecl_cmp_defmacro(VV[26]);                       /*  CHECK-TYPE      */
  (void)0; /* No entry created for DO-CHECK-TYPE */
  ecl_cmp_defmacro(VV[28]);                       /*  ASSERT          */
  (void)0; /* No entry created for ACCUMULATE-CASES */
  (void)0; /* No entry created for ECASE-ERROR */
  ecl_cmp_defmacro(VV[29]);                       /*  ECASE           */
  (void)0; /* No entry created for CCASE-ERROR */
  (void)0; /* No entry created for REMOVE-OTHERWISE-FROM-CLAUSES */
  ecl_cmp_defmacro(VV[30]);                       /*  CCASE           */
  ecl_cmp_defmacro(VV[31]);                       /*  TYPECASE        */
  (void)0; /* No entry created for ETYPECASE-ERROR */
  ecl_cmp_defmacro(VV[32]);                       /*  ETYPECASE       */
  (void)0; /* No entry created for CTYPECASE-ERROR */
  ecl_cmp_defmacro(VV[33]);                       /*  CTYPECASE       */
}