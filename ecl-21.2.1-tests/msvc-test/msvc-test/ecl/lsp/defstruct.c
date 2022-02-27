/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:LSP;DEFSTRUCT.LSP                                 */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/build/lsp/defstruct.eclh"
/*      function definition for SLOT-ACCESS-FUNCTION                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L1slot_access_function(cl_object v1conc_name, cl_object v2slot_name)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(v1conc_name)) { goto L1; }
  T0 = si_base_string_concatenate(2, v1conc_name, v2slot_name);
  value0 = cl_intern(1, T0);
  return value0;
L1:;
  value0 = v2slot_name;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for MAKE-ATOMIC-ACCESSORS                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L2make_atomic_accessors(cl_object v1name, cl_object v2conc_name, cl_object v3type, cl_object v4slot_descriptions, cl_object v5removep)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(v3type==ECL_NIL)) { goto L1; }
  {
   cl_object v6accessors;
   v6accessors = ECL_NIL;
   {
    cl_object v7;
    v7 = v4slot_descriptions;
    goto L7;
L6:;
    {
     cl_object v8slotd;
     v8slotd = ecl_car(v7);
     {
      cl_object v9;
      cl_object v10;
      cl_object v11;
      T0 = ecl_car(v8slotd);
      v9 = L1slot_access_function(v2conc_name, T0);
      v10 = ecl_cadddr(v8slotd);
      T0 = ecl_cddddr(v8slotd);
      v11 = ecl_car(T0);
      if (!(v10==ECL_NIL)) { goto L15; }
      if (!(v5removep==ECL_NIL)) { goto L15; }
      T0 = cl_list(2, ECL_SYM("QUOTE",681), v1name);
      T1 = cl_list(3, ECL_SYM("LIST",483), VV[7], T0);
      T2 = cl_list(2, ECL_SYM("QUOTE",681), v11);
      T3 = cl_listX(6, ECL_SYM("LIST",483), VV[5], VV[6], T1, T2, VV[8]);
      T4 = cl_list(2, ECL_SYM("QUOTE",681), v1name);
      T5 = cl_list(3, ECL_SYM("LIST",483), VV[7], T4);
      T6 = cl_list(2, ECL_SYM("QUOTE",681), v11);
      T7 = cl_list(5, ECL_SYM("LIST",483), VV[9], VV[6], T5, T6);
      T8 = cl_list(7, ECL_SYM("VALUES",897), ECL_NIL, ECL_NIL, VV[3], VV[4], T3, T7);
      T9 = cl_list(3, ECL_SYM("LET",479), VV[2], T8);
      T10 = cl_list(4, ECL_SYM("DEFINE-CAS-EXPANDER",1520), v9, VV[1], T9);
      v6accessors = CONS(T10,v6accessors);
      goto L11;
L15:;
      T0 = cl_list(2, ECL_SYM("QUOTE",681), v9);
      T1 = cl_list(2, ECL_SYM("REMCAS",1522), T0);
      v6accessors = CONS(T1,v6accessors);
     }
L11:;
    }
    v7 = ecl_cdr(v7);
L7:;
    if (Null(v7)) { goto L22; }
    goto L6;
L22:;
    value0 = v6accessors;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
L1:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for STRUCTURE-TYPE-ERROR                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L3structure_type_error(cl_object v1value, cl_object v2slot_type, cl_object v3struct_name, cl_object v4slot_name)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_list(3, v4slot_name, v3struct_name, v2slot_type);
  value0 = cl_error(9, ECL_SYM("SIMPLE-TYPE-ERROR",775), ECL_SYM("FORMAT-CONTROL",1263), VV[11], ECL_SYM("FORMAT-ARGUMENTS",1262), T0, ECL_SYM("DATUM",1236), v1value, ECL_SYM("EXPECTED-TYPE",1254), v2slot_type);
  return value0;
 }
}
/*      function definition for MAKE-ACCESS-FUNCTION                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L6make_access_function(cl_object v1name, cl_object v2conc_name, cl_object v3type, cl_object v4named, cl_object v5slot_descr)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  env0 = ECL_NIL;
  CLV0 = env0 = CONS(v1name,env0);                /*  NAME            */
  {
   cl_object v6slot_name;
   cl_object v7read_only;
   cl_object v8access_function;
   cl_object env1 = env0;
   v6slot_name = ecl_car(v5slot_descr);
   v7read_only = ecl_cadddr(v5slot_descr);
   T0 = ecl_cddddr(v5slot_descr);
   T1 = ecl_car(T0);
   CLV1 = env1 = CONS(T1,env1);                   /*  OFFSET          */
   v8access_function = L1slot_access_function(v2conc_name, v6slot_name);
   T0 = ecl_cddddr(v5slot_descr);
   T1 = ecl_cadr(T0);
   if (!(ecl_eql(v8access_function,T1))) { goto L5; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L5:;
   {
    cl_object v9;
    v9 = v8access_function;
    {
     cl_object v10;
     T1 = ecl_cddddr(v5slot_descr);
     v10 = ecl_cdr(T1);
     if (ecl_unlikely(ECL_ATOM(v10))) FEtype_error_cons(v10);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     T0 = v10;
    }
    (ECL_CONS_CAR(T0)=v9,T0);
   }
   if (!(v3type==ECL_NIL)) { goto L13; }
   {
    cl_object v9;
    v9 = ecl_make_cclosure_va((cl_objectfn)LC4__lambda10,env1,Cblock,1);
    T0 = v9;
   }
   si_fset(2, v8access_function, T0);
   goto L12;
L13:;
   if (Null(cl_subtypep(2, v3type, VV[13]))) { goto L16; }
   {
    cl_object v9;
    v9 = ecl_make_cclosure_va((cl_objectfn)LC5__lambda11,env1,Cblock,1);
    T0 = v9;
   }
   si_fset(2, v8access_function, T0);
   goto L12;
L16:;
   cl_error(2, VV[14], v3type);
L12:;
   if (Null(v7read_only)) { goto L19; }
   T0 = cl_list(2, ECL_SYM("SETF",752), v8access_function);
   cl_fmakunbound(T0);
   value0 = ecl_function_dispatch(cl_env_copy,VV[57])(3, v8access_function, ECL_SYM("SETF",752), ECL_NIL) /*  SET-DOCUMENTATION */;
   return value0;
L19:;
   value0 = v3type;
   if ((value0)!=ECL_NIL) { goto L24; }
   T0 = ECL_CONS_CAR(CLV0);
   goto L22;
L24:;
   T0 = value0;
   goto L22;
L22:;
   value0 = L10do_setf_structure_method(v8access_function, T0, ECL_CONS_CAR(CLV1));
   return value0;
  }
 }
}
/*      closure LAMBDA10                                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC4__lambda10(cl_narg narg, cl_object v1x, ...)
{
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV1 = env0;                                     /*  OFFSET          */
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=1)) FEwrong_num_arguments_anonym();
 {
TTL:
  value0 = si_structure_ref(v1x, ECL_CONS_CAR(CLV0), ECL_CONS_CAR(CLV1));
  return value0;
 }
 }
}
/*      closure LAMBDA11                                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC5__lambda11(cl_narg narg, cl_object v1x, ...)
{
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV1 = env0;                                     /*  OFFSET          */
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=1)) FEwrong_num_arguments_anonym();
 {
TTL:
  value0 = ecl_elt(v1x,ecl_fixnum(ECL_CONS_CAR(CLV1)));
  cl_env_copy->nvalues = 1;
  return value0;
 }
 }
}
/*      function definition for DO-SETF-STRUCTURE-METHOD              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L10do_setf_structure_method(cl_object v1access_function, cl_object v2type, cl_object v3index)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  env0 = ECL_NIL;
  CLV0 = env0 = CONS(v2type,env0);                /*  TYPE            */
  CLV1 = env0 = CONS(v3index,env0);               /*  INDEX           */
  T0 = CONS(ECL_CONS_CAR(CLV0),ECL_CONS_CAR(CLV1));
  si_put_sysprop(v1access_function, VV[15], T0);
  if ((ECL_CONS_CAR(CLV0))==(ECL_SYM("LIST",483))) { goto L5; }
  if (!((ECL_CONS_CAR(CLV0))==(ECL_SYM("VECTOR",900)))) { goto L3; }
  goto L4;
L5:;
L4:;
  {
   cl_object v4;
   v4 = ecl_make_cclosure_va((cl_objectfn)LC7__lambda12,env0,Cblock,2);
   T0 = v4;
   goto L2;
  }
L3:;
  if (!(ECL_CONSP(ECL_CONS_CAR(CLV0)))) { goto L7; }
  {
   cl_object v5;
   v5 = ecl_make_cclosure_va((cl_objectfn)LC8__lambda13,env0,Cblock,2);
   T0 = v5;
   goto L2;
  }
L7:;
  {
   cl_object v6;
   v6 = ecl_make_cclosure_va((cl_objectfn)LC9__lambda14,env0,Cblock,2);
   T0 = v6;
  }
