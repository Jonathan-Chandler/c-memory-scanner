/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:LSP;DEFMACRO.LSP                                  */
#include <ecl/ecl-cmp.h>
#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/lsp/defmacro.eclh"
/*      function definition for SEARCH-KEYWORD                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L1search_keyword(cl_object v1list, cl_object v2key)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ECL_ATOM(v1list))) { goto L1; }
  value0 = ECL_SYM("MISSING-KEYWORD",2015);
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  T0 = ecl_cdr(v1list);
  if (!(ECL_ATOM(T0))) { goto L3; }
  value0 = ECL_SYM("MISSING-KEYWORD",2015);
  cl_env_copy->nvalues = 1;
  return value0;
L3:;
  T0 = ecl_car(v1list);
  if (!((T0)==(v2key))) { goto L5; }
  value0 = ecl_cadr(v1list);
  cl_env_copy->nvalues = 1;
  return value0;
L5:;
  v1list = ecl_cddr(v1list);
  goto TTL;
 }
}
/*      function definition for CHECK-KEYWORD                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L2check_keyword(cl_narg narg, cl_object v1tail, cl_object v2keywords, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>3)) FEwrong_num_arguments_anonym();
 {
  cl_object v3allow_other_keys;
  cl_object v4aok_flag;
  va_list args; va_start(args,v2keywords);
  {
   int i = 2;
   if (i >= narg) {
    v3allow_other_keys = ECL_NIL;
    v4aok_flag = ECL_NIL;
   } else {
    i++;
    v3allow_other_keys = va_arg(args,cl_object);
    v4aok_flag = ECL_T;
   }
  }
  va_end(args);
  {
   cl_object v5head;
   cl_object v6arg;
   cl_object v7err;
   v5head = ECL_NIL;
   v6arg = ECL_NIL;
   v7err = ECL_NIL;
   goto L7;
L6:;
   if (!(ECL_ATOM(v1tail))) { goto L10; }
   cl_error(1, VV[1]);
   goto L9;
L10:;
   v5head = ecl_car(v1tail);
   {
    cl_object v8;
    v8 = ecl_cdr(v1tail);
    if (ecl_unlikely(!ECL_LISTP(v8))) FEtype_error_list(v8);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v1tail = v8;
   }
L9:;
   if (!(ECL_ATOM(v1tail))) { goto L18; }
   cl_error(1, VV[1]);
   goto L17;
L18:;
   v6arg = ecl_car(v1tail);
   {
    cl_object v8;
    v8 = ecl_cdr(v1tail);
    if (ecl_unlikely(!ECL_LISTP(v8))) FEtype_error_list(v8);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v1tail = v8;
   }
L17:;
   if (!((v5head)==(ECL_SYM("ALLOW-OTHER-KEYS",1219)))) { goto L26; }
   if ((v4aok_flag)!=ECL_NIL) { goto L25; }
   v3allow_other_keys = v6arg;
   v4aok_flag = ECL_T;
   goto L25;
L26:;
   if ((ecl_memql(v5head,v2keywords))!=ECL_NIL) { goto L25; }
   v7err = v5head;
L25:;
L7:;
   if (v1tail==ECL_NIL) { goto L34; }
   goto L6;
L34:;
   if (Null(v7err)) { goto L36; }
   if ((v3allow_other_keys)!=ECL_NIL) { goto L36; }
   value0 = cl_error(2, VV[2], v7err);
   return value0;
L36:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for DM-TOO-MANY-ARGUMENTS                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L3dm_too_many_arguments(cl_object v1_current_form_)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  ecl_bds_bind(cl_env_copy,ECL_SYM("*CURRENT-FORM*",1667),v1_current_form_); /*  *CURRENT-FORM* */
TTL:
  value0 = cl_error(2, VV[4], ecl_symbol_value(ECL_SYM("*CURRENT-FORM*",1667)));
  ecl_bds_unwind1(cl_env_copy);
  return value0;
 }
}
/*      function definition for DM-TOO-FEW-ARGUMENTS                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L4dm_too_few_arguments(cl_object v1form_or_nil)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(v1form_or_nil)) { goto L1; }
  ecl_bds_bind(cl_env_copy,ECL_SYM("*CURRENT-FORM*",1667),v1form_or_nil); /*  *CURRENT-FORM* */
  value0 = cl_error(2, VV[6], ecl_symbol_value(ECL_SYM("*CURRENT-FORM*",1667)));
  ecl_bds_unwind1(cl_env_copy);
  return value0;
