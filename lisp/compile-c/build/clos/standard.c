/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CLOS;STANDARD.LSP                                 */
#include <ecl/ecl-cmp.h>
#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/clos/standard.eclh"
/*      local function INITIALIZE-INSTANCE                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC1initialize_instance(cl_narg narg, cl_object v1instance, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2initargs;
  ecl_va_list args; ecl_va_start(args,v1instance,narg,1);
  v2initargs = cl_grab_rest_args(args);
  ecl_va_end(args);
  T0 = (ECL_SYM("SHARED-INITIALIZE",967)->symbol.gfdef);
  value0 = cl_apply(4, T0, v1instance, ECL_T, v2initargs);
  return value0;
 }
}
/*      local function REINITIALIZE-INSTANCE                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC2reinitialize_instance(cl_narg narg, cl_object v1instance, ...)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2initargs;
  ecl_va_list args; ecl_va_start(args,v1instance,narg,1);
  v2initargs = cl_grab_rest_args(args);
  ecl_va_end(args);
  T0 = cl_class_of(v1instance);
  T1 = (ECL_SYM("REINITIALIZE-INSTANCE",965)->symbol.gfdef);
  T2 = ecl_list1(v1instance);
  T3 = (cl_env_copy->function=(ECL_SYM("COMPUTE-APPLICABLE-METHODS",938)->symbol.gfdef))->cfun.entry(2, T1, T2) /*  COMPUTE-APPLICABLE-METHODS */;
  T4 = (ECL_SYM("SHARED-INITIALIZE",967)->symbol.gfdef);
  T5 = cl_list(2, v1instance, ECL_T);
  T6 = (cl_env_copy->function=(ECL_SYM("COMPUTE-APPLICABLE-METHODS",938)->symbol.gfdef))->cfun.entry(2, T4, T5) /*  COMPUTE-APPLICABLE-METHODS */;
  T7 = L46valid_keywords_from_methods(2, T3, T6);
  L47check_initargs(3, T0, v2initargs, T7);
  T0 = (ECL_SYM("SHARED-INITIALIZE",967)->symbol.gfdef);
  value0 = cl_apply(4, T0, v1instance, ECL_NIL, v2initargs);
  return value0;
 }
}
/*      local function SHARED-INITIALIZE                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC3shared_initialize(cl_narg narg, cl_object v1instance, cl_object v2slot_names, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 {
  cl_object v3initargs;
  ecl_va_list args; ecl_va_start(args,v2slot_names,narg,2);
  v3initargs = cl_grab_rest_args(args);
  ecl_va_end(args);
  {
   cl_object v4class;
   v4class = cl_class_of(v1instance);
   {
    cl_object v5;
    v5 = ecl_function_dispatch(cl_env_copy,ECL_SYM("CLASS-SLOTS",1555))(1, v4class) /*  CLASS-SLOTS */;
    goto L6;
L5:;
    {
     cl_object v6slotd;
     v6slotd = ecl_car(v5);
     {
      cl_object v7slot_initargs;
      cl_object v8slot_name;
      v7slot_initargs = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-INITARGS",1605))(1, v6slotd) /*  SLOT-DEFINITION-INITARGS */;
      v8slot_name = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-NAME",1609))(1, v6slotd) /*  SLOT-DEFINITION-NAME */;
      {
       cl_object v9l;
       cl_object v10initarg;
       cl_object v11val;
       v9l = v3initargs;
       v10initarg = ECL_NIL;
       v11val = ECL_NIL;
       goto L21;
L20:;
       {
        cl_object v12;
        v12 = v9l;
        {
         cl_object v13;
         v13 = v12;
         if (ecl_unlikely(!ECL_LISTP(v13))) FEtype_error_list(v13);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
        }
        if (Null(v12)) { goto L29; }
        {
         cl_object v13;
         v13 = ECL_CONS_CDR(v12);
         v9l = v13;
         v12 = ECL_CONS_CAR(v12);
        }
L29:;
        v10initarg = v12;
       }
       if (!(ecl_endp(v9l))) { goto L35; }
       si_simple_program_error(2, VV[0], v3initargs);
L35:;
       if (ECL_SYMBOLP(v10initarg)) { goto L37; }
       si_simple_program_error(2, VV[1], v10initarg);
L37:;
       {
        cl_object v12;
        v12 = v9l;
        {
         cl_object v13;
         v13 = v12;
         if (ecl_unlikely(!ECL_LISTP(v13))) FEtype_error_list(v13);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
        }
        if (Null(v12)) { goto L45; }
        {
         cl_object v13;
         v13 = ECL_CONS_CDR(v12);
         v9l = v13;
         v12 = ECL_CONS_CAR(v12);
        }
L45:;
        v11val = v12;
       }
       if (Null(si_memq(v10initarg,v7slot_initargs))) { goto L51; }
       (cl_env_copy->function=ECL_CONS_CAR(VV[55]))->cfun.entry(3, v11val, v1instance, v8slot_name) /*  (SETF SLOT-VALUE) */;
       value0 = ECL_T;
       goto L15;
L51:;
L21:;
       if (v9l==ECL_NIL) { goto L54; }
       goto L20;
L54:;
       value0 = ECL_NIL;
      }
L15:;
      if ((value0)!=ECL_NIL) { goto L14; }
      if (Null(v2slot_names)) { goto L10; }
      if ((v2slot_names)==(ECL_T)) { goto L59; }
      if (Null(ecl_memql(v8slot_name,v2slot_names))) { goto L10; }
      goto L58;
L59:;
L58:;
      if ((cl_slot_boundp(v1instance, v8slot_name))!=ECL_NIL) { goto L10; }
      {
       cl_object v9initfun;
       v9initfun = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-INITFUNCTION",1607))(1, v6slotd) /*  SLOT-DEFINITION-INITFUNCTION */;
       if (Null(v9initfun)) { goto L10; }
       {
        cl_object v10;
        v10 = ecl_function_dispatch(cl_env_copy,v9initfun)(0);
        (cl_env_copy->function=ECL_CONS_CAR(VV[55]))->cfun.entry(3, v10, v1instance, v8slot_name) /*  (SETF SLOT-VALUE) */;
        goto L10;
       }
      }
L14:;
      goto L10;
     }
L10:;
    }
    v5 = ecl_cdr(v5);
L6:;
    if (Null(v5)) { goto L66; }
    goto L5;
L66:;
   }
  }
  value0 = v1instance;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for COMPUTE-INSTANCE-SIZE                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L4compute_instance_size(cl_object v1slots)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2slotd;
   cl_object v3;
   v2slotd = ECL_NIL;
   {
    cl_object v4;
    v4 = v1slots;
    if (ecl_unlikely(!ECL_LISTP(v4))) FEtype_error_list(v4);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v3 = v4;
   }
   {
    cl_object v4last_location;
    v4last_location = ecl_make_fixnum(0);
    {
     cl_object v5num_slots;
     v5num_slots = ecl_make_fixnum(0);
L7:;
     if (!(ecl_endp(v3))) { goto L9; }
     goto L8;
L9:;
     v2slotd = _ecl_car(v3);
     {
      cl_object v6;
      v6 = _ecl_cdr(v3);
      if (ecl_unlikely(!ECL_LISTP(v6))) FEtype_error_list(v6);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v3 = v6;
     }
     T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-ALLOCATION",1604))(1, v2slotd) /*  SLOT-DEFINITION-ALLOCATION */;
     if (!((T0)==(ECL_SYM("INSTANCE",1282)))) { goto L17; }
     {
      cl_object v6new_loc;
      v6new_loc = L33safe_slot_definition_location(1, v2slotd);
      v5num_slots = ecl_plus(v5num_slots,ecl_make_fixnum(1));
      if (Null(v6new_loc)) { goto L17; }
      if (!(ecl_greater(v6new_loc,v4last_location))) { goto L17; }
      v4last_location = v6new_loc;
     }
L17:;
     goto L7;
L8:;
     T0 = ecl_one_plus(v4last_location);
     value0 = ((ecl_float_nan_p(T0) || ecl_greatereq(v5num_slots,T0))?v5num_slots:T0);
     cl_env_copy->nvalues = 1;
     return value0;
    }
   }
  }
 }
}
/*      local function ALLOCATE-INSTANCE                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC5allocate_instance(cl_narg narg, cl_object v1class, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  if ((ecl_function_dispatch(cl_env_copy,ECL_SYM("CLASS-FINALIZED-P",1552))(1, v1class) /*  CLASS-FINALIZED-P */)!=ECL_NIL) { goto L1; }
  ecl_function_dispatch(cl_env_copy,ECL_SYM("FINALIZE-INHERITANCE",1574))(1, v1class) /*  FINALIZE-INHERITANCE */;
L1:;
  {
   cl_object v2x;
   T0 = ecl_function_dispatch(cl_env_copy,VV[57])(1, v1class) /*  CLASS-SIZE */;
   v2x = si_allocate_raw_instance(ECL_NIL, v1class, T0);
   si_instance_sig_set(v2x);
   value0 = v2x;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function MAKE-INSTANCE                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC6make_instance(cl_narg narg, cl_object v1class, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2initargs;
  ecl_va_list args; ecl_va_start(args,v1class,narg,1);
  v2initargs = cl_grab_rest_args(args);
  ecl_va_end(args);
  if ((ecl_function_dispatch(cl_env_copy,ECL_SYM("CLASS-FINALIZED-P",1552))(1, v1class) /*  CLASS-FINALIZED-P */)!=ECL_NIL) { goto L1; }
  ecl_function_dispatch(cl_env_copy,ECL_SYM("FINALIZE-INHERITANCE",1574))(1, v1class) /*  FINALIZE-INHERITANCE */;
L1:;
  v2initargs = L8add_default_initargs(v1class, v2initargs);
  {
   cl_object v3keywords;
   if (Null(cl_slot_boundp(v1class, VV[3]))) { goto L7; }
   v3keywords = ecl_function_dispatch(cl_env_copy,VV[58])(1, v1class) /*  CLASS-VALID-INITARGS */;
   goto L6;
L7:;
   v3keywords = L19precompute_valid_initarg_keywords(v1class);
L6:;
   T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("CLASS-SLOTS",1555))(1, v1class) /*  CLASS-SLOTS */;
   L47check_initargs(5, v1class, v2initargs, ECL_NIL, T0, v3keywords);
  }
  {
   cl_object v3instance;
   T0 = (ECL_SYM("ALLOCATE-INSTANCE",929)->symbol.gfdef);
   v3instance = cl_apply(3, T0, v1class, v2initargs);
   T0 = (ECL_SYM("INITIALIZE-INSTANCE",949)->symbol.gfdef);
   cl_apply(3, T0, v3instance, v2initargs);
   value0 = v3instance;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for DELETE-KEYWORD                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L7delete_keyword(cl_object v1keyword, cl_object v2list)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
L2:;
  T0 = cl_getf(3, v2list, v1keyword, v2list);
  if (!((T0)==(v2list))) { goto L4; }
  goto L3;
L4:;
  {
   cl_object v4;
   cl_object v5;                                  /*  FLAG            */
   value0 = si_rem_f(v2list, v1keyword);
   {
    v4 = value0;
    v5 = cl_env_copy->values[1];
   }
   v2list = v4;
  }
  goto L2;
L3:;
  value0 = v2list;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for ADD-DEFAULT-INITARGS                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L8add_default_initargs(cl_object v1class, cl_object v2initargs)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3output;
   v3output = ECL_NIL;
   {
    cl_object v4;
    v4 = ecl_function_dispatch(cl_env_copy,ECL_SYM("CLASS-DEFAULT-INITARGS",1547))(1, v1class) /*  CLASS-DEFAULT-INITARGS */;
    goto L6;
L5:;
    {
     cl_object v5scan;
     v5scan = ecl_car(v4);
     {
      cl_object v6initarg;
      cl_object v7value;
      cl_object v8supplied_value;
      v6initarg = ecl_car(v5scan);
      v7value = ecl_caddr(v5scan);
      v8supplied_value = ecl_function_dispatch(cl_env_copy,VV[60])(2, v2initargs, v6initarg) /*  SEARCH-KEYWORD */;
      if ((v8supplied_value)==(VV[5])) { goto L15; }
      if (!((v8supplied_value)==(ECL_SYM("MISSING-KEYWORD",2015)))) { goto L10; }
      goto L14;
L15:;
L14:;
      if (!((v8supplied_value)==(VV[5]))) { goto L17; }
      v2initargs = L7delete_keyword(v6initarg, v2initargs);
L17:;
      T0 = ecl_function_dispatch(cl_env_copy,v7value)(0);
      v3output = cl_listX(3, T0, v6initarg, v3output);
     }
L10:;
    }
    v4 = ecl_cdr(v4);
L6:;
    if (Null(v4)) { goto L24; }
    goto L5;
L24:;
   }
   if (Null(v3output)) { goto L26; }
   T0 = cl_nreverse(v3output);
   value0 = ecl_append(v2initargs,T0);
   cl_env_copy->nvalues = 1;
   return value0;
L26:;
   value0 = v2initargs;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function DIRECT-SLOT-DEFINITION-CLASS                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC9direct_slot_definition_class(cl_narg narg, cl_object v1class, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  value0 = cl_find_class(2, ECL_SYM("STANDARD-DIRECT-SLOT-DEFINITION",1621), ECL_NIL);
  return value0;
 }
}
/*      local function EFFECTIVE-SLOT-DEFINITION-CLASS                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC10effective_slot_definition_class(cl_narg narg, cl_object v1class, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  value0 = cl_find_class(2, ECL_SYM("STANDARD-EFFECTIVE-SLOT-DEFINITION",1622), ECL_NIL);
  return value0;
 }
}
/*      function definition for HAS-FORWARD-REFERENCED-PARENTS        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L11has_forward_referenced_parents(cl_object v1class)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = L27forward_referenced_class_p(v1class);
  if ((value0)!=ECL_NIL) { goto L2; }
  if ((ecl_function_dispatch(cl_env_copy,ECL_SYM("CLASS-FINALIZED-P",1552))(1, v1class) /*  CLASS-FINALIZED-P */)!=ECL_NIL) { goto L5; }
  T0 = (VV[6]->symbol.gfdef);
  T1 = ecl_function_dispatch(cl_env_copy,ECL_SYM("CLASS-DIRECT-SUPERCLASSES",1551))(1, v1class) /*  CLASS-DIRECT-SUPERCLASSES */;
  value0 = cl_some(2, T0, T1);
  return value0;
