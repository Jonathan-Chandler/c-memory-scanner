/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:LSP;EXPORT.LSP                                    */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/lsp/export.eclh"
/*      function definition for FILTER-DOLIST-DECLARATIONS            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L2filter_dolist_declarations(cl_object v1declarations)
{
 cl_object env0 = ECL_NIL;
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object env1 = env0;
   env1 = ECL_NIL;
   CLV0 = env1 = CONS(ECL_NIL,env1);              /*  A               */
   {
    cl_object v2;
    {
     cl_object v3;
     v3 = ecl_make_cclosure_va((cl_objectfn)LC1__lambda4,env1,Cblock,1);
     v2 = v3;
    }
    {
     cl_object v3;
     cl_object v4;
     v3 = ECL_NIL;
     {
      cl_object v5;
      v5 = v1declarations;
      if (ecl_unlikely(!ECL_LISTP(v5))) FEtype_error_list(v5);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v4 = v5;
     }
L7:;
     if (!(ecl_endp(v4))) { goto L9; }
     goto L8;
L9:;
     v3 = _ecl_car(v4);
     {
      cl_object v5;
      v5 = _ecl_cdr(v4);
      if (ecl_unlikely(!ECL_LISTP(v5))) FEtype_error_list(v5);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v4 = v5;
     }
     ecl_function_dispatch(cl_env_copy,v2)(1, v3);
     goto L7;
L8:;
     goto L1;
    }
   }
L1:;
   value0 = cl_nreverse(ECL_CONS_CAR(CLV0));
   return value0;
  }
 }
}
/*      closure LAMBDA4                                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC1__lambda4(cl_narg narg, cl_object v1clause, ...)
{
 cl_object T0;
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV0 = env0;                                     /*  A               */
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=1)) FEwrong_num_arguments_anonym();
 {
TTL:
  if (!(ECL_CONSP(v1clause))) { goto L4; }
  T0 = ecl_car(v1clause);
  if ((T0)==(ECL_SYM("TYPE",871))) { goto L1; }
  T0 = ecl_car(v1clause);
  if ((T0)==(ECL_SYM("IGNORE",430))) { goto L1; }
  goto L2;
L4:;
  goto L2;
L2:;
  ECL_CONS_CAR(CLV0) = CONS(v1clause,ECL_CONS_CAR(CLV0));
  value0 = ECL_CONS_CAR(CLV0);
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
 }
}
/*      local function DOLIST                                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC3dolist(cl_object v1whole, cl_object v2env)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3body;
   cl_object v4control;
   cl_object v5var;
   cl_object v6expr;
   cl_object v7exit;
   v3body = ECL_NIL;
   v4control = ECL_NIL;
   v5var = ECL_NIL;
   v6expr = ECL_NIL;
   v7exit = ECL_NIL;
   v3body = ecl_cdr(v1whole);
   if (!(ecl_endp(v3body))) { goto L8; }
   si_simple_program_error(3, VV[2], ECL_SYM("DOLIST",315), v1whole);
L8:;
   v4control = ecl_car(v3body);
   v3body = ecl_cdr(v3body);
   if (!(ecl_endp(v4control))) { goto L14; }
   si_simple_program_error(3, VV[2], ECL_SYM("DOLIST",315), v1whole);
L14:;
   v5var = ecl_car(v4control);
   v4control = ecl_cdr(v4control);
   {
    cl_fixnum v8;
    v8 = ecl_length(v4control);
    if (!(((1)<=(v8) && (v8)<=(2)))) { goto L21; }
   }
   v6expr = ecl_car(v4control);
   v7exit = ecl_cdr(v4control);
   goto L20;
L21:;
   si_simple_program_error(3, VV[2], ECL_SYM("DOLIST",315), v1whole);
L20:;
   {
    cl_object v9;                                 /*  DECLARATIONS    */
    cl_object v10;                                /*  BODY            */
    value0 = si_process_declarations(2, v3body, ECL_NIL);
    {
     const int v11 = cl_env_copy->nvalues;
     v9 = value0;
     cl_object v12;
     v12 = (v11<=1)? ECL_NIL : cl_env_copy->values[1];
     v10 = v12;
    }
    T0 = cl_list(2, VV[3], v6expr);
    T1 = ecl_list1(T0);
    T2 = cl_list(2, v5var, VV[4]);
    T3 = ecl_list1(T2);
    T4 = CONS(ECL_SYM("DECLARE",276),v9);
    T5 = CONS(ECL_SYM("TAGBODY",852),v10);
    T6 = cl_list(5, ECL_SYM("LET",479), T3, T4, T5, VV[5]);
    T7 = cl_list(3, ECL_SYM("WHILE",1530), VV[3], T6);
    if (Null(v7exit)) { goto L28; }
    T9 = cl_list(2, v5var, ECL_NIL);
    T10 = ecl_list1(T9);
    T11 = cl_list(2, ECL_SYM("IGNORABLE",429), v5var);
    T12 = L2filter_dolist_declarations(v9);
    T13 = cl_listX(3, ECL_SYM("DECLARE",276), T11, T12);
    T8 = cl_listX(4, ECL_SYM("LET",479), T10, T13, v7exit);
    goto L27;