L2:;
  value0 = si_do_defsetf(2, v1access_function, T0);
  return value0;
 }
}
/*      closure LAMBDA12                                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC7__lambda12(cl_narg narg, cl_object v1newvalue, cl_object v2struct, ...)
{
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV1 = env0;                                     /*  INDEX           */
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=2)) FEwrong_num_arguments_anonym();
 {
TTL:
  value0 = cl_list(4, ECL_SYM("ELT-SET",1069), v2struct, ECL_CONS_CAR(CLV1), v1newvalue);
  return value0;
 }
 }
}
/*      closure LAMBDA13                                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC8__lambda13(cl_narg narg, cl_object v1newvalue, cl_object v2struct, ...)
{
 cl_object T0;
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV1 = env0;                                     /*  INDEX           */
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=2)) FEwrong_num_arguments_anonym();
 {
TTL:
  T0 = cl_list(3, ECL_SYM("THE",858), ECL_CONS_CAR(CLV0), v2struct);
  value0 = cl_list(4, ECL_SYM("ASET",1042), T0, ECL_CONS_CAR(CLV1), v1newvalue);
  return value0;
 }
 }
}
/*      closure LAMBDA14                                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC9__lambda14(cl_narg narg, cl_object v1newvalue, cl_object v2struct, ...)
{
 cl_object T0;
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV1 = env0;                                     /*  INDEX           */
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=2)) FEwrong_num_arguments_anonym();
 {
TTL:
  T0 = cl_list(2, ECL_SYM("QUOTE",681), ECL_CONS_CAR(CLV0));
  value0 = cl_list(5, ECL_SYM("STRUCTURE-SET",1170), v2struct, T0, ECL_CONS_CAR(CLV1), v1newvalue);
  return value0;
 }
 }
}
/*      function definition for PROCESS-BOA-LAMBDA-LIST               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L11process_boa_lambda_list(cl_object v1slot_names, cl_object v2slot_descriptions, cl_object v3boa_list, cl_object v4assertions)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v5mentioned_slots;
   cl_object v6aux;
   v5mentioned_slots = ECL_NIL;
   v6aux = ECL_NIL;
   v3boa_list = cl_copy_list(v3boa_list);
   si_process_lambda_list(v3boa_list, ECL_SYM("FUNCTION",398));
   {
    cl_object v7i;
    cl_object v8slot;
    cl_object v9modify;
    v7i = v3boa_list;
    v8slot = ecl_car(v7i);
    v9modify = ECL_NIL;
    goto L11;
L10:;
    if ((v8slot)==(ECL_SYM("&OPTIONAL",13))) { goto L16; }
    if (!((v8slot)==(ECL_SYM("&KEY",12)))) { goto L14; }
    goto L15;
L16:;
L15:;
    v9modify = ECL_T;
    goto L13;
L14:;
    if (!((v8slot)==(ECL_SYM("&REST",14)))) { goto L19; }
    v9modify = ECL_NIL;
    goto L13;
L19:;
    if (!((v8slot)==(ECL_SYM("&AUX",9)))) { goto L22; }
    v6aux = ECL_T;
    v9modify = ECL_NIL;
    goto L13;
L22:;
    {
     cl_object v10;
     v10 = ecl_make_bool((v8slot)==(ECL_SYM("&ALLOW-OTHER-KEYS",8)));
     if (Null(v10)) { goto L28; }
     goto L13;
L28:;
     if (!(ECL_ATOM(v8slot))) { goto L30; }
     v5mentioned_slots = CONS(v8slot,v5mentioned_slots);
     if (Null(v9modify)) { goto L34; }
     {
      cl_object v11;
      T0 = v8slot;
      T1 = ecl_assql(v8slot,v2slot_descriptions);
      T2 = ecl_cadr(T1);
      v11 = cl_list(2, T0, T2);
      {
       cl_object v12;
       v12 = v7i;
       if (ecl_unlikely(ECL_ATOM(v12))) FEtype_error_cons(v12);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       T0 = v12;
      }
      (ECL_CONS_CAR(T0)=v11,T0);
     }
L34:;
     if (Null(v6aux)) { goto L13; }
     v4assertions = cl_delete(4, v8slot, v4assertions, ECL_SYM("KEY",1288), ECL_SYM("CADADR",175));
     goto L13;
L30:;
     {
      cl_object v11slot_name;
      v11slot_name = ecl_car(v8slot);
      if (!(ECL_CONSP(v11slot_name))) { goto L45; }
      v11slot_name = ecl_cadr(v11slot_name);
L45:;
      v5mentioned_slots = CONS(v11slot_name,v5mentioned_slots);
      T0 = ecl_cdr(v8slot);
      if (!(ecl_endp(T0))) { goto L13; }
      if (Null(v9modify)) { goto L51; }
      {
       cl_object v12;
       T0 = ecl_assql(v11slot_name,v2slot_descriptions);
       T1 = ecl_cadr(T0);
       v12 = ecl_list1(T1);
       {
        cl_object v13;
        v13 = v8slot;
        if (ecl_unlikely(ECL_ATOM(v13))) FEtype_error_cons(v13);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        T0 = v13;
       }
       (ECL_CONS_CDR(T0)=v12,T0);
      }
L51:;
      if (Null(v6aux)) { goto L13; }
      v4assertions = cl_delete(4, v8slot, v4assertions, ECL_SYM("KEY",1288), ECL_SYM("CADADR",175));
     }
    }
L13:;
    v7i = ecl_cdr(v7i);
    v8slot = ecl_car(v7i);
L11:;
    if (ecl_endp(v7i)) { goto L65; }
    goto L10;
L65:;
   }
   {
    cl_object v7other_slots;
    T0 = (ECL_SYM("CONSP",254)->symbol.gfdef);
    T1 = cl_copy_list(v1slot_names);
    T2 = cl_delete_if(2, T0, T1);
    v7other_slots = cl_nset_difference(2, T2, v5mentioned_slots);
    {
     cl_object v8l;
     v8l = v7other_slots;
     goto L73;
L72:;
     {
      cl_object v9slot;
      cl_object v10slot_init;
      T0 = ecl_car(v8l);
      v9slot = ecl_assql(T0,v2slot_descriptions);
      v10slot_init = ecl_cadr(v9slot);
      if (Null(v10slot_init)) { goto L75; }
      {
       cl_object v11;
       T0 = ecl_car(v8l);
       v11 = cl_list(2, T0, v10slot_init);
       {
        cl_object v12;
        v12 = v8l;
        if (ecl_unlikely(ECL_ATOM(v12))) FEtype_error_cons(v12);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        T0 = v12;
       }
       (ECL_CONS_CAR(T0)=v11,T0);
      }
     }
L75:;
     v8l = ecl_cdr(v8l);
L73:;
     if (ecl_endp(v8l)) { goto L86; }
     goto L72;
L86:;
    }
    if (Null(v7other_slots)) { goto L88; }
    if ((v6aux)!=ECL_NIL) { goto L90; }
    v7other_slots = CONS(ECL_SYM("&AUX",9),v7other_slots);
L90:;
    v3boa_list = ecl_nconc(v3boa_list,v7other_slots);
L88:;
    cl_env_copy->nvalues = 2;
    cl_env_copy->values[1] = v4assertions;
    cl_env_copy->values[0] = v3boa_list;
    return cl_env_copy->values[0];
   }
  }
 }
}
/*      function definition for MAKE-CONSTRUCTOR                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L12make_constructor(cl_object v1name, cl_object v2constructor, cl_object v3type, cl_object v4named, cl_object v5slot_descriptions)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v6boa_constructor_p;
   cl_object v7keys;
   cl_object v8constructor_name;
   cl_object v9slot_names;
   cl_object v10assertions;
   v6boa_constructor_p = ecl_make_bool(ECL_CONSP(v2constructor));
   if ((v6boa_constructor_p)!=ECL_NIL) { goto L3; }
   v7keys = ecl_list1(ECL_SYM("&KEY",12));
   goto L2;
L3:;
   v7keys = ECL_NIL;
L2:;
   if (Null(v6boa_constructor_p)) { goto L6; }
   v8constructor_name = ecl_car(v2constructor);
   goto L5;
L6:;
   v8constructor_name = v2constructor;
L5:;
   v9slot_names = ECL_NIL;
   v10assertions = ECL_NIL;
   {
    cl_object v11;
    v11 = v5slot_descriptions;
    goto L14;
L13:;
    {
     cl_object v12slot;
     v12slot = ecl_car(v11);
     if (!(v12slot==ECL_NIL)) { goto L21; }
     T0 = ECL_NIL;
     goto L20;
L21:;
     T1 = ecl_car(v12slot);
     if (!((T1)==(VV[16]))) { goto L23; }
     T1 = ecl_cadr(v12slot);
     T0 = cl_list(2, ECL_SYM("QUOTE",681), T1);
     goto L20;
L23:;
     {
      cl_object v13slot_name;
      cl_object v14slot_type;
      cl_object v15init_form;
      cl_object v16var_name;
      v13slot_name = ecl_car(v12slot);
      v14slot_type = ecl_caddr(v12slot);
      v15init_form = ecl_cadr(v12slot);
      v16var_name = v13slot_name;
      if ((v6boa_constructor_p)!=ECL_NIL) { goto L29; }
      v16var_name = cl_copy_symbol(1, v13slot_name);
      if (Null(v15init_form)) { goto L35; }
      T1 = cl_list(2, v16var_name, v15init_form);
      goto L34;
L35:;
      T1 = v16var_name;
L34:;
      v7keys = CONS(T1,v7keys);
L29:;
      if ((ECL_T)==(v14slot_type)) { goto L37; }
      T1 = cl_list(2, ECL_SYM("QUOTE",681), v14slot_type);
      T2 = cl_list(3, ECL_SYM("TYPEP",877), v16var_name, T1);
      T3 = cl_list(2, ECL_SYM("QUOTE",681), v14slot_type);
      T4 = cl_list(2, ECL_SYM("QUOTE",681), v1name);
      T5 = cl_list(2, ECL_SYM("QUOTE",681), v13slot_name);
      T6 = cl_list(5, VV[12], v16var_name, T3, T4, T5);
      T7 = cl_list(3, ECL_SYM("UNLESS",885), T2, T6);
      v10assertions = CONS(T7,v10assertions);
L37:;
      T0 = v16var_name;
     }
L20:;
     v9slot_names = CONS(T0,v9slot_names);
    }
    v11 = ecl_cdr(v11);
L14:;
    if (Null(v11)) { goto L42; }
    goto L13;
L42:;
    v9slot_names = cl_nreverse(v9slot_names);
    v7keys = cl_nreverse(v7keys);
   }
   if (Null(v6boa_constructor_p)) { goto L47; }
   {
    cl_object v12;
    cl_object v13;
    T0 = ecl_cadr(v2constructor);
    value0 = L11process_boa_lambda_list(v9slot_names, v5slot_descriptions, T0, v10assertions);
    {
     const int v14 = cl_env_copy->nvalues;
     v12 = value0;
     cl_object v15;
     v15 = (v14<=1)? ECL_NIL : cl_env_copy->values[1];
     v13 = v15;
    }
    v7keys = v12;
    v10assertions = v13;
   }
L47:;
   if (!(v3type==ECL_NIL)) { goto L54; }
   T0 = cl_listX(3, ECL_SYM("MAKE-STRUCTURE",1109), VV[17], v9slot_names);
   T1 = ecl_list1(T0);
   T2 = ecl_append(v10assertions,T1);
   value0 = cl_listX(4, ECL_SYM("DEFUN",291), v8constructor_name, v7keys, T2);
   return value0;
L54:;
   if (Null(cl_subtypep(2, v3type, VV[18]))) { goto L56; }
   T0 = CONS(ECL_SYM("VECTOR",900),v9slot_names);
   value0 = cl_list(4, ECL_SYM("DEFUN",291), v8constructor_name, v7keys, T0);
   return value0;
L56:;
   if (Null(cl_subtypep(2, v3type, ECL_SYM("VECTOR",900)))) { goto L58; }
   {
    cl_fixnum v11;
    v11 = ecl_length(v9slot_names);
    T0 = ecl_list1(ecl_make_fixnum(v11));
    T1 = cl_list(2, ECL_SYM("QUOTE",681), T0);
    T2 = ecl_function_dispatch(cl_env_copy,VV[58])(1, v3type) /*  CLOSEST-SEQUENCE-TYPE */;
    T3 = cl_list(2, ECL_SYM("QUOTE",681), T2);
    T4 = CONS(ECL_SYM("LIST",483),v9slot_names);
    T5 = cl_list(6, ECL_SYM("MAKE-ARRAY",524), T1, ECL_SYM("ELEMENT-TYPE",1246), T3, ECL_SYM("INITIAL-CONTENTS",1278), T4);
    value0 = cl_list(4, ECL_SYM("DEFUN",291), v8constructor_name, v7keys, T5);
    return value0;
   }
