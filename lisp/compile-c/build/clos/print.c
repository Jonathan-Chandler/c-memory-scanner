/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CLOS;PRINT.LSP                                    */
#include <ecl/ecl-cmp.h>
#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/clos/print.eclh"
/*      function definition for MAKE-LOAD-FORM-SAVING-SLOTS           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L3make_load_form_saving_slots(cl_narg narg, cl_object v1object, ...)
{
 cl_object T0, T1;
 volatile cl_object lex0[4];
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2slot_names;
  cl_object v3environment;
  ecl_va_list args; ecl_va_start(args,v1object,narg,1);
  lex0[0] = v1object;                             /*  OBJECT          */
  {
   cl_object keyvars[4];
   cl_parse_key(args,2,L3make_load_form_saving_slotskeys,keyvars,NULL,FALSE);
   ecl_va_end(args);
   v2slot_names = keyvars[0];
   v3environment = keyvars[1];
  }
  {
   cl_object v4class;
   cl_object v5initialization_form;
   cl_object v6slots;
   cl_object v7decls;
   v4class = cl_class_of(lex0[0]);
   T0 = (cl_env_copy->function=(ECL_SYM("CLASS-NAME",936)->symbol.gfdef))->cfun.entry(1, v4class) /*  CLASS-NAME */;
   lex0[1] = T0;                                  /*  CLASS-NAME      */
   v5initialization_form = ecl_list1(ECL_SYM("PROGN",673));
   v6slots = ecl_function_dispatch(cl_env_copy,ECL_SYM("CLASS-SLOTS",1555))(1, v4class) /*  CLASS-SLOTS */;
   if (Null(si_of_class_p(2, lex0[0], ECL_SYM("STRUCTURE-OBJECT",980)))) { goto L5; }
   v7decls = si_get_sysprop(lex0[1], ECL_SYM("STRUCTURE-SLOT-DESCRIPTIONS",1171));
   goto L4;
L5:;
   v7decls = ECL_NIL;
L4:;
   {
    cl_object v8;
    cl_object v9;
    cl_object v10slot;
    {
     cl_object v11;
     v11 = v6slots;
     {
      cl_object v12;
      v12 = v11;
      if (ecl_unlikely(!ECL_LISTP(v12))) FEtype_error_list(v12);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
     }
     if (Null(v11)) { goto L12; }
     {
      cl_object v12;
      v12 = ECL_CONS_CDR(v11);
      v6slots = v12;
      v11 = ECL_CONS_CAR(v11);
     }
L12:;
     v8 = v11;
    }
    {
     cl_object v11;
     v11 = v7decls;
     {
      cl_object v12;
      v12 = v11;
      if (ecl_unlikely(!ECL_LISTP(v12))) FEtype_error_list(v12);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
     }
     if (Null(v11)) { goto L23; }
     {
      cl_object v12;
      v12 = ECL_CONS_CDR(v11);
      v7decls = v12;
      v11 = ECL_CONS_CAR(v11);
     }
L23:;
     v9 = v11;
    }
    v10slot = v8;
    lex0[2] = v9;                                 /*  DESC            */
    goto L32;
L31:;
    T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-NAME",1609))(1, v10slot) /*  SLOT-DEFINITION-NAME */;
    lex0[3] = T0;                                 /*  SLOT-NAME       */
    if (!(v2slot_names==ECL_NIL)) { goto L39; }
    T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-ALLOCATION",1604))(1, v10slot) /*  SLOT-DEFINITION-ALLOCATION */;
    if ((T0)==(ECL_SYM("INSTANCE",1282))) { goto L36; }
    goto L37;
L39:;
    goto L37;
L37:;
    if (Null(ecl_memql(lex0[3],v2slot_names))) { goto L34; }
    goto L35;
L36:;
L35:;
    if (Null(cl_slot_boundp(lex0[0], lex0[3]))) { goto L43; }
    T1 = cl_slot_value(lex0[0], lex0[3]);
    T0 = LC1primitive_set(lex0, T1);
    goto L42;
L43:;
    T0 = LC2primitive_nil(lex0);
L42:;
    v5initialization_form = CONS(T0,v5initialization_form);
L34:;
    {
     cl_object v11;
     v11 = v6slots;
     {
      cl_object v12;
      v12 = v11;
      if (ecl_unlikely(!ECL_LISTP(v12))) FEtype_error_list(v12);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
     }
     if (Null(v11)) { goto L51; }
     {
      cl_object v12;
      v12 = ECL_CONS_CDR(v11);
      v6slots = v12;
      v11 = ECL_CONS_CAR(v11);
     }
L51:;
     v10slot = v11;
    }
    {
     cl_object v11;
     v11 = v7decls;
     {
      cl_object v12;
      v12 = v11;
      if (ecl_unlikely(!ECL_LISTP(v12))) FEtype_error_list(v12);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
     }
     if (Null(v11)) { goto L62; }
     {
      cl_object v12;
      v12 = ECL_CONS_CDR(v11);
      v7decls = v12;
      v11 = ECL_CONS_CAR(v11);
     }
L62:;
     lex0[2] = v11;
    }
L32:;
    if (v10slot==ECL_NIL) { goto L68; }
    goto L31;
L68:;
    T0 = cl_list(2, ECL_SYM("ALLOCATE-INSTANCE",929), v4class);
    T1 = cl_nreverse(v5initialization_form);
    cl_env_copy->nvalues = 2;
    cl_env_copy->values[1] = T1;
    cl_env_copy->values[0] = T0;
    return cl_env_copy->values[0];
   }
  }
 }
}
/*      local function PRIMITIVE-NIL                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC2primitive_nil(volatile cl_object *lex0)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(si_of_class_p(2, lex0[0], ECL_SYM("STRUCTURE-OBJECT",980)))) { goto L1; }
  T0 = cl_list(2, ECL_SYM("QUOTE",681), lex0[1]);
  T1 = ecl_cddddr(lex0[2]);
  T2 = ecl_car(T1);
  value0 = cl_list(5, ECL_SYM("STRUCTURE-SET",1170), lex0[0], T0, T2, ECL_NIL);
  return value0;
L1:;
  T0 = cl_list(2, ECL_SYM("QUOTE",681), lex0[3]);
  value0 = cl_list(3, ECL_SYM("SLOT-MAKUNBOUND",970), lex0[0], T0);
  return value0;
 }
}
/*      local function PRIMITIVE-SET                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC1primitive_set(volatile cl_object *lex0, cl_object v1val)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(si_of_class_p(2, lex0[0], ECL_SYM("STRUCTURE-OBJECT",980)))) { goto L1; }
  T0 = cl_list(2, ECL_SYM("QUOTE",681), lex0[1]);
  T1 = ecl_cddddr(lex0[2]);
  T2 = ecl_car(T1);
  T3 = cl_list(2, ECL_SYM("QUOTE",681), v1val);
  value0 = cl_list(5, ECL_SYM("STRUCTURE-SET",1170), lex0[0], T0, T2, T3);
  return value0;
L1:;
  T0 = cl_list(2, ECL_SYM("QUOTE",681), lex0[3]);
  T1 = cl_list(3, ECL_SYM("SLOT-VALUE",973), lex0[0], T0);
  T2 = cl_list(2, ECL_SYM("QUOTE",681), v1val);
  value0 = cl_list(3, ECL_SYM("SETF",752), T1, T2);
  return value0;
 }
}
/*      local function MAKE-LOAD-FORM                                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC5make_load_form(cl_narg narg, cl_object v1object, ...)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2env;
  va_list args; va_start(args,v1object);
  {
   int i = 1;
   if (i >= narg) {
    v2env = ECL_NIL;
   } else {
    i++;
    v2env = va_arg(args,cl_object);
   }
  }
  va_end(args);
  if ((si_need_to_make_load_form_p(v1object))!=ECL_NIL) { goto L2; }
  value0 = LC4maybe_quote(v1object);
  return value0;
L2:;
  if (Null(cl_compiled_function_p(v1object))) { goto L4; }
  {
   cl_object v4;                                  /*  LEX             */
   cl_object v5;                                  /*  CODE            */
   cl_object v6;                                  /*  DATA            */
   cl_object v7;                                  /*  NAME            */
   value0 = si_bc_split(v1object);
   {
    const int v8 = cl_env_copy->nvalues;
    v4 = value0;
    cl_object v9;
    v9 = (v8<=1)? ECL_NIL : cl_env_copy->values[1];
    v5 = v9;
    v9 = (v8<=2)? ECL_NIL : cl_env_copy->values[2];
    v6 = v9;
    v9 = (v8<=3)? ECL_NIL : cl_env_copy->values[3];
    v7 = v9;
   }
   if ((v5)!=ECL_NIL) { goto L7; }
   cl_error(2, VV[1], v1object);