L28:;
    T8 = ECL_NIL;
L27:;
    T9 = cl_list(4, ECL_SYM("LET*",480), T1, T7, T8);
    value0 = cl_list(3, ECL_SYM("BLOCK",139), ECL_NIL, T9);
    return value0;
   }
  }
 }
}
/*      local function DOTIMES                                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC4dotimes(cl_object v1whole, cl_object v2env)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3body;
   cl_object v4control;
   cl_object v5var;
   cl_object v6expr;
   cl_object v7exit;
   v3body = ECL_NIL;
   v4control = ECL_NIL;
   v5var = ECL_NIL;
   v6expr = ECL_NIL;
   v7exit = ECL_NIL;
   v3body = ecl_cdr(v1whole);
   if (!(ecl_endp(v3body))) { goto L8; }
   si_simple_program_error(3, VV[2], ECL_SYM("DOTIMES",316), v1whole);
L8:;
   v4control = ecl_car(v3body);
   v3body = ecl_cdr(v3body);
   if (!(ecl_endp(v4control))) { goto L14; }
   si_simple_program_error(3, VV[2], ECL_SYM("DOTIMES",316), v1whole);
L14:;
   v5var = ecl_car(v4control);
   v4control = ecl_cdr(v4control);
   {
    cl_fixnum v8;
    v8 = ecl_length(v4control);
    if (!(((1)<=(v8) && (v8)<=(2)))) { goto L21; }
   }
   v6expr = ecl_car(v4control);
   v7exit = ecl_cdr(v4control);
   goto L20;
L21:;
   si_simple_program_error(3, VV[2], ECL_SYM("DOTIMES",316), v1whole);
L20:;
   {
    cl_object v9;                                 /*  DECLARATIONS    */
    cl_object v10;                                /*  BODY            */
    value0 = si_process_declarations(2, v3body, ECL_NIL);
    {
     const int v11 = cl_env_copy->nvalues;
     v9 = value0;
     cl_object v12;
     v12 = (v11<=1)? ECL_NIL : cl_env_copy->values[1];
     v10 = v12;
    }
    if (!(ECL_FIXNUMP(v6expr)||ECL_BIGNUMP(v6expr))) { goto L27; }
    T0 = cl_list(3, ECL_SYM("INTEGER",439), ecl_make_fixnum(0), v6expr);
    T1 = cl_list(3, ECL_SYM("TYPE",871), T0, v5var);
    v9 = CONS(T1,v9);
