/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CLOS;STD-SLOT-VALUE.LSP                           */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/build/clos/std-slot-value.eclh"
/*      local function WITH-SLOTS                                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC1with_slots(cl_object v1, cl_object v2)
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
   cl_object v4slot_entries;
   cl_object v5instance_form;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[12])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4slot_entries = v6;
   }
   if (!(v3==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[12])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5instance_form = v6;
   }
   {
    cl_object v6temp;
    cl_object v7accessors;
    v6temp = cl_gensym(0);
    {
     cl_object v8scan;
     cl_object v9res;
     v8scan = v4slot_entries;
     v9res = ECL_NIL;
     goto L20;
L19:;
     T0 = ecl_car(v8scan);
     if (!(ECL_SYMBOLP(T0))) { goto L23; }
     T0 = ecl_car(v8scan);
     T1 = ecl_car(v8scan);
     T2 = cl_list(2, ECL_SYM("QUOTE",681), T1);
     T3 = cl_list(3, ECL_SYM("SLOT-VALUE",973), v6temp, T2);
     T4 = cl_list(2, T0, T3);
     v9res = CONS(T4,v9res);
     goto L22;
L23:;
     T0 = ecl_caar(v8scan);
     T1 = ecl_cadar(v8scan);
     T2 = cl_list(2, ECL_SYM("QUOTE",681), T1);
     T3 = cl_list(3, ECL_SYM("SLOT-VALUE",973), v6temp, T2);
     T4 = cl_list(2, T0, T3);
     v9res = CONS(T4,v9res);
L22:;
     v8scan = ecl_cdr(v8scan);
L20:;
     if (v8scan==ECL_NIL) { goto L29; }
     goto L19;
L29:;
     v7accessors = cl_nreverse(v9res);
    }
    T0 = cl_list(2, v6temp, v5instance_form);
    T1 = ecl_list1(T0);
    T2 = cl_listX(3, ECL_SYM("SYMBOL-MACROLET",844), v7accessors, v3);
    value0 = cl_list(3, ECL_SYM("LET",479), T1, T2);
    return value0;
   }
  }
 }
}
/*      function definition for STD-CREATE-SLOTS-TABLE                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L2std_create_slots_table(cl_object v1class)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2size;
   cl_object v3table;
   T0 = cl_slot_value(v1class, VV[1]);
   {
    cl_fixnum v4;
    v4 = ecl_length(T0);
    T1 = ecl_times(ecl_make_fixnum(2),ecl_make_fixnum(v4));
    v2size = ((ecl_float_nan_p(T1) || ecl_greatereq(ecl_make_fixnum(32),T1))?ecl_make_fixnum(32):T1);
   }
   v3table = cl_make_hash_table(2, ECL_SYM("SIZE",1335), v2size);
   {
    cl_object v4;
    v4 = cl_slot_value(v1class, VV[1]);
    goto L7;
L6:;
    {
     cl_object v5slotd;
     v5slotd = ecl_car(v4);
     T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-NAME",1609))(1, v5slotd) /*  SLOT-DEFINITION-NAME */;
     si_hash_set(T0, v3table, v5slotd);
    }
    v4 = ecl_cdr(v4);
L7:;
    if (Null(v4)) { goto L14; }
    goto L6;