L7:;
   T0 = (cl_env_copy->function=(ECL_SYM("MAKE-LOAD-FORM",953)->symbol.gfdef))->cfun.entry(2, v4, v2env) /*  MAKE-LOAD-FORM */;
   T1 = cl_list(2, ECL_SYM("QUOTE",681), v5);
   T2 = (cl_env_copy->function=(ECL_SYM("MAKE-LOAD-FORM",953)->symbol.gfdef))->cfun.entry(2, v6, v2env) /*  MAKE-LOAD-FORM */;
   T3 = (cl_env_copy->function=(ECL_SYM("MAKE-LOAD-FORM",953)->symbol.gfdef))->cfun.entry(2, v7, v2env) /*  MAKE-LOAD-FORM */;
   value0 = cl_list(5, ECL_SYM("BC-JOIN",1048), T0, T1, T2, T3);
   return value0;
  }
L4:;
  if (!(ECL_ARRAYP(v1object))) { goto L9; }
  {
   cl_object v3init_forms;
   v3init_forms = ECL_NIL;
   T0 = cl_array_dimensions(v1object);
   T1 = cl_list(2, ECL_SYM("QUOTE",681), T0);
   T2 = cl_array_element_type(v1object);
   T3 = cl_list(2, ECL_SYM("QUOTE",681), T2);
   {
    bool v4;
    v4 = (ECL_ARRAYP(v1object)? (void)0: FEtype_error_array(v1object),ECL_ADJUSTABLE_ARRAY_P(v1object));
    T4 = cl_list(2, ECL_SYM("QUOTE",681), ecl_make_bool(v4));
    {
     cl_fixnum v5;
     cl_object v6i;
     v5 = ecl_fixnum(cl_array_total_size(v1object));
     v6i = ecl_make_fixnum(0);
     {
      cl_object v7;
      cl_object v8;
      v7 = ecl_list1(ECL_NIL);
      v8 = v7;
L17:;
      if (!(ecl_greatereq(v6i,ecl_make_fixnum(v5)))) { goto L19; }
      goto L18;
L19:;
      {
       cl_object v9;
       v9 = v8;
       if (ecl_unlikely(ECL_ATOM(v9))) FEtype_error_cons(v9);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       T6 = v9;
      }
      {
       cl_object v9x;
       v9x = ecl_aref(v1object,ecl_to_size(v6i));
       if (Null(si_need_to_make_load_form_p(v9x))) { goto L28; }
       T8 = cl_list(3, ECL_SYM("ROW-MAJOR-AREF",733), v1object, v6i);
       T9 = cl_list(2, ECL_SYM("QUOTE",681), v9x);
       T10 = cl_list(3, ECL_SYM("SETF",752), T8, T9);
       v3init_forms = CONS(T10,v3init_forms);
       T7 = ecl_make_fixnum(0);
       goto L26;
L28:;
       T7 = v9x;
      }
L26:;
      v8 = ecl_list1(T7);
      (ECL_CONS_CDR(T6)=v8,T6);
      v6i = ecl_one_plus(v6i);
      goto L17;
L18:;
      T5 = ecl_cdr(v7);
      goto L12;
     }
    }
L12:;
    T6 = cl_list(2, ECL_SYM("QUOTE",681), T5);
    T7 = cl_list(8, ECL_SYM("MAKE-ARRAY",524), T1, ECL_SYM("ELEMENT-TYPE",1246), T3, ECL_SYM("ADJUSTABLE",1216), T4, ECL_SYM("INITIAL-CONTENTS",1278), T6);
    if (Null(v3init_forms)) { goto L38; }
    T8 = CONS(ECL_SYM("PROGN",673),v3init_forms);
    goto L36;
L38:;
    T8 = ECL_NIL;
    goto L36;
L36:;
    cl_env_copy->nvalues = 2;
    cl_env_copy->values[1] = T8;
    cl_env_copy->values[0] = T7;
    return cl_env_copy->values[0];
   }
  }
