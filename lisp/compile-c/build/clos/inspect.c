/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CLOS;INSPECT.LSP                                  */
#include <ecl/ecl-cmp.h>
#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/clos/inspect.eclh"
/*      local function SELECT-CLOS-N                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC1select_clos_n(cl_object v1instance)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2class;
   cl_object v3local_slotds;
   cl_object v4class_slotds;
   v2class = si_instance_class(v1instance);
   v3local_slotds = L14class_local_slots(v2class);
   v4class_slotds = L15class_class_slots(v2class);
   if (Null(v3local_slotds)) { goto L5; }
   ecl_function_dispatch(cl_env_copy,VV[67])(0)   /*  INSPECT-INDENT  */;
   cl_format(2, ECL_T, VV[1]);
   cl_set(VV[2],ecl_plus(ecl_symbol_value(VV[2]),ecl_make_fixnum(1)));
   {
    cl_object v5;
    v5 = v3local_slotds;
    goto L15;
L14:;
    {
     cl_object v6slotd;
     v6slotd = ecl_car(v5);
     ecl_function_dispatch(cl_env_copy,VV[68])(0) /*  INSPECT-INDENT-1 */;
     T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-NAME",1609))(1, v6slotd) /*  SLOT-DEFINITION-NAME */;
     cl_format(3, ECL_T, VV[3], T0);
     T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-NAME",1609))(1, v6slotd) /*  SLOT-DEFINITION-NAME */;
     if (Null(cl_slot_boundp(v1instance, T0))) { goto L22; }
     {
      cl_object v8;                               /*  UPDATE-FLAG     */
      cl_object v9;                               /*  NEW-VALUE       */
      T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-NAME",1609))(1, v6slotd) /*  SLOT-DEFINITION-NAME */;
      T1 = cl_slot_value(v1instance, T0);
      value0 = ecl_function_dispatch(cl_env_copy,VV[69])(3, VV[4], T1, ECL_T) /*  READ-INSPECT-COMMAND */;
      {
       const int v10 = cl_env_copy->nvalues;
       v8 = value0;
       cl_object v11;
       v11 = (v10<=1)? ECL_NIL : cl_env_copy->values[1];
       v9 = v11;
      }
      if (Null(v8)) { goto L21; }
      {
       cl_object v10;
       v10 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-NAME",1609))(1, v6slotd) /*  SLOT-DEFINITION-NAME */;
       (cl_env_copy->function=ECL_CONS_CAR(VV[70]))->cfun.entry(3, v9, v1instance, v10) /*  (SETF SLOT-VALUE) */;
       goto L21;
      }
     }
L22:;
     {
      cl_object v8;                               /*  UPDATE-FLAG     */
      cl_object v9;                               /*  NEW-VALUE       */
      value0 = ecl_function_dispatch(cl_env_copy,VV[69])(3, VV[5], ECL_NIL, ECL_NIL) /*  READ-INSPECT-COMMAND */;
      {
       const int v10 = cl_env_copy->nvalues;
       v8 = value0;
       cl_object v11;
       v11 = (v10<=1)? ECL_NIL : cl_env_copy->values[1];
       v9 = v11;
      }
      if (Null(v8)) { goto L21; }
      {
       cl_object v10;
       v10 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-NAME",1609))(1, v6slotd) /*  SLOT-DEFINITION-NAME */;
       (cl_env_copy->function=ECL_CONS_CAR(VV[70]))->cfun.entry(3, v9, v1instance, v10) /*  (SETF SLOT-VALUE) */;
      }
     }
L21:;
    }
    v5 = ecl_cdr(v5);
L15:;
    if (Null(v5)) { goto L32; }
    goto L14;
L32:;
   }
   cl_set(VV[2],ecl_minus(ecl_symbol_value(VV[2]),ecl_make_fixnum(1)));
   goto L4;
L5:;
   ecl_function_dispatch(cl_env_copy,VV[67])(0)   /*  INSPECT-INDENT  */;
   cl_format(2, ECL_T, VV[6]);
L4:;
   if (Null(v4class_slotds)) { goto L36; }
   ecl_function_dispatch(cl_env_copy,VV[67])(0)   /*  INSPECT-INDENT  */;
   cl_format(2, ECL_T, VV[7]);
   cl_set(VV[2],ecl_plus(ecl_symbol_value(VV[2]),ecl_make_fixnum(1)));
   {
    cl_object v5;
    v5 = v4class_slotds;
    goto L46;
L45:;
    {
     cl_object v6slotd;
     v6slotd = ecl_car(v5);
     ecl_function_dispatch(cl_env_copy,VV[68])(0) /*  INSPECT-INDENT-1 */;
     T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-NAME",1609))(1, v6slotd) /*  SLOT-DEFINITION-NAME */;
     cl_format(3, ECL_T, VV[3], T0);
     T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-NAME",1609))(1, v6slotd) /*  SLOT-DEFINITION-NAME */;
     if (Null(cl_slot_boundp(v1instance, T0))) { goto L53; }
     {
      cl_object v8;                               /*  UPDATE-FLAG     */
      cl_object v9;                               /*  NEW-VALUE       */
      T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-NAME",1609))(1, v6slotd) /*  SLOT-DEFINITION-NAME */;
      T1 = cl_slot_value(v1instance, T0);
      value0 = ecl_function_dispatch(cl_env_copy,VV[69])(3, VV[4], T1, ECL_T) /*  READ-INSPECT-COMMAND */;
      {
       const int v10 = cl_env_copy->nvalues;
       v8 = value0;
       cl_object v11;
       v11 = (v10<=1)? ECL_NIL : cl_env_copy->values[1];
       v9 = v11;
      }
      if (Null(v8)) { goto L52; }
      {
       cl_object v10;
       v10 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-NAME",1609))(1, v6slotd) /*  SLOT-DEFINITION-NAME */;
       (cl_env_copy->function=ECL_CONS_CAR(VV[70]))->cfun.entry(3, v9, v1instance, v10) /*  (SETF SLOT-VALUE) */;
       goto L52;
      }
     }
L53:;
     {
      cl_object v8;                               /*  UPDATE-FLAG     */
      cl_object v9;                               /*  NEW-VALUE       */
      value0 = ecl_function_dispatch(cl_env_copy,VV[69])(3, VV[5], ECL_NIL, ECL_NIL) /*  READ-INSPECT-COMMAND */;
      {
       const int v10 = cl_env_copy->nvalues;
       v8 = value0;
       cl_object v11;
       v11 = (v10<=1)? ECL_NIL : cl_env_copy->values[1];
       v9 = v11;
      }
      if (Null(v8)) { goto L52; }
      {
       cl_object v10;
       v10 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-NAME",1609))(1, v6slotd) /*  SLOT-DEFINITION-NAME */;
       (cl_env_copy->function=ECL_CONS_CAR(VV[70]))->cfun.entry(3, v9, v1instance, v10) /*  (SETF SLOT-VALUE) */;
      }
     }
L52:;
    }
    v5 = ecl_cdr(v5);
L46:;
    if (Null(v5)) { goto L63; }
    goto L45;
L63:;
   }
   cl_set(VV[2],ecl_minus(ecl_symbol_value(VV[2]),ecl_make_fixnum(1)));
   value0 = ecl_symbol_value(VV[2]);
   cl_env_copy->nvalues = 1;
   return value0;