L5:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L2:;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for FINALIZE-UNLESS-FORWARD               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L12finalize_unless_forward(cl_object v1class)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if ((L27forward_referenced_class_p(v1class))!=ECL_NIL) { goto L1; }
  T0 = (VV[6]->symbol.gfdef);
  T1 = ecl_function_dispatch(cl_env_copy,ECL_SYM("CLASS-DIRECT-SUPERCLASSES",1551))(1, v1class) /*  CLASS-DIRECT-SUPERCLASSES */;
  if ((cl_find_if(2, T0, T1))!=ECL_NIL) { goto L1; }
  value0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("FINALIZE-INHERITANCE",1574))(1, v1class) /*  FINALIZE-INHERITANCE */;
  return value0;
L1:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function INITIALIZE-INSTANCE                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC15initialize_instance(cl_narg narg, cl_object v1class, ...)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2initargs;
  cl_object v3direct_slots;
  cl_object v4direct_superclasses;
  ecl_va_list args; ecl_va_start(args,v1class,narg,1);
  {
   cl_object keyvars[4];
   cl_parse_key(args,2,LC15initialize_instancekeys,keyvars,(cl_object*)&v2initargs,TRUE);
   ecl_va_end(args);
   v3direct_slots = keyvars[0];
   v4direct_superclasses = keyvars[1];
  }
  {
   cl_object env1 = env0;
   if (!(ECL_LISTP(ecl_symbol_value(ECL_SYM(".COMBINED-METHOD-ARGS.",1534))))) { goto L2; }
   T0 = ecl_symbol_value(ECL_SYM(".COMBINED-METHOD-ARGS.",1534));
   goto L1;
L2:;
   T1 = (ECL_SYM("LIST",483)->symbol.gfdef);
   T0 = cl_apply(2, T1, ecl_symbol_value(ECL_SYM(".COMBINED-METHOD-ARGS.",1534)));
L1:;
   env1 = ECL_NIL;
   CLV0 = env1 = CONS(T0,env1);                   /*  .CLOSED-COMBINED-METHOD-ARGS. */
   CLV1 = env1 = CONS(ecl_symbol_value(ECL_SYM("*NEXT-METHODS*",1536)),env1); /*  .NEXT-METHODS. */
   {
    cl_object v5;
    v5 = ecl_make_cclosure_va((cl_objectfn)LC13call_next_method,env1,Cblock,0);
    {
     cl_object v6s;
     cl_object v7;
     v6s = ECL_NIL;
     {
      cl_object v8;
      v8 = v3direct_slots;
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
L13:;
      if (!(ecl_endp(v7))) { goto L15; }
      goto L14;
L15:;
      v6s = _ecl_car(v7);
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
      T2 = ecl_function_dispatch(cl_env_copy,VV[65])(2, v1class, v6s) /*  CANONICAL-SLOT-TO-DIRECT-SLOT */;
      v9 = ecl_list1(T2);
      (ECL_CONS_CDR(T1)=v9,T1);
      goto L13;
L14:;
      T0 = ecl_cdr(v8);
      goto L6;
     }
    }
L6:;
    cl_apply(7, v5, v1class, ECL_SYM("DIRECT-SLOTS",992), T0, ECL_SYM("DIRECT-SUPERCLASSES",993), v4direct_superclasses, v2initargs);
    L12finalize_unless_forward(v1class);
    value0 = v1class;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      closure CALL-NEXT-METHOD                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC13call_next_method(cl_narg narg, ...)
{
 cl_object T0, T1, T2;
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV1 = env0;                                     /*  .NEXT-METHODS.  */
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 {
  cl_object v1args;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  v1args = cl_grab_rest_args(args);
  ecl_va_end(args);
  if ((ECL_CONS_CAR(CLV1))!=ECL_NIL) { goto L1; }
  cl_error(1, VV[8]);
L1:;
  T0 = ecl_car(ECL_CONS_CAR(CLV1));
  value0 = v1args;
  if ((value0)!=ECL_NIL) { goto L6; }
  T1 = ECL_CONS_CAR(CLV0);
  goto L4;
L6:;
  T1 = value0;
  goto L4;
L4:;
  T2 = ecl_cdr(ECL_CONS_CAR(CLV1));
  value0 = ecl_function_dispatch(cl_env_copy,T0)(2, T1, T2);
  return value0;
 }
 }
}
/*      local function SHARED-INITIALIZE                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC18shared_initialize(cl_narg narg, cl_object v1class, cl_object v2slot_names, ...)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 {
  cl_object v3initargs;
  cl_object v4direct_superclasses;
  cl_object v5direct_superclasses_p;
  ecl_va_list args; ecl_va_start(args,v2slot_names,narg,2);
  {
   cl_object keyvars[2];
   cl_parse_key(args,1,LC18shared_initializekeys,keyvars,(cl_object*)&v3initargs,TRUE);
   ecl_va_end(args);
   v4direct_superclasses = keyvars[0];
   v5direct_superclasses_p = keyvars[1];
  }
  {
   cl_object env1 = env0;
   if (!(ECL_LISTP(ecl_symbol_value(ECL_SYM(".COMBINED-METHOD-ARGS.",1534))))) { goto L2; }
   T0 = ecl_symbol_value(ECL_SYM(".COMBINED-METHOD-ARGS.",1534));
   goto L1;
L2:;
   T1 = (ECL_SYM("LIST",483)->symbol.gfdef);
   T0 = cl_apply(2, T1, ecl_symbol_value(ECL_SYM(".COMBINED-METHOD-ARGS.",1534)));
L1:;
   env1 = ECL_NIL;
   CLV0 = env1 = CONS(T0,env1);                   /*  .CLOSED-COMBINED-METHOD-ARGS. */
   CLV1 = env1 = CONS(ecl_symbol_value(ECL_SYM("*NEXT-METHODS*",1536)),env1); /*  .NEXT-METHODS. */
   {
    cl_object v6;
    v6 = ecl_make_cclosure_va((cl_objectfn)LC16call_next_method,env1,Cblock,0);
    if (Null(v5direct_superclasses_p)) { goto L5; }
    {
     cl_object v7class;
     cl_object v8direct_superclasses;
     if (Null(cl_slot_boundp(v1class, VV[9]))) { goto L9; }
     T0 = cl_slot_value(v1class, VV[9]);
     goto L8;
L9:;
     T0 = ECL_NIL;
L8:;
     v7class = cl_apply(6, v6, v1class, v2slot_names, ECL_SYM("DIRECT-SUPERCLASSES",993), T0, v3initargs);
     v8direct_superclasses = L25check_direct_superclasses(v7class, v4direct_superclasses);
     {
      cl_object v9;
      cl_object v10c;
      cl_object v11;
      v9 = ecl_function_dispatch(cl_env_copy,ECL_SYM("CLASS-DIRECT-SUPERCLASSES",1551))(1, v7class) /*  CLASS-DIRECT-SUPERCLASSES */;
      v10c = ECL_NIL;
      {
       cl_object v12;
       v12 = v9;
       if (ecl_unlikely(!ECL_LISTP(v12))) FEtype_error_list(v12);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v11 = v12;
      }
L18:;
      if (!(ecl_endp(v11))) { goto L20; }
      goto L19;
L20:;
      v10c = _ecl_car(v11);
      {
       cl_object v12;
       v12 = _ecl_cdr(v11);
       if (ecl_unlikely(!ECL_LISTP(v12))) FEtype_error_list(v12);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v11 = v12;
      }
      if ((si_memq(v10c,v8direct_superclasses))!=ECL_NIL) { goto L28; }
      ecl_function_dispatch(cl_env_copy,ECL_SYM("REMOVE-DIRECT-SUBCLASS",1600))(2, v10c, v7class) /*  REMOVE-DIRECT-SUBCLASS */;
L28:;
      goto L18;
L19:;
     }
     (cl_env_copy->function=ECL_CONS_CAR(VV[66]))->cfun.entry(2, v8direct_superclasses, v7class) /*  (SETF CLASS-DIRECT-SUPERCLASSES) */;
     {
      cl_object v9c;
      cl_object v10;
      v9c = ECL_NIL;
      {
       cl_object v11;
       v11 = v8direct_superclasses;
       if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v10 = v11;
      }
L37:;
      if (!(ecl_endp(v10))) { goto L39; }
      goto L38;
L39:;
      v9c = _ecl_car(v10);
      {
       cl_object v11;
       v11 = _ecl_cdr(v10);
       if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v10 = v11;
      }
      ecl_function_dispatch(cl_env_copy,ECL_SYM("ADD-DIRECT-SUBCLASS",1546))(2, v9c, v7class) /*  ADD-DIRECT-SUBCLASS */;
      goto L37;
L38:;
     }
     value0 = v7class;
     cl_env_copy->nvalues = 1;
     return value0;
    }
L5:;
    value0 = cl_apply(4, v6, v1class, v2slot_names, v3initargs);
    return value0;
   }
  }
 }
}
/*      closure CALL-NEXT-METHOD                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC16call_next_method(cl_narg narg, ...)
{
 cl_object T0, T1, T2;
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV1 = env0;                                     /*  .NEXT-METHODS.  */
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 {
  cl_object v1args;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  v1args = cl_grab_rest_args(args);
  ecl_va_end(args);
  if ((ECL_CONS_CAR(CLV1))!=ECL_NIL) { goto L1; }
  cl_error(1, VV[8]);
L1:;
  T0 = ecl_car(ECL_CONS_CAR(CLV1));
  value0 = v1args;
  if ((value0)!=ECL_NIL) { goto L6; }
  T1 = ECL_CONS_CAR(CLV0);
  goto L4;
L6:;
  T1 = value0;
  goto L4;
L4:;
  T2 = ecl_cdr(ECL_CONS_CAR(CLV1));
  value0 = ecl_function_dispatch(cl_env_copy,T0)(2, T1, T2);
  return value0;
 }
 }
}
/*      function definition for PRECOMPUTE-VALID-INITARG-KEYWORDS     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L19precompute_valid_initarg_keywords(cl_object v1class)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2;
   {
    cl_object v3methods;
    T0 = (ECL_SYM("ALLOCATE-INSTANCE",929)->symbol.gfdef);
    T1 = ecl_list1(v1class);
    T2 = (cl_env_copy->function=(ECL_SYM("COMPUTE-APPLICABLE-METHODS",938)->symbol.gfdef))->cfun.entry(2, T0, T1) /*  COMPUTE-APPLICABLE-METHODS */;
    T3 = (ECL_SYM("INITIALIZE-INSTANCE",949)->symbol.gfdef);
    T4 = ecl_function_dispatch(cl_env_copy,ECL_SYM("CLASS-PROTOTYPE",1554))(1, v1class) /*  CLASS-PROTOTYPE */;
    T5 = ecl_list1(T4);
    T6 = (cl_env_copy->function=(ECL_SYM("COMPUTE-APPLICABLE-METHODS",938)->symbol.gfdef))->cfun.entry(2, T3, T5) /*  COMPUTE-APPLICABLE-METHODS */;
    T7 = (ECL_SYM("SHARED-INITIALIZE",967)->symbol.gfdef);
    T8 = ecl_function_dispatch(cl_env_copy,ECL_SYM("CLASS-PROTOTYPE",1554))(1, v1class) /*  CLASS-PROTOTYPE */;
    T9 = cl_list(2, T8, ECL_T);
    T10 = (cl_env_copy->function=(ECL_SYM("COMPUTE-APPLICABLE-METHODS",938)->symbol.gfdef))->cfun.entry(2, T7, T9) /*  COMPUTE-APPLICABLE-METHODS */;
    v3methods = cl_nconc(3, T2, T6, T10);
    {
     cl_object v4m;
     cl_object v5;
     v4m = ECL_NIL;
     {
      cl_object v6;
      v6 = v3methods;
      if (ecl_unlikely(!ECL_LISTP(v6))) FEtype_error_list(v6);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v5 = v6;
     }
     {
      cl_object v6k;
      v6k = ECL_NIL;
      {
       cl_object v7;
       cl_object v8;
       v7 = ecl_list1(ECL_NIL);
       v8 = v7;
L13:;
       if (!(ecl_endp(v5))) { goto L15; }
       goto L14;
L15:;
       v4m = _ecl_car(v5);
       {
        cl_object v9;
        v9 = _ecl_cdr(v5);
        if (ecl_unlikely(!ECL_LISTP(v9))) FEtype_error_list(v9);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v5 = v9;
       }
       v6k = ecl_function_dispatch(cl_env_copy,VV[68])(1, v4m) /*  METHOD-KEYWORDS */;
       if (!((v6k)==(ECL_T))) { goto L25; }
       v2 = ECL_T;
       goto L1;
L25:;
       {
        cl_object v9;
        v9 = cl_copy_list(v6k);
        {
         cl_object v10;
         v10 = v8;
         if (ecl_unlikely(ECL_ATOM(v10))) FEtype_error_cons(v10);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         T0 = v10;
        }
        (ECL_CONS_CDR(T0)=v9,T0);
        if (Null(v9)) { goto L27; }
       }
       T0 = ecl_cdr(v8);
       v8 = ecl_last(T0,1);
L27:;
       goto L13;
L14:;
       v2 = ecl_cdr(v7);
       goto L1;
      }
     }
    }
   }
