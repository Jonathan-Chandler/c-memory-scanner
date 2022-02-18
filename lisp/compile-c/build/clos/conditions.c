/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CLOS;CONDITIONS.LSP                               */
#include <ecl/ecl-cmp.h>
#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/clos/conditions.eclh"
/*      local function UNIQUE-ID                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC1unique_id(cl_object v1, cl_object v2)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4obj;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[100])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v5;
    v5 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4obj = v5;
   }
   if (Null(v3)) { goto L8; }
   ecl_function_dispatch(cl_env_copy,VV[101])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L8:;
   value0 = cl_list(2, ECL_SYM("POINTER",1134), v4obj);
   return value0;
  }
 }
}
/*      function definition for COMPUTE-RESTARTS                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_compute_restarts(cl_narg narg, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg>1)) FEwrong_num_arguments_anonym();
 {
  cl_object v1condition;
  va_list args; va_start(args,narg);
  {
   int i = 0;
   if (i >= narg) {
    v1condition = ECL_NIL;
   } else {
    i++;
    v1condition = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v2assoc_restart;
   cl_object v3other;
   cl_object v4output;
   v2assoc_restart = ECL_NIL;
   v3other = ECL_NIL;
   v4output = ECL_NIL;
   if (Null(v1condition)) { goto L5; }
   {
    cl_object v5;
    v5 = ecl_symbol_value(VV[1]);
    goto L10;
L9:;
    {
     cl_object v6i;
     v6i = ecl_car(v5);
     T0 = ecl_car(v6i);
     if (!((T0)==(v1condition))) { goto L15; }
     T0 = ecl_cdr(v6i);
     v2assoc_restart = ecl_append(T0,v2assoc_restart);
     goto L14;
L15:;
     T0 = ecl_cdr(v6i);
     v3other = ecl_append(T0,v3other);
L14:;
    }
    v5 = ecl_cdr(v5);
L10:;
    if (Null(v5)) { goto L21; }
    goto L9;
L21:;
   }
L5:;
   {
    cl_object v5;
    v5 = ecl_symbol_value(ECL_SYM("*RESTART-CLUSTERS*",5));
    goto L27;
L26:;
    {
     cl_object v6restart_cluster;
     v6restart_cluster = ecl_car(v5);
     {
      cl_object v7;
      v7 = v6restart_cluster;
      goto L35;
L34:;
      {
       cl_object v8restart;
       v8restart = ecl_car(v7);
       if (Null(v1condition)) { goto L42; }
       if ((ecl_memql(v8restart,v2assoc_restart))!=ECL_NIL) { goto L42; }
       if ((ecl_memql(v8restart,v3other))!=ECL_NIL) { goto L39; }
       goto L41;
L42:;
L41:;
       T0 = ecl_function_dispatch(cl_env_copy,VV[8])(1, v8restart) /*  RESTART-TEST-FUNCTION */;
       if (Null(ecl_function_dispatch(cl_env_copy,T0)(1, v1condition))) { goto L39; }
       v4output = CONS(v8restart,v4output);
L39:;
      }
      v7 = ecl_cdr(v7);
L35:;
      if (Null(v7)) { goto L49; }
      goto L34;
L49:;
     }
    }
    v5 = ecl_cdr(v5);
L27:;
    if (Null(v5)) { goto L53; }
    goto L26;
L53:;
   }
   value0 = cl_nreverse(v4output);
   return value0;
  }
 }
}
/*      function definition for RESTART-PRINT                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L2restart_print(cl_object v1restart, cl_object v2stream, cl_object v3depth)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(ecl_symbol_value(ECL_SYM("*PRINT-ESCAPE*",50)))) { goto L2; }
  T0 = cl_type_of(v1restart);
  T1 = si_pointer(v1restart);
  cl_format(4, v2stream, VV[2], T0, T1);
  goto L1;
L2:;
  L9restart_report(v1restart, v2stream);
L1:;
  value0 = v1restart;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for MAKE-RESTART                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L3make_restart(cl_narg narg, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  cl_object v1;
  cl_object v2;
  cl_object v3;
  cl_object v4;
  cl_object v5;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  {
   cl_object keyvars[10];
   cl_parse_key(args,5,L3make_restartkeys,keyvars,NULL,FALSE);
   ecl_va_end(args);
   v1 = keyvars[0];
   v2 = keyvars[1];
   v3 = keyvars[2];
   v4 = keyvars[3];
   if (Null(keyvars[9])) {
    v5 = cl_constantly(ECL_T);
   } else {
    v5 = keyvars[4];
   }
  }
  value0 = si_make_structure(6, VV[6], v1, v2, v3, v4, v5);
  return value0;
 }
}
/*      local function LAMBDA18                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC4__lambda18(cl_object v1, cl_object v2x)
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
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), ECL_SYM("RESTART",722));
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2x, T0, ecl_make_fixnum(4), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), ECL_SYM("RESTART",722));
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2x, T2, ecl_make_fixnum(4));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA22                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC5__lambda22(cl_object v1, cl_object v2x)
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
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), ECL_SYM("RESTART",722));
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2x, T0, ecl_make_fixnum(3), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), ECL_SYM("RESTART",722));
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2x, T2, ecl_make_fixnum(3));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA26                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC6__lambda26(cl_object v1, cl_object v2x)
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
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), ECL_SYM("RESTART",722));
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2x, T0, ecl_make_fixnum(2), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), ECL_SYM("RESTART",722));
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2x, T2, ecl_make_fixnum(2));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA30                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC7__lambda30(cl_object v1, cl_object v2x)
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
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), ECL_SYM("RESTART",722));
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2x, T0, ecl_make_fixnum(1), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), ECL_SYM("RESTART",722));
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2x, T2, ecl_make_fixnum(1));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA34                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC8__lambda34(cl_object v1, cl_object v2x)
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
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), ECL_SYM("RESTART",722));
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2x, T0, ecl_make_fixnum(0), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), ECL_SYM("RESTART",722));
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2x, T2, ecl_make_fixnum(0));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      function definition for RESTART-REPORT                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L9restart_report(cl_object v1restart, cl_object v2stream)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3fn;
   v3fn = ecl_function_dispatch(cl_env_copy,VV[11])(1, v1restart) /*  RESTART-REPORT-FUNCTION */;
   if (Null(v3fn)) { goto L2; }
   value0 = ecl_function_dispatch(cl_env_copy,v3fn)(1, v2stream);
   return value0;
L2:;
   value0 = (cl_env_copy->function=(ECL_SYM("RESTART-NAME",725)->symbol.gfdef))->cfun.entry(1, v1restart) /*  RESTART-NAME */;
   if ((value0)!=ECL_NIL) { goto L6; }
   T0 = v1restart;
   goto L4;
L6:;
   T0 = value0;
   goto L4;
L4:;
   value0 = cl_format(3, v2stream, VV[13], T0);
   return value0;
  }
 }
}
/*      function definition for BIND-SIMPLE-RESTARTS                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object si_bind_simple_restarts(cl_object v1tag, cl_object v2names)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3i;
   v3i = ecl_make_fixnum(1);
   {
    cl_object v4;
    cl_object v5n;
    cl_object v6;
    if (!(ECL_ATOM(v2names))) { goto L4; }
    v4 = ecl_list1(v2names);
    goto L3;
L4:;
    v4 = v2names;
L3:;
    v5n = ECL_NIL;
    {
     cl_object v7;
     v7 = v4;
     if (ecl_unlikely(!ECL_LISTP(v7))) FEtype_error_list(v7);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v6 = v7;
    }
    {
     cl_object v7f;
     v7f = ECL_NIL;
     {
      cl_object v8;
      cl_object v9;
      v8 = ecl_list1(ECL_NIL);
      v9 = v8;
L13:;
      if (!(ecl_endp(v6))) { goto L15; }
      goto L14;
L15:;
      v5n = _ecl_car(v6);
      {
       cl_object v10;
       v10 = _ecl_cdr(v6);
       if (ecl_unlikely(!ECL_LISTP(v10))) FEtype_error_list(v10);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v6 = v10;
      }
      v7f = LC11simple_restart_function(v1tag, v3i);
      {
       cl_object v10;
       v10 = v9;
       if (ecl_unlikely(ECL_ATOM(v10))) FEtype_error_cons(v10);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       T1 = v10;
      }
      T2 = L3make_restart(4, ECL_SYM("NAME",1300), v5n, ECL_SYM("FUNCTION",1264), v7f);
      v9 = ecl_list1(T2);
      (ECL_CONS_CDR(T1)=v9,T1);
      v3i = ecl_one_plus(v3i);
      goto L13;
L14:;
      T0 = ecl_cdr(v8);
      goto L1;
     }
    }
   }
  }
L1:;
  value0 = CONS(T0,ecl_symbol_value(ECL_SYM("*RESTART-CLUSTERS*",5)));
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function SIMPLE-RESTART-FUNCTION                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC11simple_restart_function(cl_object v1tag, cl_object v2code)
{
 cl_object env0 = ECL_NIL;
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  env0 = ECL_NIL;
  CLV0 = env0 = CONS(v1tag,env0);                 /*  TAG             */
  CLV1 = env0 = CONS(v2code,env0);                /*  CODE            */
  {
   cl_object v3;
   v3 = ecl_make_cclosure_va((cl_objectfn)LC10__lambda37,env0,Cblock,0);
   value0 = v3;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      closure LAMBDA37                                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC10__lambda37(cl_narg narg, ...)
{
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV1 = env0;                                     /*  CODE            */
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 {
  cl_object v1args;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  v1args = cl_grab_rest_args(args);
  ecl_va_end(args);
  cl_env_copy->nvalues = 2;
  cl_env_copy->values[1] = v1args;
  cl_env_copy->values[0] = ECL_CONS_CAR(CLV1);
  cl_throw(ECL_CONS_CAR(CLV0));
 }
 }
}
/*      function definition for BIND-SIMPLE-HANDLERS                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object si_bind_simple_handlers(cl_object v1tag, cl_object v2names)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3i;
   v3i = ecl_make_fixnum(1);
   {
    cl_object v4;
    cl_object v5n;
    cl_object v6;
    if (!(ECL_ATOM(v2names))) { goto L4; }
    v4 = ecl_list1(v2names);
    goto L3;
L4:;
    v4 = v2names;
L3:;
    v5n = ECL_NIL;
    {
     cl_object v7;
     v7 = v4;
     if (ecl_unlikely(!ECL_LISTP(v7))) FEtype_error_list(v7);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v6 = v7;
    }
    {
     cl_object v7f;
     v7f = ECL_NIL;
     {
      cl_object v8;
      cl_object v9;
      v8 = ecl_list1(ECL_NIL);
      v9 = v8;
L13:;
      if (!(ecl_endp(v6))) { goto L15; }
      goto L14;
L15:;
      v5n = _ecl_car(v6);
      {
       cl_object v10;
       v10 = _ecl_cdr(v6);
       if (ecl_unlikely(!ECL_LISTP(v10))) FEtype_error_list(v10);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v6 = v10;
      }
      v7f = LC13simple_handler_function(v1tag, v3i);
      {
       cl_object v10;
       v10 = v9;
       if (ecl_unlikely(ECL_ATOM(v10))) FEtype_error_cons(v10);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       T1 = v10;
      }
      T2 = CONS(v5n,v7f);
      v9 = ecl_list1(T2);
      (ECL_CONS_CDR(T1)=v9,T1);
      v3i = ecl_one_plus(v3i);
      goto L13;
L14:;
      T0 = ecl_cdr(v8);
      goto L1;
     }
    }
   }
  }
L1:;
  value0 = CONS(T0,ecl_symbol_value(ECL_SYM("*HANDLER-CLUSTERS*",6)));
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function SIMPLE-HANDLER-FUNCTION                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC13simple_handler_function(cl_object v1tag, cl_object v2code)
{
 cl_object env0 = ECL_NIL;
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  env0 = ECL_NIL;
  CLV0 = env0 = CONS(v1tag,env0);                 /*  TAG             */
  CLV1 = env0 = CONS(v2code,env0);                /*  CODE            */
  {
   cl_object v3;
   v3 = ecl_make_cclosure_va((cl_objectfn)LC12__lambda43,env0,Cblock,1);
   value0 = v3;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      closure LAMBDA43                                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC12__lambda43(cl_narg narg, cl_object v1c, ...)
{
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV1 = env0;                                     /*  CODE            */
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=1)) FEwrong_num_arguments_anonym();
 {
TTL:
  cl_env_copy->nvalues = 2;
  cl_env_copy->values[1] = v1c;
  cl_env_copy->values[0] = ECL_CONS_CAR(CLV1);
  cl_throw(ECL_CONS_CAR(CLV0));
 }
 }
}
/*      local function RESTART-BIND                                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC15restart_bind(cl_object v1, cl_object v2)
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
   cl_object v4bindings;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[100])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v5;
    v5 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4bindings = v5;
   }
   {
    cl_object v5;
    {
     cl_object v6;
     v6 = ecl_make_cfun((cl_objectfn_fixed)LC14__lambda61,ECL_NIL,Cblock,1);
     v5 = v6;
    }
    {
     cl_object v6;
     cl_object v7;
     v6 = ECL_NIL;
     {
      cl_object v8;
      v8 = v4bindings;
      if (ecl_unlikely(!ECL_LISTP(v8))) FEtype_error_list(v8);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v7 = v8;
     }
     {
      cl_object v8;
      cl_object v9;
      v8 = ecl_list1(ECL_NIL);
      v9 = v8;
L16:;
      if (!(ecl_endp(v7))) { goto L18; }
      goto L17;
L18:;
      v6 = _ecl_car(v7);
      {
       cl_object v10;
       v10 = _ecl_cdr(v7);
       if (ecl_unlikely(!ECL_LISTP(v10))) FEtype_error_list(v10);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v7 = v10;
      }
      {
       cl_object v10;
       v10 = v9;
       if (ecl_unlikely(ECL_ATOM(v10))) FEtype_error_cons(v10);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       T1 = v10;
      }
      T2 = ecl_function_dispatch(cl_env_copy,v5)(1, v6);
      v9 = ecl_list1(T2);
      (ECL_CONS_CDR(T1)=v9,T1);
      goto L16;
L17:;
      T0 = ecl_cdr(v8);
      goto L8;
     }
    }
   }
L8:;
   T1 = CONS(ECL_SYM("LIST",483),T0);
   T2 = cl_list(3, ECL_SYM("CONS",253), T1, ECL_SYM("*RESTART-CLUSTERS*",5));
   T3 = cl_list(2, ECL_SYM("*RESTART-CLUSTERS*",5), T2);
   T4 = ecl_list1(T3);
   value0 = cl_listX(3, ECL_SYM("LET",479), T4, v3);
   return value0;
  }
 }
}
/*      local function LAMBDA61                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC14__lambda61(cl_object v1binding)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_car(v1binding);
  T1 = cl_list(2, ECL_SYM("QUOTE",681), T0);
  T2 = ecl_cadr(v1binding);
  T3 = ecl_cddr(v1binding);
  value0 = cl_listX(6, VV[7], ECL_SYM("NAME",1300), T1, ECL_SYM("FUNCTION",1264), T2, T3);
  return value0;
 }
}
/*      function definition for FIND-RESTART                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_find_restart(cl_narg narg, cl_object v1name, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2condition;
  va_list args; va_start(args,v1name);
  {
   int i = 1;
   if (i >= narg) {
    v2condition = ECL_NIL;
   } else {
    i++;
    v2condition = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v3;
   v3 = cl_compute_restarts(1, v2condition);
   goto L5;
L4:;
   {
    cl_object v4restart;
    v4restart = ecl_car(v3);
    if ((v4restart)==(v1name)) { goto L11; }
    T0 = (cl_env_copy->function=(ECL_SYM("RESTART-NAME",725)->symbol.gfdef))->cfun.entry(1, v4restart) /*  RESTART-NAME */;
    if (!((T0)==(v1name))) { goto L9; }
    goto L10;