L36:;
   ecl_function_dispatch(cl_env_copy,VV[67])(0)   /*  INSPECT-INDENT  */;
   value0 = cl_format(2, ECL_T, VV[8]);
   return value0;
  }
 }
}
/*      function definition for SELECT-CLOS-N-INNER-CLASS             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L2select_clos_n_inner_class(cl_object v1instance)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2class;
   cl_object v3local_slotds;
   v2class = si_instance_class(v1instance);
   v3local_slotds = L14class_local_slots(v2class);
   if (Null(v3local_slotds)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[67])(0)   /*  INSPECT-INDENT  */;
   cl_format(2, ECL_T, VV[9]);
   cl_set(VV[2],ecl_plus(ecl_symbol_value(VV[2]),ecl_make_fixnum(1)));
   {
    cl_object v4;
    v4 = v3local_slotds;
    goto L13;
L12:;
    {
     cl_object v5slotd;
     v5slotd = ecl_car(v4);
     ecl_function_dispatch(cl_env_copy,VV[68])(0) /*  INSPECT-INDENT-1 */;
     T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-NAME",1609))(1, v5slotd) /*  SLOT-DEFINITION-NAME */;
     cl_format(3, ECL_T, VV[3], T0);
     T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-NAME",1609))(1, v5slotd) /*  SLOT-DEFINITION-NAME */;
     if (Null(cl_slot_boundp(v1instance, T0))) { goto L20; }
     T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-NAME",1609))(1, v5slotd) /*  SLOT-DEFINITION-NAME */;
     T1 = cl_slot_value(v1instance, T0);
     if (Null(ecl_function_dispatch(cl_env_copy,VV[69])(3, VV[4], T1, ECL_T) /*  READ-INSPECT-COMMAND */)) { goto L19; }
     ecl_princ(VV[10],ECL_NIL);
     ecl_terpri(ECL_NIL);
     goto L19;
L20:;
     if (Null(ecl_function_dispatch(cl_env_copy,VV[69])(3, VV[5], ECL_NIL, ECL_NIL) /*  READ-INSPECT-COMMAND */)) { goto L19; }
     ecl_princ(VV[10],ECL_NIL);
     ecl_terpri(ECL_NIL);
L19:;
    }
    v4 = ecl_cdr(v4);
L13:;
    if (Null(v4)) { goto L28; }
    goto L12;
L28:;
   }
   cl_set(VV[2],ecl_minus(ecl_symbol_value(VV[2]),ecl_make_fixnum(1)));
   value0 = ecl_symbol_value(VV[2]);
   cl_env_copy->nvalues = 1;
   return value0;
L3:;
   ecl_function_dispatch(cl_env_copy,VV[67])(0)   /*  INSPECT-INDENT  */;
   value0 = cl_format(2, ECL_T, VV[11]);
   return value0;
  }
 }
}
/*      local function SELECT-CLOS-N                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC3select_clos_n(cl_object v1instance)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = L2select_clos_n_inner_class(v1instance);
  return value0;
 }
}
/*      local function SELECT-CLOS-N                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC4select_clos_n(cl_object v1instance)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = L2select_clos_n_inner_class(v1instance);
  return value0;
 }
}
/*      local function SELECT-CLOS-L                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC5select_clos_l(cl_object v1instance)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2class;
   cl_object v3local_slotds;
   cl_object v4class_slotds;
   v2class = si_instance_class(v1instance);
   v3local_slotds = L14class_local_slots(v2class);
   v4class_slotds = L15class_class_slots(v2class);
   ecl_terpri(ECL_NIL);
   if (Null(v3local_slotds)) { goto L6; }
   cl_format(2, ECL_T, VV[14]);
   {
    cl_object v5;
    v5 = v3local_slotds;
    goto L12;
L11:;
    {
     cl_object v6slotd;
     v6slotd = ecl_car(v5);
     T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-NAME",1609))(1, v6slotd) /*  SLOT-DEFINITION-NAME */;
     cl_format(3, ECL_T, VV[15], T0);
    }
    v5 = ecl_cdr(v5);
L12:;
    if (Null(v5)) { goto L19; }
    goto L11;
L19:;
    goto L5;
   }
L6:;
   cl_format(2, ECL_T, VV[6]);
L5:;
   ecl_terpri(ECL_NIL);
   if (Null(v4class_slotds)) { goto L23; }
   cl_format(2, ECL_T, VV[16]);
   {
    cl_object v5;
    v5 = v4class_slotds;
    goto L29;
L28:;
    {
     cl_object v6slotd;
     v6slotd = ecl_car(v5);
     T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-NAME",1609))(1, v6slotd) /*  SLOT-DEFINITION-NAME */;
     cl_format(3, ECL_T, VV[15], T0);
    }
    v5 = ecl_cdr(v5);
L29:;
    if (Null(v5)) { goto L36; }
    goto L28;
L36:;
    goto L22;
   }
L23:;
   cl_format(2, ECL_T, VV[8]);
L22:;
   value0 = ecl_terpri(ECL_NIL);
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for SELECT-CLOS-L-INNER-CLASS             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L6select_clos_l_inner_class(cl_object v1instance)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2class;
   cl_object v3local_slotds;
   v2class = si_instance_class(v1instance);
   v3local_slotds = L14class_local_slots(v2class);
   ecl_terpri(ECL_NIL);
   if (Null(v3local_slotds)) { goto L5; }
   cl_format(2, ECL_T, VV[17]);
   {
    cl_object v4;
    v4 = v3local_slotds;
    goto L11;
L10:;
    {
     cl_object v5slotd;
     v5slotd = ecl_car(v4);
     T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-NAME",1609))(1, v5slotd) /*  SLOT-DEFINITION-NAME */;
     cl_format(3, ECL_T, VV[15], T0);
    }
    v4 = ecl_cdr(v4);
L11:;
    if (Null(v4)) { goto L18; }
    goto L10;
L18:;
    goto L4;
   }
L5:;
   cl_format(2, ECL_T, VV[11]);
L4:;
   value0 = ecl_terpri(ECL_NIL);
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function SELECT-CLOS-L                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC7select_clos_l(cl_object v1instance)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = L6select_clos_l_inner_class(v1instance);
  return value0;
 }
}
/*      local function SELECT-CLOS-L                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC8select_clos_l(cl_object v1instance)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = L6select_clos_l_inner_class(v1instance);
  return value0;
 }
}
/*      local function SELECT-CLOS-J                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC9select_clos_j(cl_object v1instance)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2class;
   cl_object v3local_slotds;
   cl_object v4class_slotds;
   cl_object v5slotd;
   v2class = si_instance_class(v1instance);
   v3local_slotds = L14class_local_slots(v2class);
   v4class_slotds = L15class_class_slots(v2class);
   {
    cl_object v6;
    cl_object v7;
    {
     cl_object v8;
     v8 = cl_read_preserving_whitespace(1, ecl_symbol_value(ECL_SYM("*QUERY-IO*",61)));
     ecl_function_dispatch(cl_env_copy,VV[73])(0) /*  INSPECT-READ-LINE */;
     v6 = v8;
    }
    v7 = ecl_append(v3local_slotds,v4class_slotds);
    {
     cl_object v8;
     v8 = v7;
     goto L13;
L12:;
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
      T1 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-NAME",1609))(1, v10) /*  SLOT-DEFINITION-NAME */;
      if (!((v6)==(T1))) { goto L15; }
      T0 = v9;
      goto L5;
     }
L15:;
     v8 = ECL_CONS_CDR(v8);
L13:;
     if (v8==ECL_NIL) { goto L23; }
     goto L12;
L23:;
     T0 = ECL_NIL;
    }
   }
