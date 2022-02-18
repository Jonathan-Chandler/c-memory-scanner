/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:LSP;DESCRIBE.LSP                                  */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/clos/describe.eclh"
/*      function definition for INSPECT-READ-LINE                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L1inspect_read_line()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v1char;
   v1char = cl_read_char(1, ecl_symbol_value(ECL_SYM("*QUERY-IO*",61)));
   goto L4;
L3:;
   v1char = cl_read_char(1, ecl_symbol_value(ECL_SYM("*QUERY-IO*",61)));
L4:;
   if (ecl_char_code(v1char)==ecl_char_code(CODE_CHAR(10))) { goto L8; }
   if (ecl_char_code(v1char)==ecl_char_code(CODE_CHAR(13))) { goto L8; }
   goto L3;
L8:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for SELECT-P                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L2select_p(cl_object v1object)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  ecl_bds_bind(cl_env_copy,ECL_SYM("*PRINT-PRETTY*",57),ECL_T); /*  *PRINT-PRETTY* */
  ecl_bds_bind(cl_env_copy,ECL_SYM("*PRINT-LEVEL*",53),ECL_NIL); /*  *PRINT-LEVEL* */
  ecl_bds_bind(cl_env_copy,ECL_SYM("*PRINT-LENGTH*",52),ECL_NIL); /*  *PRINT-LENGTH* */
  ecl_prin1(v1object,ECL_NIL);
  value0 = ecl_terpri(ECL_NIL);
  cl_env_copy->nvalues = 1;
  ecl_bds_unwind1(cl_env_copy);
  ecl_bds_unwind1(cl_env_copy);
  ecl_bds_unwind1(cl_env_copy);
  return value0;
 }
}
/*      function definition for SELECT-E                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L3select_e()
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
   {
    struct ecl_stack_frame _ecl_inner_frame_aux;
    cl_object _ecl_inner_frame = ecl_stack_frame_open(cl_env_copy,(cl_object)&_ecl_inner_frame_aux,0);
    {
     cl_object v2;
     v2 = _ecl_inner_frame;
     {
      cl_object v3;
      v3 = ECL_SYM("LIST",483);
      {
       struct ecl_stack_frame _ecl_inner_frame_aux;
       cl_object _ecl_inner_frame = ecl_stack_frame_open(cl_env_copy,(cl_object)&_ecl_inner_frame_aux,0);
       {
        cl_object v4;
        v4 = _ecl_inner_frame;
        T0 = cl_read_preserving_whitespace(1, ecl_symbol_value(ECL_SYM("*QUERY-IO*",61)));
        cl_env_copy->values[0] = cl_eval(T0);
        ecl_stack_frame_push_values(v4);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        L1inspect_read_line();cl_env_copy->values[0]=ecl_stack_frame_pop_values(v4);
       }
       ecl_stack_frame_close(_ecl_inner_frame);
      }
      ecl_stack_frame_push_values(v2);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;cl_env_copy->values[0]=ecl_apply_from_stack_frame(v2,v3);
      value0 = cl_env_copy->values[0];
     }
    }
    ecl_stack_frame_close(_ecl_inner_frame);
   }
   v1 = value0;
   goto L14;
L13:;
   {
    cl_object v2x;
    v2x = ecl_car(v1);
    cl_write(5, v2x, ECL_SYM("LEVEL",1290), ecl_symbol_value(VV[3]), ECL_SYM("LENGTH",1289), ecl_symbol_value(VV[4]));
    ecl_terpri(ECL_NIL);
   }
   v1 = ecl_cdr(v1);
L14:;
   if (Null(v1)) { goto L22; }
   goto L13;
L22:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for SELECT-U                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L4select_u()
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
   T0 = cl_read_preserving_whitespace(1, ecl_symbol_value(ECL_SYM("*QUERY-IO*",61)));
   v1 = cl_eval(T0);
   L1inspect_read_line();
   value0 = v1;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for SELECT-?                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L5select__()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  ecl_terpri(ECL_NIL);
  value0 = cl_format(2, ECL_T, VV[9]);
  return value0;
 }
}
/*      function definition for READ-INSPECT-COMMAND                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L8read_inspect_command(cl_object volatile v1label, cl_object volatile v2object, cl_object volatile v3allow_recursive)
{
 cl_object T0, T1, T2, T3, T4;
 cl_object volatile env0 = ECL_NIL;
 cl_object volatile CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if ((ecl_symbol_value(VV[2]))!=ECL_NIL) { goto L1; }
  L10inspect_indent_1();
  if (Null(v3allow_recursive)) { goto L5; }
  ecl_princ(v1label,ECL_NIL);
  L28inspect_object(v2object);
  goto L4;
L5:;
  cl_format(3, ECL_T, v1label, v2object);
L4:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  T0 = CONS(ecl_symbol_value(ECL_SYM("*QUIT-TAG*",1808)),ecl_symbol_value(ECL_SYM("*QUIT-TAG*",1808)));
  ecl_bds_bind(cl_env_copy,VV[11],T0);            /*  *QUIT-TAGS*     */
  ecl_bds_bind(cl_env_copy,ECL_SYM("*QUIT-TAG*",1808),ecl_symbol_value(VV[11])); /*  *QUIT-TAG* */
