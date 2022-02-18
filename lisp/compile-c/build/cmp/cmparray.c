/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CMP;CMPARRAY.LSP                                  */
#include <ecl/ecl-cmp.h>
#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/cmp/cmparray.eclh"
/*      function definition for VALID-ARRAY-INDEX-P                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L1valid_array_index_p(cl_object v1x)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_fixnum v2;
   v2 = 0;
   if (!(ECL_FIXNUMP(v1x))) { goto L3; }
   v2 = ecl_fixnum(v1x);
   if (!((v2)<=(536870910))) { goto L8; }
   value0 = ecl_make_bool((v2)>=(0));
   cl_env_copy->nvalues = 1;
   return value0;
L8:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L3:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for GUESS-ARRAY-ELEMENT-TYPE              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L2guess_array_element_type(cl_object v1element_type)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  v1element_type = ecl_function_dispatch(cl_env_copy,VV[50])(1, v1element_type) /*  EXTRACT-CONSTANT-VALUE */;
  if (Null(v1element_type)) { goto L1; }
  if (Null(ecl_function_dispatch(cl_env_copy,VV[51])(1, v1element_type) /*  KNOWN-TYPE-P */)) { goto L1; }
  value0 = cl_upgraded_array_element_type(1, v1element_type);
  return value0;
L1:;
  value0 = ECL_SYM("*",20);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for GUESS-ARRAY-DIMENSIONS-TYPE           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L3guess_array_dimensions_type(cl_object v1orig_dimensions)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ECL_CONSP(v1orig_dimensions))) { goto L3; }
  T0 = ecl_car(ECL_NIL);
  if (!((T0)==(ECL_SYM("LIST",483)))) { goto L3; }
  {
   cl_object v2l;
   v2l = cl_list_length(v1orig_dimensions);
   if (Null(v2l)) { goto L1; }
   if (Null(cl_L(3, ecl_make_fixnum(-1), v2l, ecl_make_fixnum(64)))) { goto L1; }
   T0 = ecl_one_minus(v2l);
   value0 = cl_make_list(3, T0, ECL_SYM("INITIAL-ELEMENT",1277), ECL_SYM("*",20));
   return value0;
  }
L3:;
  goto L1;
