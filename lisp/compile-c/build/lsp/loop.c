/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:LSP;LOOP.LSP                                      */
#include <ecl/ecl-cmp.h>
#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/lsp/loop.eclh"
/*      local function LOOP-UNSAFE                                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC1loop_unsafe(cl_object v1, cl_object v2)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   v3 = ecl_cdr(v1);
   value0 = cl_listX(3, ECL_SYM("LOCALLY",492), VV[0], v3);
   return value0;
  }
 }
}
/*      local function WITH-LOOP-LIST-COLLECTION-HEAD                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC2with_loop_list_collection_head(cl_object v1, cl_object v2)
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
   cl_object v4;
   cl_object v5;
   cl_object v6head_var;
   cl_object v7tail_var;
   cl_object v8user_head_var;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[272])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v9;
    v9 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4 = v9;
   }
   v5 = v4;
   if (!(v5==ECL_NIL)) { goto L10; }
   ecl_function_dispatch(cl_env_copy,VV[272])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L10:;
   {
    cl_object v9;
    v9 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v6head_var = v9;
   }
   if (!(v5==ECL_NIL)) { goto L16; }
   ecl_function_dispatch(cl_env_copy,VV[272])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L16:;
   {
    cl_object v9;
    v9 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v7tail_var = v9;
   }
   if (Null(v5)) { goto L22; }
   {
    cl_object v9;
    v9 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v8user_head_var = v9;
    goto L21;
   }
L22:;
   v8user_head_var = ECL_NIL;
L21:;
   if (Null(v5)) { goto L27; }
   ecl_function_dispatch(cl_env_copy,VV[273])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L27:;
   {
    cl_object v9l;
    if (Null(v8user_head_var)) { goto L31; }
    T0 = cl_list(2, v8user_head_var, ECL_NIL);
    v9l = ecl_list1(T0);
    goto L29;
L31:;
    v9l = ECL_NIL;
    goto L29;
L29:;
    T0 = cl_list(2, v6head_var, VV[2]);
    T1 = cl_list(2, v7tail_var, v6head_var);
    T2 = cl_listX(3, T0, T1, v9l);
    value0 = cl_listX(3, ECL_SYM("LET*",480), T2, v3);
    return value0;
   }
  }
 }
}
/*      local function LOOP-COLLECT-RPLACD                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC4loop_collect_rplacd(cl_object v1, cl_object v2env)
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
   cl_object v4;
   cl_object v5;
   cl_object v6head_var;
   cl_object v7tail_var;
   cl_object v8user_head_var;
   cl_object v9form;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[272])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v10;
    v10 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4 = v10;
   }
   v5 = v4;
   if (!(v5==ECL_NIL)) { goto L10; }
   ecl_function_dispatch(cl_env_copy,VV[272])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L10:;
   {
    cl_object v10;
    v10 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v6head_var = v10;
   }
   if (!(v5==ECL_NIL)) { goto L16; }
   ecl_function_dispatch(cl_env_copy,VV[272])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L16:;
   {
    cl_object v10;
    v10 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v7tail_var = v10;
   }
   if (Null(v5)) { goto L22; }
   {
    cl_object v10;
    v10 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v8user_head_var = v10;
    goto L21;
   }
L22:;
   v8user_head_var = ECL_NIL;
L21:;
   if (!(v3==ECL_NIL)) { goto L28; }
   ecl_function_dispatch(cl_env_copy,VV[272])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L28:;
   {
    cl_object v10;
    v10 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v9form = v10;
   }
   if (Null(v3)) { goto L33; }
   ecl_function_dispatch(cl_env_copy,VV[273])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L33:;
   if (Null(v5)) { goto L35; }
   ecl_function_dispatch(cl_env_copy,VV[273])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L35:;
   v9form = cl_macroexpand(2, v9form, v2env);
   {
    cl_object v10ncdrs;
    v10ncdrs = ECL_NIL;
    if (!(ECL_CONSP(v9form))) { goto L40; }
    T0 = ecl_car(v9form);
    if (!((T0)==(ECL_SYM("LIST",483)))) { goto L42; }
    T0 = ecl_cdr(v9form);
    {
     cl_fixnum v11;
     v11 = ecl_length(T0);
     v10ncdrs = ecl_make_integer((v11)-1);
    }
    goto L40;
L42:;
    {
     cl_object v11;
     v11 = ecl_car(v9form);
     if (!((v11)==(ECL_SYM("LIST*",484)))) { goto L50; }
     goto L47;
     goto L48;
L50:;
     goto L48;
L48:;
     if (!((v11)==(ECL_SYM("CONS",253)))) { goto L40; }
     goto L45;
L47:;
    }
L45:;
    if (Null(ecl_cddr(v9form))) { goto L40; }
    {
     cl_object v11;
     T0 = ecl_last(v9form,1);
     v11 = ecl_car(T0);
     if (!((v11)==(ECL_NIL))) { goto L59; }
     goto L56;
     goto L57;
L59:;
     goto L57;
L57:;
     if (!(ecl_eql(v11,VV[7]))) { goto L40; }
     goto L53;
L56:;
    }
L53:;
    T0 = ecl_cdr(v9form);
    {
     cl_fixnum v11;
     v11 = ecl_length(T0);
     v10ncdrs = ecl_minus(ecl_make_fixnum(v11),ecl_make_fixnum(2));
    }
L40:;
    {
     cl_object v11answer;
     if (!(v10ncdrs==ECL_NIL)) { goto L64; }
     T0 = cl_list(2, ECL_SYM("CDR",200), v7tail_var);
     T1 = cl_list(3, ECL_SYM("SETF",752), T0, v9form);
     T2 = cl_list(2, ECL_SYM("CDR",200), v7tail_var);
     T3 = cl_list(2, ECL_SYM("LAST",457), T2);
     T4 = cl_list(3, ECL_SYM("SETQ",753), v7tail_var, T3);
     v11answer = cl_list(3, ECL_SYM("WHEN",907), T1, T4);
     goto L63;
L64:;
     if (!(ecl_lower(v10ncdrs,ecl_make_fixnum(0)))) { goto L66; }
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 1;
     return value0;
L66:;
     if (!(ecl_number_equalp(v10ncdrs,ecl_make_fixnum(0)))) { goto L68; }
     T0 = cl_list(3, ECL_SYM("SETQ",753), v7tail_var, v9form);
     v11answer = cl_list(3, ECL_SYM("RPLACD",735), v7tail_var, T0);
     goto L63;
L68:;
     T1 = cl_list(2, ECL_SYM("CDR",200), v7tail_var);
     T2 = cl_list(3, ECL_SYM("SETF",752), T1, v9form);
     T0 = LC3cdr_wrap(T2, v10ncdrs);
     v11answer = cl_list(3, ECL_SYM("SETQ",753), v7tail_var, T0);
L63:;
     if (Null(v8user_head_var)) { goto L71; }
     T0 = cl_list(2, ECL_SYM("CDR",200), v6head_var);
     T1 = cl_list(3, ECL_SYM("SETQ",753), v8user_head_var, T0);
     v11answer = cl_list(3, ECL_SYM("PROGN",673), v11answer, T1);
L71:;
     value0 = v11answer;
     cl_env_copy->nvalues = 1;
     return value0;
    }
   }
  }
 }
}
/*      local function CDR-WRAP                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC3cdr_wrap(cl_object v1form, cl_object v2n)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  cl_fixnum v3n;
  v3n = ecl_to_fixnum(v2n);
TTL:
  goto L3;
L2:;
  v1form = cl_list(2, ECL_SYM("CDDDDR",197), v1form);
  {
   cl_object v4;
   v4 = ecl_minus(ecl_make_fixnum(v3n),ecl_make_fixnum(4));
   {
    bool v5;
    v5 = ECL_FIXNUMP(v4);
    if (ecl_unlikely(!(v5)))
         FEwrong_type_argument(ECL_SYM("FIXNUM",374),v4);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
   }
   v3n = ecl_fixnum(v4);
  }
L3:;
  if ((v3n)<=(4)) { goto L11; }
  goto L2;
L11:;
  if (!((v3n)==(1))) { goto L15; }
  T0 = ECL_SYM("CDR",200);
  goto L14;
L15:;
  if (!((v3n)==(2))) { goto L17; }
  T0 = ECL_SYM("CDDR",199);
  goto L14;
L17:;
  if (!((v3n)==(3))) { goto L19; }
  T0 = ECL_SYM("CDDDR",198);
  goto L14;
L19:;
  if (!((v3n)==(4))) { goto L21; }
  T0 = ECL_SYM("CDDDDR",197);
  goto L14;
L21:;
  T0 = ECL_NIL;
L14:;
  v1form = cl_list(2, T0, v1form);
  value0 = v1form;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function LOOP-COLLECT-ANSWER                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC5loop_collect_answer(cl_object v1, cl_object v2)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4head_var;
   cl_object v5user_head_var;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[272])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4head_var = v6;
   }
   if (Null(v3)) { goto L9; }
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5user_head_var = v6;
    goto L8;
   }
L9:;
   v5user_head_var = ECL_NIL;
L8:;
   if (Null(v3)) { goto L14; }
   ecl_function_dispatch(cl_env_copy,VV[273])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L14:;
   value0 = v5user_head_var;
   if ((value0)!=ECL_NIL) { goto L17; }
   value0 = cl_list(2, ECL_SYM("CDR",200), v4head_var);
   return value0;
L17:;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for MAKE-LOOP-MINIMAX-INTERNAL            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L6make_loop_minimax_internal(cl_narg narg, ...)
{
 cl_object T0;
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
  cl_object v6;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  {
   cl_object keyvars[12];
   cl_parse_key(args,6,L6make_loop_minimax_internalkeys,keyvars,NULL,FALSE);
   ecl_va_end(args);
   v1 = keyvars[0];
   v2 = keyvars[1];
   v3 = keyvars[2];
   v4 = keyvars[3];
   v5 = keyvars[4];
   v6 = keyvars[5];
  }
  T0 = cl_list(6, v1, v2, v3, v4, v5, v6);
  value0 = cl_make_array(5, VV[13], ECL_SYM("ELEMENT-TYPE",1246), ECL_T, ECL_SYM("INITIAL-CONTENTS",1278), T0);
  return value0;
 }
}
/*      function definition for MAKE-LOOP-MINIMAX                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L7make_loop_minimax(cl_object v1answer_variable, cl_object v2type)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3infinity_data;
   {
    cl_object v4;
    v4 = ecl_symbol_value(VV[15]);
    {
     cl_object v5;
     v5 = v4;
     goto L7;
L6:;
     {
      cl_object v6;
      cl_object v7;
      {
       cl_object v8;
       v8 = v5;
       if (ecl_unlikely(ECL_ATOM(v8))) FEtype_error_cons(v8);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v6 = v8;
      }
      v7 = ECL_CONS_CAR(v6);
      if (Null(v7)) { goto L9; }
      {
       cl_object v8;
       {
        cl_object v9;
        v9 = v7;
        if (ecl_unlikely(ECL_ATOM(v9))) FEtype_error_cons(v9);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        T1 = v9;
       }
       v8 = ECL_CONS_CAR(T1);
       if (Null(cl_subtypep(2, v2type, v8))) { goto L9; }
       T0 = v7;
       goto L2;
      }
     }
L9:;
     v5 = ECL_CONS_CDR(v5);
L7:;
     if (v5==ECL_NIL) { goto L22; }
     goto L6;
L22:;
     T0 = ECL_NIL;
    }
   }
L2:;
   v3infinity_data = ecl_cdr(T0);
   T0 = cl_gensym(1, VV[18]);
   if ((v3infinity_data)!=ECL_NIL) { goto L26; }
   T1 = cl_gensym(1, VV[20]);
   goto L24;
L26:;
   T1 = ECL_NIL;
   goto L24;
L24:;
   value0 = L6make_loop_minimax_internal(12, VV[16], v1answer_variable, ECL_SYM("TYPE",1346), v2type, VV[17], T0, VV[19], T1, VV[21], ECL_NIL, VV[22], v3infinity_data);
   return value0;
  }
 }
}
/*      function definition for LOOP-NOTE-MINIMAX-OPERATION           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L8loop_note_minimax_operation(cl_object v1operation, cl_object v2minimax)
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
   T0 = ecl_function_dispatch(cl_env_copy,VV[284])(1, v2minimax) /*  LOOP-MINIMAX-OPERATIONS */;
   v3 = cl_adjoin(2, v1operation, T0);
   ecl_elt_set(v2minimax,4,v3);
  }
  T0 = ecl_function_dispatch(cl_env_copy,VV[284])(1, v2minimax) /*  LOOP-MINIMAX-OPERATIONS */;
  if (Null(ecl_cdr(T0))) { goto L3; }
  if ((ecl_function_dispatch(cl_env_copy,VV[285])(1, v2minimax) /*  LOOP-MINIMAX-FLAG-VARIABLE */)!=ECL_NIL) { goto L3; }
  {
   cl_object v3;
   v3 = cl_gensym(1, VV[20]);
   ecl_elt_set(v2minimax,3,v3);
  }
L3:;
  value0 = v1operation;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function WITH-MINIMAX-VALUE                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC9with_minimax_value(cl_object v1, cl_object v2)
{
 cl_object T0, T1, T2, T3, T4, T5;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4lm;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[272])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v5;
    v5 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4lm = v5;
   }
   {
    cl_object v5;
    cl_object v6;
    cl_object v7;
    cl_object v8;
    cl_object v9;
    cl_object v10;
    cl_object v11;
    T0 = ecl_function_dispatch(cl_env_copy,VV[287])(1, v4lm) /*  LOOP-MINIMAX-TYPE */;
    v5 = L47loop_typed_init(T0);
    T0 = ecl_function_dispatch(cl_env_copy,VV[284])(1, v4lm) /*  LOOP-MINIMAX-OPERATIONS */;
    v6 = ecl_car(T0);
    v7 = ecl_function_dispatch(cl_env_copy,VV[288])(1, v4lm) /*  LOOP-MINIMAX-INFINITY-DATA */;
    v8 = ecl_function_dispatch(cl_env_copy,VV[289])(1, v4lm) /*  LOOP-MINIMAX-ANSWER-VARIABLE */;
    v9 = ecl_function_dispatch(cl_env_copy,VV[290])(1, v4lm) /*  LOOP-MINIMAX-TEMP-VARIABLE */;
    v10 = ecl_function_dispatch(cl_env_copy,VV[285])(1, v4lm) /*  LOOP-MINIMAX-FLAG-VARIABLE */;
    v11 = ecl_function_dispatch(cl_env_copy,VV[287])(1, v4lm) /*  LOOP-MINIMAX-TYPE */;
    if (Null(v10)) { goto L15; }
    T0 = cl_list(2, v8, v5);
    T1 = cl_list(2, v9, v5);
    T2 = cl_list(2, v10, ECL_NIL);
    T3 = cl_list(3, T0, T1, T2);
    T4 = cl_list(4, ECL_SYM("TYPE",871), v11, v8, v9);
    T5 = cl_list(2, ECL_SYM("DECLARE",276), T4);
    value0 = cl_listX(4, ECL_SYM("LET",479), T3, T5, v3);
    return value0;
L15:;
    if (!((v6)==(ECL_SYM("MIN",559)))) { goto L18; }
    T0 = ecl_car(v7);
    goto L17;
L18:;
    T0 = ecl_cadr(v7);
L17:;
    T1 = cl_list(2, v8, T0);
    T2 = cl_list(2, v9, v5);
    T3 = cl_list(2, T1, T2);
    T4 = cl_list(4, ECL_SYM("TYPE",871), v11, v8, v9);
    T5 = cl_list(2, ECL_SYM("DECLARE",276), T4);
    value0 = cl_listX(4, ECL_SYM("LET",479), T3, T5, v3);
    return value0;
   }
  }
 }
}
/*      local function LOOP-ACCUMULATE-MINIMAX-VALUE                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC10loop_accumulate_minimax_value(cl_object v1, cl_object v2)
{
 cl_object T0, T1, T2, T3, T4, T5, T6;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4lm;
   cl_object v5operation;
   cl_object v6form;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[272])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v7;
    v7 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4lm = v7;
   }
   if (!(v3==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[272])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v7;
    v7 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5operation = v7;
   }
   if (!(v3==ECL_NIL)) { goto L15; }
   ecl_function_dispatch(cl_env_copy,VV[272])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L15:;
   {
    cl_object v7;
    v7 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v6form = v7;
   }
   if (Null(v3)) { goto L20; }
   ecl_function_dispatch(cl_env_copy,VV[273])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L20:;
   {
    cl_object v7answer_var;
    cl_object v8temp_var;
    cl_object v9flag_var;
    cl_object v10test;
    v7answer_var = ecl_function_dispatch(cl_env_copy,VV[289])(1, v4lm) /*  LOOP-MINIMAX-ANSWER-VARIABLE */;
    v8temp_var = ecl_function_dispatch(cl_env_copy,VV[290])(1, v4lm) /*  LOOP-MINIMAX-TEMP-VARIABLE */;
    v9flag_var = ecl_function_dispatch(cl_env_copy,VV[285])(1, v4lm) /*  LOOP-MINIMAX-FLAG-VARIABLE */;
    if (!((v5operation)==(ECL_SYM("MIN",559)))) { goto L27; }
    T0 = ECL_SYM("<",74);
    goto L26;
L27:;
    if (!((v5operation)==(ECL_SYM("MAX",553)))) { goto L29; }
    T0 = ECL_SYM(">",77);
    goto L26;
L29:;
    T0 = si_ecase_error(v5operation, VV[24]);
L26:;
    v10test = cl_list(3, T0, v8temp_var, v7answer_var);
    T0 = cl_list(3, ECL_SYM("SETQ",753), v8temp_var, v6form);
    if (Null(v9flag_var)) { goto L32; }
    T2 = cl_list(2, ECL_SYM("NOT",586), v9flag_var);
    T1 = cl_list(3, ECL_SYM("OR",616), T2, v10test);
    goto L31;
L32:;
    T1 = v10test;
L31:;
    if (Null(v9flag_var)) { goto L36; }
    T2 = cl_list(2, v9flag_var, ECL_T);
    goto L34;
L36:;
    T2 = ECL_NIL;
    goto L34;
