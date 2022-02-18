/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CLOS;CHANGE.LSP                                   */
#include <ecl/ecl-cmp.h>
#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/clos/change.eclh"
/*      local function UPDATE-INSTANCE-FOR-DIFFERENT-CLASS            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC1update_instance_for_different_class(cl_narg narg, cl_object v1old_data, cl_object v2new_data, ...)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 {
  cl_object v3initargs;
  ecl_va_list args; ecl_va_start(args,v2new_data,narg,2);
  v3initargs = cl_grab_rest_args(args);
  ecl_va_end(args);
  {
   cl_object v4;
   cl_object v5;
   cl_object v6added_slots;
   v4 = si_instance_slotds(v1old_data);
   T0 = si_instance_slotds(v2new_data);
   T1 = (ECL_SYM("EQ",335)->symbol.gfdef);
   T2 = (ECL_SYM("SLOT-DEFINITION-ALLOCATION",1604)->symbol.gfdef);
   v5 = cl_remove(6, ECL_SYM("INSTANCE",1282), T0, ECL_SYM("TEST-NOT",1344), T1, ECL_SYM("KEY",1288), T2);
   v6added_slots = ECL_NIL;
   {
    cl_object v7;
    v7 = (ECL_SYM("SLOT-DEFINITION-NAME",1609)->symbol.gfdef);
    {
     cl_object v8;
     cl_object v9;
     v8 = ECL_NIL;
     {
      cl_object v10;
      v10 = v5;
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
L16:;
      if (!(ecl_endp(v9))) { goto L18; }
      goto L17;
L18:;
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
       T1 = v12;
      }
      T2 = ecl_function_dispatch(cl_env_copy,v7)(1, v8);
      v11 = ecl_list1(T2);
      (ECL_CONS_CDR(T1)=v11,T1);
      goto L16;
L17:;
      T0 = ecl_cdr(v10);
      goto L8;
     }
    }
   }
L8:;
   {
    cl_object v7;
    v7 = (ECL_SYM("SLOT-DEFINITION-NAME",1609)->symbol.gfdef);
    {
     cl_object v8;
     cl_object v9;
     v8 = ECL_NIL;
     v9 = v4;
     {
      cl_object v10;
      cl_object v11;
      v10 = ecl_list1(ECL_NIL);
      v11 = v10;
L40:;
      if (!(ecl_endp(v9))) { goto L42; }
      goto L41;
L42:;
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
      T3 = ecl_function_dispatch(cl_env_copy,v7)(1, v8);
      v11 = ecl_list1(T3);
      (ECL_CONS_CDR(T2)=v11,T2);
      goto L40;
L41:;
      T1 = ecl_cdr(v10);
      goto L34;
     }
    }
   }
L34:;
   v6added_slots = cl_set_difference(2, T0, T1);
   T0 = cl_class_of(v2new_data);
   T1 = (ECL_SYM("UPDATE-INSTANCE-FOR-DIFFERENT-CLASS",981)->symbol.gfdef);
   T2 = cl_list(2, v1old_data, v2new_data);
   T3 = (cl_env_copy->function=(ECL_SYM("COMPUTE-APPLICABLE-METHODS",938)->symbol.gfdef))->cfun.entry(2, T1, T2) /*  COMPUTE-APPLICABLE-METHODS */;
   T4 = (ECL_SYM("SHARED-INITIALIZE",967)->symbol.gfdef);
   T5 = cl_list(2, v2new_data, v6added_slots);
   T6 = (cl_env_copy->function=(ECL_SYM("COMPUTE-APPLICABLE-METHODS",938)->symbol.gfdef))->cfun.entry(2, T4, T5) /*  COMPUTE-APPLICABLE-METHODS */;
   T7 = ecl_function_dispatch(cl_env_copy,VV[10])(2, T3, T6) /*  VALID-KEYWORDS-FROM-METHODS */;
   ecl_function_dispatch(cl_env_copy,VV[11])(3, T0, v3initargs, T7) /*  CHECK-INITARGS */;
   T0 = (ECL_SYM("SHARED-INITIALIZE",967)->symbol.gfdef);
   value0 = cl_apply(4, T0, v2new_data, v6added_slots, v3initargs);
   return value0;
  }
 }
}
/*      local function CHANGE-CLASS                                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC2change_class(cl_narg narg, cl_object v1instance, cl_object v2new_class, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 {
  cl_object v3initargs;
  ecl_va_list args; ecl_va_start(args,v2new_class,narg,2);
  v3initargs = cl_grab_rest_args(args);
  ecl_va_end(args);
  {
   cl_object v4old_instance;
   cl_object v5new_size;
   cl_object v6instance;
   v4old_instance = si_copy_instance(v1instance);
   v5new_size = ecl_function_dispatch(cl_env_copy,VV[12])(1, v2new_class) /*  CLASS-SIZE */;
   v6instance = si_allocate_raw_instance(v1instance, v2new_class, v5new_size);
   si_instance_sig_set(v6instance);
   {
    cl_object v7new_local_slotds;
    T0 = cl_class_of(v6instance);
    v7new_local_slotds = ecl_function_dispatch(cl_env_copy,ECL_SYM("CLASS-SLOTS",1555))(1, T0) /*  CLASS-SLOTS */;
    {
     cl_object v8;
     v8 = v7new_local_slotds;
     goto L10;
L9:;
     {
      cl_object v9new_slot;
      v9new_slot = ecl_car(v8);
      T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-ALLOCATION",1604))(1, v9new_slot) /*  SLOT-DEFINITION-ALLOCATION */;
      if (!((T0)==(ECL_SYM("INSTANCE",1282)))) { goto L14; }
      {
       cl_object v10name;
       v10name = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-NAME",1609))(1, v9new_slot) /*  SLOT-DEFINITION-NAME */;
       if (Null(cl_slot_exists_p(v4old_instance, v10name))) { goto L17; }
       if (Null(cl_slot_boundp(v4old_instance, v10name))) { goto L17; }
       {
        cl_object v11;
        v11 = cl_slot_value(v4old_instance, v10name);
        (cl_env_copy->function=ECL_CONS_CAR(VV[13]))->cfun.entry(3, v11, v6instance, v10name) /*  (SETF SLOT-VALUE) */;
        goto L14;
       }
L17:;
       cl_slot_makunbound(v6instance, v10name);
      }
L14:;
     }
     v8 = ecl_cdr(v8);
L10:;
     if (Null(v8)) { goto L23; }
     goto L9;
L23:;
    }
   }
   T0 = (ECL_SYM("UPDATE-INSTANCE-FOR-DIFFERENT-CLASS",981)->symbol.gfdef);
   cl_apply(4, T0, v4old_instance, v6instance, v3initargs);
   value0 = v6instance;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function CHANGE-CLASS                                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC3change_class(cl_narg narg, cl_object v1instance, cl_object v2new_class, ...)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 {
  if (Null(ecl_function_dispatch(cl_env_copy,VV[14])(1, v1instance) /*  FORWARD-REFERENCED-CLASS-P */)) { goto L1; }
  if (Null(ecl_symbol_value(ECL_SYM("*NEXT-METHODS*",1536)))) { goto L3; }
  T0 = ecl_car(ecl_symbol_value(ECL_SYM("*NEXT-METHODS*",1536)));
  T1 = ecl_cdr(ecl_symbol_value(ECL_SYM("*NEXT-METHODS*",1536)));
  value0 = ecl_function_dispatch(cl_env_copy,T0)(2, ecl_symbol_value(ECL_SYM(".COMBINED-METHOD-ARGS.",1534)), T1);
  return value0;
L3:;
  value0 = cl_error(1, VV[0]);
  return value0;
L1:;
  value0 = cl_error(1, VV[1]);
  return value0;
 }
}
/*      local function UPDATE-INSTANCE-FOR-REDEFINED-CLASS            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC4update_instance_for_redefined_class(cl_narg narg, cl_object v1instance, cl_object v2added_slots, cl_object v3discarded_slots, cl_object v4property_list, ...)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<4)) FEwrong_num_arguments_anonym();
 {
  cl_object v5initargs;
  ecl_va_list args; ecl_va_start(args,v4property_list,narg,4);
  v5initargs = cl_grab_rest_args(args);
  ecl_va_end(args);
  T0 = cl_class_of(v1instance);
  T1 = (ECL_SYM("UPDATE-INSTANCE-FOR-REDEFINED-CLASS",982)->symbol.gfdef);
  T2 = cl_list(4, v1instance, v2added_slots, v3discarded_slots, v4property_list);
  T3 = (cl_env_copy->function=(ECL_SYM("COMPUTE-APPLICABLE-METHODS",938)->symbol.gfdef))->cfun.entry(2, T1, T2) /*  COMPUTE-APPLICABLE-METHODS */;
  T4 = (ECL_SYM("SHARED-INITIALIZE",967)->symbol.gfdef);
  T5 = cl_list(2, v1instance, v2added_slots);
  T6 = (cl_env_copy->function=(ECL_SYM("COMPUTE-APPLICABLE-METHODS",938)->symbol.gfdef))->cfun.entry(2, T4, T5) /*  COMPUTE-APPLICABLE-METHODS */;
  T7 = ecl_function_dispatch(cl_env_copy,VV[10])(2, T3, T6) /*  VALID-KEYWORDS-FROM-METHODS */;
  ecl_function_dispatch(cl_env_copy,VV[11])(3, T0, v5initargs, T7) /*  CHECK-INITARGS */;
  T0 = (ECL_SYM("SHARED-INITIALIZE",967)->symbol.gfdef);
  value0 = cl_apply(4, T0, v1instance, v2added_slots, v5initargs);
  return value0;
 }
}
/*      local function UPDATE-INSTANCE-FOR-REDEFINED-CLASS            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC5update_instance_for_redefined_class(cl_narg narg, cl_object v1instance, cl_object v2added_slots, cl_object v3discarded_slots, cl_object v4property_list, ...)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<4)) FEwrong_num_arguments_anonym();
 {
  {
   cl_object v5;
   if (Null(ecl_symbol_value(ECL_SYM("*NEXT-METHODS*",1536)))) { goto L2; }
   T0 = ecl_car(ecl_symbol_value(ECL_SYM("*NEXT-METHODS*",1536)));
   T1 = ecl_cdr(ecl_symbol_value(ECL_SYM("*NEXT-METHODS*",1536)));
   v5 = ecl_function_dispatch(cl_env_copy,T0)(2, ecl_symbol_value(ECL_SYM(".COMBINED-METHOD-ARGS.",1534)), T1);
   goto L1;
L2:;
   v5 = cl_error(1, VV[0]);
L1:;
   {
    cl_object v6;
    v6 = ecl_function_dispatch(cl_env_copy,ECL_SYM("CLASS-DIRECT-SUBCLASSES",1550))(1, v1instance) /*  CLASS-DIRECT-SUBCLASSES */;
    goto L9;