L1:;
  {
   cl_object v2dimensions;
   v2dimensions = ecl_function_dispatch(cl_env_copy,VV[50])(2, v1orig_dimensions, VV[2]) /*  EXTRACT-CONSTANT-VALUE */;
   if (!((v2dimensions)==(VV[2]))) { goto L10; }
   value0 = ECL_SYM("*",20);
   cl_env_copy->nvalues = 1;
   return value0;
L10:;
   if (Null(L1valid_array_index_p(v2dimensions))) { goto L12; }
   value0 = ecl_list1(v2dimensions);
   cl_env_copy->nvalues = 1;
   return value0;
L12:;
   if (!(ECL_LISTP(v2dimensions))) { goto L14; }
   {
    cl_object v3rank;
    v3rank = cl_list_length(v2dimensions);
    if (ecl_numberp(v3rank)) { goto L18; }
    if ((cl_L(3, ecl_make_fixnum(-1), v3rank, ecl_make_fixnum(64)))!=ECL_NIL) { goto L18; }
    T0 = ecl_fdefinition(VV[53]);
    if (Null(cl_every(2, T0, v2dimensions))) { goto L14; }
    goto L15;
L18:;
   }
L15:;
   value0 = v2dimensions;
   cl_env_copy->nvalues = 1;
   return value0;
L14:;
   ecl_function_dispatch(cl_env_copy,VV[54])(2, VV[3], v1orig_dimensions) /*  CMPWARN */;
   value0 = ECL_SYM("*",20);
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function LAMBDA15                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC4__lambda15(cl_object v1, cl_object v2env)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3form;
   cl_object v4;
   cl_object v5dimensions;
   cl_object v6;
   cl_object v7element_type;
   cl_object v8;
   cl_object v9initial_element;
   cl_object v10initial_element_supplied_p;
   cl_object v11;
   cl_object v12initial_contents_supplied_p;
   cl_object v13;
   cl_object v14adjustable;
   cl_object v15;
   cl_object v16fill_pointer;
   cl_object v17;
   cl_object v18displaced_to;
   cl_object v19;
   cl_object v20displaced_index_offset;
   v3form = v1;
   T0 = ecl_car(v1);
   if (!((T0)==(ECL_SYM("FUNCALL",396)))) { goto L3; }
   T0 = ecl_caadr(v1);
   if (!((T0)==(ECL_SYM("FUNCTION",398)))) { goto L3; }
   v4 = ecl_cddr(v1);
   goto L2;
L3:;
   v4 = ecl_cdr(v1);
L2:;
   if (!(v4==ECL_NIL)) { goto L7; }
   ecl_function_dispatch(cl_env_copy,VV[55])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L7:;
   {
    cl_object v21;
    v21 = ecl_car(v4);
    v4 = ecl_cdr(v4);
    v5dimensions = v21;
   }
   v6 = ecl_function_dispatch(cl_env_copy,VV[56])(2, v4, ECL_SYM("ELEMENT-TYPE",1246)) /*  SEARCH-KEYWORD */;
   if (!((v6)==(ECL_SYM("MISSING-KEYWORD",2015)))) { goto L14; }
   v7element_type = ECL_T;
   goto L13;
L14:;
   v7element_type = v6;
L13:;
   v8 = ecl_function_dispatch(cl_env_copy,VV[56])(2, v4, ECL_SYM("INITIAL-ELEMENT",1277)) /*  SEARCH-KEYWORD */;
   if (!((v8)==(ECL_SYM("MISSING-KEYWORD",2015)))) { goto L18; }
   v9initial_element = ECL_NIL;
   goto L17;
L18:;
   v9initial_element = v8;
L17:;
   {
    bool v21;
    v21 = (v8)==(ECL_SYM("MISSING-KEYWORD",2015));
    v10initial_element_supplied_p = (v21)?ECL_NIL:ECL_T;
   }
   v11 = ecl_function_dispatch(cl_env_copy,VV[56])(2, v4, ECL_SYM("INITIAL-CONTENTS",1278)) /*  SEARCH-KEYWORD */;
   {
    bool v21;
    v21 = (v11)==(ECL_SYM("MISSING-KEYWORD",2015));
    v12initial_contents_supplied_p = (v21)?ECL_NIL:ECL_T;
   }
   v13 = ecl_function_dispatch(cl_env_copy,VV[56])(2, v4, ECL_SYM("ADJUSTABLE",1216)) /*  SEARCH-KEYWORD */;
   if (!((v13)==(ECL_SYM("MISSING-KEYWORD",2015)))) { goto L25; }
   v14adjustable = ECL_NIL;
   goto L24;
L25:;
   v14adjustable = v13;
L24:;
   v15 = ecl_function_dispatch(cl_env_copy,VV[56])(2, v4, ECL_SYM("FILL-POINTER",1261)) /*  SEARCH-KEYWORD */;
   if (!((v15)==(ECL_SYM("MISSING-KEYWORD",2015)))) { goto L29; }
   v16fill_pointer = ECL_NIL;
   goto L28;
L29:;
   v16fill_pointer = v15;
L28:;
   v17 = ecl_function_dispatch(cl_env_copy,VV[56])(2, v4, ECL_SYM("DISPLACED-TO",1243)) /*  SEARCH-KEYWORD */;
   if (!((v17)==(ECL_SYM("MISSING-KEYWORD",2015)))) { goto L33; }
   v18displaced_to = ECL_NIL;
   goto L32;
L33:;
   v18displaced_to = v17;
L32:;
   v19 = ecl_function_dispatch(cl_env_copy,VV[56])(2, v4, ECL_SYM("DISPLACED-INDEX-OFFSET",1242)) /*  SEARCH-KEYWORD */;
   if (!((v19)==(ECL_SYM("MISSING-KEYWORD",2015)))) { goto L37; }
   v20displaced_index_offset = ecl_make_fixnum(0);
   goto L36;
L37:;
   v20displaced_index_offset = v19;
L36:;
   ecl_function_dispatch(cl_env_copy,VV[57])(2, v4, VV[5]) /*  CHECK-KEYWORD */;
   {
    cl_object v21dimensions_type;
    cl_object v22guessed_element_type;
    v21dimensions_type = L3guess_array_dimensions_type(v5dimensions);
    v22guessed_element_type = L2guess_array_element_type(v7element_type);
    if ((v12initial_contents_supplied_p)!=ECL_NIL) { goto L40; }
    if ((v22guessed_element_type)==(ECL_SYM("*",20))) { goto L44; }
    v7element_type = cl_list(2, ECL_SYM("QUOTE",681), v22guessed_element_type);
L44:;
    {
     cl_object v23function;
     v23function = ECL_SYM("MAKE-PURE-ARRAY",1107);
     if (!(ECL_LISTP(v21dimensions_type))) { goto L49; }
     T0 = ecl_cdr(v21dimensions_type);
     if (!(T0==ECL_NIL)) { goto L49; }
     T0 = ecl_car(v21dimensions_type);
     if (!(ECL_FIXNUMP(T0)||ECL_BIGNUMP(T0))) { goto L49; }
     v23function = ECL_SYM("MAKE-VECTOR",1110);
     v5dimensions = ecl_car(v21dimensions_type);
L49:;
     v3form = cl_list(7, v23function, v7element_type, v5dimensions, v14adjustable, v16fill_pointer, v18displaced_to, v20displaced_index_offset);
    }
    if (Null(v10initial_element_supplied_p)) { goto L57; }
    v3form = cl_listX(4, ECL_SYM("FILL-ARRAY-WITH-ELT",1759), v3form, v9initial_element, VV[6]);
L57:;
    T0 = cl_list(3, ECL_SYM("ARRAY",98), v22guessed_element_type, v21dimensions_type);
    v3form = cl_list(3, ECL_SYM("TRULY-THE",2039), T0, v3form);
   }
L40:;
   value0 = v3form;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for EXPAND-VECTOR-PUSH                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L5expand_vector_push(cl_object v1whole, cl_object v2env, cl_object v3extend)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v4args;
   v4args = ecl_cdr(v1whole);
   T0 = ecl_car(v4args);
   if ((T0)==(VV[7])) { goto L4; }
   if ((ecl_function_dispatch(cl_env_copy,VV[58])(0) /*  POLICY-OPEN-CODE-AREF/ASET */)!=ECL_NIL) { goto L2; }
   goto L3;
L4:;
L3:;
   value0 = v1whole;
   cl_env_copy->nvalues = 1;
   return value0;
L2:;
   {
    cl_fixnum v5;
    v5 = ecl_length(v4args);
    {
     cl_fixnum v6;
     if (Null(v3extend)) { goto L9; }
     v6 = 3;
     goto L8;
L9:;
     v6 = 2;
L8:;
     if (((2)<=(v5) && (v5)<=(v6))) { goto L6; }
    }
   }
   T0 = ecl_car(v1whole);
   ecl_function_dispatch(cl_env_copy,VV[54])(3, VV[8], T0, v1whole) /*  CMPWARN */;
   T0 = ecl_car(v1whole);
   T1 = cl_list(2, ECL_SYM("QUOTE",681), T0);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), v1whole);
   value0 = cl_list(4, ECL_SYM("SIMPLE-PROGRAM-ERROR",1159), VV[8], T1, T2);
   return value0;