L9:;
  if (!(ECL_CONSP(v1object))) { goto L40; }
  T0 = LC4maybe_quote(v1object);
  T2 = ecl_car(v1object);
  T1 = LC4maybe_quote(T2);
  T2 = cl_list(3, ECL_SYM("RPLACA",734), T0, T1);
  T3 = LC4maybe_quote(v1object);
  T5 = ecl_cdr(v1object);
  T4 = LC4maybe_quote(T5);
  T5 = cl_list(3, ECL_SYM("RPLACD",735), T3, T4);
  T6 = cl_list(3, ECL_SYM("PROGN",673), T2, T5);
  cl_env_copy->nvalues = 2;
  cl_env_copy->values[1] = T6;
  cl_env_copy->values[0] = VV[2];
  return cl_env_copy->values[0];
L40:;
  if (Null(cl_hash_table_p(v1object))) { goto L46; }
  {
   cl_object v5content;
   cl_object v6make_form;
   v5content = si_hash_table_content(v1object);
   T0 = cl_hash_table_size(v1object);
   T1 = cl_hash_table_rehash_size(v1object);
   T2 = cl_hash_table_rehash_threshold(v1object);
   T3 = cl_hash_table_test(v1object);
   T4 = cl_list(2, ECL_SYM("QUOTE",681), T3);
   v6make_form = cl_list(9, ECL_SYM("MAKE-HASH-TABLE",530), ECL_SYM("SIZE",1335), T0, ECL_SYM("REHASH-SIZE",1324), T1, ECL_SYM("REHASH-THRESHOLD",1325), T2, ECL_SYM("TEST",1343), T4);
   if (Null(si_need_to_make_load_form_p(v5content))) { goto L50; }
   {
    cl_object v7;
    cl_object v8key;
    cl_object v9obj;
    v7 = ECL_NIL;
    v8key = ECL_NIL;
    v9obj = ECL_NIL;
    {
     cl_object v10;
     v10 = si_hash_table_iterator(v1object);
     {
      cl_object v11;
      cl_object v12;
      v11 = ecl_list1(ECL_NIL);
      v12 = v11;
L59:;
      {
       cl_object v14;
       cl_object v15;
       cl_object v16;
       value0 = ecl_function_dispatch(cl_env_copy,v10)(0);
       {
        const int v17 = cl_env_copy->nvalues;
        v14 = value0;
        cl_object v18;
        v18 = (v17<=1)? ECL_NIL : cl_env_copy->values[1];
        v15 = v18;
        v18 = (v17<=2)? ECL_NIL : cl_env_copy->values[2];
        v16 = v18;
       }
       if (Null(v14)) { goto L64; }
       v9obj = v16;
       v8key = v15;
L64:;
       v7 = v14;
       if ((v7)!=ECL_NIL) { goto L61; }
      }
      goto L60;
L61:;
      {
       cl_object v13;
       v13 = v12;
       if (ecl_unlikely(ECL_ATOM(v13))) FEtype_error_cons(v13);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       T1 = v13;
      }
      T2 = CONS(v8key,v9obj);
      v12 = ecl_list1(T2);
      (ECL_CONS_CDR(T1)=v12,T1);
      goto L59;
L60:;
      T0 = ecl_cdr(v11);
      goto L52;
     }
    }
   }
L52:;
   T1 = cl_list(2, ECL_SYM("QUOTE",681), T0);
   T2 = cl_list(2, VV[3], T1);
   T3 = cl_list(3, ECL_SYM("GETHASH",415), VV[4], v1object);
   T4 = cl_list(3, ECL_SYM("SETF",752), T3, VV[5]);
   T5 = cl_list(3, ECL_SYM("DOLIST",315), T2, T4);
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = T5;
   cl_env_copy->values[0] = v6make_form;
   return cl_env_copy->values[0];
L50:;
   T0 = cl_list(2, ECL_SYM("QUOTE",681), v5content);
   T1 = cl_list(3, ECL_SYM("HASH-TABLE-FILL",2017), v6make_form, T0);
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = T1;
   return cl_env_copy->values[0];
  }
L46:;
  if (Null(cl_random_state_p(v1object))) { goto L77; }
  {
   cl_object v7state;
   v7state = si_random_state_array(v1object);
   T0 = cl_list(2, ECL_SYM("MAKE-RANDOM-STATE",534), v7state);
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = T0;
   return cl_env_copy->values[0];
  }
