/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:LSP;TRACE.LSP                                     */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/build/lsp/trace.eclh"
/*      local function TRACE                                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC1trace(cl_object v1, cl_object v2)
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
   T0 = cl_list(2, ECL_SYM("QUOTE",681), v3);
   value0 = cl_list(2, VV[2], T0);
   return value0;
  }
 }
}
/*      function definition for TRACE*                                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L2trace_(cl_object v1r)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(v1r==ECL_NIL)) { goto L1; }
  {
   cl_object v2;
   v2 = (ECL_SYM("FIRST",373)->symbol.gfdef);
   {
    cl_object v3;
    cl_object v4;
    cl_object v5;
    v3 = ecl_symbol_value(ECL_SYM("*TRACE-LIST*",1917));
    v4 = ECL_NIL;
    {
     cl_object v6;
     v6 = v3;
     if (ecl_unlikely(!ECL_LISTP(v6))) FEtype_error_list(v6);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v5 = v6;
    }
    {
     cl_object v6;
     cl_object v7;
     v6 = ecl_list1(ECL_NIL);
     v7 = v6;
L11:;
     if (!(ecl_endp(v5))) { goto L13; }
     goto L12;
L13:;
     v4 = _ecl_car(v5);
     {
      cl_object v8;
      v8 = _ecl_cdr(v5);
      if (ecl_unlikely(!ECL_LISTP(v8))) FEtype_error_list(v8);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v5 = v8;
     }
     {
      cl_object v8;
      v8 = v7;
      if (ecl_unlikely(ECL_ATOM(v8))) FEtype_error_cons(v8);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      T0 = v8;
     }
     T1 = ecl_function_dispatch(cl_env_copy,v2)(1, v4);
     v7 = ecl_list1(T1);
     (ECL_CONS_CDR(T0)=v7,T0);
     goto L11;
L12:;
     value0 = ecl_cdr(v6);
     cl_env_copy->nvalues = 1;
     return value0;
    }
   }
  }
L1:;
  {
   cl_object v8;
   v8 = (VV[32]->symbol.gfdef);
   {
    cl_object v9;
    cl_object v10;
    v9 = ECL_NIL;
    {
     cl_object v11;
     v11 = v1r;
     if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v10 = v11;
    }
L34:;
    if (!(ecl_endp(v10))) { goto L36; }
    goto L35;
L36:;
    v9 = _ecl_car(v10);
    {
     cl_object v11;
     v11 = _ecl_cdr(v10);
     if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v10 = v11;
    }
    ecl_function_dispatch(cl_env_copy,v8)(1, v9);
    goto L34;
L35:;
    value0 = v1r;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      local function UNTRACE                                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC3untrace(cl_object v1, cl_object v2)
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
   T0 = cl_list(2, ECL_SYM("QUOTE",681), v3);
   value0 = cl_list(2, VV[4], T0);
   return value0;
  }
 }
}
/*      function definition for UNTRACE*                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L4untrace_(cl_object v1r)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2;
   v2 = (VV[45]->symbol.gfdef);
   {
    cl_object v3;
    value0 = v1r;
    if ((value0)!=ECL_NIL) { goto L4; }
    v3 = L2trace_(ECL_NIL);
    goto L2;
L4:;
    v3 = value0;
    goto L2;
L2:;
    {
     cl_object v4;
     cl_object v5;
     v4 = ECL_NIL;
     {
      cl_object v6;
      v6 = v3;
      if (ecl_unlikely(!ECL_LISTP(v6))) FEtype_error_list(v6);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v5 = v6;
     }
L10:;
     if (!(ecl_endp(v5))) { goto L12; }
     goto L11;
L12:;
     v4 = _ecl_car(v5);
     {
      cl_object v6;
      v6 = _ecl_cdr(v5);
      if (ecl_unlikely(!ECL_LISTP(v6))) FEtype_error_list(v6);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v5 = v6;
     }
     ecl_function_dispatch(cl_env_copy,v2)(1, v4);
     goto L10;
L11:;
     value0 = v3;
     cl_env_copy->nvalues = 1;
     return value0;
    }
   }
  }
 }
}
/*      function definition for TRACE-ONE                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L5trace_one(cl_object v1spec)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2break;
   cl_object v3exitbreak;
   cl_object v4entrycond;
   cl_object v5exitcond;
   cl_object v6entry;
   cl_object v7exit;
   cl_object v8step;
   cl_object v9barfp;
   cl_object v10fname;
   cl_object v11oldf;
   v2break = ECL_NIL;
   v3exitbreak = ECL_NIL;
   v4entrycond = ECL_T;
   v5exitcond = ECL_T;
   v6entry = ECL_NIL;
   v7exit = ECL_NIL;
   v8step = ECL_NIL;
   v9barfp = ECL_T;
   v10fname = ECL_NIL;
   v11oldf = ECL_NIL;
   if (Null(si_valid_function_name_p(v1spec))) { goto L12; }
   v10fname = v1spec;
   goto L11;
L12:;
   if ((si_proper_list_p(v1spec))!=ECL_NIL) { goto L15; }
   cl_error(2, VV[7], v1spec);
   goto L11;
L15:;
   T0 = ecl_car(v1spec);
   if (Null(si_valid_function_name_p(T0))) { goto L17; }
   v10fname = ecl_car(v1spec);
   {
    cl_object v12specs;
    v12specs = ecl_cdr(v1spec);
    goto L24;
L23:;
    {
     cl_object v13;
     v13 = ecl_car(v12specs);
     if (!(ecl_eql(v13,VV[8]))) { goto L28; }
     v9barfp = v12specs;
     v12specs = ecl_cdr(v12specs);
     v2break = ecl_car(v12specs);
     goto L26;
L28:;
     if (!(ecl_eql(v13,VV[9]))) { goto L35; }
     v9barfp = v12specs;
     v12specs = ecl_cdr(v12specs);
     v3exitbreak = ecl_car(v12specs);
     goto L26;
L35:;
     if (!(ecl_eql(v13,VV[10]))) { goto L42; }
     v8step = ECL_T;
     goto L26;
L42:;
     if (!(ecl_eql(v13,VV[11]))) { goto L45; }
     v9barfp = v12specs;
     v12specs = ecl_cdr(v12specs);
     v4entrycond = ecl_car(v12specs);
     v5exitcond = v4entrycond;
     goto L26;
L45:;
     if (!(ecl_eql(v13,VV[12]))) { goto L53; }
     v9barfp = v12specs;
     v12specs = ecl_cdr(v12specs);
     v4entrycond = ecl_car(v12specs);
     goto L26;
L53:;
     if (!(ecl_eql(v13,VV[13]))) { goto L60; }
     v9barfp = v12specs;
     v12specs = ecl_cdr(v12specs);
     v5exitcond = ecl_car(v12specs);
     goto L26;
L60:;
     if (!(ecl_eql(v13,ECL_SYM("PRINT",1317)))) { goto L67; }
     v9barfp = v12specs;
     v12specs = ecl_cdr(v12specs);
     v6entry = ecl_car(v12specs);
     goto L26;
L67:;
     if (!(ecl_eql(v13,VV[14]))) { goto L74; }
     v9barfp = v12specs;
     v12specs = ecl_cdr(v12specs);
     v7exit = ecl_car(v12specs);
     goto L26;
L74:;
     T0 = ecl_car(v12specs);
     cl_error(2, VV[15], T0);
    }
L26:;
    if ((v9barfp)!=ECL_NIL) { goto L81; }
    cl_error(1, VV[16]);
L81:;
    v12specs = ecl_cdr(v12specs);
L24:;
    if (v12specs==ECL_NIL) { goto L85; }
    goto L23;
L85:;
    goto L11;
   }
L17:;
   T0 = ecl_car(v1spec);
   if (Null(si_proper_list_p(T0))) { goto L87; }
   {
    cl_object v13results;
    v13results = ECL_NIL;
    {
     cl_object v14;
     v14 = ecl_car(v1spec);
     goto L94;
L93:;
     {
      cl_object v15fname;
      v15fname = ecl_car(v14);
      T0 = ecl_cdr(v1spec);
      T1 = CONS(v15fname,T0);
      T2 = L5trace_one(T1);
      v13results = CONS(T2,v13results);
     }
     v14 = ecl_cdr(v14);
L94:;
     if (Null(v14)) { goto L102; }
     goto L93;
L102:;
    }
    value0 = cl_nreverse(v13results);
    return value0;
   }
L87:;
   cl_error(2, VV[7], v1spec);
L11:;
   T0 = cl_fboundp(v10fname);
   if (!(T0==ECL_NIL)) { goto L104; }
   (cl_env_copy->function=(ECL_SYM("WARN",905)->symbol.gfdef))->cfun.entry(2, VV[17], v10fname) /*  WARN */;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L104:;
   if (!(ECL_SYMBOLP(v10fname))) { goto L107; }
   if (Null(cl_special_operator_p(v10fname))) { goto L109; }
   (cl_env_copy->function=(ECL_SYM("WARN",905)->symbol.gfdef))->cfun.entry(2, VV[18], v10fname) /*  WARN */;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L109:;
   if (Null(cl_macro_function(1, v10fname))) { goto L107; }
   (cl_env_copy->function=(ECL_SYM("WARN",905)->symbol.gfdef))->cfun.entry(2, VV[19], v10fname) /*  WARN */;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L107:;
   {
    cl_object v12record;
    v12record = L7trace_record(v10fname);
    if (Null(v12record)) { goto L114; }
    if (Null(L13traced_and_redefined_p(v12record))) { goto L117; }
    L11delete_from_trace_list(v10fname);
    goto L114;
L117:;
    (cl_env_copy->function=(ECL_SYM("WARN",905)->symbol.gfdef))->cfun.entry(2, VV[20], v10fname) /*  WARN */;
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
   }