L1:;
   value0 = (cl_env_copy->function=ECL_CONS_CAR(VV[69]))->cfun.entry(2, v2, v1class) /*  (SETF CLASS-VALID-INITARGS) */;
   return value0;
  }
 }
}
/*      function definition for UPDATE-DEPENDENTS                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L21update_dependents(cl_object v1object, cl_object v2initargs)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  env0 = ECL_NIL;
  CLV0 = env0 = CONS(v1object,env0);              /*  OBJECT          */
  CLV1 = env0 = CONS(v2initargs,env0);            /*  INITARGS        */
  if (Null(ecl_symbol_value(VV[11]))) { goto L1; }
  {
   cl_object v3;
   v3 = ecl_make_cclosure_va((cl_objectfn)LC20__lambda112,env0,Cblock,1);
   T0 = v3;
  }
  value0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("MAP-DEPENDENTS",1590))(2, ECL_CONS_CAR(CLV0), T0) /*  MAP-DEPENDENTS */;
  return value0;
L1:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      closure LAMBDA112                                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC20__lambda112(cl_narg narg, cl_object v1dep, ...)
{
 cl_object T0;
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV1 = env0;                                     /*  INITARGS        */
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=1)) FEwrong_num_arguments_anonym();
 {
TTL:
  T0 = (ECL_SYM("UPDATE-DEPENDENT",1634)->symbol.gfdef);
  value0 = cl_apply(4, T0, ECL_CONS_CAR(CLV0), v1dep, ECL_CONS_CAR(CLV1));
  return value0;
 }
 }
}
/*      local function SHARED-INITIALIZE                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC22shared_initialize(cl_narg narg, cl_object v1class, cl_object v2slot_names, ...)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 {
  cl_object v3initargs;
  cl_object v4optimize_slot_access;
  cl_object v5sealedp;
  ecl_va_list args; ecl_va_start(args,v2slot_names,narg,2);
  {
   cl_object keyvars[4];
   cl_parse_key(args,2,LC22shared_initializekeys,keyvars,(cl_object*)&v3initargs,TRUE);
   ecl_va_end(args);
   if (Null(keyvars[2])) {
    v4optimize_slot_access = ecl_list1(ecl_symbol_value(ECL_SYM("*OPTIMIZE-SLOT-ACCESS*",1537)));
   } else {
    v4optimize_slot_access = keyvars[0];
   }
   v5sealedp = keyvars[1];
  }
  {
   cl_object v6;
   v6 = ecl_car(v4optimize_slot_access);
   (cl_env_copy->function=ECL_CONS_CAR(VV[55]))->cfun.entry(3, v6, v1class, VV[13]) /*  (SETF SLOT-VALUE) */;
  }
  {
   cl_object v6;
   if (Null(v5sealedp)) { goto L7; }
   v6 = ECL_T;
   goto L5;
L7:;
   v6 = ECL_NIL;
   goto L5;
L5:;
   (cl_env_copy->function=ECL_CONS_CAR(VV[55]))->cfun.entry(3, v6, v1class, VV[14]) /*  (SETF SLOT-VALUE) */;
  }
  if (Null(ecl_symbol_value(ECL_SYM("*NEXT-METHODS*",1536)))) { goto L11; }
  T0 = ecl_car(ecl_symbol_value(ECL_SYM("*NEXT-METHODS*",1536)));
  T1 = ecl_cdr(ecl_symbol_value(ECL_SYM("*NEXT-METHODS*",1536)));
  v1class = ecl_function_dispatch(cl_env_copy,T0)(2, ecl_symbol_value(ECL_SYM(".COMBINED-METHOD-ARGS.",1534)), T1);
  goto L10;
L11:;
  v1class = cl_error(1, VV[15]);
L10:;
  L21update_dependents(v1class, v3initargs);
  value0 = v1class;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function ADD-DIRECT-SUBCLASS                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC23add_direct_subclass(cl_object v1parent, cl_object v2child)
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
   T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("CLASS-DIRECT-SUBCLASSES",1550))(1, v1parent) /*  CLASS-DIRECT-SUBCLASSES */;
   v3 = cl_adjoin(2, v2child, T0);
   value0 = (cl_env_copy->function=ECL_CONS_CAR(VV[73]))->cfun.entry(2, v3, v1parent) /*  (SETF CLASS-DIRECT-SUBCLASSES) */;
   return value0;
  }
 }
}
/*      local function REMOVE-DIRECT-SUBCLASS                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC24remove_direct_subclass(cl_object v1parent, cl_object v2child)
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
   T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("CLASS-DIRECT-SUBCLASSES",1550))(1, v1parent) /*  CLASS-DIRECT-SUBCLASSES */;
   v3 = cl_remove(2, v2child, T0);
   value0 = (cl_env_copy->function=ECL_CONS_CAR(VV[73]))->cfun.entry(2, v3, v1parent) /*  (SETF CLASS-DIRECT-SUBCLASSES) */;
   return value0;
  }
 }
}
/*      function definition for CHECK-DIRECT-SUPERCLASSES             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L25check_direct_superclasses(cl_object v1class, cl_object v2supplied_superclasses)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(v2supplied_superclasses)) { goto L2; }
  {
   cl_object v3superclass;
   cl_object v4;
   v3superclass = ECL_NIL;
   {
    cl_object v5;
    v5 = v2supplied_superclasses;
    if (ecl_unlikely(!ECL_LISTP(v5))) FEtype_error_list(v5);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v4 = v5;
   }
L8:;
   if (!(ecl_endp(v4))) { goto L10; }
   goto L9;
L10:;
   v3superclass = _ecl_car(v4);
   {
    cl_object v5;
    v5 = _ecl_cdr(v4);
    if (ecl_unlikely(!ECL_LISTP(v5))) FEtype_error_list(v5);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v4 = v5;
   }
   if ((ecl_function_dispatch(cl_env_copy,ECL_SYM("VALIDATE-SUPERCLASS",1636))(2, v1class, v3superclass) /*  VALIDATE-SUPERCLASS */)!=ECL_NIL) { goto L18; }
   if (!((ecl_symbol_value(VV[11]))==(ECL_T))) { goto L18; }
   cl_error(3, VV[16], v3superclass, v1class);
L18:;
   goto L8;
L9:;
   goto L1;
  }
L2:;
  if (Null(si_of_class_p(2, v1class, ECL_SYM("STANDARD-CLASS",975)))) { goto L24; }
  T0 = ECL_SYM("STANDARD-OBJECT",978);
  goto L23;
L24:;
  if (Null(si_of_class_p(2, v1class, ECL_SYM("STRUCTURE-CLASS",979)))) { goto L26; }
  T0 = ECL_SYM("STRUCTURE-OBJECT",980);
  goto L23;
L26:;
  if (Null(si_of_class_p(2, v1class, ECL_SYM("FUNCALLABLE-STANDARD-CLASS",1577)))) { goto L28; }
  T0 = ECL_SYM("FUNCALLABLE-STANDARD-OBJECT",1579);
  goto L23;
L28:;
  T1 = cl_class_of(v1class);
  T0 = cl_error(2, VV[17], T1);
L23:;
  T1 = cl_find_class(1, T0);
  v2supplied_superclasses = ecl_list1(T1);
L1:;
  value0 = v2supplied_superclasses;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function VALIDATE-SUPERCLASS                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC26validate_superclass(cl_object v1class, cl_object v2superclass)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ecl_make_bool((v2superclass)==(ecl_symbol_value(ECL_SYM("+THE-T-CLASS+",1538))));
  if ((value0)!=ECL_NIL) { goto L2; }
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_class_of(v1class);
   v4 = cl_class_of(v2superclass);
   value0 = ecl_make_bool((v3)==(v4));
   if ((value0)!=ECL_NIL) { goto L8; }
   if (!((v3)==(ecl_symbol_value(ECL_SYM("+THE-STANDARD-CLASS+",1541))))) { goto L12; }
   value0 = ecl_make_bool((v4)==(ecl_symbol_value(ECL_SYM("+THE-FUNCALLABLE-STANDARD-CLASS+",1542))));
   goto L10;
L12:;
   value0 = ECL_NIL;
   goto L10;
L10:;
   if ((value0)!=ECL_NIL) { goto L8; }
   if (!((v4)==(ecl_symbol_value(ECL_SYM("+THE-STANDARD-CLASS+",1541))))) { goto L15; }
   value0 = ecl_make_bool((v3)==(ecl_symbol_value(ECL_SYM("+THE-FUNCALLABLE-STANDARD-CLASS+",1542))));
   goto L4;
L15:;
   value0 = ECL_NIL;
   goto L4;
L8:;
   goto L4;
  }
L4:;
  if ((value0)!=ECL_NIL) { goto L2; }
  value0 = L27forward_referenced_class_p(v1class);
  if ((value0)!=ECL_NIL) { goto L18; }
  value0 = L27forward_referenced_class_p(v2superclass);
  return value0;
L18:;
  cl_env_copy->nvalues = 1;
  return value0;
L2:;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for FORWARD-REFERENCED-CLASS-P            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L27forward_referenced_class_p(cl_object v1x)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2y;
   v2y = cl_find_class(2, ECL_SYM("FORWARD-REFERENCED-CLASS",1576), ECL_NIL);
   if (Null(v2y)) { goto L3; }
   T0 = cl_class_of(v1x);
   value0 = si_subclassp(2, T0, v2y);
   return value0;
L3:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function FINALIZE-INHERITANCE                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC28finalize_inheritance(cl_object v1class)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2cpl;
   v2cpl = ecl_function_dispatch(cl_env_copy,ECL_SYM("COMPUTE-CLASS-PRECEDENCE-LIST",1557))(1, v1class) /*  COMPUTE-CLASS-PRECEDENCE-LIST */;
   {
    cl_object v3x;
    T0 = (VV[19]->symbol.gfdef);
    T1 = ecl_cdr(v2cpl);
    v3x = cl_find_if(2, T0, T1);
    if (Null(v3x)) { goto L3; }
    T0 = (cl_env_copy->function=(ECL_SYM("CLASS-NAME",936)->symbol.gfdef))->cfun.entry(1, v1class) /*  CLASS-NAME */;
    T1 = (cl_env_copy->function=(ECL_SYM("CLASS-NAME",936)->symbol.gfdef))->cfun.entry(1, v3x) /*  CLASS-NAME */;
    cl_error(3, VV[20], T0, T1);
   }
L3:;
   {
    cl_object v3x;
    T0 = (ECL_SYM("CLASS-FINALIZED-P",1552)->symbol.gfdef);
    v3x = cl_find_if_not(4, T0, v2cpl, VV[21], ECL_T);
    if (Null(v3x)) { goto L7; }
    if ((v3x)==(v1class)) { goto L7; }
    value0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("FINALIZE-INHERITANCE",1574))(1, v3x) /*  FINALIZE-INHERITANCE */;
    return value0;
   }
