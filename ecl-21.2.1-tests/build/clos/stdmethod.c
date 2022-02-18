/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CLOS;STDMETHOD.LSP                                */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/clos/stdmethod.eclh"
/*      function definition for FUNCTION-KEYWORDS                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L1function_keywords(cl_object v1method)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;                                  /*  KEY-FLAG        */
   cl_object v4;                                  /*  KEYWORDS        */
   T0 = cl_slot_value(v1method, VV[0]);
   value0 = si_process_lambda_list(T0, ECL_SYM("FUNCTION",398));
   {
    const int v5 = cl_env_copy->nvalues;
    cl_object v6;
    v6 = (v5<=3)? ECL_NIL : cl_env_copy->values[3];
    v3 = v6;
    v6 = (v5<=4)? ECL_NIL : cl_env_copy->values[4];
    v4 = v6;
   }
   if (Null(v3)) { goto L2; }
   {
    cl_object v5output;
    cl_object v6l;
    v5output = ECL_NIL;
    v6l = ecl_cdr(v4);
    goto L8;
L7:;
    T0 = ecl_car(v6l);
    v5output = CONS(T0,v5output);
    v6l = ecl_cddddr(v6l);
L8:;
    if (ecl_endp(v6l)) { goto L14; }
    goto L7;
L14:;
    value0 = v5output;
    cl_env_copy->nvalues = 1;
    return value0;
   }
