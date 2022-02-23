/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:LSP;IOLIB.LSP                                     */
#include <ecl/ecl-cmp.h>
#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/lsp/iolib.eclh"
/*      local function WITH-OPEN-STREAM                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC1with_open_stream(cl_object v1, cl_object v2)
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
   cl_object v6var;
   cl_object v7stream;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[50])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v8;
    v8 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4 = v8;
   }
   v5 = v4;
   if (!(v5==ECL_NIL)) { goto L10; }
   ecl_function_dispatch(cl_env_copy,VV[50])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L10:;
   {
    cl_object v8;
    v8 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v6var = v8;
   }
   if (!(v5==ECL_NIL)) { goto L16; }
   ecl_function_dispatch(cl_env_copy,VV[50])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L16:;
   {
    cl_object v8;
    v8 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v7stream = v8;
   }
   if (Null(v5)) { goto L21; }
   ecl_function_dispatch(cl_env_copy,VV[51])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L21:;
   {
    cl_object v9;                                 /*  DS              */
    cl_object v10;                                /*  B               */
    value0 = ecl_function_dispatch(cl_env_copy,VV[52])(1, v3) /*  FIND-DECLARATIONS */;
    {
     const int v11 = cl_env_copy->nvalues;
     v9 = value0;
     cl_object v12;
     v12 = (v11<=1)? ECL_NIL : cl_env_copy->values[1];
     v10 = v12;
    }
    T0 = cl_list(2, v6var, v7stream);
    T1 = ecl_list1(T0);
    T2 = CONS(ECL_SYM("PROGN",673),v10);
    T3 = cl_list(2, ECL_SYM("CLOSE",230), v6var);
    T4 = cl_list(3, ECL_SYM("UNWIND-PROTECT",890), T2, T3);
    T5 = ecl_list1(T4);
    T6 = ecl_append(v9,T5);
    value0 = cl_listX(3, ECL_SYM("LET",479), T1, T6);
    return value0;
   }
  }
 }
}
/*      local function WITH-INPUT-FROM-STRING                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC2with_input_from_string(cl_object v1, cl_object v2)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7;
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
   cl_object v6var;
   cl_object v7string;
   cl_object v8;
   cl_object v9index;
   cl_object v10;
   cl_object v11start;
   cl_object v12;
   cl_object v13end;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[50])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v14;
    v14 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4 = v14;
   }
   v5 = v4;
   if (!(v5==ECL_NIL)) { goto L10; }
   ecl_function_dispatch(cl_env_copy,VV[50])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L10:;
   {
    cl_object v14;
    v14 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v6var = v14;
   }
   if (!(v5==ECL_NIL)) { goto L16; }
   ecl_function_dispatch(cl_env_copy,VV[50])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L16:;
   {
    cl_object v14;
    v14 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v7string = v14;
   }
   v8 = ecl_function_dispatch(cl_env_copy,VV[54])(2, v5, VV[1]) /*  SEARCH-KEYWORD */;
   if (!((v8)==(ECL_SYM("MISSING-KEYWORD",2015)))) { goto L23; }
   v9index = ECL_NIL;
   goto L22;
L23:;
   v9index = v8;
L22:;
   v10 = ecl_function_dispatch(cl_env_copy,VV[54])(2, v5, ECL_SYM("START",1337)) /*  SEARCH-KEYWORD */;
   if (!((v10)==(ECL_SYM("MISSING-KEYWORD",2015)))) { goto L27; }
   v11start = ecl_make_fixnum(0);
   goto L26;
L27:;
   v11start = v10;
L26:;
   v12 = ecl_function_dispatch(cl_env_copy,VV[54])(2, v5, ECL_SYM("END",1247)) /*  SEARCH-KEYWORD */;
   if (!((v12)==(ECL_SYM("MISSING-KEYWORD",2015)))) { goto L31; }
   v13end = ECL_NIL;
   goto L30;
L31:;
   v13end = v12;
L30:;
   ecl_function_dispatch(cl_env_copy,VV[55])(2, v5, VV[2]) /*  CHECK-KEYWORD */;
   {
    cl_object v15;                                /*  DS              */
    cl_object v16;                                /*  B               */
    value0 = ecl_function_dispatch(cl_env_copy,VV[52])(1, v3) /*  FIND-DECLARATIONS */;
    {
     const int v17 = cl_env_copy->nvalues;
     v15 = value0;
     cl_object v18;
     v18 = (v17<=1)? ECL_NIL : cl_env_copy->values[1];
     v16 = v18;
    }
    T0 = cl_list(4, ECL_SYM("MAKE-STRING-INPUT-STREAM",537), v7string, v11start, v13end);
    T1 = cl_list(2, v6var, T0);
    T2 = ecl_list1(T1);
    if (Null(v9index)) { goto L36; }
    T4 = CONS(ECL_SYM("PROGN",673),v16);
    T5 = cl_list(2, ECL_SYM("FILE-POSITION",359), v6var);
    T6 = cl_list(3, ECL_SYM("SETF",752), v9index, T5);
    T3 = cl_list(3, ECL_SYM("MULTIPLE-VALUE-PROG1",577), T4, T6);
    goto L35;
L36:;
    T3 = CONS(ECL_SYM("PROGN",673),v16);
L35:;
    T4 = cl_list(2, ECL_SYM("CLOSE",230), v6var);
    T5 = cl_list(3, ECL_SYM("UNWIND-PROTECT",890), T3, T4);
    T6 = ecl_list1(T5);
    T7 = ecl_append(v15,T6);
    value0 = cl_listX(3, ECL_SYM("LET",479), T2, T7);
    return value0;
   }
  }
 }
}
/*      local function WITH-OUTPUT-TO-STRING                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC3with_output_to_string(cl_object v1, cl_object v2)
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
   cl_object v6var;
   cl_object v7string;
   cl_object v8;
   cl_object v9element_type;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[50])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v10;
    v10 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4 = v10;
   }
   v5 = v4;
   if (!(v5==ECL_NIL)) { goto L10; }
   ecl_function_dispatch(cl_env_copy,VV[50])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L10:;
   {
    cl_object v10;
    v10 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v6var = v10;
   }
   if (Null(v5)) { goto L16; }
   {
    cl_object v10;
    v10 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v7string = v10;
    goto L15;
   }
L16:;
   v7string = ECL_NIL;
L15:;
   v8 = ecl_function_dispatch(cl_env_copy,VV[54])(2, v5, ECL_SYM("ELEMENT-TYPE",1246)) /*  SEARCH-KEYWORD */;
   if (!((v8)==(ECL_SYM("MISSING-KEYWORD",2015)))) { goto L23; }
   v9element_type = ECL_NIL;
   goto L22;