L7:;
   (cl_env_copy->function=ECL_CONS_CAR(VV[76]))->cfun.entry(2, v2cpl, v1class) /*  (SETF CLASS-PRECEDENCE-LIST) */;
   {
    cl_object v3;
    cl_object v4;
    if (Null(cl_slot_boundp(v1class, VV[22]))) { goto L16; }
    v3 = ecl_function_dispatch(cl_env_copy,ECL_SYM("CLASS-SLOTS",1555))(1, v1class) /*  CLASS-SLOTS */;
    goto L14;
L16:;
    v3 = ECL_NIL;
    goto L14;
L14:;
    v4 = ecl_function_dispatch(cl_env_copy,ECL_SYM("COMPUTE-SLOTS",1562))(1, v1class) /*  COMPUTE-SLOTS */;
    (cl_env_copy->function=ECL_CONS_CAR(VV[77]))->cfun.entry(2, v4, v1class) /*  (SETF CLASS-SLOTS) */;
    {
     cl_object v5;
     v5 = L4compute_instance_size(v4);
     (cl_env_copy->function=ECL_CONS_CAR(VV[78]))->cfun.entry(2, v5, v1class) /*  (SETF CLASS-SIZE) */;
    }
    {
     cl_object v5;
     v5 = ecl_function_dispatch(cl_env_copy,ECL_SYM("COMPUTE-DEFAULT-INITARGS",1558))(1, v1class) /*  COMPUTE-DEFAULT-INITARGS */;
     (cl_env_copy->function=ECL_CONS_CAR(VV[79]))->cfun.entry(2, v5, v1class) /*  (SETF CLASS-DEFAULT-INITARGS) */;
    }
    (cl_env_copy->function=ECL_CONS_CAR(VV[80]))->cfun.entry(2, ECL_T, v1class) /*  (SETF CLASS-FINALIZED-P) */;
    if (Null(ecl_function_dispatch(cl_env_copy,VV[81])(1, v1class) /*  CLASS-SEALEDP */)) { goto L25; }
    {
     cl_object v5free_slots;
     cl_object v6all_slots;
     {
      cl_object v7;
      v7 = (ECL_SYM("SLOT-DEFINITION-NAME",1609)->symbol.gfdef);
      {
       cl_object v8;
       cl_object v9;
       cl_object v10;
       v8 = ecl_function_dispatch(cl_env_copy,ECL_SYM("CLASS-SLOTS",1555))(1, v1class) /*  CLASS-SLOTS */;
       v9 = ECL_NIL;
       {
        cl_object v11;
        v11 = v8;
        if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v10 = v11;
       }
       {
        cl_object v11;
        cl_object v12;
        v11 = ecl_list1(ECL_NIL);
        v12 = v11;
L37:;
        if (!(ecl_endp(v10))) { goto L39; }
        goto L38;
L39:;
        v9 = _ecl_car(v10);
        {
         cl_object v13;
         v13 = _ecl_cdr(v10);
         if (ecl_unlikely(!ECL_LISTP(v13))) FEtype_error_list(v13);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         v10 = v13;
        }
        {
         cl_object v13;
         v13 = v12;
         if (ecl_unlikely(ECL_ATOM(v13))) FEtype_error_cons(v13);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         T1 = v13;
        }
        T2 = ecl_function_dispatch(cl_env_copy,v7)(1, v9);
        v12 = ecl_list1(T2);
        (ECL_CONS_CDR(T1)=v12,T1);
        goto L37;
L38:;
        T0 = ecl_cdr(v11);
        goto L28;
       }
      }
     }
L28:;
     v5free_slots = cl_delete_duplicates(1, T0);
     v6all_slots = ecl_function_dispatch(cl_env_copy,ECL_SYM("CLASS-SLOTS",1555))(1, v1class) /*  CLASS-SLOTS */;
     {
      cl_object v7c;
      cl_object v8;
      v7c = ECL_NIL;
      {
       cl_object v9;
       v9 = v2cpl;
       if (ecl_unlikely(!ECL_LISTP(v9))) FEtype_error_list(v9);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v8 = v9;
      }
L61:;
      if (!(ecl_endp(v8))) { goto L63; }
      goto L62;
L63:;
      v7c = _ecl_car(v8);
      {
       cl_object v9;
       v9 = _ecl_cdr(v8);
       if (ecl_unlikely(!ECL_LISTP(v9))) FEtype_error_list(v9);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v8 = v9;
      }
      {
       cl_object v9;
       cl_object v10slotd;
       cl_object v11;
       v9 = ecl_function_dispatch(cl_env_copy,ECL_SYM("CLASS-DIRECT-SLOTS",1549))(1, v7c) /*  CLASS-DIRECT-SLOTS */;
       v10slotd = ECL_NIL;
       {
        cl_object v12;
        v12 = v9;
        if (ecl_unlikely(!ECL_LISTP(v12))) FEtype_error_list(v12);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v11 = v12;
       }
L77:;
       if (!(ecl_endp(v11))) { goto L79; }
       goto L78;
L79:;
       v10slotd = _ecl_car(v11);
       {
        cl_object v12;
        v12 = _ecl_cdr(v11);
        if (ecl_unlikely(!ECL_LISTP(v12))) FEtype_error_list(v12);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v11 = v12;
       }
       if (Null(L33safe_slot_definition_location(1, v10slotd))) { goto L87; }
       T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-NAME",1609))(1, v10slotd) /*  SLOT-DEFINITION-NAME */;
       v5free_slots = cl_delete(2, T0, v5free_slots);
L87:;
       goto L77;
L78:;
      }
      goto L61;
L62:;
     }
     {
      cl_object v7;
      cl_object v8slotd;
      cl_object v9;
      v7 = ecl_function_dispatch(cl_env_copy,ECL_SYM("CLASS-DIRECT-SLOTS",1549))(1, v1class) /*  CLASS-DIRECT-SLOTS */;
      v8slotd = ECL_NIL;
      {
       cl_object v10;
       v10 = v7;
       if (ecl_unlikely(!ECL_LISTP(v10))) FEtype_error_list(v10);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v9 = v10;
      }
L98:;
      if (!(ecl_endp(v9))) { goto L100; }
      goto L99;
L100:;
      v8slotd = _ecl_car(v9);
      {
       cl_object v10;
       v10 = _ecl_cdr(v9);
       if (ecl_unlikely(!ECL_LISTP(v10))) FEtype_error_list(v10);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v9 = v10;
      }
      {
       cl_object v10name;
       cl_object v11other_slotd;
       v10name = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-NAME",1609))(1, v8slotd) /*  SLOT-DEFINITION-NAME */;
       {
        cl_object v12;
        v12 = ecl_function_dispatch(cl_env_copy,VV[82])(2, v6all_slots, ecl_make_fixnum(0)) /*  MAKE-SEQ-ITERATOR */;
L112:;
        if ((v12)!=ECL_NIL) { goto L114; }
        v11other_slotd = ECL_NIL;
        goto L110;
L114:;
        {
         cl_object v13;
         v13 = ecl_function_dispatch(cl_env_copy,VV[83])(2, v6all_slots, v12) /*  SEQ-ITERATOR-REF */;
         T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-NAME",1609))(1, v13) /*  SLOT-DEFINITION-NAME */;
         if (!(ecl_eql(v10name,T0))) { goto L116; }
         v11other_slotd = v13;
         goto L110;
        }
L116:;
        v12 = ecl_function_dispatch(cl_env_copy,VV[84])(2, v6all_slots, v12) /*  SEQ-ITERATOR-NEXT */;
        goto L112;
       }
L110:;
       {
        cl_object v12;
        v12 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-LOCATION",1608))(1, v11other_slotd) /*  SLOT-DEFINITION-LOCATION */;
        (cl_env_copy->function=ECL_CONS_CAR(VV[85]))->cfun.entry(2, v12, v8slotd) /*  (SETF SLOT-DEFINITION-LOCATION) */;
       }
       v5free_slots = cl_delete(2, v10name, v5free_slots);
      }
      goto L98;
L99:;
     }
     {
      cl_object v7name;
      cl_object v8;
      v7name = ECL_NIL;
      {
       cl_object v9;
       v9 = v5free_slots;
       if (ecl_unlikely(!ECL_LISTP(v9))) FEtype_error_list(v9);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v8 = v9;
      }
      {
       cl_object v9direct_slots;
       v9direct_slots = ecl_function_dispatch(cl_env_copy,ECL_SYM("CLASS-DIRECT-SLOTS",1549))(1, v1class) /*  CLASS-DIRECT-SLOTS */;
L131:;
       if (!(ecl_endp(v8))) { goto L133; }
       goto L132;
L133:;
       v7name = _ecl_car(v8);
       {
        cl_object v10;
        v10 = _ecl_cdr(v8);
        if (ecl_unlikely(!ECL_LISTP(v10))) FEtype_error_list(v10);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v8 = v10;
       }
       {
        cl_object v10effective_slotd;
        cl_object v11def;
        {
         cl_object v12;
         v12 = ecl_function_dispatch(cl_env_copy,VV[82])(2, v6all_slots, ecl_make_fixnum(0)) /*  MAKE-SEQ-ITERATOR */;
L144:;
         if ((v12)!=ECL_NIL) { goto L146; }
         v10effective_slotd = ECL_NIL;
         goto L142;
L146:;
         {
          cl_object v13;
          v13 = ecl_function_dispatch(cl_env_copy,VV[83])(2, v6all_slots, v12) /*  SEQ-ITERATOR-REF */;
          T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-NAME",1609))(1, v13) /*  SLOT-DEFINITION-NAME */;
          if (!(ecl_eql(v7name,T0))) { goto L148; }
          v10effective_slotd = v13;
          goto L142;
         }
L148:;
         v12 = ecl_function_dispatch(cl_env_copy,VV[84])(2, v6all_slots, v12) /*  SEQ-ITERATOR-NEXT */;
         goto L144;
        }
L142:;
        v11def = ecl_function_dispatch(cl_env_copy,VV[86])(1, v10effective_slotd) /*  DIRECT-SLOT-TO-CANONICAL-SLOT */;
        T0 = (ECL_SYM("MAKE-INSTANCE",951)->symbol.gfdef);
        T1 = ecl_function_dispatch(cl_env_copy,ECL_SYM("DIRECT-SLOT-DEFINITION-CLASS",1564))(2, v1class, v11def) /*  DIRECT-SLOT-DEFINITION-CLASS */;
        T2 = cl_apply(3, T0, T1, v11def);
        v9direct_slots = CONS(T2,v9direct_slots);
       }
       goto L131;
L132:;
       (cl_env_copy->function=ECL_CONS_CAR(VV[87]))->cfun.entry(2, v9direct_slots, v1class) /*  (SETF CLASS-DIRECT-SLOTS) */;
      }
     }
    }
L25:;
    if ((ecl_function_dispatch(cl_env_copy,VV[88])(2, v3, v4) /*  SLOT-DEFINITIONS-COMPATIBLE-P */)!=ECL_NIL) { goto L13; }
    (cl_env_copy->function=(ECL_SYM("MAKE-INSTANCES-OBSOLETE",952)->symbol.gfdef))->cfun.entry(1, v1class) /*  MAKE-INSTANCES-OBSOLETE */;
   }
L13:;
   ecl_function_dispatch(cl_env_copy,VV[89])(0)   /*  SUBTYPEP-CLEAR-CACHE */;
  }
  {
   cl_object v2;
   T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("CLASS-DIRECT-SUBCLASSES",1550))(1, v1class) /*  CLASS-DIRECT-SUBCLASSES */;
   v2 = cl_reverse(T0);
   goto L164;
L163:;
   {
    cl_object v3subclass;
    v3subclass = ecl_car(v2);
    L12finalize_unless_forward(v3subclass);
   }
   v2 = ecl_cdr(v2);
L164:;
   if (Null(v2)) { goto L171; }
   goto L163;
L171:;
  }
  value0 = ecl_function_dispatch(cl_env_copy,VV[90])(1, v1class) /*  STD-CREATE-SLOTS-TABLE */;
  return value0;
 }
}
/*      local function FINALIZE-INHERITANCE                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC29finalize_inheritance(cl_object v1class)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(ecl_symbol_value(ECL_SYM("*NEXT-METHODS*",1536)))) { goto L2; }
  T0 = ecl_car(ecl_symbol_value(ECL_SYM("*NEXT-METHODS*",1536)));
  T1 = ecl_cdr(ecl_symbol_value(ECL_SYM("*NEXT-METHODS*",1536)));
  ecl_function_dispatch(cl_env_copy,T0)(2, ecl_symbol_value(ECL_SYM(".COMBINED-METHOD-ARGS.",1534)), T1);
  goto L1;
L2:;
  cl_error(1, VV[15]);
L1:;
  value0 = ecl_function_dispatch(cl_env_copy,VV[91])(1, v1class) /*  STD-CLASS-GENERATE-ACCESSORS */;
  return value0;
 }
}
/*      local function COMPUTE-CLASS-PRECEDENCE-LIST                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC30compute_class_precedence_list(cl_object v1class)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("CLASS-DIRECT-SUPERCLASSES",1551))(1, v1class) /*  CLASS-DIRECT-SUPERCLASSES */;
  value0 = ecl_function_dispatch(cl_env_copy,VV[92])(2, v1class, T0) /*  COMPUTE-CLOS-CLASS-PRECEDENCE-LIST */;
  return value0;
 }
}
/*      local function COMPUTE-SLOTS                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC31compute_slots(cl_object v1class)
{
 cl_object T0, T1, T2, T3, T4;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2all_slots;
   cl_object v3all_names;
   cl_object v4output;
   cl_object v5scan;
   T0 = (ECL_SYM("APPEND",90)->symbol.gfdef);
   {
    cl_object v6;
    v6 = (ECL_SYM("CLASS-DIRECT-SLOTS",1549)->symbol.gfdef);
    {
     cl_object v7;
     cl_object v8;
     cl_object v9;
     T2 = ecl_function_dispatch(cl_env_copy,ECL_SYM("CLASS-PRECEDENCE-LIST",1553))(1, v1class) /*  CLASS-PRECEDENCE-LIST */;
     v7 = cl_reverse(T2);
     v8 = ECL_NIL;
     {
      cl_object v10;
      v10 = v7;
      if (ecl_unlikely(!ECL_LISTP(v10))) FEtype_error_list(v10);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v9 = v10;
     }
     {
      cl_object v10;
      cl_object v11;
      v10 = ecl_list1(ECL_NIL);
      v11 = v10;
L12:;
      if (!(ecl_endp(v9))) { goto L14; }
      goto L13;
L14:;
      v8 = _ecl_car(v9);
      {
       cl_object v12;
       v12 = _ecl_cdr(v9);
       if (ecl_unlikely(!ECL_LISTP(v12))) FEtype_error_list(v12);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v9 = v12;
      }
      {
       cl_object v12;
       v12 = v11;
       if (ecl_unlikely(ECL_ATOM(v12))) FEtype_error_cons(v12);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       T2 = v12;
      }
      T3 = ecl_function_dispatch(cl_env_copy,v6)(1, v8);
      v11 = ecl_list1(T3);
      (ECL_CONS_CDR(T2)=v11,T2);
      goto L12;
L13:;
      T1 = ecl_cdr(v10);
      goto L3;
     }
    }
   }