L5:;
   v5slotd = ecl_car(T0);
   if (Null(v5slotd)) { goto L25; }
   cl_set(VV[2],ecl_plus(ecl_symbol_value(VV[2]),ecl_make_fixnum(1)));
   ecl_function_dispatch(cl_env_copy,VV[68])(0)   /*  INSPECT-INDENT-1 */;
   T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-NAME",1609))(1, v5slotd) /*  SLOT-DEFINITION-NAME */;
   cl_format(3, ECL_T, VV[3], T0);
   T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-NAME",1609))(1, v5slotd) /*  SLOT-DEFINITION-NAME */;
   if (Null(cl_slot_boundp(v1instance, T0))) { goto L32; }
   {
    cl_object v7;                                 /*  UPDATE-FLAG     */
    cl_object v8;                                 /*  NEW-VALUE       */
    T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-NAME",1609))(1, v5slotd) /*  SLOT-DEFINITION-NAME */;
    T1 = cl_slot_value(v1instance, T0);
    value0 = ecl_function_dispatch(cl_env_copy,VV[69])(3, VV[4], T1, ECL_T) /*  READ-INSPECT-COMMAND */;
    {
     const int v9 = cl_env_copy->nvalues;
     v7 = value0;
     cl_object v10;
     v10 = (v9<=1)? ECL_NIL : cl_env_copy->values[1];
     v8 = v10;
    }
    if (Null(v7)) { goto L31; }
    {
     cl_object v9;
     v9 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-NAME",1609))(1, v5slotd) /*  SLOT-DEFINITION-NAME */;
     (cl_env_copy->function=ECL_CONS_CAR(VV[70]))->cfun.entry(3, v8, v1instance, v9) /*  (SETF SLOT-VALUE) */;
     goto L31;
    }
   }
L32:;
   {
    cl_object v7;                                 /*  UPDATE-FLAG     */
    cl_object v8;                                 /*  NEW-VALUE       */
    value0 = ecl_function_dispatch(cl_env_copy,VV[69])(3, VV[5], ECL_NIL, ECL_NIL) /*  READ-INSPECT-COMMAND */;
    {
     const int v9 = cl_env_copy->nvalues;
     v7 = value0;
     cl_object v10;
     v10 = (v9<=1)? ECL_NIL : cl_env_copy->values[1];
     v8 = v10;
    }
    if (Null(v7)) { goto L31; }
    {
     cl_object v9;
     v9 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-NAME",1609))(1, v5slotd) /*  SLOT-DEFINITION-NAME */;
     (cl_env_copy->function=ECL_CONS_CAR(VV[70]))->cfun.entry(3, v8, v1instance, v9) /*  (SETF SLOT-VALUE) */;
    }
   }
L31:;
   cl_set(VV[2],ecl_minus(ecl_symbol_value(VV[2]),ecl_make_fixnum(1)));
   value0 = ecl_symbol_value(VV[2]);
   cl_env_copy->nvalues = 1;
   return value0;
L25:;
   ecl_terpri(ECL_NIL);
   T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-NAME",1609))(1, v5slotd) /*  SLOT-DEFINITION-NAME */;
   cl_format(3, ECL_T, VV[20], T0);
   ecl_terpri(ECL_NIL);
   value0 = ecl_terpri(ECL_NIL);
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for SELECT-CLOS-J-INNER-CLASS             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L10select_clos_j_inner_class(cl_object v1instance)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2class;
   cl_object v3local_slotds;
   cl_object v4slotd;
   v2class = si_instance_class(v1instance);
   v3local_slotds = L14class_local_slots(v2class);
   {
    cl_object v5;
    {
     cl_object v6;
     v6 = cl_read_preserving_whitespace(1, ecl_symbol_value(ECL_SYM("*QUERY-IO*",61)));
     ecl_function_dispatch(cl_env_copy,VV[73])(0) /*  INSPECT-READ-LINE */;
     v5 = v6;
    }
    {
     cl_object v6;
     v6 = v3local_slotds;
     goto L11;
L10:;
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
      T1 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-NAME",1609))(1, v8) /*  SLOT-DEFINITION-NAME */;
      if (!((v5)==(T1))) { goto L13; }
      T0 = v7;
      goto L4;
     }
L13:;
     v6 = ECL_CONS_CDR(v6);
L11:;
     if (v6==ECL_NIL) { goto L21; }
     goto L10;
L21:;
     T0 = ECL_NIL;
    }
   }
L4:;
   v4slotd = ecl_car(T0);
   if (Null(v4slotd)) { goto L23; }
   cl_set(VV[2],ecl_plus(ecl_symbol_value(VV[2]),ecl_make_fixnum(1)));
   ecl_function_dispatch(cl_env_copy,VV[68])(0)   /*  INSPECT-INDENT-1 */;
   T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-NAME",1609))(1, v4slotd) /*  SLOT-DEFINITION-NAME */;
   cl_format(3, ECL_T, VV[3], T0);
   T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-NAME",1609))(1, v4slotd) /*  SLOT-DEFINITION-NAME */;
   if (Null(cl_slot_boundp(v1instance, T0))) { goto L30; }
   T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-NAME",1609))(1, v4slotd) /*  SLOT-DEFINITION-NAME */;
   T1 = cl_slot_value(v1instance, T0);
   if (Null(ecl_function_dispatch(cl_env_copy,VV[69])(3, VV[4], T1, ECL_T) /*  READ-INSPECT-COMMAND */)) { goto L29; }
   ecl_princ(VV[10],ECL_NIL);
   ecl_terpri(ECL_NIL);
   goto L29;
L30:;
   if (Null(ecl_function_dispatch(cl_env_copy,VV[69])(3, VV[5], ECL_NIL, ECL_NIL) /*  READ-INSPECT-COMMAND */)) { goto L29; }
   ecl_princ(VV[10],ECL_NIL);
   ecl_terpri(ECL_NIL);
L29:;
   cl_set(VV[2],ecl_minus(ecl_symbol_value(VV[2]),ecl_make_fixnum(1)));
   value0 = ecl_symbol_value(VV[2]);
   cl_env_copy->nvalues = 1;
   return value0;