L11:;
L10:;
    value0 = v4restart;
    cl_env_copy->nvalues = 1;
    return value0;
L9:;
   }
   v3 = ecl_cdr(v3);
L5:;
   if (Null(v3)) { goto L15; }
   goto L4;
L15:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for FIND-RESTART-NEVER-FAIL               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L16find_restart_never_fail(cl_narg narg, cl_object v1restart, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2condition;
  va_list args; va_start(args,v1restart);
  {
   int i = 1;
   if (i >= narg) {
    v2condition = ECL_NIL;
   } else {
    i++;
    v2condition = va_arg(args,cl_object);
   }
  }
  va_end(args);
  value0 = cl_find_restart(2, v1restart, v2condition);
  if ((value0)!=ECL_NIL) { goto L3; }
  T0 = ecl_list1(v1restart);
  value0 = si_signal_simple_error(4, ECL_SYM("CONTROL-ERROR",257), ECL_NIL, VV[15], T0);
  return value0;
L3:;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for INVOKE-RESTART                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_invoke_restart(cl_narg narg, cl_object v1restart, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2values;
  ecl_va_list args; ecl_va_start(args,v1restart,narg,1);
  v2values = cl_grab_rest_args(args);
  ecl_va_end(args);
  {
   cl_object v3real_restart;
   v3real_restart = L16find_restart_never_fail(1, v1restart);
   T0 = ecl_function_dispatch(cl_env_copy,VV[12])(1, v3real_restart) /*  RESTART-FUNCTION */;
   value0 = cl_apply(2, T0, v2values);
   return value0;
  }
 }
}
/*      function definition for INVOKE-RESTART-INTERACTIVELY          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_invoke_restart_interactively(cl_object v1restart)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2real_restart;
   v2real_restart = L16find_restart_never_fail(1, v1restart);
   T0 = ecl_function_dispatch(cl_env_copy,VV[12])(1, v2real_restart) /*  RESTART-FUNCTION */;
   {
    cl_object v3interactive_function;
    v3interactive_function = ecl_function_dispatch(cl_env_copy,VV[10])(1, v2real_restart) /*  RESTART-INTERACTIVE-FUNCTION */;
    if (Null(v3interactive_function)) { goto L4; }
    T1 = ecl_function_dispatch(cl_env_copy,v3interactive_function)(0);
    goto L2;
L4:;
    T1 = ECL_NIL;
   }
L2:;
   value0 = cl_apply(2, T0, T1);
   return value0;
  }
 }
}
/*      local function RESTART-CASE                                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC21restart_case(cl_object v1, cl_object v2env)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7;
 cl_object env0 = ECL_NIL;
 cl_object CLV0, CLV1, CLV2;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4expression;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[100])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v5;
    v5 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4expression = v5;
   }
   env0 = ECL_NIL;
   CLV0 = env0 = CONS(ECL_NIL,env0);              /*  TRANSFORM-KEYWORDS */
   ECL_CONS_CAR(CLV0) = ecl_make_cfun_va((cl_objectfn)LC17transform_keywords,ECL_NIL,Cblock,0);
   {
    cl_object v5data;
    cl_object env1 = env0;
    T0 = cl_gensym(0);
    CLV1 = env1 = CONS(T0,env1);                  /*  BLOCK-TAG       */
    T0 = cl_gensym(0);
    CLV2 = env1 = CONS(T0,env1);                  /*  TEMP-VAR        */
    {
     cl_object v6;
     {
      cl_object v7;
      v7 = ecl_make_cclosure_va((cl_objectfn)LC18__lambda77,env1,Cblock,1);
      v6 = v7;
     }
     {
      cl_object v7;
      cl_object v8;
      v7 = ECL_NIL;
      {
       cl_object v9;
       v9 = v3;
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
L16:;
       if (!(ecl_endp(v8))) { goto L18; }
       goto L17;
L18:;
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
        T0 = v11;
       }
       T1 = ecl_function_dispatch(cl_env_copy,v6)(1, v7);
       v10 = ecl_list1(T1);
       (ECL_CONS_CDR(T0)=v10,T0);
       goto L16;
L17:;
       v5data = ecl_cdr(v9);
       goto L8;
      }
     }
    }
L8:;
    {
     cl_object v6expression2;
     v6expression2 = cl_macroexpand(2, v4expression, v2env);
     if (!(ECL_CONSP(v6expression2))) { goto L34; }
     {
      cl_object v7condition_form;
      cl_object v8condition_var;
      cl_object v9name;
      v7condition_form = ECL_NIL;
      v8condition_var = cl_gensym(0);
      v9name = ecl_car(v6expression2);
      if (!((v9name)==(ECL_SYM("SIGNAL",762)))) { goto L41; }
      T0 = ecl_cadr(v6expression2);
      T1 = ecl_cddr(v6expression2);
      T2 = CONS(ECL_SYM("LIST",483),T1);
      v7condition_form = cl_listX(4, VV[20], T0, T2, VV[21]);
      goto L40;
L41:;
      if (!((v9name)==(ECL_SYM("ERROR",339)))) { goto L44; }
      T0 = ecl_cadr(v6expression2);
      T1 = ecl_cddr(v6expression2);
      T2 = CONS(ECL_SYM("LIST",483),T1);
      v7condition_form = cl_listX(4, VV[20], T0, T2, VV[22]);
      goto L40;
L44:;
      if (!((v9name)==(ECL_SYM("CERROR",204)))) { goto L47; }
      T0 = ecl_caddr(v6expression2);
      T1 = ecl_cdddr(v6expression2);
      T2 = CONS(ECL_SYM("LIST",483),T1);
      v7condition_form = cl_listX(4, VV[20], T0, T2, VV[23]);
      goto L40;
L47:;
      if (!((v9name)==(ECL_SYM("WARN",905)))) { goto L40; }
      T0 = ecl_cadr(v6expression2);
      T1 = ecl_cddr(v6expression2);
      T2 = CONS(ECL_SYM("LIST",483),T1);
      v7condition_form = cl_listX(4, VV[20], T0, T2, VV[24]);
L40:;
      if (Null(v7condition_form)) { goto L34; }
      T0 = cl_list(2, v8condition_var, v7condition_form);
      T1 = ecl_list1(T0);
      if (!((v9name)==(ECL_SYM("CERROR",204)))) { goto L55; }
      T3 = ecl_cadr(v6expression2);
      T2 = cl_list(3, ECL_SYM("CERROR",204), T3, v8condition_var);
      goto L54;
L55:;
      T2 = cl_list(2, v9name, v8condition_var);
L54:;
      T3 = cl_list(4, ECL_SYM("WITH-CONDITION-RESTARTS",910), v8condition_var, VV[25], T2);
      v4expression = cl_list(3, ECL_SYM("LET",479), T1, T3);
     }
    }
L34:;
    T0 = cl_list(2, ECL_CONS_CAR(CLV2), ECL_NIL);
    T1 = ecl_list1(T0);
    {
     cl_object v6;
     {
      cl_object v7;
      v7 = ecl_make_cclosure_va((cl_objectfn)LC19__lambda89,env1,Cblock,1);
      v6 = v7;
     }
     {
      cl_object v7;
      cl_object v8;
      v7 = ECL_NIL;
      {
       cl_object v9;
       v9 = v5data;
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
L65:;
       if (!(ecl_endp(v8))) { goto L67; }
       goto L66;
L67:;
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
       goto L65;
L66:;
       T2 = ecl_cdr(v9);
       goto L57;
      }
     }
    }
L57:;
    T3 = cl_list(3, ECL_SYM("RETURN-FROM",727), ECL_CONS_CAR(CLV1), v4expression);
    T4 = cl_list(3, VV[14], T2, T3);
    {
     cl_object v6;
     {
      cl_object v7;
      v7 = ecl_make_cclosure_va((cl_objectfn)LC20__lambda97,env1,Cblock,1);
      v6 = v7;
     }
     {
      cl_object v7;
      cl_object v8;
      v7 = ECL_NIL;
      {
       cl_object v9;
       v9 = v5data;
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
L91:;
       if (!(ecl_endp(v8))) { goto L93; }
       goto L92;
L93:;
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
        v11 = ecl_function_dispatch(cl_env_copy,v6)(1, v7);
        {
         cl_object v12;
         v12 = v10;
         if (ecl_unlikely(ECL_ATOM(v12))) FEtype_error_cons(v12);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         T6 = v12;
        }
        (ECL_CONS_CDR(T6)=v11,T6);
        if (Null(v11)) { goto L101; }
       }
       T6 = ecl_cdr(v10);
       v10 = ecl_last(T6,1);
L101:;
       goto L91;
L92:;
       T5 = ecl_cdr(v9);
       goto L83;
      }
     }
    }