L58:;
   if (!((v3type)==(ECL_SYM("LIST",483)))) { goto L60; }
   T0 = CONS(ECL_SYM("LIST",483),v9slot_names);
   value0 = cl_list(4, ECL_SYM("DEFUN",291), v8constructor_name, v7keys, T0);
   return value0;
L60:;
   {
    cl_object v12;
    v12 = cl_error(2, VV[19], v3type);
    if (Null(v12)) { goto L63; }
    value0 = v12;
    cl_env_copy->nvalues = 1;
    return value0;
L63:;
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      function definition for MAKE-PREDICATE                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L17make_predicate(cl_object v1name, cl_object v2type, cl_object v3named, cl_object v4name_offset)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  env0 = ECL_NIL;
  CLV0 = env0 = CONS(v1name,env0);                /*  NAME            */
  CLV1 = env0 = CONS(v4name_offset,env0);         /*  NAME-OFFSET     */
  if (!(v2type==ECL_NIL)) { goto L1; }
  {
   cl_object v5;
   v5 = ecl_make_cclosure_va((cl_objectfn)LC13__lambda44,env0,Cblock,1);
   value0 = v5;
   cl_env_copy->nvalues = 1;
   return value0;
  }
L1:;
  if ((v2type)==(ECL_SYM("VECTOR",900))) { goto L5; }
  if (!(ECL_CONSP(v2type))) { goto L3; }
  T0 = ecl_car(v2type);
  if (!((T0)==(ECL_SYM("VECTOR",900)))) { goto L3; }
  goto L4;
L5:;
L4:;
  if ((v3named)!=ECL_NIL) { goto L8; }
  cl_error(1, VV[20]);
L8:;
  {
   cl_object v6;
   v6 = ecl_make_cclosure_va((cl_objectfn)LC14__lambda45,env0,Cblock,1);
   value0 = v6;
   cl_env_copy->nvalues = 1;
   return value0;
  }
L3:;
  if (!((v2type)==(ECL_SYM("LIST",483)))) { goto L10; }
  if ((v3named)!=ECL_NIL) { goto L12; }
  cl_error(1, VV[20]);
L12:;
  if (!(ecl_number_equalp(ECL_CONS_CAR(CLV1),ecl_make_fixnum(0)))) { goto L14; }
  {
   cl_object v7;
   v7 = ecl_make_cclosure_va((cl_objectfn)LC15__lambda46,env0,Cblock,1);
   value0 = v7;
   cl_env_copy->nvalues = 1;
   return value0;
  }
L14:;
  {
   cl_object v8;
   v8 = ecl_make_cclosure_va((cl_objectfn)LC16__lambda47,env0,Cblock,1);
   value0 = v8;
   cl_env_copy->nvalues = 1;
   return value0;
  }
L10:;
  {
   cl_object v9;
   v9 = cl_error(1, VV[14]);
   if (Null(v9)) { goto L17; }
   value0 = v9;
   cl_env_copy->nvalues = 1;
   return value0;
L17:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      closure LAMBDA44                                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC13__lambda44(cl_narg narg, cl_object v1x, ...)
{
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV1 = env0;
 CLV0 = _ecl_cdr(CLV1);                           /*  NAME            */
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=1)) FEwrong_num_arguments_anonym();
 {
TTL:
  value0 = si_structure_subtype_p(v1x, ECL_CONS_CAR(CLV0));
  return value0;
 }
 }
}
/*      closure LAMBDA45                                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC14__lambda45(cl_narg narg, cl_object v1x, ...)
{
 cl_object T0;
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV1 = env0;                                     /*  NAME-OFFSET     */
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=1)) FEwrong_num_arguments_anonym();
 {
TTL:
  if (!(ECL_VECTORP(v1x))) { goto L2; }
  {
   cl_fixnum v2;
   v2 = ecl_length(v1x);
   if (!(ecl_greater(ecl_make_fixnum(v2),ECL_CONS_CAR(CLV1)))) { goto L2; }
  }
  T0 = ecl_elt(v1x,ecl_fixnum(ECL_CONS_CAR(CLV1)));
  value0 = ecl_make_bool((T0)==(ECL_CONS_CAR(CLV0)));
  cl_env_copy->nvalues = 1;
  return value0;
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
 }
}
/*      closure LAMBDA46                                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC15__lambda46(cl_narg narg, cl_object v1x, ...)
{
 cl_object T0;
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV1 = env0;
 CLV0 = _ecl_cdr(CLV1);                           /*  NAME            */
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=1)) FEwrong_num_arguments_anonym();
 {
TTL:
  if (!(ECL_CONSP(v1x))) { goto L2; }
  T0 = ecl_car(v1x);
  value0 = ecl_make_bool((T0)==(ECL_CONS_CAR(CLV0)));
  cl_env_copy->nvalues = 1;
  return value0;
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
 }
}
/*      closure LAMBDA47                                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC16__lambda47(cl_narg narg, cl_object v1x, ...)
{
 cl_object T0;
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV1 = env0;                                     /*  NAME-OFFSET     */
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=1)) FEwrong_num_arguments_anonym();
 {
TTL:
  {
   cl_fixnum v2i;
   cl_object v3y;
   {
    cl_object v4;
    v4 = ECL_CONS_CAR(CLV1);
    {
     bool v5;
     v5 = ECL_FIXNUMP(v4);
     if (ecl_unlikely(!(v5)))
         FEwrong_type_argument(ECL_SYM("FIXNUM",374),v4);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
    }
    v2i = ecl_fixnum(v4);
   }
   v3y = v1x;
   goto L7;
L6:;
   if (ECL_CONSP(v3y)) { goto L9; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L9:;
   {
    cl_object v4;
    v4 = ecl_make_integer((v2i)-1);
    {
     bool v5;
     v5 = ECL_FIXNUMP(v4);
     if (ecl_unlikely(!(v5)))
         FEwrong_type_argument(ECL_SYM("FIXNUM",374),v4);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
    }
    v2i = ecl_fixnum(v4);
   }
   v3y = ecl_cdr(v3y);
L7:;
   if ((v2i)==(0)) { goto L16; }
   goto L6;
L16:;
   if (!(ECL_CONSP(v3y))) { goto L19; }
   T0 = ecl_car(v3y);
   value0 = ecl_make_bool((T0)==(ECL_CONS_CAR(CLV0)));
   cl_env_copy->nvalues = 1;
   return value0;
L19:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
 }
}
/*      function definition for PARSE-SLOT-DESCRIPTION                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L18parse_slot_description(cl_narg narg, cl_object v1slot_description, cl_object v2offset, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>3)) FEwrong_num_arguments_anonym();
 {
  cl_object v3read_only;
  va_list args; va_start(args,v2offset);
  {
   int i = 2;
   if (i >= narg) {
    v3read_only = ECL_NIL;
   } else {
    i++;
    v3read_only = va_arg(args,cl_object);
   }
  }
  va_end(args);
  if (!(ECL_ATOM(v1slot_description))) { goto L2; }
  value0 = cl_list(6, v1slot_description, ECL_NIL, ECL_T, v3read_only, v2offset, ECL_NIL);
  return value0;
L2:;
  {
   cl_object v4;
   cl_object v5;
   cl_object v6;
   cl_object v7slot_type;
   cl_object v8os;
   v4 = ecl_car(v1slot_description);
   v5 = ecl_cadr(v1slot_description);
   v6 = ecl_cddr(v1slot_description);
   v7slot_type = ECL_T;
   v8os = v6;
   goto L11;
L10:;
   T0 = ecl_cdr(v8os);
   if (!(ecl_endp(T0))) { goto L13; }
   cl_error(2, VV[21], v8os);
L13:;
   {
    cl_object v9;
    cl_object v10;
    v9 = ecl_car(v8os);
    v10 = ecl_cadr(v8os);
    if (!(ecl_eql(v9,ECL_SYM("TYPE",1346)))) { goto L18; }
    v7slot_type = v10;
    goto L15;
L18:;
    if (!(ecl_eql(v9,VV[22]))) { goto L21; }
    v3read_only = v10;
    goto L15;
L21:;
    cl_error(2, VV[21], v8os);
   }
L15:;
   v8os = ecl_cddr(v8os);
L11:;
   if (ecl_endp(v8os)) { goto L26; }
   goto L10;
L26:;
   value0 = cl_list(6, v4, v5, v7slot_type, v3read_only, v2offset, ECL_NIL);
   return value0;
  }
 }
}
/*      function definition for OVERWRITE-SLOT-DESCRIPTIONS           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L19overwrite_slot_descriptions(cl_object v1new_slots, cl_object v2old_slots)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3output;
   cl_object v4old_slots;
   v3output = ECL_NIL;
   v4old_slots = v2old_slots;
   goto L5;
L4:;
   {
    cl_object v5old_slot;
    cl_object v6slot_name;
    cl_object v7new_slot;
    v5old_slot = ecl_car(v4old_slots);
    v6slot_name = ecl_car(v5old_slot);
    {
     cl_object v8;
     v8 = v1new_slots;
     goto L15;
L14:;
     {
      cl_object v9;
      cl_object v10;
      {
       cl_object v11;
       v11 = v8;
       if (ecl_unlikely(ECL_ATOM(v11))) FEtype_error_cons(v11);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v9 = v11;
      }
      v10 = ECL_CONS_CAR(v9);
      T1 = ecl_car(v10);
      if (!(ecl_eql(v6slot_name,T1))) { goto L17; }
      T0 = v9;
      goto L11;
     }
L17:;
     v8 = ECL_CONS_CDR(v8);
L15:;
     if (v8==ECL_NIL) { goto L25; }
     goto L14;
L25:;
     T0 = ECL_NIL;
    }
L11:;
    v7new_slot = ecl_car(T0);
    if (!(v7new_slot==ECL_NIL)) { goto L28; }
    v7new_slot = v5old_slot;
    goto L27;
L28:;
    {
     cl_object v8old_read_only;
     cl_object v9new_read_only;
     v8old_read_only = ecl_cadddr(v5old_slot);
     v9new_read_only = ecl_cadddr(v7new_slot);
     if (!(v9new_read_only==ECL_NIL)) { goto L34; }
     if (Null(v8old_read_only)) { goto L34; }
     cl_error(2, VV[23], v6slot_name);
     goto L33;
L34:;
     if (!((v9new_read_only)==(VV[24]))) { goto L33; }
     v9new_read_only = v8old_read_only;
L33:;
     v7new_slot = cl_copy_list(v7new_slot);
     {
      cl_object v10;
      v10 = v9new_read_only;
      {
       cl_object v11;
       v11 = ecl_cdddr(v7new_slot);
       if (ecl_unlikely(ECL_ATOM(v11))) FEtype_error_cons(v11);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       T0 = v11;
      }
      (ECL_CONS_CAR(T0)=v10,T0);
     }
     {
      cl_object v10;
      T0 = ecl_cddddr(v5old_slot);
      v10 = ecl_car(T0);
      {
       cl_object v11;
       v11 = ecl_cddddr(v7new_slot);
       if (ecl_unlikely(ECL_ATOM(v11))) FEtype_error_cons(v11);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       T0 = v11;
      }
      (ECL_CONS_CAR(T0)=v10,T0);
     }
     {
      cl_object v10;
      T0 = ecl_cddddr(v5old_slot);
      v10 = ecl_cadr(T0);
      {
       cl_object v11;
       T1 = ecl_cddddr(v7new_slot);
       v11 = ecl_cdr(T1);
       if (ecl_unlikely(ECL_ATOM(v11))) FEtype_error_cons(v11);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       T0 = v11;
      }
      (ECL_CONS_CAR(T0)=v10,T0);
     }
    }
L27:;
    v3output = CONS(v7new_slot,v3output);
   }
   v4old_slots = ecl_cdr(v4old_slots);
L5:;
   if (v4old_slots==ECL_NIL) { goto L61; }
   goto L4;
L61:;
   value0 = cl_nreverse(v3output);
   return value0;
  }
 }
}
/*      function definition for %STRUCT-LAYOUT-COMPATIBLE-P           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L20_struct_layout_compatible_p(cl_object v1old_slot_descriptions, cl_object v2new_slot_descriptions)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3old_defs;
   cl_object v4new_defs;
   v3old_defs = v1old_slot_descriptions;
   v4new_defs = v2new_slot_descriptions;
   goto L5;
L4:;
   {
    cl_object v5;
    cl_object v6;
    v5 = ecl_car(v3old_defs);
    v6 = ecl_car(v4new_defs);
    value0 = ecl_make_bool(ecl_equal(v5,v6));
    if ((value0)!=ECL_NIL) { goto L11; }
    {
     cl_object v7;
     cl_object v8old_slot_name;
     cl_object v9old_init;
     cl_object v10old_type;
     cl_object v11old_read_only;
     cl_object v12old_offset;
     cl_object v13old_ac;
     v7 = v5;
     if (!(v7==ECL_NIL)) { goto L16; }
     ecl_function_dispatch(cl_env_copy,VV[59])(1, v5) /*  DM-TOO-FEW-ARGUMENTS */;
L16:;
     {
      cl_object v14;
      v14 = ecl_car(v7);
      v7 = ecl_cdr(v7);
      v8old_slot_name = v14;
     }
     if (!(v7==ECL_NIL)) { goto L22; }
     ecl_function_dispatch(cl_env_copy,VV[59])(1, v5) /*  DM-TOO-FEW-ARGUMENTS */;
L22:;
     {
      cl_object v14;
      v14 = ecl_car(v7);
      v7 = ecl_cdr(v7);
      v9old_init = v14;
     }
     if (!(v7==ECL_NIL)) { goto L28; }
     ecl_function_dispatch(cl_env_copy,VV[59])(1, v5) /*  DM-TOO-FEW-ARGUMENTS */;
L28:;
     {
      cl_object v14;
      v14 = ecl_car(v7);
      v7 = ecl_cdr(v7);
      v10old_type = v14;
     }
     if (!(v7==ECL_NIL)) { goto L34; }
     ecl_function_dispatch(cl_env_copy,VV[59])(1, v5) /*  DM-TOO-FEW-ARGUMENTS */;
L34:;
     {
      cl_object v14;
      v14 = ecl_car(v7);
      v7 = ecl_cdr(v7);
      v11old_read_only = v14;
     }
     if (!(v7==ECL_NIL)) { goto L40; }
     ecl_function_dispatch(cl_env_copy,VV[59])(1, v5) /*  DM-TOO-FEW-ARGUMENTS */;
L40:;
     {
      cl_object v14;
      v14 = ecl_car(v7);
      v7 = ecl_cdr(v7);
      v12old_offset = v14;
     }
     if (!(v7==ECL_NIL)) { goto L46; }
     ecl_function_dispatch(cl_env_copy,VV[59])(1, v5) /*  DM-TOO-FEW-ARGUMENTS */;
L46:;
     {
      cl_object v14;
      v14 = ecl_car(v7);
      v7 = ecl_cdr(v7);
      v13old_ac = v14;
     }
     if (Null(v7)) { goto L51; }
     ecl_function_dispatch(cl_env_copy,VV[60])(1, v5) /*  DM-TOO-MANY-ARGUMENTS */;
L51:;
     {
      cl_object v14;
      cl_object v15new_slot_name;
      cl_object v16new_init;
      cl_object v17new_type;
      cl_object v18new_read_only;
      cl_object v19new_offset;
      cl_object v20new_ac;
      v14 = v6;
      if (!(v14==ECL_NIL)) { goto L55; }
      ecl_function_dispatch(cl_env_copy,VV[59])(1, v6) /*  DM-TOO-FEW-ARGUMENTS */;
L55:;
      {
       cl_object v21;
       v21 = ecl_car(v14);
       v14 = ecl_cdr(v14);
       v15new_slot_name = v21;
      }
      if (!(v14==ECL_NIL)) { goto L61; }
      ecl_function_dispatch(cl_env_copy,VV[59])(1, v6) /*  DM-TOO-FEW-ARGUMENTS */;
L61:;
      {
       cl_object v21;
       v21 = ecl_car(v14);
       v14 = ecl_cdr(v14);
       v16new_init = v21;
      }
      if (!(v14==ECL_NIL)) { goto L67; }
      ecl_function_dispatch(cl_env_copy,VV[59])(1, v6) /*  DM-TOO-FEW-ARGUMENTS */;
L67:;
      {
       cl_object v21;
       v21 = ecl_car(v14);
       v14 = ecl_cdr(v14);
       v17new_type = v21;
      }
      if (!(v14==ECL_NIL)) { goto L73; }
      ecl_function_dispatch(cl_env_copy,VV[59])(1, v6) /*  DM-TOO-FEW-ARGUMENTS */;
L73:;
      {
       cl_object v21;
       v21 = ecl_car(v14);
       v14 = ecl_cdr(v14);
       v18new_read_only = v21;
      }
      if (!(v14==ECL_NIL)) { goto L79; }
      ecl_function_dispatch(cl_env_copy,VV[59])(1, v6) /*  DM-TOO-FEW-ARGUMENTS */;
L79:;
      {
       cl_object v21;
       v21 = ecl_car(v14);
       v14 = ecl_cdr(v14);
       v19new_offset = v21;
      }
      if (!(v14==ECL_NIL)) { goto L85; }
      ecl_function_dispatch(cl_env_copy,VV[59])(1, v6) /*  DM-TOO-FEW-ARGUMENTS */;
L85:;
      {
       cl_object v21;
       v21 = ecl_car(v14);
       v14 = ecl_cdr(v14);
       v20new_ac = v21;
      }
      if (Null(v14)) { goto L90; }
      ecl_function_dispatch(cl_env_copy,VV[60])(1, v6) /*  DM-TOO-MANY-ARGUMENTS */;
L90:;
      if (!(ecl_number_equalp(v12old_offset,v19new_offset))) { goto L93; }
      {
       cl_object v22;                             /*  SUBTYPEP        */
       cl_object v23;                             /*  CERTAIN         */
       value0 = cl_subtypep(2, v10old_type, v17new_type);
       {
        v22 = value0;
        v23 = cl_env_copy->values[1];
       }
       if (Null(v23)) { goto L99; }
       if (Null(v22)) { goto L96; }
       goto L97;
L99:;
      }
L97:;
      {
       cl_object v22;                             /*  SUBTYPEP        */
       cl_object v23;                             /*  CERTAIN         */
       value0 = cl_subtypep(2, v17new_type, v10old_type);
       {
        v22 = value0;
        v23 = cl_env_copy->values[1];
       }
       value0 = Null(v23)?ECL_T:ECL_NIL;
       if ((value0)!=ECL_NIL) { goto L103; }
       value0 = v22;
       goto L13;
L103:;
       goto L13;
      }
L96:;
      value0 = ECL_NIL;
      goto L13;
L93:;
      value0 = ECL_NIL;
      goto L13;
     }
    }