L23:;
   ecl_terpri(ECL_NIL);
   T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-NAME",1609))(1, v4slotd) /*  SLOT-DEFINITION-NAME */;
   cl_format(3, ECL_T, VV[20], T0);
   ecl_terpri(ECL_NIL);
   value0 = ecl_terpri(ECL_NIL);
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function SELECT-CLOS-J                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC11select_clos_j(cl_object v1instance)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = L10select_clos_j_inner_class(v1instance);
  return value0;
 }
}
/*      local function SELECT-CLOS-J                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC12select_clos_j(cl_object v1instance)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = L10select_clos_j_inner_class(v1instance);
  return value0;
 }
}
/*      function definition for SELECT-CLOS-?                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L13select_clos__()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  ecl_terpri(ECL_NIL);
  value0 = cl_format(2, ECL_T, VV[22]);
  return value0;
 }
}
/*      function definition for CLASS-LOCAL-SLOTS                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L14class_local_slots(cl_object v1class)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("CLASS-SLOTS",1555))(1, v1class) /*  CLASS-SLOTS */;
  T1 = (ECL_SYM("SLOT-DEFINITION-ALLOCATION",1604)->symbol.gfdef);
  value0 = cl_remove(4, VV[23], T0, ECL_SYM("KEY",1288), T1);
  return value0;
 }
}
/*      function definition for CLASS-CLASS-SLOTS                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L15class_class_slots(cl_object v1class)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("CLASS-SLOTS",1555))(1, v1class) /*  CLASS-SLOTS */;
  T1 = (ECL_SYM("SLOT-DEFINITION-ALLOCATION",1604)->symbol.gfdef);
  value0 = cl_remove(4, ECL_SYM("INSTANCE",1282), T0, ECL_SYM("KEY",1288), T1);
  return value0;
 }
}
/*      local function INSPECT-OBJ                                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC16inspect_obj(cl_object v1instance)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2metaclass;
   T0 = si_instance_class(v1instance);
   v2metaclass = ECL_CLASS_OF(T0);
   T0 = cl_find_class(1, ECL_SYM("STANDARD-CLASS",975));
   if ((v2metaclass)==(T0)) { goto L1; }
   T0 = cl_find_class(1, ECL_SYM("FUNCALLABLE-STANDARD-CLASS",1577));
   if ((v2metaclass)==(T0)) { goto L1; }
  }
  ecl_terpri(ECL_NIL);
  cl_format(2, ECL_T, VV[27]);
  T0 = si_instance_class(v1instance);
  cl_format(3, ECL_T, VV[28], T0);
  cl_env_copy->values[0] = ECL_NIL;
  cl_env_copy->nvalues = 1;
  cl_throw(VV[29]);
L1:;
  cl_set(VV[2],ecl_minus(ecl_symbol_value(VV[2]),ecl_make_fixnum(1)));
  {
   cl_object v2class;
   cl_object v3local_slotds;
   cl_object v4class_slotds;
   v2class = si_instance_class(v1instance);
   v3local_slotds = L14class_local_slots(v2class);
   v4class_slotds = L15class_class_slots(v2class);
L15:;
   cl_format(3, ECL_T, VV[30], v1instance);
   cl_set(VV[2],ecl_plus(ecl_symbol_value(VV[2]),ecl_make_fixnum(1)));
   ecl_function_dispatch(cl_env_copy,VV[67])(0)   /*  INSPECT-INDENT  */;
   T0 = (cl_env_copy->function=(ECL_SYM("CLASS-NAME",936)->symbol.gfdef))->cfun.entry(1, v2class) /*  CLASS-NAME */;
   cl_format(3, ECL_T, VV[31], T0);
   ecl_function_dispatch(cl_env_copy,VV[67])(0)   /*  INSPECT-INDENT  */;
   {
    cl_fixnum v5;
    v5 = ecl_length(v3local_slotds);
    {
     cl_fixnum v6;
     v6 = ecl_length(v4class_slotds);
     cl_format(4, ECL_T, VV[32], ecl_make_fixnum(v5), ecl_make_fixnum(v6));
    }
   }
   cl_force_output(0);
   {
    cl_object v5;
    {
     cl_object v6char;
     v6char = cl_read_char(1, ecl_symbol_value(ECL_SYM("*QUERY-IO*",61)));
     goto L30;
L29:;
     v6char = cl_read_char(1, ecl_symbol_value(ECL_SYM("*QUERY-IO*",61)));
L30:;
     if (!(ecl_char_code(v6char)!=ecl_char_code(CODE_CHAR(32)))) { goto L37; }
     if ((cl_charNE(1, CODE_CHAR(9)))!=ECL_NIL) { goto L34; }
     goto L35;
L37:;
     goto L35;
L35:;
     goto L29;
L34:;
     v5 = v6char;
    }
    if (!(((v5)==ECL_CODE_CHAR((ecl_character)(10))))) { goto L44; }
    goto L41;
    goto L42;
L44:;
    goto L42;
L42:;
    if (!(((v5)==ECL_CODE_CHAR((ecl_character)(13))))) { goto L39; }
    goto L40;
L41:;
L40:;
    ecl_function_dispatch(cl_env_copy,VV[0])(1, v1instance) /*  SELECT-CLOS-N */;
    goto L11;
L39:;
    if (!(((v5)==ECL_CODE_CHAR((ecl_character)(110))))) { goto L53; }
    goto L50;
    goto L51;
L53:;
    goto L51;
L51:;
    if (!(((v5)==ECL_CODE_CHAR((ecl_character)(78))))) { goto L48; }
    goto L49;
L50:;
L49:;
    ecl_function_dispatch(cl_env_copy,VV[73])(0)  /*  INSPECT-READ-LINE */;
    ecl_function_dispatch(cl_env_copy,VV[0])(1, v1instance) /*  SELECT-CLOS-N */;
    goto L11;
L48:;
    if (!(((v5)==ECL_CODE_CHAR((ecl_character)(115))))) { goto L63; }
    goto L60;
    goto L61;
L63:;
    goto L61;
L61:;
    if (!(((v5)==ECL_CODE_CHAR((ecl_character)(83))))) { goto L58; }
    goto L59;
L60:;
L59:;
    ecl_function_dispatch(cl_env_copy,VV[73])(0)  /*  INSPECT-READ-LINE */;
    goto L11;
L58:;
    if (!(((v5)==ECL_CODE_CHAR((ecl_character)(112))))) { goto L72; }
    goto L69;
    goto L70;
L72:;
    goto L70;
L70:;
    if (!(((v5)==ECL_CODE_CHAR((ecl_character)(80))))) { goto L67; }
    goto L68;
L69:;
L68:;
    ecl_function_dispatch(cl_env_copy,VV[73])(0)  /*  INSPECT-READ-LINE */;
    ecl_function_dispatch(cl_env_copy,VV[77])(1, v1instance) /*  SELECT-P */;
    goto L25;
L67:;
    if (!(((v5)==ECL_CODE_CHAR((ecl_character)(97))))) { goto L81; }
    goto L78;
    goto L79;
L81:;
    goto L79;
L79:;
    if (!(((v5)==ECL_CODE_CHAR((ecl_character)(65))))) { goto L76; }
    goto L77;
L78:;
L77:;
    ecl_function_dispatch(cl_env_copy,VV[73])(0)  /*  INSPECT-READ-LINE */;
    cl_env_copy->values[0] = ECL_NIL;
    cl_env_copy->nvalues = 1;
    cl_throw(VV[29]);
L76:;
    if (!(((v5)==ECL_CODE_CHAR((ecl_character)(101))))) { goto L91; }
    goto L88;
    goto L89;
L91:;
    goto L89;
L89:;
    if (!(((v5)==ECL_CODE_CHAR((ecl_character)(69))))) { goto L86; }
    goto L87;
L88:;
L87:;
    ecl_function_dispatch(cl_env_copy,VV[78])(0)  /*  SELECT-E        */;
    goto L25;
L86:;
    if (!(((v5)==ECL_CODE_CHAR((ecl_character)(113))))) { goto L99; }
    goto L96;
    goto L97;
L99:;
    goto L97;
L97:;
    if (!(((v5)==ECL_CODE_CHAR((ecl_character)(81))))) { goto L94; }
    goto L95;
L96:;
L95:;
    ecl_function_dispatch(cl_env_copy,VV[73])(0)  /*  INSPECT-READ-LINE */;
    cl_env_copy->values[0] = ECL_NIL;
    cl_env_copy->nvalues = 1;
    cl_throw(VV[47]);
L94:;
    if (!(((v5)==ECL_CODE_CHAR((ecl_character)(108))))) { goto L109; }
    goto L106;
    goto L107;
L109:;
    goto L107;
L107:;
    if (!(((v5)==ECL_CODE_CHAR((ecl_character)(76))))) { goto L104; }
    goto L105;
L106:;
L105:;
    ecl_function_dispatch(cl_env_copy,VV[73])(0)  /*  INSPECT-READ-LINE */;
    ecl_function_dispatch(cl_env_copy,VV[13])(1, v1instance) /*  SELECT-CLOS-L */;
    goto L25;
L104:;
    if (!(((v5)==ECL_CODE_CHAR((ecl_character)(106))))) { goto L118; }
    goto L115;
    goto L116;
L118:;
    goto L116;
L116:;
    if (!(((v5)==ECL_CODE_CHAR((ecl_character)(74))))) { goto L113; }
    goto L114;
L115:;
L114:;
    ecl_function_dispatch(cl_env_copy,VV[19])(1, v1instance) /*  SELECT-CLOS-J */;
    goto L25;
L113:;
    if (!(((v5)==ECL_CODE_CHAR((ecl_character)(63))))) { goto L121; }
    ecl_function_dispatch(cl_env_copy,VV[73])(0)  /*  INSPECT-READ-LINE */;
    L13select_clos__();
    goto L25;
L121:;
    ecl_function_dispatch(cl_env_copy,VV[73])(0)  /*  INSPECT-READ-LINE */;
   }