L2:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function SHARED-INITIALIZE                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC2shared_initialize(cl_narg narg, cl_object v1method, cl_object v2slot_names, ...)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 {
  cl_object v3specializers;
  cl_object v4spec_supplied_p;
  cl_object v5lambda_list;
  cl_object v6lambda_supplied_p;
  cl_object v7generic_function;
  ecl_va_list args; ecl_va_start(args,v2slot_names,narg,2);
  {
   cl_object keyvars[6];
   cl_parse_key(args,3,LC2shared_initializekeys,keyvars,NULL,TRUE);
   ecl_va_end(args);
   v3specializers = keyvars[0];
   v4spec_supplied_p = keyvars[3];
   v5lambda_list = keyvars[1];
   v6lambda_supplied_p = keyvars[4];
   v7generic_function = keyvars[2];
  }
  if (Null(v2slot_names)) { goto L1; }
  if ((v4spec_supplied_p)!=ECL_NIL) { goto L3; }
  cl_error(1, VV[2]);
L3:;
  if ((v6lambda_supplied_p)!=ECL_NIL) { goto L5; }
  cl_error(1, VV[3]);
L5:;
  T0 = si_process_lambda_list(v5lambda_list, ECL_SYM("METHOD",956));
  T1 = ecl_car(T0);
  {
   cl_fixnum v8;
   v8 = ecl_length(v3specializers);
   if (ecl_number_equalp(T1,ecl_make_fixnum(v8))) { goto L1; }
  }
  cl_error(2, VV[4], v5lambda_list);
L1:;
  if (Null(v4spec_supplied_p)) { goto L8; }
  {
   cl_object v8s;
   cl_object v9;
   v8s = ECL_NIL;
   {
    cl_object v10;
    v10 = v3specializers;
    if (ecl_unlikely(!ECL_LISTP(v10))) FEtype_error_list(v10);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v9 = v10;
   }
L14:;
   if (!(ecl_endp(v9))) { goto L16; }
   goto L15;
L16:;
   v8s = _ecl_car(v9);
   {
    cl_object v10;
    v10 = _ecl_cdr(v9);
    if (ecl_unlikely(!ECL_LISTP(v10))) FEtype_error_list(v10);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v9 = v10;
   }
   if ((si_of_class_p(2, v8s, ECL_SYM("SPECIALIZER",1617)))!=ECL_NIL) { goto L24; }
   cl_error(2, VV[5], v8s);
L24:;
   goto L14;
L15:;
  }
L8:;
  if (Null(ecl_symbol_value(ECL_SYM("*NEXT-METHODS*",1536)))) { goto L30; }
  T0 = ecl_car(ecl_symbol_value(ECL_SYM("*NEXT-METHODS*",1536)));
  T1 = ecl_cdr(ecl_symbol_value(ECL_SYM("*NEXT-METHODS*",1536)));
  v1method = ecl_function_dispatch(cl_env_copy,T0)(2, ecl_symbol_value(ECL_SYM(".COMBINED-METHOD-ARGS.",1534)), T1);
  goto L29;
L30:;
  v1method = cl_error(1, VV[6]);
L29:;
  {
   cl_object v8;
   T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("METHOD-LAMBDA-LIST",1594))(1, v1method) /*  METHOD-LAMBDA-LIST */;
   v8 = ecl_function_dispatch(cl_env_copy,VV[15])(1, T0) /*  COMPUTE-METHOD-KEYWORDS */;
   (cl_env_copy->function=ECL_CONS_CAR(VV[16]))->cfun.entry(2, v8, v1method) /*  (SETF METHOD-KEYWORDS) */;
  }
  value0 = v1method;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for INTERN-EQL-SPECIALIZER                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L3intern_eql_specializer(cl_object volatile v1object)
{
 cl_object T0;
 cl_object volatile env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   volatile cl_object v2table;
   v2table = ecl_symbol_value(VV[8]);
   {
    volatile cl_object v3;
    volatile cl_object v4;
    volatile cl_fixnum v5;
    v3 = ecl_symbol_value(VV[7]);
    v4 = mp_lock_owner(v3);
    v5 = ecl_fixnum(mp_lock_count(v3));
    {
     struct ecl_stack_frame _ecl_inner_frame_aux;
     volatile cl_object _ecl_inner_frame = ecl_stack_frame_open(cl_env_copy,(cl_object)&_ecl_inner_frame_aux,0);
     {
      volatile cl_object v6;
      v6 = _ecl_inner_frame;
      {
       volatile cl_object v7;
       v7 = ecl_symbol_value(ECL_SYM("*INTERRUPTS-ENABLED*",7));
       ecl_bds_bind(cl_env_copy,ECL_SYM("*INTERRUPTS-ENABLED*",7),ECL_NIL); /*  *INTERRUPTS-ENABLED* */
       ecl_bds_bind(cl_env_copy,ECL_SYM("*ALLOW-WITH-INTERRUPTS*",1793),ECL_NIL); /*  *ALLOW-WITH-INTERRUPTS* */
       {
        volatile bool unwinding = FALSE;
        cl_index v8=ECL_STACK_INDEX(cl_env_copy),v9;
        ecl_frame_ptr next_fr;
        ecl_frs_push(cl_env_copy,ECL_PROTECT_TAG);
        if (__ecl_frs_push_result) {
          unwinding = TRUE; next_fr=cl_env_copy->nlj_fr;
        } else {
        ecl_bds_bind(cl_env_copy,ECL_SYM("*INTERRUPTS-ENABLED*",7),v7); /*  *INTERRUPTS-ENABLED* */
        mp_get_lock(1, v3);
        value0 = ecl_gethash_safe(v1object,v2table,ECL_NIL);
        if ((value0)!=ECL_NIL) { goto L13; }
        T0 = (cl_env_copy->function=(ECL_SYM("MAKE-INSTANCE",951)->symbol.gfdef))->cfun.entry(3, ECL_SYM("EQL-SPECIALIZER",1570), ECL_SYM("OBJECT",1305), v1object) /*  MAKE-INSTANCE */;
        cl_env_copy->values[0] = si_hash_set(v1object, v2table, T0);
        ecl_bds_unwind1(cl_env_copy);
        goto L10;
L13:;
        cl_env_copy->values[0] = value0;
        cl_env_copy->nvalues = 1;
        ecl_bds_unwind1(cl_env_copy);
        goto L10;
L10:;
        }
        ecl_frs_pop(cl_env_copy);
        v9=ecl_stack_push_values(cl_env_copy);
        {
         cl_object v10;
         v10 = ecl_symbol_value(ECL_SYM("*CURRENT-PROCESS*",1432));
         T0 = mp_lock_owner(v3);
         if (!((v10)==(T0))) { goto L15; }
         if (!((v4)==(v10))) { goto L19; }
         {
          cl_fixnum v11;
          v11 = ((v3)->lock.counter);
          if (!((v11)>(v5))) { goto L15; }
          goto L17;
         }
L19:;
L17:;
         mp_giveup_lock(v3);
        }
L15:;
        ecl_stack_pop_values(cl_env_copy,v9);
        if (unwinding) ecl_unwind(cl_env_copy,next_fr);
        ECL_STACK_SET_INDEX(cl_env_copy,v8);
        ecl_bds_unwind1(cl_env_copy);
        ecl_bds_unwind1(cl_env_copy);
       }
      }
      ecl_stack_frame_push_values(v6);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      if (Null(ecl_symbol_value(ECL_SYM("*INTERRUPTS-ENABLED*",7)))) { goto L21; }
      si_check_pending_interrupts();
L21:;cl_env_copy->values[0]=ecl_stack_frame_pop_values(v6);
      value0 = cl_env_copy->values[0];
     }
     ecl_stack_frame_close(_ecl_inner_frame);
    }
    return value0;
   }
  }
 }
}
/*      local function ADD-DIRECT-METHOD                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC4add_direct_method(cl_object v1spec, cl_object v2method)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3cell;
   v3cell = ecl_function_dispatch(cl_env_copy,VV[19])(1, v1spec) /*  SPECIALIZER-METHOD-HOLDER */;
   {
    cl_object v4;
    v4 = ECL_NIL;
    {
     cl_object v5;
     v5 = v3cell;
     if (ecl_unlikely(ECL_ATOM(v5))) FEtype_error_cons(v5);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     T0 = v5;
    }
    (ECL_CONS_CDR(T0)=v4,T0);
   }
   {
    cl_object v4;
    T0 = ecl_car(v3cell);
    T1 = (ECL_SYM("EQ",335)->symbol.gfdef);
    v4 = cl_adjoin(4, v2method, T0, ECL_SYM("TEST",1343), T1);
    {
     cl_object v5;
     v5 = v3cell;
     if (ecl_unlikely(ECL_ATOM(v5))) FEtype_error_cons(v5);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     T0 = v5;
    }
    (ECL_CONS_CAR(T0)=v4,T0);
   }
  }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 0;
  return value0;
 }
}
/*      local function REMOVE-DIRECT-METHOD                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC5remove_direct_method(cl_object v1spec, cl_object v2method)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3cell;
   v3cell = ecl_function_dispatch(cl_env_copy,VV[19])(1, v1spec) /*  SPECIALIZER-METHOD-HOLDER */;
   {
    cl_object v4;
    v4 = ECL_NIL;
    {
     cl_object v5;
     v5 = v3cell;
     if (ecl_unlikely(ECL_ATOM(v5))) FEtype_error_cons(v5);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     T0 = v5;
    }
    (ECL_CONS_CDR(T0)=v4,T0);
   }
   {
    cl_object v4;
    T0 = ecl_car(v3cell);
    T1 = (ECL_SYM("EQ",335)->symbol.gfdef);
    v4 = cl_delete(4, v2method, T0, ECL_SYM("TEST",1343), T1);
    {
     cl_object v5;
     v5 = v3cell;
     if (ecl_unlikely(ECL_ATOM(v5))) FEtype_error_cons(v5);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     T0 = v5;
    }
    (ECL_CONS_CAR(T0)=v4,T0);
   }
  }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 0;
  return value0;
 }
}
/*      local function REMOVE-DIRECT-METHOD                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC6remove_direct_method(cl_object volatile v1spec, cl_object volatile v2method)
{
 cl_object T0, T1;
 cl_object volatile env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   volatile cl_object v3;
   volatile cl_object v4;
   volatile cl_fixnum v5;
   v3 = ecl_symbol_value(VV[7]);
   v4 = mp_lock_owner(v3);
   v5 = ecl_fixnum(mp_lock_count(v3));
   {
    struct ecl_stack_frame _ecl_inner_frame_aux;
    volatile cl_object _ecl_inner_frame = ecl_stack_frame_open(cl_env_copy,(cl_object)&_ecl_inner_frame_aux,0);
    {
     volatile cl_object v6;
     v6 = _ecl_inner_frame;
     {
      volatile cl_object v7;
      v7 = ecl_symbol_value(ECL_SYM("*INTERRUPTS-ENABLED*",7));
      ecl_bds_bind(cl_env_copy,ECL_SYM("*INTERRUPTS-ENABLED*",7),ECL_NIL); /*  *INTERRUPTS-ENABLED* */
      ecl_bds_bind(cl_env_copy,ECL_SYM("*ALLOW-WITH-INTERRUPTS*",1793),ECL_NIL); /*  *ALLOW-WITH-INTERRUPTS* */
      {
       volatile bool unwinding = FALSE;
       cl_index v8=ECL_STACK_INDEX(cl_env_copy),v9;
       ecl_frame_ptr next_fr;
       ecl_frs_push(cl_env_copy,ECL_PROTECT_TAG);
       if (__ecl_frs_push_result) {
         unwinding = TRUE; next_fr=cl_env_copy->nlj_fr;
       } else {
       ecl_bds_bind(cl_env_copy,ECL_SYM("*INTERRUPTS-ENABLED*",7),v7); /*  *INTERRUPTS-ENABLED* */
       mp_get_lock(1, v3);
       if (Null(ecl_symbol_value(ECL_SYM("*NEXT-METHODS*",1536)))) { goto L13; }
       T0 = ecl_car(ecl_symbol_value(ECL_SYM("*NEXT-METHODS*",1536)));
       T1 = ecl_cdr(ecl_symbol_value(ECL_SYM("*NEXT-METHODS*",1536)));
       ecl_function_dispatch(cl_env_copy,T0)(2, ecl_symbol_value(ECL_SYM(".COMBINED-METHOD-ARGS.",1534)), T1);
       goto L12;
L13:;
       cl_error(1, VV[6]);
L12:;
       if ((ecl_function_dispatch(cl_env_copy,ECL_SYM("SPECIALIZER-DIRECT-METHODS",1619))(1, v1spec) /*  SPECIALIZER-DIRECT-METHODS */)!=ECL_NIL) { goto L16; }
       cl_env_copy->values[0] = cl_remhash(v1spec, ecl_symbol_value(VV[8]));
       ecl_bds_unwind1(cl_env_copy);
       goto L10;
L16:;
       cl_env_copy->values[0] = ECL_NIL;
       cl_env_copy->nvalues = 1;
       ecl_bds_unwind1(cl_env_copy);
L10:;
       }
       ecl_frs_pop(cl_env_copy);
       v9=ecl_stack_push_values(cl_env_copy);
       {
        cl_object v10;
        v10 = ecl_symbol_value(ECL_SYM("*CURRENT-PROCESS*",1432));
        T0 = mp_lock_owner(v3);
        if (!((v10)==(T0))) { goto L18; }
        if (!((v4)==(v10))) { goto L22; }
        {
         cl_fixnum v11;
         v11 = ((v3)->lock.counter);
         if (!((v11)>(v5))) { goto L18; }
         goto L20;
        }
L22:;
L20:;
        mp_giveup_lock(v3);
       }
L18:;
       ecl_stack_pop_values(cl_env_copy,v9);
       if (unwinding) ecl_unwind(cl_env_copy,next_fr);
       ECL_STACK_SET_INDEX(cl_env_copy,v8);
       ecl_bds_unwind1(cl_env_copy);
       ecl_bds_unwind1(cl_env_copy);
      }
     }
     ecl_stack_frame_push_values(v6);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     if (Null(ecl_symbol_value(ECL_SYM("*INTERRUPTS-ENABLED*",7)))) { goto L24; }
     si_check_pending_interrupts();