L83:;
    T6 = cl_listX(3, ECL_SYM("TAGBODY",852), T4, T5);
    T7 = cl_list(3, ECL_SYM("LET",479), T1, T6);
    value0 = cl_list(3, ECL_SYM("BLOCK",139), ECL_CONS_CAR(CLV1), T7);
    return value0;
   }
  }
 }
}
/*      local function TRANSFORM-KEYWORDS                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC17transform_keywords(cl_narg narg, ...)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  cl_object v1report;
  cl_object v2interactive;
  cl_object v3test;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  {
   cl_object keyvars[6];
   cl_parse_key(args,3,LC17transform_keywordskeys,keyvars,NULL,FALSE);
   ecl_va_end(args);
   v1report = keyvars[0];
   v2interactive = keyvars[1];
   v3test = keyvars[2];
  }
  {
   cl_object v4keywords;
   v4keywords = ECL_NIL;
   if (Null(v3test)) { goto L2; }
   T0 = cl_list(2, ECL_SYM("FUNCTION",398), v3test);
   v4keywords = cl_list(2, VV[16], T0);
L2:;
   if (Null(v2interactive)) { goto L5; }
   T0 = cl_list(2, ECL_SYM("FUNCTION",398), v2interactive);
   v4keywords = cl_listX(3, VV[17], T0, v4keywords);
L5:;
   if (Null(v1report)) { goto L8; }
   if (!(ECL_STRINGP(v1report))) { goto L12; }
   T1 = cl_list(3, ECL_SYM("WRITE-STRING",924), v1report, ECL_SYM("STREAM",801));
   T2 = cl_list(3, ECL_SYM("LAMBDA",454), VV[19], T1);
   T0 = cl_list(2, ECL_SYM("FUNCTION",398), T2);
   goto L11;
L12:;
   T0 = cl_list(2, ECL_SYM("FUNCTION",398), v1report);
L11:;
   v4keywords = cl_listX(3, VV[18], T0, v4keywords);
L8:;
   value0 = v4keywords;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      closure LAMBDA77                                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC18__lambda77(cl_narg narg, cl_object v1clause, ...)
{
 cl_object T0, T1, T2, T3;
 cl_object CLV0, CLV1, CLV2;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV2 = env0;
 CLV1 = _ecl_cdr(CLV2);
 CLV0 = _ecl_cdr(CLV1);                           /*  TRANSFORM-KEYWORDS */
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=1)) FEwrong_num_arguments_anonym();
 {
TTL:
  {
   cl_object v2;
   cl_object v3keywords;
   cl_object v4forms;
   v2 = ecl_cddr(v1clause);
   v3keywords = ECL_NIL;
   v4forms = v2;
   goto L7;
L6:;
   T0 = ecl_car(v4forms);
   if (Null(cl_keywordp(T0))) { goto L10; }
   T0 = ecl_car(v4forms);
   T1 = ecl_cadr(v4forms);
   v3keywords = cl_listX(3, T0, T1, v3keywords);
   v4forms = ecl_cddr(v4forms);
   goto L9;
L10:;
   goto L4;
L9:;
L7:;
   if (v4forms==ECL_NIL) { goto L15; }
   goto L6;
L15:;
L4:;
   T0 = ecl_car(v1clause);
   T1 = cl_gensym(0);
   T2 = cl_apply(2, ECL_CONS_CAR(CLV0), v3keywords);
   T3 = ecl_cadr(v1clause);
   value0 = cl_list(5, T0, T1, T2, T3, v4forms);
   return value0;
  }
 }
 }
}
/*      closure LAMBDA89                                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC19__lambda89(cl_narg narg, cl_object v1datum, ...)
{
 cl_object T0, T1, T2, T3;
 cl_object CLV0, CLV1, CLV2;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV2 = env0;                                     /*  TEMP-VAR        */
 CLV1 = _ecl_cdr(CLV2);
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=1)) FEwrong_num_arguments_anonym();
 {
TTL:
  {
   cl_object v2name;
   cl_object v3tag;
   cl_object v4keys;
   v2name = ecl_car(v1datum);
   v3tag = ecl_cadr(v1datum);
   v4keys = ecl_caddr(v1datum);
   T0 = cl_list(3, ECL_SYM("SETQ",753), ECL_CONS_CAR(CLV2), VV[27]);
   T1 = cl_list(2, ECL_SYM("GO",416), v3tag);
   T2 = cl_list(4, ECL_SYM("LAMBDA",454), VV[26], T0, T1);
   T3 = cl_list(2, ECL_SYM("FUNCTION",398), T2);
   value0 = cl_listX(3, v2name, T3, v4keys);
   return value0;
  }
 }
 }
}
/*      closure LAMBDA97                                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC20__lambda97(cl_narg narg, cl_object v1datum, ...)
{
 cl_object T0, T1, T2, T3;
 cl_object CLV0, CLV1, CLV2;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV2 = env0;                                     /*  TEMP-VAR        */
 CLV1 = _ecl_cdr(CLV2);
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=1)) FEwrong_num_arguments_anonym();
 {
TTL:
  {
   cl_object v2tag;
   cl_object v3bvl;
   cl_object v4body;
   v2tag = ecl_cadr(v1datum);
   v3bvl = ecl_cadddr(v1datum);
   T0 = ecl_cddddr(v1datum);
   v4body = ecl_car(T0);
   T0 = cl_listX(3, ECL_SYM("LAMBDA",454), v3bvl, v4body);
   T1 = cl_list(2, ECL_SYM("FUNCTION",398), T0);
   T2 = cl_list(3, ECL_SYM("APPLY",91), T1, ECL_CONS_CAR(CLV2));
   T3 = cl_list(3, ECL_SYM("RETURN-FROM",727), ECL_CONS_CAR(CLV1), T2);
   value0 = cl_list(2, v2tag, T3);
   return value0;
  }
 }
 }
}
/*      local function WITH-SIMPLE-RESTART                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC22with_simple_restart(cl_object v1, cl_object v2)
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
   cl_object v4;
   cl_object v5;
   cl_object v6restart_name;
   cl_object v7format_control;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[100])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v8;
    v8 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4 = v8;
   }
   v5 = v4;
   if (!(v5==ECL_NIL)) { goto L10; }
   ecl_function_dispatch(cl_env_copy,VV[100])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L10:;
   {
    cl_object v8;
    v8 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v6restart_name = v8;
   }
   if (!(v5==ECL_NIL)) { goto L16; }
   ecl_function_dispatch(cl_env_copy,VV[100])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L16:;
   {
    cl_object v8;
    v8 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v7format_control = v8;
   }
   T0 = CONS(ECL_SYM("PROGN",673),v3);
   T1 = cl_listX(4, ECL_SYM("FORMAT",389), ECL_SYM("STREAM",801), v7format_control, v5);
   T2 = cl_list(3, ECL_SYM("LAMBDA",454), VV[19], T1);
   T3 = cl_list(5, v6restart_name, ECL_NIL, ECL_SYM("REPORT",1329), T2, VV[29]);
   value0 = cl_list(3, VV[28], T0, T3);
   return value0;
  }
 }
}
/*      local function WITH-CONDITION-RESTARTS                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC23with_condition_restarts(cl_object v1, cl_object v2)
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
   cl_object v4condition;
   cl_object v5restarts;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[100])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4condition = v6;
   }
   if (!(v3==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[100])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5restarts = v6;
   }
   T0 = cl_list(3, ECL_SYM("CONS",253), v4condition, v5restarts);
   T1 = cl_list(3, ECL_SYM("CONS",253), T0, VV[1]);
   T2 = cl_list(2, VV[1], T1);
   T3 = ecl_list1(T2);
   value0 = cl_listX(3, ECL_SYM("LET",479), T3, v3);
   return value0;
  }
 }
}
/*      local function PRINT-OBJECT                                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC24print_object(cl_object v1c, cl_object v2stream)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(ecl_symbol_value(ECL_SYM("*PRINT-ESCAPE*",50)))) { goto L1; }
  if (Null(ecl_symbol_value(ECL_SYM("*NEXT-METHODS*",1536)))) { goto L3; }
  T0 = ecl_car(ecl_symbol_value(ECL_SYM("*NEXT-METHODS*",1536)));
  T1 = ecl_cdr(ecl_symbol_value(ECL_SYM("*NEXT-METHODS*",1536)));
  value0 = ecl_function_dispatch(cl_env_copy,T0)(2, ecl_symbol_value(ECL_SYM(".COMBINED-METHOD-ARGS.",1534)), T1);
  return value0;
L3:;
  value0 = cl_error(1, VV[32]);
  return value0;
L1:;
  {
   cl_object v3reporter;
   v3reporter = cl_slot_value(v1c, ECL_SYM("REPORT-FUNCTION",2019));
   if (!(ECL_STRINGP(v3reporter))) { goto L7; }
   value0 = cl_write_string(2, v3reporter, v2stream);
   return value0;
L7:;
   if (!(v3reporter==ECL_NIL)) { goto L9; }
   if (Null(ecl_symbol_value(ECL_SYM("*NEXT-METHODS*",1536)))) { goto L11; }
   T0 = ecl_car(ecl_symbol_value(ECL_SYM("*NEXT-METHODS*",1536)));
   T1 = ecl_cdr(ecl_symbol_value(ECL_SYM("*NEXT-METHODS*",1536)));
   value0 = ecl_function_dispatch(cl_env_copy,T0)(2, ecl_symbol_value(ECL_SYM(".COMBINED-METHOD-ARGS.",1534)), T1);
   return value0;
L11:;
   value0 = cl_error(1, VV[32]);
   return value0;
L9:;
   value0 = ecl_function_dispatch(cl_env_copy,v3reporter)(2, v1c, v2stream);
   return value0;
  }
 }
}
/*      local function DEFINE-CONDITION                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC25define_condition(cl_object v1, cl_object v2)
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
   cl_object v4name;
   cl_object v5parent_list;
   cl_object v6slot_specs;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[100])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v7;
    v7 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4name = v7;
   }
   if (!(v3==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[100])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v7;
    v7 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5parent_list = v7;
   }
   if (!(v3==ECL_NIL)) { goto L15; }
   ecl_function_dispatch(cl_env_copy,VV[100])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L15:;
   {
    cl_object v7;
    v7 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v6slot_specs = v7;
   }
   {
    cl_object v7class_options;
    v7class_options = ECL_NIL;
    {
     cl_object v8;
     v8 = v3;
     goto L25;
L24:;
     {
      cl_object v9option;
      v9option = ecl_car(v8);
      {
       cl_object v10;
       v10 = ecl_car(v9option);
       if (!(ecl_eql(v10,ECL_SYM("DEFAULT-INITARGS",989)))) { goto L36; }
       goto L33;
       goto L34;
L36:;
       goto L34;
L34:;
       if (!(ecl_eql(v10,ECL_SYM("DOCUMENTATION",1244)))) { goto L31; }
       goto L32;
L33:;
L32:;
       v7class_options = CONS(v9option,v7class_options);
       goto L29;
L31:;
       if (!(ecl_eql(v10,ECL_SYM("REPORT",1329)))) { goto L40; }
       {
        cl_object v11report_function;
        v11report_function = ecl_cadr(v9option);
        if (!(ECL_SYMBOLP(v11report_function))) { goto L45; }
        T0 = cl_list(2, ECL_SYM("QUOTE",681), v11report_function);
        goto L44;
L45:;
        T0 = v11report_function;
L44:;
        T1 = cl_list(3, ECL_SYM("REPORT-FUNCTION",2019), ECL_SYM("INITFORM",998), T0);
        v6slot_specs = CONS(T1,v6slot_specs);
        goto L29;
       }
L40:;
       cl_cerror(3, VV[35], VV[36], v9option);
      }
L29:;
     }
     v8 = ecl_cdr(v8);
L25:;
     if (Null(v8)) { goto L49; }
     goto L24;
L49:;
    }
    value0 = v5parent_list;
    if ((value0)!=ECL_NIL) { goto L53; }
    T0 = VV[37];
    goto L51;
L53:;
    T0 = value0;
    goto L51;
L51:;
    T1 = cl_listX(5, ECL_SYM("DEFCLASS",939), v4name, T0, v6slot_specs, v7class_options);
    T2 = cl_list(2, ECL_SYM("QUOTE",681), v4name);
    value0 = cl_list(3, ECL_SYM("PROGN",673), T1, T2);
    return value0;
   }
  }
 }
}
/*      function definition for FIND-SUBCLASSES-OF-TYPE               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L26find_subclasses_of_type(cl_object v1type, cl_object v2class)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(cl_subtypep(2, v2class, v1type))) { goto L1; }
  value0 = ecl_list1(v2class);
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  {
   cl_object v3;
   cl_object v4c;
   cl_object v5;
   v3 = ecl_function_dispatch(cl_env_copy,ECL_SYM("CLASS-DIRECT-SUBCLASSES",1550))(1, v2class) /*  CLASS-DIRECT-SUBCLASSES */;
   v4c = ECL_NIL;
   {
    cl_object v6;
    v6 = v3;
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
L10:;
    if (!(ecl_endp(v5))) { goto L12; }
    goto L11;
L12:;
    v4c = _ecl_car(v5);
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
     v8 = L26find_subclasses_of_type(v1type, v4c);
     {
      cl_object v9;
      v9 = v7;
      if (ecl_unlikely(ECL_ATOM(v9))) FEtype_error_cons(v9);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      T0 = v9;
     }
     (ECL_CONS_CDR(T0)=v8,T0);
     if (Null(v8)) { goto L20; }
    }
    T0 = ecl_cdr(v7);
    v7 = ecl_last(T0,1);
L20:;
    goto L10;
L11:;
    value0 = ecl_cdr(v6);
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      function definition for MAKE-CONDITION                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_make_condition(cl_narg narg, cl_object v1type, ...)
{
 cl_object T0, T1, T2, T3, T4;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2slot_initializations;
  ecl_va_list args; ecl_va_start(args,v1type,narg,1);
  v2slot_initializations = cl_grab_rest_args(args);
  ecl_va_end(args);
  {
   cl_object v3class;
   if (!(ECL_SYMBOLP(v1type))) { goto L6; }
   value0 = cl_find_class(2, v1type, ECL_NIL);
   goto L4;
L6:;
   value0 = ECL_NIL;
   goto L4;
L4:;
   if ((value0)!=ECL_NIL) { goto L3; }
   T0 = cl_find_class(1, ECL_SYM("CONDITION",250));
   T1 = L26find_subclasses_of_type(v1type, T0);
   T2 = (ECL_SYM("SUBCLASSP",1200)->symbol.gfdef);
   T3 = cl_sort(2, T1, T2);
   T4 = ecl_last(T3,1);
   v3class = ecl_car(T4);
   goto L1;
L3:;
   v3class = value0;
   goto L1;
L1:;
   if ((v3class)!=ECL_NIL) { goto L9; }
   T0 = ecl_list1(v1type);
   cl_error(9, ECL_SYM("SIMPLE-TYPE-ERROR",775), ECL_SYM("DATUM",1236), v1type, ECL_SYM("EXPECTED-TYPE",1254), ECL_SYM("CONDITION",250), ECL_SYM("FORMAT-CONTROL",1263), VV[39], ECL_SYM("FORMAT-ARGUMENTS",1262), T0);
L9:;
   T0 = (ECL_SYM("MAKE-INSTANCE",951)->symbol.gfdef);
   value0 = cl_apply(3, T0, v3class, v2slot_initializations);
   return value0;
  }
 }
}
/*      local function HANDLER-BIND                                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC29handler_bind(cl_object v1, cl_object v2)
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
   cl_object v4bindings;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[100])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v5;
    v5 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4bindings = v5;
   }
   {
    cl_object v5;
    v5 = ecl_make_cfun((cl_objectfn_fixed)LC27__lambda169,ECL_NIL,Cblock,1);
    T0 = v5;
   }
   if ((cl_every(2, T0, v4bindings))!=ECL_NIL) { goto L8; }
   cl_error(1, VV[40]);
L8:;
   {
    cl_object v5;
    {
     cl_object v6;
     v6 = ecl_make_cfun((cl_objectfn_fixed)LC28__lambda175,ECL_NIL,Cblock,1);
     v5 = v6;
    }
    {
     cl_object v6;
     cl_object v7;
     v6 = ECL_NIL;
     {
      cl_object v8;
      v8 = v4bindings;
      if (ecl_unlikely(!ECL_LISTP(v8))) FEtype_error_list(v8);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v7 = v8;
     }
     {
      cl_object v8;
      cl_object v9;
      v8 = ecl_list1(ECL_NIL);
      v9 = v8;
L19:;
      if (!(ecl_endp(v7))) { goto L21; }
      goto L20;
L21:;
      v6 = _ecl_car(v7);
      {
       cl_object v10;
       v10 = _ecl_cdr(v7);
       if (ecl_unlikely(!ECL_LISTP(v10))) FEtype_error_list(v10);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v7 = v10;
      }
      {
       cl_object v10;
       v10 = v9;
       if (ecl_unlikely(ECL_ATOM(v10))) FEtype_error_cons(v10);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       T1 = v10;
      }
      T2 = ecl_function_dispatch(cl_env_copy,v5)(1, v6);
      v9 = ecl_list1(T2);
      (ECL_CONS_CDR(T1)=v9,T1);
      goto L19;
L20:;
      T0 = ecl_cdr(v8);
      goto L11;
     }
    }
   }
L11:;
   T1 = CONS(ECL_SYM("LIST",483),T0);
   T2 = cl_list(3, ECL_SYM("CONS",253), T1, ECL_SYM("*HANDLER-CLUSTERS*",6));
   T3 = cl_list(2, ECL_SYM("*HANDLER-CLUSTERS*",6), T2);
   T4 = ecl_list1(T3);
   value0 = cl_listX(3, ECL_SYM("LET",479), T4, v3);
   return value0;
  }
 }
}
/*      local function LAMBDA169                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC27__lambda169(cl_object v1x)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ECL_LISTP(v1x))) { goto L2; }
  {
   cl_fixnum v2;
   v2 = ecl_length(v1x);
   value0 = ecl_make_bool((v2)==(2));
   cl_env_copy->nvalues = 1;
   return value0;
  }
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function LAMBDA175                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC28__lambda175(cl_object v1x)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_car(v1x);
  T1 = cl_list(2, ECL_SYM("QUOTE",681), T0);
  T2 = ecl_cadr(v1x);
  value0 = cl_list(3, ECL_SYM("CONS",253), T1, T2);
  return value0;
 }
}
/*      function definition for SIGNAL                                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L30signal(cl_narg narg, cl_object v1datum, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2arguments;
  ecl_va_list args; ecl_va_start(args,v1datum,narg,1);
  v2arguments = cl_grab_rest_args(args);
  ecl_va_end(args);
  {
   cl_object v3condition;
   v3condition = L31coerce_to_condition(v1datum, v2arguments, ECL_SYM("SIMPLE-CONDITION",769), ECL_SYM("SIGNAL",762));
   ecl_bds_push(cl_env_copy,ECL_SYM("*HANDLER-CLUSTERS*",6)); /*  *HANDLER-CLUSTERS* */
   if (Null(cl_typep(2, v3condition, ecl_symbol_value(ECL_SYM("*BREAK-ON-SIGNALS*",27))))) { goto L2; }
   L34break(2, VV[42], v3condition);
L2:;
L5:;
   if ((ecl_symbol_value(ECL_SYM("*HANDLER-CLUSTERS*",6)))!=ECL_NIL) { goto L7; }
   goto L4;
L7:;
   {
    cl_object v4cluster;
    {
     cl_object v5;
     v5 = ecl_symbol_value(ECL_SYM("*HANDLER-CLUSTERS*",6));
     {
      cl_object v6;
      v6 = v5;
      if (ecl_unlikely(!ECL_LISTP(v6))) FEtype_error_list(v6);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
     }
     if (Null(v5)) { goto L14; }
     {
      cl_object v6;
      v6 = ECL_CONS_CDR(v5);
      cl_set(ECL_SYM("*HANDLER-CLUSTERS*",6),v6);
      v5 = ECL_CONS_CAR(v5);
     }
L14:;
     v4cluster = v5;
    }
    {
     cl_object v5;
     v5 = v4cluster;
     goto L23;
L22:;
     {
      cl_object v6handler;
      v6handler = ecl_car(v5);
      T0 = ecl_car(v6handler);
      if (Null(cl_typep(2, v3condition, T0))) { goto L27; }
      T0 = ecl_cdr(v6handler);
      ecl_function_dispatch(cl_env_copy,T0)(1, v3condition);
L27:;
     }
     v5 = ecl_cdr(v5);
L23:;
     if (Null(v5)) { goto L32; }
     goto L22;
L32:;
    }
   }
   goto L5;