L77:;
  value0 = L9no_make_load_form(v1object);
  return value0;
 }
}
/*      local function MAYBE-QUOTE                                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC4maybe_quote(cl_object v1object)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (ECL_CONSP(v1object)) { goto L3; }
  if (!(ECL_SYMBOLP(v1object))) { goto L1; }
  goto L2;
L3:;
L2:;
  value0 = cl_list(2, ECL_SYM("QUOTE",681), v1object);
  return value0;
L1:;
  value0 = v1object;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function MAKE-LOAD-FORM                                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC6make_load_form(cl_narg narg, cl_object v1object, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2environment;
  va_list args; va_start(args,v1object);
  {
   int i = 1;
   if (i >= narg) {
    v2environment = ECL_NIL;
   } else {
    i++;
    v2environment = va_arg(args,cl_object);
   }
  }
  va_end(args);
  value0 = L9no_make_load_form(v1object);
  return value0;
 }
}
/*      local function MAKE-LOAD-FORM                                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC7make_load_form(cl_narg narg, cl_object v1object, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2environment;
  va_list args; va_start(args,v1object);
  {
   int i = 1;
   if (i >= narg) {
    v2environment = ECL_NIL;
   } else {
    i++;
    v2environment = va_arg(args,cl_object);
   }
  }
  va_end(args);
  value0 = L9no_make_load_form(v1object);
  return value0;
 }
}
/*      local function MAKE-LOAD-FORM                                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC8make_load_form(cl_narg narg, cl_object v1object, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2environment;
  va_list args; va_start(args,v1object);
  {
   int i = 1;
   if (i >= narg) {
    v2environment = ECL_NIL;
   } else {
    i++;
    v2environment = va_arg(args,cl_object);
   }
  }
  va_end(args);
  value0 = L9no_make_load_form(v1object);
  return value0;
 }
}
/*      function definition for NO-MAKE-LOAD-FORM                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L9no_make_load_form(cl_object v1object)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_type_of(v1object);
  value0 = cl_error(2, VV[6], T0);
  return value0;
 }
}
/*      local function MAKE-LOAD-FORM                                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC10make_load_form(cl_narg narg, cl_object v1class, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2environment;
  va_list args; va_start(args,v1class);
  {
   int i = 1;
   if (i >= narg) {
    v2environment = ECL_NIL;
   } else {
    i++;
    v2environment = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v3name;
   v3name = (cl_env_copy->function=(ECL_SYM("CLASS-NAME",936)->symbol.gfdef))->cfun.entry(1, v1class) /*  CLASS-NAME */;
   if (Null(v3name)) { goto L3; }
   T0 = cl_find_class(1, v3name);
   if (!((T0)==(v1class))) { goto L3; }
   T0 = cl_list(2, ECL_SYM("QUOTE",681), v3name);
   value0 = cl_list(2, ECL_SYM("FIND-CLASS",945), T0);
   return value0;