L6:;
   T0 = ecl_car(v4args);
   T1 = cl_list(2, VV[7], T0);
   T2 = ecl_cadr(v4args);
   T3 = cl_list(2, VV[9], T2);
   T4 = cl_list(2, T1, T3);
   if (Null(v3extend)) { goto L13; }
   T6 = ecl_cddr(v4args);
   T5 = cl_listX(4, ECL_SYM("VECTOR-PUSH-EXTEND",903), VV[7], VV[9], T6);
   goto L12;
L13:;
   T5 = ECL_NIL;
L12:;
   T6 = cl_list(2, ECL_T, T5);
   T7 = cl_list(3, ECL_SYM("COND",249), VV[14], T6);
   T8 = cl_list(4, ECL_SYM("LET",479), VV[12], VV[13], T7);
   value0 = cl_list(5, ECL_SYM("LET*",480), T4, VV[10], VV[11], T8);
   return value0;
  }
 }
}
/*      local function LAMBDA25                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC6__lambda25(cl_object v1, cl_object v2env)
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
   T0 = ecl_car(v1);
   if (!((T0)==(ECL_SYM("FUNCALL",396)))) { goto L2; }
   T0 = ecl_caadr(v1);
   if (!((T0)==(ECL_SYM("FUNCTION",398)))) { goto L2; }
   v3 = ecl_cddr(v1);
   goto L1;
L2:;
   v3 = ecl_cdr(v1);
L1:;
   value0 = L5expand_vector_push(v1, v2env, ECL_NIL);
   return value0;
  }
 }
}
/*      local function LAMBDA28                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC7__lambda28(cl_object v1, cl_object v2env)
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
   T0 = ecl_car(v1);
   if (!((T0)==(ECL_SYM("FUNCALL",396)))) { goto L2; }
   T0 = ecl_caadr(v1);
   if (!((T0)==(ECL_SYM("FUNCTION",398)))) { goto L2; }
   v3 = ecl_cddr(v1);
   goto L1;
L2:;
   v3 = ecl_cdr(v1);
L1:;
   value0 = L5expand_vector_push(v1, v2env, ECL_T);
   return value0;
  }
 }
}
/*      local function LAMBDA31                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC8__lambda31(cl_object v1, cl_object v2env)
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
   cl_object v4array;
   T0 = ecl_car(v1);
   if (!((T0)==(ECL_SYM("FUNCALL",396)))) { goto L2; }
   T0 = ecl_caadr(v1);
   if (!((T0)==(ECL_SYM("FUNCTION",398)))) { goto L2; }
   v3 = ecl_cddr(v1);
   goto L1;
L2:;
   v3 = ecl_cdr(v1);
L1:;
   if (!(v3==ECL_NIL)) { goto L6; }
   ecl_function_dispatch(cl_env_copy,VV[55])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L6:;
   {
    cl_object v5;
    v5 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4array = v5;
   }
   if (Null(ecl_function_dispatch(cl_env_copy,VV[58])(1, v2env) /*  POLICY-OPEN-CODE-AREF/ASET */)) { goto L11; }
   value0 = L9expand_aref(v4array, v3, v2env);
   return value0;