L4:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   ecl_bds_unwind1(cl_env_copy);
   return value0;
  }
 }
}
/*      function definition for COERCE-TO-CONDITION                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L31coerce_to_condition(cl_object v1datum, cl_object v2arguments, cl_object v3default_type, cl_object v4function_name)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(si_of_class_p(2, v1datum, ECL_SYM("CONDITION",250)))) { goto L1; }
  if (Null(v2arguments)) { goto L3; }
  T0 = cl_list(2, v1datum, v4function_name);
  cl_cerror(10, VV[44], ECL_SYM("SIMPLE-TYPE-ERROR",775), ECL_SYM("DATUM",1236), v2arguments, ECL_SYM("EXPECTED-TYPE",1254), ECL_SYM("NULL",607), ECL_SYM("FORMAT-CONTROL",1263), VV[45], ECL_SYM("FORMAT-ARGUMENTS",1262), T0);
L3:;
  value0 = v1datum;
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  if (!(ECL_SYMBOLP(v1datum))) { goto L5; }
  T0 = (ECL_SYM("MAKE-CONDITION",526)->symbol.gfdef);
  value0 = cl_apply(3, T0, v1datum, v2arguments);
  return value0;
L5:;
  if (ECL_STRINGP(v1datum)) { goto L10; }
  if (Null(cl_functionp(v1datum))) { goto L8; }
  goto L9;
L10:;
L9:;
  value0 = cl_make_condition(5, v3default_type, ECL_SYM("FORMAT-CONTROL",1263), v1datum, ECL_SYM("FORMAT-ARGUMENTS",1262), v2arguments);
  return value0;
L8:;
  T0 = cl_list(2, v4function_name, v1datum);
  value0 = cl_error(9, ECL_SYM("SIMPLE-TYPE-ERROR",775), ECL_SYM("DATUM",1236), v1datum, ECL_SYM("EXPECTED-TYPE",1254), VV[46], ECL_SYM("FORMAT-CONTROL",1263), VV[47], ECL_SYM("FORMAT-ARGUMENTS",1262), T0);
  return value0;
 }
}
/*      function definition for BREAK                                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L34break(volatile cl_narg narg, ...)
{
 cl_object T0, T1, T2, T3, T4;
 cl_object volatile env0 = ECL_NIL;
 cl_object volatile CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  cl_object volatile v1format_control;
  cl_object volatile v2format_arguments;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  {
   int i = 0;
   if (i >= narg) {
    v1format_control = VV[48];
   } else {
    i++;
    v1format_control = ecl_va_arg(args);
   }
  }
  v2format_arguments = cl_grab_rest_args(args);
  ecl_va_end(args);
  ecl_bds_bind(cl_env_copy,ECL_SYM("*DEBUGGER-HOOK*",33),ECL_NIL); /*  *DEBUGGER-HOOK* */
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
     if (cl_env_copy->values[0]==ecl_make_fixnum(0))goto L3;
     ecl_internal_error("GO found an inexistent tag");
     }
    }
    {
     cl_object v3;
     v3 = ecl_make_cclosure_va((cl_objectfn)LC32__lambda188,env2,Cblock,0);
     T0 = v3;
    }
    {
     cl_object v3;
     v3 = ecl_make_cfun((cl_objectfn_fixed)LC33__lambda189,ECL_NIL,Cblock,1);
     T1 = v3;
    }
    T2 = L3make_restart(6, ECL_SYM("NAME",1300), ECL_SYM("CONTINUE",252), ECL_SYM("FUNCTION",1264), T0, VV[18], T1);
    T3 = ecl_list1(T2);
    T4 = CONS(T3,ecl_symbol_value(ECL_SYM("*RESTART-CLUSTERS*",5)));
    ecl_bds_bind(cl_env_copy,ECL_SYM("*RESTART-CLUSTERS*",5),T4); /*  *RESTART-CLUSTERS* */
    T0 = cl_make_condition(5, ECL_SYM("SIMPLE-CONDITION",769), ECL_SYM("FORMAT-CONTROL",1263), v1format_control, ECL_SYM("FORMAT-ARGUMENTS",1262), v2format_arguments);
    (cl_env_copy->function=(ECL_SYM("INVOKE-DEBUGGER",447)->symbol.gfdef))->cfun.entry(1, T0) /*  INVOKE-DEBUGGER */;
    ecl_frs_pop(cl_env_copy);
    ecl_bds_unwind1(cl_env_copy);
    ecl_bds_unwind1(cl_env_copy);
    goto L2;
L3:;
    ecl_frs_pop(cl_env_copy);
    ecl_bds_unwind1(cl_env_copy);
    goto L2;
   }
  }
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      closure LAMBDA188                                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC32__lambda188(cl_narg narg, ...)
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
/*      local function LAMBDA189                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC33__lambda189(cl_object v1stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_format(2, v1stream, VV[49]);
  return value0;
 }
}
/*      function definition for WARN                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L37warn(volatile cl_narg narg, cl_object volatile v1datum, ...)
{
 cl_object T0, T1, T2, T3, T4;
 cl_object volatile env0 = ECL_NIL;
 cl_object volatile CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object volatile v2arguments;
  ecl_va_list args; ecl_va_start(args,v1datum,narg,1);
  v2arguments = cl_grab_rest_args(args);
  ecl_va_end(args);
  {
   volatile cl_object v3condition;
   v3condition = L31coerce_to_condition(v1datum, v2arguments, ECL_SYM("SIMPLE-WARNING",778), ECL_SYM("WARN",905));
   {
    cl_object v4;
    v4 = v3condition;
    if ((si_of_class_p(2, v4, ECL_SYM("WARNING",906)))!=ECL_NIL) { goto L4; }
    v3condition = si_do_check_type(v4, ECL_SYM("WARNING",906), VV[51], ECL_SYM("CONDITION",250));
L4:;
   }
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
      if (cl_env_copy->values[0]==ecl_make_fixnum(0))goto L8;
      ecl_internal_error("GO found an inexistent tag");
      }
     }
     {
      cl_object v4;
      v4 = ecl_make_cclosure_va((cl_objectfn)LC35__lambda197,env2,Cblock,0);
      T0 = v4;
     }
     {
      cl_object v4;
      v4 = ecl_make_cfun((cl_objectfn_fixed)LC36__lambda198,ECL_NIL,Cblock,1);
      T1 = v4;
     }
     T2 = L3make_restart(6, ECL_SYM("NAME",1300), ECL_SYM("MUFFLE-WARNING",573), ECL_SYM("FUNCTION",1264), T0, VV[18], T1);
     T3 = ecl_list1(T2);
     T4 = CONS(T3,ecl_symbol_value(ECL_SYM("*RESTART-CLUSTERS*",5)));
     ecl_bds_bind(cl_env_copy,ECL_SYM("*RESTART-CLUSTERS*",5),T4); /*  *RESTART-CLUSTERS* */
     {
      cl_object v4;
      T0 = ECL_NIL;
      v4 = L31coerce_to_condition(v3condition, T0, ECL_SYM("SIMPLE-CONDITION",769), VV[43]);
      T0 = ecl_car(ecl_symbol_value(ECL_SYM("*RESTART-CLUSTERS*",5)));
      T1 = CONS(v4,T0);
      T2 = CONS(T1,ecl_symbol_value(VV[1]));
      ecl_bds_bind(cl_env_copy,VV[1],T2);         /*  *CONDITION-RESTARTS* */
      L30signal(1, v4);
      ecl_frs_pop(cl_env_copy);
      ecl_bds_unwind1(cl_env_copy);
      ecl_bds_unwind1(cl_env_copy);
      goto L7;
     }
L8:;
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 1;
     ecl_frs_pop(cl_env_copy);
     return value0;
    }
   }
L7:;
   cl_format(3, ecl_symbol_value(ECL_SYM("*ERROR-OUTPUT*",35)), VV[53], v3condition);
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      closure LAMBDA197                                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC35__lambda197(cl_narg narg, ...)
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
/*      local function LAMBDA198                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC36__lambda198(cl_object v1stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_write_string(2, VV[52], v1stream);
  return value0;
 }
}
/*      local function LAMBDA200                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC39__lambda200()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC38__lambda201,ECL_NIL,Cblock,2);
   value0 = v1;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function LAMBDA201                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC38__lambda201(cl_object v1condition, cl_object v2stream)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = (cl_env_copy->function=(ECL_SYM("SIMPLE-CONDITION-FORMAT-CONTROL",770)->symbol.gfdef))->cfun.entry(1, v1condition) /*  SIMPLE-CONDITION-FORMAT-CONTROL */;
  T1 = (cl_env_copy->function=(ECL_SYM("SIMPLE-CONDITION-FORMAT-ARGUMENTS",771)->symbol.gfdef))->cfun.entry(1, v1condition) /*  SIMPLE-CONDITION-FORMAT-ARGUMENTS */;
  value0 = cl_format(4, v2stream, VV[55], T0, T1);
  return value0;
 }
}
/*      local function LAMBDA202                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC41__lambda202()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC40__lambda203,ECL_NIL,Cblock,2);
   value0 = v1;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function LAMBDA203                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC40__lambda203(cl_object v1condition, cl_object v2stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3type;
   cl_object v4size;
   v3type = ecl_function_dispatch(cl_env_copy,ECL_SYM("STACK-OVERFLOW-TYPE",1722))(1, v1condition) /*  STACK-OVERFLOW-TYPE */;
   v4size = ecl_function_dispatch(cl_env_copy,ECL_SYM("STACK-OVERFLOW-SIZE",1721))(1, v1condition) /*  STACK-OVERFLOW-SIZE */;
   if (Null(v4size)) { goto L3; }
   value0 = cl_format(4, v2stream, VV[57], v3type, v4size);
   return value0;