L3:;
   value0 = cl_error(2, VV[7], v1class);
   return value0;
  }
 }
}
/*      local function MAKE-LOAD-FORM                                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC11make_load_form(cl_narg narg, cl_object v1package, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2environment;
  va_list args; va_start(args,v1package);
  {
   int i = 1;
   if (i >= narg) {
    v2environment = ECL_NIL;
   } else {
    i++;
    v2environment = va_arg(args,cl_object);
   }
  }
  va_end(args);
  T0 = cl_package_name(v1package);
  value0 = cl_list(2, ECL_SYM("FIND-PACKAGE",369), T0);
  return value0;
 }
}
/*      local function PRINT-OBJECT                                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC13print_object(cl_object v1instance, cl_object v2stream)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  env0 = ECL_NIL;
  CLV0 = env0 = CONS(v1instance,env0);            /*  INSTANCE        */
  CLV1 = env0 = CONS(v2stream,env0);              /*  STREAM          */
  T0 = cl_find_package(VV[8]);
  ecl_bds_bind(cl_env_copy,ECL_SYM("*PACKAGE*",45),T0); /*  *PACKAGE* */
  {
   cl_object v3;
   v3 = ecl_make_cclosure_va((cl_objectfn)LC12si___print_unreadable_object_body_,env0,Cblock,0);
   si_print_unreadable_object_function(ECL_CONS_CAR(CLV0), ECL_CONS_CAR(CLV1), ECL_NIL, ECL_NIL, v3);
   ecl_bds_unwind1(cl_env_copy);
  }
  value0 = ECL_CONS_CAR(CLV0);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      closure .PRINT-UNREADABLE-OBJECT-BODY.                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC12si___print_unreadable_object_body_(cl_narg narg, ...)
{
 cl_object T0, T1;
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV1 = env0;                                     /*  STREAM          */
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=0)) FEwrong_num_arguments_anonym();
 {
TTL:
  T0 = si_instance_class(ECL_CONS_CAR(CLV0));
  T1 = (cl_env_copy->function=(ECL_SYM("CLASS-NAME",936)->symbol.gfdef))->cfun.entry(1, T0) /*  CLASS-NAME */;
  value0 = cl_format(3, ECL_CONS_CAR(CLV1), VV[9], T1);
  return value0;
 }
 }
}
/*      local function PRINT-OBJECT                                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC15print_object(cl_object v1instance, cl_object v2stream)
{
 cl_object env0 = ECL_NIL;
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  env0 = ECL_NIL;
  CLV0 = env0 = CONS(v1instance,env0);            /*  INSTANCE        */
  CLV1 = env0 = CONS(v2stream,env0);              /*  STREAM          */
  {
   cl_object v3;
   v3 = ecl_make_cclosure_va((cl_objectfn)LC14si___print_unreadable_object_body_,env0,Cblock,0);
   si_print_unreadable_object_function(ECL_CONS_CAR(CLV0), ECL_CONS_CAR(CLV1), ECL_NIL, ECL_T, v3);
  }
  value0 = ECL_CONS_CAR(CLV0);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      closure .PRINT-UNREADABLE-OBJECT-BODY.                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC14si___print_unreadable_object_body_(cl_narg narg, ...)
{
 cl_object T0, T1;
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV1 = env0;                                     /*  STREAM          */
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=0)) FEwrong_num_arguments_anonym();
 {
TTL:
  T0 = cl_find_package(VV[8]);
  ecl_bds_bind(cl_env_copy,ECL_SYM("*PACKAGE*",45),T0); /*  *PACKAGE* */
  T0 = si_instance_class(ECL_CONS_CAR(CLV0));
  T1 = (cl_env_copy->function=(ECL_SYM("CLASS-NAME",936)->symbol.gfdef))->cfun.entry(1, T0) /*  CLASS-NAME */;
  value0 = cl_format(3, ECL_CONS_CAR(CLV1), VV[10], T1);
  ecl_bds_unwind1(cl_env_copy);
  return value0;
 }
 }
}
/*      local function PRINT-OBJECT                                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC17print_object(cl_object v1class, cl_object v2stream)
{
 cl_object env0 = ECL_NIL;
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  env0 = ECL_NIL;
  CLV0 = env0 = CONS(v1class,env0);               /*  CLASS           */
  CLV1 = env0 = CONS(v2stream,env0);              /*  STREAM          */
  {
   cl_object v3;
   v3 = ecl_make_cclosure_va((cl_objectfn)LC16si___print_unreadable_object_body_,env0,Cblock,0);
   si_print_unreadable_object_function(ECL_CONS_CAR(CLV0), ECL_CONS_CAR(CLV1), ECL_NIL, ECL_NIL, v3);
  }
  value0 = ECL_CONS_CAR(CLV0);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      closure .PRINT-UNREADABLE-OBJECT-BODY.                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC16si___print_unreadable_object_body_(cl_narg narg, ...)
{
 cl_object T0, T1, T2;
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV1 = env0;                                     /*  STREAM          */
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=0)) FEwrong_num_arguments_anonym();
 {
TTL:
  T0 = cl_find_package(VV[8]);
  ecl_bds_bind(cl_env_copy,ECL_SYM("*PACKAGE*",45),T0); /*  *PACKAGE* */
  T0 = si_instance_class(ECL_CONS_CAR(CLV0));
  T1 = (cl_env_copy->function=(ECL_SYM("CLASS-NAME",936)->symbol.gfdef))->cfun.entry(1, T0) /*  CLASS-NAME */;
  T2 = (cl_env_copy->function=(ECL_SYM("CLASS-NAME",936)->symbol.gfdef))->cfun.entry(1, ECL_CONS_CAR(CLV0)) /*  CLASS-NAME */;
  value0 = cl_format(4, ECL_CONS_CAR(CLV1), VV[11], T1, T2);
  ecl_bds_unwind1(cl_env_copy);
  return value0;
 }
 }
}
/*      local function PRINT-OBJECT                                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC19print_object(cl_object v1gf, cl_object v2stream)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  env0 = ECL_NIL;
  CLV0 = env0 = CONS(v1gf,env0);                  /*  GF              */
  CLV1 = env0 = CONS(v2stream,env0);              /*  STREAM          */
  {
   cl_object v3;
   v3 = ecl_make_cclosure_va((cl_objectfn)LC18si___print_unreadable_object_body_,env0,Cblock,0);
   T0 = ECL_CONS_CAR(CLV1);
   si_print_unreadable_object_function(ECL_CONS_CAR(CLV0), T0, ECL_T, ECL_NIL, v3);
  }
  value0 = ECL_CONS_CAR(CLV0);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      closure .PRINT-UNREADABLE-OBJECT-BODY.                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC18si___print_unreadable_object_body_(cl_narg narg, ...)
{
 cl_object T0;
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV1 = env0;                                     /*  STREAM          */
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=0)) FEwrong_num_arguments_anonym();
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("GENERIC-FUNCTION-NAME",1586))(1, ECL_CONS_CAR(CLV0)) /*  GENERIC-FUNCTION-NAME */;
  value0 = ecl_prin1(T0,ECL_CONS_CAR(CLV1));
  cl_env_copy->nvalues = 1;
  return value0;
 }
 }
}
/*      local function PRINT-OBJECT                                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC21print_object(cl_object v1m, cl_object v2stream)
{
 cl_object env0 = ECL_NIL;
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  env0 = ECL_NIL;
  CLV0 = env0 = CONS(v1m,env0);                   /*  M               */
  CLV1 = env0 = CONS(v2stream,env0);              /*  STREAM          */
  {
   cl_object v3;
   v3 = ecl_make_cclosure_va((cl_objectfn)LC20si___print_unreadable_object_body_,env0,Cblock,0);
   si_print_unreadable_object_function(ECL_CONS_CAR(CLV0), ECL_CONS_CAR(CLV1), ECL_T, ECL_NIL, v3);
  }
  value0 = ECL_CONS_CAR(CLV0);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      closure .PRINT-UNREADABLE-OBJECT-BODY.                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC20si___print_unreadable_object_body_(cl_narg narg, ...)
{
 cl_object T0, T1, T2, T3, T4, T5;
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV1 = env0;                                     /*  STREAM          */
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=0)) FEwrong_num_arguments_anonym();
 {
TTL:
  {
   cl_object v1gf;
   v1gf = ecl_function_dispatch(cl_env_copy,ECL_SYM("METHOD-GENERIC-FUNCTION",1593))(1, ECL_CONS_CAR(CLV0)) /*  METHOD-GENERIC-FUNCTION */;
   if (Null(v1gf)) { goto L3; }
   T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("GENERIC-FUNCTION-NAME",1586))(1, v1gf) /*  GENERIC-FUNCTION-NAME */;
   goto L1;
L3:;
   T0 = VV[13];
  }
L1:;
  T1 = (cl_env_copy->function=(ECL_SYM("METHOD-QUALIFIERS",959)->symbol.gfdef))->cfun.entry(1, ECL_CONS_CAR(CLV0)) /*  METHOD-QUALIFIERS */;
  {
   cl_object v1;
   cl_object v2spec;
   cl_object v3;
   v1 = ecl_function_dispatch(cl_env_copy,ECL_SYM("METHOD-SPECIALIZERS",1595))(1, ECL_CONS_CAR(CLV0)) /*  METHOD-SPECIALIZERS */;
   v2spec = ECL_NIL;
   {
    cl_object v4;
    v4 = v1;
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
L13:;
    if (!(ecl_endp(v3))) { goto L15; }
    goto L14;
L15:;
    v2spec = _ecl_car(v3);
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
     v6 = v5;
     if (ecl_unlikely(ECL_ATOM(v6))) FEtype_error_cons(v6);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     T3 = v6;
    }
    {
     cl_object v6;
     if (Null(ecl_function_dispatch(cl_env_copy,VV[55])(1, v2spec) /*  CLASSP */)) { goto L31; }
     v6 = (cl_env_copy->function=(ECL_SYM("CLASS-NAME",936)->symbol.gfdef))->cfun.entry(1, v2spec) /*  CLASS-NAME */;
     goto L29;
L31:;
     v6 = ECL_NIL;
     goto L29;
L29:;
     if (Null(v6)) { goto L33; }
     T4 = v6;
     goto L28;
L33:;
     if (Null(si_of_class_p(2, v2spec, ECL_SYM("EQL-SPECIALIZER",1570)))) { goto L35; }
     T5 = ecl_function_dispatch(cl_env_copy,ECL_SYM("EQL-SPECIALIZER-OBJECT",1571))(1, v2spec) /*  EQL-SPECIALIZER-OBJECT */;
     T4 = cl_list(2, ECL_SYM("EQL",336), T5);
     goto L28;
L35:;
     T4 = v2spec;
    }
L28:;
    v5 = ecl_list1(T4);
    (ECL_CONS_CDR(T3)=v5,T3);
    goto L13;
L14:;
    T2 = ecl_cdr(v4);
    goto L5;
   }
  }