L8:;
  value0 = ecl_symbol_value(ECL_SYM("*QUIT-TAG*",1808));
  {
   ecl_frs_push(cl_env_copy,value0);
   if (__ecl_frs_push_result) {                   /*  BEGIN CATCH 11  */
    value0 = cl_env_copy->values[0];
   } else {
    {
     volatile cl_object env1 = env0;
     env1 = ECL_NIL;
     CLV0 = env1 = CONS(ECL_NIL,env1);
     {
      volatile cl_object env2 = env1;
      CLV1 = env2 = CONS(ECL_NEW_FRAME_ID(cl_env_copy),env2); /*  TAGBODY */
      {
       ecl_frs_push(cl_env_copy,ECL_CONS_CAR(CLV1));
       if (__ecl_frs_push_result) {
       if (cl_env_copy->values[0]==ecl_make_fixnum(0))goto L16;
       ecl_internal_error("GO found an inexistent tag");
       }
      }
      {
       cl_object v4;
       v4 = ecl_make_cclosure_va((cl_objectfn)LC6__lambda14,env2,Cblock,0);
       T0 = v4;
      }
      {
       cl_object v4;
       v4 = ecl_make_cfun((cl_objectfn_fixed)LC7__lambda15,ECL_NIL,Cblock,1);
       T1 = v4;
      }
      T2 = ecl_function_dispatch(cl_env_copy,VV[135])(6, ECL_SYM("NAME",1300), ECL_SYM("INSPECT",438), ECL_SYM("FUNCTION",1264), T0, VV[12], T1) /*  MAKE-RESTART */;
      T3 = ecl_list1(T2);
      T4 = CONS(T3,ecl_symbol_value(ECL_SYM("*RESTART-CLUSTERS*",5)));
      ecl_bds_bind(cl_env_copy,ECL_SYM("*RESTART-CLUSTERS*",5),T4); /*  *RESTART-CLUSTERS* */
      L10inspect_indent_1();
      if (Null(v3allow_recursive)) { goto L22; }
      ecl_princ(v1label,ECL_NIL);
      L9inspect_indent();
      ecl_prin1(v2object,ECL_NIL);
      goto L21;
L22:;
      cl_format(3, ECL_T, v1label, v2object);
L21:;
      (ecl_princ_char(ecl_char_code(CODE_CHAR(32)),ECL_NIL),(CODE_CHAR(32)));
      ecl_princ(VV[14],ECL_NIL);
      cl_finish_output(0);
      {
       cl_object v4;
       {
        cl_object v5char;
        v5char = cl_read_char(1, ecl_symbol_value(ECL_SYM("*QUERY-IO*",61)));
        goto L33;
L32:;
        v5char = cl_read_char(1, ecl_symbol_value(ECL_SYM("*QUERY-IO*",61)));
L33:;
        if (!(ecl_char_code(v5char)!=ecl_char_code(CODE_CHAR(32)))) { goto L40; }
        if (ecl_char_code(v5char)!=ecl_char_code(CODE_CHAR(9))) { goto L37; }
        goto L38;
L40:;
        goto L38;
L38:;
        goto L32;
L37:;
        if (!(ecl_char_code(v5char)==ecl_char_code(CODE_CHAR(10)))) { goto L42; }
        v4 = v5char;
        goto L29;
L42:;
        if (!(ecl_char_code(v5char)==ecl_char_code(CODE_CHAR(13)))) { goto L44; }
        v4 = v5char;
        goto L29;
L44:;
        T0 = cl_peek_char(0);
        if (Null(cl_alphanumericp(T0))) { goto L46; }
        v4 = CODE_CHAR(33);
        goto L29;
L46:;
        v4 = v5char;
       }
L29:;
       if (!(((v4)==ECL_CODE_CHAR((ecl_character)(10))))) { goto L53; }
       goto L50;
       goto L51;
L53:;
       goto L51;
L51:;
       if (!(((v4)==ECL_CODE_CHAR((ecl_character)(13))))) { goto L48; }
       goto L49;
L50:;
L49:;
       if (Null(v3allow_recursive)) { goto L56; }
       L28inspect_object(v2object);
L56:;
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 1;
       ecl_frs_pop(cl_env_copy);
       ecl_frs_pop(cl_env_copy);
       ecl_bds_unwind1(cl_env_copy);
       ecl_bds_unwind1(cl_env_copy);
       ecl_bds_unwind1(cl_env_copy);
       return value0;
L48:;
       if (!(((v4)==ECL_CODE_CHAR((ecl_character)(110))))) { goto L63; }
       goto L60;
       goto L61;
L63:;
       goto L61;
L61:;
       if (!(((v4)==ECL_CODE_CHAR((ecl_character)(78))))) { goto L58; }
       goto L59;
L60:;
L59:;
       L1inspect_read_line();
       if (Null(v3allow_recursive)) { goto L67; }
       L28inspect_object(v2object);
L67:;
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 1;
       ecl_frs_pop(cl_env_copy);
       ecl_frs_pop(cl_env_copy);
       ecl_bds_unwind1(cl_env_copy);
       ecl_bds_unwind1(cl_env_copy);
       ecl_bds_unwind1(cl_env_copy);
       return value0;
L58:;
       if (!(((v4)==ECL_CODE_CHAR((ecl_character)(115))))) { goto L74; }
       goto L71;
       goto L72;
L74:;
       goto L72;
L72:;
       if (!(((v4)==ECL_CODE_CHAR((ecl_character)(83))))) { goto L69; }
       goto L70;
L71:;
L70:;
       L1inspect_read_line();
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 1;
       ecl_frs_pop(cl_env_copy);
       ecl_frs_pop(cl_env_copy);
       ecl_bds_unwind1(cl_env_copy);
       ecl_bds_unwind1(cl_env_copy);
       ecl_bds_unwind1(cl_env_copy);
       return value0;
L69:;
       if (!(((v4)==ECL_CODE_CHAR((ecl_character)(112))))) { goto L83; }
       goto L80;
       goto L81;
L83:;
       goto L81;
L81:;
       if (!(((v4)==ECL_CODE_CHAR((ecl_character)(80))))) { goto L78; }
       goto L79;
L80:;
L79:;
       L1inspect_read_line();
       L2select_p(v2object);
       ecl_frs_pop(cl_env_copy);
       ecl_bds_unwind1(cl_env_copy);
       goto L15;
L78:;
       if (!(((v4)==ECL_CODE_CHAR((ecl_character)(97))))) { goto L92; }
       goto L89;
       goto L90;
L92:;
       goto L90;
L90:;
       if (!(((v4)==ECL_CODE_CHAR((ecl_character)(65))))) { goto L87; }
       goto L88;
L89:;
L88:;
       L1inspect_read_line();
       cl_env_copy->values[0] = ECL_NIL;
       cl_env_copy->nvalues = 1;
       cl_throw(VV[25]);
L87:;
       if (!(((v4)==ECL_CODE_CHAR((ecl_character)(117))))) { goto L102; }
       goto L99;
       goto L100;
L102:;
       goto L100;
L100:;
       if (!(((v4)==ECL_CODE_CHAR((ecl_character)(85))))) { goto L97; }
       goto L98;
L99:;
L98:;
       T0 = L4select_u();
       cl_env_copy->nvalues = 2;
       cl_env_copy->values[1] = T0;
       cl_env_copy->values[0] = ECL_T;
       value0 = cl_env_copy->values[0];
       ecl_frs_pop(cl_env_copy);
       ecl_frs_pop(cl_env_copy);
       ecl_bds_unwind1(cl_env_copy);
       ecl_bds_unwind1(cl_env_copy);
       ecl_bds_unwind1(cl_env_copy);
       return value0;
L97:;
       if (!(((v4)==ECL_CODE_CHAR((ecl_character)(101))))) { goto L110; }
       goto L107;
       goto L108;
L110:;
       goto L108;
L108:;
       if (!(((v4)==ECL_CODE_CHAR((ecl_character)(69))))) { goto L105; }
       goto L106;
L107:;
L106:;
       L3select_e();
       ecl_frs_pop(cl_env_copy);
       ecl_bds_unwind1(cl_env_copy);
       goto L15;
L105:;
       if (!(((v4)==ECL_CODE_CHAR((ecl_character)(113))))) { goto L118; }
       goto L115;
       goto L116;
L118:;
       goto L116;
L116:;
       if (!(((v4)==ECL_CODE_CHAR((ecl_character)(81))))) { goto L113; }
       goto L114;
L115:;
L114:;
       L1inspect_read_line();
       cl_env_copy->values[0] = ECL_NIL;
       cl_env_copy->nvalues = 1;
       cl_throw(VV[32]);
L113:;
       if (!(((v4)==ECL_CODE_CHAR((ecl_character)(63))))) { goto L123; }
       L1inspect_read_line();
       L5select__();
       ecl_frs_pop(cl_env_copy);
       ecl_bds_unwind1(cl_env_copy);
       goto L15;
L123:;
       L1inspect_read_line();
       L9inspect_indent();
       cl_format(2, ECL_T, VV[34]);
       ecl_frs_pop(cl_env_copy);
       ecl_bds_unwind1(cl_env_copy);
       goto L15;
      }
L16:;
      ecl_frs_pop(cl_env_copy);
      goto L15;
     }
    }
L15:;
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
   }
   ecl_frs_pop(cl_env_copy);                      /*  END CATCH 11    */
  }
  if (Null(value0)) { goto L9; }
  cl_format(2, ECL_T, VV[35]);
L9:;
  goto L8;
 }
}
/*      closure LAMBDA14                                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC6__lambda14(cl_narg narg, ...)
{
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV1 = env0;                                     /*  TAGBODY         */
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 {
  cl_object v1temp;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  v1temp = cl_grab_rest_args(args);
  ecl_va_end(args);
  ECL_CONS_CAR(CLV0) = v1temp;
  cl_go(ECL_CONS_CAR(CLV1),ecl_make_fixnum(0));
 }
 }
}
/*      local function LAMBDA15                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC7__lambda15(cl_object v1stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_format(2, v1stream, VV[13]);
  return value0;
 }
}
/*      function definition for INSPECT-INDENT                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L9inspect_indent()
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  cl_fresh_line(0);
  if (!(ecl_lower(ecl_symbol_value(VV[0]),ecl_make_fixnum(8)))) { goto L3; }
  T0 = ecl_symbol_value(VV[0]);
  goto L2;
L3:;
  T0 = ecl_make_fixnum(8);
L2:;
  T1 = ecl_times(ecl_make_fixnum(4),T0);
  value0 = cl_format(3, ECL_T, VV[37], T1);
  return value0;
 }
}
/*      function definition for INSPECT-INDENT-1                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L10inspect_indent_1()
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  cl_fresh_line(0);
  if (!(ecl_lower(ecl_symbol_value(VV[0]),ecl_make_fixnum(8)))) { goto L3; }
  T0 = ecl_symbol_value(VV[0]);
  goto L2;
L3:;
  T0 = ecl_make_fixnum(8);
L2:;
  T1 = ecl_times(ecl_make_fixnum(4),T0);
  T2 = ecl_minus(T1,ecl_make_fixnum(3));
  value0 = cl_format(3, ECL_T, VV[37], T2);
  return value0;
 }
}
/*      function definition for INSPECT-SYMBOL                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L11inspect_symbol(cl_object v1symbol)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2p;
   v2p = cl_symbol_package(v1symbol);
   if (!(v2p==ECL_NIL)) { goto L3; }
   cl_format(3, ECL_T, VV[40], v1symbol);
   goto L1;
L3:;
   T0 = cl_find_package(VV[41]);
   if (!((v2p)==(T0))) { goto L5; }
   cl_format(3, ECL_T, VV[42], v1symbol);
   goto L1;
L5:;
   {
    cl_object v4;                                 /*  F               */
    T1 = ecl_symbol_name(v1symbol);
    value0 = cl_find_symbol(2, T1, v2p);
    {
     v4 = cl_env_copy->values[1];
    }
    T0 = ecl_make_bool((v4)==(ECL_SYM("EXTERNAL",1257)));
   }
   T1 = cl_package_name(v2p);
   cl_format(5, ECL_T, VV[43], v1symbol, T0, T1);
  }