L34:;
    T3 = cl_list(2, v7answer_var, v8temp_var);
    T4 = ecl_append(T2,T3);
    T5 = CONS(ECL_SYM("SETQ",753),T4);
    T6 = cl_list(3, ECL_SYM("WHEN",907), T1, T5);
    value0 = cl_list(3, ECL_SYM("PROGN",673), T0, T6);
    return value0;
   }
  }
 }
}
/*      function definition for LOOP-TEQUAL                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L11loop_tequal(cl_object v1x1, cl_object v2x2)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ECL_SYMBOLP(v1x1))) { goto L2; }
  value0 = cl_stringE(2, v1x1, v2x2);
  return value0;
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for LOOP-TASSOC                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L12loop_tassoc(cl_object v1kwd, cl_object v2alist)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ECL_SYMBOLP(v1kwd))) { goto L2; }
  {
   cl_object v3;
   v3 = v2alist;
   goto L7;
L6:;
   {
    cl_object v4;
    cl_object v5;
    {
     cl_object v6;
     v6 = v3;
     if (ecl_unlikely(ECL_ATOM(v6))) FEtype_error_cons(v6);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v4 = v6;
    }
    v5 = ECL_CONS_CAR(v4);
    if (Null(v5)) { goto L9; }
    {
     cl_object v6;
     {
      cl_object v7;
      v7 = v5;
      if (ecl_unlikely(ECL_ATOM(v7))) FEtype_error_cons(v7);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      T0 = v7;
     }
     v6 = ECL_CONS_CAR(T0);
     if (Null(cl_stringE(2, v1kwd, v6))) { goto L9; }
     value0 = v5;
     cl_env_copy->nvalues = 1;
     return value0;
    }
   }
L9:;
   v3 = ECL_CONS_CDR(v3);
L7:;
   if (v3==ECL_NIL) { goto L22; }
   goto L6;
L22:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for LOOP-TMEMBER                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L13loop_tmember(cl_object v1kwd, cl_object v2list)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ECL_SYMBOLP(v1kwd))) { goto L2; }
  {
   cl_object v3;
   v3 = v2list;
   goto L7;
L6:;
   {
    cl_object v4;
    cl_object v5;
    {
     cl_object v6;
     v6 = v3;
     if (ecl_unlikely(ECL_ATOM(v6))) FEtype_error_cons(v6);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v4 = v6;
    }
    v5 = ECL_CONS_CAR(v4);
    if (Null(cl_stringE(2, v1kwd, v5))) { goto L9; }
    value0 = v4;
    cl_env_copy->nvalues = 1;
    return value0;
   }
L9:;
   v3 = ECL_CONS_CDR(v3);
L7:;
   if (v3==ECL_NIL) { goto L17; }
   goto L6;
L17:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for LOOP-LOOKUP-KEYWORD                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L14loop_lookup_keyword(cl_object v1loop_token, cl_object v2table)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ECL_SYMBOLP(v1loop_token))) { goto L2; }
  T0 = ecl_symbol_name(v1loop_token);
  value0 = ecl_gethash_safe(T0,v2table,ECL_NIL);
  cl_env_copy->nvalues = 1;
  return value0;
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function LOOP-STORE-TABLE-DATA                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC15loop_store_table_data(cl_object v1, cl_object v2)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4symbol;
   cl_object v5table;
   cl_object v6datum;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[272])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v7;
    v7 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4symbol = v7;
   }
   if (!(v3==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[272])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v7;
    v7 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5table = v7;
   }
   if (!(v3==ECL_NIL)) { goto L15; }
   ecl_function_dispatch(cl_env_copy,VV[272])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L15:;
   {
    cl_object v7;
    v7 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v6datum = v7;
   }
   if (Null(v3)) { goto L20; }
   ecl_function_dispatch(cl_env_copy,VV[273])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L20:;
   T0 = cl_list(2, ECL_SYM("SYMBOL-NAME",845), v4symbol);
   T1 = cl_list(3, ECL_SYM("GETHASH",415), T0, v5table);
   value0 = cl_list(3, ECL_SYM("SETF",752), T1, v6datum);
   return value0;
  }
 }
}
/*      function definition for MAKE-LOOP-UNIVERSE                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L16make_loop_universe(cl_narg narg, ...)
{
 cl_object T0;
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
  cl_object v6;
  cl_object v7;
  cl_object v8;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  {
   cl_object keyvars[16];
   cl_parse_key(args,8,L16make_loop_universekeys,keyvars,NULL,FALSE);
   ecl_va_end(args);
   v1 = keyvars[0];
   v2 = keyvars[1];
   v3 = keyvars[2];
   v4 = keyvars[3];
   v5 = keyvars[4];
   v6 = keyvars[5];
   v7 = keyvars[6];
   v8 = keyvars[7];
  }
  T0 = cl_list(8, v1, v2, v3, v4, v5, v6, v7, v8);
  value0 = cl_make_array(5, VV[29], ECL_SYM("ELEMENT-TYPE",1246), ECL_T, ECL_SYM("INITIAL-CONTENTS",1278), T0);
  return value0;
 }
}
/*      function definition for MAKE-STANDARD-LOOP-UNIVERSE           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L18make_standard_loop_universe(cl_narg narg, ...)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  cl_object v1keywords;
  cl_object v2for_keywords;
  cl_object v3iteration_keywords;
  cl_object v4path_keywords;
  cl_object v5type_keywords;
  cl_object v6type_symbols;
  cl_object v7ansi;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  {
   cl_object keyvars[14];
   cl_parse_key(args,7,L18make_standard_loop_universekeys,keyvars,NULL,FALSE);
   ecl_va_end(args);
   v1keywords = keyvars[0];
   v2for_keywords = keyvars[1];
   v3iteration_keywords = keyvars[2];
   v4path_keywords = keyvars[3];
   v5type_keywords = keyvars[4];
   v6type_symbols = keyvars[5];
   v7ansi = keyvars[6];
  }
  T0 = LC17maketable(v1keywords);
  T1 = LC17maketable(v2for_keywords);
  T2 = LC17maketable(v3iteration_keywords);
  T3 = LC17maketable(v4path_keywords);
  {
   bool v8;
   v8 = v7ansi==ECL_NIL;
   T4 = (v8)?ECL_NIL:ECL_T;
  }
  T5 = LC17maketable(v5type_keywords);
  {
   cl_fixnum v8size;
   cl_object v9ht;
   v8size = ecl_length(v6type_symbols);
   {
    cl_fixnum v10;
    if (!((v8size)<(10))) { goto L11; }
    v10 = 10;
    goto L10;
L11:;
    v10 = v8size;
L10:;
    T7 = (ECL_SYM("EQ",335)->symbol.gfdef);
    v9ht = cl_make_hash_table(4, ECL_SYM("SIZE",1335), ecl_make_fixnum(v10), ECL_SYM("TEST",1343), T7);
   }
   {
    cl_object v10;
    v10 = v6type_symbols;
    goto L18;
L17:;
    {
     cl_object v11x;
     v11x = ecl_car(v10);
     if (!(ECL_ATOM(v11x))) { goto L23; }
     si_hash_set(v11x, v9ht, v11x);
     goto L22;
L23:;
     T7 = ecl_car(v11x);
     T8 = ecl_cadr(v11x);
     si_hash_set(T7, v9ht, T8);
L22:;
    }
    v10 = ecl_cdr(v10);
L18:;
    if (Null(v10)) { goto L27; }
    goto L17;
L27:;
   }
   T6 = v9ht;
  }
  value0 = L16make_loop_universe(16, VV[32], T0, VV[33], T1, VV[34], T2, VV[35], T3, VV[36], v7ansi, VV[37], T4, VV[38], T5, VV[39], T6);
  return value0;
 }
}
/*      local function MAKETABLE                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC17maketable(cl_object v1entries)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_fixnum v2size;
   cl_object v3ht;
   v2size = ecl_length(v1entries);
   {
    cl_fixnum v4;
    if (!((v2size)<(10))) { goto L4; }
    v4 = 10;
    goto L3;
L4:;
    v4 = v2size;
L3:;
    T0 = (ECL_SYM("EQUAL",337)->symbol.gfdef);
    v3ht = cl_make_hash_table(4, ECL_SYM("SIZE",1335), ecl_make_fixnum(v4), ECL_SYM("TEST",1343), T0);
   }
   {
    cl_object v4;
    v4 = v1entries;
    goto L11;
L10:;
    {
     cl_object v5x;
     v5x = ecl_car(v4);
     T0 = ecl_car(v5x);
     T1 = ecl_symbol_name(T0);
     T2 = ecl_cadr(v5x);
     si_hash_set(T1, v3ht, T2);
    }
    v4 = ecl_cdr(v4);
L11:;
    if (Null(v4)) { goto L18; }
    goto L10;
L18:;
   }
   value0 = v3ht;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for LOOP-MAKE-PSETQ                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L19loop_make_psetq(cl_object v1frobs)
{
 cl_object T0, T1, T2, T3, T4;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(v1frobs)) { goto L2; }
  T0 = ecl_car(v1frobs);
  T2 = ecl_cddr(v1frobs);
  if (!(T2==ECL_NIL)) { goto L5; }
  T1 = ecl_cadr(v1frobs);
  goto L4;
L5:;
  T2 = ecl_cadr(v1frobs);
  T3 = ecl_cddr(v1frobs);
  T4 = L19loop_make_psetq(T3);
  T1 = cl_list(3, ECL_SYM("PROG1",671), T2, T4);
L4:;
  T2 = cl_list(2, T0, T1);
  value0 = L20loop_make_desetq(T2);
  return value0;
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for LOOP-MAKE-DESETQ                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L20loop_make_desetq(cl_object v1var_val_pairs)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(v1var_val_pairs==ECL_NIL)) { goto L1; }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  if (Null(ecl_symbol_value(VV[40]))) { goto L4; }
  T0 = ecl_cadr(ecl_symbol_value(VV[40]));
  goto L3;
L4:;
  T0 = VV[41];
L3:;
  value0 = CONS(T0,v1var_val_pairs);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function LOOP-REALLY-DESETQ                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC24loop_really_desetq(cl_object v1, cl_object v2env)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 volatile struct ecl_cclosure aux_closure;
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  env0 = ECL_NIL;
  CLV0 = env0 = CONS(v2env,env0);                 /*  ENV             */
  {
   cl_object v3;
   cl_object v4var_val_pairs;
   v3 = ecl_cdr(v1);
   v4var_val_pairs = v3;
   {
    cl_object v5actions;
    v5actions = ECL_NIL;
    goto L6;
L5:;
    {
     cl_object v6;
     v6 = v4var_val_pairs;
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
      v4var_val_pairs = v7;
      v6 = ECL_CONS_CAR(v6);
     }
L16:;
     T1 = v6;
    }
    {
     cl_object v6;
     v6 = v4var_val_pairs;
     {
      cl_object v7;
      v7 = v6;
      if (ecl_unlikely(!ECL_LISTP(v7))) FEtype_error_list(v7);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
     }
     if (Null(v6)) { goto L27; }
     {
      cl_object v7;
      v7 = ECL_CONS_CDR(v6);
      v4var_val_pairs = v7;
      v6 = ECL_CONS_CAR(v6);
     }
L27:;
     T2 = v6;
    }
    T0 = (aux_closure.env=env0,cl_env_copy->function=(cl_object)&aux_closure,LC23loop_desetq_internal(2, T1, T2));
    v5actions = cl_revappend(T0, v5actions);
L6:;
    if (v4var_val_pairs==ECL_NIL) { goto L33; }
    goto L5;
L33:;
    T0 = ecl_cdr(v5actions);
    if (!(T0==ECL_NIL)) { goto L35; }
    value0 = ecl_car(v5actions);
    cl_env_copy->nvalues = 1;
    return value0;
L35:;
    T0 = cl_nreverse(v5actions);
    value0 = CONS(ECL_SYM("PROGN",673),T0);
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      closure LOOP-DESETQ-INTERNAL                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC23loop_desetq_internal(cl_narg narg, cl_object v1var, cl_object v2val, ...)
{
 cl_object T0, T1, T2, T3, T4;
 volatile struct ecl_cclosure aux_closure;
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV0 = env0;                                     /*  ENV             */
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>3)) FEwrong_num_arguments_anonym();
 {
  cl_object v3temp;
  va_list args; va_start(args,v2val);
  {
   int i = 2;
   if (i >= narg) {
    v3temp = ECL_NIL;
   } else {
    i++;
    v3temp = va_arg(args,cl_object);
   }
  }
  va_end(args);
  if (!(ECL_CONSP(v2val))) { goto L2; }
  T0 = ecl_car(v2val);
  if (!((T0)==(VV[1]))) { goto L2; }
  {
   cl_object v4forms;
   v4forms = ecl_cdr(v2val);
   if (Null(ecl_cdr(v4forms))) { goto L8; }
   v4forms = CONS(ECL_SYM("PROGN",673),v4forms);
   goto L7;
L8:;
   v4forms = ecl_car(v4forms);
L7:;
   T0 = (aux_closure.env=env0,cl_env_copy->function=(cl_object)&aux_closure,LC23loop_desetq_internal(2, v1var, v4forms));
   T1 = CONS(VV[1],T0);
   value0 = ecl_list1(T1);
   cl_env_copy->nvalues = 1;
   return value0;
  }
L2:;
  if (!(v1var==ECL_NIL)) { goto L11; }
  if (!(ECL_CONSP(v2val))) { goto L13; }
  T0 = ecl_car(v2val);
  if (!((T0)==(ECL_SYM("PROG1",671)))) { goto L15; }
  {
   cl_object v4;
   {
    cl_object v5;
    v5 = ecl_make_cclosure_va((cl_objectfn)LC22__lambda179,env0,Cblock,1);
    v4 = v5;
   }
   {
    cl_object v5;
    cl_object v6;
    cl_object v7;
    v5 = ecl_cdr(v2val);
    v6 = ECL_NIL;
    {
     cl_object v8;
     v8 = v5;
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
L25:;
     if (!(ecl_endp(v7))) { goto L27; }
     goto L26;
L27:;
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
      v10 = ecl_function_dispatch(cl_env_copy,v4)(1, v6);
      {
       cl_object v11;
       v11 = v9;
       if (ecl_unlikely(ECL_ATOM(v11))) FEtype_error_cons(v11);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       T0 = v11;
      }
      (ECL_CONS_CDR(T0)=v10,T0);
      if (Null(v10)) { goto L35; }
     }
     T0 = ecl_cdr(v9);
     v9 = ecl_last(T0,1);
L35:;
     goto L25;
L26:;
     value0 = ecl_cdr(v8);
     cl_env_copy->nvalues = 1;
     return value0;
    }
   }
  }
L15:;
  value0 = ecl_list1(v2val);
  cl_env_copy->nvalues = 1;
  return value0;
L13:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L11:;
  if (!(ECL_CONSP(v1var))) { goto L45; }
  {
   cl_object v10car;
   cl_object v11cdr;
   cl_object v12car_non_null;
   cl_object v13cdr_non_null;
   v10car = ecl_car(v1var);
   v11cdr = ecl_cdr(v1var);
   v12car_non_null = LC21find_non_null(v10car);
   v13cdr_non_null = LC21find_non_null(v11cdr);
   if ((v12car_non_null)!=ECL_NIL) { goto L53; }
   if (Null(v13cdr_non_null)) { goto L51; }
   goto L52;
L53:;
L52:;
   if (Null(v13cdr_non_null)) { goto L55; }
   {
    cl_object v14temp;
    cl_object v15body;
    value0 = v3temp;
    if ((value0)!=ECL_NIL) { goto L59; }
    v14temp = ecl_symbol_value(VV[42]);
    goto L57;
L59:;
    v14temp = value0;
    goto L57;
L57:;
    T1 = cl_list(2, ECL_SYM("CAR",182), v14temp);
    T0 = (aux_closure.env=env0,cl_env_copy->function=(cl_object)&aux_closure,LC23loop_desetq_internal(2, v10car, T1));
    T1 = cl_list(2, ECL_SYM("CDR",200), v14temp);
    T2 = cl_list(3, ECL_SYM("SETQ",753), v14temp, T1);
    T3 = (aux_closure.env=env0,cl_env_copy->function=(cl_object)&aux_closure,LC23loop_desetq_internal(3, v11cdr, v14temp, v14temp));
    T4 = CONS(T2,T3);
    v15body = ecl_append(T0,T4);
    if (Null(v3temp)) { goto L64; }
    if ((v14temp)==(v2val)) { goto L67; }
    T1 = cl_list(3, ECL_SYM("SETQ",753), v14temp, v2val);
    T0 = ecl_list1(T1);
    goto L66;
L67:;
    T0 = ECL_NIL;
L66:;
    value0 = ecl_append(T0,v15body);
    cl_env_copy->nvalues = 1;
    return value0;
L64:;
    T0 = cl_list(2, v14temp, v2val);
    T1 = ecl_list1(T0);
    T2 = cl_listX(3, ECL_SYM("LET",479), T1, v15body);
    value0 = ecl_list1(T2);
    cl_env_copy->nvalues = 1;
    return value0;
   }
L55:;
   T0 = cl_list(2, ECL_SYM("CAR",182), v2val);
   value0 = (aux_closure.env=env0,cl_env_copy->function=(cl_object)&aux_closure,LC23loop_desetq_internal(3, v10car, T0, v3temp));
   return value0;
L51:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
L45:;
  if ((v1var)==(v2val)) { goto L69; }
  T0 = cl_list(3, ECL_SYM("SETQ",753), v1var, v2val);
  value0 = ecl_list1(T0);
  cl_env_copy->nvalues = 1;
  return value0;
L69:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
 }
}
/*      local function FIND-NON-NULL                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC21find_non_null(cl_object v1var)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2tail;
   v2tail = v1var;
   goto L4;
L3:;
   {
    cl_object v3;
    v3 = v2tail;
    {
     cl_object v4;
     v4 = v3;
     if (ecl_unlikely(!ECL_LISTP(v4))) FEtype_error_list(v4);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
    }
    if (Null(v3)) { goto L13; }
    {
     cl_object v4;
     v4 = ECL_CONS_CDR(v3);
     v2tail = v4;
     v3 = ECL_CONS_CAR(v3);
    }
L13:;
    T0 = v3;
   }
   if (Null(LC21find_non_null(T0))) { goto L6; }
   value0 = ECL_T;
   cl_env_copy->nvalues = 1;
   return value0;
L6:;
L4:;
   if (!(ECL_CONSP(v2tail))) { goto L19; }
   goto L3;
L19:;
   value0 = v2tail;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      closure LAMBDA179                                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC22__lambda179(cl_narg narg, cl_object v1x, ...)
{
 cl_object T0;
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV0 = env0;                                     /*  ENV             */
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=1)) FEwrong_num_arguments_anonym();
 {
TTL:
  if (!(ECL_CONSP(v1x))) { goto L2; }
  T0 = ecl_car(v1x);
  if (!((T0)==(ECL_SYM("CAR",182)))) { goto L5; }
  T0 = ecl_cadr(v1x);
  if (!(ECL_SYMBOLP(T0))) { goto L5; }
  v1x = cl_macroexpand(2, v1x, ECL_CONS_CAR(CLV0));
  if (ECL_SYMBOLP(v1x)) { goto L2; }
  goto L4;
L5:;
L4:;
  value0 = CONS(v1x,ECL_NIL);
  cl_env_copy->nvalues = 1;
  return value0;
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
 }
}
/*      function definition for LOOP-CONSTANT-FOLD-IF-POSSIBLE        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L25loop_constant_fold_if_possible(cl_narg narg, cl_object v1form, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2expected_type;
  va_list args; va_start(args,v1form);
  {
   int i = 1;
   if (i >= narg) {
    v2expected_type = ECL_NIL;
   } else {
    i++;
    v2expected_type = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v3constantp;
   cl_object v4constant_value;
   v3constantp = ECL_NIL;
   v4constant_value = ECL_NIL;
   v3constantp = cl_constantp(1, v1form);
   if (Null(v3constantp)) { goto L4; }
   v4constant_value = cl_eval(v1form);
L4:;
   if (Null(v3constantp)) { goto L8; }
   if (Null(v2expected_type)) { goto L8; }
   if ((cl_typep(2, v4constant_value, v2expected_type))!=ECL_NIL) { goto L8; }
   L29loop_warn(4, VV[68], v1form, v4constant_value, v2expected_type);
   v3constantp = ECL_NIL;
   v4constant_value = ECL_NIL;
L8:;
   cl_env_copy->nvalues = 3;
   cl_env_copy->values[2] = v4constant_value;
   cl_env_copy->values[1] = v3constantp;
   cl_env_copy->values[0] = v1form;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LOOP-BODY                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC26loop_body(cl_object v1, cl_object v2env)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4prologue;
   cl_object v5before_loop;
   cl_object v6main_body;
   cl_object v7after_loop;
   cl_object v8epilogue;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[272])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v9;
    v9 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4prologue = v9;
   }
   if (!(v3==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[272])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v9;
    v9 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5before_loop = v9;
   }
   if (!(v3==ECL_NIL)) { goto L15; }
   ecl_function_dispatch(cl_env_copy,VV[272])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L15:;
   {
    cl_object v9;
    v9 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v6main_body = v9;
   }
   if (!(v3==ECL_NIL)) { goto L21; }
   ecl_function_dispatch(cl_env_copy,VV[272])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L21:;
   {
    cl_object v9;
    v9 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v7after_loop = v9;
   }
   if (!(v3==ECL_NIL)) { goto L27; }
   ecl_function_dispatch(cl_env_copy,VV[272])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L27:;
   {
    cl_object v9;
    v9 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v8epilogue = v9;
   }
   if (Null(v3)) { goto L32; }
   ecl_function_dispatch(cl_env_copy,VV[273])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L32:;
   {
    cl_fixnum v9;
    v9 = ecl_length(v5before_loop);
    {
     cl_fixnum v10;
     v10 = ecl_length(v7after_loop);
     if ((v9)==(v10)) { goto L34; }
    }
   }
   cl_error(1, VV[71]);
L34:;
   {
    cl_object v9;
    cl_object v10;
    cl_object v11rbefore;
    cl_object v12rafter;
    v9 = cl_reverse(v5before_loop);
    v10 = cl_reverse(v7after_loop);
    v11rbefore = v9;
    v12rafter = v10;
    goto L43;
L42:;
    {
     cl_object v13;
     v13 = v11rbefore;
     {
      cl_object v14;
      v14 = v13;
      if (ecl_unlikely(!ECL_LISTP(v14))) FEtype_error_list(v14);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
     }
     if (Null(v13)) { goto L52; }
     {
      cl_object v14;
      v14 = ECL_CONS_CDR(v13);
      v11rbefore = v14;
      v13 = ECL_CONS_CAR(v13);
     }
L52:;
     T0 = v13;
    }
    v6main_body = CONS(T0,v6main_body);
    {
     cl_object v13;
     v13 = v12rafter;
     {
      cl_object v14;
      v14 = v13;
      if (ecl_unlikely(!ECL_LISTP(v14))) FEtype_error_list(v14);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
     }
     if (Null(v13)) { goto L63; }
     {
      cl_object v14;
      v14 = ECL_CONS_CDR(v13);
      v12rafter = v14;
      v13 = ECL_CONS_CAR(v13);
     }
L63:;
    }
L43:;
    if (v11rbefore==ECL_NIL) { goto L69; }
    T0 = ecl_car(v11rbefore);
    T1 = ecl_car(v12rafter);
    if (!(ecl_equal(T0,T1))) { goto L69; }
    goto L42;
L69:;
    T0 = cl_remove(2, ECL_NIL, v4prologue);
    T1 = cl_remove(2, ECL_NIL, v11rbefore);
    T2 = cl_nreverse(T1);
    T3 = cl_remove(2, ECL_NIL, v6main_body);
    T4 = cl_remove(2, ECL_NIL, v12rafter);
    T5 = cl_nreverse(T4);
    T6 = cl_remove(2, ECL_NIL, v8epilogue);
    T7 = cl_listX(3, VV[73], VV[74], T6);
    T8 = cl_append(3, T3, T5, T7);
    T9 = CONS(VV[72],T8);
    T10 = cl_append(3, T0, T2, T9);
    value0 = CONS(ECL_SYM("TAGBODY",852),T10);
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      function definition for LOOP-CONTEXT                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L27loop_context()
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v1;
   cl_object v2l;
   cl_object v3new;
   v1 = ecl_symbol_value(VV[45]);
   v2l = v1;
   v3new = ECL_NIL;
   goto L6;
L5:;
   {
    cl_object v4;
    v4 = ecl_cdr(v2l);
    T0 = ecl_car(v2l);
    v3new = CONS(T0,v3new);
    v2l = v4;
   }
L6:;
   T0 = ecl_cdr(ecl_symbol_value(VV[43]));
   if ((v2l)==(T0)) { goto L11; }
   goto L5;
L11:;
   value0 = cl_nreverse(v3new);
   return value0;
  }
 }
}
/*      function definition for LOOP-ERROR                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L28loop_error(cl_narg narg, cl_object v1format_string, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2format_args;
  ecl_va_list args; ecl_va_start(args,v1format_string,narg,1);
  v2format_args = cl_grab_rest_args(args);
  ecl_va_end(args);
  T0 = L27loop_context();
  value0 = si_simple_program_error(4, VV[76], v1format_string, v2format_args, T0);
  return value0;
 }
}
/*      function definition for LOOP-WARN                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L29loop_warn(cl_narg narg, cl_object v1format_string, ...)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2format_args;
  ecl_va_list args; ecl_va_start(args,v1format_string,narg,1);
  v2format_args = cl_grab_rest_args(args);
  ecl_va_end(args);
  T0 = L27loop_context();
  T1 = cl_list(3, v1format_string, v2format_args, T0);
  value0 = (cl_env_copy->function=(ECL_SYM("WARN",905)->symbol.gfdef))->cfun.entry(5, VV[77], ECL_SYM("FORMAT-CONTROL",1263), VV[76], ECL_SYM("FORMAT-ARGUMENTS",1262), T1) /*  WARN */;
  return value0;
 }
}
/*      function definition for LOOP-CHECK-DATA-TYPE                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L30loop_check_data_type(cl_narg narg, cl_object v1specified_type, cl_object v2required_type, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>3)) FEwrong_num_arguments_anonym();
 {
  cl_object v3default_type;
  va_list args; va_start(args,v2required_type);
  {
   int i = 2;
   if (i >= narg) {
    v3default_type = v2required_type;
   } else {
    i++;
    v3default_type = va_arg(args,cl_object);
   }
  }
  va_end(args);
  if (!(v1specified_type==ECL_NIL)) { goto L2; }
  value0 = v3default_type;
  cl_env_copy->nvalues = 1;
  return value0;
L2:;
  {
   cl_object v5;                                  /*  A               */
   cl_object v6;                                  /*  B               */
   value0 = cl_subtypep(2, v1specified_type, v2required_type);
   {
    v5 = value0;
    v6 = cl_env_copy->values[1];
   }
   if ((v6)!=ECL_NIL) { goto L6; }
   L29loop_warn(3, VV[78], v1specified_type, v2required_type);
   goto L5;