L1:;
  value0 = cl_error(1, VV[7]);
  return value0;
 }
}
/*      function definition for DESTRUCTURE                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L8destructure(cl_object v1vl, cl_object v2context)
{
 cl_object T0, T1;
 volatile cl_object lex0[2];
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_gensym(0);
  lex0[0] = T0;                                   /*  BASIS-FORM      */
  T0 = ecl_list1(lex0[0]);
  lex0[1] = T0;                                   /*  DESTRUCTURE-SYMBOLS */
  ecl_bds_bind(cl_env_copy,VV[9],ECL_NIL);        /*  *DL*            */
  ecl_bds_bind(cl_env_copy,VV[10],ECL_NIL);       /*  *ARG-CHECK*     */
  if (!(ECL_LISTP(v1vl))) { goto L2; }
  T0 = ecl_car(v1vl);
  if (!((T0)==(ECL_SYM("&WHOLE",15)))) { goto L1; }
  {
   cl_object v3named_whole;
   v3named_whole = ecl_cadr(v1vl);
   v1vl = ecl_cddr(v1vl);
   if (!(ECL_LISTP(v3named_whole))) { goto L8; }
   LC6dm_vl(lex0, v3named_whole, lex0[0], ECL_NIL);
   goto L1;
L8:;
   T0 = cl_list(2, v3named_whole, lex0[0]);
   cl_set(VV[9],ecl_list1(T0));
   goto L1;
  }
L2:;
  if (!(ECL_SYMBOLP(v1vl))) { goto L11; }
  v1vl = cl_list(2, ECL_SYM("&REST",14), v1vl);
  goto L1;
L11:;
  cl_error(2, VV[18], v1vl);
L1:;
  T0 = LC6dm_vl(lex0, v1vl, lex0[0], v2context);
  T1 = cl_nreverse(ecl_symbol_value(VV[9]));
  cl_env_copy->nvalues = 5;
  cl_env_copy->values[4] = lex0[1];
  cl_env_copy->values[3] = ecl_symbol_value(VV[10]);
  cl_env_copy->values[2] = T1;
  cl_env_copy->values[1] = lex0[0];
  cl_env_copy->values[0] = T0;
  ecl_bds_unwind1(cl_env_copy);
  ecl_bds_unwind1(cl_env_copy);
  return cl_env_copy->values[0];
 }
}
/*      local function DM-V                                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC7dm_v(volatile cl_object *lex0, cl_object v1v, cl_object v2init)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(v1v)) { goto L1; }
  if (!(ECL_SYMBOLP(v1v))) { goto L1; }
  {
   cl_object v3push_val;
   if (Null(v2init)) { goto L5; }
   v3push_val = cl_list(2, v1v, v2init);
   goto L4;
L5:;
   v3push_val = v1v;
L4:;
   cl_set(VV[9],CONS(v3push_val,ecl_symbol_value(VV[9])));
   value0 = ecl_symbol_value(VV[9]);
   cl_env_copy->nvalues = 1;
   return value0;
  }
L1:;
  if (Null(v1v)) { goto L8; }
  if (!(ECL_ATOM(v1v))) { goto L8; }
  value0 = cl_error(2, VV[17], v1v);
  return value0;
L8:;
  T0 = ecl_car(v1v);
  if (!((T0)==(ECL_SYM("&WHOLE",15)))) { goto L11; }
  {
   cl_object v4whole_var;
   v4whole_var = ecl_cadr(v1v);
   if (!(ECL_LISTP(v4whole_var))) { goto L15; }
   {
    cl_object v5new_whole;
    v5new_whole = LC5tempsym(lex0);
    LC7dm_v(lex0, v5new_whole, v2init);
    LC6dm_vl(lex0, v4whole_var, v5new_whole, ECL_NIL);
    v4whole_var = v5new_whole;
    goto L14;
   }
L15:;
   LC7dm_v(lex0, v4whole_var, v2init);
L14:;
   T0 = ecl_cddr(v1v);
   value0 = LC6dm_vl(lex0, T0, v4whole_var, ECL_NIL);
   return value0;
  }
L11:;
  {
   cl_object v5temp;
   cl_object v6push_val;
   v5temp = LC5tempsym(lex0);
   if (Null(v2init)) { goto L23; }
   v6push_val = cl_list(2, v5temp, v2init);
   goto L22;
L23:;
   v6push_val = v5temp;
L22:;
   cl_set(VV[9],CONS(v6push_val,ecl_symbol_value(VV[9])));
   value0 = LC6dm_vl(lex0, v1v, v5temp, ECL_NIL);
   return value0;
  }
 }
}
/*      local function DM-VL                                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC6dm_vl(volatile cl_object *lex0, cl_object v1vl, cl_object v2whole, cl_object v3context)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v5;                                  /*  REQS            */
   cl_object v6;                                  /*  OPTS            */
   cl_object v7;                                  /*  REST            */
   cl_object v8;                                  /*  KEY-FLAG        */
   cl_object v9;                                  /*  KEYS            */
   cl_object v10;                                 /*  ALLOW-OTHER-KEYS */
   cl_object v11;                                 /*  AUXS            */
   if (!((v3context)==(ECL_SYM("DEFMACRO",285)))) { goto L8; }
   goto L5;
   goto L6;