L13:;
    if ((value0)!=ECL_NIL) { goto L11; }
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
L11:;
    goto L7;
   }
L7:;
   v3old_defs = ecl_cdr(v3old_defs);
   v4new_defs = ecl_cdr(v4new_defs);
L5:;
   if (v3old_defs==ECL_NIL) { goto L109; }
   if (v4new_defs==ECL_NIL) { goto L109; }
   goto L4;
L109:;
   if (!(v3old_defs==ECL_NIL)) { goto L113; }
   value0 = ecl_make_bool(v4new_defs==ECL_NIL);
   cl_env_copy->nvalues = 1;
   return value0;
L113:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for DEFINE-STRUCTURE                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L24define_structure(cl_object v1name, cl_object v2conc_name, cl_object v3type, cl_object v4named, cl_object v5slots, cl_object v6slot_descriptions, cl_object v7copier, cl_object v8include, cl_object v9print_function, cl_object v10print_object, cl_object v11constructors, cl_object v12offset, cl_object v13name_offset, cl_object v14documentation, cl_object v15predicate)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  env0 = ECL_NIL;
  CLV0 = env0 = CONS(v9print_function,env0);      /*  PRINT-FUNCTION  */
  CLV1 = env0 = CONS(v10print_object,env0);       /*  PRINT-OBJECT    */
  {
   cl_object v16old_slot_descriptions;
   v16old_slot_descriptions = si_get_sysprop(v1name, ECL_SYM("STRUCTURE-SLOT-DESCRIPTIONS",1171));
   if (Null(v16old_slot_descriptions)) { goto L1; }
   T0 = L20_struct_layout_compatible_p(v16old_slot_descriptions, v6slot_descriptions);
   if (!(T0==ECL_NIL)) { goto L1; }
   cl_error(2, VV[25], v1name);
  }