L6:;
   if ((v5)!=ECL_NIL) { goto L5; }
   L28loop_error(3, VV[79], v1specified_type, v2required_type);
L5:;
   value0 = v1specified_type;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function LOOP-FINISH                                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC31loop_finish(cl_object v1, cl_object v2)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   v3 = ecl_cdr(v1);
   if (Null(v3)) { goto L2; }
   ecl_function_dispatch(cl_env_copy,VV[273])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L2:;
   value0 = VV[80];
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for SUBST-GENSYMS-FOR-NIL                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L32subst_gensyms_for_nil(cl_object v1tree)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(v1tree==ECL_NIL)) { goto L1; }
  T0 = cl_gensym(0);
  cl_set(VV[82],CONS(T0,ecl_symbol_value(VV[82])));
  value0 = ecl_car(ecl_symbol_value(VV[82]));
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  if (!(ECL_ATOM(v1tree))) { goto L4; }
  value0 = v1tree;
  cl_env_copy->nvalues = 1;
  return value0;
L4:;
  T0 = ecl_cdr(v1tree);
  if (!(ECL_ATOM(T0))) { goto L6; }
  T0 = ecl_car(v1tree);
  T1 = L32subst_gensyms_for_nil(T0);
  T2 = ecl_cdr(v1tree);
  T3 = L32subst_gensyms_for_nil(T2);
  value0 = CONS(T1,T3);
  cl_env_copy->nvalues = 1;
  return value0;
L6:;
  {
   cl_object v2acc;
   cl_object v3acc_last;
   cl_object v4elt;
   v2acc = CONS(ECL_SYM("&OPTIONAL",13),ECL_NIL);
   v3acc_last = v2acc;
   v4elt = v1tree;
   goto L13;
L12:;
   {
    cl_object v5;
    T0 = ecl_car(v4elt);
    T1 = L32subst_gensyms_for_nil(T0);
    v5 = CONS(T1,ECL_NIL);
    {
     cl_object v6;
     v6 = v3acc_last;
     if (ecl_unlikely(ECL_ATOM(v6))) FEtype_error_cons(v6);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     T0 = v6;
    }
    (ECL_CONS_CDR(T0)=v5,T0);
   }
   v3acc_last = ecl_cdr(v3acc_last);
   v4elt = ecl_cdr(v4elt);
L13:;
   if (ECL_ATOM(v4elt)) { goto L25; }
   goto L12;
L25:;
   {
    cl_object v5;
    v5 = v4elt;
    {
     cl_object v6;
     v6 = v3acc_last;
     if (ecl_unlikely(ECL_ATOM(v6))) FEtype_error_cons(v6);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     T0 = v6;
    }
    (ECL_CONS_CDR(T0)=v5,T0);
   }
   value0 = v2acc;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for LOOP-BUILD-DESTRUCTURING-BINDINGS     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L33loop_build_destructuring_bindings(cl_object v1crocks, cl_object v2forms)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(v1crocks)) { goto L1; }
  ecl_bds_bind(cl_env_copy,VV[82],ECL_NIL);       /*  *IGNORES*       */
  T0 = ecl_car(v1crocks);
  T1 = L32subst_gensyms_for_nil(T0);
  T2 = ecl_cadr(v1crocks);
  T3 = CONS(ECL_SYM("IGNORE",430),ecl_symbol_value(VV[82]));
  T4 = cl_list(2, ECL_SYM("DECLARE",276), T3);
  T5 = ecl_cddr(v1crocks);
  T6 = L33loop_build_destructuring_bindings(T5, v2forms);
  T7 = cl_listX(5, ECL_SYM("DESTRUCTURING-BIND",302), T1, T2, T4, T6);
  value0 = ecl_list1(T7);
  cl_env_copy->nvalues = 1;
  ecl_bds_unwind1(cl_env_copy);
  return value0;
L1:;
  value0 = v2forms;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for LOOP-TRANSLATE                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L34loop_translate(cl_object v1_loop_source_code_, cl_object v2_loop_macro_environment_, cl_object v3_loop_universe_)
{
 cl_object T0, T1, T2, T3, T4, T5, T6;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  ecl_bds_bind(cl_env_copy,VV[43],v1_loop_source_code_); /*  *LOOP-SOURCE-CODE* */
  ecl_bds_bind(cl_env_copy,VV[47],v2_loop_macro_environment_); /*  *LOOP-MACRO-ENVIRONMENT* */
  ecl_bds_bind(cl_env_copy,VV[31],v3_loop_universe_); /*  *LOOP-UNIVERSE* */
TTL:
  {
   cl_object v4;
   v4 = ecl_symbol_value(VV[43]);
   ecl_bds_bind(cl_env_copy,VV[44],v4);           /*  *LOOP-ORIGINAL-SOURCE-CODE* */
   ecl_bds_bind(cl_env_copy,VV[45],ECL_NIL);      /*  *LOOP-SOURCE-CONTEXT* */
   ecl_bds_bind(cl_env_copy,VV[55],ECL_NIL);      /*  *LOOP-ITERATION-VARIABLES* */
   ecl_bds_bind(cl_env_copy,VV[49],ECL_NIL);      /*  *LOOP-VARIABLES* */
   ecl_bds_bind(cl_env_copy,VV[54],ECL_NIL);      /*  *LOOP-NODECLARE* */
   ecl_bds_bind(cl_env_copy,VV[48],ECL_NIL);      /*  *LOOP-NAMED-VARIABLES* */
   ecl_bds_bind(cl_env_copy,VV[50],ECL_NIL);      /*  *LOOP-DECLARATIONS* */
   ecl_bds_bind(cl_env_copy,VV[51],ECL_NIL);      /*  *LOOP-DESETQ-CROCKS* */
   ecl_bds_bind(cl_env_copy,VV[53],ECL_NIL);      /*  *LOOP-BIND-STACK* */
   ecl_bds_bind(cl_env_copy,VV[56],ECL_NIL);      /*  *LOOP-PROLOGUE* */
   ecl_bds_bind(cl_env_copy,VV[52],ECL_NIL);      /*  *LOOP-WRAPPERS* */
   ecl_bds_bind(cl_env_copy,VV[57],ECL_NIL);      /*  *LOOP-BEFORE-LOOP* */
   ecl_bds_bind(cl_env_copy,VV[58],ECL_NIL);      /*  *LOOP-BODY*     */
   ecl_bds_bind(cl_env_copy,VV[60],ECL_NIL);      /*  *LOOP-EMITTED-BODY* */
   ecl_bds_bind(cl_env_copy,VV[59],ECL_NIL);      /*  *LOOP-AFTER-BODY* */
   ecl_bds_bind(cl_env_copy,VV[61],ECL_NIL);      /*  *LOOP-EPILOGUE* */
   ecl_bds_bind(cl_env_copy,VV[62],ECL_NIL);      /*  *LOOP-AFTER-EPILOGUE* */
   ecl_bds_bind(cl_env_copy,VV[63],ECL_NIL);      /*  *LOOP-FINAL-VALUE-CULPRIT* */
   ecl_bds_bind(cl_env_copy,VV[64],ECL_NIL);      /*  *LOOP-INSIDE-CONDITIONAL* */
   ecl_bds_bind(cl_env_copy,VV[65],ECL_NIL);      /*  *LOOP-WHEN-IT-VARIABLE* */
   ecl_bds_bind(cl_env_copy,VV[66],ECL_NIL);      /*  *LOOP-NEVER-STEPPED-VARIABLE* */
   ecl_bds_bind(cl_env_copy,VV[46],ECL_NIL);      /*  *LOOP-NAMES*    */
   ecl_bds_bind(cl_env_copy,VV[67],ECL_NIL);      /*  *LOOP-COLLECTION-CRUFT* */
   L35loop_iteration_driver();
   L51loop_bind_block();
   {
    cl_object v5answer;
    T0 = cl_nreverse(ecl_symbol_value(VV[56]));
    T1 = cl_nreverse(ecl_symbol_value(VV[57]));
    T2 = cl_nreverse(ecl_symbol_value(VV[58]));
    T3 = cl_nreverse(ecl_symbol_value(VV[59]));
    T4 = ecl_symbol_value(VV[61]);
    T5 = cl_nreverse(ecl_symbol_value(VV[62]));
    T6 = cl_nreconc(T4, T5);
    v5answer = cl_list(6, VV[75], T0, T1, T2, T3, T6);
    {
     cl_object v6;
     v6 = ecl_symbol_value(VV[53]);
     goto L9;
L8:;
     {
      cl_object v7entry;
      v7entry = ecl_car(v6);
      {
       cl_object v8;
       cl_object v9;
       cl_object v10;
       cl_object v11;
       v8 = ecl_car(v7entry);
       v9 = ecl_cadr(v7entry);
       v10 = ecl_caddr(v7entry);
       v11 = ecl_cadddr(v7entry);
       {
        cl_object v12;
        v12 = v11;
        goto L22;
L21:;
        {
         cl_object v13w;
         v13w = ecl_car(v12);
         T0 = ecl_list1(v5answer);
         v5answer = ecl_append(v13w,T0);
        }
        v12 = ecl_cdr(v12);
L22:;
        if (Null(v12)) { goto L30; }
        goto L21;
L30:;
       }
       if ((v8)!=ECL_NIL) { goto L33; }
       if ((v9)!=ECL_NIL) { goto L33; }
       if (Null(v10)) { goto L13; }
       goto L32;
L33:;
L32:;
       {
        cl_object v12forms;
        v12forms = ecl_list1(v5answer);
        if (Null(v9)) { goto L37; }
        T0 = CONS(ECL_SYM("DECLARE",276),v9);
        v12forms = CONS(T0,v12forms);
L37:;
        if ((v8)!=ECL_NIL) { goto L42; }
        T0 = ECL_SYM("LOCALLY",492);
        goto L41;
L42:;
        if (Null(ecl_symbol_value(VV[40]))) { goto L44; }
        T0 = ecl_car(ecl_symbol_value(VV[40]));
        goto L41;
L44:;
        T0 = ECL_SYM("LET",479);
L41:;
        T1 = L33loop_build_destructuring_bindings(v10, v12forms);
        v5answer = cl_listX(3, T0, v8, T1);
       }
      }
L13:;
     }
     v6 = ecl_cdr(v6);
L9:;
     if (Null(v6)) { goto L48; }
     goto L8;
L48:;
    }
    if (Null(ecl_symbol_value(VV[46]))) { goto L50; }
    goto L54;
L53:;
    {
     cl_object v6;
     v6 = ecl_symbol_value(VV[46]);
     {
      cl_object v7;
      v7 = v6;
      if (ecl_unlikely(!ECL_LISTP(v7))) FEtype_error_list(v7);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
     }
     if (Null(v6)) { goto L63; }
     {
      cl_object v7;
      v7 = ECL_CONS_CDR(v6);
      cl_set(VV[46],v7);
      v6 = ECL_CONS_CAR(v6);
     }
L63:;
     T0 = v6;
    }
    v5answer = cl_list(3, ECL_SYM("BLOCK",139), T0, v5answer);
L54:;
    T0 = ecl_car(ecl_symbol_value(VV[46]));
    if (T0==ECL_NIL) { goto L69; }
    goto L53;
L69:;
    value0 = v5answer;
    cl_env_copy->nvalues = 1;
    ecl_bds_unwind_n(cl_env_copy,26);
    return value0;
L50:;
    value0 = cl_list(3, ECL_SYM("BLOCK",139), ECL_NIL, v5answer);
    ecl_bds_unwind_n(cl_env_copy,26);
    return value0;
   }
  }
 }
}
/*      function definition for LOOP-ITERATION-DRIVER                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L35loop_iteration_driver()
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  goto L3;
L2:;
  {
   cl_object v1;
   cl_object v2tem;
   v1 = ecl_car(ecl_symbol_value(VV[43]));
   v2tem = ECL_NIL;
   if (ECL_SYMBOLP(v1)) { goto L8; }
   L28loop_error(2, VV[85], v1);
   goto L5;
L8:;
   cl_set(VV[45],ecl_symbol_value(VV[43]));
   L36loop_pop_source();
   T0 = ecl_function_dispatch(cl_env_copy,VV[314])(1, ecl_symbol_value(VV[31])) /*  LOOP-UNIVERSE-KEYWORDS */;
   v2tem = L14loop_lookup_keyword(v1, T0);
   if (Null(v2tem)) { goto L13; }
   T0 = ecl_car(v2tem);
   T1 = cl_symbol_function(T0);
   T2 = ecl_cdr(v2tem);
   cl_apply(2, T1, T2);
   goto L5;
L13:;
   T0 = ecl_function_dispatch(cl_env_copy,VV[315])(1, ecl_symbol_value(VV[31])) /*  LOOP-UNIVERSE-ITERATION-KEYWORDS */;
   v2tem = L14loop_lookup_keyword(v1, T0);
   if (Null(v2tem)) { goto L16; }
   L74loop_hack_iteration(v2tem);
   goto L5;
L16:;
   if (Null(L13loop_tmember(v1, VV[86]))) { goto L19; }
   T0 = ecl_car(ecl_symbol_value(VV[43]));
   T1 = ecl_cadr(ecl_symbol_value(VV[43]));
   L28loop_error(4, VV[87], v1, T0, T1);
   goto L5;
L19:;
   L28loop_error(2, VV[88], v1);
  }
L5:;
L3:;
  if (ecl_symbol_value(VV[43])==ECL_NIL) { goto L21; }
  goto L2;
L21:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for LOOP-POP-SOURCE                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L36loop_pop_source()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(ecl_symbol_value(VV[43]))) { goto L1; }
  {
   cl_object v1;
   v1 = ecl_symbol_value(VV[43]);
   {
    cl_object v2;
    v2 = v1;
    if (ecl_unlikely(!ECL_LISTP(v2))) FEtype_error_list(v2);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
   }
   if (Null(v1)) { goto L7; }
   {
    cl_object v2;
    v2 = ECL_CONS_CDR(v1);
    cl_set(VV[43],v2);
    v1 = ECL_CONS_CAR(v1);
   }
L7:;
   value0 = v1;
   cl_env_copy->nvalues = 1;
   return value0;
  }
L1:;
  value0 = L28loop_error(1, VV[89]);
  return value0;
 }
}
/*      function definition for LOOP-GET-COMPOUND-FORM                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L37loop_get_compound_form()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v1form;
   v1form = L39loop_get_form();
   if (ECL_CONSP(v1form)) { goto L2; }
   L28loop_error(2, VV[90], v1form);
L2:;
   value0 = v1form;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for LOOP-GET-PROGN                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L38loop_get_progn()
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v1;
   cl_object v2;
   cl_object v3forms;
   cl_object v4nextform;
   T0 = L37loop_get_compound_form();
   v1 = ecl_list1(T0);
   v2 = ecl_car(ecl_symbol_value(VV[43]));
   v3forms = v1;
   v4nextform = v2;
   goto L7;
L6:;
   T0 = L37loop_get_compound_form();
   v3forms = CONS(T0,v3forms);
   v4nextform = ecl_car(ecl_symbol_value(VV[43]));
L7:;
   if (ECL_ATOM(v4nextform)) { goto L12; }
   goto L6;
L12:;
   T0 = ecl_cdr(v3forms);
   if (!(T0==ECL_NIL)) { goto L14; }
   value0 = ecl_car(v3forms);
   cl_env_copy->nvalues = 1;
   return value0;
L14:;
   T0 = cl_nreverse(v3forms);
   value0 = CONS(ECL_SYM("PROGN",673),T0);
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for LOOP-GET-FORM                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L39loop_get_form()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(ecl_symbol_value(VV[43]))) { goto L1; }
  value0 = L36loop_pop_source();
  return value0;
L1:;
  value0 = L28loop_error(1, VV[91]);
  return value0;
 }
}
/*      function definition for LOOP-CONSTRUCT-RETURN                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L40loop_construct_return(cl_object v1form)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_car(ecl_symbol_value(VV[46]));
  value0 = cl_list(3, ECL_SYM("RETURN-FROM",727), T0, v1form);
  return value0;
 }
}
/*      function definition for LOOP-PSEUDO-BODY                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L41loop_pseudo_body(cl_object v1form)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if ((ecl_symbol_value(VV[60]))!=ECL_NIL) { goto L3; }
  if (Null(ecl_symbol_value(VV[64]))) { goto L1; }
  goto L2;
L3:;
L2:;
  cl_set(VV[58],CONS(v1form,ecl_symbol_value(VV[58])));
  value0 = ecl_symbol_value(VV[58]);
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  cl_set(VV[57],CONS(v1form,ecl_symbol_value(VV[57])));
  cl_set(VV[59],CONS(v1form,ecl_symbol_value(VV[59])));
  value0 = ecl_symbol_value(VV[59]);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for LOOP-EMIT-BODY                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L42loop_emit_body(cl_object v1form)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  cl_set(VV[60],ECL_T);
  cl_set(VV[58],CONS(v1form,ecl_symbol_value(VV[58])));
  value0 = ecl_symbol_value(VV[58]);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for LOOP-EMIT-FINAL-VALUE                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L43loop_emit_final_value(cl_narg narg, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg>1)) FEwrong_num_arguments_anonym();
 {
  cl_object v1form;
  cl_object v2form_supplied_p;
  va_list args; va_start(args,narg);
  {
   int i = 0;
   if (i >= narg) {
    v1form = ECL_NIL;
    v2form_supplied_p = ECL_NIL;
   } else {
    i++;
    v1form = va_arg(args,cl_object);
    v2form_supplied_p = ECL_T;
   }
  }
  va_end(args);
  if (Null(v2form_supplied_p)) { goto L2; }
  T0 = L40loop_construct_return(v1form);
  cl_set(VV[62],CONS(T0,ecl_symbol_value(VV[62])));
L2:;
  if (Null(ecl_symbol_value(VV[63]))) { goto L5; }
  L29loop_warn(2, VV[92], ecl_symbol_value(VV[63]));
L5:;
  cl_set(VV[63],ecl_car(ecl_symbol_value(VV[45])));
  value0 = ecl_symbol_value(VV[63]);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for LOOP-DISALLOW-CONDITIONAL             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L44loop_disallow_conditional(cl_narg narg, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg>1)) FEwrong_num_arguments_anonym();
 {
  cl_object v1kwd;
  va_list args; va_start(args,narg);
  {
   int i = 0;
   if (i >= narg) {
    v1kwd = ECL_NIL;
   } else {
    i++;
    v1kwd = va_arg(args,cl_object);
   }
  }
  va_end(args);
  if (Null(ecl_symbol_value(VV[64]))) { goto L2; }
  value0 = L28loop_error(2, VV[93], v1kwd);
  return value0;
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for LOOP-DISALLOW-ANONYMOUS-COLLECTORS    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L45loop_disallow_anonymous_collectors()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(cl_find_if_not(2, VV[94], ecl_symbol_value(VV[67])))) { goto L1; }
  value0 = L28loop_error(1, VV[95]);
  return value0;
L1:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for LOOP-DISALLOW-AGGREGATE-BOOLEANS      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L46loop_disallow_aggregate_booleans()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(L13loop_tmember(ecl_symbol_value(VV[63]), VV[97]))) { goto L1; }
  value0 = L28loop_error(1, VV[98]);
  return value0;
L1:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for LOOP-TYPED-INIT                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L47loop_typed_init(cl_object v1data_type)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(v1data_type==ECL_NIL)) { goto L1; }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  if (Null(cl_subtypep(2, v1data_type, ECL_SYM("CHARACTER",224)))) { goto L3; }
  value0 = CODE_CHAR(48);
  cl_env_copy->nvalues = 1;
  return value0;
L3:;
  if ((cl_subtypep(2, v1data_type, ECL_SYM("NUMBER",608)))!=ECL_NIL) { goto L5; }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L5:;
  if (Null(cl_subtypep(2, v1data_type, VV[100]))) { goto L7; }
  value0 = cl_coerce(ecl_make_fixnum(0), v1data_type);
  return value0;
L7:;
  value0 = ecl_make_fixnum(0);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for LOOP-OPTIONAL-TYPE                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L50loop_optional_type(cl_narg narg, ...)
{
 cl_object T0, T1;
 volatile cl_object lex0[2];
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg>1)) FEwrong_num_arguments_anonym();
 {
  va_list args; va_start(args,narg);
  {
   int i = 0;
   if (i >= narg) {
    lex0[0] = ECL_NIL;                            /*  VARIABLE        */
   } else {
    i++;
    lex0[0] = va_arg(args,cl_object);             /*  VARIABLE        */
   }
  }
  va_end(args);
  if (Null(ecl_symbol_value(VV[43]))) { goto L2; }
  T0 = ecl_car(ecl_symbol_value(VV[43]));
  lex0[1] = T0;                                   /*  Z               */
  if (Null(L11loop_tequal(lex0[1], VV[101]))) { goto L4; }
  L36loop_pop_source();
  value0 = L36loop_pop_source();
  return value0;
