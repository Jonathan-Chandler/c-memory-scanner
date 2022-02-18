/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:LSP;CMDLINE.LSP                                   */
#include <ecl/ecl-cmp.h>
#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/lsp/cmdline.eclh"
/*      function definition for COMMAND-ARGS                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L1command_args()
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_fixnum v1;
   cl_object v2i;
   v1 = ecl_fixnum(si_argc());
   v2i = ecl_make_fixnum(0);
   {
    cl_object v3;
    cl_object v4;
    v3 = ecl_list1(ECL_NIL);
    v4 = v3;
L5:;
    if (!(ecl_greatereq(v2i,ecl_make_fixnum(v1)))) { goto L7; }
    goto L6;
L7:;
    {
     cl_object v5;
     v5 = v4;
     if (ecl_unlikely(ECL_ATOM(v5))) FEtype_error_cons(v5);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     T0 = v5;
    }
    T1 = si_argv(v2i);
    v4 = ecl_list1(T1);
    (ECL_CONS_CDR(T0)=v4,T0);
    v2i = ecl_one_plus(v2i);
    goto L5;
L6:;
    value0 = ecl_cdr(v3);
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      function definition for COMMAND-ARG-ERROR                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L2command_arg_error(cl_narg narg, cl_object v1str, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2fmt_args;
  ecl_va_list args; ecl_va_start(args,v1str,narg,1);
  v2fmt_args = cl_grab_rest_args(args);
  ecl_va_end(args);
  T0 = (ECL_SYM("FORMAT",389)->symbol.gfdef);
  cl_apply(4, T0, ecl_symbol_value(ECL_SYM("*ERROR-OUTPUT*",35)), v1str, v2fmt_args);
  ecl_princ(ecl_symbol_value(ECL_SYM("*HELP-MESSAGE*",1897)),ecl_symbol_value(ECL_SYM("*ERROR-OUTPUT*",35)));
  value0 = si_quit(1, ecl_make_fixnum(1));
  return value0;
 }
}
/*      function definition for PRODUCE-INIT-CODE                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L4produce_init_code(cl_object v1option_list, cl_object v2rules)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3match_option;
   cl_object v4commands;
   cl_object v5stop;
   cl_object v6loadrc;
   {
    cl_object v7;
    v7 = ecl_make_cfun((cl_objectfn_fixed)LC3__lambda5,ECL_NIL,Cblock,2);
    v3match_option = v7;
   }
   v4commands = ECL_NIL;
   v5stop = ECL_NIL;
   v6loadrc = ECL_T;
   goto L7;
L6:;
   {
    cl_object v7option;
    cl_object v8rule;
    {
     cl_object v9;
     v9 = v1option_list;
     {
      cl_object v10;
      v10 = v9;
      if (ecl_unlikely(!ECL_LISTP(v10))) FEtype_error_list(v10);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
     }
     if (Null(v9)) { goto L15; }
     {
      cl_object v10;
      v10 = ECL_CONS_CDR(v9);
      v1option_list = v10;
      v9 = ECL_CONS_CAR(v9);
     }
L15:;
     v7option = v9;
    }
    {
     cl_object v9;
     v9 = v2rules;
     goto L25;
L24:;
     {
      cl_object v10;
      cl_object v11;
      {
       cl_object v12;
       v12 = v9;
       if (ecl_unlikely(ECL_ATOM(v12))) FEtype_error_cons(v12);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v10 = v12;
      }
      v11 = ECL_CONS_CAR(v10);
      if (Null(v11)) { goto L27; }
      {
       cl_object v12;
       {
        cl_object v13;
        v13 = v11;
        if (ecl_unlikely(ECL_ATOM(v13))) FEtype_error_cons(v13);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        T0 = v13;
       }
       v12 = ECL_CONS_CAR(T0);
       if (Null(ecl_function_dispatch(cl_env_copy,v3match_option)(2, v7option, v12))) { goto L27; }
       v8rule = v11;
       goto L21;
      }
     }
L27:;
     v9 = ECL_CONS_CDR(v9);
L25:;
     if (v9==ECL_NIL) { goto L40; }
     goto L24;
L40:;
     v8rule = ECL_NIL;
    }
L21:;
    if ((v8rule)!=ECL_NIL) { goto L42; }
    {
     cl_object v9;
     v9 = v2rules;
     goto L50;
L49:;
     {
      cl_object v10;
      cl_object v11;
      {
       cl_object v12;
       v12 = v9;
       if (ecl_unlikely(ECL_ATOM(v12))) FEtype_error_cons(v12);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v10 = v12;
      }
      v11 = ECL_CONS_CAR(v10);
      if (Null(v11)) { goto L52; }
      {
       cl_object v12;
       {
        cl_object v13;
        v13 = v11;
        if (ecl_unlikely(ECL_ATOM(v13))) FEtype_error_cons(v13);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        T0 = v13;
       }
       v12 = ECL_CONS_CAR(T0);
       if (Null(ecl_function_dispatch(cl_env_copy,v3match_option)(2, VV[2], v12))) { goto L52; }
       v8rule = v11;
       goto L46;
      }
     }
L52:;
     v9 = ECL_CONS_CDR(v9);
L50:;
     if (v9==ECL_NIL) { goto L65; }
     goto L49;
L65:;
     v8rule = ECL_NIL;
    }
L46:;
    v5stop = ECL_T;
    if ((v8rule)!=ECL_NIL) { goto L42; }
    L2command_arg_error(2, VV[3], v7option);
L42:;
    {
     cl_object v9;
     v9 = ecl_cadddr(v8rule);
     if (!(ecl_eql(v9,VV[4]))) { goto L71; }
     v6loadrc = ECL_NIL;
     goto L69;
L71:;
     if (!(ecl_eql(v9,VV[5]))) { goto L74; }
     v6loadrc = ECL_T;
     goto L69;
L74:;
     if (!(ecl_eql(v9,VV[6]))) { goto L69; }
     T0 = CONS(v7option,v1option_list);
     T1 = cl_list(2, ECL_SYM("QUOTE",681), T0);
     v1option_list = ecl_list1(T1);
     v5stop = ECL_T;
    }
L69:;
    {
     cl_object v9;
     cl_object v10;
     T0 = ecl_caddr(v8rule);
     v9 = cl_copy_tree(T0);
     v10 = ecl_cadr(v8rule);
     {
      cl_object v11;
      v11 = ecl_make_bool(ecl_equal(v10,ecl_make_fixnum(0)));
      if (Null(v11)) { goto L85; }
      goto L83;
L85:;
      if (!(ecl_equal(v10,ECL_SYM("&OPTIONAL",13)))) { goto L87; }
      if (v1option_list==ECL_NIL) { goto L90; }
      {
       cl_object v12;
       v12 = ecl_car(v1option_list);
       {
        cl_object v13;
        v13 = v2rules;
        goto L96;
L95:;
        {
         cl_object v14;
         cl_object v15;
         {
          cl_object v16;
          v16 = v13;
          if (ecl_unlikely(ECL_ATOM(v16))) FEtype_error_cons(v16);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          v14 = v16;
         }
         v15 = ECL_CONS_CAR(v14);
         if (Null(v15)) { goto L98; }
         {
          cl_object v16;
          {
          cl_object v17;
          v17 = v15;
          if (ecl_unlikely(ECL_ATOM(v17))) FEtype_error_cons(v17);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          T0 = v17;
          }
          v16 = ECL_CONS_CAR(T0);
          if (Null(ecl_function_dispatch(cl_env_copy,v3match_option)(2, v12, v16))) { goto L98; }
          if (Null(v15)) { goto L87; }
          goto L88;
         }
        }
L98:;
        v13 = ECL_CONS_CDR(v13);
L96:;
        if (v13==ECL_NIL) { goto L111; }
        goto L95;
L111:;
        goto L87;
       }
      }
L90:;
L88:;
      cl_nsubst(3, ECL_T, ecl_make_fixnum(1), v9);
      goto L83;
L87:;
      if (!(v1option_list==ECL_NIL)) { goto L113; }
      L2command_arg_error(2, VV[7], v7option);
      goto L83;
L113:;
      if ((v10)==(ECL_SYM("REST",721))) { goto L117; }
      if (!((v10)==(ECL_SYM("&REST",14)))) { goto L115; }
      goto L116;
L117:;
L116:;
      cl_nsubst(3, v1option_list, v10, v9);
      v1option_list = ECL_NIL;
      goto L83;
L115:;
      {
       cl_object v12;
       v12 = v1option_list;
       {
        cl_object v13;
        v13 = v12;
        if (ecl_unlikely(!ECL_LISTP(v13))) FEtype_error_list(v13);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v12)) { goto L126; }
       {
        cl_object v13;
        v13 = ECL_CONS_CDR(v12);
        v1option_list = v13;
        v12 = ECL_CONS_CAR(v12);
       }
L126:;
       T0 = v12;
      }
      cl_nsubst(3, T0, ecl_make_fixnum(1), v9);
     }
L83:;
     v4commands = CONS(v9,v4commands);
    }
   }
L7:;
   if ((v5stop)!=ECL_NIL) { goto L133; }
   if (v1option_list==ECL_NIL) { goto L133; }
   goto L6;
L133:;
   T0 = cl_nreverse(v4commands);
   T1 = ecl_append(T0,VV[9]);
   T2 = cl_listX(3, ECL_SYM("LET",479), VV[8], T1);
   cl_env_copy->nvalues = 3;
   cl_env_copy->values[2] = v1option_list;
   cl_env_copy->values[1] = v6loadrc;
   cl_env_copy->values[0] = T2;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA5                                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC3__lambda5(cl_object v1k, cl_object v2r)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ECL_LISTP(v2r))) { goto L1; }
  {
   cl_object v3;
   v3 = v2r;
   goto L6;
L5:;
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
    if (Null(cl_stringE(2, v1k, v5))) { goto L8; }
    value0 = v4;
    cl_env_copy->nvalues = 1;
    return value0;
   }
L8:;
   v3 = ECL_CONS_CDR(v3);
L6:;
   if (v3==ECL_NIL) { goto L16; }
   goto L5;
L16:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
L1:;
  value0 = cl_stringE(2, v1k, v2r);
  return value0;
 }
}
/*      function definition for PROCESS-COMMAND-ARGS                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L10process_command_args(volatile cl_narg narg, ...)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7;
 cl_object volatile env0 = ECL_NIL;
 cl_object volatile CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  cl_object volatile v1args;
  cl_object volatile v2rules;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  {
   cl_object keyvars[4];
   cl_parse_key(args,2,L10process_command_argskeys,keyvars,NULL,FALSE);
   ecl_va_end(args);
   if (Null(keyvars[2])) {
    v1args = ecl_cdr(ecl_symbol_value(ECL_SYM("*COMMAND-ARGS*",1901)));
   } else {
    v1args = keyvars[0];
   }
   if (Null(keyvars[3])) {
    v2rules = ecl_symbol_value(ECL_SYM("+DEFAULT-COMMAND-ARG-RULES+",1899));
   } else {
    v2rules = keyvars[1];
   }
  }
  {
   cl_object volatile v4;                         /*  COMMANDS        */
   cl_object volatile v5;                         /*  LOADRC          */
   value0 = L4produce_init_code(v1args, v2rules);
   {
    const int v6 = cl_env_copy->nvalues;
    v4 = value0;
    cl_object v7;
    v7 = (v6<=1)? ECL_NIL : cl_env_copy->values[1];
    v5 = v7;
   }
   {
    volatile cl_object env1 = env0;
    env1 = ECL_NIL;
    CLV0 = env1 = CONS(ECL_NIL,env1);
    CLV1 = env1 = CONS(ECL_NEW_FRAME_ID(cl_env_copy),env1); /*  TAGBODY */
    {
     ecl_frs_push(cl_env_copy,ECL_CONS_CAR(CLV1));
     if (__ecl_frs_push_result) {
     if (cl_env_copy->values[0]==ecl_make_fixnum(0))goto L4;
     if (cl_env_copy->values[0]==ecl_make_fixnum(1))goto L5;
     ecl_internal_error("GO found an inexistent tag");
     }
    }
    {
     cl_object v6;
     v6 = ecl_make_cclosure_va((cl_objectfn)LC5__lambda70,env1,Cblock,0);
     T0 = v6;
    }
    {
     cl_object v6;
     v6 = ecl_make_cfun((cl_objectfn_fixed)LC6__lambda71,ECL_NIL,Cblock,1);
     T1 = v6;
    }
    T2 = ecl_function_dispatch(cl_env_copy,VV[21])(6, ECL_SYM("NAME",1300), ECL_SYM("CONTINUE",252), ECL_SYM("FUNCTION",1264), T0, VV[11], T1) /*  MAKE-RESTART */;
    {
     cl_object v6;
     v6 = ecl_make_cclosure_va((cl_objectfn)LC7__lambda72,env1,Cblock,0);
     T3 = v6;
    }
    {
     cl_object v6;
     v6 = ecl_make_cfun((cl_objectfn_fixed)LC8__lambda73,ECL_NIL,Cblock,1);
     T4 = v6;
    }
    T5 = ecl_function_dispatch(cl_env_copy,VV[21])(6, ECL_SYM("NAME",1300), ECL_SYM("ABORT",79), ECL_SYM("FUNCTION",1264), T3, VV[11], T4) /*  MAKE-RESTART */;
    T6 = cl_list(2, T2, T5);
    T7 = CONS(T6,ecl_symbol_value(ECL_SYM("*RESTART-CLUSTERS*",5)));
    ecl_bds_bind(cl_env_copy,ECL_SYM("*RESTART-CLUSTERS*",5),T7); /*  *RESTART-CLUSTERS* */
    {
     cl_object v6;
     v6 = ecl_make_cfun((cl_objectfn_fixed)LC9__lambda74,ECL_NIL,Cblock,1);
     T0 = v6;
    }
    T1 = CONS(ECL_SYM("ERROR",339),T0);
    T2 = ecl_list1(T1);
    T3 = CONS(T2,ecl_symbol_value(ECL_SYM("*HANDLER-CLUSTERS*",6)));
    ecl_bds_bind(cl_env_copy,ECL_SYM("*HANDLER-CLUSTERS*",6),T3); /*  *HANDLER-CLUSTERS* */
    if (Null(v5)) { goto L12; }
    {
     cl_object v6;
     v6 = ecl_symbol_value(ECL_SYM("*LISP-INIT-FILE-LIST*",1898));
     goto L17;
L16:;
     {
      cl_object v7file;
      v7file = ecl_car(v6);
      if (Null(cl_load(7, v7file, ECL_SYM("IF-DOES-NOT-EXIST",1268), ECL_NIL, ECL_SYM("SEARCH-LIST",1332), ECL_NIL, ECL_SYM("VERBOSE",1353), ECL_NIL))) { goto L21; }
      goto L12;
L21:;
     }
     v6 = ecl_cdr(v6);
L17:;
     if (Null(v6)) { goto L25; }
     goto L16;
L25:;
    }
L12:;
    value0 = cl_eval(v4);
    ecl_frs_pop(cl_env_copy);
    ecl_bds_unwind1(cl_env_copy);
    ecl_bds_unwind1(cl_env_copy);
    return value0;
L4:;
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    ecl_frs_pop(cl_env_copy);
    return value0;
L5:;
    value0 = si_quit(2, ecl_make_fixnum(-1), ECL_NIL);
    ecl_frs_pop(cl_env_copy);
    return value0;
   }
  }
 }
}
/*      closure LAMBDA70                                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC5__lambda70(cl_narg narg, ...)
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
/*      local function LAMBDA71                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC6__lambda71(cl_object v1stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_write_string(2, VV[12], v1stream);
  return value0;
 }
}
/*      closure LAMBDA72                                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC7__lambda72(cl_narg narg, ...)
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
  cl_go(ECL_CONS_CAR(CLV1),ecl_make_fixnum(1));
 }
 }
}
/*      local function LAMBDA73                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC8__lambda73(cl_object v1stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_write_string(2, VV[13], v1stream);
  return value0;
 }
}
/*      local function LAMBDA74                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC9__lambda74(cl_object v1c)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(ecl_symbol_value(VV[0]))) { goto L1; }
  value0 = (cl_env_copy->function=(ECL_SYM("INVOKE-DEBUGGER",447)->symbol.gfdef))->cfun.entry(1, v1c) /*  INVOKE-DEBUGGER */;
  return value0;