L114:;
   v11oldf = cl_fdefinition(v10fname);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), v11oldf);
   T1 = cl_list(3, ECL_SYM("APPLY",91), T0, VV[23]);
   T2 = cl_list(2, ECL_SYM("MULTIPLE-VALUE-LIST",576), T1);
   T3 = cl_list(3, ECL_SYM("SETQ",753), ECL_SYM("VALUES",897), T2);
   if (Null(v4entrycond)) { goto L124; }
   if (!((ECL_T)==(v4entrycond))) { goto L126; }
   T5 = cl_list(2, ECL_SYM("QUOTE",681), v10fname);
   T6 = cl_listX(5, VV[25], VV[26], T5, VV[23], v6entry);
   T4 = ecl_list1(T6);
   goto L123;
L126:;
   T5 = cl_list(2, ECL_SYM("QUOTE",681), v10fname);
   T6 = cl_listX(5, VV[25], VV[26], T5, VV[23], v6entry);
   T7 = cl_list(3, ECL_SYM("WHEN",907), v4entrycond, T6);
   T4 = ecl_list1(T7);
   goto L123;
L124:;
   T4 = ECL_NIL;
L123:;
   if (Null(v2break)) { goto L129; }
   T6 = cl_list(2, ECL_SYM("QUOTE",681), v10fname);
   T7 = cl_list(3, ECL_SYM("BREAK",160), VV[28], T6);
   T8 = cl_list(3, ECL_SYM("LET",479), VV[27], T7);
   T9 = cl_list(3, ECL_SYM("WHEN",907), v2break, T8);
   T5 = ecl_list1(T9);
   goto L128;