L4:;
  if (!(ECL_SYMBOLP(lex0[1]))) { goto L7; }
  {
   cl_object v1type_spec;
   T0 = ecl_function_dispatch(cl_env_copy,VV[318])(1, ecl_symbol_value(VV[31])) /*  LOOP-UNIVERSE-TYPE-SYMBOLS */;
   value0 = ecl_gethash_safe(lex0[1],T0,ECL_NIL);
   if ((value0)!=ECL_NIL) { goto L11; }
   T0 = ecl_symbol_name(lex0[1]);
   T1 = ecl_function_dispatch(cl_env_copy,VV[319])(1, ecl_symbol_value(VV[31])) /*  LOOP-UNIVERSE-TYPE-KEYWORDS */;
   v1type_spec = ecl_gethash_safe(T0,T1,ECL_NIL);
   goto L9;
L11:;
   v1type_spec = value0;
   goto L9;
L9:;
   if (Null(v1type_spec)) { goto L13; }
   L36loop_pop_source();
   value0 = v1type_spec;
   cl_env_copy->nvalues = 1;
   return value0;
L13:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
L7:;
  if (!(ECL_CONSP(lex0[0]))) { goto L17; }
  if (ECL_CONSP(lex0[1])) { goto L16; }
  L28loop_error(2, VV[102], lex0[1]);
  goto L16;
L17:;
  L28loop_error(2, VV[103], lex0[1]);
L16:;
  L36loop_pop_source();
  value0 = LC48translate(lex0, lex0[1], lex0[0]);
  return value0;
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function REPLICATE                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC49replicate(cl_object v1typ, cl_object v2v)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ECL_ATOM(v2v))) { goto L1; }
  value0 = v1typ;
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  T1 = ecl_car(v2v);
  T0 = LC49replicate(v1typ, T1);
  T2 = ecl_cdr(v2v);
  T1 = LC49replicate(v1typ, T2);
  value0 = CONS(T0,T1);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function TRANSLATE                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC48translate(volatile cl_object *lex0, cl_object v1k, cl_object v2v)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(v1k==ECL_NIL)) { goto L1; }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  if (!(ECL_ATOM(v1k))) { goto L3; }
  T1 = ecl_function_dispatch(cl_env_copy,VV[318])(1, ecl_symbol_value(VV[31])) /*  LOOP-UNIVERSE-TYPE-SYMBOLS */;
  value0 = ecl_gethash_safe(v1k,T1,ECL_NIL);
  if ((value0)!=ECL_NIL) { goto L7; }
  T1 = ecl_symbol_name(v1k);
  T2 = ecl_function_dispatch(cl_env_copy,VV[319])(1, ecl_symbol_value(VV[31])) /*  LOOP-UNIVERSE-TYPE-KEYWORDS */;
  value0 = ecl_gethash_safe(T1,T2,ECL_NIL);
  if ((value0)!=ECL_NIL) { goto L7; }
  T0 = L28loop_error(3, VV[104], lex0[1], v1k);
  goto L5;
L7:;
  T0 = value0;
  goto L5;
L5:;
  value0 = LC49replicate(T0, v2v);
  return value0;
L3:;
  if (!(ECL_ATOM(v2v))) { goto L10; }
  value0 = L28loop_error(3, VV[105], lex0[1], lex0[0]);
  return value0;
L10:;
  T1 = ecl_car(v1k);
  T2 = ecl_car(v2v);
  T0 = LC48translate(lex0, T1, T2);
  T2 = ecl_cdr(v1k);
  T3 = ecl_cdr(v2v);
  T1 = LC48translate(lex0, T2, T3);
  value0 = CONS(T0,T1);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for LOOP-BIND-BLOCK                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L51loop_bind_block()
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if ((ecl_symbol_value(VV[49]))!=ECL_NIL) { goto L3; }
  if ((ecl_symbol_value(VV[50]))!=ECL_NIL) { goto L3; }
  if (Null(ecl_symbol_value(VV[52]))) { goto L1; }
  goto L2;
L3:;
L2:;
  T0 = cl_nreverse(ecl_symbol_value(VV[49]));
  T1 = cl_list(4, T0, ecl_symbol_value(VV[50]), ecl_symbol_value(VV[51]), ecl_symbol_value(VV[52]));
  cl_set(VV[53],CONS(T1,ecl_symbol_value(VV[53])));
  cl_set(VV[49],ECL_NIL);
  cl_set(VV[50],ECL_NIL);
  cl_set(VV[51],ECL_NIL);
  cl_set(VV[52],ECL_NIL);
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for LOOP-VARIABLE-P                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L52loop_variable_p(cl_object v1name)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2entry;
   v2entry = ecl_symbol_value(VV[53]);
   goto L4;
L3:;
   if (!(v2entry==ECL_NIL)) { goto L7; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L7:;
   T0 = ecl_caar(v2entry);
   if (Null(ecl_assq(v1name,T0))) { goto L6; }
   value0 = ECL_T;
   cl_env_copy->nvalues = 1;
   return value0;
L6:;
   v2entry = ecl_cdr(v2entry);
L4:;
   goto L3;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for LOOP-MAKE-VARIABLE                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L53loop_make_variable(cl_narg narg, cl_object v1name, cl_object v2initialization, cl_object v3dtype, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<3)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>4)) FEwrong_num_arguments_anonym();
 {
  cl_object v4iteration_variable_p;
  va_list args; va_start(args,v3dtype);
  {
   int i = 3;
   if (i >= narg) {
    v4iteration_variable_p = ECL_NIL;
   } else {
    i++;
    v4iteration_variable_p = va_arg(args,cl_object);
   }
  }
  va_end(args);
  if (!(v1name==ECL_NIL)) { goto L3; }
  if (v2initialization==ECL_NIL) { goto L2; }
  v1name = cl_gensym(1, VV[107]);
  T0 = cl_list(2, v1name, v2initialization);
  cl_set(VV[49],CONS(T0,ecl_symbol_value(VV[49])));
  T0 = cl_list(2, ECL_SYM("IGNORE",430), v1name);
  cl_set(VV[50],CONS(T0,ecl_symbol_value(VV[50])));
  goto L2;
L3:;
  if (!(ECL_ATOM(v1name))) { goto L10; }
  if (Null(v4iteration_variable_p)) { goto L13; }
  if (Null(ecl_memql(v1name,ecl_symbol_value(VV[55])))) { goto L15; }
  L28loop_error(2, VV[108], v1name);
  goto L12;
L15:;
  cl_set(VV[55],CONS(v1name,ecl_symbol_value(VV[55])));
  goto L12;
L13:;
  if (Null(ecl_assql(v1name,ecl_symbol_value(VV[49])))) { goto L12; }
  L28loop_error(2, VV[109], v1name);
L12:;
  if (ECL_SYMBOLP(v1name)) { goto L19; }
  L28loop_error(2, VV[110], v1name);
L19:;
  {
   cl_object v5init;
   value0 = v2initialization;
   if ((value0)!=ECL_NIL) { goto L23; }
   v5init = L47loop_typed_init(v3dtype);
   goto L21;
L23:;
   v5init = value0;
   goto L21;
L21:;
   L55loop_declare_variable(3, v1name, v3dtype, v5init);
   T0 = cl_list(2, v1name, v5init);
   cl_set(VV[49],CONS(T0,ecl_symbol_value(VV[49])));
   goto L2;
  }
L10:;
  if (Null(v2initialization)) { goto L27; }
  if (Null(ecl_symbol_value(VV[40]))) { goto L29; }
  L55loop_declare_variable(2, v1name, v3dtype);
  T0 = cl_list(2, v1name, v2initialization);
  cl_set(VV[49],CONS(T0,ecl_symbol_value(VV[49])));
  goto L2;
L29:;
  {
   cl_object v6newvar;
   v6newvar = cl_gensym(1, VV[111]);
   L55loop_declare_variable(2, v1name, v3dtype);
   T0 = cl_list(2, v6newvar, v2initialization);
   cl_set(VV[49],CONS(T0,ecl_symbol_value(VV[49])));
   cl_set(VV[51],cl_listX(3, v1name, v6newvar, ecl_symbol_value(VV[51])));
   goto L2;
  }
L27:;
  {
   cl_object v7tcar;
   cl_object v8tcdr;
   v7tcar = ECL_NIL;
   v8tcdr = ECL_NIL;
   if (!(ECL_ATOM(v3dtype))) { goto L41; }
   v8tcdr = v3dtype;
   v7tcar = v8tcdr;
   goto L40;
L41:;
   v7tcar = ecl_car(v3dtype);
   v8tcdr = ecl_cdr(v3dtype);
L40:;
   T0 = ecl_car(v1name);
   L53loop_make_variable(4, T0, ECL_NIL, v7tcar, v4iteration_variable_p);
   T0 = ecl_cdr(v1name);
   L53loop_make_variable(4, T0, ECL_NIL, v8tcdr, v4iteration_variable_p);
  }
L2:;
  value0 = v1name;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for LOOP-MAKE-ITERATION-VARIABLE          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L54loop_make_iteration_variable(cl_object v1name, cl_object v2initialization, cl_object v3dtype)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = L53loop_make_variable(4, v1name, v2initialization, v3dtype, ECL_T);
  return value0;
 }
}
/*      function definition for LOOP-DECLARE-VARIABLE                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L55loop_declare_variable(cl_narg narg, cl_object v1name, cl_object v2dtype, ...)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>3)) FEwrong_num_arguments_anonym();
 {
  cl_object v3initialization;
  cl_object v4initialization_p;
  va_list args; va_start(args,v2dtype);
  {
   int i = 2;
   if (i >= narg) {
    v3initialization = ECL_NIL;
    v4initialization_p = ECL_NIL;
   } else {
    i++;
    v3initialization = va_arg(args,cl_object);
    v4initialization_p = ECL_T;
   }
  }
  va_end(args);
  if (v1name==ECL_NIL) { goto L4; }
  if (v2dtype==ECL_NIL) { goto L4; }
  if (!((v2dtype)==(ECL_T))) { goto L2; }
  goto L3;
L4:;
L3:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L2:;
  if (!(ECL_SYMBOLP(v1name))) { goto L7; }
  if ((v2dtype)==(ECL_T)) { goto L9; }
  if ((ecl_memql(v1name,ecl_symbol_value(VV[54])))!=ECL_NIL) { goto L9; }
  if (Null(v4initialization_p)) { goto L12; }
  if (Null(cl_constantp(1, v3initialization))) { goto L12; }
  {
   cl_object v5init_type;
   v5init_type = cl_type_of(v3initialization);
   if ((cl_subtypep(2, v5init_type, v2dtype))!=ECL_NIL) { goto L12; }
   v2dtype = cl_list(3, ECL_SYM("OR",616), v2dtype, v5init_type);
  }
L12:;
  {
   cl_object v5previous;
   {
    cl_object v6;
    cl_object v7;
    v6 = ecl_symbol_value(VV[50]);
    v7 = ecl_function_dispatch(cl_env_copy,VV[321])(2, v6, ecl_make_fixnum(0)) /*  MAKE-SEQ-ITERATOR */;
L21:;
    if ((v7)!=ECL_NIL) { goto L23; }
    v5previous = ECL_NIL;
    goto L18;
L23:;
    {
     cl_object v8;
     v8 = ecl_function_dispatch(cl_env_copy,VV[322])(2, v6, v7) /*  SEQ-ITERATOR-REF */;
     if (!(ECL_CONSP(v8))) { goto L30; }
     {
      cl_fixnum v9;
      v9 = ecl_length(v8);
      if (!((v9)==(3))) { goto L30; }
     }
     T1 = _ecl_car(v8);
     if (!((T1)==(ECL_SYM("TYPE",871)))) { goto L30; }
     T0 = ecl_caddr(v8);
     goto L28;
L30:;
     T0 = ECL_NIL;
     goto L28;
L28:;
     if (!(ecl_eql(v1name,T0))) { goto L25; }
     v5previous = v8;
     goto L18;
    }
L25:;
    v7 = ecl_function_dispatch(cl_env_copy,VV[323])(2, v6, v7) /*  SEQ-ITERATOR-NEXT */;
    goto L21;
   }
L18:;
   if (Null(v5previous)) { goto L37; }
   {
    cl_object v6;
    v6 = v2dtype;
    {
     cl_object v7;
     v7 = ecl_cdr(v5previous);
     if (ecl_unlikely(ECL_ATOM(v7))) FEtype_error_cons(v7);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     T0 = v7;
    }
    (ECL_CONS_CAR(T0)=v6,T0);
    value0 = v6;
    cl_env_copy->nvalues = 1;
    return value0;
   }
L37:;
   T0 = cl_list(3, ECL_SYM("TYPE",871), v2dtype, v1name);
   cl_set(VV[50],CONS(T0,ecl_symbol_value(VV[50])));
   value0 = ecl_symbol_value(VV[50]);
   cl_env_copy->nvalues = 1;
   return value0;
  }
L9:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L7:;
  if (!(ECL_CONSP(v1name))) { goto L45; }
  if (!(ECL_CONSP(v2dtype))) { goto L47; }
  T0 = ecl_car(v1name);
  T1 = ecl_car(v2dtype);
  L55loop_declare_variable(3, T0, T1, ECL_NIL);
  T0 = ecl_cdr(v1name);
  T1 = ecl_cdr(v2dtype);
  value0 = L55loop_declare_variable(2, T0, T1);
  return value0;
L47:;
  T0 = ecl_car(v1name);
  L55loop_declare_variable(3, T0, v2dtype, ECL_NIL);
  T0 = ecl_cdr(v1name);
  value0 = L55loop_declare_variable(2, T0, v2dtype);
  return value0;
L45:;
  value0 = cl_error(2, VV[112], v1name);
  return value0;
 }
}
/*      function definition for LOOP-MAYBE-BIND-FORM                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L56loop_maybe_bind_form(cl_object v1form, cl_object v2data_type)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(cl_constantp(2, v1form, ecl_symbol_value(VV[47])))) { goto L1; }
  value0 = v1form;
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  T0 = cl_gensym(1, VV[113]);
  value0 = L53loop_make_variable(3, T0, v1form, v2data_type);
  return value0;
 }
}
/*      function definition for LOOP-DO-IF                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L58loop_do_if(cl_object v1for, cl_object v2negatep)
{
 cl_object T0, T1;
 volatile cl_object lex0[2];
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4form;
   v3 = L39loop_get_form();
   v4form = v3;
   ecl_bds_bind(cl_env_copy,VV[64],ECL_T);        /*  *LOOP-INSIDE-CONDITIONAL* */
   lex0[0] = ECL_NIL;                             /*  IT-P            */
   lex0[1] = ECL_T;                               /*  FIRST-CLAUSE-P  */
   {
    cl_object v5;
    cl_object v6;
    v5 = LC57get_clause(lex0, v1for);
    T0 = ecl_car(ecl_symbol_value(VV[43]));
    if (Null(L11loop_tequal(T0, VV[118]))) { goto L5; }
    L36loop_pop_source();
    T0 = LC57get_clause(lex0, VV[118]);
    v6 = ecl_list1(T0);
    goto L4;
L5:;
    v6 = ECL_NIL;
L4:;
    T0 = ecl_car(ecl_symbol_value(VV[43]));
    if (Null(L11loop_tequal(T0, ECL_SYM("END",1247)))) { goto L9; }
    L36loop_pop_source();
L9:;
    if (Null(lex0[0])) { goto L11; }
    T0 = lex0[0];
    v4form = cl_list(3, ECL_SYM("SETQ",753), T0, v4form);
L11:;
    if (Null(v2negatep)) { goto L15; }
    T0 = cl_list(2, ECL_SYM("NOT",586), v4form);
    goto L14;
L15:;
    T0 = v4form;
L14:;
    T1 = cl_listX(4, ECL_SYM("IF",948), T0, v5, v6);
    value0 = L41loop_pseudo_body(T1);
    ecl_bds_unwind1(cl_env_copy);
    return value0;
   }
  }
 }
}
/*      local function GET-CLAUSE                                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC57get_clause(volatile cl_object *lex0, cl_object v1for)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2body;
   v2body = ECL_NIL;
   goto L4;
L3:;
   {
    cl_object v3;
    cl_object v4data;
    v3 = ecl_car(ecl_symbol_value(VV[43]));
    ecl_bds_bind(cl_env_copy,VV[58],ECL_NIL);     /*  *LOOP-BODY*     */
    v4data = ECL_NIL;
    if (ECL_SYMBOLP(v3)) { goto L9; }
    L28loop_error(3, VV[114], v3, v1for);
    ecl_bds_unwind1(cl_env_copy);
    goto L6;
L9:;
    cl_set(VV[45],ecl_symbol_value(VV[43]));
    L36loop_pop_source();
    T0 = ecl_car(ecl_symbol_value(VV[43]));
    if (Null(L11loop_tequal(T0, VV[115]))) { goto L14; }
    if (Null(lex0[1])) { goto L14; }
    value0 = lex0[0];
    if ((value0)!=ECL_NIL) { goto L20; }
    lex0[0] = L77loop_when_it_variable();
    T0 = lex0[0];
    goto L18;
L20:;
    T0 = value0;
    goto L18;
L18:;
    T1 = ecl_cdr(ecl_symbol_value(VV[43]));
    cl_set(VV[43],CONS(T0,T1));
L14:;
    T0 = ecl_function_dispatch(cl_env_copy,VV[314])(1, ecl_symbol_value(VV[31])) /*  LOOP-UNIVERSE-KEYWORDS */;
    v4data = L14loop_lookup_keyword(v3, T0);
    if (Null(v4data)) { goto L25; }
    T0 = ecl_car(v4data);
    T1 = cl_symbol_function(T0);
    T2 = ecl_cdr(v4data);
    cl_apply(2, T1, T2);
    if (!(ecl_symbol_value(VV[58])==ECL_NIL)) { goto L23; }
    goto L24;
L25:;
L24:;
    L28loop_error(3, VV[116], v3, v1for);
    ecl_bds_unwind1(cl_env_copy);
    goto L6;
L23:;
    v2body = cl_nreconc(ecl_symbol_value(VV[58]), v2body);
    ecl_bds_unwind1(cl_env_copy);
   }
L6:;
   lex0[1] = ECL_NIL;
   T0 = ecl_car(ecl_symbol_value(VV[43]));
   if (Null(L11loop_tequal(T0, VV[117]))) { goto L33; }
   L36loop_pop_source();
   goto L32;
L33:;
   if (Null(ecl_cdr(v2body))) { goto L35; }
   T0 = cl_nreverse(v2body);
   value0 = CONS(ECL_SYM("PROGN",673),T0);
   cl_env_copy->nvalues = 1;
   return value0;
L35:;
   value0 = ecl_car(v2body);
   cl_env_copy->nvalues = 1;
   return value0;
L32:;
L4:;
   goto L3;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for LOOP-DO-INITIALLY                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L59loop_do_initially()
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  L44loop_disallow_conditional(1, VV[120]);
  T0 = L38loop_get_progn();
  cl_set(VV[56],CONS(T0,ecl_symbol_value(VV[56])));
  value0 = ecl_symbol_value(VV[56]);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for LOOP-DO-FINALLY                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L60loop_do_finally()
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  L44loop_disallow_conditional(1, VV[122]);
  T0 = L38loop_get_progn();
  cl_set(VV[61],CONS(T0,ecl_symbol_value(VV[61])));
  value0 = ecl_symbol_value(VV[61]);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for LOOP-DO-DO                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L61loop_do_do()
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = L38loop_get_progn();
  value0 = L42loop_emit_body(T0);
  return value0;
 }
}
/*      function definition for LOOP-DO-NAMED                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L62loop_do_named()
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v1name;
   v1name = L36loop_pop_source();
   if (ECL_SYMBOLP(v1name)) { goto L2; }
   L28loop_error(2, VV[125], v1name);
L2:;
   if ((ecl_symbol_value(VV[57]))!=ECL_NIL) { goto L6; }
   if ((ecl_symbol_value(VV[58]))!=ECL_NIL) { goto L6; }
   if ((ecl_symbol_value(VV[62]))!=ECL_NIL) { goto L6; }
   if (Null(ecl_symbol_value(VV[64]))) { goto L4; }
   goto L5;
L6:;
L5:;
   L28loop_error(2, VV[126], v1name);
L4:;
   if (Null(ecl_symbol_value(VV[46]))) { goto L10; }
   T0 = ecl_car(ecl_symbol_value(VV[46]));
   L28loop_error(3, VV[127], T0, v1name);
L10:;
   cl_set(VV[46],cl_list(2, v1name, ECL_NIL));
   value0 = ecl_symbol_value(VV[46]);
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for LOOP-DO-RETURN                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L63loop_do_return()
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = L39loop_get_form();
  T1 = L40loop_construct_return(T0);
  value0 = L42loop_emit_body(T1);
  return value0;
 }
}
/*      function definition for MAKE-LOOP-COLLECTOR                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L64make_loop_collector(cl_narg narg, ...)
{
 cl_object T0;
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
  cl_object v6;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  {
   cl_object keyvars[12];
   cl_parse_key(args,6,L64make_loop_collectorkeys,keyvars,NULL,FALSE);
   ecl_va_end(args);
   v1 = keyvars[0];
   v2 = keyvars[1];
   v3 = keyvars[2];
   v4 = keyvars[3];
   v5 = keyvars[4];
   v6 = keyvars[5];
  }
  T0 = cl_list(6, v1, v2, v3, v4, v5, v6);
  value0 = cl_make_array(5, VV[13], ECL_SYM("ELEMENT-TYPE",1246), ECL_T, ECL_SYM("INITIAL-CONTENTS",1278), T0);
  return value0;
 }
}
/*      function definition for LOOP-GET-COLLECTION-INFO              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L65loop_get_collection_info(cl_object v1collector, cl_object v2class, cl_object v3default_type)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v4;
   cl_object v5;
   cl_object v6;
   cl_object v7dtype;
   v4 = L39loop_get_form();
   if ((ecl_function_dispatch(cl_env_copy,VV[337])(1, ecl_symbol_value(VV[31])) /*  LOOP-UNIVERSE-ANSI */)!=ECL_NIL) { goto L4; }
   v5 = L50loop_optional_type(0);
   goto L2;
L4:;
   v5 = ECL_NIL;
   goto L2;
L2:;
   T0 = ecl_car(ecl_symbol_value(VV[43]));
   if (Null(L11loop_tequal(T0, VV[133]))) { goto L7; }
   L36loop_pop_source();
   v6 = L36loop_pop_source();
   goto L6;
L7:;
   v6 = ECL_NIL;
L6:;
   v7dtype = v5;
   if (ECL_SYMBOLP(v6)) { goto L11; }
   L28loop_error(2, VV[134], v6);
L11:;
   if ((v6)!=ECL_NIL) { goto L13; }
   L46loop_disallow_aggregate_booleans();
L13:;
   if ((v7dtype)!=ECL_NIL) { goto L15; }
   value0 = L50loop_optional_type(0);
   if ((value0)!=ECL_NIL) { goto L19; }
   v7dtype = v3default_type;
   goto L17;
L19:;
   v7dtype = value0;
   goto L17;