L3:;
   v2all_slots = cl_reduce(2, T0, T1);
   {
    cl_object v6;
    v6 = (ECL_SYM("SLOT-DEFINITION-NAME",1609)->symbol.gfdef);
    {
     cl_object v7;
     cl_object v8;
     v7 = ECL_NIL;
     {
      cl_object v9;
      v9 = v2all_slots;
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
L39:;
      if (!(ecl_endp(v8))) { goto L41; }
      goto L40;
L41:;
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
       T1 = v11;
      }
      T2 = ecl_function_dispatch(cl_env_copy,v6)(1, v7);
      v10 = ecl_list1(T2);
      (ECL_CONS_CDR(T1)=v10,T1);
      goto L39;
L40:;
      T0 = ecl_cdr(v9);
      goto L31;
     }
    }
   }
L31:;
   v3all_names = cl_nreverse(T0);
   v4output = ECL_NIL;
   v5scan = v3all_names;
   goto L61;
L60:;
   {
    cl_object v6name;
    v6name = ecl_car(v5scan);
    {
     cl_object v7;
     cl_object v8;
     v7 = ecl_cdr(v5scan);
     v8 = ecl_function_dispatch(cl_env_copy,VV[82])(2, v7, ecl_make_fixnum(0)) /*  MAKE-SEQ-ITERATOR */;
L68:;
     if ((v8)!=ECL_NIL) { goto L70; }
     goto L65;
L70:;
     {
      cl_object v9;
      v9 = ecl_function_dispatch(cl_env_copy,VV[83])(2, v7, v8) /*  SEQ-ITERATOR-REF */;
      if (!(ecl_eql(v6name,v9))) { goto L72; }
      if ((v9)!=ECL_NIL) { goto L63; }
      goto L65;
     }
L72:;
     v8 = ecl_function_dispatch(cl_env_copy,VV[84])(2, v7, v8) /*  SEQ-ITERATOR-NEXT */;
     goto L68;
    }
L65:;
    T0 = cl_reverse(v2all_slots);
    T1 = (ECL_SYM("SLOT-DEFINITION-NAME",1609)->symbol.gfdef);
    T2 = (ECL_SYM("EQ",335)->symbol.gfdef);
    T3 = cl_delete(6, v6name, T0, ECL_SYM("KEY",1288), T1, ECL_SYM("TEST-NOT",1344), T2);
    T4 = ecl_function_dispatch(cl_env_copy,ECL_SYM("COMPUTE-EFFECTIVE-SLOT-DEFINITION",1561))(3, v1class, v6name, T3) /*  COMPUTE-EFFECTIVE-SLOT-DEFINITION */;
    v4output = CONS(T4,v4output);
   }
L63:;
   v5scan = ecl_cdr(v5scan);
L61:;
   if (ecl_endp(v5scan)) { goto L83; }
   goto L60;
L83:;
   value0 = v4output;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for SLOT-DEFINITION-TO-PLIST              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L32slot_definition_to_plist(cl_object v1slotd)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-NAME",1609))(1, v1slotd) /*  SLOT-DEFINITION-NAME */;
  T1 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-INITFORM",1606))(1, v1slotd) /*  SLOT-DEFINITION-INITFORM */;
  T2 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-INITFUNCTION",1607))(1, v1slotd) /*  SLOT-DEFINITION-INITFUNCTION */;
  T3 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-TYPE",1611))(1, v1slotd) /*  SLOT-DEFINITION-TYPE */;
  T4 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-ALLOCATION",1604))(1, v1slotd) /*  SLOT-DEFINITION-ALLOCATION */;
  T5 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-INITARGS",1605))(1, v1slotd) /*  SLOT-DEFINITION-INITARGS */;
  T6 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-READERS",1610))(1, v1slotd) /*  SLOT-DEFINITION-READERS */;
  T7 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-WRITERS",1612))(1, v1slotd) /*  SLOT-DEFINITION-WRITERS */;
  T8 = ecl_function_dispatch(cl_env_copy,VV[94])(1, v1slotd) /*  SLOT-DEFINITION-DOCUMENTATION */;
  T9 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-LOCATION",1608))(1, v1slotd) /*  SLOT-DEFINITION-LOCATION */;
  value0 = cl_list(20, ECL_SYM("NAME",1300), T0, ECL_SYM("INITFORM",998), T1, ECL_SYM("INITFUNCTION",999), T2, ECL_SYM("TYPE",1346), T3, ECL_SYM("ALLOCATION",987), T4, ECL_SYM("INITARGS",997), T5, ECL_SYM("READERS",1009), T6, ECL_SYM("WRITERS",1012), T7, ECL_SYM("DOCUMENTATION",1244), T8, ECL_SYM("LOCATION",1001), T9);
  return value0;
 }
}
/*      function definition for SAFE-SLOT-DEFINITION-LOCATION         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L33safe_slot_definition_location(cl_narg narg, cl_object v1slotd, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2default;
  va_list args; va_start(args,v1slotd);
  {
   int i = 1;
   if (i >= narg) {
    v2default = ECL_NIL;
   } else {
    i++;
    v2default = va_arg(args,cl_object);
   }
  }
  va_end(args);
  if (ECL_LISTP(v1slotd)) { goto L4; }
  if (Null(cl_slot_boundp(v1slotd, ECL_SYM("LOCATION",1842)))) { goto L2; }
  goto L3;
L4:;
L3:;
  value0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-LOCATION",1608))(1, v1slotd) /*  SLOT-DEFINITION-LOCATION */;
  return value0;
L2:;
  value0 = v2default;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function COMPUTE-EFFECTIVE-SLOT-DEFINITION              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC36compute_effective_slot_definition(cl_object v1class, cl_object v2name, cl_object v3direct_slots)
{
 cl_object T0, T1, T2;
 volatile cl_object lex0[1];
 cl_object env0 = ECL_NIL;
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  lex0[0] = v1class;                              /*  CLASS           */
  env0 = ECL_NIL;
  CLV0 = env0 = CONS(v2name,env0);                /*  NAME            */
  {
   cl_object v4;
   v4 = ecl_make_cclosure_va((cl_objectfn)LC35combine_slotds,env0,Cblock,2);
   T0 = ecl_cdr(v3direct_slots);
   T2 = ecl_car(v3direct_slots);
   T1 = LC34direct_to_effective(lex0, T2);
   value0 = cl_reduce(4, v4, T0, VV[26], T1);
   return value0;
  }
 }
}
/*      closure COMBINE-SLOTDS                                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC35combine_slotds(cl_narg narg, cl_object v1new_slotd, cl_object v2old_slotd, ...)
{
 cl_object T0, T1;
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV0 = env0;                                     /*  NAME            */
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=2)) FEwrong_num_arguments_anonym();
 {
TTL:
  {
   cl_object v3new_type;
   cl_object v4old_type;
   cl_object v5loc1;
   cl_object v6loc2;
   v3new_type = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-TYPE",1611))(1, v1new_slotd) /*  SLOT-DEFINITION-TYPE */;
   v4old_type = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-TYPE",1611))(1, v2old_slotd) /*  SLOT-DEFINITION-TYPE */;
   v5loc1 = L33safe_slot_definition_location(1, v1new_slotd);
   v6loc2 = L33safe_slot_definition_location(1, v2old_slotd);
   if (Null(v6loc2)) { goto L5; }
   if (Null(v5loc1)) { goto L7; }
   if (ecl_eql(v5loc1,v6loc2)) { goto L5; }
   T0 = cl_list(3, v5loc1, v6loc2, ECL_CONS_CAR(CLV0));
   cl_error(5, ECL_SYM("SIMPLE-ERROR",772), ECL_SYM("FORMAT-CONTROL",1263), VV[25], ECL_SYM("FORMAT-ARGUMENTS",1262), T0);
   goto L5;
L7:;
   (cl_env_copy->function=ECL_CONS_CAR(VV[85]))->cfun.entry(2, v6loc2, v1new_slotd) /*  (SETF SLOT-DEFINITION-LOCATION) */;
L5:;
   {
    cl_object v7;
    T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-INITARGS",1605))(1, v1new_slotd) /*  SLOT-DEFINITION-INITARGS */;
    T1 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-INITARGS",1605))(1, v2old_slotd) /*  SLOT-DEFINITION-INITARGS */;
    v7 = cl_union(2, T0, T1);
    (cl_env_copy->function=ECL_CONS_CAR(VV[96]))->cfun.entry(2, v7, v1new_slotd) /*  (SETF SLOT-DEFINITION-INITARGS) */;
   }
   if ((ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-INITFUNCTION",1607))(1, v1new_slotd) /*  SLOT-DEFINITION-INITFUNCTION */)!=ECL_NIL) { goto L12; }
   {
    cl_object v7;
    v7 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-INITFORM",1606))(1, v2old_slotd) /*  SLOT-DEFINITION-INITFORM */;
    (cl_env_copy->function=ECL_CONS_CAR(VV[97]))->cfun.entry(2, v7, v1new_slotd) /*  (SETF SLOT-DEFINITION-INITFORM) */;
   }
   {
    cl_object v7;
    v7 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-INITFUNCTION",1607))(1, v2old_slotd) /*  SLOT-DEFINITION-INITFUNCTION */;
    (cl_env_copy->function=ECL_CONS_CAR(VV[98]))->cfun.entry(2, v7, v1new_slotd) /*  (SETF SLOT-DEFINITION-INITFUNCTION) */;
   }
L12:;
   {
    cl_object v7;
    T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-READERS",1610))(1, v1new_slotd) /*  SLOT-DEFINITION-READERS */;
    T1 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-READERS",1610))(1, v2old_slotd) /*  SLOT-DEFINITION-READERS */;
    v7 = cl_union(2, T0, T1);
    (cl_env_copy->function=ECL_CONS_CAR(VV[99]))->cfun.entry(2, v7, v1new_slotd) /*  (SETF SLOT-DEFINITION-READERS) */;
   }
   {
    cl_object v7;
    T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-WRITERS",1612))(1, v1new_slotd) /*  SLOT-DEFINITION-WRITERS */;
    T1 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-WRITERS",1612))(1, v2old_slotd) /*  SLOT-DEFINITION-WRITERS */;
    v7 = cl_union(2, T0, T1);
    (cl_env_copy->function=ECL_CONS_CAR(VV[100]))->cfun.entry(2, v7, v1new_slotd) /*  (SETF SLOT-DEFINITION-WRITERS) */;
   }
   {
    cl_object v7;
    if (Null(cl_subtypep(2, v3new_type, v4old_type))) { goto L23; }
    v7 = v3new_type;
    goto L22;
L23:;
    if (Null(cl_subtypep(2, v4old_type, v3new_type))) { goto L25; }
    v7 = v4old_type;
    goto L22;
L25:;
    v7 = cl_list(3, ECL_SYM("AND",89), v3new_type, v4old_type);
L22:;
    (cl_env_copy->function=ECL_CONS_CAR(VV[101]))->cfun.entry(2, v7, v1new_slotd) /*  (SETF SLOT-DEFINITION-TYPE) */;
   }
   value0 = v1new_slotd;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
 }
}
/*      local function DIRECT-TO-EFFECTIVE                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC34direct_to_effective(volatile cl_object *lex0, cl_object v1old_slot)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ECL_CONSP(v1old_slot))) { goto L1; }
  value0 = cl_copy_list(v1old_slot);
  return value0;
L1:;
  {
   cl_object v2initargs;
   v2initargs = L32slot_definition_to_plist(v1old_slot);
   T0 = (ECL_SYM("MAKE-INSTANCE",951)->symbol.gfdef);
   T1 = (ECL_SYM("EFFECTIVE-SLOT-DEFINITION-CLASS",1566)->symbol.gfdef);
   T2 = cl_apply(3, T1, lex0[0], v2initargs);
   value0 = cl_apply(3, T0, T2, v2initargs);
   return value0;
  }
 }
}
/*      local function COMPUTE-DEFAULT-INITARGS                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC37compute_default_initargs(cl_object v1class)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2all_initargs;
   T0 = (ECL_SYM("APPEND",90)->symbol.gfdef);
   {
    cl_object v3;
    v3 = (ECL_SYM("CLASS-DIRECT-DEFAULT-INITARGS",1548)->symbol.gfdef);
    {
     cl_object v4;
     cl_object v5;
     cl_object v6;
     v4 = ecl_function_dispatch(cl_env_copy,ECL_SYM("CLASS-PRECEDENCE-LIST",1553))(1, v1class) /*  CLASS-PRECEDENCE-LIST */;
     v5 = ECL_NIL;
     {
      cl_object v7;
      v7 = v4;
      if (ecl_unlikely(!ECL_LISTP(v7))) FEtype_error_list(v7);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v6 = v7;
     }
     {
      cl_object v7;
      cl_object v8;
      v7 = ecl_list1(ECL_NIL);
      v8 = v7;
L12:;
      if (!(ecl_endp(v6))) { goto L14; }
      goto L13;
L14:;
      v5 = _ecl_car(v6);
      {
       cl_object v9;
       v9 = _ecl_cdr(v6);
       if (ecl_unlikely(!ECL_LISTP(v9))) FEtype_error_list(v9);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v6 = v9;
      }
      {
       cl_object v9;
       v9 = v8;
       if (ecl_unlikely(ECL_ATOM(v9))) FEtype_error_cons(v9);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       T2 = v9;
      }
      T3 = ecl_function_dispatch(cl_env_copy,v3)(1, v5);
      v8 = ecl_list1(T3);
      (ECL_CONS_CDR(T2)=v8,T2);
      goto L12;
L13:;
      T1 = ecl_cdr(v7);
      goto L3;
     }
    }
   }