L1:;
  if (Null(L32print_doc(2, v1symbol, ECL_T))) { goto L9; }
  cl_format(2, ECL_T, VV[44]);
L9:;
  if ((ECL_T)==(v1symbol)) { goto L14; }
  if ((ECL_NIL)==(v1symbol)) { goto L14; }
  if (Null(cl_keywordp(v1symbol))) { goto L12; }
  goto L13;
L14:;
L13:;
  L10inspect_indent_1();
  T0 = cl_symbol_value(v1symbol);
  cl_format(3, ECL_T, VV[45], T0);
  goto L11;
L12:;
  if (!(ecl_boundp(cl_env_copy,v1symbol))) { goto L11; }
  if (Null(ecl_symbol_value(VV[2]))) { goto L19; }
  {
   cl_object v3;                                  /*  UPDATE-FLAG     */
   cl_object v4;                                  /*  NEW-VALUE       */
   T0 = cl_symbol_value(v1symbol);
   value0 = L8read_inspect_command(VV[46], T0, ECL_T);
   {
    const int v5 = cl_env_copy->nvalues;
    v3 = value0;
    cl_object v6;
    v6 = (v5<=1)? ECL_NIL : cl_env_copy->values[1];
    v4 = v6;
   }
   if (Null(v3)) { goto L11; }
   cl_set(v1symbol, v4);
   goto L11;
  }
L19:;
  {
   cl_object v3;                                  /*  UPDATE-FLAG     */
   cl_object v4;                                  /*  NEW-VALUE       */
   T0 = cl_symbol_value(v1symbol);
   value0 = L8read_inspect_command(VV[47], T0, ECL_NIL);
   {
    const int v5 = cl_env_copy->nvalues;
    v3 = value0;
    cl_object v6;
    v6 = (v5<=1)? ECL_NIL : cl_env_copy->values[1];
    v4 = v6;
   }
   if (Null(v3)) { goto L11; }
   cl_set(v1symbol, v4);
  }
L11:;
  {
   cl_object v2pl;
   v2pl = cl_symbol_plist(v1symbol);
   goto L28;
L27:;
   T0 = ecl_car(v2pl);
   if (!(ECL_SYMBOLP(T0))) { goto L33; }
   T0 = ecl_car(v2pl);
   T1 = cl_symbol_package(T0);
   T2 = cl_find_package(ECL_SYM("SYSTEM",1176));
   if ((T1)==(T2)) { goto L30; }
   T0 = ecl_car(v2pl);
   T1 = cl_symbol_package(T0);
   T2 = cl_find_package(VV[48]);
   if ((T1)==(T2)) { goto L30; }
   goto L31;
L33:;
   goto L31;
L31:;
   if (Null(ecl_symbol_value(VV[2]))) { goto L36; }
   {
    cl_object v4;                                 /*  UPDATE-FLAG     */
    cl_object v5;                                 /*  NEW-VALUE       */
    T0 = ecl_car(v2pl);
    T1 = cl_format(3, ECL_NIL, VV[49], T0);
    T2 = ecl_cadr(v2pl);
    value0 = L8read_inspect_command(T1, T2, ECL_T);
    {
     const int v6 = cl_env_copy->nvalues;
     v4 = value0;
     cl_object v7;
     v7 = (v6<=1)? ECL_NIL : cl_env_copy->values[1];
     v5 = v7;
    }
    if (Null(v4)) { goto L30; }
    {
     cl_object v6;
     v6 = ecl_car(v2pl);
     si_putprop(v1symbol, v5, v6);
     goto L30;
    }
   }
L36:;
   {
    cl_object v4;                                 /*  UPDATE-FLAG     */
    cl_object v5;                                 /*  NEW-VALUE       */
    T0 = ecl_car(v2pl);
    T1 = cl_format(3, ECL_NIL, VV[50], T0);
    T2 = ecl_cadr(v2pl);
    value0 = L8read_inspect_command(T1, T2, ECL_NIL);
    {
     const int v6 = cl_env_copy->nvalues;
     v4 = value0;
     cl_object v7;
     v7 = (v6<=1)? ECL_NIL : cl_env_copy->values[1];
     v5 = v7;
    }
    if (Null(v4)) { goto L30; }
    {
     cl_object v6;
     v6 = ecl_car(v2pl);
     si_putprop(v1symbol, v5, v6);
    }
   }
L30:;
   v2pl = ecl_cddr(v2pl);
L28:;
   if (ecl_endp(v2pl)) { goto L46; }
   goto L27;
L46:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for INSPECT-PACKAGE                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L12inspect_package(cl_object v1package)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  cl_format(3, ECL_T, VV[51], v1package);
  if (Null(cl_package_nicknames(v1package))) { goto L2; }
  T0 = cl_package_nicknames(v1package);
  if (Null(L8read_inspect_command(VV[52], T0, ECL_NIL))) { goto L2; }
  ecl_princ(VV[53],ECL_NIL);
  ecl_terpri(ECL_NIL);
L2:;
  if (Null(cl_package_use_list(v1package))) { goto L6; }
  T0 = cl_package_use_list(v1package);
  if (Null(L8read_inspect_command(VV[54], T0, ECL_NIL))) { goto L6; }
  ecl_princ(VV[53],ECL_NIL);
  ecl_terpri(ECL_NIL);
L6:;
  if (Null(cl_package_used_by_list(v1package))) { goto L10; }
  T0 = cl_package_used_by_list(v1package);
  if (Null(L8read_inspect_command(VV[55], T0, ECL_NIL))) { goto L10; }
  ecl_princ(VV[53],ECL_NIL);
  ecl_terpri(ECL_NIL);
L10:;
  if (Null(cl_package_shadowing_symbols(v1package))) { goto L14; }
  T0 = cl_package_shadowing_symbols(v1package);
  if (Null(L8read_inspect_command(VV[56], T0, ECL_NIL))) { goto L16; }
  ecl_princ(VV[53],ECL_NIL);
  value0 = ecl_terpri(ECL_NIL);
  cl_env_copy->nvalues = 1;
  return value0;
L16:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L14:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for INSPECT-CHARACTER                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L13inspect_character(cl_object v1character)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(cl_standard_char_p(v1character))) { goto L3; }
  T0 = VV[57];
  goto L2;
L3:;
  T0 = VV[58];
L2:;
  cl_format(3, ECL_T, T0, v1character);
  T0 = cl_char_code(v1character);
  if (Null(L8read_inspect_command(VV[59], T0, ECL_NIL))) { goto L5; }
  ecl_princ(VV[53],ECL_NIL);
  value0 = ecl_terpri(ECL_NIL);
  cl_env_copy->nvalues = 1;
  return value0;
L5:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for INSPECT-NUMBER                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L14inspect_number(cl_object v1number)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2type;
   v2type = cl_type_of(v1number);
   if (!(ECL_CONSP(v2type))) { goto L2; }
   v2type = ecl_car(v2type);