L17:;
L15:;
   {
    cl_object v8cruft;
    {
     cl_object v9;
     cl_object v10;
     v9 = ecl_symbol_value(VV[67]);
     v10 = ecl_function_dispatch(cl_env_copy,VV[321])(2, v9, ecl_make_fixnum(0)) /*  MAKE-SEQ-ITERATOR */;
L24:;
     if ((v10)!=ECL_NIL) { goto L26; }
     v8cruft = ECL_NIL;
     goto L21;
L26:;
     {
      cl_object v11;
      v11 = ecl_function_dispatch(cl_env_copy,VV[322])(2, v9, v10) /*  SEQ-ITERATOR-REF */;
      T0 = ecl_function_dispatch(cl_env_copy,VV[94])(1, v11) /*  LOOP-COLLECTOR-NAME */;
      if (!((v6)==(T0))) { goto L28; }
      v8cruft = v11;
      goto L21;
     }
L28:;
     v10 = ecl_function_dispatch(cl_env_copy,VV[323])(2, v9, v10) /*  SEQ-ITERATOR-NEXT */;
     goto L24;
    }
L21:;
    if ((v8cruft)!=ECL_NIL) { goto L35; }
    if (Null(v6)) { goto L37; }
    if (Null(L52loop_variable_p(v6))) { goto L37; }
    L28loop_error(2, VV[135], v6);
L37:;
    T0 = ecl_list1(v1collector);
    v8cruft = L64make_loop_collector(8, ECL_SYM("NAME",1300), v6, VV[136], v2class, VV[137], T0, VV[138], v7dtype);
    cl_set(VV[67],CONS(v8cruft,ecl_symbol_value(VV[67])));
    goto L34;
L35:;
    T0 = ecl_function_dispatch(cl_env_copy,VV[338])(1, v8cruft) /*  LOOP-COLLECTOR-CLASS */;
    if ((T0)==(v2class)) { goto L42; }
    T0 = ecl_function_dispatch(cl_env_copy,VV[339])(1, v8cruft) /*  LOOP-COLLECTOR-HISTORY */;
    T1 = ecl_car(T0);
    L28loop_error(4, VV[139], v6, T1, v1collector);
L42:;
    T0 = ecl_function_dispatch(cl_env_copy,VV[340])(1, v8cruft) /*  LOOP-COLLECTOR-DTYPE */;
    if (ecl_equal(v7dtype,T0)) { goto L44; }
    T0 = ecl_function_dispatch(cl_env_copy,VV[340])(1, v8cruft) /*  LOOP-COLLECTOR-DTYPE */;
    L29loop_warn(4, VV[140], v6, v7dtype, T0);
    T0 = ecl_function_dispatch(cl_env_copy,VV[340])(1, v8cruft) /*  LOOP-COLLECTOR-DTYPE */;
    if (!((T0)==(ECL_T))) { goto L44; }
    ecl_elt_set(v8cruft,4,v7dtype);
L44:;
    {
     cl_object v9;
     T0 = ecl_function_dispatch(cl_env_copy,VV[339])(1, v8cruft) /*  LOOP-COLLECTOR-HISTORY */;
     v9 = CONS(v1collector,T0);
     ecl_elt_set(v8cruft,2,v9);
    }
L34:;
    cl_env_copy->nvalues = 2;
    cl_env_copy->values[1] = v4;
    cl_env_copy->values[0] = v8cruft;
    return cl_env_copy->values[0];
   }
  }
 }
}
/*      function definition for LOOP-LIST-COLLECTION                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L66loop_list_collection(cl_object v1specifically)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;                                  /*  LC              */
   cl_object v4;                                  /*  FORM            */
   value0 = L65loop_get_collection_info(v1specifically, ECL_SYM("LIST",483), ECL_SYM("LIST",483));
   {
    const int v5 = cl_env_copy->nvalues;
    v3 = value0;
    cl_object v6;
    v6 = (v5<=1)? ECL_NIL : cl_env_copy->values[1];
    v4 = v6;
   }
   {
    cl_object v5tempvars;
    v5tempvars = ecl_function_dispatch(cl_env_copy,VV[342])(1, v3) /*  LOOP-COLLECTOR-TEMPVARS */;
    if ((v5tempvars)!=ECL_NIL) { goto L3; }
    {
     cl_object v6;
     T0 = cl_gensym(1, VV[141]);
     T1 = cl_gensym(1, VV[142]);
     if (Null(ecl_function_dispatch(cl_env_copy,VV[94])(1, v3) /*  LOOP-COLLECTOR-NAME */)) { goto L10; }
     T3 = ecl_function_dispatch(cl_env_copy,VV[94])(1, v3) /*  LOOP-COLLECTOR-NAME */;
     T2 = ecl_list1(T3);
     goto L8;
L10:;
     T2 = ECL_NIL;
     goto L8;
L8:;
     v5tempvars = cl_listX(3, T0, T1, T2);
     v6 = v5tempvars;
     ecl_elt_set(v3,3,v6);
    }
    T0 = cl_list(2, VV[3], v5tempvars);
    cl_set(VV[52],CONS(T0,ecl_symbol_value(VV[52])));
    if ((ecl_function_dispatch(cl_env_copy,VV[94])(1, v3) /*  LOOP-COLLECTOR-NAME */)!=ECL_NIL) { goto L3; }
    T0 = ecl_car(v5tempvars);
    T1 = ecl_cddr(v5tempvars);
    T2 = cl_listX(3, VV[10], T0, T1);
    L43loop_emit_final_value(1, T2);
L3:;
    if (!((v1specifically)==(ECL_SYM("LIST",483)))) { goto L16; }
    v4 = cl_list(2, ECL_SYM("LIST",483), v4);
    goto L15;
L16:;
    if ((v1specifically)==(ECL_SYM("NCONC",583))) { goto L15; }
    if (!((v1specifically)==(ECL_SYM("APPEND",90)))) { goto L20; }
    if (!(ECL_CONSP(v4))) { goto L24; }
    T0 = ecl_car(v4);
    if ((T0)==(ECL_SYM("LIST",483))) { goto L15; }
    goto L22;
L24:;
    goto L22;
L22:;
    v4 = cl_list(2, ECL_SYM("COPY-LIST",259), v4);
    goto L15;
L20:;
    si_ecase_error(v1specifically, VV[143]);
L15:;
    T0 = cl_list(3, VV[9], v5tempvars, v4);
    value0 = L42loop_emit_body(T0);
    return value0;
   }
  }
 }
}
/*      function definition for LOOP-SUM-COLLECTION                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L67loop_sum_collection(cl_object v1specifically, cl_object v2required_type, cl_object v3default_type)
{
 cl_object T0, T1, T2, T3, T4;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v5;                                  /*  LC              */
   cl_object v6;                                  /*  FORM            */
   value0 = L65loop_get_collection_info(v1specifically, VV[145], v3default_type);
   {
    const int v7 = cl_env_copy->nvalues;
    v5 = value0;
    cl_object v8;
    v8 = (v7<=1)? ECL_NIL : cl_env_copy->values[1];
    v6 = v8;
   }
   T0 = ecl_function_dispatch(cl_env_copy,VV[340])(1, v5) /*  LOOP-COLLECTOR-DTYPE */;
   L30loop_check_data_type(2, T0, v2required_type);
   {
    cl_object v7tempvars;
    v7tempvars = ecl_function_dispatch(cl_env_copy,VV[342])(1, v5) /*  LOOP-COLLECTOR-TEMPVARS */;
    if ((v7tempvars)!=ECL_NIL) { goto L4; }
    {
     cl_object v8;
     value0 = ecl_function_dispatch(cl_env_copy,VV[94])(1, v5) /*  LOOP-COLLECTOR-NAME */;
     if ((value0)!=ECL_NIL) { goto L11; }
     T0 = cl_gensym(1, VV[146]);
     goto L9;
L11:;
     T0 = value0;
     goto L9;
L9:;
     T1 = ecl_function_dispatch(cl_env_copy,VV[340])(1, v5) /*  LOOP-COLLECTOR-DTYPE */;
     T2 = L53loop_make_variable(3, T0, ECL_NIL, T1);
     v7tempvars = ecl_list1(T2);
     v8 = v7tempvars;
     ecl_elt_set(v5,3,v8);
    }
    if ((ecl_function_dispatch(cl_env_copy,VV[94])(1, v5) /*  LOOP-COLLECTOR-NAME */)!=ECL_NIL) { goto L4; }
    T0 = ecl_function_dispatch(cl_env_copy,VV[342])(1, v5) /*  LOOP-COLLECTOR-TEMPVARS */;
    T1 = ecl_car(T0);
    L43loop_emit_final_value(1, T1);
L4:;
    if (!((v1specifically)==(ECL_SYM("COUNT",268)))) { goto L15; }
    T1 = ecl_car(v7tempvars);
    T2 = ecl_car(v7tempvars);
    T3 = cl_list(2, ECL_SYM("1+",72), T2);
    T4 = cl_list(3, ECL_SYM("SETQ",753), T1, T3);
    T0 = cl_list(3, ECL_SYM("WHEN",907), v6, T4);
    goto L14;
L15:;
    T1 = ecl_car(v7tempvars);
    T2 = ecl_car(v7tempvars);
    T3 = cl_list(3, ECL_SYM("+",16), T2, v6);
    T0 = cl_list(3, ECL_SYM("SETQ",753), T1, T3);
L14:;
    value0 = L42loop_emit_body(T0);
    return value0;
   }
  }
 }
}
/*      function definition for LOOP-MAXMIN-COLLECTION                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L68loop_maxmin_collection(cl_object v1specifically)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;                                  /*  LC              */
   cl_object v4;                                  /*  FORM            */
   value0 = L65loop_get_collection_info(v1specifically, VV[148], ECL_SYM("REAL",705));
   {
    const int v5 = cl_env_copy->nvalues;
    v3 = value0;
    cl_object v6;
    v6 = (v5<=1)? ECL_NIL : cl_env_copy->values[1];
    v4 = v6;
   }
   T0 = ecl_function_dispatch(cl_env_copy,VV[340])(1, v3) /*  LOOP-COLLECTOR-DTYPE */;
   L30loop_check_data_type(2, T0, ECL_SYM("REAL",705));
   {
    cl_object v5data;
    v5data = ecl_function_dispatch(cl_env_copy,VV[345])(1, v3) /*  LOOP-COLLECTOR-DATA */;
    if ((v5data)!=ECL_NIL) { goto L4; }
    {
     cl_object v6;
     value0 = ecl_function_dispatch(cl_env_copy,VV[94])(1, v3) /*  LOOP-COLLECTOR-NAME */;
     if ((value0)!=ECL_NIL) { goto L11; }
     T0 = cl_gensym(1, VV[149]);
     goto L9;
L11:;
     T0 = value0;
     goto L9;
L9:;
     T1 = ecl_function_dispatch(cl_env_copy,VV[340])(1, v3) /*  LOOP-COLLECTOR-DTYPE */;
     v5data = L7make_loop_minimax(T0, T1);
     v6 = v5data;
     ecl_elt_set(v3,5,v6);
    }
    if ((ecl_function_dispatch(cl_env_copy,VV[94])(1, v3) /*  LOOP-COLLECTOR-NAME */)!=ECL_NIL) { goto L4; }
    T0 = ecl_function_dispatch(cl_env_copy,VV[289])(1, v5data) /*  LOOP-MINIMAX-ANSWER-VARIABLE */;
    L43loop_emit_final_value(1, T0);
L4:;
    L8loop_note_minimax_operation(v1specifically, v5data);
    T0 = cl_list(2, VV[23], v5data);
    cl_set(VV[52],CONS(T0,ecl_symbol_value(VV[52])));
    T0 = cl_list(4, VV[25], v5data, v1specifically, v4);
    value0 = L42loop_emit_body(T0);
    return value0;
   }
  }
 }
}
/*      function definition for LOOP-DO-ALWAYS                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L69loop_do_always(cl_object v1restrictive, cl_object v2negate)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3form;
   v3form = L39loop_get_form();
   if (Null(v1restrictive)) { goto L2; }
   L44loop_disallow_conditional(0);
L2:;
   L45loop_disallow_anonymous_collectors();
   if (Null(v2negate)) { goto L7; }
   T0 = ECL_SYM("WHEN",907);
   goto L6;
L7:;
   T0 = ECL_SYM("UNLESS",885);
L6:;
   T1 = L40loop_construct_return(ECL_NIL);
   T2 = cl_list(3, T0, v3form, T1);
   L42loop_emit_body(T2);
   value0 = L43loop_emit_final_value(1, ECL_T);
   return value0;
  }
 }
}
/*      function definition for LOOP-DO-THEREIS                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L70loop_do_thereis(cl_object v1restrictive)
{
 cl_object T0, T1, T2, T3, T4;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(v1restrictive)) { goto L1; }
  L44loop_disallow_conditional(0);
L1:;
  L45loop_disallow_anonymous_collectors();
  L43loop_emit_final_value(0);
  T0 = L77loop_when_it_variable();
  T1 = L39loop_get_form();
  T2 = cl_list(3, ECL_SYM("SETQ",753), T0, T1);
  T3 = L40loop_construct_return(ecl_symbol_value(VV[65]));
  T4 = cl_list(3, ECL_SYM("WHEN",907), T2, T3);
  value0 = L42loop_emit_body(T4);
  return value0;
 }
}
/*      function definition for LOOP-DO-WHILE                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L71loop_do_while(cl_object v1negate, cl_object v2kwd)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3form;
   v3form = L39loop_get_form();
   L44loop_disallow_conditional(1, v2kwd);
   if (Null(v1negate)) { goto L4; }
   T0 = ECL_SYM("WHEN",907);
   goto L3;
L4:;
   T0 = ECL_SYM("UNLESS",885);
L3:;
   T1 = cl_list(3, T0, v3form, VV[80]);
   value0 = L41loop_pseudo_body(T1);
   return value0;
  }
 }
}
/*      function definition for LOOP-DO-WITH                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L72loop_do_with()
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  L44loop_disallow_conditional(1, VV[154]);
  {
   cl_object v1var;
   cl_object v2val;
   cl_object v3dtype;
   v1var = ECL_NIL;
   v2val = ECL_NIL;
   v3dtype = ECL_NIL;
   goto L7;
L6:;
   v1var = L36loop_pop_source();
   v3dtype = L50loop_optional_type(1, v1var);
   T0 = ecl_car(ecl_symbol_value(VV[43]));
   if (Null(L11loop_tequal(T0, VV[155]))) { goto L15; }
   L36loop_pop_source();
   v2val = L39loop_get_form();
   goto L14;
L15:;
   v2val = ECL_NIL;
L14:;
   if (Null(v1var)) { goto L18; }
   if (Null(L52loop_variable_p(v1var))) { goto L18; }
   L28loop_error(2, VV[156], v1var);
L18:;
   L53loop_make_variable(3, v1var, v2val, v3dtype);
   T0 = ecl_car(ecl_symbol_value(VV[43]));
   if (Null(L11loop_tequal(T0, VV[117]))) { goto L23; }
   L36loop_pop_source();
   goto L22;
L23:;
   value0 = L51loop_bind_block();
   return value0;
L22:;
L7:;
   goto L6;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for LOOP-HACK-ITERATION                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L74loop_hack_iteration(cl_object v1entry)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2pre_step_tests;
   cl_object v3steps;
   cl_object v4post_step_tests;
   cl_object v5pseudo_steps;
   cl_object v6pre_loop_pre_step_tests;
   cl_object v7pre_loop_steps;
   cl_object v8pre_loop_post_step_tests;
   cl_object v9pre_loop_pseudo_steps;
   cl_object v10tem;
   cl_object v11data;
   v2pre_step_tests = ECL_NIL;
   v3steps = ECL_NIL;
   v4post_step_tests = ECL_NIL;
   v5pseudo_steps = ECL_NIL;
   v6pre_loop_pre_step_tests = ECL_NIL;
   v7pre_loop_steps = ECL_NIL;
   v8pre_loop_post_step_tests = ECL_NIL;
   v9pre_loop_pseudo_steps = ECL_NIL;
   v10tem = ECL_NIL;
   v11data = ECL_NIL;
   goto L13;
L12:;
   T0 = ecl_car(v1entry);
   T1 = cl_symbol_function(T0);
   T2 = ecl_cdr(v1entry);
   v11data = cl_apply(2, T1, T2);
   v10tem = v11data;
   if (Null(ecl_car(v10tem))) { goto L20; }
   T0 = ecl_car(v10tem);
   v2pre_step_tests = CONS(T0,v2pre_step_tests);
   goto L18;
L20:;
   goto L18;
L18:;
   v10tem = ecl_cdr(v10tem);
   T0 = ecl_car(v10tem);
   T1 = cl_copy_list(T0);
   v3steps = ecl_nconc(v3steps,T1);
   v10tem = ecl_cdr(v10tem);
   if (Null(ecl_car(v10tem))) { goto L28; }
   T0 = ecl_car(v10tem);
   v4post_step_tests = CONS(T0,v4post_step_tests);
   goto L26;
L28:;
   goto L26;
L26:;
   v10tem = ecl_cdr(v10tem);
   T0 = ecl_car(v10tem);
   T1 = cl_copy_list(T0);
   v5pseudo_steps = ecl_nconc(v5pseudo_steps,T1);
   v10tem = ecl_cdr(v10tem);
   if (Null(ecl_symbol_value(VV[60]))) { goto L37; }
   L28loop_error(1, VV[158]);
L37:;
   if ((v10tem)!=ECL_NIL) { goto L39; }
   v10tem = v11data;
L39:;
   if (Null(ecl_car(v10tem))) { goto L42; }
   T0 = ecl_car(v10tem);
   v6pre_loop_pre_step_tests = CONS(T0,v6pre_loop_pre_step_tests);
L42:;
   v10tem = ecl_cdr(v10tem);
   T0 = ecl_car(v10tem);
   T1 = cl_copy_list(T0);
   v7pre_loop_steps = ecl_nconc(v7pre_loop_steps,T1);
   v10tem = ecl_cdr(v10tem);
   if (Null(ecl_car(v10tem))) { goto L48; }
   T0 = ecl_car(v10tem);
   v8pre_loop_post_step_tests = CONS(T0,v8pre_loop_post_step_tests);
L48:;
   T0 = ecl_cadr(v10tem);
   T1 = cl_copy_list(T0);
   v9pre_loop_pseudo_steps = ecl_nconc(v9pre_loop_pseudo_steps,T1);
   T0 = ecl_car(ecl_symbol_value(VV[43]));
   if ((L11loop_tequal(T0, VV[117]))!=ECL_NIL) { goto L54; }
   T0 = L20loop_make_desetq(v9pre_loop_pseudo_steps);
   T1 = LC73make_endtest(v8pre_loop_post_step_tests);
   T2 = L19loop_make_psetq(v7pre_loop_steps);
   T3 = LC73make_endtest(v6pre_loop_pre_step_tests);
   cl_set(VV[57],cl_listX(5, T0, T1, T2, T3, ecl_symbol_value(VV[57])));
   T0 = L20loop_make_desetq(v5pseudo_steps);
   T1 = LC73make_endtest(v4post_step_tests);
   T2 = L19loop_make_psetq(v3steps);
   T3 = LC73make_endtest(v2pre_step_tests);
   cl_set(VV[59],cl_listX(5, T0, T1, T2, T3, ecl_symbol_value(VV[59])));
   L51loop_bind_block();
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L54:;
   L36loop_pop_source();
   if ((ecl_function_dispatch(cl_env_copy,VV[350])(1, ecl_symbol_value(VV[31])) /*  LOOP-UNIVERSE-IMPLICIT-FOR-REQUIRED */)!=ECL_NIL) { goto L66; }
   T0 = ecl_car(ecl_symbol_value(VV[43]));
   T1 = ecl_function_dispatch(cl_env_copy,VV[315])(1, ecl_symbol_value(VV[31])) /*  LOOP-UNIVERSE-ITERATION-KEYWORDS */;
   v10tem = L14loop_lookup_keyword(T0, T1);
   if (Null(v10tem)) { goto L66; }
   L36loop_pop_source();
   v1entry = v10tem;
L66:;
L13:;
   goto L12;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function MAKE-ENDTEST                                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC73make_endtest(cl_object v1list_of_forms)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(v1list_of_forms==ECL_NIL)) { goto L1; }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  if (Null(ecl_memql(ECL_T,v1list_of_forms))) { goto L3; }
  value0 = VV[80];
  cl_env_copy->nvalues = 1;
  return value0;
L3:;
  v1list_of_forms = cl_nreverse(v1list_of_forms);
  T1 = ecl_cdr(v1list_of_forms);
  if (!(T1==ECL_NIL)) { goto L6; }
  T0 = ecl_car(v1list_of_forms);
  goto L5;
L6:;
  T0 = CONS(ECL_SYM("OR",616),v1list_of_forms);
L5:;
  value0 = cl_list(3, ECL_SYM("WHEN",907), T0, VV[80]);
  return value0;
 }
}
/*      function definition for LOOP-DO-FOR                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L75loop_do_for()
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v1var;
   cl_object v2data_type;
   cl_object v3keyword;
   cl_object v4first_arg;
   cl_object v5tem;
   v1var = L36loop_pop_source();
   v2data_type = L50loop_optional_type(1, v1var);
   v3keyword = L36loop_pop_source();
   v4first_arg = ECL_NIL;
   v5tem = ECL_NIL;
   v4first_arg = L39loop_get_form();
   if (!(ECL_SYMBOLP(v3keyword))) { goto L11; }
   T0 = ecl_function_dispatch(cl_env_copy,VV[352])(1, ecl_symbol_value(VV[31])) /*  LOOP-UNIVERSE-FOR-KEYWORDS */;
   v5tem = L14loop_lookup_keyword(v3keyword, T0);
   if ((v5tem)!=ECL_NIL) { goto L8; }
   goto L9;
L11:;
   goto L9;
L9:;
   L28loop_error(2, VV[159], v3keyword);