L14:;
   }
   {
    cl_object v4;
    cl_object v5locations;
    v4 = si_instance_class(v1class);
    v5locations = ECL_NIL;
    T0 = cl_find_class(1, ECL_SYM("STANDARD-CLASS",975));
    if ((v4)==(T0)) { goto L20; }
    T0 = cl_find_class(1, ECL_SYM("FUNCALLABLE-STANDARD-CLASS",1577));
    if ((v4)==(T0)) { goto L20; }
    T0 = cl_find_class(1, ECL_SYM("STRUCTURE-CLASS",979));
    if (!((v4)==(T0))) { goto L18; }
    goto L19;
L20:;
L19:;
    v5locations = cl_make_hash_table(2, ECL_SYM("SIZE",1335), v2size);
    {
     cl_object v6;
     v6 = cl_slot_value(v1class, VV[1]);
     goto L28;
L27:;
     {
      cl_object v7slotd;
      v7slotd = ecl_car(v6);
      T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-NAME",1609))(1, v7slotd) /*  SLOT-DEFINITION-NAME */;
      T1 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-LOCATION",1608))(1, v7slotd) /*  SLOT-DEFINITION-LOCATION */;
      si_hash_set(T0, v5locations, T1);
     }
     v6 = ecl_cdr(v6);
L28:;
     if (Null(v6)) { goto L35; }
     goto L27;
L35:;
    }
L18:;
    (cl_env_copy->function=ECL_CONS_CAR(VV[14]))->cfun.entry(3, v3table, v1class, ECL_SYM("SLOT-TABLE",1616)) /*  (SETF SLOT-VALUE) */;
    value0 = (cl_env_copy->function=ECL_CONS_CAR(VV[14]))->cfun.entry(3, v5locations, v1class, ECL_SYM("LOCATION-TABLE",1588)) /*  (SETF SLOT-VALUE) */;
    return value0;
   }
  }
 }
}
/*      function definition for FIND-SLOT-DEFINITION                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L3find_slot_definition(cl_object v1class, cl_object v2slot_name)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = si_instance_class(v1class);
  if ((T0)==(ecl_symbol_value(ECL_SYM("+THE-STANDARD-CLASS+",1541)))) { goto L3; }
  T0 = si_instance_class(v1class);
  if (!((T0)==(ecl_symbol_value(ECL_SYM("+THE-FUNCALLABLE-STANDARD-CLASS+",1542))))) { goto L1; }
  goto L2;
L3:;
L2:;
  T0 = cl_slot_value(v1class, ECL_SYM("SLOT-TABLE",1616));
  value0 = cl_gethash(3, v2slot_name, T0, ECL_NIL);
  return value0;
L1:;
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_slot_value(v1class, VV[1]);
   v4 = ecl_function_dispatch(cl_env_copy,VV[16])(2, v3, ecl_make_fixnum(0)) /*  MAKE-SEQ-ITERATOR */;
L7:;
   if ((v4)!=ECL_NIL) { goto L9; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L9:;
   {
    cl_object v5;
    v5 = ecl_function_dispatch(cl_env_copy,VV[17])(2, v3, v4) /*  SEQ-ITERATOR-REF */;
    T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-NAME",1609))(1, v5) /*  SLOT-DEFINITION-NAME */;
    if (!(ecl_eql(v2slot_name,T0))) { goto L11; }
    value0 = v5;
    cl_env_copy->nvalues = 1;
    return value0;
   }
L11:;
   v4 = ecl_function_dispatch(cl_env_copy,VV[18])(2, v3, v4) /*  SEQ-ITERATOR-NEXT */;
   goto L7;
  }
 }
}
/*      function definition for UPDATE-INSTANCE                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L4update_instance(cl_object v1x)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = si_instance_sig_set(v1x);
  return value0;
 }
}
/*      function definition for STANDARD-INSTANCE-ACCESS              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object clos_standard_instance_access(cl_object v1instance, cl_object v2location)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(si_instance_obsolete_p(v1instance))) { goto L1; }
  ecl_function_dispatch(cl_env_copy,VV[4])(1, v1instance) /*  UPDATE-INSTANCE */;
L1:;
  if (!(ECL_FIXNUMP(v2location))) { goto L3; }
  value0 = ecl_instance_ref((v1instance),(ecl_to_fixnum(v2location)));
  cl_env_copy->nvalues = 1;
  return value0;
L3:;
  if (!(ECL_CONSP(v2location))) { goto L5; }
  value0 = ecl_car(v2location);
  cl_env_copy->nvalues = 1;
  return value0;
L5:;
  value0 = L5invalid_slot_location(v1instance, v2location);
  return value0;
 }
}
/*      function definition for STANDARD-INSTANCE-SET                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object clos_standard_instance_set(cl_object v1instance, cl_object v2location, cl_object v3val)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(si_instance_obsolete_p(v1instance))) { goto L1; }
  ecl_function_dispatch(cl_env_copy,VV[4])(1, v1instance) /*  UPDATE-INSTANCE */;
L1:;
  if (!(ECL_FIXNUMP(v2location))) { goto L4; }
  si_instance_set(v1instance, v2location, v3val);
  goto L3;
L4:;
  if (!(ECL_CONSP(v2location))) { goto L6; }
  {
   cl_object v4;
   v4 = v3val;
   {
    cl_object v5;
    v5 = v2location;
    if (ecl_unlikely(ECL_ATOM(v5))) FEtype_error_cons(v5);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    T0 = v5;
   }
   (ECL_CONS_CAR(T0)=v4,T0);
   goto L3;
  }