L2:;
   T0 = cl_string_downcase(1, v2type);
   cl_format(4, ECL_T, VV[60], v1number, T0);
   if (!((v2type)==(ECL_SYM("INTEGER",439)))) { goto L6; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L6:;
   if (!((v2type)==(ECL_SYM("RATIO",688)))) { goto L8; }
   T0 = cl_numerator(v1number);
   if (Null(L8read_inspect_command(VV[61], T0, ECL_T))) { goto L10; }
   ecl_princ(VV[53],ECL_NIL);
   ecl_terpri(ECL_NIL);
L10:;
   T0 = cl_denominator(v1number);
   if (Null(L8read_inspect_command(VV[62], T0, ECL_T))) { goto L13; }
   ecl_princ(VV[53],ECL_NIL);
   value0 = ecl_terpri(ECL_NIL);
   cl_env_copy->nvalues = 1;
   return value0;
L13:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L8:;
   if (!((v2type)==(ECL_SYM("COMPLEX",243)))) { goto L16; }
   T0 = cl_realpart(v1number);
   if (Null(L8read_inspect_command(VV[63], T0, ECL_T))) { goto L18; }
   ecl_princ(VV[53],ECL_NIL);
   ecl_terpri(ECL_NIL);
L18:;
   T0 = cl_imagpart(v1number);
   if (Null(L8read_inspect_command(VV[64], T0, ECL_T))) { goto L21; }
   ecl_princ(VV[53],ECL_NIL);
   value0 = ecl_terpri(ECL_NIL);
   cl_env_copy->nvalues = 1;
   return value0;
L21:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L16:;
   if (!((v2type)==(ECL_SYM("SHORT-FLOAT",758)))) { goto L29; }
   goto L26;
   goto L27;
L29:;
   goto L27;
L27:;
   if (!((v2type)==(ECL_SYM("SINGLE-FLOAT",780)))) { goto L33; }
   goto L26;
   goto L31;
L33:;
   goto L31;
L31:;
   if (!((v2type)==(ECL_SYM("LONG-FLOAT",510)))) { goto L37; }
   goto L26;
   goto L35;
L37:;
   goto L35;
L35:;
   if (!((v2type)==(ECL_SYM("DOUBLE-FLOAT",317)))) { goto L24; }
   goto L25;
L26:;
L25:;
   {
    cl_object v4;                                 /*  SIGNIF          */
    cl_object v5;                                 /*  EXPON           */
    value0 = cl_integer_decode_float(v1number);
    {
     v4 = value0;
     v5 = cl_env_copy->values[1];
    }
    if (Null(L8read_inspect_command(VV[69], v5, ECL_NIL))) { goto L41; }
    ecl_princ(VV[53],ECL_NIL);
    ecl_terpri(ECL_NIL);
L41:;
    if (Null(L8read_inspect_command(VV[70], v4, ECL_NIL))) { goto L44; }
    ecl_princ(VV[53],ECL_NIL);
    value0 = ecl_terpri(ECL_NIL);
    cl_env_copy->nvalues = 1;
    return value0;
L44:;
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
   }
L24:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for INSPECT-CONS                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L15inspect_cons(cl_object v1cons)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  cl_format(3, ECL_T, VV[71], v1cons);
  if (Null(ecl_symbol_value(VV[2]))) { goto L2; }
  {
   cl_object v2i;
   cl_object v3l;
   v2i = ecl_make_fixnum(0);
   v3l = v1cons;
   goto L8;
L7:;
   {
    cl_object v5;                                 /*  UPDATE-FLAG     */
    cl_object v6;                                 /*  NEW-VALUE       */
    T0 = cl_format(3, ECL_NIL, VV[72], v2i);
    T1 = ecl_car(v3l);
    value0 = L8read_inspect_command(T0, T1, ECL_T);
    {
     const int v7 = cl_env_copy->nvalues;
     v5 = value0;
     cl_object v8;
     v8 = (v7<=1)? ECL_NIL : cl_env_copy->values[1];
     v6 = v8;
    }
    if (Null(v5)) { goto L10; }
    {
     cl_object v7;
     v7 = v6;
     {
      cl_object v8;
      v8 = ecl_nthcdr(ecl_to_size(v2i),v1cons);
      if (ecl_unlikely(ECL_ATOM(v8))) FEtype_error_cons(v8);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      T0 = v8;
     }
     (ECL_CONS_CAR(T0)=v7,T0);
    }
   }
L10:;
   v2i = ecl_one_plus(v2i);
   v3l = ecl_cdr(v3l);
L8:;
   if (ECL_ATOM(v3l)) { goto L21; }
   goto L7;
L21:;
   if (!(ecl_eql(v3l,ECL_T))) { goto L28; }
   goto L25;
   goto L26;
L28:;
   goto L26;
L26:;
   if (!((v3l)==(ECL_NIL))) { goto L23; }
   goto L24;
L25:;
L24:;
   T0 = cl_format(3, ECL_NIL, VV[75], v2i);
   if (Null(L8read_inspect_command(T0, v3l, ECL_NIL))) { goto L31; }
   ecl_princ(VV[53],ECL_NIL);
   value0 = ecl_terpri(ECL_NIL);
   cl_env_copy->nvalues = 1;
   return value0;
L31:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L23:;
   {
    cl_object v5;                                 /*  UPDATE-FLAG     */
    cl_object v6;                                 /*  NEW-VALUE       */
    T0 = cl_format(3, ECL_NIL, VV[76], v2i);
    value0 = L8read_inspect_command(T0, v3l, ECL_T);
    {
     const int v7 = cl_env_copy->nvalues;
     v5 = value0;
     cl_object v8;
     v8 = (v7<=1)? ECL_NIL : cl_env_copy->values[1];
     v6 = v8;
    }
    if (Null(v5)) { goto L35; }
    {
     cl_object v7;
     T0 = ecl_one_minus(v2i);
     v7 = ecl_nthcdr(ecl_to_size(T0),v1cons);
     {
      cl_object v8;
      v8 = v6;
      {
       cl_object v9;
       v9 = v7;
       if (ecl_unlikely(ECL_ATOM(v9))) FEtype_error_cons(v9);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       T0 = v9;
      }
      (ECL_CONS_CDR(T0)=v8,T0);
      value0 = v8;
      cl_env_copy->nvalues = 1;
      return value0;
     }
    }
L35:;
    value0 = ECL_NIL;
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
/*      function definition for INSPECT-STRING                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L16inspect_string(cl_object v1string)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(cl_simple_string_p(v1string))) { goto L3; }
  T0 = VV[77];
  goto L2;
L3:;
  T0 = VV[78];
L2:;
  cl_format(3, ECL_T, T0, v1string);
  {
   cl_fixnum v2;
   v2 = ecl_array_dimension(v1string,0);
   if (Null(L8read_inspect_command(VV[79], ecl_make_fixnum(v2), ECL_NIL))) { goto L5; }
  }
  ecl_princ(VV[53],ECL_NIL);
  ecl_terpri(ECL_NIL);
L5:;
  if (!((ECL_ARRAYP(v1string)?(void)0:FEtype_error_array(v1string),ECL_ARRAY_HAS_FILL_POINTER_P(v1string)))) { goto L8; }
  {
   cl_object v3;                                  /*  UPDATE-FLAG     */
   cl_object v4;                                  /*  NEW-VALUE       */
   T0 = cl_fill_pointer(v1string);
   value0 = L8read_inspect_command(VV[80], T0, ECL_NIL);
   {
    const int v5 = cl_env_copy->nvalues;
    v3 = value0;
    cl_object v6;
    v6 = (v5<=1)? ECL_NIL : cl_env_copy->values[1];
    v4 = v6;
   }
   if (Null(v3)) { goto L8; }
   si_fill_pointer_set(v1string, v4);
  }
L8:;
  if (Null(ecl_symbol_value(VV[2]))) { goto L12; }
  {
   cl_fixnum v2;
   v2 = ecl_array_dimension(v1string,0);
   {
    cl_fixnum v3i;
    v3i = 0;
    goto L17;
L16:;
    {
     cl_object v5;                                /*  UPDATE-FLAG     */
     cl_object v6;                                /*  NEW-VALUE       */
     T0 = cl_format(3, ECL_NIL, VV[81], ecl_make_fixnum(v3i));
     {
      ecl_character v7;
      v7 = ecl_char(v1string,v3i);
      value0 = L8read_inspect_command(T0, CODE_CHAR(v7), ECL_T);
     }
     {
      const int v7 = cl_env_copy->nvalues;
      v5 = value0;
      cl_object v8;
      v8 = (v7<=1)? ECL_NIL : cl_env_copy->values[1];
      v6 = v8;
     }
     if (Null(v5)) { goto L19; }
     ecl_aset1(v1string,v3i,v6);
    }
L19:;
    v3i = (v3i)+1;
L17:;
    if (!((v3i)<(v2))) { goto L24; }
    goto L16;
L24:;
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
L12:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for INSPECT-VECTOR                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L17inspect_vector(cl_object v1vector)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(cl_simple_vector_p(v1vector))) { goto L3; }
  T0 = VV[82];
  goto L2;
L3:;
  T0 = VV[83];
L2:;
  cl_format(3, ECL_T, T0, v1vector);
  {
   cl_fixnum v2;
   v2 = ecl_array_dimension(v1vector,0);
   if (Null(L8read_inspect_command(VV[79], ecl_make_fixnum(v2), ECL_NIL))) { goto L5; }
  }
  ecl_princ(VV[53],ECL_NIL);
  ecl_terpri(ECL_NIL);
L5:;
  if (!((ECL_ARRAYP(v1vector)?(void)0:FEtype_error_array(v1vector),ECL_ARRAY_HAS_FILL_POINTER_P(v1vector)))) { goto L8; }
  {
   cl_object v3;                                  /*  UPDATE-FLAG     */
   cl_object v4;                                  /*  NEW-VALUE       */
   T0 = cl_fill_pointer(v1vector);
   value0 = L8read_inspect_command(VV[80], T0, ECL_NIL);
   {
    const int v5 = cl_env_copy->nvalues;
    v3 = value0;
    cl_object v6;
    v6 = (v5<=1)? ECL_NIL : cl_env_copy->values[1];
    v4 = v6;
   }
   if (Null(v3)) { goto L8; }
   si_fill_pointer_set(v1vector, v4);
  }
L8:;
  if (Null(ecl_symbol_value(VV[2]))) { goto L12; }
  {
   cl_fixnum v2;
   v2 = ecl_array_dimension(v1vector,0);
   {
    cl_fixnum v3i;
    v3i = 0;
    goto L17;
L16:;
    {
     cl_object v5;                                /*  UPDATE-FLAG     */
     cl_object v6;                                /*  NEW-VALUE       */
     T0 = cl_format(3, ECL_NIL, VV[81], ecl_make_fixnum(v3i));
     {
      cl_object v7;
      v7 = v1vector;
      T2 = v7;
      {
       cl_fixnum v8;
       {
        cl_fixnum v9;
        v9 = v3i;
        if (ecl_unlikely((v9)>=(v7)->vector.dim))
           FEwrong_index(ECL_NIL,v7,-1,ecl_make_fixnum(v9),(v7)->vector.dim);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v8 = v9;
       }
       T1 = ecl_aref_unsafe(T2,v8);
      }
     }
     value0 = L8read_inspect_command(T0, T1, ECL_T);
     {
      const int v7 = cl_env_copy->nvalues;
      v5 = value0;
      cl_object v8;
      v8 = (v7<=1)? ECL_NIL : cl_env_copy->values[1];
      v6 = v8;
     }
     if (Null(v5)) { goto L19; }
     {
      cl_object v7;
      v7 = v1vector;
      T0 = v7;
      {
       cl_fixnum v8;
       {
        cl_fixnum v9;
        v9 = v3i;
        if (ecl_unlikely((v9)>=(v7)->vector.dim))
           FEwrong_index(ECL_NIL,v7,-1,ecl_make_fixnum(v9),(v7)->vector.dim);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v8 = v9;
       }
       ecl_aset_unsafe(T0,v8,v6);
      }
     }
    }
L19:;
    v3i = (v3i)+1;
L17:;
    if (!((v3i)<(v2))) { goto L35; }
    goto L16;
L35:;
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
L12:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for INSPECT-ARRAY                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L18inspect_array(cl_object v1array)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!((ECL_ARRAYP(v1array)? (void)0: FEtype_error_array(v1array),ECL_ADJUSTABLE_ARRAY_P(v1array)))) { goto L3; }
  T0 = VV[84];
  goto L2;
L3:;
  T0 = VV[85];
L2:;
  cl_format(3, ECL_T, T0, v1array);
  T0 = cl_array_rank(v1array);
  if (Null(L8read_inspect_command(VV[86], T0, ECL_NIL))) { goto L5; }
  ecl_princ(VV[53],ECL_NIL);
  ecl_terpri(ECL_NIL);
L5:;
  T0 = cl_array_dimensions(v1array);
  if (Null(L8read_inspect_command(VV[87], T0, ECL_NIL))) { goto L8; }
  ecl_princ(VV[53],ECL_NIL);
  ecl_terpri(ECL_NIL);
L8:;
  T0 = cl_array_total_size(v1array);
  if (Null(L8read_inspect_command(VV[88], T0, ECL_NIL))) { goto L11; }
  ecl_princ(VV[53],ECL_NIL);
  value0 = ecl_terpri(ECL_NIL);
  cl_env_copy->nvalues = 1;
  return value0;
L11:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for SELECT-HT-N                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L20select_ht_n(cl_object v1hashtable)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  env0 = ECL_NIL;
  CLV0 = env0 = CONS(v1hashtable,env0);           /*  HASHTABLE       */
  cl_set(VV[0],ecl_plus(ecl_symbol_value(VV[0]),ecl_make_fixnum(1)));
  {
   cl_object v2;
   v2 = ecl_make_cclosure_va((cl_objectfn)LC19__lambda74,env0,Cblock,2);
   T0 = v2;
  }
  cl_maphash(T0, ECL_CONS_CAR(CLV0));
  cl_set(VV[0],ecl_minus(ecl_symbol_value(VV[0]),ecl_make_fixnum(1)));
  value0 = ecl_symbol_value(VV[0]);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      closure LAMBDA74                                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC19__lambda74(cl_narg narg, cl_object v1key, cl_object v2val, ...)
{
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV0 = env0;                                     /*  HASHTABLE       */
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=2)) FEwrong_num_arguments_anonym();
 {
TTL:
  L10inspect_indent_1();
  cl_format(3, ECL_T, VV[89], v1key);
  {
   cl_object v4;                                  /*  UPDATE-FLAG     */
   cl_object v5;                                  /*  NEW-VALUE       */
   value0 = L8read_inspect_command(VV[46], v2val, ECL_T);
   {
    const int v6 = cl_env_copy->nvalues;
    v4 = value0;
    cl_object v7;
    v7 = (v6<=1)? ECL_NIL : cl_env_copy->values[1];
    v5 = v7;
   }
   if (Null(v4)) { goto L4; }
   value0 = si_hash_set(v1key, ECL_CONS_CAR(CLV0), v5);
   return value0;
L4:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
 }
}
/*      function definition for SELECT-HT-L                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L22select_ht_l(cl_object v1hashtable)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  ecl_terpri(ECL_NIL);
  cl_format(2, ECL_T, VV[90]);
  {
   cl_object v2;
   v2 = ecl_make_cfun((cl_objectfn_fixed)LC21__lambda80,ECL_NIL,Cblock,2);
   T0 = v2;
  }
  cl_maphash(T0, v1hashtable);
  value0 = ecl_terpri(ECL_NIL);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function LAMBDA80                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC21__lambda80(cl_object v1key, cl_object v2val)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_format(3, ECL_T, VV[91], v1key);
  return value0;
 }
}
/*      function definition for SELECT-HT-J                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L23select_ht_j(cl_object v1hashtable)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2key;
   cl_object v3val;
   {
    cl_object v4;
    v4 = cl_read_preserving_whitespace(1, ecl_symbol_value(ECL_SYM("*QUERY-IO*",61)));
    L1inspect_read_line();
    v2key = v4;
   }
   v3val = ecl_gethash_safe(v2key,v1hashtable,ECL_NIL);
   if (Null(v3val)) { goto L5; }
   cl_set(VV[0],ecl_plus(ecl_symbol_value(VV[0]),ecl_make_fixnum(1)));
   L10inspect_indent_1();
   cl_format(3, ECL_T, VV[89], v2key);
   {
    cl_object v5;                                 /*  UPDATE-FLAG     */
    cl_object v6;                                 /*  NEW-VALUE       */
    value0 = L8read_inspect_command(VV[46], v3val, ECL_T);
    {
     const int v7 = cl_env_copy->nvalues;
     v5 = value0;
     cl_object v8;
     v8 = (v7<=1)? ECL_NIL : cl_env_copy->values[1];
     v6 = v8;
    }
    if (Null(v5)) { goto L11; }
    si_hash_set(v2key, v1hashtable, v6);
   }
L11:;
   cl_set(VV[0],ecl_minus(ecl_symbol_value(VV[0]),ecl_make_fixnum(1)));
   value0 = ecl_symbol_value(VV[0]);
   cl_env_copy->nvalues = 1;
   return value0;
L5:;
   ecl_terpri(ECL_NIL);
   cl_format(3, ECL_T, VV[92], v2key);
   ecl_terpri(ECL_NIL);
   value0 = ecl_terpri(ECL_NIL);
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for SELECT-HT-?                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L24select_ht__()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  ecl_terpri(ECL_NIL);
  value0 = cl_format(2, ECL_T, VV[93]);
  return value0;
 }
}
/*      function definition for INSPECT-HASHTABLE                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L26inspect_hashtable(cl_object v1hashtable)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(ecl_symbol_value(VV[2]))) { goto L1; }
  cl_set(VV[0],ecl_minus(ecl_symbol_value(VV[0]),ecl_make_fixnum(1)));
L5:;
  cl_format(3, ECL_T, VV[94], v1hashtable);
  cl_finish_output(0);
  {
   cl_object v2;
   {
    cl_object v3char;
    v3char = cl_read_char(1, ecl_symbol_value(ECL_SYM("*QUERY-IO*",61)));
    goto L14;
L13:;
    v3char = cl_read_char(1, ecl_symbol_value(ECL_SYM("*QUERY-IO*",61)));
L14:;
    if (!(ecl_char_code(v3char)!=ecl_char_code(CODE_CHAR(32)))) { goto L21; }
    if ((cl_charNE(1, CODE_CHAR(9)))!=ECL_NIL) { goto L18; }
    goto L19;
L21:;
    goto L19;
L19:;
    goto L13;
L18:;
    v2 = v3char;
   }
   if (!(((v2)==ECL_CODE_CHAR((ecl_character)(10))))) { goto L28; }
   goto L25;
   goto L26;
L28:;
   goto L26;
L26:;
   if (!(((v2)==ECL_CODE_CHAR((ecl_character)(13))))) { goto L23; }
   goto L24;
L25:;
L24:;
   L20select_ht_n(v1hashtable);
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L23:;
   if (!(((v2)==ECL_CODE_CHAR((ecl_character)(110))))) { goto L37; }
   goto L34;
   goto L35;
L37:;
   goto L35;
L35:;
   if (!(((v2)==ECL_CODE_CHAR((ecl_character)(78))))) { goto L32; }
   goto L33;
L34:;
L33:;
   L1inspect_read_line();
   L20select_ht_n(v1hashtable);
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L32:;
   if (!(((v2)==ECL_CODE_CHAR((ecl_character)(115))))) { goto L47; }
   goto L44;
   goto L45;
L47:;
   goto L45;
L45:;
   if (!(((v2)==ECL_CODE_CHAR((ecl_character)(83))))) { goto L42; }
   goto L43;
L44:;
L43:;
   L1inspect_read_line();
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L42:;
   if (!(((v2)==ECL_CODE_CHAR((ecl_character)(112))))) { goto L56; }
   goto L53;
   goto L54;
L56:;
   goto L54;
L54:;
   if (!(((v2)==ECL_CODE_CHAR((ecl_character)(80))))) { goto L51; }
   goto L52;
L53:;
L52:;
   L1inspect_read_line();
   L2select_p(v1hashtable);
   goto L9;
L51:;
   if (!(((v2)==ECL_CODE_CHAR((ecl_character)(97))))) { goto L65; }
   goto L62;
   goto L63;
L65:;
   goto L63;
L63:;
   if (!(((v2)==ECL_CODE_CHAR((ecl_character)(65))))) { goto L60; }
   goto L61;
L62:;
L61:;
   L1inspect_read_line();
   cl_env_copy->values[0] = ECL_NIL;
   cl_env_copy->nvalues = 1;
   cl_throw(VV[25]);
L60:;
   if (!(((v2)==ECL_CODE_CHAR((ecl_character)(101))))) { goto L75; }
   goto L72;
   goto L73;
L75:;
   goto L73;
L73:;
   if (!(((v2)==ECL_CODE_CHAR((ecl_character)(69))))) { goto L70; }
   goto L71;
L72:;
L71:;
   L3select_e();
   goto L9;
L70:;
   if (!(((v2)==ECL_CODE_CHAR((ecl_character)(113))))) { goto L83; }
   goto L80;
   goto L81;
L83:;
   goto L81;
L81:;
   if (!(((v2)==ECL_CODE_CHAR((ecl_character)(81))))) { goto L78; }
   goto L79;
L80:;
L79:;
   L1inspect_read_line();
   cl_env_copy->values[0] = ECL_NIL;
   cl_env_copy->nvalues = 1;
   cl_throw(VV[32]);
L78:;
   if (!(((v2)==ECL_CODE_CHAR((ecl_character)(108))))) { goto L93; }
   goto L90;
   goto L91;
L93:;
   goto L91;
L91:;
   if (!(((v2)==ECL_CODE_CHAR((ecl_character)(76))))) { goto L88; }
   goto L89;
L90:;
L89:;
   L1inspect_read_line();
   L22select_ht_l(v1hashtable);
   goto L9;
L88:;
   if (!(((v2)==ECL_CODE_CHAR((ecl_character)(106))))) { goto L102; }
   goto L99;
   goto L100;
L102:;
   goto L100;
L100:;
   if (!(((v2)==ECL_CODE_CHAR((ecl_character)(74))))) { goto L97; }
   goto L98;
L99:;
L98:;
   L23select_ht_j(v1hashtable);
   goto L9;
L97:;
   if (!(((v2)==ECL_CODE_CHAR((ecl_character)(63))))) { goto L9; }
   L1inspect_read_line();
   L24select_ht__();
  }
L9:;
  L9inspect_indent();
  goto L5;
L1:;
  cl_format(3, ECL_T, VV[94], v1hashtable);
  {
   cl_object v2;
   v2 = ecl_make_cfun((cl_objectfn_fixed)LC25__lambda105,ECL_NIL,Cblock,2);
   T0 = v2;
  }
  value0 = cl_maphash(T0, v1hashtable);
  return value0;
 }
}
/*      local function LAMBDA105                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC25__lambda105(cl_object v1key, cl_object v2val)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  L10inspect_indent_1();
  cl_format(3, ECL_T, VV[89], v1key);
  L10inspect_indent_1();
  cl_format(2, ECL_T, VV[46]);
  value0 = L28inspect_object(v2val);
  return value0;
 }
}
/*      function definition for INSPECT-INSTANCE                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L27inspect_instance(cl_object v1instance)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(ecl_symbol_value(VV[2]))) { goto L1; }
  value0 = ecl_function_dispatch(cl_env_copy,VV[139])(1, v1instance) /*  INSPECT-OBJ */;
  return value0;