L3:;
   value0 = cl_format(3, v2stream, VV[58], v3type);
   return value0;
  }
 }
}
/*      local function LAMBDA204                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC43__lambda204()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC42__lambda205,ECL_NIL,Cblock,2);
   value0 = v1;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function LAMBDA205                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC42__lambda205(cl_object v1condition, cl_object v2stream)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_slot_value(v1condition, VV[60]);
  value0 = cl_format(3, v2stream, VV[59], T0);
  return value0;
 }
}
/*      local function LAMBDA206                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC45__lambda206()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC44__lambda207,ECL_NIL,Cblock,2);
   value0 = v1;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function LAMBDA207                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC44__lambda207(cl_object v1condition, cl_object v2stream)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("UNIX-SIGNAL-RECEIVED-CODE",1886))(1, v1condition) /*  UNIX-SIGNAL-RECEIVED-CODE */;
  value0 = cl_format(3, v2stream, VV[61], T0);
  return value0;
 }
}
/*      local function LAMBDA208                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC47__lambda208()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC46__lambda209,ECL_NIL,Cblock,2);
   value0 = v1;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function LAMBDA209                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC46__lambda209(cl_object v1condition, cl_object v2stream)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = (cl_env_copy->function=(ECL_SYM("TYPE-ERROR-DATUM",873)->symbol.gfdef))->cfun.entry(1, v1condition) /*  TYPE-ERROR-DATUM */;
  T1 = (cl_env_copy->function=(ECL_SYM("TYPE-ERROR-EXPECTED-TYPE",874)->symbol.gfdef))->cfun.entry(1, v1condition) /*  TYPE-ERROR-EXPECTED-TYPE */;
  value0 = cl_format(4, v2stream, VV[62], T0, T1);
  return value0;
 }
}
/*      local function LAMBDA210                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC49__lambda210()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC48__lambda211,ECL_NIL,Cblock,2);
   value0 = v1;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function LAMBDA211                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC48__lambda211(cl_object v1condition, cl_object v2stream)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = (cl_env_copy->function=(ECL_SYM("TYPE-ERROR-DATUM",873)->symbol.gfdef))->cfun.entry(1, v1condition) /*  TYPE-ERROR-DATUM */;
  T1 = ecl_function_dispatch(cl_env_copy,VV[124])(1, v1condition) /*  CASE-FAILURE-NAME */;
  T2 = ecl_function_dispatch(cl_env_copy,VV[125])(1, v1condition) /*  CASE-FAILURE-POSSIBILITIES */;
  value0 = cl_format(5, v2stream, VV[64], T0, T1, T2);
  return value0;
 }
}
/*      local function LAMBDA212                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC51__lambda212()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC50__lambda213,ECL_NIL,Cblock,2);
   value0 = v1;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function LAMBDA213                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC50__lambda213(cl_object v1condition, cl_object v2stream)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = (cl_env_copy->function=(ECL_SYM("STREAM-ERROR-STREAM",804)->symbol.gfdef))->cfun.entry(1, v1condition) /*  STREAM-ERROR-STREAM */;
  value0 = cl_format(3, v2stream, VV[65], T0);
  return value0;
 }
}
/*      local function LAMBDA214                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC53__lambda214()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC52__lambda215,ECL_NIL,Cblock,2);
   value0 = v1;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function LAMBDA215                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC52__lambda215(cl_object v1condition, cl_object v2stream)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = (cl_env_copy->function=(ECL_SYM("FILE-ERROR-PATHNAME",356)->symbol.gfdef))->cfun.entry(1, v1condition) /*  FILE-ERROR-PATHNAME */;
  value0 = cl_format(3, v2stream, VV[66], T0);
  return value0;
 }
}
/*      local function LAMBDA216                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC55__lambda216()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC54__lambda217,ECL_NIL,Cblock,2);
   value0 = v1;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function LAMBDA217                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC54__lambda217(cl_object v1condition, cl_object v2stream)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = (cl_env_copy->function=(ECL_SYM("CELL-ERROR-NAME",203)->symbol.gfdef))->cfun.entry(1, v1condition) /*  CELL-ERROR-NAME */;
  value0 = cl_format(3, v2stream, VV[67], T0);
  return value0;
 }
}
/*      local function LAMBDA218                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC57__lambda218()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC56__lambda219,ECL_NIL,Cblock,2);
   value0 = v1;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function LAMBDA219                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC56__lambda219(cl_object v1condition, cl_object v2stream)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = (cl_env_copy->function=(ECL_SYM("CELL-ERROR-NAME",203)->symbol.gfdef))->cfun.entry(1, v1condition) /*  CELL-ERROR-NAME */;
  T1 = (cl_env_copy->function=(ECL_SYM("UNBOUND-SLOT-INSTANCE",879)->symbol.gfdef))->cfun.entry(1, v1condition) /*  UNBOUND-SLOT-INSTANCE */;
  value0 = cl_format(4, v2stream, VV[68], T0, T1);
  return value0;
 }
}
/*      local function LAMBDA220                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC59__lambda220()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC58__lambda221,ECL_NIL,Cblock,2);
   value0 = v1;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function LAMBDA221                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC58__lambda221(cl_object v1condition, cl_object v2stream)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = (cl_env_copy->function=(ECL_SYM("CELL-ERROR-NAME",203)->symbol.gfdef))->cfun.entry(1, v1condition) /*  CELL-ERROR-NAME */;
  value0 = cl_format(3, v2stream, VV[69], T0);
  return value0;
 }
}
/*      local function LAMBDA222                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC61__lambda222()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC60__lambda223,ECL_NIL,Cblock,2);
   value0 = v1;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function LAMBDA223                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC60__lambda223(cl_object v1condition, cl_object v2stream)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = (cl_env_copy->function=(ECL_SYM("PRINT-NOT-READABLE-OBJECT",666)->symbol.gfdef))->cfun.entry(1, v1condition) /*  PRINT-NOT-READABLE-OBJECT */;
  value0 = cl_format(3, v2stream, VV[71], T0);
  return value0;
 }
}
/*      local function LAMBDA224                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC63__lambda224()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC62__lambda225,ECL_NIL,Cblock,2);
   value0 = v1;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function LAMBDA226                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC64__lambda226()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ecl_symbol_value(VV[73]);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function LAMBDA227                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC65__lambda227()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ecl_symbol_value(VV[74]);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function LAMBDA225                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC62__lambda225(cl_object v1condition, cl_object v2stream)
{
 cl_object T0, T1, T2, T3, T4;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,VV[126])(1, v1condition) /*  FORMAT-ERROR-PRINT-BANNER */;
  T1 = (cl_env_copy->function=(ECL_SYM("SIMPLE-CONDITION-FORMAT-CONTROL",770)->symbol.gfdef))->cfun.entry(1, v1condition) /*  SIMPLE-CONDITION-FORMAT-CONTROL */;
  T2 = (cl_env_copy->function=(ECL_SYM("SIMPLE-CONDITION-FORMAT-ARGUMENTS",771)->symbol.gfdef))->cfun.entry(1, v1condition) /*  SIMPLE-CONDITION-FORMAT-ARGUMENTS */;
  T3 = ecl_function_dispatch(cl_env_copy,VV[127])(1, v1condition) /*  FORMAT-ERROR-CONTROL-STRING */;
  T4 = ecl_function_dispatch(cl_env_copy,VV[128])(1, v1condition) /*  FORMAT-ERROR-OFFSET */;
  value0 = cl_format(7, v2stream, VV[72], T0, T1, T2, T3, T4);
  return value0;
 }
}
/*      function definition for SIGNAL-SIMPLE-ERROR                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object si_signal_simple_error(cl_narg narg, cl_object v1base_condition, cl_object v2continue_message, cl_object v3format_control, cl_object v4format_args, ...)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<4)) FEwrong_num_arguments_anonym();
 {
  cl_object v5args;
  ecl_va_list args; ecl_va_start(args,v4format_args,narg,4);
  v5args = cl_grab_rest_args(args);
  ecl_va_end(args);
  {
   cl_object v6simple_error_name;
   T0 = cl_string(v1base_condition);
   T1 = cl_concatenate(3, ECL_SYM("STRING",807), VV[75], T0);
   T2 = cl_find_package(VV[76]);
   v6simple_error_name = cl_intern(2, T1, T2);
   if ((cl_find_class(2, v6simple_error_name, ECL_NIL))!=ECL_NIL) { goto L2; }
   T0 = cl_list(2, ECL_SYM("SIMPLE-ERROR",772), v1base_condition);
   T1 = cl_list(4, ECL_SYM("DEFCLASS",939), v6simple_error_name, T0, ECL_NIL);
   cl_eval(T1);
L2:;
   if (Null(v2continue_message)) { goto L4; }
   T0 = (ECL_SYM("CERROR",204)->symbol.gfdef);
   value0 = cl_apply(8, T0, v2continue_message, v6simple_error_name, ECL_SYM("FORMAT-CONTROL",1263), v3format_control, ECL_SYM("FORMAT-ARGUMENTS",1262), v4format_args, v5args);
   return value0;
L4:;
   T0 = (ECL_SYM("ERROR",339)->symbol.gfdef);
   value0 = cl_apply(7, T0, v6simple_error_name, ECL_SYM("FORMAT-CONTROL",1263), v3format_control, ECL_SYM("FORMAT-ARGUMENTS",1262), v4format_args, v5args);
   return value0;
  }
 }
}
/*      local function HANDLER-CASE                                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC69handler_case(cl_object v1, cl_object v2)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9;
 cl_object env0 = ECL_NIL;
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4form;
   cl_object v5cases;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[100])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4form = v6;
   }
   v5cases = v3;
   {
    cl_object v6no_error_clause;
    v6no_error_clause = ecl_assql(VV[77],v5cases);
    if (Null(v6no_error_clause)) { goto L10; }
    {
     cl_object v7normal_return;
     cl_object v8error_return;
     v7normal_return = cl_make_symbol(VV[78]);
     v8error_return = cl_make_symbol(VV[79]);
     T0 = ecl_cdr(v6no_error_clause);
     T1 = CONS(ECL_SYM("LAMBDA",454),T0);
     T2 = cl_list(2, ECL_SYM("FUNCTION",398), T1);
     T3 = cl_list(3, ECL_SYM("RETURN-FROM",727), v7normal_return, v4form);
     T4 = cl_remove(2, v6no_error_clause, v5cases);
     T5 = cl_listX(3, ECL_SYM("HANDLER-CASE",418), T3, T4);
     T6 = cl_list(3, ECL_SYM("RETURN-FROM",727), v8error_return, T5);
     T7 = cl_list(3, ECL_SYM("BLOCK",139), v7normal_return, T6);
     T8 = cl_list(3, ECL_SYM("MULTIPLE-VALUE-CALL",575), T2, T7);
     value0 = cl_list(3, ECL_SYM("BLOCK",139), v8error_return, T8);
     return value0;
    }
L10:;
    {
     cl_object v9annotated_cases;
     cl_object env1 = env0;
     T0 = cl_gensym(0);
     env1 = ECL_NIL;
     CLV0 = env1 = CONS(T0,env1);                 /*  TAG             */
     T0 = cl_gensym(0);
     CLV1 = env1 = CONS(T0,env1);                 /*  VAR             */
     {
      cl_object v10;
      {
       cl_object v11;
       v11 = ecl_make_cfun((cl_objectfn_fixed)LC66__lambda240,ECL_NIL,Cblock,1);
       v10 = v11;
      }
      {
       cl_object v11;
       cl_object v12;
       v11 = ECL_NIL;
       {
        cl_object v13;
        v13 = v5cases;
        if (ecl_unlikely(!ECL_LISTP(v13))) FEtype_error_list(v13);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v12 = v13;
       }
       {
        cl_object v13;
        cl_object v14;
        v13 = ecl_list1(ECL_NIL);
        v14 = v13;
L22:;
        if (!(ecl_endp(v12))) { goto L24; }
        goto L23;
L24:;
        v11 = _ecl_car(v12);
        {
         cl_object v15;
         v15 = _ecl_cdr(v12);
         if (ecl_unlikely(!ECL_LISTP(v15))) FEtype_error_list(v15);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         v12 = v15;
        }
        {
         cl_object v15;
         v15 = v14;
         if (ecl_unlikely(ECL_ATOM(v15))) FEtype_error_cons(v15);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         T0 = v15;
        }
        T1 = ecl_function_dispatch(cl_env_copy,v10)(1, v11);
        v14 = ecl_list1(T1);
        (ECL_CONS_CDR(T0)=v14,T0);
        goto L22;
L23:;
        v9annotated_cases = ecl_cdr(v13);
        goto L14;
       }
      }
     }
L14:;
     T0 = cl_list(2, ECL_CONS_CAR(CLV1), ECL_NIL);
     T1 = ecl_list1(T0);
     T2 = cl_list(2, ECL_SYM("IGNORABLE",429), ECL_CONS_CAR(CLV1));
     T3 = cl_list(2, ECL_SYM("DECLARE",276), T2);
     {
      cl_object v10;
      {
       cl_object v11;
       v11 = ecl_make_cclosure_va((cl_objectfn)LC67__lambda248,env1,Cblock,1);
       v10 = v11;
      }
      {
       cl_object v11;
       cl_object v12;
       v11 = ECL_NIL;
       {
        cl_object v13;
        v13 = v9annotated_cases;
        if (ecl_unlikely(!ECL_LISTP(v13))) FEtype_error_list(v13);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v12 = v13;
       }
       {
        cl_object v13;
        cl_object v14;
        v13 = ecl_list1(ECL_NIL);
        v14 = v13;
L48:;
        if (!(ecl_endp(v12))) { goto L50; }
        goto L49;
L50:;
        v11 = _ecl_car(v12);
        {
         cl_object v15;
         v15 = _ecl_cdr(v12);
         if (ecl_unlikely(!ECL_LISTP(v15))) FEtype_error_list(v15);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         v12 = v15;
        }
        {
         cl_object v15;
         v15 = v14;
         if (ecl_unlikely(ECL_ATOM(v15))) FEtype_error_cons(v15);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         T5 = v15;
        }
        T6 = ecl_function_dispatch(cl_env_copy,v10)(1, v11);
        v14 = ecl_list1(T6);
        (ECL_CONS_CDR(T5)=v14,T5);
        goto L48;
L49:;
        T4 = ecl_cdr(v13);
        goto L40;
       }
      }
     }
L40:;
     T5 = cl_list(3, ECL_SYM("RETURN-FROM",727), ECL_CONS_CAR(CLV0), v4form);
     T6 = cl_list(3, VV[41], T4, T5);
     {
      cl_object v10;
      {
       cl_object v11;
       v11 = ecl_make_cclosure_va((cl_objectfn)LC68__lambda256,env1,Cblock,1);
       v10 = v11;
      }
      {
       cl_object v11;
       cl_object v12;
       v11 = ECL_NIL;
       {
        cl_object v13;
        v13 = v9annotated_cases;
        if (ecl_unlikely(!ECL_LISTP(v13))) FEtype_error_list(v13);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v12 = v13;
       }
       {
        cl_object v13;
        cl_object v14;
        v13 = ecl_list1(ECL_NIL);
        v14 = v13;
L74:;
        if (!(ecl_endp(v12))) { goto L76; }
        goto L75;
L76:;
        v11 = _ecl_car(v12);
        {
         cl_object v15;
         v15 = _ecl_cdr(v12);
         if (ecl_unlikely(!ECL_LISTP(v15))) FEtype_error_list(v15);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         v12 = v15;
        }
        {
         cl_object v15;
         v15 = ecl_function_dispatch(cl_env_copy,v10)(1, v11);
         {
          cl_object v16;
          v16 = v14;
          if (ecl_unlikely(ECL_ATOM(v16))) FEtype_error_cons(v16);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          T8 = v16;
         }
         (ECL_CONS_CDR(T8)=v15,T8);
         if (Null(v15)) { goto L84; }
        }
        T8 = ecl_cdr(v14);
        v14 = ecl_last(T8,1);
L84:;
        goto L74;
L75:;
        T7 = ecl_cdr(v13);
        goto L66;
       }
      }
     }
L66:;
     T8 = cl_listX(3, ECL_SYM("TAGBODY",852), T6, T7);
     T9 = cl_list(4, ECL_SYM("LET",479), T1, T3, T8);
     value0 = cl_list(3, ECL_SYM("BLOCK",139), ECL_CONS_CAR(CLV0), T9);
     return value0;
    }
   }
  }
 }
}
/*      local function LAMBDA240                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC66__lambda240(cl_object v1case)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_gensym(0);
  value0 = CONS(T0,v1case);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      closure LAMBDA248                                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC67__lambda248(cl_narg narg, cl_object v1annotated_case, ...)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7;
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV1 = env0;                                     /*  VAR             */
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=1)) FEwrong_num_arguments_anonym();
 {
TTL:
  T0 = ecl_cadr(v1annotated_case);
  if (Null(ecl_caddr(v1annotated_case))) { goto L2; }
  T2 = cl_list(3, ECL_SYM("SETQ",753), ECL_CONS_CAR(CLV1), VV[27]);
  T1 = ecl_list1(T2);
  goto L1;
L2:;
  T1 = ECL_NIL;
L1:;
  T2 = ecl_car(v1annotated_case);
  T3 = cl_list(2, ECL_SYM("GO",416), T2);
  T4 = ecl_list1(T3);
  T5 = ecl_append(T1,T4);
  T6 = cl_listX(4, ECL_SYM("LAMBDA",454), VV[80], VV[81], T5);
  T7 = cl_list(2, ECL_SYM("FUNCTION",398), T6);
  value0 = cl_list(2, T0, T7);
  return value0;
 }
 }
}
/*      closure LAMBDA256                                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC68__lambda256(cl_narg narg, cl_object v1annotated_case, ...)
{
 cl_object T0, T1, T2, T3, T4, T5;
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV1 = env0;                                     /*  VAR             */
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=1)) FEwrong_num_arguments_anonym();
 {
TTL:
  T0 = ecl_car(v1annotated_case);
  {
   cl_object v2body;
   v2body = ecl_cdddr(v1annotated_case);
   if (Null(ecl_caddr(v1annotated_case))) { goto L4; }
   T3 = ecl_caaddr(v1annotated_case);
   T4 = cl_list(2, T3, ECL_CONS_CAR(CLV1));
   T5 = ecl_list1(T4);
   T2 = cl_listX(3, ECL_SYM("LET",479), T5, v2body);
   goto L3;
L4:;
   T2 = CONS(ECL_SYM("LOCALLY",492),v2body);
L3:;
   T1 = cl_list(3, ECL_SYM("RETURN-FROM",727), ECL_CONS_CAR(CLV0), T2);
  }
  value0 = cl_list(2, T0, T1);
  return value0;
 }
 }
}
/*      local function IGNORE-ERRORS                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC70ignore_errors(cl_object v1, cl_object v2)
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
   v3 = ecl_cdr(v1);
   T0 = CONS(ECL_SYM("PROGN",673),v3);
   value0 = cl_list(3, VV[82], T0, VV[83]);
   return value0;
  }
 }
}
/*      function definition for ABORT                                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_abort(cl_narg narg, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg>1)) FEwrong_num_arguments_anonym();
 {
  cl_object v1c;
  va_list args; va_start(args,narg);
  {
   int i = 0;
   if (i >= narg) {
    v1c = ECL_NIL;
   } else {
    i++;
    v1c = va_arg(args,cl_object);
   }
  }
  va_end(args);
  T0 = L16find_restart_never_fail(2, ECL_SYM("ABORT",79), v1c);
  cl_invoke_restart(1, T0);
  value0 = cl_error(1, VV[70]);
  return value0;
 }
}
/*      function definition for CONTINUE                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_continue(cl_narg narg, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg>1)) FEwrong_num_arguments_anonym();
 {
  cl_object v1c;
  va_list args; va_start(args,narg);
  {
   int i = 0;
   if (i >= narg) {
    v1c = ECL_NIL;
   } else {
    i++;
    v1c = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v2restart;
   v2restart = cl_find_restart(2, ECL_SYM("CONTINUE",252), v1c);
   if (Null(v2restart)) { goto L4; }
   value0 = cl_invoke_restart(1, v2restart);
   return value0;
L4:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for MUFFLE-WARNING                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_muffle_warning(cl_narg narg, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg>1)) FEwrong_num_arguments_anonym();
 {
  cl_object v1c;
  va_list args; va_start(args,narg);
  {
   int i = 0;
   if (i >= narg) {
    v1c = ECL_NIL;
   } else {
    i++;
    v1c = va_arg(args,cl_object);
   }
  }
  va_end(args);
  T0 = L16find_restart_never_fail(2, ECL_SYM("MUFFLE-WARNING",573), v1c);
  value0 = cl_invoke_restart(1, T0);
  return value0;
 }
}
/*      function definition for STORE-VALUE                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_store_value(cl_narg narg, cl_object v1value, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2c;
  va_list args; va_start(args,v1value);
  {
   int i = 1;
   if (i >= narg) {
    v2c = ECL_NIL;
   } else {
    i++;
    v2c = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v3restart;
   v3restart = cl_find_restart(2, ECL_SYM("STORE-VALUE",800), v2c);
   if (Null(v3restart)) { goto L4; }
   value0 = cl_invoke_restart(2, v3restart, v1value);
   return value0;
L4:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for USE-VALUE                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_use_value(cl_narg narg, cl_object v1value, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2c;
  va_list args; va_start(args,v1value);
  {
   int i = 1;
   if (i >= narg) {
    v2c = ECL_NIL;
   } else {
    i++;
    v2c = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v3restart;
   v3restart = cl_find_restart(2, ECL_SYM("USE-VALUE",895), v2c);
   if (Null(v3restart)) { goto L4; }
   value0 = cl_invoke_restart(2, v3restart, v1value);
   return value0;
L4:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for ASSERT-REPORT                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L71assert_report(cl_object v1names, cl_object v2stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  cl_format(2, v2stream, VV[85]);
  if (Null(v1names)) { goto L2; }
  {
   cl_fixnum v3;
   v3 = ecl_length(v1names);
   value0 = cl_format(4, v2stream, VV[86], ecl_make_fixnum(v3), v1names);
   return value0;
  }
L2:;
  value0 = cl_format(2, v2stream, VV[87]);
  return value0;
 }
}
/*      function definition for ASSERT-PROMPT                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L73assert_prompt(cl_object v1name, cl_object v2value)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(cl_y_or_n_p(3, VV[88], v1name, v2value))) { goto L1; }
  cl_format(2, ecl_symbol_value(ECL_SYM("*QUERY-IO*",61)), VV[89]);
  if (!(ECL_SYMBOLP(v1name))) { goto L4; }
  {
   cl_object v4, v5; cl_index v3;
   v4 = ecl_list1(v1name);
   v5 = ecl_list1(v2value);
   v3 = ecl_progv(cl_env_copy, v4, v5);
   value0 = LC72read_it();
   ecl_bds_unwind(cl_env_copy,v3);
   return value0;
  }
L4:;
  value0 = LC72read_it();
  return value0;
L1:;
  value0 = v2value;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function READ-IT                                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC72read_it()
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_read(1, ecl_symbol_value(ECL_SYM("*QUERY-IO*",61)));
  value0 = cl_eval(T0);
  return value0;
 }
}
/*      function definition for ASSERT-FAILURE                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object si_assert_failure(volatile cl_narg narg, cl_object volatile v1test_form, ...)
{
 cl_object T0, T1, T2, T3, T4;
 cl_object volatile env0 = ECL_NIL;
 cl_object volatile CLV0, CLV1, CLV2;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object volatile v2values;
  cl_object volatile v3arguments;
  ecl_va_list args; ecl_va_start(args,v1test_form,narg,1);
  {
   int i = 1;
   if (i >= narg) {
    env0 = ECL_NIL;
    CLV0 = env0 = CONS(ECL_NIL,env0);             /*  PLACE-NAMES     */
   } else {
    i++;
    env0 = ECL_NIL;
    CLV0 = env0 = CONS(ecl_va_arg(args),env0);    /*  PLACE-NAMES     */
   }
   if (i >= narg) {
    v2values = ECL_NIL;
   } else {
    i++;
    v2values = ecl_va_arg(args);
   }
  }
  v3arguments = cl_grab_rest_args(args);
  ecl_va_end(args);
  if ((v3arguments)!=ECL_NIL) { goto L2; }
  T0 = ecl_list1(v1test_form);
  v3arguments = cl_list(9, ECL_SYM("SIMPLE-TYPE-ERROR",775), ECL_SYM("DATUM",1236), v1test_form, ECL_SYM("EXPECTED-TYPE",1254), ECL_NIL, ECL_SYM("FORMAT-CONTROL",1263), VV[90], ECL_SYM("FORMAT-ARGUMENTS",1262), T0);