L8:;
    {
     cl_object v7class;
     v7class = ecl_car(v6);
     if (Null(si_instance_obsolete_p(v7class))) { goto L13; }
     L6update_instance(v7class);
L13:;
    }
    v6 = ecl_cdr(v6);
L9:;
    if (Null(v6)) { goto L17; }
    goto L8;
L17:;
   }
   value0 = v5;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for UPDATE-INSTANCE                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L6update_instance(cl_object v1instance)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2class;
   cl_object v3old_slotds;
   cl_object v4new_slotds;
   cl_object v5old_instance;
   cl_object v6discarded_slots;
   cl_object v7added_slots;
   cl_object v8property_list;
   v2class = cl_class_of(v1instance);
   v3old_slotds = si_instance_slotds(v1instance);
   v4new_slotds = ecl_function_dispatch(cl_env_copy,ECL_SYM("CLASS-SLOTS",1555))(1, v2class) /*  CLASS-SLOTS */;
   v5old_instance = si_copy_instance(v1instance);
   v6discarded_slots = ECL_NIL;
   v7added_slots = ECL_NIL;
   v8property_list = ECL_NIL;
   T0 = ecl_function_dispatch(cl_env_copy,VV[12])(1, v2class) /*  CLASS-SIZE */;
   v1instance = si_allocate_raw_instance(v1instance, v2class, T0);
   si_instance_sig_set(v1instance);
   {
    cl_fixnum v9new_i;
    cl_object v10old_local_slotds;
    cl_object v11new_local_slotds;
    v9new_i = 0;
    T0 = (ECL_SYM("EQ",335)->symbol.gfdef);
    T1 = (ECL_SYM("SLOT-DEFINITION-ALLOCATION",1604)->symbol.gfdef);
    v10old_local_slotds = cl_remove(6, ECL_SYM("INSTANCE",1282), v3old_slotds, ECL_SYM("TEST-NOT",1344), T0, ECL_SYM("KEY",1288), T1);
    T0 = (ECL_SYM("EQ",335)->symbol.gfdef);
    T1 = (ECL_SYM("SLOT-DEFINITION-ALLOCATION",1604)->symbol.gfdef);
    v11new_local_slotds = cl_remove(6, ECL_SYM("INSTANCE",1282), v4new_slotds, ECL_SYM("TEST-NOT",1344), T0, ECL_SYM("KEY",1288), T1);
    {
     cl_object v12;
     v12 = (ECL_SYM("SLOT-DEFINITION-NAME",1609)->symbol.gfdef);
     {
      cl_object v13;
      cl_object v14;
      v13 = ECL_NIL;
      {
       cl_object v15;
       v15 = v10old_local_slotds;
       if (ecl_unlikely(!ECL_LISTP(v15))) FEtype_error_list(v15);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v14 = v15;
      }
      {
       cl_object v15;
       cl_object v16;
       v15 = ecl_list1(ECL_NIL);
       v16 = v15;
L29:;
       if (!(ecl_endp(v14))) { goto L31; }
       goto L30;
L31:;
       v13 = _ecl_car(v14);
       {
        cl_object v17;
        v17 = _ecl_cdr(v14);
        if (ecl_unlikely(!ECL_LISTP(v17))) FEtype_error_list(v17);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v14 = v17;
       }
       {
        cl_object v17;
        v17 = v16;
        if (ecl_unlikely(ECL_ATOM(v17))) FEtype_error_cons(v17);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        T1 = v17;
       }
       T2 = ecl_function_dispatch(cl_env_copy,v12)(1, v13);
       v16 = ecl_list1(T2);
       (ECL_CONS_CDR(T1)=v16,T1);
       goto L29;
L30:;
       T0 = ecl_cdr(v15);
       goto L21;
      }
     }
    }
L21:;
    {
     cl_object v12;
     v12 = (ECL_SYM("SLOT-DEFINITION-NAME",1609)->symbol.gfdef);
     {
      cl_object v13;
      cl_object v14;
      v13 = ECL_NIL;
      {
       cl_object v15;
       v15 = v11new_local_slotds;
       if (ecl_unlikely(!ECL_LISTP(v15))) FEtype_error_list(v15);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v14 = v15;
      }
      {
       cl_object v15;
       cl_object v16;
       v15 = ecl_list1(ECL_NIL);
       v16 = v15;
L55:;
       if (!(ecl_endp(v14))) { goto L57; }
       goto L56;
L57:;
       v13 = _ecl_car(v14);
       {
        cl_object v17;
        v17 = _ecl_cdr(v14);
        if (ecl_unlikely(!ECL_LISTP(v17))) FEtype_error_list(v17);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v14 = v17;
       }
       {
        cl_object v17;
        v17 = v16;
        if (ecl_unlikely(ECL_ATOM(v17))) FEtype_error_cons(v17);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        T2 = v17;
       }
       T3 = ecl_function_dispatch(cl_env_copy,v12)(1, v13);
       v16 = ecl_list1(T3);
       (ECL_CONS_CDR(T2)=v16,T2);
       goto L55;
L56:;
       T1 = ecl_cdr(v15);
       goto L47;
      }
     }
    }
L47:;
    v6discarded_slots = cl_set_difference(2, T0, T1);
    {
     cl_object v12;
     v12 = v6discarded_slots;
     goto L77;
L76:;
     {
      cl_object v13slot_name;
      v13slot_name = ecl_car(v12);
      {
       cl_object v14ndx;
       T0 = (ECL_SYM("SLOT-DEFINITION-NAME",1609)->symbol.gfdef);
       v14ndx = cl_position(4, v13slot_name, v10old_local_slotds, ECL_SYM("KEY",1288), T0);
       T0 = si_instance_ref(v5old_instance, v14ndx);
       v8property_list = cl_listX(3, v13slot_name, T0, v8property_list);
      }
     }
     v12 = ecl_cdr(v12);
L77:;
     if (Null(v12)) { goto L87; }
     goto L76;
L87:;
    }
    {
     cl_object v12;
     v12 = v11new_local_slotds;
     goto L92;
L91:;
     {
      cl_object v13new_slot;
      v13new_slot = ecl_car(v12);
      {
       cl_object v14name;
       cl_object v15old_i;
       v14name = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-NAME",1609))(1, v13new_slot) /*  SLOT-DEFINITION-NAME */;
       T0 = (ECL_SYM("SLOT-DEFINITION-NAME",1609)->symbol.gfdef);
       v15old_i = cl_position(4, v14name, v10old_local_slotds, ECL_SYM("KEY",1288), T0);
       if (Null(v15old_i)) { goto L101; }
       T0 = si_instance_ref(v5old_instance, v15old_i);
       si_instance_set(v1instance, ecl_make_fixnum(v9new_i), T0);
       goto L100;
L101:;
       v7added_slots = CONS(v14name,v7added_slots);
L100:;
       {
        cl_object v16;
        v16 = ecl_plus(ecl_make_fixnum(v9new_i),ecl_make_fixnum(1));
        {
         bool v17;
         v17 = ECL_FIXNUMP(v16);
         if (ecl_unlikely(!(v17)))
         FEwrong_type_argument(ECL_SYM("FIXNUM",374),v16);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
        }
        v9new_i = ecl_fixnum(v16);
       }
      }
     }
     v12 = ecl_cdr(v12);
L92:;
     if (Null(v12)) { goto L109; }
     goto L91;
L109:;
    }
   }
   value0 = (cl_env_copy->function=(ECL_SYM("UPDATE-INSTANCE-FOR-REDEFINED-CLASS",982)->symbol.gfdef))->cfun.entry(4, v1instance, v7added_slots, v6discarded_slots, v8property_list) /*  UPDATE-INSTANCE-FOR-REDEFINED-CLASS */;
   return value0;
  }
 }
}
/*      local function REINITIALIZE-INSTANCE                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC7reinitialize_instance(cl_narg narg, cl_object v1class, ...)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2direct_superclasses;
  cl_object v3direct_superclasses_p;
  cl_object v4direct_slots;
  cl_object v5direct_slots_p;
  ecl_va_list args; ecl_va_start(args,v1class,narg,1);
  {
   cl_object keyvars[4];
   cl_parse_key(args,2,LC7reinitialize_instancekeys,keyvars,NULL,TRUE);
   ecl_va_end(args);
   v2direct_superclasses = keyvars[0];
   v3direct_superclasses_p = keyvars[2];
   v4direct_slots = keyvars[1];
   v5direct_slots_p = keyvars[3];
  }
  {
   cl_object v6name;
   v6name = (cl_env_copy->function=(ECL_SYM("CLASS-NAME",936)->symbol.gfdef))->cfun.entry(1, v1class) /*  CLASS-NAME */;
   if (!((v6name)==(ECL_SYM("CLASS",935)))) { goto L7; }
   goto L4;
   goto L5;