L8:;
   T0 = ecl_car(v5tem);
   T1 = ecl_cdr(v5tem);
   value0 = cl_apply(5, T0, v1var, v4first_arg, v2data_type, T1);
   return value0;
  }
 }
}
/*      function definition for LOOP-DO-REPEAT                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L76loop_do_repeat()
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  L44loop_disallow_conditional(1, VV[161]);
  {
   cl_object v1form;
   cl_object v2type;
   cl_object v3var;
   cl_object v4form;
   v1form = L39loop_get_form();
   if (!(ECL_FIXNUMP(v1form))) { goto L4; }
   v2type = ECL_SYM("FIXNUM",374);
   goto L3;
L4:;
   v2type = ECL_SYM("REAL",705);
L3:;
   T0 = cl_gensym(0);
   v3var = L53loop_make_variable(3, T0, v1form, v2type);
   T0 = cl_list(2, ECL_SYM("DECF",273), v3var);
   T1 = cl_list(2, ECL_SYM("MINUSP",560), T0);
   T2 = cl_list(3, ECL_SYM("WHEN",907), T1, VV[80]);
   v4form = cl_list(2, VV[1], T2);
   cl_set(VV[57],CONS(v4form,ecl_symbol_value(VV[57])));
   cl_set(VV[59],CONS(v4form,ecl_symbol_value(VV[59])));
   value0 = ecl_symbol_value(VV[59]);
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for LOOP-WHEN-IT-VARIABLE                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L77loop_when_it_variable()
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ecl_symbol_value(VV[65]);
  if ((value0)!=ECL_NIL) { goto L2; }
  T0 = cl_gensym(1, VV[163]);
  cl_set(VV[65],L53loop_make_variable(3, T0, ECL_NIL, ECL_NIL));
  value0 = ecl_symbol_value(VV[65]);
  cl_env_copy->nvalues = 1;
  return value0;
L2:;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for LOOP-ANSI-FOR-EQUALS                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L78loop_ansi_for_equals(cl_object v1var, cl_object v2val, cl_object v3data_type)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  L54loop_make_iteration_variable(v1var, ECL_NIL, v3data_type);
  T0 = ecl_car(ecl_symbol_value(VV[43]));
  if (Null(L11loop_tequal(T0, VV[164]))) { goto L2; }
  L36loop_pop_source();
  T0 = L39loop_get_form();
  T1 = cl_list(2, v1var, T0);
  T2 = cl_list(2, v1var, v2val);
  value0 = cl_listX(7, ECL_NIL, T1, ECL_NIL, ECL_NIL, ECL_NIL, T2, VV[165]);
  return value0;
L2:;
  T0 = cl_list(2, v1var, v2val);
  value0 = cl_listX(3, ECL_NIL, T0, VV[165]);
  return value0;
 }
}
/*      function definition for LOOP-FOR-ACROSS                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L79loop_for_across(cl_object v1var, cl_object v2val, cl_object v3data_type)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  L54loop_make_iteration_variable(v1var, ECL_NIL, v3data_type);
  {
   cl_object v4;
   cl_object v5;
   v4 = cl_gensym(1, VV[167]);
   v5 = cl_gensym(1, VV[168]);
   {
    cl_object v7;                                 /*  VECTOR-FORM     */
    cl_object v8;                                 /*  CONSTANTP       */
    cl_object v9;                                 /*  VECTOR-VALUE    */
    value0 = L25loop_constant_fold_if_possible(2, v2val, ECL_SYM("VECTOR",900));
    {
     const int v10 = cl_env_copy->nvalues;
     v7 = value0;
     cl_object v11;
     v11 = (v10<=1)? ECL_NIL : cl_env_copy->values[1];
     v8 = v11;
     v11 = (v10<=2)? ECL_NIL : cl_env_copy->values[2];
     v9 = v11;
    }
    if (!(ECL_CONSP(v7))) { goto L7; }
    T1 = ecl_car(v7);
    if (!((T1)==(ECL_SYM("THE",858)))) { goto L7; }
    T0 = ecl_cadr(v7);
    goto L6;
L7:;
    T0 = ECL_SYM("VECTOR",900);
L6:;
    L53loop_make_variable(3, v4, v7, T0);
    L53loop_make_variable(3, v5, ecl_make_fixnum(0), ECL_SYM("FIXNUM",374));
    {
     cl_fixnum v10length;
     cl_object v11length_form;
     cl_object v12first_test;
     cl_object v13other_test;
     cl_object v14step;
     cl_object v15pstep;
     v10length = 0;
     if ((v8)!=ECL_NIL) { goto L13; }
     {
      cl_object v16v;
      v16v = cl_gensym(1, VV[169]);
      T0 = cl_list(2, ECL_SYM("LENGTH",478), v4);
      T1 = cl_list(3, ECL_SYM("SETQ",753), v16v, T0);
      cl_set(VV[56],CONS(T1,ecl_symbol_value(VV[56])));
      v11length_form = L53loop_make_variable(3, v16v, ecl_make_fixnum(0), ECL_SYM("FIXNUM",374));
      goto L12;
     }
L13:;
     v10length = ecl_length(v9);
     v11length_form = ecl_make_fixnum(v10length);
L12:;
     v12first_test = cl_list(3, ECL_SYM(">=",78), v5, v11length_form);
     v13other_test = v12first_test;
     T0 = cl_list(3, ECL_SYM("AREF",94), v4, v5);
     v14step = cl_list(2, v1var, T0);
     T0 = cl_list(2, ECL_SYM("1+",72), v5);
     v15pstep = cl_list(2, v5, T0);
     if (Null(v8)) { goto L23; }
     v12first_test = ecl_make_bool((v10length)==(0));
     if (!((v10length)<=(1))) { goto L23; }
     v13other_test = ECL_T;
L23:;
     if ((v12first_test)==(v13other_test)) { goto L31; }
     T0 = cl_list(4, v12first_test, v14step, ECL_NIL, v15pstep);
     goto L29;
L31:;
     T0 = ECL_NIL;
     goto L29;
L29:;
     value0 = cl_listX(5, v13other_test, v14step, ECL_NIL, v15pstep, T0);
     return value0;
    }
   }
  }
 }
}
/*      function definition for LOOP-LIST-STEP                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L80loop_list_step(cl_object v1listvar)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2stepper;
   T0 = ecl_car(ecl_symbol_value(VV[43]));
   if (Null(L11loop_tequal(T0, VV[171]))) { goto L2; }
   L36loop_pop_source();
   v2stepper = L39loop_get_form();
   goto L1;
L2:;
   v2stepper = VV[172];
L1:;
   if (!(ECL_CONSP(v2stepper))) { goto L5; }
   T0 = ecl_car(v2stepper);
   if (!((T0)==(ECL_SYM("QUOTE",681)))) { goto L5; }
   L29loop_warn(1, VV[173]);
   T0 = cl_list(3, ECL_SYM("FUNCALL",396), v2stepper, v1listvar);
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = T0;
   return cl_env_copy->values[0];
L5:;
   if (!(ECL_CONSP(v2stepper))) { goto L9; }
   T0 = ecl_car(v2stepper);
   if (!((T0)==(ECL_SYM("FUNCTION",398)))) { goto L9; }
   T0 = ecl_cadr(v2stepper);
   T1 = cl_list(2, T0, v1listvar);
   T2 = ecl_cadr(v2stepper);
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = T2;
   cl_env_copy->values[0] = T1;
   return cl_env_copy->values[0];
L9:;
   T0 = cl_gensym(1, VV[174]);
   T1 = L53loop_make_variable(3, T0, v2stepper, ECL_SYM("FUNCTION",398));
   T2 = cl_list(3, ECL_SYM("FUNCALL",396), T1, v1listvar);
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = T2;
   return cl_env_copy->values[0];
  }
 }
}
/*      function definition for LOOP-FOR-ON                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L81loop_for_on(cl_object v1var, cl_object v2val, cl_object v3data_type)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v5;                                  /*  LIST            */
   cl_object v6;                                  /*  CONSTANTP       */
   cl_object v7;                                  /*  LIST-VALUE      */
   value0 = L25loop_constant_fold_if_possible(1, v2val);
   {
    const int v8 = cl_env_copy->nvalues;
    v5 = value0;
    cl_object v9;
    v9 = (v8<=1)? ECL_NIL : cl_env_copy->values[1];
    v6 = v9;
    v9 = (v8<=2)? ECL_NIL : cl_env_copy->values[2];
    v7 = v9;
   }
   {
    cl_object v8listvar;
    v8listvar = v1var;
    if (Null(v1var)) { goto L4; }
    if (!(ECL_SYMBOLP(v1var))) { goto L4; }
    L54loop_make_iteration_variable(v1var, v5, v3data_type);
    goto L3;
L4:;
    v8listvar = cl_gensym(0);
    L53loop_make_variable(3, v8listvar, v5, ECL_NIL);
    L54loop_make_iteration_variable(v1var, ECL_NIL, v3data_type);
L3:;
    {
     cl_object v9list_step;
     v9list_step = L80loop_list_step(v8listvar);
     {
      cl_object v10first_endtest;
      cl_object v11other_endtest;
      v10first_endtest = cl_list(2, ECL_SYM("ATOM",121), v8listvar);
      v11other_endtest = v10first_endtest;
      if (Null(v6)) { goto L12; }
      if (!(ECL_LISTP(v7))) { goto L12; }
      v10first_endtest = ecl_make_bool(v7==ECL_NIL);
L12:;
      if (!((v1var)==(v8listvar))) { goto L16; }
      T0 = cl_list(2, v8listvar, v9list_step);
      value0 = cl_list(8, ECL_NIL, T0, v11other_endtest, ECL_NIL, ECL_NIL, ECL_NIL, v10first_endtest, ECL_NIL);
      return value0;
L16:;
      {
       cl_object v12;
       cl_object v13;
       v12 = cl_list(2, v1var, v8listvar);
       v13 = cl_list(2, v8listvar, v9list_step);
       if ((v10first_endtest)==(v11other_endtest)) { goto L22; }
       T0 = cl_list(4, v10first_endtest, v12, ECL_NIL, v13);
       goto L20;
L22:;
       T0 = ECL_NIL;
       goto L20;
L20:;
       value0 = cl_listX(5, v11other_endtest, v12, ECL_NIL, v13, T0);
       return value0;
      }
     }
    }
   }
  }
 }
}
/*      function definition for LOOP-FOR-IN                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L82loop_for_in(cl_object v1var, cl_object v2val, cl_object v3data_type)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v5;                                  /*  LIST            */
   cl_object v6;                                  /*  CONSTANTP       */
   cl_object v7;                                  /*  LIST-VALUE      */
   value0 = L25loop_constant_fold_if_possible(1, v2val);
   {
    const int v8 = cl_env_copy->nvalues;
    v5 = value0;
    cl_object v9;
    v9 = (v8<=1)? ECL_NIL : cl_env_copy->values[1];
    v6 = v9;
    v9 = (v8<=2)? ECL_NIL : cl_env_copy->values[2];
    v7 = v9;
   }
   {
    cl_object v8listvar;
    v8listvar = cl_gensym(1, VV[176]);
    L54loop_make_iteration_variable(v1var, ECL_NIL, v3data_type);
    L53loop_make_variable(3, v8listvar, v5, ECL_SYM("LIST",483));
    {
     cl_object v9list_step;
     v9list_step = L80loop_list_step(v8listvar);
     {
      cl_object v10first_endtest;
      cl_object v11other_endtest;
      cl_object v12step;
      cl_object v13pseudo_step;
      v10first_endtest = cl_list(2, ECL_SYM("ENDP",332), v8listvar);
      v11other_endtest = v10first_endtest;
      T0 = cl_list(2, ECL_SYM("CONS-CAR",1858), v8listvar);
      v12step = cl_list(2, v1var, T0);
      v13pseudo_step = cl_list(2, v8listvar, v9list_step);
      if (Null(v6)) { goto L10; }
      if (!(ECL_LISTP(v7))) { goto L10; }
      v10first_endtest = ecl_make_bool(v7==ECL_NIL);
L10:;
      if ((v10first_endtest)==(v11other_endtest)) { goto L16; }
      T0 = cl_list(4, v10first_endtest, v12step, ECL_NIL, v13pseudo_step);
      goto L14;
L16:;
      T0 = ECL_NIL;
      goto L14;
L14:;
      value0 = cl_listX(5, v11other_endtest, v12step, ECL_NIL, v13pseudo_step, T0);
      return value0;
     }
    }
   }
  }
 }
}
/*      function definition for MAKE-LOOP-PATH                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L83make_loop_path(cl_narg narg, ...)
{
 cl_object T0;
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
   cl_parse_key(args,5,L83make_loop_pathkeys,keyvars,NULL,FALSE);
   ecl_va_end(args);
   v1 = keyvars[0];
   v2 = keyvars[1];
   v3 = keyvars[2];
   v4 = keyvars[3];
   v5 = keyvars[4];
  }
  T0 = cl_list(5, v1, v2, v3, v4, v5);
  value0 = cl_make_array(5, VV[180], ECL_SYM("ELEMENT-TYPE",1246), ECL_T, ECL_SYM("INITIAL-CONTENTS",1278), T0);
  return value0;
 }
}
/*      function definition for ADD-LOOP-PATH                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L85add_loop_path(cl_narg narg, cl_object v1names, cl_object v2function, cl_object v3universe, ...)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<3)) FEwrong_num_arguments_anonym();
 {
  cl_object v4preposition_groups;
  cl_object v5inclusive_permitted;
  cl_object v6user_data;
  ecl_va_list args; ecl_va_start(args,v3universe,narg,3);
  {
   cl_object keyvars[6];
   cl_parse_key(args,3,L85add_loop_pathkeys,keyvars,NULL,FALSE);
   ecl_va_end(args);
   v4preposition_groups = keyvars[0];
   v5inclusive_permitted = keyvars[1];
   v6user_data = keyvars[2];
  }
  if (ECL_LISTP(v1names)) { goto L1; }
  v1names = ecl_list1(v1names);
L1:;
  {
   cl_object v7;
   cl_object v8;
   v7 = ecl_function_dispatch(cl_env_copy,VV[367])(1, v3universe) /*  LOOP-UNIVERSE-PATH-KEYWORDS */;
   {
    cl_object v9;
    v9 = (ECL_SYM("SYMBOL-NAME",845)->symbol.gfdef);
    {
     cl_object v10;
     cl_object v11;
     v10 = ECL_NIL;
     {
      cl_object v12;
      v12 = v1names;
      if (ecl_unlikely(!ECL_LISTP(v12))) FEtype_error_list(v12);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v11 = v12;
     }
     {
      cl_object v12;
      cl_object v13;
      v12 = ecl_list1(ECL_NIL);
      v13 = v12;
L14:;
      if (!(ecl_endp(v11))) { goto L16; }
      goto L15;
L16:;
      v10 = _ecl_car(v11);
      {
       cl_object v14;
       v14 = _ecl_cdr(v11);
       if (ecl_unlikely(!ECL_LISTP(v14))) FEtype_error_list(v14);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v11 = v14;
      }
      {
       cl_object v14;
       v14 = v13;
       if (ecl_unlikely(ECL_ATOM(v14))) FEtype_error_cons(v14);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       T1 = v14;
      }
      T2 = ecl_function_dispatch(cl_env_copy,v9)(1, v10);
      v13 = ecl_list1(T2);
      (ECL_CONS_CDR(T1)=v13,T1);
      goto L14;
L15:;
      T0 = ecl_cdr(v12);
      goto L6;
     }
    }
   }
L6:;
   {
    cl_object v9;
    {
     cl_object v10;
     v10 = ecl_make_cfun((cl_objectfn_fixed)LC84__lambda411,ECL_NIL,Cblock,1);
     v9 = v10;
    }
    {
     cl_object v10;
     cl_object v11;
     v10 = ECL_NIL;
     {
      cl_object v12;
      v12 = v4preposition_groups;
      if (ecl_unlikely(!ECL_LISTP(v12))) FEtype_error_list(v12);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v11 = v12;
     }
     {
      cl_object v12;
      cl_object v13;
      v12 = ecl_list1(ECL_NIL);
      v13 = v12;
L40:;
      if (!(ecl_endp(v11))) { goto L42; }
      goto L41;
L42:;
      v10 = _ecl_car(v11);
      {
       cl_object v14;
       v14 = _ecl_cdr(v11);
       if (ecl_unlikely(!ECL_LISTP(v14))) FEtype_error_list(v14);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v11 = v14;
      }
      {
       cl_object v14;
       v14 = v13;
       if (ecl_unlikely(ECL_ATOM(v14))) FEtype_error_cons(v14);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       T2 = v14;
      }
      T3 = ecl_function_dispatch(cl_env_copy,v9)(1, v10);
      v13 = ecl_list1(T3);
      (ECL_CONS_CDR(T2)=v13,T2);
      goto L40;
L41:;
      T1 = ecl_cdr(v12);
      goto L32;
     }
    }
   }
L32:;
   v8 = L83make_loop_path(10, VV[182], T0, ECL_SYM("FUNCTION",1264), v2function, VV[183], v6user_data, VV[184], T1, VV[185], v5inclusive_permitted);
   {
    cl_object v9;
    v9 = v1names;
    goto L62;
L61:;
    {
     cl_object v10name;
     v10name = ecl_car(v9);
     T0 = ecl_symbol_name(v10name);
     si_hash_set(T0, v7, v8);
    }
    v9 = ecl_cdr(v9);
L62:;
    if (Null(v9)) { goto L69; }
    goto L61;
L69:;
   }
   value0 = v8;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function LAMBDA411                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC84__lambda411(cl_object v1x)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ECL_LISTP(v1x))) { goto L1; }
  value0 = v1x;
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  value0 = ecl_list1(v1x);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for LOOP-FOR-BEING                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L86loop_for_being(cl_object v1var, cl_object v2val, cl_object v3data_type)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v4path;
   cl_object v5data;
   cl_object v6inclusive;
   cl_object v7stuff;
   cl_object v8initial_prepositions;
   v4path = ECL_NIL;
   v5data = ECL_NIL;
   v6inclusive = ECL_NIL;
   v7stuff = ECL_NIL;
   v8initial_prepositions = ECL_NIL;
   if (Null(L13loop_tmember(v2val, VV[186]))) { goto L7; }
   v4path = L36loop_pop_source();
   goto L6;
L7:;
   T0 = ecl_car(ecl_symbol_value(VV[43]));
   if (Null(L11loop_tequal(T0, VV[117]))) { goto L10; }
   L36loop_pop_source();
   v6inclusive = ECL_T;
   T0 = ecl_car(ecl_symbol_value(VV[43]));
   if ((L13loop_tmember(T0, VV[187]))!=ECL_NIL) { goto L15; }
   T0 = ecl_car(ecl_symbol_value(VV[43]));
   L28loop_error(2, VV[188], T0);
L15:;
   L36loop_pop_source();
   v4path = L36loop_pop_source();
   T0 = cl_list(2, VV[189], v2val);
   v8initial_prepositions = ecl_list1(T0);
   goto L6;
L10:;
   L28loop_error(1, VV[190]);
L6:;
   if (ECL_SYMBOLP(v4path)) { goto L22; }
   L28loop_error(2, VV[191], v4path);
   goto L21;
L22:;
   T0 = ecl_function_dispatch(cl_env_copy,VV[367])(1, ecl_symbol_value(VV[31])) /*  LOOP-UNIVERSE-PATH-KEYWORDS */;
   v5data = L14loop_lookup_keyword(v4path, T0);
   if ((v5data)!=ECL_NIL) { goto L24; }
   L28loop_error(2, VV[192], v4path);
   goto L21;
L24:;
   if (Null(v6inclusive)) { goto L21; }
   if ((ecl_function_dispatch(cl_env_copy,VV[369])(1, v5data) /*  LOOP-PATH-INCLUSIVE-PERMITTED */)!=ECL_NIL) { goto L21; }
   L28loop_error(2, VV[193], v4path);
L21:;
   {
    cl_object v9;
    cl_object v10;
    cl_object v11;
    cl_object v12fun;
    v9 = ecl_function_dispatch(cl_env_copy,VV[370])(1, v5data) /*  LOOP-PATH-FUNCTION */;
    T0 = ecl_function_dispatch(cl_env_copy,VV[371])(1, v5data) /*  LOOP-PATH-PREPOSITION-GROUPS */;
    T1 = L90loop_collect_prepositional_phrases(2, T0, ECL_T);
    v10 = ecl_nconc(v8initial_prepositions,T1);
    v11 = ecl_function_dispatch(cl_env_copy,VV[372])(1, v5data) /*  LOOP-PATH-USER-DATA */;
    v12fun = v9;
    if (!(ECL_SYMBOLP(v12fun))) { goto L34; }
    v12fun = cl_symbol_function(v12fun);
L34:;
    if (Null(v6inclusive)) { goto L38; }
    v7stuff = cl_apply(7, v12fun, v1var, v3data_type, v10, VV[194], ECL_T, v11);
    goto L37;
L38:;
    v7stuff = cl_apply(5, v12fun, v1var, v3data_type, v10, v11);
L37:;
   }
   if (Null(ecl_symbol_value(VV[48]))) { goto L40; }
   L28loop_error(2, VV[195], ecl_symbol_value(VV[48]));
L40:;
   {
    cl_fixnum v9;
    v9 = ecl_length(v7stuff);
    if (!((v9)==(6))) { goto L47; }
    goto L42;
    goto L45;
L47:;
    goto L45;
L45:;
    if (!((v9)==(10))) { goto L50; }
    goto L42;
    goto L43;
L50:;
    goto L43;
   }
L43:;
   L28loop_error(2, VV[198], v4path);
L42:;
   {
    cl_object v9;
    cl_object v10l;
    cl_object v11x;
    v9 = ecl_car(v7stuff);
    v10l = v9;
    v11x = ECL_NIL;
    goto L58;
L57:;
    v11x = ecl_car(v10l);
    if (!(ECL_ATOM(v11x))) { goto L61; }
    L54loop_make_iteration_variable(v11x, ECL_NIL, ECL_NIL);
    goto L60;
L61:;
    T0 = ecl_car(v11x);
    T1 = ecl_cadr(v11x);
    T2 = ecl_caddr(v11x);
    L54loop_make_iteration_variable(T0, T1, T2);
L60:;
    v10l = ecl_cdr(v10l);
L58:;
    if (v10l==ECL_NIL) { goto L66; }
    goto L57;
L66:;
   }
   T0 = ecl_cadr(v7stuff);
   T1 = cl_reverse(T0);
   cl_set(VV[56],ecl_nconc(T1,ecl_symbol_value(VV[56])));
   value0 = ecl_cddr(v7stuff);
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for LOOP-NAMED-VAR                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L87loop_named_var(cl_object v1name)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2tem;
   {
    cl_object v3;
    v3 = L12loop_tassoc(v1name, ecl_symbol_value(VV[48]));
    if (ecl_unlikely(!ECL_LISTP(v3))) FEtype_error_list(v3);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v2tem = v3;
   }
   if (!(v2tem==ECL_NIL)) { goto L4; }
   T0 = cl_gensym(0);
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = T0;
   return cl_env_copy->values[0];