L129:;
   T5 = ECL_NIL;
L128:;
   T6 = cl_list(2, ECL_SYM("QUOTE",681), v11oldf);
   T7 = cl_list(3, ECL_SYM("APPLY",91), T6, VV[23]);
   T8 = cl_list(2, ECL_SYM("MULTIPLE-VALUE-LIST",576), T7);
   T9 = cl_list(3, ECL_SYM("LET",479), VV[27], T8);
   T10 = cl_list(3, ECL_SYM("SETQ",753), ECL_SYM("VALUES",897), T9);
   if (Null(v5exitcond)) { goto L132; }
   if (!((ECL_T)==(v5exitcond))) { goto L134; }
   T12 = cl_list(2, ECL_SYM("QUOTE",681), v10fname);
   T13 = cl_listX(5, VV[25], VV[29], T12, ECL_SYM("VALUES",897), v7exit);
   T11 = ecl_list1(T13);
   goto L131;
L134:;
   T12 = cl_list(2, ECL_SYM("QUOTE",681), v10fname);
   T13 = cl_listX(5, VV[25], VV[29], T12, ECL_SYM("VALUES",897), v7exit);
   T14 = cl_list(3, ECL_SYM("WHEN",907), v5exitcond, T13);
   T11 = ecl_list1(T14);
   goto L131;
L132:;
   T11 = ECL_NIL;
L131:;
   if (Null(v3exitbreak)) { goto L137; }
   T13 = cl_list(2, ECL_SYM("QUOTE",681), v10fname);
   T14 = cl_list(3, ECL_SYM("BREAK",160), VV[30], T13);
   T15 = cl_list(3, ECL_SYM("LET",479), VV[27], T14);
   T16 = cl_list(3, ECL_SYM("WHEN",907), v3exitbreak, T15);
   T12 = ecl_list1(T16);
   goto L136;
L137:;
   T12 = ECL_NIL;