L3:;
   v2all_initargs = cl_reduce(2, T0, T1);
   T0 = cl_reverse(v2all_initargs);
   T1 = (ECL_SYM("FIRST",373)->symbol.gfdef);
   T2 = cl_remove_duplicates(3, T0, ECL_SYM("KEY",1288), T1);
   value0 = cl_nreverse(T2);
   return value0;
  }
 }
}
/*      local function ENSURE-CLASS-USING-CLASS                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC38ensure_class_using_class(cl_narg narg, cl_object v1class, cl_object v2name, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 {
  cl_object v3rest;
  cl_object v4direct_slots;
  cl_object v5direct_default_initargs;
  ecl_va_list args; ecl_va_start(args,v2name,narg,2);
  {
   cl_object keyvars[4];
   cl_parse_key(args,2,LC38ensure_class_using_classkeys,keyvars,(cl_object*)&v3rest,TRUE);
   ecl_va_end(args);
   v4direct_slots = keyvars[0];
   v5direct_default_initargs = keyvars[1];
  }
  {
   cl_object v7;                                  /*  METACLASS       */
   cl_object v8;                                  /*  OPTIONS         */
   T0 = (VV[32]->symbol.gfdef);
   value0 = cl_apply(2, T0, v3rest);
   {
    const int v9 = cl_env_copy->nvalues;
    v7 = value0;
    cl_object v10;
    v10 = (v9<=2)? ECL_NIL : cl_env_copy->values[2];
    v8 = v10;
   }
   if (Null(L27forward_referenced_class_p(v1class))) { goto L4; }
   (cl_env_copy->function=(ECL_SYM("CHANGE-CLASS",934)->symbol.gfdef))->cfun.entry(2, v1class, v7) /*  CHANGE-CLASS */;
   goto L3;
L4:;
   T0 = cl_class_of(v1class);
   if ((T0)==(v7)) { goto L3; }
   cl_error(1, VV[27]);
L3:;
   T0 = (ECL_SYM("REINITIALIZE-INSTANCE",965)->symbol.gfdef);
   v1class = cl_apply(5, T0, v1class, ECL_SYM("NAME",1300), v2name, v8);
   if (Null(v2name)) { goto L10; }
   ecl_function_dispatch(cl_env_copy,ECL_SYM("CREATE-TYPE-NAME",1646))(1, v2name) /*  CREATE-TYPE-NAME */;
   ecl_function_dispatch(cl_env_copy,VV[104])(2, v1class, v2name) /*  SETF-FIND-CLASS */;
L10:;
   value0 = v1class;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for COERCE-TO-CLASS                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L39coerce_to_class(cl_narg narg, cl_object v1class_or_symbol, ...)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2fail;
  va_list args; va_start(args,v1class_or_symbol);
  {
   int i = 1;
   if (i >= narg) {
    v2fail = ECL_NIL;
   } else {
    i++;
    v2fail = va_arg(args,cl_object);
   }
  }
  va_end(args);
  if (!(ECL_INSTANCEP(v1class_or_symbol))) { goto L2; }
  value0 = v1class_or_symbol;
  cl_env_copy->nvalues = 1;
  return value0;
L2:;
  if (ECL_SYMBOLP(v1class_or_symbol)) { goto L4; }
  value0 = cl_error(2, VV[28], v1class_or_symbol);
  return value0;
L4:;
  {
   cl_object v3;
   v3 = cl_find_class(2, v1class_or_symbol, v2fail);
   if (Null(v3)) { goto L7; }
   value0 = v3;
   cl_env_copy->nvalues = 1;
   return value0;
L7:;
   T0 = ecl_list1(v1class_or_symbol);
   (cl_env_copy->function=(ECL_SYM("WARN",905)->symbol.gfdef))->cfun.entry(5, VV[29], ECL_SYM("FORMAT-CONTROL",1263), VV[30], ECL_SYM("FORMAT-ARGUMENTS",1262), T0) /*  WARN */;
   T0 = cl_find_class(1, ECL_SYM("STANDARD-OBJECT",978));
   T1 = ecl_list1(T0);
   value0 = clos_ensure_class(7, v1class_or_symbol, ECL_SYM("METACLASS",1002), ECL_SYM("FORWARD-REFERENCED-CLASS",1576), ECL_SYM("DIRECT-SUPERCLASSES",993), T1, ECL_SYM("DIRECT-SLOTS",992), ECL_NIL);
   return value0;
  }
 }
}
/*      function definition for HELP-ENSURE-CLASS                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L40help_ensure_class(cl_narg narg, ...)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  cl_object v1options;
  cl_object v2metaclass;
  cl_object v3direct_superclasses;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  {
   cl_object keyvars[4];
   cl_parse_key(args,2,L40help_ensure_classkeys,keyvars,(cl_object*)&v1options,TRUE);
   ecl_va_end(args);
   if (Null(keyvars[2])) {
    v2metaclass = ECL_SYM("STANDARD-CLASS",975);
   } else {
    v2metaclass = keyvars[0];
   }
   v3direct_superclasses = keyvars[1];
  }
  {
   cl_object v5;
   cl_object v6;                                  /*  FLAG            */
   value0 = si_rem_f(v1options, ECL_SYM("METACLASS",1002));
   {
    v5 = value0;
    v6 = cl_env_copy->values[1];
   }
   v1options = v5;
  }
  {
   cl_object v5;
   cl_object v6;                                  /*  FLAG            */
   value0 = si_rem_f(v1options, ECL_SYM("DIRECT-SUPERCLASSES",993));
   {
    v5 = value0;
    v6 = cl_env_copy->values[1];
   }
   v1options = v5;
  }
  v2metaclass = L39coerce_to_class(2, v2metaclass, ECL_T);
  {
   cl_object v4;
   v4 = (VV[31]->symbol.gfdef);
   {
    cl_object v5;
    cl_object v6;
    v5 = ECL_NIL;
    {
     cl_object v7;
     v7 = v3direct_superclasses;
     if (ecl_unlikely(!ECL_LISTP(v7))) FEtype_error_list(v7);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v6 = v7;
    }
    {
     cl_object v7;
     cl_object v8;
     v7 = ecl_list1(ECL_NIL);
     v8 = v7;
L21:;
     if (!(ecl_endp(v6))) { goto L23; }
     goto L22;
L23:;
     v5 = _ecl_car(v6);
     {
      cl_object v9;
      v9 = _ecl_cdr(v6);
      if (ecl_unlikely(!ECL_LISTP(v9))) FEtype_error_list(v9);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v6 = v9;
     }
     {
      cl_object v9;
      v9 = v8;
      if (ecl_unlikely(ECL_ATOM(v9))) FEtype_error_cons(v9);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      T0 = v9;
     }
     T1 = ecl_function_dispatch(cl_env_copy,v4)(1, v5);
     v8 = ecl_list1(T1);
     (ECL_CONS_CDR(T0)=v8,T0);
     goto L21;
L22:;
     v3direct_superclasses = ecl_cdr(v7);
     goto L13;
    }
   }
  }
L13:;
  T0 = cl_listX(3, ECL_SYM("DIRECT-SUPERCLASSES",993), v3direct_superclasses, v1options);
  cl_env_copy->nvalues = 3;
  cl_env_copy->values[2] = T0;
  cl_env_copy->values[1] = v3direct_superclasses;
  cl_env_copy->values[0] = v2metaclass;
  return cl_env_copy->values[0];
 }
}
/*      function definition for CLASS-COMPUTE-SLOTS                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L41class_compute_slots(cl_object v1class, cl_object v2slots)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3size;
   cl_object v4instance_slots;
   cl_object v5numbered_slots;
   cl_object v6other_slots;
   cl_object v7aux;
   v3size = L4compute_instance_size(v2slots);
   T0 = (ECL_SYM("SLOT-DEFINITION-ALLOCATION",1604)->symbol.gfdef);
   T1 = (ECL_SYM("EQ",335)->symbol.gfdef);
   v4instance_slots = cl_remove(6, ECL_SYM("INSTANCE",1282), v2slots, ECL_SYM("KEY",1288), T0, ECL_SYM("TEST-NOT",1344), T1);
   T0 = (VV[24]->symbol.gfdef);
   v5numbered_slots = cl_remove_if_not(2, T0, v4instance_slots);
   T0 = (VV[24]->symbol.gfdef);
   v6other_slots = cl_remove_if(2, T0, v4instance_slots);
   T0 = si_make_pure_array(ECL_T, v3size, ECL_NIL, ECL_NIL, ECL_NIL, ecl_make_fixnum(0));
   v7aux = si_fill_array_with_elt(T0, ECL_NIL, ecl_make_fixnum(0), ECL_NIL);
   {
    cl_object v8i;
    cl_object v9;
    v8i = ECL_NIL;
    {
     cl_object v10;
     v10 = v5numbered_slots;
     if (ecl_unlikely(!ECL_LISTP(v10))) FEtype_error_list(v10);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v9 = v10;
    }
L15:;
    if (!(ecl_endp(v9))) { goto L17; }
    goto L16;
L17:;
    v8i = _ecl_car(v9);
    {
     cl_object v10;
     v10 = _ecl_cdr(v9);
     if (ecl_unlikely(!ECL_LISTP(v10))) FEtype_error_list(v10);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v9 = v10;
    }
    {
     cl_object v10loc;
     v10loc = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-LOCATION",1608))(1, v8i) /*  SLOT-DEFINITION-LOCATION */;
     {
      cl_object v11;
      v11 = v7aux;
      T0 = v11;
      {
       cl_fixnum v12;
       {
        cl_object v13;
        v13 = v10loc;
        if (ecl_unlikely((ecl_fixnum(v13))>=(v11)->vector.dim))
           FEwrong_index(ECL_NIL,v11,-1,ecl_make_fixnum(ecl_fixnum(v13)),(v11)->vector.dim);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v12 = ecl_fixnum(v13);
       }
       if (Null(ecl_aref_unsafe(T0,v12))) { goto L27; }
      }
     }
     {
      cl_object v11;
      v11 = v7aux;
      T1 = v11;
      {
       cl_fixnum v12;
       {
        cl_object v13;
        v13 = v10loc;
        if (ecl_unlikely((ecl_fixnum(v13))>=(v11)->vector.dim))
           FEwrong_index(ECL_NIL,v11,-1,ecl_make_fixnum(ecl_fixnum(v13)),(v11)->vector.dim);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v12 = ecl_fixnum(v13);
       }
       T0 = ecl_aref_unsafe(T1,v12);
      }
     }
     T1 = cl_list(3, T0, v8i, v1class);
     cl_error(5, ECL_SYM("SIMPLE-ERROR",772), ECL_SYM("FORMAT-CONTROL",1263), VV[33], VV[34], T1);
L27:;
     {
      cl_object v11;
      v11 = v7aux;
      T0 = v11;
      {
       cl_fixnum v12;
       {
        cl_object v13;
        v13 = v10loc;
        if (ecl_unlikely((ecl_fixnum(v13))>=(v11)->vector.dim))
           FEwrong_index(ECL_NIL,v11,-1,ecl_make_fixnum(ecl_fixnum(v13)),(v11)->vector.dim);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v12 = ecl_fixnum(v13);
       }
       ecl_aset_unsafe(T0,v12,v8i);
      }
     }
    }
    goto L15;
L16:;
   }
   {
    cl_object v8i;
    cl_object v9;
    v8i = ECL_NIL;
    {
     cl_object v10;
     v10 = v6other_slots;
     if (ecl_unlikely(!ECL_LISTP(v10))) FEtype_error_list(v10);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v9 = v10;
    }
    {
     cl_object v10index;
     v10index = ecl_make_fixnum(0);
L52:;
     if (!(ecl_endp(v9))) { goto L54; }
     goto L53;
L54:;
     v8i = _ecl_car(v9);
     {
      cl_object v11;
      v11 = _ecl_cdr(v9);
      if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v9 = v11;
     }
L63:;
     {
      cl_object v11;
      v11 = v7aux;
      T0 = v11;
      {
       cl_fixnum v12;
       {
        cl_object v13;
        v13 = v10index;
        if (ecl_unlikely((ecl_fixnum(v13))>=(v11)->vector.dim))
           FEwrong_index(ECL_NIL,v11,-1,ecl_make_fixnum(ecl_fixnum(v13)),(v11)->vector.dim);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v12 = ecl_fixnum(v13);
       }
       if ((ecl_aref_unsafe(T0,v12))!=ECL_NIL) { goto L65; }
      }
     }
     goto L64;
L65:;
     v10index = ecl_plus(v10index,ecl_make_fixnum(1));
     goto L63;
L64:;
     {
      cl_object v11;
      v11 = v7aux;
      T0 = v11;
      {
       cl_fixnum v12;
       {
        cl_object v13;
        v13 = v10index;
        if (ecl_unlikely((ecl_fixnum(v13))>=(v11)->vector.dim))
           FEwrong_index(ECL_NIL,v11,-1,ecl_make_fixnum(ecl_fixnum(v13)),(v11)->vector.dim);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v12 = ecl_fixnum(v13);
       }
       ecl_aset_unsafe(T0,v12,v8i);
      }
     }
     (cl_env_copy->function=ECL_CONS_CAR(VV[85]))->cfun.entry(2, v10index, v8i) /*  (SETF SLOT-DEFINITION-LOCATION) */;
     goto L52;
L53:;
    }
   }
   value0 = v2slots;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function COMPUTE-SLOTS                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC42compute_slots(cl_object v1class)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(ecl_symbol_value(ECL_SYM("*NEXT-METHODS*",1536)))) { goto L2; }
  T1 = ecl_car(ecl_symbol_value(ECL_SYM("*NEXT-METHODS*",1536)));
  T2 = ecl_cdr(ecl_symbol_value(ECL_SYM("*NEXT-METHODS*",1536)));
  T0 = ecl_function_dispatch(cl_env_copy,T1)(2, ecl_symbol_value(ECL_SYM(".COMBINED-METHOD-ARGS.",1534)), T2);
  goto L1;