L25:;
   cl_set(VV[2],ecl_minus(ecl_symbol_value(VV[2]),ecl_make_fixnum(1)));
   ecl_function_dispatch(cl_env_copy,VV[67])(0)   /*  INSPECT-INDENT  */;
   goto L15;
  }
L11:;
  cl_set(VV[2],ecl_plus(ecl_symbol_value(VV[2]),ecl_make_fixnum(1)));
  value0 = ecl_symbol_value(VV[2]);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for INSPECT-OBJ-INNER-CLASS               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L17inspect_obj_inner_class(cl_object v1instance)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  cl_set(VV[2],ecl_minus(ecl_symbol_value(VV[2]),ecl_make_fixnum(1)));
  {
   cl_object v2class;
   cl_object v3local_slotds;
   v2class = si_instance_class(v1instance);
   v3local_slotds = L14class_local_slots(v2class);
L6:;
   cl_format(3, ECL_T, VV[30], v1instance);
   cl_set(VV[2],ecl_plus(ecl_symbol_value(VV[2]),ecl_make_fixnum(1)));
   ecl_function_dispatch(cl_env_copy,VV[67])(0)   /*  INSPECT-INDENT  */;
   T0 = (cl_env_copy->function=(ECL_SYM("CLASS-NAME",936)->symbol.gfdef))->cfun.entry(1, v2class) /*  CLASS-NAME */;
   cl_format(3, ECL_T, VV[31], T0);
   ecl_function_dispatch(cl_env_copy,VV[67])(0)   /*  INSPECT-INDENT  */;
   {
    cl_fixnum v4;
    v4 = ecl_length(v3local_slotds);
    cl_format(3, ECL_T, VV[53], ecl_make_fixnum(v4));
   }
   cl_force_output(0);
   {
    cl_object v4;
    {
     cl_object v5char;
     v5char = cl_read_char(1, ecl_symbol_value(ECL_SYM("*QUERY-IO*",61)));
     goto L21;
L20:;
     v5char = cl_read_char(1, ecl_symbol_value(ECL_SYM("*QUERY-IO*",61)));
L21:;
     if (!(ecl_char_code(v5char)!=ecl_char_code(CODE_CHAR(32)))) { goto L28; }
     if ((cl_charNE(1, CODE_CHAR(9)))!=ECL_NIL) { goto L25; }
     goto L26;
L28:;
     goto L26;
L26:;
     goto L20;
L25:;
     v4 = v5char;
    }
    if (!(((v4)==ECL_CODE_CHAR((ecl_character)(10))))) { goto L35; }
    goto L32;
    goto L33;
L35:;
    goto L33;
L33:;
    if (!(((v4)==ECL_CODE_CHAR((ecl_character)(13))))) { goto L30; }
    goto L31;
L32:;
L31:;
    ecl_function_dispatch(cl_env_copy,VV[0])(1, v1instance) /*  SELECT-CLOS-N */;
    goto L3;
L30:;
    if (!(((v4)==ECL_CODE_CHAR((ecl_character)(110))))) { goto L44; }
    goto L41;
    goto L42;
L44:;
    goto L42;
L42:;
    if (!(((v4)==ECL_CODE_CHAR((ecl_character)(78))))) { goto L39; }
    goto L40;
L41:;
L40:;
    ecl_function_dispatch(cl_env_copy,VV[73])(0)  /*  INSPECT-READ-LINE */;
    ecl_function_dispatch(cl_env_copy,VV[0])(1, v1instance) /*  SELECT-CLOS-N */;
    goto L3;
L39:;
    if (!(((v4)==ECL_CODE_CHAR((ecl_character)(115))))) { goto L54; }
    goto L51;
    goto L52;
L54:;
    goto L52;
L52:;
    if (!(((v4)==ECL_CODE_CHAR((ecl_character)(83))))) { goto L49; }
    goto L50;
L51:;
L50:;
    ecl_function_dispatch(cl_env_copy,VV[73])(0)  /*  INSPECT-READ-LINE */;
    goto L3;
L49:;
    if (!(((v4)==ECL_CODE_CHAR((ecl_character)(112))))) { goto L63; }
    goto L60;
    goto L61;
L63:;
    goto L61;
L61:;
    if (!(((v4)==ECL_CODE_CHAR((ecl_character)(80))))) { goto L58; }
    goto L59;
L60:;
L59:;
    ecl_function_dispatch(cl_env_copy,VV[73])(0)  /*  INSPECT-READ-LINE */;
    ecl_function_dispatch(cl_env_copy,VV[77])(1, v1instance) /*  SELECT-P */;
    goto L16;
L58:;
    if (!(((v4)==ECL_CODE_CHAR((ecl_character)(97))))) { goto L72; }
    goto L69;
    goto L70;
L72:;
    goto L70;
L70:;
    if (!(((v4)==ECL_CODE_CHAR((ecl_character)(65))))) { goto L67; }
    goto L68;
L69:;
L68:;
    ecl_function_dispatch(cl_env_copy,VV[73])(0)  /*  INSPECT-READ-LINE */;
    cl_env_copy->values[0] = ECL_NIL;
    cl_env_copy->nvalues = 1;
    cl_throw(VV[29]);
L67:;
    if (!(((v4)==ECL_CODE_CHAR((ecl_character)(101))))) { goto L82; }
    goto L79;
    goto L80;
L82:;
    goto L80;
L80:;
    if (!(((v4)==ECL_CODE_CHAR((ecl_character)(69))))) { goto L77; }
    goto L78;
L79:;
L78:;
    ecl_function_dispatch(cl_env_copy,VV[78])(0)  /*  SELECT-E        */;
    goto L16;
L77:;
    if (!(((v4)==ECL_CODE_CHAR((ecl_character)(113))))) { goto L90; }
    goto L87;
    goto L88;
L90:;
    goto L88;
L88:;
    if (!(((v4)==ECL_CODE_CHAR((ecl_character)(81))))) { goto L85; }
    goto L86;
L87:;
L86:;
    ecl_function_dispatch(cl_env_copy,VV[73])(0)  /*  INSPECT-READ-LINE */;
    cl_env_copy->values[0] = ECL_NIL;
    cl_env_copy->nvalues = 1;
    cl_throw(VV[47]);
L85:;
    if (!(((v4)==ECL_CODE_CHAR((ecl_character)(108))))) { goto L100; }
    goto L97;
    goto L98;
L100:;
    goto L98;
L98:;
    if (!(((v4)==ECL_CODE_CHAR((ecl_character)(76))))) { goto L95; }
    goto L96;
L97:;
L96:;
    ecl_function_dispatch(cl_env_copy,VV[73])(0)  /*  INSPECT-READ-LINE */;
    ecl_function_dispatch(cl_env_copy,VV[13])(1, v1instance) /*  SELECT-CLOS-L */;
    goto L16;
L95:;
    if (!(((v4)==ECL_CODE_CHAR((ecl_character)(106))))) { goto L109; }
    goto L106;
    goto L107;
L109:;
    goto L107;
L107:;
    if (!(((v4)==ECL_CODE_CHAR((ecl_character)(74))))) { goto L104; }
    goto L105;
L106:;
L105:;
    ecl_function_dispatch(cl_env_copy,VV[19])(1, v1instance) /*  SELECT-CLOS-J */;
    goto L16;
L104:;
    if (!(((v4)==ECL_CODE_CHAR((ecl_character)(63))))) { goto L112; }
    ecl_function_dispatch(cl_env_copy,VV[73])(0)  /*  INSPECT-READ-LINE */;
    L13select_clos__();
    goto L16;
L112:;
    ecl_function_dispatch(cl_env_copy,VV[73])(0)  /*  INSPECT-READ-LINE */;
   }
L16:;
   cl_set(VV[2],ecl_minus(ecl_symbol_value(VV[2]),ecl_make_fixnum(1)));
   ecl_function_dispatch(cl_env_copy,VV[67])(0)   /*  INSPECT-INDENT  */;
   goto L6;
  }