L2:;
  {
   volatile cl_object env1 = env0;
   CLV1 = env1 = CONS(ECL_NIL,env1);
   CLV2 = env1 = CONS(ECL_NEW_FRAME_ID(cl_env_copy),env1); /*  TAGBODY */
   {
    ecl_frs_push(cl_env_copy,ECL_CONS_CAR(CLV2));
    if (__ecl_frs_push_result) {
    if (cl_env_copy->values[0]==ecl_make_fixnum(0))goto L5;
    ecl_internal_error("GO found an inexistent tag");
    }
   }
   {
    cl_object v4;
    v4 = ecl_make_cclosure_va((cl_objectfn)LC74__lambda272,env1,Cblock,0);
    T0 = v4;
   }
   {
    cl_object v4;
    v4 = ecl_make_cclosure_va((cl_objectfn)LC75__lambda273,env1,Cblock,1);
    T1 = v4;
   }
   T2 = L3make_restart(6, ECL_SYM("NAME",1300), ECL_SYM("CONTINUE",252), ECL_SYM("FUNCTION",1264), T0, VV[18], T1);
   T3 = ecl_list1(T2);
   T4 = CONS(T3,ecl_symbol_value(ECL_SYM("*RESTART-CLUSTERS*",5)));
   ecl_bds_bind(cl_env_copy,ECL_SYM("*RESTART-CLUSTERS*",5),T4); /*  *RESTART-CLUSTERS* */
   {
    cl_object v4;
    T0 = ecl_car(v3arguments);
    T1 = ecl_cdr(v3arguments);
    T2 = L31coerce_to_condition(T0, T1, ECL_SYM("SIMPLE-ERROR",772), ECL_SYM("ASSERT",115));
    T3 = ECL_NIL;
    v4 = L31coerce_to_condition(T2, T3, ECL_SYM("SIMPLE-ERROR",772), ECL_SYM("ERROR",339));
    T0 = ecl_car(ecl_symbol_value(ECL_SYM("*RESTART-CLUSTERS*",5)));
    T1 = CONS(v4,T0);
    T2 = CONS(T1,ecl_symbol_value(VV[1]));
    ecl_bds_bind(cl_env_copy,VV[1],T2);           /*  *CONDITION-RESTARTS* */
    value0 = cl_error(1, v4);
    ecl_frs_pop(cl_env_copy);
    ecl_bds_unwind1(cl_env_copy);
    ecl_bds_unwind1(cl_env_copy);
    return value0;
   }
L5:;
   {
    cl_object v4place_name;
    cl_object v5;
    v4place_name = ECL_NIL;
    {
     cl_object v6;
     v6 = ECL_CONS_CAR(CLV0);
     if (ecl_unlikely(!ECL_LISTP(v6))) FEtype_error_list(v6);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v5 = v6;
    }
    {
     cl_object v6value;
     cl_object v7;
     v6value = ECL_NIL;
     {
      cl_object v8;
      v8 = v2values;
      if (ecl_unlikely(!ECL_LISTP(v8))) FEtype_error_list(v8);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v7 = v8;
     }
     {
      cl_object v8;
      cl_object v9;
      v8 = ecl_list1(ECL_NIL);
      v9 = v8;
L22:;
      if (!(ecl_endp(v5))) { goto L24; }
      goto L23;
L24:;
      v4place_name = _ecl_car(v5);
      {
       cl_object v10;
       v10 = _ecl_cdr(v5);
       if (ecl_unlikely(!ECL_LISTP(v10))) FEtype_error_list(v10);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v5 = v10;
      }
      if (!(ecl_endp(v7))) { goto L32; }
      goto L23;
L32:;
      v6value = _ecl_car(v7);
      {
       cl_object v10;
       v10 = _ecl_cdr(v7);
       if (ecl_unlikely(!ECL_LISTP(v10))) FEtype_error_list(v10);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v7 = v10;
      }
      {
       cl_object v10;
       v10 = v9;
       if (ecl_unlikely(ECL_ATOM(v10))) FEtype_error_cons(v10);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       T1 = v10;
      }
      T2 = L73assert_prompt(v4place_name, v6value);
      v9 = ecl_list1(T2);
      (ECL_CONS_CDR(T1)=v9,T1);
      goto L22;
L23:;
      T0 = ecl_cdr(v8);
      goto L11;
     }
    }
   }
L11:;
   value0 = cl_values_list(T0);
   ecl_frs_pop(cl_env_copy);
   return value0;
  }
 }
}
/*      closure LAMBDA272                                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC74__lambda272(cl_narg narg, ...)
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
/*      closure LAMBDA273                                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC75__lambda273(cl_narg narg, cl_object v1stream, ...)
{
 cl_object CLV0, CLV1, CLV2;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV2 = env0;
 CLV1 = _ecl_cdr(CLV2);
 CLV0 = _ecl_cdr(CLV1);                           /*  PLACE-NAMES     */
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=1)) FEwrong_num_arguments_anonym();
 {
TTL:
  value0 = L71assert_report(ECL_CONS_CAR(CLV0), v1stream);
  return value0;
 }
 }
}
/*      function definition for UNIVERSAL-ERROR-HANDLER               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L86universal_error_handler(cl_object volatile v1continue_string, cl_object volatile v2datum, cl_object volatile v3args)
{
 cl_object T0, T1, T2, T3, T4;
 cl_object volatile env0 = ECL_NIL;
 cl_object volatile CLV0, CLV1, CLV2, CLV3, CLV4, CLV5, CLV6, CLV7;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  env0 = ECL_NIL;
  CLV0 = env0 = CONS(v1continue_string,env0);     /*  CONTINUE-STRING */
  CLV1 = env0 = CONS(v3args,env0);                /*  ARGS            */
  {
   volatile cl_object v4condition;
   v4condition = L31coerce_to_condition(v2datum, ECL_CONS_CAR(CLV1), ECL_SYM("SIMPLE-ERROR",772), ECL_SYM("ERROR",339));
   if (!((ECL_T)==(ECL_CONS_CAR(CLV0)))) { goto L2; }
   {
    volatile cl_object env1 = env0;
    CLV2 = env1 = CONS(ECL_NIL,env1);
    {
     volatile cl_object env2 = env1;
     CLV3 = env2 = CONS(ECL_NEW_FRAME_ID(cl_env_copy),env2); /*  TAGBODY */
     {
      ecl_frs_push(cl_env_copy,ECL_CONS_CAR(CLV3));
      if (__ecl_frs_push_result) {
      if (cl_env_copy->values[0]==ecl_make_fixnum(0))goto L4;
      ecl_internal_error("GO found an inexistent tag");
      }
     }
     {
      cl_object v5;
      v5 = ecl_make_cclosure_va((cl_objectfn)LC76__lambda287,env2,Cblock,0);
      T0 = v5;
     }
     {
      cl_object v5;
      v5 = ecl_make_cfun((cl_objectfn_fixed)LC77__lambda288,ECL_NIL,Cblock,1);
      T1 = v5;
     }
     T2 = L3make_restart(6, ECL_SYM("NAME",1300), ECL_SYM("IGNORE",430), ECL_SYM("FUNCTION",1264), T0, VV[18], T1);
     T3 = ecl_list1(T2);
     T4 = CONS(T3,ecl_symbol_value(ECL_SYM("*RESTART-CLUSTERS*",5)));
     ecl_bds_bind(cl_env_copy,ECL_SYM("*RESTART-CLUSTERS*",5),T4); /*  *RESTART-CLUSTERS* */
     L30signal(1, v4condition);
     value0 = (cl_env_copy->function=(ECL_SYM("INVOKE-DEBUGGER",447)->symbol.gfdef))->cfun.entry(1, v4condition) /*  INVOKE-DEBUGGER */;
     ecl_frs_pop(cl_env_copy);
     ecl_bds_unwind1(cl_env_copy);
     return value0;
L4:;
     cl_env_copy->nvalues = 2;
     cl_env_copy->values[1] = ECL_T;
     cl_env_copy->values[0] = ECL_NIL;
     value0 = cl_env_copy->values[0];
     ecl_frs_pop(cl_env_copy);
     return value0;
    }
   }
L2:;
   if (!(ECL_STRINGP(ECL_CONS_CAR(CLV0)))) { goto L10; }
   {
    volatile cl_object env1 = env0;
    CLV2 = env1 = CONS(ECL_NIL,env1);
    {
     volatile cl_object env2 = env1;
     CLV3 = env2 = CONS(ECL_NEW_FRAME_ID(cl_env_copy),env2); /*  TAGBODY */
     {
      ecl_frs_push(cl_env_copy,ECL_CONS_CAR(CLV3));
      if (__ecl_frs_push_result) {
      if (cl_env_copy->values[0]==ecl_make_fixnum(0))goto L12;
      ecl_internal_error("GO found an inexistent tag");
      }
     }
     {
      cl_object v5;
      v5 = ecl_make_cclosure_va((cl_objectfn)LC78__lambda294,env2,Cblock,0);
      T0 = v5;
     }
     {
      cl_object v5;
      v5 = ecl_make_cclosure_va((cl_objectfn)LC79__lambda295,env2,Cblock,1);
      T1 = v5;
     }
     T2 = L3make_restart(6, ECL_SYM("NAME",1300), ECL_SYM("CONTINUE",252), ECL_SYM("FUNCTION",1264), T0, VV[18], T1);
     T3 = ecl_list1(T2);
     T4 = CONS(T3,ecl_symbol_value(ECL_SYM("*RESTART-CLUSTERS*",5)));
     ecl_bds_bind(cl_env_copy,ECL_SYM("*RESTART-CLUSTERS*",5),T4); /*  *RESTART-CLUSTERS* */
     L30signal(1, v4condition);
     value0 = (cl_env_copy->function=(ECL_SYM("INVOKE-DEBUGGER",447)->symbol.gfdef))->cfun.entry(1, v4condition) /*  INVOKE-DEBUGGER */;
     ecl_frs_pop(cl_env_copy);
     ecl_bds_unwind1(cl_env_copy);
     return value0;
L12:;
     cl_env_copy->nvalues = 2;
     cl_env_copy->values[1] = ECL_T;
     cl_env_copy->values[0] = ECL_NIL;
     value0 = cl_env_copy->values[0];
     ecl_frs_pop(cl_env_copy);
     return value0;
    }
   }
L10:;
   if (Null(ECL_CONS_CAR(CLV0))) { goto L18; }
   if (!(ECL_SYMBOLP(ECL_CONS_CAR(CLV0)))) { goto L18; }
   {
    volatile cl_object env1 = env0;
    CLV2 = env1 = CONS(ECL_NIL,env1);
    {
     volatile cl_object env2 = env1;
     CLV3 = env2 = CONS(ECL_NEW_FRAME_ID(cl_env_copy),env2); /*  TAGBODY */
     {
      ecl_frs_push(cl_env_copy,ECL_CONS_CAR(CLV3));
      if (__ecl_frs_push_result) {
      if (cl_env_copy->values[0]==ecl_make_fixnum(0))goto L21;
      ecl_internal_error("GO found an inexistent tag");
      }
     }
     {
      cl_object volatile v5;
      v5 = ecl_make_cclosure_va((cl_objectfn)LC80__lambda301,env2,Cblock,0);
      T0 = v5;
     }
     {
      cl_object volatile v5;
      v5 = ecl_make_cfun((cl_objectfn_fixed)LC81__lambda302,ECL_NIL,Cblock,1);
      T1 = v5;
     }
     T2 = L3make_restart(6, ECL_SYM("NAME",1300), VV[93], ECL_SYM("FUNCTION",1264), T0, VV[18], T1);
     T3 = ecl_list1(T2);
     T4 = CONS(T3,ecl_symbol_value(ECL_SYM("*RESTART-CLUSTERS*",5)));
     ecl_bds_bind(cl_env_copy,ECL_SYM("*RESTART-CLUSTERS*",5),T4); /*  *RESTART-CLUSTERS* */
     {
      cl_object volatile v6;                      /*  RV              */
      cl_object volatile v7;                      /*  USED-RESTART    */
      {
       volatile cl_object env3 = env2;
       CLV4 = env3 = CONS(ECL_NIL,env3);
       {
        volatile cl_object env4 = env3;
        CLV5 = env4 = CONS(ECL_NEW_FRAME_ID(cl_env_copy),env4); /*  TAGBODY */
        {
         ecl_frs_push(cl_env_copy,ECL_CONS_CAR(CLV5));
         if (__ecl_frs_push_result) {
         if (cl_env_copy->values[0]==ecl_make_fixnum(0))goto L26;
         ecl_internal_error("GO found an inexistent tag");
         }
        }
        {
         cl_object volatile v8;
         v8 = ecl_make_cclosure_va((cl_objectfn)LC82__lambda307,env4,Cblock,0);
         T0 = v8;
        }
        {
         cl_object volatile v8;
         v8 = ecl_make_cfun((cl_objectfn_fixed)LC83__lambda308,ECL_NIL,Cblock,1);
         T1 = v8;
        }
        T2 = L3make_restart(6, ECL_SYM("NAME",1300), ECL_SYM("IGNORE",430), ECL_SYM("FUNCTION",1264), T0, VV[18], T1);
        T3 = ecl_list1(T2);
        T4 = CONS(T3,ecl_symbol_value(ECL_SYM("*RESTART-CLUSTERS*",5)));
        ecl_bds_bind(cl_env_copy,ECL_SYM("*RESTART-CLUSTERS*",5),T4); /*  *RESTART-CLUSTERS* */
        {
         cl_object volatile v9;                   /*  RV              */
         cl_object volatile v10;                  /*  USED-RESTART    */
         {
          volatile cl_object env5 = env4;
          CLV6 = env5 = CONS(ECL_NIL,env5);
          {
          volatile cl_object env6 = env5;
          CLV7 = env6 = CONS(ECL_NEW_FRAME_ID(cl_env_copy),env6); /*  TAGBODY */
          {
          ecl_frs_push(cl_env_copy,ECL_CONS_CAR(CLV7));
          if (__ecl_frs_push_result) {
          if (cl_env_copy->values[0]==ecl_make_fixnum(0))goto L31;
          ecl_internal_error("GO found an inexistent tag");
          }
          }
          {
          cl_object v11;
          v11 = ecl_make_cclosure_va((cl_objectfn)LC84__lambda313,env6,Cblock,0);
          T0 = v11;
          }
          {
          cl_object v11;
          v11 = ecl_make_cclosure_va((cl_objectfn)LC85__lambda314,env6,Cblock,1);
          T1 = v11;
          }
          T2 = L3make_restart(6, ECL_SYM("NAME",1300), ECL_SYM("CONTINUE",252), ECL_SYM("FUNCTION",1264), T0, VV[18], T1);
          T3 = ecl_list1(T2);
          T4 = CONS(T3,ecl_symbol_value(ECL_SYM("*RESTART-CLUSTERS*",5)));
          ecl_bds_bind(cl_env_copy,ECL_SYM("*RESTART-CLUSTERS*",5),T4); /*  *RESTART-CLUSTERS* */
          L30signal(1, v4condition);
          value0 = (cl_env_copy->function=(ECL_SYM("INVOKE-DEBUGGER",447)->symbol.gfdef))->cfun.entry(1, v4condition) /*  INVOKE-DEBUGGER */;
          ecl_frs_pop(cl_env_copy);
          ecl_bds_unwind1(cl_env_copy);
          goto L30;
L31:;
          cl_env_copy->nvalues = 2;
          cl_env_copy->values[1] = ECL_T;
          cl_env_copy->values[0] = ECL_NIL;
          value0 = cl_env_copy->values[0];
          ecl_frs_pop(cl_env_copy);
          goto L30;
          }
         }
L30:;
         {
          const int v11 = cl_env_copy->nvalues;
          v9 = value0;
          cl_object v12;
          v12 = (v11<=1)? ECL_NIL : cl_env_copy->values[1];
          v10 = v12;
         }
         if (Null(v10)) { goto L37; }
         value0 = ECL_CONS_CAR(CLV0);
         cl_env_copy->nvalues = 1;
         ecl_frs_pop(cl_env_copy);
         ecl_bds_unwind1(cl_env_copy);
         goto L25;
L37:;
         value0 = v9;
         cl_env_copy->nvalues = 1;
         ecl_frs_pop(cl_env_copy);
         ecl_bds_unwind1(cl_env_copy);
         goto L25;
        }
L26:;
        cl_env_copy->nvalues = 2;
        cl_env_copy->values[1] = ECL_T;
        cl_env_copy->values[0] = ECL_NIL;
        value0 = cl_env_copy->values[0];
        ecl_frs_pop(cl_env_copy);
        goto L25;
       }
      }
L25:;
      {
       const int v8 = cl_env_copy->nvalues;
       v6 = value0;
       cl_object v9;
       v9 = (v8<=1)? ECL_NIL : cl_env_copy->values[1];
       v7 = v9;
      }
      if (Null(v7)) { goto L40; }
      value0 = ECL_T;
      cl_env_copy->nvalues = 1;
      ecl_frs_pop(cl_env_copy);
      ecl_bds_unwind1(cl_env_copy);
      return value0;
L40:;
      value0 = v6;
      cl_env_copy->nvalues = 1;
      ecl_frs_pop(cl_env_copy);
      ecl_bds_unwind1(cl_env_copy);
      return value0;
     }
L21:;
     cl_env_copy->nvalues = 2;
     cl_env_copy->values[1] = ECL_T;
     cl_env_copy->values[0] = ECL_NIL;
     value0 = cl_env_copy->values[0];
     ecl_frs_pop(cl_env_copy);
     return value0;
    }
   }
L18:;
   L30signal(1, v4condition);
   value0 = (cl_env_copy->function=(ECL_SYM("INVOKE-DEBUGGER",447)->symbol.gfdef))->cfun.entry(1, v4condition) /*  INVOKE-DEBUGGER */;
   return value0;
  }
 }
}
/*      closure LAMBDA287                                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC76__lambda287(cl_narg narg, ...)
{
 cl_object CLV0, CLV1, CLV2, CLV3;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV3 = env0;                                     /*  TAGBODY         */
 CLV2 = _ecl_cdr(CLV3);
 CLV1 = _ecl_cdr(CLV2);
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 {
  cl_object v1temp;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  v1temp = cl_grab_rest_args(args);
  ecl_va_end(args);
  ECL_CONS_CAR(CLV2) = v1temp;
  cl_go(ECL_CONS_CAR(CLV3),ecl_make_fixnum(0));
 }
 }
}
/*      local function LAMBDA288                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC77__lambda288(cl_object v1stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_format(2, v1stream, VV[91]);
  return value0;
 }
}
/*      closure LAMBDA294                                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC78__lambda294(cl_narg narg, ...)
{
 cl_object CLV0, CLV1, CLV2, CLV3;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV3 = env0;                                     /*  TAGBODY         */
 CLV2 = _ecl_cdr(CLV3);
 CLV1 = _ecl_cdr(CLV2);
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 {
  cl_object v1temp;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  v1temp = cl_grab_rest_args(args);
  ecl_va_end(args);
  ECL_CONS_CAR(CLV2) = v1temp;
  cl_go(ECL_CONS_CAR(CLV3),ecl_make_fixnum(0));
 }
 }
}
/*      closure LAMBDA295                                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC79__lambda295(cl_narg narg, cl_object v1stream, ...)
{
 cl_object T0;
 cl_object CLV0, CLV1, CLV2, CLV3;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV3 = env0;
 CLV2 = _ecl_cdr(CLV3);
 CLV1 = _ecl_cdr(CLV2);                           /*  ARGS            */
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=1)) FEwrong_num_arguments_anonym();
 {
TTL:
  T0 = cl_format(4, ECL_NIL, VV[55], ECL_CONS_CAR(CLV0), ECL_CONS_CAR(CLV1));
  value0 = cl_format(3, v1stream, VV[92], T0);
  return value0;
 }
 }
}
/*      closure LAMBDA301                                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC80__lambda301(cl_narg narg, ...)
{
 cl_object CLV0, CLV1, CLV2, CLV3;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV3 = env0;                                     /*  TAGBODY         */
 CLV2 = _ecl_cdr(CLV3);
 CLV1 = _ecl_cdr(CLV2);
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 {
  cl_object v1temp;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  v1temp = cl_grab_rest_args(args);
  ecl_va_end(args);
  ECL_CONS_CAR(CLV2) = v1temp;
  cl_go(ECL_CONS_CAR(CLV3),ecl_make_fixnum(0));
 }
 }
}
/*      local function LAMBDA302                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC81__lambda302(cl_object v1stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_format(2, v1stream, VV[94]);
  return value0;
 }
}
/*      closure LAMBDA307                                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC82__lambda307(cl_narg narg, ...)
{
 cl_object CLV0, CLV1, CLV2, CLV3, CLV4, CLV5;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV5 = env0;                                     /*  TAGBODY         */
 CLV4 = _ecl_cdr(CLV5);
 CLV3 = _ecl_cdr(CLV4);
 CLV2 = _ecl_cdr(CLV3);
 CLV1 = _ecl_cdr(CLV2);
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 {
  cl_object v1temp;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  v1temp = cl_grab_rest_args(args);
  ecl_va_end(args);
  ECL_CONS_CAR(CLV4) = v1temp;
  cl_go(ECL_CONS_CAR(CLV5),ecl_make_fixnum(0));
 }
 }
}
/*      local function LAMBDA308                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC83__lambda308(cl_object v1stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_format(2, v1stream, VV[91]);
  return value0;
 }
}
/*      closure LAMBDA313                                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC84__lambda313(cl_narg narg, ...)
{
 cl_object CLV0, CLV1, CLV2, CLV3, CLV4, CLV5, CLV6, CLV7;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV7 = env0;                                     /*  TAGBODY         */
 CLV6 = _ecl_cdr(CLV7);
 CLV5 = _ecl_cdr(CLV6);
 CLV4 = _ecl_cdr(CLV5);
 CLV3 = _ecl_cdr(CLV4);
 CLV2 = _ecl_cdr(CLV3);
 CLV1 = _ecl_cdr(CLV2);
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 {
  cl_object v1temp;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  v1temp = cl_grab_rest_args(args);
  ecl_va_end(args);
  ECL_CONS_CAR(CLV6) = v1temp;
  cl_go(ECL_CONS_CAR(CLV7),ecl_make_fixnum(0));
 }
 }
}
/*      closure LAMBDA314                                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC85__lambda314(cl_narg narg, cl_object v1stream, ...)
{
 cl_object CLV0, CLV1, CLV2, CLV3, CLV4, CLV5, CLV6, CLV7;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV7 = env0;
 CLV6 = _ecl_cdr(CLV7);
 CLV5 = _ecl_cdr(CLV6);
 CLV4 = _ecl_cdr(CLV5);
 CLV3 = _ecl_cdr(CLV4);
 CLV2 = _ecl_cdr(CLV3);
 CLV1 = _ecl_cdr(CLV2);
 CLV0 = _ecl_cdr(CLV1);                           /*  CONTINUE-STRING */
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=1)) FEwrong_num_arguments_anonym();
 {
TTL:
  value0 = cl_format(3, v1stream, VV[95], ECL_CONS_CAR(CLV0));
  return value0;
 }
 }
}
/*      function definition for STACK-ERROR-HANDLER                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L87stack_error_handler(cl_object volatile v1continue_string, cl_object volatile v2datum, cl_object volatile v3args)
{
 cl_object T0;
 cl_object volatile env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   volatile bool unwinding = FALSE;
   cl_index v4=ECL_STACK_INDEX(cl_env_copy),v5;
   ecl_frame_ptr next_fr;
   ecl_frs_push(cl_env_copy,ECL_PROTECT_TAG);
   if (__ecl_frs_push_result) {
     unwinding = TRUE; next_fr=cl_env_copy->nlj_fr;
   } else {
   cl_env_copy->values[0] = L86universal_error_handler(v1continue_string, v2datum, v3args);
   }
   ecl_frs_pop(cl_env_copy);
   v5=ecl_stack_push_values(cl_env_copy);
   T0 = cl_getf(2, v3args, ECL_SYM("TYPE",1346));
   si_reset_margin(T0);
   ecl_stack_pop_values(cl_env_copy,v5);
   if (unwinding) ecl_unwind(cl_env_copy,next_fr);
   ECL_STACK_SET_INDEX(cl_env_copy,v4);
   return cl_env_copy->values[0];
  }
 }
}
/*      function definition for TPL-CONTINUE-COMMAND                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L88tpl_continue_command(cl_narg narg, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  cl_object v1any;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  v1any = cl_grab_rest_args(args);
  ecl_va_end(args);
  T0 = (ECL_SYM("INVOKE-RESTART",448)->symbol.gfdef);
  value0 = cl_apply(3, T0, ECL_SYM("CONTINUE",252), v1any);
  return value0;
 }
}

#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/clos/conditions.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclYy2GIjZ7_TvI6lq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CLOS;CONDITIONS.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclYy2GIjZ7_TvI6lq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  ecl_cmp_defmacro(VV[99]);                       /*  UNIQUE-ID       */
  si_Xmake_special(ECL_SYM("*RESTART-CLUSTERS*",5));
  cl_set(ECL_SYM("*RESTART-CLUSTERS*",5),ECL_NIL);
  si_Xmake_special(VV[1]);
  cl_set(VV[1],ECL_NIL);
  (void)0; /* No entry created for COMPUTE-RESTARTS */
  ecl_cmp_defun(VV[102]);                         /*  RESTART-PRINT   */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  ecl_function_dispatch(cl_env_copy,VV[103])(15, ECL_SYM("RESTART",722), _ecl_static_0, ECL_NIL, ECL_NIL, VVtemp[1], VVtemp[2], VV[4], ECL_NIL, VV[3], ECL_NIL, VVtemp[3], ecl_make_fixnum(5), ECL_NIL, ECL_NIL, VV[5]) /*  DEFINE-STRUCTURE */;
  VV[6]= cl_find_class(1, ECL_SYM("RESTART",722));
  ecl_cmp_defun(VV[104]);                         /*  MAKE-RESTART    */
  {
   cl_object v1package;
   v1package = cl_symbol_package(VV[8]);
   if (Null(v1package)) { goto L32; }
   if (Null(si_package_locked_p(v1package))) { goto L32; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L32; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[6], ECL_SYM("PACKAGE",1311), v1package);
  }