L6:;
  L5invalid_slot_location(v1instance, v2location);
L3:;
  value0 = v3val;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for SLOT-VALUE                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_slot_value(cl_object v1self, cl_object v2slot_name)
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
   cl_object v4location_table;
   v3class = cl_class_of(v1self);
   v4location_table = ecl_instance_ref((v3class),(19));
   if (Null(v4location_table)) { goto L3; }
   {
    cl_object v5location;
    v5location = ecl_gethash_safe(v2slot_name,v4location_table,ECL_NIL);
    if (Null(v5location)) { goto L6; }
    {
     cl_object v6value;
     v6value = clos_standard_instance_access(v1self, v5location);
     if (!((v6value)!=ECL_UNBOUND)) { goto L9; }
     value0 = v6value;
     cl_env_copy->nvalues = 1;
     return value0;
L9:;
     value0 = (cl_env_copy->function=(ECL_SYM("SLOT-UNBOUND",972)->symbol.gfdef))->cfun.entry(3, v3class, v1self, v2slot_name) /*  SLOT-UNBOUND */;
     cl_env_copy->nvalues = 1;
     return value0;
    }
L6:;
    value0 = (cl_env_copy->function=(ECL_SYM("SLOT-MISSING",971)->symbol.gfdef))->cfun.entry(4, v3class, v1self, v2slot_name, ECL_SYM("SLOT-VALUE",973)) /*  SLOT-MISSING */;
    return value0;
   }