L5:;
  value0 = cl_format(5, ECL_CONS_CAR(CLV1), VV[12], T0, T1, T2);
  return value0;
 }
 }
}
/*      function definition for FLOAT-NAN-STRING                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L22float_nan_string(cl_object v1x)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if ((si_float_nan_p(v1x))!=ECL_NIL) { goto L1; }
  (cl_env_copy->function=(ECL_SYM("SIGNAL",762)->symbol.gfdef))->cfun.entry(5, ECL_SYM("TYPE-ERROR",872), ECL_SYM("DATUM",1236), v1x, ECL_SYM("EXPECTED-TYPE",1254), VV[14]) /*  SIGNAL */;
L1:;
  if (!(ecl_symbol_value(ECL_SYM("*PRINT-READABLY*",59))==ECL_NIL)) { goto L3; }
  if (!(ECL_SINGLE_FLOAT_P(v1x))) { goto L5; }
  value0 = VV[15];
  cl_env_copy->nvalues = 1;
  return value0;
L5:;
  if (!(ECL_DOUBLE_FLOAT_P(v1x))) { goto L7; }
  value0 = VV[16];
  cl_env_copy->nvalues = 1;
  return value0;
L7:;
  if (!(ECL_LONG_FLOAT_P(v1x))) { goto L9; }
  value0 = VV[17];
  cl_env_copy->nvalues = 1;
  return value0;
L9:;
  if (!(ECL_SINGLE_FLOAT_P(v1x))) { goto L11; }
  value0 = VV[18];
  cl_env_copy->nvalues = 1;
  return value0;
L11:;
  value0 = si_etypecase_error(v1x, VV[19]);
  return value0;
L3:;
  if (Null(ecl_symbol_value(ECL_SYM("*READ-EVAL*",65)))) { goto L13; }
  if (!(ECL_SINGLE_FLOAT_P(v1x))) { goto L15; }
  value0 = VV[20];
  cl_env_copy->nvalues = 1;
  return value0;
L15:;
  if (!(ECL_DOUBLE_FLOAT_P(v1x))) { goto L17; }
  value0 = VV[21];
  cl_env_copy->nvalues = 1;
  return value0;
L17:;
  if (!(ECL_LONG_FLOAT_P(v1x))) { goto L19; }
  value0 = VV[22];
  cl_env_copy->nvalues = 1;
  return value0;
L19:;
  if (!(ECL_SINGLE_FLOAT_P(v1x))) { goto L21; }
  value0 = VV[23];
  cl_env_copy->nvalues = 1;
  return value0;
L21:;
  value0 = si_etypecase_error(v1x, VV[19]);
  return value0;
L13:;
  value0 = cl_error(3, ECL_SYM("PRINT-NOT-READABLE",665), ECL_SYM("OBJECT",1305), v1x);
  return value0;
 }
}
/*      function definition for FLOAT-INFINITY-STRING                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L23float_infinity_string(cl_object v1x)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if ((si_float_infinity_p(v1x))!=ECL_NIL) { goto L1; }
  (cl_env_copy->function=(ECL_SYM("SIGNAL",762)->symbol.gfdef))->cfun.entry(5, ECL_SYM("TYPE-ERROR",872), ECL_SYM("DATUM",1236), v1x, ECL_SYM("EXPECTED-TYPE",1254), VV[25]) /*  SIGNAL */;
L1:;
  if (!(ecl_symbol_value(ECL_SYM("*PRINT-READABLY*",59))==ECL_NIL)) { goto L3; }
  {
   float v2;
   v2 = (float)    0.    ;
   if (!(ECL_SINGLE_FLOAT_P(v1x))) { goto L5; }
   v2 = ecl_single_float(v1x);
   if (!((v2)<((float)    0.    ))) { goto L5; }
  }
  value0 = VV[26];
  cl_env_copy->nvalues = 1;
  return value0;
L5:;
  {
   float v2;
   v2 = (float)    0.    ;
   if (!(ECL_SINGLE_FLOAT_P(v1x))) { goto L11; }
   v2 = ecl_single_float(v1x);
   if (!((v2)>((float)    0.    ))) { goto L11; }
  }
  value0 = VV[27];
  cl_env_copy->nvalues = 1;
  return value0;
L11:;
  {
   double v2;
   v2 =     0.    ;
   if (!(ECL_DOUBLE_FLOAT_P(v1x))) { goto L17; }
   v2 = ecl_double_float(v1x);
   if (!((v2)<(    0.    ))) { goto L17; }
  }
  value0 = VV[28];
  cl_env_copy->nvalues = 1;
  return value0;
L17:;
  {
   double v2;
   v2 =     0.    ;
   if (!(ECL_DOUBLE_FLOAT_P(v1x))) { goto L23; }
   v2 = ecl_double_float(v1x);
   if (!((v2)>(    0.    ))) { goto L23; }
  }
  value0 = VV[29];
  cl_env_copy->nvalues = 1;
  return value0;
L23:;
  {
   long double v2;
   v2 = 0.0e+0l;
   if (!(ECL_LONG_FLOAT_P(v1x))) { goto L29; }
   v2 = ecl_long_float(v1x);
   if (!((v2)<(0.0e+0l))) { goto L29; }
  }
  value0 = VV[30];
  cl_env_copy->nvalues = 1;
  return value0;
L29:;
  {
   long double v2;
   v2 = 0.0e+0l;
   if (!(ECL_LONG_FLOAT_P(v1x))) { goto L35; }
   v2 = ecl_long_float(v1x);
   if (!((v2)>(0.0e+0l))) { goto L35; }
  }
  value0 = VV[31];
  cl_env_copy->nvalues = 1;
  return value0;