L27:;
    T0 = cl_list(2, VV[6], v6expr);
    T1 = cl_list(2, v5var, ecl_make_fixnum(0));
    T2 = cl_list(2, T0, T1);
    T3 = CONS(ECL_SYM("DECLARE",276),v9);
    T4 = cl_list(3, ECL_SYM("<",74), v5var, VV[6]);
    T5 = cl_list(2, ECL_SYM("1+",72), v5var);
    T6 = cl_list(3, ECL_SYM("SETQ",753), v5var, T5);
    T7 = ecl_list1(T6);
    T8 = ecl_append(v10,T7);
    T9 = cl_listX(3, ECL_SYM("WHILE",1530), T4, T8);
    T10 = cl_listX(5, ECL_SYM("LET*",480), T2, T3, T9, v7exit);
    value0 = cl_list(3, ECL_SYM("BLOCK",139), ECL_NIL, T10);
    return value0;
   }
  }
 }
}
/*      local function DO/DO*-EXPAND                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC5do_do__expand(cl_object v1whole, cl_object v2env)
{
 cl_object T0, T1, T2, T3, T4, T5, T6;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3do_do_;
   cl_object v4control;
   cl_object v5test;
   cl_object v6result;
   cl_object v7vl;
   cl_object v8step;
   cl_object v9let;
   cl_object v10psetq;
   cl_object v11body;
   v3do_do_ = ECL_NIL;
   v4control = ECL_NIL;
   v5test = ECL_NIL;
   v6result = ECL_NIL;
   v7vl = ECL_NIL;
   v8step = ECL_NIL;
   v9let = ECL_NIL;
   v10psetq = ECL_NIL;
   v11body = ECL_NIL;
   v3do_do_ = ecl_car(v1whole);
   v11body = ecl_cdr(v1whole);
   if (!((v3do_do_)==(ECL_SYM("DO",309)))) { goto L15; }
   v9let = ECL_SYM("LET",479);
   v10psetq = ECL_SYM("PSETQ",678);
   goto L14;
L15:;
   v9let = ECL_SYM("LET*",480);
   v10psetq = ECL_SYM("SETQ",753);
L14:;
   if (!(ecl_endp(v11body))) { goto L23; }
   si_simple_program_error(3, VV[2], v3do_do_, v1whole);
L23:;
   v4control = ecl_car(v11body);
   v11body = ecl_cdr(v11body);
   if (!(ecl_endp(v11body))) { goto L29; }
   si_simple_program_error(3, VV[2], v3do_do_, v1whole);
L29:;
   v5test = ecl_car(v11body);
   v11body = ecl_cdr(v11body);
   if (!(ecl_endp(v5test))) { goto L35; }
   si_simple_program_error(3, VV[2], v3do_do_, v1whole);
L35:;
   v6result = ecl_cdr(v5test);
   v5test = ecl_car(v5test);
   {
    cl_object v12;
    v12 = v4control;
    goto L45;
L44:;
    {
     cl_object v13c;
     v13c = ecl_car(v12);
     if (!(ECL_SYMBOLP(v13c))) { goto L49; }
     v13c = ecl_list1(v13c);
L49:;
     {
      cl_fixnum v14;
      v14 = ecl_length(v13c);
      if (!((v14)==(1))) { goto L59; }
      goto L56;
      goto L57;
L59:;
      goto L57;
L57:;
      if (!((v14)==(2))) { goto L54; }
      goto L55;
L56:;
L55:;
      v7vl = CONS(v13c,v7vl);
      goto L52;
L54:;
      if (!((v14)==(3))) { goto L63; }
      T0 = ecl_butlast(v13c,1);
      v7vl = CONS(T0,v7vl);
      T0 = ecl_caddr(v13c);
      T1 = ecl_car(v13c);
      v8step = cl_listX(3, T0, T1, v8step);
      goto L52;
L63:;
      si_simple_program_error(3, VV[2], v3do_do_, v1whole);
     }
L52:;
    }
    v12 = ecl_cdr(v12);
L45:;
    if (Null(v12)) { goto L70; }
    goto L44;
L70:;
   }
   {
    cl_object v13;                                /*  DECLARATIONS    */
    cl_object v14;                                /*  REAL-BODY       */
    value0 = si_process_declarations(2, v11body, ECL_NIL);
    {
     const int v15 = cl_env_copy->nvalues;
     v13 = value0;
     cl_object v16;
     v16 = (v15<=1)? ECL_NIL : cl_env_copy->values[1];
     v14 = v16;
    }
    T0 = cl_nreverse(v7vl);
    T1 = CONS(ECL_SYM("DECLARE",276),v13);
    if (Null(v8step)) { goto L74; }
    T3 = cl_nreverse(v8step);
    T4 = CONS(v10psetq,T3);
    T2 = ecl_list1(T4);
    goto L73;