L3:;
   {
    cl_object v7slotd;
    {
     cl_object v8;
     cl_object v9;
     v8 = ecl_instance_ref((v3class),(6));
     v9 = ecl_function_dispatch(cl_env_copy,VV[16])(2, v8, ecl_make_fixnum(0)) /*  MAKE-SEQ-ITERATOR */;
L15:;
     if ((v9)!=ECL_NIL) { goto L17; }
     v7slotd = ECL_NIL;
     goto L12;
L17:;
     {
      cl_object v10;
      v10 = ecl_function_dispatch(cl_env_copy,VV[17])(2, v8, v9) /*  SEQ-ITERATOR-REF */;
      T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-NAME",1609))(1, v10) /*  SLOT-DEFINITION-NAME */;
      if (!((v2slot_name)==(T0))) { goto L19; }
      v7slotd = v10;
      goto L12;
     }
L19:;
     v9 = ecl_function_dispatch(cl_env_copy,VV[18])(2, v8, v9) /*  SEQ-ITERATOR-NEXT */;
     goto L15;
    }
L12:;
    if (Null(v7slotd)) { goto L25; }
    value0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-VALUE-USING-CLASS",1614))(3, v3class, v1self, v7slotd) /*  SLOT-VALUE-USING-CLASS */;
    return value0;
L25:;
    value0 = (cl_env_copy->function=(ECL_SYM("SLOT-MISSING",971)->symbol.gfdef))->cfun.entry(4, v3class, v1self, v2slot_name, ECL_SYM("SLOT-VALUE",973)) /*  SLOT-MISSING */;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      function definition for SLOT-EXISTS-P                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_slot_exists_p(cl_object v1self, cl_object v2slot_name)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_class_of(v1self);
  if (Null(L3find_slot_definition(T0, v2slot_name))) { goto L2; }
  value0 = ECL_T;
  cl_env_copy->nvalues = 1;
  return value0;
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for SLOT-BOUNDP                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_slot_boundp(cl_object v1self, cl_object v2slot_name)
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
   cl_object v4location_table;
   v3class = cl_class_of(v1self);
   v4location_table = ecl_instance_ref((v3class),(19));
   if (Null(v4location_table)) { goto L3; }
   {
    cl_object v5location;
    v5location = ecl_gethash_safe(v2slot_name,v4location_table,ECL_NIL);
    if (Null(v5location)) { goto L6; }
    T0 = clos_standard_instance_access(v1self, v5location);
    value0 = ecl_make_bool((T0)!=ECL_UNBOUND);
    cl_env_copy->nvalues = 1;
    return value0;
L6:;
    value0 = (cl_env_copy->function=(ECL_SYM("SLOT-MISSING",971)->symbol.gfdef))->cfun.entry(4, v3class, v1self, v2slot_name, ECL_SYM("SLOT-BOUNDP",968)) /*  SLOT-MISSING */;
    cl_env_copy->nvalues = 1;
    return value0;
   }
L3:;
   {
    cl_object v6slotd;
    {
     cl_object v7;
     cl_object v8;
     v7 = ecl_instance_ref((v3class),(6));
     v8 = ecl_function_dispatch(cl_env_copy,VV[16])(2, v7, ecl_make_fixnum(0)) /*  MAKE-SEQ-ITERATOR */;
L12:;
     if ((v8)!=ECL_NIL) { goto L14; }
     v6slotd = ECL_NIL;
     goto L9;
L14:;
     {
      cl_object v9;
      v9 = ecl_function_dispatch(cl_env_copy,VV[17])(2, v7, v8) /*  SEQ-ITERATOR-REF */;
      T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-NAME",1609))(1, v9) /*  SLOT-DEFINITION-NAME */;
      if (!((v2slot_name)==(T0))) { goto L16; }
      v6slotd = v9;
      goto L9;
     }
L16:;
     v8 = ecl_function_dispatch(cl_env_copy,VV[18])(2, v7, v8) /*  SEQ-ITERATOR-NEXT */;
     goto L12;
    }
L9:;
    if (Null(v6slotd)) { goto L22; }
    value0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-BOUNDP-USING-CLASS",1602))(3, v3class, v1self, v6slotd) /*  SLOT-BOUNDP-USING-CLASS */;
    return value0;
L22:;
    value0 = (cl_env_copy->function=(ECL_SYM("SLOT-MISSING",971)->symbol.gfdef))->cfun.entry(4, v3class, v1self, v2slot_name, ECL_SYM("SLOT-BOUNDP",968)) /*  SLOT-MISSING */;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      function definition for SLOT-VALUE-SET                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object clos_slot_value_set(cl_object v1value, cl_object v2self, cl_object v3slot_name)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v4class;
   cl_object v5location_table;
   v4class = cl_class_of(v2self);
   v5location_table = ecl_instance_ref((v4class),(19));
   if (Null(v5location_table)) { goto L4; }
   {
    cl_object v6location;
    v6location = ecl_gethash_safe(v3slot_name,v5location_table,ECL_NIL);
    if (Null(v6location)) { goto L7; }
    clos_standard_instance_set(v2self, v6location, v1value);
    goto L1;
L7:;
    (cl_env_copy->function=(ECL_SYM("SLOT-MISSING",971)->symbol.gfdef))->cfun.entry(5, v4class, v2self, v3slot_name, ECL_SYM("SETF",752), v1value) /*  SLOT-MISSING */;
    goto L1;
   }
L4:;
   {
    cl_object v7slotd;
    {
     cl_object v8;
     cl_object v9;
     v8 = ecl_instance_ref((v4class),(6));
     v9 = ecl_function_dispatch(cl_env_copy,VV[16])(2, v8, ecl_make_fixnum(0)) /*  MAKE-SEQ-ITERATOR */;
L12:;
     if ((v9)!=ECL_NIL) { goto L14; }
     v7slotd = ECL_NIL;
     goto L9;
L14:;
     {
      cl_object v10;
      v10 = ecl_function_dispatch(cl_env_copy,VV[17])(2, v8, v9) /*  SEQ-ITERATOR-REF */;
      T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-NAME",1609))(1, v10) /*  SLOT-DEFINITION-NAME */;
      if (!((v3slot_name)==(T0))) { goto L16; }
      v7slotd = v10;
      goto L9;
     }
L16:;
     v9 = ecl_function_dispatch(cl_env_copy,VV[18])(2, v8, v9) /*  SEQ-ITERATOR-NEXT */;
     goto L12;
    }
L9:;
    if (Null(v7slotd)) { goto L22; }
    (cl_env_copy->function=ECL_CONS_CAR(VV[20]))->cfun.entry(4, v1value, v4class, v2self, v7slotd) /*  (SETF SLOT-VALUE-USING-CLASS) */;
    goto L1;
L22:;
    (cl_env_copy->function=(ECL_SYM("SLOT-MISSING",971)->symbol.gfdef))->cfun.entry(5, v4class, v2self, v3slot_name, ECL_SYM("SETF",752), v1value) /*  SLOT-MISSING */;
   }
  }
L1:;
  value0 = v1value;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for INVALID-SLOT-LOCATION                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L5invalid_slot_location(cl_object v1instance, cl_object v2location)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_class_of(v2location);
  value0 = cl_error(3, VV[5], v2location, T0);
  return value0;
 }
}
/*      function definition for STD-SLOT-LOCATION                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L6std_slot_location(cl_object v1self, cl_object v2slot_name, cl_object v3operation)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v4class;
   cl_object v5location_table;
   cl_object v6location;
   v4class = cl_class_of(v1self);
   v5location_table = ecl_function_dispatch(cl_env_copy,VV[22])(1, v4class) /*  CLASS-LOCATION-TABLE */;
   if (Null(v5location_table)) { goto L4; }
   v6location = ecl_gethash_safe(v2slot_name,v5location_table,ECL_NIL);
   goto L3;