L11:;
   value0 = v1;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for EXPAND-AREF                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L9expand_aref(cl_object v1array, cl_object v2indices, cl_object v3env)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_list(2, VV[15], v1array);
  T1 = ecl_list1(T0);
  T2 = L16expand_row_major_index(VV[15], v2indices, v3env);
  T3 = cl_list(3, ECL_SYM("ROW-MAJOR-AREF",733), VV[15], T2);
  value0 = cl_list(4, ECL_SYM("LET",479), T1, VV[16], T3);
  return value0;
 }
}
/*      local function LAMBDA35                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC10__lambda35(cl_object v1, cl_object v2env)
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
   cl_object v4array;
   T0 = ecl_car(v1);
   if (!((T0)==(ECL_SYM("FUNCALL",396)))) { goto L2; }
   T0 = ecl_caadr(v1);
   if (!((T0)==(ECL_SYM("FUNCTION",398)))) { goto L2; }
   v3 = ecl_cddr(v1);
   goto L1;
L2:;
   v3 = ecl_cdr(v1);
L1:;
   if (!(v3==ECL_NIL)) { goto L6; }
   ecl_function_dispatch(cl_env_copy,VV[55])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L6:;
   {
    cl_object v5;
    v5 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4array = v5;
   }
   if (!(v3==ECL_NIL)) { goto L11; }
   ecl_function_dispatch(cl_env_copy,VV[54])(2, VV[18], v1) /*  CMPWARN */;
   value0 = v1;
   cl_env_copy->nvalues = 1;
   return value0;
L11:;
   if (Null(ecl_function_dispatch(cl_env_copy,VV[58])(1, v2env) /*  POLICY-OPEN-CODE-AREF/ASET */)) { goto L14; }
   {
    cl_object v5indices;
    cl_object v6value;
    v5indices = ecl_butlast(v3,1);
    T0 = ecl_last(v3,1);
    v6value = ecl_car(T0);
    value0 = L11expand_aset(v4array, v5indices, v6value, v2env);
    return value0;
   }
