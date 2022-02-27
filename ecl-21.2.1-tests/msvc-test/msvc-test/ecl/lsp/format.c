/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:LSP;FORMAT.LSP                                    */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/build/lsp/format.eclh"
/*      function definition for FLOAT-TO-DIGITS*                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L1float_to_digits_(cl_object v1digits, cl_object v2number, cl_object v3position, cl_object v4relativep)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v6;                                  /*  EXP             */
   cl_object v7;                                  /*  STRING          */
   value0 = si_float_to_digits(v1digits, v2number, v3position, v4relativep);
   {
    const int v8 = cl_env_copy->nvalues;
    v6 = value0;
    cl_object v9;
    v9 = (v8<=1)? ECL_NIL : cl_env_copy->values[1];
    v7 = v9;
   }
   if (Null(v3position)) { goto L4; }
   T1 = cl_abs(v3position);
   T2 = ecl_negate(T1);
   T0 = ecl_make_bool(ecl_lower(v6,T2));
   goto L2;
L4:;
   T0 = ECL_NIL;
   goto L2;
L2:;
   cl_env_copy->nvalues = 3;
   cl_env_copy->values[2] = T0;
   cl_env_copy->values[1] = v7;
   cl_env_copy->values[0] = v6;
   return cl_env_copy->values[0];
  }
 }
}
/*      function definition for FLONUM-TO-STRING                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L2flonum_to_string(cl_narg narg, cl_object v1x, ...)
{
 cl_object T0, T1, T2, T3, T4;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>5)) FEwrong_num_arguments_anonym();
 {
  cl_object v2width;
  cl_object v3fdigits;
  cl_object v4scale;
  cl_object v5fmin;
  va_list args; va_start(args,v1x);
  {
   int i = 1;
   if (i >= narg) {
    v2width = ECL_NIL;
   } else {
    i++;
    v2width = va_arg(args,cl_object);
   }
   if (i >= narg) {
    v3fdigits = ECL_NIL;
   } else {
    i++;
    v3fdigits = va_arg(args,cl_object);
   }
   if (i >= narg) {
    v4scale = ecl_make_fixnum(0);
   } else {
    i++;
    v4scale = va_arg(args,cl_object);
   }
   if (i >= narg) {
    v5fmin = ecl_make_fixnum(0);
   } else {
    i++;
    v5fmin = va_arg(args,cl_object);
   }
  }
  va_end(args);
  if (!(ecl_zerop(v1x))) { goto L5; }
  if (!(v3fdigits==ECL_NIL)) { goto L7; }
  cl_env_copy->nvalues = 5;
  cl_env_copy->values[4] = ecl_make_fixnum(0);
  cl_env_copy->values[3] = ECL_NIL;
  cl_env_copy->values[2] = ECL_T;
  cl_env_copy->values[1] = ecl_make_fixnum(2);
  cl_env_copy->values[0] = VV[4];
  return cl_env_copy->values[0];
L7:;
  if (!(ecl_zerop(v3fdigits))) { goto L9; }
  cl_env_copy->nvalues = 5;
  cl_env_copy->values[4] = ecl_make_fixnum(1);
  cl_env_copy->values[3] = ECL_T;
  cl_env_copy->values[2] = ECL_NIL;
  cl_env_copy->values[1] = ecl_make_fixnum(2);
  cl_env_copy->values[0] = VV[5];
  return cl_env_copy->values[0];
L9:;
  {
   cl_object v6s;
   T0 = ecl_one_plus(v3fdigits);
   v6s = cl_make_string(3, T0, ECL_SYM("INITIAL-ELEMENT",1277), CODE_CHAR(48));
   ecl_char_set(v6s,0,(ecl_character)(46));
   {
    cl_fixnum v7;
    v7 = ecl_length(v6s);
    cl_env_copy->nvalues = 5;
    cl_env_copy->values[4] = ecl_make_fixnum(0);
    cl_env_copy->values[3] = ECL_NIL;
    cl_env_copy->values[2] = ECL_T;
    cl_env_copy->values[1] = ecl_make_fixnum(v7);
    cl_env_copy->values[0] = v6s;
    return cl_env_copy->values[0];
   }
  }
L5:;
  {
   cl_object v9;                                  /*  E               */
   cl_object v10;                                 /*  STRING          */
   cl_object v11;                                 /*  ZERO?           */
   if (Null(v3fdigits)) { goto L14; }
   T0 = ecl_plus(v3fdigits,v4scale);
   T1 = ecl_negate(T0);
   T2 = ecl_plus(v5fmin,v4scale);
   T3 = ecl_negate(T2);
   T4 = ((ecl_float_nan_p(T3) || ecl_lowereq(T1,T3))?T1:T3);
   value0 = L1float_to_digits_(ECL_NIL, v1x, T4, ECL_NIL);
   goto L13;
L14:;
   if (!(v2width==ECL_NIL)) { goto L16; }
   value0 = L1float_to_digits_(ECL_NIL, v1x, ECL_NIL, ECL_NIL);
   goto L13;
L16:;
   {
    cl_object v12;
    cl_object v13;
    {
     struct ecl_stack_frame _ecl_inner_frame_aux;
     cl_object _ecl_inner_frame = ecl_stack_frame_open(cl_env_copy,(cl_object)&_ecl_inner_frame_aux,0);
     {
      cl_object v14;
      v14 = _ecl_inner_frame;
      {
       cl_object v15;
       v15 = ECL_SYM("LIST",483);
       T0 = ecl_minus(v2width,ecl_make_fixnum(2));
       if (!(ecl_minusp(v4scale))) { goto L25; }
       T1 = v4scale;
       goto L24;
L25:;
       T1 = ecl_make_fixnum(0);
L24:;
       T2 = ecl_plus(T0,T1);
       T3 = ((ecl_float_nan_p(T2) || ecl_greatereq(ecl_make_fixnum(0),T2))?ecl_make_fixnum(0):T2);
       cl_env_copy->values[0] = L1float_to_digits_(ECL_NIL, v1x, T3, ECL_T);
       ecl_stack_frame_push_values(v14);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;cl_env_copy->values[0]=ecl_apply_from_stack_frame(v14,v15);
       value0 = cl_env_copy->values[0];
      }
     }
     ecl_stack_frame_close(_ecl_inner_frame);
    }
    v12 = value0;
    {
     struct ecl_stack_frame _ecl_inner_frame_aux;
     cl_object _ecl_inner_frame = ecl_stack_frame_open(cl_env_copy,(cl_object)&_ecl_inner_frame_aux,0);
     {
      cl_object v14;
      v14 = _ecl_inner_frame;
      {
       cl_object v15;
       v15 = ECL_SYM("LIST",483);
       T0 = ecl_plus(v5fmin,v4scale);
       T1 = ecl_negate(T0);
       cl_env_copy->values[0] = L1float_to_digits_(ECL_NIL, v1x, T1, ECL_NIL);
       ecl_stack_frame_push_values(v14);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;cl_env_copy->values[0]=ecl_apply_from_stack_frame(v14,v15);
       value0 = cl_env_copy->values[0];
      }
     }
     ecl_stack_frame_close(_ecl_inner_frame);
    }
    v13 = value0;
    T0 = ecl_cadr(v12);
    {
     cl_fixnum v14;
     v14 = ecl_length(T0);
     T1 = ecl_cadr(v13);
     {
      cl_fixnum v15;
      v15 = ecl_length(T1);
      if (!((v14)>=(v15))) { goto L33; }
     }
    }
    value0 = cl_values_list(v12);
    goto L13;
L33:;
    value0 = cl_values_list(v13);
   }
L13:;
   {
    const int v12 = cl_env_copy->nvalues;
    v9 = value0;
    cl_object v13;
    v13 = (v12<=1)? ECL_NIL : cl_env_copy->values[1];
    v10 = v13;
    v13 = (v12<=2)? ECL_NIL : cl_env_copy->values[2];
    v11 = v13;
   }
   {
    cl_object v12exp;
    cl_object v13stream;
    cl_fixnum v14length;
    v12exp = ecl_plus(v9,v4scale);
    v13stream = cl_make_string_output_stream(0);
    v14length = ecl_length(v10);
    if (!(ecl_plusp(v12exp))) { goto L38; }
    T0 = ((ecl_float_nan_p(v12exp) || ecl_lowereq(ecl_make_fixnum(v14length),v12exp))?ecl_make_fixnum(v14length):v12exp);
    cl_write_string(4, v10, v13stream, ECL_SYM("END",1247), T0);
    {
     cl_object v15;
     v15 = ecl_minus(v12exp,ecl_make_fixnum(v14length));
     {
      cl_object v16i;
      v16i = ecl_make_fixnum(0);
      goto L44;
L43:;
      cl_write_char(2, CODE_CHAR(48), v13stream);
      v16i = ecl_one_plus(v16i);
L44:;
      if (!(ecl_lower(v16i,v15))) { goto L49; }
      goto L43;
L49:;
     }
    }
L38:;
    cl_write_char(2, CODE_CHAR(46), v13stream);
    if (Null(v11)) { goto L53; }
    if (Null(v3fdigits)) { goto L53; }
    {
     cl_object v15i;
     v15i = ecl_make_fixnum(0);
     goto L58;
L57:;
     cl_write_char(2, CODE_CHAR(48), v13stream);
     v15i = ecl_one_plus(v15i);
L58:;
     if (!(ecl_lower(v15i,v3fdigits))) { goto L63; }
     goto L57;
L63:;
     goto L52;
    }
L53:;
    if (Null(v3fdigits)) { goto L65; }
    {
     cl_object v16characters_used;
     v16characters_used = ecl_make_fixnum(0);
     {
      cl_object v17;
      T0 = ecl_negate(v12exp);
      v17 = ((ecl_float_nan_p(v3fdigits) || ecl_lowereq(T0,v3fdigits))?T0:v3fdigits);
      {
       cl_object v18i;
       v18i = ecl_make_fixnum(0);
       goto L72;
L71:;
       v16characters_used = ecl_plus(v16characters_used,ecl_make_fixnum(1));
       cl_write_char(2, CODE_CHAR(48), v13stream);
       v18i = ecl_one_plus(v18i);
L72:;
       if (!(ecl_lower(v18i,v17))) { goto L79; }
       goto L71;
L79:;
      }
     }
     {
      cl_object v17start;
      cl_object v18end;
      T0 = ((ecl_float_nan_p(v12exp) || ecl_lowereq(ecl_make_fixnum(v14length),v12exp))?ecl_make_fixnum(v14length):v12exp);
      v17start = ((ecl_float_nan_p(T0) || ecl_greatereq(ecl_make_fixnum(0),T0))?ecl_make_fixnum(0):T0);
      T0 = ecl_minus(v3fdigits,v16characters_used);
      T1 = ecl_plus(v17start,T0);
      T2 = ((ecl_float_nan_p(T1) || ecl_lowereq(ecl_make_fixnum(v14length),T1))?ecl_make_fixnum(v14length):T1);
      v18end = ((ecl_float_nan_p(T2) || ecl_greatereq(v17start,T2))?v17start:T2);
      cl_write_string(6, v10, v13stream, ECL_SYM("START",1337), v17start, ECL_SYM("END",1247), v18end);
      {
       cl_object v19;
       v19 = ecl_minus(v18end,v17start);
       v16characters_used = ecl_plus(v16characters_used,v19);
      }
      {
       cl_object v19;
       v19 = ecl_minus(v3fdigits,v16characters_used);
       {
        cl_object v20i;
        v20i = ecl_make_fixnum(0);
        goto L90;
L89:;
        cl_write_char(2, CODE_CHAR(48), v13stream);
        v20i = ecl_one_plus(v20i);
L90:;
        if (!(ecl_lower(v20i,v19))) { goto L95; }
        goto L89;
L95:;
        goto L52;
       }
      }
     }
    }
L65:;
    if (Null(v11)) { goto L97; }
    cl_write_char(2, CODE_CHAR(48), v13stream);
    goto L52;
L97:;
    {
     cl_object v21;
     v21 = ecl_negate(v12exp);
     {
      cl_object v22i;
      v22i = ecl_make_fixnum(0);
      goto L103;
L102:;
      cl_write_char(2, CODE_CHAR(48), v13stream);
      v22i = ecl_one_plus(v22i);
L103:;
      if (!(ecl_lower(v22i,v21))) { goto L108; }
      goto L102;
L108:;
     }
    }
    {
     cl_object v21start;
     T0 = ((ecl_float_nan_p(v12exp) || ecl_lowereq(ecl_make_fixnum(v14length),v12exp))?ecl_make_fixnum(v14length):v12exp);
     v21start = ((ecl_float_nan_p(T0) || ecl_greatereq(ecl_make_fixnum(0),T0))?ecl_make_fixnum(0):T0);
     cl_write_string(4, v10, v13stream, ECL_SYM("START",1337), v21start);
    }
L52:;
    {
     cl_object v15string;
     cl_fixnum v16length;
     cl_object v17position;
     v15string = cl_get_output_stream_string(v13stream);
     v16length = ecl_length(v15string);
     v17position = cl_position(2, CODE_CHAR(46), v15string);
     {
      bool v18;
      v18 = ecl_number_equalp(v17position,ecl_make_fixnum(0));
      T0 = ecl_make_integer((v16length)-1);
      {
       bool v19;
       v19 = ecl_number_equalp(v17position,T0);
       cl_env_copy->nvalues = 5;
       cl_env_copy->values[4] = v17position;
       cl_env_copy->values[3] = ecl_make_bool(v19);
       cl_env_copy->values[2] = ecl_make_bool(v18);
       cl_env_copy->values[1] = ecl_make_fixnum(v16length);
       cl_env_copy->values[0] = v15string;
       return cl_env_copy->values[0];
      }
     }
    }
   }
  }
 }
}
/*      function definition for EXPONENT-IN-BASE10                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L3exponent_in_base10(cl_object v1x)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ecl_number_equalp(v1x,ecl_make_fixnum(0)))) { goto L1; }
  value0 = ecl_make_fixnum(1);
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  T0 = cl_abs(v1x);
  T1 = cl_log(2, T0, ecl_make_fixnum(10));
  T2 = ecl_floor1(T1);
  value0 = ecl_one_plus(T2);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for MAKE-FORMAT-DIRECTIVE                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L4make_format_directive(cl_narg narg, ...)
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
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  {
   cl_object keyvars[14];
   cl_parse_key(args,7,L4make_format_directivekeys,keyvars,NULL,FALSE);
   ecl_va_end(args);
   if (Null(keyvars[7])) {
    v1 = ECL_T;
   } else {
    v1 = keyvars[0];
   }
   if (Null(keyvars[8])) {
    v2 = ecl_make_fixnum(0);
   } else {
    v2 = keyvars[1];
   }
   if (Null(keyvars[9])) {
    v3 = ecl_make_fixnum(0);
   } else {
    v3 = keyvars[2];
   }
   if (Null(keyvars[10])) {
    v4 = CODE_CHAR(32);
   } else {
    v4 = keyvars[3];
   }
   v5 = keyvars[4];
   v6 = keyvars[5];
   v7 = keyvars[6];
  }
  T0 = cl_list(8, VV[8], v1, v2, v3, v4, v5, v6, v7);
  value0 = cl_make_array(5, VV[11], ECL_SYM("ELEMENT-TYPE",1246), ECL_T, ECL_SYM("INITIAL-CONTENTS",1278), T0);
  return value0;
 }
}
/*      function definition for TOKENIZE-CONTROL-STRING               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L5tokenize_control_string(cl_object v1string)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_fixnum v2;
   cl_object v3index;
   cl_object v4result;
   v2 = ecl_length(v1string);
   v3index = ecl_make_fixnum(0);
   v4result = ECL_NIL;
L5:;
   {
    cl_object v5next_directive;
    value0 = cl_position(4, CODE_CHAR(126), v1string, ECL_SYM("START",1337), v3index);
    if ((value0)!=ECL_NIL) { goto L9; }
    v5next_directive = ecl_make_fixnum(v2);
    goto L7;
L9:;
    v5next_directive = value0;
    goto L7;
L7:;
    if (!(ecl_greater(v5next_directive,v3index))) { goto L11; }
    T0 = cl_subseq(3, v1string, v3index, v5next_directive);
    v4result = CONS(T0,v4result);
L11:;
    if (!(ecl_number_equalp(v5next_directive,ecl_make_fixnum(v2)))) { goto L14; }
    goto L4;
L14:;
    {
     cl_object v6directive;
     v6directive = L7parse_directive(v1string, v5next_directive);
     v4result = CONS(v6directive,v4result);
     v3index = ecl_function_dispatch(cl_env_copy,VV[300])(1, v6directive) /*  FORMAT-DIRECTIVE-END */;
    }
   }
   goto L5;
L4:;
   value0 = cl_nreverse(v4result);
   return value0;
  }
 }
}
/*      function definition for PARSE-DIRECTIVE                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L7parse_directive(cl_object v1string, cl_object v2start)
{
 cl_object T0, T1, T2;
 volatile cl_object lex0[4];
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  lex0[0] = v1string;                             /*  STRING          */
  lex0[1] = v2start;                              /*  START           */
TTL:
  {
   cl_object v3;
   cl_fixnum v4;
   cl_object v5params;
   cl_object v6colonp;
   cl_object v7atsignp;
   v3 = ecl_one_plus(lex0[1]);
   v4 = ecl_length(lex0[0]);
   lex0[2] = v3;                                  /*  POSN            */
   v5params = ECL_NIL;
   v6colonp = ECL_NIL;
   v7atsignp = ECL_NIL;
   lex0[3] = ecl_make_fixnum(v4);                 /*  END             */
L7:;
   {
    cl_object v8char;
    v8char = LC6get_char(lex0);
    if ((cl_charLE(3, CODE_CHAR(48), v8char, CODE_CHAR(57)))!=ECL_NIL) { goto L13; }
    if (ecl_char_code(v8char)==ecl_char_code(CODE_CHAR(43))) { goto L13; }
    if (!(ecl_char_code(v8char)==ecl_char_code(CODE_CHAR(45)))) { goto L11; }
    goto L12;
L13:;
L12:;
    {
     cl_object v10;                               /*  PARAM           */
     cl_object v11;                               /*  NEW-POSN        */
     value0 = cl_parse_integer(5, lex0[0], ECL_SYM("START",1337), lex0[2], ECL_SYM("JUNK-ALLOWED",1287), ECL_T);
     {
      v10 = value0;
      v11 = cl_env_copy->values[1];
     }
     T0 = CONS(lex0[2],v10);
     v5params = CONS(T0,v5params);
     lex0[2] = v11;
     {
      cl_object v12;
      v12 = LC6get_char(lex0);
      if (((v12)==ECL_CODE_CHAR((ecl_character)(44)))) { goto L9; }
      if (!(((v12)==ECL_CODE_CHAR((ecl_character)(58))))) { goto L28; }
      goto L25;
      goto L26;
L28:;
      goto L26;
L26:;
      if (!(((v12)==ECL_CODE_CHAR((ecl_character)(64))))) { goto L23; }
      goto L24;
L25:;
L24:;
      lex0[2] = ecl_minus(lex0[2],ecl_make_fixnum(1));
      goto L9;
L23:;
      goto L6;
     }
    }
L11:;
    if (ecl_char_code(v8char)==ecl_char_code(CODE_CHAR(118))) { goto L34; }
    if (!(ecl_char_code(v8char)==ecl_char_code(CODE_CHAR(86)))) { goto L32; }
    goto L33;
L34:;
L33:;
    T0 = CONS(lex0[2],VV[23]);
    v5params = CONS(T0,v5params);
    lex0[2] = ecl_plus(lex0[2],ecl_make_fixnum(1));
    {
     cl_object v9;
     v9 = LC6get_char(lex0);
     if (((v9)==ECL_CODE_CHAR((ecl_character)(44)))) { goto L9; }
     if (!(((v9)==ECL_CODE_CHAR((ecl_character)(58))))) { goto L47; }
     goto L44;
     goto L45;
L47:;
     goto L45;
L45:;
     if (!(((v9)==ECL_CODE_CHAR((ecl_character)(64))))) { goto L42; }
     goto L43;
L44:;
L43:;
     lex0[2] = ecl_minus(lex0[2],ecl_make_fixnum(1));
     goto L9;
L42:;
     goto L6;
    }
L32:;
    if (!(ecl_char_code(v8char)==ecl_char_code(CODE_CHAR(35)))) { goto L51; }
    T0 = CONS(lex0[2],VV[24]);
    v5params = CONS(T0,v5params);
    lex0[2] = ecl_plus(lex0[2],ecl_make_fixnum(1));
    {
     cl_object v10;
     v10 = LC6get_char(lex0);
     if (((v10)==ECL_CODE_CHAR((ecl_character)(44)))) { goto L9; }
     if (!(((v10)==ECL_CODE_CHAR((ecl_character)(58))))) { goto L64; }
     goto L61;
     goto L62;
L64:;
     goto L62;
L62:;
     if (!(((v10)==ECL_CODE_CHAR((ecl_character)(64))))) { goto L59; }
     goto L60;
L61:;
L60:;
     lex0[2] = ecl_minus(lex0[2],ecl_make_fixnum(1));
     goto L9;
L59:;
     goto L6;
    }
L51:;
    if (!(ecl_char_code(v8char)==ecl_char_code(CODE_CHAR(39)))) { goto L68; }
    lex0[2] = ecl_plus(lex0[2],ecl_make_fixnum(1));
    T0 = LC6get_char(lex0);
    T1 = CONS(lex0[2],T0);
    v5params = CONS(T1,v5params);
    lex0[2] = ecl_plus(lex0[2],ecl_make_fixnum(1));
    T0 = LC6get_char(lex0);
    if (ecl_char_code(T0)==ecl_char_code(CODE_CHAR(44))) { goto L9; }
    lex0[2] = ecl_minus(lex0[2],ecl_make_fixnum(1));
    goto L9;
L68:;
    if (!(ecl_char_code(v8char)==ecl_char_code(CODE_CHAR(44)))) { goto L80; }
    T0 = CONS(lex0[2],ECL_NIL);
    v5params = CONS(T0,v5params);
    goto L9;
L80:;
    if (!(ecl_char_code(v8char)==ecl_char_code(CODE_CHAR(58)))) { goto L83; }
    if (Null(v6colonp)) { goto L85; }
    cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[25], ECL_SYM("CONTROL-STRING",1233), lex0[0], ECL_SYM("OFFSET",1306), lex0[2]);
    goto L9;
L85:;
    v6colonp = ECL_T;
    goto L9;
L83:;
    if (!(ecl_char_code(v8char)==ecl_char_code(CODE_CHAR(64)))) { goto L88; }
    if (Null(v7atsignp)) { goto L90; }
    cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[26], ECL_SYM("CONTROL-STRING",1233), lex0[0], ECL_SYM("OFFSET",1306), lex0[2]);
    goto L9;
L90:;
    v7atsignp = ECL_T;
    goto L9;
L88:;
    goto L6;
   }
L9:;
   lex0[2] = ecl_plus(lex0[2],ecl_make_fixnum(1));
   goto L7;
L6:;
   {
    cl_object v8char;
    v8char = LC6get_char(lex0);
    if (!(ecl_char_code(v8char)==ecl_char_code(CODE_CHAR(47)))) { goto L96; }
    {
     cl_object v9closing_slash;
     T0 = ecl_one_plus(lex0[2]);
     v9closing_slash = cl_position(4, CODE_CHAR(47), lex0[0], ECL_SYM("START",1337), T0);
     if (Null(v9closing_slash)) { goto L99; }
     lex0[2] = v9closing_slash;
     goto L96;
L99:;
     cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[27], ECL_SYM("CONTROL-STRING",1233), lex0[0], ECL_SYM("OFFSET",1306), lex0[2]);
    }
L96:;
    T0 = ecl_one_plus(lex0[2]);
    T1 = cl_char_upcase(v8char);
    T2 = cl_nreverse(v5params);
    value0 = L4make_format_directive(14, VV[28], lex0[0], ECL_SYM("START",1337), lex0[1], ECL_SYM("END",1247), T0, VV[29], T1, VV[30], v6colonp, VV[31], v7atsignp, VV[32], T2);
    return value0;
   }
  }
 }
}
/*      local function GET-CHAR                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC6get_char(volatile cl_object *lex0)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ecl_number_equalp(lex0[2],lex0[3]))) { goto L1; }
  value0 = cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[20], ECL_SYM("CONTROL-STRING",1233), lex0[0], ECL_SYM("OFFSET",1306), lex0[1]);
  return value0;
L1:;
  value0 = ecl_elt(lex0[0],ecl_to_size(lex0[2]));
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for FORMATTER-AUX                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L8formatter_aux(volatile cl_narg narg, cl_object volatile v1stream, cl_object volatile v2string_or_fun, cl_object volatile v3orig_args, ...)
{
 cl_object T0;
 cl_object volatile env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<3)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>4)) FEwrong_num_arguments_anonym();
 {
  cl_object volatile v4args;
  va_list args; va_start(args,v3orig_args);
  {
   int i = 3;
   if (i >= narg) {
    v4args = v3orig_args;
   } else {
    i++;
    v4args = va_arg(args,cl_object);
   }
  }
  va_end(args);
  if (Null(cl_functionp(v2string_or_fun))) { goto L2; }
  value0 = cl_apply(3, v2string_or_fun, v1stream, v4args);
  return value0;
L2:;
  value0 = VV[40];
  {
   ecl_frs_push(cl_env_copy,value0);
   if (__ecl_frs_push_result) {                   /*  BEGIN CATCH 4   */
    value0 = cl_env_copy->values[0];
   } else {
    {
     cl_object v5string;
     if (Null(cl_simple_string_p(v2string_or_fun))) { goto L9; }
     v5string = v2string_or_fun;
     goto L8;
L9:;
     if (!(ECL_STRINGP(v2string_or_fun))) { goto L11; }
     v5string = ecl_function_dispatch(cl_env_copy,VV[302])(4, v2string_or_fun, ECL_SYM("CHARACTER",224), ECL_SYM("*",20), ECL_T) /*  COERCE-TO-VECTOR */;
     goto L8;
L11:;
     v5string = si_etypecase_error(v2string_or_fun, VV[41]);
L8:;
     ecl_bds_bind(cl_env_copy,VV[18],ECL_NIL);    /*  *OUTPUT-LAYOUT-MODE* */
     ecl_bds_bind(cl_env_copy,VV[16],v5string);   /*  *DEFAULT-FORMAT-ERROR-CONTROL-STRING* */
     ecl_bds_bind(cl_env_copy,VV[34],ECL_NIL);    /*  *LOGICAL-BLOCK-POPPER* */
     T0 = L5tokenize_control_string(v5string);
     value0 = L9interpret_directive_list(v1stream, T0, v3orig_args, v4args);
     ecl_bds_unwind1(cl_env_copy);
     ecl_bds_unwind1(cl_env_copy);
     ecl_bds_unwind1(cl_env_copy);
    }
   }
   ecl_frs_pop(cl_env_copy);                      /*  END CATCH 4     */
  }
  return value0;
 }
}
/*      function definition for INTERPRET-DIRECTIVE-LIST              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L9interpret_directive_list(cl_object v1stream, cl_object v2directives, cl_object v3orig_args, cl_object v4args)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(v2directives)) { goto L1; }
  {
   cl_object v5directive;
   v5directive = ecl_car(v2directives);
   if (Null(cl_simple_string_p(v5directive))) { goto L4; }
   cl_write_string(2, v5directive, v1stream);
   v2directives = ecl_cdr(v2directives);
   goto TTL;
L4:;
   if (!(ECL_VECTORP(v5directive))) { goto L12; }
   {
    cl_object v7;                                 /*  NEW-DIRECTIVES  */
    cl_object v8;                                 /*  NEW-ARGS        */
    {
     cl_fixnum v9code;
     cl_object v10function;
     T0 = ecl_function_dispatch(cl_env_copy,VV[303])(1, v5directive) /*  FORMAT-DIRECTIVE-CHARACTER */;
     v9code = ecl_fixnum(cl_char_code(T0));
     if (!((v9code)<(127))) { goto L18; }
     v10function = ecl_aref1(ecl_symbol_value(VV[15]),v9code);
     goto L16;
L18:;
     v10function = ECL_NIL;
     goto L16;
L16:;
     T0 = ecl_function_dispatch(cl_env_copy,VV[300])(1, v5directive) /*  FORMAT-DIRECTIVE-END */;
     T1 = ecl_one_minus(T0);
     ecl_bds_bind(cl_env_copy,VV[17],T1);         /*  *DEFAULT-FORMAT-ERROR-OFFSET* */
     if ((v10function)!=ECL_NIL) { goto L20; }
     cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[43]);
L20:;
     {
      cl_object v12;                              /*  NEW-DIRECTIVES  */
      cl_object v13;                              /*  NEW-ARGS        */
      T0 = ecl_cdr(v2directives);
      value0 = ecl_function_dispatch(cl_env_copy,v10function)(5, v1stream, v5directive, T0, v3orig_args, v4args);
      {
       const int v14 = cl_env_copy->nvalues;
       v12 = value0;
       cl_object v15;
       v15 = (v14<=1)? ECL_NIL : cl_env_copy->values[1];
       v13 = v15;
      }
      cl_env_copy->nvalues = 2;
      cl_env_copy->values[1] = v13;
      cl_env_copy->values[0] = v12;
      value0 = cl_env_copy->values[0];
      ecl_bds_unwind1(cl_env_copy);
     }
    }
    {
     v7 = value0;
     v8 = cl_env_copy->values[1];
    }
    v2directives = v7;
    v4args = v8;
    goto TTL;
   }
L12:;
   value0 = si_etypecase_error(v5directive, VV[44]);
   return value0;
  }
L1:;
  value0 = v4args;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function FORMATTER                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC10formatter(cl_object v1, cl_object v2)
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
   cl_object v4control_string;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[307])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v5;
    v5 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4control_string = v5;
   }
   if (Null(v3)) { goto L8; }
   ecl_function_dispatch(cl_env_copy,VV[308])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L8:;
   T0 = L11_formatter(v4control_string);
   value0 = cl_list(2, ECL_SYM("FUNCTION",398), T0);
   return value0;
  }
 }
}
/*      function definition for %FORMATTER                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L11_formatter(cl_object volatile v1control_string)
{
 cl_object T0, T1, T2, T3;
 cl_object volatile env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = VV[46];
  {
   ecl_frs_push(cl_env_copy,value0);
   if (__ecl_frs_push_result==0) {                /*  BEGIN CATCH 2   */
    {
     cl_object v2guts;
     cl_object v3args;
     ecl_bds_bind(cl_env_copy,VV[39],ECL_NIL);    /*  *SIMPLE-ARGS*   */
     ecl_bds_bind(cl_env_copy,VV[37],ECL_T);      /*  *ONLY-SIMPLE-ARGS* */
     v2guts = L12expand_control_string(v1control_string);
     v3args = ECL_NIL;
     {
      cl_object v4;
      v4 = ecl_symbol_value(VV[39]);
      goto L11;
L10:;
      {
       cl_object v5arg;
       v5arg = ecl_car(v4);
       T0 = ecl_car(v5arg);
       T1 = ecl_cdr(v5arg);
       T2 = cl_list(8, ECL_SYM("ERROR",339), VV[47], VV[19], VV[48], ECL_SYM("CONTROL-STRING",1233), v1control_string, ECL_SYM("OFFSET",1306), T1);
       T3 = cl_list(2, T0, T2);
       v3args = CONS(T3,v3args);
      }
      v4 = ecl_cdr(v4);
L11:;
      if (Null(v4)) { goto L19; }
      goto L10;
L19:;
     }
     T0 = ecl_append(v3args,VV[49]);
     T1 = cl_listX(3, ECL_SYM("STREAM",801), ECL_SYM("&OPTIONAL",13), T0);
     value0 = cl_list(4, ECL_SYM("LAMBDA",454), T1, v2guts, VV[50]);
     ecl_frs_pop(cl_env_copy);
     ecl_bds_unwind1(cl_env_copy);
     ecl_bds_unwind1(cl_env_copy);
     return value0;
    }
   }
   ecl_frs_pop(cl_env_copy);                      /*  END CATCH 2     */
  }
  ecl_bds_bind(cl_env_copy,VV[38],ECL_T);         /*  *ORIG-ARGS-AVAILABLE* */
  ecl_bds_bind(cl_env_copy,VV[37],ECL_NIL);       /*  *ONLY-SIMPLE-ARGS* */
  T0 = L12expand_control_string(v1control_string);
  T1 = cl_list(4, ECL_SYM("LET",479), VV[52], T0, VV[50]);
  value0 = cl_list(3, ECL_SYM("LAMBDA",454), VV[51], T1);
  ecl_bds_unwind1(cl_env_copy);
  ecl_bds_unwind1(cl_env_copy);
  return value0;
 }
}
/*      function definition for EXPAND-CONTROL-STRING                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L12expand_control_string(cl_object v1string)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2string;
   cl_object v3directives;
   if (Null(cl_simple_string_p(v1string))) { goto L2; }
   v2string = v1string;
   goto L1;
L2:;
   if (!(ECL_STRINGP(v1string))) { goto L4; }
   v2string = ecl_function_dispatch(cl_env_copy,VV[302])(4, v1string, ECL_SYM("CHARACTER",224), ECL_SYM("*",20), ECL_T) /*  COERCE-TO-VECTOR */;
   goto L1;
L4:;
   v2string = si_etypecase_error(v1string, VV[41]);
L1:;
   ecl_bds_bind(cl_env_copy,VV[18],ECL_NIL);      /*  *OUTPUT-LAYOUT-MODE* */
   ecl_bds_bind(cl_env_copy,VV[16],v2string);     /*  *DEFAULT-FORMAT-ERROR-CONTROL-STRING* */
   v3directives = L5tokenize_control_string(v2string);
   T0 = L13expand_directive_list(v3directives);
   value0 = cl_listX(3, ECL_SYM("BLOCK",139), ECL_NIL, T0);
   ecl_bds_unwind1(cl_env_copy);
   ecl_bds_unwind1(cl_env_copy);
   return value0;
  }
 }
}
/*      function definition for EXPAND-DIRECTIVE-LIST                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L13expand_directive_list(cl_object v1directives)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2results;
   cl_object v3remaining_directives;
   v2results = ECL_NIL;
   v3remaining_directives = v1directives;
L4:;
   if ((v3remaining_directives)!=ECL_NIL) { goto L6; }
   goto L3;
L6:;
   {
    cl_object v5;                                 /*  FORM            */
    cl_object v6;                                 /*  NEW-DIRECTIVES  */
    T0 = ecl_car(v3remaining_directives);
    T1 = ecl_cdr(v3remaining_directives);
    value0 = L14expand_directive(T0, T1);
    {
     const int v7 = cl_env_copy->nvalues;
     v5 = value0;
     cl_object v8;
     v8 = (v7<=1)? ECL_NIL : cl_env_copy->values[1];
     v6 = v8;
    }
    v2results = CONS(v5,v2results);
    v3remaining_directives = v6;
   }
   goto L4;
L3:;
   value0 = cl_reverse(v2results);
   return value0;
  }
 }
}
/*      function definition for EXPAND-DIRECTIVE                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L14expand_directive(cl_object v1directive, cl_object v2more_directives)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(cl_simple_string_p(v1directive))) { goto L1; }
  T0 = cl_list(3, ECL_SYM("WRITE-STRING",924), v1directive, ECL_SYM("STREAM",801));
  cl_env_copy->nvalues = 2;
  cl_env_copy->values[1] = v2more_directives;
  cl_env_copy->values[0] = T0;
  return cl_env_copy->values[0];
L1:;
  if (!(ECL_VECTORP(v1directive))) { goto L3; }
  {
   cl_fixnum v3code;
   cl_object v4expander;
   T0 = ecl_function_dispatch(cl_env_copy,VV[303])(1, v1directive) /*  FORMAT-DIRECTIVE-CHARACTER */;
   v3code = ecl_fixnum(cl_char_code(T0));
   if (!((v3code)<(127))) { goto L8; }
   v4expander = ecl_aref1(ecl_symbol_value(VV[14]),v3code);
   goto L6;
L8:;
   v4expander = ECL_NIL;
   goto L6;
L6:;
   T0 = ecl_function_dispatch(cl_env_copy,VV[300])(1, v1directive) /*  FORMAT-DIRECTIVE-END */;
   T1 = ecl_one_minus(T0);
   ecl_bds_bind(cl_env_copy,VV[17],T1);           /*  *DEFAULT-FORMAT-ERROR-OFFSET* */
   if (Null(v4expander)) { goto L10; }
   value0 = ecl_function_dispatch(cl_env_copy,v4expander)(2, v1directive, v2more_directives);
   ecl_bds_unwind1(cl_env_copy);
   return value0;
L10:;
   value0 = cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[53]);
   ecl_bds_unwind1(cl_env_copy);
   return value0;
  }
L3:;
  value0 = si_etypecase_error(v1directive, VV[54]);
  return value0;
 }
}
/*      function definition for EXPAND-NEXT-ARG                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L15expand_next_arg(cl_narg narg, ...)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg>1)) FEwrong_num_arguments_anonym();
 {
  cl_object v1offset;
  va_list args; va_start(args,narg);
  {
   int i = 0;
   if (i >= narg) {
    v1offset = ECL_NIL;
   } else {
    i++;
    v1offset = va_arg(args,cl_object);
   }
  }
  va_end(args);
  if ((ecl_symbol_value(VV[38]))!=ECL_NIL) { goto L4; }
  if ((ecl_symbol_value(VV[37]))!=ECL_NIL) { goto L2; }
  goto L3;
L4:;
L3:;
  value0 = v1offset;
  if ((value0)!=ECL_NIL) { goto L8; }
  T0 = ecl_symbol_value(VV[17]);
  goto L6;
L8:;
  T0 = value0;
  goto L6;
L6:;
  value0 = cl_list(3, ecl_symbol_value(VV[35]), ecl_symbol_value(VV[16]), T0);
  return value0;
L2:;
  {
   cl_object v2symbol;
   v2symbol = cl_gensym(1, VV[55]);
   value0 = v1offset;
   if ((value0)!=ECL_NIL) { goto L15; }
   T0 = ecl_symbol_value(VV[17]);
   goto L13;
L15:;
   T0 = value0;
   goto L13;
L13:;
   T1 = CONS(v2symbol,T0);
   cl_set(VV[39],CONS(T1,ecl_symbol_value(VV[39])));
   value0 = v2symbol;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for NEED-HAIRY-ARGS                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L16need_hairy_args()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(ecl_symbol_value(VV[37]))) { goto L1; }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function EXPANDER-NEXT-ARG                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC17expander_next_arg(cl_object v1, cl_object v2)
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
   cl_object v4string;
   cl_object v5offset;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[307])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4string = v6;
   }
   if (!(v3==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[307])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5offset = v6;
   }
   if (Null(v3)) { goto L14; }
   ecl_function_dispatch(cl_env_copy,VV[308])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L14:;
   T0 = cl_list(8, ECL_SYM("ERROR",339), VV[47], VV[19], VV[57], ECL_SYM("CONTROL-STRING",1233), v4string, ECL_SYM("OFFSET",1306), v5offset);
   value0 = cl_list(4, ECL_SYM("IF",948), VV[50], VV[56], T0);
   return value0;
  }
 }
}
/*      local function EXPANDER-PPRINT-NEXT-ARG                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC18expander_pprint_next_arg(cl_object v1, cl_object v2)
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
   cl_object v4string;
   cl_object v5offset;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[307])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4string = v6;
   }
   if (!(v3==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[307])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5offset = v6;
   }
   if (Null(v3)) { goto L14; }
   ecl_function_dispatch(cl_env_copy,VV[308])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L14:;
   T0 = cl_list(8, ECL_SYM("ERROR",339), VV[47], VV[19], VV[57], ECL_SYM("CONTROL-STRING",1233), v4string, ECL_SYM("OFFSET",1306), v5offset);
   T1 = cl_list(3, ECL_SYM("WHEN",907), VV[58], T0);
   value0 = cl_listX(3, ECL_SYM("PROGN",673), T1, VV[59]);
   return value0;
  }
 }
}
/*      function definition for %SET-FORMAT-DIRECTIVE-EXPANDER        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L19_set_format_directive_expander(cl_object v1char, cl_object v2fn)
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
   v3 = ecl_symbol_value(VV[14]);
   T0 = v3;
   {
    cl_fixnum v4;
    {
     cl_fixnum v5;
     {
      ecl_character v6;
      v6 = ecl_char_upcase(CHAR_CODE(v1char));
      v5 = v6;
     }
     if (ecl_unlikely((v5)>=(v3)->vector.dim))
           FEwrong_index(ECL_NIL,v3,-1,ecl_make_fixnum(v5),(v3)->vector.dim);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v4 = v5;
    }
    ecl_aset_unsafe(T0,v4,v2fn);
   }
  }
  value0 = v1char;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for %SET-FORMAT-DIRECTIVE-INTERPRETER     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L20_set_format_directive_interpreter(cl_object v1char, cl_object v2fn)
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
   v3 = ecl_symbol_value(VV[15]);
   T0 = v3;
   {
    cl_fixnum v4;
    {
     cl_fixnum v5;
     {
      ecl_character v6;
      v6 = ecl_char_upcase(CHAR_CODE(v1char));
      v5 = v6;
     }
     if (ecl_unlikely((v5)>=(v3)->vector.dim))
           FEwrong_index(ECL_NIL,v3,-1,ecl_make_fixnum(v5),(v3)->vector.dim);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v4 = v5;
    }
    ecl_aset_unsafe(T0,v4,v2fn);
   }
  }
  value0 = v1char;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for FIND-DIRECTIVE                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L22find_directive(cl_object v1directives, cl_object v2kind, cl_object v3stop_at_semi)
{
 cl_object T0, T1;
 volatile cl_object lex0[1];
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  lex0[0] = v1directives;                         /*  DIRECTIVES      */
TTL:
  if (Null(lex0[0])) { goto L1; }
  {
   cl_object v4next;
   v4next = ecl_car(lex0[0]);
   if (Null(ecl_function_dispatch(cl_env_copy,VV[10])(1, v4next) /*  FORMAT-DIRECTIVE-P */)) { goto L4; }
   {
    cl_object v5char;
    v5char = ecl_function_dispatch(cl_env_copy,VV[303])(1, v4next) /*  FORMAT-DIRECTIVE-CHARACTER */;
    if (ecl_char_code(v2kind)==ecl_char_code(v5char)) { goto L9; }
    if (Null(v3stop_at_semi)) { goto L7; }
    if (!(ecl_char_code(v5char)==ecl_char_code(CODE_CHAR(59)))) { goto L7; }
    goto L8;
L9:;
L8:;
    value0 = ecl_car(lex0[0]);
    cl_env_copy->nvalues = 1;
    return value0;
L7:;
    if (!(((v5char)==ECL_CODE_CHAR((ecl_character)(40))))) { goto L15; }
    T1 = LC21after(lex0, CODE_CHAR(41));
    goto L14;
L15:;
    if (!(((v5char)==ECL_CODE_CHAR((ecl_character)(60))))) { goto L17; }
    T1 = LC21after(lex0, CODE_CHAR(62));
    goto L14;
L17:;
    if (!(((v5char)==ECL_CODE_CHAR((ecl_character)(91))))) { goto L19; }
    T1 = LC21after(lex0, CODE_CHAR(93));
    goto L14;
L19:;
    if (!(((v5char)==ECL_CODE_CHAR((ecl_character)(123))))) { goto L21; }
    T1 = LC21after(lex0, CODE_CHAR(125));
    goto L14;
L21:;
    T1 = lex0[0];
L14:;
    T0 = ecl_cdr(T1);
    lex0[0] = T0;
    goto TTL;
   }
L4:;
   T1 = ecl_cdr(lex0[0]);
   lex0[0] = T1;
   goto TTL;
  }
L1:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function AFTER                                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC21after(volatile cl_object *lex0, cl_object v1char)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_cdr(lex0[0]);
  T1 = L22find_directive(T0, v1char, ECL_NIL);
  value0 = ecl_memql(T1,lex0[0]);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for FORMAT-WRITE-FIELD                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L23format_write_field(cl_object v1stream, cl_object v2string, cl_object v3mincol, cl_object v4colinc, cl_object v5minpad, cl_object v6padchar, cl_object v7padleft)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if ((v7padleft)!=ECL_NIL) { goto L1; }
  cl_write_string(2, v2string, v1stream);
L1:;
  v5minpad = ((ecl_float_nan_p(ecl_make_fixnum(0)) || ecl_greatereq(v5minpad,ecl_make_fixnum(0)))?v5minpad:ecl_make_fixnum(0));
  {
   cl_object v8i;
   v8i = ecl_make_fixnum(0);
   goto L8;
L7:;
   cl_write_char(2, v6padchar, v1stream);
   v8i = ecl_one_plus(v8i);
L8:;
   if (!(ecl_lower(v8i,v5minpad))) { goto L13; }
   goto L7;
L13:;
  }
  if (Null(v3mincol)) { goto L17; }
  if (Null(v5minpad)) { goto L17; }
  if (Null(v4colinc)) { goto L17; }
  {
   cl_object v8chars;
   {
    cl_fixnum v9;
    v9 = ecl_length(v2string);
    v8chars = ecl_plus(ecl_make_fixnum(v9),v5minpad);
   }
   goto L24;
L23:;
   {
    cl_object v9i;
    v9i = ecl_make_fixnum(0);
    goto L29;
L28:;
    cl_write_char(2, v6padchar, v1stream);
    v9i = ecl_one_plus(v9i);
L29:;
    if (!(ecl_lower(v9i,v4colinc))) { goto L34; }
    goto L28;
L34:;
   }
   v8chars = ecl_plus(v8chars,v4colinc);
L24:;
   if (ecl_greatereq(v8chars,v3mincol)) { goto L38; }
   goto L23;
L38:;
   goto L15;
  }
L17:;
  goto L15;
L15:;
  if (Null(v7padleft)) { goto L40; }
  value0 = cl_write_string(2, v2string, v1stream);
  return value0;
L40:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for FORMAT-PRINC                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L24format_princ(cl_object v1stream, cl_object v2arg, cl_object v3colonp, cl_object v4atsignp, cl_object v5mincol, cl_object v6colinc, cl_object v7minpad, cl_object v8padchar)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  ecl_character v9padchar;
  v9padchar = ecl_char_code(v8padchar);
TTL:
  if ((v2arg)!=ECL_NIL) { goto L4; }
  if ((v3colonp)!=ECL_NIL) { goto L2; }
  goto L3;
L4:;
L3:;
  T0 = cl_princ_to_string(v2arg);
  goto L1;
L2:;
  T0 = VV[62];
L1:;
  value0 = L23format_write_field(v1stream, T0, v5mincol, v6colinc, v7minpad, CODE_CHAR(v9padchar), v4atsignp);
  return value0;
 }
}
/*      local function LATIN_CAPITAL_LETTER_A-FORMAT-DIRECTIVE-EXPANDER */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC25latin_capital_letter_a_format_directive_expander(cl_object v1, cl_object v2)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16;
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
   v3 = ecl_function_dispatch(cl_env_copy,VV[311])(1, v1) /*  FORMAT-DIRECTIVE-COLONP */;
   v4 = ecl_function_dispatch(cl_env_copy,VV[312])(1, v1) /*  FORMAT-DIRECTIVE-ATSIGNP */;
   v5 = ecl_function_dispatch(cl_env_copy,VV[313])(1, v1) /*  FORMAT-DIRECTIVE-PARAMS */;
   if (Null(v5)) { goto L5; }
   {
    cl_object v6;
    v6 = v5;
    {
     cl_object v7param_and_offset;
     cl_object v8offset;
     cl_object v9param;
     {
      cl_object v10;
      v10 = v6;
      {
       cl_object v11;
       v11 = v10;
       if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v10)) { goto L14; }
      {
       cl_object v11;
       v11 = ECL_CONS_CDR(v10);
       v6 = v11;
       v10 = ECL_CONS_CAR(v10);
      }
L14:;
      v7param_and_offset = v10;
     }
     v8offset = ecl_car(v7param_and_offset);
     v9param = ecl_cdr(v7param_and_offset);
     if (!(ecl_eql(v9param,VV[23]))) { goto L22; }
     T2 = L15expand_next_arg(1, v8offset);
     T1 = cl_list(3, ECL_SYM("OR",616), T2, ecl_make_fixnum(0));
     goto L8;
L22:;
     if (!(ecl_eql(v9param,VV[24]))) { goto L24; }
     cl_set(VV[37],ECL_NIL);
     T1 = VV[68];
     goto L8;
L24:;
     if (!((v9param)==(ECL_NIL))) { goto L28; }
     T1 = ecl_make_fixnum(0);
     goto L8;
L28:;
     T1 = v9param;
    }
L8:;
    T2 = cl_list(2, VV[64], T1);
    {
     cl_object v7param_and_offset;
     cl_object v8offset;
     cl_object v9param;
     {
      cl_object v10;
      v10 = v6;
      {
       cl_object v11;
       v11 = v10;
       if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v10)) { goto L37; }
      {
       cl_object v11;
       v11 = ECL_CONS_CDR(v10);
       v6 = v11;
       v10 = ECL_CONS_CAR(v10);
      }
L37:;
      v7param_and_offset = v10;
     }
     v8offset = ecl_car(v7param_and_offset);
     v9param = ecl_cdr(v7param_and_offset);
     if (!(ecl_eql(v9param,VV[23]))) { goto L45; }
     T4 = L15expand_next_arg(1, v8offset);
     T3 = cl_list(3, ECL_SYM("OR",616), T4, ecl_make_fixnum(1));
     goto L31;
L45:;
     if (!(ecl_eql(v9param,VV[24]))) { goto L47; }
     cl_set(VV[37],ECL_NIL);
     T3 = VV[68];
     goto L31;
L47:;
     if (!((v9param)==(ECL_NIL))) { goto L51; }
     T3 = ecl_make_fixnum(1);
     goto L31;
L51:;
     T3 = v9param;
    }
L31:;
    T4 = cl_list(2, VV[65], T3);
    {
     cl_object v7param_and_offset;
     cl_object v8offset;
     cl_object v9param;
     {
      cl_object v10;
      v10 = v6;
      {
       cl_object v11;
       v11 = v10;
       if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v10)) { goto L60; }
      {
       cl_object v11;
       v11 = ECL_CONS_CDR(v10);
       v6 = v11;
       v10 = ECL_CONS_CAR(v10);
      }
L60:;
      v7param_and_offset = v10;
     }
     v8offset = ecl_car(v7param_and_offset);
     v9param = ecl_cdr(v7param_and_offset);
     if (!(ecl_eql(v9param,VV[23]))) { goto L68; }
     T6 = L15expand_next_arg(1, v8offset);
     T5 = cl_list(3, ECL_SYM("OR",616), T6, ecl_make_fixnum(0));
     goto L54;
L68:;
     if (!(ecl_eql(v9param,VV[24]))) { goto L70; }
     cl_set(VV[37],ECL_NIL);
     T5 = VV[68];
     goto L54;
L70:;
     if (!((v9param)==(ECL_NIL))) { goto L74; }
     T5 = ecl_make_fixnum(0);
     goto L54;
L74:;
     T5 = v9param;
    }
L54:;
    T6 = cl_list(2, VV[66], T5);
    {
     cl_object v7param_and_offset;
     cl_object v8offset;
     cl_object v9param;
     {
      cl_object v10;
      v10 = v6;
      {
       cl_object v11;
       v11 = v10;
       if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v10)) { goto L83; }
      {
       cl_object v11;
       v11 = ECL_CONS_CDR(v10);
       v6 = v11;
       v10 = ECL_CONS_CAR(v10);
      }
L83:;
      v7param_and_offset = v10;
     }
     v8offset = ecl_car(v7param_and_offset);
     v9param = ecl_cdr(v7param_and_offset);
     if (!(ecl_eql(v9param,VV[23]))) { goto L91; }
     T8 = L15expand_next_arg(1, v8offset);
     T7 = cl_list(3, ECL_SYM("OR",616), T8, CODE_CHAR(32));
     goto L77;
L91:;
     if (!(ecl_eql(v9param,VV[24]))) { goto L93; }
     cl_set(VV[37],ECL_NIL);
     T7 = VV[68];
     goto L77;
L93:;
     if (!((v9param)==(ECL_NIL))) { goto L97; }
     T7 = CODE_CHAR(32);
     goto L77;
L97:;
     T7 = v9param;
    }
L77:;
    T8 = cl_list(2, VV[67], T7);
    T9 = cl_list(4, T2, T4, T6, T8);
    if (Null(v6)) { goto L101; }
    T11 = ecl_list1(ecl_make_fixnum(4));
    T12 = ecl_caar(v6);
    T10 = cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[70], VV[71], T11, ECL_SYM("OFFSET",1306), T12);
    goto L100;
L101:;
    T10 = ECL_NIL;
L100:;
    T11 = L15expand_next_arg(0);
    T12 = cl_list(2, ECL_SYM("QUOTE",681), v3);
    T13 = cl_list(2, ECL_SYM("QUOTE",681), v4);
    T14 = cl_list(9, VV[63], ECL_SYM("STREAM",801), T11, T12, T13, VV[64], VV[65], VV[66], VV[67]);
    T15 = ecl_list1(T14);
    T16 = ecl_append(T10,T15);
    T0 = cl_listX(3, ECL_SYM("LET",479), T9, T16);
    goto L4;
   }
L5:;
   if (Null(v3)) { goto L104; }
   T2 = L15expand_next_arg(0);
   T1 = cl_list(3, ECL_SYM("OR",616), T2, VV[62]);
   goto L103;
L104:;
   T1 = L15expand_next_arg(0);
L103:;
   T0 = cl_list(3, ECL_SYM("PRINC",662), T1, ECL_SYM("STREAM",801));
L4:;
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v2;
   cl_env_copy->values[0] = T0;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA307                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC26__lambda307(cl_object v1stream, cl_object v2, cl_object v3, cl_object v4orig_args, cl_object v5args)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v6;
   cl_object v7;
   cl_object v8;
   v6 = ecl_function_dispatch(cl_env_copy,VV[311])(1, v2) /*  FORMAT-DIRECTIVE-COLONP */;
   v7 = ecl_function_dispatch(cl_env_copy,VV[312])(1, v2) /*  FORMAT-DIRECTIVE-ATSIGNP */;
   v8 = ecl_function_dispatch(cl_env_copy,VV[313])(1, v2) /*  FORMAT-DIRECTIVE-PARAMS */;
   if (Null(v8)) { goto L5; }
   {
    cl_object v9;
    v9 = v8;
    {
     cl_object v10mincol;
     cl_object v11colinc;
     cl_object v12minpad;
     cl_object v13padchar;
     {
      cl_object v14param_and_offset;
      cl_object v15offset;
      cl_object v16param;
      {
       cl_object v17;
       v17 = v9;
       {
        cl_object v18;
        v18 = v17;
        if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v17)) { goto L14; }
       {
        cl_object v18;
        v18 = ECL_CONS_CDR(v17);
        v9 = v18;
        v17 = ECL_CONS_CAR(v17);
       }
L14:;
       v14param_and_offset = v17;
      }
      v15offset = ecl_car(v14param_and_offset);
      v16param = ecl_cdr(v14param_and_offset);
      if (!(ecl_eql(v16param,VV[23]))) { goto L22; }
      if (!(v5args==ECL_NIL)) { goto L27; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v15offset);
L27:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L29; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L29:;
      {
       cl_object v17;
       v17 = v5args;
       {
        cl_object v18;
        v18 = v17;
        if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v17)) { goto L35; }
       {
        cl_object v18;
        v18 = ECL_CONS_CDR(v17);
        v5args = v18;
        v17 = ECL_CONS_CAR(v17);
       }
L35:;
       value0 = v17;
      }
      if ((value0)!=ECL_NIL) { goto L25; }
      v10mincol = ecl_make_fixnum(0);
      goto L8;
L25:;
      v10mincol = value0;
      goto L8;
L22:;
      if (!(ecl_eql(v16param,VV[24]))) { goto L41; }
      v10mincol = ecl_make_fixnum(ecl_length(v5args));
      goto L8;
L41:;
      if (!((v16param)==(ECL_NIL))) { goto L43; }
      v10mincol = ecl_make_fixnum(0);
      goto L8;
L43:;
      v10mincol = v16param;
     }
L8:;
     {
      cl_object v14param_and_offset;
      cl_object v15offset;
      cl_object v16param;
      {
       cl_object v17;
       v17 = v9;
       {
        cl_object v18;
        v18 = v17;
        if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v17)) { goto L52; }
       {
        cl_object v18;
        v18 = ECL_CONS_CDR(v17);
        v9 = v18;
        v17 = ECL_CONS_CAR(v17);
       }
L52:;
       v14param_and_offset = v17;
      }
      v15offset = ecl_car(v14param_and_offset);
      v16param = ecl_cdr(v14param_and_offset);
      if (!(ecl_eql(v16param,VV[23]))) { goto L60; }
      if (!(v5args==ECL_NIL)) { goto L65; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v15offset);
L65:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L67; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L67:;
      {
       cl_object v17;
       v17 = v5args;
       {
        cl_object v18;
        v18 = v17;
        if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v17)) { goto L73; }
       {
        cl_object v18;
        v18 = ECL_CONS_CDR(v17);
        v5args = v18;
        v17 = ECL_CONS_CAR(v17);
       }
L73:;
       value0 = v17;
      }
      if ((value0)!=ECL_NIL) { goto L63; }
      v11colinc = ecl_make_fixnum(1);
      goto L46;
L63:;
      v11colinc = value0;
      goto L46;
L60:;
      if (!(ecl_eql(v16param,VV[24]))) { goto L79; }
      v11colinc = ecl_make_fixnum(ecl_length(v5args));
      goto L46;
L79:;
      if (!((v16param)==(ECL_NIL))) { goto L81; }
      v11colinc = ecl_make_fixnum(1);
      goto L46;
L81:;
      v11colinc = v16param;
     }
L46:;
     {
      cl_object v14param_and_offset;
      cl_object v15offset;
      cl_object v16param;
      {
       cl_object v17;
       v17 = v9;
       {
        cl_object v18;
        v18 = v17;
        if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v17)) { goto L90; }
       {
        cl_object v18;
        v18 = ECL_CONS_CDR(v17);
        v9 = v18;
        v17 = ECL_CONS_CAR(v17);
       }
L90:;
       v14param_and_offset = v17;
      }
      v15offset = ecl_car(v14param_and_offset);
      v16param = ecl_cdr(v14param_and_offset);
      if (!(ecl_eql(v16param,VV[23]))) { goto L98; }
      if (!(v5args==ECL_NIL)) { goto L103; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v15offset);
L103:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L105; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L105:;
      {
       cl_object v17;
       v17 = v5args;
       {
        cl_object v18;
        v18 = v17;
        if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v17)) { goto L111; }
       {
        cl_object v18;
        v18 = ECL_CONS_CDR(v17);
        v5args = v18;
        v17 = ECL_CONS_CAR(v17);
       }
L111:;
       value0 = v17;
      }
      if ((value0)!=ECL_NIL) { goto L101; }
      v12minpad = ecl_make_fixnum(0);
      goto L84;
L101:;
      v12minpad = value0;
      goto L84;
L98:;
      if (!(ecl_eql(v16param,VV[24]))) { goto L117; }
      v12minpad = ecl_make_fixnum(ecl_length(v5args));
      goto L84;
L117:;
      if (!((v16param)==(ECL_NIL))) { goto L119; }
      v12minpad = ecl_make_fixnum(0);
      goto L84;
L119:;
      v12minpad = v16param;
     }
L84:;
     {
      cl_object v14param_and_offset;
      cl_object v15offset;
      cl_object v16param;
      {
       cl_object v17;
       v17 = v9;
       {
        cl_object v18;
        v18 = v17;
        if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v17)) { goto L128; }
       {
        cl_object v18;
        v18 = ECL_CONS_CDR(v17);
        v9 = v18;
        v17 = ECL_CONS_CAR(v17);
       }
L128:;
       v14param_and_offset = v17;
      }
      v15offset = ecl_car(v14param_and_offset);
      v16param = ecl_cdr(v14param_and_offset);
      if (!(ecl_eql(v16param,VV[23]))) { goto L136; }
      if (!(v5args==ECL_NIL)) { goto L141; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v15offset);
L141:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L143; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L143:;
      {
       cl_object v17;
       v17 = v5args;
       {
        cl_object v18;
        v18 = v17;
        if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v17)) { goto L149; }
       {
        cl_object v18;
        v18 = ECL_CONS_CDR(v17);
        v5args = v18;
        v17 = ECL_CONS_CAR(v17);
       }
L149:;
       value0 = v17;
      }
      if ((value0)!=ECL_NIL) { goto L139; }
      v13padchar = CODE_CHAR(32);
      goto L122;
L139:;
      v13padchar = value0;
      goto L122;
L136:;
      if (!(ecl_eql(v16param,VV[24]))) { goto L155; }
      v13padchar = ecl_make_fixnum(ecl_length(v5args));
      goto L122;
L155:;
      if (!((v16param)==(ECL_NIL))) { goto L157; }
      v13padchar = CODE_CHAR(32);
      goto L122;
L157:;
      v13padchar = v16param;
     }
L122:;
     if (Null(v9)) { goto L160; }
     T0 = ecl_list1(ecl_make_fixnum(4));
     T1 = ecl_caar(v9);
     cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[70], VV[71], T0, ECL_SYM("OFFSET",1306), T1);
L160:;
     if (!(v5args==ECL_NIL)) { goto L162; }
     cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57]);
L162:;
     if (Null(ecl_symbol_value(VV[34]))) { goto L164; }
     ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L164:;
     {
      cl_object v14;
      v14 = v5args;
      {
       cl_object v15;
       v15 = v14;
       if (ecl_unlikely(!ECL_LISTP(v15))) FEtype_error_list(v15);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v14)) { goto L171; }
      {
       cl_object v15;
       v15 = ECL_CONS_CDR(v14);
       v5args = v15;
       v14 = ECL_CONS_CAR(v14);
      }
L171:;
      T0 = v14;
     }
     L24format_princ(v1stream, T0, v6, v7, v10mincol, v11colinc, v12minpad, v13padchar);
     goto L4;
    }
   }
L5:;
   if (Null(v6)) { goto L178; }
   if (!(v5args==ECL_NIL)) { goto L183; }
   cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57]);
L183:;
   if (Null(ecl_symbol_value(VV[34]))) { goto L185; }
   ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L185:;
   {
    cl_object v14;
    v14 = v5args;
    {
     cl_object v15;
     v15 = v14;
     if (ecl_unlikely(!ECL_LISTP(v15))) FEtype_error_list(v15);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
    }
    if (Null(v14)) { goto L191; }
    {
     cl_object v15;
     v15 = ECL_CONS_CDR(v14);
     v5args = v15;
     v14 = ECL_CONS_CAR(v14);
    }
L191:;
    value0 = v14;
   }
   if ((value0)!=ECL_NIL) { goto L181; }
   T0 = VV[62];
   goto L177;
L181:;
   T0 = value0;
   goto L177;
L178:;
   if (!(v5args==ECL_NIL)) { goto L197; }
   cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57]);
L197:;
   if (Null(ecl_symbol_value(VV[34]))) { goto L199; }
   ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L199:;
   {
    cl_object v14;
    v14 = v5args;
    {
     cl_object v15;
     v15 = v14;
     if (ecl_unlikely(!ECL_LISTP(v15))) FEtype_error_list(v15);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
    }
    if (Null(v14)) { goto L205; }
    {
     cl_object v15;
     v15 = ECL_CONS_CDR(v14);
     v5args = v15;
     v14 = ECL_CONS_CAR(v14);
    }
L205:;
    T0 = v14;
   }
L177:;
   ecl_princ(T0,v1stream);
L4:;
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v5args;
   cl_env_copy->values[0] = v3;
   return cl_env_copy->values[0];
  }
 }
}
/*      function definition for FORMAT-PRIN1                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L27format_prin1(cl_object v1stream, cl_object v2arg, cl_object v3colonp, cl_object v4atsignp, cl_object v5mincol, cl_object v6colinc, cl_object v7minpad, cl_object v8padchar)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  ecl_character v9padchar;
  v9padchar = ecl_char_code(v8padchar);
TTL:
  if ((v2arg)!=ECL_NIL) { goto L4; }
  if ((v3colonp)!=ECL_NIL) { goto L2; }
  goto L3;
L4:;
L3:;
  T0 = cl_prin1_to_string(v2arg);
  goto L1;
L2:;
  T0 = VV[62];
L1:;
  value0 = L23format_write_field(v1stream, T0, v5mincol, v6colinc, v7minpad, CODE_CHAR(v9padchar), v4atsignp);
  return value0;
 }
}
/*      local function LATIN_CAPITAL_LETTER_S-FORMAT-DIRECTIVE-EXPANDER */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC28latin_capital_letter_s_format_directive_expander(cl_object v1, cl_object v2)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14;
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
   v3 = ecl_function_dispatch(cl_env_copy,VV[311])(1, v1) /*  FORMAT-DIRECTIVE-COLONP */;
   v4 = ecl_function_dispatch(cl_env_copy,VV[312])(1, v1) /*  FORMAT-DIRECTIVE-ATSIGNP */;
   v5 = ecl_function_dispatch(cl_env_copy,VV[313])(1, v1) /*  FORMAT-DIRECTIVE-PARAMS */;
   if (Null(v5)) { goto L5; }
   {
    cl_object v6;
    v6 = v5;
    {
     cl_object v7param_and_offset;
     cl_object v8offset;
     cl_object v9param;
     {
      cl_object v10;
      v10 = v6;
      {
       cl_object v11;
       v11 = v10;
       if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v10)) { goto L14; }
      {
       cl_object v11;
       v11 = ECL_CONS_CDR(v10);
       v6 = v11;
       v10 = ECL_CONS_CAR(v10);
      }
L14:;
      v7param_and_offset = v10;
     }
     v8offset = ecl_car(v7param_and_offset);
     v9param = ecl_cdr(v7param_and_offset);
     if (!(ecl_eql(v9param,VV[23]))) { goto L22; }
     T2 = L15expand_next_arg(1, v8offset);
     T1 = cl_list(3, ECL_SYM("OR",616), T2, ecl_make_fixnum(0));
     goto L8;
L22:;
     if (!(ecl_eql(v9param,VV[24]))) { goto L24; }
     cl_set(VV[37],ECL_NIL);
     T1 = VV[68];
     goto L8;
L24:;
     if (!((v9param)==(ECL_NIL))) { goto L28; }
     T1 = ecl_make_fixnum(0);
     goto L8;
L28:;
     T1 = v9param;
    }
L8:;
    T2 = cl_list(2, VV[73], T1);
    {
     cl_object v7param_and_offset;
     cl_object v8offset;
     cl_object v9param;
     {
      cl_object v10;
      v10 = v6;
      {
       cl_object v11;
       v11 = v10;
       if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v10)) { goto L37; }
      {
       cl_object v11;
       v11 = ECL_CONS_CDR(v10);
       v6 = v11;
       v10 = ECL_CONS_CAR(v10);
      }
L37:;
      v7param_and_offset = v10;
     }
     v8offset = ecl_car(v7param_and_offset);
     v9param = ecl_cdr(v7param_and_offset);
     if (!(ecl_eql(v9param,VV[23]))) { goto L45; }
     T4 = L15expand_next_arg(1, v8offset);
     T3 = cl_list(3, ECL_SYM("OR",616), T4, ecl_make_fixnum(1));
     goto L31;
L45:;
     if (!(ecl_eql(v9param,VV[24]))) { goto L47; }
     cl_set(VV[37],ECL_NIL);
     T3 = VV[68];
     goto L31;
L47:;
     if (!((v9param)==(ECL_NIL))) { goto L51; }
     T3 = ecl_make_fixnum(1);
     goto L31;
L51:;
     T3 = v9param;
    }
L31:;
    T4 = cl_list(2, VV[74], T3);
    {
     cl_object v7param_and_offset;
     cl_object v8offset;
     cl_object v9param;
     {
      cl_object v10;
      v10 = v6;
      {
       cl_object v11;
       v11 = v10;
       if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v10)) { goto L60; }
      {
       cl_object v11;
       v11 = ECL_CONS_CDR(v10);
       v6 = v11;
       v10 = ECL_CONS_CAR(v10);
      }
L60:;
      v7param_and_offset = v10;
     }
     v8offset = ecl_car(v7param_and_offset);
     v9param = ecl_cdr(v7param_and_offset);
     if (!(ecl_eql(v9param,VV[23]))) { goto L68; }
     T6 = L15expand_next_arg(1, v8offset);
     T5 = cl_list(3, ECL_SYM("OR",616), T6, ecl_make_fixnum(0));
     goto L54;
L68:;
     if (!(ecl_eql(v9param,VV[24]))) { goto L70; }
     cl_set(VV[37],ECL_NIL);
     T5 = VV[68];
     goto L54;
L70:;
     if (!((v9param)==(ECL_NIL))) { goto L74; }
     T5 = ecl_make_fixnum(0);
     goto L54;
L74:;
     T5 = v9param;
    }
L54:;
    T6 = cl_list(2, VV[75], T5);
    {
     cl_object v7param_and_offset;
     cl_object v8offset;
     cl_object v9param;
     {
      cl_object v10;
      v10 = v6;
      {
       cl_object v11;
       v11 = v10;
       if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v10)) { goto L83; }
      {
       cl_object v11;
       v11 = ECL_CONS_CDR(v10);
       v6 = v11;
       v10 = ECL_CONS_CAR(v10);
      }
L83:;
      v7param_and_offset = v10;
     }
     v8offset = ecl_car(v7param_and_offset);
     v9param = ecl_cdr(v7param_and_offset);
     if (!(ecl_eql(v9param,VV[23]))) { goto L91; }
     T8 = L15expand_next_arg(1, v8offset);
     T7 = cl_list(3, ECL_SYM("OR",616), T8, CODE_CHAR(32));
     goto L77;
L91:;
     if (!(ecl_eql(v9param,VV[24]))) { goto L93; }
     cl_set(VV[37],ECL_NIL);
     T7 = VV[68];
     goto L77;
L93:;
     if (!((v9param)==(ECL_NIL))) { goto L97; }
     T7 = CODE_CHAR(32);
     goto L77;
L97:;
     T7 = v9param;
    }
L77:;
    T8 = cl_list(2, VV[76], T7);
    T9 = cl_list(4, T2, T4, T6, T8);
    if (Null(v6)) { goto L101; }
    T11 = ecl_list1(ecl_make_fixnum(4));
    T12 = ecl_caar(v6);
    T10 = cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[70], VV[71], T11, ECL_SYM("OFFSET",1306), T12);
    goto L100;
L101:;
    T10 = ECL_NIL;
L100:;
    T11 = L15expand_next_arg(0);
    T12 = cl_list(9, VV[72], ECL_SYM("STREAM",801), T11, v3, v4, VV[73], VV[74], VV[75], VV[76]);
    T13 = ecl_list1(T12);
    T14 = ecl_append(T10,T13);
    T0 = cl_listX(3, ECL_SYM("LET",479), T9, T14);
    goto L4;
   }
L5:;
   if (Null(v3)) { goto L103; }
   T1 = L15expand_next_arg(0);
   T2 = cl_list(2, VV[77], T1);
   T3 = ecl_list1(T2);
   T0 = cl_list(3, ECL_SYM("LET",479), T3, VV[78]);
   goto L4;
L103:;
   T1 = L15expand_next_arg(0);
   T0 = cl_list(3, ECL_SYM("PRIN1",660), T1, ECL_SYM("STREAM",801));
L4:;
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v2;
   cl_env_copy->values[0] = T0;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA378                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC29__lambda378(cl_object v1stream, cl_object v2, cl_object v3, cl_object v4orig_args, cl_object v5args)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v6;
   cl_object v7;
   cl_object v8;
   v6 = ecl_function_dispatch(cl_env_copy,VV[311])(1, v2) /*  FORMAT-DIRECTIVE-COLONP */;
   v7 = ecl_function_dispatch(cl_env_copy,VV[312])(1, v2) /*  FORMAT-DIRECTIVE-ATSIGNP */;
   v8 = ecl_function_dispatch(cl_env_copy,VV[313])(1, v2) /*  FORMAT-DIRECTIVE-PARAMS */;
   if (Null(v8)) { goto L5; }
   {
    cl_object v9;
    v9 = v8;
    {
     cl_object v10mincol;
     cl_object v11colinc;
     cl_object v12minpad;
     cl_object v13padchar;
     {
      cl_object v14param_and_offset;
      cl_object v15offset;
      cl_object v16param;
      {
       cl_object v17;
       v17 = v9;
       {
        cl_object v18;
        v18 = v17;
        if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v17)) { goto L14; }
       {
        cl_object v18;
        v18 = ECL_CONS_CDR(v17);
        v9 = v18;
        v17 = ECL_CONS_CAR(v17);
       }
L14:;
       v14param_and_offset = v17;
      }
      v15offset = ecl_car(v14param_and_offset);
      v16param = ecl_cdr(v14param_and_offset);
      if (!(ecl_eql(v16param,VV[23]))) { goto L22; }
      if (!(v5args==ECL_NIL)) { goto L27; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v15offset);
L27:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L29; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L29:;
      {
       cl_object v17;
       v17 = v5args;
       {
        cl_object v18;
        v18 = v17;
        if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v17)) { goto L35; }
       {
        cl_object v18;
        v18 = ECL_CONS_CDR(v17);
        v5args = v18;
        v17 = ECL_CONS_CAR(v17);
       }
L35:;
       value0 = v17;
      }
      if ((value0)!=ECL_NIL) { goto L25; }
      v10mincol = ecl_make_fixnum(0);
      goto L8;
L25:;
      v10mincol = value0;
      goto L8;
L22:;
      if (!(ecl_eql(v16param,VV[24]))) { goto L41; }
      v10mincol = ecl_make_fixnum(ecl_length(v5args));
      goto L8;
L41:;
      if (!((v16param)==(ECL_NIL))) { goto L43; }
      v10mincol = ecl_make_fixnum(0);
      goto L8;
L43:;
      v10mincol = v16param;
     }
L8:;
     {
      cl_object v14param_and_offset;
      cl_object v15offset;
      cl_object v16param;
      {
       cl_object v17;
       v17 = v9;
       {
        cl_object v18;
        v18 = v17;
        if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v17)) { goto L52; }
       {
        cl_object v18;
        v18 = ECL_CONS_CDR(v17);
        v9 = v18;
        v17 = ECL_CONS_CAR(v17);
       }
L52:;
       v14param_and_offset = v17;
      }
      v15offset = ecl_car(v14param_and_offset);
      v16param = ecl_cdr(v14param_and_offset);
      if (!(ecl_eql(v16param,VV[23]))) { goto L60; }
      if (!(v5args==ECL_NIL)) { goto L65; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v15offset);
L65:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L67; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L67:;
      {
       cl_object v17;
       v17 = v5args;
       {
        cl_object v18;
        v18 = v17;
        if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v17)) { goto L73; }
       {
        cl_object v18;
        v18 = ECL_CONS_CDR(v17);
        v5args = v18;
        v17 = ECL_CONS_CAR(v17);
       }
L73:;
       value0 = v17;
      }
      if ((value0)!=ECL_NIL) { goto L63; }
      v11colinc = ecl_make_fixnum(1);
      goto L46;
L63:;
      v11colinc = value0;
      goto L46;
L60:;
      if (!(ecl_eql(v16param,VV[24]))) { goto L79; }
      v11colinc = ecl_make_fixnum(ecl_length(v5args));
      goto L46;
L79:;
      if (!((v16param)==(ECL_NIL))) { goto L81; }
      v11colinc = ecl_make_fixnum(1);
      goto L46;
L81:;
      v11colinc = v16param;
     }
L46:;
     {
      cl_object v14param_and_offset;
      cl_object v15offset;
      cl_object v16param;
      {
       cl_object v17;
       v17 = v9;
       {
        cl_object v18;
        v18 = v17;
        if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v17)) { goto L90; }
       {
        cl_object v18;
        v18 = ECL_CONS_CDR(v17);
        v9 = v18;
        v17 = ECL_CONS_CAR(v17);
       }
L90:;
       v14param_and_offset = v17;
      }
      v15offset = ecl_car(v14param_and_offset);
      v16param = ecl_cdr(v14param_and_offset);
      if (!(ecl_eql(v16param,VV[23]))) { goto L98; }
      if (!(v5args==ECL_NIL)) { goto L103; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v15offset);
L103:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L105; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L105:;
      {
       cl_object v17;
       v17 = v5args;
       {
        cl_object v18;
        v18 = v17;
        if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v17)) { goto L111; }
       {
        cl_object v18;
        v18 = ECL_CONS_CDR(v17);
        v5args = v18;
        v17 = ECL_CONS_CAR(v17);
       }
L111:;
       value0 = v17;
      }
      if ((value0)!=ECL_NIL) { goto L101; }
      v12minpad = ecl_make_fixnum(0);
      goto L84;
L101:;
      v12minpad = value0;
      goto L84;
L98:;
      if (!(ecl_eql(v16param,VV[24]))) { goto L117; }
      v12minpad = ecl_make_fixnum(ecl_length(v5args));
      goto L84;
L117:;
      if (!((v16param)==(ECL_NIL))) { goto L119; }
      v12minpad = ecl_make_fixnum(0);
      goto L84;
L119:;
      v12minpad = v16param;
     }
L84:;
     {
      cl_object v14param_and_offset;
      cl_object v15offset;
      cl_object v16param;
      {
       cl_object v17;
       v17 = v9;
       {
        cl_object v18;
        v18 = v17;
        if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v17)) { goto L128; }
       {
        cl_object v18;
        v18 = ECL_CONS_CDR(v17);
        v9 = v18;
        v17 = ECL_CONS_CAR(v17);
       }
L128:;
       v14param_and_offset = v17;
      }
      v15offset = ecl_car(v14param_and_offset);
      v16param = ecl_cdr(v14param_and_offset);
      if (!(ecl_eql(v16param,VV[23]))) { goto L136; }
      if (!(v5args==ECL_NIL)) { goto L141; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v15offset);
L141:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L143; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L143:;
      {
       cl_object v17;
       v17 = v5args;
       {
        cl_object v18;
        v18 = v17;
        if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v17)) { goto L149; }
       {
        cl_object v18;
        v18 = ECL_CONS_CDR(v17);
        v5args = v18;
        v17 = ECL_CONS_CAR(v17);
       }
L149:;
       value0 = v17;
      }
      if ((value0)!=ECL_NIL) { goto L139; }
      v13padchar = CODE_CHAR(32);
      goto L122;
L139:;
      v13padchar = value0;
      goto L122;
L136:;
      if (!(ecl_eql(v16param,VV[24]))) { goto L155; }
      v13padchar = ecl_make_fixnum(ecl_length(v5args));
      goto L122;
L155:;
      if (!((v16param)==(ECL_NIL))) { goto L157; }
      v13padchar = CODE_CHAR(32);
      goto L122;
L157:;
      v13padchar = v16param;
     }
L122:;
     if (Null(v9)) { goto L160; }
     T0 = ecl_list1(ecl_make_fixnum(4));
     T1 = ecl_caar(v9);
     cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[70], VV[71], T0, ECL_SYM("OFFSET",1306), T1);
L160:;
     if (!(v5args==ECL_NIL)) { goto L162; }
     cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57]);
L162:;
     if (Null(ecl_symbol_value(VV[34]))) { goto L164; }
     ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L164:;
     {
      cl_object v14;
      v14 = v5args;
      {
       cl_object v15;
       v15 = v14;
       if (ecl_unlikely(!ECL_LISTP(v15))) FEtype_error_list(v15);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v14)) { goto L171; }
      {
       cl_object v15;
       v15 = ECL_CONS_CDR(v14);
       v5args = v15;
       v14 = ECL_CONS_CAR(v14);
      }
L171:;
      T0 = v14;
     }
     L27format_prin1(v1stream, T0, v6, v7, v10mincol, v11colinc, v12minpad, v13padchar);
     goto L4;
    }
   }
L5:;
   if (Null(v6)) { goto L177; }
   {
    cl_object v14arg;
    if (!(v5args==ECL_NIL)) { goto L180; }
    cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57]);
L180:;
    if (Null(ecl_symbol_value(VV[34]))) { goto L182; }
    ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L182:;
    {
     cl_object v15;
     v15 = v5args;
     {
      cl_object v16;
      v16 = v15;
      if (ecl_unlikely(!ECL_LISTP(v16))) FEtype_error_list(v16);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
     }
     if (Null(v15)) { goto L188; }
     {
      cl_object v16;
      v16 = ECL_CONS_CDR(v15);
      v5args = v16;
      v15 = ECL_CONS_CAR(v15);
     }
L188:;
     v14arg = v15;
    }
    if (Null(v14arg)) { goto L194; }
    ecl_prin1(v14arg,v1stream);
    goto L4;
L194:;
    ecl_princ(VV[62],v1stream);
    goto L4;
   }
L177:;
   if (!(v5args==ECL_NIL)) { goto L196; }
   cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57]);
L196:;
   if (Null(ecl_symbol_value(VV[34]))) { goto L198; }
   ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L198:;
   {
    cl_object v15;
    v15 = v5args;
    {
     cl_object v16;
     v16 = v15;
     if (ecl_unlikely(!ECL_LISTP(v16))) FEtype_error_list(v16);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
    }
    if (Null(v15)) { goto L205; }
    {
     cl_object v16;
     v16 = ECL_CONS_CDR(v15);
     v5args = v16;
     v15 = ECL_CONS_CAR(v15);
    }
L205:;
    T0 = v15;
   }
   ecl_prin1(T0,v1stream);
L4:;
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v5args;
   cl_env_copy->values[0] = v3;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LATIN_CAPITAL_LETTER_C-FORMAT-DIRECTIVE-EXPANDER */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC30latin_capital_letter_c_format_directive_expander(cl_object v1, cl_object v2)
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
   cl_object v4;
   cl_object v5;
   v3 = ecl_function_dispatch(cl_env_copy,VV[311])(1, v1) /*  FORMAT-DIRECTIVE-COLONP */;
   v4 = ecl_function_dispatch(cl_env_copy,VV[312])(1, v1) /*  FORMAT-DIRECTIVE-ATSIGNP */;
   v5 = ecl_function_dispatch(cl_env_copy,VV[313])(1, v1) /*  FORMAT-DIRECTIVE-PARAMS */;
   if (Null(v5)) { goto L5; }
   T1 = ecl_caar(v5);
   cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[79], ECL_SYM("OFFSET",1306), T1);
L5:;
   if (Null(v3)) { goto L7; }
   T1 = L15expand_next_arg(0);
   T0 = cl_list(3, VV[80], T1, ECL_SYM("STREAM",801));
   goto L4;
L7:;
   if (Null(v4)) { goto L9; }
   T1 = L15expand_next_arg(0);
   T0 = cl_list(3, ECL_SYM("PRIN1",660), T1, ECL_SYM("STREAM",801));
   goto L4;
L9:;
   T1 = L15expand_next_arg(0);
   T0 = cl_list(3, ECL_SYM("WRITE-CHAR",921), T1, ECL_SYM("STREAM",801));
L4:;
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v2;
   cl_env_copy->values[0] = T0;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA421                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC31__lambda421(cl_object v1stream, cl_object v2, cl_object v3, cl_object v4orig_args, cl_object v5args)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v6;
   cl_object v7;
   cl_object v8;
   v6 = ecl_function_dispatch(cl_env_copy,VV[311])(1, v2) /*  FORMAT-DIRECTIVE-COLONP */;
   v7 = ecl_function_dispatch(cl_env_copy,VV[312])(1, v2) /*  FORMAT-DIRECTIVE-ATSIGNP */;
   v8 = ecl_function_dispatch(cl_env_copy,VV[313])(1, v2) /*  FORMAT-DIRECTIVE-PARAMS */;
   if (Null(v8)) { goto L5; }
   T0 = ecl_list1(ecl_make_fixnum(0));
   T1 = ecl_caar(v8);
   cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[70], VV[71], T0, ECL_SYM("OFFSET",1306), T1);
L5:;
   if (Null(v6)) { goto L7; }
   if (!(v5args==ECL_NIL)) { goto L9; }
   cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57]);
L9:;
   if (Null(ecl_symbol_value(VV[34]))) { goto L11; }
   ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L11:;
   {
    cl_object v9;
    v9 = v5args;
    {
     cl_object v10;
     v10 = v9;
     if (ecl_unlikely(!ECL_LISTP(v10))) FEtype_error_list(v10);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
    }
    if (Null(v9)) { goto L18; }
    {
     cl_object v10;
     v10 = ECL_CONS_CDR(v9);
     v5args = v10;
     v9 = ECL_CONS_CAR(v9);
    }
L18:;
    T0 = v9;
   }
   L33format_print_named_character(T0, v1stream);
   goto L4;
L7:;
   if (Null(v7)) { goto L24; }
   if (!(v5args==ECL_NIL)) { goto L26; }
   cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57]);
L26:;
   if (Null(ecl_symbol_value(VV[34]))) { goto L28; }
   ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L28:;
   {
    cl_object v9;
    v9 = v5args;
    {
     cl_object v10;
     v10 = v9;
     if (ecl_unlikely(!ECL_LISTP(v10))) FEtype_error_list(v10);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
    }
    if (Null(v9)) { goto L35; }
    {
     cl_object v10;
     v10 = ECL_CONS_CDR(v9);
     v5args = v10;
     v9 = ECL_CONS_CAR(v9);
    }
L35:;
    T0 = v9;
   }
   ecl_prin1(T0,v1stream);
   goto L4;
L24:;
   if (!(v5args==ECL_NIL)) { goto L41; }
   cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57]);
L41:;
   if (Null(ecl_symbol_value(VV[34]))) { goto L43; }
   ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L43:;
   {
    cl_object v9;
    v9 = v5args;
    {
     cl_object v10;
     v10 = v9;
     if (ecl_unlikely(!ECL_LISTP(v10))) FEtype_error_list(v10);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
    }
    if (Null(v9)) { goto L50; }
    {
     cl_object v10;
     v10 = ECL_CONS_CDR(v9);
     v5args = v10;
     v9 = ECL_CONS_CAR(v9);
    }
L50:;
    T0 = v9;
   }
   cl_write_char(2, T0, v1stream);
L4:;
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v5args;
   cl_env_copy->values[0] = v3;
   return cl_env_copy->values[0];
  }
 }
}
/*      function definition for CHAR-PRINTING-P                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L32char_printing_p(cl_object v1char)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (((v1char)==ECL_CODE_CHAR((ecl_character)(32)))) { goto L2; }
  value0 = cl_graphic_char_p(v1char);
  return value0;
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for FORMAT-PRINT-NAMED-CHARACTER          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L33format_print_named_character(cl_object v1char, cl_object v2stream)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  ecl_character v3char;
  v3char = ecl_char_code(v1char);
TTL:
  if ((L32char_printing_p(CODE_CHAR(v3char)))!=ECL_NIL) { goto L1; }
  T0 = cl_char_name(CODE_CHAR(v3char));
  value0 = cl_write_string(2, T0, v2stream);
  return value0;
L1:;
  value0 = cl_write_char(2, CODE_CHAR(v3char), v2stream);
  return value0;
 }
}
/*      local function LATIN_CAPITAL_LETTER_W-FORMAT-DIRECTIVE-EXPANDER */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC34latin_capital_letter_w_format_directive_expander(cl_object v1, cl_object v2)
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
   cl_object v4;
   cl_object v5;
   v3 = ecl_function_dispatch(cl_env_copy,VV[311])(1, v1) /*  FORMAT-DIRECTIVE-COLONP */;
   v4 = ecl_function_dispatch(cl_env_copy,VV[312])(1, v1) /*  FORMAT-DIRECTIVE-ATSIGNP */;
   v5 = ecl_function_dispatch(cl_env_copy,VV[313])(1, v1) /*  FORMAT-DIRECTIVE-PARAMS */;
   L131check_output_layout_mode(ecl_make_fixnum(1));
   if (Null(v5)) { goto L6; }
   T1 = ecl_caar(v5);
   cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[79], ECL_SYM("OFFSET",1306), T1);
L6:;
   if ((v3)!=ECL_NIL) { goto L10; }
   if (Null(v4)) { goto L8; }
   goto L9;
L10:;
L9:;
   if (Null(v3)) { goto L13; }
   T1 = VV[81];
   goto L12;
L13:;
   T1 = ECL_NIL;
L12:;
   if (Null(v4)) { goto L16; }
   T2 = VV[82];
   goto L15;
L16:;
   T2 = ECL_NIL;
L15:;
   T3 = ecl_append(T1,T2);
   T4 = L15expand_next_arg(0);
   T5 = cl_list(3, ECL_SYM("WRITE-OBJECT",1184), T4, ECL_SYM("STREAM",801));
   T0 = cl_list(3, ECL_SYM("LET",479), T3, T5);
   goto L5;
L8:;
   T1 = L15expand_next_arg(0);
   T0 = cl_list(3, ECL_SYM("WRITE-OBJECT",1184), T1, ECL_SYM("STREAM",801));
L5:;
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v2;
   cl_env_copy->values[0] = T0;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA440                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC35__lambda440(cl_object v1stream, cl_object v2, cl_object v3, cl_object v4orig_args, cl_object v5args)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v6;
   cl_object v7;
   cl_object v8;
   v6 = ecl_function_dispatch(cl_env_copy,VV[311])(1, v2) /*  FORMAT-DIRECTIVE-COLONP */;
   v7 = ecl_function_dispatch(cl_env_copy,VV[312])(1, v2) /*  FORMAT-DIRECTIVE-ATSIGNP */;
   v8 = ecl_function_dispatch(cl_env_copy,VV[313])(1, v2) /*  FORMAT-DIRECTIVE-PARAMS */;
   L131check_output_layout_mode(ecl_make_fixnum(1));
   if (Null(v8)) { goto L6; }
   T0 = ecl_list1(ecl_make_fixnum(0));
   T1 = ecl_caar(v8);
   cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[70], VV[71], T0, ECL_SYM("OFFSET",1306), T1);
L6:;
   {
    cl_object v9;
    cl_object v10;
    cl_object v11;
    value0 = v6;
    if ((value0)!=ECL_NIL) { goto L10; }
    v9 = ecl_symbol_value(ECL_SYM("*PRINT-PRETTY*",57));
    goto L8;
L10:;
    v9 = value0;
    goto L8;
L8:;
    if (Null(v7)) { goto L14; }
    v10 = ecl_symbol_value(ECL_SYM("*PRINT-LEVEL*",53));
    goto L12;
L14:;
    v10 = ECL_NIL;
    goto L12;
L12:;
    if (Null(v7)) { goto L18; }
    v11 = ecl_symbol_value(ECL_SYM("*PRINT-LENGTH*",52));
    goto L16;
L18:;
    v11 = ECL_NIL;
    goto L16;
L16:;
    ecl_bds_bind(cl_env_copy,ECL_SYM("*PRINT-PRETTY*",57),v9); /*  *PRINT-PRETTY* */
    ecl_bds_bind(cl_env_copy,ECL_SYM("*PRINT-LEVEL*",53),v10); /*  *PRINT-LEVEL* */
    ecl_bds_bind(cl_env_copy,ECL_SYM("*PRINT-LENGTH*",52),v11); /*  *PRINT-LENGTH* */
    if (!(v5args==ECL_NIL)) { goto L20; }
    cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57]);
L20:;
    if (Null(ecl_symbol_value(VV[34]))) { goto L22; }
    ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L22:;
    {
     cl_object v12;
     v12 = v5args;
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
      v5args = v13;
      v12 = ECL_CONS_CAR(v12);
     }
L29:;
     T0 = v12;
    }
    si_write_object(T0, v1stream);
    ecl_bds_unwind1(cl_env_copy);
    ecl_bds_unwind1(cl_env_copy);
    ecl_bds_unwind1(cl_env_copy);
   }
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v5args;
   cl_env_copy->values[0] = v3;
   return cl_env_copy->values[0];
  }
 }
}
/*      function definition for FORMAT-PRINT-INTEGER                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L36format_print_integer(cl_object v1stream, cl_object v2number, cl_object v3print_commas_p, cl_object v4print_sign_p, cl_object v5radix, cl_object v6mincol, cl_object v7padchar, cl_object v8commachar, cl_object v9commainterval)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  int8_t v10radix;
  ecl_character v11padchar;
  ecl_character v12commachar;
  v10radix = ecl_to_int8_t(v5radix);
  v11padchar = ecl_char_code(v7padchar);
  v12commachar = ecl_char_code(v8commachar);
TTL:
  ecl_bds_bind(cl_env_copy,ECL_SYM("*PRINT-BASE*",47),ecl_make_int8_t(v10radix)); /*  *PRINT-BASE* */
  ecl_bds_bind(cl_env_copy,ECL_SYM("*PRINT-RADIX*",58),ECL_NIL); /*  *PRINT-RADIX* */
  if (!(ECL_FIXNUMP(v2number)||ECL_BIGNUMP(v2number))) { goto L1; }
  {
   cl_object v13text;
   cl_object v14commaed;
   cl_object v15signed;
   T0 = cl_abs(v2number);
   v13text = cl_princ_to_string(T0);
   if (Null(v3print_commas_p)) { goto L5; }
   v14commaed = L37format_add_commas(v13text, CODE_CHAR(v12commachar), v9commainterval);
   goto L4;
L5:;
   v14commaed = v13text;
L4:;
   if (!(ecl_minusp(v2number))) { goto L8; }
   v15signed = cl_concatenate(3, ECL_SYM("STRING",807), VV[83], v14commaed);
   goto L7;
L8:;
   if (Null(v4print_sign_p)) { goto L10; }
   v15signed = cl_concatenate(3, ECL_SYM("STRING",807), VV[84], v14commaed);
   goto L7;
L10:;
   v15signed = v14commaed;
L7:;
   value0 = L23format_write_field(v1stream, v15signed, v6mincol, ecl_make_fixnum(1), ecl_make_fixnum(0), CODE_CHAR(v11padchar), ECL_T);
   ecl_bds_unwind1(cl_env_copy);
   ecl_bds_unwind1(cl_env_copy);
   return value0;
  }
L1:;
  value0 = ecl_princ(v2number,v1stream);
  cl_env_copy->nvalues = 1;
  ecl_bds_unwind1(cl_env_copy);
  ecl_bds_unwind1(cl_env_copy);
  return value0;
 }
}
/*      function definition for FORMAT-ADD-COMMAS                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L37format_add_commas(cl_object v1string, cl_object v2commachar, cl_object v3commainterval)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_fixnum v4length;
   v4length = ecl_length(v1string);
   {
    cl_object v6;                                 /*  COMMAS          */
    cl_object v7;                                 /*  EXTRA           */
    T0 = ecl_make_integer((v4length)-1);
    value0 = ecl_truncate2(T0,v3commainterval);
    {
     v6 = value0;
     v7 = cl_env_copy->values[1];
    }
    {
     cl_object v8;
     cl_object v9;
     T0 = ecl_plus(ecl_make_fixnum(v4length),v6);
     v8 = cl_make_string(1, T0);
     v9 = ecl_one_plus(v7);
     cl_replace(6, v8, v1string, ECL_SYM("END1",1248), v9, ECL_SYM("END2",1249), v9);
     {
      cl_object v10src;
      cl_object v11dst;
      v10src = v9;
      v11dst = v9;
      goto L11;
L10:;
      ecl_elt_set(v8,ecl_to_size(v11dst),v2commachar);
      T0 = ecl_one_plus(v11dst);
      T1 = ecl_plus(v10src,v3commainterval);
      cl_replace(8, v8, v1string, ECL_SYM("START1",1338), T0, ECL_SYM("START2",1339), v10src, ECL_SYM("END2",1249), T1);
      v10src = ecl_plus(v10src,v3commainterval);
      T0 = ecl_plus(v11dst,v3commainterval);
      v11dst = ecl_plus(T0,ecl_make_fixnum(1));
L11:;
      if (ecl_number_equalp(v10src,ecl_make_fixnum(v4length))) { goto L18; }
      goto L10;
L18:;
     }
     value0 = v8;
     cl_env_copy->nvalues = 1;
     return value0;
    }
   }
  }
 }
}
/*      function definition for EXPAND-FORMAT-INTEGER                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L38expand_format_integer(cl_object v1base, cl_object v2colonp, cl_object v3atsignp, cl_object v4params)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if ((v2colonp)!=ECL_NIL) { goto L3; }
  if ((v3atsignp)!=ECL_NIL) { goto L3; }
  if (Null(v4params)) { goto L1; }
  goto L2;
L3:;
L2:;
  {
   cl_object v5;
   v5 = v4params;
   {
    cl_object v6param_and_offset;
    cl_object v7offset;
    cl_object v8param;
    {
     cl_object v9;
     v9 = v5;
     {
      cl_object v10;
      v10 = v9;
      if (ecl_unlikely(!ECL_LISTP(v10))) FEtype_error_list(v10);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
     }
     if (Null(v9)) { goto L13; }
     {
      cl_object v10;
      v10 = ECL_CONS_CDR(v9);
      v5 = v10;
      v9 = ECL_CONS_CAR(v9);
     }
L13:;
     v6param_and_offset = v9;
    }
    v7offset = ecl_car(v6param_and_offset);
    v8param = ecl_cdr(v6param_and_offset);
    if (!(ecl_eql(v8param,VV[23]))) { goto L21; }
    T1 = L15expand_next_arg(1, v7offset);
    T0 = cl_list(3, ECL_SYM("OR",616), T1, ecl_make_fixnum(0));
    goto L7;
L21:;
    if (!(ecl_eql(v8param,VV[24]))) { goto L23; }
    cl_set(VV[37],ECL_NIL);
    T0 = VV[68];
    goto L7;
L23:;
    if (!((v8param)==(ECL_NIL))) { goto L27; }
    T0 = ecl_make_fixnum(0);
    goto L7;
L27:;
    T0 = v8param;
   }
L7:;
   T1 = cl_list(2, VV[86], T0);
   {
    cl_object v6param_and_offset;
    cl_object v7offset;
    cl_object v8param;
    {
     cl_object v9;
     v9 = v5;
     {
      cl_object v10;
      v10 = v9;
      if (ecl_unlikely(!ECL_LISTP(v10))) FEtype_error_list(v10);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
     }
     if (Null(v9)) { goto L36; }
     {
      cl_object v10;
      v10 = ECL_CONS_CDR(v9);
      v5 = v10;
      v9 = ECL_CONS_CAR(v9);
     }
L36:;
     v6param_and_offset = v9;
    }
    v7offset = ecl_car(v6param_and_offset);
    v8param = ecl_cdr(v6param_and_offset);
    if (!(ecl_eql(v8param,VV[23]))) { goto L44; }
    T3 = L15expand_next_arg(1, v7offset);
    T2 = cl_list(3, ECL_SYM("OR",616), T3, CODE_CHAR(32));
    goto L30;
L44:;
    if (!(ecl_eql(v8param,VV[24]))) { goto L46; }
    cl_set(VV[37],ECL_NIL);
    T2 = VV[68];
    goto L30;
L46:;
    if (!((v8param)==(ECL_NIL))) { goto L50; }
    T2 = CODE_CHAR(32);
    goto L30;
L50:;
    T2 = v8param;
   }
L30:;
   T3 = cl_list(2, VV[87], T2);
   {
    cl_object v6param_and_offset;
    cl_object v7offset;
    cl_object v8param;
    {
     cl_object v9;
     v9 = v5;
     {
      cl_object v10;
      v10 = v9;
      if (ecl_unlikely(!ECL_LISTP(v10))) FEtype_error_list(v10);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
     }
     if (Null(v9)) { goto L59; }
     {
      cl_object v10;
      v10 = ECL_CONS_CDR(v9);
      v5 = v10;
      v9 = ECL_CONS_CAR(v9);
     }
L59:;
     v6param_and_offset = v9;
    }
    v7offset = ecl_car(v6param_and_offset);
    v8param = ecl_cdr(v6param_and_offset);
    if (!(ecl_eql(v8param,VV[23]))) { goto L67; }
    T5 = L15expand_next_arg(1, v7offset);
    T4 = cl_list(3, ECL_SYM("OR",616), T5, CODE_CHAR(44));
    goto L53;
L67:;
    if (!(ecl_eql(v8param,VV[24]))) { goto L69; }
    cl_set(VV[37],ECL_NIL);
    T4 = VV[68];
    goto L53;
L69:;
    if (!((v8param)==(ECL_NIL))) { goto L73; }
    T4 = CODE_CHAR(44);
    goto L53;
L73:;
    T4 = v8param;
   }
L53:;
   T5 = cl_list(2, VV[88], T4);
   {
    cl_object v6param_and_offset;
    cl_object v7offset;
    cl_object v8param;
    {
     cl_object v9;
     v9 = v5;
     {
      cl_object v10;
      v10 = v9;
      if (ecl_unlikely(!ECL_LISTP(v10))) FEtype_error_list(v10);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
     }
     if (Null(v9)) { goto L82; }
     {
      cl_object v10;
      v10 = ECL_CONS_CDR(v9);
      v5 = v10;
      v9 = ECL_CONS_CAR(v9);
     }
L82:;
     v6param_and_offset = v9;
    }
    v7offset = ecl_car(v6param_and_offset);
    v8param = ecl_cdr(v6param_and_offset);
    if (!(ecl_eql(v8param,VV[23]))) { goto L90; }
    T7 = L15expand_next_arg(1, v7offset);
    T6 = cl_list(3, ECL_SYM("OR",616), T7, ecl_make_fixnum(3));
    goto L76;
L90:;
    if (!(ecl_eql(v8param,VV[24]))) { goto L92; }
    cl_set(VV[37],ECL_NIL);
    T6 = VV[68];
    goto L76;
L92:;
    if (!((v8param)==(ECL_NIL))) { goto L96; }
    T6 = ecl_make_fixnum(3);
    goto L76;
L96:;
    T6 = v8param;
   }
L76:;
   T7 = cl_list(2, VV[89], T6);
   T8 = cl_list(4, T1, T3, T5, T7);
   if (Null(v5)) { goto L100; }
   T10 = ecl_list1(ecl_make_fixnum(4));
   T11 = ecl_caar(v5);
   T9 = cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[70], VV[71], T10, ECL_SYM("OFFSET",1306), T11);
   goto L99;
L100:;
   T9 = ECL_NIL;
L99:;
   T10 = L15expand_next_arg(0);
   T11 = cl_list(10, VV[85], ECL_SYM("STREAM",801), T10, v2colonp, v3atsignp, v1base, VV[86], VV[87], VV[88], VV[89]);
   T12 = ecl_list1(T11);
   T13 = ecl_append(T9,T12);
   value0 = cl_listX(3, ECL_SYM("LET",479), T8, T13);
   return value0;
  }
L1:;
  T0 = L15expand_next_arg(0);
  value0 = cl_listX(7, ECL_SYM("WRITE",919), T0, ECL_SYM("STREAM",1340), ECL_SYM("STREAM",801), ECL_SYM("BASE",1223), v1base, VV[90]);
  return value0;
 }
}
/*      local function LATIN_CAPITAL_LETTER_D-FORMAT-DIRECTIVE-EXPANDER */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC39latin_capital_letter_d_format_directive_expander(cl_object v1, cl_object v2)
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
   cl_object v4;
   cl_object v5;
   v3 = ecl_function_dispatch(cl_env_copy,VV[311])(1, v1) /*  FORMAT-DIRECTIVE-COLONP */;
   v4 = ecl_function_dispatch(cl_env_copy,VV[312])(1, v1) /*  FORMAT-DIRECTIVE-ATSIGNP */;
   v5 = ecl_function_dispatch(cl_env_copy,VV[313])(1, v1) /*  FORMAT-DIRECTIVE-PARAMS */;
   T0 = L38expand_format_integer(ecl_make_fixnum(10), v3, v4, v5);
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v2;
   cl_env_copy->values[0] = T0;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA500                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC40__lambda500(cl_object v1stream, cl_object v2, cl_object v3, cl_object v4orig_args, cl_object v5args)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v6;
   cl_object v7;
   cl_object v8;
   v6 = ecl_function_dispatch(cl_env_copy,VV[311])(1, v2) /*  FORMAT-DIRECTIVE-COLONP */;
   v7 = ecl_function_dispatch(cl_env_copy,VV[312])(1, v2) /*  FORMAT-DIRECTIVE-ATSIGNP */;
   v8 = ecl_function_dispatch(cl_env_copy,VV[313])(1, v2) /*  FORMAT-DIRECTIVE-PARAMS */;
   if ((v6)!=ECL_NIL) { goto L7; }
   if ((v7)!=ECL_NIL) { goto L7; }
   if (Null(v8)) { goto L5; }
   goto L6;
L7:;
L6:;
   {
    cl_object v9;
    v9 = v8;
    {
     cl_object v10mincol;
     cl_object v11padchar;
     cl_object v12commachar;
     cl_object v13commainterval;
     {
      cl_object v14param_and_offset;
      cl_object v15offset;
      cl_object v16param;
      {
       cl_object v17;
       v17 = v9;
       {
        cl_object v18;
        v18 = v17;
        if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v17)) { goto L17; }
       {
        cl_object v18;
        v18 = ECL_CONS_CDR(v17);
        v9 = v18;
        v17 = ECL_CONS_CAR(v17);
       }
L17:;
       v14param_and_offset = v17;
      }
      v15offset = ecl_car(v14param_and_offset);
      v16param = ecl_cdr(v14param_and_offset);
      if (!(ecl_eql(v16param,VV[23]))) { goto L25; }
      if (!(v5args==ECL_NIL)) { goto L30; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v15offset);
L30:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L32; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L32:;
      {
       cl_object v17;
       v17 = v5args;
       {
        cl_object v18;
        v18 = v17;
        if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v17)) { goto L38; }
       {
        cl_object v18;
        v18 = ECL_CONS_CDR(v17);
        v5args = v18;
        v17 = ECL_CONS_CAR(v17);
       }
L38:;
       value0 = v17;
      }
      if ((value0)!=ECL_NIL) { goto L28; }
      v10mincol = ecl_make_fixnum(0);
      goto L11;
L28:;
      v10mincol = value0;
      goto L11;
L25:;
      if (!(ecl_eql(v16param,VV[24]))) { goto L44; }
      v10mincol = ecl_make_fixnum(ecl_length(v5args));
      goto L11;
L44:;
      if (!((v16param)==(ECL_NIL))) { goto L46; }
      v10mincol = ecl_make_fixnum(0);
      goto L11;
L46:;
      v10mincol = v16param;
     }
L11:;
     {
      cl_object v14param_and_offset;
      cl_object v15offset;
      cl_object v16param;
      {
       cl_object v17;
       v17 = v9;
       {
        cl_object v18;
        v18 = v17;
        if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v17)) { goto L55; }
       {
        cl_object v18;
        v18 = ECL_CONS_CDR(v17);
        v9 = v18;
        v17 = ECL_CONS_CAR(v17);
       }
L55:;
       v14param_and_offset = v17;
      }
      v15offset = ecl_car(v14param_and_offset);
      v16param = ecl_cdr(v14param_and_offset);
      if (!(ecl_eql(v16param,VV[23]))) { goto L63; }
      if (!(v5args==ECL_NIL)) { goto L68; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v15offset);
L68:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L70; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L70:;
      {
       cl_object v17;
       v17 = v5args;
       {
        cl_object v18;
        v18 = v17;
        if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v17)) { goto L76; }
       {
        cl_object v18;
        v18 = ECL_CONS_CDR(v17);
        v5args = v18;
        v17 = ECL_CONS_CAR(v17);
       }
L76:;
       value0 = v17;
      }
      if ((value0)!=ECL_NIL) { goto L66; }
      v11padchar = CODE_CHAR(32);
      goto L49;
L66:;
      v11padchar = value0;
      goto L49;
L63:;
      if (!(ecl_eql(v16param,VV[24]))) { goto L82; }
      v11padchar = ecl_make_fixnum(ecl_length(v5args));
      goto L49;
L82:;
      if (!((v16param)==(ECL_NIL))) { goto L84; }
      v11padchar = CODE_CHAR(32);
      goto L49;
L84:;
      v11padchar = v16param;
     }
L49:;
     {
      cl_object v14param_and_offset;
      cl_object v15offset;
      cl_object v16param;
      {
       cl_object v17;
       v17 = v9;
       {
        cl_object v18;
        v18 = v17;
        if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v17)) { goto L93; }
       {
        cl_object v18;
        v18 = ECL_CONS_CDR(v17);
        v9 = v18;
        v17 = ECL_CONS_CAR(v17);
       }
L93:;
       v14param_and_offset = v17;
      }
      v15offset = ecl_car(v14param_and_offset);
      v16param = ecl_cdr(v14param_and_offset);
      if (!(ecl_eql(v16param,VV[23]))) { goto L101; }
      if (!(v5args==ECL_NIL)) { goto L106; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v15offset);
L106:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L108; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L108:;
      {
       cl_object v17;
       v17 = v5args;
       {
        cl_object v18;
        v18 = v17;
        if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v17)) { goto L114; }
       {
        cl_object v18;
        v18 = ECL_CONS_CDR(v17);
        v5args = v18;
        v17 = ECL_CONS_CAR(v17);
       }
L114:;
       value0 = v17;
      }
      if ((value0)!=ECL_NIL) { goto L104; }
      v12commachar = CODE_CHAR(44);
      goto L87;
L104:;
      v12commachar = value0;
      goto L87;
L101:;
      if (!(ecl_eql(v16param,VV[24]))) { goto L120; }
      v12commachar = ecl_make_fixnum(ecl_length(v5args));
      goto L87;
L120:;
      if (!((v16param)==(ECL_NIL))) { goto L122; }
      v12commachar = CODE_CHAR(44);
      goto L87;
L122:;
      v12commachar = v16param;
     }
L87:;
     {
      cl_object v14param_and_offset;
      cl_object v15offset;
      cl_object v16param;
      {
       cl_object v17;
       v17 = v9;
       {
        cl_object v18;
        v18 = v17;
        if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v17)) { goto L131; }
       {
        cl_object v18;
        v18 = ECL_CONS_CDR(v17);
        v9 = v18;
        v17 = ECL_CONS_CAR(v17);
       }
L131:;
       v14param_and_offset = v17;
      }
      v15offset = ecl_car(v14param_and_offset);
      v16param = ecl_cdr(v14param_and_offset);
      if (!(ecl_eql(v16param,VV[23]))) { goto L139; }
      if (!(v5args==ECL_NIL)) { goto L144; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v15offset);
L144:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L146; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L146:;
      {
       cl_object v17;
       v17 = v5args;
       {
        cl_object v18;
        v18 = v17;
        if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v17)) { goto L152; }
       {
        cl_object v18;
        v18 = ECL_CONS_CDR(v17);
        v5args = v18;
        v17 = ECL_CONS_CAR(v17);
       }
L152:;
       value0 = v17;
      }
      if ((value0)!=ECL_NIL) { goto L142; }
      v13commainterval = ecl_make_fixnum(3);
      goto L125;
L142:;
      v13commainterval = value0;
      goto L125;
L139:;
      if (!(ecl_eql(v16param,VV[24]))) { goto L158; }
      v13commainterval = ecl_make_fixnum(ecl_length(v5args));
      goto L125;
L158:;
      if (!((v16param)==(ECL_NIL))) { goto L160; }
      v13commainterval = ecl_make_fixnum(3);
      goto L125;
L160:;
      v13commainterval = v16param;
     }
L125:;
     if (Null(v9)) { goto L163; }
     T0 = ecl_list1(ecl_make_fixnum(4));
     T1 = ecl_caar(v9);
     cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[70], VV[71], T0, ECL_SYM("OFFSET",1306), T1);
L163:;
     if (!(v5args==ECL_NIL)) { goto L165; }
     cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57]);
L165:;
     if (Null(ecl_symbol_value(VV[34]))) { goto L167; }
     ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L167:;
     {
      cl_object v14;
      v14 = v5args;
      {
       cl_object v15;
       v15 = v14;
       if (ecl_unlikely(!ECL_LISTP(v15))) FEtype_error_list(v15);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v14)) { goto L174; }
      {
       cl_object v15;
       v15 = ECL_CONS_CDR(v14);
       v5args = v15;
       v14 = ECL_CONS_CAR(v14);
      }
L174:;
      T0 = v14;
     }
     L36format_print_integer(v1stream, T0, v6, v7, ecl_make_fixnum(10), v10mincol, v11padchar, v12commachar, v13commainterval);
     goto L4;
    }
   }
L5:;
   if (!(v5args==ECL_NIL)) { goto L180; }
   cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57]);
L180:;
   if (Null(ecl_symbol_value(VV[34]))) { goto L182; }
   ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L182:;
   {
    cl_object v14;
    v14 = v5args;
    {
     cl_object v15;
     v15 = v14;
     if (ecl_unlikely(!ECL_LISTP(v15))) FEtype_error_list(v15);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
    }
    if (Null(v14)) { goto L189; }
    {
     cl_object v15;
     v15 = ECL_CONS_CDR(v14);
     v5args = v15;
     v14 = ECL_CONS_CAR(v14);
    }
L189:;
    T0 = v14;
   }
   cl_write(9, T0, ECL_SYM("STREAM",1340), v1stream, ECL_SYM("BASE",1223), ecl_make_fixnum(10), ECL_SYM("RADIX",1322), ECL_NIL, ECL_SYM("ESCAPE",1252), ECL_NIL);
L4:;
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v5args;
   cl_env_copy->values[0] = v3;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LATIN_CAPITAL_LETTER_B-FORMAT-DIRECTIVE-EXPANDER */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC41latin_capital_letter_b_format_directive_expander(cl_object v1, cl_object v2)
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
   cl_object v4;
   cl_object v5;
   v3 = ecl_function_dispatch(cl_env_copy,VV[311])(1, v1) /*  FORMAT-DIRECTIVE-COLONP */;
   v4 = ecl_function_dispatch(cl_env_copy,VV[312])(1, v1) /*  FORMAT-DIRECTIVE-ATSIGNP */;
   v5 = ecl_function_dispatch(cl_env_copy,VV[313])(1, v1) /*  FORMAT-DIRECTIVE-PARAMS */;
   T0 = L38expand_format_integer(ecl_make_fixnum(2), v3, v4, v5);
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v2;
   cl_env_copy->values[0] = T0;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA540                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC42__lambda540(cl_object v1stream, cl_object v2, cl_object v3, cl_object v4orig_args, cl_object v5args)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v6;
   cl_object v7;
   cl_object v8;
   v6 = ecl_function_dispatch(cl_env_copy,VV[311])(1, v2) /*  FORMAT-DIRECTIVE-COLONP */;
   v7 = ecl_function_dispatch(cl_env_copy,VV[312])(1, v2) /*  FORMAT-DIRECTIVE-ATSIGNP */;
   v8 = ecl_function_dispatch(cl_env_copy,VV[313])(1, v2) /*  FORMAT-DIRECTIVE-PARAMS */;
   if ((v6)!=ECL_NIL) { goto L7; }
   if ((v7)!=ECL_NIL) { goto L7; }
   if (Null(v8)) { goto L5; }
   goto L6;
L7:;
L6:;
   {
    cl_object v9;
    v9 = v8;
    {
     cl_object v10mincol;
     cl_object v11padchar;
     cl_object v12commachar;
     cl_object v13commainterval;
     {
      cl_object v14param_and_offset;
      cl_object v15offset;
      cl_object v16param;
      {
       cl_object v17;
       v17 = v9;
       {
        cl_object v18;
        v18 = v17;
        if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v17)) { goto L17; }
       {
        cl_object v18;
        v18 = ECL_CONS_CDR(v17);
        v9 = v18;
        v17 = ECL_CONS_CAR(v17);
       }
L17:;
       v14param_and_offset = v17;
      }
      v15offset = ecl_car(v14param_and_offset);
      v16param = ecl_cdr(v14param_and_offset);
      if (!(ecl_eql(v16param,VV[23]))) { goto L25; }
      if (!(v5args==ECL_NIL)) { goto L30; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v15offset);
L30:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L32; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L32:;
      {
       cl_object v17;
       v17 = v5args;
       {
        cl_object v18;
        v18 = v17;
        if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v17)) { goto L38; }
       {
        cl_object v18;
        v18 = ECL_CONS_CDR(v17);
        v5args = v18;
        v17 = ECL_CONS_CAR(v17);
       }
L38:;
       value0 = v17;
      }
      if ((value0)!=ECL_NIL) { goto L28; }
      v10mincol = ecl_make_fixnum(0);
      goto L11;
L28:;
      v10mincol = value0;
      goto L11;
L25:;
      if (!(ecl_eql(v16param,VV[24]))) { goto L44; }
      v10mincol = ecl_make_fixnum(ecl_length(v5args));
      goto L11;
L44:;
      if (!((v16param)==(ECL_NIL))) { goto L46; }
      v10mincol = ecl_make_fixnum(0);
      goto L11;
L46:;
      v10mincol = v16param;
     }
L11:;
     {
      cl_object v14param_and_offset;
      cl_object v15offset;
      cl_object v16param;
      {
       cl_object v17;
       v17 = v9;
       {
        cl_object v18;
        v18 = v17;
        if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v17)) { goto L55; }
       {
        cl_object v18;
        v18 = ECL_CONS_CDR(v17);
        v9 = v18;
        v17 = ECL_CONS_CAR(v17);
       }
L55:;
       v14param_and_offset = v17;
      }
      v15offset = ecl_car(v14param_and_offset);
      v16param = ecl_cdr(v14param_and_offset);
      if (!(ecl_eql(v16param,VV[23]))) { goto L63; }
      if (!(v5args==ECL_NIL)) { goto L68; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v15offset);
L68:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L70; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L70:;
      {
       cl_object v17;
       v17 = v5args;
       {
        cl_object v18;
        v18 = v17;
        if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v17)) { goto L76; }
       {
        cl_object v18;
        v18 = ECL_CONS_CDR(v17);
        v5args = v18;
        v17 = ECL_CONS_CAR(v17);
       }
L76:;
       value0 = v17;
      }
      if ((value0)!=ECL_NIL) { goto L66; }
      v11padchar = CODE_CHAR(32);
      goto L49;
L66:;
      v11padchar = value0;
      goto L49;
L63:;
      if (!(ecl_eql(v16param,VV[24]))) { goto L82; }
      v11padchar = ecl_make_fixnum(ecl_length(v5args));
      goto L49;
L82:;
      if (!((v16param)==(ECL_NIL))) { goto L84; }
      v11padchar = CODE_CHAR(32);
      goto L49;
L84:;
      v11padchar = v16param;
     }
L49:;
     {
      cl_object v14param_and_offset;
      cl_object v15offset;
      cl_object v16param;
      {
       cl_object v17;
       v17 = v9;
       {
        cl_object v18;
        v18 = v17;
        if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v17)) { goto L93; }
       {
        cl_object v18;
        v18 = ECL_CONS_CDR(v17);
        v9 = v18;
        v17 = ECL_CONS_CAR(v17);
       }
L93:;
       v14param_and_offset = v17;
      }
      v15offset = ecl_car(v14param_and_offset);
      v16param = ecl_cdr(v14param_and_offset);
      if (!(ecl_eql(v16param,VV[23]))) { goto L101; }
      if (!(v5args==ECL_NIL)) { goto L106; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v15offset);
L106:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L108; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L108:;
      {
       cl_object v17;
       v17 = v5args;
       {
        cl_object v18;
        v18 = v17;
        if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v17)) { goto L114; }
       {
        cl_object v18;
        v18 = ECL_CONS_CDR(v17);
        v5args = v18;
        v17 = ECL_CONS_CAR(v17);
       }
L114:;
       value0 = v17;
      }
      if ((value0)!=ECL_NIL) { goto L104; }
      v12commachar = CODE_CHAR(44);
      goto L87;
L104:;
      v12commachar = value0;
      goto L87;
L101:;
      if (!(ecl_eql(v16param,VV[24]))) { goto L120; }
      v12commachar = ecl_make_fixnum(ecl_length(v5args));
      goto L87;
L120:;
      if (!((v16param)==(ECL_NIL))) { goto L122; }
      v12commachar = CODE_CHAR(44);
      goto L87;
L122:;
      v12commachar = v16param;
     }
L87:;
     {
      cl_object v14param_and_offset;
      cl_object v15offset;
      cl_object v16param;
      {
       cl_object v17;
       v17 = v9;
       {
        cl_object v18;
        v18 = v17;
        if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v17)) { goto L131; }
       {
        cl_object v18;
        v18 = ECL_CONS_CDR(v17);
        v9 = v18;
        v17 = ECL_CONS_CAR(v17);
       }
L131:;
       v14param_and_offset = v17;
      }
      v15offset = ecl_car(v14param_and_offset);
      v16param = ecl_cdr(v14param_and_offset);
      if (!(ecl_eql(v16param,VV[23]))) { goto L139; }
      if (!(v5args==ECL_NIL)) { goto L144; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v15offset);
L144:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L146; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L146:;
      {
       cl_object v17;
       v17 = v5args;
       {
        cl_object v18;
        v18 = v17;
        if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v17)) { goto L152; }
       {
        cl_object v18;
        v18 = ECL_CONS_CDR(v17);
        v5args = v18;
        v17 = ECL_CONS_CAR(v17);
       }
L152:;
       value0 = v17;
      }
      if ((value0)!=ECL_NIL) { goto L142; }
      v13commainterval = ecl_make_fixnum(3);
      goto L125;
L142:;
      v13commainterval = value0;
      goto L125;
L139:;
      if (!(ecl_eql(v16param,VV[24]))) { goto L158; }
      v13commainterval = ecl_make_fixnum(ecl_length(v5args));
      goto L125;
L158:;
      if (!((v16param)==(ECL_NIL))) { goto L160; }
      v13commainterval = ecl_make_fixnum(3);
      goto L125;
L160:;
      v13commainterval = v16param;
     }
L125:;
     if (Null(v9)) { goto L163; }
     T0 = ecl_list1(ecl_make_fixnum(4));
     T1 = ecl_caar(v9);
     cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[70], VV[71], T0, ECL_SYM("OFFSET",1306), T1);
L163:;
     if (!(v5args==ECL_NIL)) { goto L165; }
     cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57]);
L165:;
     if (Null(ecl_symbol_value(VV[34]))) { goto L167; }
     ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L167:;
     {
      cl_object v14;
      v14 = v5args;
      {
       cl_object v15;
       v15 = v14;
       if (ecl_unlikely(!ECL_LISTP(v15))) FEtype_error_list(v15);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v14)) { goto L174; }
      {
       cl_object v15;
       v15 = ECL_CONS_CDR(v14);
       v5args = v15;
       v14 = ECL_CONS_CAR(v14);
      }
L174:;
      T0 = v14;
     }
     L36format_print_integer(v1stream, T0, v6, v7, ecl_make_fixnum(2), v10mincol, v11padchar, v12commachar, v13commainterval);
     goto L4;
    }
   }
L5:;
   if (!(v5args==ECL_NIL)) { goto L180; }
   cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57]);
L180:;
   if (Null(ecl_symbol_value(VV[34]))) { goto L182; }
   ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L182:;
   {
    cl_object v14;
    v14 = v5args;
    {
     cl_object v15;
     v15 = v14;
     if (ecl_unlikely(!ECL_LISTP(v15))) FEtype_error_list(v15);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
    }
    if (Null(v14)) { goto L189; }
    {
     cl_object v15;
     v15 = ECL_CONS_CDR(v14);
     v5args = v15;
     v14 = ECL_CONS_CAR(v14);
    }
L189:;
    T0 = v14;
   }
   cl_write(9, T0, ECL_SYM("STREAM",1340), v1stream, ECL_SYM("BASE",1223), ecl_make_fixnum(2), ECL_SYM("RADIX",1322), ECL_NIL, ECL_SYM("ESCAPE",1252), ECL_NIL);
L4:;
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v5args;
   cl_env_copy->values[0] = v3;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LATIN_CAPITAL_LETTER_O-FORMAT-DIRECTIVE-EXPANDER */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC43latin_capital_letter_o_format_directive_expander(cl_object v1, cl_object v2)
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
   cl_object v4;
   cl_object v5;
   v3 = ecl_function_dispatch(cl_env_copy,VV[311])(1, v1) /*  FORMAT-DIRECTIVE-COLONP */;
   v4 = ecl_function_dispatch(cl_env_copy,VV[312])(1, v1) /*  FORMAT-DIRECTIVE-ATSIGNP */;
   v5 = ecl_function_dispatch(cl_env_copy,VV[313])(1, v1) /*  FORMAT-DIRECTIVE-PARAMS */;
   T0 = L38expand_format_integer(ecl_make_fixnum(8), v3, v4, v5);
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v2;
   cl_env_copy->values[0] = T0;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA580                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC44__lambda580(cl_object v1stream, cl_object v2, cl_object v3, cl_object v4orig_args, cl_object v5args)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v6;
   cl_object v7;
   cl_object v8;
   v6 = ecl_function_dispatch(cl_env_copy,VV[311])(1, v2) /*  FORMAT-DIRECTIVE-COLONP */;
   v7 = ecl_function_dispatch(cl_env_copy,VV[312])(1, v2) /*  FORMAT-DIRECTIVE-ATSIGNP */;
   v8 = ecl_function_dispatch(cl_env_copy,VV[313])(1, v2) /*  FORMAT-DIRECTIVE-PARAMS */;
   if ((v6)!=ECL_NIL) { goto L7; }
   if ((v7)!=ECL_NIL) { goto L7; }
   if (Null(v8)) { goto L5; }
   goto L6;
L7:;
L6:;
   {
    cl_object v9;
    v9 = v8;
    {
     cl_object v10mincol;
     cl_object v11padchar;
     cl_object v12commachar;
     cl_object v13commainterval;
     {
      cl_object v14param_and_offset;
      cl_object v15offset;
      cl_object v16param;
      {
       cl_object v17;
       v17 = v9;
       {
        cl_object v18;
        v18 = v17;
        if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v17)) { goto L17; }
       {
        cl_object v18;
        v18 = ECL_CONS_CDR(v17);
        v9 = v18;
        v17 = ECL_CONS_CAR(v17);
       }
L17:;
       v14param_and_offset = v17;
      }
      v15offset = ecl_car(v14param_and_offset);
      v16param = ecl_cdr(v14param_and_offset);
      if (!(ecl_eql(v16param,VV[23]))) { goto L25; }
      if (!(v5args==ECL_NIL)) { goto L30; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v15offset);
L30:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L32; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L32:;
      {
       cl_object v17;
       v17 = v5args;
       {
        cl_object v18;
        v18 = v17;
        if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v17)) { goto L38; }
       {
        cl_object v18;
        v18 = ECL_CONS_CDR(v17);
        v5args = v18;
        v17 = ECL_CONS_CAR(v17);
       }
L38:;
       value0 = v17;
      }
      if ((value0)!=ECL_NIL) { goto L28; }
      v10mincol = ecl_make_fixnum(0);
      goto L11;
L28:;
      v10mincol = value0;
      goto L11;
L25:;
      if (!(ecl_eql(v16param,VV[24]))) { goto L44; }
      v10mincol = ecl_make_fixnum(ecl_length(v5args));
      goto L11;
L44:;
      if (!((v16param)==(ECL_NIL))) { goto L46; }
      v10mincol = ecl_make_fixnum(0);
      goto L11;
L46:;
      v10mincol = v16param;
     }
L11:;
     {
      cl_object v14param_and_offset;
      cl_object v15offset;
      cl_object v16param;
      {
       cl_object v17;
       v17 = v9;
       {
        cl_object v18;
        v18 = v17;
        if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v17)) { goto L55; }
       {
        cl_object v18;
        v18 = ECL_CONS_CDR(v17);
        v9 = v18;
        v17 = ECL_CONS_CAR(v17);
       }
L55:;
       v14param_and_offset = v17;
      }
      v15offset = ecl_car(v14param_and_offset);
      v16param = ecl_cdr(v14param_and_offset);
      if (!(ecl_eql(v16param,VV[23]))) { goto L63; }
      if (!(v5args==ECL_NIL)) { goto L68; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v15offset);
L68:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L70; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L70:;
      {
       cl_object v17;
       v17 = v5args;
       {
        cl_object v18;
        v18 = v17;
        if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v17)) { goto L76; }
       {
        cl_object v18;
        v18 = ECL_CONS_CDR(v17);
        v5args = v18;
        v17 = ECL_CONS_CAR(v17);
       }
L76:;
       value0 = v17;
      }
      if ((value0)!=ECL_NIL) { goto L66; }
      v11padchar = CODE_CHAR(32);
      goto L49;
L66:;
      v11padchar = value0;
      goto L49;
L63:;
      if (!(ecl_eql(v16param,VV[24]))) { goto L82; }
      v11padchar = ecl_make_fixnum(ecl_length(v5args));
      goto L49;
L82:;
      if (!((v16param)==(ECL_NIL))) { goto L84; }
      v11padchar = CODE_CHAR(32);
      goto L49;
L84:;
      v11padchar = v16param;
     }
L49:;
     {
      cl_object v14param_and_offset;
      cl_object v15offset;
      cl_object v16param;
      {
       cl_object v17;
       v17 = v9;
       {
        cl_object v18;
        v18 = v17;
        if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v17)) { goto L93; }
       {
        cl_object v18;
        v18 = ECL_CONS_CDR(v17);
        v9 = v18;
        v17 = ECL_CONS_CAR(v17);
       }
L93:;
       v14param_and_offset = v17;
      }
      v15offset = ecl_car(v14param_and_offset);
      v16param = ecl_cdr(v14param_and_offset);
      if (!(ecl_eql(v16param,VV[23]))) { goto L101; }
      if (!(v5args==ECL_NIL)) { goto L106; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v15offset);
L106:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L108; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L108:;
      {
       cl_object v17;
       v17 = v5args;
       {
        cl_object v18;
        v18 = v17;
        if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v17)) { goto L114; }
       {
        cl_object v18;
        v18 = ECL_CONS_CDR(v17);
        v5args = v18;
        v17 = ECL_CONS_CAR(v17);
       }
L114:;
       value0 = v17;
      }
      if ((value0)!=ECL_NIL) { goto L104; }
      v12commachar = CODE_CHAR(44);
      goto L87;
L104:;
      v12commachar = value0;
      goto L87;
L101:;
      if (!(ecl_eql(v16param,VV[24]))) { goto L120; }
      v12commachar = ecl_make_fixnum(ecl_length(v5args));
      goto L87;
L120:;
      if (!((v16param)==(ECL_NIL))) { goto L122; }
      v12commachar = CODE_CHAR(44);
      goto L87;
L122:;
      v12commachar = v16param;
     }
L87:;
     {
      cl_object v14param_and_offset;
      cl_object v15offset;
      cl_object v16param;
      {
       cl_object v17;
       v17 = v9;
       {
        cl_object v18;
        v18 = v17;
        if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v17)) { goto L131; }
       {
        cl_object v18;
        v18 = ECL_CONS_CDR(v17);
        v9 = v18;
        v17 = ECL_CONS_CAR(v17);
       }
L131:;
       v14param_and_offset = v17;
      }
      v15offset = ecl_car(v14param_and_offset);
      v16param = ecl_cdr(v14param_and_offset);
      if (!(ecl_eql(v16param,VV[23]))) { goto L139; }
      if (!(v5args==ECL_NIL)) { goto L144; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v15offset);
L144:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L146; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L146:;
      {
       cl_object v17;
       v17 = v5args;
       {
        cl_object v18;
        v18 = v17;
        if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v17)) { goto L152; }
       {
        cl_object v18;
        v18 = ECL_CONS_CDR(v17);
        v5args = v18;
        v17 = ECL_CONS_CAR(v17);
       }
L152:;
       value0 = v17;
      }
      if ((value0)!=ECL_NIL) { goto L142; }
      v13commainterval = ecl_make_fixnum(3);
      goto L125;
L142:;
      v13commainterval = value0;
      goto L125;
L139:;
      if (!(ecl_eql(v16param,VV[24]))) { goto L158; }
      v13commainterval = ecl_make_fixnum(ecl_length(v5args));
      goto L125;
L158:;
      if (!((v16param)==(ECL_NIL))) { goto L160; }
      v13commainterval = ecl_make_fixnum(3);
      goto L125;
L160:;
      v13commainterval = v16param;
     }
L125:;
     if (Null(v9)) { goto L163; }
     T0 = ecl_list1(ecl_make_fixnum(4));
     T1 = ecl_caar(v9);
     cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[70], VV[71], T0, ECL_SYM("OFFSET",1306), T1);
L163:;
     if (!(v5args==ECL_NIL)) { goto L165; }
     cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57]);
L165:;
     if (Null(ecl_symbol_value(VV[34]))) { goto L167; }
     ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L167:;
     {
      cl_object v14;
      v14 = v5args;
      {
       cl_object v15;
       v15 = v14;
       if (ecl_unlikely(!ECL_LISTP(v15))) FEtype_error_list(v15);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v14)) { goto L174; }
      {
       cl_object v15;
       v15 = ECL_CONS_CDR(v14);
       v5args = v15;
       v14 = ECL_CONS_CAR(v14);
      }
L174:;
      T0 = v14;
     }
     L36format_print_integer(v1stream, T0, v6, v7, ecl_make_fixnum(8), v10mincol, v11padchar, v12commachar, v13commainterval);
     goto L4;
    }
   }
L5:;
   if (!(v5args==ECL_NIL)) { goto L180; }
   cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57]);
L180:;
   if (Null(ecl_symbol_value(VV[34]))) { goto L182; }
   ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L182:;
   {
    cl_object v14;
    v14 = v5args;
    {
     cl_object v15;
     v15 = v14;
     if (ecl_unlikely(!ECL_LISTP(v15))) FEtype_error_list(v15);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
    }
    if (Null(v14)) { goto L189; }
    {
     cl_object v15;
     v15 = ECL_CONS_CDR(v14);
     v5args = v15;
     v14 = ECL_CONS_CAR(v14);
    }
L189:;
    T0 = v14;
   }
   cl_write(9, T0, ECL_SYM("STREAM",1340), v1stream, ECL_SYM("BASE",1223), ecl_make_fixnum(8), ECL_SYM("RADIX",1322), ECL_NIL, ECL_SYM("ESCAPE",1252), ECL_NIL);
L4:;
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v5args;
   cl_env_copy->values[0] = v3;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LATIN_CAPITAL_LETTER_X-FORMAT-DIRECTIVE-EXPANDER */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC45latin_capital_letter_x_format_directive_expander(cl_object v1, cl_object v2)
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
   cl_object v4;
   cl_object v5;
   v3 = ecl_function_dispatch(cl_env_copy,VV[311])(1, v1) /*  FORMAT-DIRECTIVE-COLONP */;
   v4 = ecl_function_dispatch(cl_env_copy,VV[312])(1, v1) /*  FORMAT-DIRECTIVE-ATSIGNP */;
   v5 = ecl_function_dispatch(cl_env_copy,VV[313])(1, v1) /*  FORMAT-DIRECTIVE-PARAMS */;
   T0 = L38expand_format_integer(ecl_make_fixnum(16), v3, v4, v5);
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v2;
   cl_env_copy->values[0] = T0;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA620                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC46__lambda620(cl_object v1stream, cl_object v2, cl_object v3, cl_object v4orig_args, cl_object v5args)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v6;
   cl_object v7;
   cl_object v8;
   v6 = ecl_function_dispatch(cl_env_copy,VV[311])(1, v2) /*  FORMAT-DIRECTIVE-COLONP */;
   v7 = ecl_function_dispatch(cl_env_copy,VV[312])(1, v2) /*  FORMAT-DIRECTIVE-ATSIGNP */;
   v8 = ecl_function_dispatch(cl_env_copy,VV[313])(1, v2) /*  FORMAT-DIRECTIVE-PARAMS */;
   if ((v6)!=ECL_NIL) { goto L7; }
   if ((v7)!=ECL_NIL) { goto L7; }
   if (Null(v8)) { goto L5; }
   goto L6;
L7:;
L6:;
   {
    cl_object v9;
    v9 = v8;
    {
     cl_object v10mincol;
     cl_object v11padchar;
     cl_object v12commachar;
     cl_object v13commainterval;
     {
      cl_object v14param_and_offset;
      cl_object v15offset;
      cl_object v16param;
      {
       cl_object v17;
       v17 = v9;
       {
        cl_object v18;
        v18 = v17;
        if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v17)) { goto L17; }
       {
        cl_object v18;
        v18 = ECL_CONS_CDR(v17);
        v9 = v18;
        v17 = ECL_CONS_CAR(v17);
       }
L17:;
       v14param_and_offset = v17;
      }
      v15offset = ecl_car(v14param_and_offset);
      v16param = ecl_cdr(v14param_and_offset);
      if (!(ecl_eql(v16param,VV[23]))) { goto L25; }
      if (!(v5args==ECL_NIL)) { goto L30; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v15offset);
L30:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L32; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L32:;
      {
       cl_object v17;
       v17 = v5args;
       {
        cl_object v18;
        v18 = v17;
        if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v17)) { goto L38; }
       {
        cl_object v18;
        v18 = ECL_CONS_CDR(v17);
        v5args = v18;
        v17 = ECL_CONS_CAR(v17);
       }
L38:;
       value0 = v17;
      }
      if ((value0)!=ECL_NIL) { goto L28; }
      v10mincol = ecl_make_fixnum(0);
      goto L11;
L28:;
      v10mincol = value0;
      goto L11;
L25:;
      if (!(ecl_eql(v16param,VV[24]))) { goto L44; }
      v10mincol = ecl_make_fixnum(ecl_length(v5args));
      goto L11;
L44:;
      if (!((v16param)==(ECL_NIL))) { goto L46; }
      v10mincol = ecl_make_fixnum(0);
      goto L11;
L46:;
      v10mincol = v16param;
     }
L11:;
     {
      cl_object v14param_and_offset;
      cl_object v15offset;
      cl_object v16param;
      {
       cl_object v17;
       v17 = v9;
       {
        cl_object v18;
        v18 = v17;
        if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v17)) { goto L55; }
       {
        cl_object v18;
        v18 = ECL_CONS_CDR(v17);
        v9 = v18;
        v17 = ECL_CONS_CAR(v17);
       }
L55:;
       v14param_and_offset = v17;
      }
      v15offset = ecl_car(v14param_and_offset);
      v16param = ecl_cdr(v14param_and_offset);
      if (!(ecl_eql(v16param,VV[23]))) { goto L63; }
      if (!(v5args==ECL_NIL)) { goto L68; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v15offset);
L68:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L70; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L70:;
      {
       cl_object v17;
       v17 = v5args;
       {
        cl_object v18;
        v18 = v17;
        if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v17)) { goto L76; }
       {
        cl_object v18;
        v18 = ECL_CONS_CDR(v17);
        v5args = v18;
        v17 = ECL_CONS_CAR(v17);
       }
L76:;
       value0 = v17;
      }
      if ((value0)!=ECL_NIL) { goto L66; }
      v11padchar = CODE_CHAR(32);
      goto L49;
L66:;
      v11padchar = value0;
      goto L49;
L63:;
      if (!(ecl_eql(v16param,VV[24]))) { goto L82; }
      v11padchar = ecl_make_fixnum(ecl_length(v5args));
      goto L49;
L82:;
      if (!((v16param)==(ECL_NIL))) { goto L84; }
      v11padchar = CODE_CHAR(32);
      goto L49;
L84:;
      v11padchar = v16param;
     }
L49:;
     {
      cl_object v14param_and_offset;
      cl_object v15offset;
      cl_object v16param;
      {
       cl_object v17;
       v17 = v9;
       {
        cl_object v18;
        v18 = v17;
        if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v17)) { goto L93; }
       {
        cl_object v18;
        v18 = ECL_CONS_CDR(v17);
        v9 = v18;
        v17 = ECL_CONS_CAR(v17);
       }
L93:;
       v14param_and_offset = v17;
      }
      v15offset = ecl_car(v14param_and_offset);
      v16param = ecl_cdr(v14param_and_offset);
      if (!(ecl_eql(v16param,VV[23]))) { goto L101; }
      if (!(v5args==ECL_NIL)) { goto L106; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v15offset);
L106:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L108; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L108:;
      {
       cl_object v17;
       v17 = v5args;
       {
        cl_object v18;
        v18 = v17;
        if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v17)) { goto L114; }
       {
        cl_object v18;
        v18 = ECL_CONS_CDR(v17);
        v5args = v18;
        v17 = ECL_CONS_CAR(v17);
       }
L114:;
       value0 = v17;
      }
      if ((value0)!=ECL_NIL) { goto L104; }
      v12commachar = CODE_CHAR(44);
      goto L87;
L104:;
      v12commachar = value0;
      goto L87;
L101:;
      if (!(ecl_eql(v16param,VV[24]))) { goto L120; }
      v12commachar = ecl_make_fixnum(ecl_length(v5args));
      goto L87;
L120:;
      if (!((v16param)==(ECL_NIL))) { goto L122; }
      v12commachar = CODE_CHAR(44);
      goto L87;
L122:;
      v12commachar = v16param;
     }
L87:;
     {
      cl_object v14param_and_offset;
      cl_object v15offset;
      cl_object v16param;
      {
       cl_object v17;
       v17 = v9;
       {
        cl_object v18;
        v18 = v17;
        if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v17)) { goto L131; }
       {
        cl_object v18;
        v18 = ECL_CONS_CDR(v17);
        v9 = v18;
        v17 = ECL_CONS_CAR(v17);
       }
L131:;
       v14param_and_offset = v17;
      }
      v15offset = ecl_car(v14param_and_offset);
      v16param = ecl_cdr(v14param_and_offset);
      if (!(ecl_eql(v16param,VV[23]))) { goto L139; }
      if (!(v5args==ECL_NIL)) { goto L144; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v15offset);
L144:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L146; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L146:;
      {
       cl_object v17;
       v17 = v5args;
       {
        cl_object v18;
        v18 = v17;
        if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v17)) { goto L152; }
       {
        cl_object v18;
        v18 = ECL_CONS_CDR(v17);
        v5args = v18;
        v17 = ECL_CONS_CAR(v17);
       }
L152:;
       value0 = v17;
      }
      if ((value0)!=ECL_NIL) { goto L142; }
      v13commainterval = ecl_make_fixnum(3);
      goto L125;
L142:;
      v13commainterval = value0;
      goto L125;
L139:;
      if (!(ecl_eql(v16param,VV[24]))) { goto L158; }
      v13commainterval = ecl_make_fixnum(ecl_length(v5args));
      goto L125;
L158:;
      if (!((v16param)==(ECL_NIL))) { goto L160; }
      v13commainterval = ecl_make_fixnum(3);
      goto L125;
L160:;
      v13commainterval = v16param;
     }
L125:;
     if (Null(v9)) { goto L163; }
     T0 = ecl_list1(ecl_make_fixnum(4));
     T1 = ecl_caar(v9);
     cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[70], VV[71], T0, ECL_SYM("OFFSET",1306), T1);
L163:;
     if (!(v5args==ECL_NIL)) { goto L165; }
     cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57]);
L165:;
     if (Null(ecl_symbol_value(VV[34]))) { goto L167; }
     ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L167:;
     {
      cl_object v14;
      v14 = v5args;
      {
       cl_object v15;
       v15 = v14;
       if (ecl_unlikely(!ECL_LISTP(v15))) FEtype_error_list(v15);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v14)) { goto L174; }
      {
       cl_object v15;
       v15 = ECL_CONS_CDR(v14);
       v5args = v15;
       v14 = ECL_CONS_CAR(v14);
      }
L174:;
      T0 = v14;
     }
     L36format_print_integer(v1stream, T0, v6, v7, ecl_make_fixnum(16), v10mincol, v11padchar, v12commachar, v13commainterval);
     goto L4;
    }
   }
L5:;
   if (!(v5args==ECL_NIL)) { goto L180; }
   cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57]);
L180:;
   if (Null(ecl_symbol_value(VV[34]))) { goto L182; }
   ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L182:;
   {
    cl_object v14;
    v14 = v5args;
    {
     cl_object v15;
     v15 = v14;
     if (ecl_unlikely(!ECL_LISTP(v15))) FEtype_error_list(v15);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
    }
    if (Null(v14)) { goto L189; }
    {
     cl_object v15;
     v15 = ECL_CONS_CDR(v14);
     v5args = v15;
     v14 = ECL_CONS_CAR(v14);
    }
L189:;
    T0 = v14;
   }
   cl_write(9, T0, ECL_SYM("STREAM",1340), v1stream, ECL_SYM("BASE",1223), ecl_make_fixnum(16), ECL_SYM("RADIX",1322), ECL_NIL, ECL_SYM("ESCAPE",1252), ECL_NIL);
L4:;
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v5args;
   cl_env_copy->values[0] = v3;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LATIN_CAPITAL_LETTER_R-FORMAT-DIRECTIVE-EXPANDER */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC47latin_capital_letter_r_format_directive_expander(cl_object v1, cl_object v2)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19;
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
   v3 = ecl_function_dispatch(cl_env_copy,VV[311])(1, v1) /*  FORMAT-DIRECTIVE-COLONP */;
   v4 = ecl_function_dispatch(cl_env_copy,VV[312])(1, v1) /*  FORMAT-DIRECTIVE-ATSIGNP */;
   v5 = ecl_function_dispatch(cl_env_copy,VV[313])(1, v1) /*  FORMAT-DIRECTIVE-PARAMS */;
   {
    cl_object v6;
    v6 = v5;
    {
     cl_object v7param_and_offset;
     cl_object v8offset;
     cl_object v9param;
     {
      cl_object v10;
      v10 = v6;
      {
       cl_object v11;
       v11 = v10;
       if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v10)) { goto L12; }
      {
       cl_object v11;
       v11 = ECL_CONS_CDR(v10);
       v6 = v11;
       v10 = ECL_CONS_CAR(v10);
      }
L12:;
      v7param_and_offset = v10;
     }
     v8offset = ecl_car(v7param_and_offset);
     v9param = ecl_cdr(v7param_and_offset);
     if (!(ecl_eql(v9param,VV[23]))) { goto L20; }
     T2 = L15expand_next_arg(1, v8offset);
     T1 = cl_list(3, ECL_SYM("OR",616), T2, ECL_NIL);
     goto L6;
L20:;
     if (!(ecl_eql(v9param,VV[24]))) { goto L22; }
     cl_set(VV[37],ECL_NIL);
     T1 = VV[68];
     goto L6;
L22:;
     if (!((v9param)==(ECL_NIL))) { goto L26; }
     T1 = ECL_NIL;
     goto L6;
L26:;
     T1 = v9param;
    }
L6:;
    T2 = cl_list(2, VV[92], T1);
    {
     cl_object v7param_and_offset;
     cl_object v8offset;
     cl_object v9param;
     {
      cl_object v10;
      v10 = v6;
      {
       cl_object v11;
       v11 = v10;
       if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v10)) { goto L35; }
      {
       cl_object v11;
       v11 = ECL_CONS_CDR(v10);
       v6 = v11;
       v10 = ECL_CONS_CAR(v10);
      }
L35:;
      v7param_and_offset = v10;
     }
     v8offset = ecl_car(v7param_and_offset);
     v9param = ecl_cdr(v7param_and_offset);
     if (!(ecl_eql(v9param,VV[23]))) { goto L43; }
     T4 = L15expand_next_arg(1, v8offset);
     T3 = cl_list(3, ECL_SYM("OR",616), T4, ecl_make_fixnum(0));
     goto L29;
L43:;
     if (!(ecl_eql(v9param,VV[24]))) { goto L45; }
     cl_set(VV[37],ECL_NIL);
     T3 = VV[68];
     goto L29;
L45:;
     if (!((v9param)==(ECL_NIL))) { goto L49; }
     T3 = ecl_make_fixnum(0);
     goto L29;
L49:;
     T3 = v9param;
    }
L29:;
    T4 = cl_list(2, VV[93], T3);
    {
     cl_object v7param_and_offset;
     cl_object v8offset;
     cl_object v9param;
     {
      cl_object v10;
      v10 = v6;
      {
       cl_object v11;
       v11 = v10;
       if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v10)) { goto L58; }
      {
       cl_object v11;
       v11 = ECL_CONS_CDR(v10);
       v6 = v11;
       v10 = ECL_CONS_CAR(v10);
      }
L58:;
      v7param_and_offset = v10;
     }
     v8offset = ecl_car(v7param_and_offset);
     v9param = ecl_cdr(v7param_and_offset);
     if (!(ecl_eql(v9param,VV[23]))) { goto L66; }
     T6 = L15expand_next_arg(1, v8offset);
     T5 = cl_list(3, ECL_SYM("OR",616), T6, CODE_CHAR(32));
     goto L52;
L66:;
     if (!(ecl_eql(v9param,VV[24]))) { goto L68; }
     cl_set(VV[37],ECL_NIL);
     T5 = VV[68];
     goto L52;
L68:;
     if (!((v9param)==(ECL_NIL))) { goto L72; }
     T5 = CODE_CHAR(32);
     goto L52;
L72:;
     T5 = v9param;
    }
L52:;
    T6 = cl_list(2, VV[94], T5);
    {
     cl_object v7param_and_offset;
     cl_object v8offset;
     cl_object v9param;
     {
      cl_object v10;
      v10 = v6;
      {
       cl_object v11;
       v11 = v10;
       if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v10)) { goto L81; }
      {
       cl_object v11;
       v11 = ECL_CONS_CDR(v10);
       v6 = v11;
       v10 = ECL_CONS_CAR(v10);
      }
L81:;
      v7param_and_offset = v10;
     }
     v8offset = ecl_car(v7param_and_offset);
     v9param = ecl_cdr(v7param_and_offset);
     if (!(ecl_eql(v9param,VV[23]))) { goto L89; }
     T8 = L15expand_next_arg(1, v8offset);
     T7 = cl_list(3, ECL_SYM("OR",616), T8, CODE_CHAR(44));
     goto L75;
L89:;
     if (!(ecl_eql(v9param,VV[24]))) { goto L91; }
     cl_set(VV[37],ECL_NIL);
     T7 = VV[68];
     goto L75;
L91:;
     if (!((v9param)==(ECL_NIL))) { goto L95; }
     T7 = CODE_CHAR(44);
     goto L75;
L95:;
     T7 = v9param;
    }
L75:;
    T8 = cl_list(2, VV[95], T7);
    {
     cl_object v7param_and_offset;
     cl_object v8offset;
     cl_object v9param;
     {
      cl_object v10;
      v10 = v6;
      {
       cl_object v11;
       v11 = v10;
       if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v10)) { goto L104; }
      {
       cl_object v11;
       v11 = ECL_CONS_CDR(v10);
       v6 = v11;
       v10 = ECL_CONS_CAR(v10);
      }
L104:;
      v7param_and_offset = v10;
     }
     v8offset = ecl_car(v7param_and_offset);
     v9param = ecl_cdr(v7param_and_offset);
     if (!(ecl_eql(v9param,VV[23]))) { goto L112; }
     T10 = L15expand_next_arg(1, v8offset);
     T9 = cl_list(3, ECL_SYM("OR",616), T10, ecl_make_fixnum(3));
     goto L98;
L112:;
     if (!(ecl_eql(v9param,VV[24]))) { goto L114; }
     cl_set(VV[37],ECL_NIL);
     T9 = VV[68];
     goto L98;
L114:;
     if (!((v9param)==(ECL_NIL))) { goto L118; }
     T9 = ecl_make_fixnum(3);
     goto L98;
L118:;
     T9 = v9param;
    }
L98:;
    T10 = cl_list(2, VV[96], T9);
    T11 = cl_list(5, T2, T4, T6, T8, T10);
    if (Null(v6)) { goto L122; }
    T13 = ecl_list1(ecl_make_fixnum(5));
    T14 = ecl_caar(v6);
    T12 = cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[70], VV[71], T13, ECL_SYM("OFFSET",1306), T14);
    goto L121;
L122:;
    T12 = ECL_NIL;
L121:;
    {
     cl_object v7n_arg;
     v7n_arg = cl_gensym(0);
     T14 = L15expand_next_arg(0);
     T15 = cl_list(2, v7n_arg, T14);
     T16 = ecl_list1(T15);
     T17 = cl_list(10, VV[85], ECL_SYM("STREAM",801), v7n_arg, v3, v4, VV[92], VV[93], VV[94], VV[95], VV[96]);
     if (Null(v4)) { goto L127; }
     if (Null(v3)) { goto L129; }
     T18 = cl_list(3, VV[97], ECL_SYM("STREAM",801), v7n_arg);
     goto L126;
L129:;
     T18 = cl_list(3, VV[98], ECL_SYM("STREAM",801), v7n_arg);
     goto L126;
L127:;
     if (Null(v3)) { goto L131; }
     T18 = cl_list(3, VV[99], ECL_SYM("STREAM",801), v7n_arg);
     goto L126;
L131:;
     T18 = cl_list(3, VV[100], ECL_SYM("STREAM",801), v7n_arg);
L126:;
     T19 = cl_list(4, ECL_SYM("IF",948), VV[92], T17, T18);
     T13 = cl_list(3, ECL_SYM("LET",479), T16, T19);
    }
    T14 = ecl_list1(T13);
    T15 = ecl_append(T12,T14);
    T0 = cl_listX(3, ECL_SYM("LET",479), T11, T15);
   }
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v2;
   cl_env_copy->values[0] = T0;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA696                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC48__lambda696(cl_object v1stream, cl_object v2, cl_object v3, cl_object v4orig_args, cl_object v5args)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v6;
   cl_object v7;
   cl_object v8;
   v6 = ecl_function_dispatch(cl_env_copy,VV[311])(1, v2) /*  FORMAT-DIRECTIVE-COLONP */;
   v7 = ecl_function_dispatch(cl_env_copy,VV[312])(1, v2) /*  FORMAT-DIRECTIVE-ATSIGNP */;
   v8 = ecl_function_dispatch(cl_env_copy,VV[313])(1, v2) /*  FORMAT-DIRECTIVE-PARAMS */;
   {
    cl_object v9;
    v9 = v8;
    {
     cl_object v10base;
     cl_object v11mincol;
     cl_object v12padchar;
     cl_object v13commachar;
     cl_object v14commainterval;
     {
      cl_object v15param_and_offset;
      cl_object v16offset;
      cl_object v17param;
      {
       cl_object v18;
       v18 = v9;
       {
        cl_object v19;
        v19 = v18;
        if (ecl_unlikely(!ECL_LISTP(v19))) FEtype_error_list(v19);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v18)) { goto L12; }
       {
        cl_object v19;
        v19 = ECL_CONS_CDR(v18);
        v9 = v19;
        v18 = ECL_CONS_CAR(v18);
       }
L12:;
       v15param_and_offset = v18;
      }
      v16offset = ecl_car(v15param_and_offset);
      v17param = ecl_cdr(v15param_and_offset);
      if (!(ecl_eql(v17param,VV[23]))) { goto L20; }
      if (!(v5args==ECL_NIL)) { goto L25; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v16offset);
L25:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L27; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L27:;
      {
       cl_object v18;
       v18 = v5args;
       {
        cl_object v19;
        v19 = v18;
        if (ecl_unlikely(!ECL_LISTP(v19))) FEtype_error_list(v19);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v18)) { goto L33; }
       {
        cl_object v19;
        v19 = ECL_CONS_CDR(v18);
        v5args = v19;
        v18 = ECL_CONS_CAR(v18);
       }
L33:;
       value0 = v18;
      }
      if ((value0)!=ECL_NIL) { goto L23; }
      v10base = ECL_NIL;
      goto L6;
L23:;
      v10base = value0;
      goto L6;
L20:;
      if (!(ecl_eql(v17param,VV[24]))) { goto L39; }
      v10base = ecl_make_fixnum(ecl_length(v5args));
      goto L6;
L39:;
      if (!((v17param)==(ECL_NIL))) { goto L41; }
      v10base = ECL_NIL;
      goto L6;
L41:;
      v10base = v17param;
     }
L6:;
     {
      cl_object v15param_and_offset;
      cl_object v16offset;
      cl_object v17param;
      {
       cl_object v18;
       v18 = v9;
       {
        cl_object v19;
        v19 = v18;
        if (ecl_unlikely(!ECL_LISTP(v19))) FEtype_error_list(v19);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v18)) { goto L50; }
       {
        cl_object v19;
        v19 = ECL_CONS_CDR(v18);
        v9 = v19;
        v18 = ECL_CONS_CAR(v18);
       }
L50:;
       v15param_and_offset = v18;
      }
      v16offset = ecl_car(v15param_and_offset);
      v17param = ecl_cdr(v15param_and_offset);
      if (!(ecl_eql(v17param,VV[23]))) { goto L58; }
      if (!(v5args==ECL_NIL)) { goto L63; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v16offset);
L63:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L65; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L65:;
      {
       cl_object v18;
       v18 = v5args;
       {
        cl_object v19;
        v19 = v18;
        if (ecl_unlikely(!ECL_LISTP(v19))) FEtype_error_list(v19);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v18)) { goto L71; }
       {
        cl_object v19;
        v19 = ECL_CONS_CDR(v18);
        v5args = v19;
        v18 = ECL_CONS_CAR(v18);
       }
L71:;
       value0 = v18;
      }
      if ((value0)!=ECL_NIL) { goto L61; }
      v11mincol = ecl_make_fixnum(0);
      goto L44;
L61:;
      v11mincol = value0;
      goto L44;
L58:;
      if (!(ecl_eql(v17param,VV[24]))) { goto L77; }
      v11mincol = ecl_make_fixnum(ecl_length(v5args));
      goto L44;
L77:;
      if (!((v17param)==(ECL_NIL))) { goto L79; }
      v11mincol = ecl_make_fixnum(0);
      goto L44;
L79:;
      v11mincol = v17param;
     }
L44:;
     {
      cl_object v15param_and_offset;
      cl_object v16offset;
      cl_object v17param;
      {
       cl_object v18;
       v18 = v9;
       {
        cl_object v19;
        v19 = v18;
        if (ecl_unlikely(!ECL_LISTP(v19))) FEtype_error_list(v19);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v18)) { goto L88; }
       {
        cl_object v19;
        v19 = ECL_CONS_CDR(v18);
        v9 = v19;
        v18 = ECL_CONS_CAR(v18);
       }
L88:;
       v15param_and_offset = v18;
      }
      v16offset = ecl_car(v15param_and_offset);
      v17param = ecl_cdr(v15param_and_offset);
      if (!(ecl_eql(v17param,VV[23]))) { goto L96; }
      if (!(v5args==ECL_NIL)) { goto L101; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v16offset);
L101:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L103; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L103:;
      {
       cl_object v18;
       v18 = v5args;
       {
        cl_object v19;
        v19 = v18;
        if (ecl_unlikely(!ECL_LISTP(v19))) FEtype_error_list(v19);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v18)) { goto L109; }
       {
        cl_object v19;
        v19 = ECL_CONS_CDR(v18);
        v5args = v19;
        v18 = ECL_CONS_CAR(v18);
       }
L109:;
       value0 = v18;
      }
      if ((value0)!=ECL_NIL) { goto L99; }
      v12padchar = CODE_CHAR(32);
      goto L82;
L99:;
      v12padchar = value0;
      goto L82;
L96:;
      if (!(ecl_eql(v17param,VV[24]))) { goto L115; }
      v12padchar = ecl_make_fixnum(ecl_length(v5args));
      goto L82;
L115:;
      if (!((v17param)==(ECL_NIL))) { goto L117; }
      v12padchar = CODE_CHAR(32);
      goto L82;
L117:;
      v12padchar = v17param;
     }
L82:;
     {
      cl_object v15param_and_offset;
      cl_object v16offset;
      cl_object v17param;
      {
       cl_object v18;
       v18 = v9;
       {
        cl_object v19;
        v19 = v18;
        if (ecl_unlikely(!ECL_LISTP(v19))) FEtype_error_list(v19);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v18)) { goto L126; }
       {
        cl_object v19;
        v19 = ECL_CONS_CDR(v18);
        v9 = v19;
        v18 = ECL_CONS_CAR(v18);
       }
L126:;
       v15param_and_offset = v18;
      }
      v16offset = ecl_car(v15param_and_offset);
      v17param = ecl_cdr(v15param_and_offset);
      if (!(ecl_eql(v17param,VV[23]))) { goto L134; }
      if (!(v5args==ECL_NIL)) { goto L139; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v16offset);
L139:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L141; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L141:;
      {
       cl_object v18;
       v18 = v5args;
       {
        cl_object v19;
        v19 = v18;
        if (ecl_unlikely(!ECL_LISTP(v19))) FEtype_error_list(v19);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v18)) { goto L147; }
       {
        cl_object v19;
        v19 = ECL_CONS_CDR(v18);
        v5args = v19;
        v18 = ECL_CONS_CAR(v18);
       }
L147:;
       value0 = v18;
      }
      if ((value0)!=ECL_NIL) { goto L137; }
      v13commachar = CODE_CHAR(44);
      goto L120;
L137:;
      v13commachar = value0;
      goto L120;
L134:;
      if (!(ecl_eql(v17param,VV[24]))) { goto L153; }
      v13commachar = ecl_make_fixnum(ecl_length(v5args));
      goto L120;
L153:;
      if (!((v17param)==(ECL_NIL))) { goto L155; }
      v13commachar = CODE_CHAR(44);
      goto L120;
L155:;
      v13commachar = v17param;
     }
L120:;
     {
      cl_object v15param_and_offset;
      cl_object v16offset;
      cl_object v17param;
      {
       cl_object v18;
       v18 = v9;
       {
        cl_object v19;
        v19 = v18;
        if (ecl_unlikely(!ECL_LISTP(v19))) FEtype_error_list(v19);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v18)) { goto L164; }
       {
        cl_object v19;
        v19 = ECL_CONS_CDR(v18);
        v9 = v19;
        v18 = ECL_CONS_CAR(v18);
       }
L164:;
       v15param_and_offset = v18;
      }
      v16offset = ecl_car(v15param_and_offset);
      v17param = ecl_cdr(v15param_and_offset);
      if (!(ecl_eql(v17param,VV[23]))) { goto L172; }
      if (!(v5args==ECL_NIL)) { goto L177; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v16offset);
L177:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L179; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L179:;
      {
       cl_object v18;
       v18 = v5args;
       {
        cl_object v19;
        v19 = v18;
        if (ecl_unlikely(!ECL_LISTP(v19))) FEtype_error_list(v19);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v18)) { goto L185; }
       {
        cl_object v19;
        v19 = ECL_CONS_CDR(v18);
        v5args = v19;
        v18 = ECL_CONS_CAR(v18);
       }
L185:;
       value0 = v18;
      }
      if ((value0)!=ECL_NIL) { goto L175; }
      v14commainterval = ecl_make_fixnum(3);
      goto L158;
L175:;
      v14commainterval = value0;
      goto L158;
L172:;
      if (!(ecl_eql(v17param,VV[24]))) { goto L191; }
      v14commainterval = ecl_make_fixnum(ecl_length(v5args));
      goto L158;
L191:;
      if (!((v17param)==(ECL_NIL))) { goto L193; }
      v14commainterval = ecl_make_fixnum(3);
      goto L158;
L193:;
      v14commainterval = v17param;
     }
L158:;
     if (Null(v9)) { goto L196; }
     T0 = ecl_list1(ecl_make_fixnum(5));
     T1 = ecl_caar(v9);
     cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[70], VV[71], T0, ECL_SYM("OFFSET",1306), T1);
L196:;
     if (Null(v10base)) { goto L198; }
     if (!(v5args==ECL_NIL)) { goto L200; }
     cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57]);
L200:;
     if (Null(ecl_symbol_value(VV[34]))) { goto L202; }
     ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L202:;
     {
      cl_object v15;
      v15 = v5args;
      {
       cl_object v16;
       v16 = v15;
       if (ecl_unlikely(!ECL_LISTP(v16))) FEtype_error_list(v16);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v15)) { goto L209; }
      {
       cl_object v16;
       v16 = ECL_CONS_CDR(v15);
       v5args = v16;
       v15 = ECL_CONS_CAR(v15);
      }
L209:;
      T0 = v15;
     }
     L36format_print_integer(v1stream, T0, v6, v7, v10base, v11mincol, v12padchar, v13commachar, v14commainterval);
     goto L4;
L198:;
     if (Null(v7)) { goto L215; }
     if (Null(v6)) { goto L217; }
     if (!(v5args==ECL_NIL)) { goto L219; }
     cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57]);
L219:;
     if (Null(ecl_symbol_value(VV[34]))) { goto L221; }
     ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L221:;
     {
      cl_object v15;
      v15 = v5args;
      {
       cl_object v16;
       v16 = v15;
       if (ecl_unlikely(!ECL_LISTP(v16))) FEtype_error_list(v16);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v15)) { goto L228; }
      {
       cl_object v16;
       v16 = ECL_CONS_CDR(v15);
       v5args = v16;
       v15 = ECL_CONS_CAR(v15);
      }
L228:;
      T0 = v15;
     }
     L53format_print_old_roman(v1stream, T0);
     goto L4;
L217:;
     if (!(v5args==ECL_NIL)) { goto L234; }
     cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57]);
L234:;
     if (Null(ecl_symbol_value(VV[34]))) { goto L236; }
     ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L236:;
     {
      cl_object v15;
      v15 = v5args;
      {
       cl_object v16;
       v16 = v15;
       if (ecl_unlikely(!ECL_LISTP(v16))) FEtype_error_list(v16);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v15)) { goto L243; }
      {
       cl_object v16;
       v16 = ECL_CONS_CDR(v15);
       v5args = v16;
       v15 = ECL_CONS_CAR(v15);
      }
L243:;
      T0 = v15;
     }
     L54format_print_roman(v1stream, T0);
     goto L4;
L215:;
     if (Null(v6)) { goto L249; }
     if (!(v5args==ECL_NIL)) { goto L251; }
     cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57]);
L251:;
     if (Null(ecl_symbol_value(VV[34]))) { goto L253; }
     ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L253:;
     {
      cl_object v15;
      v15 = v5args;
      {
       cl_object v16;
       v16 = v15;
       if (ecl_unlikely(!ECL_LISTP(v16))) FEtype_error_list(v16);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v15)) { goto L260; }
      {
       cl_object v16;
       v16 = ECL_CONS_CDR(v15);
       v5args = v16;
       v15 = ECL_CONS_CAR(v15);
      }
L260:;
      T0 = v15;
     }
     L52format_print_ordinal(v1stream, T0);
     goto L4;
L249:;
     if (!(v5args==ECL_NIL)) { goto L266; }
     cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57]);
L266:;
     if (Null(ecl_symbol_value(VV[34]))) { goto L268; }
     ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L268:;
     {
      cl_object v15;
      v15 = v5args;
      {
       cl_object v16;
       v16 = v15;
       if (ecl_unlikely(!ECL_LISTP(v16))) FEtype_error_list(v16);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v15)) { goto L275; }
      {
       cl_object v16;
       v16 = ECL_CONS_CDR(v15);
       v5args = v16;
       v15 = ECL_CONS_CAR(v15);
      }
L275:;
      T0 = v15;
     }
     L50format_print_cardinal(v1stream, T0);
    }
   }
L4:;
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v5args;
   cl_env_copy->values[0] = v3;
   return cl_env_copy->values[0];
  }
 }
}
/*      function definition for FORMAT-PRINT-SMALL-CARDINAL           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L49format_print_small_cardinal(cl_object v1stream, cl_object v2n)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v4;                                  /*  HUNDREDS        */
   cl_object v5;                                  /*  REM             */
   value0 = ecl_truncate2(v2n,ecl_make_fixnum(100));
   {
    v4 = value0;
    v5 = cl_env_copy->values[1];
   }
   if (!(ecl_plusp(v4))) { goto L2; }
   T0 = ecl_aref1(ecl_symbol_value(VV[101]),ecl_to_size(v4));
   cl_write_string(2, T0, v1stream);
   cl_write_string(2, VV[107], v1stream);
   if (!(ecl_plusp(v5))) { goto L2; }
   cl_write_char(2, CODE_CHAR(32), v1stream);
L2:;
   if (!(ecl_plusp(v5))) { goto L7; }
   {
    cl_object v7;                                 /*  TENS            */
    cl_object v8;                                 /*  ONES            */
    value0 = ecl_truncate2(v5,ecl_make_fixnum(10));
    {
     v7 = value0;
     v8 = cl_env_copy->values[1];
    }
    if (!(ecl_lower(ecl_make_fixnum(1),v7))) { goto L10; }
    T0 = ecl_aref1(ecl_symbol_value(VV[102]),ecl_to_size(v7));
    cl_write_string(2, T0, v1stream);
    if (!(ecl_plusp(v8))) { goto L13; }
    cl_write_char(2, CODE_CHAR(45), v1stream);
    T0 = ecl_aref1(ecl_symbol_value(VV[101]),ecl_to_size(v8));
    value0 = cl_write_string(2, T0, v1stream);
    return value0;
L13:;
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
L10:;
    if (!(ecl_number_equalp(v7,ecl_make_fixnum(1)))) { goto L16; }
    T0 = ecl_aref1(ecl_symbol_value(VV[103]),ecl_to_size(v8));
    value0 = cl_write_string(2, T0, v1stream);
    return value0;
L16:;
    if (!(ecl_plusp(v8))) { goto L18; }
    T0 = ecl_aref1(ecl_symbol_value(VV[101]),ecl_to_size(v8));
    value0 = cl_write_string(2, T0, v1stream);
    return value0;
L18:;
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
   }
L7:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for FORMAT-PRINT-CARDINAL                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L50format_print_cardinal(cl_object v1stream, cl_object v2n)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ecl_minusp(v2n))) { goto L1; }
  cl_write_string(2, VV[108], v1stream);
  T0 = ecl_negate(v2n);
  value0 = L51format_print_cardinal_aux(v1stream, T0, ecl_make_fixnum(0), v2n);
  return value0;
L1:;
  if (!(ecl_zerop(v2n))) { goto L4; }
  value0 = cl_write_string(2, VV[109], v1stream);
  return value0;
L4:;
  value0 = L51format_print_cardinal_aux(v1stream, v2n, ecl_make_fixnum(0), v2n);
  return value0;
 }
}
/*      function definition for FORMAT-PRINT-CARDINAL-AUX             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L51format_print_cardinal_aux(cl_object v1stream, cl_object v2n, cl_object v3period, cl_object v4err)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v6;                                  /*  BEYOND          */
   cl_object v7;                                  /*  HERE            */
   value0 = ecl_truncate2(v2n,ecl_make_fixnum(1000));
   {
    v6 = value0;
    v7 = cl_env_copy->values[1];
   }
   if (ecl_lowereq(v3period,ecl_make_fixnum(20))) { goto L2; }
   cl_error(2, VV[110], v4err);
L2:;
   if (ecl_zerop(v6)) { goto L4; }
   T0 = ecl_one_plus(v3period);
   L51format_print_cardinal_aux(v1stream, v6, T0, v4err);
L4:;
   if (ecl_zerop(v7)) { goto L6; }
   if (ecl_zerop(v6)) { goto L8; }
   cl_write_char(2, CODE_CHAR(32), v1stream);
L8:;
   L49format_print_small_cardinal(v1stream, v7);
   T0 = ecl_aref1(ecl_symbol_value(VV[104]),ecl_to_size(v3period));
   value0 = cl_write_string(2, T0, v1stream);
   return value0;
L6:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for FORMAT-PRINT-ORDINAL                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L52format_print_ordinal(cl_object v1stream, cl_object v2n)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ecl_minusp(v2n))) { goto L1; }
  cl_write_string(2, VV[108], v1stream);
L1:;
  {
   cl_object v3number;
   v3number = cl_abs(v2n);
   {
    cl_object v5;                                 /*  TOP             */
    cl_object v6;                                 /*  BOT             */
    value0 = ecl_truncate2(v3number,ecl_make_fixnum(100));
    {
     v5 = value0;
     v6 = cl_env_copy->values[1];
    }
    if (ecl_zerop(v5)) { goto L5; }
    T0 = ecl_minus(v3number,v6);
    L50format_print_cardinal(v1stream, T0);
L5:;
    if (!(ecl_plusp(v5))) { goto L7; }
    if (!(ecl_plusp(v6))) { goto L7; }
    cl_write_char(2, CODE_CHAR(32), v1stream);
L7:;
    {
     cl_object v8;                                /*  TENS            */
     cl_object v9;                                /*  ONES            */
     value0 = ecl_truncate2(v6,ecl_make_fixnum(10));
     {
      v8 = value0;
      v9 = cl_env_copy->values[1];
     }
     if (!(ecl_number_equalp(v6,ecl_make_fixnum(12)))) { goto L11; }
     value0 = cl_write_string(2, VV[111], v1stream);
     return value0;
L11:;
     if (!(ecl_number_equalp(v8,ecl_make_fixnum(1)))) { goto L13; }
     T0 = ecl_aref1(ecl_symbol_value(VV[103]),ecl_to_size(v9));
     cl_write_string(2, T0, v1stream);
     value0 = cl_write_string(2, VV[112], v1stream);
     return value0;
L13:;
     if (!(ecl_zerop(v8))) { goto L16; }
     if (!(ecl_plusp(v9))) { goto L16; }
     T0 = ecl_aref1(ecl_symbol_value(VV[105]),ecl_to_size(v9));
     value0 = cl_write_string(2, T0, v1stream);
     return value0;
L16:;
     if (!(ecl_zerop(v9))) { goto L19; }
     if (!(ecl_plusp(v8))) { goto L19; }
     T0 = ecl_aref1(ecl_symbol_value(VV[106]),ecl_to_size(v8));
     value0 = cl_write_string(2, T0, v1stream);
     return value0;
L19:;
     if (!(ecl_plusp(v6))) { goto L22; }
     T0 = ecl_aref1(ecl_symbol_value(VV[102]),ecl_to_size(v8));
     cl_write_string(2, T0, v1stream);
     cl_write_char(2, CODE_CHAR(45), v1stream);
     T0 = ecl_aref1(ecl_symbol_value(VV[105]),ecl_to_size(v9));
     value0 = cl_write_string(2, T0, v1stream);
     return value0;
L22:;
     if (!(ecl_plusp(v3number))) { goto L26; }
     value0 = cl_write_string(2, VV[112], v1stream);
     return value0;
L26:;
     value0 = cl_write_string(2, VV[113], v1stream);
     return value0;
    }
   }
  }
 }
}
/*      function definition for FORMAT-PRINT-OLD-ROMAN                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L53format_print_old_roman(cl_object v1stream, cl_object v2n)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if ((cl_L(3, ecl_make_fixnum(0), v2n, ecl_make_fixnum(5000)))!=ECL_NIL) { goto L1; }
  cl_error(2, VV[114], v2n);
L1:;
  {
   cl_object v3char_list;
   cl_object v4val_list;
   cl_object v5cur_char;
   cl_object v6cur_val;
   cl_object v7start;
   v3char_list = VV[115];
   v4val_list = VV[116];
   v5cur_char = CODE_CHAR(77);
   v6cur_val = ecl_make_fixnum(1000);
   v7start = v2n;
   goto L10;
L9:;
   {
    cl_object v8;
    v8 = ecl_cdr(v3char_list);
    {
     cl_object v9;
     v9 = ecl_cdr(v4val_list);
     {
      cl_object v10;
      v10 = ecl_car(v3char_list);
      {
       cl_object v11;
       v11 = ecl_car(v4val_list);
       {
        cl_object v12i;
        v12i = v7start;
        goto L21;
L20:;
        cl_write_char(2, v5cur_char, v1stream);
        v12i = ecl_minus(v12i,v6cur_val);
L21:;
        if (ecl_lower(v12i,v6cur_val)) { goto L26; }
        goto L20;
L26:;
        v7start = v12i;
       }
       v6cur_val = v11;
       v5cur_char = v10;
       v4val_list = v9;
       v3char_list = v8;
      }
     }
    }
   }
L10:;
   if (ecl_zerop(v7start)) { goto L28; }
   goto L9;
L28:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for FORMAT-PRINT-ROMAN                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L54format_print_roman(cl_object v1stream, cl_object v2n)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if ((cl_L(3, ecl_make_fixnum(0), v2n, ecl_make_fixnum(4000)))!=ECL_NIL) { goto L1; }
  cl_error(2, VV[117], v2n);
L1:;
  {
   cl_object v3char_list;
   cl_object v4val_list;
   cl_object v5sub_chars;
   cl_object v6sub_val;
   cl_object v7cur_char;
   cl_object v8cur_val;
   cl_object v9cur_sub_char;
   cl_object v10cur_sub_val;
   cl_object v11start;
   v3char_list = VV[115];
   v4val_list = VV[116];
   v5sub_chars = VV[118];
   v6sub_val = VV[119];
   v7cur_char = CODE_CHAR(77);
   v8cur_val = ecl_make_fixnum(1000);
   v9cur_sub_char = CODE_CHAR(67);
   v10cur_sub_val = ecl_make_fixnum(100);
   v11start = v2n;
   goto L14;
L13:;
   {
    cl_object v12;
    v12 = ecl_cdr(v3char_list);
    {
     cl_object v13;
     v13 = ecl_cdr(v4val_list);
     {
      cl_object v14;
      v14 = ecl_cdr(v5sub_chars);
      {
       cl_object v15;
       v15 = ecl_cdr(v6sub_val);
       {
        cl_object v16;
        v16 = ecl_car(v3char_list);
        {
         cl_object v17;
         v17 = ecl_car(v4val_list);
         {
          cl_object v18;
          v18 = ecl_car(v5sub_chars);
          {
          cl_object v19;
          v19 = ecl_car(v6sub_val);
          {
          cl_object v20i;
          v20i = v11start;
          goto L29;
L28:;
          cl_write_char(2, v7cur_char, v1stream);
          v20i = ecl_minus(v20i,v8cur_val);
L29:;
          if (ecl_lower(v20i,v8cur_val)) { goto L34; }
          goto L28;
L34:;
          T0 = ecl_minus(v8cur_val,v10cur_sub_val);
          if (!(ecl_lowereq(T0,v20i))) { goto L36; }
          cl_write_char(2, v9cur_sub_char, v1stream);
          cl_write_char(2, v7cur_char, v1stream);
          T0 = ecl_minus(v8cur_val,v10cur_sub_val);
          v11start = ecl_minus(v20i,T0);
          goto L25;
L36:;
          v11start = v20i;
          }
L25:;
          v10cur_sub_val = v19;
          v9cur_sub_char = v18;
          v8cur_val = v17;
          v7cur_char = v16;
          v6sub_val = v15;
          v5sub_chars = v14;
          v4val_list = v13;
          v3char_list = v12;
          }
         }
        }
       }
      }
     }
    }
   }
L14:;
   if (ecl_zerop(v11start)) { goto L40; }
   goto L13;
L40:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function LATIN_CAPITAL_LETTER_P-FORMAT-DIRECTIVE-EXPANDER */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC55latin_capital_letter_p_format_directive_expander(cl_object v1, cl_object v2)
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
   cl_object v6;
   v3 = ecl_function_dispatch(cl_env_copy,VV[311])(1, v1) /*  FORMAT-DIRECTIVE-COLONP */;
   v4 = ecl_function_dispatch(cl_env_copy,VV[312])(1, v1) /*  FORMAT-DIRECTIVE-ATSIGNP */;
   v5 = ecl_function_dispatch(cl_env_copy,VV[313])(1, v1) /*  FORMAT-DIRECTIVE-PARAMS */;
   v6 = ecl_function_dispatch(cl_env_copy,VV[300])(1, v1) /*  FORMAT-DIRECTIVE-END */;
   if (Null(v5)) { goto L6; }
   T1 = ecl_caar(v5);
   cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[79], ECL_SYM("OFFSET",1306), T1);
L6:;
   {
    cl_object v7arg;
    if ((v3)!=ECL_NIL) { goto L9; }
    v7arg = L15expand_next_arg(0);
    goto L8;
L9:;
    if (Null(ecl_symbol_value(VV[38]))) { goto L11; }
    T1 = ecl_one_minus(v6);
    T2 = cl_list(6, ECL_SYM("ERROR",339), VV[47], VV[19], VV[121], ECL_SYM("OFFSET",1306), T1);
    v7arg = cl_list(4, ECL_SYM("IF",948), VV[120], T2, VV[122]);
    goto L8;
L11:;
    if (Null(ecl_symbol_value(VV[37]))) { goto L13; }
    if ((ecl_symbol_value(VV[39]))!=ECL_NIL) { goto L15; }
    cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[121]);
L15:;
    v7arg = ecl_caar(ecl_symbol_value(VV[39]));
    goto L8;
L13:;
    cl_env_copy->values[0] = ECL_NIL;
    cl_env_copy->nvalues = 1;
    cl_throw(VV[46]);
L8:;
    if (Null(v4)) { goto L18; }
    T1 = cl_list(3, ECL_SYM("EQL",336), v7arg, ecl_make_fixnum(1));
    T2 = cl_listX(3, ECL_SYM("IF",948), T1, VV[123]);
    T0 = cl_list(3, ECL_SYM("WRITE-STRING",924), T2, ECL_SYM("STREAM",801));
    goto L5;
L18:;
    T1 = cl_list(3, ECL_SYM("EQL",336), v7arg, ecl_make_fixnum(1));
    T0 = cl_list(3, ECL_SYM("UNLESS",885), T1, VV[124]);
   }
L5:;
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v2;
   cl_env_copy->values[0] = T0;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA772                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC56__lambda772(cl_object v1stream, cl_object v2, cl_object v3, cl_object v4orig_args, cl_object v5args)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v6;
   cl_object v7;
   cl_object v8;
   v6 = ecl_function_dispatch(cl_env_copy,VV[311])(1, v2) /*  FORMAT-DIRECTIVE-COLONP */;
   v7 = ecl_function_dispatch(cl_env_copy,VV[312])(1, v2) /*  FORMAT-DIRECTIVE-ATSIGNP */;
   v8 = ecl_function_dispatch(cl_env_copy,VV[313])(1, v2) /*  FORMAT-DIRECTIVE-PARAMS */;
   if (Null(v8)) { goto L5; }
   T0 = ecl_list1(ecl_make_fixnum(0));
   T1 = ecl_caar(v8);
   cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[70], VV[71], T0, ECL_SYM("OFFSET",1306), T1);
L5:;
   {
    cl_object v9arg;
    if (Null(v6)) { goto L8; }
    if (!((v4orig_args)==(v5args))) { goto L10; }
    v9arg = cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[121]);
    goto L7;
L10:;
    {
     cl_object v10arg_ptr;
     v10arg_ptr = v4orig_args;
     goto L15;
L14:;
     v10arg_ptr = ecl_cdr(v10arg_ptr);
L15:;
     T0 = ecl_cdr(v10arg_ptr);
     if ((T0)==(v5args)) { goto L19; }
     goto L14;
L19:;
     v9arg = ecl_car(v10arg_ptr);
     goto L7;
    }
L8:;
    if (!(v5args==ECL_NIL)) { goto L21; }
    cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57]);
L21:;
    if (Null(ecl_symbol_value(VV[34]))) { goto L23; }
    ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L23:;
    {
     cl_object v11;
     v11 = v5args;
     {
      cl_object v12;
      v12 = v11;
      if (ecl_unlikely(!ECL_LISTP(v12))) FEtype_error_list(v12);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
     }
     if (Null(v11)) { goto L29; }
     {
      cl_object v12;
      v12 = ECL_CONS_CDR(v11);
      v5args = v12;
      v11 = ECL_CONS_CAR(v11);
     }
L29:;
     v9arg = v11;
    }
L7:;
    if (Null(v7)) { goto L35; }
    if (!((v9arg)==(ecl_make_fixnum(1)))) { goto L38; }
    T0 = VV[125];
    goto L37;
L38:;
    T0 = VV[126];
L37:;
    cl_write_string(2, T0, v1stream);
    goto L4;
L35:;
    if ((v9arg)==(ecl_make_fixnum(1))) { goto L4; }
    cl_write_char(2, CODE_CHAR(115), v1stream);
   }
L4:;
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v5args;
   cl_env_copy->values[0] = v3;
   return cl_env_copy->values[0];
  }
 }
}
/*      function definition for DECIMAL-STRING                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L57decimal_string(cl_object v1n)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_write_to_string(7, v1n, ECL_SYM("BASE",1223), ecl_make_fixnum(10), ECL_SYM("RADIX",1322), ECL_NIL, ECL_SYM("ESCAPE",1252), ECL_NIL);
  return value0;
 }
}
/*      local function LATIN_CAPITAL_LETTER_F-FORMAT-DIRECTIVE-EXPANDER */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC58latin_capital_letter_f_format_directive_expander(cl_object v1, cl_object v2)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16;
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
   v3 = ecl_function_dispatch(cl_env_copy,VV[311])(1, v1) /*  FORMAT-DIRECTIVE-COLONP */;
   v4 = ecl_function_dispatch(cl_env_copy,VV[312])(1, v1) /*  FORMAT-DIRECTIVE-ATSIGNP */;
   v5 = ecl_function_dispatch(cl_env_copy,VV[313])(1, v1) /*  FORMAT-DIRECTIVE-PARAMS */;
   if (Null(v3)) { goto L4; }
   cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[127]);
L4:;
   {
    cl_object v6;
    v6 = v5;
    {
     cl_object v7param_and_offset;
     cl_object v8offset;
     cl_object v9param;
     {
      cl_object v10;
      v10 = v6;
      {
       cl_object v11;
       v11 = v10;
       if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v10)) { goto L14; }
      {
       cl_object v11;
       v11 = ECL_CONS_CDR(v10);
       v6 = v11;
       v10 = ECL_CONS_CAR(v10);
      }
L14:;
      v7param_and_offset = v10;
     }
     v8offset = ecl_car(v7param_and_offset);
     v9param = ecl_cdr(v7param_and_offset);
     if (!(ecl_eql(v9param,VV[23]))) { goto L22; }
     T2 = L15expand_next_arg(1, v8offset);
     T1 = cl_list(3, ECL_SYM("OR",616), T2, ECL_NIL);
     goto L8;
L22:;
     if (!(ecl_eql(v9param,VV[24]))) { goto L24; }
     cl_set(VV[37],ECL_NIL);
     T1 = VV[68];
     goto L8;
L24:;
     if (!((v9param)==(ECL_NIL))) { goto L28; }
     T1 = ECL_NIL;
     goto L8;
L28:;
     T1 = v9param;
    }
L8:;
    T2 = cl_list(2, VV[128], T1);
    {
     cl_object v7param_and_offset;
     cl_object v8offset;
     cl_object v9param;
     {
      cl_object v10;
      v10 = v6;
      {
       cl_object v11;
       v11 = v10;
       if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v10)) { goto L37; }
      {
       cl_object v11;
       v11 = ECL_CONS_CDR(v10);
       v6 = v11;
       v10 = ECL_CONS_CAR(v10);
      }
L37:;
      v7param_and_offset = v10;
     }
     v8offset = ecl_car(v7param_and_offset);
     v9param = ecl_cdr(v7param_and_offset);
     if (!(ecl_eql(v9param,VV[23]))) { goto L45; }
     T4 = L15expand_next_arg(1, v8offset);
     T3 = cl_list(3, ECL_SYM("OR",616), T4, ECL_NIL);
     goto L31;
L45:;
     if (!(ecl_eql(v9param,VV[24]))) { goto L47; }
     cl_set(VV[37],ECL_NIL);
     T3 = VV[68];
     goto L31;
L47:;
     if (!((v9param)==(ECL_NIL))) { goto L51; }
     T3 = ECL_NIL;
     goto L31;
L51:;
     T3 = v9param;
    }
L31:;
    T4 = cl_list(2, VV[129], T3);
    {
     cl_object v7param_and_offset;
     cl_object v8offset;
     cl_object v9param;
     {
      cl_object v10;
      v10 = v6;
      {
       cl_object v11;
       v11 = v10;
       if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v10)) { goto L60; }
      {
       cl_object v11;
       v11 = ECL_CONS_CDR(v10);
       v6 = v11;
       v10 = ECL_CONS_CAR(v10);
      }
L60:;
      v7param_and_offset = v10;
     }
     v8offset = ecl_car(v7param_and_offset);
     v9param = ecl_cdr(v7param_and_offset);
     if (!(ecl_eql(v9param,VV[23]))) { goto L68; }
     T6 = L15expand_next_arg(1, v8offset);
     T5 = cl_list(3, ECL_SYM("OR",616), T6, ecl_make_fixnum(0));
     goto L54;
L68:;
     if (!(ecl_eql(v9param,VV[24]))) { goto L70; }
     cl_set(VV[37],ECL_NIL);
     T5 = VV[68];
     goto L54;
L70:;
     if (!((v9param)==(ECL_NIL))) { goto L74; }
     T5 = ecl_make_fixnum(0);
     goto L54;
L74:;
     T5 = v9param;
    }
L54:;
    T6 = cl_list(2, VV[130], T5);
    {
     cl_object v7param_and_offset;
     cl_object v8offset;
     cl_object v9param;
     {
      cl_object v10;
      v10 = v6;
      {
       cl_object v11;
       v11 = v10;
       if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v10)) { goto L83; }
      {
       cl_object v11;
       v11 = ECL_CONS_CDR(v10);
       v6 = v11;
       v10 = ECL_CONS_CAR(v10);
      }
L83:;
      v7param_and_offset = v10;
     }
     v8offset = ecl_car(v7param_and_offset);
     v9param = ecl_cdr(v7param_and_offset);
     if (!(ecl_eql(v9param,VV[23]))) { goto L91; }
     T8 = L15expand_next_arg(1, v8offset);
     T7 = cl_list(3, ECL_SYM("OR",616), T8, ECL_NIL);
     goto L77;
L91:;
     if (!(ecl_eql(v9param,VV[24]))) { goto L93; }
     cl_set(VV[37],ECL_NIL);
     T7 = VV[68];
     goto L77;
L93:;
     if (!((v9param)==(ECL_NIL))) { goto L97; }
     T7 = ECL_NIL;
     goto L77;
L97:;
     T7 = v9param;
    }
L77:;
    T8 = cl_list(2, VV[131], T7);
    {
     cl_object v7param_and_offset;
     cl_object v8offset;
     cl_object v9param;
     {
      cl_object v10;
      v10 = v6;
      {
       cl_object v11;
       v11 = v10;
       if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v10)) { goto L106; }
      {
       cl_object v11;
       v11 = ECL_CONS_CDR(v10);
       v6 = v11;
       v10 = ECL_CONS_CAR(v10);
      }
L106:;
      v7param_and_offset = v10;
     }
     v8offset = ecl_car(v7param_and_offset);
     v9param = ecl_cdr(v7param_and_offset);
     if (!(ecl_eql(v9param,VV[23]))) { goto L114; }
     T10 = L15expand_next_arg(1, v8offset);
     T9 = cl_list(3, ECL_SYM("OR",616), T10, CODE_CHAR(32));
     goto L100;
L114:;
     if (!(ecl_eql(v9param,VV[24]))) { goto L116; }
     cl_set(VV[37],ECL_NIL);
     T9 = VV[68];
     goto L100;
L116:;
     if (!((v9param)==(ECL_NIL))) { goto L120; }
     T9 = CODE_CHAR(32);
     goto L100;
L120:;
     T9 = v9param;
    }
L100:;
    T10 = cl_list(2, VV[132], T9);
    T11 = cl_list(5, T2, T4, T6, T8, T10);
    if (Null(v6)) { goto L124; }
    T13 = ecl_list1(ecl_make_fixnum(5));
    T14 = ecl_caar(v6);
    T12 = cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[70], VV[71], T13, ECL_SYM("OFFSET",1306), T14);
    goto L123;
L124:;
    T12 = ECL_NIL;
L123:;
    T13 = L15expand_next_arg(0);
    T14 = cl_list(9, VV[133], ECL_SYM("STREAM",801), T13, VV[128], VV[129], VV[130], VV[131], VV[132], v4);
    T15 = ecl_list1(T14);
    T16 = ecl_append(T12,T15);
    T0 = cl_listX(3, ECL_SYM("LET",479), T11, T16);
   }
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v2;
   cl_env_copy->values[0] = T0;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA824                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC59__lambda824(cl_object v1stream, cl_object v2, cl_object v3, cl_object v4orig_args, cl_object v5args)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v6;
   cl_object v7;
   cl_object v8;
   v6 = ecl_function_dispatch(cl_env_copy,VV[311])(1, v2) /*  FORMAT-DIRECTIVE-COLONP */;
   v7 = ecl_function_dispatch(cl_env_copy,VV[312])(1, v2) /*  FORMAT-DIRECTIVE-ATSIGNP */;
   v8 = ecl_function_dispatch(cl_env_copy,VV[313])(1, v2) /*  FORMAT-DIRECTIVE-PARAMS */;
   if (Null(v6)) { goto L4; }
   cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[127]);
L4:;
   {
    cl_object v9;
    v9 = v8;
    {
     cl_object v10w;
     cl_object v11d;
     cl_object v12k;
     cl_object v13ovf;
     cl_object v14pad;
     {
      cl_object v15param_and_offset;
      cl_object v16offset;
      cl_object v17param;
      {
       cl_object v18;
       v18 = v9;
       {
        cl_object v19;
        v19 = v18;
        if (ecl_unlikely(!ECL_LISTP(v19))) FEtype_error_list(v19);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v18)) { goto L14; }
       {
        cl_object v19;
        v19 = ECL_CONS_CDR(v18);
        v9 = v19;
        v18 = ECL_CONS_CAR(v18);
       }
L14:;
       v15param_and_offset = v18;
      }
      v16offset = ecl_car(v15param_and_offset);
      v17param = ecl_cdr(v15param_and_offset);
      if (!(ecl_eql(v17param,VV[23]))) { goto L22; }
      if (!(v5args==ECL_NIL)) { goto L27; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v16offset);
L27:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L29; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L29:;
      {
       cl_object v18;
       v18 = v5args;
       {
        cl_object v19;
        v19 = v18;
        if (ecl_unlikely(!ECL_LISTP(v19))) FEtype_error_list(v19);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v18)) { goto L35; }
       {
        cl_object v19;
        v19 = ECL_CONS_CDR(v18);
        v5args = v19;
        v18 = ECL_CONS_CAR(v18);
       }
L35:;
       value0 = v18;
      }
      if ((value0)!=ECL_NIL) { goto L25; }
      v10w = ECL_NIL;
      goto L8;
L25:;
      v10w = value0;
      goto L8;
L22:;
      if (!(ecl_eql(v17param,VV[24]))) { goto L41; }
      v10w = ecl_make_fixnum(ecl_length(v5args));
      goto L8;
L41:;
      if (!((v17param)==(ECL_NIL))) { goto L43; }
      v10w = ECL_NIL;
      goto L8;
L43:;
      v10w = v17param;
     }
L8:;
     {
      cl_object v15param_and_offset;
      cl_object v16offset;
      cl_object v17param;
      {
       cl_object v18;
       v18 = v9;
       {
        cl_object v19;
        v19 = v18;
        if (ecl_unlikely(!ECL_LISTP(v19))) FEtype_error_list(v19);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v18)) { goto L52; }
       {
        cl_object v19;
        v19 = ECL_CONS_CDR(v18);
        v9 = v19;
        v18 = ECL_CONS_CAR(v18);
       }
L52:;
       v15param_and_offset = v18;
      }
      v16offset = ecl_car(v15param_and_offset);
      v17param = ecl_cdr(v15param_and_offset);
      if (!(ecl_eql(v17param,VV[23]))) { goto L60; }
      if (!(v5args==ECL_NIL)) { goto L65; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v16offset);
L65:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L67; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L67:;
      {
       cl_object v18;
       v18 = v5args;
       {
        cl_object v19;
        v19 = v18;
        if (ecl_unlikely(!ECL_LISTP(v19))) FEtype_error_list(v19);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v18)) { goto L73; }
       {
        cl_object v19;
        v19 = ECL_CONS_CDR(v18);
        v5args = v19;
        v18 = ECL_CONS_CAR(v18);
       }
L73:;
       value0 = v18;
      }
      if ((value0)!=ECL_NIL) { goto L63; }
      v11d = ECL_NIL;
      goto L46;
L63:;
      v11d = value0;
      goto L46;
L60:;
      if (!(ecl_eql(v17param,VV[24]))) { goto L79; }
      v11d = ecl_make_fixnum(ecl_length(v5args));
      goto L46;
L79:;
      if (!((v17param)==(ECL_NIL))) { goto L81; }
      v11d = ECL_NIL;
      goto L46;
L81:;
      v11d = v17param;
     }
L46:;
     {
      cl_object v15param_and_offset;
      cl_object v16offset;
      cl_object v17param;
      {
       cl_object v18;
       v18 = v9;
       {
        cl_object v19;
        v19 = v18;
        if (ecl_unlikely(!ECL_LISTP(v19))) FEtype_error_list(v19);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v18)) { goto L90; }
       {
        cl_object v19;
        v19 = ECL_CONS_CDR(v18);
        v9 = v19;
        v18 = ECL_CONS_CAR(v18);
       }
L90:;
       v15param_and_offset = v18;
      }
      v16offset = ecl_car(v15param_and_offset);
      v17param = ecl_cdr(v15param_and_offset);
      if (!(ecl_eql(v17param,VV[23]))) { goto L98; }
      if (!(v5args==ECL_NIL)) { goto L103; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v16offset);
L103:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L105; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L105:;
      {
       cl_object v18;
       v18 = v5args;
       {
        cl_object v19;
        v19 = v18;
        if (ecl_unlikely(!ECL_LISTP(v19))) FEtype_error_list(v19);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v18)) { goto L111; }
       {
        cl_object v19;
        v19 = ECL_CONS_CDR(v18);
        v5args = v19;
        v18 = ECL_CONS_CAR(v18);
       }
L111:;
       value0 = v18;
      }
      if ((value0)!=ECL_NIL) { goto L101; }
      v12k = ecl_make_fixnum(0);
      goto L84;
L101:;
      v12k = value0;
      goto L84;
L98:;
      if (!(ecl_eql(v17param,VV[24]))) { goto L117; }
      v12k = ecl_make_fixnum(ecl_length(v5args));
      goto L84;
L117:;
      if (!((v17param)==(ECL_NIL))) { goto L119; }
      v12k = ecl_make_fixnum(0);
      goto L84;
L119:;
      v12k = v17param;
     }
L84:;
     {
      cl_object v15param_and_offset;
      cl_object v16offset;
      cl_object v17param;
      {
       cl_object v18;
       v18 = v9;
       {
        cl_object v19;
        v19 = v18;
        if (ecl_unlikely(!ECL_LISTP(v19))) FEtype_error_list(v19);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v18)) { goto L128; }
       {
        cl_object v19;
        v19 = ECL_CONS_CDR(v18);
        v9 = v19;
        v18 = ECL_CONS_CAR(v18);
       }
L128:;
       v15param_and_offset = v18;
      }
      v16offset = ecl_car(v15param_and_offset);
      v17param = ecl_cdr(v15param_and_offset);
      if (!(ecl_eql(v17param,VV[23]))) { goto L136; }
      if (!(v5args==ECL_NIL)) { goto L141; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v16offset);
L141:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L143; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L143:;
      {
       cl_object v18;
       v18 = v5args;
       {
        cl_object v19;
        v19 = v18;
        if (ecl_unlikely(!ECL_LISTP(v19))) FEtype_error_list(v19);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v18)) { goto L149; }
       {
        cl_object v19;
        v19 = ECL_CONS_CDR(v18);
        v5args = v19;
        v18 = ECL_CONS_CAR(v18);
       }
L149:;
       value0 = v18;
      }
      if ((value0)!=ECL_NIL) { goto L139; }
      v13ovf = ECL_NIL;
      goto L122;
L139:;
      v13ovf = value0;
      goto L122;
L136:;
      if (!(ecl_eql(v17param,VV[24]))) { goto L155; }
      v13ovf = ecl_make_fixnum(ecl_length(v5args));
      goto L122;
L155:;
      if (!((v17param)==(ECL_NIL))) { goto L157; }
      v13ovf = ECL_NIL;
      goto L122;
L157:;
      v13ovf = v17param;
     }
L122:;
     {
      cl_object v15param_and_offset;
      cl_object v16offset;
      cl_object v17param;
      {
       cl_object v18;
       v18 = v9;
       {
        cl_object v19;
        v19 = v18;
        if (ecl_unlikely(!ECL_LISTP(v19))) FEtype_error_list(v19);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v18)) { goto L166; }
       {
        cl_object v19;
        v19 = ECL_CONS_CDR(v18);
        v9 = v19;
        v18 = ECL_CONS_CAR(v18);
       }
L166:;
       v15param_and_offset = v18;
      }
      v16offset = ecl_car(v15param_and_offset);
      v17param = ecl_cdr(v15param_and_offset);
      if (!(ecl_eql(v17param,VV[23]))) { goto L174; }
      if (!(v5args==ECL_NIL)) { goto L179; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v16offset);
L179:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L181; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L181:;
      {
       cl_object v18;
       v18 = v5args;
       {
        cl_object v19;
        v19 = v18;
        if (ecl_unlikely(!ECL_LISTP(v19))) FEtype_error_list(v19);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v18)) { goto L187; }
       {
        cl_object v19;
        v19 = ECL_CONS_CDR(v18);
        v5args = v19;
        v18 = ECL_CONS_CAR(v18);
       }
L187:;
       value0 = v18;
      }
      if ((value0)!=ECL_NIL) { goto L177; }
      v14pad = CODE_CHAR(32);
      goto L160;
L177:;
      v14pad = value0;
      goto L160;
L174:;
      if (!(ecl_eql(v17param,VV[24]))) { goto L193; }
      v14pad = ecl_make_fixnum(ecl_length(v5args));
      goto L160;
L193:;
      if (!((v17param)==(ECL_NIL))) { goto L195; }
      v14pad = CODE_CHAR(32);
      goto L160;
L195:;
      v14pad = v17param;
     }
L160:;
     if (Null(v9)) { goto L198; }
     T0 = ecl_list1(ecl_make_fixnum(5));
     T1 = ecl_caar(v9);
     cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[70], VV[71], T0, ECL_SYM("OFFSET",1306), T1);
L198:;
     if (!(v5args==ECL_NIL)) { goto L200; }
     cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57]);
L200:;
     if (Null(ecl_symbol_value(VV[34]))) { goto L202; }
     ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L202:;
     {
      cl_object v15;
      v15 = v5args;
      {
       cl_object v16;
       v16 = v15;
       if (ecl_unlikely(!ECL_LISTP(v16))) FEtype_error_list(v16);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v15)) { goto L209; }
      {
       cl_object v16;
       v16 = ECL_CONS_CDR(v15);
       v5args = v16;
       v15 = ECL_CONS_CAR(v15);
      }
L209:;
      T0 = v15;
     }
     L60format_fixed(v1stream, T0, v10w, v11d, v12k, v13ovf, v14pad, v7);
    }
   }
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v5args;
   cl_env_copy->values[0] = v3;
   return cl_env_copy->values[0];
  }
 }
}
/*      function definition for FORMAT-FIXED                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L60format_fixed(cl_object v1stream, cl_object v2number, cl_object v3w, cl_object v4d, cl_object v5k, cl_object v6ovf, cl_object v7pad, cl_object v8atsign)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  ecl_character v9pad;
  v9pad = ecl_char_code(v7pad);
TTL:
  if (!(ecl_numberp(v2number))) { goto L1; }
  if (!(floatp(v2number))) { goto L3; }
  value0 = L61format_fixed_aux(v1stream, v2number, v3w, v4d, v5k, v6ovf, CODE_CHAR(v9pad), v8atsign);
  return value0;
L3:;
  if (Null(cl_rationalp(v2number))) { goto L5; }
  {
   float v10;
   {
    cl_object v11c__value;
    v11c__value = v2number;
    v10 = ecl_to_float(v11c__value);
   }
   value0 = L61format_fixed_aux(v1stream, ecl_make_single_float(v10), v3w, v4d, v5k, v6ovf, CODE_CHAR(v9pad), v8atsign);
   return value0;
  }
L5:;
  T0 = L57decimal_string(v2number);
  value0 = L23format_write_field(v1stream, T0, v3w, ecl_make_fixnum(1), ecl_make_fixnum(0), CODE_CHAR(32), ECL_T);
  return value0;
L1:;
  value0 = L24format_princ(v1stream, v2number, ECL_NIL, ECL_NIL, v3w, ecl_make_fixnum(1), ecl_make_fixnum(0), CODE_CHAR(v9pad));
  return value0;
 }
}
/*      function definition for FORMAT-FIXED-AUX                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L61format_fixed_aux(cl_object v1stream, cl_object v2number, cl_object v3w, cl_object v4d, cl_object v5k, cl_object v6ovf, cl_object v7pad, cl_object v8atsign)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if ((v3w)!=ECL_NIL) { goto L5; }
  if ((v4d)!=ECL_NIL) { goto L5; }
  if (Null(v5k)) { goto L3; }
  goto L4;
L5:;
L4:;
  if (!(floatp(v2number))) { goto L1; }
  if ((si_float_infinity_p(v2number))!=ECL_NIL) { goto L9; }
  if (Null(si_float_nan_p(v2number))) { goto L1; }
  goto L2;
L9:;
  goto L2;
L3:;
L2:;
  ecl_prin1(v2number,v1stream);
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  {
   cl_object v9spaceleft;
   v9spaceleft = v3w;
   if (Null(v3w)) { goto L13; }
   if ((v8atsign)!=ECL_NIL) { goto L16; }
   if (ecl_minusp(v2number)) { goto L16; }
   if (!(ecl_zerop(v2number))) { goto L13; }
   T0 = cl_atan(2, v2number, ecl_make_fixnum(-1));
   if (!(ecl_minusp(T0))) { goto L13; }
   goto L14;
L16:;
L14:;
   v9spaceleft = ecl_minus(v9spaceleft,ecl_make_fixnum(1));
L13:;
   {
    cl_object v11;                                /*  STR             */
    cl_object v12;                                /*  LEN             */
    cl_object v13;                                /*  LPOINT          */
    cl_object v14;                                /*  TPOINT          */
    T0 = cl_abs(v2number);
    value0 = L2flonum_to_string(4, T0, v9spaceleft, v4d, v5k);
    {
     const int v15 = cl_env_copy->nvalues;
     v11 = value0;
     cl_object v16;
     v16 = (v15<=1)? ECL_NIL : cl_env_copy->values[1];
     v12 = v16;
     v16 = (v15<=2)? ECL_NIL : cl_env_copy->values[2];
     v13 = v16;
     v16 = (v15<=3)? ECL_NIL : cl_env_copy->values[3];
     v14 = v16;
    }
    if (!((v4d)==(ecl_make_fixnum(0)))) { goto L22; }
    v14 = ECL_NIL;
L22:;
    if (Null(v3w)) { goto L25; }
    v9spaceleft = ecl_minus(v9spaceleft,v12);
    if (Null(v14)) { goto L29; }
    v9spaceleft = ecl_minus(v9spaceleft,ecl_make_fixnum(1));
L29:;
    if (Null(v13)) { goto L25; }
    if (ecl_greater(v9spaceleft,ecl_make_fixnum(0))) { goto L35; }
    if (!((v4d)==(ecl_make_fixnum(0)))) { goto L33; }
    goto L34;
L35:;
L34:;
    v9spaceleft = ecl_minus(v9spaceleft,ecl_make_fixnum(1));
    goto L25;
L33:;
    v13 = ECL_NIL;
L25:;
    if (Null(v3w)) { goto L39; }
    if (!(ecl_lower(v9spaceleft,ecl_make_fixnum(0)))) { goto L39; }
    if (Null(v6ovf)) { goto L39; }
    {
     cl_object v15i;
     v15i = ecl_make_fixnum(0);
     goto L46;
L45:;
     cl_write_char(2, v6ovf, v1stream);
     v15i = ecl_one_plus(v15i);
L46:;
     if (!(ecl_lower(v15i,v3w))) { goto L51; }
     goto L45;
L51:;
    }
    value0 = ECL_T;
    cl_env_copy->nvalues = 1;
    return value0;
L39:;
    if (Null(v3w)) { goto L53; }
    {
     cl_object v15i;
     v15i = ecl_make_fixnum(0);
     goto L57;
L56:;
     cl_write_char(2, v7pad, v1stream);
     v15i = ecl_one_plus(v15i);
L57:;
     if (!(ecl_lower(v15i,v9spaceleft))) { goto L62; }
     goto L56;
L62:;
    }
L53:;
    if (ecl_minusp(v2number)) { goto L67; }
    if (!(ecl_zerop(v2number))) { goto L65; }
    T0 = cl_atan(2, v2number, ecl_make_fixnum(-1));
    if (!(ecl_minusp(T0))) { goto L65; }
    goto L66;
L67:;
L66:;
    cl_write_char(2, CODE_CHAR(45), v1stream);
    goto L64;
L65:;
    if (Null(v8atsign)) { goto L64; }
    cl_write_char(2, CODE_CHAR(43), v1stream);
L64:;
    if (Null(v13)) { goto L71; }
    cl_write_char(2, CODE_CHAR(48), v1stream);
L71:;
    cl_write_string(2, v11, v1stream);
    if (Null(v14)) { goto L74; }
    cl_write_char(2, CODE_CHAR(48), v1stream);
L74:;
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      local function LATIN_CAPITAL_LETTER_E-FORMAT-DIRECTIVE-EXPANDER */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC62latin_capital_letter_e_format_directive_expander(cl_object v1, cl_object v2)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20;
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
   v3 = ecl_function_dispatch(cl_env_copy,VV[311])(1, v1) /*  FORMAT-DIRECTIVE-COLONP */;
   v4 = ecl_function_dispatch(cl_env_copy,VV[312])(1, v1) /*  FORMAT-DIRECTIVE-ATSIGNP */;
   v5 = ecl_function_dispatch(cl_env_copy,VV[313])(1, v1) /*  FORMAT-DIRECTIVE-PARAMS */;
   if (Null(v3)) { goto L4; }
   cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[127]);
L4:;
   {
    cl_object v6;
    v6 = v5;
    {
     cl_object v7param_and_offset;
     cl_object v8offset;
     cl_object v9param;
     {
      cl_object v10;
      v10 = v6;
      {
       cl_object v11;
       v11 = v10;
       if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v10)) { goto L14; }
      {
       cl_object v11;
       v11 = ECL_CONS_CDR(v10);
       v6 = v11;
       v10 = ECL_CONS_CAR(v10);
      }
L14:;
      v7param_and_offset = v10;
     }
     v8offset = ecl_car(v7param_and_offset);
     v9param = ecl_cdr(v7param_and_offset);
     if (!(ecl_eql(v9param,VV[23]))) { goto L22; }
     T2 = L15expand_next_arg(1, v8offset);
     T1 = cl_list(3, ECL_SYM("OR",616), T2, ECL_NIL);
     goto L8;
L22:;
     if (!(ecl_eql(v9param,VV[24]))) { goto L24; }
     cl_set(VV[37],ECL_NIL);
     T1 = VV[68];
     goto L8;
L24:;
     if (!((v9param)==(ECL_NIL))) { goto L28; }
     T1 = ECL_NIL;
     goto L8;
L28:;
     T1 = v9param;
    }
L8:;
    T2 = cl_list(2, VV[134], T1);
    {
     cl_object v7param_and_offset;
     cl_object v8offset;
     cl_object v9param;
     {
      cl_object v10;
      v10 = v6;
      {
       cl_object v11;
       v11 = v10;
       if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v10)) { goto L37; }
      {
       cl_object v11;
       v11 = ECL_CONS_CDR(v10);
       v6 = v11;
       v10 = ECL_CONS_CAR(v10);
      }
L37:;
      v7param_and_offset = v10;
     }
     v8offset = ecl_car(v7param_and_offset);
     v9param = ecl_cdr(v7param_and_offset);
     if (!(ecl_eql(v9param,VV[23]))) { goto L45; }
     T4 = L15expand_next_arg(1, v8offset);
     T3 = cl_list(3, ECL_SYM("OR",616), T4, ECL_NIL);
     goto L31;
L45:;
     if (!(ecl_eql(v9param,VV[24]))) { goto L47; }
     cl_set(VV[37],ECL_NIL);
     T3 = VV[68];
     goto L31;
L47:;
     if (!((v9param)==(ECL_NIL))) { goto L51; }
     T3 = ECL_NIL;
     goto L31;
L51:;
     T3 = v9param;
    }
L31:;
    T4 = cl_list(2, VV[135], T3);
    {
     cl_object v7param_and_offset;
     cl_object v8offset;
     cl_object v9param;
     {
      cl_object v10;
      v10 = v6;
      {
       cl_object v11;
       v11 = v10;
       if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v10)) { goto L60; }
      {
       cl_object v11;
       v11 = ECL_CONS_CDR(v10);
       v6 = v11;
       v10 = ECL_CONS_CAR(v10);
      }
L60:;
      v7param_and_offset = v10;
     }
     v8offset = ecl_car(v7param_and_offset);
     v9param = ecl_cdr(v7param_and_offset);
     if (!(ecl_eql(v9param,VV[23]))) { goto L68; }
     T6 = L15expand_next_arg(1, v8offset);
     T5 = cl_list(3, ECL_SYM("OR",616), T6, ECL_NIL);
     goto L54;
L68:;
     if (!(ecl_eql(v9param,VV[24]))) { goto L70; }
     cl_set(VV[37],ECL_NIL);
     T5 = VV[68];
     goto L54;
L70:;
     if (!((v9param)==(ECL_NIL))) { goto L74; }
     T5 = ECL_NIL;
     goto L54;
L74:;
     T5 = v9param;
    }
L54:;
    T6 = cl_list(2, VV[136], T5);
    {
     cl_object v7param_and_offset;
     cl_object v8offset;
     cl_object v9param;
     {
      cl_object v10;
      v10 = v6;
      {
       cl_object v11;
       v11 = v10;
       if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v10)) { goto L83; }
      {
       cl_object v11;
       v11 = ECL_CONS_CDR(v10);
       v6 = v11;
       v10 = ECL_CONS_CAR(v10);
      }
L83:;
      v7param_and_offset = v10;
     }
     v8offset = ecl_car(v7param_and_offset);
     v9param = ecl_cdr(v7param_and_offset);
     if (!(ecl_eql(v9param,VV[23]))) { goto L91; }
     T8 = L15expand_next_arg(1, v8offset);
     T7 = cl_list(3, ECL_SYM("OR",616), T8, ecl_make_fixnum(1));
     goto L77;
L91:;
     if (!(ecl_eql(v9param,VV[24]))) { goto L93; }
     cl_set(VV[37],ECL_NIL);
     T7 = VV[68];
     goto L77;
L93:;
     if (!((v9param)==(ECL_NIL))) { goto L97; }
     T7 = ecl_make_fixnum(1);
     goto L77;
L97:;
     T7 = v9param;
    }
L77:;
    T8 = cl_list(2, VV[137], T7);
    {
     cl_object v7param_and_offset;
     cl_object v8offset;
     cl_object v9param;
     {
      cl_object v10;
      v10 = v6;
      {
       cl_object v11;
       v11 = v10;
       if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v10)) { goto L106; }
      {
       cl_object v11;
       v11 = ECL_CONS_CDR(v10);
       v6 = v11;
       v10 = ECL_CONS_CAR(v10);
      }
L106:;
      v7param_and_offset = v10;
     }
     v8offset = ecl_car(v7param_and_offset);
     v9param = ecl_cdr(v7param_and_offset);
     if (!(ecl_eql(v9param,VV[23]))) { goto L114; }
     T10 = L15expand_next_arg(1, v8offset);
     T9 = cl_list(3, ECL_SYM("OR",616), T10, ECL_NIL);
     goto L100;
L114:;
     if (!(ecl_eql(v9param,VV[24]))) { goto L116; }
     cl_set(VV[37],ECL_NIL);
     T9 = VV[68];
     goto L100;
L116:;
     if (!((v9param)==(ECL_NIL))) { goto L120; }
     T9 = ECL_NIL;
     goto L100;
L120:;
     T9 = v9param;
    }
L100:;
    T10 = cl_list(2, VV[138], T9);
    {
     cl_object v7param_and_offset;
     cl_object v8offset;
     cl_object v9param;
     {
      cl_object v10;
      v10 = v6;
      {
       cl_object v11;
       v11 = v10;
       if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v10)) { goto L129; }
      {
       cl_object v11;
       v11 = ECL_CONS_CDR(v10);
       v6 = v11;
       v10 = ECL_CONS_CAR(v10);
      }
L129:;
      v7param_and_offset = v10;
     }
     v8offset = ecl_car(v7param_and_offset);
     v9param = ecl_cdr(v7param_and_offset);
     if (!(ecl_eql(v9param,VV[23]))) { goto L137; }
     T12 = L15expand_next_arg(1, v8offset);
     T11 = cl_list(3, ECL_SYM("OR",616), T12, CODE_CHAR(32));
     goto L123;
L137:;
     if (!(ecl_eql(v9param,VV[24]))) { goto L139; }
     cl_set(VV[37],ECL_NIL);
     T11 = VV[68];
     goto L123;
L139:;
     if (!((v9param)==(ECL_NIL))) { goto L143; }
     T11 = CODE_CHAR(32);
     goto L123;
L143:;
     T11 = v9param;
    }
L123:;
    T12 = cl_list(2, VV[139], T11);
    {
     cl_object v7param_and_offset;
     cl_object v8offset;
     cl_object v9param;
     {
      cl_object v10;
      v10 = v6;
      {
       cl_object v11;
       v11 = v10;
       if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v10)) { goto L152; }
      {
       cl_object v11;
       v11 = ECL_CONS_CDR(v10);
       v6 = v11;
       v10 = ECL_CONS_CAR(v10);
      }
L152:;
      v7param_and_offset = v10;
     }
     v8offset = ecl_car(v7param_and_offset);
     v9param = ecl_cdr(v7param_and_offset);
     if (!(ecl_eql(v9param,VV[23]))) { goto L160; }
     T14 = L15expand_next_arg(1, v8offset);
     T13 = cl_list(3, ECL_SYM("OR",616), T14, ECL_NIL);
     goto L146;
L160:;
     if (!(ecl_eql(v9param,VV[24]))) { goto L162; }
     cl_set(VV[37],ECL_NIL);
     T13 = VV[68];
     goto L146;
L162:;
     if (!((v9param)==(ECL_NIL))) { goto L166; }
     T13 = ECL_NIL;
     goto L146;
L166:;
     T13 = v9param;
    }
L146:;
    T14 = cl_list(2, VV[140], T13);
    T15 = cl_list(7, T2, T4, T6, T8, T10, T12, T14);
    if (Null(v6)) { goto L170; }
    T17 = ecl_list1(ecl_make_fixnum(7));
    T18 = ecl_caar(v6);
    T16 = cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[70], VV[71], T17, ECL_SYM("OFFSET",1306), T18);
    goto L169;
L170:;
    T16 = ECL_NIL;
L169:;
    T17 = L15expand_next_arg(0);
    T18 = cl_list(11, VV[141], ECL_SYM("STREAM",801), T17, VV[134], VV[135], VV[136], VV[137], VV[138], VV[139], VV[140], v4);
    T19 = ecl_list1(T18);
    T20 = ecl_append(T16,T19);
    T0 = cl_listX(3, ECL_SYM("LET",479), T15, T20);
   }
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v2;
   cl_env_copy->values[0] = T0;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA936                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC63__lambda936(cl_object v1stream, cl_object v2, cl_object v3, cl_object v4orig_args, cl_object v5args)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v6;
   cl_object v7;
   cl_object v8;
   v6 = ecl_function_dispatch(cl_env_copy,VV[311])(1, v2) /*  FORMAT-DIRECTIVE-COLONP */;
   v7 = ecl_function_dispatch(cl_env_copy,VV[312])(1, v2) /*  FORMAT-DIRECTIVE-ATSIGNP */;
   v8 = ecl_function_dispatch(cl_env_copy,VV[313])(1, v2) /*  FORMAT-DIRECTIVE-PARAMS */;
   if (Null(v6)) { goto L4; }
   cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[127]);
L4:;
   {
    cl_object v9;
    v9 = v8;
    {
     cl_object v10w;
     cl_object v11d;
     cl_object v12e;
     cl_object v13k;
     cl_object v14ovf;
     cl_object v15pad;
     cl_object v16mark;
     {
      cl_object v17param_and_offset;
      cl_object v18offset;
      cl_object v19param;
      {
       cl_object v20;
       v20 = v9;
       {
        cl_object v21;
        v21 = v20;
        if (ecl_unlikely(!ECL_LISTP(v21))) FEtype_error_list(v21);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v20)) { goto L14; }
       {
        cl_object v21;
        v21 = ECL_CONS_CDR(v20);
        v9 = v21;
        v20 = ECL_CONS_CAR(v20);
       }
L14:;
       v17param_and_offset = v20;
      }
      v18offset = ecl_car(v17param_and_offset);
      v19param = ecl_cdr(v17param_and_offset);
      if (!(ecl_eql(v19param,VV[23]))) { goto L22; }
      if (!(v5args==ECL_NIL)) { goto L27; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v18offset);
L27:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L29; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L29:;
      {
       cl_object v20;
       v20 = v5args;
       {
        cl_object v21;
        v21 = v20;
        if (ecl_unlikely(!ECL_LISTP(v21))) FEtype_error_list(v21);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v20)) { goto L35; }
       {
        cl_object v21;
        v21 = ECL_CONS_CDR(v20);
        v5args = v21;
        v20 = ECL_CONS_CAR(v20);
       }
L35:;
       value0 = v20;
      }
      if ((value0)!=ECL_NIL) { goto L25; }
      v10w = ECL_NIL;
      goto L8;
L25:;
      v10w = value0;
      goto L8;
L22:;
      if (!(ecl_eql(v19param,VV[24]))) { goto L41; }
      v10w = ecl_make_fixnum(ecl_length(v5args));
      goto L8;
L41:;
      if (!((v19param)==(ECL_NIL))) { goto L43; }
      v10w = ECL_NIL;
      goto L8;
L43:;
      v10w = v19param;
     }
L8:;
     {
      cl_object v17param_and_offset;
      cl_object v18offset;
      cl_object v19param;
      {
       cl_object v20;
       v20 = v9;
       {
        cl_object v21;
        v21 = v20;
        if (ecl_unlikely(!ECL_LISTP(v21))) FEtype_error_list(v21);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v20)) { goto L52; }
       {
        cl_object v21;
        v21 = ECL_CONS_CDR(v20);
        v9 = v21;
        v20 = ECL_CONS_CAR(v20);
       }
L52:;
       v17param_and_offset = v20;
      }
      v18offset = ecl_car(v17param_and_offset);
      v19param = ecl_cdr(v17param_and_offset);
      if (!(ecl_eql(v19param,VV[23]))) { goto L60; }
      if (!(v5args==ECL_NIL)) { goto L65; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v18offset);
L65:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L67; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L67:;
      {
       cl_object v20;
       v20 = v5args;
       {
        cl_object v21;
        v21 = v20;
        if (ecl_unlikely(!ECL_LISTP(v21))) FEtype_error_list(v21);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v20)) { goto L73; }
       {
        cl_object v21;
        v21 = ECL_CONS_CDR(v20);
        v5args = v21;
        v20 = ECL_CONS_CAR(v20);
       }
L73:;
       value0 = v20;
      }
      if ((value0)!=ECL_NIL) { goto L63; }
      v11d = ECL_NIL;
      goto L46;
L63:;
      v11d = value0;
      goto L46;
L60:;
      if (!(ecl_eql(v19param,VV[24]))) { goto L79; }
      v11d = ecl_make_fixnum(ecl_length(v5args));
      goto L46;
L79:;
      if (!((v19param)==(ECL_NIL))) { goto L81; }
      v11d = ECL_NIL;
      goto L46;
L81:;
      v11d = v19param;
     }
L46:;
     {
      cl_object v17param_and_offset;
      cl_object v18offset;
      cl_object v19param;
      {
       cl_object v20;
       v20 = v9;
       {
        cl_object v21;
        v21 = v20;
        if (ecl_unlikely(!ECL_LISTP(v21))) FEtype_error_list(v21);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v20)) { goto L90; }
       {
        cl_object v21;
        v21 = ECL_CONS_CDR(v20);
        v9 = v21;
        v20 = ECL_CONS_CAR(v20);
       }
L90:;
       v17param_and_offset = v20;
      }
      v18offset = ecl_car(v17param_and_offset);
      v19param = ecl_cdr(v17param_and_offset);
      if (!(ecl_eql(v19param,VV[23]))) { goto L98; }
      if (!(v5args==ECL_NIL)) { goto L103; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v18offset);
L103:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L105; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L105:;
      {
       cl_object v20;
       v20 = v5args;
       {
        cl_object v21;
        v21 = v20;
        if (ecl_unlikely(!ECL_LISTP(v21))) FEtype_error_list(v21);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v20)) { goto L111; }
       {
        cl_object v21;
        v21 = ECL_CONS_CDR(v20);
        v5args = v21;
        v20 = ECL_CONS_CAR(v20);
       }
L111:;
       value0 = v20;
      }
      if ((value0)!=ECL_NIL) { goto L101; }
      v12e = ECL_NIL;
      goto L84;
L101:;
      v12e = value0;
      goto L84;
L98:;
      if (!(ecl_eql(v19param,VV[24]))) { goto L117; }
      v12e = ecl_make_fixnum(ecl_length(v5args));
      goto L84;
L117:;
      if (!((v19param)==(ECL_NIL))) { goto L119; }
      v12e = ECL_NIL;
      goto L84;
L119:;
      v12e = v19param;
     }
L84:;
     {
      cl_object v17param_and_offset;
      cl_object v18offset;
      cl_object v19param;
      {
       cl_object v20;
       v20 = v9;
       {
        cl_object v21;
        v21 = v20;
        if (ecl_unlikely(!ECL_LISTP(v21))) FEtype_error_list(v21);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v20)) { goto L128; }
       {
        cl_object v21;
        v21 = ECL_CONS_CDR(v20);
        v9 = v21;
        v20 = ECL_CONS_CAR(v20);
       }
L128:;
       v17param_and_offset = v20;
      }
      v18offset = ecl_car(v17param_and_offset);
      v19param = ecl_cdr(v17param_and_offset);
      if (!(ecl_eql(v19param,VV[23]))) { goto L136; }
      if (!(v5args==ECL_NIL)) { goto L141; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v18offset);
L141:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L143; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L143:;
      {
       cl_object v20;
       v20 = v5args;
       {
        cl_object v21;
        v21 = v20;
        if (ecl_unlikely(!ECL_LISTP(v21))) FEtype_error_list(v21);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v20)) { goto L149; }
       {
        cl_object v21;
        v21 = ECL_CONS_CDR(v20);
        v5args = v21;
        v20 = ECL_CONS_CAR(v20);
       }
L149:;
       value0 = v20;
      }
      if ((value0)!=ECL_NIL) { goto L139; }
      v13k = ecl_make_fixnum(1);
      goto L122;
L139:;
      v13k = value0;
      goto L122;
L136:;
      if (!(ecl_eql(v19param,VV[24]))) { goto L155; }
      v13k = ecl_make_fixnum(ecl_length(v5args));
      goto L122;
L155:;
      if (!((v19param)==(ECL_NIL))) { goto L157; }
      v13k = ecl_make_fixnum(1);
      goto L122;
L157:;
      v13k = v19param;
     }
L122:;
     {
      cl_object v17param_and_offset;
      cl_object v18offset;
      cl_object v19param;
      {
       cl_object v20;
       v20 = v9;
       {
        cl_object v21;
        v21 = v20;
        if (ecl_unlikely(!ECL_LISTP(v21))) FEtype_error_list(v21);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v20)) { goto L166; }
       {
        cl_object v21;
        v21 = ECL_CONS_CDR(v20);
        v9 = v21;
        v20 = ECL_CONS_CAR(v20);
       }
L166:;
       v17param_and_offset = v20;
      }
      v18offset = ecl_car(v17param_and_offset);
      v19param = ecl_cdr(v17param_and_offset);
      if (!(ecl_eql(v19param,VV[23]))) { goto L174; }
      if (!(v5args==ECL_NIL)) { goto L179; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v18offset);
L179:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L181; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L181:;
      {
       cl_object v20;
       v20 = v5args;
       {
        cl_object v21;
        v21 = v20;
        if (ecl_unlikely(!ECL_LISTP(v21))) FEtype_error_list(v21);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v20)) { goto L187; }
       {
        cl_object v21;
        v21 = ECL_CONS_CDR(v20);
        v5args = v21;
        v20 = ECL_CONS_CAR(v20);
       }
L187:;
       value0 = v20;
      }
      if ((value0)!=ECL_NIL) { goto L177; }
      v14ovf = ECL_NIL;
      goto L160;
L177:;
      v14ovf = value0;
      goto L160;
L174:;
      if (!(ecl_eql(v19param,VV[24]))) { goto L193; }
      v14ovf = ecl_make_fixnum(ecl_length(v5args));
      goto L160;
L193:;
      if (!((v19param)==(ECL_NIL))) { goto L195; }
      v14ovf = ECL_NIL;
      goto L160;
L195:;
      v14ovf = v19param;
     }
L160:;
     {
      cl_object v17param_and_offset;
      cl_object v18offset;
      cl_object v19param;
      {
       cl_object v20;
       v20 = v9;
       {
        cl_object v21;
        v21 = v20;
        if (ecl_unlikely(!ECL_LISTP(v21))) FEtype_error_list(v21);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v20)) { goto L204; }
       {
        cl_object v21;
        v21 = ECL_CONS_CDR(v20);
        v9 = v21;
        v20 = ECL_CONS_CAR(v20);
       }
L204:;
       v17param_and_offset = v20;
      }
      v18offset = ecl_car(v17param_and_offset);
      v19param = ecl_cdr(v17param_and_offset);
      if (!(ecl_eql(v19param,VV[23]))) { goto L212; }
      if (!(v5args==ECL_NIL)) { goto L217; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v18offset);
L217:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L219; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L219:;
      {
       cl_object v20;
       v20 = v5args;
       {
        cl_object v21;
        v21 = v20;
        if (ecl_unlikely(!ECL_LISTP(v21))) FEtype_error_list(v21);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v20)) { goto L225; }
       {
        cl_object v21;
        v21 = ECL_CONS_CDR(v20);
        v5args = v21;
        v20 = ECL_CONS_CAR(v20);
       }
L225:;
       value0 = v20;
      }
      if ((value0)!=ECL_NIL) { goto L215; }
      v15pad = CODE_CHAR(32);
      goto L198;
L215:;
      v15pad = value0;
      goto L198;
L212:;
      if (!(ecl_eql(v19param,VV[24]))) { goto L231; }
      v15pad = ecl_make_fixnum(ecl_length(v5args));
      goto L198;
L231:;
      if (!((v19param)==(ECL_NIL))) { goto L233; }
      v15pad = CODE_CHAR(32);
      goto L198;
L233:;
      v15pad = v19param;
     }
L198:;
     {
      cl_object v17param_and_offset;
      cl_object v18offset;
      cl_object v19param;
      {
       cl_object v20;
       v20 = v9;
       {
        cl_object v21;
        v21 = v20;
        if (ecl_unlikely(!ECL_LISTP(v21))) FEtype_error_list(v21);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v20)) { goto L242; }
       {
        cl_object v21;
        v21 = ECL_CONS_CDR(v20);
        v9 = v21;
        v20 = ECL_CONS_CAR(v20);
       }
L242:;
       v17param_and_offset = v20;
      }
      v18offset = ecl_car(v17param_and_offset);
      v19param = ecl_cdr(v17param_and_offset);
      if (!(ecl_eql(v19param,VV[23]))) { goto L250; }
      if (!(v5args==ECL_NIL)) { goto L255; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v18offset);
L255:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L257; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L257:;
      {
       cl_object v20;
       v20 = v5args;
       {
        cl_object v21;
        v21 = v20;
        if (ecl_unlikely(!ECL_LISTP(v21))) FEtype_error_list(v21);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v20)) { goto L263; }
       {
        cl_object v21;
        v21 = ECL_CONS_CDR(v20);
        v5args = v21;
        v20 = ECL_CONS_CAR(v20);
       }
L263:;
       value0 = v20;
      }
      if ((value0)!=ECL_NIL) { goto L253; }
      v16mark = ECL_NIL;
      goto L236;
L253:;
      v16mark = value0;
      goto L236;
L250:;
      if (!(ecl_eql(v19param,VV[24]))) { goto L269; }
      v16mark = ecl_make_fixnum(ecl_length(v5args));
      goto L236;
L269:;
      if (!((v19param)==(ECL_NIL))) { goto L271; }
      v16mark = ECL_NIL;
      goto L236;
L271:;
      v16mark = v19param;
     }
L236:;
     if (Null(v9)) { goto L274; }
     T0 = ecl_list1(ecl_make_fixnum(7));
     T1 = ecl_caar(v9);
     cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[70], VV[71], T0, ECL_SYM("OFFSET",1306), T1);
L274:;
     if (!(v5args==ECL_NIL)) { goto L276; }
     cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57]);
L276:;
     if (Null(ecl_symbol_value(VV[34]))) { goto L278; }
     ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L278:;
     {
      cl_object v17;
      v17 = v5args;
      {
       cl_object v18;
       v18 = v17;
       if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v17)) { goto L285; }
      {
       cl_object v18;
       v18 = ECL_CONS_CDR(v17);
       v5args = v18;
       v17 = ECL_CONS_CAR(v17);
      }
L285:;
      T0 = v17;
     }
     L64format_exponential(v1stream, T0, v10w, v11d, v12e, v13k, v14ovf, v15pad, v16mark, v7);
    }
   }
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v5args;
   cl_env_copy->values[0] = v3;
   return cl_env_copy->values[0];
  }
 }
}
/*      function definition for FORMAT-EXPONENTIAL                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L64format_exponential(cl_object v1stream, cl_object v2number, cl_object v3w, cl_object v4d, cl_object v5e, cl_object v6k, cl_object v7ovf, cl_object v8pad, cl_object v9marker, cl_object v10atsign)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  ecl_character v11pad;
  v11pad = ecl_char_code(v8pad);
TTL:
  if (ecl_numberp(v2number)) { goto L1; }
  value0 = L24format_princ(v1stream, v2number, ECL_NIL, ECL_NIL, v3w, ecl_make_fixnum(1), ecl_make_fixnum(0), CODE_CHAR(v11pad));
  return value0;
L1:;
  if (!(floatp(v2number))) { goto L3; }
  value0 = L66format_exp_aux(v1stream, v2number, v3w, v4d, v5e, v6k, v7ovf, CODE_CHAR(v11pad), v9marker, v10atsign);
  return value0;
L3:;
  if (Null(cl_rationalp(v2number))) { goto L5; }
  {
   float v12;
   {
    cl_object v13c__value;
    v13c__value = v2number;
    v12 = ecl_to_float(v13c__value);
   }
   value0 = L66format_exp_aux(v1stream, ecl_make_single_float(v12), v3w, v4d, v5e, v6k, v7ovf, CODE_CHAR(v11pad), v9marker, v10atsign);
   return value0;
  }
L5:;
  T0 = L57decimal_string(v2number);
  value0 = L23format_write_field(v1stream, T0, v3w, ecl_make_fixnum(1), ecl_make_fixnum(0), CODE_CHAR(32), ECL_T);
  return value0;
 }
}
/*      function definition for FORMAT-EXPONENT-MARKER                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L65format_exponent_marker(cl_object v1number)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(cl_typep(2, v1number, ecl_symbol_value(ECL_SYM("*READ-DEFAULT-FLOAT-FORMAT*",64))))) { goto L1; }
  value0 = CODE_CHAR(101);
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  if (!(ECL_SINGLE_FLOAT_P(v1number))) { goto L3; }
  value0 = CODE_CHAR(102);
  cl_env_copy->nvalues = 1;
  return value0;
L3:;
  if (!(ECL_DOUBLE_FLOAT_P(v1number))) { goto L5; }
  value0 = CODE_CHAR(100);
  cl_env_copy->nvalues = 1;
  return value0;
L5:;
  if (!(ECL_SINGLE_FLOAT_P(v1number))) { goto L7; }
  value0 = CODE_CHAR(115);
  cl_env_copy->nvalues = 1;
  return value0;
L7:;
  if (!(ECL_LONG_FLOAT_P(v1number))) { goto L9; }
  value0 = CODE_CHAR(108);
  cl_env_copy->nvalues = 1;
  return value0;
L9:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for FORMAT-EXP-AUX                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L66format_exp_aux(cl_object v1stream, cl_object v2number, cl_object v3w, cl_object v4d, cl_object v5e, cl_object v6k, cl_object v7ovf, cl_object v8pad, cl_object v9marker, cl_object v10atsign)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(floatp(v2number))) { goto L1; }
  if ((si_float_infinity_p(v2number))!=ECL_NIL) { goto L4; }
  if (Null(si_float_nan_p(v2number))) { goto L1; }
  goto L2;
L4:;
L2:;
  value0 = ecl_prin1(v2number,v1stream);
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  {
   cl_object v11expt;
   cl_object v12estr;
   cl_object v13elen;
   cl_object v14fdig;
   cl_object v15fmin;
   cl_object v16spaceleft;
   T0 = L3exponent_in_base10(v2number);
   v11expt = ecl_minus(T0,v6k);
   T0 = cl_abs(v11expt);
   v12estr = L57decimal_string(T0);
   if (Null(v5e)) { goto L9; }
   {
    cl_fixnum v17;
    v17 = ecl_length(v12estr);
    v13elen = ((ecl_float_nan_p(v5e) || ecl_greatereq(ecl_make_fixnum(v17),v5e))?ecl_make_fixnum(v17):v5e);
    goto L8;
   }
L9:;
   v13elen = ecl_make_fixnum(ecl_length(v12estr));
L8:;
   if (Null(v4d)) { goto L12; }
   if (!(ecl_plusp(v6k))) { goto L14; }
   T0 = ecl_minus(v4d,v6k);
   v14fdig = ecl_one_plus(T0);
   goto L11;
L14:;
   v14fdig = v4d;
   goto L11;
L12:;
   v14fdig = ECL_NIL;
L11:;
   if (!(ecl_minusp(v6k))) { goto L17; }
   v15fmin = ecl_minus(ecl_make_fixnum(1),v6k);
   goto L16;
L17:;
   v15fmin = ecl_make_fixnum(0);
L16:;
   if (Null(v3w)) { goto L20; }
   T0 = ecl_minus(v3w,ecl_make_fixnum(2));
   T1 = ecl_minus(T0,v13elen);
   {
    cl_fixnum v17;
    if ((v10atsign)!=ECL_NIL) { goto L25; }
    if (!(ecl_minusp(v2number))) { goto L23; }
    goto L24;
L25:;
L24:;
    v17 = 1;
    goto L22;
L23:;
    v17 = 0;
L22:;
    v16spaceleft = ecl_minus(T1,ecl_make_fixnum(v17));
    goto L19;
   }
L20:;
   v16spaceleft = ECL_NIL;
L19:;
   if (Null(v3w)) { goto L27; }
   if (Null(v7ovf)) { goto L27; }
   if (Null(v5e)) { goto L27; }
   if (!(ecl_greater(v13elen,v5e))) { goto L27; }
   {
    cl_object v17i;
    v17i = ecl_make_fixnum(0);
    goto L34;
L33:;
    cl_write_char(2, v7ovf, v1stream);
    v17i = ecl_one_plus(v17i);
L34:;
    if (!(ecl_lower(v17i,v3w))) { goto L39; }
    goto L33;
L39:;
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
   }
L27:;
   {
    cl_object v19;                                /*  FSTR            */
    cl_object v20;                                /*  FLEN            */
    cl_object v21;                                /*  LPOINT          */
    T0 = ecl_negate(v11expt);
    value0 = L2flonum_to_string(5, v2number, v16spaceleft, v14fdig, T0, v15fmin);
    {
     const int v22 = cl_env_copy->nvalues;
     v19 = value0;
     cl_object v23;
     v23 = (v22<=1)? ECL_NIL : cl_env_copy->values[1];
     v20 = v23;
     v23 = (v22<=2)? ECL_NIL : cl_env_copy->values[2];
     v21 = v23;
    }
    if (Null(v3w)) { goto L42; }
    v16spaceleft = ecl_minus(v16spaceleft,v20);
    if (Null(v21)) { goto L42; }
    if (!(ecl_greater(v16spaceleft,ecl_make_fixnum(0)))) { goto L47; }
    v16spaceleft = ecl_minus(v16spaceleft,ecl_make_fixnum(1));
    goto L42;
L47:;
    v21 = ECL_NIL;
L42:;
    if (Null(v3w)) { goto L51; }
    if (!(ecl_lower(v16spaceleft,ecl_make_fixnum(0)))) { goto L51; }
    if (Null(v7ovf)) { goto L51; }
    {
     cl_object v22i;
     v22i = ecl_make_fixnum(0);
     goto L57;
L56:;
     cl_write_char(2, v7ovf, v1stream);
     v22i = ecl_one_plus(v22i);
L57:;
     if (!(ecl_lower(v22i,v3w))) { goto L62; }
     goto L56;
L62:;
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 1;
     return value0;
    }
L51:;
    if (Null(v3w)) { goto L64; }
    {
     cl_object v23i;
     v23i = ecl_make_fixnum(0);
     goto L68;
L67:;
     cl_write_char(2, v8pad, v1stream);
     v23i = ecl_one_plus(v23i);
L68:;
     if (!(ecl_lower(v23i,v16spaceleft))) { goto L73; }
     goto L67;
L73:;
    }
L64:;
    if (!(ecl_minusp(v2number))) { goto L76; }
    cl_write_char(2, CODE_CHAR(45), v1stream);
    goto L75;
L76:;
    if (Null(v10atsign)) { goto L75; }
    cl_write_char(2, CODE_CHAR(43), v1stream);
L75:;
    if (Null(v21)) { goto L79; }
    cl_write_char(2, CODE_CHAR(48), v1stream);
L79:;
    cl_write_string(2, v19, v1stream);
    if (Null(v9marker)) { goto L84; }
    T0 = v9marker;
    goto L83;
L84:;
    T0 = L65format_exponent_marker(v2number);
L83:;
    cl_write_char(2, T0, v1stream);
    {
     ecl_character v23;
     if (!(ecl_minusp(v11expt))) { goto L88; }
     v23 = (ecl_character)(45);
     goto L87;
L88:;
     v23 = (ecl_character)(43);
L87:;
     cl_write_char(2, CODE_CHAR(v23), v1stream);
    }
    if (Null(v5e)) { goto L90; }
    {
     cl_object v23;
     {
      cl_fixnum v24;
      v24 = ecl_length(v12estr);
      v23 = ecl_minus(v5e,ecl_make_fixnum(v24));
     }
     {
      cl_object v24i;
      v24i = ecl_make_fixnum(0);
      goto L95;
L94:;
      cl_write_char(2, CODE_CHAR(48), v1stream);
      v24i = ecl_one_plus(v24i);
L95:;
      if (!(ecl_lower(v24i,v23))) { goto L100; }
      goto L94;
L100:;
     }
    }
L90:;
    value0 = cl_write_string(2, v12estr, v1stream);
    return value0;
   }
  }
 }
}
/*      local function LATIN_CAPITAL_LETTER_G-FORMAT-DIRECTIVE-EXPANDER */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC67latin_capital_letter_g_format_directive_expander(cl_object v1, cl_object v2)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20;
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
   v3 = ecl_function_dispatch(cl_env_copy,VV[311])(1, v1) /*  FORMAT-DIRECTIVE-COLONP */;
   v4 = ecl_function_dispatch(cl_env_copy,VV[312])(1, v1) /*  FORMAT-DIRECTIVE-ATSIGNP */;
   v5 = ecl_function_dispatch(cl_env_copy,VV[313])(1, v1) /*  FORMAT-DIRECTIVE-PARAMS */;
   if (Null(v3)) { goto L4; }
   cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[127]);
L4:;
   {
    cl_object v6;
    v6 = v5;
    {
     cl_object v7param_and_offset;
     cl_object v8offset;
     cl_object v9param;
     {
      cl_object v10;
      v10 = v6;
      {
       cl_object v11;
       v11 = v10;
       if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v10)) { goto L14; }
      {
       cl_object v11;
       v11 = ECL_CONS_CDR(v10);
       v6 = v11;
       v10 = ECL_CONS_CAR(v10);
      }
L14:;
      v7param_and_offset = v10;
     }
     v8offset = ecl_car(v7param_and_offset);
     v9param = ecl_cdr(v7param_and_offset);
     if (!(ecl_eql(v9param,VV[23]))) { goto L22; }
     T2 = L15expand_next_arg(1, v8offset);
     T1 = cl_list(3, ECL_SYM("OR",616), T2, ECL_NIL);
     goto L8;
L22:;
     if (!(ecl_eql(v9param,VV[24]))) { goto L24; }
     cl_set(VV[37],ECL_NIL);
     T1 = VV[68];
     goto L8;
L24:;
     if (!((v9param)==(ECL_NIL))) { goto L28; }
     T1 = ECL_NIL;
     goto L8;
L28:;
     T1 = v9param;
    }
L8:;
    T2 = cl_list(2, VV[142], T1);
    {
     cl_object v7param_and_offset;
     cl_object v8offset;
     cl_object v9param;
     {
      cl_object v10;
      v10 = v6;
      {
       cl_object v11;
       v11 = v10;
       if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v10)) { goto L37; }
      {
       cl_object v11;
       v11 = ECL_CONS_CDR(v10);
       v6 = v11;
       v10 = ECL_CONS_CAR(v10);
      }
L37:;
      v7param_and_offset = v10;
     }
     v8offset = ecl_car(v7param_and_offset);
     v9param = ecl_cdr(v7param_and_offset);
     if (!(ecl_eql(v9param,VV[23]))) { goto L45; }
     T4 = L15expand_next_arg(1, v8offset);
     T3 = cl_list(3, ECL_SYM("OR",616), T4, ECL_NIL);
     goto L31;
L45:;
     if (!(ecl_eql(v9param,VV[24]))) { goto L47; }
     cl_set(VV[37],ECL_NIL);
     T3 = VV[68];
     goto L31;
L47:;
     if (!((v9param)==(ECL_NIL))) { goto L51; }
     T3 = ECL_NIL;
     goto L31;
L51:;
     T3 = v9param;
    }
L31:;
    T4 = cl_list(2, VV[143], T3);
    {
     cl_object v7param_and_offset;
     cl_object v8offset;
     cl_object v9param;
     {
      cl_object v10;
      v10 = v6;
      {
       cl_object v11;
       v11 = v10;
       if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v10)) { goto L60; }
      {
       cl_object v11;
       v11 = ECL_CONS_CDR(v10);
       v6 = v11;
       v10 = ECL_CONS_CAR(v10);
      }
L60:;
      v7param_and_offset = v10;
     }
     v8offset = ecl_car(v7param_and_offset);
     v9param = ecl_cdr(v7param_and_offset);
     if (!(ecl_eql(v9param,VV[23]))) { goto L68; }
     T6 = L15expand_next_arg(1, v8offset);
     T5 = cl_list(3, ECL_SYM("OR",616), T6, ECL_NIL);
     goto L54;
L68:;
     if (!(ecl_eql(v9param,VV[24]))) { goto L70; }
     cl_set(VV[37],ECL_NIL);
     T5 = VV[68];
     goto L54;
L70:;
     if (!((v9param)==(ECL_NIL))) { goto L74; }
     T5 = ECL_NIL;
     goto L54;
L74:;
     T5 = v9param;
    }
L54:;
    T6 = cl_list(2, VV[144], T5);
    {
     cl_object v7param_and_offset;
     cl_object v8offset;
     cl_object v9param;
     {
      cl_object v10;
      v10 = v6;
      {
       cl_object v11;
       v11 = v10;
       if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v10)) { goto L83; }
      {
       cl_object v11;
       v11 = ECL_CONS_CDR(v10);
       v6 = v11;
       v10 = ECL_CONS_CAR(v10);
      }
L83:;
      v7param_and_offset = v10;
     }
     v8offset = ecl_car(v7param_and_offset);
     v9param = ecl_cdr(v7param_and_offset);
     if (!(ecl_eql(v9param,VV[23]))) { goto L91; }
     T8 = L15expand_next_arg(1, v8offset);
     T7 = cl_list(3, ECL_SYM("OR",616), T8, ecl_make_fixnum(0));
     goto L77;
L91:;
     if (!(ecl_eql(v9param,VV[24]))) { goto L93; }
     cl_set(VV[37],ECL_NIL);
     T7 = VV[68];
     goto L77;
L93:;
     if (!((v9param)==(ECL_NIL))) { goto L97; }
     T7 = ecl_make_fixnum(0);
     goto L77;
L97:;
     T7 = v9param;
    }
L77:;
    T8 = cl_list(2, VV[145], T7);
    {
     cl_object v7param_and_offset;
     cl_object v8offset;
     cl_object v9param;
     {
      cl_object v10;
      v10 = v6;
      {
       cl_object v11;
       v11 = v10;
       if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v10)) { goto L106; }
      {
       cl_object v11;
       v11 = ECL_CONS_CDR(v10);
       v6 = v11;
       v10 = ECL_CONS_CAR(v10);
      }
L106:;
      v7param_and_offset = v10;
     }
     v8offset = ecl_car(v7param_and_offset);
     v9param = ecl_cdr(v7param_and_offset);
     if (!(ecl_eql(v9param,VV[23]))) { goto L114; }
     T10 = L15expand_next_arg(1, v8offset);
     T9 = cl_list(3, ECL_SYM("OR",616), T10, ECL_NIL);
     goto L100;
L114:;
     if (!(ecl_eql(v9param,VV[24]))) { goto L116; }
     cl_set(VV[37],ECL_NIL);
     T9 = VV[68];
     goto L100;
L116:;
     if (!((v9param)==(ECL_NIL))) { goto L120; }
     T9 = ECL_NIL;
     goto L100;
L120:;
     T9 = v9param;
    }
L100:;
    T10 = cl_list(2, VV[146], T9);
    {
     cl_object v7param_and_offset;
     cl_object v8offset;
     cl_object v9param;
     {
      cl_object v10;
      v10 = v6;
      {
       cl_object v11;
       v11 = v10;
       if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v10)) { goto L129; }
      {
       cl_object v11;
       v11 = ECL_CONS_CDR(v10);
       v6 = v11;
       v10 = ECL_CONS_CAR(v10);
      }
L129:;
      v7param_and_offset = v10;
     }
     v8offset = ecl_car(v7param_and_offset);
     v9param = ecl_cdr(v7param_and_offset);
     if (!(ecl_eql(v9param,VV[23]))) { goto L137; }
     T12 = L15expand_next_arg(1, v8offset);
     T11 = cl_list(3, ECL_SYM("OR",616), T12, CODE_CHAR(32));
     goto L123;
L137:;
     if (!(ecl_eql(v9param,VV[24]))) { goto L139; }
     cl_set(VV[37],ECL_NIL);
     T11 = VV[68];
     goto L123;
L139:;
     if (!((v9param)==(ECL_NIL))) { goto L143; }
     T11 = CODE_CHAR(32);
     goto L123;
L143:;
     T11 = v9param;
    }
L123:;
    T12 = cl_list(2, VV[147], T11);
    {
     cl_object v7param_and_offset;
     cl_object v8offset;
     cl_object v9param;
     {
      cl_object v10;
      v10 = v6;
      {
       cl_object v11;
       v11 = v10;
       if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v10)) { goto L152; }
      {
       cl_object v11;
       v11 = ECL_CONS_CDR(v10);
       v6 = v11;
       v10 = ECL_CONS_CAR(v10);
      }
L152:;
      v7param_and_offset = v10;
     }
     v8offset = ecl_car(v7param_and_offset);
     v9param = ecl_cdr(v7param_and_offset);
     if (!(ecl_eql(v9param,VV[23]))) { goto L160; }
     T14 = L15expand_next_arg(1, v8offset);
     T13 = cl_list(3, ECL_SYM("OR",616), T14, ECL_NIL);
     goto L146;
L160:;
     if (!(ecl_eql(v9param,VV[24]))) { goto L162; }
     cl_set(VV[37],ECL_NIL);
     T13 = VV[68];
     goto L146;
L162:;
     if (!((v9param)==(ECL_NIL))) { goto L166; }
     T13 = ECL_NIL;
     goto L146;
L166:;
     T13 = v9param;
    }
L146:;
    T14 = cl_list(2, VV[148], T13);
    T15 = cl_list(7, T2, T4, T6, T8, T10, T12, T14);
    if (Null(v6)) { goto L170; }
    T17 = ecl_list1(ecl_make_fixnum(7));
    T18 = ecl_caar(v6);
    T16 = cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[70], VV[71], T17, ECL_SYM("OFFSET",1306), T18);
    goto L169;
L170:;
    T16 = ECL_NIL;
L169:;
    T17 = L15expand_next_arg(0);
    T18 = cl_list(11, VV[149], ECL_SYM("STREAM",801), T17, VV[142], VV[143], VV[144], VV[145], VV[146], VV[147], VV[148], v4);
    T19 = ecl_list1(T18);
    T20 = ecl_append(T16,T19);
    T0 = cl_listX(3, ECL_SYM("LET",479), T15, T20);
   }
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v2;
   cl_env_copy->values[0] = T0;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA1067                                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC68__lambda1067(cl_object v1stream, cl_object v2, cl_object v3, cl_object v4orig_args, cl_object v5args)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v6;
   cl_object v7;
   cl_object v8;
   v6 = ecl_function_dispatch(cl_env_copy,VV[311])(1, v2) /*  FORMAT-DIRECTIVE-COLONP */;
   v7 = ecl_function_dispatch(cl_env_copy,VV[312])(1, v2) /*  FORMAT-DIRECTIVE-ATSIGNP */;
   v8 = ecl_function_dispatch(cl_env_copy,VV[313])(1, v2) /*  FORMAT-DIRECTIVE-PARAMS */;
   if (Null(v6)) { goto L4; }
   cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[127]);
L4:;
   {
    cl_object v9;
    v9 = v8;
    {
     cl_object v10w;
     cl_object v11d;
     cl_object v12e;
     cl_object v13k;
     cl_object v14ovf;
     cl_object v15pad;
     cl_object v16mark;
     {
      cl_object v17param_and_offset;
      cl_object v18offset;
      cl_object v19param;
      {
       cl_object v20;
       v20 = v9;
       {
        cl_object v21;
        v21 = v20;
        if (ecl_unlikely(!ECL_LISTP(v21))) FEtype_error_list(v21);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v20)) { goto L14; }
       {
        cl_object v21;
        v21 = ECL_CONS_CDR(v20);
        v9 = v21;
        v20 = ECL_CONS_CAR(v20);
       }
L14:;
       v17param_and_offset = v20;
      }
      v18offset = ecl_car(v17param_and_offset);
      v19param = ecl_cdr(v17param_and_offset);
      if (!(ecl_eql(v19param,VV[23]))) { goto L22; }
      if (!(v5args==ECL_NIL)) { goto L27; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v18offset);
L27:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L29; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L29:;
      {
       cl_object v20;
       v20 = v5args;
       {
        cl_object v21;
        v21 = v20;
        if (ecl_unlikely(!ECL_LISTP(v21))) FEtype_error_list(v21);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v20)) { goto L35; }
       {
        cl_object v21;
        v21 = ECL_CONS_CDR(v20);
        v5args = v21;
        v20 = ECL_CONS_CAR(v20);
       }
L35:;
       value0 = v20;
      }
      if ((value0)!=ECL_NIL) { goto L25; }
      v10w = ECL_NIL;
      goto L8;
L25:;
      v10w = value0;
      goto L8;
L22:;
      if (!(ecl_eql(v19param,VV[24]))) { goto L41; }
      v10w = ecl_make_fixnum(ecl_length(v5args));
      goto L8;
L41:;
      if (!((v19param)==(ECL_NIL))) { goto L43; }
      v10w = ECL_NIL;
      goto L8;
L43:;
      v10w = v19param;
     }
L8:;
     {
      cl_object v17param_and_offset;
      cl_object v18offset;
      cl_object v19param;
      {
       cl_object v20;
       v20 = v9;
       {
        cl_object v21;
        v21 = v20;
        if (ecl_unlikely(!ECL_LISTP(v21))) FEtype_error_list(v21);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v20)) { goto L52; }
       {
        cl_object v21;
        v21 = ECL_CONS_CDR(v20);
        v9 = v21;
        v20 = ECL_CONS_CAR(v20);
       }
L52:;
       v17param_and_offset = v20;
      }
      v18offset = ecl_car(v17param_and_offset);
      v19param = ecl_cdr(v17param_and_offset);
      if (!(ecl_eql(v19param,VV[23]))) { goto L60; }
      if (!(v5args==ECL_NIL)) { goto L65; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v18offset);
L65:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L67; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L67:;
      {
       cl_object v20;
       v20 = v5args;
       {
        cl_object v21;
        v21 = v20;
        if (ecl_unlikely(!ECL_LISTP(v21))) FEtype_error_list(v21);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v20)) { goto L73; }
       {
        cl_object v21;
        v21 = ECL_CONS_CDR(v20);
        v5args = v21;
        v20 = ECL_CONS_CAR(v20);
       }
L73:;
       value0 = v20;
      }
      if ((value0)!=ECL_NIL) { goto L63; }
      v11d = ECL_NIL;
      goto L46;
L63:;
      v11d = value0;
      goto L46;
L60:;
      if (!(ecl_eql(v19param,VV[24]))) { goto L79; }
      v11d = ecl_make_fixnum(ecl_length(v5args));
      goto L46;
L79:;
      if (!((v19param)==(ECL_NIL))) { goto L81; }
      v11d = ECL_NIL;
      goto L46;
L81:;
      v11d = v19param;
     }
L46:;
     {
      cl_object v17param_and_offset;
      cl_object v18offset;
      cl_object v19param;
      {
       cl_object v20;
       v20 = v9;
       {
        cl_object v21;
        v21 = v20;
        if (ecl_unlikely(!ECL_LISTP(v21))) FEtype_error_list(v21);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v20)) { goto L90; }
       {
        cl_object v21;
        v21 = ECL_CONS_CDR(v20);
        v9 = v21;
        v20 = ECL_CONS_CAR(v20);
       }
L90:;
       v17param_and_offset = v20;
      }
      v18offset = ecl_car(v17param_and_offset);
      v19param = ecl_cdr(v17param_and_offset);
      if (!(ecl_eql(v19param,VV[23]))) { goto L98; }
      if (!(v5args==ECL_NIL)) { goto L103; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v18offset);
L103:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L105; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L105:;
      {
       cl_object v20;
       v20 = v5args;
       {
        cl_object v21;
        v21 = v20;
        if (ecl_unlikely(!ECL_LISTP(v21))) FEtype_error_list(v21);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v20)) { goto L111; }
       {
        cl_object v21;
        v21 = ECL_CONS_CDR(v20);
        v5args = v21;
        v20 = ECL_CONS_CAR(v20);
       }
L111:;
       value0 = v20;
      }
      if ((value0)!=ECL_NIL) { goto L101; }
      v12e = ECL_NIL;
      goto L84;
L101:;
      v12e = value0;
      goto L84;
L98:;
      if (!(ecl_eql(v19param,VV[24]))) { goto L117; }
      v12e = ecl_make_fixnum(ecl_length(v5args));
      goto L84;
L117:;
      if (!((v19param)==(ECL_NIL))) { goto L119; }
      v12e = ECL_NIL;
      goto L84;
L119:;
      v12e = v19param;
     }
L84:;
     {
      cl_object v17param_and_offset;
      cl_object v18offset;
      cl_object v19param;
      {
       cl_object v20;
       v20 = v9;
       {
        cl_object v21;
        v21 = v20;
        if (ecl_unlikely(!ECL_LISTP(v21))) FEtype_error_list(v21);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v20)) { goto L128; }
       {
        cl_object v21;
        v21 = ECL_CONS_CDR(v20);
        v9 = v21;
        v20 = ECL_CONS_CAR(v20);
       }
L128:;
       v17param_and_offset = v20;
      }
      v18offset = ecl_car(v17param_and_offset);
      v19param = ecl_cdr(v17param_and_offset);
      if (!(ecl_eql(v19param,VV[23]))) { goto L136; }
      if (!(v5args==ECL_NIL)) { goto L141; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v18offset);
L141:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L143; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L143:;
      {
       cl_object v20;
       v20 = v5args;
       {
        cl_object v21;
        v21 = v20;
        if (ecl_unlikely(!ECL_LISTP(v21))) FEtype_error_list(v21);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v20)) { goto L149; }
       {
        cl_object v21;
        v21 = ECL_CONS_CDR(v20);
        v5args = v21;
        v20 = ECL_CONS_CAR(v20);
       }
L149:;
       value0 = v20;
      }
      if ((value0)!=ECL_NIL) { goto L139; }
      v13k = ecl_make_fixnum(0);
      goto L122;
L139:;
      v13k = value0;
      goto L122;
L136:;
      if (!(ecl_eql(v19param,VV[24]))) { goto L155; }
      v13k = ecl_make_fixnum(ecl_length(v5args));
      goto L122;
L155:;
      if (!((v19param)==(ECL_NIL))) { goto L157; }
      v13k = ecl_make_fixnum(0);
      goto L122;
L157:;
      v13k = v19param;
     }
L122:;
     {
      cl_object v17param_and_offset;
      cl_object v18offset;
      cl_object v19param;
      {
       cl_object v20;
       v20 = v9;
       {
        cl_object v21;
        v21 = v20;
        if (ecl_unlikely(!ECL_LISTP(v21))) FEtype_error_list(v21);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v20)) { goto L166; }
       {
        cl_object v21;
        v21 = ECL_CONS_CDR(v20);
        v9 = v21;
        v20 = ECL_CONS_CAR(v20);
       }
L166:;
       v17param_and_offset = v20;
      }
      v18offset = ecl_car(v17param_and_offset);
      v19param = ecl_cdr(v17param_and_offset);
      if (!(ecl_eql(v19param,VV[23]))) { goto L174; }
      if (!(v5args==ECL_NIL)) { goto L179; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v18offset);
L179:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L181; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L181:;
      {
       cl_object v20;
       v20 = v5args;
       {
        cl_object v21;
        v21 = v20;
        if (ecl_unlikely(!ECL_LISTP(v21))) FEtype_error_list(v21);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v20)) { goto L187; }
       {
        cl_object v21;
        v21 = ECL_CONS_CDR(v20);
        v5args = v21;
        v20 = ECL_CONS_CAR(v20);
       }
L187:;
       value0 = v20;
      }
      if ((value0)!=ECL_NIL) { goto L177; }
      v14ovf = ECL_NIL;
      goto L160;
L177:;
      v14ovf = value0;
      goto L160;
L174:;
      if (!(ecl_eql(v19param,VV[24]))) { goto L193; }
      v14ovf = ecl_make_fixnum(ecl_length(v5args));
      goto L160;
L193:;
      if (!((v19param)==(ECL_NIL))) { goto L195; }
      v14ovf = ECL_NIL;
      goto L160;
L195:;
      v14ovf = v19param;
     }
L160:;
     {
      cl_object v17param_and_offset;
      cl_object v18offset;
      cl_object v19param;
      {
       cl_object v20;
       v20 = v9;
       {
        cl_object v21;
        v21 = v20;
        if (ecl_unlikely(!ECL_LISTP(v21))) FEtype_error_list(v21);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v20)) { goto L204; }
       {
        cl_object v21;
        v21 = ECL_CONS_CDR(v20);
        v9 = v21;
        v20 = ECL_CONS_CAR(v20);
       }
L204:;
       v17param_and_offset = v20;
      }
      v18offset = ecl_car(v17param_and_offset);
      v19param = ecl_cdr(v17param_and_offset);
      if (!(ecl_eql(v19param,VV[23]))) { goto L212; }
      if (!(v5args==ECL_NIL)) { goto L217; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v18offset);
L217:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L219; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L219:;
      {
       cl_object v20;
       v20 = v5args;
       {
        cl_object v21;
        v21 = v20;
        if (ecl_unlikely(!ECL_LISTP(v21))) FEtype_error_list(v21);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v20)) { goto L225; }
       {
        cl_object v21;
        v21 = ECL_CONS_CDR(v20);
        v5args = v21;
        v20 = ECL_CONS_CAR(v20);
       }
L225:;
       value0 = v20;
      }
      if ((value0)!=ECL_NIL) { goto L215; }
      v15pad = CODE_CHAR(32);
      goto L198;
L215:;
      v15pad = value0;
      goto L198;
L212:;
      if (!(ecl_eql(v19param,VV[24]))) { goto L231; }
      v15pad = ecl_make_fixnum(ecl_length(v5args));
      goto L198;
L231:;
      if (!((v19param)==(ECL_NIL))) { goto L233; }
      v15pad = CODE_CHAR(32);
      goto L198;
L233:;
      v15pad = v19param;
     }
L198:;
     {
      cl_object v17param_and_offset;
      cl_object v18offset;
      cl_object v19param;
      {
       cl_object v20;
       v20 = v9;
       {
        cl_object v21;
        v21 = v20;
        if (ecl_unlikely(!ECL_LISTP(v21))) FEtype_error_list(v21);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v20)) { goto L242; }
       {
        cl_object v21;
        v21 = ECL_CONS_CDR(v20);
        v9 = v21;
        v20 = ECL_CONS_CAR(v20);
       }
L242:;
       v17param_and_offset = v20;
      }
      v18offset = ecl_car(v17param_and_offset);
      v19param = ecl_cdr(v17param_and_offset);
      if (!(ecl_eql(v19param,VV[23]))) { goto L250; }
      if (!(v5args==ECL_NIL)) { goto L255; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v18offset);
L255:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L257; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L257:;
      {
       cl_object v20;
       v20 = v5args;
       {
        cl_object v21;
        v21 = v20;
        if (ecl_unlikely(!ECL_LISTP(v21))) FEtype_error_list(v21);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v20)) { goto L263; }
       {
        cl_object v21;
        v21 = ECL_CONS_CDR(v20);
        v5args = v21;
        v20 = ECL_CONS_CAR(v20);
       }
L263:;
       value0 = v20;
      }
      if ((value0)!=ECL_NIL) { goto L253; }
      v16mark = ECL_NIL;
      goto L236;
L253:;
      v16mark = value0;
      goto L236;
L250:;
      if (!(ecl_eql(v19param,VV[24]))) { goto L269; }
      v16mark = ecl_make_fixnum(ecl_length(v5args));
      goto L236;
L269:;
      if (!((v19param)==(ECL_NIL))) { goto L271; }
      v16mark = ECL_NIL;
      goto L236;
L271:;
      v16mark = v19param;
     }
L236:;
     if (Null(v9)) { goto L274; }
     T0 = ecl_list1(ecl_make_fixnum(7));
     T1 = ecl_caar(v9);
     cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[70], VV[71], T0, ECL_SYM("OFFSET",1306), T1);
L274:;
     if (!(v5args==ECL_NIL)) { goto L276; }
     cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57]);
L276:;
     if (Null(ecl_symbol_value(VV[34]))) { goto L278; }
     ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L278:;
     {
      cl_object v17;
      v17 = v5args;
      {
       cl_object v18;
       v18 = v17;
       if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v17)) { goto L285; }
      {
       cl_object v18;
       v18 = ECL_CONS_CDR(v17);
       v5args = v18;
       v17 = ECL_CONS_CAR(v17);
      }
L285:;
      T0 = v17;
     }
     L69format_general(v1stream, T0, v10w, v11d, v12e, v13k, v14ovf, v15pad, v16mark, v7);
    }
   }
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v5args;
   cl_env_copy->values[0] = v3;
   return cl_env_copy->values[0];
  }
 }
}
/*      function definition for FORMAT-GENERAL                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L69format_general(cl_object v1stream, cl_object v2number, cl_object v3w, cl_object v4d, cl_object v5e, cl_object v6k, cl_object v7ovf, cl_object v8pad, cl_object v9marker, cl_object v10atsign)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  ecl_character v11pad;
  v11pad = ecl_char_code(v8pad);
TTL:
  if (!(ecl_numberp(v2number))) { goto L1; }
  if (!(floatp(v2number))) { goto L3; }
  value0 = L70format_general_aux(v1stream, v2number, v3w, v4d, v5e, v6k, v7ovf, CODE_CHAR(v11pad), v9marker, v10atsign);
  return value0;
L3:;
  if (Null(cl_rationalp(v2number))) { goto L5; }
  {
   float v12;
   {
    cl_object v13c__value;
    v13c__value = v2number;
    v12 = ecl_to_float(v13c__value);
   }
   value0 = L70format_general_aux(v1stream, ecl_make_single_float(v12), v3w, v4d, v5e, v6k, v7ovf, CODE_CHAR(v11pad), v9marker, v10atsign);
   return value0;
  }
L5:;
  T0 = L57decimal_string(v2number);
  value0 = L23format_write_field(v1stream, T0, v3w, ecl_make_fixnum(1), ecl_make_fixnum(0), CODE_CHAR(32), ECL_T);
  return value0;
L1:;
  value0 = L24format_princ(v1stream, v2number, ECL_NIL, ECL_NIL, v3w, ecl_make_fixnum(1), ecl_make_fixnum(0), CODE_CHAR(v11pad));
  return value0;
 }
}
/*      function definition for FORMAT-GENERAL-AUX                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L70format_general_aux(cl_object v1stream, cl_object v2number, cl_object v3w, cl_object v4d, cl_object v5e, cl_object v6k, cl_object v7ovf, cl_object v8pad, cl_object v9marker, cl_object v10atsign)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(floatp(v2number))) { goto L1; }
  if ((si_float_infinity_p(v2number))!=ECL_NIL) { goto L4; }
  if (Null(si_float_nan_p(v2number))) { goto L1; }
  goto L2;
L4:;
L2:;
  value0 = ecl_prin1(v2number,v1stream);
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  {
   cl_object v11n;
   v11n = L3exponent_in_base10(v2number);
   if ((v4d)!=ECL_NIL) { goto L7; }
   {
    cl_object v13;                                /*  LEN             */
    T0 = cl_abs(v2number);
    value0 = L2flonum_to_string(1, T0);
    {
     const int v14 = cl_env_copy->nvalues;
     cl_object v15;
     v15 = (v14<=1)? ECL_NIL : cl_env_copy->values[1];
     v13 = v15;
    }
    {
     cl_object v14q;
     if (!(ecl_number_equalp(v13,ecl_make_fixnum(1)))) { goto L11; }
     v14q = ecl_make_fixnum(1);
     goto L10;
L11:;
     v14q = ecl_one_minus(v13);
L10:;
     T0 = ((ecl_float_nan_p(ecl_make_fixnum(7)) || ecl_lowereq(v11n,ecl_make_fixnum(7)))?v11n:ecl_make_fixnum(7));
     v4d = ((ecl_float_nan_p(T0) || ecl_greatereq(v14q,T0))?v14q:T0);
    }
   }
L7:;
   {
    cl_object v12ee;
    cl_object v13ww;
    cl_object v14dd;
    if (Null(v5e)) { goto L15; }
    v12ee = ecl_plus(v5e,ecl_make_fixnum(2));
    goto L14;
L15:;
    v12ee = ecl_make_fixnum(4);
L14:;
    if (Null(v3w)) { goto L18; }
    v13ww = ecl_minus(v3w,v12ee);
    goto L17;
L18:;
    v13ww = ECL_NIL;
L17:;
    v14dd = ecl_minus(v4d,v11n);
    if (Null(cl_LE(3, ecl_make_fixnum(0), v14dd, v4d))) { goto L21; }
    {
     cl_object v15char;
     if (Null(L61format_fixed_aux(v1stream, v2number, v13ww, v14dd, ecl_make_fixnum(0), v7ovf, v8pad, v10atsign))) { goto L24; }
     v15char = v7ovf;
     goto L23;
L24:;
     v15char = CODE_CHAR(32);
L23:;
     {
      cl_object v16i;
      v16i = ecl_make_fixnum(0);
      goto L28;
L27:;
      cl_write_char(2, v15char, v1stream);
      v16i = ecl_one_plus(v16i);
L28:;
      if (!(ecl_lower(v16i,v12ee))) { goto L33; }
      goto L27;
L33:;
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 1;
      return value0;
     }
    }
L21:;
    value0 = v6k;
    if ((value0)!=ECL_NIL) { goto L37; }
    T0 = ecl_make_fixnum(1);
    goto L35;
L37:;
    T0 = value0;
    goto L35;
L35:;
    value0 = L66format_exp_aux(v1stream, v2number, v3w, v4d, v5e, T0, v7ovf, v8pad, v9marker, v10atsign);
    return value0;
   }
  }
 }
}
/*      local function DOLLAR_SIGN-FORMAT-DIRECTIVE-EXPANDER          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC71dollar_sign_format_directive_expander(cl_object v1, cl_object v2)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14;
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
   v3 = ecl_function_dispatch(cl_env_copy,VV[311])(1, v1) /*  FORMAT-DIRECTIVE-COLONP */;
   v4 = ecl_function_dispatch(cl_env_copy,VV[312])(1, v1) /*  FORMAT-DIRECTIVE-ATSIGNP */;
   v5 = ecl_function_dispatch(cl_env_copy,VV[313])(1, v1) /*  FORMAT-DIRECTIVE-PARAMS */;
   {
    cl_object v6;
    v6 = v5;
    {
     cl_object v7param_and_offset;
     cl_object v8offset;
     cl_object v9param;
     {
      cl_object v10;
      v10 = v6;
      {
       cl_object v11;
       v11 = v10;
       if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v10)) { goto L12; }
      {
       cl_object v11;
       v11 = ECL_CONS_CDR(v10);
       v6 = v11;
       v10 = ECL_CONS_CAR(v10);
      }
L12:;
      v7param_and_offset = v10;
     }
     v8offset = ecl_car(v7param_and_offset);
     v9param = ecl_cdr(v7param_and_offset);
     if (!(ecl_eql(v9param,VV[23]))) { goto L20; }
     T2 = L15expand_next_arg(1, v8offset);
     T1 = cl_list(3, ECL_SYM("OR",616), T2, ecl_make_fixnum(2));
     goto L6;
L20:;
     if (!(ecl_eql(v9param,VV[24]))) { goto L22; }
     cl_set(VV[37],ECL_NIL);
     T1 = VV[68];
     goto L6;
L22:;
     if (!((v9param)==(ECL_NIL))) { goto L26; }
     T1 = ecl_make_fixnum(2);
     goto L6;
L26:;
     T1 = v9param;
    }
L6:;
    T2 = cl_list(2, VV[150], T1);
    {
     cl_object v7param_and_offset;
     cl_object v8offset;
     cl_object v9param;
     {
      cl_object v10;
      v10 = v6;
      {
       cl_object v11;
       v11 = v10;
       if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v10)) { goto L35; }
      {
       cl_object v11;
       v11 = ECL_CONS_CDR(v10);
       v6 = v11;
       v10 = ECL_CONS_CAR(v10);
      }
L35:;
      v7param_and_offset = v10;
     }
     v8offset = ecl_car(v7param_and_offset);
     v9param = ecl_cdr(v7param_and_offset);
     if (!(ecl_eql(v9param,VV[23]))) { goto L43; }
     T4 = L15expand_next_arg(1, v8offset);
     T3 = cl_list(3, ECL_SYM("OR",616), T4, ecl_make_fixnum(1));
     goto L29;
L43:;
     if (!(ecl_eql(v9param,VV[24]))) { goto L45; }
     cl_set(VV[37],ECL_NIL);
     T3 = VV[68];
     goto L29;
L45:;
     if (!((v9param)==(ECL_NIL))) { goto L49; }
     T3 = ecl_make_fixnum(1);
     goto L29;
L49:;
     T3 = v9param;
    }
L29:;
    T4 = cl_list(2, VV[151], T3);
    {
     cl_object v7param_and_offset;
     cl_object v8offset;
     cl_object v9param;
     {
      cl_object v10;
      v10 = v6;
      {
       cl_object v11;
       v11 = v10;
       if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v10)) { goto L58; }
      {
       cl_object v11;
       v11 = ECL_CONS_CDR(v10);
       v6 = v11;
       v10 = ECL_CONS_CAR(v10);
      }
L58:;
      v7param_and_offset = v10;
     }
     v8offset = ecl_car(v7param_and_offset);
     v9param = ecl_cdr(v7param_and_offset);
     if (!(ecl_eql(v9param,VV[23]))) { goto L66; }
     T6 = L15expand_next_arg(1, v8offset);
     T5 = cl_list(3, ECL_SYM("OR",616), T6, ecl_make_fixnum(0));
     goto L52;
L66:;
     if (!(ecl_eql(v9param,VV[24]))) { goto L68; }
     cl_set(VV[37],ECL_NIL);
     T5 = VV[68];
     goto L52;
L68:;
     if (!((v9param)==(ECL_NIL))) { goto L72; }
     T5 = ecl_make_fixnum(0);
     goto L52;
L72:;
     T5 = v9param;
    }
L52:;
    T6 = cl_list(2, VV[152], T5);
    {
     cl_object v7param_and_offset;
     cl_object v8offset;
     cl_object v9param;
     {
      cl_object v10;
      v10 = v6;
      {
       cl_object v11;
       v11 = v10;
       if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v10)) { goto L81; }
      {
       cl_object v11;
       v11 = ECL_CONS_CDR(v10);
       v6 = v11;
       v10 = ECL_CONS_CAR(v10);
      }
L81:;
      v7param_and_offset = v10;
     }
     v8offset = ecl_car(v7param_and_offset);
     v9param = ecl_cdr(v7param_and_offset);
     if (!(ecl_eql(v9param,VV[23]))) { goto L89; }
     T8 = L15expand_next_arg(1, v8offset);
     T7 = cl_list(3, ECL_SYM("OR",616), T8, CODE_CHAR(32));
     goto L75;
L89:;
     if (!(ecl_eql(v9param,VV[24]))) { goto L91; }
     cl_set(VV[37],ECL_NIL);
     T7 = VV[68];
     goto L75;
L91:;
     if (!((v9param)==(ECL_NIL))) { goto L95; }
     T7 = CODE_CHAR(32);
     goto L75;
L95:;
     T7 = v9param;
    }
L75:;
    T8 = cl_list(2, VV[153], T7);
    T9 = cl_list(4, T2, T4, T6, T8);
    if (Null(v6)) { goto L99; }
    T11 = ecl_list1(ecl_make_fixnum(4));
    T12 = ecl_caar(v6);
    T10 = cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[70], VV[71], T11, ECL_SYM("OFFSET",1306), T12);
    goto L98;
L99:;
    T10 = ECL_NIL;
L98:;
    T11 = L15expand_next_arg(0);
    T12 = cl_list(9, VV[154], ECL_SYM("STREAM",801), T11, VV[150], VV[151], VV[152], VV[153], v3, v4);
    T13 = ecl_list1(T12);
    T14 = ecl_append(T10,T13);
    T0 = cl_listX(3, ECL_SYM("LET",479), T9, T14);
   }
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v2;
   cl_env_copy->values[0] = T0;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA1157                                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC72__lambda1157(cl_object v1stream, cl_object v2, cl_object v3, cl_object v4orig_args, cl_object v5args)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v6;
   cl_object v7;
   cl_object v8;
   v6 = ecl_function_dispatch(cl_env_copy,VV[311])(1, v2) /*  FORMAT-DIRECTIVE-COLONP */;
   v7 = ecl_function_dispatch(cl_env_copy,VV[312])(1, v2) /*  FORMAT-DIRECTIVE-ATSIGNP */;
   v8 = ecl_function_dispatch(cl_env_copy,VV[313])(1, v2) /*  FORMAT-DIRECTIVE-PARAMS */;
   {
    cl_object v9;
    v9 = v8;
    {
     cl_object v10d;
     cl_object v11n;
     cl_object v12w;
     cl_object v13pad;
     {
      cl_object v14param_and_offset;
      cl_object v15offset;
      cl_object v16param;
      {
       cl_object v17;
       v17 = v9;
       {
        cl_object v18;
        v18 = v17;
        if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v17)) { goto L12; }
       {
        cl_object v18;
        v18 = ECL_CONS_CDR(v17);
        v9 = v18;
        v17 = ECL_CONS_CAR(v17);
       }
L12:;
       v14param_and_offset = v17;
      }
      v15offset = ecl_car(v14param_and_offset);
      v16param = ecl_cdr(v14param_and_offset);
      if (!(ecl_eql(v16param,VV[23]))) { goto L20; }
      if (!(v5args==ECL_NIL)) { goto L25; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v15offset);
L25:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L27; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L27:;
      {
       cl_object v17;
       v17 = v5args;
       {
        cl_object v18;
        v18 = v17;
        if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v17)) { goto L33; }
       {
        cl_object v18;
        v18 = ECL_CONS_CDR(v17);
        v5args = v18;
        v17 = ECL_CONS_CAR(v17);
       }
L33:;
       value0 = v17;
      }
      if ((value0)!=ECL_NIL) { goto L23; }
      v10d = ecl_make_fixnum(2);
      goto L6;
L23:;
      v10d = value0;
      goto L6;
L20:;
      if (!(ecl_eql(v16param,VV[24]))) { goto L39; }
      v10d = ecl_make_fixnum(ecl_length(v5args));
      goto L6;
L39:;
      if (!((v16param)==(ECL_NIL))) { goto L41; }
      v10d = ecl_make_fixnum(2);
      goto L6;
L41:;
      v10d = v16param;
     }
L6:;
     {
      cl_object v14param_and_offset;
      cl_object v15offset;
      cl_object v16param;
      {
       cl_object v17;
       v17 = v9;
       {
        cl_object v18;
        v18 = v17;
        if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v17)) { goto L50; }
       {
        cl_object v18;
        v18 = ECL_CONS_CDR(v17);
        v9 = v18;
        v17 = ECL_CONS_CAR(v17);
       }
L50:;
       v14param_and_offset = v17;
      }
      v15offset = ecl_car(v14param_and_offset);
      v16param = ecl_cdr(v14param_and_offset);
      if (!(ecl_eql(v16param,VV[23]))) { goto L58; }
      if (!(v5args==ECL_NIL)) { goto L63; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v15offset);
L63:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L65; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L65:;
      {
       cl_object v17;
       v17 = v5args;
       {
        cl_object v18;
        v18 = v17;
        if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v17)) { goto L71; }
       {
        cl_object v18;
        v18 = ECL_CONS_CDR(v17);
        v5args = v18;
        v17 = ECL_CONS_CAR(v17);
       }
L71:;
       value0 = v17;
      }
      if ((value0)!=ECL_NIL) { goto L61; }
      v11n = ecl_make_fixnum(1);
      goto L44;
L61:;
      v11n = value0;
      goto L44;
L58:;
      if (!(ecl_eql(v16param,VV[24]))) { goto L77; }
      v11n = ecl_make_fixnum(ecl_length(v5args));
      goto L44;
L77:;
      if (!((v16param)==(ECL_NIL))) { goto L79; }
      v11n = ecl_make_fixnum(1);
      goto L44;
L79:;
      v11n = v16param;
     }
L44:;
     {
      cl_object v14param_and_offset;
      cl_object v15offset;
      cl_object v16param;
      {
       cl_object v17;
       v17 = v9;
       {
        cl_object v18;
        v18 = v17;
        if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v17)) { goto L88; }
       {
        cl_object v18;
        v18 = ECL_CONS_CDR(v17);
        v9 = v18;
        v17 = ECL_CONS_CAR(v17);
       }
L88:;
       v14param_and_offset = v17;
      }
      v15offset = ecl_car(v14param_and_offset);
      v16param = ecl_cdr(v14param_and_offset);
      if (!(ecl_eql(v16param,VV[23]))) { goto L96; }
      if (!(v5args==ECL_NIL)) { goto L101; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v15offset);
L101:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L103; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L103:;
      {
       cl_object v17;
       v17 = v5args;
       {
        cl_object v18;
        v18 = v17;
        if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v17)) { goto L109; }
       {
        cl_object v18;
        v18 = ECL_CONS_CDR(v17);
        v5args = v18;
        v17 = ECL_CONS_CAR(v17);
       }
L109:;
       value0 = v17;
      }
      if ((value0)!=ECL_NIL) { goto L99; }
      v12w = ecl_make_fixnum(0);
      goto L82;
L99:;
      v12w = value0;
      goto L82;
L96:;
      if (!(ecl_eql(v16param,VV[24]))) { goto L115; }
      v12w = ecl_make_fixnum(ecl_length(v5args));
      goto L82;
L115:;
      if (!((v16param)==(ECL_NIL))) { goto L117; }
      v12w = ecl_make_fixnum(0);
      goto L82;
L117:;
      v12w = v16param;
     }
L82:;
     {
      cl_object v14param_and_offset;
      cl_object v15offset;
      cl_object v16param;
      {
       cl_object v17;
       v17 = v9;
       {
        cl_object v18;
        v18 = v17;
        if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v17)) { goto L126; }
       {
        cl_object v18;
        v18 = ECL_CONS_CDR(v17);
        v9 = v18;
        v17 = ECL_CONS_CAR(v17);
       }
L126:;
       v14param_and_offset = v17;
      }
      v15offset = ecl_car(v14param_and_offset);
      v16param = ecl_cdr(v14param_and_offset);
      if (!(ecl_eql(v16param,VV[23]))) { goto L134; }
      if (!(v5args==ECL_NIL)) { goto L139; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v15offset);
L139:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L141; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L141:;
      {
       cl_object v17;
       v17 = v5args;
       {
        cl_object v18;
        v18 = v17;
        if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v17)) { goto L147; }
       {
        cl_object v18;
        v18 = ECL_CONS_CDR(v17);
        v5args = v18;
        v17 = ECL_CONS_CAR(v17);
       }
L147:;
       value0 = v17;
      }
      if ((value0)!=ECL_NIL) { goto L137; }
      v13pad = CODE_CHAR(32);
      goto L120;
L137:;
      v13pad = value0;
      goto L120;
L134:;
      if (!(ecl_eql(v16param,VV[24]))) { goto L153; }
      v13pad = ecl_make_fixnum(ecl_length(v5args));
      goto L120;
L153:;
      if (!((v16param)==(ECL_NIL))) { goto L155; }
      v13pad = CODE_CHAR(32);
      goto L120;
L155:;
      v13pad = v16param;
     }
L120:;
     if (Null(v9)) { goto L158; }
     T0 = ecl_list1(ecl_make_fixnum(4));
     T1 = ecl_caar(v9);
     cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[70], VV[71], T0, ECL_SYM("OFFSET",1306), T1);
L158:;
     if (!(v5args==ECL_NIL)) { goto L160; }
     cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57]);
L160:;
     if (Null(ecl_symbol_value(VV[34]))) { goto L162; }
     ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L162:;
     {
      cl_object v14;
      v14 = v5args;
      {
       cl_object v15;
       v15 = v14;
       if (ecl_unlikely(!ECL_LISTP(v15))) FEtype_error_list(v15);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v14)) { goto L169; }
      {
       cl_object v15;
       v15 = ECL_CONS_CDR(v14);
       v5args = v15;
       v14 = ECL_CONS_CAR(v14);
      }
L169:;
      T0 = v14;
     }
     L73format_dollars(v1stream, T0, v10d, v11n, v12w, v13pad, v6, v7);
    }
   }
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v5args;
   cl_env_copy->values[0] = v3;
   return cl_env_copy->values[0];
  }
 }
}
/*      function definition for FORMAT-DOLLARS                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L73format_dollars(cl_object v1stream, cl_object v2number, cl_object v3d, cl_object v4n, cl_object v5w, cl_object v6pad, cl_object v7colon, cl_object v8atsign)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  ecl_character v9pad;
  v9pad = ecl_char_code(v6pad);
TTL:
  if (Null(cl_rationalp(v2number))) { goto L1; }
  {
   cl_object v10c__value;
   v10c__value = v2number;
   v2number = ecl_make_single_float(ecl_to_float(v10c__value));
  }
L1:;
  if (!(floatp(v2number))) { goto L5; }
  {
   cl_object v10signstr;
   cl_fixnum v11signlen;
   if (!(ecl_minusp(v2number))) { goto L8; }
   v10signstr = VV[83];
   goto L7;
L8:;
   if (Null(v8atsign)) { goto L10; }
   v10signstr = VV[84];
   goto L7;
L10:;
   v10signstr = VV[155];
L7:;
   v11signlen = ecl_length(v10signstr);
   {
    cl_object v13;                                /*  STR             */
    cl_object v14;                                /*  STRLEN          */
    cl_object v15;                                /*  POINTPLACE      */
    T0 = cl_abs(v2number);
    value0 = L2flonum_to_string(3, T0, ECL_NIL, v3d);
    {
     const int v16 = cl_env_copy->nvalues;
     v13 = value0;
     cl_object v17;
     v17 = (v16<=1)? ECL_NIL : cl_env_copy->values[1];
     v14 = v17;
     v17 = (v16<=4)? ECL_NIL : cl_env_copy->values[4];
     v15 = v17;
    }
    if (Null(v7colon)) { goto L14; }
    cl_write_string(2, v10signstr, v1stream);
L14:;
    {
     cl_object v16;
     T0 = ecl_minus(v5w,ecl_make_fixnum(v11signlen));
     T1 = ecl_minus(v4n,v15);
     T2 = ((ecl_float_nan_p(T1) || ecl_greatereq(ecl_make_fixnum(0),T1))?ecl_make_fixnum(0):T1);
     T3 = ecl_minus(T0,T2);
     v16 = ecl_minus(T3,v14);
     {
      cl_object v17i;
      v17i = ecl_make_fixnum(0);
      goto L20;
L19:;
      cl_write_char(2, CODE_CHAR(v9pad), v1stream);
      v17i = ecl_one_plus(v17i);
L20:;
      if (!(ecl_lower(v17i,v16))) { goto L25; }
      goto L19;
L25:;
     }
    }
    if ((v7colon)!=ECL_NIL) { goto L27; }
    cl_write_string(2, v10signstr, v1stream);
L27:;
    {
     cl_object v16;
     v16 = ecl_minus(v4n,v15);
     {
      cl_object v17i;
      v17i = ecl_make_fixnum(0);
      goto L33;
L32:;
      cl_write_char(2, CODE_CHAR(48), v1stream);
      v17i = ecl_one_plus(v17i);
L33:;
      if (!(ecl_lower(v17i,v16))) { goto L38; }
      goto L32;
L38:;
     }
    }
    value0 = cl_write_string(2, v13, v1stream);
    return value0;
   }
  }
L5:;
  T0 = L57decimal_string(v2number);
  value0 = L23format_write_field(v1stream, T0, v5w, ecl_make_fixnum(1), ecl_make_fixnum(0), CODE_CHAR(32), ECL_T);
  return value0;
 }
}
/*      local function PERCENT_SIGN-FORMAT-DIRECTIVE-EXPANDER         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC74percent_sign_format_directive_expander(cl_object v1, cl_object v2)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8;
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
   v3 = ecl_function_dispatch(cl_env_copy,VV[311])(1, v1) /*  FORMAT-DIRECTIVE-COLONP */;
   v4 = ecl_function_dispatch(cl_env_copy,VV[312])(1, v1) /*  FORMAT-DIRECTIVE-ATSIGNP */;
   v5 = ecl_function_dispatch(cl_env_copy,VV[313])(1, v1) /*  FORMAT-DIRECTIVE-PARAMS */;
   if ((v3)!=ECL_NIL) { goto L6; }
   if (Null(v4)) { goto L4; }
   goto L5;
L6:;
L5:;
   cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[156]);
L4:;
   if (Null(v5)) { goto L9; }
   {
    cl_object v6;
    v6 = v5;
    {
     cl_object v7param_and_offset;
     cl_object v8offset;
     cl_object v9param;
     {
      cl_object v10;
      v10 = v6;
      {
       cl_object v11;
       v11 = v10;
       if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v10)) { goto L18; }
      {
       cl_object v11;
       v11 = ECL_CONS_CDR(v10);
       v6 = v11;
       v10 = ECL_CONS_CAR(v10);
      }
L18:;
      v7param_and_offset = v10;
     }
     v8offset = ecl_car(v7param_and_offset);
     v9param = ecl_cdr(v7param_and_offset);
     if (!(ecl_eql(v9param,VV[23]))) { goto L26; }
     T2 = L15expand_next_arg(1, v8offset);
     T1 = cl_list(3, ECL_SYM("OR",616), T2, ecl_make_fixnum(1));
     goto L12;
L26:;
     if (!(ecl_eql(v9param,VV[24]))) { goto L28; }
     cl_set(VV[37],ECL_NIL);
     T1 = VV[68];
     goto L12;
L28:;
     if (!((v9param)==(ECL_NIL))) { goto L32; }
     T1 = ecl_make_fixnum(1);
     goto L12;
L32:;
     T1 = v9param;
    }
L12:;
    T2 = cl_list(2, VV[157], T1);
    T3 = ecl_list1(T2);
    if (Null(v6)) { goto L36; }
    T5 = ecl_list1(ecl_make_fixnum(1));
    T6 = ecl_caar(v6);
    T4 = cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[70], VV[71], T5, ECL_SYM("OFFSET",1306), T6);
    goto L35;
L36:;
    T4 = ECL_NIL;
L35:;
    T5 = cl_list(2, VV[158], VV[157]);
    T6 = cl_list(3, ECL_SYM("DOTIMES",316), T5, VV[159]);
    T7 = ecl_list1(T6);
    T8 = ecl_append(T4,T7);
    T0 = cl_listX(3, ECL_SYM("LET",479), T3, T8);
    goto L8;
   }
L9:;
   T0 = VV[159];
L8:;
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v2;
   cl_env_copy->values[0] = T0;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA1212                                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC75__lambda1212(cl_object v1stream, cl_object v2, cl_object v3, cl_object v4orig_args, cl_object v5args)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v6;
   cl_object v7;
   cl_object v8;
   v6 = ecl_function_dispatch(cl_env_copy,VV[311])(1, v2) /*  FORMAT-DIRECTIVE-COLONP */;
   v7 = ecl_function_dispatch(cl_env_copy,VV[312])(1, v2) /*  FORMAT-DIRECTIVE-ATSIGNP */;
   v8 = ecl_function_dispatch(cl_env_copy,VV[313])(1, v2) /*  FORMAT-DIRECTIVE-PARAMS */;
   if ((v6)!=ECL_NIL) { goto L6; }
   if (Null(v7)) { goto L4; }
   goto L5;
L6:;
L5:;
   cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[156]);
L4:;
   {
    cl_object v9;
    v9 = v8;
    {
     cl_object v10count;
     {
      cl_object v11param_and_offset;
      cl_object v12offset;
      cl_object v13param;
      {
       cl_object v14;
       v14 = v9;
       {
        cl_object v15;
        v15 = v14;
        if (ecl_unlikely(!ECL_LISTP(v15))) FEtype_error_list(v15);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v14)) { goto L16; }
       {
        cl_object v15;
        v15 = ECL_CONS_CDR(v14);
        v9 = v15;
        v14 = ECL_CONS_CAR(v14);
       }
L16:;
       v11param_and_offset = v14;
      }
      v12offset = ecl_car(v11param_and_offset);
      v13param = ecl_cdr(v11param_and_offset);
      if (!(ecl_eql(v13param,VV[23]))) { goto L24; }
      if (!(v5args==ECL_NIL)) { goto L29; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v12offset);
L29:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L31; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L31:;
      {
       cl_object v14;
       v14 = v5args;
       {
        cl_object v15;
        v15 = v14;
        if (ecl_unlikely(!ECL_LISTP(v15))) FEtype_error_list(v15);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v14)) { goto L37; }
       {
        cl_object v15;
        v15 = ECL_CONS_CDR(v14);
        v5args = v15;
        v14 = ECL_CONS_CAR(v14);
       }
L37:;
       value0 = v14;
      }
      if ((value0)!=ECL_NIL) { goto L27; }
      v10count = ecl_make_fixnum(1);
      goto L10;
L27:;
      v10count = value0;
      goto L10;
L24:;
      if (!(ecl_eql(v13param,VV[24]))) { goto L43; }
      v10count = ecl_make_fixnum(ecl_length(v5args));
      goto L10;
L43:;
      if (!((v13param)==(ECL_NIL))) { goto L45; }
      v10count = ecl_make_fixnum(1);
      goto L10;
L45:;
      v10count = v13param;
     }
L10:;
     if (Null(v9)) { goto L48; }
     T0 = ecl_list1(ecl_make_fixnum(1));
     T1 = ecl_caar(v9);
     cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[70], VV[71], T0, ECL_SYM("OFFSET",1306), T1);
L48:;
     {
      cl_object v11i;
      v11i = ecl_make_fixnum(0);
      goto L52;
L51:;
      ecl_terpri(v1stream);
      v11i = ecl_one_plus(v11i);
L52:;
      if (!(ecl_lower(v11i,v10count))) { goto L57; }
      goto L51;
L57:;
     }
    }
   }
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v5args;
   cl_env_copy->values[0] = v3;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function AMPERSAND-FORMAT-DIRECTIVE-EXPANDER            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC76ampersand_format_directive_expander(cl_object v1, cl_object v2)
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
   cl_object v4;
   cl_object v5;
   v3 = ecl_function_dispatch(cl_env_copy,VV[311])(1, v1) /*  FORMAT-DIRECTIVE-COLONP */;
   v4 = ecl_function_dispatch(cl_env_copy,VV[312])(1, v1) /*  FORMAT-DIRECTIVE-ATSIGNP */;
   v5 = ecl_function_dispatch(cl_env_copy,VV[313])(1, v1) /*  FORMAT-DIRECTIVE-PARAMS */;
   if ((v3)!=ECL_NIL) { goto L6; }
   if (Null(v4)) { goto L4; }
   goto L5;
L6:;
L5:;
   cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[156]);
L4:;
   if (Null(v5)) { goto L9; }
   {
    cl_object v6;
    v6 = v5;
    {
     cl_object v7param_and_offset;
     cl_object v8offset;
     cl_object v9param;
     {
      cl_object v10;
      v10 = v6;
      {
       cl_object v11;
       v11 = v10;
       if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v10)) { goto L18; }
      {
       cl_object v11;
       v11 = ECL_CONS_CDR(v10);
       v6 = v11;
       v10 = ECL_CONS_CAR(v10);
      }
L18:;
      v7param_and_offset = v10;
     }
     v8offset = ecl_car(v7param_and_offset);
     v9param = ecl_cdr(v7param_and_offset);
     if (!(ecl_eql(v9param,VV[23]))) { goto L26; }
     T2 = L15expand_next_arg(1, v8offset);
     T1 = cl_list(3, ECL_SYM("OR",616), T2, ecl_make_fixnum(1));
     goto L12;
L26:;
     if (!(ecl_eql(v9param,VV[24]))) { goto L28; }
     cl_set(VV[37],ECL_NIL);
     T1 = VV[68];
     goto L12;
L28:;
     if (!((v9param)==(ECL_NIL))) { goto L32; }
     T1 = ecl_make_fixnum(1);
     goto L12;
L32:;
     T1 = v9param;
    }
L12:;
    T2 = cl_list(2, VV[160], T1);
    T3 = ecl_list1(T2);
    if (Null(v6)) { goto L36; }
    T5 = ecl_list1(ecl_make_fixnum(1));
    T6 = ecl_caar(v6);
    T4 = cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[70], VV[71], T5, ECL_SYM("OFFSET",1306), T6);
    goto L35;
L36:;
    T4 = ECL_NIL;
L35:;
    T5 = cl_list(2, ECL_SYM("1-",73), VV[160]);
    T6 = cl_list(2, VV[158], T5);
    T7 = cl_list(3, ECL_SYM("DOTIMES",316), T6, VV[159]);
    T8 = cl_list(3, ECL_SYM("PROGN",673), VV[161], T7);
    T9 = ecl_list1(T8);
    T10 = ecl_append(T4,T9);
    T0 = cl_listX(3, ECL_SYM("LET",479), T3, T10);
    goto L8;
   }
L9:;
   T0 = VV[161];
L8:;
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v2;
   cl_env_copy->values[0] = T0;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA1242                                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC77__lambda1242(cl_object v1stream, cl_object v2, cl_object v3, cl_object v4orig_args, cl_object v5args)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v6;
   cl_object v7;
   cl_object v8;
   v6 = ecl_function_dispatch(cl_env_copy,VV[311])(1, v2) /*  FORMAT-DIRECTIVE-COLONP */;
   v7 = ecl_function_dispatch(cl_env_copy,VV[312])(1, v2) /*  FORMAT-DIRECTIVE-ATSIGNP */;
   v8 = ecl_function_dispatch(cl_env_copy,VV[313])(1, v2) /*  FORMAT-DIRECTIVE-PARAMS */;
   if ((v6)!=ECL_NIL) { goto L6; }
   if (Null(v7)) { goto L4; }
   goto L5;
L6:;
L5:;
   cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[156]);
L4:;
   {
    cl_object v9;
    v9 = v8;
    {
     cl_object v10count;
     {
      cl_object v11param_and_offset;
      cl_object v12offset;
      cl_object v13param;
      {
       cl_object v14;
       v14 = v9;
       {
        cl_object v15;
        v15 = v14;
        if (ecl_unlikely(!ECL_LISTP(v15))) FEtype_error_list(v15);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v14)) { goto L16; }
       {
        cl_object v15;
        v15 = ECL_CONS_CDR(v14);
        v9 = v15;
        v14 = ECL_CONS_CAR(v14);
       }
L16:;
       v11param_and_offset = v14;
      }
      v12offset = ecl_car(v11param_and_offset);
      v13param = ecl_cdr(v11param_and_offset);
      if (!(ecl_eql(v13param,VV[23]))) { goto L24; }
      if (!(v5args==ECL_NIL)) { goto L29; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v12offset);
L29:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L31; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L31:;
      {
       cl_object v14;
       v14 = v5args;
       {
        cl_object v15;
        v15 = v14;
        if (ecl_unlikely(!ECL_LISTP(v15))) FEtype_error_list(v15);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v14)) { goto L37; }
       {
        cl_object v15;
        v15 = ECL_CONS_CDR(v14);
        v5args = v15;
        v14 = ECL_CONS_CAR(v14);
       }
L37:;
       value0 = v14;
      }
      if ((value0)!=ECL_NIL) { goto L27; }
      v10count = ecl_make_fixnum(1);
      goto L10;
L27:;
      v10count = value0;
      goto L10;
L24:;
      if (!(ecl_eql(v13param,VV[24]))) { goto L43; }
      v10count = ecl_make_fixnum(ecl_length(v5args));
      goto L10;
L43:;
      if (!((v13param)==(ECL_NIL))) { goto L45; }
      v10count = ecl_make_fixnum(1);
      goto L10;
L45:;
      v10count = v13param;
     }
L10:;
     if (Null(v9)) { goto L48; }
     T0 = ecl_list1(ecl_make_fixnum(1));
     T1 = ecl_caar(v9);
     cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[70], VV[71], T0, ECL_SYM("OFFSET",1306), T1);
L48:;
     cl_fresh_line(1, v1stream);
     {
      cl_object v11;
      v11 = ecl_one_minus(v10count);
      {
       cl_object v12i;
       v12i = ecl_make_fixnum(0);
       goto L54;
L53:;
       ecl_terpri(v1stream);
       v12i = ecl_one_plus(v12i);
L54:;
       if (!(ecl_lower(v12i,v11))) { goto L59; }
       goto L53;
L59:;
      }
     }
    }
   }
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v5args;
   cl_env_copy->values[0] = v3;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function VERTICAL_LINE-FORMAT-DIRECTIVE-EXPANDER        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC78vertical_line_format_directive_expander(cl_object v1, cl_object v2)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8;
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
   v3 = ecl_function_dispatch(cl_env_copy,VV[311])(1, v1) /*  FORMAT-DIRECTIVE-COLONP */;
   v4 = ecl_function_dispatch(cl_env_copy,VV[312])(1, v1) /*  FORMAT-DIRECTIVE-ATSIGNP */;
   v5 = ecl_function_dispatch(cl_env_copy,VV[313])(1, v1) /*  FORMAT-DIRECTIVE-PARAMS */;
   if ((v3)!=ECL_NIL) { goto L6; }
   if (Null(v4)) { goto L4; }
   goto L5;
L6:;
L5:;
   cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[156]);
L4:;
   if (Null(v5)) { goto L9; }
   {
    cl_object v6;
    v6 = v5;
    {
     cl_object v7param_and_offset;
     cl_object v8offset;
     cl_object v9param;
     {
      cl_object v10;
      v10 = v6;
      {
       cl_object v11;
       v11 = v10;
       if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v10)) { goto L18; }
      {
       cl_object v11;
       v11 = ECL_CONS_CDR(v10);
       v6 = v11;
       v10 = ECL_CONS_CAR(v10);
      }
L18:;
      v7param_and_offset = v10;
     }
     v8offset = ecl_car(v7param_and_offset);
     v9param = ecl_cdr(v7param_and_offset);
     if (!(ecl_eql(v9param,VV[23]))) { goto L26; }
     T2 = L15expand_next_arg(1, v8offset);
     T1 = cl_list(3, ECL_SYM("OR",616), T2, ecl_make_fixnum(1));
     goto L12;
L26:;
     if (!(ecl_eql(v9param,VV[24]))) { goto L28; }
     cl_set(VV[37],ECL_NIL);
     T1 = VV[68];
     goto L12;
L28:;
     if (!((v9param)==(ECL_NIL))) { goto L32; }
     T1 = ecl_make_fixnum(1);
     goto L12;
L32:;
     T1 = v9param;
    }
L12:;
    T2 = cl_list(2, VV[162], T1);
    T3 = ecl_list1(T2);
    if (Null(v6)) { goto L36; }
    T5 = ecl_list1(ecl_make_fixnum(1));
    T6 = ecl_caar(v6);
    T4 = cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[70], VV[71], T5, ECL_SYM("OFFSET",1306), T6);
    goto L35;
L36:;
    T4 = ECL_NIL;
L35:;
    T5 = cl_list(2, VV[158], VV[162]);
    T6 = cl_list(3, ECL_SYM("DOTIMES",316), T5, VV[163]);
    T7 = ecl_list1(T6);
    T8 = ecl_append(T4,T7);
    T0 = cl_listX(3, ECL_SYM("LET",479), T3, T8);
    goto L8;
   }
L9:;
   T0 = VV[163];
L8:;
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v2;
   cl_env_copy->values[0] = T0;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA1272                                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC79__lambda1272(cl_object v1stream, cl_object v2, cl_object v3, cl_object v4orig_args, cl_object v5args)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v6;
   cl_object v7;
   cl_object v8;
   v6 = ecl_function_dispatch(cl_env_copy,VV[311])(1, v2) /*  FORMAT-DIRECTIVE-COLONP */;
   v7 = ecl_function_dispatch(cl_env_copy,VV[312])(1, v2) /*  FORMAT-DIRECTIVE-ATSIGNP */;
   v8 = ecl_function_dispatch(cl_env_copy,VV[313])(1, v2) /*  FORMAT-DIRECTIVE-PARAMS */;
   if ((v6)!=ECL_NIL) { goto L6; }
   if (Null(v7)) { goto L4; }
   goto L5;
L6:;
L5:;
   cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[156]);
L4:;
   {
    cl_object v9;
    v9 = v8;
    {
     cl_object v10count;
     {
      cl_object v11param_and_offset;
      cl_object v12offset;
      cl_object v13param;
      {
       cl_object v14;
       v14 = v9;
       {
        cl_object v15;
        v15 = v14;
        if (ecl_unlikely(!ECL_LISTP(v15))) FEtype_error_list(v15);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v14)) { goto L16; }
       {
        cl_object v15;
        v15 = ECL_CONS_CDR(v14);
        v9 = v15;
        v14 = ECL_CONS_CAR(v14);
       }
L16:;
       v11param_and_offset = v14;
      }
      v12offset = ecl_car(v11param_and_offset);
      v13param = ecl_cdr(v11param_and_offset);
      if (!(ecl_eql(v13param,VV[23]))) { goto L24; }
      if (!(v5args==ECL_NIL)) { goto L29; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v12offset);
L29:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L31; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L31:;
      {
       cl_object v14;
       v14 = v5args;
       {
        cl_object v15;
        v15 = v14;
        if (ecl_unlikely(!ECL_LISTP(v15))) FEtype_error_list(v15);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v14)) { goto L37; }
       {
        cl_object v15;
        v15 = ECL_CONS_CDR(v14);
        v5args = v15;
        v14 = ECL_CONS_CAR(v14);
       }
L37:;
       value0 = v14;
      }
      if ((value0)!=ECL_NIL) { goto L27; }
      v10count = ecl_make_fixnum(1);
      goto L10;
L27:;
      v10count = value0;
      goto L10;
L24:;
      if (!(ecl_eql(v13param,VV[24]))) { goto L43; }
      v10count = ecl_make_fixnum(ecl_length(v5args));
      goto L10;
L43:;
      if (!((v13param)==(ECL_NIL))) { goto L45; }
      v10count = ecl_make_fixnum(1);
      goto L10;
L45:;
      v10count = v13param;
     }
L10:;
     if (Null(v9)) { goto L48; }
     T0 = ecl_list1(ecl_make_fixnum(1));
     T1 = ecl_caar(v9);
     cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[70], VV[71], T0, ECL_SYM("OFFSET",1306), T1);
L48:;
     {
      cl_object v11i;
      v11i = ecl_make_fixnum(0);
      goto L52;
L51:;
      cl_write_char(2, CODE_CHAR(12), v1stream);
      v11i = ecl_one_plus(v11i);
L52:;
      if (!(ecl_lower(v11i,v10count))) { goto L57; }
      goto L51;
L57:;
     }
    }
   }
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v5args;
   cl_env_copy->values[0] = v3;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function TILDE-FORMAT-DIRECTIVE-EXPANDER                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC80tilde_format_directive_expander(cl_object v1, cl_object v2)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8;
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
   v3 = ecl_function_dispatch(cl_env_copy,VV[311])(1, v1) /*  FORMAT-DIRECTIVE-COLONP */;
   v4 = ecl_function_dispatch(cl_env_copy,VV[312])(1, v1) /*  FORMAT-DIRECTIVE-ATSIGNP */;
   v5 = ecl_function_dispatch(cl_env_copy,VV[313])(1, v1) /*  FORMAT-DIRECTIVE-PARAMS */;
   if ((v3)!=ECL_NIL) { goto L6; }
   if (Null(v4)) { goto L4; }
   goto L5;
L6:;
L5:;
   cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[156]);
L4:;
   if (Null(v5)) { goto L9; }
   {
    cl_object v6;
    v6 = v5;
    {
     cl_object v7param_and_offset;
     cl_object v8offset;
     cl_object v9param;
     {
      cl_object v10;
      v10 = v6;
      {
       cl_object v11;
       v11 = v10;
       if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v10)) { goto L18; }
      {
       cl_object v11;
       v11 = ECL_CONS_CDR(v10);
       v6 = v11;
       v10 = ECL_CONS_CAR(v10);
      }
L18:;
      v7param_and_offset = v10;
     }
     v8offset = ecl_car(v7param_and_offset);
     v9param = ecl_cdr(v7param_and_offset);
     if (!(ecl_eql(v9param,VV[23]))) { goto L26; }
     T2 = L15expand_next_arg(1, v8offset);
     T1 = cl_list(3, ECL_SYM("OR",616), T2, ecl_make_fixnum(1));
     goto L12;
L26:;
     if (!(ecl_eql(v9param,VV[24]))) { goto L28; }
     cl_set(VV[37],ECL_NIL);
     T1 = VV[68];
     goto L12;
L28:;
     if (!((v9param)==(ECL_NIL))) { goto L32; }
     T1 = ecl_make_fixnum(1);
     goto L12;
L32:;
     T1 = v9param;
    }
L12:;
    T2 = cl_list(2, VV[164], T1);
    T3 = ecl_list1(T2);
    if (Null(v6)) { goto L36; }
    T5 = ecl_list1(ecl_make_fixnum(1));
    T6 = ecl_caar(v6);
    T4 = cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[70], VV[71], T5, ECL_SYM("OFFSET",1306), T6);
    goto L35;
L36:;
    T4 = ECL_NIL;
L35:;
    T5 = cl_list(2, VV[158], VV[164]);
    T6 = cl_list(3, ECL_SYM("DOTIMES",316), T5, VV[165]);
    T7 = ecl_list1(T6);
    T8 = ecl_append(T4,T7);
    T0 = cl_listX(3, ECL_SYM("LET",479), T3, T8);
    goto L8;
   }
L9:;
   T0 = VV[165];
L8:;
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v2;
   cl_env_copy->values[0] = T0;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA1302                                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC81__lambda1302(cl_object v1stream, cl_object v2, cl_object v3, cl_object v4orig_args, cl_object v5args)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v6;
   cl_object v7;
   cl_object v8;
   v6 = ecl_function_dispatch(cl_env_copy,VV[311])(1, v2) /*  FORMAT-DIRECTIVE-COLONP */;
   v7 = ecl_function_dispatch(cl_env_copy,VV[312])(1, v2) /*  FORMAT-DIRECTIVE-ATSIGNP */;
   v8 = ecl_function_dispatch(cl_env_copy,VV[313])(1, v2) /*  FORMAT-DIRECTIVE-PARAMS */;
   if ((v6)!=ECL_NIL) { goto L6; }
   if (Null(v7)) { goto L4; }
   goto L5;
L6:;
L5:;
   cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[156]);
L4:;
   {
    cl_object v9;
    v9 = v8;
    {
     cl_object v10count;
     {
      cl_object v11param_and_offset;
      cl_object v12offset;
      cl_object v13param;
      {
       cl_object v14;
       v14 = v9;
       {
        cl_object v15;
        v15 = v14;
        if (ecl_unlikely(!ECL_LISTP(v15))) FEtype_error_list(v15);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v14)) { goto L16; }
       {
        cl_object v15;
        v15 = ECL_CONS_CDR(v14);
        v9 = v15;
        v14 = ECL_CONS_CAR(v14);
       }
L16:;
       v11param_and_offset = v14;
      }
      v12offset = ecl_car(v11param_and_offset);
      v13param = ecl_cdr(v11param_and_offset);
      if (!(ecl_eql(v13param,VV[23]))) { goto L24; }
      if (!(v5args==ECL_NIL)) { goto L29; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v12offset);
L29:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L31; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L31:;
      {
       cl_object v14;
       v14 = v5args;
       {
        cl_object v15;
        v15 = v14;
        if (ecl_unlikely(!ECL_LISTP(v15))) FEtype_error_list(v15);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v14)) { goto L37; }
       {
        cl_object v15;
        v15 = ECL_CONS_CDR(v14);
        v5args = v15;
        v14 = ECL_CONS_CAR(v14);
       }
L37:;
       value0 = v14;
      }
      if ((value0)!=ECL_NIL) { goto L27; }
      v10count = ecl_make_fixnum(1);
      goto L10;
L27:;
      v10count = value0;
      goto L10;
L24:;
      if (!(ecl_eql(v13param,VV[24]))) { goto L43; }
      v10count = ecl_make_fixnum(ecl_length(v5args));
      goto L10;
L43:;
      if (!((v13param)==(ECL_NIL))) { goto L45; }
      v10count = ecl_make_fixnum(1);
      goto L10;
L45:;
      v10count = v13param;
     }
L10:;
     if (Null(v9)) { goto L48; }
     T0 = ecl_list1(ecl_make_fixnum(1));
     T1 = ecl_caar(v9);
     cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[70], VV[71], T0, ECL_SYM("OFFSET",1306), T1);
L48:;
     {
      cl_object v11i;
      v11i = ecl_make_fixnum(0);
      goto L52;
L51:;
      cl_write_char(2, CODE_CHAR(126), v1stream);
      v11i = ecl_one_plus(v11i);
L52:;
      if (!(ecl_lower(v11i,v10count))) { goto L57; }
      goto L51;
L57:;
     }
    }
   }
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v5args;
   cl_env_copy->values[0] = v3;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function Newline-FORMAT-DIRECTIVE-EXPANDER              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC82_newline_format_directive_expander_(cl_object v1, cl_object v2directives)
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
   v3 = ecl_function_dispatch(cl_env_copy,VV[311])(1, v1) /*  FORMAT-DIRECTIVE-COLONP */;
   v4 = ecl_function_dispatch(cl_env_copy,VV[312])(1, v1) /*  FORMAT-DIRECTIVE-ATSIGNP */;
   v5 = ecl_function_dispatch(cl_env_copy,VV[313])(1, v1) /*  FORMAT-DIRECTIVE-PARAMS */;
   if (Null(v3)) { goto L4; }
   if (Null(v4)) { goto L4; }
   cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[166]);
L4:;
   if (Null(v5)) { goto L8; }
   T1 = ecl_caar(v5);
   cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[79], ECL_SYM("OFFSET",1306), T1);
L8:;
   if (Null(v4)) { goto L10; }
   T0 = VV[167];
   goto L7;
L10:;
   T0 = ECL_NIL;
L7:;
   if ((v3)!=ECL_NIL) { goto L13; }
   if (Null(v2directives)) { goto L13; }
   T2 = ecl_car(v2directives);
   if (Null(cl_simple_string_p(T2))) { goto L13; }
   T2 = ecl_car(v2directives);
   T3 = cl_string_left_trim(VV[168], T2);
   T4 = ecl_cdr(v2directives);
   T1 = CONS(T3,T4);
   goto L12;
L13:;
   T1 = v2directives;
L12:;
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = T1;
   cl_env_copy->values[0] = T0;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA1324                                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC83__lambda1324(cl_object v1stream, cl_object v2, cl_object v3directives, cl_object v4orig_args, cl_object v5args)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v6;
   cl_object v7;
   cl_object v8;
   v6 = ecl_function_dispatch(cl_env_copy,VV[311])(1, v2) /*  FORMAT-DIRECTIVE-COLONP */;
   v7 = ecl_function_dispatch(cl_env_copy,VV[312])(1, v2) /*  FORMAT-DIRECTIVE-ATSIGNP */;
   v8 = ecl_function_dispatch(cl_env_copy,VV[313])(1, v2) /*  FORMAT-DIRECTIVE-PARAMS */;
   if (Null(v6)) { goto L4; }
   if (Null(v7)) { goto L4; }
   cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[166]);
L4:;
   if (Null(v8)) { goto L8; }
   T0 = ecl_list1(ecl_make_fixnum(0));
   T1 = ecl_caar(v8);
   cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[70], VV[71], T0, ECL_SYM("OFFSET",1306), T1);
L8:;
   if (Null(v7)) { goto L7; }
   cl_write_char(2, CODE_CHAR(10), v1stream);
L7:;
   if ((v6)!=ECL_NIL) { goto L12; }
   if (Null(v3directives)) { goto L12; }
   T1 = ecl_car(v3directives);
   if (Null(cl_simple_string_p(T1))) { goto L12; }
   T1 = ecl_car(v3directives);
   T2 = cl_string_left_trim(VV[168], T1);
   T3 = ecl_cdr(v3directives);
   T0 = CONS(T2,T3);
   goto L11;
L12:;
   T0 = v3directives;
L11:;
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v5args;
   cl_env_copy->values[0] = T0;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function Return-FORMAT-DIRECTIVE-EXPANDER               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC84_return_format_directive_expander_(cl_object v1, cl_object v2directives)
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
   v3 = ecl_function_dispatch(cl_env_copy,VV[311])(1, v1) /*  FORMAT-DIRECTIVE-COLONP */;
   v4 = ecl_function_dispatch(cl_env_copy,VV[312])(1, v1) /*  FORMAT-DIRECTIVE-ATSIGNP */;
   v5 = ecl_function_dispatch(cl_env_copy,VV[313])(1, v1) /*  FORMAT-DIRECTIVE-PARAMS */;
   if (Null(v3)) { goto L4; }
   if (Null(v4)) { goto L4; }
   cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[166]);
L4:;
   if (Null(v5)) { goto L8; }
   T1 = ecl_caar(v5);
   cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[79], ECL_SYM("OFFSET",1306), T1);
L8:;
   if (Null(v4)) { goto L10; }
   T0 = VV[167];
   goto L7;
L10:;
   T0 = ECL_NIL;
L7:;
   if ((v3)!=ECL_NIL) { goto L13; }
   if (Null(v2directives)) { goto L13; }
   T2 = ecl_car(v2directives);
   if (Null(cl_simple_string_p(T2))) { goto L13; }
   T2 = ecl_car(v2directives);
   T3 = cl_string_left_trim(VV[168], T2);
   T4 = ecl_cdr(v2directives);
   T1 = CONS(T3,T4);
   goto L12;
L13:;
   T1 = v2directives;
L12:;
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = T1;
   cl_env_copy->values[0] = T0;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA1335                                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC85__lambda1335(cl_object v1stream, cl_object v2, cl_object v3directives, cl_object v4orig_args, cl_object v5args)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v6;
   cl_object v7;
   cl_object v8;
   v6 = ecl_function_dispatch(cl_env_copy,VV[311])(1, v2) /*  FORMAT-DIRECTIVE-COLONP */;
   v7 = ecl_function_dispatch(cl_env_copy,VV[312])(1, v2) /*  FORMAT-DIRECTIVE-ATSIGNP */;
   v8 = ecl_function_dispatch(cl_env_copy,VV[313])(1, v2) /*  FORMAT-DIRECTIVE-PARAMS */;
   if (Null(v6)) { goto L4; }
   if (Null(v7)) { goto L4; }
   cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[166]);
L4:;
   if (Null(v8)) { goto L8; }
   T0 = ecl_list1(ecl_make_fixnum(0));
   T1 = ecl_caar(v8);
   cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[70], VV[71], T0, ECL_SYM("OFFSET",1306), T1);
L8:;
   if (Null(v7)) { goto L7; }
   cl_write_char(2, CODE_CHAR(10), v1stream);
L7:;
   if ((v6)!=ECL_NIL) { goto L12; }
   if (Null(v3directives)) { goto L12; }
   T1 = ecl_car(v3directives);
   if (Null(cl_simple_string_p(T1))) { goto L12; }
   T1 = ecl_car(v3directives);
   T2 = cl_string_left_trim(VV[168], T1);
   T3 = ecl_cdr(v3directives);
   T0 = CONS(T2,T3);
   goto L11;
L12:;
   T0 = v3directives;
L11:;
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v5args;
   cl_env_copy->values[0] = T0;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LATIN_CAPITAL_LETTER_T-FORMAT-DIRECTIVE-EXPANDER */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC86latin_capital_letter_t_format_directive_expander(cl_object v1, cl_object v2)
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
   cl_object v4;
   cl_object v5;
   v3 = ecl_function_dispatch(cl_env_copy,VV[311])(1, v1) /*  FORMAT-DIRECTIVE-COLONP */;
   v4 = ecl_function_dispatch(cl_env_copy,VV[312])(1, v1) /*  FORMAT-DIRECTIVE-ATSIGNP */;
   v5 = ecl_function_dispatch(cl_env_copy,VV[313])(1, v1) /*  FORMAT-DIRECTIVE-PARAMS */;
   if (Null(v3)) { goto L5; }
   L131check_output_layout_mode(ecl_make_fixnum(1));
   {
    cl_object v6;
    v6 = v5;
    {
     cl_object v7param_and_offset;
     cl_object v8offset;
     cl_object v9param;
     {
      cl_object v10;
      v10 = v6;
      {
       cl_object v11;
       v11 = v10;
       if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v10)) { goto L15; }
      {
       cl_object v11;
       v11 = ECL_CONS_CDR(v10);
       v6 = v11;
       v10 = ECL_CONS_CAR(v10);
      }
L15:;
      v7param_and_offset = v10;
     }
     v8offset = ecl_car(v7param_and_offset);
     v9param = ecl_cdr(v7param_and_offset);
     if (!(ecl_eql(v9param,VV[23]))) { goto L23; }
     T2 = L15expand_next_arg(1, v8offset);
     T1 = cl_list(3, ECL_SYM("OR",616), T2, ecl_make_fixnum(1));
     goto L9;
L23:;
     if (!(ecl_eql(v9param,VV[24]))) { goto L25; }
     cl_set(VV[37],ECL_NIL);
     T1 = VV[68];
     goto L9;
L25:;
     if (!((v9param)==(ECL_NIL))) { goto L29; }
     T1 = ecl_make_fixnum(1);
     goto L9;
L29:;
     T1 = v9param;
    }
L9:;
    T2 = cl_list(2, VV[169], T1);
    {
     cl_object v7param_and_offset;
     cl_object v8offset;
     cl_object v9param;
     {
      cl_object v10;
      v10 = v6;
      {
       cl_object v11;
       v11 = v10;
       if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v10)) { goto L38; }
      {
       cl_object v11;
       v11 = ECL_CONS_CDR(v10);
       v6 = v11;
       v10 = ECL_CONS_CAR(v10);
      }
L38:;
      v7param_and_offset = v10;
     }
     v8offset = ecl_car(v7param_and_offset);
     v9param = ecl_cdr(v7param_and_offset);
     if (!(ecl_eql(v9param,VV[23]))) { goto L46; }
     T4 = L15expand_next_arg(1, v8offset);
     T3 = cl_list(3, ECL_SYM("OR",616), T4, ecl_make_fixnum(1));
     goto L32;
L46:;
     if (!(ecl_eql(v9param,VV[24]))) { goto L48; }
     cl_set(VV[37],ECL_NIL);
     T3 = VV[68];
     goto L32;
L48:;
     if (!((v9param)==(ECL_NIL))) { goto L52; }
     T3 = ecl_make_fixnum(1);
     goto L32;
L52:;
     T3 = v9param;
    }
L32:;
    T4 = cl_list(2, VV[170], T3);
    T5 = cl_list(2, T2, T4);
    if (Null(v6)) { goto L56; }
    T7 = ecl_list1(ecl_make_fixnum(2));
    T8 = ecl_caar(v6);
    T6 = cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[70], VV[71], T7, ECL_SYM("OFFSET",1306), T8);
    goto L55;
L56:;
    T6 = ECL_NIL;
L55:;
    if (Null(v4)) { goto L59; }
    T7 = VV[171];
    goto L58;
L59:;
    T7 = VV[172];
L58:;
    T8 = cl_list(5, ECL_SYM("PPRINT-TAB",658), T7, VV[169], VV[170], ECL_SYM("STREAM",801));
    T9 = ecl_list1(T8);
    T10 = ecl_append(T6,T9);
    T0 = cl_listX(3, ECL_SYM("LET",479), T5, T10);
    goto L4;
   }
L5:;
   if (Null(v4)) { goto L61; }
   {
    cl_object v7;
    v7 = v5;
    {
     cl_object v8param_and_offset;
     cl_object v9offset;
     cl_object v10param;
     {
      cl_object v11;
      v11 = v7;
      {
       cl_object v12;
       v12 = v11;
       if (ecl_unlikely(!ECL_LISTP(v12))) FEtype_error_list(v12);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v11)) { goto L70; }
      {
       cl_object v12;
       v12 = ECL_CONS_CDR(v11);
       v7 = v12;
       v11 = ECL_CONS_CAR(v11);
      }
L70:;
      v8param_and_offset = v11;
     }
     v9offset = ecl_car(v8param_and_offset);
     v10param = ecl_cdr(v8param_and_offset);
     if (!(ecl_eql(v10param,VV[23]))) { goto L78; }
     T2 = L15expand_next_arg(1, v9offset);
     T1 = cl_list(3, ECL_SYM("OR",616), T2, ecl_make_fixnum(1));
     goto L64;
L78:;
     if (!(ecl_eql(v10param,VV[24]))) { goto L80; }
     cl_set(VV[37],ECL_NIL);
     T1 = VV[68];
     goto L64;
L80:;
     if (!((v10param)==(ECL_NIL))) { goto L84; }
     T1 = ecl_make_fixnum(1);
     goto L64;
L84:;
     T1 = v10param;
    }
L64:;
    T2 = cl_list(2, VV[173], T1);
    {
     cl_object v8param_and_offset;
     cl_object v9offset;
     cl_object v10param;
     {
      cl_object v11;
      v11 = v7;
      {
       cl_object v12;
       v12 = v11;
       if (ecl_unlikely(!ECL_LISTP(v12))) FEtype_error_list(v12);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v11)) { goto L93; }
      {
       cl_object v12;
       v12 = ECL_CONS_CDR(v11);
       v7 = v12;
       v11 = ECL_CONS_CAR(v11);
      }
L93:;
      v8param_and_offset = v11;
     }
     v9offset = ecl_car(v8param_and_offset);
     v10param = ecl_cdr(v8param_and_offset);
     if (!(ecl_eql(v10param,VV[23]))) { goto L101; }
     T4 = L15expand_next_arg(1, v9offset);
     T3 = cl_list(3, ECL_SYM("OR",616), T4, ecl_make_fixnum(1));
     goto L87;
L101:;
     if (!(ecl_eql(v10param,VV[24]))) { goto L103; }
     cl_set(VV[37],ECL_NIL);
     T3 = VV[68];
     goto L87;
L103:;
     if (!((v10param)==(ECL_NIL))) { goto L107; }
     T3 = ecl_make_fixnum(1);
     goto L87;
L107:;
     T3 = v10param;
    }
L87:;
    T4 = cl_list(2, VV[174], T3);
    T5 = cl_list(2, T2, T4);
    if (Null(v7)) { goto L111; }
    T7 = ecl_list1(ecl_make_fixnum(2));
    T8 = ecl_caar(v7);
    T6 = cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[70], VV[71], T7, ECL_SYM("OFFSET",1306), T8);
    goto L110;
L111:;
    T6 = ECL_NIL;
L110:;
    T7 = cl_list(4, VV[175], ECL_SYM("STREAM",801), VV[173], VV[174]);
    T8 = ecl_list1(T7);
    T9 = ecl_append(T6,T8);
    T0 = cl_listX(3, ECL_SYM("LET",479), T5, T9);
    goto L4;
   }
L61:;
   {
    cl_object v8;
    v8 = v5;
    {
     cl_object v9param_and_offset;
     cl_object v10offset;
     cl_object v11param;
     {
      cl_object v12;
      v12 = v8;
      {
       cl_object v13;
       v13 = v12;
       if (ecl_unlikely(!ECL_LISTP(v13))) FEtype_error_list(v13);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v12)) { goto L120; }
      {
       cl_object v13;
       v13 = ECL_CONS_CDR(v12);
       v8 = v13;
       v12 = ECL_CONS_CAR(v12);
      }
L120:;
      v9param_and_offset = v12;
     }
     v10offset = ecl_car(v9param_and_offset);
     v11param = ecl_cdr(v9param_and_offset);
     if (!(ecl_eql(v11param,VV[23]))) { goto L128; }
     T2 = L15expand_next_arg(1, v10offset);
     T1 = cl_list(3, ECL_SYM("OR",616), T2, ecl_make_fixnum(1));
     goto L114;
L128:;
     if (!(ecl_eql(v11param,VV[24]))) { goto L130; }
     cl_set(VV[37],ECL_NIL);
     T1 = VV[68];
     goto L114;
L130:;
     if (!((v11param)==(ECL_NIL))) { goto L134; }
     T1 = ecl_make_fixnum(1);
     goto L114;
L134:;
     T1 = v11param;
    }
L114:;
    T2 = cl_list(2, VV[176], T1);
    {
     cl_object v9param_and_offset;
     cl_object v10offset;
     cl_object v11param;
     {
      cl_object v12;
      v12 = v8;
      {
       cl_object v13;
       v13 = v12;
       if (ecl_unlikely(!ECL_LISTP(v13))) FEtype_error_list(v13);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v12)) { goto L143; }
      {
       cl_object v13;
       v13 = ECL_CONS_CDR(v12);
       v8 = v13;
       v12 = ECL_CONS_CAR(v12);
      }
L143:;
      v9param_and_offset = v12;
     }
     v10offset = ecl_car(v9param_and_offset);
     v11param = ecl_cdr(v9param_and_offset);
     if (!(ecl_eql(v11param,VV[23]))) { goto L151; }
     T4 = L15expand_next_arg(1, v10offset);
     T3 = cl_list(3, ECL_SYM("OR",616), T4, ecl_make_fixnum(1));
     goto L137;
L151:;
     if (!(ecl_eql(v11param,VV[24]))) { goto L153; }
     cl_set(VV[37],ECL_NIL);
     T3 = VV[68];
     goto L137;
L153:;
     if (!((v11param)==(ECL_NIL))) { goto L157; }
     T3 = ecl_make_fixnum(1);
     goto L137;
L157:;
     T3 = v11param;
    }
L137:;
    T4 = cl_list(2, VV[177], T3);
    T5 = cl_list(2, T2, T4);
    if (Null(v8)) { goto L161; }
    T7 = ecl_list1(ecl_make_fixnum(2));
    T8 = ecl_caar(v8);
    T6 = cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[70], VV[71], T7, ECL_SYM("OFFSET",1306), T8);
    goto L160;
L161:;
    T6 = ECL_NIL;
L160:;
    T7 = cl_list(4, VV[178], ECL_SYM("STREAM",801), VV[176], VV[177]);
    T8 = ecl_list1(T7);
    T9 = ecl_append(T6,T8);
    T0 = cl_listX(3, ECL_SYM("LET",479), T5, T9);
   }
L4:;
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v2;
   cl_env_copy->values[0] = T0;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA1392                                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC87__lambda1392(cl_object v1stream, cl_object v2, cl_object v3, cl_object v4orig_args, cl_object v5args)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v6;
   cl_object v7;
   cl_object v8;
   v6 = ecl_function_dispatch(cl_env_copy,VV[311])(1, v2) /*  FORMAT-DIRECTIVE-COLONP */;
   v7 = ecl_function_dispatch(cl_env_copy,VV[312])(1, v2) /*  FORMAT-DIRECTIVE-ATSIGNP */;
   v8 = ecl_function_dispatch(cl_env_copy,VV[313])(1, v2) /*  FORMAT-DIRECTIVE-PARAMS */;
   if (Null(v6)) { goto L5; }
   L131check_output_layout_mode(ecl_make_fixnum(1));
   {
    cl_object v9;
    v9 = v8;
    {
     cl_object v10n;
     cl_object v11m;
     {
      cl_object v12param_and_offset;
      cl_object v13offset;
      cl_object v14param;
      {
       cl_object v15;
       v15 = v9;
       {
        cl_object v16;
        v16 = v15;
        if (ecl_unlikely(!ECL_LISTP(v16))) FEtype_error_list(v16);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v15)) { goto L15; }
       {
        cl_object v16;
        v16 = ECL_CONS_CDR(v15);
        v9 = v16;
        v15 = ECL_CONS_CAR(v15);
       }
L15:;
       v12param_and_offset = v15;
      }
      v13offset = ecl_car(v12param_and_offset);
      v14param = ecl_cdr(v12param_and_offset);
      if (!(ecl_eql(v14param,VV[23]))) { goto L23; }
      if (!(v5args==ECL_NIL)) { goto L28; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v13offset);
L28:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L30; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L30:;
      {
       cl_object v15;
       v15 = v5args;
       {
        cl_object v16;
        v16 = v15;
        if (ecl_unlikely(!ECL_LISTP(v16))) FEtype_error_list(v16);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v15)) { goto L36; }
       {
        cl_object v16;
        v16 = ECL_CONS_CDR(v15);
        v5args = v16;
        v15 = ECL_CONS_CAR(v15);
       }
L36:;
       value0 = v15;
      }
      if ((value0)!=ECL_NIL) { goto L26; }
      v10n = ecl_make_fixnum(1);
      goto L9;
L26:;
      v10n = value0;
      goto L9;
L23:;
      if (!(ecl_eql(v14param,VV[24]))) { goto L42; }
      v10n = ecl_make_fixnum(ecl_length(v5args));
      goto L9;
L42:;
      if (!((v14param)==(ECL_NIL))) { goto L44; }
      v10n = ecl_make_fixnum(1);
      goto L9;
L44:;
      v10n = v14param;
     }
L9:;
     {
      cl_object v12param_and_offset;
      cl_object v13offset;
      cl_object v14param;
      {
       cl_object v15;
       v15 = v9;
       {
        cl_object v16;
        v16 = v15;
        if (ecl_unlikely(!ECL_LISTP(v16))) FEtype_error_list(v16);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v15)) { goto L53; }
       {
        cl_object v16;
        v16 = ECL_CONS_CDR(v15);
        v9 = v16;
        v15 = ECL_CONS_CAR(v15);
       }
L53:;
       v12param_and_offset = v15;
      }
      v13offset = ecl_car(v12param_and_offset);
      v14param = ecl_cdr(v12param_and_offset);
      if (!(ecl_eql(v14param,VV[23]))) { goto L61; }
      if (!(v5args==ECL_NIL)) { goto L66; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v13offset);
L66:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L68; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L68:;
      {
       cl_object v15;
       v15 = v5args;
       {
        cl_object v16;
        v16 = v15;
        if (ecl_unlikely(!ECL_LISTP(v16))) FEtype_error_list(v16);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v15)) { goto L74; }
       {
        cl_object v16;
        v16 = ECL_CONS_CDR(v15);
        v5args = v16;
        v15 = ECL_CONS_CAR(v15);
       }
L74:;
       value0 = v15;
      }
      if ((value0)!=ECL_NIL) { goto L64; }
      v11m = ecl_make_fixnum(1);
      goto L47;
L64:;
      v11m = value0;
      goto L47;
L61:;
      if (!(ecl_eql(v14param,VV[24]))) { goto L80; }
      v11m = ecl_make_fixnum(ecl_length(v5args));
      goto L47;
L80:;
      if (!((v14param)==(ECL_NIL))) { goto L82; }
      v11m = ecl_make_fixnum(1);
      goto L47;
L82:;
      v11m = v14param;
     }
L47:;
     if (Null(v9)) { goto L85; }
     T0 = ecl_list1(ecl_make_fixnum(2));
     T1 = ecl_caar(v9);
     cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[70], VV[71], T0, ECL_SYM("OFFSET",1306), T1);
L85:;
     if (Null(v7)) { goto L88; }
     T0 = VV[171];
     goto L87;
L88:;
     T0 = VV[172];
L87:;
     cl_pprint_tab(4, T0, v10n, v11m, v1stream);
     goto L4;
    }
   }
L5:;
   if (Null(v7)) { goto L90; }
   {
    cl_object v12;
    v12 = v8;
    {
     cl_object v13colrel;
     cl_object v14colinc;
     {
      cl_object v15param_and_offset;
      cl_object v16offset;
      cl_object v17param;
      {
       cl_object v18;
       v18 = v12;
       {
        cl_object v19;
        v19 = v18;
        if (ecl_unlikely(!ECL_LISTP(v19))) FEtype_error_list(v19);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v18)) { goto L99; }
       {
        cl_object v19;
        v19 = ECL_CONS_CDR(v18);
        v12 = v19;
        v18 = ECL_CONS_CAR(v18);
       }
L99:;
       v15param_and_offset = v18;
      }
      v16offset = ecl_car(v15param_and_offset);
      v17param = ecl_cdr(v15param_and_offset);
      if (!(ecl_eql(v17param,VV[23]))) { goto L107; }
      if (!(v5args==ECL_NIL)) { goto L112; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v16offset);
L112:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L114; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L114:;
      {
       cl_object v18;
       v18 = v5args;
       {
        cl_object v19;
        v19 = v18;
        if (ecl_unlikely(!ECL_LISTP(v19))) FEtype_error_list(v19);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v18)) { goto L120; }
       {
        cl_object v19;
        v19 = ECL_CONS_CDR(v18);
        v5args = v19;
        v18 = ECL_CONS_CAR(v18);
       }
L120:;
       value0 = v18;
      }
      if ((value0)!=ECL_NIL) { goto L110; }
      v13colrel = ecl_make_fixnum(1);
      goto L93;
L110:;
      v13colrel = value0;
      goto L93;
L107:;
      if (!(ecl_eql(v17param,VV[24]))) { goto L126; }
      v13colrel = ecl_make_fixnum(ecl_length(v5args));
      goto L93;
L126:;
      if (!((v17param)==(ECL_NIL))) { goto L128; }
      v13colrel = ecl_make_fixnum(1);
      goto L93;
L128:;
      v13colrel = v17param;
     }
L93:;
     {
      cl_object v15param_and_offset;
      cl_object v16offset;
      cl_object v17param;
      {
       cl_object v18;
       v18 = v12;
       {
        cl_object v19;
        v19 = v18;
        if (ecl_unlikely(!ECL_LISTP(v19))) FEtype_error_list(v19);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v18)) { goto L137; }
       {
        cl_object v19;
        v19 = ECL_CONS_CDR(v18);
        v12 = v19;
        v18 = ECL_CONS_CAR(v18);
       }
L137:;
       v15param_and_offset = v18;
      }
      v16offset = ecl_car(v15param_and_offset);
      v17param = ecl_cdr(v15param_and_offset);
      if (!(ecl_eql(v17param,VV[23]))) { goto L145; }
      if (!(v5args==ECL_NIL)) { goto L150; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v16offset);
L150:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L152; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L152:;
      {
       cl_object v18;
       v18 = v5args;
       {
        cl_object v19;
        v19 = v18;
        if (ecl_unlikely(!ECL_LISTP(v19))) FEtype_error_list(v19);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v18)) { goto L158; }
       {
        cl_object v19;
        v19 = ECL_CONS_CDR(v18);
        v5args = v19;
        v18 = ECL_CONS_CAR(v18);
       }
L158:;
       value0 = v18;
      }
      if ((value0)!=ECL_NIL) { goto L148; }
      v14colinc = ecl_make_fixnum(1);
      goto L131;
L148:;
      v14colinc = value0;
      goto L131;
L145:;
      if (!(ecl_eql(v17param,VV[24]))) { goto L164; }
      v14colinc = ecl_make_fixnum(ecl_length(v5args));
      goto L131;
L164:;
      if (!((v17param)==(ECL_NIL))) { goto L166; }
      v14colinc = ecl_make_fixnum(1);
      goto L131;
L166:;
      v14colinc = v17param;
     }
L131:;
     if (Null(v12)) { goto L169; }
     T0 = ecl_list1(ecl_make_fixnum(2));
     T1 = ecl_caar(v12);
     cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[70], VV[71], T0, ECL_SYM("OFFSET",1306), T1);
L169:;
     L89format_relative_tab(v1stream, v13colrel, v14colinc);
     goto L4;
    }
   }
L90:;
   {
    cl_object v15;
    v15 = v8;
    {
     cl_object v16colnum;
     cl_object v17colinc;
     {
      cl_object v18param_and_offset;
      cl_object v19offset;
      cl_object v20param;
      {
       cl_object v21;
       v21 = v15;
       {
        cl_object v22;
        v22 = v21;
        if (ecl_unlikely(!ECL_LISTP(v22))) FEtype_error_list(v22);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v21)) { goto L178; }
       {
        cl_object v22;
        v22 = ECL_CONS_CDR(v21);
        v15 = v22;
        v21 = ECL_CONS_CAR(v21);
       }
L178:;
       v18param_and_offset = v21;
      }
      v19offset = ecl_car(v18param_and_offset);
      v20param = ecl_cdr(v18param_and_offset);
      if (!(ecl_eql(v20param,VV[23]))) { goto L186; }
      if (!(v5args==ECL_NIL)) { goto L191; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v19offset);
L191:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L193; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L193:;
      {
       cl_object v21;
       v21 = v5args;
       {
        cl_object v22;
        v22 = v21;
        if (ecl_unlikely(!ECL_LISTP(v22))) FEtype_error_list(v22);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v21)) { goto L199; }
       {
        cl_object v22;
        v22 = ECL_CONS_CDR(v21);
        v5args = v22;
        v21 = ECL_CONS_CAR(v21);
       }
L199:;
       value0 = v21;
      }
      if ((value0)!=ECL_NIL) { goto L189; }
      v16colnum = ecl_make_fixnum(1);
      goto L172;
L189:;
      v16colnum = value0;
      goto L172;
L186:;
      if (!(ecl_eql(v20param,VV[24]))) { goto L205; }
      v16colnum = ecl_make_fixnum(ecl_length(v5args));
      goto L172;
L205:;
      if (!((v20param)==(ECL_NIL))) { goto L207; }
      v16colnum = ecl_make_fixnum(1);
      goto L172;
L207:;
      v16colnum = v20param;
     }
L172:;
     {
      cl_object v18param_and_offset;
      cl_object v19offset;
      cl_object v20param;
      {
       cl_object v21;
       v21 = v15;
       {
        cl_object v22;
        v22 = v21;
        if (ecl_unlikely(!ECL_LISTP(v22))) FEtype_error_list(v22);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v21)) { goto L216; }
       {
        cl_object v22;
        v22 = ECL_CONS_CDR(v21);
        v15 = v22;
        v21 = ECL_CONS_CAR(v21);
       }
L216:;
       v18param_and_offset = v21;
      }
      v19offset = ecl_car(v18param_and_offset);
      v20param = ecl_cdr(v18param_and_offset);
      if (!(ecl_eql(v20param,VV[23]))) { goto L224; }
      if (!(v5args==ECL_NIL)) { goto L229; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v19offset);
L229:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L231; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L231:;
      {
       cl_object v21;
       v21 = v5args;
       {
        cl_object v22;
        v22 = v21;
        if (ecl_unlikely(!ECL_LISTP(v22))) FEtype_error_list(v22);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v21)) { goto L237; }
       {
        cl_object v22;
        v22 = ECL_CONS_CDR(v21);
        v5args = v22;
        v21 = ECL_CONS_CAR(v21);
       }
L237:;
       value0 = v21;
      }
      if ((value0)!=ECL_NIL) { goto L227; }
      v17colinc = ecl_make_fixnum(1);
      goto L210;
L227:;
      v17colinc = value0;
      goto L210;
L224:;
      if (!(ecl_eql(v20param,VV[24]))) { goto L243; }
      v17colinc = ecl_make_fixnum(ecl_length(v5args));
      goto L210;
L243:;
      if (!((v20param)==(ECL_NIL))) { goto L245; }
      v17colinc = ecl_make_fixnum(1);
      goto L210;
L245:;
      v17colinc = v20param;
     }
L210:;
     if (Null(v15)) { goto L248; }
     T0 = ecl_list1(ecl_make_fixnum(2));
     T1 = ecl_caar(v15);
     cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[70], VV[71], T0, ECL_SYM("OFFSET",1306), T1);
L248:;
     L90format_absolute_tab(v1stream, v16colnum, v17colinc);
    }
   }
L4:;
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v5args;
   cl_env_copy->values[0] = v3;
   return cl_env_copy->values[0];
  }
 }
}
/*      function definition for OUTPUT-SPACES                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L88output_spaces(cl_object v1stream, cl_object v2n)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
L2:;
  {
   cl_fixnum v3;
   v3 = ecl_length(VV[179]);
   if (!(ecl_lower(v2n,ecl_make_fixnum(v3)))) { goto L4; }
  }
  goto L1;
L4:;
  cl_write_string(2, VV[179], v1stream);
  {
   cl_fixnum v3;
   v3 = ecl_length(VV[179]);
   v2n = ecl_minus(v2n,ecl_make_fixnum(v3));
  }
  goto L2;
L1:;
  value0 = cl_write_string(4, VV[179], v1stream, ECL_SYM("END",1247), v2n);
  return value0;
 }
}
/*      function definition for FORMAT-RELATIVE-TAB                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L89format_relative_tab(cl_object v1stream, cl_object v2colrel, cl_object v3colinc)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(ecl_function_dispatch(cl_env_copy,VV[327])(1, v1stream) /*  PRETTY-STREAM-P */)) { goto L1; }
  value0 = cl_pprint_tab(4, VV[180], v2colrel, v3colinc, v1stream);
  return value0;
L1:;
  {
   cl_object v4cur;
   cl_object v5spaces;
   v4cur = si_file_column(v1stream);
   if (Null(v4cur)) { goto L5; }
   if (!(ecl_plusp(v3colinc))) { goto L5; }
   T0 = ecl_plus(v4cur,v2colrel);
   T1 = ecl_ceiling2(T0,v3colinc);
   T2 = ecl_times(T1,v3colinc);
   v5spaces = ecl_minus(T2,v4cur);
   goto L4;
L5:;
   v5spaces = v2colrel;
L4:;
   value0 = L88output_spaces(v1stream, v5spaces);
   return value0;
  }
 }
}
/*      function definition for FORMAT-ABSOLUTE-TAB                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L90format_absolute_tab(cl_object v1stream, cl_object v2colnum, cl_object v3colinc)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(ecl_function_dispatch(cl_env_copy,VV[327])(1, v1stream) /*  PRETTY-STREAM-P */)) { goto L1; }
  value0 = cl_pprint_tab(4, ECL_SYM("LINE",1661), v2colnum, v3colinc, v1stream);
  return value0;
L1:;
  {
   cl_object v4cur;
   v4cur = si_file_column(v1stream);
   if (!(v4cur==ECL_NIL)) { goto L4; }
   value0 = cl_write_string(2, VV[181], v1stream);
   return value0;
L4:;
   if (!(ecl_lower(v4cur,v2colnum))) { goto L6; }
   T0 = ecl_minus(v2colnum,v4cur);
   value0 = L88output_spaces(v1stream, T0);
   return value0;
L6:;
   if (ecl_zerop(v3colinc)) { goto L8; }
   T0 = ecl_minus(v4cur,v2colnum);
   T1 = (ecl_truncate2(T0,v3colinc),cl_env_copy->values[1]);
   T2 = ecl_minus(v3colinc,T1);
   value0 = L88output_spaces(v1stream, T2);
   return value0;
L8:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function LOW_LINE-FORMAT-DIRECTIVE-EXPANDER             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC91low_line_format_directive_expander(cl_object v1, cl_object v2)
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
   cl_object v4;
   cl_object v5;
   v3 = ecl_function_dispatch(cl_env_copy,VV[311])(1, v1) /*  FORMAT-DIRECTIVE-COLONP */;
   v4 = ecl_function_dispatch(cl_env_copy,VV[312])(1, v1) /*  FORMAT-DIRECTIVE-ATSIGNP */;
   v5 = ecl_function_dispatch(cl_env_copy,VV[313])(1, v1) /*  FORMAT-DIRECTIVE-PARAMS */;
   L131check_output_layout_mode(ecl_make_fixnum(1));
   if (Null(v5)) { goto L6; }
   T1 = ecl_caar(v5);
   cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[79], ECL_SYM("OFFSET",1306), T1);
L6:;
   if (Null(v3)) { goto L9; }
   if (Null(v4)) { goto L11; }
   T1 = VV[182];
   goto L8;
L11:;
   T1 = VV[183];
   goto L8;
L9:;
   if (Null(v4)) { goto L13; }
   T1 = VV[184];
   goto L8;
L13:;
   T1 = VV[185];
L8:;
   T0 = cl_list(3, ECL_SYM("PPRINT-NEWLINE",656), T1, ECL_SYM("STREAM",801));
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v2;
   cl_env_copy->values[0] = T0;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA1446                                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC92__lambda1446(cl_object v1stream, cl_object v2, cl_object v3, cl_object v4orig_args, cl_object v5args)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v6;
   cl_object v7;
   cl_object v8;
   v6 = ecl_function_dispatch(cl_env_copy,VV[311])(1, v2) /*  FORMAT-DIRECTIVE-COLONP */;
   v7 = ecl_function_dispatch(cl_env_copy,VV[312])(1, v2) /*  FORMAT-DIRECTIVE-ATSIGNP */;
   v8 = ecl_function_dispatch(cl_env_copy,VV[313])(1, v2) /*  FORMAT-DIRECTIVE-PARAMS */;
   L131check_output_layout_mode(ecl_make_fixnum(1));
   if (Null(v8)) { goto L6; }
   T0 = ecl_list1(ecl_make_fixnum(0));
   T1 = ecl_caar(v8);
   cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[70], VV[71], T0, ECL_SYM("OFFSET",1306), T1);
L6:;
   if (Null(v6)) { goto L9; }
   if (Null(v7)) { goto L11; }
   T0 = VV[182];
   goto L8;
L11:;
   T0 = VV[183];
   goto L8;
L9:;
   if (Null(v7)) { goto L13; }
   T0 = VV[184];
   goto L8;
L13:;
   T0 = VV[185];
L8:;
   cl_pprint_newline(2, T0, v1stream);
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v5args;
   cl_env_copy->values[0] = v3;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LATIN_CAPITAL_LETTER_I-FORMAT-DIRECTIVE-EXPANDER */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC93latin_capital_letter_i_format_directive_expander(cl_object v1, cl_object v2)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8;
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
   v3 = ecl_function_dispatch(cl_env_copy,VV[311])(1, v1) /*  FORMAT-DIRECTIVE-COLONP */;
   v4 = ecl_function_dispatch(cl_env_copy,VV[312])(1, v1) /*  FORMAT-DIRECTIVE-ATSIGNP */;
   v5 = ecl_function_dispatch(cl_env_copy,VV[313])(1, v1) /*  FORMAT-DIRECTIVE-PARAMS */;
   L131check_output_layout_mode(ecl_make_fixnum(1));
   if (Null(v4)) { goto L5; }
   cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[186]);
L5:;
   {
    cl_object v6;
    v6 = v5;
    {
     cl_object v7param_and_offset;
     cl_object v8offset;
     cl_object v9param;
     {
      cl_object v10;
      v10 = v6;
      {
       cl_object v11;
       v11 = v10;
       if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v10)) { goto L15; }
      {
       cl_object v11;
       v11 = ECL_CONS_CDR(v10);
       v6 = v11;
       v10 = ECL_CONS_CAR(v10);
      }
L15:;
      v7param_and_offset = v10;
     }
     v8offset = ecl_car(v7param_and_offset);
     v9param = ecl_cdr(v7param_and_offset);
     if (!(ecl_eql(v9param,VV[23]))) { goto L23; }
     T2 = L15expand_next_arg(1, v8offset);
     T1 = cl_list(3, ECL_SYM("OR",616), T2, ecl_make_fixnum(0));
     goto L9;
L23:;
     if (!(ecl_eql(v9param,VV[24]))) { goto L25; }
     cl_set(VV[37],ECL_NIL);
     T1 = VV[68];
     goto L9;
L25:;
     if (!((v9param)==(ECL_NIL))) { goto L29; }
     T1 = ecl_make_fixnum(0);
     goto L9;
L29:;
     T1 = v9param;
    }
L9:;
    T2 = cl_list(2, VV[187], T1);
    T3 = ecl_list1(T2);
    if (Null(v6)) { goto L33; }
    T5 = ecl_list1(ecl_make_fixnum(1));
    T6 = ecl_caar(v6);
    T4 = cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[70], VV[71], T5, ECL_SYM("OFFSET",1306), T6);
    goto L32;
L33:;
    T4 = ECL_NIL;
L32:;
    if (Null(v3)) { goto L36; }
    T5 = VV[188];
    goto L35;
L36:;
    T5 = ECL_SYM("BLOCK",1224);
L35:;
    T6 = cl_list(4, ECL_SYM("PPRINT-INDENT",653), T5, VV[187], ECL_SYM("STREAM",801));
    T7 = ecl_list1(T6);
    T8 = ecl_append(T4,T7);
    T0 = cl_listX(3, ECL_SYM("LET",479), T3, T8);
   }
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v2;
   cl_env_copy->values[0] = T0;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA1465                                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC94__lambda1465(cl_object v1stream, cl_object v2, cl_object v3, cl_object v4orig_args, cl_object v5args)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v6;
   cl_object v7;
   cl_object v8;
   v6 = ecl_function_dispatch(cl_env_copy,VV[311])(1, v2) /*  FORMAT-DIRECTIVE-COLONP */;
   v7 = ecl_function_dispatch(cl_env_copy,VV[312])(1, v2) /*  FORMAT-DIRECTIVE-ATSIGNP */;
   v8 = ecl_function_dispatch(cl_env_copy,VV[313])(1, v2) /*  FORMAT-DIRECTIVE-PARAMS */;
   L131check_output_layout_mode(ecl_make_fixnum(1));
   if (Null(v7)) { goto L5; }
   cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[186]);
L5:;
   {
    cl_object v9;
    v9 = v8;
    {
     cl_object v10n;
     {
      cl_object v11param_and_offset;
      cl_object v12offset;
      cl_object v13param;
      {
       cl_object v14;
       v14 = v9;
       {
        cl_object v15;
        v15 = v14;
        if (ecl_unlikely(!ECL_LISTP(v15))) FEtype_error_list(v15);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v14)) { goto L15; }
       {
        cl_object v15;
        v15 = ECL_CONS_CDR(v14);
        v9 = v15;
        v14 = ECL_CONS_CAR(v14);
       }
L15:;
       v11param_and_offset = v14;
      }
      v12offset = ecl_car(v11param_and_offset);
      v13param = ecl_cdr(v11param_and_offset);
      if (!(ecl_eql(v13param,VV[23]))) { goto L23; }
      if (!(v5args==ECL_NIL)) { goto L28; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v12offset);
L28:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L30; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L30:;
      {
       cl_object v14;
       v14 = v5args;
       {
        cl_object v15;
        v15 = v14;
        if (ecl_unlikely(!ECL_LISTP(v15))) FEtype_error_list(v15);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v14)) { goto L36; }
       {
        cl_object v15;
        v15 = ECL_CONS_CDR(v14);
        v5args = v15;
        v14 = ECL_CONS_CAR(v14);
       }
L36:;
       value0 = v14;
      }
      if ((value0)!=ECL_NIL) { goto L26; }
      v10n = ecl_make_fixnum(0);
      goto L9;
L26:;
      v10n = value0;
      goto L9;
L23:;
      if (!(ecl_eql(v13param,VV[24]))) { goto L42; }
      v10n = ecl_make_fixnum(ecl_length(v5args));
      goto L9;
L42:;
      if (!((v13param)==(ECL_NIL))) { goto L44; }
      v10n = ecl_make_fixnum(0);
      goto L9;
L44:;
      v10n = v13param;
     }
L9:;
     if (Null(v9)) { goto L47; }
     T0 = ecl_list1(ecl_make_fixnum(1));
     T1 = ecl_caar(v9);
     cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[70], VV[71], T0, ECL_SYM("OFFSET",1306), T1);
L47:;
     if (Null(v6)) { goto L50; }
     T0 = VV[188];
     goto L49;
L50:;
     T0 = ECL_SYM("BLOCK",1224);
L49:;
     cl_pprint_indent(3, T0, v10n, v1stream);
    }
   }
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v5args;
   cl_env_copy->values[0] = v3;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function ASTERISK-FORMAT-DIRECTIVE-EXPANDER             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC95asterisk_format_directive_expander(cl_object v1, cl_object v2)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16;
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
   cl_object v6;
   v3 = ecl_function_dispatch(cl_env_copy,VV[311])(1, v1) /*  FORMAT-DIRECTIVE-COLONP */;
   v4 = ecl_function_dispatch(cl_env_copy,VV[312])(1, v1) /*  FORMAT-DIRECTIVE-ATSIGNP */;
   v5 = ecl_function_dispatch(cl_env_copy,VV[313])(1, v1) /*  FORMAT-DIRECTIVE-PARAMS */;
   v6 = ecl_function_dispatch(cl_env_copy,VV[300])(1, v1) /*  FORMAT-DIRECTIVE-END */;
   if (Null(v4)) { goto L6; }
   if (Null(v3)) { goto L8; }
   T0 = cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[189]);
   goto L5;
L8:;
   {
    cl_object v7;
    v7 = v5;
    {
     cl_object v8param_and_offset;
     cl_object v9offset;
     cl_object v10param;
     {
      cl_object v11;
      v11 = v7;
      {
       cl_object v12;
       v12 = v11;
       if (ecl_unlikely(!ECL_LISTP(v12))) FEtype_error_list(v12);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v11)) { goto L17; }
      {
       cl_object v12;
       v12 = ECL_CONS_CDR(v11);
       v7 = v12;
       v11 = ECL_CONS_CAR(v11);
      }
L17:;
      v8param_and_offset = v11;
     }
     v9offset = ecl_car(v8param_and_offset);
     v10param = ecl_cdr(v8param_and_offset);
     if (!(ecl_eql(v10param,VV[23]))) { goto L25; }
     T2 = L15expand_next_arg(1, v9offset);
     T1 = cl_list(3, ECL_SYM("OR",616), T2, ecl_make_fixnum(0));
     goto L11;
L25:;
     if (!(ecl_eql(v10param,VV[24]))) { goto L27; }
     cl_set(VV[37],ECL_NIL);
     T1 = VV[68];
     goto L11;
L27:;
     if (!((v10param)==(ECL_NIL))) { goto L31; }
     T1 = ecl_make_fixnum(0);
     goto L11;
L31:;
     T1 = v10param;
    }
L11:;
    T2 = cl_list(2, VV[190], T1);
    T3 = ecl_list1(T2);
    if (Null(v7)) { goto L35; }
    T5 = ecl_list1(ecl_make_fixnum(1));
    T6 = ecl_caar(v7);
    T4 = cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[70], VV[71], T5, ECL_SYM("OFFSET",1306), T6);
    goto L34;
L35:;
    T4 = ECL_NIL;
L34:;
    if ((ecl_symbol_value(VV[38]))!=ECL_NIL) { goto L38; }
    cl_env_copy->values[0] = ECL_NIL;
    cl_env_copy->nvalues = 1;
    cl_throw(VV[46]);
L38:;
    T5 = ECL_NIL;
    T6 = cl_list(4, ECL_SYM("<=",75), ecl_make_fixnum(0), VV[190], VV[191]);
    T7 = cl_list(3, ECL_SYM("NTHCDR",606), VV[190], VV[192]);
    T8 = cl_list(3, ECL_SYM("SETF",752), VV[50], T7);
    T9 = cl_list(3, ECL_SYM("LIST",483), VV[190], VV[191]);
    T10 = ecl_one_minus(v6);
    T11 = cl_list(8, ECL_SYM("ERROR",339), VV[47], VV[19], VV[193], VV[71], T9, ECL_SYM("OFFSET",1306), T10);
    T12 = cl_list(4, ECL_SYM("IF",948), T6, T8, T11);
    T13 = cl_list(2, T5, T12);
    T14 = ecl_append(T4,T13);
    T0 = cl_listX(3, ECL_SYM("LET",479), T3, T14);
    goto L5;
   }
L6:;
   if (Null(v3)) { goto L41; }
   {
    cl_object v8;
    v8 = v5;
    {
     cl_object v9param_and_offset;
     cl_object v10offset;
     cl_object v11param;
     {
      cl_object v12;
      v12 = v8;
      {
       cl_object v13;
       v13 = v12;
       if (ecl_unlikely(!ECL_LISTP(v13))) FEtype_error_list(v13);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v12)) { goto L50; }
      {
       cl_object v13;
       v13 = ECL_CONS_CDR(v12);
       v8 = v13;
       v12 = ECL_CONS_CAR(v12);
      }
L50:;
      v9param_and_offset = v12;
     }
     v10offset = ecl_car(v9param_and_offset);
     v11param = ecl_cdr(v9param_and_offset);
     if (!(ecl_eql(v11param,VV[23]))) { goto L58; }
     T2 = L15expand_next_arg(1, v10offset);
     T1 = cl_list(3, ECL_SYM("OR",616), T2, ecl_make_fixnum(1));
     goto L44;
L58:;
     if (!(ecl_eql(v11param,VV[24]))) { goto L60; }
     cl_set(VV[37],ECL_NIL);
     T1 = VV[68];
     goto L44;
L60:;
     if (!((v11param)==(ECL_NIL))) { goto L64; }
     T1 = ecl_make_fixnum(1);
     goto L44;
L64:;
     T1 = v11param;
    }
L44:;
    T2 = cl_list(2, VV[194], T1);
    T3 = ecl_list1(T2);
    if (Null(v8)) { goto L68; }
    T5 = ecl_list1(ecl_make_fixnum(1));
    T6 = ecl_caar(v8);
    T4 = cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[70], VV[71], T5, ECL_SYM("OFFSET",1306), T6);
    goto L67;
L68:;
    T4 = ECL_NIL;
L67:;
    if ((ecl_symbol_value(VV[38]))!=ECL_NIL) { goto L71; }
    cl_env_copy->values[0] = ECL_NIL;
    cl_env_copy->nvalues = 1;
    cl_throw(VV[46]);
L71:;
    T5 = ECL_NIL;
    T6 = cl_list(3, ECL_SYM("-",19), VV[198], VV[194]);
    T7 = cl_list(2, VV[197], T6);
    T8 = ecl_list1(T7);
    T9 = ecl_one_minus(v6);
    T10 = cl_list(8, ECL_SYM("ERROR",339), VV[47], VV[19], VV[201], VV[71], VV[202], ECL_SYM("OFFSET",1306), T9);
    T11 = cl_list(4, ECL_SYM("IF",948), VV[199], VV[200], T10);
    T12 = cl_list(3, ECL_SYM("LET",479), T8, T11);
    T13 = cl_list(2, VV[196], T12);
    T14 = cl_list(3, ECL_SYM("DO",309), VV[195], T13);
    T15 = cl_list(2, T5, T14);
    T16 = ecl_append(T4,T15);
    T0 = cl_listX(3, ECL_SYM("LET",479), T3, T16);
    goto L5;
   }
L41:;
   if (Null(v5)) { goto L74; }
   {
    cl_object v9;
    v9 = v5;
    {
     cl_object v10param_and_offset;
     cl_object v11offset;
     cl_object v12param;
     {
      cl_object v13;
      v13 = v9;
      {
       cl_object v14;
       v14 = v13;
       if (ecl_unlikely(!ECL_LISTP(v14))) FEtype_error_list(v14);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v13)) { goto L83; }
      {
       cl_object v14;
       v14 = ECL_CONS_CDR(v13);
       v9 = v14;
       v13 = ECL_CONS_CAR(v13);
      }
L83:;
      v10param_and_offset = v13;
     }
     v11offset = ecl_car(v10param_and_offset);
     v12param = ecl_cdr(v10param_and_offset);
     if (!(ecl_eql(v12param,VV[23]))) { goto L91; }
     T2 = L15expand_next_arg(1, v11offset);
     T1 = cl_list(3, ECL_SYM("OR",616), T2, ecl_make_fixnum(1));
     goto L77;
L91:;
     if (!(ecl_eql(v12param,VV[24]))) { goto L93; }
     cl_set(VV[37],ECL_NIL);
     T1 = VV[68];
     goto L77;
L93:;
     if (!((v12param)==(ECL_NIL))) { goto L97; }
     T1 = ecl_make_fixnum(1);
     goto L77;
L97:;
     T1 = v12param;
    }
L77:;
    T2 = cl_list(2, VV[203], T1);
    T3 = ecl_list1(T2);
    if (Null(v9)) { goto L101; }
    T5 = ecl_list1(ecl_make_fixnum(1));
    T6 = ecl_caar(v9);
    T4 = cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[70], VV[71], T5, ECL_SYM("OFFSET",1306), T6);
    goto L100;
L101:;
    T4 = ECL_NIL;
L100:;
    cl_set(VV[37],ECL_NIL);
    T5 = cl_list(2, VV[158], VV[203]);
    T6 = L15expand_next_arg(0);
    T7 = cl_list(3, ECL_SYM("DOTIMES",316), T5, T6);
    T8 = cl_list(2, ECL_NIL, T7);
    T9 = ecl_append(T4,T8);
    T0 = cl_listX(3, ECL_SYM("LET",479), T3, T9);
    goto L5;
   }
L74:;
   T0 = L15expand_next_arg(0);
L5:;
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v2;
   cl_env_copy->values[0] = T0;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA1506                                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC96__lambda1506(cl_object v1stream, cl_object v2, cl_object v3, cl_object v4orig_args, cl_object v5args)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v6;
   cl_object v7;
   cl_object v8;
   v6 = ecl_function_dispatch(cl_env_copy,VV[311])(1, v2) /*  FORMAT-DIRECTIVE-COLONP */;
   v7 = ecl_function_dispatch(cl_env_copy,VV[312])(1, v2) /*  FORMAT-DIRECTIVE-ATSIGNP */;
   v8 = ecl_function_dispatch(cl_env_copy,VV[313])(1, v2) /*  FORMAT-DIRECTIVE-PARAMS */;
   if (Null(v7)) { goto L5; }
   if (Null(v6)) { goto L7; }
   cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[189]);
   goto L4;
L7:;
   {
    cl_object v9;
    v9 = v8;
    {
     cl_object v10posn;
     {
      cl_object v11param_and_offset;
      cl_object v12offset;
      cl_object v13param;
      {
       cl_object v14;
       v14 = v9;
       {
        cl_object v15;
        v15 = v14;
        if (ecl_unlikely(!ECL_LISTP(v15))) FEtype_error_list(v15);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v14)) { goto L16; }
       {
        cl_object v15;
        v15 = ECL_CONS_CDR(v14);
        v9 = v15;
        v14 = ECL_CONS_CAR(v14);
       }
L16:;
       v11param_and_offset = v14;
      }
      v12offset = ecl_car(v11param_and_offset);
      v13param = ecl_cdr(v11param_and_offset);
      if (!(ecl_eql(v13param,VV[23]))) { goto L24; }
      if (!(v5args==ECL_NIL)) { goto L29; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v12offset);
L29:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L31; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L31:;
      {
       cl_object v14;
       v14 = v5args;
       {
        cl_object v15;
        v15 = v14;
        if (ecl_unlikely(!ECL_LISTP(v15))) FEtype_error_list(v15);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v14)) { goto L37; }
       {
        cl_object v15;
        v15 = ECL_CONS_CDR(v14);
        v5args = v15;
        v14 = ECL_CONS_CAR(v14);
       }
L37:;
       value0 = v14;
      }
      if ((value0)!=ECL_NIL) { goto L27; }
      v10posn = ecl_make_fixnum(0);
      goto L10;
L27:;
      v10posn = value0;
      goto L10;
L24:;
      if (!(ecl_eql(v13param,VV[24]))) { goto L43; }
      v10posn = ecl_make_fixnum(ecl_length(v5args));
      goto L10;
L43:;
      if (!((v13param)==(ECL_NIL))) { goto L45; }
      v10posn = ecl_make_fixnum(0);
      goto L10;
L45:;
      v10posn = v13param;
     }
L10:;
     if (Null(v9)) { goto L48; }
     T0 = ecl_list1(ecl_make_fixnum(1));
     T1 = ecl_caar(v9);
     cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[70], VV[71], T0, ECL_SYM("OFFSET",1306), T1);
L48:;
     {
      cl_fixnum v11;
      v11 = ecl_length(v4orig_args);
      if (Null(cl_LE(3, ecl_make_fixnum(0), v10posn, ecl_make_fixnum(v11)))) { goto L50; }
     }
     v5args = ecl_nthcdr(ecl_to_size(v10posn),v4orig_args);
     goto L4;
L50:;
     {
      cl_fixnum v11;
      v11 = ecl_length(v4orig_args);
      T0 = cl_list(2, v10posn, ecl_make_fixnum(v11));
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[204], VV[71], T0);
      goto L4;
     }
    }
   }
L5:;
   if (Null(v6)) { goto L53; }
   {
    cl_object v12;
    v12 = v8;
    {
     cl_object v13n;
     {
      cl_object v14param_and_offset;
      cl_object v15offset;
      cl_object v16param;
      {
       cl_object v17;
       v17 = v12;
       {
        cl_object v18;
        v18 = v17;
        if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v17)) { goto L62; }
       {
        cl_object v18;
        v18 = ECL_CONS_CDR(v17);
        v12 = v18;
        v17 = ECL_CONS_CAR(v17);
       }
L62:;
       v14param_and_offset = v17;
      }
      v15offset = ecl_car(v14param_and_offset);
      v16param = ecl_cdr(v14param_and_offset);
      if (!(ecl_eql(v16param,VV[23]))) { goto L70; }
      if (!(v5args==ECL_NIL)) { goto L75; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v15offset);
L75:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L77; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L77:;
      {
       cl_object v17;
       v17 = v5args;
       {
        cl_object v18;
        v18 = v17;
        if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v17)) { goto L83; }
       {
        cl_object v18;
        v18 = ECL_CONS_CDR(v17);
        v5args = v18;
        v17 = ECL_CONS_CAR(v17);
       }
L83:;
       value0 = v17;
      }
      if ((value0)!=ECL_NIL) { goto L73; }
      v13n = ecl_make_fixnum(1);
      goto L56;
L73:;
      v13n = value0;
      goto L56;
L70:;
      if (!(ecl_eql(v16param,VV[24]))) { goto L89; }
      v13n = ecl_make_fixnum(ecl_length(v5args));
      goto L56;
L89:;
      if (!((v16param)==(ECL_NIL))) { goto L91; }
      v13n = ecl_make_fixnum(1);
      goto L56;
L91:;
      v13n = v16param;
     }
L56:;
     if (Null(v12)) { goto L94; }
     T0 = ecl_list1(ecl_make_fixnum(1));
     T1 = ecl_caar(v12);
     cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[70], VV[71], T0, ECL_SYM("OFFSET",1306), T1);
L94:;
     {
      cl_object v14cur_posn;
      cl_object v15arg_ptr;
      v14cur_posn = ecl_make_fixnum(0);
      v15arg_ptr = v4orig_args;
      goto L100;
L99:;
      v14cur_posn = ecl_one_plus(v14cur_posn);
      v15arg_ptr = ecl_cdr(v15arg_ptr);
L100:;
      if ((v15arg_ptr)==(v5args)) { goto L105; }
      goto L99;
L105:;
      {
       cl_object v16new_posn;
       v16new_posn = ecl_minus(v14cur_posn,v13n);
       {
        cl_fixnum v17;
        v17 = ecl_length(v4orig_args);
        if (Null(cl_LE(3, ecl_make_fixnum(0), v16new_posn, ecl_make_fixnum(v17)))) { goto L108; }
       }
       v5args = ecl_nthcdr(ecl_to_size(v16new_posn),v4orig_args);
       goto L4;
L108:;
       {
        cl_fixnum v17;
        v17 = ecl_length(v4orig_args);
        T0 = cl_list(2, v16new_posn, ecl_make_fixnum(v17));
        cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[205], VV[71], T0);
        goto L4;
       }
      }
     }
    }
   }
L53:;
   {
    cl_object v18;
    v18 = v8;
    {
     cl_object v19n;
     {
      cl_object v20param_and_offset;
      cl_object v21offset;
      cl_object v22param;
      {
       cl_object v23;
       v23 = v18;
       {
        cl_object v24;
        v24 = v23;
        if (ecl_unlikely(!ECL_LISTP(v24))) FEtype_error_list(v24);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v23)) { goto L118; }
       {
        cl_object v24;
        v24 = ECL_CONS_CDR(v23);
        v18 = v24;
        v23 = ECL_CONS_CAR(v23);
       }
L118:;
       v20param_and_offset = v23;
      }
      v21offset = ecl_car(v20param_and_offset);
      v22param = ecl_cdr(v20param_and_offset);
      if (!(ecl_eql(v22param,VV[23]))) { goto L126; }
      if (!(v5args==ECL_NIL)) { goto L131; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v21offset);
L131:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L133; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L133:;
      {
       cl_object v23;
       v23 = v5args;
       {
        cl_object v24;
        v24 = v23;
        if (ecl_unlikely(!ECL_LISTP(v24))) FEtype_error_list(v24);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v23)) { goto L139; }
       {
        cl_object v24;
        v24 = ECL_CONS_CDR(v23);
        v5args = v24;
        v23 = ECL_CONS_CAR(v23);
       }
L139:;
       value0 = v23;
      }
      if ((value0)!=ECL_NIL) { goto L129; }
      v19n = ecl_make_fixnum(1);
      goto L112;
L129:;
      v19n = value0;
      goto L112;
L126:;
      if (!(ecl_eql(v22param,VV[24]))) { goto L145; }
      v19n = ecl_make_fixnum(ecl_length(v5args));
      goto L112;
L145:;
      if (!((v22param)==(ECL_NIL))) { goto L147; }
      v19n = ecl_make_fixnum(1);
      goto L112;
L147:;
      v19n = v22param;
     }
L112:;
     if (Null(v18)) { goto L150; }
     T0 = ecl_list1(ecl_make_fixnum(1));
     T1 = ecl_caar(v18);
     cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[70], VV[71], T0, ECL_SYM("OFFSET",1306), T1);
L150:;
     {
      cl_object v20i;
      v20i = ecl_make_fixnum(0);
      goto L154;
L153:;
      if (!(v5args==ECL_NIL)) { goto L157; }
      cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57]);
L157:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L159; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L159:;
      {
       cl_object v21;
       v21 = v5args;
       {
        cl_object v22;
        v22 = v21;
        if (ecl_unlikely(!ECL_LISTP(v22))) FEtype_error_list(v22);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v21)) { goto L165; }
       {
        cl_object v22;
        v22 = ECL_CONS_CDR(v21);
        v5args = v22;
        v21 = ECL_CONS_CAR(v21);
       }
L165:;
      }
      v20i = ecl_one_plus(v20i);
L154:;
      if (!(ecl_lower(v20i,v19n))) { goto L173; }
      goto L153;
L173:;
     }
    }
   }
L4:;
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v5args;
   cl_env_copy->values[0] = v3;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function QUESTION_MARK-FORMAT-DIRECTIVE-EXPANDER        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC97question_mark_format_directive_expander(cl_object v1, cl_object v2)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9;
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
   cl_object v6;
   cl_object v7;
   v3 = ecl_function_dispatch(cl_env_copy,VV[311])(1, v1) /*  FORMAT-DIRECTIVE-COLONP */;
   v4 = ecl_function_dispatch(cl_env_copy,VV[312])(1, v1) /*  FORMAT-DIRECTIVE-ATSIGNP */;
   v5 = ecl_function_dispatch(cl_env_copy,VV[313])(1, v1) /*  FORMAT-DIRECTIVE-PARAMS */;
   v6 = ecl_function_dispatch(cl_env_copy,VV[329])(1, v1) /*  FORMAT-DIRECTIVE-STRING */;
   v7 = ecl_function_dispatch(cl_env_copy,VV[300])(1, v1) /*  FORMAT-DIRECTIVE-END */;
   if (Null(v3)) { goto L6; }
   cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[206]);
L6:;
   if (Null(v5)) { goto L9; }
   T1 = ecl_caar(v5);
   cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[79], ECL_SYM("OFFSET",1306), T1);
L9:;
   T1 = ecl_one_minus(v7);
   T2 = cl_list(12, ECL_SYM("ERROR",339), VV[47], VV[19], VV[208], VV[71], VV[209], VV[210], ECL_NIL, ECL_SYM("CONTROL-STRING",1233), v6, ECL_SYM("OFFSET",1306), T1);
   T3 = cl_list(3, ECL_SYM("LAMBDA",454), VV[207], T2);
   T4 = cl_list(2, ECL_SYM("FUNCTION",398), T3);
   T5 = cl_list(2, ECL_SYM("FORMAT-ERROR",1078), T4);
   T6 = ecl_list1(T5);
   if (Null(v4)) { goto L12; }
   if (Null(ecl_symbol_value(VV[38]))) { goto L14; }
   T8 = L15expand_next_arg(0);
   T9 = cl_listX(4, VV[42], ECL_SYM("STREAM",801), T8, VV[211]);
   T7 = cl_list(3, ECL_SYM("SETF",752), VV[50], T9);
   goto L11;
L14:;
   cl_env_copy->values[0] = ECL_NIL;
   cl_env_copy->nvalues = 1;
   cl_throw(VV[46]);
L12:;
   T8 = L15expand_next_arg(0);
   T9 = L15expand_next_arg(0);
   T7 = cl_list(4, VV[42], ECL_SYM("STREAM",801), T8, T9);
L11:;
   T0 = cl_list(3, ECL_SYM("HANDLER-BIND",419), T6, T7);
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v2;
   cl_env_copy->values[0] = T0;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA1556                                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC99__lambda1556(cl_object v1stream, cl_object v2, cl_object v3, cl_object v4orig_args, cl_object v5args)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v6;
   cl_object v7;
   cl_object v8;
   cl_object v9;
   cl_object v10;
   cl_object env1 = env0;
   v6 = ecl_function_dispatch(cl_env_copy,VV[311])(1, v2) /*  FORMAT-DIRECTIVE-COLONP */;
   v7 = ecl_function_dispatch(cl_env_copy,VV[312])(1, v2) /*  FORMAT-DIRECTIVE-ATSIGNP */;
   v8 = ecl_function_dispatch(cl_env_copy,VV[313])(1, v2) /*  FORMAT-DIRECTIVE-PARAMS */;
   v9 = ecl_function_dispatch(cl_env_copy,VV[329])(1, v2) /*  FORMAT-DIRECTIVE-STRING */;
   v10 = ecl_function_dispatch(cl_env_copy,VV[300])(1, v2) /*  FORMAT-DIRECTIVE-END */;
   env1 = ECL_NIL;
   CLV0 = env1 = CONS(v9,env1);                   /*  STRING          */
   CLV1 = env1 = CONS(v10,env1);                  /*  END             */
   if (Null(v6)) { goto L6; }
   cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[206]);
L6:;
   if (Null(v8)) { goto L9; }
   T0 = ecl_list1(ecl_make_fixnum(0));
   T1 = ecl_caar(v8);
   cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[70], VV[71], T0, ECL_SYM("OFFSET",1306), T1);
L9:;
   {
    cl_object v11;
    v11 = ecl_make_cclosure_va((cl_objectfn)LC98__lambda1563,env1,Cblock,1);
    T0 = v11;
   }
   T1 = CONS(ECL_SYM("FORMAT-ERROR",1078),T0);
   T2 = ecl_list1(T1);
   T3 = CONS(T2,ecl_symbol_value(ECL_SYM("*HANDLER-CLUSTERS*",6)));
   ecl_bds_bind(cl_env_copy,ECL_SYM("*HANDLER-CLUSTERS*",6),T3); /*  *HANDLER-CLUSTERS* */
   if (Null(v7)) { goto L12; }
   if (!(v5args==ECL_NIL)) { goto L15; }
   cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57]);
L15:;
   if (Null(ecl_symbol_value(VV[34]))) { goto L17; }
   ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L17:;
   {
    cl_object v11;
    v11 = v5args;
    {
     cl_object v12;
     v12 = v11;
     if (ecl_unlikely(!ECL_LISTP(v12))) FEtype_error_list(v12);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
    }
    if (Null(v11)) { goto L24; }
    {
     cl_object v12;
     v12 = ECL_CONS_CDR(v11);
     v5args = v12;
     v11 = ECL_CONS_CAR(v11);
    }
L24:;
    T0 = v11;
   }
   v5args = L8formatter_aux(4, v1stream, T0, v4orig_args, v5args);
   ecl_bds_unwind1(cl_env_copy);
   goto L8;
L12:;
   if (!(v5args==ECL_NIL)) { goto L30; }
   cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57]);
L30:;
   if (Null(ecl_symbol_value(VV[34]))) { goto L32; }
   ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L32:;
   {
    cl_object v11;
    v11 = v5args;
    {
     cl_object v12;
     v12 = v11;
     if (ecl_unlikely(!ECL_LISTP(v12))) FEtype_error_list(v12);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
    }
    if (Null(v11)) { goto L39; }
    {
     cl_object v12;
     v12 = ECL_CONS_CDR(v11);
     v5args = v12;
     v11 = ECL_CONS_CAR(v11);
    }
L39:;
    T0 = v11;
   }
   if (!(v5args==ECL_NIL)) { goto L45; }
   cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57]);
L45:;
   if (Null(ecl_symbol_value(VV[34]))) { goto L47; }
   ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L47:;
   {
    cl_object v11;
    v11 = v5args;
    {
     cl_object v12;
     v12 = v11;
     if (ecl_unlikely(!ECL_LISTP(v12))) FEtype_error_list(v12);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
    }
    if (Null(v11)) { goto L54; }
    {
     cl_object v12;
     v12 = ECL_CONS_CDR(v11);
     v5args = v12;
     v11 = ECL_CONS_CAR(v11);
    }
L54:;
    T1 = v11;
   }
   L8formatter_aux(3, v1stream, T0, T1);
   ecl_bds_unwind1(cl_env_copy);
L8:;
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v5args;
   cl_env_copy->values[0] = v3;
   return cl_env_copy->values[0];
  }
 }
}
/*      closure LAMBDA1563                                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC98__lambda1563(cl_narg narg, cl_object v1condition, ...)
{
 cl_object T0, T1;
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV1 = env0;                                     /*  END             */
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=1)) FEwrong_num_arguments_anonym();
 {
TTL:
  T0 = ecl_list1(v1condition);
  T1 = ecl_one_minus(ECL_CONS_CAR(CLV1));
  value0 = cl_error(11, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[208], VV[71], T0, VV[210], ECL_NIL, ECL_SYM("CONTROL-STRING",1233), ECL_CONS_CAR(CLV0), ECL_SYM("OFFSET",1306), T1);
  return value0;
 }
 }
}
/*      function definition for NSTRING-CAPITALIZE-FIRST              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L100nstring_capitalize_first(cl_object v1s)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  cl_nstring_downcase(1, v1s);
  {
   cl_object v2where;
   T0 = (ECL_SYM("ALPHA-CHAR-P",87)->symbol.gfdef);
   v2where = cl_position_if(2, T0, v1s);
   if (Null(v2where)) { goto L4; }
   T0 = ecl_one_plus(v2where);
   cl_nstring_capitalize(5, v1s, ECL_SYM("START",1337), ecl_make_fixnum(0), ECL_SYM("END",1247), T0);
L4:;
   value0 = v1s;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function LEFT_PARENTHESIS-FORMAT-DIRECTIVE-EXPANDER     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC101left_parenthesis_format_directive_expander(cl_object v1, cl_object v2directives)
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
   cl_object v4;
   cl_object v5;
   v3 = ecl_function_dispatch(cl_env_copy,VV[311])(1, v1) /*  FORMAT-DIRECTIVE-COLONP */;
   v4 = ecl_function_dispatch(cl_env_copy,VV[312])(1, v1) /*  FORMAT-DIRECTIVE-ATSIGNP */;
   v5 = ecl_function_dispatch(cl_env_copy,VV[313])(1, v1) /*  FORMAT-DIRECTIVE-PARAMS */;
   {
    cl_object v6close;
    v6close = L22find_directive(v2directives, CODE_CHAR(41), ECL_NIL);
    if ((v6close)!=ECL_NIL) { goto L5; }
    cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[213]);
L5:;
    {
     cl_object v7posn;
     cl_object v8before;
     cl_object v9after;
     v7posn = cl_position(2, v6close, v2directives);
     v8before = cl_subseq(3, v2directives, ecl_make_fixnum(0), v7posn);
     T0 = ecl_one_plus(v7posn);
     v9after = ecl_nthcdr(ecl_to_size(T0),v2directives);
     if (Null(v5)) { goto L11; }
     T1 = ecl_caar(v5);
     cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[79], ECL_SYM("OFFSET",1306), T1);
L11:;
     T1 = L13expand_directive_list(v8before);
     T2 = cl_listX(3, ECL_SYM("WITH-OUTPUT-TO-STRING",915), VV[215], T1);
     if (Null(v3)) { goto L14; }
     if (Null(v4)) { goto L16; }
     T3 = ECL_SYM("NSTRING-UPCASE",596);
     goto L13;
L16:;
     T3 = ECL_SYM("NSTRING-CAPITALIZE",594);
     goto L13;
L14:;
     if (Null(v4)) { goto L18; }
     T3 = VV[212];
     goto L13;
L18:;
     T3 = ECL_SYM("NSTRING-DOWNCASE",595);
L13:;
     T4 = cl_list(2, T3, ECL_SYM("STRING",807));
     T5 = cl_list(3, ECL_SYM("PRINC",662), T4, ECL_SYM("STREAM",801));
     T6 = cl_list(3, ECL_SYM("UNWIND-PROTECT",890), T2, T5);
     T0 = cl_list(3, ECL_SYM("LET",479), VV[214], T6);
     cl_env_copy->nvalues = 2;
     cl_env_copy->values[1] = v9after;
     cl_env_copy->values[0] = T0;
     return cl_env_copy->values[0];
    }
   }
  }
 }
}
/*      local function LAMBDA1577                                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC102__lambda1577(cl_object volatile v1stream, cl_object volatile v2, cl_object volatile v3directives, cl_object volatile v4orig_args, cl_object volatile v5args)
{
 cl_object T0, T1, T2;
 cl_object volatile env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   volatile cl_object v6;
   volatile cl_object v7;
   volatile cl_object v8;
   v6 = ecl_function_dispatch(cl_env_copy,VV[311])(1, v2) /*  FORMAT-DIRECTIVE-COLONP */;
   v7 = ecl_function_dispatch(cl_env_copy,VV[312])(1, v2) /*  FORMAT-DIRECTIVE-ATSIGNP */;
   v8 = ecl_function_dispatch(cl_env_copy,VV[313])(1, v2) /*  FORMAT-DIRECTIVE-PARAMS */;
   {
    volatile cl_object v9close;
    v9close = L22find_directive(v3directives, CODE_CHAR(41), ECL_NIL);
    if ((v9close)!=ECL_NIL) { goto L6; }
    cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[213]);
L6:;
    if (Null(v8)) { goto L8; }
    T1 = ecl_list1(ecl_make_fixnum(0));
    T2 = ecl_caar(v8);
    cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[70], VV[71], T1, ECL_SYM("OFFSET",1306), T2);
L8:;
    {
     volatile cl_object v10posn;
     volatile cl_object v11before;
     volatile cl_object v12after;
     volatile cl_object v13string;
     v10posn = cl_position(2, v9close, v3directives);
     v11before = cl_subseq(3, v3directives, ecl_make_fixnum(0), v10posn);
     T1 = ecl_one_plus(v10posn);
     v12after = ecl_nthcdr(ecl_to_size(T1),v3directives);
     v13string = si_make_vector(ECL_SYM("CHARACTER",224), ecl_make_fixnum(10), ECL_T, ecl_make_fixnum(0), ECL_NIL, ecl_make_fixnum(0));
     {
      volatile bool unwinding = FALSE;
      cl_index v14=ECL_STACK_INDEX(cl_env_copy),v15;
      ecl_frame_ptr next_fr;
      ecl_frs_push(cl_env_copy,ECL_PROTECT_TAG);
      if (__ecl_frs_push_result) {
        unwinding = TRUE; next_fr=cl_env_copy->nlj_fr;
      } else {
      {
       volatile cl_object v16;
       v16 = si_make_string_output_stream_from_string(v13string);
       {
        volatile bool unwinding = FALSE;
        cl_index v17=ECL_STACK_INDEX(cl_env_copy),v18;
        ecl_frame_ptr next_fr;
        ecl_frs_push(cl_env_copy,ECL_PROTECT_TAG);
        if (__ecl_frs_push_result) {
          unwinding = TRUE; next_fr=cl_env_copy->nlj_fr;
        } else {
        v5args = L9interpret_directive_list(v16, v11before, v4orig_args, v5args);
        cl_env_copy->values[0] = v5args;
        cl_env_copy->nvalues = 1;
        }
        ecl_frs_pop(cl_env_copy);
        v18=ecl_stack_push_values(cl_env_copy);
        cl_close(1, v16);
        ecl_stack_pop_values(cl_env_copy,v18);
        if (unwinding) ecl_unwind(cl_env_copy,next_fr);
        ECL_STACK_SET_INDEX(cl_env_copy,v17);
       }
      }
      }
      ecl_frs_pop(cl_env_copy);
      v15=ecl_stack_push_values(cl_env_copy);
      if (Null(v6)) { goto L23; }
      if (Null(v7)) { goto L25; }
      T2 = ECL_SYM("NSTRING-UPCASE",596);
      goto L22;
L25:;
      T2 = ECL_SYM("NSTRING-CAPITALIZE",594);
      goto L22;
L23:;
      if (Null(v7)) { goto L27; }
      T2 = VV[212];
      goto L22;
L27:;
      T2 = ECL_SYM("NSTRING-DOWNCASE",595);
L22:;
      T1 = ecl_function_dispatch(cl_env_copy,T2)(1, v13string);
      ecl_princ(T1,v1stream);
      ecl_stack_pop_values(cl_env_copy,v15);
      if (unwinding) ecl_unwind(cl_env_copy,next_fr);
      ECL_STACK_SET_INDEX(cl_env_copy,v14);
     }
     T0 = v12after;
    }
   }
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v5args;
   cl_env_copy->values[0] = T0;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function RIGHT_PARENTHESIS-FORMAT-DIRECTIVE-EXPANDER    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC103right_parenthesis_format_directive_expander(cl_object v1, cl_object v2)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[216]);
  return value0;
 }
}
/*      local function LAMBDA1590                                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC104__lambda1590(cl_object v1stream, cl_object v2, cl_object v3, cl_object v4orig_args, cl_object v5args)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[216]);
  return value0;
 }
}
/*      function definition for PARSE-CONDITIONAL-DIRECTIVE           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L105parse_conditional_directive(cl_object v1directives)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2sublists;
   cl_object v3last_semi_with_colon_p;
   cl_object v4remaining;
   v2sublists = ECL_NIL;
   v3last_semi_with_colon_p = ECL_NIL;
   v4remaining = v1directives;
L5:;
   {
    cl_object v5close_or_semi;
    v5close_or_semi = L22find_directive(v4remaining, CODE_CHAR(93), ECL_T);
    if ((v5close_or_semi)!=ECL_NIL) { goto L8; }
    cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[217]);
L8:;
    {
     cl_object v6posn;
     v6posn = cl_position(2, v5close_or_semi, v4remaining);
     T0 = cl_subseq(3, v4remaining, ecl_make_fixnum(0), v6posn);
     v2sublists = CONS(T0,v2sublists);
     T0 = ecl_one_plus(v6posn);
     v4remaining = ecl_nthcdr(ecl_to_size(T0),v4remaining);
     T0 = ecl_function_dispatch(cl_env_copy,VV[303])(1, v5close_or_semi) /*  FORMAT-DIRECTIVE-CHARACTER */;
     if (!(ecl_char_code(T0)==ecl_char_code(CODE_CHAR(93)))) { goto L15; }
     goto L4;
L15:;
     v3last_semi_with_colon_p = ecl_function_dispatch(cl_env_copy,VV[311])(1, v5close_or_semi) /*  FORMAT-DIRECTIVE-COLONP */;
    }
   }
   goto L5;
L4:;
   cl_env_copy->nvalues = 3;
   cl_env_copy->values[2] = v4remaining;
   cl_env_copy->values[1] = v3last_semi_with_colon_p;
   cl_env_copy->values[0] = v2sublists;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LEFT_SQUARE_BRACKET-FORMAT-DIRECTIVE-EXPANDER  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC106left_square_bracket_format_directive_expander(cl_object v1, cl_object v2directives)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8;
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
   v3 = ecl_function_dispatch(cl_env_copy,VV[311])(1, v1) /*  FORMAT-DIRECTIVE-COLONP */;
   v4 = ecl_function_dispatch(cl_env_copy,VV[312])(1, v1) /*  FORMAT-DIRECTIVE-ATSIGNP */;
   v5 = ecl_function_dispatch(cl_env_copy,VV[313])(1, v1) /*  FORMAT-DIRECTIVE-PARAMS */;
   {
    cl_object v7;                                 /*  SUBLISTS        */
    cl_object v8;                                 /*  LAST-SEMI-WITH-COLON-P */
    cl_object v9;                                 /*  REMAINING       */
    value0 = L105parse_conditional_directive(v2directives);
    {
     const int v10 = cl_env_copy->nvalues;
     v7 = value0;
     cl_object v11;
     v11 = (v10<=1)? ECL_NIL : cl_env_copy->values[1];
     v8 = v11;
     v11 = (v10<=2)? ECL_NIL : cl_env_copy->values[2];
     v9 = v11;
    }
    if (Null(v4)) { goto L6; }
    if (Null(v3)) { goto L8; }
    T0 = cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[218]);
    goto L5;
L8:;
    if (Null(ecl_cdr(v7))) { goto L10; }
    T0 = cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[219]);
    goto L5;
L10:;
    if (Null(v5)) { goto L12; }
    T1 = ecl_caar(v5);
    cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[79], ECL_SYM("OFFSET",1306), T1);
L12:;
    T1 = ecl_car(v7);
    T0 = L108expand_maybe_conditional(T1);
    goto L5;
L6:;
    if (Null(v3)) { goto L14; }
    {
     cl_fixnum v10;
     v10 = ecl_length(v7);
     if (!((v10)==(2))) { goto L16; }
    }
    if (Null(v5)) { goto L18; }
    T1 = ecl_caar(v5);
    cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[79], ECL_SYM("OFFSET",1306), T1);
L18:;
    T1 = ecl_car(v7);
    T2 = ecl_cadr(v7);
    T0 = L110expand_true_false_conditional(T1, T2);
    goto L5;
L16:;
    T0 = cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[220]);
    goto L5;
L14:;
    {
     cl_object v10;
     v10 = v5;
     {
      cl_object v11param_and_offset;
      cl_object v12offset;
      cl_object v13param;
      {
       cl_object v14;
       v14 = v10;
       {
        cl_object v15;
        v15 = v14;
        if (ecl_unlikely(!ECL_LISTP(v15))) FEtype_error_list(v15);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v14)) { goto L27; }
       {
        cl_object v15;
        v15 = ECL_CONS_CDR(v14);
        v10 = v15;
        v14 = ECL_CONS_CAR(v14);
       }
L27:;
       v11param_and_offset = v14;
      }
      v12offset = ecl_car(v11param_and_offset);
      v13param = ecl_cdr(v11param_and_offset);
      if (!(ecl_eql(v13param,VV[23]))) { goto L35; }
      T2 = L15expand_next_arg(1, v12offset);
      T1 = cl_list(3, ECL_SYM("OR",616), T2, ECL_NIL);
      goto L21;
L35:;
      if (!(ecl_eql(v13param,VV[24]))) { goto L37; }
      cl_set(VV[37],ECL_NIL);
      T1 = VV[68];
      goto L21;
L37:;
      if (!((v13param)==(ECL_NIL))) { goto L41; }
      T1 = ECL_NIL;
      goto L21;
L41:;
      T1 = v13param;
     }
L21:;
     T2 = cl_list(2, VV[221], T1);
     T3 = ecl_list1(T2);
     if (Null(v10)) { goto L45; }
     T5 = ecl_list1(ecl_make_fixnum(1));
     T6 = ecl_caar(v10);
     T4 = cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[70], VV[71], T5, ECL_SYM("OFFSET",1306), T6);
     goto L44;
L45:;
     T4 = ECL_NIL;
L44:;
     cl_set(VV[37],ECL_NIL);
     {
      cl_object v11clauses;
      cl_object v12case;
      v11clauses = ECL_NIL;
      T6 = L15expand_next_arg(0);
      v12case = cl_list(3, ECL_SYM("OR",616), VV[221], T6);
      if (Null(v8)) { goto L51; }
      {
       cl_object v13;
       v13 = v7;
       {
        cl_object v14;
        v14 = v13;
        if (ecl_unlikely(!ECL_LISTP(v14))) FEtype_error_list(v14);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v13)) { goto L59; }
       {
        cl_object v14;
        v14 = ECL_CONS_CDR(v13);
        v7 = v14;
        v13 = ECL_CONS_CAR(v13);
       }
L59:;
       T6 = v13;
      }
      T7 = L13expand_directive_list(T6);
      T8 = CONS(ECL_T,T7);
      v11clauses = CONS(T8,v11clauses);
L51:;
      {
       cl_object v13count;
       v13count = ecl_make_fixnum(ecl_length(v7));
       {
        cl_object v14;
        v14 = v7;
        goto L70;
L69:;
        {
         cl_object v15sublist;
         v15sublist = ecl_car(v14);
         v13count = ecl_minus(v13count,ecl_make_fixnum(1));
         T6 = v13count;
         T7 = L13expand_directive_list(v15sublist);
         T8 = CONS(T6,T7);
         v11clauses = CONS(T8,v11clauses);
        }
        v14 = ecl_cdr(v14);
L70:;
        if (Null(v14)) { goto L80; }
        goto L69;
L80:;
       }
      }
      T5 = cl_listX(3, ECL_SYM("CASE",183), v12case, v11clauses);
     }
     T6 = cl_list(2, ECL_NIL, T5);
     T7 = ecl_append(T4,T6);
     T0 = cl_listX(3, ECL_SYM("LET",479), T3, T7);
    }
L5:;
    cl_env_copy->nvalues = 2;
    cl_env_copy->values[1] = v9;
    cl_env_copy->values[0] = T0;
    return cl_env_copy->values[0];
   }
  }
 }
}
/*      function definition for EXPAND-MAYBE-CONDITIONAL              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L108expand_maybe_conditional(cl_object v1sublist)
{
 cl_object T0;
 volatile cl_object lex0[1];
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  lex0[0] = v1sublist;                            /*  SUBLIST         */
TTL:
  if (Null(ecl_symbol_value(VV[37]))) { goto L1; }
  {
   cl_object v3;                                  /*  GUTS            */
   cl_object v4;                                  /*  NEW-ARGS        */
   ecl_bds_push(cl_env_copy,VV[39]);              /*  *SIMPLE-ARGS*   */
   T0 = L13expand_directive_list(lex0[0]);
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = ecl_symbol_value(VV[39]);
   cl_env_copy->values[0] = T0;
   value0 = cl_env_copy->values[0];
   ecl_bds_unwind1(cl_env_copy);
   {
    v3 = value0;
    v4 = cl_env_copy->values[1];
   }
   if (Null(v4)) { goto L4; }
   T0 = ecl_cdr(v4);
   if (!((ecl_symbol_value(VV[39]))==(T0))) { goto L4; }
   cl_set(VV[39],v4);
   T0 = ecl_caar(v4);
   value0 = cl_listX(3, ECL_SYM("WHEN",907), T0, v3);
   return value0;
L4:;
   cl_set(VV[37],ECL_NIL);
   value0 = LC107hairy(lex0);
   return value0;
  }
L1:;
  value0 = LC107hairy(lex0);
  return value0;
 }
}
/*      local function HAIRY                                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC107hairy(volatile cl_object *lex0)
{
 cl_object T0, T1, T2, T3, T4;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = L15expand_next_arg(0);
  T1 = cl_list(2, VV[77], T0);
  T2 = cl_list(2, VV[222], T1);
  T3 = L13expand_directive_list(lex0[0]);
  T4 = cl_listX(4, ECL_SYM("WHEN",907), VV[77], VV[223], T3);
  value0 = cl_list(3, ECL_SYM("LET",479), T2, T4);
  return value0;
 }
}
/*      function definition for EXPAND-TRUE-FALSE-CONDITIONAL         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L110expand_true_false_conditional(cl_object v1true, cl_object v2false)
{
 cl_object T0, T1, T2, T3, T4;
 volatile cl_object lex0[3];
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  lex0[0] = v1true;                               /*  TRUE            */
  lex0[1] = v2false;                              /*  FALSE           */
TTL:
  T0 = L15expand_next_arg(0);
  lex0[2] = T0;                                   /*  ARG             */
  if (Null(ecl_symbol_value(VV[37]))) { goto L1; }
  {
   cl_object v4;                                  /*  TRUE-GUTS       */
   cl_object v5;                                  /*  TRUE-ARGS       */
   cl_object v6;                                  /*  TRUE-SIMPLE     */
   {
    cl_object v7;
    v7 = ecl_symbol_value(VV[39]);
    ecl_bds_bind(cl_env_copy,VV[39],v7);          /*  *SIMPLE-ARGS*   */
    ecl_bds_bind(cl_env_copy,VV[37],ECL_T);       /*  *ONLY-SIMPLE-ARGS* */
    T0 = L13expand_directive_list(lex0[0]);
    cl_env_copy->nvalues = 3;
    cl_env_copy->values[2] = ecl_symbol_value(VV[37]);
    cl_env_copy->values[1] = ecl_symbol_value(VV[39]);
    cl_env_copy->values[0] = T0;
    value0 = cl_env_copy->values[0];
    ecl_bds_unwind1(cl_env_copy);
    ecl_bds_unwind1(cl_env_copy);
   }
   {
    v4 = value0;
    v5 = cl_env_copy->values[1];
    v6 = cl_env_copy->values[2];
   }
   {
    cl_object v8;                                 /*  FALSE-GUTS      */
    cl_object v9;                                 /*  FALSE-ARGS      */
    cl_object v10;                                /*  FALSE-SIMPLE    */
    {
     cl_object v11;
     v11 = ecl_symbol_value(VV[39]);
     ecl_bds_bind(cl_env_copy,VV[39],v11);        /*  *SIMPLE-ARGS*   */
     ecl_bds_bind(cl_env_copy,VV[37],ECL_T);      /*  *ONLY-SIMPLE-ARGS* */
     T0 = L13expand_directive_list(lex0[1]);
     cl_env_copy->nvalues = 3;
     cl_env_copy->values[2] = ecl_symbol_value(VV[37]);
     cl_env_copy->values[1] = ecl_symbol_value(VV[39]);
     cl_env_copy->values[0] = T0;
     value0 = cl_env_copy->values[0];
     ecl_bds_unwind1(cl_env_copy);
     ecl_bds_unwind1(cl_env_copy);
    }
    {
     v8 = value0;
     v9 = cl_env_copy->values[1];
     v10 = cl_env_copy->values[2];
    }
    {
     cl_fixnum v11;
     v11 = ecl_length(v5);
     {
      cl_fixnum v12;
      v12 = ecl_length(v9);
      if (!((v11)==(v12))) { goto L7; }
     }
    }
    T0 = CONS(ECL_SYM("PROGN",673),v4);
    {
     cl_object v11false;
     cl_object v12true;
     cl_object v13bindings;
     v11false = v9;
     v12true = v5;
     v13bindings = ECL_NIL;
     goto L15;
L14:;
     {
      cl_object v14;
      v14 = ecl_cdr(v11false);
      {
       cl_object v15;
       v15 = ecl_cdr(v12true);
       T2 = ecl_caar(v11false);
       T3 = ecl_caar(v12true);
       T4 = cl_list(2, T2, T3);
       v13bindings = CONS(T4,v13bindings);
       v12true = v15;
       v11false = v14;
      }
     }
L15:;
     if ((v12true)==(ecl_symbol_value(VV[39]))) { goto L21; }
     goto L14;
L21:;
     cl_set(VV[39],v5);
     if (Null(v6)) { goto L28; }
     cl_set(VV[37],v10);
     goto L26;
L28:;
     cl_set(VV[37],ECL_NIL);
     goto L26;
L26:;
     if (Null(v13bindings)) { goto L30; }
     T1 = cl_listX(3, ECL_SYM("LET",479), v13bindings, v8);
     goto L9;
L30:;
     T1 = CONS(ECL_SYM("PROGN",673),v8);
    }
L9:;
    value0 = cl_list(4, ECL_SYM("IF",948), lex0[2], T0, T1);
    return value0;
L7:;
    cl_set(VV[37],ECL_NIL);
    value0 = LC109hairy(lex0);
    return value0;
   }
  }
L1:;
  value0 = LC109hairy(lex0);
  return value0;
 }
}
/*      local function HAIRY                                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC109hairy(volatile cl_object *lex0)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = L13expand_directive_list(lex0[0]);
  T1 = CONS(ECL_SYM("PROGN",673),T0);
  T2 = L13expand_directive_list(lex0[1]);
  T3 = CONS(ECL_SYM("PROGN",673),T2);
  value0 = cl_list(4, ECL_SYM("IF",948), lex0[2], T1, T3);
  return value0;
 }
}
/*      local function LAMBDA1636                                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC111__lambda1636(cl_object v1stream, cl_object v2, cl_object v3directives, cl_object v4orig_args, cl_object v5args)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v6;
   cl_object v7;
   cl_object v8;
   v6 = ecl_function_dispatch(cl_env_copy,VV[311])(1, v2) /*  FORMAT-DIRECTIVE-COLONP */;
   v7 = ecl_function_dispatch(cl_env_copy,VV[312])(1, v2) /*  FORMAT-DIRECTIVE-ATSIGNP */;
   v8 = ecl_function_dispatch(cl_env_copy,VV[313])(1, v2) /*  FORMAT-DIRECTIVE-PARAMS */;
   {
    cl_object v10;                                /*  SUBLISTS        */
    cl_object v11;                                /*  LAST-SEMI-WITH-COLON-P */
    cl_object v12;                                /*  REMAINING       */
    value0 = L105parse_conditional_directive(v3directives);
    {
     const int v13 = cl_env_copy->nvalues;
     v10 = value0;
     cl_object v14;
     v14 = (v13<=1)? ECL_NIL : cl_env_copy->values[1];
     v11 = v14;
     v14 = (v13<=2)? ECL_NIL : cl_env_copy->values[2];
     v12 = v14;
    }
    if (Null(v7)) { goto L8; }
    if (Null(v6)) { goto L10; }
    v5args = cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[218]);
    goto L7;
L10:;
    if (Null(ecl_cdr(v10))) { goto L12; }
    v5args = cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[219]);
    goto L7;
L12:;
    if (Null(v8)) { goto L14; }
    T1 = ecl_list1(ecl_make_fixnum(0));
    T2 = ecl_caar(v8);
    cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[70], VV[71], T1, ECL_SYM("OFFSET",1306), T2);
L14:;
    {
     cl_object v13;
     cl_object v14;
     v13 = v5args;
     if (!(v5args==ECL_NIL)) { goto L18; }
     cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57]);
L18:;
     if (Null(ecl_symbol_value(VV[34]))) { goto L20; }
     ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L20:;
     {
      cl_object v15;
      v15 = v5args;
      {
       cl_object v16;
       v16 = v15;
       if (ecl_unlikely(!ECL_LISTP(v16))) FEtype_error_list(v16);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v15)) { goto L26; }
      {
       cl_object v16;
       v16 = ECL_CONS_CDR(v15);
       v5args = v16;
       v15 = ECL_CONS_CAR(v15);
      }
L26:;
      v14 = v15;
     }
     if (Null(v14)) { goto L32; }
     T1 = ecl_car(v10);
     v5args = L9interpret_directive_list(v1stream, T1, v4orig_args, v13);
     goto L7;
L32:;
     goto L7;
    }
L8:;
    if (Null(v6)) { goto L34; }
    {
     cl_fixnum v15;
     v15 = ecl_length(v10);
     if (!((v15)==(2))) { goto L36; }
    }
    if (Null(v8)) { goto L38; }
    T1 = ecl_list1(ecl_make_fixnum(0));
    T2 = ecl_caar(v8);
    cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[70], VV[71], T1, ECL_SYM("OFFSET",1306), T2);
L38:;
    if (!(v5args==ECL_NIL)) { goto L42; }
    cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57]);
L42:;
    if (Null(ecl_symbol_value(VV[34]))) { goto L44; }
    ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L44:;
    {
     cl_object v15;
     v15 = v5args;
     {
      cl_object v16;
      v16 = v15;
      if (ecl_unlikely(!ECL_LISTP(v16))) FEtype_error_list(v16);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
     }
     if (Null(v15)) { goto L50; }
     {
      cl_object v16;
      v16 = ECL_CONS_CDR(v15);
      v5args = v16;
      v15 = ECL_CONS_CAR(v15);
     }
L50:;
     if (Null(v15)) { goto L40; }
    }
    T1 = ecl_car(v10);
    v5args = L9interpret_directive_list(v1stream, T1, v4orig_args, v5args);
    goto L7;
L40:;
    T1 = ecl_cadr(v10);
    v5args = L9interpret_directive_list(v1stream, T1, v4orig_args, v5args);
    goto L7;
L36:;
    v5args = cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[220]);
    goto L7;
L34:;
    {
     cl_object v15;
     v15 = v8;
     {
      cl_object v16index;
      {
       cl_object v17param_and_offset;
       cl_object v18offset;
       cl_object v19param;
       {
        cl_object v20;
        v20 = v15;
        {
         cl_object v21;
         v21 = v20;
         if (ecl_unlikely(!ECL_LISTP(v21))) FEtype_error_list(v21);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
        }
        if (Null(v20)) { goto L63; }
        {
         cl_object v21;
         v21 = ECL_CONS_CDR(v20);
         v15 = v21;
         v20 = ECL_CONS_CAR(v20);
        }
L63:;
        v17param_and_offset = v20;
       }
       v18offset = ecl_car(v17param_and_offset);
       v19param = ecl_cdr(v17param_and_offset);
       if (!(ecl_eql(v19param,VV[23]))) { goto L71; }
       if (!(v5args==ECL_NIL)) { goto L76; }
       cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v18offset);
L76:;
       if (Null(ecl_symbol_value(VV[34]))) { goto L78; }
       ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L78:;
       {
        cl_object v20;
        v20 = v5args;
        {
         cl_object v21;
         v21 = v20;
         if (ecl_unlikely(!ECL_LISTP(v21))) FEtype_error_list(v21);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
        }
        if (Null(v20)) { goto L84; }
        {
         cl_object v21;
         v21 = ECL_CONS_CDR(v20);
         v5args = v21;
         v20 = ECL_CONS_CAR(v20);
        }
L84:;
        value0 = v20;
       }
       if ((value0)!=ECL_NIL) { goto L74; }
       if (!(v5args==ECL_NIL)) { goto L90; }
       cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57]);
L90:;
       if (Null(ecl_symbol_value(VV[34]))) { goto L92; }
       ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L92:;
       {
        cl_object v20;
        v20 = v5args;
        {
         cl_object v21;
         v21 = v20;
         if (ecl_unlikely(!ECL_LISTP(v21))) FEtype_error_list(v21);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
        }
        if (Null(v20)) { goto L98; }
        {
         cl_object v21;
         v21 = ECL_CONS_CDR(v20);
         v5args = v21;
         v20 = ECL_CONS_CAR(v20);
        }
L98:;
        v16index = v20;
        goto L57;
       }
L74:;
       v16index = value0;
       goto L57;
L71:;
       if (!(ecl_eql(v19param,VV[24]))) { goto L104; }
       v16index = ecl_make_fixnum(ecl_length(v5args));
       goto L57;
L104:;
       if (!((v19param)==(ECL_NIL))) { goto L106; }
       if (!(v5args==ECL_NIL)) { goto L109; }
       cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57]);
L109:;
       if (Null(ecl_symbol_value(VV[34]))) { goto L111; }
       ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L111:;
       {
        cl_object v21;
        v21 = v5args;
        {
         cl_object v22;
         v22 = v21;
         if (ecl_unlikely(!ECL_LISTP(v22))) FEtype_error_list(v22);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
        }
        if (Null(v21)) { goto L117; }
        {
         cl_object v22;
         v22 = ECL_CONS_CDR(v21);
         v5args = v22;
         v21 = ECL_CONS_CAR(v21);
        }
L117:;
        v16index = v21;
        goto L57;
       }
L106:;
       v16index = v19param;
      }
L57:;
      if (Null(v15)) { goto L123; }
      T1 = ecl_list1(ecl_make_fixnum(1));
      T2 = ecl_caar(v15);
      cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[70], VV[71], T1, ECL_SYM("OFFSET",1306), T2);
L123:;
      {
       cl_object v17default;
       cl_object v18last;
       cl_object v19sublist;
       if (Null(v11)) { goto L127; }
       {
        cl_object v20;
        v20 = v10;
        {
         cl_object v21;
         v21 = v20;
         if (ecl_unlikely(!ECL_LISTP(v21))) FEtype_error_list(v21);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
        }
        if (Null(v20)) { goto L133; }
        {
         cl_object v21;
         v21 = ECL_CONS_CDR(v20);
         v10 = v21;
         v20 = ECL_CONS_CAR(v20);
        }
L133:;
        v17default = v20;
        goto L125;
       }
L127:;
       v17default = ECL_NIL;
       goto L125;
L125:;
       {
        cl_fixnum v20;
        v20 = ecl_length(v10);
        v18last = ecl_make_integer((v20)-1);
       }
       if (Null(cl_LE(3, ecl_make_fixnum(0), v16index, v18last))) { goto L141; }
       T1 = ecl_minus(v18last,v16index);
       v19sublist = ecl_nth(ecl_to_size(T1),v10);
       goto L140;
L141:;
       v19sublist = v17default;
L140:;
       v5args = L9interpret_directive_list(v1stream, v19sublist, v4orig_args, v5args);
      }
     }
    }
L7:;
    T0 = v12;
   }
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v5args;
   cl_env_copy->values[0] = T0;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function SEMICOLON-FORMAT-DIRECTIVE-EXPANDER            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC112semicolon_format_directive_expander(cl_object v1, cl_object v2)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[224]);
  return value0;
 }
}
/*      local function LAMBDA1666                                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC113__lambda1666(cl_object v1stream, cl_object v2, cl_object v3, cl_object v4orig_args, cl_object v5args)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[224]);
  return value0;
 }
}
/*      local function LAMBDA1669                                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC114__lambda1669(cl_object v1stream, cl_object v2, cl_object v3, cl_object v4orig_args, cl_object v5args)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[225]);
  return value0;
 }
}
/*      local function RIGHT_SQUARE_BRACKET-FORMAT-DIRECTIVE-EXPANDER */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC115right_square_bracket_format_directive_expander(cl_object v1, cl_object v2)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[225]);
  return value0;
 }
}
/*      local function CIRCUMFLEX_ACCENT-FORMAT-DIRECTIVE-EXPANDER    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC116circumflex_accent_format_directive_expander(cl_object v1, cl_object v2)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19;
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
   v3 = ecl_function_dispatch(cl_env_copy,VV[311])(1, v1) /*  FORMAT-DIRECTIVE-COLONP */;
   v4 = ecl_function_dispatch(cl_env_copy,VV[312])(1, v1) /*  FORMAT-DIRECTIVE-ATSIGNP */;
   v5 = ecl_function_dispatch(cl_env_copy,VV[313])(1, v1) /*  FORMAT-DIRECTIVE-PARAMS */;
   if (Null(v4)) { goto L4; }
   cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[227]);
L4:;
   if (Null(v3)) { goto L6; }
   if ((ecl_symbol_value(VV[33]))!=ECL_NIL) { goto L6; }
   cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[228]);
L6:;
   {
    cl_object v6;
    v6 = v5;
    {
     cl_object v7param_and_offset;
     cl_object v8offset;
     cl_object v9param;
     {
      cl_object v10;
      v10 = v6;
      {
       cl_object v11;
       v11 = v10;
       if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v10)) { goto L17; }
      {
       cl_object v11;
       v11 = ECL_CONS_CDR(v10);
       v6 = v11;
       v10 = ECL_CONS_CAR(v10);
      }
L17:;
      v7param_and_offset = v10;
     }
     v8offset = ecl_car(v7param_and_offset);
     v9param = ecl_cdr(v7param_and_offset);
     if (!(ecl_eql(v9param,VV[23]))) { goto L25; }
     T2 = L15expand_next_arg(1, v8offset);
     T1 = cl_list(3, ECL_SYM("OR",616), T2, ECL_NIL);
     goto L11;
L25:;
     if (!(ecl_eql(v9param,VV[24]))) { goto L27; }
     cl_set(VV[37],ECL_NIL);
     T1 = VV[68];
     goto L11;
L27:;
     if (!((v9param)==(ECL_NIL))) { goto L31; }
     T1 = ECL_NIL;
     goto L11;
L31:;
     T1 = v9param;
    }
L11:;
    T2 = cl_list(2, VV[229], T1);
    {
     cl_object v7param_and_offset;
     cl_object v8offset;
     cl_object v9param;
     {
      cl_object v10;
      v10 = v6;
      {
       cl_object v11;
       v11 = v10;
       if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v10)) { goto L40; }
      {
       cl_object v11;
       v11 = ECL_CONS_CDR(v10);
       v6 = v11;
       v10 = ECL_CONS_CAR(v10);
      }
L40:;
      v7param_and_offset = v10;
     }
     v8offset = ecl_car(v7param_and_offset);
     v9param = ecl_cdr(v7param_and_offset);
     if (!(ecl_eql(v9param,VV[23]))) { goto L48; }
     T4 = L15expand_next_arg(1, v8offset);
     T3 = cl_list(3, ECL_SYM("OR",616), T4, ECL_NIL);
     goto L34;
L48:;
     if (!(ecl_eql(v9param,VV[24]))) { goto L50; }
     cl_set(VV[37],ECL_NIL);
     T3 = VV[68];
     goto L34;
L50:;
     if (!((v9param)==(ECL_NIL))) { goto L54; }
     T3 = ECL_NIL;
     goto L34;
L54:;
     T3 = v9param;
    }
L34:;
    T4 = cl_list(2, VV[230], T3);
    {
     cl_object v7param_and_offset;
     cl_object v8offset;
     cl_object v9param;
     {
      cl_object v10;
      v10 = v6;
      {
       cl_object v11;
       v11 = v10;
       if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v10)) { goto L63; }
      {
       cl_object v11;
       v11 = ECL_CONS_CDR(v10);
       v6 = v11;
       v10 = ECL_CONS_CAR(v10);
      }
L63:;
      v7param_and_offset = v10;
     }
     v8offset = ecl_car(v7param_and_offset);
     v9param = ecl_cdr(v7param_and_offset);
     if (!(ecl_eql(v9param,VV[23]))) { goto L71; }
     T6 = L15expand_next_arg(1, v8offset);
     T5 = cl_list(3, ECL_SYM("OR",616), T6, ECL_NIL);
     goto L57;
L71:;
     if (!(ecl_eql(v9param,VV[24]))) { goto L73; }
     cl_set(VV[37],ECL_NIL);
     T5 = VV[68];
     goto L57;
L73:;
     if (!((v9param)==(ECL_NIL))) { goto L77; }
     T5 = ECL_NIL;
     goto L57;
L77:;
     T5 = v9param;
    }
L57:;
    T6 = cl_list(2, VV[231], T5);
    T7 = cl_list(3, T2, T4, T6);
    if (Null(v6)) { goto L81; }
    T9 = ecl_list1(ecl_make_fixnum(3));
    T10 = ecl_caar(v6);
    T8 = cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[70], VV[71], T9, ECL_SYM("OFFSET",1306), T10);
    goto L80;
L81:;
    T8 = ECL_NIL;
L80:;
    T9 = cl_list(4, ECL_SYM("<=",75), VV[229], VV[230], VV[231]);
    T10 = cl_list(2, VV[231], T9);
    T11 = cl_list(3, ECL_SYM("EQL",336), VV[229], VV[230]);
    T12 = cl_list(2, VV[230], T11);
    T13 = cl_list(3, ECL_SYM("EQL",336), VV[229], ecl_make_fixnum(0));
    T14 = cl_list(2, VV[229], T13);
    if (Null(v3)) { goto L84; }
    T15 = VV[232];
    goto L83;
L84:;
    cl_set(VV[37],ECL_NIL);
    T15 = VV[58];
L83:;
    T16 = cl_list(2, ECL_T, T15);
    T17 = cl_list(5, ECL_SYM("COND",249), T10, T12, T14, T16);
    T18 = ecl_list1(T17);
    T19 = ecl_append(T8,T18);
    T0 = cl_listX(3, ECL_SYM("LET",479), T7, T19);
   }
   if (Null(v3)) { goto L89; }
   T1 = VV[233];
   goto L88;
L89:;
   T1 = VV[234];
L88:;
   T2 = cl_list(3, ECL_SYM("WHEN",907), T0, T1);
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v2;
   cl_env_copy->values[0] = T2;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA1702                                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC117__lambda1702(cl_object v1stream, cl_object v2, cl_object v3, cl_object v4orig_args, cl_object v5args)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v6;
   cl_object v7;
   cl_object v8;
   v6 = ecl_function_dispatch(cl_env_copy,VV[311])(1, v2) /*  FORMAT-DIRECTIVE-COLONP */;
   v7 = ecl_function_dispatch(cl_env_copy,VV[312])(1, v2) /*  FORMAT-DIRECTIVE-ATSIGNP */;
   v8 = ecl_function_dispatch(cl_env_copy,VV[313])(1, v2) /*  FORMAT-DIRECTIVE-PARAMS */;
   if (Null(v7)) { goto L4; }
   cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[235]);
L4:;
   if (Null(v6)) { goto L6; }
   if ((ecl_symbol_value(VV[33]))!=ECL_NIL) { goto L6; }
   cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[228]);
L6:;
   {
    cl_object v9;
    v9 = v8;
    {
     cl_object v10arg1;
     cl_object v11arg2;
     cl_object v12arg3;
     {
      cl_object v13param_and_offset;
      cl_object v14offset;
      cl_object v15param;
      {
       cl_object v16;
       v16 = v9;
       {
        cl_object v17;
        v17 = v16;
        if (ecl_unlikely(!ECL_LISTP(v17))) FEtype_error_list(v17);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v16)) { goto L18; }
       {
        cl_object v17;
        v17 = ECL_CONS_CDR(v16);
        v9 = v17;
        v16 = ECL_CONS_CAR(v16);
       }
L18:;
       v13param_and_offset = v16;
      }
      v14offset = ecl_car(v13param_and_offset);
      v15param = ecl_cdr(v13param_and_offset);
      if (!(ecl_eql(v15param,VV[23]))) { goto L26; }
      if (!(v5args==ECL_NIL)) { goto L31; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v14offset);
L31:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L33; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L33:;
      {
       cl_object v16;
       v16 = v5args;
       {
        cl_object v17;
        v17 = v16;
        if (ecl_unlikely(!ECL_LISTP(v17))) FEtype_error_list(v17);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v16)) { goto L39; }
       {
        cl_object v17;
        v17 = ECL_CONS_CDR(v16);
        v5args = v17;
        v16 = ECL_CONS_CAR(v16);
       }
L39:;
       value0 = v16;
      }
      if ((value0)!=ECL_NIL) { goto L29; }
      v10arg1 = ECL_NIL;
      goto L12;
L29:;
      v10arg1 = value0;
      goto L12;
L26:;
      if (!(ecl_eql(v15param,VV[24]))) { goto L45; }
      v10arg1 = ecl_make_fixnum(ecl_length(v5args));
      goto L12;
L45:;
      if (!((v15param)==(ECL_NIL))) { goto L47; }
      v10arg1 = ECL_NIL;
      goto L12;
L47:;
      v10arg1 = v15param;
     }
L12:;
     {
      cl_object v13param_and_offset;
      cl_object v14offset;
      cl_object v15param;
      {
       cl_object v16;
       v16 = v9;
       {
        cl_object v17;
        v17 = v16;
        if (ecl_unlikely(!ECL_LISTP(v17))) FEtype_error_list(v17);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v16)) { goto L56; }
       {
        cl_object v17;
        v17 = ECL_CONS_CDR(v16);
        v9 = v17;
        v16 = ECL_CONS_CAR(v16);
       }
L56:;
       v13param_and_offset = v16;
      }
      v14offset = ecl_car(v13param_and_offset);
      v15param = ecl_cdr(v13param_and_offset);
      if (!(ecl_eql(v15param,VV[23]))) { goto L64; }
      if (!(v5args==ECL_NIL)) { goto L69; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v14offset);
L69:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L71; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L71:;
      {
       cl_object v16;
       v16 = v5args;
       {
        cl_object v17;
        v17 = v16;
        if (ecl_unlikely(!ECL_LISTP(v17))) FEtype_error_list(v17);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v16)) { goto L77; }
       {
        cl_object v17;
        v17 = ECL_CONS_CDR(v16);
        v5args = v17;
        v16 = ECL_CONS_CAR(v16);
       }
L77:;
       value0 = v16;
      }
      if ((value0)!=ECL_NIL) { goto L67; }
      v11arg2 = ECL_NIL;
      goto L50;
L67:;
      v11arg2 = value0;
      goto L50;
L64:;
      if (!(ecl_eql(v15param,VV[24]))) { goto L83; }
      v11arg2 = ecl_make_fixnum(ecl_length(v5args));
      goto L50;
L83:;
      if (!((v15param)==(ECL_NIL))) { goto L85; }
      v11arg2 = ECL_NIL;
      goto L50;
L85:;
      v11arg2 = v15param;
     }
L50:;
     {
      cl_object v13param_and_offset;
      cl_object v14offset;
      cl_object v15param;
      {
       cl_object v16;
       v16 = v9;
       {
        cl_object v17;
        v17 = v16;
        if (ecl_unlikely(!ECL_LISTP(v17))) FEtype_error_list(v17);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v16)) { goto L94; }
       {
        cl_object v17;
        v17 = ECL_CONS_CDR(v16);
        v9 = v17;
        v16 = ECL_CONS_CAR(v16);
       }
L94:;
       v13param_and_offset = v16;
      }
      v14offset = ecl_car(v13param_and_offset);
      v15param = ecl_cdr(v13param_and_offset);
      if (!(ecl_eql(v15param,VV[23]))) { goto L102; }
      if (!(v5args==ECL_NIL)) { goto L107; }
      cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v14offset);
L107:;
      if (Null(ecl_symbol_value(VV[34]))) { goto L109; }
      ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L109:;
      {
       cl_object v16;
       v16 = v5args;
       {
        cl_object v17;
        v17 = v16;
        if (ecl_unlikely(!ECL_LISTP(v17))) FEtype_error_list(v17);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v16)) { goto L115; }
       {
        cl_object v17;
        v17 = ECL_CONS_CDR(v16);
        v5args = v17;
        v16 = ECL_CONS_CAR(v16);
       }
L115:;
       value0 = v16;
      }
      if ((value0)!=ECL_NIL) { goto L105; }
      v12arg3 = ECL_NIL;
      goto L88;
L105:;
      v12arg3 = value0;
      goto L88;
L102:;
      if (!(ecl_eql(v15param,VV[24]))) { goto L121; }
      v12arg3 = ecl_make_fixnum(ecl_length(v5args));
      goto L88;
L121:;
      if (!((v15param)==(ECL_NIL))) { goto L123; }
      v12arg3 = ECL_NIL;
      goto L88;
L123:;
      v12arg3 = v15param;
     }
L88:;
     if (Null(v9)) { goto L126; }
     T0 = ecl_list1(ecl_make_fixnum(3));
     T1 = ecl_caar(v9);
     cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[70], VV[71], T0, ECL_SYM("OFFSET",1306), T1);
L126:;
     if (Null(v12arg3)) { goto L128; }
     if (Null(cl_LE(3, v10arg1, v11arg2, v12arg3))) { goto L9; }
     goto L10;
L128:;
     if (Null(v11arg2)) { goto L130; }
     if (!(ecl_eql(v10arg1,v11arg2))) { goto L9; }
     goto L10;
L130:;
     if (Null(v10arg1)) { goto L132; }
     if (!((v10arg1)==(ecl_make_fixnum(0)))) { goto L9; }
     goto L10;
L132:;
     if (Null(v6)) { goto L134; }
     if (!(ecl_symbol_value(VV[226])==ECL_NIL)) { goto L9; }
     goto L10;
L134:;
     if (!(v5args==ECL_NIL)) { goto L9; }
    }
   }
L10:;
   if (Null(v6)) { goto L137; }
   T0 = VV[236];
   goto L136;
L137:;
   T0 = VV[40];
L136:;
   cl_env_copy->values[0] = v5args;
   cl_env_copy->nvalues = 1;
   cl_throw(T0);
L9:;
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v5args;
   cl_env_copy->values[0] = v3;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LEFT_CURLY_BRACKET-FORMAT-DIRECTIVE-EXPANDER   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC122left_curly_bracket_format_directive_expander(cl_object v1, cl_object v2directives)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9;
 volatile cl_object lex0[7];
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  lex0[0] = v2directives;                         /*  DIRECTIVES      */
TTL:
  {
   cl_object v3;
   cl_object v4;
   cl_object v5;
   cl_object v6;
   cl_object v7;
   v3 = ecl_function_dispatch(cl_env_copy,VV[311])(1, v1) /*  FORMAT-DIRECTIVE-COLONP */;
   v4 = ecl_function_dispatch(cl_env_copy,VV[312])(1, v1) /*  FORMAT-DIRECTIVE-ATSIGNP */;
   v5 = ecl_function_dispatch(cl_env_copy,VV[313])(1, v1) /*  FORMAT-DIRECTIVE-PARAMS */;
   v6 = ecl_function_dispatch(cl_env_copy,VV[329])(1, v1) /*  FORMAT-DIRECTIVE-STRING */;
   v7 = ecl_function_dispatch(cl_env_copy,VV[300])(1, v1) /*  FORMAT-DIRECTIVE-END */;
   lex0[1] = v3;                                  /*  COLONP          */
   lex0[2] = v4;                                  /*  ATSIGNP         */
   lex0[3] = v6;                                  /*  STRING          */
   lex0[4] = v7;                                  /*  END             */
   {
    cl_object v8close;
    v8close = L22find_directive(lex0[0], CODE_CHAR(125), ECL_NIL);
    if ((v8close)!=ECL_NIL) { goto L7; }
    cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[237]);
L7:;
    T0 = ecl_function_dispatch(cl_env_copy,VV[311])(1, v8close) /*  FORMAT-DIRECTIVE-COLONP */;
    lex0[5] = T0;                                 /*  CLOSED-WITH-COLON */
    T0 = cl_position(2, v8close, lex0[0]);
    lex0[6] = T0;                                 /*  POSN            */
    if (Null(v5)) { goto L10; }
    {
     cl_object v9;
     v9 = v5;
     {
      cl_object v10param_and_offset;
      cl_object v11offset;
      cl_object v12param;
      {
       cl_object v13;
       v13 = v9;
       {
        cl_object v14;
        v14 = v13;
        if (ecl_unlikely(!ECL_LISTP(v14))) FEtype_error_list(v14);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v13)) { goto L19; }
       {
        cl_object v14;
        v14 = ECL_CONS_CDR(v13);
        v9 = v14;
        v13 = ECL_CONS_CAR(v13);
       }
L19:;
       v10param_and_offset = v13;
      }
      v11offset = ecl_car(v10param_and_offset);
      v12param = ecl_cdr(v10param_and_offset);
      if (!(ecl_eql(v12param,VV[23]))) { goto L27; }
      T2 = L15expand_next_arg(1, v11offset);
      T1 = cl_list(3, ECL_SYM("OR",616), T2, ECL_NIL);
      goto L13;
L27:;
      if (!(ecl_eql(v12param,VV[24]))) { goto L29; }
      cl_set(VV[37],ECL_NIL);
      T1 = VV[68];
      goto L13;
L29:;
      if (!((v12param)==(ECL_NIL))) { goto L33; }
      T1 = ECL_NIL;
      goto L13;
L33:;
      T1 = v12param;
     }
L13:;
     T2 = cl_list(2, VV[246], T1);
     T3 = ecl_list1(T2);
     if (Null(v9)) { goto L37; }
     T5 = ecl_list1(ecl_make_fixnum(1));
     T6 = ecl_caar(v9);
     T4 = cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[70], VV[71], T5, ECL_SYM("OFFSET",1306), T6);
     goto L36;
L37:;
     T4 = ECL_NIL;
L36:;
     if (!(ecl_zerop(lex0[6]))) { goto L40; }
     T6 = L15expand_next_arg(0);
     T7 = cl_list(2, VV[247], T6);
     T8 = ecl_list1(T7);
     T9 = LC121compute_bindings(lex0, VV[246]);
     T5 = cl_list(3, ECL_SYM("LET",479), T8, T9);
     goto L39;
L40:;
     T5 = LC121compute_bindings(lex0, VV[246]);
L39:;
     T6 = ecl_list1(T5);
     T7 = ecl_append(T4,T6);
     T0 = cl_listX(3, ECL_SYM("LET",479), T3, T7);
     goto L9;
    }
L10:;
    if (!(ecl_zerop(lex0[6]))) { goto L43; }
    T1 = L15expand_next_arg(0);
    T2 = cl_list(2, VV[247], T1);
    T3 = ecl_list1(T2);
    T4 = LC121compute_bindings(lex0, ECL_NIL);
    T0 = cl_list(3, ECL_SYM("LET",479), T3, T4);
    goto L9;
L43:;
    T0 = LC121compute_bindings(lex0, ECL_NIL);
L9:;
    T1 = ecl_one_plus(lex0[6]);
    T2 = ecl_nthcdr(ecl_to_size(T1),lex0[0]);
    cl_env_copy->nvalues = 2;
    cl_env_copy->values[1] = T2;
    cl_env_copy->values[0] = T0;
    return cl_env_copy->values[0];
   }
  }
 }
}
/*      local function COMPUTE-BINDINGS                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC121compute_bindings(volatile cl_object *lex0, cl_object v1count)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(lex0[2])) { goto L1; }
  value0 = LC120compute_block(lex0, v1count);
  return value0;
L1:;
  T0 = L15expand_next_arg(0);
  T1 = cl_list(2, VV[192], T0);
  T2 = cl_list(2, T1, VV[244]);
  ecl_bds_bind(cl_env_copy,VV[35],VV[36]);        /*  *EXPANDER-NEXT-ARG-MACRO* */
  ecl_bds_bind(cl_env_copy,VV[37],ECL_NIL);       /*  *ONLY-SIMPLE-ARGS* */
  ecl_bds_bind(cl_env_copy,VV[38],ECL_T);         /*  *ORIG-ARGS-AVAILABLE* */
  T3 = LC120compute_block(lex0, v1count);
  ecl_bds_unwind1(cl_env_copy);
  ecl_bds_unwind1(cl_env_copy);
  ecl_bds_unwind1(cl_env_copy);
  value0 = cl_list(4, ECL_SYM("LET*",480), T2, VV[245], T3);
  return value0;
 }
}
/*      local function COMPUTE-BLOCK                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC120compute_block(volatile cl_object *lex0, cl_object v1count)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(lex0[1])) { goto L1; }
  T0 = LC119compute_loop(lex0, v1count);
  value0 = cl_list(3, ECL_SYM("BLOCK",139), VV[243], T0);
  return value0;
L1:;
  value0 = LC119compute_loop(lex0, v1count);
  return value0;
 }
}
/*      local function COMPUTE-LOOP                                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC119compute_loop(volatile cl_object *lex0, cl_object v1count)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(lex0[2])) { goto L1; }
  cl_set(VV[37],ECL_NIL);
L1:;
  if ((lex0[5])!=ECL_NIL) { goto L5; }
  T0 = VV[240];
  goto L4;
L5:;
  T0 = ECL_NIL;
L4:;
  if (Null(v1count)) { goto L8; }
  T2 = cl_list(2, ECL_SYM("DECF",273), v1count);
  T3 = cl_list(2, ECL_SYM("MINUSP",560), T2);
  T4 = cl_list(3, ECL_SYM("AND",89), v1count, T3);
  T5 = cl_list(3, ECL_SYM("WHEN",907), T4, VV[234]);
  T1 = ecl_list1(T5);
  goto L7;
L8:;
  T1 = ECL_NIL;
L7:;
  if (Null(lex0[1])) { goto L11; }
  ecl_bds_bind(cl_env_copy,VV[35],VV[36]);        /*  *EXPANDER-NEXT-ARG-MACRO* */
  ecl_bds_bind(cl_env_copy,VV[37],ECL_NIL);       /*  *ONLY-SIMPLE-ARGS* */
  ecl_bds_bind(cl_env_copy,VV[38],ECL_T);         /*  *ORIG-ARGS-AVAILABLE* */
  T3 = L15expand_next_arg(0);
  T4 = cl_list(2, VV[192], T3);
  T5 = CONS(T4,VV[241]);
  T6 = LC118compute_insides(lex0);
  T7 = cl_listX(3, ECL_SYM("BLOCK",139), ECL_NIL, T6);
  T8 = cl_list(4, ECL_SYM("LET*",480), T5, VV[242], T7);
  T9 = ecl_list1(T8);
  ecl_bds_unwind1(cl_env_copy);
  ecl_bds_unwind1(cl_env_copy);
  ecl_bds_unwind1(cl_env_copy);
  T2 = T9;
  goto L10;
L11:;
  T2 = LC118compute_insides(lex0);
L10:;
  if (Null(lex0[5])) { goto L15; }
  T3 = VV[240];
  goto L14;
L15:;
  T3 = ECL_NIL;
L14:;
  T4 = cl_append(4, T0, T1, T2, T3);
  value0 = CONS(ECL_SYM("LOOP",514),T4);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function COMPUTE-INSIDES                                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC118compute_insides(volatile cl_object *lex0)
{
 cl_object T0, T1, T2, T3, T4, T5;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ecl_zerop(lex0[6]))) { goto L1; }
  if (Null(ecl_symbol_value(VV[38]))) { goto L3; }
  T0 = ecl_one_minus(lex0[4]);
  T1 = cl_list(12, ECL_SYM("ERROR",339), VV[47], VV[19], VV[208], VV[238], VV[209], VV[210], ECL_NIL, ECL_SYM("CONTROL-STRING",1233), lex0[3], ECL_SYM("OFFSET",1306), T0);
  T2 = cl_list(3, ECL_SYM("LAMBDA",454), VV[207], T1);
  T3 = cl_list(2, ECL_SYM("FORMAT-ERROR",1078), T2);
  T4 = ecl_list1(T3);
  T5 = cl_list(3, ECL_SYM("HANDLER-BIND",419), T4, VV[239]);
  value0 = ecl_list1(T5);
  cl_env_copy->nvalues = 1;
  return value0;
L3:;
  cl_env_copy->values[0] = ECL_NIL;
  cl_env_copy->nvalues = 1;
  cl_throw(VV[46]);
L1:;
  ecl_bds_bind(cl_env_copy,VV[33],lex0[1]);       /*  *UP-UP-AND-OUT-ALLOWED* */
  T0 = cl_subseq(3, lex0[0], ecl_make_fixnum(0), lex0[6]);
  value0 = L13expand_directive_list(T0);
  ecl_bds_unwind1(cl_env_copy);
  return value0;
 }
}
/*      local function LAMBDA1746                                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC127__lambda1746(cl_object volatile v1stream, cl_object volatile v2, cl_object volatile v3directives, cl_object volatile v4orig_args, cl_object volatile v5args)
{
 cl_object T0, T1, T2;
 cl_object volatile env0 = ECL_NIL;
 volatile struct ecl_cclosure aux_closure;
 cl_object volatile CLV0, CLV1, CLV2, CLV3, CLV4, CLV5, CLV6, CLV7;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  env0 = ECL_NIL;
  CLV0 = env0 = CONS(v1stream,env0);              /*  STREAM          */
  {
   volatile cl_object v6;
   volatile cl_object v7;
   volatile cl_object v8;
   volatile cl_object v9;
   volatile cl_object v10;
   volatile cl_object env1 = env0;
   v6 = ecl_function_dispatch(cl_env_copy,VV[311])(1, v2) /*  FORMAT-DIRECTIVE-COLONP */;
   v7 = ecl_function_dispatch(cl_env_copy,VV[312])(1, v2) /*  FORMAT-DIRECTIVE-ATSIGNP */;
   v8 = ecl_function_dispatch(cl_env_copy,VV[313])(1, v2) /*  FORMAT-DIRECTIVE-PARAMS */;
   v9 = ecl_function_dispatch(cl_env_copy,VV[329])(1, v2) /*  FORMAT-DIRECTIVE-STRING */;
   v10 = ecl_function_dispatch(cl_env_copy,VV[300])(1, v2) /*  FORMAT-DIRECTIVE-END */;
   CLV1 = env1 = CONS(v6,env1);                   /*  COLONP          */
   CLV2 = env1 = CONS(v9,env1);                   /*  STRING          */
   CLV3 = env1 = CONS(v10,env1);                  /*  END             */
   {
    volatile cl_object v11close;
    v11close = L22find_directive(v3directives, CODE_CHAR(125), ECL_NIL);
    if ((v11close)!=ECL_NIL) { goto L8; }
    cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[248]);
L8:;
    {
     volatile cl_object v12;
     v12 = v8;
     {
      volatile cl_object env2 = env1;
      {
       cl_object v13param_and_offset;
       cl_object v14offset;
       cl_object v15param;
       {
        cl_object v16;
        v16 = v12;
        {
         cl_object v17;
         v17 = v16;
         if (ecl_unlikely(!ECL_LISTP(v17))) FEtype_error_list(v17);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
        }
        if (Null(v16)) { goto L17; }
        {
         cl_object v17;
         v17 = ECL_CONS_CDR(v16);
         v12 = v17;
         v16 = ECL_CONS_CAR(v16);
        }
L17:;
        v13param_and_offset = v16;
       }
       v14offset = ecl_car(v13param_and_offset);
       v15param = ecl_cdr(v13param_and_offset);
       if (!(ecl_eql(v15param,VV[23]))) { goto L25; }
       if (!(v5args==ECL_NIL)) { goto L30; }
       cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v14offset);
L30:;
       if (Null(ecl_symbol_value(VV[34]))) { goto L32; }
       ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L32:;
       {
        cl_object v16;
        v16 = v5args;
        {
         cl_object v17;
         v17 = v16;
         if (ecl_unlikely(!ECL_LISTP(v17))) FEtype_error_list(v17);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
        }
        if (Null(v16)) { goto L38; }
        {
         cl_object v17;
         v17 = ECL_CONS_CDR(v16);
         v5args = v17;
         v16 = ECL_CONS_CAR(v16);
        }
L38:;
        value0 = v16;
       }
       if ((value0)!=ECL_NIL) { goto L28; }
       T1 = ECL_NIL;
       goto L11;
L28:;
       T1 = value0;
       goto L11;
L25:;
       if (!(ecl_eql(v15param,VV[24]))) { goto L44; }
       T1 = ecl_make_fixnum(ecl_length(v5args));
       goto L11;
L44:;
       if (!((v15param)==(ECL_NIL))) { goto L46; }
       T1 = ECL_NIL;
       goto L11;
L46:;
       T1 = v15param;
      }
L11:;
      CLV4 = env2 = CONS(T1,env2);                /*  MAX-COUNT       */
      if (Null(v12)) { goto L49; }
      T1 = ecl_list1(ecl_make_fixnum(1));
      T2 = ecl_caar(v12);
      cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[70], VV[71], T1, ECL_SYM("OFFSET",1306), T2);
L49:;
      {
       volatile cl_object env3 = env2;
       T1 = ecl_function_dispatch(cl_env_copy,VV[311])(1, v11close) /*  FORMAT-DIRECTIVE-COLONP */;
       CLV5 = env3 = CONS(T1,env3);               /*  CLOSED-WITH-COLON */
       T1 = cl_position(2, v11close, v3directives);
       CLV6 = env3 = CONS(T1,env3);               /*  POSN            */
       if (!(ecl_zerop(ECL_CONS_CAR(CLV6)))) { goto L52; }
       if (!(v5args==ECL_NIL)) { goto L54; }
       cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57]);
L54:;
       if (Null(ecl_symbol_value(VV[34]))) { goto L56; }
       ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L56:;
       {
        cl_object v13;
        v13 = v5args;
        {
         cl_object v14;
         v14 = v13;
         if (ecl_unlikely(!ECL_LISTP(v14))) FEtype_error_list(v14);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
        }
        if (Null(v13)) { goto L62; }
        {
         cl_object v14;
         v14 = ECL_CONS_CDR(v13);
         v5args = v14;
         v13 = ECL_CONS_CAR(v13);
        }
L62:;
        T1 = v13;
        goto L51;
       }
L52:;
       T1 = cl_subseq(3, v3directives, ecl_make_fixnum(0), ECL_CONS_CAR(CLV6));
L51:;
       CLV7 = env3 = CONS(T1,env3);               /*  INSIDES         */
       ecl_bds_bind(cl_env_copy,VV[33],ECL_CONS_CAR(CLV1)); /*  *UP-UP-AND-OUT-ALLOWED* */
       if (Null(v7)) { goto L69; }
       v5args = (aux_closure.env=env3,cl_env_copy->function=(cl_object)&aux_closure,LC126do_loop(2, v4orig_args, v5args));
       goto L68;
L69:;
       {
        cl_object v13;
        if (!(v5args==ECL_NIL)) { goto L73; }
        cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57]);
L73:;
        if (Null(ecl_symbol_value(VV[34]))) { goto L75; }
        ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L75:;
        {
         cl_object v14;
         v14 = v5args;
         {
          cl_object v15;
          v15 = v14;
          if (ecl_unlikely(!ECL_LISTP(v15))) FEtype_error_list(v15);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
         }
         if (Null(v14)) { goto L81; }
         {
          cl_object v15;
          v15 = ECL_CONS_CDR(v14);
          v5args = v15;
          v14 = ECL_CONS_CAR(v14);
         }
L81:;
         v13 = v14;
        }
        ecl_bds_bind(cl_env_copy,VV[34],ECL_NIL); /*  *LOGICAL-BLOCK-POPPER* */
        (aux_closure.env=env3,cl_env_copy->function=(cl_object)&aux_closure,LC126do_loop(2, v13, v13));
        ecl_bds_unwind1(cl_env_copy);
       }
L68:;
       T1 = ecl_one_plus(ECL_CONS_CAR(CLV6));
       T2 = ecl_nthcdr(ecl_to_size(T1),v3directives);
       ecl_bds_unwind1(cl_env_copy);
       T0 = T2;
      }
     }
    }
   }
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v5args;
   cl_env_copy->values[0] = T0;
   return cl_env_copy->values[0];
  }
 }
}
/*      closure DO-LOOP                                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC126do_loop(volatile cl_narg narg, cl_object volatile v1orig_args, cl_object volatile v2args, ...)
{
 cl_object T0, T1;
 volatile struct ecl_cclosure aux_closure;
 cl_object volatile CLV0, CLV1, CLV2, CLV3, CLV4, CLV5, CLV6, CLV7;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile env0 = cl_env_copy->function->cclosure.env;
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV7 = env0;                                     /*  INSIDES         */
 CLV6 = _ecl_cdr(CLV7);
 CLV5 = _ecl_cdr(CLV6);
 CLV4 = _ecl_cdr(CLV5);
 CLV3 = _ecl_cdr(CLV4);
 CLV2 = _ecl_cdr(CLV3);
 CLV1 = _ecl_cdr(CLV2);
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=2)) FEwrong_num_arguments_anonym();
 {
TTL:
  if (Null(ECL_CONS_CAR(CLV1))) { goto L3; }
  value0 = VV[236];
  goto L2;
L3:;
  value0 = VV[40];
L2:;
  {
   ecl_frs_push(cl_env_copy,value0);
   if (__ecl_frs_push_result) {                   /*  BEGIN CATCH 1   */
    value0 = cl_env_copy->values[0];
   } else {
L8:;
    if ((ECL_CONS_CAR(CLV5))!=ECL_NIL) { goto L10; }
    if (!(v2args==ECL_NIL)) { goto L10; }
    goto L7;
L10:;
    if (Null(ECL_CONS_CAR(CLV4))) { goto L13; }
    T1 = ECL_CONS_CAR(CLV4);
    ECL_CONS_CAR(CLV4) = ecl_minus(T1,ecl_make_fixnum(1));
    T0 = ECL_CONS_CAR(CLV4);
    if (!(ecl_minusp(T0))) { goto L13; }
    goto L7;
L13:;
    v2args = (aux_closure.env=env0,cl_env_copy->function=(cl_object)&aux_closure,LC125bind_args(2, v1orig_args, v2args));
    if (Null(ECL_CONS_CAR(CLV5))) { goto L9; }
    if (!(v2args==ECL_NIL)) { goto L9; }
    goto L7;
L9:;
    goto L8;
L7:;
    value0 = v2args;
    cl_env_copy->nvalues = 1;
   }
   ecl_frs_pop(cl_env_copy);                      /*  END CATCH 1     */
  }
  return value0;
 }
 }
}
/*      closure BIND-ARGS                                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC125bind_args(volatile cl_narg narg, cl_object volatile v1orig_args, cl_object volatile v2args, ...)
{
 volatile struct ecl_cclosure aux_closure;
 cl_object volatile CLV0, CLV1, CLV2, CLV3, CLV4, CLV5, CLV6, CLV7;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile env0 = cl_env_copy->function->cclosure.env;
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV7 = env0;                                     /*  INSIDES         */
 CLV6 = _ecl_cdr(CLV7);
 CLV5 = _ecl_cdr(CLV6);
 CLV4 = _ecl_cdr(CLV5);
 CLV3 = _ecl_cdr(CLV4);
 CLV2 = _ecl_cdr(CLV3);
 CLV1 = _ecl_cdr(CLV2);
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=2)) FEwrong_num_arguments_anonym();
 {
TTL:
  if (Null(ECL_CONS_CAR(CLV1))) { goto L1; }
  {
   volatile cl_object v3arg;
   if (!(v2args==ECL_NIL)) { goto L4; }
   cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57]);
L4:;
   if (Null(ecl_symbol_value(VV[34]))) { goto L6; }
   ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L6:;
   {
    cl_object v4;
    v4 = v2args;
    {
     cl_object v5;
     v5 = v4;
     if (ecl_unlikely(!ECL_LISTP(v5))) FEtype_error_list(v5);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
    }
    if (Null(v4)) { goto L12; }
    {
     cl_object v5;
     v5 = ECL_CONS_CDR(v4);
     v2args = v5;
     v4 = ECL_CONS_CAR(v4);
    }
L12:;
    v3arg = v4;
   }
   ecl_bds_bind(cl_env_copy,VV[34],ECL_NIL);      /*  *LOGICAL-BLOCK-POPPER* */
   ecl_bds_bind(cl_env_copy,VV[226],v2args);      /*  *OUTSIDE-ARGS*  */
   value0 = VV[40];
   {
    ecl_frs_push(cl_env_copy,value0);
    if (__ecl_frs_push_result==0) {               /*  BEGIN CATCH 19  */
     (aux_closure.env=env0,cl_env_copy->function=(cl_object)&aux_closure,LC124do_guts(2, v3arg, v3arg));
    }
    ecl_frs_pop(cl_env_copy);                     /*  END CATCH 19    */
   }
   value0 = v2args;
   cl_env_copy->nvalues = 1;
   ecl_bds_unwind1(cl_env_copy);
   ecl_bds_unwind1(cl_env_copy);
   return value0;
  }
L1:;
  value0 = (aux_closure.env=env0,cl_env_copy->function=(cl_object)&aux_closure,LC124do_guts(2, v1orig_args, v2args));
  return value0;
 }
 }
}
/*      closure DO-GUTS                                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC124do_guts(cl_narg narg, cl_object v1orig_args, cl_object v2args, ...)
{
 cl_object T0, T1, T2, T3;
 cl_object CLV0, CLV1, CLV2, CLV3, CLV4, CLV5, CLV6, CLV7;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV7 = env0;                                     /*  INSIDES         */
 CLV6 = _ecl_cdr(CLV7);
 CLV5 = _ecl_cdr(CLV6);
 CLV4 = _ecl_cdr(CLV5);
 CLV3 = _ecl_cdr(CLV4);
 CLV2 = _ecl_cdr(CLV3);
 CLV1 = _ecl_cdr(CLV2);
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=2)) FEwrong_num_arguments_anonym();
 {
TTL:
  if (!(ecl_zerop(ECL_CONS_CAR(CLV6)))) { goto L1; }
  {
   cl_object v3;
   v3 = ecl_make_cclosure_va((cl_objectfn)LC123__lambda1761,env0,Cblock,1);
   T0 = v3;
  }
  T1 = CONS(ECL_SYM("FORMAT-ERROR",1078),T0);
  T2 = ecl_list1(T1);
  T3 = CONS(T2,ecl_symbol_value(ECL_SYM("*HANDLER-CLUSTERS*",6)));
  ecl_bds_bind(cl_env_copy,ECL_SYM("*HANDLER-CLUSTERS*",6),T3); /*  *HANDLER-CLUSTERS* */
  value0 = L8formatter_aux(4, ECL_CONS_CAR(CLV0), ECL_CONS_CAR(CLV7), v1orig_args, v2args);
  ecl_bds_unwind1(cl_env_copy);
  return value0;
L1:;
  value0 = L9interpret_directive_list(ECL_CONS_CAR(CLV0), ECL_CONS_CAR(CLV7), v1orig_args, v2args);
  return value0;
 }
 }
}
/*      closure LAMBDA1761                                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC123__lambda1761(cl_narg narg, cl_object v1condition, ...)
{
 cl_object T0, T1;
 cl_object CLV0, CLV1, CLV2, CLV3, CLV4, CLV5, CLV6, CLV7;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV7 = env0;
 CLV6 = _ecl_cdr(CLV7);
 CLV5 = _ecl_cdr(CLV6);
 CLV4 = _ecl_cdr(CLV5);
 CLV3 = _ecl_cdr(CLV4);                           /*  END             */
 CLV2 = _ecl_cdr(CLV3);
 CLV1 = _ecl_cdr(CLV2);
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=1)) FEwrong_num_arguments_anonym();
 {
TTL:
  T0 = ecl_list1(v1condition);
  T1 = ecl_one_minus(ECL_CONS_CAR(CLV3));
  value0 = cl_error(11, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[208], VV[71], T0, VV[210], ECL_NIL, ECL_SYM("CONTROL-STRING",1233), ECL_CONS_CAR(CLV2), ECL_SYM("OFFSET",1306), T1);
  return value0;
 }
 }
}
/*      local function RIGHT_CURLY_BRACKET-FORMAT-DIRECTIVE-EXPANDER  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC128right_curly_bracket_format_directive_expander(cl_object v1, cl_object v2)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[249]);
  return value0;
 }
}
/*      local function LAMBDA1777                                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC129__lambda1777(cl_object v1stream, cl_object v2, cl_object v3, cl_object v4orig_args, cl_object v5args)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[249]);
  return value0;
 }
}
/*      local function LAMBDA1783                                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC130__lambda1783(cl_object v1x)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = L7parse_directive(v1x, ecl_make_fixnum(0));
  return value0;
 }
}
/*      function definition for CHECK-OUTPUT-LAYOUT-MODE              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L131check_output_layout_mode(cl_object v1mode)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(ecl_symbol_value(VV[18]))) { goto L1; }
  if (ecl_eql(ecl_symbol_value(VV[18]),v1mode)) { goto L1; }
  cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[251]);
L1:;
  cl_set(VV[18],v1mode);
  value0 = ecl_symbol_value(VV[18]);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for ILLEGAL-INSIDE-JUSTIFICATION-P        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L132illegal_inside_justification_p(cl_object v1directive)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2;
   v2 = ecl_symbol_value(VV[250]);
   {
    cl_object v3;
    v3 = v2;
    goto L5;
L4:;
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
     if (Null(ecl_function_dispatch(cl_env_copy,VV[10])(1, v1directive) /*  FORMAT-DIRECTIVE-P */)) { goto L7; }
     if (Null(ecl_function_dispatch(cl_env_copy,VV[10])(1, v5) /*  FORMAT-DIRECTIVE-P */)) { goto L7; }
     T0 = ecl_function_dispatch(cl_env_copy,VV[303])(1, v1directive) /*  FORMAT-DIRECTIVE-CHARACTER */;
     T1 = ecl_function_dispatch(cl_env_copy,VV[303])(1, v5) /*  FORMAT-DIRECTIVE-CHARACTER */;
     if (!(ecl_eql(T0,T1))) { goto L7; }
     T0 = ecl_function_dispatch(cl_env_copy,VV[311])(1, v1directive) /*  FORMAT-DIRECTIVE-COLONP */;
     T1 = ecl_function_dispatch(cl_env_copy,VV[311])(1, v5) /*  FORMAT-DIRECTIVE-COLONP */;
     if (!(ecl_eql(T0,T1))) { goto L7; }
     T0 = ecl_function_dispatch(cl_env_copy,VV[312])(1, v1directive) /*  FORMAT-DIRECTIVE-ATSIGNP */;
     T1 = ecl_function_dispatch(cl_env_copy,VV[312])(1, v5) /*  FORMAT-DIRECTIVE-ATSIGNP */;
     if (!(ecl_eql(T0,T1))) { goto L7; }
     value0 = v4;
     cl_env_copy->nvalues = 1;
     return value0;
    }
L7:;
    v3 = ECL_CONS_CDR(v3);
L5:;
    if (v3==ECL_NIL) { goto L19; }
    goto L4;
L19:;
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      local function LESS-THAN_SIGN-FORMAT-DIRECTIVE-EXPANDER       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC134less_than_sign_format_directive_expander(cl_object v1, cl_object v2directives)
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
   cl_object v6;
   cl_object v7;
   v3 = ecl_function_dispatch(cl_env_copy,VV[311])(1, v1) /*  FORMAT-DIRECTIVE-COLONP */;
   v4 = ecl_function_dispatch(cl_env_copy,VV[312])(1, v1) /*  FORMAT-DIRECTIVE-ATSIGNP */;
   v5 = ecl_function_dispatch(cl_env_copy,VV[313])(1, v1) /*  FORMAT-DIRECTIVE-PARAMS */;
   v6 = ecl_function_dispatch(cl_env_copy,VV[329])(1, v1) /*  FORMAT-DIRECTIVE-STRING */;
   v7 = ecl_function_dispatch(cl_env_copy,VV[300])(1, v1) /*  FORMAT-DIRECTIVE-END */;
   {
    cl_object v9;                                 /*  SEGMENTS        */
    cl_object v10;                                /*  FIRST-SEMI      */
    cl_object v11;                                /*  CLOSE           */
    cl_object v12;                                /*  REMAINING       */
    value0 = L137parse_format_justification(v2directives);
    {
     const int v13 = cl_env_copy->nvalues;
     v9 = value0;
     cl_object v14;
     v14 = (v13<=1)? ECL_NIL : cl_env_copy->values[1];
     v10 = v14;
     v14 = (v13<=2)? ECL_NIL : cl_env_copy->values[2];
     v11 = v14;
     v14 = (v13<=3)? ECL_NIL : cl_env_copy->values[3];
     v12 = v14;
    }
    if (Null(ecl_function_dispatch(cl_env_copy,VV[311])(1, v11) /*  FORMAT-DIRECTIVE-COLONP */)) { goto L8; }
    {
     cl_object v14;                               /*  PREFIX          */
     cl_object v15;                               /*  PER-LINE-P      */
     cl_object v16;                               /*  INSIDES         */
     cl_object v17;                               /*  SUFFIX          */
     value0 = L144parse_format_logical_block(v9, v3, v10, v11, v5, v6, v7);
     {
      const int v18 = cl_env_copy->nvalues;
      v14 = value0;
      cl_object v19;
      v19 = (v18<=1)? ECL_NIL : cl_env_copy->values[1];
      v15 = v19;
      v19 = (v18<=2)? ECL_NIL : cl_env_copy->values[2];
      v16 = v19;
      v19 = (v18<=3)? ECL_NIL : cl_env_copy->values[3];
      v17 = v19;
     }
     T0 = L147expand_format_logical_block(v14, v15, v16, v17, v4);
     goto L7;
    }
L8:;
    {
     cl_object v13count;
     T1 = (ECL_SYM("+",16)->symbol.gfdef);
     {
      cl_object v14;
      {
       cl_object v15;
       v15 = ecl_make_cfun((cl_objectfn_fixed)LC133__lambda1808,ECL_NIL,Cblock,1);
       v14 = v15;
      }
      {
       cl_object v15;
       cl_object v16;
       v15 = ECL_NIL;
       {
        cl_object v17;
        v17 = v9;
        if (ecl_unlikely(!ECL_LISTP(v17))) FEtype_error_list(v17);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v16 = v17;
       }
       {
        cl_object v17;
        cl_object v18;
        v17 = ecl_list1(ECL_NIL);
        v18 = v17;
L21:;
        if (!(ecl_endp(v16))) { goto L23; }
        goto L22;
L23:;
        v15 = _ecl_car(v16);
        {
         cl_object v19;
         v19 = _ecl_cdr(v16);
         if (ecl_unlikely(!ECL_LISTP(v19))) FEtype_error_list(v19);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         v16 = v19;
        }
        {
         cl_object v19;
         v19 = v18;
         if (ecl_unlikely(ECL_ATOM(v19))) FEtype_error_cons(v19);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         T3 = v19;
        }
        T4 = ecl_function_dispatch(cl_env_copy,v14)(1, v15);
        v18 = ecl_list1(T4);
        (ECL_CONS_CDR(T3)=v18,T3);
        goto L21;
L22:;
        T2 = ecl_cdr(v17);
        goto L13;
       }
      }
     }
L13:;
     v13count = cl_reduce(2, T1, T2);
     if (!(ecl_greater(v13count,ecl_make_fixnum(0)))) { goto L39; }
     T1 = ecl_list1(v13count);
     cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[253], VV[71], T1);
L39:;
     T0 = L139expand_format_justification(v9, v3, v4, v10, v5);
    }
L7:;
    cl_env_copy->nvalues = 2;
    cl_env_copy->values[1] = v12;
    cl_env_copy->values[0] = T0;
    return cl_env_copy->values[0];
   }
  }
 }
}
/*      local function LAMBDA1808                                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC133__lambda1808(cl_object v1x)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = (VV[252]->symbol.gfdef);
  value0 = cl_count_if(2, T0, v1x);
  return value0;
 }
}
/*      local function LAMBDA1812                                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC136__lambda1812(cl_object v1stream, cl_object v2, cl_object v3directives, cl_object v4orig_args, cl_object v5args)
{
 cl_object T0, T1, T2, T3, T4;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v6;
   cl_object v7;
   cl_object v8;
   cl_object v9;
   cl_object v10;
   v6 = ecl_function_dispatch(cl_env_copy,VV[311])(1, v2) /*  FORMAT-DIRECTIVE-COLONP */;
   v7 = ecl_function_dispatch(cl_env_copy,VV[312])(1, v2) /*  FORMAT-DIRECTIVE-ATSIGNP */;
   v8 = ecl_function_dispatch(cl_env_copy,VV[313])(1, v2) /*  FORMAT-DIRECTIVE-PARAMS */;
   v9 = ecl_function_dispatch(cl_env_copy,VV[329])(1, v2) /*  FORMAT-DIRECTIVE-STRING */;
   v10 = ecl_function_dispatch(cl_env_copy,VV[300])(1, v2) /*  FORMAT-DIRECTIVE-END */;
   {
    cl_object v12;                                /*  SEGMENTS        */
    cl_object v13;                                /*  FIRST-SEMI      */
    cl_object v14;                                /*  CLOSE           */
    cl_object v15;                                /*  REMAINING       */
    value0 = L137parse_format_justification(v3directives);
    {
     const int v16 = cl_env_copy->nvalues;
     v12 = value0;
     cl_object v17;
     v17 = (v16<=1)? ECL_NIL : cl_env_copy->values[1];
     v13 = v17;
     v17 = (v16<=2)? ECL_NIL : cl_env_copy->values[2];
     v14 = v17;
     v17 = (v16<=3)? ECL_NIL : cl_env_copy->values[3];
     v15 = v17;
    }
    if (Null(ecl_function_dispatch(cl_env_copy,VV[311])(1, v14) /*  FORMAT-DIRECTIVE-COLONP */)) { goto L10; }
    {
     cl_object v17;                               /*  PREFIX          */
     cl_object v18;                               /*  PER-LINE-P      */
     cl_object v19;                               /*  INSIDES         */
     cl_object v20;                               /*  SUFFIX          */
     value0 = L144parse_format_logical_block(v12, v6, v13, v14, v8, v9, v10);
     {
      const int v21 = cl_env_copy->nvalues;
      v17 = value0;
      cl_object v22;
      v22 = (v21<=1)? ECL_NIL : cl_env_copy->values[1];
      v18 = v22;
      v22 = (v21<=2)? ECL_NIL : cl_env_copy->values[2];
      v19 = v22;
      v22 = (v21<=3)? ECL_NIL : cl_env_copy->values[3];
      v20 = v22;
     }
     v5args = L152interpret_format_logical_block(v1stream, v4orig_args, v5args, v17, v18, v19, v20, v7);
     goto L9;
    }
L10:;
    {
     cl_object v16count;
     T1 = (ECL_SYM("+",16)->symbol.gfdef);
     {
      cl_object v17;
      {
       cl_object v18;
       v18 = ecl_make_cfun((cl_objectfn_fixed)LC135__lambda1824,ECL_NIL,Cblock,1);
       v17 = v18;
      }
      {
       cl_object v18;
       cl_object v19;
       v18 = ECL_NIL;
       {
        cl_object v20;
        v20 = v12;
        if (ecl_unlikely(!ECL_LISTP(v20))) FEtype_error_list(v20);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v19 = v20;
       }
       {
        cl_object v20;
        cl_object v21;
        v20 = ecl_list1(ECL_NIL);
        v21 = v20;
L23:;
        if (!(ecl_endp(v19))) { goto L25; }
        goto L24;
L25:;
        v18 = _ecl_car(v19);
        {
         cl_object v22;
         v22 = _ecl_cdr(v19);
         if (ecl_unlikely(!ECL_LISTP(v22))) FEtype_error_list(v22);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         v19 = v22;
        }
        {
         cl_object v22;
         v22 = v21;
         if (ecl_unlikely(ECL_ATOM(v22))) FEtype_error_cons(v22);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         T3 = v22;
        }
        T4 = ecl_function_dispatch(cl_env_copy,v17)(1, v18);
        v21 = ecl_list1(T4);
        (ECL_CONS_CDR(T3)=v21,T3);
        goto L23;
L24:;
        T2 = ecl_cdr(v20);
        goto L15;
       }
      }
     }
L15:;
     v16count = cl_reduce(2, T1, T2);
     if (!(ecl_greater(v16count,ecl_make_fixnum(0)))) { goto L41; }
     T1 = ecl_list1(v16count);
     cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[253], VV[71], T1);
L41:;
     v5args = L140interpret_format_justification(v1stream, v4orig_args, v5args, v12, v6, v7, v13, v8);
    }
L9:;
    T0 = v15;
   }
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v5args;
   cl_env_copy->values[0] = T0;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA1824                                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC135__lambda1824(cl_object v1x)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = (VV[252]->symbol.gfdef);
  value0 = cl_count_if(2, T0, v1x);
  return value0;
 }
}
/*      function definition for PARSE-FORMAT-JUSTIFICATION            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L137parse_format_justification(cl_object v1directives)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2first_semi;
   cl_object v3close;
   cl_object v4remaining;
   v2first_semi = ECL_NIL;
   v3close = ECL_NIL;
   v4remaining = v1directives;
   {
    cl_object v5;
    cl_object v6;
    v5 = ECL_NIL;
    v6 = ECL_NIL;
L7:;
    {
     cl_object v7close_or_semi;
     v7close_or_semi = L22find_directive(v4remaining, CODE_CHAR(62), ECL_T);
     if ((v7close_or_semi)!=ECL_NIL) { goto L10; }
     cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[217]);
L10:;
     {
      cl_object v8posn;
      v8posn = cl_position(2, v7close_or_semi, v4remaining);
      {
       cl_object v9;
       T0 = cl_subseq(3, v4remaining, ecl_make_fixnum(0), v8posn);
       v9 = CONS(T0,ECL_NIL);
       if (Null(v6)) { goto L17; }
       {
        cl_object v10;
        v10 = v9;
        {
         cl_object v11;
         v11 = v6;
         if (ecl_unlikely(ECL_ATOM(v11))) FEtype_error_cons(v11);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         T0 = v11;
        }
        (ECL_CONS_CDR(T0)=v10,T0);
       }
       v6 = v9;
       goto L15;
L17:;
       v6 = v9;
       v5 = v9;
      }
L15:;
      T0 = ecl_one_plus(v8posn);
      v4remaining = ecl_nthcdr(ecl_to_size(T0),v4remaining);
     }
     T0 = ecl_function_dispatch(cl_env_copy,VV[303])(1, v7close_or_semi) /*  FORMAT-DIRECTIVE-CHARACTER */;
     if (!(ecl_char_code(T0)==ecl_char_code(CODE_CHAR(62)))) { goto L30; }
     v3close = v7close_or_semi;
     goto L6;
L30:;
     if ((v2first_semi)!=ECL_NIL) { goto L8; }
     v2first_semi = v7close_or_semi;
    }
L8:;
    goto L7;
L6:;
    cl_env_copy->nvalues = 4;
    cl_env_copy->values[3] = v4remaining;
    cl_env_copy->values[2] = v3close;
    cl_env_copy->values[1] = v2first_semi;
    cl_env_copy->values[0] = v5;
    return cl_env_copy->values[0];
   }
  }
 }
}
/*      function definition for EXPAND-FORMAT-JUSTIFICATION           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L139expand_format_justification(cl_object v1segments, cl_object v2colonp, cl_object v3atsignp, cl_object v4first_semi, cl_object v5params)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v6newline_segment_p;
   if (Null(v4first_semi)) { goto L3; }
   v6newline_segment_p = ecl_function_dispatch(cl_env_copy,VV[311])(1, v4first_semi) /*  FORMAT-DIRECTIVE-COLONP */;
   goto L1;
L3:;
   v6newline_segment_p = ECL_NIL;
   goto L1;
L1:;
   if (Null(v6newline_segment_p)) { goto L5; }
   L131check_output_layout_mode(ecl_make_fixnum(2));
L5:;
   {
    cl_object v7;
    v7 = v5params;
    {
     cl_object v8param_and_offset;
     cl_object v9offset;
     cl_object v10param;
     {
      cl_object v11;
      v11 = v7;
      {
       cl_object v12;
       v12 = v11;
       if (ecl_unlikely(!ECL_LISTP(v12))) FEtype_error_list(v12);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v11)) { goto L14; }
      {
       cl_object v12;
       v12 = ECL_CONS_CDR(v11);
       v7 = v12;
       v11 = ECL_CONS_CAR(v11);
      }
L14:;
      v8param_and_offset = v11;
     }
     v9offset = ecl_car(v8param_and_offset);
     v10param = ecl_cdr(v8param_and_offset);
     if (!(ecl_eql(v10param,VV[23]))) { goto L22; }
     T1 = L15expand_next_arg(1, v9offset);
     T0 = cl_list(3, ECL_SYM("OR",616), T1, ecl_make_fixnum(0));
     goto L8;
L22:;
     if (!(ecl_eql(v10param,VV[24]))) { goto L24; }
     cl_set(VV[37],ECL_NIL);
     T0 = VV[68];
     goto L8;
L24:;
     if (!((v10param)==(ECL_NIL))) { goto L28; }
     T0 = ecl_make_fixnum(0);
     goto L8;
L28:;
     T0 = v10param;
    }
L8:;
    T1 = cl_list(2, VV[254], T0);
    {
     cl_object v8param_and_offset;
     cl_object v9offset;
     cl_object v10param;
     {
      cl_object v11;
      v11 = v7;
      {
       cl_object v12;
       v12 = v11;
       if (ecl_unlikely(!ECL_LISTP(v12))) FEtype_error_list(v12);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v11)) { goto L37; }
      {
       cl_object v12;
       v12 = ECL_CONS_CDR(v11);
       v7 = v12;
       v11 = ECL_CONS_CAR(v11);
      }
L37:;
      v8param_and_offset = v11;
     }
     v9offset = ecl_car(v8param_and_offset);
     v10param = ecl_cdr(v8param_and_offset);
     if (!(ecl_eql(v10param,VV[23]))) { goto L45; }
     T3 = L15expand_next_arg(1, v9offset);
     T2 = cl_list(3, ECL_SYM("OR",616), T3, ecl_make_fixnum(1));
     goto L31;
L45:;
     if (!(ecl_eql(v10param,VV[24]))) { goto L47; }
     cl_set(VV[37],ECL_NIL);
     T2 = VV[68];
     goto L31;
L47:;
     if (!((v10param)==(ECL_NIL))) { goto L51; }
     T2 = ecl_make_fixnum(1);
     goto L31;
L51:;
     T2 = v10param;
    }
L31:;
    T3 = cl_list(2, VV[255], T2);
    {
     cl_object v8param_and_offset;
     cl_object v9offset;
     cl_object v10param;
     {
      cl_object v11;
      v11 = v7;
      {
       cl_object v12;
       v12 = v11;
       if (ecl_unlikely(!ECL_LISTP(v12))) FEtype_error_list(v12);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v11)) { goto L60; }
      {
       cl_object v12;
       v12 = ECL_CONS_CDR(v11);
       v7 = v12;
       v11 = ECL_CONS_CAR(v11);
      }
L60:;
      v8param_and_offset = v11;
     }
     v9offset = ecl_car(v8param_and_offset);
     v10param = ecl_cdr(v8param_and_offset);
     if (!(ecl_eql(v10param,VV[23]))) { goto L68; }
     T5 = L15expand_next_arg(1, v9offset);
     T4 = cl_list(3, ECL_SYM("OR",616), T5, ecl_make_fixnum(0));
     goto L54;
L68:;
     if (!(ecl_eql(v10param,VV[24]))) { goto L70; }
     cl_set(VV[37],ECL_NIL);
     T4 = VV[68];
     goto L54;
L70:;
     if (!((v10param)==(ECL_NIL))) { goto L74; }
     T4 = ecl_make_fixnum(0);
     goto L54;
L74:;
     T4 = v10param;
    }
L54:;
    T5 = cl_list(2, VV[256], T4);
    {
     cl_object v8param_and_offset;
     cl_object v9offset;
     cl_object v10param;
     {
      cl_object v11;
      v11 = v7;
      {
       cl_object v12;
       v12 = v11;
       if (ecl_unlikely(!ECL_LISTP(v12))) FEtype_error_list(v12);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v11)) { goto L83; }
      {
       cl_object v12;
       v12 = ECL_CONS_CDR(v11);
       v7 = v12;
       v11 = ECL_CONS_CAR(v11);
      }
L83:;
      v8param_and_offset = v11;
     }
     v9offset = ecl_car(v8param_and_offset);
     v10param = ecl_cdr(v8param_and_offset);
     if (!(ecl_eql(v10param,VV[23]))) { goto L91; }
     T7 = L15expand_next_arg(1, v9offset);
     T6 = cl_list(3, ECL_SYM("OR",616), T7, CODE_CHAR(32));
     goto L77;
L91:;
     if (!(ecl_eql(v10param,VV[24]))) { goto L93; }
     cl_set(VV[37],ECL_NIL);
     T6 = VV[68];
     goto L77;
L93:;
     if (!((v10param)==(ECL_NIL))) { goto L97; }
     T6 = CODE_CHAR(32);
     goto L77;
L97:;
     T6 = v10param;
    }
L77:;
    T7 = cl_list(2, VV[257], T6);
    T8 = cl_list(4, T1, T3, T5, T7);
    if (Null(v7)) { goto L101; }
    T10 = ecl_list1(ecl_make_fixnum(4));
    T11 = ecl_caar(v7);
    T9 = cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[70], VV[71], T10, ECL_SYM("OFFSET",1306), T11);
    goto L100;
L101:;
    T9 = ECL_NIL;
L100:;
    if (Null(v6newline_segment_p)) { goto L104; }
    T10 = VV[259];
    goto L103;
L104:;
    T10 = ECL_NIL;
L103:;
    T11 = CONS(VV[258],T10);
    if (Null(v6newline_segment_p)) { goto L107; }
    {
     cl_object v8;
     v8 = v1segments;
     {
      cl_object v9;
      v9 = v8;
      if (ecl_unlikely(!ECL_LISTP(v9))) FEtype_error_list(v9);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
     }
     if (Null(v8)) { goto L114; }
     {
      cl_object v9;
      v9 = ECL_CONS_CDR(v8);
      v1segments = v9;
      v8 = ECL_CONS_CAR(v8);
     }
L114:;
     T13 = v8;
    }
    T14 = L13expand_directive_list(T13);
    T15 = cl_listX(3, ECL_SYM("WITH-OUTPUT-TO-STRING",915), VV[261], T14);
    T16 = cl_list(3, ECL_SYM("SETF",752), VV[260], T15);
    {
     cl_object v8;
     v8 = ecl_function_dispatch(cl_env_copy,VV[313])(1, v4first_semi) /*  FORMAT-DIRECTIVE-PARAMS */;
     {
      cl_object v9param_and_offset;
      cl_object v10offset;
      cl_object v11param;
      {
       cl_object v12;
       v12 = v8;
       {
        cl_object v13;
        v13 = v12;
        if (ecl_unlikely(!ECL_LISTP(v13))) FEtype_error_list(v13);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v12)) { goto L128; }
       {
        cl_object v13;
        v13 = ECL_CONS_CDR(v12);
        v8 = v13;
        v12 = ECL_CONS_CAR(v12);
       }
L128:;
       v9param_and_offset = v12;
      }
      v10offset = ecl_car(v9param_and_offset);
      v11param = ecl_cdr(v9param_and_offset);
      if (!(ecl_eql(v11param,VV[23]))) { goto L136; }
      T19 = L15expand_next_arg(1, v10offset);
      T18 = cl_list(3, ECL_SYM("OR",616), T19, ecl_make_fixnum(0));
      goto L122;
L136:;
      if (!(ecl_eql(v11param,VV[24]))) { goto L138; }
      cl_set(VV[37],ECL_NIL);
      T18 = VV[68];
      goto L122;
L138:;
      if (!((v11param)==(ECL_NIL))) { goto L142; }
      T18 = ecl_make_fixnum(0);
      goto L122;
L142:;
      T18 = v11param;
     }
L122:;
     T19 = cl_list(2, VV[262], T18);
     {
      cl_object v9param_and_offset;
      cl_object v10offset;
      cl_object v11param;
      {
       cl_object v12;
       v12 = v8;
       {
        cl_object v13;
        v13 = v12;
        if (ecl_unlikely(!ECL_LISTP(v13))) FEtype_error_list(v13);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v12)) { goto L151; }
       {
        cl_object v13;
        v13 = ECL_CONS_CDR(v12);
        v8 = v13;
        v12 = ECL_CONS_CAR(v12);
       }
L151:;
       v9param_and_offset = v12;
      }
      v10offset = ecl_car(v9param_and_offset);
      v11param = ecl_cdr(v9param_and_offset);
      if (!(ecl_eql(v11param,VV[23]))) { goto L159; }
      T21 = L15expand_next_arg(1, v10offset);
      T20 = cl_list(3, ECL_SYM("OR",616), T21, VV[264]);
      goto L145;
L159:;
      if (!(ecl_eql(v11param,VV[24]))) { goto L161; }
      cl_set(VV[37],ECL_NIL);
      T20 = VV[68];
      goto L145;
L161:;
      if (!((v11param)==(ECL_NIL))) { goto L165; }
      T20 = VV[264];
      goto L145;
L165:;
      T20 = v11param;
     }
L145:;
     T21 = cl_list(2, VV[263], T20);
     T22 = cl_list(2, T19, T21);
     if (Null(v8)) { goto L169; }
     T24 = ecl_list1(ecl_make_fixnum(2));
     T25 = ecl_caar(v8);
     T23 = cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[70], VV[71], T24, ECL_SYM("OFFSET",1306), T25);
     goto L168;
L169:;
     T23 = ECL_NIL;
L168:;
     T24 = cl_list(5, ECL_SYM("SETF",752), VV[265], VV[262], VV[266], VV[263]);
     T25 = ecl_list1(T24);
     T26 = ecl_append(T23,T25);
     T17 = cl_listX(3, ECL_SYM("LET",479), T22, T26);
    }
    T12 = cl_list(2, T16, T17);
    goto L106;
L107:;
    T12 = ECL_NIL;
L106:;
    {
     cl_object v8;
     {
      cl_object v9;
      v9 = ecl_make_cfun((cl_objectfn_fixed)LC138__lambda1894,ECL_NIL,Cblock,1);
      v8 = v9;
     }
     {
      cl_object v9;
      cl_object v10;
      v9 = ECL_NIL;
      {
       cl_object v11;
       v11 = v1segments;
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
L179:;
       if (!(ecl_endp(v10))) { goto L181; }
       goto L180;
L181:;
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
        T14 = v13;
       }
       T15 = ecl_function_dispatch(cl_env_copy,v8)(1, v9);
       v12 = ecl_list1(T15);
       (ECL_CONS_CDR(T14)=v12,T14);
       goto L179;
L180:;
       T13 = ecl_cdr(v11);
       goto L171;
      }
     }
    }
L171:;
    T14 = ecl_append(T12,T13);
    T15 = cl_listX(3, ECL_SYM("BLOCK",139), ECL_NIL, T14);
    if (Null(v6newline_segment_p)) { goto L198; }
    T16 = VV[269];
    goto L197;
L198:;
    T16 = VV[270];
L197:;
    T17 = cl_list(7, VV[267], v2colonp, v3atsignp, VV[254], VV[255], VV[256], VV[257]);
    T18 = ecl_append(T16,T17);
    T19 = cl_listX(3, VV[268], ECL_SYM("STREAM",801), T18);
    T20 = cl_list(4, ECL_SYM("LET",479), T11, T15, T19);
    T21 = ecl_list1(T20);
    T22 = ecl_append(T9,T21);
    value0 = cl_listX(3, ECL_SYM("LET",479), T8, T22);
    return value0;
   }
  }
 }
}
/*      local function LAMBDA1894                                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC138__lambda1894(cl_object v1segment)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = L13expand_directive_list(v1segment);
  T1 = cl_listX(3, ECL_SYM("WITH-OUTPUT-TO-STRING",915), VV[261], T0);
  value0 = cl_list(3, ECL_SYM("PUSH",679), T1, VV[267]);
  return value0;
 }
}
/*      function definition for INTERPRET-FORMAT-JUSTIFICATION        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L140interpret_format_justification(cl_object volatile v1stream, cl_object volatile v2orig_args, cl_object volatile v3args, cl_object volatile v4segments, cl_object volatile v5colonp, cl_object volatile v6atsignp, cl_object volatile v7first_semi, cl_object volatile v8params)
{
 cl_object T0, T1;
 cl_object volatile env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   volatile cl_object v9;
   v9 = v8params;
   {
    volatile cl_object v10mincol;
    volatile cl_object v11colinc;
    volatile cl_object v12minpad;
    volatile cl_object v13padchar;
    {
     cl_object v14param_and_offset;
     cl_object v15offset;
     cl_object v16param;
     {
      cl_object v17;
      v17 = v9;
      {
       cl_object v18;
       v18 = v17;
       if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v17)) { goto L9; }
      {
       cl_object v18;
       v18 = ECL_CONS_CDR(v17);
       v9 = v18;
       v17 = ECL_CONS_CAR(v17);
      }
L9:;
      v14param_and_offset = v17;
     }
     v15offset = ecl_car(v14param_and_offset);
     v16param = ecl_cdr(v14param_and_offset);
     if (!(ecl_eql(v16param,VV[23]))) { goto L17; }
     if (!(v3args==ECL_NIL)) { goto L22; }
     cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v15offset);
L22:;
     if (Null(ecl_symbol_value(VV[34]))) { goto L24; }
     ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L24:;
     {
      cl_object v17;
      v17 = v3args;
      {
       cl_object v18;
       v18 = v17;
       if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v17)) { goto L30; }
      {
       cl_object v18;
       v18 = ECL_CONS_CDR(v17);
       v3args = v18;
       v17 = ECL_CONS_CAR(v17);
      }
L30:;
      value0 = v17;
     }
     if ((value0)!=ECL_NIL) { goto L20; }
     v10mincol = ecl_make_fixnum(0);
     goto L3;
L20:;
     v10mincol = value0;
     goto L3;
L17:;
     if (!(ecl_eql(v16param,VV[24]))) { goto L36; }
     v10mincol = ecl_make_fixnum(ecl_length(v3args));
     goto L3;
L36:;
     if (!((v16param)==(ECL_NIL))) { goto L38; }
     v10mincol = ecl_make_fixnum(0);
     goto L3;
L38:;
     v10mincol = v16param;
    }
L3:;
    {
     cl_object v14param_and_offset;
     cl_object v15offset;
     cl_object v16param;
     {
      cl_object v17;
      v17 = v9;
      {
       cl_object v18;
       v18 = v17;
       if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v17)) { goto L47; }
      {
       cl_object v18;
       v18 = ECL_CONS_CDR(v17);
       v9 = v18;
       v17 = ECL_CONS_CAR(v17);
      }
L47:;
      v14param_and_offset = v17;
     }
     v15offset = ecl_car(v14param_and_offset);
     v16param = ecl_cdr(v14param_and_offset);
     if (!(ecl_eql(v16param,VV[23]))) { goto L55; }
     if (!(v3args==ECL_NIL)) { goto L60; }
     cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v15offset);
L60:;
     if (Null(ecl_symbol_value(VV[34]))) { goto L62; }
     ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L62:;
     {
      cl_object v17;
      v17 = v3args;
      {
       cl_object v18;
       v18 = v17;
       if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v17)) { goto L68; }
      {
       cl_object v18;
       v18 = ECL_CONS_CDR(v17);
       v3args = v18;
       v17 = ECL_CONS_CAR(v17);
      }
L68:;
      value0 = v17;
     }
     if ((value0)!=ECL_NIL) { goto L58; }
     v11colinc = ecl_make_fixnum(1);
     goto L41;
L58:;
     v11colinc = value0;
     goto L41;
L55:;
     if (!(ecl_eql(v16param,VV[24]))) { goto L74; }
     v11colinc = ecl_make_fixnum(ecl_length(v3args));
     goto L41;
L74:;
     if (!((v16param)==(ECL_NIL))) { goto L76; }
     v11colinc = ecl_make_fixnum(1);
     goto L41;
L76:;
     v11colinc = v16param;
    }
L41:;
    {
     cl_object v14param_and_offset;
     cl_object v15offset;
     cl_object v16param;
     {
      cl_object v17;
      v17 = v9;
      {
       cl_object v18;
       v18 = v17;
       if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v17)) { goto L85; }
      {
       cl_object v18;
       v18 = ECL_CONS_CDR(v17);
       v9 = v18;
       v17 = ECL_CONS_CAR(v17);
      }
L85:;
      v14param_and_offset = v17;
     }
     v15offset = ecl_car(v14param_and_offset);
     v16param = ecl_cdr(v14param_and_offset);
     if (!(ecl_eql(v16param,VV[23]))) { goto L93; }
     if (!(v3args==ECL_NIL)) { goto L98; }
     cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v15offset);
L98:;
     if (Null(ecl_symbol_value(VV[34]))) { goto L100; }
     ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L100:;
     {
      cl_object v17;
      v17 = v3args;
      {
       cl_object v18;
       v18 = v17;
       if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v17)) { goto L106; }
      {
       cl_object v18;
       v18 = ECL_CONS_CDR(v17);
       v3args = v18;
       v17 = ECL_CONS_CAR(v17);
      }
L106:;
      value0 = v17;
     }
     if ((value0)!=ECL_NIL) { goto L96; }
     v12minpad = ecl_make_fixnum(0);
     goto L79;
L96:;
     v12minpad = value0;
     goto L79;
L93:;
     if (!(ecl_eql(v16param,VV[24]))) { goto L112; }
     v12minpad = ecl_make_fixnum(ecl_length(v3args));
     goto L79;
L112:;
     if (!((v16param)==(ECL_NIL))) { goto L114; }
     v12minpad = ecl_make_fixnum(0);
     goto L79;
L114:;
     v12minpad = v16param;
    }
L79:;
    {
     cl_object v14param_and_offset;
     cl_object v15offset;
     cl_object v16param;
     {
      cl_object v17;
      v17 = v9;
      {
       cl_object v18;
       v18 = v17;
       if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v17)) { goto L123; }
      {
       cl_object v18;
       v18 = ECL_CONS_CDR(v17);
       v9 = v18;
       v17 = ECL_CONS_CAR(v17);
      }
L123:;
      v14param_and_offset = v17;
     }
     v15offset = ecl_car(v14param_and_offset);
     v16param = ecl_cdr(v14param_and_offset);
     if (!(ecl_eql(v16param,VV[23]))) { goto L131; }
     if (!(v3args==ECL_NIL)) { goto L136; }
     cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v15offset);
L136:;
     if (Null(ecl_symbol_value(VV[34]))) { goto L138; }
     ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L138:;
     {
      cl_object v17;
      v17 = v3args;
      {
       cl_object v18;
       v18 = v17;
       if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v17)) { goto L144; }
      {
       cl_object v18;
       v18 = ECL_CONS_CDR(v17);
       v3args = v18;
       v17 = ECL_CONS_CAR(v17);
      }
L144:;
      value0 = v17;
     }
     if ((value0)!=ECL_NIL) { goto L134; }
     v13padchar = CODE_CHAR(32);
     goto L117;
L134:;
     v13padchar = value0;
     goto L117;
L131:;
     if (!(ecl_eql(v16param,VV[24]))) { goto L150; }
     v13padchar = ecl_make_fixnum(ecl_length(v3args));
     goto L117;
L150:;
     if (!((v16param)==(ECL_NIL))) { goto L152; }
     v13padchar = CODE_CHAR(32);
     goto L117;
L152:;
     v13padchar = v16param;
    }
L117:;
    if (Null(v9)) { goto L155; }
    T0 = ecl_list1(ecl_make_fixnum(4));
    T1 = ecl_caar(v9);
    cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[70], VV[71], T0, ECL_SYM("OFFSET",1306), T1);
L155:;
    {
     volatile cl_object v14newline_string;
     volatile cl_object v15strings;
     volatile cl_object v16extra_space;
     volatile cl_object v17line_len;
     v14newline_string = ECL_NIL;
     v15strings = ECL_NIL;
     v16extra_space = ecl_make_fixnum(0);
     v17line_len = ecl_make_fixnum(0);
     value0 = VV[40];
     {
      ecl_frs_push(cl_env_copy,value0);
      if (__ecl_frs_push_result) {                /*  BEGIN CATCH 163 */
       value0 = cl_env_copy->values[0];
      } else {
       if (Null(v7first_semi)) { goto L167; }
       if (Null(ecl_function_dispatch(cl_env_copy,VV[311])(1, v7first_semi) /*  FORMAT-DIRECTIVE-COLONP */)) { goto L167; }
       L131check_output_layout_mode(ecl_make_fixnum(2));
       {
        volatile cl_object v18;
        v18 = ecl_function_dispatch(cl_env_copy,VV[313])(1, v7first_semi) /*  FORMAT-DIRECTIVE-PARAMS */;
        {
         volatile cl_object v19extra;
         volatile cl_object v20len;
         {
          cl_object v21param_and_offset;
          cl_object v22offset;
          cl_object v23param;
          {
          cl_object v24;
          v24 = v18;
          {
          cl_object v25;
          v25 = v24;
          if (ecl_unlikely(!ECL_LISTP(v25))) FEtype_error_list(v25);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          }
          if (Null(v24)) { goto L178; }
          {
          cl_object v25;
          v25 = ECL_CONS_CDR(v24);
          v18 = v25;
          v24 = ECL_CONS_CAR(v24);
          }
L178:;
          v21param_and_offset = v24;
          }
          v22offset = ecl_car(v21param_and_offset);
          v23param = ecl_cdr(v21param_and_offset);
          if (!(ecl_eql(v23param,VV[23]))) { goto L186; }
          if (!(v3args==ECL_NIL)) { goto L191; }
          cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v22offset);
L191:;
          if (Null(ecl_symbol_value(VV[34]))) { goto L193; }
          ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L193:;
          {
          cl_object v24;
          v24 = v3args;
          {
          cl_object v25;
          v25 = v24;
          if (ecl_unlikely(!ECL_LISTP(v25))) FEtype_error_list(v25);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          }
          if (Null(v24)) { goto L199; }
          {
          cl_object v25;
          v25 = ECL_CONS_CDR(v24);
          v3args = v25;
          v24 = ECL_CONS_CAR(v24);
          }
L199:;
          value0 = v24;
          }
          if ((value0)!=ECL_NIL) { goto L189; }
          v19extra = ecl_make_fixnum(0);
          goto L172;
L189:;
          v19extra = value0;
          goto L172;
L186:;
          if (!(ecl_eql(v23param,VV[24]))) { goto L205; }
          v19extra = ecl_make_fixnum(ecl_length(v3args));
          goto L172;
L205:;
          if (!((v23param)==(ECL_NIL))) { goto L207; }
          v19extra = ecl_make_fixnum(0);
          goto L172;
L207:;
          v19extra = v23param;
         }
L172:;
         {
          cl_object v21param_and_offset;
          cl_object v22offset;
          cl_object v23param;
          {
          cl_object v24;
          v24 = v18;
          {
          cl_object v25;
          v25 = v24;
          if (ecl_unlikely(!ECL_LISTP(v25))) FEtype_error_list(v25);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          }
          if (Null(v24)) { goto L216; }
          {
          cl_object v25;
          v25 = ECL_CONS_CDR(v24);
          v18 = v25;
          v24 = ECL_CONS_CAR(v24);
          }
L216:;
          v21param_and_offset = v24;
          }
          v22offset = ecl_car(v21param_and_offset);
          v23param = ecl_cdr(v21param_and_offset);
          if (!(ecl_eql(v23param,VV[23]))) { goto L224; }
          if (!(v3args==ECL_NIL)) { goto L229; }
          cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57], ECL_SYM("OFFSET",1306), v22offset);
L229:;
          if (Null(ecl_symbol_value(VV[34]))) { goto L231; }
          ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L231:;
          {
          cl_object v24;
          v24 = v3args;
          {
          cl_object v25;
          v25 = v24;
          if (ecl_unlikely(!ECL_LISTP(v25))) FEtype_error_list(v25);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          }
          if (Null(v24)) { goto L237; }
          {
          cl_object v25;
          v25 = ECL_CONS_CDR(v24);
          v3args = v25;
          v24 = ECL_CONS_CAR(v24);
          }
L237:;
          value0 = v24;
          }
          if ((value0)!=ECL_NIL) { goto L227; }
          v20len = ecl_make_fixnum(72);
          goto L210;
L227:;
          v20len = value0;
          goto L210;
L224:;
          if (!(ecl_eql(v23param,VV[24]))) { goto L243; }
          v20len = ecl_make_fixnum(ecl_length(v3args));
          goto L210;
L243:;
          if (!((v23param)==(ECL_NIL))) { goto L245; }
          v20len = ecl_make_fixnum(72);
          goto L210;
L245:;
          v20len = v23param;
         }
L210:;
         if (Null(v18)) { goto L248; }
         T0 = ecl_list1(ecl_make_fixnum(2));
         T1 = ecl_caar(v18);
         cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[70], VV[71], T0, ECL_SYM("OFFSET",1306), T1);
L248:;
         {
          volatile cl_object v21stream;
          v21stream = cl_make_string_output_stream(0);
          {
          volatile bool unwinding = FALSE;
          cl_index v22=ECL_STACK_INDEX(cl_env_copy),v23;
          ecl_frame_ptr next_fr;
          ecl_frs_push(cl_env_copy,ECL_PROTECT_TAG);
          if (__ecl_frs_push_result) {
            unwinding = TRUE; next_fr=cl_env_copy->nlj_fr;
          } else {
          {
          cl_object v24;
          v24 = v4segments;
          {
          cl_object v25;
          v25 = v24;
          if (ecl_unlikely(!ECL_LISTP(v25))) FEtype_error_list(v25);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          }
          if (Null(v24)) { goto L261; }
          {
          cl_object v25;
          v25 = ECL_CONS_CDR(v24);
          v4segments = v25;
          v24 = ECL_CONS_CAR(v24);
          }
L261:;
          T0 = v24;
          }
          v3args = L9interpret_directive_list(v21stream, T0, v2orig_args, v3args);
          cl_env_copy->values[0] = cl_get_output_stream_string(v21stream);
          }
          ecl_frs_pop(cl_env_copy);
          v23=ecl_stack_push_values(cl_env_copy);
          cl_close(1, v21stream);
          ecl_stack_pop_values(cl_env_copy,v23);
          if (unwinding) ecl_unwind(cl_env_copy,next_fr);
          v14newline_string = cl_env_copy->values[0];
          ECL_STACK_SET_INDEX(cl_env_copy,v22);
          }
         }
         v16extra_space = v19extra;
         v17line_len = v20len;
        }
       }
L167:;
       {
        volatile cl_object v18;
        v18 = v4segments;
        goto L275;
L274:;
        {
         volatile cl_object v19segment;
         v19segment = ecl_car(v18);
         {
          volatile cl_object v20stream;
          v20stream = cl_make_string_output_stream(0);
          {
          volatile bool unwinding = FALSE;
          cl_index v21=ECL_STACK_INDEX(cl_env_copy),v22;
          ecl_frame_ptr next_fr;
          ecl_frs_push(cl_env_copy,ECL_PROTECT_TAG);
          if (__ecl_frs_push_result) {
            unwinding = TRUE; next_fr=cl_env_copy->nlj_fr;
          } else {
          v3args = L9interpret_directive_list(v20stream, v19segment, v2orig_args, v3args);
          cl_env_copy->values[0] = cl_get_output_stream_string(v20stream);
          }
          ecl_frs_pop(cl_env_copy);
          v22=ecl_stack_push_values(cl_env_copy);
          cl_close(1, v20stream);
          ecl_stack_pop_values(cl_env_copy,v22);
          if (unwinding) ecl_unwind(cl_env_copy,next_fr);
          T0 = cl_env_copy->values[0];
          ECL_STACK_SET_INDEX(cl_env_copy,v21);
          }
         }
         v15strings = CONS(T0,v15strings);
        }
        v18 = ecl_cdr(v18);
L275:;
        if (Null(v18)) { goto L289; }
        goto L274;
L289:;
       }
       value0 = v3args;
       cl_env_copy->nvalues = 1;
      }
      ecl_frs_pop(cl_env_copy);                   /*  END CATCH 163   */
     }
     v3args = value0;
     L142format_justification(v1stream, v14newline_string, v16extra_space, v17line_len, v15strings, v5colonp, v6atsignp, v10mincol, v11colinc, v12minpad, v13padchar);
    }
   }
  }
  value0 = v3args;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for FORMAT-JUSTIFICATION                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L142format_justification(cl_object v1stream, cl_object v2newline_prefix, cl_object v3extra_space, cl_object v4line_len, cl_object v5strings, cl_object v6pad_left, cl_object v7pad_right, cl_object v8mincol, cl_object v9colinc, cl_object v10minpad, cl_object v11padchar)
{
 cl_object T0, T1, T2;
 volatile cl_object lex0[5];
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  lex0[0] = v1stream;                             /*  STREAM          */
  lex0[1] = v10minpad;                            /*  MINPAD          */
  lex0[2] = v11padchar;                           /*  PADCHAR         */
TTL:
  {
   cl_object v12;
   v12 = cl_reverse(v5strings);
   if (ecl_unlikely(!ECL_LISTP(v12))) FEtype_error_list(v12);
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 0;
   v5strings = v12;
  }
  if ((v6pad_left)!=ECL_NIL) { goto L5; }
  if ((v7pad_right)!=ECL_NIL) { goto L5; }
  T0 = ecl_cdr(v5strings);
  if (!(T0==ECL_NIL)) { goto L5; }
  v6pad_left = ECL_T;
L5:;
  {
   cl_object v12chars;
   cl_object v13length;
   {
    cl_fixnum v14;
    v14 = ecl_length(v5strings);
    T0 = ecl_make_integer((v14)-1);
    lex0[3] = T0;                                 /*  NUM-GAPS        */
   }
   T0 = lex0[3];
   T1 = ecl_times(T0,lex0[1]);
   {
    cl_object v15string;
    cl_object v16;
    v15string = ECL_NIL;
    v16 = v5strings;
    {
     cl_object v17;
     v17 = ecl_make_fixnum(0);
L15:;
     if (!(ecl_endp(v16))) { goto L17; }
     goto L16;
L17:;
     v15string = _ecl_car(v16);
     {
      cl_object v18;
      v18 = _ecl_cdr(v16);
      if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v16 = v18;
     }
     {
      cl_fixnum v18;
      v18 = ecl_length(v15string);
      v17 = ecl_plus(v17,ecl_make_fixnum(v18));
     }
     goto L15;
L16:;
     T2 = v17;
     goto L11;
    }
   }
L11:;
   v12chars = ecl_plus(T1,T2);
   if (!(ecl_greater(v12chars,v8mincol))) { goto L30; }
   T0 = ecl_minus(v12chars,v8mincol);
   T1 = ecl_ceiling2(T0,v9colinc);
   T2 = ecl_times(T1,v9colinc);
   v13length = ecl_plus(v8mincol,T2);
   goto L29;
L30:;
   v13length = v8mincol;
L29:;
   T0 = ecl_minus(v13length,v12chars);
   lex0[4] = T0;                                  /*  PADDING         */
   if (Null(v2newline_prefix)) { goto L32; }
   value0 = si_file_column(lex0[0]);
   if ((value0)!=ECL_NIL) { goto L37; }
   T0 = ecl_make_fixnum(0);
   goto L35;
L37:;
   T0 = value0;
   goto L35;
L35:;
   T1 = ecl_plus(T0,v13length);
   T2 = ecl_plus(T1,v3extra_space);
   if (!(ecl_greater(T2,v4line_len))) { goto L32; }
   cl_write_string(2, v2newline_prefix, lex0[0]);
L32:;
   if (Null(v6pad_left)) { goto L39; }
   T0 = lex0[3];
   lex0[3] = ecl_plus(T0,ecl_make_fixnum(1));
L39:;
   if (Null(v7pad_right)) { goto L42; }
   T0 = lex0[3];
   lex0[3] = ecl_plus(T0,ecl_make_fixnum(1));
L42:;
   if (!(ecl_zerop(lex0[3]))) { goto L45; }
   T0 = lex0[3];
   lex0[3] = ecl_plus(T0,ecl_make_fixnum(1));
   v6pad_left = ECL_T;
L45:;
   if (Null(v6pad_left)) { goto L50; }
   LC141do_padding(lex0, ECL_T);
L50:;
   if (Null(v5strings)) { goto L52; }
   T0 = ecl_car(v5strings);
   cl_write_string(2, T0, lex0[0]);
   {
    cl_object v15;
    v15 = ecl_cdr(v5strings);
    goto L58;
L57:;
    {
     cl_object v16string;
     v16string = ecl_car(v15);
     LC141do_padding(lex0, ECL_NIL);
     cl_write_string(2, v16string, lex0[0]);
    }
    v15 = ecl_cdr(v15);
L58:;
    if (Null(v15)) { goto L66; }
    goto L57;
L66:;
   }
L52:;
   if (Null(v7pad_right)) { goto L68; }
   value0 = LC141do_padding(lex0, ECL_T);
   return value0;
L68:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function DO-PADDING                                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC141do_padding(volatile cl_object *lex0, cl_object v1border)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2pad_len;
   T0 = lex0[4];
   v2pad_len = ecl_truncate2(T0,lex0[3]);
   T0 = lex0[4];
   lex0[4] = ecl_minus(T0,v2pad_len);
   T0 = lex0[3];
   lex0[3] = ecl_minus(T0,ecl_make_fixnum(1));
   if ((v1border)!=ECL_NIL) { goto L6; }
   v2pad_len = ecl_plus(v2pad_len,lex0[1]);
L6:;
   {
    cl_object v3i;
    v3i = ecl_make_fixnum(0);
    goto L11;
L10:;
    cl_write_char(2, lex0[2], lex0[0]);
    v3i = ecl_one_plus(v3i);
L11:;
    if (!(ecl_lower(v3i,v2pad_len))) { goto L16; }
    goto L10;
L16:;
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      function definition for PARSE-FORMAT-LOGICAL-BLOCK            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L144parse_format_logical_block(cl_object v1segments, cl_object v2colonp, cl_object v3first_semi, cl_object v4close, cl_object v5params, cl_object v6string, cl_object v7end)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  L131check_output_layout_mode(ecl_make_fixnum(1));
  if (Null(v5params)) { goto L2; }
  T0 = ecl_caar(v5params);
  cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[271], ECL_SYM("OFFSET",1306), T0);
L2:;
  {
   cl_object v9;                                  /*  PREFIX          */
   cl_object v10;                                 /*  INSIDES         */
   cl_object v11;                                 /*  SUFFIX          */
   {
    cl_object v13;                                /*  PREFIX-DEFAULT  */
    cl_object v14;                                /*  SUFFIX-DEFAULT  */
    if (Null(v2colonp)) { goto L6; }
    cl_env_copy->nvalues = 2;
    cl_env_copy->values[1] = VV[273];
    cl_env_copy->values[0] = VV[272];
    value0 = cl_env_copy->values[0];
    goto L5;
L6:;
    cl_env_copy->nvalues = 2;
    cl_env_copy->values[1] = VV[155];
    cl_env_copy->values[0] = VV[155];
    value0 = cl_env_copy->values[0];
L5:;
    {
     v13 = value0;
     v14 = cl_env_copy->values[1];
    }
    {
     cl_fixnum v15;
     v15 = ecl_length(v1segments);
     if (!((v15)==(0))) { goto L9; }
     cl_env_copy->nvalues = 3;
     cl_env_copy->values[2] = v14;
     cl_env_copy->values[1] = ECL_NIL;
     cl_env_copy->values[0] = v13;
     value0 = cl_env_copy->values[0];
     goto L4;
L9:;
     if (!((v15)==(1))) { goto L11; }
     T0 = ecl_car(v1segments);
     cl_env_copy->nvalues = 3;
     cl_env_copy->values[2] = v14;
     cl_env_copy->values[1] = T0;
     cl_env_copy->values[0] = v13;
     value0 = cl_env_copy->values[0];
     goto L4;
L11:;
     if (!((v15)==(2))) { goto L13; }
     T1 = ecl_car(v1segments);
     T0 = LC143extract_string(T1, ECL_T);
     T1 = ecl_cadr(v1segments);
     cl_env_copy->nvalues = 3;
     cl_env_copy->values[2] = v14;
     cl_env_copy->values[1] = T1;
     cl_env_copy->values[0] = T0;
     value0 = cl_env_copy->values[0];
     goto L4;
L13:;
     if (!((v15)==(3))) { goto L16; }
     T1 = ecl_car(v1segments);
     T0 = LC143extract_string(T1, ECL_T);
     T1 = ecl_cadr(v1segments);
     T3 = ecl_caddr(v1segments);
     T2 = LC143extract_string(T3, ECL_NIL);
     cl_env_copy->nvalues = 3;
     cl_env_copy->values[2] = T2;
     cl_env_copy->values[1] = T1;
     cl_env_copy->values[0] = T0;
     value0 = cl_env_copy->values[0];
     goto L4;
L16:;
     value0 = cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[275]);
    }
   }
L4:;
   {
    const int v12 = cl_env_copy->nvalues;
    v9 = value0;
    cl_object v13;
    v13 = (v12<=1)? ECL_NIL : cl_env_copy->values[1];
    v10 = v13;
    v13 = (v12<=2)? ECL_NIL : cl_env_copy->values[2];
    v11 = v13;
   }
   if (Null(ecl_function_dispatch(cl_env_copy,VV[312])(1, v4close) /*  FORMAT-DIRECTIVE-ATSIGNP */)) { goto L20; }
   if (Null(v3first_semi)) { goto L24; }
   T0 = ecl_function_dispatch(cl_env_copy,VV[300])(1, v3first_semi) /*  FORMAT-DIRECTIVE-END */;
   goto L23;
L24:;
   T0 = v7end;
L23:;
   v10 = L145add_fill_style_newlines(3, v10, v6string, T0);
L20:;
   if (Null(v3first_semi)) { goto L28; }
   T0 = ecl_function_dispatch(cl_env_copy,VV[312])(1, v3first_semi) /*  FORMAT-DIRECTIVE-ATSIGNP */;
   goto L26;
L28:;
   T0 = ECL_NIL;
   goto L26;
L26:;
   cl_env_copy->nvalues = 4;
   cl_env_copy->values[3] = v11;
   cl_env_copy->values[2] = v10;
   cl_env_copy->values[1] = T0;
   cl_env_copy->values[0] = v9;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function EXTRACT-STRING                                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC143extract_string(cl_object v1list, cl_object v2prefix_p)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3directive;
   T0 = (VV[10]->symbol.gfdef);
   v3directive = cl_find_if(2, T0, v1list);
   if (Null(v3directive)) { goto L3; }
   T0 = ecl_list1(v2prefix_p);
   T1 = ecl_function_dispatch(cl_env_copy,VV[300])(1, v3directive) /*  FORMAT-DIRECTIVE-END */;
   T2 = ecl_one_minus(T1);
   value0 = cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[274], VV[71], T0, ECL_SYM("OFFSET",1306), T2);
   return value0;
L3:;
   T0 = (ECL_SYM("CONCATENATE",246)->symbol.gfdef);
   value0 = cl_apply(3, T0, ECL_SYM("STRING",807), v1list);
   return value0;
  }
 }
}
/*      function definition for ADD-FILL-STYLE-NEWLINES               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L145add_fill_style_newlines(cl_narg narg, cl_object v1list, cl_object v2string, cl_object v3offset, ...)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<3)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>4)) FEwrong_num_arguments_anonym();
 {
  cl_object v4previous_directive_is_newline;
  va_list args; va_start(args,v3offset);
  {
   int i = 3;
   if (i >= narg) {
    v4previous_directive_is_newline = ECL_NIL;
   } else {
    i++;
    v4previous_directive_is_newline = va_arg(args,cl_object);
   }
  }
  va_end(args);
  if (Null(v1list)) { goto L2; }
  {
   cl_object v5directive;
   v5directive = ecl_car(v1list);
   if (Null(cl_simple_string_p(v5directive))) { goto L5; }
   if ((v4previous_directive_is_newline)!=ECL_NIL) { goto L5; }
   T0 = L146add_fill_style_newlines_aux(v5directive, v2string, v3offset);
   T1 = ecl_cdr(v1list);
   {
    cl_fixnum v6;
    v6 = ecl_length(v5directive);
    T2 = ecl_plus(v3offset,ecl_make_fixnum(v6));
    T3 = L145add_fill_style_newlines(4, T1, v2string, T2, ECL_NIL);
    value0 = ecl_nconc(T0,T3);
    cl_env_copy->nvalues = 1;
    return value0;
   }
L5:;
   T0 = ecl_cdr(v1list);
   T1 = ecl_function_dispatch(cl_env_copy,VV[300])(1, v5directive) /*  FORMAT-DIRECTIVE-END */;
   T2 = ecl_function_dispatch(cl_env_copy,VV[303])(1, v5directive) /*  FORMAT-DIRECTIVE-CHARACTER */;
   {
    bool v7;
    v7 = ecl_char_code(T2)==ecl_char_code(CODE_CHAR(10));
    T3 = L145add_fill_style_newlines(4, T0, v2string, T1, ecl_make_bool(v7));
    value0 = CONS(v5directive,T3);
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for ADD-FILL-STYLE-NEWLINES-AUX           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L146add_fill_style_newlines_aux(cl_object v1literal, cl_object v2string, cl_object v3offset)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_fixnum v4;
   cl_object v5posn;
   v4 = ecl_length(v1literal);
   v5posn = ecl_make_fixnum(0);
   {
    cl_object v6;
    cl_object v7;
    v6 = ECL_NIL;
    v7 = ECL_NIL;
L6:;
    {
     cl_object v8blank;
     v8blank = cl_position(4, CODE_CHAR(32), v1literal, ECL_SYM("START",1337), v5posn);
     if (!(v8blank==ECL_NIL)) { goto L9; }
     {
      cl_object v9;
      T0 = cl_subseq(2, v1literal, v5posn);
      v9 = CONS(T0,ECL_NIL);
      if (Null(v7)) { goto L14; }
      {
       cl_object v10;
       v10 = v9;
       {
        cl_object v11;
        v11 = v7;
        if (ecl_unlikely(ECL_ATOM(v11))) FEtype_error_cons(v11);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        T0 = v11;
       }
       (ECL_CONS_CDR(T0)=v10,T0);
      }
      v7 = v9;
      goto L12;
L14:;
      v7 = v9;
      v6 = v9;
     }
L12:;
     goto L5;
L9:;
     {
      cl_object v9non_blank;
      T0 = (ECL_SYM("CHAR/=",218)->symbol.gfdef);
      value0 = cl_position(6, CODE_CHAR(32), v1literal, ECL_SYM("START",1337), v8blank, ECL_SYM("TEST",1343), T0);
      if ((value0)!=ECL_NIL) { goto L29; }
      v9non_blank = ecl_make_fixnum(v4);
      goto L27;
L29:;
      v9non_blank = value0;
      goto L27;
L27:;
      {
       cl_object v10;
       T0 = cl_subseq(3, v1literal, v5posn, v9non_blank);
       v10 = CONS(T0,ECL_NIL);
       if (Null(v7)) { goto L35; }
       {
        cl_object v11;
        v11 = v10;
        {
         cl_object v12;
         v12 = v7;
         if (ecl_unlikely(ECL_ATOM(v12))) FEtype_error_cons(v12);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         T0 = v12;
        }
        (ECL_CONS_CDR(T0)=v11,T0);
       }
       v7 = v10;
       goto L33;
L35:;
       v7 = v10;
       v6 = v10;
      }
L33:;
      {
       cl_object v10;
       T0 = ecl_plus(v3offset,v9non_blank);
       T1 = ecl_plus(v3offset,v9non_blank);
       T2 = L4make_format_directive(14, VV[28], v2string, VV[29], CODE_CHAR(95), ECL_SYM("START",1337), T0, ECL_SYM("END",1247), T1, VV[30], ECL_T, VV[31], ECL_NIL, VV[32], ECL_NIL);
       v10 = CONS(T2,ECL_NIL);
       if (Null(v7)) { goto L50; }
       {
        cl_object v11;
        v11 = v10;
        {
         cl_object v12;
         v12 = v7;
         if (ecl_unlikely(ECL_ATOM(v12))) FEtype_error_cons(v12);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         T0 = v12;
        }
        (ECL_CONS_CDR(T0)=v11,T0);
       }
       v7 = v10;
       goto L48;
L50:;
       v7 = v10;
       v6 = v10;
      }
L48:;
      v5posn = v9non_blank;
     }
     if (!(ecl_number_equalp(v5posn,ecl_make_fixnum(v4)))) { goto L7; }
     goto L5;
    }
L7:;
    goto L6;
L5:;
    value0 = v6;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      function definition for EXPAND-FORMAT-LOGICAL-BLOCK           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L147expand_format_logical_block(cl_object v1prefix, cl_object v2per_line_p, cl_object v3insides, cl_object v4suffix, cl_object v5atsignp)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(v5atsignp)) { goto L2; }
  T0 = VV[50];
  goto L1;
L2:;
  T0 = L15expand_next_arg(0);
L1:;
  T1 = cl_list(2, VV[77], T0);
  T2 = ecl_list1(T1);
  if (Null(v5atsignp)) { goto L5; }
  cl_set(VV[37],ECL_NIL);
  T3 = VV[276];
  goto L4;
L5:;
  T3 = ECL_NIL;
L4:;
  if (Null(v2per_line_p)) { goto L10; }
  T4 = VV[277];
  goto L9;
L10:;
  T4 = VV[278];
L9:;
  T5 = cl_list(6, ECL_SYM("STREAM",801), VV[77], T4, v1prefix, VV[279], v4suffix);
  if ((v5atsignp)!=ECL_NIL) { goto L13; }
  T6 = VV[281];
  goto L12;
L13:;
  T6 = ECL_NIL;
L12:;
  T7 = CONS(VV[280],T6);
  if ((v5atsignp)!=ECL_NIL) { goto L16; }
  T8 = VV[282];
  goto L15;
L16:;
  T8 = ECL_NIL;
L15:;
  T9 = cl_listX(3, ECL_SYM("IGNORABLE",429), VV[50], T8);
  T10 = cl_list(2, ECL_SYM("DECLARE",276), T9);
  ecl_bds_bind(cl_env_copy,VV[35],VV[60]);        /*  *EXPANDER-NEXT-ARG-MACRO* */
  ecl_bds_bind(cl_env_copy,VV[37],ECL_NIL);       /*  *ONLY-SIMPLE-ARGS* */
  ecl_bds_bind(cl_env_copy,VV[38],ECL_T);         /*  *ORIG-ARGS-AVAILABLE* */
  T11 = L13expand_directive_list(v3insides);
  ecl_bds_unwind1(cl_env_copy);
  ecl_bds_unwind1(cl_env_copy);
  ecl_bds_unwind1(cl_env_copy);
  T12 = cl_listX(3, ECL_SYM("BLOCK",139), ECL_NIL, T11);
  T13 = cl_list(4, ECL_SYM("LET",479), T7, T10, T12);
  T14 = cl_list(3, ECL_SYM("PPRINT-LOGICAL-BLOCK",655), T5, T13);
  T15 = ecl_list1(T14);
  T16 = ecl_append(T3,T15);
  value0 = cl_listX(3, ECL_SYM("LET",479), T2, T16);
  return value0;
 }
}
/*      function definition for INTERPRET-FORMAT-LOGICAL-BLOCK        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L152interpret_format_logical_block(cl_object volatile v1stream, cl_object volatile v2orig_args, cl_object volatile v3args, cl_object volatile v4prefix, cl_object volatile v5per_line_p, cl_object volatile v6insides, cl_object volatile v7suffix, cl_object volatile v8atsignp)
{
 cl_object T0;
 cl_object volatile env0 = ECL_NIL;
 cl_object volatile CLV0, CLV1, CLV2, CLV3;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  env0 = ECL_NIL;
  CLV0 = env0 = CONS(v2orig_args,env0);           /*  ORIG-ARGS       */
  CLV1 = env0 = CONS(v6insides,env0);             /*  INSIDES         */
  CLV2 = env0 = CONS(v8atsignp,env0);             /*  ATSIGNP         */
  {
   volatile cl_object env1 = env0;
   if (Null(ECL_CONS_CAR(CLV2))) { goto L3; }
   T0 = v3args;
   goto L2;
L3:;
   if (!(v3args==ECL_NIL)) { goto L5; }
   cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57]);
L5:;
   if (Null(ecl_symbol_value(VV[34]))) { goto L7; }
   ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L7:;
   {
    cl_object v9;
    v9 = v3args;
    {
     cl_object v10;
     v10 = v9;
     if (ecl_unlikely(!ECL_LISTP(v10))) FEtype_error_list(v10);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
    }
    if (Null(v9)) { goto L13; }
    {
     cl_object v10;
     v10 = ECL_CONS_CDR(v9);
     v3args = v10;
     v9 = ECL_CONS_CAR(v9);
    }
L13:;
    T0 = v9;
   }
L2:;
   CLV3 = env1 = CONS(T0,env1);                   /*  ARG             */
   if (Null(v5per_line_p)) { goto L19; }
   {
    cl_object volatile v9;
    v9 = ecl_make_cclosure_va((cl_objectfn)LC149__pprint_logical_block_2006,env1,Cblock,2);
    T0 = v9;
   }
   ecl_function_dispatch(cl_env_copy,VV[334])(6, T0, ECL_CONS_CAR(CLV3), v1stream, v4prefix, ECL_T, v7suffix) /*  PPRINT-LOGICAL-BLOCK-HELPER */;
   goto L1;
L19:;
   {
    cl_object volatile v9;
    v9 = ecl_make_cclosure_va((cl_objectfn)LC151__pprint_logical_block_2020,env1,Cblock,2);
    T0 = v9;
   }
   ecl_function_dispatch(cl_env_copy,VV[334])(6, T0, ECL_CONS_CAR(CLV3), v1stream, v4prefix, ECL_NIL, v7suffix) /*  PPRINT-LOGICAL-BLOCK-HELPER */;
  }
L1:;
  if (Null(ECL_CONS_CAR(CLV2))) { goto L23; }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L23:;
  value0 = v3args;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      closure PPRINT-LOGICAL-BLOCK-2006                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC149__pprint_logical_block_2006(volatile cl_narg narg, cl_object volatile v1, cl_object volatile v2stream, ...)
{
 cl_object T0;
 cl_object volatile CLV0, CLV1, CLV2, CLV3, CLV4, CLV5, CLV6, CLV7;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile env0 = cl_env_copy->function->cclosure.env;
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV3 = env0;                                     /*  ARG             */
 CLV2 = _ecl_cdr(CLV3);
 CLV1 = _ecl_cdr(CLV2);
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=2)) FEwrong_num_arguments_anonym();
 {
  CLV4 = env0 = CONS(v1,env0);
  CLV5 = env0 = CONS(v2stream,env0);              /*  STREAM          */
  {
   volatile cl_object env1 = env0;
   CLV6 = env1 = CONS(ecl_make_fixnum(0),env1);
   {
    CLV7 = env1 = CONS(ECL_NEW_FRAME_ID(cl_env_copy),env1);
    {
     ecl_frs_push(cl_env_copy,ECL_CONS_CAR(CLV7));
     if (__ecl_frs_push_result!=0) {
     value0 = cl_env_copy->values[0];
     ecl_frs_pop(cl_env_copy);
     return value0;
     } else {
     {
      cl_object volatile v3;
      v3 = ecl_make_cclosure_va((cl_objectfn)LC148__lambda2014,env1,Cblock,0);
      T0 = v3;
     }
     ecl_bds_bind(cl_env_copy,VV[34],T0);         /*  *LOGICAL-BLOCK-POPPER* */
     value0 = VV[40];
     {
      ecl_frs_push(cl_env_copy,value0);
      if (__ecl_frs_push_result) {                /*  BEGIN CATCH 2   */
       value0 = cl_env_copy->values[0];
      } else {
       if (Null(ECL_CONS_CAR(CLV2))) { goto L7; }
       T0 = ECL_CONS_CAR(CLV0);
       goto L6;
L7:;
       T0 = ECL_CONS_CAR(CLV3);
L6:;
       value0 = L9interpret_directive_list(ECL_CONS_CAR(CLV5), ECL_CONS_CAR(CLV1), T0, ECL_CONS_CAR(CLV3));
      }
      ecl_frs_pop(cl_env_copy);                   /*  END CATCH 2     */
     }
     ecl_frs_pop(cl_env_copy);
     ecl_bds_unwind1(cl_env_copy);
     return value0;}
    }
   }
  }
 }
 }
}
/*      closure PPRINT-LOGICAL-BLOCK-2020                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC151__pprint_logical_block_2020(volatile cl_narg narg, cl_object volatile v1, cl_object volatile v2stream, ...)
{
 cl_object T0;
 cl_object volatile CLV0, CLV1, CLV2, CLV3, CLV4, CLV5, CLV6, CLV7;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile env0 = cl_env_copy->function->cclosure.env;
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV3 = env0;                                     /*  ARG             */
 CLV2 = _ecl_cdr(CLV3);
 CLV1 = _ecl_cdr(CLV2);
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=2)) FEwrong_num_arguments_anonym();
 {
  CLV4 = env0 = CONS(v1,env0);
  CLV5 = env0 = CONS(v2stream,env0);              /*  STREAM          */
  {
   volatile cl_object env1 = env0;
   CLV6 = env1 = CONS(ecl_make_fixnum(0),env1);
   {
    CLV7 = env1 = CONS(ECL_NEW_FRAME_ID(cl_env_copy),env1);
    {
     ecl_frs_push(cl_env_copy,ECL_CONS_CAR(CLV7));
     if (__ecl_frs_push_result!=0) {
     value0 = cl_env_copy->values[0];
     ecl_frs_pop(cl_env_copy);
     return value0;
     } else {
     {
      cl_object volatile v3;
      v3 = ecl_make_cclosure_va((cl_objectfn)LC150__lambda2028,env1,Cblock,0);
      T0 = v3;
     }
     ecl_bds_bind(cl_env_copy,VV[34],T0);         /*  *LOGICAL-BLOCK-POPPER* */
     value0 = VV[40];
     {
      ecl_frs_push(cl_env_copy,value0);
      if (__ecl_frs_push_result) {                /*  BEGIN CATCH 2   */
       value0 = cl_env_copy->values[0];
      } else {
       if (Null(ECL_CONS_CAR(CLV2))) { goto L7; }
       T0 = ECL_CONS_CAR(CLV0);
       goto L6;
L7:;
       T0 = ECL_CONS_CAR(CLV3);
L6:;
       value0 = L9interpret_directive_list(ECL_CONS_CAR(CLV5), ECL_CONS_CAR(CLV1), T0, ECL_CONS_CAR(CLV3));
      }
      ecl_frs_pop(cl_env_copy);                   /*  END CATCH 2     */
     }
     ecl_frs_pop(cl_env_copy);
     ecl_bds_unwind1(cl_env_copy);
     return value0;}
    }
   }
  }
 }
 }
}
/*      closure LAMBDA2014                                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC148__lambda2014(cl_narg narg, ...)
{
 cl_object T0, T1;
 cl_object CLV0, CLV1, CLV2, CLV3, CLV4, CLV5, CLV6, CLV7;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV7 = env0;
 CLV6 = _ecl_cdr(CLV7);
 CLV5 = _ecl_cdr(CLV6);
 CLV4 = _ecl_cdr(CLV5);
 CLV3 = _ecl_cdr(CLV4);
 CLV2 = _ecl_cdr(CLV3);
 CLV1 = _ecl_cdr(CLV2);
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=0)) FEwrong_num_arguments_anonym();
 {
TTL:
  T0 = ECL_CONS_CAR(CLV4);
  T1 = ECL_CONS_CAR(CLV6);
  if ((ecl_function_dispatch(cl_env_copy,VV[335])(3, T0, T1, ECL_CONS_CAR(CLV5)) /*  PPRINT-POP-HELPER */)!=ECL_NIL) { goto L1; }
  cl_env_copy->values[0] = ECL_NIL;
  cl_env_copy->nvalues = 1;
  cl_return_from(ECL_CONS_CAR(CLV7),ECL_NIL);
L1:;
  T0 = ECL_CONS_CAR(CLV6);
  ECL_CONS_CAR(CLV6) = ecl_plus(T0,ecl_make_fixnum(1));
  {
   cl_object v1;
   v1 = ECL_CONS_CAR(CLV4);
   {
    cl_object v2;
    v2 = v1;
    if (ecl_unlikely(!ECL_LISTP(v2))) FEtype_error_list(v2);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
   }
   if (Null(v1)) { goto L10; }
   {
    cl_object v2;
    v2 = ECL_CONS_CDR(v1);
    ECL_CONS_CAR(CLV4) = v2;
    v1 = ECL_CONS_CAR(v1);
   }
L10:;
   value0 = v1;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
 }
}
/*      closure LAMBDA2028                                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC150__lambda2028(cl_narg narg, ...)
{
 cl_object T0, T1;
 cl_object CLV0, CLV1, CLV2, CLV3, CLV4, CLV5, CLV6, CLV7;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV7 = env0;
 CLV6 = _ecl_cdr(CLV7);
 CLV5 = _ecl_cdr(CLV6);
 CLV4 = _ecl_cdr(CLV5);
 CLV3 = _ecl_cdr(CLV4);
 CLV2 = _ecl_cdr(CLV3);
 CLV1 = _ecl_cdr(CLV2);
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=0)) FEwrong_num_arguments_anonym();
 {
TTL:
  T0 = ECL_CONS_CAR(CLV4);
  T1 = ECL_CONS_CAR(CLV6);
  if ((ecl_function_dispatch(cl_env_copy,VV[335])(3, T0, T1, ECL_CONS_CAR(CLV5)) /*  PPRINT-POP-HELPER */)!=ECL_NIL) { goto L1; }
  cl_env_copy->values[0] = ECL_NIL;
  cl_env_copy->nvalues = 1;
  cl_return_from(ECL_CONS_CAR(CLV7),ECL_NIL);
L1:;
  T0 = ECL_CONS_CAR(CLV6);
  ECL_CONS_CAR(CLV6) = ecl_plus(T0,ecl_make_fixnum(1));
  {
   cl_object v1;
   v1 = ECL_CONS_CAR(CLV4);
   {
    cl_object v2;
    v2 = v1;
    if (ecl_unlikely(!ECL_LISTP(v2))) FEtype_error_list(v2);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
   }
   if (Null(v1)) { goto L10; }
   {
    cl_object v2;
    v2 = ECL_CONS_CDR(v1);
    ECL_CONS_CAR(CLV4) = v2;
    v1 = ECL_CONS_CAR(v1);
   }
L10:;
   value0 = v1;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
 }
}
/*      local function GREATER-THAN_SIGN-FORMAT-DIRECTIVE-EXPANDER    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC153greater_than_sign_format_directive_expander(cl_object v1, cl_object v2)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[225]);
  return value0;
 }
}
/*      local function SOLIDUS-FORMAT-DIRECTIVE-EXPANDER              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC154solidus_format_directive_expander(cl_object v1, cl_object v2)
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
   cl_object v6;
   cl_object v7;
   cl_object v8;
   v3 = ecl_function_dispatch(cl_env_copy,VV[329])(1, v1) /*  FORMAT-DIRECTIVE-STRING */;
   v4 = ecl_function_dispatch(cl_env_copy,VV[336])(1, v1) /*  FORMAT-DIRECTIVE-START */;
   v5 = ecl_function_dispatch(cl_env_copy,VV[300])(1, v1) /*  FORMAT-DIRECTIVE-END */;
   v6 = ecl_function_dispatch(cl_env_copy,VV[311])(1, v1) /*  FORMAT-DIRECTIVE-COLONP */;
   v7 = ecl_function_dispatch(cl_env_copy,VV[312])(1, v1) /*  FORMAT-DIRECTIVE-ATSIGNP */;
   v8 = ecl_function_dispatch(cl_env_copy,VV[313])(1, v1) /*  FORMAT-DIRECTIVE-PARAMS */;
   {
    cl_object v9symbol;
    v9symbol = L156extract_user_function_name(v3, v4, v5);
    {
     cl_object v10;
     cl_object v11;
     cl_object v12;
     cl_object v13;
     v10 = ECL_NIL;
     v11 = ECL_NIL;
     v12 = ECL_NIL;
     v13 = ECL_NIL;
     {
      cl_object v14;
      v14 = v8;
      goto L17;
L16:;
      {
       cl_object v15param_and_offset;
       v15param_and_offset = ecl_car(v14);
       {
        cl_object v16param;
        v16param = ecl_cdr(v15param_and_offset);
        {
         cl_object v17param_name;
         v17param_name = cl_gensym(0);
         {
          cl_object v18;
          v18 = CONS(v17param_name,ECL_NIL);
          if (Null(v11)) { goto L27; }
          {
          cl_object v19;
          v19 = v18;
          {
          cl_object v20;
          v20 = v11;
          if (ecl_unlikely(ECL_ATOM(v20))) FEtype_error_cons(v20);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          T1 = v20;
          }
          (ECL_CONS_CDR(T1)=v19,T1);
          }
          v11 = v18;
          goto L25;
L27:;
          v11 = v18;
          v10 = v18;
         }
L25:;
         {
          cl_object v18;
          if (!(ecl_eql(v16param,VV[23]))) { goto L42; }
          T1 = L15expand_next_arg(0);
          goto L41;
L42:;
          if (!(ecl_eql(v16param,VV[24]))) { goto L44; }
          T1 = VV[68];
          goto L41;
L44:;
          T1 = v16param;
L41:;
          T2 = cl_list(2, v17param_name, T1);
          v18 = CONS(T2,ECL_NIL);
          if (Null(v13)) { goto L46; }
          {
          cl_object v19;
          v19 = v18;
          {
          cl_object v20;
          v20 = v13;
          if (ecl_unlikely(ECL_ATOM(v20))) FEtype_error_cons(v20);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          T1 = v20;
          }
          (ECL_CONS_CDR(T1)=v19,T1);
          }
          v13 = v18;
          goto L39;
L46:;
          v13 = v18;
          v12 = v18;
         }
L39:;
        }
       }
      }
      v14 = ecl_cdr(v14);
L17:;
      if (Null(v14)) { goto L60; }
      goto L16;
L60:;
     }
     T1 = L15expand_next_arg(0);
     T2 = cl_listX(6, v9symbol, ECL_SYM("STREAM",801), T1, v6, v7, v10);
     T0 = cl_list(3, ECL_SYM("LET",479), v12, T2);
    }
   }
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v2;
   cl_env_copy->values[0] = T0;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA2067                                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC155__lambda2067(cl_object v1stream, cl_object v2, cl_object v3, cl_object v4orig_args, cl_object v5args)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v6;
   cl_object v7;
   cl_object v8;
   cl_object v9;
   cl_object v10;
   cl_object v11;
   v6 = ecl_function_dispatch(cl_env_copy,VV[329])(1, v2) /*  FORMAT-DIRECTIVE-STRING */;
   v7 = ecl_function_dispatch(cl_env_copy,VV[336])(1, v2) /*  FORMAT-DIRECTIVE-START */;
   v8 = ecl_function_dispatch(cl_env_copy,VV[300])(1, v2) /*  FORMAT-DIRECTIVE-END */;
   v9 = ecl_function_dispatch(cl_env_copy,VV[311])(1, v2) /*  FORMAT-DIRECTIVE-COLONP */;
   v10 = ecl_function_dispatch(cl_env_copy,VV[312])(1, v2) /*  FORMAT-DIRECTIVE-ATSIGNP */;
   v11 = ecl_function_dispatch(cl_env_copy,VV[313])(1, v2) /*  FORMAT-DIRECTIVE-PARAMS */;
   {
    cl_object v12symbol;
    v12symbol = L156extract_user_function_name(v6, v7, v8);
    {
     cl_object v13;
     cl_object v14;
     v13 = ECL_NIL;
     v14 = ECL_NIL;
     {
      cl_object v15;
      v15 = v11;
      goto L15;
L14:;
      {
       cl_object v16param_and_offset;
       v16param_and_offset = ecl_car(v15);
       {
        cl_object v17param;
        v17param = ecl_cdr(v16param_and_offset);
        if (!(ecl_eql(v17param,VV[23]))) { goto L21; }
        {
         cl_object v18;
         if (!(v5args==ECL_NIL)) { goto L25; }
         cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57]);
L25:;
         if (Null(ecl_symbol_value(VV[34]))) { goto L27; }
         ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L27:;
         {
          cl_object v19;
          v19 = v5args;
          {
          cl_object v20;
          v20 = v19;
          if (ecl_unlikely(!ECL_LISTP(v20))) FEtype_error_list(v20);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          }
          if (Null(v19)) { goto L34; }
          {
          cl_object v20;
          v20 = ECL_CONS_CDR(v19);
          v5args = v20;
          v19 = ECL_CONS_CAR(v19);
          }
L34:;
          T0 = v19;
         }
         v18 = CONS(T0,ECL_NIL);
         if (Null(v14)) { goto L40; }
         {
          cl_object v19;
          v19 = v18;
          {
          cl_object v20;
          v20 = v14;
          if (ecl_unlikely(ECL_ATOM(v20))) FEtype_error_cons(v20);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          T0 = v20;
          }
          (ECL_CONS_CDR(T0)=v19,T0);
         }
         v14 = v18;
         goto L23;
L40:;
         v14 = v18;
         v13 = v18;
        }
L23:;
        goto L19;
L21:;
        if (!(ecl_eql(v17param,VV[24]))) { goto L52; }
        {
         cl_object v18;
         {
          cl_fixnum v19;
          v19 = ecl_length(v5args);
          v18 = CONS(ecl_make_fixnum(v19),ECL_NIL);
         }
         if (Null(v14)) { goto L56; }
         {
          cl_object v19;
          v19 = v18;
          {
          cl_object v20;
          v20 = v14;
          if (ecl_unlikely(ECL_ATOM(v20))) FEtype_error_cons(v20);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          T0 = v20;
          }
          (ECL_CONS_CDR(T0)=v19,T0);
         }
         v14 = v18;
         goto L54;
L56:;
         v14 = v18;
         v13 = v18;
        }
L54:;
        goto L19;
L52:;
        {
         cl_object v18;
         v18 = CONS(v17param,ECL_NIL);
         if (Null(v14)) { goto L70; }
         {
          cl_object v19;
          v19 = v18;
          {
          cl_object v20;
          v20 = v14;
          if (ecl_unlikely(ECL_ATOM(v20))) FEtype_error_cons(v20);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          T0 = v20;
          }
          (ECL_CONS_CDR(T0)=v19,T0);
         }
         v14 = v18;
         goto L68;
L70:;
         v14 = v18;
         v13 = v18;
        }
L68:;
       }
L19:;
      }
      v15 = ecl_cdr(v15);
L15:;
      if (Null(v15)) { goto L84; }
      goto L14;
L84:;
     }
     T0 = cl_fdefinition(v12symbol);
     if (!(v5args==ECL_NIL)) { goto L86; }
     cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[57]);
L86:;
     if (Null(ecl_symbol_value(VV[34]))) { goto L88; }
     ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[34]))(0);
L88:;
     {
      cl_object v15;
      v15 = v5args;
      {
       cl_object v16;
       v16 = v15;
       if (ecl_unlikely(!ECL_LISTP(v16))) FEtype_error_list(v16);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v15)) { goto L95; }
      {
       cl_object v16;
       v16 = ECL_CONS_CDR(v15);
       v5args = v16;
       v15 = ECL_CONS_CAR(v15);
      }
L95:;
      T1 = v15;
     }
     cl_apply(6, T0, v1stream, T1, v9, v10, v13);
    }
   }
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v5args;
   cl_env_copy->values[0] = v3;
   return cl_env_copy->values[0];
  }
 }
}
/*      function definition for EXTRACT-USER-FUNCTION-NAME            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L156extract_user_function_name(cl_object v1string, cl_object v2start, cl_object v3end)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v4slash;
   T0 = ecl_one_minus(v3end);
   v4slash = cl_position(8, CODE_CHAR(47), v1string, ECL_SYM("START",1337), v2start, ECL_SYM("END",1247), T0, VV[284], ECL_T);
   if ((v4slash)!=ECL_NIL) { goto L2; }
   cl_error(3, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[285]);
L2:;
   {
    cl_object v5name;
    cl_object v6first_colon;
    cl_object v7second_colon;
    cl_object v8package_name;
    cl_object v9package;
    T1 = ecl_one_plus(v4slash);
    T2 = ecl_one_minus(v3end);
    T0 = cl_subseq(3, v1string, T1, T2);
    v5name = cl_string_upcase(1, T0);
    v6first_colon = cl_position(2, CODE_CHAR(58), v5name);
    if (Null(v6first_colon)) { goto L8; }
    T0 = ecl_one_plus(v6first_colon);
    v7second_colon = cl_position(4, CODE_CHAR(58), v5name, ECL_SYM("START",1337), T0);
    goto L7;
L8:;
    v7second_colon = ECL_NIL;
L7:;
    if (Null(v6first_colon)) { goto L11; }
    v8package_name = cl_subseq(3, v5name, ecl_make_fixnum(0), v6first_colon);
    goto L10;
L11:;
    v8package_name = VV[286];
L10:;
    v9package = cl_find_package(v8package_name);
    if ((v9package)!=ECL_NIL) { goto L14; }
    T0 = ecl_list1(v8package_name);
    cl_error(5, ECL_SYM("FORMAT-ERROR",1078), VV[19], VV[287], VV[71], T0);
L14:;
    if (Null(v7second_colon)) { goto L17; }
    T1 = ecl_one_plus(v6first_colon);
    if (!(ecl_number_equalp(v7second_colon,T1))) { goto L17; }
    T1 = ecl_one_plus(v7second_colon);
    T0 = cl_subseq(2, v5name, T1);
    goto L16;
L17:;
    if (Null(v6first_colon)) { goto L20; }
    T1 = ecl_one_plus(v6first_colon);
    T0 = cl_subseq(2, v5name, T1);
    goto L16;
L20:;
    T0 = v5name;
L16:;
    value0 = cl_intern(2, T0, v9package);
    return value0;
   }
  }
 }
}

#include "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/build/lsp/format.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclWWewOka7_jWaZTr51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:LSP;FORMAT.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclWWewOka7_jWaZTr51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  cl_set(ECL_SYM("*FEATURES*",36),cl_adjoin(2, VV[0], ecl_symbol_value(ECL_SYM("*FEATURES*",36))));
  cl_set(ECL_SYM("*FEATURES*",36),cl_adjoin(2, VV[1], ecl_symbol_value(ECL_SYM("*FEATURES*",36))));
  si_Xmake_special(VV[2]);
  cl_set(VV[2],VVtemp[1]);
  ecl_cmp_defun(VV[288]);                         /*  FLOAT-TO-DIGITS* */
  ecl_cmp_defun(VV[289]);                         /*  FLONUM-TO-STRING */
  ecl_cmp_defun(VV[290]);                         /*  EXPONENT-IN-BASE10 */
  ecl_function_dispatch(cl_env_copy,VV[291])(15, VV[8], _ecl_static_0, ECL_SYM("VECTOR",900), ECL_T, VVtemp[2], VVtemp[3], VV[9], ECL_NIL, ECL_NIL, ECL_NIL, VVtemp[4], ecl_make_fixnum(8), ecl_make_fixnum(0), ECL_NIL, VV[10]) /*  DEFINE-STRUCTURE */;
  ecl_cmp_defun(VV[292]);                         /*  MAKE-FORMAT-DIRECTIVE */
  si_do_deftype(3, VV[8], VVtemp[5], ECL_SYM("VECTOR",900));
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_fixnum v1;
   v1 = (ecl_character)(126);
   T0 = ecl_make_integer((v1)+1);
   si_Xmake_constant(VV[13], T0);
  }
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  si_Xmake_special(VV[14]);
  T0 = si_make_vector(ECL_T, ecl_make_fixnum(127), ECL_NIL, ECL_NIL, ECL_NIL, ecl_make_fixnum(0));
  cl_set(VV[14],si_fill_array_with_elt(T0, ECL_NIL, ecl_make_fixnum(0), ECL_NIL));
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  si_Xmake_special(VV[15]);
  T0 = si_make_vector(ECL_T, ecl_make_fixnum(127), ECL_NIL, ECL_NIL, ECL_NIL, ecl_make_fixnum(0));
  cl_set(VV[15],si_fill_array_with_elt(T0, ECL_NIL, ecl_make_fixnum(0), ECL_NIL));
 }
  si_Xmake_special(VV[16]);
  cl_set(VV[16],ECL_NIL);
  si_Xmake_special(VV[17]);
  cl_set(VV[17],ECL_NIL);
  si_Xmake_special(VV[18]);
  cl_set(VV[18],ECL_NIL);
  (void)0; /* No entry created for TOKENIZE-CONTROL-STRING */
  (void)0; /* No entry created for PARSE-DIRECTIVE */
  si_Xmake_special(VV[33]);
  cl_set(VV[33],ECL_NIL);
  si_Xmake_special(VV[34]);
  cl_set(VV[34],ECL_NIL);
  si_Xmake_special(VV[35]);
  cl_set(VV[35],VV[36]);
  si_Xmake_special(VV[37]);
  si_Xmake_special(VV[38]);
  cl_set(VV[38],ECL_NIL);
  si_Xmake_special(VV[39]);
  ecl_cmp_defun(VV[301]);                         /*  FORMATTER-AUX   */
  (void)0; /* No entry created for INTERPRET-DIRECTIVE-LIST */
  ecl_cmp_defmacro(VV[304]);                      /*  FORMATTER       */
  (void)0; /* No entry created for %FORMATTER */
  (void)0; /* No entry created for EXPAND-CONTROL-STRING */
  (void)0; /* No entry created for EXPAND-DIRECTIVE-LIST */
  (void)0; /* No entry created for EXPAND-DIRECTIVE */
  (void)0; /* No entry created for EXPAND-NEXT-ARG */
  (void)0; /* No entry created for NEED-HAIRY-ARGS */
  ecl_cmp_defmacro(VV[305]);                      /*  EXPANDER-NEXT-ARG */
  ecl_cmp_defmacro(VV[306]);                      /*  EXPANDER-PPRINT-NEXT-ARG */
  ecl_cmp_defun(VV[309]);                         /*  %SET-FORMAT-DIRECTIVE-EXPANDER */
  (void)0; /* No entry created for %SET-FORMAT-DIRECTIVE-INTERPRETER */
  (void)0; /* No entry created for FIND-DIRECTIVE */
  (void)0; /* No entry created for FORMAT-WRITE-FIELD */
  ecl_cmp_defun(VV[310]);                         /*  FORMAT-PRINC    */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC25latin_capital_letter_a_format_directive_expander,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  L19_set_format_directive_expander(CODE_CHAR(65), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC26__lambda307,ECL_NIL,Cblock,5);
   T0 = v1;
  }
  L20_set_format_directive_interpreter(CODE_CHAR(65), T0);
 }
  ecl_cmp_defun(VV[314]);                         /*  FORMAT-PRIN1    */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC28latin_capital_letter_s_format_directive_expander,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  L19_set_format_directive_expander(CODE_CHAR(83), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC29__lambda378,ECL_NIL,Cblock,5);
   T0 = v1;
  }
  L20_set_format_directive_interpreter(CODE_CHAR(83), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC30latin_capital_letter_c_format_directive_expander,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  L19_set_format_directive_expander(CODE_CHAR(67), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC31__lambda421,ECL_NIL,Cblock,5);
   T0 = v1;
  }
  L20_set_format_directive_interpreter(CODE_CHAR(67), T0);
 }
  (void)0; /* No entry created for CHAR-PRINTING-P */
  ecl_cmp_defun(VV[315]);                         /*  FORMAT-PRINT-NAMED-CHARACTER */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC34latin_capital_letter_w_format_directive_expander,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  L19_set_format_directive_expander(CODE_CHAR(87), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC35__lambda440,ECL_NIL,Cblock,5);
   T0 = v1;
  }
  L20_set_format_directive_interpreter(CODE_CHAR(87), T0);
 }
  ecl_cmp_defun(VV[316]);                         /*  FORMAT-PRINT-INTEGER */
  (void)0; /* No entry created for FORMAT-ADD-COMMAS */
  ecl_cmp_defun(VV[317]);                         /*  EXPAND-FORMAT-INTEGER */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC39latin_capital_letter_d_format_directive_expander,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  L19_set_format_directive_expander(CODE_CHAR(68), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC40__lambda500,ECL_NIL,Cblock,5);
   T0 = v1;
  }
  L20_set_format_directive_interpreter(CODE_CHAR(68), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC41latin_capital_letter_b_format_directive_expander,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  L19_set_format_directive_expander(CODE_CHAR(66), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC42__lambda540,ECL_NIL,Cblock,5);
   T0 = v1;
  }
  L20_set_format_directive_interpreter(CODE_CHAR(66), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC43latin_capital_letter_o_format_directive_expander,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  L19_set_format_directive_expander(CODE_CHAR(79), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC44__lambda580,ECL_NIL,Cblock,5);
   T0 = v1;
  }
  L20_set_format_directive_interpreter(CODE_CHAR(79), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC45latin_capital_letter_x_format_directive_expander,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  L19_set_format_directive_expander(CODE_CHAR(88), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC46__lambda620,ECL_NIL,Cblock,5);
   T0 = v1;
  }
  L20_set_format_directive_interpreter(CODE_CHAR(88), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC47latin_capital_letter_r_format_directive_expander,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  L19_set_format_directive_expander(CODE_CHAR(82), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC48__lambda696,ECL_NIL,Cblock,5);
   T0 = v1;
  }
  L20_set_format_directive_interpreter(CODE_CHAR(82), T0);
 }
  si_Xmake_constant(VV[101], VVtemp[6]);
  si_Xmake_constant(VV[102], VVtemp[7]);
  si_Xmake_constant(VV[103], VVtemp[8]);
  si_Xmake_constant(VV[104], VVtemp[9]);
  si_Xmake_constant(VV[105], VVtemp[10]);
  si_Xmake_constant(VV[106], VVtemp[11]);
  (void)0; /* No entry created for FORMAT-PRINT-SMALL-CARDINAL */
  ecl_cmp_defun(VV[318]);                         /*  FORMAT-PRINT-CARDINAL */
  (void)0; /* No entry created for FORMAT-PRINT-CARDINAL-AUX */
  ecl_cmp_defun(VV[319]);                         /*  FORMAT-PRINT-ORDINAL */
  ecl_cmp_defun(VV[320]);                         /*  FORMAT-PRINT-OLD-ROMAN */
  ecl_cmp_defun(VV[321]);                         /*  FORMAT-PRINT-ROMAN */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC55latin_capital_letter_p_format_directive_expander,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  L19_set_format_directive_expander(CODE_CHAR(80), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC56__lambda772,ECL_NIL,Cblock,5);
   T0 = v1;
  }
  L20_set_format_directive_interpreter(CODE_CHAR(80), T0);
 }
  (void)0; /* No entry created for DECIMAL-STRING */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC58latin_capital_letter_f_format_directive_expander,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  L19_set_format_directive_expander(CODE_CHAR(70), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC59__lambda824,ECL_NIL,Cblock,5);
   T0 = v1;
  }
  L20_set_format_directive_interpreter(CODE_CHAR(70), T0);
 }
  ecl_cmp_defun(VV[322]);                         /*  FORMAT-FIXED    */
  (void)0; /* No entry created for FORMAT-FIXED-AUX */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC62latin_capital_letter_e_format_directive_expander,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  L19_set_format_directive_expander(CODE_CHAR(69), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC63__lambda936,ECL_NIL,Cblock,5);
   T0 = v1;
  }
  L20_set_format_directive_interpreter(CODE_CHAR(69), T0);
 }
  ecl_cmp_defun(VV[323]);                         /*  FORMAT-EXPONENTIAL */
  (void)0; /* No entry created for FORMAT-EXPONENT-MARKER */
  (void)0; /* No entry created for FORMAT-EXP-AUX */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC67latin_capital_letter_g_format_directive_expander,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  L19_set_format_directive_expander(CODE_CHAR(71), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC68__lambda1067,ECL_NIL,Cblock,5);
   T0 = v1;
  }
  L20_set_format_directive_interpreter(CODE_CHAR(71), T0);
 }
  ecl_cmp_defun(VV[324]);                         /*  FORMAT-GENERAL  */
  (void)0; /* No entry created for FORMAT-GENERAL-AUX */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC71dollar_sign_format_directive_expander,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  L19_set_format_directive_expander(CODE_CHAR(36), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC72__lambda1157,ECL_NIL,Cblock,5);
   T0 = v1;
  }
  L20_set_format_directive_interpreter(CODE_CHAR(36), T0);
 }
  ecl_cmp_defun(VV[325]);                         /*  FORMAT-DOLLARS  */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC74percent_sign_format_directive_expander,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  L19_set_format_directive_expander(CODE_CHAR(37), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC75__lambda1212,ECL_NIL,Cblock,5);
   T0 = v1;
  }
  L20_set_format_directive_interpreter(CODE_CHAR(37), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC76ampersand_format_directive_expander,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  L19_set_format_directive_expander(CODE_CHAR(38), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC77__lambda1242,ECL_NIL,Cblock,5);
   T0 = v1;
  }
  L20_set_format_directive_interpreter(CODE_CHAR(38), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC78vertical_line_format_directive_expander,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  L19_set_format_directive_expander(CODE_CHAR(124), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC79__lambda1272,ECL_NIL,Cblock,5);
   T0 = v1;
  }
  L20_set_format_directive_interpreter(CODE_CHAR(124), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC80tilde_format_directive_expander,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  L19_set_format_directive_expander(CODE_CHAR(126), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC81__lambda1302,ECL_NIL,Cblock,5);
   T0 = v1;
  }
  L20_set_format_directive_interpreter(CODE_CHAR(126), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC82_newline_format_directive_expander_,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  L19_set_format_directive_expander(CODE_CHAR(10), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC83__lambda1324,ECL_NIL,Cblock,5);
   T0 = v1;
  }
  L20_set_format_directive_interpreter(CODE_CHAR(10), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC84_return_format_directive_expander_,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  L19_set_format_directive_expander(CODE_CHAR(13), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC85__lambda1335,ECL_NIL,Cblock,5);
   T0 = v1;
  }
  L20_set_format_directive_interpreter(CODE_CHAR(13), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC86latin_capital_letter_t_format_directive_expander,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  L19_set_format_directive_expander(CODE_CHAR(84), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC87__lambda1392,ECL_NIL,Cblock,5);
   T0 = v1;
  }
  L20_set_format_directive_interpreter(CODE_CHAR(84), T0);
 }
  (void)0; /* No entry created for OUTPUT-SPACES */
  ecl_cmp_defun(VV[326]);                         /*  FORMAT-RELATIVE-TAB */
  ecl_cmp_defun(VV[328]);                         /*  FORMAT-ABSOLUTE-TAB */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC91low_line_format_directive_expander,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  L19_set_format_directive_expander(CODE_CHAR(95), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC92__lambda1446,ECL_NIL,Cblock,5);
   T0 = v1;
  }
  L20_set_format_directive_interpreter(CODE_CHAR(95), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC93latin_capital_letter_i_format_directive_expander,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  L19_set_format_directive_expander(CODE_CHAR(73), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC94__lambda1465,ECL_NIL,Cblock,5);
   T0 = v1;
  }
  L20_set_format_directive_interpreter(CODE_CHAR(73), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC95asterisk_format_directive_expander,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  L19_set_format_directive_expander(CODE_CHAR(42), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC96__lambda1506,ECL_NIL,Cblock,5);
   T0 = v1;
  }
  L20_set_format_directive_interpreter(CODE_CHAR(42), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC97question_mark_format_directive_expander,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  L19_set_format_directive_expander(CODE_CHAR(63), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC99__lambda1556,ECL_NIL,Cblock,5);
   T0 = v1;
  }
  L20_set_format_directive_interpreter(CODE_CHAR(63), T0);
 }
  ecl_cmp_defun(VV[330]);                         /*  NSTRING-CAPITALIZE-FIRST */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC101left_parenthesis_format_directive_expander,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  L19_set_format_directive_expander(CODE_CHAR(40), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC102__lambda1577,ECL_NIL,Cblock,5);
   T0 = v1;
  }
  L20_set_format_directive_interpreter(CODE_CHAR(40), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC103right_parenthesis_format_directive_expander,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  L19_set_format_directive_expander(CODE_CHAR(41), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC104__lambda1590,ECL_NIL,Cblock,5);
   T0 = v1;
  }
  L20_set_format_directive_interpreter(CODE_CHAR(41), T0);
 }
  (void)0; /* No entry created for PARSE-CONDITIONAL-DIRECTIVE */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC106left_square_bracket_format_directive_expander,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  L19_set_format_directive_expander(CODE_CHAR(91), T0);
 }
  (void)0; /* No entry created for EXPAND-MAYBE-CONDITIONAL */
  (void)0; /* No entry created for EXPAND-TRUE-FALSE-CONDITIONAL */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC111__lambda1636,ECL_NIL,Cblock,5);
   T0 = v1;
  }
  L20_set_format_directive_interpreter(CODE_CHAR(91), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC112semicolon_format_directive_expander,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  L19_set_format_directive_expander(CODE_CHAR(59), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC113__lambda1666,ECL_NIL,Cblock,5);
   T0 = v1;
  }
  L20_set_format_directive_interpreter(CODE_CHAR(59), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC114__lambda1669,ECL_NIL,Cblock,5);
   T0 = v1;
  }
  L20_set_format_directive_interpreter(CODE_CHAR(93), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC115right_square_bracket_format_directive_expander,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  L19_set_format_directive_expander(CODE_CHAR(93), T0);
 }
  si_Xmake_special(VV[226]);
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC116circumflex_accent_format_directive_expander,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  L19_set_format_directive_expander(CODE_CHAR(94), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC117__lambda1702,ECL_NIL,Cblock,5);
   T0 = v1;
  }
  L20_set_format_directive_interpreter(CODE_CHAR(94), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC122left_curly_bracket_format_directive_expander,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  L19_set_format_directive_expander(CODE_CHAR(123), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC127__lambda1746,ECL_NIL,Cblock,5);
   T0 = v1;
  }
  L20_set_format_directive_interpreter(CODE_CHAR(123), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC128right_curly_bracket_format_directive_expander,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  L19_set_format_directive_expander(CODE_CHAR(125), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC129__lambda1777,ECL_NIL,Cblock,5);
   T0 = v1;
  }
  L20_set_format_directive_interpreter(CODE_CHAR(125), T0);
 }
 {
  cl_object T0, T1;
  cl_object volatile env0 = ECL_NIL;
  si_Xmake_special(VV[250]);
  {
   cl_object v1;
   {
    cl_object v2;
    v2 = ecl_make_cfun((cl_objectfn_fixed)LC130__lambda1783,ECL_NIL,Cblock,1);
    v1 = v2;
   }
   {
    cl_object v2;
    cl_object v3;
    v2 = ECL_NIL;
    v3 = VVtemp[12];
    {
     cl_object v4;
     cl_object v5;
     v4 = ecl_list1(ECL_NIL);
     v5 = v4;
L449:;
     v2 = _ecl_car(v3);
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
      T0 = v6;
     }
     T1 = ecl_function_dispatch(cl_env_copy,v1)(1, v2);
     v5 = ecl_list1(T1);
     (ECL_CONS_CDR(T0)=v5,T0);
     if (!(ecl_endp(v3))) { goto L463; }
     goto L450;
L463:;
     goto L449;
L450:;
     cl_set(VV[250],ecl_cdr(v4));
     goto L442;
    }
   }
  }
L442:;
 }
  (void)0; /* No entry created for CHECK-OUTPUT-LAYOUT-MODE */
  ecl_cmp_defun(VV[331]);                         /*  ILLEGAL-INSIDE-JUSTIFICATION-P */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC134less_than_sign_format_directive_expander,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  L19_set_format_directive_expander(CODE_CHAR(60), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC136__lambda1812,ECL_NIL,Cblock,5);
   T0 = v1;
  }
  L20_set_format_directive_interpreter(CODE_CHAR(60), T0);
 }
  (void)0; /* No entry created for PARSE-FORMAT-JUSTIFICATION */
  (void)0; /* No entry created for EXPAND-FORMAT-JUSTIFICATION */
  (void)0; /* No entry created for INTERPRET-FORMAT-JUSTIFICATION */
  ecl_cmp_defun(VV[332]);                         /*  FORMAT-JUSTIFICATION */
  (void)0; /* No entry created for PARSE-FORMAT-LOGICAL-BLOCK */
  (void)0; /* No entry created for ADD-FILL-STYLE-NEWLINES */
  (void)0; /* No entry created for ADD-FILL-STYLE-NEWLINES-AUX */
  ecl_cmp_defun(VV[333]);                         /*  EXPAND-FORMAT-LOGICAL-BLOCK */
  (void)0; /* No entry created for INTERPRET-FORMAT-LOGICAL-BLOCK */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC153greater_than_sign_format_directive_expander,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  L19_set_format_directive_expander(CODE_CHAR(62), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC154solidus_format_directive_expander,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  L19_set_format_directive_expander(CODE_CHAR(47), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC155__lambda2067,ECL_NIL,Cblock,5);
   T0 = v1;
  }
  L20_set_format_directive_interpreter(CODE_CHAR(47), T0);
 }
  (void)0; /* No entry created for EXTRACT-USER-FUNCTION-NAME */
}