L4:;
   cl_set(VV[48],cl_delete(2, v2tem, ecl_symbol_value(VV[48])));
   T0 = ecl_cdr(v2tem);
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = ECL_T;
   cl_env_copy->values[0] = T0;
   return cl_env_copy->values[0];
  }
 }
}
/*      function definition for LOOP-COLLECT-PREPOSITIONAL-PHRASES    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L90loop_collect_prepositional_phrases(cl_narg narg, cl_object v1preposition_groups, ...)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>3)) FEwrong_num_arguments_anonym();
 {
  cl_object v2using_allowed;
  cl_object v3initial_phrases;
  va_list args; va_start(args,v1preposition_groups);
  env0 = ECL_NIL;
  CLV0 = env0 = CONS(v1preposition_groups,env0);  /*  PREPOSITION-GROUPS */
  {
   int i = 1;
   if (i >= narg) {
    v2using_allowed = ECL_NIL;
   } else {
    i++;
    v2using_allowed = va_arg(args,cl_object);
   }
   if (i >= narg) {
    v3initial_phrases = ECL_NIL;
   } else {
    i++;
    v3initial_phrases = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v4;
   cl_object v5;
   cl_object v6token;
   cl_object v7prepositional_phrases;
   cl_object v8this_group;
   cl_object v9this_prep;
   cl_object v10disallowed_prepositions;
   cl_object v11used_prepositions;
   {
    cl_object v12;
    {
     cl_object v13;
     v13 = ecl_make_cclosure_va((cl_objectfn)LC89__lambda444,env0,Cblock,1);
     v12 = v13;
    }
    {
     cl_object v13;
     cl_object v14;
     v13 = ECL_NIL;
     {
      cl_object v15;
      v15 = v3initial_phrases;
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
L11:;
      if (!(ecl_endp(v14))) { goto L13; }
      goto L12;
L13:;
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
       v17 = ecl_function_dispatch(cl_env_copy,v12)(1, v13);
       {
        cl_object v18;
        v18 = v16;
        if (ecl_unlikely(ECL_ATOM(v18))) FEtype_error_cons(v18);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        T0 = v18;
       }
       (ECL_CONS_CDR(T0)=v17,T0);
       if (Null(v17)) { goto L21; }
      }
      T0 = ecl_cdr(v16);
      v16 = ecl_last(T0,1);
L21:;
      goto L11;
L12:;
      v4 = ecl_cdr(v15);
      goto L3;
     }
    }
   }
L3:;
   {
    cl_object v12;
    v12 = (ECL_SYM("CAR",182)->symbol.gfdef);
    {
     cl_object v13;
     cl_object v14;
     v13 = ECL_NIL;
     {
      cl_object v15;
      v15 = v3initial_phrases;
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
L39:;
      if (!(ecl_endp(v14))) { goto L41; }
      goto L40;
L41:;
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
       T0 = v17;
      }
      T1 = ecl_function_dispatch(cl_env_copy,v12)(1, v13);
      v16 = ecl_list1(T1);
      (ECL_CONS_CDR(T0)=v16,T0);
      goto L39;
L40:;
      v5 = ecl_cdr(v15);
      goto L31;
     }
    }
   }
L31:;
   v6token = ECL_NIL;
   v7prepositional_phrases = v3initial_phrases;
   v8this_group = ECL_NIL;
   v9this_prep = ECL_NIL;
   v10disallowed_prepositions = v4;
   v11used_prepositions = v5;
   goto L65;
L64:;
   v6token = ecl_car(ecl_symbol_value(VV[43]));
   {
    cl_object v12;
    v12 = ECL_CONS_CAR(CLV0);
    goto L73;
L72:;
    {
     cl_object v13group;
     v13group = ecl_car(v12);
     {
      cl_object v14;
      v14 = LC88in_group_p(v6token, v13group);
      {
       bool v15;
       v15 = ECL_SYMBOLP(v14);
       if (ecl_unlikely(!(v15)))
         FEwrong_type_argument(ECL_SYM("SYMBOL",842),v14);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      v9this_prep = v14;
     }
     if (Null(v9this_prep)) { goto L77; }
     v8this_group = v13group;
     goto L69;
L77:;
    }
    v12 = ecl_cdr(v12);
L73:;
    if (Null(v12)) { goto L85; }
    goto L72;
L85:;
   }
L69:;
   if (Null(v8this_group)) { goto L88; }
   if (Null(ecl_memql(v9this_prep,v10disallowed_prepositions))) { goto L90; }
   if (Null(ecl_memql(v9this_prep,v11used_prepositions))) { goto L93; }
   T0 = VV[200];
   goto L92;
L93:;
   T0 = VV[201];
L92:;
   L28loop_error(2, T0, v6token);
L90:;
   if (!(ECL_LISTP(v8this_group))) { goto L97; }
   v11used_prepositions = ecl_append(v8this_group,v11used_prepositions);
   goto L96;
L97:;
   v11used_prepositions = CONS(v8this_group,v11used_prepositions);
L96:;
   L36loop_pop_source();
   T0 = L39loop_get_form();
   T1 = cl_list(2, v9this_prep, T0);
   v7prepositional_phrases = CONS(T1,v7prepositional_phrases);
   goto L87;
L88:;
   if (Null(v2using_allowed)) { goto L101; }
   if (Null(L11loop_tequal(v6token, VV[202]))) { goto L101; }
   L36loop_pop_source();
   {
    cl_object v12;
    cl_object v13z;
    cl_object v14tem;
    v12 = L36loop_pop_source();
    v13z = v12;
    v14tem = ECL_NIL;
    goto L110;
L109:;
    if (Null(ecl_cadr(v13z))) { goto L112; }
    T0 = ecl_car(v13z);
    v14tem = L12loop_tassoc(T0, ecl_symbol_value(VV[48]));
    if (Null(v14tem)) { goto L114; }
    T0 = ecl_car(v13z);
    T1 = ecl_cadr(v13z);
    T2 = ecl_cadr(v14tem);
    L28loop_error(4, VV[203], T0, T1, T2);
    goto L112;
L114:;
    T0 = ecl_car(v13z);
    T1 = ecl_cadr(v13z);
    T2 = CONS(T0,T1);
    cl_set(VV[48],CONS(T2,ecl_symbol_value(VV[48])));
L112:;
    if (ecl_symbol_value(VV[43])==ECL_NIL) { goto L120; }
    T0 = ecl_car(ecl_symbol_value(VV[43]));
    if (!(ECL_SYMBOLP(T0))) { goto L118; }
    goto L119;
L120:;
L119:;
    goto L87;
L118:;
    v13z = L36loop_pop_source();
L110:;
    goto L109;
    goto L87;
   }
L101:;
   value0 = cl_nreverse(v7prepositional_phrases);
   return value0;
L87:;
   v8this_group = ECL_NIL;
   v9this_prep = ECL_NIL;
L65:;
   if (ecl_symbol_value(VV[43])==ECL_NIL) { goto L128; }
   goto L64;
L128:;
   value0 = cl_nreverse(v7prepositional_phrases);
   return value0;
  }
 }
}
/*      local function IN-GROUP-P                                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC88in_group_p(cl_object v1x, cl_object v2group)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = L13loop_tmember(v1x, v2group);
  value0 = ecl_car(T0);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      closure LAMBDA444                                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC89__lambda444(cl_narg narg, cl_object v1x, ...)
{
 cl_object T0;
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV0 = env0;                                     /*  PREPOSITION-GROUPS */
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=1)) FEwrong_num_arguments_anonym();
 {
TTL:
  {
   cl_object v2;
   v2 = ecl_car(v1x);
   {
    cl_object v3;
    v3 = ecl_function_dispatch(cl_env_copy,VV[321])(2, ECL_CONS_CAR(CLV0), ecl_make_fixnum(0)) /*  MAKE-SEQ-ITERATOR */;
L4:;
    if ((v3)!=ECL_NIL) { goto L6; }
    T0 = ECL_NIL;
    goto L1;
L6:;
    {
     cl_object v4;
     v4 = ecl_function_dispatch(cl_env_copy,VV[322])(2, ECL_CONS_CAR(CLV0), v3) /*  SEQ-ITERATOR-REF */;
     if (Null(LC88in_group_p(v2, v4))) { goto L8; }
     T0 = v4;
     goto L1;
    }
L8:;
    v3 = ecl_function_dispatch(cl_env_copy,VV[323])(2, ECL_CONS_CAR(CLV0), v3) /*  SEQ-ITERATOR-NEXT */;
    goto L4;
   }
  }
L1:;
  value0 = cl_copy_list(T0);
  return value0;
 }
 }
}
/*      function definition for LOOP-SEQUENCER                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L91loop_sequencer(cl_object v1indexv, cl_object v2indexv_type, cl_object v3indexv_user_specified_p, cl_object v4variable, cl_object v5variable_type, cl_object v6sequence_variable, cl_object v7sequence_type, cl_object v8step_hack, cl_object v9default_top, cl_object v10prep_phrases)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v11;
   cl_object v12endform;
   cl_object v13sequencep;
   cl_object v14testfn;
   cl_object v15test;
   cl_object v16stepby;
   cl_object v17stepby_constantp;
   cl_object v18step;
   cl_object v19dir;
   cl_object v20inclusive_iteration;
   cl_object v21start_given;
   cl_object v22start_value;
   cl_object v23start_constantp;
   cl_object v24limit_given;
   cl_object v25limit_constantp;
   cl_object v26limit_value;
   value0 = L47loop_typed_init(v2indexv_type);
   if ((value0)!=ECL_NIL) { goto L4; }
   T0 = ecl_make_fixnum(0);
   goto L2;
L4:;
   T0 = value0;
   goto L2;
L2:;
   v11 = ecl_one_plus(T0);
   v12endform = ECL_NIL;
   v13sequencep = ECL_NIL;
   v14testfn = ECL_NIL;
   v15test = ECL_NIL;
   v16stepby = v11;
   v17stepby_constantp = ECL_T;
   v18step = ECL_NIL;
   v19dir = ECL_NIL;
   v20inclusive_iteration = ECL_NIL;
   v21start_given = ECL_NIL;
   v22start_value = ECL_NIL;
   v23start_constantp = ECL_NIL;
   v24limit_given = ECL_NIL;
   v25limit_constantp = ECL_NIL;
   v26limit_value = ECL_NIL;
   if (Null(v4variable)) { goto L21; }
   L54loop_make_iteration_variable(v4variable, ECL_NIL, v5variable_type);
L21:;
   {
    cl_object v27l;
    cl_object v28prep;
    cl_object v29form;
    cl_object v30odir;
    v27l = v10prep_phrases;
    v28prep = ECL_NIL;
    v29form = ECL_NIL;
    v30odir = ECL_NIL;
    goto L30;
L29:;
    v28prep = ecl_caar(v27l);
    v29form = ecl_cadar(v27l);
    {
     cl_object v31;
     v31 = v28prep;
     if (!(ecl_eql(v31,VV[204]))) { goto L43; }
     goto L40;
     goto L41;
L43:;
     goto L41;
L41:;
     if (!(ecl_eql(v31,VV[189]))) { goto L38; }
     goto L39;
L40:;
L39:;
     v13sequencep = ECL_T;
     L53loop_make_variable(3, v6sequence_variable, v29form, v7sequence_type);
     goto L36;
L38:;
     if (!(ecl_eql(v31,VV[207]))) { goto L53; }
     goto L50;
     goto L51;
L53:;
     goto L51;
L51:;
     if (!(ecl_eql(v31,VV[209]))) { goto L57; }
     goto L50;
     goto L55;
L57:;
     goto L55;
L55:;
     if (!(ecl_eql(v31,VV[211]))) { goto L48; }
     goto L49;
L50:;
L49:;
     v21start_given = ECL_T;
     if (!((v28prep)==(VV[209]))) { goto L63; }
     v19dir = VV[213];
     goto L62;
L63:;
     if (!((v28prep)==(VV[211]))) { goto L62; }
     v19dir = ECL_SYM("UP",1349);
L62:;
     value0 = L25loop_constant_fold_if_possible(2, v29form, v2indexv_type);
     {
      const int v32 = cl_env_copy->nvalues;
      v29form = value0;
      cl_object v33;
      v33 = (v32<=1)? ECL_NIL : cl_env_copy->values[1];
      v23start_constantp = v33;
      v33 = (v32<=2)? ECL_NIL : cl_env_copy->values[2];
      v22start_value = v33;
     }
     L54loop_make_iteration_variable(v1indexv, v29form, v2indexv_type);
     goto L36;
L48:;
     if (Null(ecl_memql(v31,VV[214]))) { goto L70; }
     if (Null(L11loop_tequal(v28prep, VV[215]))) { goto L73; }
     v19dir = ECL_SYM("UP",1349);
     v20inclusive_iteration = ECL_SYM("UP",1349);
     goto L72;
L73:;
     if (Null(L11loop_tequal(v28prep, VV[216]))) { goto L77; }
     v20inclusive_iteration = ECL_T;
     goto L72;
L77:;
     if (Null(L11loop_tequal(v28prep, VV[217]))) { goto L80; }
     v19dir = VV[213];
     v20inclusive_iteration = VV[213];
     goto L72;
L80:;
     if (Null(L11loop_tequal(v28prep, VV[218]))) { goto L84; }
     v19dir = VV[213];
     goto L72;
L84:;
     if (Null(L11loop_tequal(v28prep, VV[219]))) { goto L72; }
     v19dir = ECL_SYM("UP",1349);
L72:;
     v24limit_given = ECL_T;
     value0 = L25loop_constant_fold_if_possible(2, v29form, v2indexv_type);
     {
      const int v32 = cl_env_copy->nvalues;
      v29form = value0;
      cl_object v33;
      v33 = (v32<=1)? ECL_NIL : cl_env_copy->values[1];
      v25limit_constantp = v33;
      v33 = (v32<=2)? ECL_NIL : cl_env_copy->values[2];
      v26limit_value = v33;
     }
     if (Null(v25limit_constantp)) { goto L94; }
     v12endform = cl_list(2, ECL_SYM("QUOTE",681), v26limit_value);
     goto L93;
L94:;
     T0 = cl_gensym(1, VV[220]);
     v12endform = L53loop_make_variable(3, T0, v29form, v2indexv_type);
L93:;
     goto L36;
L70:;
     if (!(ecl_eql(v31,VV[171]))) { goto L96; }
     value0 = L25loop_constant_fold_if_possible(2, v29form, v2indexv_type);
     {
      const int v32 = cl_env_copy->nvalues;
      v29form = value0;
      cl_object v33;
      v33 = (v32<=1)? ECL_NIL : cl_env_copy->values[1];
      v17stepby_constantp = v33;
      v33 = (v32<=2)? ECL_NIL : cl_env_copy->values[2];
      v16stepby = v33;
     }
     if ((v17stepby_constantp)!=ECL_NIL) { goto L36; }
     v16stepby = cl_gensym(1, VV[221]);
     L53loop_make_variable(3, v16stepby, v29form, v2indexv_type);
     goto L36;
L96:;
     L28loop_error(2, VV[222], v28prep);
    }
L36:;
    if (Null(v30odir)) { goto L102; }
    if (Null(v19dir)) { goto L102; }
    if ((v19dir)==(v30odir)) { goto L102; }
    L28loop_error(1, VV[223]);
L102:;
    v30odir = v19dir;
    v27l = ecl_cdr(v27l);
L30:;
    if (v27l==ECL_NIL) { goto L110; }
    goto L29;
L110:;
   }
   if (Null(v6sequence_variable)) { goto L112; }
   if ((v13sequencep)!=ECL_NIL) { goto L112; }
   L28loop_error(1, VV[224]);
L112:;
   if ((v21start_given)!=ECL_NIL) { goto L115; }
   v23start_constantp = ECL_T;
   value0 = L47loop_typed_init(v2indexv_type);
   if ((value0)!=ECL_NIL) { goto L121; }
   v22start_value = ecl_make_fixnum(0);
   goto L119;
L121:;
   v22start_value = value0;
   goto L119;
L119:;
   L54loop_make_iteration_variable(v1indexv, v22start_value, v2indexv_type);
L115:;
   if (!((v19dir)==(ECL_NIL))) { goto L129; }
   goto L126;
   goto L127;
L129:;
   goto L127;
L127:;
   if (!(ecl_eql(v19dir,ECL_SYM("UP",1349)))) { goto L124; }
   goto L125;
L126:;
L125:;
   if ((v24limit_given)!=ECL_NIL) { goto L134; }
   if (Null(v9default_top)) { goto L132; }
   goto L133;
L134:;
L133:;
   if ((v24limit_given)!=ECL_NIL) { goto L136; }
   v12endform = cl_gensym(1, VV[227]);
   L53loop_make_variable(3, v12endform, ECL_NIL, v2indexv_type);
   T0 = cl_list(3, ECL_SYM("SETQ",753), v12endform, v9default_top);
   cl_set(VV[56],CONS(T0,ecl_symbol_value(VV[56])));
L136:;
   if (Null(v20inclusive_iteration)) { goto L142; }
   v14testfn = ECL_SYM(">",77);
   goto L141;
L142:;
   v14testfn = ECL_SYM(">=",78);
L141:;
L132:;
   if (!((v16stepby)==(ecl_make_fixnum(1)))) { goto L145; }
   v18step = cl_list(2, ECL_SYM("1+",72), v1indexv);
   goto L144;
L145:;
   v18step = cl_list(3, ECL_SYM("+",16), v1indexv, v16stepby);
L144:;
   goto L123;
L124:;
   if ((v21start_given)!=ECL_NIL) { goto L147; }
   if ((v9default_top)!=ECL_NIL) { goto L149; }
   L28loop_error(1, VV[228]);
L149:;
   T0 = cl_list(2, ECL_SYM("1-",73), v9default_top);
   T1 = cl_list(3, ECL_SYM("SETQ",753), v1indexv, T0);
   cl_set(VV[56],CONS(T1,ecl_symbol_value(VV[56])));
L147:;
   if (Null(v9default_top)) { goto L152; }
   if ((v12endform)!=ECL_NIL) { goto L152; }
   v12endform = L47loop_typed_init(v2indexv_type);
   v20inclusive_iteration = ECL_T;
L152:;
   if (Null(v12endform)) { goto L158; }
   if (Null(v20inclusive_iteration)) { goto L161; }
   v14testfn = ECL_SYM("<",74);
   goto L160;
L161:;
   v14testfn = ECL_SYM("<=",75);
L160:;
L158:;
   if (!((v16stepby)==(ecl_make_fixnum(1)))) { goto L164; }
   v18step = cl_list(2, ECL_SYM("1-",73), v1indexv);
   goto L163;
L164:;
   v18step = cl_list(3, ECL_SYM("-",19), v1indexv, v16stepby);
L163:;
L123:;
   v18step = cl_list(2, VV[1], v18step);
   if (Null(v14testfn)) { goto L168; }
   v15test = cl_list(3, v14testfn, v1indexv, v12endform);
L168:;
   if (Null(v8step_hack)) { goto L171; }
   v8step_hack = cl_list(2, v4variable, v8step_hack);
L171:;
   {
    cl_object v27first_test;
    cl_object v28remaining_tests;
    v27first_test = v15test;
    v28remaining_tests = v15test;
    if (Null(v17stepby_constantp)) { goto L176; }
    if (Null(v23start_constantp)) { goto L176; }
    {
     cl_object v29new_type;
     {
      cl_object v30;
      v30 = ecl_plus(v22start_value,v16stepby);
      if (!(ECL_FIXNUMP(v30)||ECL_BIGNUMP(v30))) { goto L182; }
      if (!(ECL_FIXNUMP(v22start_value))) { goto L184; }
      if (Null(v25limit_constantp)) { goto L184; }
      if (!(ecl_lower(v26limit_value,ecl_make_fixnum(536870911)))) { goto L184; }
      if (!(ecl_greater(v26limit_value,ecl_make_fixnum(-536870912)))) { goto L184; }
      v29new_type = ECL_SYM("FIXNUM",374);
      goto L180;
L184:;
      v29new_type = ECL_SYM("INTEGER",439);
      goto L180;
L182:;
      if (!(ECL_SINGLE_FLOAT_P(v30))) { goto L189; }
      v29new_type = ECL_SYM("SINGLE-FLOAT",780);
      goto L180;
L189:;
      if (!(ECL_DOUBLE_FLOAT_P(v30))) { goto L191; }
      v29new_type = ECL_SYM("DOUBLE-FLOAT",317);
      goto L180;
L191:;
      if (!(ECL_LONG_FLOAT_P(v30))) { goto L193; }
      v29new_type = ECL_SYM("LONG-FLOAT",510);
      goto L180;
L193:;
      if (!(ECL_SINGLE_FLOAT_P(v30))) { goto L195; }
      v29new_type = ECL_SYM("SHORT-FLOAT",758);
      goto L180;
L195:;
      v29new_type = v2indexv_type;
     }
L180:;
     T0 = cl_type_of(v22start_value);
     if ((cl_subtypep(2, T0, v29new_type))!=ECL_NIL) { goto L197; }
     T0 = cl_type_of(v22start_value);
     v29new_type = cl_list(3, ECL_SYM("OR",616), T0, v29new_type);
L197:;
     if ((cl_subtypep(2, v2indexv_type, v29new_type))!=ECL_NIL) { goto L179; }
     L55loop_declare_variable(2, v1indexv, v29new_type);
    }
L179:;
    if (Null(v25limit_constantp)) { goto L176; }
    T0 = cl_symbol_function(v14testfn);
    v27first_test = ecl_function_dispatch(cl_env_copy,T0)(2, v22start_value, v26limit_value);
    if (Null(v27first_test)) { goto L176; }
    v28remaining_tests = ECL_T;
L176:;
    T0 = cl_list(2, v1indexv, v18step);
    value0 = cl_list(8, ECL_NIL, T0, v28remaining_tests, v8step_hack, ECL_NIL, ECL_NIL, v27first_test, v8step_hack);
    return value0;
   }
  }
 }
}
/*      function definition for LOOP-FOR-ARITHMETIC                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L92loop_for_arithmetic(cl_object v1var, cl_object v2val, cl_object v3data_type, cl_object v4kwd)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if ((v1var)!=ECL_NIL) { goto L1; }
  v1var = cl_gensym(0);
L1:;
  T0 = L30loop_check_data_type(2, v3data_type, ECL_SYM("NUMBER",608));
  T1 = cl_list(2, v4kwd, v2val);
  T2 = ecl_list1(T1);
  T3 = L90loop_collect_prepositional_phrases(3, VV[229], ECL_NIL, T2);
  value0 = L91loop_sequencer(v1var, T0, ECL_T, ECL_NIL, ECL_NIL, ECL_NIL, ECL_NIL, ECL_NIL, ECL_NIL, T3);
  return value0;
 }
}
/*      function definition for LOOP-HASH-TABLE-ITERATION-PATH        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L93loop_hash_table_iteration_path(cl_narg narg, cl_object v1variable, cl_object v2data_type, cl_object v3prep_phrases, ...)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<3)) FEwrong_num_arguments_anonym();
 {
  cl_object v4which;
  ecl_va_list args; ecl_va_start(args,v3prep_phrases,narg,3);
  {
   cl_object keyvars[2];
   cl_parse_key(args,1,L93loop_hash_table_iteration_pathkeys,keyvars,NULL,FALSE);
   ecl_va_end(args);
   v4which = keyvars[0];
  }
  {
   cl_object v5;
   v5 = v4which;
   if (!((v5)==(VV[231]))) { goto L7; }
   goto L3;
   goto L5;
L7:;
   goto L5;
L5:;
   if (!((v5)==(VV[233]))) { goto L10; }
   goto L3;
   goto L4;
L10:;
   goto L4;
L4:;
   v4which = si_do_check_type(v5, VV[235], ECL_NIL, VV[236]);
L3:;
  }
  if ((ecl_cdr(v3prep_phrases))!=ECL_NIL) { goto L16; }
  {
   cl_object v5;
   v5 = ecl_caar(v3prep_phrases);
   if (!(ecl_eql(v5,VV[189]))) { goto L21; }
   goto L14;
   goto L19;
L21:;
   goto L19;
L19:;
   if (!(ecl_eql(v5,VV[204]))) { goto L24; }
   goto L14;
   goto L15;
L24:;
   goto L15;
  }
L16:;
L15:;
  L28loop_error(1, VV[239]);
  goto L13;
L14:;
  if (!(v3prep_phrases==ECL_NIL)) { goto L13; }
  L28loop_error(1, VV[240]);
L13:;
  {
   cl_object v5;
   cl_object v6;
   cl_object v7dummy_predicate_var;
   cl_object v8post_steps;
   v5 = cl_gensym(1, VV[241]);
   v6 = cl_gensym(1, VV[242]);
   v7dummy_predicate_var = ECL_NIL;
   v8post_steps = ECL_NIL;
   {
    cl_object v10;                                /*  OTHER-VAR       */
    cl_object v11;                                /*  OTHER-P         */
    if (!((v4which)==(VV[231]))) { goto L33; }
    T0 = VV[233];
    goto L32;