L23:;
   v9element_type = v8;
L22:;
   ecl_function_dispatch(cl_env_copy,VV[55])(2, v5, VV[4]) /*  CHECK-KEYWORD */;
   {
    cl_object v11;                                /*  DECLS           */
    cl_object v12;                                /*  BODY            */
    value0 = ecl_function_dispatch(cl_env_copy,VV[52])(1, v3) /*  FIND-DECLARATIONS */;
    {
     const int v13 = cl_env_copy->nvalues;
     v11 = value0;
     cl_object v14;
     v14 = (v13<=1)? ECL_NIL : cl_env_copy->values[1];
     v12 = v14;
    }
    if (Null(v7string)) { goto L27; }
    {
     cl_object v13elt_type_var;
     v13elt_type_var = cl_gensym(1, _ecl_static_0);
     T0 = cl_list(2, ECL_SYM("MAKE-STRING-OUTPUT-STREAM-FROM-STRING",1108), v7string);
     T1 = cl_list(2, v6var, T0);
     T2 = cl_list(2, v13elt_type_var, v9element_type);
     T3 = cl_list(2, T1, T2);
     T4 = cl_list(2, ECL_SYM("IGNORE",430), v13elt_type_var);
     T5 = cl_list(2, ECL_SYM("DECLARE",276), T4);
     T6 = CONS(ECL_SYM("PROGN",673),v12);
     T7 = cl_list(2, ECL_SYM("CLOSE",230), v6var);
     T8 = cl_list(3, ECL_SYM("UNWIND-PROTECT",890), T6, T7);
     T9 = ecl_list1(T8);
     T10 = ecl_append(v11,T9);
     value0 = cl_listX(4, ECL_SYM("LET",479), T3, T5, T10);
     return value0;
    }
L27:;
    T0 = CONS(ECL_SYM("MAKE-STRING-OUTPUT-STREAM",538),v5);
    T1 = cl_list(2, v6var, T0);
    T2 = ecl_list1(T1);
    T3 = cl_list(2, ECL_SYM("GET-OUTPUT-STREAM-STRING",410), v6var);
    T4 = ecl_list1(T3);
    T5 = ecl_append(v12,T4);
    T6 = CONS(ECL_SYM("PROGN",673),T5);
    T7 = cl_list(2, ECL_SYM("CLOSE",230), v6var);
    T8 = cl_list(3, ECL_SYM("UNWIND-PROTECT",890), T6, T7);
    T9 = ecl_list1(T8);
    T10 = ecl_append(v11,T9);
    value0 = cl_listX(3, ECL_SYM("LET",479), T2, T10);
    return value0;
   }
  }
 }
}
/*      function definition for READ-FROM-STRING                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_read_from_string(cl_narg narg, cl_object v1string, ...)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2eof_error_p;
  cl_object v3eof_value;
  cl_object v4start;
  cl_object v5end;
  cl_object v6preserve_whitespace;
  ecl_va_list args; ecl_va_start(args,v1string,narg,1);
  {
   int i = 1;
   if (i >= narg) {
    v2eof_error_p = ECL_T;
   } else {
    i++;
    v2eof_error_p = ecl_va_arg(args);
   }
   if (i >= narg) {
    v3eof_value = ECL_NIL;
   } else {
    i++;
    v3eof_value = ecl_va_arg(args);
   }
  }
  {
   cl_object keyvars[6];
   cl_parse_key(args,3,cl_read_from_stringkeys,keyvars,NULL,FALSE);
   ecl_va_end(args);
   if (Null(keyvars[3])) {
    v4start = ecl_make_fixnum(0);
   } else {
    v4start = keyvars[0];
   }
   if (Null(keyvars[4])) {
    v5end = ecl_make_fixnum(ecl_length(v1string));
   } else {
    v5end = keyvars[1];
   }
   v6preserve_whitespace = keyvars[2];
  }
  {
   cl_object v7stream;
   v7stream = cl_make_string_input_stream(3, v1string, v4start, v5end);
   if (Null(v6preserve_whitespace)) { goto L6; }
   T0 = cl_read_preserving_whitespace(3, v7stream, v2eof_error_p, v3eof_value);
   T1 = cl_file_position(1, v7stream);
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = T1;
   cl_env_copy->values[0] = T0;
   return cl_env_copy->values[0];
L6:;
   T0 = cl_read(3, v7stream, v2eof_error_p, v3eof_value);
   T1 = cl_file_position(1, v7stream);
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = T1;
   cl_env_copy->values[0] = T0;
   return cl_env_copy->values[0];
  }
 }
}
/*      function definition for STRING-TO-OBJECT                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object si_string_to_object(cl_narg narg, cl_object v1string, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2err_value;
  cl_object v3err_value_p;
  va_list args; va_start(args,v1string);
  {
   int i = 1;
   if (i >= narg) {
    v2err_value = ECL_NIL;
    v3err_value_p = ECL_NIL;
   } else {
    i++;
    v2err_value = va_arg(args,cl_object);
    v3err_value_p = ECL_T;
   }
  }
  va_end(args);
  if (Null(v3err_value_p)) { goto L2; }
  T0 = cl_list(2, ECL_SYM("READ-FROM-STRING",697), v1string);
  value0 = si_safe_eval(3, T0, ECL_NIL, v2err_value);
  return value0;
L2:;
  T0 = cl_list(2, ECL_SYM("READ-FROM-STRING",697), v1string);
  value0 = si_safe_eval(2, T0, ECL_NIL);
  return value0;
 }
}
/*      function definition for WRITE-TO-STRING                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_write_to_string(cl_narg narg, cl_object v1object, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2rest;
  ecl_va_list args; ecl_va_start(args,v1object,narg,1);
  v2rest = cl_grab_rest_args(args);
  ecl_va_end(args);
  {
   cl_object v3stream;
   v3stream = cl_make_string_output_stream(0);
   T0 = (ECL_SYM("WRITE",919)->symbol.gfdef);
   cl_apply(5, T0, v1object, ECL_SYM("STREAM",1340), v3stream, v2rest);
   value0 = cl_get_output_stream_string(v3stream);
   return value0;
  }
 }
}
/*      function definition for PRIN1-TO-STRING                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_prin1_to_string(cl_object v1object)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2stream;
   v2stream = cl_make_string_output_stream(0);
   ecl_prin1(v1object,v2stream);
   value0 = cl_get_output_stream_string(v2stream);
   return value0;
  }
 }
}
/*      function definition for PRINC-TO-STRING                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_princ_to_string(cl_object v1object)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2stream;
   v2stream = cl_make_string_output_stream(0);
   ecl_princ(v1object,v2stream);
   value0 = cl_get_output_stream_string(v2stream);
   return value0;
  }
 }
}
/*      local function WITH-OPEN-FILE                                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC4with_open_file(cl_object v1, cl_object v2)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11;
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
   cl_object v6stream;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[50])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v7;
    v7 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4 = v7;
   }
   v5 = v4;
   if (!(v5==ECL_NIL)) { goto L10; }
   ecl_function_dispatch(cl_env_copy,VV[50])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L10:;
   {
    cl_object v7;
    v7 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v6stream = v7;
   }
   {
    cl_object v8;                                 /*  DS              */
    cl_object v9;                                 /*  B               */
    value0 = ecl_function_dispatch(cl_env_copy,VV[52])(1, v3) /*  FIND-DECLARATIONS */;
    {
     const int v10 = cl_env_copy->nvalues;
     v8 = value0;
     cl_object v11;
     v11 = (v10<=1)? ECL_NIL : cl_env_copy->values[1];
     v9 = v11;
    }
    T0 = CONS(ECL_SYM("OPEN",613),v5);
    T1 = cl_list(2, v6stream, T0);
    T2 = ecl_list1(T1);
    T3 = CONS(ECL_SYM("PROGN",673),v9);
    T4 = cl_list(2, ECL_SYM("CLOSE",230), v6stream);
    T5 = cl_list(3, ECL_SYM("WHEN",907), v6stream, T4);
    T6 = cl_list(3, ECL_SYM("MULTIPLE-VALUE-PROG1",577), T3, T5);
    T7 = cl_listX(3, ECL_SYM("CLOSE",230), v6stream, VV[6]);
    T8 = cl_list(3, ECL_SYM("WHEN",907), v6stream, T7);
    T9 = cl_list(3, ECL_SYM("UNWIND-PROTECT",890), T6, T8);
    T10 = ecl_list1(T9);
    T11 = ecl_append(v8,T10);
    value0 = cl_listX(3, ECL_SYM("LET",479), T2, T11);
    return value0;
   }
  }
 }
}
/*      function definition for Y-OR-N-P                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_y_or_n_p(cl_narg narg, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  cl_object v1string;
  cl_object v2args;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  {
   int i = 0;
   if (i >= narg) {
    v1string = ECL_NIL;
   } else {
    i++;
    v1string = ecl_va_arg(args);
   }
  }
  v2args = cl_grab_rest_args(args);
  ecl_va_end(args);
  {
   cl_object v3reply;
   v3reply = ECL_NIL;
   goto L5;
L4:;
   if (Null(v1string)) { goto L7; }
   cl_format(4, ecl_symbol_value(ECL_SYM("*QUERY-IO*",61)), VV[8], v1string, v2args);
L7:;
   v3reply = cl_read(1, ecl_symbol_value(ECL_SYM("*QUERY-IO*",61)));
   T0 = ecl_symbol_name(v3reply);
   if (Null(cl_string_equal(2, T0, VV[9]))) { goto L12; }
   value0 = ECL_T;
   cl_env_copy->nvalues = 1;
   return value0;
L12:;
   T0 = ecl_symbol_name(v3reply);
   if (Null(cl_string_equal(2, T0, VV[10]))) { goto L11; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L11:;
L5:;
   goto L4;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for YES-OR-NO-P                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_yes_or_no_p(cl_narg narg, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  cl_object v1string;
  cl_object v2args;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  {
   int i = 0;
   if (i >= narg) {
    v1string = ECL_NIL;
   } else {
    i++;
    v1string = ecl_va_arg(args);
   }
  }
  v2args = cl_grab_rest_args(args);
  ecl_va_end(args);
  {
   cl_object v3reply;
   v3reply = ECL_NIL;
   goto L5;
L4:;
   if (Null(v1string)) { goto L7; }
   cl_format(4, ecl_symbol_value(ECL_SYM("*QUERY-IO*",61)), VV[11], v1string, v2args);
L7:;
   v3reply = cl_read(1, ecl_symbol_value(ECL_SYM("*QUERY-IO*",61)));
   T0 = ecl_symbol_name(v3reply);
   if (Null(cl_string_equal(2, T0, VV[12]))) { goto L12; }
   value0 = ECL_T;
   cl_env_copy->nvalues = 1;
   return value0;
L12:;
   T0 = ecl_symbol_name(v3reply);
   if (Null(cl_string_equal(2, T0, VV[13]))) { goto L11; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L11:;
L5:;
   goto L4;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for SHARP-A-READER                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L5sharp_a_reader(cl_object v1stream, cl_object v2subchar, cl_object v3arg)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v4initial_contents;
   v4initial_contents = cl_read(4, v1stream, ECL_NIL, ECL_NIL, ECL_T);
   if (Null(ecl_symbol_value(ECL_SYM("*READ-SUPPRESS*",66)))) { goto L2; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L2:;
   if (!(v3arg==ECL_NIL)) { goto L4; }
   {
    cl_object v5;
    cl_object v6;
    cl_object v7;
    v5 = ecl_car(v4initial_contents);
    v6 = ecl_cadr(v4initial_contents);
    v7 = ecl_caddr(v4initial_contents);
    value0 = cl_make_array(5, v6, ECL_SYM("ELEMENT-TYPE",1246), v5, ECL_SYM("INITIAL-CONTENTS",1278), v7);
    return value0;
   }
L4:;
   {
    cl_fixnum v8i;
    cl_object v9d;
    cl_object v10ic;
    v8i = 0;
    v9d = ECL_NIL;
    v10ic = v4initial_contents;
    goto L14;
L13:;
    {
     cl_object v11;
     v11 = ecl_make_integer((v8i)+1);
     {
      bool v12;
      v12 = ECL_FIXNUMP(v11);
      if (ecl_unlikely(!(v12)))
         FEwrong_type_argument(ECL_SYM("FIXNUM",374),v11);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
     }
     v8i = ecl_fixnum(v11);
    }
    {
     cl_fixnum v11;
     v11 = ecl_length(v10ic);
     v9d = CONS(ecl_make_fixnum(v11),v9d);
    }
    {
     cl_fixnum v11;
     v11 = ecl_length(v10ic);
     if (!((v11)==0)) { goto L24; }
    }
    goto L23;
L24:;
    v10ic = ecl_elt(v10ic,0);
L23:;
L14:;
    if (ecl_greatereq(ecl_make_fixnum(v8i),v3arg)) { goto L26; }
    goto L13;
L26:;
    T0 = cl_nreverse(v9d);
    value0 = cl_make_array(3, T0, ECL_SYM("INITIAL-CONTENTS",1278), v4initial_contents);
    return value0;
   }
  }
 }
}
/*      function definition for SHARP-S-READER                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L6sharp_s_reader(cl_object v1stream, cl_object v2subchar, cl_object v3arg)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(v3arg)) { goto L1; }
  if (!(ecl_symbol_value(ECL_SYM("*READ-SUPPRESS*",66))==ECL_NIL)) { goto L1; }
  cl_error(2, VV[15], v3arg);
L1:;
  {
   cl_object v4l;
   v4l = cl_read(4, v1stream, ECL_T, ECL_NIL, ECL_T);
   if (Null(ecl_symbol_value(ECL_SYM("*READ-SUPPRESS*",66)))) { goto L5; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L5:;
   T0 = ecl_car(v4l);
   if ((si_get_sysprop(T0, VV[16]))!=ECL_NIL) { goto L7; }
   T0 = ecl_car(v4l);
   cl_error(2, VV[17], T0);
L7:;
   {
    cl_object v5ll;
    v5ll = ecl_cdr(v4l);
    goto L12;
L11:;
    {
     cl_object v6;
     v6 = v5ll;
     if (ecl_unlikely(ECL_ATOM(v6))) FEtype_error_cons(v6);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     T0 = v6;
    }
    T1 = ecl_car(v5ll);
    T2 = cl_string(T1);
    T3 = cl_intern(2, T2, ECL_SYM("KEYWORD",451));
    (ECL_CONS_CAR(T0)=T3,T0);
    v5ll = ecl_cddr(v5ll);
L12:;
    if (ecl_endp(v5ll)) { goto L20; }
    goto L11;
L20:;
    {
     cl_object v6cs;
     T0 = ecl_car(v4l);
     v6cs = si_get_sysprop(T0, VV[18]);
     goto L25;
L24:;
     T0 = ecl_car(v6cs);
     if (!(ECL_SYMBOLP(T0))) { goto L27; }
     T0 = ecl_car(v6cs);
     T1 = ecl_cdr(v4l);
     value0 = cl_apply(2, T0, T1);
     return value0;
L27:;
     v6cs = ecl_cdr(v6cs);
L25:;
     if (ecl_endp(v6cs)) { goto L31; }
     goto L24;
L31:;
     T0 = ecl_car(v4l);
     value0 = cl_error(2, VV[19], T0);
     return value0;
    }
   }
  }
 }
}
/*      function definition for DRIBBLE                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_dribble(cl_narg narg, ...)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 cl_object CLV0, CLV1, CLV2, CLV3, CLV4;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg>1)) FEwrong_num_arguments_anonym();
 {
  cl_object v1pathname;
  cl_object v2psp;
  va_list args; va_start(args,narg);
  {
   int i = 0;
   if (i >= narg) {
    v1pathname = VV[22];
    v2psp = ECL_NIL;
   } else {
    i++;
    v1pathname = va_arg(args,cl_object);
    v2psp = ECL_T;
   }
  }
  va_end(args);
  if (Null(ecl_symbol_value(VV[21]))) { goto L3; }
  ecl_function_dispatch(cl_env_copy,ecl_symbol_value(VV[21]))(1, v2psp);
  goto L2;
L3:;
  if (!(v2psp==ECL_NIL)) { goto L5; }
  cl_error(1, VV[23]);
  goto L2;
L5:;
  {
   cl_object v3closure;
   cl_object env1 = env0;
   T0 = cl_namestring(v1pathname);
   env1 = ECL_NIL;
   CLV0 = env1 = CONS(T0,env1);                   /*  NAMESTRING      */
   T0 = cl_open(7, v1pathname, ECL_SYM("DIRECTION",1240), ECL_SYM("OUTPUT",1309), ECL_SYM("IF-EXISTS",1270), ECL_SYM("SUPERSEDE",1341), ECL_SYM("IF-DOES-NOT-EXIST",1268), ECL_SYM("CREATE",1235));
   CLV1 = env1 = CONS(T0,env1);                   /*  STREAM          */
   T0 = cl_make_echo_stream(ecl_symbol_value(ECL_SYM("*TERMINAL-IO*",70)), ECL_CONS_CAR(CLV1));
   T1 = cl_make_broadcast_stream(2, ecl_symbol_value(ECL_SYM("*TERMINAL-IO*",70)), ECL_CONS_CAR(CLV1));
   T2 = cl_make_two_way_stream(T0, T1);
   CLV2 = env1 = CONS(T2,env1);                   /*  DRIBBLE-STREAM  */
   CLV3 = env1 = CONS(ecl_symbol_value(ECL_SYM("*STANDARD-INPUT*",68)),env1); /*  STANDARD-INPUT */
   CLV4 = env1 = CONS(ecl_symbol_value(ECL_SYM("*STANDARD-OUTPUT*",69)),env1); /*  STANDARD-OUTPUT */
   {
    cl_object v4;
    v4 = ecl_make_cclosure_va((cl_objectfn)LC7__lambda72,env1,Cblock,1);
    v3closure = v4;
   }
   {
    cl_object v5;                                 /*  SEC             */
    cl_object v6;                                 /*  MIN             */
    cl_object v7;                                 /*  HOUR            */
    cl_object v8;                                 /*  DAY             */
    cl_object v9;                                 /*  MONTH           */
    cl_object v10;                                /*  YEAR            */
    value0 = cl_get_decoded_time();
    {
     v5 = value0;
     v6 = cl_env_copy->values[1];
     v7 = cl_env_copy->values[2];
     v8 = cl_env_copy->values[3];
     v9 = cl_env_copy->values[4];
     v10 = cl_env_copy->values[5];
    }
    cl_format(9, ECL_CONS_CAR(CLV2), VV[27], ECL_CONS_CAR(CLV0), v10, v9, v8, v7, v6, v5);
    cl_set(ECL_SYM("*STANDARD-INPUT*",68),ECL_CONS_CAR(CLV2));
    cl_set(ECL_SYM("*STANDARD-OUTPUT*",69),ECL_CONS_CAR(CLV2));
    cl_set(VV[21],v3closure);
   }
  }
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 0;
  return value0;
 }
}
/*      closure LAMBDA72                                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC7__lambda72(cl_narg narg, cl_object v1pathname_p, ...)
{
 cl_object CLV0, CLV1, CLV2, CLV3, CLV4;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV4 = env0;                                     /*  STANDARD-OUTPUT */
 CLV3 = _ecl_cdr(CLV4);
 CLV2 = _ecl_cdr(CLV3);
 CLV1 = _ecl_cdr(CLV2);
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=1)) FEwrong_num_arguments_anonym();
 {
TTL:
  if (Null(v1pathname_p)) { goto L1; }
  cl_error(2, VV[24], ECL_CONS_CAR(CLV0));
L1:;
  if (!((ECL_CONS_CAR(CLV2))==(ecl_symbol_value(ECL_SYM("*STANDARD-INPUT*",68))))) { goto L6; }
  if ((ECL_CONS_CAR(CLV2))==(ecl_symbol_value(ECL_SYM("*STANDARD-OUTPUT*",69)))) { goto L3; }
  goto L4;
L6:;
  goto L4;
L4:;
  (cl_env_copy->function=(ECL_SYM("WARN",905)->symbol.gfdef))->cfun.entry(1, VV[25]) /*  WARN */;
L3:;
  cl_format(3, ECL_CONS_CAR(CLV1), VV[26], ECL_CONS_CAR(CLV0));
  cl_close(1, ECL_CONS_CAR(CLV1));
  cl_set(ECL_SYM("*STANDARD-INPUT*",68),ECL_CONS_CAR(CLV3));
  cl_set(ECL_SYM("*STANDARD-OUTPUT*",69),ECL_CONS_CAR(CLV4));
  cl_set(VV[21],ECL_NIL);
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
 }
}
/*      local function WITH-STANDARD-IO-SYNTAX                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC8with_standard_io_syntax(cl_object v1, cl_object v2)
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
   v3 = ecl_cdr(v1);
   T0 = cl_listX(4, ECL_SYM("PROGV",675), VV[29], VV[30], v3);
   value0 = cl_list(3, ECL_SYM("LET",479), VV[28], T0);
   return value0;
  }
 }
}
/*      local function WITH-ECL-IO-SYNTAX                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC9with_ecl_io_syntax(cl_object v1, cl_object v2)
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
   v3 = ecl_cdr(v1);
   T0 = cl_listX(4, ECL_SYM("PROGV",675), VV[33], VV[34], v3);
   value0 = cl_list(3, ECL_SYM("LET",479), VV[32], T0);
   return value0;
  }
 }
}
/*      local function PRINT-UNREADABLE-OBJECT                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC10print_unreadable_object(cl_object v1, cl_object v2)
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
   cl_object v6object;
   cl_object v7stream;
   cl_object v8;
   cl_object v9type;
   cl_object v10;
   cl_object v11identity;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[50])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v12;
    v12 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4 = v12;
   }
   v5 = v4;
   if (!(v5==ECL_NIL)) { goto L10; }
   ecl_function_dispatch(cl_env_copy,VV[50])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L10:;
   {
    cl_object v12;
    v12 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v6object = v12;
   }
   if (!(v5==ECL_NIL)) { goto L16; }
   ecl_function_dispatch(cl_env_copy,VV[50])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L16:;
   {
    cl_object v12;
    v12 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v7stream = v12;
   }
   v8 = ecl_function_dispatch(cl_env_copy,VV[54])(2, v5, ECL_SYM("TYPE",1346)) /*  SEARCH-KEYWORD */;
   if (!((v8)==(ECL_SYM("MISSING-KEYWORD",2015)))) { goto L23; }
   v9type = ECL_NIL;
   goto L22;