L136:;
   T13 = ecl_append(T11,T12);
   T14 = CONS(T10,T13);
   T15 = cl_append(3, T4, T5, T14);
   T16 = cl_listX(3, ECL_SYM("LET",479), VV[24], T15);
   T17 = cl_list(4, ECL_SYM("IF",948), VV[6], T3, T16);
   T18 = cl_list(4, ECL_SYM("LET*",480), VV[22], T17, VV[31]);
   T19 = cl_list(4, ECL_SYM("DEFUN",291), v10fname, VV[21], T18);
   cl_eval(T19);
   L12add_to_trace_list(v10fname, v11oldf);
   value0 = ecl_list1(v10fname);
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for TRACE-PRINT                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L6trace_print(volatile cl_narg narg, cl_object volatile v1direction, cl_object volatile v2fname, cl_object volatile v3vals, ...)
{
 cl_object T0, T1;
 cl_object volatile env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<3)) FEwrong_num_arguments_anonym();
 {
  cl_object volatile v4extras;
  ecl_va_list args; ecl_va_start(args,v3vals,narg,3);
  v4extras = cl_grab_rest_args(args);
  ecl_va_end(args);
  {
   volatile cl_object v5;
   T0 = ecl_one_minus(ecl_symbol_value(VV[0]));
   T1 = ecl_times(T0,ecl_make_fixnum(2));
   v5 = ((ecl_float_nan_p(ecl_symbol_value(VV[1])) || ecl_lowereq(T1,ecl_symbol_value(VV[1])))?T1:ecl_symbol_value(VV[1]));
   ecl_bds_bind(cl_env_copy,ECL_SYM("*PRINT-CIRCLE*",49),ECL_T); /*  *PRINT-CIRCLE* */
   T1 = cl_make_string_output_stream(0);
   ecl_bds_bind(cl_env_copy,ECL_SYM("*TRACE-OUTPUT*",71),T1); /*  *TRACE-OUTPUT* */
   {
    volatile bool unwinding = FALSE;
    cl_index v6=ECL_STACK_INDEX(cl_env_copy),v7;
    ecl_frame_ptr next_fr;
    ecl_frs_push(cl_env_copy,ECL_PROTECT_TAG);
    if (__ecl_frs_push_result) {
      unwinding = TRUE; next_fr=cl_env_copy->nlj_fr;
    } else {
    cl_fresh_line(1, ecl_symbol_value(ECL_SYM("*TRACE-OUTPUT*",71)));
    if (!((v1direction)==(VV[33]))) { goto L6; }
    {
     cl_object v9;                                /*  BARS            */
     cl_object v10;                               /*  REM             */
     value0 = ecl_floor2(v5,ecl_make_fixnum(4));
     {
      v9 = value0;
      v10 = cl_env_copy->values[1];
     }
     {
      cl_object v11i;
      v11i = ecl_make_fixnum(0);
      goto L13;
L12:;
      if (!(ecl_lower(v11i,ecl_make_fixnum(10)))) { goto L17; }
      T1 = VV[34];
      goto L16;
L17:;
      T1 = VV[35];
L16:;
      ecl_princ(T1,ecl_symbol_value(ECL_SYM("*TRACE-OUTPUT*",71)));
      v11i = ecl_one_plus(v11i);
L13:;
      if (!(ecl_lower(v11i,v9))) { goto L21; }
      goto L12;
L21:;
     }
     if (!(ecl_plusp(v10))) { goto L8; }
     cl_format(4, ecl_symbol_value(ECL_SYM("*TRACE-OUTPUT*",71)), VV[36], v10, VV[37]);
    }
L8:;
    cl_format(5, ecl_symbol_value(ECL_SYM("*TRACE-OUTPUT*",71)), VV[38], ecl_symbol_value(VV[0]), v2fname, v3vals);
    goto L5;
L6:;
    if (!((v1direction)==(ECL_SYM("EXIT",1811)))) { goto L5; }
    {
     cl_object v9;                                /*  BARS            */
     cl_object v10;                               /*  REM             */
     value0 = ecl_floor2(v5,ecl_make_fixnum(4));
     {
      v9 = value0;
      v10 = cl_env_copy->values[1];
     }
     {
      cl_object v11i;
      v11i = ecl_make_fixnum(0);
      goto L30;
L29:;
      ecl_princ(VV[34],ecl_symbol_value(ECL_SYM("*TRACE-OUTPUT*",71)));
      v11i = ecl_one_plus(v11i);
L30:;
      if (!(ecl_lower(v11i,v9))) { goto L35; }
      goto L29;
L35:;
     }
     if (!(ecl_plusp(v10))) { goto L25; }
     cl_format(4, ecl_symbol_value(ECL_SYM("*TRACE-OUTPUT*",71)), VV[36], v10, VV[37]);
    }
L25:;
    cl_format(5, ecl_symbol_value(ECL_SYM("*TRACE-OUTPUT*",71)), VV[39], ecl_symbol_value(VV[0]), v2fname, v3vals);
L5:;
    if (Null(v4extras)) { goto L38; }
    {
     cl_object volatile v9;                       /*  BARS            */
     cl_object volatile v10;                      /*  REM             */
     value0 = ecl_floor2(v5,ecl_make_fixnum(4));
     {
      v9 = value0;
      v10 = cl_env_copy->values[1];
     }
     {
      cl_object v11i;
      v11i = ecl_make_fixnum(0);
      goto L45;
L44:;
      ecl_princ(VV[34],ecl_symbol_value(ECL_SYM("*TRACE-OUTPUT*",71)));
      v11i = ecl_one_plus(v11i);
L45:;
      if (!(ecl_lower(v11i,v9))) { goto L50; }
      goto L44;
L50:;
     }
     if (!(ecl_plusp(v10))) { goto L40; }
     cl_format(4, ecl_symbol_value(ECL_SYM("*TRACE-OUTPUT*",71)), VV[36], v10, VV[37]);
    }
L40:;
    cl_format(3, ecl_symbol_value(ECL_SYM("*TRACE-OUTPUT*",71)), VV[40], v4extras);
L38:;
    cl_env_copy->values[0] = cl_get_output_stream_string(ecl_symbol_value(ECL_SYM("*TRACE-OUTPUT*",71)));
    }
    ecl_frs_pop(cl_env_copy);
    v7=ecl_stack_push_values(cl_env_copy);
    cl_close(1, ecl_symbol_value(ECL_SYM("*TRACE-OUTPUT*",71)));
    ecl_stack_pop_values(cl_env_copy,v7);
    if (unwinding) ecl_unwind(cl_env_copy,next_fr);
    T0 = cl_env_copy->values[0];
    ECL_STACK_SET_INDEX(cl_env_copy,v6);
    ecl_bds_unwind1(cl_env_copy);
   }
   value0 = ecl_princ(T0,ecl_symbol_value(ECL_SYM("*TRACE-OUTPUT*",71)));
   cl_env_copy->nvalues = 1;
   ecl_bds_unwind1(cl_env_copy);
   return value0;
  }
 }
}
/*      function definition for TRACE-RECORD                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L7trace_record(cl_object v1fname)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2;
   cl_object v3;
   v2 = ecl_symbol_value(ECL_SYM("*TRACE-LIST*",1917));
   v3 = ecl_function_dispatch(cl_env_copy,VV[72])(2, v2, ecl_make_fixnum(0)) /*  MAKE-SEQ-ITERATOR */;