L32:;
  {
   cl_object volatile v2;
   v2 = ecl_make_cfun((cl_objectfn_fixed)LC4__lambda18,ECL_NIL,Cblock,2);
   T0 = v2;
  }
  si_put_sysprop(VV[8], VV[9], T0);
  {
   cl_object v2package;
   v2package = cl_symbol_package(VV[10]);
   if (Null(v2package)) { goto L40; }
   if (Null(si_package_locked_p(v2package))) { goto L40; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L40; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[7], ECL_SYM("PACKAGE",1311), v2package);
  }
L40:;
  {
   cl_object volatile v3;
   v3 = ecl_make_cfun((cl_objectfn_fixed)LC5__lambda22,ECL_NIL,Cblock,2);
   T0 = v3;
  }
  si_put_sysprop(VV[10], VV[9], T0);
  {
   cl_object v3package;
   v3package = cl_symbol_package(VV[11]);
   if (Null(v3package)) { goto L48; }
   if (Null(si_package_locked_p(v3package))) { goto L48; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L48; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[8], ECL_SYM("PACKAGE",1311), v3package);
  }
L48:;
  {
   cl_object volatile v4;
   v4 = ecl_make_cfun((cl_objectfn_fixed)LC6__lambda26,ECL_NIL,Cblock,2);
   T0 = v4;
  }
  si_put_sysprop(VV[11], VV[9], T0);
  {
   cl_object v4package;
   v4package = cl_symbol_package(VV[12]);
   if (Null(v4package)) { goto L56; }
   if (Null(si_package_locked_p(v4package))) { goto L56; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L56; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[9], ECL_SYM("PACKAGE",1311), v4package);
  }