L8:;
   goto L6;
L6:;
   if (!((v3context)==(ECL_SYM("DEFINE-COMPILER-MACRO",281)))) { goto L3; }
   goto L4;
L5:;
L4:;
   T0 = ECL_SYM("MACRO",1105);
   goto L2;
L3:;
   T0 = ECL_SYM("DESTRUCTURING-BIND",302);
L2:;
   value0 = si_process_lambda_list(v1vl, T0);
   {
    const int v12 = cl_env_copy->nvalues;
    v5 = value0;
    cl_object v13;
    v13 = (v12<=1)? ECL_NIL : cl_env_copy->values[1];
    v6 = v13;
    v13 = (v12<=2)? ECL_NIL : cl_env_copy->values[2];
    v7 = v13;
    v13 = (v12<=3)? ECL_NIL : cl_env_copy->values[3];
    v8 = v13;
    v13 = (v12<=4)? ECL_NIL : cl_env_copy->values[4];
    v9 = v13;
    v13 = (v12<=5)? ECL_NIL : cl_env_copy->values[5];
    v10 = v13;
    v13 = (v12<=6)? ECL_NIL : cl_env_copy->values[6];
    v11 = v13;
   }
   {
    cl_object v12pointer;
    cl_object v13cons_pointer;
    cl_object v14unsafe_car;
    cl_object v15unsafe_cdr;
    cl_object v16unsafe_pop;
    cl_object v17no_check;
    cl_object v18ppn;
    cl_object v19all_keywords;
    v12pointer = LC5tempsym(lex0);
    v13cons_pointer = cl_list(3, ECL_SYM("TRULY-THE",2039), ECL_SYM("CONS",253), v12pointer);
    v14unsafe_car = cl_list(2, ECL_SYM("CAR",182), v13cons_pointer);
    v15unsafe_cdr = cl_list(2, ECL_SYM("CDR",200), v13cons_pointer);
    v16unsafe_pop = cl_list(3, ECL_SYM("SETQ",753), v12pointer, v15unsafe_cdr);
    v17no_check = ECL_NIL;
    {
     cl_fixnum v20;
     v20 = ecl_length(v5);
     T0 = ecl_car(v6);
     v18ppn = ecl_plus(ecl_make_fixnum(v20),T0);
    }
    v19all_keywords = ECL_NIL;
    if (!((v3context)==(ECL_SYM("DEFINE-COMPILER-MACRO",281)))) { goto L21; }
    T1 = cl_list(2, ECL_SYM("CAR",182), v2whole);
    T2 = cl_list(3, ECL_SYM("EQ",335), T1, VV[13]);
    T3 = cl_list(2, ECL_SYM("CAADR",172), v2whole);
    T4 = cl_list(3, ECL_SYM("EQ",335), T3, VV[14]);
    T5 = cl_list(3, ECL_SYM("AND",89), T2, T4);
    T6 = cl_list(3, ECL_SYM("TRULY-THE",2039), ECL_SYM("CONS",253), v2whole);
    T7 = cl_list(2, ECL_SYM("CDDR",199), T6);
    T8 = cl_list(3, ECL_SYM("TRULY-THE",2039), ECL_SYM("CONS",253), v2whole);
    T9 = cl_list(2, ECL_SYM("CDR",200), T8);
    T0 = cl_list(4, ECL_SYM("IF",948), T5, T7, T9);
    goto L20;
L21:;
    if (!((v3context)==(ECL_SYM("DEFMACRO",285)))) { goto L23; }
    T1 = cl_list(3, ECL_SYM("TRULY-THE",2039), ECL_SYM("CONS",253), v2whole);
    T0 = cl_list(2, ECL_SYM("CDR",200), T1);
    goto L20;
L23:;
    T0 = v2whole;
L20:;
    LC7dm_v(lex0, v12pointer, T0);
    {
     cl_object v20;
     v20 = ecl_cdr(v5);
     goto L29;
L28:;
     {
      cl_object v21v;
      v21v = ecl_car(v20);
      T0 = cl_list(2, ECL_SYM("NULL",607), v12pointer);
      T1 = cl_list(2, VV[8], lex0[0]);
      T2 = cl_list(3, ECL_SYM("IF",948), T0, T1);
      T3 = cl_list(3, ECL_SYM("PROG1",671), v14unsafe_car, v16unsafe_pop);
      T4 = cl_list(3, ECL_SYM("PROGN",673), T2, T3);
      LC7dm_v(lex0, v21v, T4);
     }
     v20 = ecl_cdr(v20);
L29:;
     if (Null(v20)) { goto L36; }
     goto L28;
L36:;
    }
    {
     cl_object v20;
     {
      cl_object v21;
      v21 = v6;
      {
       cl_object v22;
       v22 = v21;
       if (ecl_unlikely(!ECL_LISTP(v22))) FEtype_error_list(v22);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v21)) { goto L44; }
      {
       cl_object v22;
       v22 = ECL_CONS_CDR(v21);
       v6 = v22;
       v21 = ECL_CONS_CAR(v21);
      }
L44:;
      v20 = v21;
     }
     {
      cl_object v21i;
      v21i = ecl_make_fixnum(0);
      goto L52;
L51:;
      {
       cl_object v22x;
       cl_object v23init;
       cl_object v24sv;
       v22x = ecl_car(v6);
       v23init = ecl_cadr(v6);
       v24sv = ecl_caddr(v6);
       v6 = ecl_cdddr(v6);
       if (Null(v24sv)) { goto L60; }
       T0 = cl_list(4, ECL_SYM("IF",948), v12pointer, v14unsafe_car, v23init);
       LC7dm_v(lex0, v22x, T0);
       T0 = cl_list(3, ECL_SYM("PROGN",673), v16unsafe_pop, ECL_T);
       T1 = cl_list(3, ECL_SYM("AND",89), v12pointer, T0);
       LC7dm_v(lex0, v24sv, T1);
       goto L54;
L60:;
       T0 = cl_list(3, ECL_SYM("PROG1",671), v14unsafe_car, v16unsafe_pop);
       T1 = cl_list(4, ECL_SYM("IF",948), v12pointer, T0, v23init);
       LC7dm_v(lex0, v22x, T1);
      }
L54:;
      v21i = ecl_one_plus(v21i);
L52:;
      if (!(ecl_lower(v21i,v20))) { goto L65; }
      goto L51;
L65:;
     }
    }
    if (Null(v7)) { goto L67; }
    LC7dm_v(lex0, v7, v12pointer);
    v17no_check = ECL_T;