L33:;
    T0 = VV[231];
L32:;
    value0 = L87loop_named_var(T0);
    {
     const int v12 = cl_env_copy->nvalues;
     v10 = value0;
     cl_object v13;
     v13 = (v12<=1)? ECL_NIL : cl_env_copy->values[1];
     v11 = v13;
    }
    v11 = ECL_T;
    v7dummy_predicate_var = L77loop_when_it_variable();
    {
     cl_object v12key_var;
     cl_object v13val_var;
     cl_object v14temp_val_var;
     cl_object v15temp_key_var;
     cl_object v16temp_predicate_var;
     cl_object v17variable;
     cl_object v18bindings;
     v12key_var = ECL_NIL;
     v13val_var = ECL_NIL;
     v14temp_val_var = cl_gensym(1, VV[243]);
     v15temp_key_var = cl_gensym(1, VV[244]);
     v16temp_predicate_var = cl_gensym(1, VV[245]);
     value0 = v1variable;
     if ((value0)!=ECL_NIL) { goto L46; }
     v17variable = cl_gensym(0);
     goto L44;
L46:;
     v17variable = value0;
     goto L44;
L44:;
     T0 = cl_list(3, v17variable, ECL_NIL, v2data_type);
     T1 = ecl_cadar(v3prep_phrases);
     T2 = cl_list(2, v5, T1);
     if (Null(v11)) { goto L51; }
     if (Null(v10)) { goto L51; }
     T4 = cl_list(2, v10, ECL_NIL);
     T3 = ecl_list1(T4);
     goto L49;
L51:;
     T3 = ECL_NIL;
     goto L49;
L49:;
     v18bindings = cl_listX(3, T0, T2, T3);
     if (!((v4which)==(VV[231]))) { goto L55; }
     v12key_var = v17variable;
     if (Null(v11)) { goto L61; }
     v13val_var = v10;
     goto L59;
L61:;
     v13val_var = ECL_NIL;
     goto L59;
L59:;
     goto L54;
L55:;
     if (Null(v11)) { goto L66; }
     v12key_var = v10;
     goto L64;
L66:;
     v12key_var = ECL_NIL;
     goto L64;
L64:;
     v13val_var = v17variable;
L54:;
     T0 = cl_list(2, v6, v5);
     T1 = cl_list(2, ECL_SYM("WITH-HASH-TABLE-ITERATOR",911), T0);
     cl_set(VV[52],CONS(T1,ecl_symbol_value(VV[52])));
     if (!(ECL_CONSP(v12key_var))) { goto L71; }
     T0 = v12key_var;
     v12key_var = cl_gensym(1, VV[244]);
     v8post_steps = cl_listX(3, T0, v12key_var, v8post_steps);
     T0 = cl_list(2, v12key_var, ECL_NIL);
     v18bindings = CONS(T0,v18bindings);
L71:;
     if (!(ECL_CONSP(v13val_var))) { goto L77; }
     T0 = v13val_var;
     v13val_var = cl_gensym(1, VV[243]);
     v8post_steps = cl_listX(3, T0, v13val_var, v8post_steps);
     T0 = cl_list(2, v13val_var, ECL_NIL);
     v18bindings = CONS(T0,v18bindings);
L77:;
     T0 = cl_list(3, v16temp_predicate_var, v15temp_key_var, v14temp_val_var);
     T1 = ecl_list1(v6);
     T2 = cl_list(3, ECL_SYM("SETQ",753), v13val_var, v14temp_val_var);
     T3 = cl_list(3, ECL_SYM("SETQ",753), v12key_var, v15temp_key_var);
     T4 = cl_list(4, ECL_SYM("WHEN",907), v16temp_predicate_var, T2, T3);
     T5 = cl_list(3, ECL_SYM("SETQ",753), v7dummy_predicate_var, v16temp_predicate_var);
     T6 = cl_list(5, ECL_SYM("MULTIPLE-VALUE-BIND",574), T0, T1, T4, T5);
     T7 = cl_list(2, ECL_SYM("NOT",586), T6);
     value0 = cl_list(6, v18bindings, ECL_NIL, ECL_NIL, ECL_NIL, T7, v8post_steps);
     return value0;
    }
   }
  }
 }
}
/*      function definition for LOOP-PACKAGE-SYMBOLS-ITERATION-PATH   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L94loop_package_symbols_iteration_path(cl_narg narg, cl_object v1variable, cl_object v2data_type, cl_object v3prep_phrases, ...)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<3)) FEwrong_num_arguments_anonym();
 {
  cl_object v4symbol_types;
  ecl_va_list args; ecl_va_start(args,v3prep_phrases,narg,3);
  {
   cl_object keyvars[2];
   cl_parse_key(args,1,L94loop_package_symbols_iteration_pathkeys,keyvars,NULL,FALSE);
   ecl_va_end(args);
   v4symbol_types = keyvars[0];
  }
  if (Null(v3prep_phrases)) { goto L2; }
  if (Null(ecl_cdr(v3prep_phrases))) { goto L2; }
  L28loop_error(1, VV[239]);
  goto L1;
L2:;
  if (Null(v3prep_phrases)) { goto L1; }
  {
   cl_object v5;
   v5 = ecl_caar(v3prep_phrases);
   if (!(ecl_eql(v5,VV[189]))) { goto L10; }
   goto L1;
   goto L8;
L10:;
   goto L8;
L8:;
   if (!(ecl_eql(v5,VV[204]))) { goto L13; }
   goto L1;
   goto L5;
L13:;
   goto L5;
  }
L5:;
  T0 = ecl_caar(v3prep_phrases);
  L28loop_error(2, VV[247], T0);
L1:;
  if (ECL_SYMBOLP(v1variable)) { goto L15; }
  L28loop_error(1, VV[248]);
L15:;
  {
   cl_object v5;
   cl_object v6;
   cl_object v7;
   cl_object v8;
   v5 = cl_gensym(1, VV[249]);
   v6 = cl_gensym(1, VV[250]);
   value0 = v1variable;
   if ((value0)!=ECL_NIL) { goto L21; }
   v7 = cl_gensym(0);
   goto L19;
L21:;
   v7 = value0;
   goto L19;
L19:;
   value0 = ecl_cadar(v3prep_phrases);
   if ((value0)!=ECL_NIL) { goto L25; }
   v8 = ECL_SYM("*PACKAGE*",45);
   goto L23;
L25:;
   v8 = value0;
   goto L23;
L23:;
   T0 = cl_listX(3, v6, v5, v4symbol_types);
   T1 = cl_list(2, ECL_SYM("WITH-PACKAGE-ITERATOR",916), T0);
   cl_set(VV[52],CONS(T1,ecl_symbol_value(VV[52])));
   T0 = cl_list(3, v7, ECL_NIL, v2data_type);
   T1 = cl_list(2, v5, v8);
   T2 = cl_list(2, T0, T1);
   T3 = L77loop_when_it_variable();
   T4 = cl_list(2, T3, v7);
   T5 = ecl_list1(v6);
   T6 = cl_list(3, ECL_SYM("MULTIPLE-VALUE-SETQ",578), T4, T5);
   T7 = cl_list(2, ECL_SYM("NOT",586), T6);
   value0 = cl_list(6, T2, ECL_NIL, ECL_NIL, ECL_NIL, T7, ECL_NIL);
   return value0;
  }
 }
}
/*      function definition for MAKE-ANSI-LOOP-UNIVERSE               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L95make_ansi_loop_universe(cl_object v1extended_p)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2w;
   if (Null(v1extended_p)) { goto L3; }
   T0 = VV[256];
   goto L2;
L3:;
   T0 = ECL_T;
L2:;
   v2w = L18make_standard_loop_universe(12, VV[32], VV[252], VV[33], VV[253], VV[34], VV[254], VV[39], VV[255], VV[38], ECL_NIL, VV[36], T0);
   L85add_loop_path(9, VV[257], VV[246], v2w, VV[184], VV[258], VV[185], ECL_NIL, VV[183], VV[259]);
   L85add_loop_path(9, VV[260], VV[246], v2w, VV[184], VV[258], VV[185], ECL_NIL, VV[183], VV[261]);
   L85add_loop_path(9, VV[262], VV[251], v2w, VV[184], VV[258], VV[185], ECL_NIL, VV[183], VV[263]);
   L85add_loop_path(9, VV[264], VV[251], v2w, VV[184], VV[258], VV[185], ECL_NIL, VV[183], VV[265]);
   L85add_loop_path(9, VV[266], VV[251], v2w, VV[184], VV[258], VV[185], ECL_NIL, VV[183], VV[267]);
   value0 = v2w;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for LOOP-STANDARD-EXPANSION               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L96loop_standard_expansion(cl_object v1keywords_and_forms, cl_object v2environment, cl_object v3universe)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(v1keywords_and_forms)) { goto L1; }
  T0 = ecl_car(v1keywords_and_forms);
  if (!(ECL_SYMBOLP(T0))) { goto L1; }
  value0 = L34loop_translate(v1keywords_and_forms, v2environment, v3universe);
  return value0;
L1:;
  {
   cl_object v4tag;
   v4tag = cl_gensym(0);
   T0 = CONS(ECL_SYM("PROGN",673),v1keywords_and_forms);
   T1 = cl_list(2, ECL_SYM("GO",416), v4tag);
   T2 = cl_list(4, ECL_SYM("TAGBODY",852), v4tag, T0, T1);
   value0 = cl_list(3, ECL_SYM("BLOCK",139), ECL_NIL, T2);
   return value0;
  }
 }
}
/*      local function LOOP                                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC97loop(cl_object v1, cl_object v2env)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   v3 = ecl_cdr(v1);
   value0 = L96loop_standard_expansion(v3, v2env, ecl_symbol_value(VV[268]));
   return value0;
  }
 }
}

#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/lsp/loop.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclytUz6Qa7_ecB6lq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:LSP;LOOP.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclytUz6Qa7_ecB6lq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  ecl_cmp_defmacro(VV[270]);                      /*  LOOP-UNSAFE     */
  ecl_cmp_defmacro(VV[271]);                      /*  WITH-LOOP-LIST-COLLECTION-HEAD */
  ecl_cmp_defmacro(VV[274]);                      /*  LOOP-COLLECT-RPLACD */
  ecl_cmp_defmacro(VV[275]);                      /*  LOOP-COLLECT-ANSWER */
  ecl_function_dispatch(cl_env_copy,VV[276])(15, VV[11], _ecl_static_0, ECL_SYM("VECTOR",900), ECL_NIL, VVtemp[1], VVtemp[2], VV[12], ECL_NIL, ECL_NIL, ECL_NIL, VVtemp[3], ecl_make_fixnum(6), ECL_NIL, ECL_NIL, ECL_NIL) /*  DEFINE-STRUCTURE */;
  ecl_cmp_defun(VV[277]);                         /*  MAKE-LOOP-MINIMAX-INTERNAL */
  si_Xmake_special(VV[15]);
  cl_set(VV[15],VVtemp[4]);
  (void)0; /* No entry created for MAKE-LOOP-MINIMAX */
  (void)0; /* No entry created for LOOP-NOTE-MINIMAX-OPERATION */
  ecl_cmp_defmacro(VV[286]);                      /*  WITH-MINIMAX-VALUE */
  ecl_cmp_defmacro(VV[291]);                      /*  LOOP-ACCUMULATE-MINIMAX-VALUE */
  (void)0; /* No entry created for LOOP-TEQUAL */
  (void)0; /* No entry created for LOOP-TASSOC */
  (void)0; /* No entry created for LOOP-TMEMBER */
  (void)0; /* No entry created for LOOP-LOOKUP-KEYWORD */
  ecl_cmp_defmacro(VV[292]);                      /*  LOOP-STORE-TABLE-DATA */
  ecl_function_dispatch(cl_env_copy,VV[276])(15, VV[27], _ecl_static_1, ECL_SYM("VECTOR",900), ECL_NIL, VVtemp[5], VVtemp[6], VV[28], ECL_NIL, ECL_NIL, ECL_NIL, VVtemp[7], ecl_make_fixnum(8), ECL_NIL, ECL_NIL, ECL_NIL) /*  DEFINE-STRUCTURE */;
  ecl_cmp_defun(VV[293]);                         /*  MAKE-LOOP-UNIVERSE */
  si_Xmake_special(VV[31]);
  (void)0; /* No entry created for MAKE-STANDARD-LOOP-UNIVERSE */
  si_Xmake_special(VV[40]);
  cl_set(VV[40],ECL_NIL);
  (void)0; /* No entry created for LOOP-MAKE-PSETQ */
  (void)0; /* No entry created for LOOP-MAKE-DESETQ */
  si_Xmake_special(VV[42]);
  cl_set(VV[42],cl_make_symbol(VVtemp[8]));
  ecl_cmp_defmacro(VV[309]);                      /*  LOOP-REALLY-DESETQ */
  si_Xmake_special(VV[43]);
  si_Xmake_special(VV[44]);
  si_Xmake_special(VV[45]);
  si_Xmake_special(VV[46]);
  si_Xmake_special(VV[47]);
  si_Xmake_special(VV[48]);
  si_Xmake_special(VV[49]);
  si_Xmake_special(VV[50]);
  si_Xmake_special(VV[51]);
  si_Xmake_special(VV[52]);
  si_Xmake_special(VV[53]);
  si_Xmake_special(VV[54]);
  si_Xmake_special(VV[55]);
  si_Xmake_special(VV[56]);
  si_Xmake_special(VV[57]);
  si_Xmake_special(VV[58]);
  si_Xmake_special(VV[59]);
  si_Xmake_special(VV[60]);
  si_Xmake_special(VV[61]);
  si_Xmake_special(VV[62]);
  si_Xmake_special(VV[63]);
  si_Xmake_special(VV[64]);
  si_Xmake_special(VV[65]);
  si_Xmake_special(VV[66]);
  si_Xmake_special(VV[67]);
  (void)0; /* No entry created for LOOP-CONSTANT-FOLD-IF-POSSIBLE */
  si_Xmake_special(VV[69]);
  cl_set(VV[69],ECL_NIL);
  si_Xmake_special(VV[70]);
  cl_set(VV[70],cl_make_symbol(VVtemp[9]));
  ecl_cmp_defmacro(VV[310]);                      /*  LOOP-BODY       */
  (void)0; /* No entry created for LOOP-CONTEXT */
  (void)0; /* No entry created for LOOP-ERROR */
  (void)0; /* No entry created for LOOP-WARN */
  (void)0; /* No entry created for LOOP-CHECK-DATA-TYPE */
  ecl_cmp_defmacro(VV[311]);                      /*  LOOP-FINISH     */
  ecl_cmp_defun(VV[312]);                         /*  SUBST-GENSYMS-FOR-NIL */
  ecl_cmp_defun(VV[313]);                         /*  LOOP-BUILD-DESTRUCTURING-BINDINGS */
  (void)0; /* No entry created for LOOP-TRANSLATE */
  (void)0; /* No entry created for LOOP-ITERATION-DRIVER */
  (void)0; /* No entry created for LOOP-POP-SOURCE */
  (void)0; /* No entry created for LOOP-GET-COMPOUND-FORM */
  (void)0; /* No entry created for LOOP-GET-PROGN */
  (void)0; /* No entry created for LOOP-GET-FORM */
  (void)0; /* No entry created for LOOP-CONSTRUCT-RETURN */
  (void)0; /* No entry created for LOOP-PSEUDO-BODY */
  (void)0; /* No entry created for LOOP-EMIT-BODY */
  (void)0; /* No entry created for LOOP-EMIT-FINAL-VALUE */
  (void)0; /* No entry created for LOOP-DISALLOW-CONDITIONAL */
  ecl_cmp_defun(VV[316]);                         /*  LOOP-DISALLOW-ANONYMOUS-COLLECTORS */
  ecl_cmp_defun(VV[317]);                         /*  LOOP-DISALLOW-AGGREGATE-BOOLEANS */
  (void)0; /* No entry created for LOOP-TYPED-INIT */
  (void)0; /* No entry created for LOOP-OPTIONAL-TYPE */
  (void)0; /* No entry created for LOOP-BIND-BLOCK */
  ecl_cmp_defun(VV[320]);                         /*  LOOP-VARIABLE-P */
  (void)0; /* No entry created for LOOP-MAKE-VARIABLE */
  (void)0; /* No entry created for LOOP-MAKE-ITERATION-VARIABLE */
  (void)0; /* No entry created for LOOP-DECLARE-VARIABLE */
  (void)0; /* No entry created for LOOP-MAYBE-BIND-FORM */
  ecl_cmp_defun(VV[324]);                         /*  LOOP-DO-IF      */
  ecl_cmp_defun(VV[325]);                         /*  LOOP-DO-INITIALLY */
  ecl_cmp_defun(VV[326]);                         /*  LOOP-DO-FINALLY */
  ecl_cmp_defun(VV[327]);                         /*  LOOP-DO-DO      */
  ecl_cmp_defun(VV[328]);                         /*  LOOP-DO-NAMED   */
  ecl_cmp_defun(VV[329]);                         /*  LOOP-DO-RETURN  */
  ecl_function_dispatch(cl_env_copy,VV[276])(15, VV[130], _ecl_static_2, ECL_SYM("VECTOR",900), ECL_NIL, VVtemp[10], VVtemp[11], VV[131], ECL_NIL, ECL_NIL, ECL_NIL, VVtemp[12], ecl_make_fixnum(6), ECL_NIL, ECL_NIL, ECL_NIL) /*  DEFINE-STRUCTURE */;
  ecl_cmp_defun(VV[330]);                         /*  MAKE-LOOP-COLLECTOR */
  (void)0; /* No entry created for LOOP-GET-COLLECTION-INFO */
  ecl_cmp_defun(VV[341]);                         /*  LOOP-LIST-COLLECTION */
  ecl_cmp_defun(VV[343]);                         /*  LOOP-SUM-COLLECTION */
  ecl_cmp_defun(VV[344]);                         /*  LOOP-MAXMIN-COLLECTION */
  ecl_cmp_defun(VV[346]);                         /*  LOOP-DO-ALWAYS  */
  ecl_cmp_defun(VV[347]);                         /*  LOOP-DO-THEREIS */
  ecl_cmp_defun(VV[348]);                         /*  LOOP-DO-WHILE   */
  ecl_cmp_defun(VV[349]);                         /*  LOOP-DO-WITH    */
  (void)0; /* No entry created for LOOP-HACK-ITERATION */
  ecl_cmp_defun(VV[351]);                         /*  LOOP-DO-FOR     */
  ecl_cmp_defun(VV[353]);                         /*  LOOP-DO-REPEAT  */
  (void)0; /* No entry created for LOOP-WHEN-IT-VARIABLE */
  ecl_cmp_defun(VV[354]);                         /*  LOOP-ANSI-FOR-EQUALS */
  ecl_cmp_defun(VV[355]);                         /*  LOOP-FOR-ACROSS */
  (void)0; /* No entry created for LOOP-LIST-STEP */
  ecl_cmp_defun(VV[356]);                         /*  LOOP-FOR-ON     */
  ecl_cmp_defun(VV[357]);                         /*  LOOP-FOR-IN     */
  ecl_function_dispatch(cl_env_copy,VV[276])(15, VV[178], _ecl_static_3, ECL_SYM("VECTOR",900), ECL_NIL, VVtemp[13], VVtemp[14], VV[179], ECL_NIL, ECL_NIL, ECL_NIL, VVtemp[15], ecl_make_fixnum(5), ECL_NIL, ECL_NIL, ECL_NIL) /*  DEFINE-STRUCTURE */;
  ecl_cmp_defun(VV[358]);                         /*  MAKE-LOOP-PATH  */
  (void)0; /* No entry created for ADD-LOOP-PATH */
  ecl_cmp_defun(VV[368]);                         /*  LOOP-FOR-BEING  */
  (void)0; /* No entry created for LOOP-NAMED-VAR */
  (void)0; /* No entry created for LOOP-COLLECT-PREPOSITIONAL-PHRASES */
  (void)0; /* No entry created for LOOP-SEQUENCER */
  ecl_cmp_defun(VV[373]);                         /*  LOOP-FOR-ARITHMETIC */
  ecl_cmp_defun(VV[374]);                         /*  LOOP-HASH-TABLE-ITERATION-PATH */
  ecl_cmp_defun(VV[376]);                         /*  LOOP-PACKAGE-SYMBOLS-ITERATION-PATH */
  (void)0; /* No entry created for MAKE-ANSI-LOOP-UNIVERSE */
  si_Xmake_special(VV[268]);
  cl_set(VV[268],L95make_ansi_loop_universe(ECL_NIL));
  (void)0; /* No entry created for LOOP-STANDARD-EXPANSION */
  ecl_cmp_defmacro(VV[378]);                      /*  LOOP            */
}