L14:;
   value0 = v1;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for EXPAND-ASET                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L11expand_aset(cl_object v1array, cl_object v2indices, cl_object v3value, cl_object v4env)
{
 cl_object T0, T1, T2, T3, T4, T5;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v5_array;
   v5_array = cl_gensym(1, _ecl_static_0);
   T0 = cl_list(2, v5_array, v1array);
   T1 = ecl_list1(T0);
   T2 = cl_list(2, VV[19], v5_array);
   T3 = cl_list(3, ECL_SYM("DECLARE",276), T2, VV[20]);
   T4 = L16expand_row_major_index(v5_array, v2indices, v4env);
   T5 = cl_list(4, ECL_SYM("ROW-MAJOR-ASET",1147), v5_array, T4, v3value);
   value0 = cl_list(4, ECL_SYM("LET*",480), T1, T3, T5);
   return value0;
  }
 }
}
/*      local function LAMBDA39                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC12__lambda39(cl_object v1, cl_object v2env)
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
   cl_object v4array;
   T0 = ecl_car(v1);
   if (!((T0)==(ECL_SYM("FUNCALL",396)))) { goto L2; }
   T0 = ecl_caadr(v1);
   if (!((T0)==(ECL_SYM("FUNCTION",398)))) { goto L2; }
   v3 = ecl_cddr(v1);
   goto L1;
L2:;
   v3 = ecl_cdr(v1);
L1:;
   if (!(v3==ECL_NIL)) { goto L6; }
   ecl_function_dispatch(cl_env_copy,VV[55])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L6:;
   {
    cl_object v5;
    v5 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4array = v5;
   }
   if (Null(ecl_function_dispatch(cl_env_copy,VV[58])(1, v2env) /*  POLICY-OPEN-CODE-AREF/ASET */)) { goto L11; }
   T0 = cl_list(2, VV[22], v4array);
   T1 = ecl_list1(T0);
   T2 = L16expand_row_major_index(VV[22], v3, v2env);
   value0 = cl_list(4, ECL_SYM("LET",479), T1, VV[23], T2);
   return value0;
L11:;
   value0 = v1;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for EXPAND-ZERO-DIM-INDEX-CHECK           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L13expand_zero_dim_index_check(cl_object v1a, cl_object v2env)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(ecl_function_dispatch(cl_env_copy,VV[62])(1, v2env) /*  POLICY-TYPE-ASSERTIONS */)) { goto L1; }
  T0 = cl_list(3, VV[24], v1a, ECL_SYM("ARRAY",98));
  T1 = cl_list(3, VV[25], v1a, ecl_make_fixnum(0));
  value0 = cl_list(4, ECL_SYM("PROGN",673), T0, T1, ecl_make_fixnum(0));
  return value0;
L1:;
  value0 = ecl_make_fixnum(0);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for EXPAND-VECTOR-INDEX-CHECK             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L15expand_vector_index_check(cl_object v1a, cl_object v2index, cl_object v3env)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(ecl_function_dispatch(cl_env_copy,VV[62])(1, v3env) /*  POLICY-TYPE-ASSERTIONS */)) { goto L1; }
  T0 = cl_list(2, VV[28], v2index);
  T1 = ecl_list1(T0);
  T2 = LC14expansion(v1a, VV[28]);
  value0 = cl_list(4, ECL_SYM("LET",479), T1, VV[29], T2);
  return value0;
L1:;
  value0 = v2index;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function EXPANSION                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC14expansion(cl_object v1a, cl_object v2index)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_list(3, VV[24], v1a, ECL_SYM("VECTOR",900));
  T1 = cl_list(3, VV[27], v1a, v2index);
  value0 = cl_list(4, ECL_SYM("PROGN",673), T0, T1, v2index);
  return value0;
 }
}
/*      function definition for EXPAND-ROW-MAJOR-INDEX                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L16expand_row_major_index(cl_object v1a, cl_object v2indices, cl_object v3env)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(v2indices==ECL_NIL)) { goto L1; }
  value0 = L13expand_zero_dim_index_check(v1a, v3env);
  return value0;
L1:;
  T0 = ecl_cdr(v2indices);
  if (!(T0==ECL_NIL)) { goto L3; }
  T0 = ecl_car(v2indices);
  value0 = L15expand_vector_index_check(v1a, T0, v3env);
  return value0;
L3:;
  {
   cl_fixnum v4expected_rank;
   cl_object v5check;
   cl_object v6dims;
   cl_object v7dim_names;
   v4expected_rank = ecl_length(v2indices);
   v5check = ecl_function_dispatch(cl_env_copy,VV[65])(1, v3env) /*  POLICY-ARRAY-BOUNDS-CHECK */;
   {
    cl_object v8i;
    v8i = ecl_make_fixnum(0);
    {
     cl_object v9index;
     cl_object v10;
     v9index = ECL_NIL;
     {
      cl_object v11;
      v11 = v2indices;
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
L15:;
      if (!(ecl_endp(v10))) { goto L17; }
      goto L16;
L17:;
      v9index = _ecl_car(v10);
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
       T0 = v13;
      }
      T1 = cl_gentemp(1, VV[31]);
      T2 = cl_list(3, VV[32], v1a, v8i);
      T3 = cl_list(2, T1, T2);
      v12 = ecl_list1(T3);
      (ECL_CONS_CDR(T0)=v12,T0);
      v8i = ecl_one_plus(v8i);
      goto L15;
L16:;
      v6dims = ecl_cdr(v11);
      goto L7;
     }
    }
   }