L67:;
    {
     cl_object v20;
     {
      cl_object v21;
      v21 = v9;
      {
       cl_object v22;
       v22 = v21;
       if (ecl_unlikely(!ECL_LISTP(v22))) FEtype_error_list(v22);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v21)) { goto L77; }
      {
       cl_object v22;
       v22 = ECL_CONS_CDR(v21);
       v9 = v22;
       v21 = ECL_CONS_CAR(v21);
      }
L77:;
      v20 = v21;
     }
     {
      cl_object v21i;
      v21i = ecl_make_fixnum(0);
      goto L85;
L84:;
      {
       cl_object v22temp;
       cl_object v23k;
       cl_object v24v;
       cl_object v25init;
       cl_object v26sv;
       v22temp = LC5tempsym(lex0);
       v23k = ecl_car(v9);
       v24v = ecl_cadr(v9);
       v25init = ecl_caddr(v9);
       v26sv = ecl_cadddr(v9);
       v17no_check = ECL_T;
       v9 = ecl_cddddr(v9);
       T0 = cl_list(2, ECL_SYM("QUOTE",681), v23k);
       T1 = cl_list(3, VV[0], v12pointer, T0);
       LC7dm_v(lex0, v22temp, T1);
       T0 = cl_list(3, ECL_SYM("EQ",335), v22temp, VV[15]);
       T1 = cl_list(4, ECL_SYM("IF",948), T0, v25init, v22temp);
       LC7dm_v(lex0, v24v, T1);
       if (Null(v26sv)) { goto L99; }
       T0 = cl_list(3, ECL_SYM("EQ",335), v22temp, VV[15]);
       T1 = cl_list(2, ECL_SYM("NOT",586), T0);
       LC7dm_v(lex0, v26sv, T1);
L99:;
       v19all_keywords = CONS(v23k,v19all_keywords);
      }
      v21i = ecl_one_plus(v21i);
L85:;
      if (!(ecl_lower(v21i,v20))) { goto L104; }
      goto L84;
L104:;
     }
    }
    {
     cl_object v20l;
     v20l = v11;
     goto L110;
L109:;
     {
      cl_object v21v;
      cl_object v22init;
      v21v = ecl_car(v20l);
      v22init = ecl_cadr(v20l);
      LC7dm_v(lex0, v21v, v22init);
     }
     v20l = ecl_cddr(v20l);
L110:;
     if (ecl_endp(v20l)) { goto L117; }
     goto L109;
L117:;
    }
    if (Null(v8)) { goto L120; }
    T0 = cl_list(2, ECL_SYM("QUOTE",681), v19all_keywords);
    if (Null(v10)) { goto L124; }
    T1 = VV[16];
    goto L123;