L74:;
    T2 = ECL_NIL;
L73:;
    T3 = ecl_append(v14,T2);
    T4 = cl_listX(3, ECL_SYM("UNTIL",1531), v5test, T3);
    value0 = v6result;
    if ((value0)!=ECL_NIL) { goto L78; }
    T5 = VV[9];
    goto L76;
L78:;
    T5 = value0;
    goto L76;
L76:;
    T6 = cl_listX(5, v9let, T0, T1, T4, T5);
    value0 = cl_list(3, ECL_SYM("BLOCK",139), ECL_NIL, T6);
    return value0;
   }
  }
 }
}
/*      function definition for EVAL-FEATURE                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L6eval_feature(cl_object v1x)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2operator;
   v2operator = ECL_NIL;
   if (!(ECL_SYMBOLP(v1x))) { goto L2; }
   if (Null(si_memq(v1x,ecl_symbol_value(ECL_SYM("*FEATURES*",36))))) { goto L5; }
   value0 = ECL_T;
   cl_env_copy->nvalues = 1;
   return value0;
L5:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L2:;
   if (!(ECL_ATOM(v1x))) { goto L7; }
   value0 = cl_error(2, VV[10], v1x);
   return value0;
L7:;
   v2operator = ecl_car(v1x);
   if (ECL_SYMBOLP(v2operator)) { goto L9; }
   value0 = cl_error(2, VV[11], v1x);
   return value0;
L9:;
   if (!(ecl_eql(v2operator,VV[12]))) { goto L12; }
   {
    cl_object v3;
    v3 = ecl_cdr(v1x);
    goto L17;
L16:;
    {
     cl_object v4x;
     v4x = ecl_car(v3);
     if ((L6eval_feature(v4x))!=ECL_NIL) { goto L21; }
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 1;
     return value0;
L21:;
    }
    v3 = ecl_cdr(v3);
L17:;
    if (Null(v3)) { goto L25; }
    goto L16;
L25:;
    value0 = ECL_T;
    cl_env_copy->nvalues = 1;
    return value0;
   }
L12:;
   if (!(ecl_eql(v2operator,VV[13]))) { goto L27; }
   {
    cl_object v4;
    v4 = ecl_cdr(v1x);
    goto L32;
L31:;
    {
     cl_object v5x;
     v5x = ecl_car(v4);
     if (Null(L6eval_feature(v5x))) { goto L36; }
     value0 = ECL_T;
     cl_env_copy->nvalues = 1;
     return value0;
L36:;
    }
    v4 = ecl_cdr(v4);
L32:;
    if (Null(v4)) { goto L40; }
    goto L31;
L40:;
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
   }
L27:;
   if (!(ecl_eql(v2operator,VV[14]))) { goto L42; }
   T0 = ecl_cadr(v1x);
   T1 = L6eval_feature(T0);
   value0 = Null(T1)?ECL_T:ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L42:;
   value0 = cl_error(2, VV[11], v1x);
   return value0;
  }
 }
}
/*      function definition for DO-READ-FEATURE                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L7do_read_feature(cl_object v1stream, cl_object v2subchar, cl_object v3arg, cl_object v4test)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(v3arg)) { goto L1; }
  cl_error(3, VV[15], v1stream, v2subchar);
L1:;
  {
   cl_object v5feature;
   T0 = cl_find_package(VV[16]);
   ecl_bds_bind(cl_env_copy,ECL_SYM("*PACKAGE*",45),T0); /*  *PACKAGE* */
   v5feature = cl_read(4, v1stream, ECL_T, ECL_NIL, ECL_T);
   ecl_bds_unwind1(cl_env_copy);
   if ((ecl_symbol_value(ECL_SYM("*READ-SUPPRESS*",66)))!=ECL_NIL) { goto L4; }
   T0 = L6eval_feature(v5feature);
   if (!((T0)==(v4test))) { goto L4; }
   value0 = cl_read(4, v1stream, ECL_T, ECL_NIL, ECL_T);
   return value0;