L1:;
  value0 = (cl_env_copy->function=(ECL_SYM("DESCRIBE-OBJECT",943)->symbol.gfdef))->cfun.entry(2, v1instance, ecl_symbol_value(ECL_SYM("*STANDARD-OUTPUT*",69))) /*  DESCRIBE-OBJECT */;
  return value0;
 }
}
/*      function definition for INSPECT-OBJECT                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L28inspect_object(cl_object volatile v1object)
{
 cl_object T0;
 cl_object volatile env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  ecl_bds_push(cl_env_copy,VV[0]);                /*  *INSPECT-LEVEL* */
  L9inspect_indent();
  if ((ecl_symbol_value(VV[2]))!=ECL_NIL) { goto L2; }
  if (ecl_greater(ecl_symbol_value(VV[0]),ecl_make_fixnum(5))) { goto L5; }
  if (Null(ecl_memql(v1object,ecl_symbol_value(VV[1])))) { goto L2; }
  goto L3;
L5:;
L3:;
  ecl_prin1(v1object,ECL_NIL);
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  ecl_bds_unwind1(cl_env_copy);
  return value0;
L2:;
  cl_set(VV[0],ecl_plus(ecl_symbol_value(VV[0]),ecl_make_fixnum(1)));
  cl_set(VV[1],CONS(v1object,ecl_symbol_value(VV[1])));
  value0 = VV[25];
  {
   ecl_frs_push(cl_env_copy,value0);
   if (__ecl_frs_push_result) {                   /*  BEGIN CATCH 12  */
    value0 = cl_env_copy->values[0];
   } else {
    if (!(ECL_SYMBOLP(v1object))) { goto L16; }
    value0 = L11inspect_symbol(v1object);
    goto L15;
L16:;
    if (Null(cl_packagep(v1object))) { goto L18; }
    value0 = L12inspect_package(v1object);
    goto L15;
L18:;
    if (!(ECL_CHARACTERP(v1object))) { goto L20; }
    value0 = L13inspect_character(v1object);
    goto L15;
L20:;
    if (!(ecl_numberp(v1object))) { goto L22; }
    value0 = L14inspect_number(v1object);
    goto L15;
L22:;
    if (!(ECL_CONSP(v1object))) { goto L24; }
    value0 = L15inspect_cons(v1object);
    goto L15;
L24:;
    if (!(ECL_STRINGP(v1object))) { goto L26; }
    value0 = L16inspect_string(v1object);
    goto L15;
L26:;
    if (!(ECL_VECTORP(v1object))) { goto L28; }
    value0 = L17inspect_vector(v1object);
    goto L15;
L28:;
    if (!(ECL_ARRAYP(v1object))) { goto L30; }
    value0 = L18inspect_array(v1object);
    goto L15;
L30:;
    if (Null(cl_hash_table_p(v1object))) { goto L32; }
    value0 = L26inspect_hashtable(v1object);
    goto L15;
L32:;
    if (!(ECL_INSTANCEP(v1object))) { goto L34; }
    value0 = L27inspect_instance(v1object);
    goto L15;
L34:;
    T0 = cl_type_of(v1object);
    value0 = cl_format(4, ECL_T, VV[100], v1object, T0);
L15:;
   }
   ecl_frs_pop(cl_env_copy);                      /*  END CATCH 12    */
  }
  ecl_bds_unwind1(cl_env_copy);
  return value0;
 }
}
/*      function definition for DEFAULT-INSPECTOR                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L29default_inspector(cl_object volatile v1object)
{
 cl_object volatile env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   volatile cl_object v2;
   volatile cl_object v3;
   v2 = ecl_symbol_value(ECL_SYM("*PRINT-LEVEL*",53));
   v3 = ecl_symbol_value(ECL_SYM("*PRINT-LENGTH*",52));
   ecl_bds_bind(cl_env_copy,VV[2],ECL_T);         /*  *INSPECT-MODE*  */
   ecl_bds_bind(cl_env_copy,VV[0],ecl_make_fixnum(0)); /*  *INSPECT-LEVEL* */
   ecl_bds_bind(cl_env_copy,VV[1],ECL_NIL);       /*  *INSPECT-HISTORY* */
   ecl_bds_bind(cl_env_copy,VV[3],v2);            /*  *OLD-PRINT-LEVEL* */
   ecl_bds_bind(cl_env_copy,VV[4],v3);            /*  *OLD-PRINT-LENGTH* */
   ecl_bds_bind(cl_env_copy,ECL_SYM("*PRINT-LEVEL*",53),ecl_make_fixnum(3)); /*  *PRINT-LEVEL* */
   ecl_bds_bind(cl_env_copy,ECL_SYM("*PRINT-LENGTH*",52),ecl_make_fixnum(3)); /*  *PRINT-LENGTH* */
   ecl_terpri(ECL_NIL);
   ecl_princ(VV[102],ECL_NIL);
   ecl_terpri(ECL_NIL);
   ecl_terpri(ECL_NIL);
   value0 = VV[32];
   {
    ecl_frs_push(cl_env_copy,value0);
    if (__ecl_frs_push_result==0) {               /*  BEGIN CATCH 8   */
     L28inspect_object(v1object);
    }
    ecl_frs_pop(cl_env_copy);                     /*  END CATCH 8     */
   }
   ecl_terpri(ECL_NIL);
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 0;
   ecl_bds_unwind_n(cl_env_copy,7);
   return value0;
  }
 }
}
/*      function definition for INSPECT                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_inspect(cl_object v1object)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(ecl_symbol_value(ECL_SYM("*INSPECTOR-HOOK*",1920)))) { goto L2; }
  ecl_function_dispatch(cl_env_copy,ecl_symbol_value(ECL_SYM("*INSPECTOR-HOOK*",1920)))(1, v1object);
  goto L1;
L2:;
  L29default_inspector(v1object);
L1:;
  value0 = v1object;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for DESCRIBE                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_describe(volatile cl_narg narg, cl_object volatile v1object, ...)
{
 cl_object T0;
 cl_object volatile env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object volatile v2stream;
  va_list args; va_start(args,v1object);
  {
   int i = 1;
   if (i >= narg) {
    v2stream = ecl_symbol_value(ECL_SYM("*STANDARD-OUTPUT*",69));
   } else {
    i++;
    v2stream = va_arg(args,cl_object);
   }
  }
  va_end(args);
  ecl_bds_bind(cl_env_copy,VV[2],ECL_NIL);        /*  *INSPECT-MODE*  */
  ecl_bds_bind(cl_env_copy,VV[0],ecl_make_fixnum(0)); /*  *INSPECT-LEVEL* */
  ecl_bds_bind(cl_env_copy,VV[1],ECL_NIL);        /*  *INSPECT-HISTORY* */
  ecl_bds_bind(cl_env_copy,ECL_SYM("*PRINT-LEVEL*",53),ECL_NIL); /*  *PRINT-LEVEL* */
  ecl_bds_bind(cl_env_copy,ECL_SYM("*PRINT-LENGTH*",52),ECL_NIL); /*  *PRINT-LENGTH* */
  if (Null(cl_streamp(v2stream))) { goto L3; }
  T0 = v2stream;
  goto L2;