L124:;
    T1 = ECL_NIL;
L123:;
    T2 = cl_listX(4, VV[3], v12pointer, T0, T1);
    cl_set(VV[10],CONS(T2,ecl_symbol_value(VV[10])));
    goto L119;
L120:;
    if ((v17no_check)!=ECL_NIL) { goto L119; }
    T0 = cl_list(2, VV[5], lex0[0]);
    T1 = cl_list(3, ECL_SYM("IF",948), v12pointer, T0);
    cl_set(VV[10],CONS(T1,ecl_symbol_value(VV[10])));
L119:;
    value0 = v18ppn;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      local function TEMPSYM                                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC5tempsym(volatile cl_object *lex0)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v1x;
   v1x = cl_gensym(0);
   lex0[1] = CONS(v1x,lex0[1]);
   value0 = v1x;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for FIND-DOCUMENTATION                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L9find_documentation(cl_object v1body)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   struct ecl_stack_frame _ecl_inner_frame_aux;
   cl_object _ecl_inner_frame = ecl_stack_frame_open(cl_env_copy,(cl_object)&_ecl_inner_frame_aux,0);
   {
    cl_object v2;
    v2 = _ecl_inner_frame;
    {
     cl_object v3;
     v3 = ECL_SYM("LIST",483);
     cl_env_copy->values[0] = si_process_declarations(2, v1body, ECL_T);
     ecl_stack_frame_push_values(v2);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;cl_env_copy->values[0]=ecl_apply_from_stack_frame(v2,v3);
     value0 = cl_env_copy->values[0];
    }
   }
   ecl_stack_frame_close(_ecl_inner_frame);
  }
  T0 = value0;
  value0 = ecl_cadddr(T0);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for REMOVE-DOCUMENTATION                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L10remove_documentation(cl_object v1body)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;                                  /*  DECLS           */
   cl_object v4;                                  /*  BODY            */
   cl_object v5;                                  /*  DOC             */
   value0 = si_process_declarations(2, v1body, ECL_T);
   {
    const int v6 = cl_env_copy->nvalues;
    v3 = value0;
    cl_object v7;
    v7 = (v6<=1)? ECL_NIL : cl_env_copy->values[1];
    v4 = v7;
    v7 = (v6<=2)? ECL_NIL : cl_env_copy->values[2];
    v5 = v7;
   }
   if (Null(v3)) { goto L2; }
   T0 = CONS(ECL_SYM("DECLARE",276),v3);
   v4 = CONS(T0,v4);
L2:;
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v5;
   cl_env_copy->values[0] = v4;
   return cl_env_copy->values[0];
  }
 }
}
/*      function definition for FIND-DECLARATIONS                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L11find_declarations(cl_narg narg, cl_object v1body, ...)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2doc;
  va_list args; va_start(args,v1body);
  {
   int i = 1;
   if (i >= narg) {
    v2doc = ECL_T;
   } else {
    i++;
    v2doc = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v4;                                  /*  DECLS           */
   cl_object v5;                                  /*  BODY            */
   cl_object v6;                                  /*  DOC             */
   value0 = si_process_declarations(2, v1body, v2doc);
   {
    const int v7 = cl_env_copy->nvalues;
    v4 = value0;
    cl_object v8;
    v8 = (v7<=1)? ECL_NIL : cl_env_copy->values[1];
    v5 = v8;
    v8 = (v7<=2)? ECL_NIL : cl_env_copy->values[2];
    v6 = v8;
   }
   if (Null(v4)) { goto L4; }
   T1 = CONS(ECL_SYM("DECLARE",276),v4);
   T0 = ecl_list1(T1);
   goto L3;
L4:;
   T0 = ECL_NIL;