L1:;
  ecl_function_dispatch(cl_env_copy,ECL_SYM("CREATE-TYPE-NAME",1646))(1, v1name) /*  CREATE-TYPE-NAME */;
  v6slot_descriptions = cl_copy_tree(v6slot_descriptions);
  if ((v3type)!=ECL_NIL) { goto L8; }
  if (Null(v8include)) { goto L12; }
  T0 = ecl_list1(v8include);
  goto L10;
L12:;
  T0 = ECL_NIL;
  goto L10;
L10:;
  {
   cl_object v16;
   {
    cl_object v17;
    v17 = ecl_make_cfun((cl_objectfn_fixed)LC21__lambda107,ECL_NIL,Cblock,1);
    v16 = v17;
   }
   {
    cl_object v17;
    cl_object v18;
    v17 = ECL_NIL;
    {
     cl_object v19;
     v19 = v6slot_descriptions;
     if (ecl_unlikely(!ECL_LISTP(v19))) FEtype_error_list(v19);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v18 = v19;
    }
    {
     cl_object v19;
     cl_object v20;
     v19 = ecl_list1(ECL_NIL);
     v20 = v19;
L22:;
     if (!(ecl_endp(v18))) { goto L24; }
     goto L23;
L24:;
     v17 = _ecl_car(v18);
     {
      cl_object v21;
      v21 = _ecl_cdr(v18);
      if (ecl_unlikely(!ECL_LISTP(v21))) FEtype_error_list(v21);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v18 = v21;
     }
     {
      cl_object v21;
      v21 = v20;
      if (ecl_unlikely(ECL_ATOM(v21))) FEtype_error_cons(v21);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      T2 = v21;
     }
     T3 = ecl_function_dispatch(cl_env_copy,v16)(1, v17);
     v20 = ecl_list1(T3);
     (ECL_CONS_CDR(T2)=v20,T2);
     goto L22;
L23:;
     T1 = ecl_cdr(v19);
     goto L14;
    }
   }
  }