L2:;
  T0 = cl_error(1, VV[15]);
L1:;
  value0 = L41class_compute_slots(v1class, T0);
  return value0;
 }
}
/*      function definition for STD-CLASS-COMPUTE-SLOTS               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L43std_class_compute_slots(cl_object v1class, cl_object v2slots)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3direct_slots;
   v3direct_slots = ecl_function_dispatch(cl_env_copy,ECL_SYM("CLASS-DIRECT-SLOTS",1549))(1, v1class) /*  CLASS-DIRECT-SLOTS */;
   {
    cl_object v4;
    v4 = v2slots;
    goto L6;
L5:;
    {
     cl_object v5slotd;
     v5slotd = ecl_car(v4);
     {
      cl_object v6name;
      cl_object v7allocation;
      v6name = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-NAME",1609))(1, v5slotd) /*  SLOT-DEFINITION-NAME */;
      v7allocation = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-ALLOCATION",1604))(1, v5slotd) /*  SLOT-DEFINITION-ALLOCATION */;
      {
       cl_object v8;
       T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-ALLOCATION",1604))(1, v5slotd) /*  SLOT-DEFINITION-ALLOCATION */;
       {
        bool v9;
        v9 = (T0)==(VV[36]);
        v8 = (v9)?ECL_NIL:ECL_T;
       }
       if (Null(v8)) { goto L14; }
       goto L10;
L14:;
       {
        cl_object v9;
        v9 = ecl_function_dispatch(cl_env_copy,VV[82])(2, v3direct_slots, ecl_make_fixnum(0)) /*  MAKE-SEQ-ITERATOR */;
L19:;
        if ((v9)!=ECL_NIL) { goto L21; }
        goto L16;
L21:;
        {
         cl_object v10;
         v10 = ecl_function_dispatch(cl_env_copy,VV[83])(2, v3direct_slots, v9) /*  SEQ-ITERATOR-REF */;
         T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-NAME",1609))(1, v10) /*  SLOT-DEFINITION-NAME */;
         if (!(ecl_eql(v6name,T0))) { goto L23; }
         if (Null(v10)) { goto L16; }
         goto L17;
        }
L23:;
        v9 = ecl_function_dispatch(cl_env_copy,VV[84])(2, v3direct_slots, v9) /*  SEQ-ITERATOR-NEXT */;
        goto L19;
       }
L17:;
       {
        cl_object v9initfunc;
        cl_object v10value;
        v9initfunc = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-INITFUNCTION",1607))(1, v5slotd) /*  SLOT-DEFINITION-INITFUNCTION */;
        if (Null(v9initfunc)) { goto L31; }
        v10value = ecl_function_dispatch(cl_env_copy,v9initfunc)(0);
        goto L30;
L31:;
        v10value = ECL_UNBOUND;
L30:;
        {
         cl_object v11;
         v11 = ecl_list1(v10value);
         (cl_env_copy->function=ECL_CONS_CAR(VV[85]))->cfun.entry(2, v11, v5slotd) /*  (SETF SLOT-DEFINITION-LOCATION) */;
         goto L10;
        }
       }
L16:;
       {
        cl_object v12;
        v12 = ecl_function_dispatch(cl_env_copy,ECL_SYM("CLASS-PRECEDENCE-LIST",1553))(1, v1class) /*  CLASS-PRECEDENCE-LIST */;
        goto L37;
L36:;
        {
         cl_object v13c;
         v13c = ecl_car(v12);
         if (ecl_eql(v13c,v1class)) { goto L41; }
         {
          cl_object v14other;
          {
          cl_object v15;
          v15 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-NAME",1609))(1, v5slotd) /*  SLOT-DEFINITION-NAME */;
          {
          cl_object v16;
          cl_object v17;
          v16 = ecl_function_dispatch(cl_env_copy,ECL_SYM("CLASS-SLOTS",1555))(1, v13c) /*  CLASS-SLOTS */;
          v17 = ecl_function_dispatch(cl_env_copy,VV[82])(2, v16, ecl_make_fixnum(0)) /*  MAKE-SEQ-ITERATOR */;
L47:;
          if ((v17)!=ECL_NIL) { goto L49; }
          v14other = ECL_NIL;
          goto L43;
L49:;
          {
          cl_object v18;
          v18 = ecl_function_dispatch(cl_env_copy,VV[83])(2, v16, v17) /*  SEQ-ITERATOR-REF */;
          T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-NAME",1609))(1, v18) /*  SLOT-DEFINITION-NAME */;
          if (!(ecl_eql(v15,T0))) { goto L51; }
          v14other = v18;
          goto L43;
          }
L51:;
          v17 = ecl_function_dispatch(cl_env_copy,VV[84])(2, v16, v17) /*  SEQ-ITERATOR-NEXT */;
          goto L47;
          }
          }
L43:;
          if (Null(v14other)) { goto L41; }
          T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-ALLOCATION",1604))(1, v14other) /*  SLOT-DEFINITION-ALLOCATION */;
          if (!((T0)==(v7allocation))) { goto L41; }
          {
          cl_object v15;
          v15 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-LOCATION",1608))(1, v14other) /*  SLOT-DEFINITION-LOCATION */;
          if (Null((cl_env_copy->function=ECL_CONS_CAR(VV[85]))->cfun.entry(2, v15, v5slotd) /*  (SETF SLOT-DEFINITION-LOCATION) */)) { goto L41; }
          }
          goto L10;
         }
L41:;
        }
        v12 = ecl_cdr(v12);
L37:;
        if (Null(v12)) { goto L63; }
        goto L36;
L63:;
       }
      }
     }
L10:;
    }
    v4 = ecl_cdr(v4);
L6:;
    if (Null(v4)) { goto L67; }
    goto L5;
L67:;
   }
   value0 = v2slots;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function COMPUTE-SLOTS                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC44compute_slots(cl_object v1class)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(ecl_symbol_value(ECL_SYM("*NEXT-METHODS*",1536)))) { goto L2; }
  T1 = ecl_car(ecl_symbol_value(ECL_SYM("*NEXT-METHODS*",1536)));
  T2 = ecl_cdr(ecl_symbol_value(ECL_SYM("*NEXT-METHODS*",1536)));
  T0 = ecl_function_dispatch(cl_env_copy,T1)(2, ecl_symbol_value(ECL_SYM(".COMBINED-METHOD-ARGS.",1534)), T2);
  goto L1;
L2:;
  T0 = cl_error(1, VV[15]);
L1:;
  value0 = L43std_class_compute_slots(v1class, T0);
  return value0;
 }
}
/*      local function DESCRIBE-OBJECT                                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC45describe_object(cl_object v1obj, cl_object v2stream)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3class;
   cl_object v4slotds;
   cl_object v5slotname;
   cl_object v6has_shared_slots;
   v3class = si_instance_class(v1obj);
   v4slotds = ecl_function_dispatch(cl_env_copy,ECL_SYM("CLASS-SLOTS",1555))(1, v3class) /*  CLASS-SLOTS */;
   v5slotname = ECL_NIL;
   v6has_shared_slots = ECL_NIL;
   T0 = (cl_env_copy->function=(ECL_SYM("CLASS-NAME",936)->symbol.gfdef))->cfun.entry(1, v3class) /*  CLASS-NAME */;
   cl_format(4, v2stream, VV[37], v1obj, T0);
   if (Null(v4slotds)) { goto L1; }
   cl_format(2, v2stream, VV[38]);
   {
    cl_object v7;
    v7 = v4slotds;
    goto L13;
L12:;
    {
     cl_object v8slot;
     v8slot = ecl_car(v7);
     v5slotname = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-NAME",1609))(1, v8slot) /*  SLOT-DEFINITION-NAME */;
     {
      cl_object v9;
      v9 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-ALLOCATION",1604))(1, v8slot) /*  SLOT-DEFINITION-ALLOCATION */;
      if (!(ecl_eql(v9,ECL_SYM("INSTANCE",1282)))) { goto L21; }
      if (Null(cl_slot_boundp(v1obj, v5slotname))) { goto L24; }
      T0 = cl_slot_value(v1obj, v5slotname);
      goto L23;
L24:;
      T0 = VV[40];
L23:;
      cl_format(4, v2stream, VV[39], v5slotname, T0);
      goto L19;
L21:;
      v6has_shared_slots = ECL_T;
     }
L19:;
    }
    v7 = ecl_cdr(v7);
L13:;
    if (Null(v7)) { goto L29; }
    goto L12;
L29:;
   }
   if (Null(v6has_shared_slots)) { goto L1; }
   cl_format(2, v2stream, VV[41]);
   {
    cl_object v7;
    v7 = v4slotds;
    goto L36;
L35:;
    {
     cl_object v8slot;
     v8slot = ecl_car(v7);
     v5slotname = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-NAME",1609))(1, v8slot) /*  SLOT-DEFINITION-NAME */;
     T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-ALLOCATION",1604))(1, v8slot) /*  SLOT-DEFINITION-ALLOCATION */;
     if ((T0)==(ECL_SYM("INSTANCE",1282))) { goto L42; }
     if (Null(cl_slot_boundp(v1obj, v5slotname))) { goto L45; }
     T0 = cl_slot_value(v1obj, v5slotname);
     goto L44;
L45:;
     T0 = VV[40];
L44:;
     cl_format(4, v2stream, VV[39], v5slotname, T0);
L42:;
    }
    v7 = ecl_cdr(v7);
L36:;
    if (Null(v7)) { goto L49; }
    goto L35;
L49:;
   }
  }