L3:;
   if ((v3)!=ECL_NIL) { goto L5; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L5:;
   {
    cl_object v4;
    v4 = ecl_function_dispatch(cl_env_copy,VV[73])(2, v2, v3) /*  SEQ-ITERATOR-REF */;
    T0 = ecl_car(v4);
    if (!(ecl_equal(v1fname,T0))) { goto L7; }
    value0 = v4;
    cl_env_copy->nvalues = 1;
    return value0;
   }
L7:;
   v3 = ecl_function_dispatch(cl_env_copy,VV[74])(2, v2, v3) /*  SEQ-ITERATOR-NEXT */;
   goto L3;
  }
 }
}
/*      function definition for TRACE-RECORD-NAME                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L8trace_record_name(cl_object v1record)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ecl_car(v1record);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for TRACE-RECORD-DEFINITION               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L9trace_record_definition(cl_object v1record)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ecl_cadr(v1record);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for TRACE-RECORD-OLD-DEFINITION           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L10trace_record_old_definition(cl_object v1record)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ecl_caddr(v1record);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for TRACED-OLD-DEFINITION                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object si_traced_old_definition(cl_object v1fname)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2record;
   v2record = L7trace_record(v1fname);
   if (Null(v2record)) { goto L2; }
   if ((L13traced_and_redefined_p(v2record))!=ECL_NIL) { goto L4; }
   value0 = L10trace_record_old_definition(v2record);
   return value0;
L4:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L2:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for DELETE-FROM-TRACE-LIST                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L11delete_from_trace_list(cl_object v1fname)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_symbol_value(ECL_SYM("*TRACE-LIST*",1917));
  T1 = (ECL_SYM("FIRST",373)->symbol.gfdef);
  T2 = (ECL_SYM("EQUAL",337)->symbol.gfdef);
  cl_set(ECL_SYM("*TRACE-LIST*",1917),cl_delete(6, v1fname, T0, ECL_SYM("KEY",1288), T1, ECL_SYM("TEST",1343), T2));
  value0 = ecl_symbol_value(ECL_SYM("*TRACE-LIST*",1917));
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for ADD-TO-TRACE-LIST                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L12add_to_trace_list(cl_object v1fname, cl_object v2old_definition)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_fdefinition(v1fname);
  T1 = cl_list(3, v1fname, T0, v2old_definition);
  cl_set(ECL_SYM("*TRACE-LIST*",1917),CONS(T1,ecl_symbol_value(ECL_SYM("*TRACE-LIST*",1917))));
  value0 = ecl_symbol_value(ECL_SYM("*TRACE-LIST*",1917));
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for TRACED-AND-REDEFINED-P                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L13traced_and_redefined_p(cl_object v1record)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(v1record)) { goto L2; }
  T0 = L9trace_record_definition(v1record);
  T1 = L8trace_record_name(v1record);
  T2 = cl_fdefinition(T1);
  {
   bool v2;
   v2 = (T0)==(T2);
   value0 = (v2)?ECL_NIL:ECL_T;
   cl_env_copy->nvalues = 1;
   return value0;
  }
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for UNTRACE-ONE                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L14untrace_one(cl_object v1fname)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2record;
   v2record = L7trace_record(v1fname);
   if (!(v2record==ECL_NIL)) { goto L3; }
   (cl_env_copy->function=(ECL_SYM("WARN",905)->symbol.gfdef))->cfun.entry(2, VV[43], v1fname) /*  WARN */;
   goto L2;