L7:;
   goto L5;
L5:;
   if (!((v6name)==(ECL_SYM("BUILT-IN-CLASS",931)))) { goto L1; }
   goto L3;
L4:;
L3:;
   cl_error(2, VV[5], v6name);
  }
L1:;
  if (Null(ecl_function_dispatch(cl_env_copy,ECL_SYM("CLASS-FINALIZED-P",1552))(1, v1class) /*  CLASS-FINALIZED-P */)) { goto L10; }
  L10remove_optional_slot_accessors(v1class);
L10:;
  if (Null(ecl_symbol_value(ECL_SYM("*NEXT-METHODS*",1536)))) { goto L13; }
  T0 = ecl_car(ecl_symbol_value(ECL_SYM("*NEXT-METHODS*",1536)));
  T1 = ecl_cdr(ecl_symbol_value(ECL_SYM("*NEXT-METHODS*",1536)));
  ecl_function_dispatch(cl_env_copy,T0)(2, ecl_symbol_value(ECL_SYM(".COMBINED-METHOD-ARGS.",1534)), T1);
  goto L12;
L13:;
  cl_error(1, VV[0]);
L12:;
  if (Null(v5direct_slots_p)) { goto L16; }
  {
   cl_object v6;
   {
    cl_object v7s;
    cl_object v8;
    v7s = ECL_NIL;
    {
     cl_object v9;
     v9 = v4direct_slots;
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
L25:;
     if (!(ecl_endp(v8))) { goto L27; }
     goto L26;
L27:;
     v7s = _ecl_car(v8);
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
     T1 = ecl_function_dispatch(cl_env_copy,VV[18])(2, v1class, v7s) /*  CANONICAL-SLOT-TO-DIRECT-SLOT */;
     v10 = ecl_list1(T1);
     (ECL_CONS_CDR(T0)=v10,T0);
     goto L25;
L26:;
     v6 = ecl_cdr(v9);
     goto L18;
    }
   }
L18:;
   (cl_env_copy->function=ECL_CONS_CAR(VV[19]))->cfun.entry(2, v6, v1class) /*  (SETF CLASS-DIRECT-SLOTS) */;
  }