L24:;cl_env_copy->values[0]=ecl_stack_frame_pop_values(v6);
    }
    ecl_stack_frame_close(_ecl_inner_frame);
   }
  }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 0;
  return value0;
 }
}
/*      local function SPECIALIZER-DIRECT-METHODS                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC7specializer_direct_methods(cl_object v1spec)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,VV[19])(1, v1spec) /*  SPECIALIZER-METHOD-HOLDER */;
  value0 = ecl_car(T0);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function SPECIALIZER-DIRECT-GENERIC-FUNCTIONS           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC8specializer_direct_generic_functions(cl_object v1spec)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2cell;
   v2cell = ecl_function_dispatch(cl_env_copy,VV[19])(1, v1spec) /*  SPECIALIZER-METHOD-HOLDER */;
   value0 = ecl_cdr(v2cell);
   if ((value0)!=ECL_NIL) { goto L3; }
   if (Null(ecl_car(v2cell))) { goto L5; }
   {
    cl_object v3acc;
    v3acc = ECL_NIL;
    {
     cl_object v4;
     cl_object v5method;
     cl_object v6;
     v4 = ecl_car(v2cell);
     v5method = ECL_NIL;
     {
      cl_object v7;
      v7 = v4;
      if (ecl_unlikely(!ECL_LISTP(v7))) FEtype_error_list(v7);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v6 = v7;
     }
L13:;
     if (!(ecl_endp(v6))) { goto L15; }
     goto L14;
L15:;
     v5method = _ecl_car(v6);
     {
      cl_object v7;
      v7 = _ecl_cdr(v6);
      if (ecl_unlikely(!ECL_LISTP(v7))) FEtype_error_list(v7);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v6 = v7;
     }
     T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("METHOD-GENERIC-FUNCTION",1593))(1, v5method) /*  METHOD-GENERIC-FUNCTION */;
     T1 = (ECL_SYM("EQ",335)->symbol.gfdef);
     v3acc = cl_adjoin(4, T0, v3acc, ECL_SYM("TEST",1343), T1);
     goto L13;
L14:;
     {
      cl_object v7;
      v7 = cl_nreverse(v3acc);
      {
       cl_object v8;
       v8 = v2cell;
       if (ecl_unlikely(ECL_ATOM(v8))) FEtype_error_cons(v8);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       T0 = v8;
      }
      (ECL_CONS_CDR(T0)=v7,T0);
      value0 = v7;
      cl_env_copy->nvalues = 1;
      return value0;
     }
    }
   }