L7:;
   {
    cl_object v8;
    v8 = (ECL_SYM("FIRST",373)->symbol.gfdef);
    {
     cl_object v9;
     cl_object v10;
     v9 = ECL_NIL;
     {
      cl_object v11;
      v11 = v6dims;
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
L42:;
      if (!(ecl_endp(v10))) { goto L44; }
      goto L43;
L44:;
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
       T0 = v13;
      }
      T1 = ecl_function_dispatch(cl_env_copy,v8)(1, v9);
      v12 = ecl_list1(T1);
      (ECL_CONS_CDR(T0)=v12,T0);
      goto L42;
L43:;
      v7dim_names = ecl_cdr(v11);
      goto L34;
     }
    }
   }
L34:;
   T0 = ecl_append(v6dims,VV[33]);
   T1 = cl_listX(4, ECL_SYM("TYPE",871), ECL_SYM("ARRAY-INDEX",1850), VV[34], v7dim_names);
   T2 = CONS(ECL_SYM("IGNORABLE",429),v7dim_names);
   T3 = cl_list(3, ECL_SYM("DECLARE",276), T1, T2);
   if (Null(ecl_function_dispatch(cl_env_copy,VV[62])(1, v3env) /*  POLICY-TYPE-ASSERTIONS */)) { goto L61; }
   T5 = cl_list(3, VV[24], v1a, ECL_SYM("ARRAY",98));
   T6 = cl_list(3, VV[25], v1a, ecl_make_fixnum(v4expected_rank));
   T4 = cl_list(2, T5, T6);
   goto L60;
L61:;
   T4 = ECL_NIL;