L16:;
  if (Null(v3direct_superclasses_p)) { goto L42; }
  v2direct_superclasses = ecl_function_dispatch(cl_env_copy,VV[20])(2, v1class, v2direct_superclasses) /*  CHECK-DIRECT-SUPERCLASSES */;
  {
   cl_object v6;
   v6 = ecl_function_dispatch(cl_env_copy,ECL_SYM("CLASS-DIRECT-SUPERCLASSES",1551))(1, v1class) /*  CLASS-DIRECT-SUPERCLASSES */;
   goto L50;
L49:;
   {
    cl_object v7l;
    v7l = ecl_car(v6);
    if ((ecl_memql(v7l,v2direct_superclasses))!=ECL_NIL) { goto L54; }
    ecl_function_dispatch(cl_env_copy,ECL_SYM("REMOVE-DIRECT-SUBCLASS",1600))(2, v7l, v1class) /*  REMOVE-DIRECT-SUBCLASS */;
L54:;
   }
   v6 = ecl_cdr(v6);
L50:;
   if (Null(v6)) { goto L58; }
   goto L49;
L58:;
  }
  {
   cl_object v6;
   v6 = (cl_env_copy->function=ECL_CONS_CAR(VV[21]))->cfun.entry(2, v2direct_superclasses, v1class) /*  (SETF CLASS-DIRECT-SUPERCLASSES) */;
   goto L63;
L62:;
   {
    cl_object v7l;
    v7l = ecl_car(v6);
    ecl_function_dispatch(cl_env_copy,ECL_SYM("ADD-DIRECT-SUBCLASS",1546))(2, v7l, v1class) /*  ADD-DIRECT-SUBCLASS */;
   }
   v6 = ecl_cdr(v6);
L63:;
   if (Null(v6)) { goto L70; }
   goto L62;
L70:;
  }