L14:;
  clos_ensure_class(7, v1name, ECL_SYM("DIRECT-SUPERCLASSES",993), T0, ECL_SYM("DIRECT-SLOTS",992), T1, ECL_SYM("METACLASS",1002), ECL_SYM("STRUCTURE-CLASS",979));
L8:;
  if (Null(ECL_CONS_CAR(CLV0))) { goto L40; }
  T0 = cl_list(2, v1name, ECL_T);
  {
   cl_object v16;
   v16 = ecl_make_cclosure_va((cl_objectfn)LC22__lambda110,env0,Cblock,2);
   T1 = v16;
  }
  ecl_function_dispatch(cl_env_copy,VV[62])(5, ECL_SYM("PRINT-OBJECT",963), ECL_NIL, T0, VV[26], T1) /*  INSTALL-METHOD */;
L40:;
  if (Null(ECL_CONS_CAR(CLV1))) { goto L43; }
  T0 = cl_list(2, v1name, ECL_T);
  {
   cl_object v16;
   v16 = ecl_make_cclosure_va((cl_objectfn)LC23__lambda111,env0,Cblock,2);
   T1 = v16;
  }
  ecl_function_dispatch(cl_env_copy,VV[62])(5, ECL_SYM("PRINT-OBJECT",963), ECL_NIL, T0, VV[26], T1) /*  INSTALL-METHOD */;
L43:;
  if (Null(v15predicate)) { goto L46; }
  T0 = L17make_predicate(v1name, v3type, v4named, v13name_offset);
  si_fset(2, v15predicate, T0);
L46:;
  T0 = cl_listX(3, ECL_SYM("DEFSTRUCT",289), v1name, v5slots);
  si_put_sysprop(v1name, VV[27], T0);
  si_put_sysprop(v1name, VV[28], ECL_T);
  si_put_sysprop(v1name, ECL_SYM("STRUCTURE-SLOT-DESCRIPTIONS",1171), v6slot_descriptions);
  si_put_sysprop(v1name, VV[29], v8include);
  si_put_sysprop(v1name, ECL_SYM("STRUCTURE-PRINT-FUNCTION",1168), ECL_CONS_CAR(CLV0));
  si_put_sysprop(v1name, VV[30], v3type);
  si_put_sysprop(v1name, VV[31], v4named);
  si_put_sysprop(v1name, VV[32], v12offset);
  si_put_sysprop(v1name, VV[33], v11constructors);
  if (Null(ecl_symbol_value(VV[34]))) { goto L57; }
  ecl_function_dispatch(cl_env_copy,VV[57])(3, v1name, ECL_SYM("STRUCTURE",828), v14documentation) /*  SET-DOCUMENTATION */;
L57:;
  {
   cl_object v16;
   v16 = v6slot_descriptions;
   goto L63;
L62:;
   {
    cl_object v17x;
    v17x = ecl_car(v16);
    if (Null(v17x)) { goto L69; }
    T0 = ecl_car(v17x);
    if ((T0)==(VV[16])) { goto L69; }
    L6make_access_function(v1name, v2conc_name, v3type, v4named, v17x);
    goto L67;
L69:;
    goto L67;
L67:;
   }
   v16 = ecl_cdr(v16);
L63:;
   if (Null(v16)) { goto L74; }
   goto L62;
L74:;
  }
  if (Null(v7copier)) { goto L76; }
  T0 = (ECL_SYM("COPY-STRUCTURE",263)->symbol.gfdef);
  si_fset(2, v7copier, T0);
L76:;
  if ((v3type)!=ECL_NIL) { goto L79; }
  value0 = cl_find_class(1, v1name);
  return value0;
L79:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function LAMBDA107                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC21__lambda107(cl_object v1sd)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(v1sd)) { goto L1; }
  T0 = ecl_car(v1sd);
  T1 = ecl_cadr(v1sd);
  T2 = ecl_car(v1sd);
  T3 = ecl_symbol_name(T2);
  T4 = cl_find_package(ECL_SYM("KEYWORD",451));
  T5 = cl_intern(2, T3, T4);
  T6 = ecl_list1(T5);
  if (Null(ecl_caddr(v1sd))) { goto L4; }
  T8 = ecl_caddr(v1sd);
  T7 = cl_list(2, ECL_SYM("TYPE",1346), T8);
  goto L3;
L4:;
  T7 = ECL_NIL;
L3:;
  value0 = cl_listX(7, ECL_SYM("NAME",1300), T0, ECL_SYM("INITFORM",998), T1, ECL_SYM("INITARGS",997), T6, T7);
  return value0;
L1:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      closure LAMBDA110                                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC22__lambda110(cl_narg narg, cl_object v1obj, cl_object v2stream, ...)
{
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV1 = env0;
 CLV0 = _ecl_cdr(CLV1);                           /*  PRINT-FUNCTION  */
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=2)) FEwrong_num_arguments_anonym();
 {
TTL:
  ecl_function_dispatch(cl_env_copy,ECL_CONS_CAR(CLV0))(3, v1obj, v2stream, ecl_make_fixnum(0));
  value0 = v1obj;
  cl_env_copy->nvalues = 1;
  return value0;
 }
 }
}
/*      closure LAMBDA111                                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC23__lambda111(cl_narg narg, cl_object v1obj, cl_object v2stream, ...)
{
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV1 = env0;                                     /*  PRINT-OBJECT    */
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=2)) FEwrong_num_arguments_anonym();
 {
TTL:
  ecl_function_dispatch(cl_env_copy,ECL_CONS_CAR(CLV1))(2, v1obj, v2stream);
  value0 = v1obj;
  cl_env_copy->nvalues = 1;
  return value0;
 }
 }
}
/*      local function DEFSTRUCT                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC27defstruct(cl_object v1, cl_object v2)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13;
 cl_object env0 = ECL_NIL;
 cl_object CLV0, CLV1, CLV2, CLV3;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4name_opts;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[59])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v5;
    v5 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4name_opts = v5;
   }
   {
    cl_object v5options;
    cl_object v6conc_name;
    cl_object v7default_constructor;
    cl_object v8copier;
    cl_object v9predicate;
    cl_object v10constructors;
    cl_object v11no_constructor;
    cl_object v12predicate_specified;
    cl_object v13include;
    cl_object v14print_function;
    cl_object v15print_object;
    cl_object v16initial_offset;
    cl_object v17offset;
    cl_object v18name_offset;
    cl_object v19documentation;
    cl_object v20atomic_accessors;
    cl_object env1 = env0;
    env1 = ECL_NIL;
    CLV0 = env1 = CONS(v3,env1);                  /*  SLOT-DESCRIPTIONS */
    if (!(ECL_CONSP(v4name_opts))) { goto L9; }
    T0 = ecl_car(v4name_opts);
    goto L8;
L9:;
    T0 = v4name_opts;
L8:;
    CLV1 = env1 = CONS(T0,env1);                  /*  NAME            */
    if (!(ECL_CONSP(v4name_opts))) { goto L12; }
    v5options = ecl_cdr(v4name_opts);
    goto L11;
L12:;
    v5options = ECL_NIL;