L35:;
  {
   float v2;
   v2 = (float)    0.    ;
   if (!(ECL_SINGLE_FLOAT_P(v1x))) { goto L41; }
   v2 = ecl_single_float(v1x);
   if (!((v2)<((float)    0.    ))) { goto L41; }
  }
  value0 = VV[32];
  cl_env_copy->nvalues = 1;
  return value0;
L41:;
  {
   float v2;
   v2 = (float)    0.    ;
   if (!(ECL_SINGLE_FLOAT_P(v1x))) { goto L47; }
   v2 = ecl_single_float(v1x);
   if (!((v2)>((float)    0.    ))) { goto L47; }
  }
  value0 = VV[33];
  cl_env_copy->nvalues = 1;
  return value0;
L47:;
  value0 = si_etypecase_error(v1x, VV[34]);
  return value0;
L3:;
  if (Null(ecl_symbol_value(ECL_SYM("*READ-EVAL*",65)))) { goto L53; }
  {
   float v2;
   v2 = (float)    0.    ;
   if (!(ECL_SINGLE_FLOAT_P(v1x))) { goto L55; }
   v2 = ecl_single_float(v1x);
   if (!((v2)<((float)    0.    ))) { goto L55; }
  }
  value0 = VV[35];
  cl_env_copy->nvalues = 1;
  return value0;
L55:;
  {
   float v2;
   v2 = (float)    0.    ;
   if (!(ECL_SINGLE_FLOAT_P(v1x))) { goto L61; }
   v2 = ecl_single_float(v1x);
   if (!((v2)>((float)    0.    ))) { goto L61; }
  }
  value0 = VV[36];
  cl_env_copy->nvalues = 1;
  return value0;
L61:;
  {
   double v2;
   v2 =     0.    ;
   if (!(ECL_DOUBLE_FLOAT_P(v1x))) { goto L67; }
   v2 = ecl_double_float(v1x);
   if (!((v2)<(    0.    ))) { goto L67; }
  }
  value0 = VV[37];
  cl_env_copy->nvalues = 1;
  return value0;
L67:;
  {
   double v2;
   v2 =     0.    ;
   if (!(ECL_DOUBLE_FLOAT_P(v1x))) { goto L73; }
   v2 = ecl_double_float(v1x);
   if (!((v2)>(    0.    ))) { goto L73; }
  }
  value0 = VV[38];
  cl_env_copy->nvalues = 1;
  return value0;
L73:;
  {
   long double v2;
   v2 = 0.0e+0l;
   if (!(ECL_LONG_FLOAT_P(v1x))) { goto L79; }
   v2 = ecl_long_float(v1x);
   if (!((v2)<(0.0e+0l))) { goto L79; }
  }
  value0 = VV[39];
  cl_env_copy->nvalues = 1;
  return value0;
L79:;
  {
   long double v2;
   v2 = 0.0e+0l;
   if (!(ECL_LONG_FLOAT_P(v1x))) { goto L85; }
   v2 = ecl_long_float(v1x);
   if (!((v2)>(0.0e+0l))) { goto L85; }
  }
  value0 = VV[40];
  cl_env_copy->nvalues = 1;
  return value0;
L85:;
  {
   float v2;
   v2 = (float)    0.    ;
   if (!(ECL_SINGLE_FLOAT_P(v1x))) { goto L91; }
   v2 = ecl_single_float(v1x);
   if (!((v2)<((float)    0.    ))) { goto L91; }
  }
  value0 = VV[41];
  cl_env_copy->nvalues = 1;
  return value0;
L91:;
  {
   float v2;
   v2 = (float)    0.    ;
   if (!(ECL_SINGLE_FLOAT_P(v1x))) { goto L97; }
   v2 = ecl_single_float(v1x);
   if (!((v2)>((float)    0.    ))) { goto L97; }
  }
  value0 = VV[42];
  cl_env_copy->nvalues = 1;
  return value0;
L97:;
  value0 = si_etypecase_error(v1x, VV[34]);
  return value0;