L60:;
   {
    cl_object v8i;
    v8i = ecl_make_fixnum(0);
    {
     cl_object v9l;
     cl_object v10;
     v9l = ECL_NIL;
     {
      cl_object v11;
      v11 = v2indices;
      if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v10 = v11;
     }
     {
      cl_object v11index;
      cl_object v12;
      v11index = ECL_NIL;
      {
       cl_object v13;
       v13 = v2indices;
       if (ecl_unlikely(!ECL_LISTP(v13))) FEtype_error_list(v13);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v12 = v13;
      }
      {
       cl_object v13dim_var;
       cl_object v14;
       v13dim_var = ECL_NIL;
       {
        cl_object v15;
        v15 = v7dim_names;
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
L79:;
        if (!(ecl_endp(v10))) { goto L81; }
        goto L80;
L81:;
        v9l = _ecl_car(v10);
        {
         cl_object v17;
         v17 = _ecl_cdr(v10);
         if (ecl_unlikely(!ECL_LISTP(v17))) FEtype_error_list(v17);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         v10 = v17;
        }
        if (!(ecl_endp(v12))) { goto L89; }
        goto L80;
L89:;
        v11index = _ecl_car(v12);
        {
         cl_object v17;
         v17 = _ecl_cdr(v12);
         if (ecl_unlikely(!ECL_LISTP(v17))) FEtype_error_list(v17);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         v12 = v17;
        }
        if (!(ecl_endp(v14))) { goto L97; }
        goto L80;
L97:;
        v13dim_var = _ecl_car(v14);
        {
         cl_object v17;
         v17 = _ecl_cdr(v14);
         if (ecl_unlikely(!ECL_LISTP(v17))) FEtype_error_list(v17);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         v14 = v17;
        }
        if (!(ecl_plusp(v8i))) { goto L105; }
        {
         cl_object v17;
         v17 = v16;
         if (ecl_unlikely(ECL_ATOM(v17))) FEtype_error_cons(v17);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         T6 = v17;
        }
        T7 = cl_list(3, ECL_SYM("*",20), VV[34], v13dim_var);
        T8 = cl_list(3, ECL_SYM("TRULY-THE",2039), ECL_SYM("ARRAY-INDEX",1850), T7);
        T9 = cl_list(3, ECL_SYM("SETF",752), VV[34], T8);
        v16 = ecl_list1(T9);
        (ECL_CONS_CDR(T6)=v16,T6);
L105:;
        {
         cl_object v17;
         v17 = v16;
         if (ecl_unlikely(ECL_ATOM(v17))) FEtype_error_cons(v17);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         T6 = v17;
        }
        T7 = cl_list(2, VV[35], v11index);
        T8 = ecl_list1(T7);
        if (Null(v5check)) { goto L118; }
        T9 = cl_list(4, VV[37], v1a, VV[35], v13dim_var);
        goto L116;
L118:;
        T9 = ECL_NIL;
        goto L116;
L116:;
        T10 = cl_list(5, ECL_SYM("LET",479), T8, VV[36], T9, VV[38]);
        v16 = ecl_list1(T10);
        (ECL_CONS_CDR(T6)=v16,T6);
        v8i = ecl_one_plus(v8i);
        goto L79;
L80:;
        T5 = ecl_cdr(v15);
        goto L63;
       }
      }
     }
    }
   }