L4:;
   ecl_bds_bind(cl_env_copy,ECL_SYM("*READ-SUPPRESS*",66),ECL_T); /*  *READ-SUPPRESS* */
   cl_read(4, v1stream, ECL_T, ECL_NIL, ECL_T);
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 0;
   ecl_bds_unwind1(cl_env_copy);
   return value0;
  }
 }
}
/*      function definition for SHARP-+-READER                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L8sharp___reader(cl_object v1stream, cl_object v2subchar, cl_object v3arg)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = L7do_read_feature(v1stream, v2subchar, v3arg, ECL_T);
  return value0;
 }
}
/*      function definition for SHARP---READER                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L9sharp___reader(cl_object v1stream, cl_object v2subchar, cl_object v3arg)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = L7do_read_feature(v1stream, v2subchar, v3arg, ECL_NIL);
  return value0;
 }
}

#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/lsp/export.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _ecl7Yl0aFa7_Ki5mqq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:LSP;EXPORT.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_ecl7Yl0aFa7_Ki5mqq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  si_Xmake_special(VV[0]);
  cl_set(VV[0],ECL_NIL);
  si_Xmake_special(VV[1]);
  cl_set(VV[1],ecl_symbol_value(VV[0]));
  (void)0; /* No entry created for FILTER-DOLIST-DECLARATIONS */
  {
   cl_object v1f;
   {
    cl_object v2;
    v2 = ecl_make_cfun((cl_objectfn_fixed)LC3dolist,ECL_NIL,Cblock,2);
    v1f = v2;
   }
   si_fset(3, ECL_SYM("DOLIST",315), v1f, ECL_T);
  }
  {
   cl_object v1f;
   {
    cl_object v2;
    v2 = ecl_make_cfun((cl_objectfn_fixed)LC4dotimes,ECL_NIL,Cblock,2);
    v1f = v2;
   }
   si_fset(3, ECL_SYM("DOTIMES",316), v1f, ECL_T);
  }
  {
   cl_object v1f;
   {
    cl_object v2;
    v2 = ecl_make_cfun((cl_objectfn_fixed)LC5do_do__expand,ECL_NIL,Cblock,2);
    v1f = v2;
   }
   si_fset(3, ECL_SYM("DO",309), v1f, ECL_T);
   si_fset(3, ECL_SYM("DO*",310), v1f, ECL_T);
  }
  (void)0; /* No entry created for EVAL-FEATURE */
  (void)0; /* No entry created for DO-READ-FEATURE */
  ecl_cmp_defun(VV[19]);                          /*  SHARP-+-READER  */
  ecl_cmp_defun(VV[20]);                          /*  SHARP---READER  */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  T0 = si_standard_readtable();
  si_readtable_lock(2, T0, ECL_NIL);
 }
  cl_set_dispatch_macro_character(3, CODE_CHAR(35), CODE_CHAR(43), VV[17]);
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  T0 = si_standard_readtable();
  cl_set_dispatch_macro_character(4, CODE_CHAR(35), CODE_CHAR(43), VV[17], T0);
 }
  cl_set_dispatch_macro_character(3, CODE_CHAR(35), CODE_CHAR(45), VV[18]);
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  T0 = si_standard_readtable();
  cl_set_dispatch_macro_character(4, CODE_CHAR(35), CODE_CHAR(45), VV[18], T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  T0 = si_standard_readtable();
  si_readtable_lock(2, T0, ECL_T);
 }
}