L23:;
   v9type = v8;
L22:;
   v10 = ecl_function_dispatch(cl_env_copy,VV[54])(2, v5, VV[36]) /*  SEARCH-KEYWORD */;
   if (!((v10)==(ECL_SYM("MISSING-KEYWORD",2015)))) { goto L27; }
   v11identity = ECL_NIL;
   goto L26;
L27:;
   v11identity = v10;
L26:;
   ecl_function_dispatch(cl_env_copy,VV[55])(2, v5, VV[37]) /*  CHECK-KEYWORD */;
   if (Null(v3)) { goto L30; }
   T0 = cl_listX(3, VV[38], ECL_NIL, v3);
   T1 = ecl_list1(T0);
   T2 = cl_list(6, ECL_SYM("PRINT-UNREADABLE-OBJECT-FUNCTION",1892), v6object, v7stream, v9type, v11identity, VV[39]);
   value0 = cl_list(3, ECL_SYM("FLET",375), T1, T2);
   return value0;
L30:;
   value0 = cl_list(6, ECL_SYM("PRINT-UNREADABLE-OBJECT-FUNCTION",1892), v6object, v7stream, v9type, v11identity, ECL_NIL);
   return value0;
  }
 }
}
/*      closure ALL-ENCODINGS                                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC11all_encodings(cl_narg narg, ...)
{
 cl_object T0, T1, T2;
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV1 = env0;                                     /*  ALL-ENCODINGS   */
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=0)) FEwrong_num_arguments_anonym();
 {
TTL:
  value0 = ECL_CONS_CAR(CLV1);
  if ((value0)!=ECL_NIL) { goto L2; }
  ECL_CONS_CAR(CLV1) = ECL_CONS_CAR(CLV0);
  {
   cl_object v1;
   v1 = cl_directory(1, VV[41]);
   goto L10;
L9:;
   {
    cl_object v2i;
    v2i = ecl_car(v1);
    T0 = cl_pathname_name(1, v2i);
    T1 = cl_string_upcase(1, T0);
    T2 = cl_intern(2, T1, VV[42]);
    ECL_CONS_CAR(CLV1) = CONS(T2,ECL_CONS_CAR(CLV1));
   }
   v1 = ecl_cdr(v1);
L10:;
   if (Null(v1)) { goto L18; }
   goto L9;
L18:;
  }
  value0 = ECL_CONS_CAR(CLV1);
  cl_env_copy->nvalues = 1;
  return value0;
L2:;
  cl_env_copy->nvalues = 1;
  return value0;
 }
 }
}
/*      function definition for LOAD-ENCODING                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object si_load_encoding(cl_object volatile v1name)
{
 cl_object T0;
 cl_object volatile env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   volatile cl_object v2filename;
   T0 = ecl_symbol_name(v1name);
   v2filename = cl_make_pathname(4, ECL_SYM("NAME",1300), T0, ECL_SYM("DEFAULTS",1238), VV[43]);
   if (Null(cl_probe_file(v2filename))) { goto L2; }
   cl_load(3, v2filename, ECL_SYM("VERBOSE",1353), ECL_NIL);
   value0 = v1name;
   cl_env_copy->nvalues = 1;
   return value0;
L2:;
   v2filename = cl_make_pathname(4, ECL_SYM("TYPE",1346), VV[44], ECL_SYM("DEFAULTS",1238), v2filename);
   if (Null(cl_probe_file(v2filename))) { goto L5; }
   {
    volatile cl_object v3in;
    v3in = cl_open(5, v2filename, ECL_SYM("ELEMENT-TYPE",1246), VV[45], ECL_SYM("EXTERNAL-FORMAT",1258), ECL_SYM("BIG-ENDIAN",1756));
    {
     volatile bool unwinding = FALSE;
     cl_index v4=ECL_STACK_INDEX(cl_env_copy),v5;
     ecl_frame_ptr next_fr;
     ecl_frs_push(cl_env_copy,ECL_PROTECT_TAG);
     if (__ecl_frs_push_result) {
       unwinding = TRUE; next_fr=cl_env_copy->nlj_fr;
     } else {
     {
      struct ecl_stack_frame _ecl_inner_frame_aux;
      volatile cl_object _ecl_inner_frame = ecl_stack_frame_open(cl_env_copy,(cl_object)&_ecl_inner_frame_aux,0);
      {
       cl_object v6;
       v6 = _ecl_inner_frame;
       {
        cl_object v7l;
        cl_object v8s;
        v7l = cl_read_byte(1, v3in);
        T0 = si_make_pure_array(ECL_SYM("BYTE16",1359), v7l, ECL_NIL, ECL_NIL, ECL_NIL, ecl_make_fixnum(0));
        v8s = si_fill_array_with_elt(T0, ecl_make_fixnum(0), ecl_make_fixnum(0), ECL_NIL);
        cl_read_sequence(2, v8s, v3in);
        cl_env_copy->values[0] = v8s;
        cl_env_copy->nvalues = 1;
       }
       ecl_stack_frame_push_values(v6);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       if (Null(v3in)) { goto L17; }
       cl_close(1, v3in);
L17:;cl_env_copy->values[0]=ecl_stack_frame_pop_values(v6);
      }
      ecl_stack_frame_close(_ecl_inner_frame);
     }
     }
     ecl_frs_pop(cl_env_copy);
     v5=ecl_stack_push_values(cl_env_copy);
     if (Null(v3in)) { goto L19; }
     cl_close(3, v3in, ECL_SYM("ABORT",1217), ECL_T);
L19:;
     ecl_stack_pop_values(cl_env_copy,v5);
     if (unwinding) ecl_unwind(cl_env_copy,next_fr);
     ECL_STACK_SET_INDEX(cl_env_copy,v4);
     return cl_env_copy->values[0];
    }
   }
L5:;
   value0 = cl_error(3, VV[46], v2filename, v1name);
   return value0;
  }
 }
}
/*      function definition for MAKE-ENCODING                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object si_make_encoding(cl_object v1mapping)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ECL_SYMBOLP(v1mapping))) { goto L1; }
  {
   cl_object v2var;
   T0 = ecl_symbol_name(v1mapping);
   T1 = cl_find_package(VV[47]);
   v2var = cl_intern(2, T0, T1);
   if (ecl_boundp(cl_env_copy,v2var)) { goto L4; }
   T0 = si_load_encoding(v1mapping);
   T1 = si_make_encoding(T0);
   cl_set(v2var, T1);
L4:;
   value0 = cl_symbol_value(v2var);
   return value0;
  }
L1:;
  if (!(ECL_CONSP(v1mapping))) { goto L6; }
  {
   cl_object v3output;
   v3output = cl_make_hash_table(4, ECL_SYM("SIZE",1335), ecl_make_fixnum(512), ECL_SYM("TEST",1343), ECL_SYM("EQ",335));
   {
    cl_object v4;
    v4 = v1mapping;
    goto L12;
L11:;
    {
     cl_object v5record;
     v5record = ecl_car(v4);
     {
      cl_object v6byte;
      cl_object v7unicode;
      cl_object v8unicode_char;
      v6byte = ecl_car(v5record);
      v7unicode = ecl_cdr(v5record);
      v8unicode_char = cl_code_char(v7unicode);
      if (!(ecl_greater(v6byte,ecl_make_fixnum(255)))) { goto L20; }
      T0 = cl_ash(v6byte, ecl_make_fixnum(-8));
      si_hash_set(T0, v3output, ECL_T);
L20:;
      si_hash_set(v6byte, v3output, v8unicode_char);
      si_hash_set(v8unicode_char, v3output, v6byte);
     }
    }
    v4 = ecl_cdr(v4);
L12:;
    if (Null(v4)) { goto L25; }
    goto L11;
L25:;
    value0 = v3output;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
L6:;
  if (!(ECL_ARRAYP(v1mapping))) { goto L27; }
  {
   cl_fixnum v5l;
   cl_object v6output;
   cl_object v7i;
   v5l = ecl_fixnum(cl_array_total_size(v1mapping));
   T0 = ecl_times(_ecl_static_1,ecl_make_fixnum(v5l));
   T1 = ecl_floor1(T0);
   v6output = cl_make_hash_table(4, ECL_SYM("SIZE",1335), T1, ECL_SYM("TEST",1343), ECL_SYM("EQ",335));
   v7i = ecl_make_fixnum(0);
   goto L34;
L33:;
   {
    cl_object v8byte;
    cl_object v9unicode;
    cl_object v10unicode_char;
    {
     cl_object v11;
     v11 = v1mapping;
     T0 = v11;
     {
      cl_fixnum v12;
      {
       cl_object v13;
       v13 = v7i;
       if (ecl_unlikely((ecl_fixnum(v13))>=(v11)->vector.dim))
           FEwrong_index(ECL_NIL,v11,-1,ecl_make_fixnum(ecl_fixnum(v13)),(v11)->vector.dim);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v12 = ecl_fixnum(v13);
      }
      v8byte = ecl_aref_unsafe(T0,v12);
     }
    }
    {
     cl_object v11;
     v11 = v1mapping;
     T0 = v11;
     {
      cl_fixnum v12;
      {
       cl_object v13;
       v13 = ecl_one_plus(v7i);
       if (ecl_unlikely((ecl_fixnum(v13))>=(v11)->vector.dim))
           FEwrong_index(ECL_NIL,v11,-1,ecl_make_fixnum(ecl_fixnum(v13)),(v11)->vector.dim);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v12 = ecl_fixnum(v13);
      }
      v9unicode = ecl_aref_unsafe(T0,v12);
     }
    }
    v10unicode_char = cl_code_char(v9unicode);
    if (!(ecl_greater(v8byte,ecl_make_fixnum(255)))) { goto L50; }
    T0 = cl_ash(v8byte, ecl_make_fixnum(-8));
    si_hash_set(T0, v6output, ECL_T);
L50:;
    si_hash_set(v8byte, v6output, v10unicode_char);
    si_hash_set(v10unicode_char, v6output, v8byte);
   }
   v7i = ecl_plus(ecl_make_fixnum(2),v7i);
L34:;
   if (ecl_greatereq(v7i,ecl_make_fixnum(v5l))) { goto L55; }
   goto L33;
L55:;
   value0 = v6output;
   cl_env_copy->nvalues = 1;
   return value0;
  }
L27:;
  value0 = cl_error(2, VV[48], v1mapping);
  return value0;
 }
}

#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/lsp/iolib.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclnBdwTba7_Gh96lq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:LSP;IOLIB.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclnBdwTba7_Gh96lq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  ecl_cmp_defmacro(VV[49]);                       /*  WITH-OPEN-STREAM */
  ecl_cmp_defmacro(VV[53]);                       /*  WITH-INPUT-FROM-STRING */
  ecl_cmp_defmacro(VV[56]);                       /*  WITH-OUTPUT-TO-STRING */
  (void)0; /* No entry created for READ-FROM-STRING */
  (void)0; /* No entry created for STRING-TO-OBJECT */
  (void)0; /* No entry created for WRITE-TO-STRING */
  (void)0; /* No entry created for PRIN1-TO-STRING */
  (void)0; /* No entry created for PRINC-TO-STRING */
  ecl_cmp_defmacro(VV[60]);                       /*  WITH-OPEN-FILE  */
  (void)0; /* No entry created for Y-OR-N-P */
  (void)0; /* No entry created for YES-OR-NO-P */
  ecl_cmp_defun(VV[61]);                          /*  SHARP-A-READER  */
  cl_set_dispatch_macro_character(3, CODE_CHAR(35), CODE_CHAR(97), VV[14]);
  cl_set_dispatch_macro_character(3, CODE_CHAR(35), CODE_CHAR(65), VV[14]);
  ecl_cmp_defun(VV[62]);                          /*  SHARP-S-READER  */
  cl_set_dispatch_macro_character(3, CODE_CHAR(35), CODE_CHAR(115), VV[20]);
  cl_set_dispatch_macro_character(3, CODE_CHAR(35), CODE_CHAR(83), VV[20]);
  si_Xmake_special(VV[21]);
  cl_set(VV[21],ECL_NIL);
  (void)0; /* No entry created for DRIBBLE */
  ecl_cmp_defmacro(VV[63]);                       /*  WITH-STANDARD-IO-SYNTAX */
  ecl_cmp_defmacro(VV[64]);                       /*  WITH-ECL-IO-SYNTAX */
  ecl_cmp_defmacro(VV[65]);                       /*  PRINT-UNREADABLE-OBJECT */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  cl_object volatile CLV0, CLV1;
  {
   cl_object env1 = env0;
   env1 = ECL_NIL;
   CLV0 = env1 = CONS(VVtemp[1],env1);            /*  BASIC-ENCODINGS */
   CLV1 = env1 = CONS(ECL_NIL,env1);              /*  ALL-ENCODINGS   */
   {
    cl_object v1;
    v1 = ecl_make_cclosure_va((cl_objectfn)LC11all_encodings,env1,Cblock,0);
    T0 = v1;
   }
   si_fset(2, ECL_SYM("ALL-ENCODINGS",1753), T0);
  }
 }
  (void)0; /* No entry created for LOAD-ENCODING */
  (void)0; /* No entry created for MAKE-ENCODING */
}