L3:;
   cl_env_copy->nvalues = 3;
   cl_env_copy->values[2] = v6;
   cl_env_copy->values[1] = v5;
   cl_env_copy->values[0] = T0;
   return cl_env_copy->values[0];
  }
 }
}
/*      function definition for EXPAND-DEFMACRO                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L12expand_defmacro(cl_narg narg, cl_object v1name, cl_object v2vl, cl_object v3body, ...)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<3)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>4)) FEwrong_num_arguments_anonym();
 {
  cl_object v4context;
  va_list args; va_start(args,v3body);
  {
   int i = 3;
   if (i >= narg) {
    v4context = ECL_SYM("DEFMACRO",285);
   } else {
    i++;
    v4context = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v6;                                  /*  DECLS           */
   cl_object v7;                                  /*  BODY            */
   cl_object v8;                                  /*  DOC             */
   value0 = L11find_declarations(1, v3body);
   {
    const int v9 = cl_env_copy->nvalues;
    v6 = value0;
    cl_object v10;
    v10 = (v9<=1)? ECL_NIL : cl_env_copy->values[1];
    v7 = v10;
    v10 = (v9<=2)? ECL_NIL : cl_env_copy->values[2];
    v8 = v10;
   }
   {
    cl_object v9cell;
    v9cell = ecl_last(v2vl,1);
    if (Null(ecl_cdr(v9cell))) { goto L3; }
    T0 = cl_butlast(2, v2vl, ecl_make_fixnum(0));
    T1 = ecl_cdr(v9cell);
    T2 = cl_list(2, ECL_SYM("&REST",14), T1);
    v2vl = ecl_nconc(T0,T2);
   }