L1:;
  cl_format(3, ecl_symbol_value(ECL_SYM("*ERROR-OUTPUT*",35)), VV[14], v1c);
  value0 = si_quit(1, ecl_make_fixnum(1));
  return value0;
 }
}

#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/lsp/cmdline.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _ecl8uSF6ea7_N2F6lq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:LSP;CMDLINE.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_ecl8uSF6ea7_N2F6lq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  si_Xmake_special(VV[0]);
  cl_set(VV[0],ECL_NIL);
  si_Xmake_special(ECL_SYM("*LISP-INIT-FILE-LIST*",1898));
  cl_set(ECL_SYM("*LISP-INIT-FILE-LIST*",1898),VVtemp[1]);
  si_Xmake_special(ECL_SYM("*HELP-MESSAGE*",1897));
  cl_set(ECL_SYM("*HELP-MESSAGE*",1897),VVtemp[2]);
  ecl_cmp_defun(VV[16]);                          /*  COMMAND-ARGS    */
  si_Xmake_special(ECL_SYM("*COMMAND-ARGS*",1901));
  cl_set(ECL_SYM("*COMMAND-ARGS*",1901),L1command_args());
  si_Xmake_special(ECL_SYM("*UNPROCESSED-ECL-COMMAND-ARGS*",1903));
  cl_set(ECL_SYM("*UNPROCESSED-ECL-COMMAND-ARGS*",1903),ECL_NIL);
  (void)0; /* No entry created for COMMAND-ARG-ERROR */
  si_Xmake_constant(ECL_SYM("+DEFAULT-COMMAND-ARG-RULES+",1899), VVtemp[3]);
  ecl_cmp_defun(VV[17]);                          /*  PRODUCE-INIT-CODE */
  ecl_cmp_defun(VV[18]);                          /*  PROCESS-COMMAND-ARGS */
}