L4:;
   {
    cl_object v7slotd;
    {
     cl_object v8;
     cl_object v9;
     v8 = ecl_function_dispatch(cl_env_copy,ECL_SYM("CLASS-SLOTS",1555))(1, v4class) /*  CLASS-SLOTS */;
     v9 = ecl_function_dispatch(cl_env_copy,VV[16])(2, v8, ecl_make_fixnum(0)) /*  MAKE-SEQ-ITERATOR */;
L9:;
     if ((v9)!=ECL_NIL) { goto L11; }
     v7slotd = ECL_NIL;
     goto L6;
L11:;
     {
      cl_object v10;
      v10 = ecl_function_dispatch(cl_env_copy,VV[17])(2, v8, v9) /*  SEQ-ITERATOR-REF */;
      T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-NAME",1609))(1, v10) /*  SLOT-DEFINITION-NAME */;
      if (!(ecl_eql(v2slot_name,T0))) { goto L13; }
      v7slotd = v10;
      goto L6;
     }
L13:;
     v9 = ecl_function_dispatch(cl_env_copy,VV[18])(2, v8, v9) /*  SEQ-ITERATOR-NEXT */;
     goto L9;
    }
L6:;
    if (Null(v7slotd)) { goto L19; }
    v6location = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-LOCATION",1608))(1, v7slotd) /*  SLOT-DEFINITION-LOCATION */;
    goto L3;
L19:;
    v6location = ECL_NIL;
   }
L3:;
   value0 = v6location;
   if ((value0)!=ECL_NIL) { goto L22; }
   value0 = (cl_env_copy->function=(ECL_SYM("SLOT-MISSING",971)->symbol.gfdef))->cfun.entry(4, v4class, v1self, v2slot_name, v3operation) /*  SLOT-MISSING */;
   return value0;
L22:;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for COMPARE-AND-SWAP-STANDARD-INSTANCE    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L7mp__compare_and_swap_standard_instance(cl_object v1instance, cl_object v2location, cl_object v3old, cl_object v4new)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(si_instance_obsolete_p(v1instance))) { goto L1; }
  ecl_function_dispatch(cl_env_copy,VV[4])(1, v1instance) /*  UPDATE-INSTANCE */;
L1:;
  if (!(ECL_FIXNUMP(v2location))) { goto L3; }
  value0 = ecl_compare_and_swap_instance((v1instance),(ecl_to_fixnum(v2location)),(v3old),(v4new));
  cl_env_copy->nvalues = 1;
  return value0;
L3:;
  if (!(ECL_CONSP(v2location))) { goto L5; }
  value0 = mp_compare_and_swap_car(v2location, v3old, v4new);
  return value0;
L5:;
  value0 = L5invalid_slot_location(v1instance, v2location);
  return value0;
 }
}
/*      function definition for COMPARE-AND-SWAP-SLOT-VALUE           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L8mp__compare_and_swap_slot_value(cl_object v1self, cl_object v2slot_name, cl_object v3old, cl_object v4new)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v5location;
   cl_object v6old_slot_value;
   v5location = L6std_slot_location(v1self, v2slot_name, ECL_SYM("COMPARE-AND-SWAP",1524));
   v6old_slot_value = L7mp__compare_and_swap_standard_instance(v1self, v5location, v3old, v4new);
   if ((v6old_slot_value)!=ECL_UNBOUND) { goto L3; }
   if (!((v3old)!=ECL_UNBOUND)) { goto L3; }
   T0 = cl_class_of(v1self);
   value0 = (cl_env_copy->function=(ECL_SYM("SLOT-UNBOUND",972)->symbol.gfdef))->cfun.entry(3, T0, v1self, v2slot_name) /*  SLOT-UNBOUND */;
   return value0;