L63:;
   T6 = cl_append(3, T4, T5, VV[39]);
   value0 = cl_listX(4, ECL_SYM("LET*",480), T0, T3, T6);
   return value0;
  }
 }
}
/*      local function CHECK-EXPECTED-RANK                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC17check_expected_rank(cl_object v1, cl_object v2)
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
   cl_object v4a;
   cl_object v5expected_rank;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[55])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4a = v6;
   }
   if (!(v3==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[55])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5expected_rank = v6;
   }
   if (Null(v3)) { goto L14; }
   ecl_function_dispatch(cl_env_copy,VV[67])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L14:;
   T0 = cl_list(2, v4a, v5expected_rank);
   value0 = cl_listX(3, ECL_SYM("C-INLINE",2063), T0, VV[41]);
   return value0;
  }
 }
}
/*      local function CHECK-INDEX-IN-BOUNDS                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC18check_index_in_bounds(cl_object v1, cl_object v2)
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
   cl_object v4array;
   cl_object v5index;
   cl_object v6limit;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[55])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v7;
    v7 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4array = v7;
   }
   if (!(v3==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[55])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v7;
    v7 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5index = v7;
   }
   if (!(v3==ECL_NIL)) { goto L15; }
   ecl_function_dispatch(cl_env_copy,VV[55])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L15:;
   {
    cl_object v7;
    v7 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v6limit = v7;
   }
   if (Null(v3)) { goto L20; }
   ecl_function_dispatch(cl_env_copy,VV[67])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L20:;
   T0 = cl_list(3, v4array, v5index, v6limit);
   value0 = cl_listX(3, ECL_SYM("C-INLINE",2063), T0, VV[42]);
   return value0;
  }
 }
}
/*      local function CHECK-VECTOR-IN-BOUNDS                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC19check_vector_in_bounds(cl_object v1, cl_object v2)
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
   cl_object v4vector;
   cl_object v5index;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[55])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4vector = v6;
   }
   if (!(v3==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[55])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5index = v6;
   }
   if (Null(v3)) { goto L14; }
   ecl_function_dispatch(cl_env_copy,VV[67])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L14:;
   T0 = cl_list(2, v4vector, v5index);
   value0 = cl_listX(3, ECL_SYM("C-INLINE",2063), T0, VV[43]);
   return value0;
  }
 }
}
/*      function definition for ARRAY-DIMENSION-ACCESSOR              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L20array_dimension_accessor(cl_object v1array, cl_object v2n)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_list1(v1array);
  {
   cl_object v3;
   v3 = VV[45];
   T2 = v3;
   {
    cl_fixnum v4;
    {
     cl_object v5;
     v5 = v2n;
     if (ecl_unlikely((ecl_fixnum(v5))>=(v3)->vector.dim))
           FEwrong_index(ECL_NIL,v3,-1,ecl_make_fixnum(ecl_fixnum(v5)),(v3)->vector.dim);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v4 = ecl_fixnum(v5);
    }
    T1 = ecl_aref_unsafe(T2,v4);
   }
  }
  value0 = cl_listX(3, ECL_SYM("C-INLINE",2063), T0, T1);
  return value0;
 }
}
/*      local function ARRAY-DIMENSION-FAST                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC21array_dimension_fast(cl_object v1, cl_object v2)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4array;
   cl_object v5n;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[55])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4array = v6;
   }
   if (!(v3==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[55])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5n = v6;
   }
   if (Null(v3)) { goto L14; }
   ecl_function_dispatch(cl_env_copy,VV[67])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L14:;
   {
    cl_fixnum v6;
    v6 = 0;
    if (!(ECL_FIXNUMP(v5n))) { goto L16; }
    v6 = ecl_fixnum(v5n);
    if (!((v6)<=(63))) { goto L16; }
    if (!((v6)>=(0))) { goto L16; }
   }
   value0 = L20array_dimension_accessor(v4array, v5n);
   return value0;
L16:;
   value0 = cl_error(2, VV[47], v5n);
   return value0;
  }
 }
}

#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/cmp/cmparray.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _ecluCDjgyZ7_uYa6lq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CMP;CMPARRAY.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_ecluCDjgyZ7_uYa6lq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  ecl_cmp_defun(VV[48]);                          /*  VALID-ARRAY-INDEX-P */
  ecl_cmp_defun(VV[49]);                          /*  GUESS-ARRAY-ELEMENT-TYPE */
  ecl_cmp_defun(VV[52]);                          /*  GUESS-ARRAY-DIMENSIONS-TYPE */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC4__lambda15,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_put_sysprop(ECL_SYM("MAKE-ARRAY",524), ECL_SYM("COMPILER-MACRO",240), T0);
 }
  (void)0; /* No entry created for EXPAND-VECTOR-PUSH */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC6__lambda25,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_put_sysprop(ECL_SYM("VECTOR-PUSH",902), ECL_SYM("COMPILER-MACRO",240), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC7__lambda28,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_put_sysprop(ECL_SYM("VECTOR-PUSH-EXTEND",903), ECL_SYM("COMPILER-MACRO",240), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC8__lambda31,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_put_sysprop(ECL_SYM("AREF",94), ECL_SYM("COMPILER-MACRO",240), T0);
 }
  ecl_cmp_defun(VV[59]);                          /*  EXPAND-AREF     */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC10__lambda35,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_put_sysprop(ECL_SYM("ASET",1042), ECL_SYM("COMPILER-MACRO",240), T0);
 }
  ecl_cmp_defun(VV[60]);                          /*  EXPAND-ASET     */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC12__lambda39,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_put_sysprop(ECL_SYM("ARRAY-ROW-MAJOR-INDEX",108), ECL_SYM("COMPILER-MACRO",240), T0);
 }
  ecl_cmp_defun(VV[61]);                          /*  EXPAND-ZERO-DIM-INDEX-CHECK */
  ecl_cmp_defun(VV[63]);                          /*  EXPAND-VECTOR-INDEX-CHECK */
  ecl_cmp_defun(VV[64]);                          /*  EXPAND-ROW-MAJOR-INDEX */
  ecl_cmp_defmacro(VV[66]);                       /*  CHECK-EXPECTED-RANK */
  ecl_cmp_defmacro(VV[68]);                       /*  CHECK-INDEX-IN-BOUNDS */
  ecl_cmp_defmacro(VV[69]);                       /*  CHECK-VECTOR-IN-BOUNDS */
  si_Xmake_constant(VV[44], VVtemp[1]);
  ecl_cmp_defun(VV[70]);                          /*  ARRAY-DIMENSION-ACCESSOR */
  ecl_cmp_defmacro(VV[71]);                       /*  ARRAY-DIMENSION-FAST */
}