L56:;
  {
   cl_object volatile v5;
   v5 = ecl_make_cfun((cl_objectfn_fixed)LC7__lambda30,ECL_NIL,Cblock,2);
   T0 = v5;
  }
  si_put_sysprop(VV[12], VV[9], T0);
  {
   cl_object v5package;
   v5package = cl_symbol_package(ECL_SYM("RESTART-NAME",725));
   if (Null(v5package)) { goto L64; }
   if (Null(si_package_locked_p(v5package))) { goto L64; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L64; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[10], ECL_SYM("PACKAGE",1311), v5package);
  }
L64:;
  {
   cl_object volatile v6;
   v6 = ecl_make_cfun((cl_objectfn_fixed)LC8__lambda34,ECL_NIL,Cblock,2);
   T0 = v6;
  }
  si_put_sysprop(ECL_SYM("RESTART-NAME",725), VV[9], T0);
 }
  (void)0; /* No entry created for RESTART-REPORT */
  (void)0; /* No entry created for BIND-SIMPLE-RESTARTS */
  (void)0; /* No entry created for BIND-SIMPLE-HANDLERS */
  ecl_cmp_defmacro(VV[110]);                      /*  RESTART-BIND    */
  (void)0; /* No entry created for FIND-RESTART */
  (void)0; /* No entry created for FIND-RESTART-NEVER-FAIL */
  (void)0; /* No entry created for INVOKE-RESTART */
  (void)0; /* No entry created for INVOKE-RESTART-INTERACTIVELY */
  ecl_cmp_defmacro(VV[111]);                      /*  RESTART-CASE    */
  ecl_cmp_defmacro(VV[115]);                      /*  WITH-SIMPLE-RESTART */
  ecl_cmp_defmacro(VV[116]);                      /*  WITH-CONDITION-RESTARTS */
  clos_load_defclass(ECL_SYM("CONDITION",250), ECL_NIL, VVtemp[11], ECL_NIL);
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC24print_object,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[117])(5, ECL_SYM("PRINT-OBJECT",963), ECL_NIL, VVtemp[12], VVtemp[13], T0) /*  INSTALL-METHOD */;
 }
  ecl_cmp_defmacro(VV[118]);                      /*  DEFINE-CONDITION */
  (void)0; /* No entry created for FIND-SUBCLASSES-OF-TYPE */
  (void)0; /* No entry created for MAKE-CONDITION */
  si_Xmake_special(ECL_SYM("*HANDLER-CLUSTERS*",6));
  cl_set(ECL_SYM("*HANDLER-CLUSTERS*",6),ECL_NIL);
  ecl_cmp_defmacro(VV[119]);                      /*  HANDLER-BIND    */
  ecl_cmp_defun(VV[120]);                         /*  SIGNAL          */
  ecl_cmp_defun(VV[121]);                         /*  COERCE-TO-CONDITION */
  ecl_cmp_defun(VV[122]);                         /*  BREAK           */
  ecl_cmp_defun(VV[123]);                         /*  WARN            */
  clos_load_defclass(ECL_SYM("WARNING",906), VV[37], ECL_NIL, ECL_NIL);
  clos_load_defclass(ECL_SYM("SERIOUS-CONDITION",744), VV[37], ECL_NIL, ECL_NIL);
  clos_load_defclass(ECL_SYM("ERROR",339), VVtemp[14], ECL_NIL, ECL_NIL);
 {
  cl_object T0, T1, T2;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC39__lambda200,ECL_NIL,Cblock,0);
   T0 = v1;
  }
  T1 = cl_listX(3, ECL_SYM("INITFUNCTION",999), T0, VVtemp[15]);
  T2 = cl_list(3, T1, VVtemp[16], VVtemp[17]);
  clos_load_defclass(ECL_SYM("SIMPLE-CONDITION",769), VV[37], T2, ECL_NIL);
 }
  clos_load_defclass(ECL_SYM("SIMPLE-WARNING",778), VVtemp[18], ECL_NIL, ECL_NIL);
  clos_load_defclass(ECL_SYM("STYLE-WARNING",829), VVtemp[19], ECL_NIL, ECL_NIL);
  clos_load_defclass(VV[56], VVtemp[20], ECL_NIL, ECL_NIL);
  clos_load_defclass(ECL_SYM("SIMPLE-ERROR",772), VVtemp[21], ECL_NIL, ECL_NIL);
  clos_load_defclass(ECL_SYM("STORAGE-CONDITION",799), VVtemp[14], ECL_NIL, ECL_NIL);
  clos_load_defclass(ECL_SYM("SEGMENTATION-VIOLATION",1732), VVtemp[22], VVtemp[23], ECL_NIL);
 {
  cl_object T0, T1, T2;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC41__lambda202,ECL_NIL,Cblock,0);
   T0 = v1;
  }
  T1 = cl_listX(3, ECL_SYM("INITFUNCTION",999), T0, VVtemp[24]);
  T2 = cl_list(3, T1, VVtemp[25], VVtemp[26]);
  clos_load_defclass(ECL_SYM("STACK-OVERFLOW",1720), VVtemp[22], T2, ECL_NIL);
 }
  clos_load_defclass(ECL_SYM("STORAGE-EXHAUSTED",1719), VVtemp[22], VVtemp[27], ECL_NIL);
  clos_load_defclass(ECL_SYM("ILLEGAL-INSTRUCTION",1728), VVtemp[14], VVtemp[28], ECL_NIL);
 {
  cl_object T0, T1, T2, T3;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC43__lambda204,ECL_NIL,Cblock,0);
   T0 = v1;
  }
  T1 = cl_listX(3, ECL_SYM("INITFUNCTION",999), T0, VVtemp[29]);
  T2 = cl_list(2, T1, VVtemp[30]);
  T3 = cl_list(2, ECL_SYM("DOCUMENTATION",1244), VVtemp[31]);
  clos_load_defclass(ECL_SYM("TIMEOUT",1428), VVtemp[14], T2, T3);
 }
 {
  cl_object T0, T1, T2;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC45__lambda206,ECL_NIL,Cblock,0);
   T0 = v1;
  }
  T1 = cl_listX(3, ECL_SYM("INITFUNCTION",999), T0, VVtemp[32]);
  T2 = cl_list(2, T1, VVtemp[33]);
  clos_load_defclass(ECL_SYM("UNIX-SIGNAL-RECEIVED",1885), VV[37], T2, ECL_NIL);
 }
 {
  cl_object T0, T1, T2;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC47__lambda208,ECL_NIL,Cblock,0);
   T0 = v1;
  }
  T1 = cl_listX(3, ECL_SYM("INITFUNCTION",999), T0, VVtemp[35]);
  T2 = cl_list(3, T1, VVtemp[36], VVtemp[37]);
  clos_load_defclass(ECL_SYM("TYPE-ERROR",872), VVtemp[34], T2, ECL_NIL);
 }
  clos_load_defclass(ECL_SYM("SIMPLE-TYPE-ERROR",775), VVtemp[38], ECL_NIL, ECL_NIL);
 {
  cl_object T0, T1, T2;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC49__lambda210,ECL_NIL,Cblock,0);
   T0 = v1;
  }
  T1 = cl_listX(3, ECL_SYM("INITFUNCTION",999), T0, VVtemp[40]);
  T2 = cl_list(3, T1, VVtemp[41], VVtemp[42]);
  clos_load_defclass(VV[63], VVtemp[39], T2, ECL_NIL);
 }
  clos_load_defclass(ECL_SYM("PROGRAM-ERROR",674), VVtemp[34], ECL_NIL, ECL_NIL);
  clos_load_defclass(ECL_SYM("CONTROL-ERROR",257), VVtemp[34], ECL_NIL, ECL_NIL);
  clos_load_defclass(ECL_SYM("STREAM-ERROR",803), VVtemp[34], VVtemp[43], ECL_NIL);
 {
  cl_object T0, T1, T2;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC51__lambda212,ECL_NIL,Cblock,0);
   T0 = v1;
  }
  T1 = cl_listX(3, ECL_SYM("INITFUNCTION",999), T0, VVtemp[45]);
  T2 = ecl_list1(T1);
  clos_load_defclass(ECL_SYM("END-OF-FILE",331), VVtemp[44], T2, ECL_NIL);
 }
 {
  cl_object T0, T1, T2;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC53__lambda214,ECL_NIL,Cblock,0);
   T0 = v1;
  }
  T1 = cl_listX(3, ECL_SYM("INITFUNCTION",999), T0, VVtemp[46]);
  T2 = cl_list(2, T1, VVtemp[47]);
  clos_load_defclass(ECL_SYM("FILE-ERROR",355), VVtemp[34], T2, ECL_NIL);
 }
  clos_load_defclass(ECL_SYM("PACKAGE-ERROR",620), VVtemp[34], VVtemp[48], ECL_NIL);
  clos_load_defclass(ECL_SYM("CELL-ERROR",202), VVtemp[34], VVtemp[49], ECL_NIL);
 {
  cl_object T0, T1, T2;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC55__lambda216,ECL_NIL,Cblock,0);
   T0 = v1;
  }
  T1 = cl_listX(3, ECL_SYM("INITFUNCTION",999), T0, VVtemp[51]);
  T2 = ecl_list1(T1);
  clos_load_defclass(ECL_SYM("UNBOUND-VARIABLE",880), VVtemp[50], T2, ECL_NIL);
 }
 {
  cl_object T0, T1, T2;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC57__lambda218,ECL_NIL,Cblock,0);
   T0 = v1;
  }
  T1 = cl_listX(3, ECL_SYM("INITFUNCTION",999), T0, VVtemp[52]);
  T2 = cl_list(2, T1, VVtemp[53]);
  clos_load_defclass(ECL_SYM("UNBOUND-SLOT",878), VVtemp[50], T2, ECL_NIL);
 }
 {
  cl_object T0, T1, T2;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC59__lambda220,ECL_NIL,Cblock,0);
   T0 = v1;
  }
  T1 = cl_listX(3, ECL_SYM("INITFUNCTION",999), T0, VVtemp[54]);
  T2 = ecl_list1(T1);
  clos_load_defclass(ECL_SYM("UNDEFINED-FUNCTION",881), VVtemp[50], T2, ECL_NIL);
 }
  clos_load_defclass(ECL_SYM("ARITHMETIC-ERROR",95), VVtemp[34], VVtemp[55], ECL_NIL);
  clos_load_defclass(ECL_SYM("DIVISION-BY-ZERO",308), VVtemp[56], ECL_NIL, ECL_NIL);
  clos_load_defclass(ECL_SYM("FLOATING-POINT-OVERFLOW",383), VVtemp[56], ECL_NIL, ECL_NIL);
  clos_load_defclass(ECL_SYM("FLOATING-POINT-UNDERFLOW",384), VVtemp[56], ECL_NIL, ECL_NIL);
  clos_load_defclass(ECL_SYM("FLOATING-POINT-INEXACT",381), VVtemp[56], ECL_NIL, ECL_NIL);
  clos_load_defclass(ECL_SYM("FLOATING-POINT-INVALID-OPERATION",382), VVtemp[56], ECL_NIL, ECL_NIL);
  clos_load_defclass(VV[70], VVtemp[57], VVtemp[58], ECL_NIL);
 {
  cl_object T0, T1, T2;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC61__lambda222,ECL_NIL,Cblock,0);
   T0 = v1;
  }
  T1 = cl_listX(3, ECL_SYM("INITFUNCTION",999), T0, VVtemp[59]);
  T2 = cl_list(2, T1, VVtemp[60]);
  clos_load_defclass(ECL_SYM("PRINT-NOT-READABLE",665), VVtemp[34], T2, ECL_NIL);
 }
  clos_load_defclass(ECL_SYM("PARSE-ERROR",629), VVtemp[34], ECL_NIL, ECL_NIL);
  clos_load_defclass(ECL_SYM("READER-ERROR",701), VVtemp[61], ECL_NIL, ECL_NIL);
 {
  cl_object T0, T1, T2, T3, T4, T5, T6;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC63__lambda224,ECL_NIL,Cblock,0);
   T0 = v1;
  }
  T1 = cl_listX(3, ECL_SYM("INITFUNCTION",999), T0, VVtemp[63]);
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC64__lambda226,ECL_NIL,Cblock,0);
   T2 = v1;
  }
  T3 = cl_listX(3, ECL_SYM("INITFUNCTION",999), T2, VVtemp[66]);
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC65__lambda227,ECL_NIL,Cblock,0);
   T4 = v1;
  }
  T5 = cl_listX(3, ECL_SYM("INITFUNCTION",999), T4, VVtemp[67]);
  T6 = cl_list(6, T1, VVtemp[64], VVtemp[65], T3, T5, VVtemp[68]);
  clos_load_defclass(ECL_SYM("FORMAT-ERROR",1078), VVtemp[62], T6, ECL_NIL);
 }
  clos_load_defclass(ECL_SYM("INTERACTIVE-INTERRUPT",1718), VVtemp[14], VVtemp[69], ECL_NIL);
  (void)0; /* No entry created for SIGNAL-SIMPLE-ERROR */
  ecl_cmp_defmacro(VV[129]);                      /*  HANDLER-CASE    */
  ecl_cmp_defmacro(VV[130]);                      /*  IGNORE-ERRORS   */
  (void)0; /* No entry created for ABORT */
  (void)0; /* No entry created for CONTINUE */
  (void)0; /* No entry created for MUFFLE-WARNING */
  (void)0; /* No entry created for STORE-VALUE */
  (void)0; /* No entry created for USE-VALUE */
  (void)0; /* No entry created for ASSERT-REPORT */
  (void)0; /* No entry created for ASSERT-PROMPT */
  (void)0; /* No entry created for ASSERT-FAILURE */
  ecl_cmp_defun(VV[131]);                         /*  UNIVERSAL-ERROR-HANDLER */
  ecl_cmp_defun(VV[132]);                         /*  STACK-ERROR-HANDLER */
  ecl_cmp_defun(VV[133]);                         /*  TPL-CONTINUE-COMMAND */
}