L1:;
  value0 = v1obj;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for VALID-KEYWORDS-FROM-METHODS           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L46valid_keywords_from_methods(cl_narg narg, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  cl_object v1method_lists;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  v1method_lists = cl_grab_rest_args(args);
  ecl_va_end(args);
  {
   cl_object v2methods;
   cl_object v3;
   v2methods = ECL_NIL;
   {
    cl_object v4;
    v4 = v1method_lists;
    if (ecl_unlikely(!ECL_LISTP(v4))) FEtype_error_list(v4);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v3 = v4;
   }
   {
    cl_object v4;
    cl_object v5;
    v4 = ecl_list1(ECL_NIL);
    v5 = v4;
L7:;
    if (!(ecl_endp(v3))) { goto L9; }
    goto L8;
L9:;
    v2methods = _ecl_car(v3);
    {
     cl_object v6;
     v6 = _ecl_cdr(v3);
     if (ecl_unlikely(!ECL_LISTP(v6))) FEtype_error_list(v6);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v3 = v6;
    }
    {
     cl_object v6;
     v6 = v2methods;
     goto L22;
L21:;
     {
      cl_object v7;
      cl_object v8;
      {
       cl_object v9;
       v9 = v6;
       if (ecl_unlikely(ECL_ATOM(v9))) FEtype_error_cons(v9);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v7 = v9;
      }
      v8 = ECL_CONS_CAR(v7);
      T0 = ecl_function_dispatch(cl_env_copy,VV[68])(1, v8) /*  METHOD-KEYWORDS */;
      if (!(ecl_eql(ECL_T,T0))) { goto L24; }
      if (Null(v7)) { goto L17; }
      goto L18;
     }
L24:;
     v6 = ECL_CONS_CDR(v6);
L22:;
     if (v6==ECL_NIL) { goto L32; }
     goto L21;
L32:;
     goto L17;
    }
L18:;
    value0 = ECL_T;
    cl_env_copy->nvalues = 1;
    return value0;
L17:;
    {
     cl_object v6;
     v6 = v2methods;
     {
      cl_object v7;
      v7 = v5;
      if (ecl_unlikely(ECL_ATOM(v7))) FEtype_error_cons(v7);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      T0 = v7;
     }
     (ECL_CONS_CDR(T0)=v6,T0);
     if (Null(v6)) { goto L34; }
    }
    T0 = ecl_cdr(v5);
    v5 = ecl_last(T0,1);
L34:;
    goto L7;
L8:;
    value0 = ecl_cdr(v4);
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      function definition for CHECK-INITARGS                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L47check_initargs(cl_narg narg, cl_object v1class, cl_object v2initargs, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>5)) FEwrong_num_arguments_anonym();
 {
  cl_object v3methods;
  cl_object v4slots;
  cl_object v5cached_keywords;
  va_list args; va_start(args,v2initargs);
  {
   int i = 2;
   if (i >= narg) {
    v3methods = ECL_NIL;
   } else {
    i++;
    v3methods = va_arg(args,cl_object);
   }
   if (i >= narg) {
    v4slots = ecl_function_dispatch(cl_env_copy,ECL_SYM("CLASS-SLOTS",1555))(1, v1class) /*  CLASS-SLOTS */;
   } else {
    i++;
    v4slots = va_arg(args,cl_object);
   }
   if (i >= narg) {
    v5cached_keywords = ECL_NIL;
   } else {
    i++;
    v5cached_keywords = va_arg(args,cl_object);
   }
  }
  va_end(args);
  if ((v3methods)==(ECL_T)) { goto L4; }
  if ((v5cached_keywords)==(ECL_T)) { goto L4; }
  {
   cl_object v6name_loc;
   cl_object v7allow_other_keys;
   cl_object v8allow_other_keys_found;
   cl_object v9unknown_key_names;
   v6name_loc = v2initargs;
   v7allow_other_keys = ECL_NIL;
   v8allow_other_keys_found = ECL_NIL;
   v9unknown_key_names = ECL_NIL;
   goto L13;
L12:;
   {
    cl_object v10name;
    v10name = ecl_car(v6name_loc);
    T0 = ecl_cdr(v6name_loc);
    if (!(T0==ECL_NIL)) { goto L17; }
    si_simple_program_error(2, VV[43], v10name);
    goto L15;
L17:;
    if (!(ecl_eql(v10name,ECL_SYM("ALLOW-OTHER-KEYS",1219)))) { goto L19; }
    if ((v8allow_other_keys_found)!=ECL_NIL) { goto L19; }
    v7allow_other_keys = ecl_cadr(v6name_loc);
    v8allow_other_keys_found = ECL_T;
    goto L15;
L19:;
    {
     cl_object v11;
     {
      cl_object v12;
      v12 = v10name;
      {
       cl_object v13;
       v13 = v4slots;
       goto L30;
L29:;
       {
        cl_object v14;
        cl_object v15;
        {
         cl_object v16;
         v16 = v13;
         if (ecl_unlikely(ECL_ATOM(v16))) FEtype_error_cons(v16);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         v14 = v16;
        }
        v15 = ECL_CONS_CAR(v14);
        T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-INITARGS",1605))(1, v15) /*  SLOT-DEFINITION-INITARGS */;
        if (Null(ecl_memql(v12,T0))) { goto L32; }
        v11 = v14;
        goto L25;
       }
L32:;
       v13 = ECL_CONS_CDR(v13);
L30:;
       if (v13==ECL_NIL) { goto L40; }
       goto L29;
L40:;
       v11 = ECL_NIL;
      }
     }
L25:;
     if (Null(v11)) { goto L42; }
     goto L15;
L42:;
     {
      cl_object v12;
      v12 = ecl_memql(v10name,v5cached_keywords);
      if (Null(v12)) { goto L45; }
      goto L15;
L45:;
      {
       cl_object v13;
       if (Null(v3methods)) { goto L49; }
       {
        cl_object v14;
        v14 = v10name;
        {
         cl_object v15;
         v15 = v3methods;
         goto L55;
L54:;
         {
          cl_object v16;
          cl_object v17;
          {
          cl_object v18;
          v18 = v15;
          if (ecl_unlikely(ECL_ATOM(v18))) FEtype_error_cons(v18);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          v16 = v18;
          }
          v17 = ECL_CONS_CAR(v16);
          T0 = ecl_function_dispatch(cl_env_copy,VV[68])(1, v17) /*  METHOD-KEYWORDS */;
          if (Null(ecl_memql(v14,T0))) { goto L57; }
          v13 = v16;
          goto L47;
         }
L57:;
         v15 = ECL_CONS_CDR(v15);
L55:;
         if (v15==ECL_NIL) { goto L65; }
         goto L54;
L65:;
         v13 = ECL_NIL;
         goto L47;
        }
       }
L49:;
       v13 = ECL_NIL;
       goto L47;
L47:;
       if (Null(v13)) { goto L67; }
       goto L15;
L67:;
       v9unknown_key_names = CONS(v10name,v9unknown_key_names);
      }
     }
    }
   }
L15:;
   v6name_loc = ecl_cddr(v6name_loc);
L13:;
   if (v6name_loc==ECL_NIL) { goto L72; }
   goto L12;
L72:;
   if ((v7allow_other_keys)!=ECL_NIL) { goto L74; }
   if (Null(v9unknown_key_names)) { goto L74; }
   T0 = cl_nreverse(v9unknown_key_names);
   value0 = si_simple_program_error(3, VV[44], T0, v1class);
   return value0;
L74:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
L4:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function DESCRIBE-OBJECT                                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC48describe_object(cl_object v1obj, cl_object v2stream)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3slotds;
   T0 = si_instance_class(v1obj);
   v3slotds = ecl_function_dispatch(cl_env_copy,ECL_SYM("CLASS-SLOTS",1555))(1, T0) /*  CLASS-SLOTS */;
   T0 = si_instance_class(v1obj);
   T1 = (cl_env_copy->function=(ECL_SYM("CLASS-NAME",936)->symbol.gfdef))->cfun.entry(1, T0) /*  CLASS-NAME */;
   cl_format(4, v2stream, VV[46], v1obj, T1);
   {
    cl_object v4scan;
    cl_fixnum v5i;
    v4scan = v3slotds;
    v5i = 0;
    goto L8;
L7:;
    T0 = ecl_car(v4scan);
    T1 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-NAME",1609))(1, T0) /*  SLOT-DEFINITION-NAME */;
    ecl_print(T1,v2stream);
    ecl_princ(VV[47],v2stream);
    {
     cl_object v6;
     T0 = ecl_car(v4scan);
     v6 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-NAME",1609))(1, T0) /*  SLOT-DEFINITION-NAME */;
     if (!((v6)==(VV[48]))) { goto L19; }
     goto L16;
     goto L17;
L19:;
     goto L17;
L17:;
     if (!((v6)==(VV[50]))) { goto L23; }
     goto L16;
     goto L21;
L23:;
     goto L21;
L21:;
     if (!((v6)==(VV[52]))) { goto L14; }
     goto L15;
L16:;
L15:;
     ecl_princ_char((ecl_character)(40),v2stream);
     {
      cl_object v7scan;
      cl_object v8e;
      v7scan = ecl_instance_ref((v1obj),(v5i));
      v8e = ecl_car(v7scan);
      goto L32;
L31:;
      T0 = (cl_env_copy->function=(ECL_SYM("CLASS-NAME",936)->symbol.gfdef))->cfun.entry(1, v8e) /*  CLASS-NAME */;
      ecl_prin1(T0,v2stream);
      if (Null(ecl_cdr(v7scan))) { goto L35; }
      ecl_princ_char((ecl_character)(32),v2stream);
L35:;
      v7scan = ecl_cdr(v7scan);
      v8e = ecl_car(v7scan);
L32:;
      if (v7scan==ECL_NIL) { goto L41; }
      goto L31;
L41:;
     }
     ecl_princ_char((ecl_character)(41),ECL_NIL);
     goto L12;
L14:;
     T0 = ecl_instance_ref((v1obj),(v5i));
     ecl_prin1(T0,v2stream);
    }
L12:;
    v4scan = ecl_cdr(v4scan);
    {
     cl_object v6;
     v6 = ecl_make_integer((v5i)+1);
     {
      bool v7;
      v7 = ECL_FIXNUMP(v6);
      if (ecl_unlikely(!(v7)))
         FEwrong_type_argument(ECL_SYM("FIXNUM",374),v6);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
     }
     v5i = ecl_fixnum(v6);
    }
L8:;
    if (v4scan==ECL_NIL) { goto L48; }
    goto L7;
L48:;
   }
  }
  value0 = v1obj;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}

#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/clos/standard.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclNj3poIb7_HbH6lq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CLOS;STANDARD.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclNj3poIb7_HbH6lq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC1initialize_instance,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[54])(5, ECL_SYM("INITIALIZE-INSTANCE",949), ECL_NIL, VVtemp[1], VVtemp[2], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC2reinitialize_instance,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[54])(5, ECL_SYM("REINITIALIZE-INSTANCE",965), ECL_NIL, VVtemp[1], VVtemp[2], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC3shared_initialize,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[54])(5, ECL_SYM("SHARED-INITIALIZE",967), ECL_NIL, VVtemp[3], VVtemp[4], T0) /*  INSTALL-METHOD */;
 }
  ecl_cmp_defun(VV[56]);                          /*  COMPUTE-INSTANCE-SIZE */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC5allocate_instance,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[54])(5, ECL_SYM("ALLOCATE-INSTANCE",929), ECL_NIL, VVtemp[5], VVtemp[6], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC6make_instance,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[54])(5, ECL_SYM("MAKE-INSTANCE",951), ECL_NIL, VVtemp[5], VVtemp[6], T0) /*  INSTALL-METHOD */;
 }
  ecl_cmp_defun(VV[59]);                          /*  DELETE-KEYWORD  */
  (void)0; /* No entry created for ADD-DEFAULT-INITARGS */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC9direct_slot_definition_class,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[54])(5, ECL_SYM("DIRECT-SLOT-DEFINITION-CLASS",1564), ECL_NIL, VVtemp[1], VVtemp[7], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC10effective_slot_definition_class,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[54])(5, ECL_SYM("EFFECTIVE-SLOT-DEFINITION-CLASS",1566), ECL_NIL, VVtemp[1], VVtemp[7], T0) /*  INSTALL-METHOD */;
 }
  ecl_cmp_defun(VV[61]);                          /*  HAS-FORWARD-REFERENCED-PARENTS */
  ecl_cmp_defun(VV[62]);                          /*  FINALIZE-UNLESS-FORWARD */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC15initialize_instance,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[54])(5, ECL_SYM("INITIALIZE-INSTANCE",949), ECL_NIL, VVtemp[5], VVtemp[8], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC18shared_initialize,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[54])(5, ECL_SYM("SHARED-INITIALIZE",967), ECL_NIL, VVtemp[9], VVtemp[10], T0) /*  INSTALL-METHOD */;
 }
  ecl_cmp_defun(VV[67]);                          /*  PRECOMPUTE-VALID-INITARG-KEYWORDS */
  ecl_cmp_defun(VV[70]);                          /*  UPDATE-DEPENDENTS */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC22shared_initialize,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[54])(5, ECL_SYM("SHARED-INITIALIZE",967), ECL_NIL, VVtemp[11], VVtemp[12], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC23add_direct_subclass,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[54])(5, ECL_SYM("ADD-DIRECT-SUBCLASS",1546), ECL_NIL, VVtemp[9], VVtemp[13], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC24remove_direct_subclass,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[54])(5, ECL_SYM("REMOVE-DIRECT-SUBCLASS",1600), ECL_NIL, VVtemp[9], VVtemp[13], T0) /*  INSTALL-METHOD */;
 }
  ecl_cmp_defun(VV[74]);                          /*  CHECK-DIRECT-SUPERCLASSES */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC26validate_superclass,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[54])(5, ECL_SYM("VALIDATE-SUPERCLASS",1636), ECL_NIL, VVtemp[14], VVtemp[15], T0) /*  INSTALL-METHOD */;
 }
  ecl_cmp_defun(VV[75]);                          /*  FORWARD-REFERENCED-CLASS-P */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC28finalize_inheritance,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[54])(5, ECL_SYM("FINALIZE-INHERITANCE",1574), ECL_NIL, VVtemp[5], VVtemp[5], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC29finalize_inheritance,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[54])(5, ECL_SYM("FINALIZE-INHERITANCE",1574), ECL_NIL, VVtemp[16], VVtemp[5], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC30compute_class_precedence_list,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[54])(5, ECL_SYM("COMPUTE-CLASS-PRECEDENCE-LIST",1557), ECL_NIL, VVtemp[5], VVtemp[5], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC31compute_slots,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[54])(5, ECL_SYM("COMPUTE-SLOTS",1562), ECL_NIL, VVtemp[5], VVtemp[5], T0) /*  INSTALL-METHOD */;
 }
  ecl_cmp_defun(VV[93]);                          /*  SLOT-DEFINITION-TO-PLIST */
  ecl_cmp_defun(VV[95]);                          /*  SAFE-SLOT-DEFINITION-LOCATION */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC36compute_effective_slot_definition,ECL_NIL,Cblock,3);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[54])(5, ECL_SYM("COMPUTE-EFFECTIVE-SLOT-DEFINITION",1561), ECL_NIL, VVtemp[17], VVtemp[18], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC37compute_default_initargs,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[54])(5, ECL_SYM("COMPUTE-DEFAULT-INITARGS",1558), ECL_NIL, VVtemp[5], VVtemp[5], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC38ensure_class_using_class,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[54])(5, ECL_SYM("ENSURE-CLASS-USING-CLASS",1568), ECL_NIL, VVtemp[9], VVtemp[19], T0) /*  INSTALL-METHOD */;
 }
  ecl_cmp_defun(VV[105]);                         /*  COERCE-TO-CLASS */
  ecl_cmp_defun(VV[106]);                         /*  HELP-ENSURE-CLASS */
  ecl_cmp_defun(VV[109]);                         /*  CLASS-COMPUTE-SLOTS */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC42compute_slots,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[54])(5, ECL_SYM("COMPUTE-SLOTS",1562), VVtemp[20], VVtemp[5], VVtemp[5], T0) /*  INSTALL-METHOD */;
 }
  (void)0; /* No entry created for STD-CLASS-COMPUTE-SLOTS */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC44compute_slots,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[54])(5, ECL_SYM("COMPUTE-SLOTS",1562), VVtemp[20], VVtemp[16], VVtemp[5], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC45describe_object,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[54])(5, ECL_SYM("DESCRIBE-OBJECT",943), ECL_NIL, VVtemp[21], VVtemp[22], T0) /*  INSTALL-METHOD */;
 }
  ecl_cmp_defun(VV[110]);                         /*  VALID-KEYWORDS-FROM-METHODS */
  ecl_cmp_defun(VV[111]);                         /*  CHECK-INITARGS  */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC48describe_object,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[54])(5, ECL_SYM("DESCRIBE-OBJECT",943), ECL_NIL, VVtemp[11], VVtemp[22], T0) /*  INSTALL-METHOD */;
 }
}