L53:;
  value0 = cl_error(3, ECL_SYM("PRINT-NOT-READABLE",665), ECL_SYM("OBJECT",1305), v1x);
  return value0;
 }
}
/*      local function DESCRIBE-OBJECT                                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC24describe_object(cl_object v1obj, cl_object v2stream)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3class;
   cl_object v4slotds;
   v3class = cl_class_of(v1obj);
   v4slotds = ecl_function_dispatch(cl_env_copy,ECL_SYM("CLASS-SLOTS",1555))(1, v3class) /*  CLASS-SLOTS */;
   T0 = (cl_env_copy->function=(ECL_SYM("CLASS-NAME",936)->symbol.gfdef))->cfun.entry(1, v3class) /*  CLASS-NAME */;
   cl_format(4, v2stream, VV[44], v1obj, T0);
   {
    cl_object v5scan;
    cl_fixnum v6i;
    cl_object v7sv;
    v5scan = v4slotds;
    v6i = 0;
    v7sv = ECL_NIL;
    goto L10;
L9:;
    v7sv = ecl_instance_ref((v1obj),(v6i));
    T0 = ecl_car(v5scan);
    T1 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-NAME",1609))(1, T0) /*  SLOT-DEFINITION-NAME */;
    ecl_print(T1,v2stream);
    ecl_princ(VV[45],v2stream);
    if (!((v7sv)!=ECL_UNBOUND)) { goto L17; }
    ecl_prin1(v7sv,v2stream);
    goto L16;
L17:;
    ecl_prin1(VV[46],v2stream);
L16:;
    v5scan = ecl_cdr(v5scan);
    {
     cl_object v8;
     v8 = ecl_make_integer((v6i)+1);
     {
      bool v9;
      v9 = ECL_FIXNUMP(v8);
      if (ecl_unlikely(!(v9)))
         FEwrong_type_argument(ECL_SYM("FIXNUM",374),v8);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
     }
     v6i = ecl_fixnum(v8);
    }
L10:;
    if (v5scan==ECL_NIL) { goto L24; }
    goto L9;
L24:;
   }
  }
  value0 = v1obj;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function DESCRIBE-OBJECT                                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC25describe_object(cl_object v1obj, cl_object v2stream)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3class;
   cl_object v4slotds;
   v3class = si_instance_class(v1obj);
   v4slotds = ecl_function_dispatch(cl_env_copy,ECL_SYM("CLASS-SLOTS",1555))(1, v3class) /*  CLASS-SLOTS */;
   T0 = (cl_env_copy->function=(ECL_SYM("CLASS-NAME",936)->symbol.gfdef))->cfun.entry(1, v3class) /*  CLASS-NAME */;
   cl_format(4, v2stream, VV[44], v1obj, T0);
   {
    cl_object v5scan;
    cl_fixnum v6i;
    cl_object v7sv;
    v5scan = v4slotds;
    v6i = 0;
    v7sv = ECL_NIL;
    goto L10;
L9:;
    T0 = ecl_car(v5scan);
    T1 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-NAME",1609))(1, T0) /*  SLOT-DEFINITION-NAME */;
    ecl_print(T1,v2stream);
    ecl_princ(VV[45],v2stream);
    {
     cl_object v8;
     T0 = ecl_car(v5scan);
     v8 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-NAME",1609))(1, T0) /*  SLOT-DEFINITION-NAME */;
     if (!((v8)==(VV[47]))) { goto L21; }
     goto L18;
     goto L19;
L21:;
     goto L19;
L19:;
     if (!((v8)==(VV[49]))) { goto L16; }
     goto L17;
L18:;
L17:;
     ecl_princ_char((ecl_character)(40),v2stream);
     {
      cl_object v9scan;
      cl_object v10e;
      v9scan = ecl_instance_ref((v1obj),(v6i));
      v10e = ecl_car(v9scan);
      goto L30;
L29:;
      T0 = (cl_env_copy->function=(ECL_SYM("CLASS-NAME",936)->symbol.gfdef))->cfun.entry(1, v10e) /*  CLASS-NAME */;
      ecl_prin1(T0,v2stream);
      if (Null(ecl_cdr(v9scan))) { goto L33; }
      ecl_princ_char((ecl_character)(32),v2stream);
L33:;
      v9scan = ecl_cdr(v9scan);
      v10e = ecl_car(v9scan);
L30:;
      if (v9scan==ECL_NIL) { goto L39; }
      goto L29;
L39:;
     }
     ecl_princ_char((ecl_character)(41),v2stream);
     goto L14;
L16:;
     v7sv = ecl_instance_ref((v1obj),(v6i));
     if (!((v7sv)!=ECL_UNBOUND)) { goto L43; }
     ecl_prin1(v7sv,v2stream);
     goto L14;
L43:;
     ecl_prin1(VV[46],v2stream);
    }
L14:;
    v5scan = ecl_cdr(v5scan);
    {
     cl_object v8;
     v8 = ecl_make_integer((v6i)+1);
     {
      bool v9;
      v9 = ECL_FIXNUMP(v8);
      if (ecl_unlikely(!(v9)))
         FEwrong_type_argument(ECL_SYM("FIXNUM",374),v8);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
     }
     v6i = ecl_fixnum(v8);
    }
L10:;
    if (v5scan==ECL_NIL) { goto L50; }
    goto L9;
L50:;
   }
  }
  value0 = v1obj;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}

#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/clos/print.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _ecl7bF96nZ7_0EJ6lq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CLOS;PRINT.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_ecl7bF96nZ7_0EJ6lq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  ecl_cmp_defun(VV[51]);                          /*  MAKE-LOAD-FORM-SAVING-SLOTS */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC5make_load_form,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[54])(5, ECL_SYM("MAKE-LOAD-FORM",953), ECL_NIL, VVtemp[1], VVtemp[2], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC6make_load_form,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[54])(5, ECL_SYM("MAKE-LOAD-FORM",953), ECL_NIL, VVtemp[3], VVtemp[4], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC7make_load_form,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[54])(5, ECL_SYM("MAKE-LOAD-FORM",953), ECL_NIL, VVtemp[5], VVtemp[4], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC8make_load_form,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[54])(5, ECL_SYM("MAKE-LOAD-FORM",953), ECL_NIL, VVtemp[6], VVtemp[4], T0) /*  INSTALL-METHOD */;
 }
  (void)0; /* No entry created for NO-MAKE-LOAD-FORM */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC10make_load_form,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[54])(5, ECL_SYM("MAKE-LOAD-FORM",953), ECL_NIL, VVtemp[7], VVtemp[8], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC11make_load_form,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[54])(5, ECL_SYM("MAKE-LOAD-FORM",953), ECL_NIL, VVtemp[9], VVtemp[10], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC13print_object,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[54])(5, ECL_SYM("PRINT-OBJECT",963), ECL_NIL, VVtemp[11], VVtemp[12], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC15print_object,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[54])(5, ECL_SYM("PRINT-OBJECT",963), ECL_NIL, VVtemp[13], VVtemp[12], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC17print_object,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[54])(5, ECL_SYM("PRINT-OBJECT",963), ECL_NIL, VVtemp[14], VVtemp[15], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC19print_object,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[54])(5, ECL_SYM("PRINT-OBJECT",963), ECL_NIL, VVtemp[16], VVtemp[17], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC21print_object,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[54])(5, ECL_SYM("PRINT-OBJECT",963), ECL_NIL, VVtemp[18], VVtemp[19], T0) /*  INSTALL-METHOD */;
 }
  ecl_cmp_defun(VV[56]);                          /*  FLOAT-NAN-STRING */
  ecl_cmp_defun(VV[57]);                          /*  FLOAT-INFINITY-STRING */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC24describe_object,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[54])(5, ECL_SYM("DESCRIBE-OBJECT",943), ECL_NIL, VVtemp[11], VVtemp[20], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC25describe_object,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[54])(5, ECL_SYM("DESCRIBE-OBJECT",943), ECL_NIL, VVtemp[14], VVtemp[20], T0) /*  INSTALL-METHOD */;
 }
}