L3:;
  cl_set(VV[2],ecl_plus(ecl_symbol_value(VV[2]),ecl_make_fixnum(1)));
  value0 = ecl_symbol_value(VV[2]);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function INSPECT-OBJ                                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC18inspect_obj(cl_object v1instance)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = L17inspect_obj_inner_class(v1instance);
  return value0;
 }
}
/*      local function INSPECT-OBJ                                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC19inspect_obj(cl_object v1instance)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = L17inspect_obj_inner_class(v1instance);
  return value0;
 }
}
/*      local function DOCUMENTATION                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC20documentation(cl_object v1object, cl_object v2doc_type)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(ecl_memql(v2doc_type,VV[57]))) { goto L1; }
  if (!((v2doc_type)==(ECL_SYM("TYPE",871)))) { goto L3; }
  {
   cl_object v3c;
   v3c = cl_find_class(2, v1object, ECL_NIL);
   if (Null(v3c)) { goto L6; }
   value0 = (cl_env_copy->function=(ECL_SYM("DOCUMENTATION",314)->symbol.gfdef))->cfun.entry(2, v3c, ECL_T) /*  DOCUMENTATION */;
   return value0;
L6:;
   value0 = ecl_function_dispatch(cl_env_copy,VV[80])(2, v1object, v2doc_type) /*  GET-DOCUMENTATION */;
   return value0;
  }
L3:;
  if (!((v2doc_type)==(ECL_SYM("FUNCTION",398)))) { goto L8; }
  value0 = ecl_function_dispatch(cl_env_copy,VV[80])(2, v1object, v2doc_type) /*  GET-DOCUMENTATION */;
  if ((value0)!=ECL_NIL) { goto L11; }
  if (Null(cl_fboundp(v1object))) { goto L14; }
  value0 = cl_macro_function(1, v1object);
  if ((value0)!=ECL_NIL) { goto L18; }
  T0 = cl_fdefinition(v1object);
  goto L16;
L18:;
  T0 = value0;
  goto L16;
L16:;
  value0 = (cl_env_copy->function=(ECL_SYM("DOCUMENTATION",314)->symbol.gfdef))->cfun.entry(2, T0, v2doc_type) /*  DOCUMENTATION */;
  return value0;
L14:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L11:;
  cl_env_copy->nvalues = 1;
  return value0;
L8:;
  value0 = ecl_function_dispatch(cl_env_copy,VV[80])(2, v1object, v2doc_type) /*  GET-DOCUMENTATION */;
  return value0;
L1:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function (SETF DOCUMENTATION)                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC21_setf_documentation_(cl_object v1new_value, cl_object v2object, cl_object v3doc_type)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(ecl_memql(v3doc_type,VV[57]))) { goto L1; }
  if (!((v3doc_type)==(ECL_SYM("TYPE",871)))) { goto L3; }
  {
   cl_object v4c;
   v4c = cl_find_class(2, v2object, ECL_NIL);
   if (Null(v4c)) { goto L6; }
   ecl_function_dispatch(cl_env_copy,VV[81])(3, v2object, ECL_SYM("TYPE",871), ECL_NIL) /*  SET-DOCUMENTATION */;
   ecl_function_dispatch(cl_env_copy,VV[81])(3, v2object, ECL_SYM("STRUCTURE",828), ECL_NIL) /*  SET-DOCUMENTATION */;
   (cl_env_copy->function=ECL_CONS_CAR(VV[82]))->cfun.entry(3, v1new_value, v4c, ECL_T) /*  (SETF DOCUMENTATION) */;
   goto L1;
L6:;
   ecl_function_dispatch(cl_env_copy,VV[81])(3, v2object, v3doc_type, v1new_value) /*  SET-DOCUMENTATION */;
   goto L1;
  }
L3:;
  if (!((v3doc_type)==(ECL_SYM("FUNCTION",398)))) { goto L10; }
  if (Null(cl_fboundp(v2object))) { goto L12; }
  {
   cl_object v5c;
   value0 = cl_macro_function(1, v2object);
   if ((value0)!=ECL_NIL) { goto L16; }
   v5c = cl_fdefinition(v2object);
   goto L14;
L16:;
   v5c = value0;
   goto L14;
L14:;
   ecl_function_dispatch(cl_env_copy,VV[81])(3, v5c, ECL_SYM("FUNCTION",398), ECL_NIL) /*  SET-DOCUMENTATION */;
   (cl_env_copy->function=ECL_CONS_CAR(VV[82]))->cfun.entry(3, v1new_value, v5c, ECL_SYM("FUNCTION",398)) /*  (SETF DOCUMENTATION) */;
   goto L1;
  }
L12:;
  ecl_function_dispatch(cl_env_copy,VV[81])(3, v2object, v3doc_type, v1new_value) /*  SET-DOCUMENTATION */;
  goto L1;
L10:;
  ecl_function_dispatch(cl_env_copy,VV[81])(3, v2object, v3doc_type, v1new_value) /*  SET-DOCUMENTATION */;
L1:;
  value0 = v1new_value;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function DOCUMENTATION                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC22documentation(cl_object v1object, cl_object v2doc_type)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ecl_eql(v2doc_type,ECL_T))) { goto L6; }
  goto L3;
  goto L4;
L6:;
  goto L4;
L4:;
  if (!((v2doc_type)==(ECL_SYM("PACKAGE",619)))) { goto L1; }
  goto L2;
L3:;
L2:;
  value0 = ecl_function_dispatch(cl_env_copy,VV[80])(2, v1object, ECL_SYM("PACKAGE",619)) /*  GET-DOCUMENTATION */;
  return value0;
L1:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function (SETF DOCUMENTATION)                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC23_setf_documentation_(cl_object v1new_value, cl_object v2object, cl_object v3doc_type)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ecl_eql(v3doc_type,ECL_T))) { goto L6; }
  goto L3;
  goto L4;
L6:;
  goto L4;
L4:;
  if (!((v3doc_type)==(ECL_SYM("PACKAGE",619)))) { goto L1; }
  goto L2;
L3:;
L2:;
  value0 = ecl_function_dispatch(cl_env_copy,VV[81])(3, v2object, ECL_SYM("PACKAGE",619), v1new_value) /*  SET-DOCUMENTATION */;
  return value0;