L11:;
    v6conc_name = si_base_string_concatenate(2, ECL_CONS_CAR(CLV1), VV[36]);
    T0 = si_base_string_concatenate(2, VV[37], ECL_CONS_CAR(CLV1));
    v7default_constructor = cl_intern(1, T0);
    T0 = si_base_string_concatenate(2, VV[38], ECL_CONS_CAR(CLV1));
    v8copier = cl_intern(1, T0);
    T0 = si_base_string_concatenate(2, ECL_CONS_CAR(CLV1), VV[39]);
    v9predicate = cl_intern(1, T0);
    v10constructors = ECL_NIL;
    v11no_constructor = ECL_NIL;
    v12predicate_specified = ECL_NIL;
    v13include = ECL_NIL;
    v14print_function = ECL_NIL;
    v15print_object = ECL_NIL;
    CLV2 = env1 = CONS(ECL_NIL,env1);             /*  TYPE            */
    CLV3 = env1 = CONS(ECL_NIL,env1);             /*  NAMED           */
    v16initial_offset = ECL_NIL;
    v17offset = ECL_NIL;
    v18name_offset = ECL_NIL;
    v19documentation = ECL_NIL;
    v20atomic_accessors = ECL_T;
    {
     cl_object v21os;
     cl_object v22o;
     cl_object v23v;
     v21os = v5options;
     v22o = ECL_NIL;
     v23v = ECL_NIL;
     goto L35;
L34:;
     T0 = ecl_car(v21os);
     if (!(ECL_CONSP(T0))) { goto L38; }
     T0 = ecl_cdar(v21os);
     if (ecl_endp(T0)) { goto L38; }
     v22o = ecl_caar(v21os);
     v23v = ecl_cadar(v21os);
     if (!(ecl_eql(v22o,ECL_SYM("CONC-NAME",1231)))) { goto L45; }
     if (!(v23v==ECL_NIL)) { goto L47; }
     v6conc_name = ECL_NIL;
     goto L37;
L47:;
     v6conc_name = v23v;
     goto L37;
L45:;
     if (!(ecl_eql(v22o,ECL_SYM("CONSTRUCTOR",1232)))) { goto L51; }
     if (!(v23v==ECL_NIL)) { goto L53; }
     v11no_constructor = ECL_T;
     goto L37;
L53:;
     T0 = ecl_cddar(v21os);
     if (!(ecl_endp(T0))) { goto L56; }
     v10constructors = CONS(v23v,v10constructors);
     goto L37;
L56:;
     T0 = ecl_cdar(v21os);
     v10constructors = CONS(T0,v10constructors);
     goto L37;
L51:;
     if (!(ecl_eql(v22o,ECL_SYM("COPIER",1234)))) { goto L60; }
     v8copier = v23v;
     goto L37;
L60:;
     if (!(ecl_eql(v22o,ECL_SYM("PREDICATE",1314)))) { goto L63; }
     v9predicate = v23v;
     v12predicate_specified = ECL_T;
     goto L37;
L63:;
     if (!(ecl_eql(v22o,ECL_SYM("INCLUDE",1275)))) { goto L68; }
     v13include = ecl_cdar(v21os);
     if ((si_get_sysprop(v23v, VV[28]))!=ECL_NIL) { goto L37; }
     cl_error(2, VV[40], v23v);
     goto L37;
L68:;
     if (!(ecl_eql(v22o,ECL_SYM("PRINT-FUNCTION",1318)))) { goto L73; }
     if (!(ECL_SYMBOLP(v23v))) { goto L76; }
     v14print_function = cl_list(2, ECL_SYM("QUOTE",681), v23v);
     goto L75;
L76:;
     v14print_function = cl_list(2, ECL_SYM("FUNCTION",398), v23v);
L75:;
     goto L37;
L73:;
     if (!(ecl_eql(v22o,ECL_SYM("PRINT-OBJECT",1319)))) { goto L78; }
     if (!(ECL_SYMBOLP(v23v))) { goto L81; }
     v15print_object = cl_list(2, ECL_SYM("QUOTE",681), v23v);
     goto L80;
L81:;
     v15print_object = cl_list(2, ECL_SYM("FUNCTION",398), v23v);
L80:;
     goto L37;
L78:;
     if (!(ecl_eql(v22o,ECL_SYM("TYPE",1346)))) { goto L83; }
     ECL_CONS_CAR(CLV2) = v23v;
     goto L37;
L83:;
     if (!(ecl_eql(v22o,ECL_SYM("INITIAL-OFFSET",1279)))) { goto L86; }
     v16initial_offset = v23v;
     goto L37;
L86:;
     if (!(ecl_eql(v22o,VV[41]))) { goto L89; }
     v20atomic_accessors = v23v;
     goto L37;
L89:;
     cl_error(2, VV[42], v22o);
     goto L37;
L38:;
     T0 = ecl_car(v21os);
     if (!(ECL_CONSP(T0))) { goto L93; }
     v22o = ecl_caar(v21os);
     goto L92;
L93:;
     v22o = ecl_car(v21os);
L92:;
     {
      cl_object v24;
      v24 = v22o;
      if (!(ecl_eql(v24,ECL_SYM("CONSTRUCTOR",1232)))) { goto L98; }
      v10constructors = CONS(v7default_constructor,v10constructors);
      goto L37;
L98:;
      if (!(ecl_eql(v24,ECL_SYM("CONC-NAME",1231)))) { goto L101; }
      v6conc_name = ECL_NIL;
      goto L37;
L101:;
      if ((ecl_memql(v24,VV[43]))!=ECL_NIL) { goto L37; }
      if (!(ecl_eql(v24,ECL_SYM("NAMED",1301)))) { goto L105; }
      ECL_CONS_CAR(CLV3) = ECL_T;
      goto L37;
L105:;
      cl_error(2, VV[42], v22o);
     }
L37:;
     v21os = ecl_cdr(v21os);
L35:;
     if (ecl_endp(v21os)) { goto L110; }
     goto L34;
L110:;
    }
    if (ecl_endp(ECL_CONS_CAR(CLV0))) { goto L112; }
    T0 = ecl_car(ECL_CONS_CAR(CLV0));
    if (!(ECL_STRINGP(T0))) { goto L112; }
    v19documentation = ecl_car(ECL_CONS_CAR(CLV0));
    ECL_CONS_CAR(CLV0) = ecl_cdr(ECL_CONS_CAR(CLV0));
L112:;
    if (Null(v13include)) { goto L118; }
    T0 = ecl_car(v13include);
    T1 = si_get_sysprop(T0, VV[30]);
    if (ecl_equal(ECL_CONS_CAR(CLV2),T1)) { goto L118; }
    T0 = ecl_car(v13include);
    cl_error(2, VV[44], T0);
L118:;
    if (Null(v13include)) { goto L123; }
    T0 = ecl_car(v13include);
    v17offset = si_get_sysprop(T0, VV[32]);
    goto L122;
L123:;
    v17offset = ecl_make_fixnum(0);
L122:;
    if (Null(ECL_CONS_CAR(CLV2))) { goto L125; }
    if (Null(v16initial_offset)) { goto L125; }
    v17offset = ecl_plus(v17offset,v16initial_offset);
L125:;
    if (Null(ECL_CONS_CAR(CLV2))) { goto L129; }
    if (Null(ECL_CONS_CAR(CLV3))) { goto L129; }
    if ((cl_subtypep(2, VV[45], ECL_CONS_CAR(CLV2)))!=ECL_NIL) { goto L132; }
    if ((cl_subtypep(2, ECL_CONS_CAR(CLV2), ECL_SYM("LIST",483)))!=ECL_NIL) { goto L132; }
    cl_error(2, VV[46], ECL_CONS_CAR(CLV2));
L132:;
    v18name_offset = v17offset;
    v17offset = ecl_one_plus(v17offset);
L129:;
    {
     cl_object v21;
     cl_object v22ds;
     cl_object v23sds;
     v21 = ECL_CONS_CAR(CLV0);
     v22ds = v21;
     v23sds = ECL_NIL;
     goto L144;
L143:;
     T0 = ecl_car(v22ds);
     T1 = L18parse_slot_description(2, T0, v17offset);
     v23sds = CONS(T1,v23sds);
     v17offset = ecl_one_plus(v17offset);
     v22ds = ecl_cdr(v22ds);
L144:;
     if (ecl_endp(v22ds)) { goto L152; }
     goto L143;
L152:;
     ECL_CONS_CAR(CLV0) = cl_nreverse(v23sds);
    }
    if (Null(ECL_CONS_CAR(CLV2))) { goto L155; }
    if (Null(ECL_CONS_CAR(CLV3))) { goto L155; }
    T0 = cl_list(2, VV[16], ECL_CONS_CAR(CLV1));
    ECL_CONS_CAR(CLV0) = CONS(T0,ECL_CONS_CAR(CLV0));
L155:;
    if (Null(ECL_CONS_CAR(CLV2))) { goto L159; }
    if (Null(v16initial_offset)) { goto L159; }
    T0 = cl_make_list(1, v16initial_offset);
    ECL_CONS_CAR(CLV0) = ecl_append(T0,ECL_CONS_CAR(CLV0));
L159:;
    {
     cl_object v21;
     v21 = ecl_make_bool(v13include==ECL_NIL);
     if (Null(v21)) { goto L165; }
     goto L163;
L165:;
     T0 = ecl_cdr(v13include);
     if (!(ecl_endp(T0))) { goto L167; }
     T0 = ecl_car(v13include);
     T1 = si_get_sysprop(T0, ECL_SYM("STRUCTURE-SLOT-DESCRIPTIONS",1171));
     ECL_CONS_CAR(CLV0) = ecl_append(T1,ECL_CONS_CAR(CLV0));
     goto L163;
L167:;
     {
      cl_object v22;
      {
       cl_object v23;
       v23 = ecl_make_cfun((cl_objectfn_fixed)LC25__lambda148,ECL_NIL,Cblock,1);
       v22 = v23;
      }
      {
       cl_object v23;
       cl_object v24;
       cl_object v25;
       v23 = ecl_cdr(v13include);
       v24 = ECL_NIL;
       {
        cl_object v26;
        v26 = v23;
        if (ecl_unlikely(!ECL_LISTP(v26))) FEtype_error_list(v26);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v25 = v26;
       }
       {
        cl_object v26;
        cl_object v27;
        v26 = ecl_list1(ECL_NIL);
        v27 = v26;
L180:;
        if (!(ecl_endp(v25))) { goto L182; }
        goto L181;
L182:;
        v24 = _ecl_car(v25);
        {
         cl_object v28;
         v28 = _ecl_cdr(v25);
         if (ecl_unlikely(!ECL_LISTP(v28))) FEtype_error_list(v28);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         v25 = v28;
        }
        {
         cl_object v28;
         v28 = v27;
         if (ecl_unlikely(ECL_ATOM(v28))) FEtype_error_cons(v28);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         T1 = v28;
        }
        T2 = ecl_function_dispatch(cl_env_copy,v22)(1, v24);
        v27 = ecl_list1(T2);
        (ECL_CONS_CDR(T1)=v27,T1);
        goto L180;
L181:;
        T0 = ecl_cdr(v26);
        goto L171;
       }
      }
     }
L171:;
     T1 = ecl_car(v13include);
     T2 = si_get_sysprop(T1, ECL_SYM("STRUCTURE-SLOT-DESCRIPTIONS",1171));
     T3 = L19overwrite_slot_descriptions(T0, T2);
     ECL_CONS_CAR(CLV0) = ecl_append(T3,ECL_CONS_CAR(CLV0));
    }