L42:;
  (cl_env_copy->function=ECL_CONS_CAR(VV[22]))->cfun.entry(2, ECL_NIL, v1class) /*  (SETF CLASS-FINALIZED-P) */;
  ecl_function_dispatch(cl_env_copy,VV[23])(1, v1class) /*  FINALIZE-UNLESS-FORWARD */;
  value0 = v1class;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for SLOT-DEFINITIONS-COMPATIBLE-P         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L8slot_definitions_compatible_p(cl_object v1old_slotds, cl_object v2new_slotds)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3o;
   v3o = ECL_NIL;
   {
    cl_object v4n;
    v4n = ECL_NIL;
L3:;
    {
     cl_object v5;
     v5 = v1old_slotds;
     {
      cl_object v6;
      v6 = v5;
      if (ecl_unlikely(!ECL_LISTP(v6))) FEtype_error_list(v6);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
     }
     if (Null(v5)) { goto L11; }
     {
      cl_object v6;
      v6 = ECL_CONS_CDR(v5);
      v1old_slotds = v6;
      v5 = ECL_CONS_CAR(v5);
     }
L11:;
     v3o = v5;
    }
    {
     cl_object v5;
     v5 = v2new_slotds;
     {
      cl_object v6;
      v6 = v5;
      if (ecl_unlikely(!ECL_LISTP(v6))) FEtype_error_list(v6);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
     }
     if (Null(v5)) { goto L23; }
     {
      cl_object v6;
      v6 = ECL_CONS_CDR(v5);
      v2new_slotds = v6;
      v5 = ECL_CONS_CAR(v5);
     }
L23:;
     v4n = v5;
    }
    if (Null(v3o)) { goto L32; }
    if ((v4n)!=ECL_NIL) { goto L29; }
    goto L30;
L32:;
    goto L30;
L30:;
    goto L4;
L29:;
    {
     cl_object v5;
     cl_object v6;
     cl_object v7;
     cl_object v8;
     v5 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-ALLOCATION",1604))(1, v3o) /*  SLOT-DEFINITION-ALLOCATION */;
     v6 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-ALLOCATION",1604))(1, v4n) /*  SLOT-DEFINITION-ALLOCATION */;
     v7 = cl_class_of(v3o);
     v8 = cl_class_of(v4n);
     if (!((v5)==(v6))) { goto L41; }
     T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-NAME",1609))(1, v3o) /*  SLOT-DEFINITION-NAME */;
     T1 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-NAME",1609))(1, v4n) /*  SLOT-DEFINITION-NAME */;
     if (!((T0)==(T1))) { goto L41; }
     if (!((v5)==(ECL_SYM("INSTANCE",1282)))) { goto L45; }
     T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-LOCATION",1608))(1, v3o) /*  SLOT-DEFINITION-LOCATION */;
     T1 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-LOCATION",1608))(1, v4n) /*  SLOT-DEFINITION-LOCATION */;
     if (!(ecl_number_equalp(T0,T1))) { goto L41; }
     goto L44;
L45:;
L44:;
     if (!((v7)==(v8))) { goto L41; }
     T0 = cl_find_class(1, ECL_SYM("STANDARD-DIRECT-SLOT-DEFINITION",1621));
     if ((v8)==(T0)) { goto L34; }
     T0 = cl_find_class(1, ECL_SYM("STANDARD-EFFECTIVE-SLOT-DEFINITION",1622));
     if ((v8)==(T0)) { goto L34; }
     goto L39;
L41:;
     goto L39;
L39:;
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 1;
     return value0;
    }
L34:;
    goto L3;
L4:;
    if (!(v3o==ECL_NIL)) { goto L52; }
    if (!(v4n==ECL_NIL)) { goto L52; }
    if (!(v1old_slotds==ECL_NIL)) { goto L52; }
    value0 = ecl_make_bool(v2new_slotds==ECL_NIL);
    cl_env_copy->nvalues = 1;
    return value0;
L52:;
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      local function MAKE-INSTANCES-OBSOLETE                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC9make_instances_obsolete(cl_object v1class)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  si_instance_new_stamp(v1class);
  value0 = v1class;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for REMOVE-OPTIONAL-SLOT-ACCESSORS        */
/*      optimize speed 1, debug 1, space 1, safety 0                  */
static cl_object L10remove_optional_slot_accessors(cl_object v1class)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 {
  cl_object v2;
  v2 = ecl_function_dispatch(cl_env_copy,ECL_SYM("CLASS-SLOTS",1555))(1, v1class) /*  CLASS-SLOTS */;
  goto L4;
L3:;
  {
   cl_object v3slotd;
   v3slotd = _ecl_car(v2);
   {
    cl_object v4;
    v4 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-READERS",1610))(1, v3slotd) /*  SLOT-DEFINITION-READERS */;
    goto L12;
L11:;
    {
     cl_object v5reader;
     v5reader = _ecl_car(v4);
     {
      cl_object v6gf_object;
      cl_object v7found;
      v6gf_object = cl_fdefinition(v5reader);
      v7found = ECL_NIL;
      T0 = ecl_list1(v1class);
      v7found = (cl_env_copy->function=(ECL_SYM("FIND-METHOD",946)->symbol.gfdef))->cfun.entry(4, v6gf_object, ECL_NIL, T0, ECL_NIL) /*  FIND-METHOD */;
      if (Null(v7found)) { goto L19; }
      (cl_env_copy->function=(ECL_SYM("REMOVE-METHOD",966)->symbol.gfdef))->cfun.entry(2, v6gf_object, v7found) /*  REMOVE-METHOD */;
L19:;
      T0 = ecl_list1(v1class);
      v7found = (cl_env_copy->function=(ECL_SYM("FIND-METHOD",946)->symbol.gfdef))->cfun.entry(4, v6gf_object, VV[7], T0, ECL_NIL) /*  FIND-METHOD */;
      if (Null(v7found)) { goto L22; }
      (cl_env_copy->function=(ECL_SYM("REMOVE-METHOD",966)->symbol.gfdef))->cfun.entry(2, v6gf_object, v7found) /*  REMOVE-METHOD */;
L22:;
      T0 = ecl_list1(v1class);
      v7found = (cl_env_copy->function=(ECL_SYM("FIND-METHOD",946)->symbol.gfdef))->cfun.entry(4, v6gf_object, VV[8], T0, ECL_NIL) /*  FIND-METHOD */;
      if (Null(v7found)) { goto L16; }
      (cl_env_copy->function=(ECL_SYM("REMOVE-METHOD",966)->symbol.gfdef))->cfun.entry(2, v6gf_object, v7found) /*  REMOVE-METHOD */;
     }
L16:;
    }
    v4 = _ecl_cdr(v4);
L12:;
    if (Null(v4)) { goto L29; }
    goto L11;
L29:;
   }
   {
    cl_object v4;
    v4 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-WRITERS",1612))(1, v3slotd) /*  SLOT-DEFINITION-WRITERS */;
    goto L35;
L34:;
    {
     cl_object v5writer;
     v5writer = _ecl_car(v4);
     {
      cl_object v6gf_object;
      cl_object v7found;
      v6gf_object = cl_fdefinition(v5writer);
      v7found = ECL_NIL;
      T0 = cl_list(2, ECL_T, v1class);
      v7found = (cl_env_copy->function=(ECL_SYM("FIND-METHOD",946)->symbol.gfdef))->cfun.entry(4, v6gf_object, ECL_NIL, T0, ECL_NIL) /*  FIND-METHOD */;
      if (Null(v7found)) { goto L42; }
      (cl_env_copy->function=(ECL_SYM("REMOVE-METHOD",966)->symbol.gfdef))->cfun.entry(2, v6gf_object, v7found) /*  REMOVE-METHOD */;
L42:;
      T0 = cl_list(2, ECL_T, v1class);
      v7found = (cl_env_copy->function=(ECL_SYM("FIND-METHOD",946)->symbol.gfdef))->cfun.entry(4, v6gf_object, VV[7], T0, ECL_NIL) /*  FIND-METHOD */;
      if (Null(v7found)) { goto L45; }
      (cl_env_copy->function=(ECL_SYM("REMOVE-METHOD",966)->symbol.gfdef))->cfun.entry(2, v6gf_object, v7found) /*  REMOVE-METHOD */;
L45:;
      T0 = cl_list(2, ECL_T, v1class);
      v7found = (cl_env_copy->function=(ECL_SYM("FIND-METHOD",946)->symbol.gfdef))->cfun.entry(4, v6gf_object, VV[8], T0, ECL_NIL) /*  FIND-METHOD */;
      if (Null(v7found)) { goto L39; }
      (cl_env_copy->function=(ECL_SYM("REMOVE-METHOD",966)->symbol.gfdef))->cfun.entry(2, v6gf_object, v7found) /*  REMOVE-METHOD */;
     }
L39:;
    }
    v4 = _ecl_cdr(v4);
L35:;
    if (Null(v4)) { goto L52; }
    goto L34;
L52:;
   }
  }
  v2 = _ecl_cdr(v2);
L4:;
  if (Null(v2)) { goto L56; }
  goto L3;
L56:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}

#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/clos/change.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _ecldDZ77Sb7_y6I6lq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CLOS;CHANGE.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_ecldDZ77Sb7_y6I6lq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC1update_instance_for_different_class,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[9])(5, ECL_SYM("UPDATE-INSTANCE-FOR-DIFFERENT-CLASS",981), ECL_NIL, VVtemp[1], VVtemp[2], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC2change_class,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[9])(5, ECL_SYM("CHANGE-CLASS",934), ECL_NIL, VVtemp[3], VVtemp[4], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC3change_class,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[9])(5, ECL_SYM("CHANGE-CLASS",934), ECL_NIL, VVtemp[5], VVtemp[4], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC4update_instance_for_redefined_class,ECL_NIL,Cblock,4);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[9])(5, ECL_SYM("UPDATE-INSTANCE-FOR-REDEFINED-CLASS",982), ECL_NIL, VVtemp[6], VVtemp[7], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC5update_instance_for_redefined_class,ECL_NIL,Cblock,4);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[9])(5, ECL_SYM("UPDATE-INSTANCE-FOR-REDEFINED-CLASS",982), ECL_NIL, VVtemp[8], VVtemp[7], T0) /*  INSTALL-METHOD */;
 }
  ecl_cmp_defun(VV[15]);                          /*  UPDATE-INSTANCE */
  (cl_env_copy->function=(ECL_SYM("ENSURE-GENERIC-FUNCTION",944)->symbol.gfdef))->cfun.entry(3, ECL_SYM("REINITIALIZE-INSTANCE",965), ECL_SYM("LAMBDA-LIST",1000), VVtemp[9]) /*  ENSURE-GENERIC-FUNCTION */;
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC7reinitialize_instance,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[9])(5, ECL_SYM("REINITIALIZE-INSTANCE",965), ECL_NIL, VVtemp[10], VVtemp[11], T0) /*  INSTALL-METHOD */;
 }
  ecl_cmp_defun(VV[24]);                          /*  SLOT-DEFINITIONS-COMPATIBLE-P */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC9make_instances_obsolete,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[9])(5, ECL_SYM("MAKE-INSTANCES-OBSOLETE",952), ECL_NIL, VVtemp[10], VVtemp[10], T0) /*  INSTALL-METHOD */;
 }
  (void)0; /* No entry created for REMOVE-OPTIONAL-SLOT-ACCESSORS */
}