L3:;
  if (!(v2stream==ECL_NIL)) { goto L5; }
  T0 = ecl_symbol_value(ECL_SYM("*STANDARD-OUTPUT*",69));
  goto L2;
L5:;
  if (!((v2stream)==(ECL_T))) { goto L7; }
  T0 = ecl_symbol_value(ECL_SYM("*TERMINAL-IO*",70));
  goto L2;
L7:;
  T0 = cl_error(5, ECL_SYM("TYPE-ERROR",872), ECL_SYM("DATUM",1236), v2stream, ECL_SYM("EXPECTED-TYPE",1254), VV[103]);
L2:;
  ecl_bds_bind(cl_env_copy,ECL_SYM("*STANDARD-OUTPUT*",69),T0); /*  *STANDARD-OUTPUT* */
  ecl_terpri(ECL_NIL);
  value0 = VV[32];
  {
   ecl_frs_push(cl_env_copy,value0);
   if (__ecl_frs_push_result==0) {                /*  BEGIN CATCH 11  */
    L28inspect_object(v1object);
   }
   ecl_frs_pop(cl_env_copy);                      /*  END CATCH 11    */
  }
  ecl_terpri(ECL_NIL);
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 0;
  ecl_bds_unwind_n(cl_env_copy,6);
  return value0;
 }
}
/*      function definition for PRINT-DOC                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L32print_doc(cl_narg narg, cl_object v1symbol, ...)
{
 cl_object T0, T1;
 volatile cl_object lex0[2];
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2called_from_apropos_doc_p;
  va_list args; va_start(args,v1symbol);
  lex0[0] = v1symbol;                             /*  SYMBOL          */
  {
   int i = 1;
   if (i >= narg) {
    v2called_from_apropos_doc_p = ECL_NIL;
   } else {
    i++;
    v2called_from_apropos_doc_p = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v3x;
   lex0[1] = ECL_NIL;                             /*  F               */
   v3x = ECL_NIL;
   if (Null(cl_special_operator_p(lex0[0]))) { goto L5; }
   value0 = ecl_function_dispatch(cl_env_copy,VV[142])(2, lex0[0], ECL_SYM("FUNCTION",398)) /*  GET-DOCUMENTATION */;
   if ((value0)!=ECL_NIL) { goto L9; }
   T0 = VV[107];
   goto L7;
L9:;
   T0 = value0;
   goto L7;
L7:;
   if (Null(cl_macro_function(1, lex0[0]))) { goto L12; }
   T1 = VV[108];
   goto L11;
L12:;
   T1 = VV[109];
L11:;
   LC30doc1(lex0, T0, T1);
   goto L4;
L5:;
   if (Null(cl_macro_function(1, lex0[0]))) { goto L14; }
   value0 = ecl_function_dispatch(cl_env_copy,VV[142])(2, lex0[0], ECL_SYM("FUNCTION",398)) /*  GET-DOCUMENTATION */;
   if ((value0)!=ECL_NIL) { goto L18; }
   T0 = VV[107];
   goto L16;
L18:;
   T0 = value0;
   goto L16;
L16:;
   LC30doc1(lex0, T0, VV[110]);
   goto L4;
L14:;
   if (Null(cl_fboundp(lex0[0]))) { goto L20; }
   value0 = ecl_function_dispatch(cl_env_copy,VV[142])(2, lex0[0], ECL_SYM("FUNCTION",398)) /*  GET-DOCUMENTATION */;
   if ((value0)!=ECL_NIL) { goto L24; }
   T0 = VV[107];
   goto L22;
L24:;
   T0 = value0;
   goto L22;
L22:;
   LC30doc1(lex0, T0, VV[111]);
   goto L4;
L20:;
   v3x = ecl_function_dispatch(cl_env_copy,VV[142])(2, lex0[0], ECL_SYM("FUNCTION",398)) /*  GET-DOCUMENTATION */;
   if (Null(v3x)) { goto L4; }
   LC30doc1(lex0, v3x, VV[112]);
L4:;
   if (Null(cl_constantp(1, lex0[0]))) { goto L29; }
   T0 = cl_symbol_package(lex0[0]);
   T1 = cl_find_package(VV[41]);
   if (!((T0)==(T1))) { goto L33; }
   T0 = ecl_function_dispatch(cl_env_copy,VV[142])(2, lex0[0], ECL_SYM("VARIABLE",899)) /*  GET-DOCUMENTATION */;
   if (T0==ECL_NIL) { goto L28; }
   goto L31;
L33:;
   goto L31;
L31:;
   value0 = ecl_function_dispatch(cl_env_copy,VV[142])(2, lex0[0], ECL_SYM("VARIABLE",899)) /*  GET-DOCUMENTATION */;
   if ((value0)!=ECL_NIL) { goto L37; }
   T0 = VV[107];
   goto L35;
L37:;
   T0 = value0;
   goto L35;
L35:;
   LC30doc1(lex0, T0, VV[113]);
   goto L28;
L29:;
   if (Null(si_specialp(lex0[0]))) { goto L39; }
   value0 = ecl_function_dispatch(cl_env_copy,VV[142])(2, lex0[0], ECL_SYM("VARIABLE",899)) /*  GET-DOCUMENTATION */;
   if ((value0)!=ECL_NIL) { goto L43; }
   T0 = VV[107];
   goto L41;
L43:;
   T0 = value0;
   goto L41;
L41:;
   LC30doc1(lex0, T0, VV[114]);
   goto L28;
L39:;
   v3x = ecl_function_dispatch(cl_env_copy,VV[142])(2, lex0[0], ECL_SYM("VARIABLE",899)) /*  GET-DOCUMENTATION */;
   if ((v3x)!=ECL_NIL) { goto L46; }
   if (!(ecl_boundp(cl_env_copy,lex0[0]))) { goto L28; }
   goto L45;
L46:;
L45:;
   value0 = v3x;
   if ((value0)!=ECL_NIL) { goto L51; }
   T0 = VV[107];
   goto L49;
L51:;
   T0 = value0;
   goto L49;
L49:;
   LC30doc1(lex0, T0, VV[115]);
L28:;
   v3x = ecl_function_dispatch(cl_env_copy,VV[142])(2, lex0[0], ECL_SYM("TYPE",871)) /*  GET-DOCUMENTATION */;
   if (Null(v3x)) { goto L54; }
   LC30doc1(lex0, v3x, VV[116]);
   goto L53;
L54:;
   v3x = si_get_sysprop(lex0[0], VV[117]);
   if (Null(v3x)) { goto L53; }
   T0 = LC31good_package(lex0);
   ecl_bds_bind(cl_env_copy,ECL_SYM("*PACKAGE*",45),T0); /*  *PACKAGE* */
   T0 = cl_format(3, ECL_NIL, VV[118], v3x);
   LC30doc1(lex0, T0, VV[116]);
   ecl_bds_unwind1(cl_env_copy);
L53:;
   v3x = ecl_function_dispatch(cl_env_copy,VV[142])(2, lex0[0], ECL_SYM("STRUCTURE",828)) /*  GET-DOCUMENTATION */;
   if (Null(v3x)) { goto L61; }
   LC30doc1(lex0, v3x, VV[119]);
   goto L60;
L61:;
   v3x = si_get_sysprop(lex0[0], VV[120]);
   if (Null(v3x)) { goto L60; }
   T0 = cl_format(3, ECL_NIL, VV[121], v3x);
   LC30doc1(lex0, T0, VV[119]);
L60:;
   v3x = ecl_function_dispatch(cl_env_copy,VV[142])(2, lex0[0], ECL_SYM("SETF",752)) /*  GET-DOCUMENTATION */;
   if (Null(v3x)) { goto L66; }
   LC30doc1(lex0, v3x, VV[122]);
   goto L3;
L66:;
   v3x = si_get_sysprop(lex0[0], ECL_SYM("SETF-METHOD",1157));
   if (Null(v3x)) { goto L3; }
   T0 = LC31good_package(lex0);
   ecl_bds_bind(cl_env_copy,ECL_SYM("*PACKAGE*",45),T0); /*  *PACKAGE* */
   if (!(ECL_CONSP(v3x))) { goto L73; }
   {
    cl_object v4;
    v4 = ecl_car(v3x);
    if (!((v4)==(ECL_SYM("LAMBDA",454)))) { goto L76; }
    T1 = ecl_cdr(v3x);
    T0 = CONS(ECL_SYM("DEFINE-SETF-EXPANDER",283),T1);
    goto L72;
L76:;
    if (!((v4)==(ECL_SYM("LAMBDA-BLOCK",1367)))) { goto L78; }
    T1 = ecl_cddr(v3x);
    T0 = CONS(ECL_SYM("DEFINE-SETF-EXPANDER",283),T1);
    goto L72;
L78:;
    T0 = ECL_NIL;
    goto L72;
   }
L73:;
   T0 = ECL_NIL;
L72:;
   T1 = cl_format(3, ECL_NIL, VV[123], T0);
   LC30doc1(lex0, T1, VV[122]);
   ecl_bds_unwind1(cl_env_copy);
L3:;
   if (Null(v2called_from_apropos_doc_p)) { goto L80; }
   value0 = lex0[1];
   cl_env_copy->nvalues = 1;
   return value0;
L80:;
   if (Null(lex0[1])) { goto L83; }
   cl_format(2, ECL_T, VV[124]);
   goto L82;
L83:;
   cl_format(3, ECL_T, VV[125], lex0[0]);
L82:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 0;
   return value0;
  }
 }
}
/*      local function GOOD-PACKAGE                                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC31good_package(volatile cl_object *lex0)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_symbol_package(lex0[0]);
  T1 = cl_find_package(VV[105]);
  if (!((T0)==(T1))) { goto L1; }
  value0 = cl_find_package(VV[106]);
  return value0;
L1:;
  value0 = ecl_symbol_value(ECL_SYM("*PACKAGE*",45));
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function DOC1                                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC30doc1(volatile cl_object *lex0, cl_object v1doc, cl_object v2ind)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  lex0[1] = ECL_T;
  value0 = cl_format(5, ECL_T, VV[104], lex0[0], v2ind, v1doc);
  return value0;
 }
}
/*      function definition for HELP*                                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L33help_(cl_narg narg, cl_object v1string, ...)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2package;
  va_list args; va_start(args,v1string);
  {
   int i = 1;
   if (i >= narg) {
    v2package = VV[105];
   } else {
    i++;
    v2package = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v3f;
   cl_object v4l;
   v3f = ECL_NIL;
   v4l = cl_apropos_list(2, v1string, v2package);
   goto L7;
L6:;
   T0 = ecl_car(v4l);
   if (Null(L32print_doc(2, T0, ECL_T))) { goto L9; }
   v3f = ECL_T;
L9:;
   v4l = ecl_cdr(v4l);
L7:;
   if (ecl_endp(v4l)) { goto L14; }
   goto L6;
L14:;
   if (Null(v3f)) { goto L17; }
   T0 = VV[124];
   goto L16;
L17:;
   T0 = VV[127];
L16:;
   if (Null(v2package)) { goto L21; }
   T2 = si_coerce_to_package(v2package);
   T1 = cl_package_name(T2);
   goto L19;
L21:;
   T1 = ECL_NIL;
   goto L19;
L19:;
   cl_format(5, ECL_T, T0, v1string, v2package, T1);
  }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 0;
  return value0;
 }
}

#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/clos/describe.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclNj7vpPa7_HpJmqq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:LSP;DESCRIBE.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclNj7vpPa7_HpJmqq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  si_Xmake_special(VV[0]);
  cl_set(VV[0],ecl_make_fixnum(0));
  si_Xmake_special(VV[1]);
  cl_set(VV[1],ECL_NIL);
  si_Xmake_special(VV[2]);
  cl_set(VV[2],ECL_NIL);
  si_Xmake_special(VV[3]);
  cl_set(VV[3],ECL_NIL);
  si_Xmake_special(VV[4]);
  cl_set(VV[4],ECL_NIL);
  ecl_cmp_defun(VV[129]);                         /*  INSPECT-READ-LINE */
  ecl_cmp_defun(VV[130]);                         /*  SELECT-P        */
  ecl_cmp_defun(VV[131]);                         /*  SELECT-E        */
  ecl_cmp_defun(VV[132]);                         /*  SELECT-U        */
  ecl_cmp_defun(VV[133]);                         /*  SELECT-?        */
  ecl_cmp_defun(VV[134]);                         /*  READ-INSPECT-COMMAND */
  ecl_cmp_defun(VV[136]);                         /*  INSPECT-INDENT  */
  ecl_cmp_defun(VV[137]);                         /*  INSPECT-INDENT-1 */
  (void)0; /* No entry created for INSPECT-SYMBOL */
  (void)0; /* No entry created for INSPECT-PACKAGE */
  (void)0; /* No entry created for INSPECT-CHARACTER */
  (void)0; /* No entry created for INSPECT-NUMBER */
  (void)0; /* No entry created for INSPECT-CONS */
  (void)0; /* No entry created for INSPECT-STRING */
  (void)0; /* No entry created for INSPECT-VECTOR */
  (void)0; /* No entry created for INSPECT-ARRAY */
  (void)0; /* No entry created for SELECT-HT-N */
  (void)0; /* No entry created for SELECT-HT-L */
  (void)0; /* No entry created for SELECT-HT-J */
  (void)0; /* No entry created for SELECT-HT-? */
  (void)0; /* No entry created for INSPECT-HASHTABLE */
  ecl_cmp_defun(VV[138]);                         /*  INSPECT-INSTANCE */
  ecl_cmp_defun(VV[140]);                         /*  INSPECT-OBJECT  */
  (void)0; /* No entry created for DEFAULT-INSPECTOR */
  (void)0; /* No entry created for INSPECT */
  (void)0; /* No entry created for DESCRIBE */
  ecl_cmp_defun(VV[141]);                         /*  PRINT-DOC       */
  ecl_cmp_defun(VV[143]);                         /*  HELP*           */
}