L3:;
   if (Null(L13traced_and_redefined_p(v2record))) { goto L5; }
   (cl_env_copy->function=(ECL_SYM("WARN",905)->symbol.gfdef))->cfun.entry(2, VV[44], v1fname) /*  WARN */;
   goto L2;
L5:;
   T0 = L10trace_record_old_definition(v2record);
   si_fset(2, v1fname, T0);
L2:;
   L11delete_from_trace_list(v1fname);
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 0;
   return value0;
  }
 }
}
/*      local function STEP                                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC15step(cl_object v1, cl_object v2)
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
   cl_object v4form;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[79])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v5;
    v5 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4form = v5;
   }
   if (Null(v3)) { goto L8; }
   ecl_function_dispatch(cl_env_copy,VV[80])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L8:;
   T0 = cl_list(2, ECL_SYM("QUOTE",681), v4form);
   value0 = cl_list(2, VV[50], T0);
   return value0;
  }
 }
}
/*      function definition for STEP*                                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L16step_(cl_object volatile v1form)
{
 cl_object T0;
 cl_object volatile env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  ecl_bds_bind(cl_env_copy,ECL_SYM("*STEP-ACTION*",1034),ECL_T); /*  *STEP-ACTION* */
  ecl_bds_bind(cl_env_copy,ECL_SYM("*STEP-LEVEL*",1033),ecl_make_fixnum(0)); /*  *STEP-LEVEL* */
  T0 = cl_make_hash_table(4, ECL_SYM("SIZE",1335), ecl_make_fixnum(128), ECL_SYM("TEST",1343), ECL_SYM("EQ",335));
  ecl_bds_bind(cl_env_copy,VV[48],T0);            /*  *STEP-FUNCTIONS* */
  value0 = ecl_symbol_value(VV[47]);
  {
   ecl_frs_push(cl_env_copy,value0);
   if (__ecl_frs_push_result) {                   /*  BEGIN CATCH 1   */
    value0 = cl_env_copy->values[0];
   } else {
    value0 = si_eval_with_env(3, v1form, ECL_NIL, ECL_T);
   }
   ecl_frs_pop(cl_env_copy);                      /*  END CATCH 1     */
  }
  ecl_bds_unwind1(cl_env_copy);
  ecl_bds_unwind1(cl_env_copy);
  ecl_bds_unwind1(cl_env_copy);
  return value0;
 }
}
/*      function definition for STEPPABLE-FUNCTION                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L17steppable_function(cl_object v1form)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  ecl_bds_bind(cl_env_copy,ECL_SYM("*STEP-ACTION*",1034),ECL_NIL); /*  *STEP-ACTION* */
  value0 = ecl_gethash_safe(v1form,ecl_symbol_value(VV[48]),ECL_NIL);
  if ((value0)!=ECL_NIL) { goto L2; }
  {
   cl_object v3;                                  /*  F               */
   cl_object v4;                                  /*  ENV             */
   cl_object v5;                                  /*  NAME            */
   value0 = cl_function_lambda_expression(v1form);
   {
    v3 = value0;
    v4 = cl_env_copy->values[1];
    v5 = cl_env_copy->values[2];
   }
   if ((L7trace_record(v5))!=ECL_NIL) { goto L5; }
   if (Null(v3)) { goto L5; }
   T0 = ecl_symbol_value(VV[48]);
   T1 = cl_list(2, ECL_SYM("FUNCTION",398), v3);
   T2 = si_eval_with_env(3, T1, v4, ECL_T);
   value0 = si_hash_set(v1form, T0, T2);
   ecl_bds_unwind1(cl_env_copy);
   return value0;
L5:;
   value0 = v1form;
   cl_env_copy->nvalues = 1;
   ecl_bds_unwind1(cl_env_copy);
   return value0;
  }