L5:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L3:;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}

#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/clos/stdmethod.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclmTYbaFa7_AXGmqq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CLOS;STDMETHOD.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclmTYbaFa7_AXGmqq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  ecl_cmp_defun(VV[10]);                          /*  FUNCTION-KEYWORDS */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC2shared_initialize,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[11])(5, ECL_SYM("SHARED-INITIALIZE",967), ECL_NIL, VVtemp[1], VVtemp[2], T0) /*  INSTALL-METHOD */;
 }
  si_Xmake_special(VV[7]);
  cl_set(VV[7],mp_make_lock(2, ECL_SYM("NAME",1300), ECL_SYM("EQL-SPECIALIZER",1570)));
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  si_Xmake_special(VV[8]);
  T0 = (ECL_SYM("EQL",336)->symbol.gfdef);
  cl_set(VV[8],cl_make_hash_table(4, ECL_SYM("SIZE",1335), ecl_make_fixnum(128), ECL_SYM("TEST",1343), T0));
 }
  ecl_cmp_defun(VV[18]);                          /*  INTERN-EQL-SPECIALIZER */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC4add_direct_method,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[11])(5, ECL_SYM("ADD-DIRECT-METHOD",1545), ECL_NIL, VVtemp[3], VVtemp[4], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC5remove_direct_method,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[11])(5, ECL_SYM("REMOVE-DIRECT-METHOD",1599), ECL_NIL, VVtemp[3], VVtemp[4], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC6remove_direct_method,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[11])(5, ECL_SYM("REMOVE-DIRECT-METHOD",1599), ECL_NIL, VVtemp[5], VVtemp[4], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC7specializer_direct_methods,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[11])(5, ECL_SYM("SPECIALIZER-DIRECT-METHODS",1619), ECL_NIL, VVtemp[6], VVtemp[7], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC8specializer_direct_generic_functions,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[11])(5, ECL_SYM("SPECIALIZER-DIRECT-GENERIC-FUNCTIONS",1618), ECL_NIL, VVtemp[6], VVtemp[7], T0) /*  INSTALL-METHOD */;
 }
}