L1:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function DOCUMENTATION                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC24documentation(cl_object v1object, cl_object v2doc_type)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ecl_eql(v2doc_type,ECL_T))) { goto L7; }
  goto L4;
  goto L5;
L7:;
  goto L5;
L5:;
  if (!((v2doc_type)==(ECL_SYM("TYPE",871)))) { goto L1; }
  goto L3;
L4:;
L3:;
  if (Null(cl_slot_boundp(v1object, ECL_SYM("DOCSTRING",1640)))) { goto L1; }
  value0 = cl_slot_value(v1object, ECL_SYM("DOCSTRING",1640));
  return value0;
L1:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function (SETF DOCUMENTATION)                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC25_setf_documentation_(cl_object v1new_value, cl_object v2object, cl_object v3doc_type)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ecl_eql(v3doc_type,ECL_T))) { goto L6; }
  goto L3;
  goto L4;
L6:;
  goto L4;
L4:;
  if (!((v3doc_type)==(ECL_SYM("TYPE",871)))) { goto L1; }
  goto L2;
L3:;
L2:;
  value0 = (cl_env_copy->function=ECL_CONS_CAR(VV[70]))->cfun.entry(3, v1new_value, v2object, ECL_SYM("DOCSTRING",1640)) /*  (SETF SLOT-VALUE) */;
  return value0;
L1:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function DOCUMENTATION                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC26documentation(cl_object v1object, cl_object v2doc_type)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ecl_eql(v2doc_type,ECL_T))) { goto L6; }
  goto L3;
  goto L4;
L6:;
  goto L4;
L4:;
  if (!((v2doc_type)==(ECL_SYM("TYPE",871)))) { goto L1; }
  goto L2;
L3:;
L2:;
  T0 = (cl_env_copy->function=(ECL_SYM("CLASS-NAME",936)->symbol.gfdef))->cfun.entry(1, v1object) /*  CLASS-NAME */;
  value0 = ecl_function_dispatch(cl_env_copy,VV[80])(2, T0, ECL_SYM("STRUCTURE",828)) /*  GET-DOCUMENTATION */;
  return value0;
L1:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function (SETF DOCUMENTATION)                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC27_setf_documentation_(cl_object v1new_value, cl_object v2object, cl_object v3doc_type)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ecl_eql(v3doc_type,ECL_T))) { goto L6; }
  goto L3;
  goto L4;
L6:;
  goto L4;
L4:;
  if (!((v3doc_type)==(ECL_SYM("TYPE",871)))) { goto L1; }
  goto L2;
L3:;
L2:;
  {
   cl_object v4;
   v4 = (cl_env_copy->function=(ECL_SYM("CLASS-NAME",936)->symbol.gfdef))->cfun.entry(1, v2object) /*  CLASS-NAME */;
   value0 = (cl_env_copy->function=ECL_CONS_CAR(VV[82]))->cfun.entry(3, v1new_value, v4, ECL_SYM("STRUCTURE",828)) /*  (SETF DOCUMENTATION) */;
   return value0;
  }
L1:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function DOCUMENTATION                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC28documentation(cl_object v1object, cl_object v2doc_type)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!((v2doc_type)==(ECL_SYM("FUNCTION",398)))) { goto L6; }
  goto L3;
  goto L4;
L6:;
  goto L4;
L4:;
  if (!((v2doc_type)==(ECL_SYM("COMPILER-MACRO",240)))) { goto L1; }
  goto L2;
L3:;
L2:;
  value0 = ecl_function_dispatch(cl_env_copy,VV[80])(2, v1object, v2doc_type) /*  GET-DOCUMENTATION */;
  return value0;
L1:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function (SETF DOCUMENTATION)                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC29_setf_documentation_(cl_object v1new_value, cl_object v2object, cl_object v3doc_type)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!((v3doc_type)==(ECL_SYM("FUNCTION",398)))) { goto L6; }
  goto L3;
  goto L4;
L6:;
  goto L4;
L4:;
  if (!((v3doc_type)==(ECL_SYM("COMPILER-MACRO",240)))) { goto L1; }
  goto L2;
L3:;
L2:;
  value0 = ecl_function_dispatch(cl_env_copy,VV[81])(3, v2object, v3doc_type, v1new_value) /*  SET-DOCUMENTATION */;
  return value0;
L1:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function DOCUMENTATION                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC30documentation(cl_object v1object, cl_object v2doc_type)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ecl_eql(v2doc_type,ECL_T))) { goto L6; }
  goto L3;
  goto L4;
L6:;
  goto L4;
L4:;
  if (!((v2doc_type)==(ECL_SYM("FUNCTION",398)))) { goto L1; }
  goto L2;
L3:;
L2:;
  value0 = cl_slot_value(v1object, ECL_SYM("DOCSTRING",1640));
  return value0;
L1:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function (SETF DOCUMENTATION)                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC31_setf_documentation_(cl_object v1new_value, cl_object v2object, cl_object v3doc_type)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ecl_eql(v3doc_type,ECL_T))) { goto L6; }
  goto L3;
  goto L4;
L6:;
  goto L4;
L4:;
  if (!((v3doc_type)==(ECL_SYM("FUNCTION",398)))) { goto L1; }
  goto L2;
L3:;
L2:;
  value0 = (cl_env_copy->function=ECL_CONS_CAR(VV[70]))->cfun.entry(3, v1new_value, v2object, ECL_SYM("DOCSTRING",1640)) /*  (SETF SLOT-VALUE) */;
  return value0;
L1:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function DOCUMENTATION                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC32documentation(cl_object v1object, cl_object v2doc_type)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ecl_eql(v2doc_type,ECL_T))) { goto L6; }
  goto L3;
  goto L4;
L6:;
  goto L4;
L4:;
  if (!((v2doc_type)==(ECL_SYM("FUNCTION",398)))) { goto L1; }
  goto L2;
L3:;
L2:;
  value0 = cl_slot_value(v1object, ECL_SYM("DOCSTRING",1640));
  return value0;
L1:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function (SETF DOCUMENTATION)                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC33_setf_documentation_(cl_object v1new_value, cl_object v2object, cl_object v3doc_type)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ecl_eql(v3doc_type,ECL_T))) { goto L6; }
  goto L3;
  goto L4;
L6:;
  goto L4;
L4:;
  if (!((v3doc_type)==(ECL_SYM("FUNCTION",398)))) { goto L1; }
  goto L2;
L3:;
L2:;
  value0 = (cl_env_copy->function=ECL_CONS_CAR(VV[70]))->cfun.entry(3, v1new_value, v2object, ECL_SYM("DOCSTRING",1640)) /*  (SETF SLOT-VALUE) */;
  return value0;
L1:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function DOCUMENTATION                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC34documentation(cl_object v1object, cl_object v2doc_type)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ecl_eql(v2doc_type,ECL_T))) { goto L6; }
  goto L3;
  goto L4;
L6:;
  goto L4;
L4:;
  if (!((v2doc_type)==(ECL_SYM("FUNCTION",398)))) { goto L1; }
  goto L2;
L3:;
L2:;
  value0 = ecl_function_dispatch(cl_env_copy,VV[80])(2, v1object, v2doc_type) /*  GET-DOCUMENTATION */;
  return value0;
L1:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function (SETF DOCUMENTATION)                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC35_setf_documentation_(cl_object v1new_value, cl_object v2object, cl_object v3doc_type)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ecl_eql(v3doc_type,ECL_T))) { goto L6; }
  goto L3;
  goto L4;
L6:;
  goto L4;
L4:;
  if (!((v3doc_type)==(ECL_SYM("FUNCTION",398)))) { goto L1; }
  goto L2;