L2:;
  cl_env_copy->nvalues = 1;
  ecl_bds_unwind1(cl_env_copy);
  return value0;
 }
}
/*      function definition for STEPPER                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L19stepper(cl_object volatile v1form)
{
 cl_object T0, T1, T2;
 cl_object volatile env0 = ECL_NIL;
 cl_object volatile CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  env0 = ECL_NIL;
  CLV0 = env0 = CONS(v1form,env0);                /*  FORM            */
  if (ECL_SYMBOLP(ECL_CONS_CAR(CLV0))) { goto L3; }
  if (Null(cl_functionp(ECL_CONS_CAR(CLV0)))) { goto L1; }
  goto L2;
L3:;
L2:;
  T0 = si_coerce_to_function(ECL_CONS_CAR(CLV0));
  value0 = L17steppable_function(T0);
  return value0;
L1:;
  {
   volatile cl_object v2prompt;
   volatile cl_object env1 = env0;
   ecl_bds_bind(cl_env_copy,VV[46],ECL_CONS_CAR(CLV0)); /*  *STEP-FORM* */
   ecl_bds_bind(cl_env_copy,ECL_SYM("*STEP-ACTION*",1034),ECL_NIL); /*  *STEP-ACTION* */
   T0 = ecl_times(ecl_symbol_value(VV[53]),ecl_make_fixnum(2));
   T1 = ((ecl_float_nan_p(ecl_make_fixnum(20)) || ecl_lowereq(T0,ecl_make_fixnum(20)))?T0:ecl_make_fixnum(20));
   CLV1 = env1 = CONS(T1,env1);                   /*  INDENT          */
   v2prompt = ECL_NIL;
   {
    cl_object volatile v3;
    v3 = ecl_make_cclosure_va((cl_objectfn)LC18__lambda76,env1,Cblock,0);
    v2prompt = v3;
   }
   value0 = ecl_symbol_value(VV[47]);
   {
    ecl_frs_push(cl_env_copy,value0);
    if (__ecl_frs_push_result) {                  /*  BEGIN CATCH 10  */
     value0 = cl_env_copy->values[0];
    } else {
     T0 = ecl_symbol_value(VV[49]);
     T1 = cl_adjoin(2, ecl_symbol_value(VV[57]), ecl_symbol_value(VV[58]));
     T2 = cl_adjoin(2, T0, T1);
     value0 = ecl_function_dispatch(cl_env_copy,VV[84])(8, VV[55], ECL_T, VV[56], T2, VV[59], ECL_SYM("STEPPER",1164), VV[60], v2prompt) /*  TPL */;
    }
    ecl_frs_pop(cl_env_copy);                     /*  END CATCH 10    */
   }
   if (Null(value0)) { goto L8; }
   cl_env_copy->values[0] = ECL_T;
   cl_env_copy->nvalues = 1;
   cl_throw(ecl_symbol_value(VV[47]));
L8:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   ecl_bds_unwind1(cl_env_copy);
   ecl_bds_unwind1(cl_env_copy);
   return value0;
  }
 }
}
/*      closure LAMBDA76                                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC18__lambda76(cl_narg narg, ...)
{
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV1 = env0;                                     /*  INDENT          */
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=0)) FEwrong_num_arguments_anonym();
 {
TTL:
  cl_format(3, ecl_symbol_value(ECL_SYM("*DEBUG-IO*",32)), VV[54], ECL_CONS_CAR(CLV1));
  cl_write(9, ECL_CONS_CAR(CLV0), ECL_SYM("STREAM",1340), ecl_symbol_value(ECL_SYM("*DEBUG-IO*",32)), ECL_SYM("PRETTY",1316), ECL_NIL, ECL_SYM("LEVEL",1290), ecl_make_fixnum(2), ECL_SYM("LENGTH",1289), ecl_make_fixnum(2));
  ecl_princ_char((ecl_character)(32),ecl_symbol_value(ECL_SYM("*DEBUG-IO*",32)));
  value0 = CODE_CHAR(ecl_princ_char((ecl_character)(45),ecl_symbol_value(ECL_SYM("*DEBUG-IO*",32))));
  cl_env_copy->nvalues = 1;
  return value0;
 }
 }
}
/*      function definition for STEP-NEXT                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L20step_next()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  cl_env_copy->values[0] = ECL_NIL;
  cl_env_copy->nvalues = 1;
  cl_throw(ecl_symbol_value(VV[47]));
 }
}
/*      function definition for STEP-SKIP                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L21step_skip(cl_narg narg, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg>1)) FEwrong_num_arguments_anonym();
 {
  cl_object v1when;
  va_list args; va_start(args,narg);
  {
   int i = 0;
   if (i >= narg) {
    v1when = ecl_make_fixnum(0);
   } else {
    i++;
    v1when = va_arg(args,cl_object);
   }
  }
  va_end(args);
  cl_set(ECL_SYM("*STEP-ACTION*",1034),ecl_make_fixnum(0));
  cl_env_copy->values[0] = ECL_NIL;
  cl_env_copy->nvalues = 1;
  cl_throw(ecl_symbol_value(VV[47]));
 }
}
/*      function definition for STEP-PRINT                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L22step_print()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  cl_write(9, ecl_symbol_value(VV[46]), ECL_SYM("STREAM",1340), ecl_symbol_value(ECL_SYM("*DEBUG-IO*",32)), ECL_SYM("PRETTY",1316), ECL_T, ECL_SYM("LEVEL",1290), ECL_NIL, ECL_SYM("LENGTH",1289), ECL_NIL);
  ecl_terpri(ECL_NIL);
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 0;
  return value0;
 }
}
/*      function definition for STEP-QUIT                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L23step_quit()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  cl_env_copy->values[0] = ECL_T;
  cl_env_copy->nvalues = 1;
  cl_throw(ecl_symbol_value(VV[47]));
 }
}

#include "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/build/lsp/trace.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclOLmYCQZ7_MUZZTr51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:LSP;TRACE.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclOLmYCQZ7_MUZZTr51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  si_Xmake_special(VV[0]);
  cl_set(VV[0],ecl_make_fixnum(0));
  si_Xmake_special(VV[1]);
  cl_set(VV[1],ecl_make_fixnum(20));
  ecl_cmp_defmacro(VV[66]);                       /*  TRACE           */
  ecl_cmp_defun(VV[67]);                          /*  TRACE*          */
  ecl_cmp_defmacro(VV[68]);                       /*  UNTRACE         */
  ecl_cmp_defun(VV[69]);                          /*  UNTRACE*        */
  si_Xmake_special(VV[6]);
  cl_set(VV[6],ECL_NIL);
  ecl_cmp_defun(VV[70]);                          /*  TRACE-ONE       */
  ecl_cmp_defun(VV[71]);                          /*  TRACE-PRINT     */
  (void)0; /* No entry created for TRACE-RECORD */
  (void)0; /* No entry created for TRACE-RECORD-NAME */
  (void)0; /* No entry created for TRACE-RECORD-DEFINITION */
  (void)0; /* No entry created for TRACE-RECORD-OLD-DEFINITION */
  (void)0; /* No entry created for TRACED-OLD-DEFINITION */
  ecl_cmp_defun(VV[75]);                          /*  DELETE-FROM-TRACE-LIST */
  ecl_cmp_defun(VV[76]);                          /*  ADD-TO-TRACE-LIST */
  (void)0; /* No entry created for TRACED-AND-REDEFINED-P */
  ecl_cmp_defun(VV[77]);                          /*  UNTRACE-ONE     */
  si_Xmake_special(ECL_SYM("*STEP-LEVEL*",1033));
  cl_set(ECL_SYM("*STEP-LEVEL*",1033),ecl_make_fixnum(0));
  si_Xmake_special(ECL_SYM("*STEP-ACTION*",1034));
  cl_set(ECL_SYM("*STEP-ACTION*",1034),ECL_NIL);
  si_Xmake_special(VV[46]);
  cl_set(VV[46],ECL_NIL);
  si_Xmake_special(VV[47]);
  cl_set(VV[47],CONS(ECL_NIL,ECL_NIL));
  si_Xmake_special(VV[48]);
  cl_set(VV[48],ECL_NIL);
  si_Xmake_constant(VV[49], VVtemp[1]);
  ecl_cmp_defmacro(VV[78]);                       /*  STEP            */
  ecl_cmp_defun(VV[81]);                          /*  STEP*           */
  ecl_cmp_defun(VV[82]);                          /*  STEPPABLE-FUNCTION */
  ecl_cmp_defun(VV[83]);                          /*  STEPPER         */
  ecl_cmp_defun(VV[85]);                          /*  STEP-NEXT       */
  ecl_cmp_defun(VV[86]);                          /*  STEP-SKIP       */
  ecl_cmp_defun(VV[87]);                          /*  STEP-PRINT      */
  ecl_cmp_defun(VV[88]);                          /*  STEP-QUIT       */
}