L163:;
    if (Null(v11no_constructor)) { goto L199; }
    if (Null(v10constructors)) { goto L198; }
    cl_error(1, VV[47]);
    goto L198;
L199:;
    if (!(v10constructors==ECL_NIL)) { goto L198; }
    v10constructors = ecl_list1(v7default_constructor);
L198:;
    if (Null(ECL_CONS_CAR(CLV2))) { goto L204; }
    if ((ECL_CONS_CAR(CLV3))!=ECL_NIL) { goto L204; }
    if (Null(v12predicate_specified)) { goto L207; }
    if (Null(v9predicate)) { goto L207; }
    cl_error(2, VV[48], v9predicate);
L207:;
    v9predicate = ECL_NIL;
L204:;
    if (Null(v13include)) { goto L211; }
    v13include = ecl_car(v13include);
L211:;
    if (Null(v14print_function)) { goto L214; }
    if (Null(ECL_CONS_CAR(CLV2))) { goto L214; }
    cl_error(1, VV[49]);
L214:;
    {
     cl_object v21;
     cl_object v22;
     T0 = cl_list(2, ECL_SYM("QUOTE",681), ECL_CONS_CAR(CLV1));
     T1 = cl_list(2, ECL_SYM("QUOTE",681), v6conc_name);
     T2 = cl_list(2, ECL_SYM("QUOTE",681), ECL_CONS_CAR(CLV2));
     T3 = cl_list(2, ECL_SYM("QUOTE",681), ECL_CONS_CAR(CLV3));
     T4 = cl_list(2, ECL_SYM("QUOTE",681), v3);
     T5 = cl_list(2, ECL_SYM("QUOTE",681), ECL_CONS_CAR(CLV0));
     T6 = cl_list(2, ECL_SYM("QUOTE",681), v8copier);
     T7 = cl_list(2, ECL_SYM("QUOTE",681), v13include);
     T8 = cl_list(2, ECL_SYM("QUOTE",681), v10constructors);
     T9 = cl_list(2, ECL_SYM("QUOTE",681), v17offset);
     T10 = cl_list(2, ECL_SYM("QUOTE",681), v18name_offset);
     T11 = cl_list(2, ECL_SYM("QUOTE",681), v19documentation);
     T12 = cl_list(2, ECL_SYM("QUOTE",681), v9predicate);
     v21 = cl_list(16, VV[35], T0, T1, T2, T3, T4, T5, T6, T7, v14print_function, v15print_object, T8, T9, T10, T11, T12);
     {
      cl_object v23;
      {
       cl_object v24;
       v24 = ecl_make_cclosure_va((cl_objectfn)LC26__lambda158,env1,Cblock,1);
       v23 = v24;
      }
      {
       cl_object v24;
       cl_object v25;
       v24 = ECL_NIL;
       {
        cl_object v26;
        v26 = v10constructors;
        if (ecl_unlikely(!ECL_LISTP(v26))) FEtype_error_list(v26);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v25 = v26;
       }
       {
        cl_object v26;
        cl_object v27;
        v26 = ecl_list1(ECL_NIL);
        v27 = v26;
L226:;
        if (!(ecl_endp(v25))) { goto L228; }
        goto L227;
L228:;
        v24 = _ecl_car(v25);
        {
         cl_object v28;
         v28 = _ecl_cdr(v25);
         if (ecl_unlikely(!ECL_LISTP(v28))) FEtype_error_list(v28);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         v25 = v28;
        }
        {
         cl_object v28;
         v28 = v27;
         if (ecl_unlikely(ECL_ATOM(v28))) FEtype_error_cons(v28);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         T0 = v28;
        }
        T1 = ecl_function_dispatch(cl_env_copy,v23)(1, v24);
        v27 = ecl_list1(T1);
        (ECL_CONS_CDR(T0)=v27,T0);
        goto L226;
L227:;
        v22 = ecl_cdr(v26);
        goto L218;
       }
      }
     }
L218:;
     if (Null(ecl_symbol_value(ECL_SYM("*REGISTER-WITH-PDE-HOOK*",1203)))) { goto L245; }
     T1 = cl_copy_tree(ecl_symbol_value(ECL_SYM("*SOURCE-LOCATION*",1202)));
     T0 = ecl_function_dispatch(cl_env_copy,ecl_symbol_value(ECL_SYM("*REGISTER-WITH-PDE-HOOK*",1203)))(3, T1, v1, ECL_NIL);
     goto L244;
L245:;
     T0 = ECL_NIL;
L244:;
     T1 = cl_list(2, ECL_SYM("QUOTE",681), ECL_CONS_CAR(CLV1));
     T2 = cl_list(2, ECL_SYM("FIND-CLASS",945), T1);
     T3 = cl_list(2, ECL_SYM("LOAD-TIME-VALUE",491), T2);
     T4 = cl_subst(3, T3, VV[17], v22);
     T5 = cl_listX(5, ECL_SYM("EVAL-WHEN",342), VV[50], v21, T0, T4);
     T6 = cl_list(2, VV[17], v21);
     T7 = ecl_list1(T6);
     T8 = cl_listX(3, ECL_SYM("LET",479), T7, v22);
     T9 = cl_list(3, ECL_SYM("EVAL-WHEN",342), VV[51], T8);
     T10 = Null(v20atomic_accessors)?ECL_T:ECL_NIL;
     T11 = L2make_atomic_accessors(ECL_CONS_CAR(CLV1), v6conc_name, ECL_CONS_CAR(CLV2), ECL_CONS_CAR(CLV0), T10);
     T12 = cl_listX(3, ECL_SYM("EVAL-WHEN",342), VV[52], T11);
     T13 = cl_list(2, ECL_SYM("QUOTE",681), ECL_CONS_CAR(CLV1));
     value0 = cl_list(5, ECL_SYM("PROGN",673), T5, T9, T12, T13);
     return value0;
    }
   }
  }
 }
}
/*      local function LAMBDA148                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC25__lambda148(cl_object v1sd)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = L18parse_slot_description(3, v1sd, ecl_make_fixnum(0), VV[24]);
  return value0;
 }
}
/*      closure LAMBDA158                                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC26__lambda158(cl_narg narg, cl_object v1constructor, ...)
{
 cl_object CLV0, CLV1, CLV2, CLV3;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV3 = env0;                                     /*  NAMED           */
 CLV2 = _ecl_cdr(CLV3);
 CLV1 = _ecl_cdr(CLV2);
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=1)) FEwrong_num_arguments_anonym();
 {
TTL:
  value0 = L12make_constructor(ECL_CONS_CAR(CLV1), v1constructor, ECL_CONS_CAR(CLV2), ECL_CONS_CAR(CLV3), ECL_CONS_CAR(CLV0));
  return value0;
 }
 }
}

#include "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/build/lsp/defstruct.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclO9uOE9a7_0cXZTr51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:LSP;DEFSTRUCT.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclO9uOE9a7_0cXZTr51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  ecl_cmp_defun(VV[54]);                          /*  SLOT-ACCESS-FUNCTION */
  ecl_cmp_defun(VV[55]);                          /*  MAKE-ATOMIC-ACCESSORS */
  ecl_cmp_defun(VV[56]);                          /*  STRUCTURE-TYPE-ERROR */
  (void)0; /* No entry created for MAKE-ACCESS-FUNCTION */
  (void)0; /* No entry created for DO-SETF-STRUCTURE-METHOD */
  (void)0; /* No entry created for PROCESS-BOA-LAMBDA-LIST */
  (void)0; /* No entry created for MAKE-CONSTRUCTOR */
  (void)0; /* No entry created for MAKE-PREDICATE */
  (void)0; /* No entry created for PARSE-SLOT-DESCRIPTION */
  (void)0; /* No entry created for OVERWRITE-SLOT-DESCRIPTIONS */
  (void)0; /* No entry created for %STRUCT-LAYOUT-COMPATIBLE-P */
  ecl_cmp_defun(VV[61]);                          /*  DEFINE-STRUCTURE */
  ecl_cmp_defmacro(VV[63]);                       /*  DEFSTRUCT       */
}