L3:;
L2:;
  value0 = ecl_function_dispatch(cl_env_copy,VV[81])(3, v2object, v3doc_type, v1new_value) /*  SET-DOCUMENTATION */;
  return value0;
L1:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function DOCUMENTATION                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC36documentation(cl_object v1object, cl_object v2doc_type)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ecl_eql(v2doc_type,ECL_T))) { goto L6; }
  goto L3;
  goto L4;
L6:;
  goto L4;
L4:;
  if (!((v2doc_type)==(ECL_SYM("FUNCTION",398)))) { goto L1; }
  goto L2;
L3:;
L2:;
  value0 = cl_slot_value(v1object, ECL_SYM("DOCSTRING",1640));
  return value0;
L1:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function (SETF DOCUMENTATION)                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC37_setf_documentation_(cl_object v1new_value, cl_object v2object, cl_object v3doc_type)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ecl_eql(v3doc_type,ECL_T))) { goto L6; }
  goto L3;
  goto L4;
L6:;
  goto L4;
L4:;
  if (!((v3doc_type)==(ECL_SYM("FUNCTION",398)))) { goto L1; }
  goto L2;
L3:;
L2:;
  value0 = (cl_env_copy->function=ECL_CONS_CAR(VV[70]))->cfun.entry(3, v1new_value, v2object, ECL_SYM("DOCSTRING",1640)) /*  (SETF SLOT-VALUE) */;
  return value0;
L1:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}

#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/clos/inspect.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _ecllCYY5va7_haL6lq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CLOS;INSPECT.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_ecllCYY5va7_haL6lq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC1select_clos_n,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[66])(5, VV[0], ECL_NIL, VVtemp[1], VVtemp[2], T0) /*  INSTALL-METHOD */;
 }
  ecl_cmp_defun(VV[71]);                          /*  SELECT-CLOS-N-INNER-CLASS */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC3select_clos_n,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[66])(5, VV[0], ECL_NIL, VVtemp[3], VVtemp[2], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC4select_clos_n,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[66])(5, VV[0], ECL_NIL, VVtemp[4], VVtemp[2], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC5select_clos_l,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[66])(5, VV[13], ECL_NIL, VVtemp[1], VVtemp[2], T0) /*  INSTALL-METHOD */;
 }
  ecl_cmp_defun(VV[72]);                          /*  SELECT-CLOS-L-INNER-CLASS */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC7select_clos_l,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[66])(5, VV[13], ECL_NIL, VVtemp[3], VVtemp[2], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC8select_clos_l,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[66])(5, VV[13], ECL_NIL, VVtemp[4], VVtemp[2], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC9select_clos_j,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[66])(5, VV[19], ECL_NIL, VVtemp[1], VVtemp[2], T0) /*  INSTALL-METHOD */;
 }
  ecl_cmp_defun(VV[74]);                          /*  SELECT-CLOS-J-INNER-CLASS */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC11select_clos_j,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[66])(5, VV[19], ECL_NIL, VVtemp[3], VVtemp[2], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC12select_clos_j,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[66])(5, VV[19], ECL_NIL, VVtemp[4], VVtemp[2], T0) /*  INSTALL-METHOD */;
 }
  (void)0; /* No entry created for SELECT-CLOS-? */
  ecl_cmp_defun(VV[75]);                          /*  CLASS-LOCAL-SLOTS */
  ecl_cmp_defun(VV[76]);                          /*  CLASS-CLASS-SLOTS */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC16inspect_obj,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[66])(5, VV[26], ECL_NIL, VVtemp[1], VVtemp[2], T0) /*  INSTALL-METHOD */;
 }
  ecl_cmp_defun(VV[79]);                          /*  INSPECT-OBJ-INNER-CLASS */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC18inspect_obj,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[66])(5, VV[26], ECL_NIL, VVtemp[3], VVtemp[2], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC19inspect_obj,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[66])(5, VV[26], ECL_NIL, VVtemp[4], VVtemp[2], T0) /*  INSTALL-METHOD */;
 }
  si_Xmake_constant(VV[55], VVtemp[5]);
  (cl_env_copy->function=(ECL_SYM("ENSURE-GENERIC-FUNCTION",944)->symbol.gfdef))->cfun.entry(5, ECL_SYM("DOCUMENTATION",314), VV[56], ECL_T, ECL_SYM("LAMBDA-LIST",1000), VVtemp[6]) /*  ENSURE-GENERIC-FUNCTION */;
  (cl_env_copy->function=(ECL_SYM("ENSURE-GENERIC-FUNCTION",944)->symbol.gfdef))->cfun.entry(5, VVtemp[7], VV[56], ECL_T, ECL_SYM("LAMBDA-LIST",1000), VVtemp[8]) /*  ENSURE-GENERIC-FUNCTION */;
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC20documentation,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[66])(5, ECL_SYM("DOCUMENTATION",314), ECL_NIL, VVtemp[9], VVtemp[6], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC21_setf_documentation_,ECL_NIL,Cblock,3);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[66])(5, VVtemp[7], ECL_NIL, VVtemp[10], VVtemp[8], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC22documentation,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[66])(5, ECL_SYM("DOCUMENTATION",314), ECL_NIL, VVtemp[11], VVtemp[6], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC23_setf_documentation_,ECL_NIL,Cblock,3);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[66])(5, VVtemp[7], ECL_NIL, VVtemp[12], VVtemp[8], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC24documentation,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[66])(5, ECL_SYM("DOCUMENTATION",314), ECL_NIL, VVtemp[13], VVtemp[6], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC25_setf_documentation_,ECL_NIL,Cblock,3);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[66])(5, VVtemp[7], ECL_NIL, VVtemp[14], VVtemp[8], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC26documentation,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[66])(5, ECL_SYM("DOCUMENTATION",314), ECL_NIL, VVtemp[15], VVtemp[6], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC27_setf_documentation_,ECL_NIL,Cblock,3);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[66])(5, VVtemp[7], ECL_NIL, VVtemp[16], VVtemp[8], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC28documentation,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[66])(5, ECL_SYM("DOCUMENTATION",314), ECL_NIL, VVtemp[17], VVtemp[6], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC29_setf_documentation_,ECL_NIL,Cblock,3);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[66])(5, VVtemp[7], ECL_NIL, VVtemp[18], VVtemp[8], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC30documentation,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[66])(5, ECL_SYM("DOCUMENTATION",314), ECL_NIL, VVtemp[19], VVtemp[6], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC31_setf_documentation_,ECL_NIL,Cblock,3);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[66])(5, VVtemp[7], ECL_NIL, VVtemp[20], VVtemp[8], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC32documentation,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[66])(5, ECL_SYM("DOCUMENTATION",314), ECL_NIL, VVtemp[21], VVtemp[6], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC33_setf_documentation_,ECL_NIL,Cblock,3);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[66])(5, VVtemp[7], ECL_NIL, VVtemp[22], VVtemp[8], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC34documentation,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[66])(5, ECL_SYM("DOCUMENTATION",314), ECL_NIL, VVtemp[23], VVtemp[6], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC35_setf_documentation_,ECL_NIL,Cblock,3);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[66])(5, VVtemp[7], ECL_NIL, VVtemp[24], VVtemp[8], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC36documentation,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[66])(5, ECL_SYM("DOCUMENTATION",314), ECL_NIL, VVtemp[25], VVtemp[6], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC37_setf_documentation_,ECL_NIL,Cblock,3);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[66])(5, VVtemp[7], ECL_NIL, VVtemp[26], VVtemp[8], T0) /*  INSTALL-METHOD */;
 }
}