L3:;
   {
    cl_object v9env;
    v9env = si_memq(ECL_SYM("&ENVIRONMENT",11),v2vl);
    if (Null(v9env)) { goto L9; }
    T0 = cl_ldiff(v2vl, v9env);
    T1 = ecl_cddr(v9env);
    v2vl = ecl_nconc(T0,T1);
    v9env = ecl_cadr(v9env);
    goto L8;
L9:;
    v9env = cl_gensym(0);
    T0 = cl_list(2, ECL_SYM("IGNORE",430), v9env);
    T1 = cl_list(2, ECL_SYM("DECLARE",276), T0);
    v6 = CONS(T1,v6);
L8:;
    {
     cl_object v11;                               /*  PPN             */
     cl_object v12;                               /*  WHOLE           */
     cl_object v13;                               /*  DL              */
     cl_object v14;                               /*  ARG-CHECK       */
     cl_object v15;                               /*  IGNORABLES      */
     value0 = L8destructure(v2vl, v4context);
     {
      const int v16 = cl_env_copy->nvalues;
      v11 = value0;
      cl_object v17;
      v17 = (v16<=1)? ECL_NIL : cl_env_copy->values[1];
      v12 = v17;
      v17 = (v16<=2)? ECL_NIL : cl_env_copy->values[2];
      v13 = v17;
      v17 = (v16<=3)? ECL_NIL : cl_env_copy->values[3];
      v14 = v17;
      v17 = (v16<=4)? ECL_NIL : cl_env_copy->values[4];
      v15 = v17;
     }
     {
      cl_object v16function;
      if (!((v4context)==(ECL_SYM("DEFMACRO",285)))) { goto L19; }
      T0 = cl_listX(4, v12, v9env, ECL_SYM("&AUX",9), v13);
      T1 = CONS(ECL_SYM("IGNORABLE",429),v15);
      T2 = cl_list(2, ECL_SYM("DECLARE",276), T1);
      T3 = cl_append(3, v6, v14, v7);
      v16function = cl_listX(5, ECL_SYM("LAMBDA-BLOCK",1367), v1name, T0, T2, T3);
      goto L18;
L19:;
      T0 = cl_listX(4, v12, v9env, ECL_SYM("&AUX",9), v13);
      T1 = CONS(ECL_SYM("IGNORABLE",429),v15);
      T2 = cl_list(2, ECL_SYM("DECLARE",276), T1);
      T3 = si_function_block_name(v1name);
      T4 = ecl_append(v14,v7);
      T5 = cl_listX(3, ECL_SYM("BLOCK",139), T3, T4);
      T6 = ecl_list1(T5);
      T7 = ecl_append(v6,T6);
      v16function = cl_listX(4, ECL_SYM("LAMBDA",454), T0, T2, T7);
L18:;
      cl_env_copy->nvalues = 3;
      cl_env_copy->values[2] = v8;
      cl_env_copy->values[1] = v11;
      cl_env_copy->values[0] = v16function;
      return cl_env_copy->values[0];
     }
    }
   }
  }
 }
}
/*      local function DESTRUCTURING-BIND                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC13destructuring_bind(cl_object v1, cl_object v2)
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
   cl_object v4vl;
   cl_object v5list;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   L4dm_too_few_arguments(v1);
L3:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4vl = v6;
   }
   if (!(v3==ECL_NIL)) { goto L9; }
   L4dm_too_few_arguments(v1);
L9:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5list = v6;
   }
   {
    cl_object v7;                                 /*  DECLS           */
    cl_object v8;                                 /*  BODY            */
    value0 = L11find_declarations(1, v3);
    {
     const int v9 = cl_env_copy->nvalues;
     v7 = value0;
     cl_object v10;
     v10 = (v9<=1)? ECL_NIL : cl_env_copy->values[1];
     v8 = v10;
    }
    {
     cl_object v10;                               /*  WHOLE           */
     cl_object v11;                               /*  DL              */
     cl_object v12;                               /*  ARG-CHECK       */
     cl_object v13;                               /*  IGNORABLES      */
     value0 = L8destructure(v4vl, ECL_NIL);
     {
      const int v14 = cl_env_copy->nvalues;
      cl_object v15;
      v15 = (v14<=1)? ECL_NIL : cl_env_copy->values[1];
      v10 = v15;
      v15 = (v14<=2)? ECL_NIL : cl_env_copy->values[2];
      v11 = v15;
      v15 = (v14<=3)? ECL_NIL : cl_env_copy->values[3];
      v12 = v15;
      v15 = (v14<=4)? ECL_NIL : cl_env_copy->values[4];
      v13 = v15;
     }
     T0 = cl_list(2, v10, v5list);
     T1 = CONS(T0,v11);
     T2 = CONS(ECL_SYM("IGNORABLE",429),v13);
     T3 = cl_list(2, ECL_SYM("DECLARE",276), T2);
     T4 = cl_append(3, v7, v12, v8);
     value0 = cl_listX(4, ECL_SYM("LET*",480), T1, T3, T4);
     return value0;
    }
   }
  }
 }
}
/*      function definition for CMP-ENV-FOR-BYTECODES                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L18cmp_env_for_bytecodes(cl_object v1old_env)
{
 cl_object T0, T1, T2, T3, T4, T5;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2;
   cl_object v3env;
   cl_object v4variables;
   v2 = ecl_car(v1old_env);
   v3env = v2;
   v4variables = ECL_NIL;
   goto L7;
L6:;
   {
    cl_object v5i;
    v5i = ecl_car(v3env);
    if (!(ECL_CONSP(v5i))) { goto L9; }
    {
     cl_object v6name;
     v6name = ecl_car(v5i);
     if ((cl_keywordp(v6name))!=ECL_NIL) { goto L9; }
     if (Null(ecl_cadr(v5i))) { goto L16; }
     T1 = v5i;
     goto L15;
L16:;
     T2 = LC15local_var_error_function(v6name);
     T1 = cl_list(3, v6name, ECL_SYM("SYMBOL-MACRO",1175), T2);
L15:;
     v4variables = CONS(T1,v4variables);
    }
   }
L9:;
   v3env = ecl_cdr(v3env);
L7:;
   if (ecl_endp(v3env)) { goto L21; }
   goto L6;
L21:;
   T0 = cl_nreverse(v4variables);
  }
  {
   cl_object v2;
   cl_object v3env;
   cl_object v4macros;
   v2 = ecl_cdr(v1old_env);
   v3env = v2;
   v4macros = ECL_NIL;
   goto L29;
L28:;
   {
    cl_object v5i;
    v5i = ecl_car(v3env);
    if (!(ECL_CONSP(v5i))) { goto L31; }
    T3 = ecl_cadr(v5i);
    if (!((T3)==(ECL_SYM("MACRO",1105)))) { goto L36; }
    T2 = v5i;
    goto L35;
L36:;
    T3 = ecl_car(v5i);
    T5 = ecl_car(v5i);
    T4 = LC17local_fun_error_function(T5);
    T2 = cl_list(3, T3, ECL_SYM("MACRO",1105), T4);
L35:;
    v4macros = CONS(T2,v4macros);
   }
L31:;
   v3env = ecl_cdr(v3env);
L29:;
   if (ecl_endp(v3env)) { goto L41; }
   goto L28;
L41:;
   T1 = cl_nreverse(v4macros);
  }
  value0 = CONS(T0,T1);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function LOCAL-FUN-ERROR-FUNCTION                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC17local_fun_error_function(cl_object v1name)
{
 cl_object env0 = ECL_NIL;
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  env0 = ECL_NIL;
  CLV0 = env0 = CONS(v1name,env0);                /*  NAME            */
  {
   cl_object v2;
   v2 = ecl_make_cclosure_va((cl_objectfn)LC16__lambda46,env0,Cblock,2);
   value0 = v2;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function LOCAL-VAR-ERROR-FUNCTION                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC15local_var_error_function(cl_object v1name)
{
 cl_object env0 = ECL_NIL;
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  env0 = ECL_NIL;
  CLV0 = env0 = CONS(v1name,env0);                /*  NAME            */
  {
   cl_object v2;
   v2 = ecl_make_cclosure_va((cl_objectfn)LC14__lambda45,env0,Cblock,2);
   value0 = v2;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      closure LAMBDA46                                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC16__lambda46(cl_narg narg, cl_object v1whole, cl_object v2env, ...)
{
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
  value0 = cl_error(2, VV[26], ECL_CONS_CAR(CLV0));
  return value0;
 }
 }
}
/*      closure LAMBDA45                                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC14__lambda45(cl_narg narg, cl_object v1whole, cl_object v2env, ...)
{
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
  value0 = cl_error(2, VV[25], ECL_CONS_CAR(CLV0));
  return value0;
 }
 }
}
/*      function definition for MACROLET-FUNCTIONS                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L20macrolet_functions(cl_object v1definitions, cl_object v2old_env)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3env;
   v3env = L18cmp_env_for_bytecodes(v2old_env);
   {
    cl_object v4;
    {
     cl_object v5;
     v5 = ecl_make_cfun((cl_objectfn_fixed)LC19__lambda62,ECL_NIL,Cblock,1);
     v4 = v5;
    }
    {
     cl_object v5;
     cl_object v6;
     v5 = ECL_NIL;
     {
      cl_object v7;
      v7 = v1definitions;
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
L10:;
      if (!(ecl_endp(v6))) { goto L12; }
      goto L11;
L12:;
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
       T1 = v9;
      }
      T2 = ecl_function_dispatch(cl_env_copy,v4)(1, v5);
      v8 = ecl_list1(T2);
      (ECL_CONS_CDR(T1)=v8,T1);
      goto L10;
L11:;
      T0 = ecl_cdr(v7);
      goto L2;
     }
    }
   }
L2:;
   T1 = CONS(ECL_SYM("LIST",483),T0);
   value0 = si_eval_with_env(4, T1, v3env, ECL_NIL, ECL_T);
   return value0;
  }
 }
}
/*      local function LAMBDA62                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC19__lambda62(cl_object v1x)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2name;
   cl_object v3llist;
   cl_object v4def;
   v2name = ecl_car(v1x);
   v3llist = ecl_cadr(v1x);
   v4def = ecl_cddr(v1x);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), v2name);
   T1 = L12expand_defmacro(3, v2name, v3llist, v4def);
   value0 = cl_list(3, ECL_SYM("LIST",483), T0, T1);
   return value0;
  }
 }
}
/*      function definition for CMP-ENV-REGISTER-MACROLET             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L21cmp_env_register_macrolet(cl_object v1definitions, cl_object v2old_env)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3macros;
   v3macros = ecl_cdr(v2old_env);
   {
    cl_object v4;
    v4 = L20macrolet_functions(v1definitions, v2old_env);
    goto L6;
L5:;
    {
     cl_object v5record;
     v5record = ecl_car(v4);
     T0 = ecl_car(v5record);
     T1 = ecl_cadr(v5record);
     T2 = cl_list(3, T0, ECL_SYM("MACRO",1105), T1);
     v3macros = CONS(T2,v3macros);
    }
    v4 = ecl_cdr(v4);
L6:;
    if (Null(v4)) { goto L14; }
    goto L5;
L14:;
   }
   value0 = (ECL_CONS_CDR(v2old_env)=v3macros,v2old_env);
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}

#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/lsp/defmacro.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclLgMDhSZ7_Gq66lq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:LSP;DEFMACRO.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclLgMDhSZ7_Gq66lq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  ecl_cmp_defun(VV[28]);                          /*  SEARCH-KEYWORD  */
  ecl_cmp_defun(VV[29]);                          /*  CHECK-KEYWORD   */
  ecl_cmp_defun(VV[30]);                          /*  DM-TOO-MANY-ARGUMENTS */
  ecl_cmp_defun(VV[31]);                          /*  DM-TOO-FEW-ARGUMENTS */
  ecl_cmp_defun(VV[32]);                          /*  DESTRUCTURE     */
  ecl_cmp_defun(VV[33]);                          /*  FIND-DOCUMENTATION */
  ecl_cmp_defun(VV[34]);                          /*  REMOVE-DOCUMENTATION */
  ecl_cmp_defun(VV[35]);                          /*  FIND-DECLARATIONS */
  ecl_cmp_defun(VV[36]);                          /*  EXPAND-DEFMACRO */
  ecl_cmp_defmacro(VV[37]);                       /*  DESTRUCTURING-BIND */
  (void)0; /* No entry created for CMP-ENV-FOR-BYTECODES */
  (void)0; /* No entry created for MACROLET-FUNCTIONS */
  ecl_cmp_defun(VV[38]);                          /*  CMP-ENV-REGISTER-MACROLET */
}