L3:;
   value0 = v6old_slot_value;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for ATOMIC-INCF-STANDARD-INSTANCE         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L9mp__atomic_incf_standard_instance(cl_object v1instance, cl_object v2location, cl_object v3increment)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  cl_fixnum v4increment;
  v4increment = ecl_to_fixnum(v3increment);
TTL:
  if (Null(si_instance_obsolete_p(v1instance))) { goto L1; }
  ecl_function_dispatch(cl_env_copy,VV[4])(1, v1instance) /*  UPDATE-INSTANCE */;
L1:;
  if (!(ECL_FIXNUMP(v2location))) { goto L3; }
  value0 = ecl_atomic_incf_instance((v1instance),(ecl_to_fixnum(v2location)),(ecl_make_fixnum(v4increment)));
  cl_env_copy->nvalues = 1;
  return value0;
L3:;
  if (!(ECL_CONSP(v2location))) { goto L5; }
  value0 = mp_atomic_incf_car(v2location, ecl_make_fixnum(v4increment));
  return value0;
L5:;
  value0 = L5invalid_slot_location(v1instance, v2location);
  return value0;
 }
}
/*      function definition for ATOMIC-INCF-SLOT-VALUE                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L10mp__atomic_incf_slot_value(cl_object v1self, cl_object v2slot_name, cl_object v3increment)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  cl_fixnum v4increment;
  v4increment = ecl_to_fixnum(v3increment);
TTL:
  T0 = L6std_slot_location(v1self, v2slot_name, ECL_SYM("ATOMIC-INCF",1528));
  value0 = L9mp__atomic_incf_standard_instance(v1self, T0, ecl_make_fixnum(v4increment));
  return value0;
 }
}

#include "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/build/clos/std-slot-value.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclVbD23ia7_2SdZTr51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CLOS;STD-SLOT-VALUE.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclVbD23ia7_2SdZTr51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  ecl_cmp_defmacro(VV[11]);                       /*  WITH-SLOTS      */
  ecl_cmp_defun(VV[13]);                          /*  STD-CREATE-SLOTS-TABLE */
  ecl_cmp_defun(VV[15]);                          /*  FIND-SLOT-DEFINITION */
  ecl_cmp_defun(VV[19]);                          /*  UPDATE-INSTANCE */
  (cl_env_copy->function=(ECL_SYM("MAPC",545)->symbol.gfdef))->cfun.entry(2, ECL_SYM("PROCLAIM",668), VVtemp[1]) /*  MAPC */;
  (void)0; /* No entry created for STANDARD-INSTANCE-ACCESS */
  (void)0; /* No entry created for STANDARD-INSTANCE-SET */
  si_do_defsetf(3, ECL_SYM("STANDARD-INSTANCE-ACCESS",1623), ECL_SYM("STANDARD-INSTANCE-SET",1624), ecl_make_fixnum(1));
  si_do_defsetf(3, ECL_SYM("FUNCALLABLE-STANDARD-INSTANCE-ACCESS",1578), ECL_SYM("STANDARD-INSTANCE-SET",1624), ecl_make_fixnum(1));
  (void)0; /* No entry created for SLOT-VALUE */
  (void)0; /* No entry created for SLOT-EXISTS-P */
  (void)0; /* No entry created for SLOT-BOUNDP */
  (void)0; /* No entry created for SLOT-VALUE-SET */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  T0 = (ECL_SYM("SLOT-VALUE-SET",1615)->symbol.gfdef);
  si_fset(2, VVtemp[2], T0);
 }
  (void)0; /* No entry created for INVALID-SLOT-LOCATION */
  ecl_cmp_defun(VV[21]);                          /*  STD-SLOT-LOCATION */
  ecl_cmp_defun(VV[23]);                          /*  COMPARE-AND-SWAP-STANDARD-INSTANCE */
  ecl_cmp_defun(VV[24]);                          /*  COMPARE-AND-SWAP-SLOT-VALUE */
  ecl_cmp_defun(VV[25]);                          /*  ATOMIC-INCF-STANDARD-INSTANCE */
  ecl_cmp_defun(VV[26]);                          /*  ATOMIC-INCF-SLOT-VALUE */
}
