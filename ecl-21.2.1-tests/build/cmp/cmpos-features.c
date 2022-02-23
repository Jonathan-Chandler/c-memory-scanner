/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CMP;CMPOS-FEATURES.LSP                            */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/cmp/cmpos-features.eclh"
/*      function definition for RUN-AND-COLLECT                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L2run_and_collect(volatile cl_narg narg, cl_object volatile v1command, cl_object volatile v2args, ...)
{
 cl_object T0, T1, T2, T3;
 cl_object volatile env0 = ECL_NIL;
 cl_object volatile CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>3)) FEwrong_num_arguments_anonym();
 {
  cl_object volatile v3file;
  va_list args; va_start(args,v2args);
  {
   int i = 2;
   if (i >= narg) {
    v3file = ECL_NIL;
   } else {
    i++;
    v3file = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   volatile cl_object env1 = env0;
   env1 = ECL_NIL;
   CLV0 = env1 = CONS(ECL_NIL,env1);
   CLV1 = env1 = CONS(ECL_NEW_FRAME_ID(cl_env_copy),env1); /*  TAGBODY */
   {
    ecl_frs_push(cl_env_copy,ECL_CONS_CAR(CLV1));
    if (__ecl_frs_push_result) {
    if (cl_env_copy->values[0]==ecl_make_fixnum(0))goto L2;
    ecl_internal_error("GO found an inexistent tag");
    }
   }
   {
    cl_object volatile v4;
    v4 = ecl_make_cclosure_va((cl_objectfn)LC1__lambda3,env1,Cblock,1);
    T0 = v4;
   }
   T1 = CONS(ECL_SYM("ERROR",339),T0);
   T2 = ecl_list1(T1);
   T3 = CONS(T2,ecl_symbol_value(ECL_SYM("*HANDLER-CLUSTERS*",6)));
   ecl_bds_bind(cl_env_copy,ECL_SYM("*HANDLER-CLUSTERS*",6),T3); /*  *HANDLER-CLUSTERS* */
   {
    volatile cl_object v4;
    volatile cl_object v5lines;
    v4 = si_run_program_inner(v1command, v2args, ECL_SYM("DEFAULT",1237), ECL_T);
    v5lines = ECL_NIL;
    v5lines = ecl_function_dispatch(cl_env_copy,VV[31])(1, v4) /*  COLLECT-LINES */;
    if (!(v3file==ECL_NIL)) { goto L9; }
    value0 = v5lines;
    cl_env_copy->nvalues = 1;
    ecl_frs_pop(cl_env_copy);
    ecl_bds_unwind1(cl_env_copy);
    return value0;
L9:;
    if (Null(cl_probe_file(v3file))) { goto L11; }
    {
     volatile cl_object v6s;
     v6s = cl_open(3, v3file, ECL_SYM("DIRECTION",1240), ECL_SYM("INPUT",1280));
     {
      volatile bool unwinding = FALSE;
      cl_index v7=ECL_STACK_INDEX(cl_env_copy),v8;
      ecl_frame_ptr next_fr;
      ecl_frs_push(cl_env_copy,ECL_PROTECT_TAG);
      if (__ecl_frs_push_result) {
        unwinding = TRUE; next_fr=cl_env_copy->nlj_fr;
      } else {
      {
       struct ecl_stack_frame _ecl_inner_frame_aux;
       volatile cl_object _ecl_inner_frame = ecl_stack_frame_open(cl_env_copy,(cl_object)&_ecl_inner_frame_aux,0);
       {
        cl_object v9;
        v9 = _ecl_inner_frame;
        cl_env_copy->values[0] = ecl_function_dispatch(cl_env_copy,VV[31])(1, v6s) /*  COLLECT-LINES */;
        ecl_stack_frame_push_values(v9);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        if (Null(v6s)) { goto L19; }
        cl_close(1, v6s);
L19:;cl_env_copy->values[0]=ecl_stack_frame_pop_values(v9);
       }
       ecl_stack_frame_close(_ecl_inner_frame);
      }
      }
      ecl_frs_pop(cl_env_copy);
      v8=ecl_stack_push_values(cl_env_copy);
      if (Null(v6s)) { goto L21; }
      cl_close(3, v6s, ECL_SYM("ABORT",1217), ECL_T);
L21:;
      ecl_stack_pop_values(cl_env_copy,v8);
      if (unwinding) ecl_unwind(cl_env_copy,next_fr);
      value0 = cl_env_copy->values[0];
      ecl_frs_pop(cl_env_copy);
      ECL_STACK_SET_INDEX(cl_env_copy,v7);
      ecl_bds_unwind1(cl_env_copy);
      return value0;
     }
    }
L11:;
    value0 = (cl_env_copy->function=(ECL_SYM("WARN",905)->symbol.gfdef))->cfun.entry(2, VV[0], v3file) /*  WARN */;
    ecl_frs_pop(cl_env_copy);
    ecl_bds_unwind1(cl_env_copy);
    return value0;
   }
L2:;
   {
    cl_object v4c;
    v4c = ECL_CONS_CAR(CLV0);
    value0 = cl_format(4, ECL_T, VV[1], v1command, v4c);
    ecl_frs_pop(cl_env_copy);
    return value0;
   }
  }
 }
}
/*      closure LAMBDA3                                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC1__lambda3(cl_narg narg, cl_object v1si__temp, ...)
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
 if (ecl_unlikely(narg!=1)) FEwrong_num_arguments_anonym();
 {
TTL:
  ECL_CONS_CAR(CLV0) = v1si__temp;
  cl_go(ECL_CONS_CAR(CLV1),ecl_make_fixnum(0));
 }
 }
}
/*      function definition for SPLIT-WORDS                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L3split_words(cl_object v1string)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2output;
   v2output = ECL_NIL;
   {
    cl_object v3word;
    v3word = ECL_NIL;
    {
     cl_fixnum v4;
     cl_object v5i;
     v4 = ecl_length(v1string);
     v5i = ecl_make_fixnum(0);
     {
      cl_object v6c;
      v6c = ECL_NIL;
L6:;
      if (!(ecl_greatereq(v5i,ecl_make_fixnum(v4)))) { goto L8; }
      goto L7;
L8:;
      v6c = ecl_elt(v1string,ecl_fixnum(v5i));
      if (!(((v6c)==ECL_CODE_CHAR((ecl_character)(32))))) { goto L18; }
      goto L15;
      goto L16;
L18:;
      goto L16;
L16:;
      if (!(((v6c)==ECL_CODE_CHAR((ecl_character)(9))))) { goto L22; }
      goto L15;
      goto L20;
L22:;
      goto L20;
L20:;
      if (!(((v6c)==ECL_CODE_CHAR((ecl_character)(10))))) { goto L13; }
      goto L14;
L15:;
L14:;
      if (Null(v3word)) { goto L12; }
      {
       cl_fixnum v7;
       v7 = ecl_length(v3word);
       T0 = cl_nreverse(v3word);
       T1 = cl_make_array(5, ecl_make_fixnum(v7), ECL_SYM("ELEMENT-TYPE",1246), ECL_SYM("BASE-CHAR",122), ECL_SYM("INITIAL-CONTENTS",1278), T0);
       v2output = CONS(T1,v2output);
      }
      v3word = ECL_NIL;
      goto L12;
L13:;
      v3word = CONS(v6c,v3word);
L12:;
      v5i = ecl_one_plus(v5i);
      goto L6;
L7:;
      {
       cl_fixnum v7;
       v7 = ecl_length(v3word);
       T0 = cl_nreverse(v3word);
       T1 = cl_make_array(5, ecl_make_fixnum(v7), ECL_SYM("ELEMENT-TYPE",1246), ECL_SYM("BASE-CHAR",122), ECL_SYM("INITIAL-CONTENTS",1278), T0);
       v2output = CONS(T1,v2output);
      }
      value0 = v2output;
      cl_env_copy->nvalues = 1;
      return value0;
     }
    }
   }
  }
 }
}
/*      function definition for KNOWN-KEYWORD                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L4known_keyword(cl_narg narg, cl_object v1string, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2patterns;
  va_list args; va_start(args,v1string);
  {
   int i = 1;
   if (i >= narg) {
    v2patterns = ecl_symbol_value(VV[7]);
   } else {
    i++;
    v2patterns = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v3base;
   T0 = cl_string_upcase(1, v1string);
   v3base = cl_make_pathname(4, ECL_SYM("DIRECTORY",1241), ECL_NIL, ECL_SYM("NAME",1300), T0);
   {
    cl_object v4p;
    cl_object v5;
    v4p = ECL_NIL;
    {
     cl_object v6;
     v6 = v2patterns;
     if (ecl_unlikely(!ECL_LISTP(v6))) FEtype_error_list(v6);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v5 = v6;
    }
    {
     cl_object v6pattern_path;
     v6pattern_path = ECL_NIL;
     {
      cl_object v7;
      v7 = ECL_NIL;
L9:;
      if (!(ecl_endp(v5))) { goto L11; }
      goto L10;
L11:;
      v4p = _ecl_car(v5);
      {
       cl_object v8;
       v8 = _ecl_cdr(v5);
       if (ecl_unlikely(!ECL_LISTP(v8))) FEtype_error_list(v8);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v5 = v8;
      }
      T0 = cl_string_upcase(1, v4p);
      v6pattern_path = cl_make_pathname(4, ECL_SYM("DIRECTORY",1241), ECL_NIL, ECL_SYM("NAME",1300), T0);
      v7 = cl_pathname_match_p(v3base, v6pattern_path);
      if (Null(v7)) { goto L21; }
      value0 = v7;
      cl_env_copy->nvalues = 1;
      return value0;
L21:;
      goto L9;
L10:;
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 1;
      return value0;
     }
    }
   }
  }
 }
}
/*      function definition for GATHER-KEYWORDS                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L6gather_keywords(cl_object v1strings, cl_object v2patterns)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3strings;
   T0 = (ECL_SYM("APPEND",90)->symbol.gfdef);
   {
    cl_object v4;
    v4 = ecl_fdefinition(VV[6]);
    {
     cl_object v5;
     cl_object v6;
     v5 = ECL_NIL;
     {
      cl_object v7;
      v7 = v1strings;
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
L11:;
      if (!(ecl_endp(v6))) { goto L13; }
      goto L12;
L13:;
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
       T2 = v9;
      }
      T3 = ecl_function_dispatch(cl_env_copy,v4)(1, v5);
      v8 = ecl_list1(T3);
      (ECL_CONS_CDR(T2)=v8,T2);
      goto L11;
L12:;
      T1 = ecl_cdr(v7);
      goto L3;
     }
    }
   }
L3:;
   v3strings = cl_reduce(2, T0, T1);
   {
    cl_object v4;
    {
     cl_object v5;
     v5 = ecl_make_cfun((cl_objectfn_fixed)LC5__lambda31,ECL_NIL,Cblock,1);
     v4 = v5;
    }
    {
     cl_object v5;
     cl_object v6;
     cl_object v7;
     T0 = ecl_fdefinition(VV[8]);
     v5 = cl_remove_if_not(2, T0, v3strings);
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
L38:;
      if (!(ecl_endp(v7))) { goto L40; }
      goto L39;
L40:;
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
       v10 = v9;
       if (ecl_unlikely(ECL_ATOM(v10))) FEtype_error_cons(v10);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       T0 = v10;
      }
      T1 = ecl_function_dispatch(cl_env_copy,v4)(1, v6);
      v9 = ecl_list1(T1);
      (ECL_CONS_CDR(T0)=v9,T0);
      goto L38;
L39:;
      value0 = ecl_cdr(v8);
      cl_env_copy->nvalues = 1;
      return value0;
     }
    }
   }
  }
 }
}
/*      local function LAMBDA31                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC5__lambda31(cl_object v1s)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_string_upcase(1, v1s);
  T1 = cl_find_package(VV[9]);
  value0 = cl_intern(2, T0, T1);
  return value0;
 }
}
/*      function definition for COMPILER-DEFINES                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L7compiler_defines(cl_object volatile v1macros)
{
 cl_object T0, T1, T2, T3, T4, T5;
 cl_object volatile env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   volatile cl_object v2f;
   volatile cl_object v3fc;
   volatile cl_object v4fs;
   v2f = si_mkstemp(VV[11]);
   v3fc = cl_make_pathname(4, ECL_SYM("TYPE",1346), VV[12], ECL_SYM("DEFAULTS",1238), v2f);
   v4fs = cl_make_pathname(4, ECL_SYM("TYPE",1346), VV[13], ECL_SYM("DEFAULTS",1238), v2f);
   {
    volatile cl_object v5s;
    v5s = cl_open(7, v3fc, ECL_SYM("DIRECTION",1240), ECL_SYM("OUTPUT",1309), ECL_SYM("IF-EXISTS",1270), ECL_SYM("OVERWRITE",1310), ECL_SYM("IF-DOES-NOT-EXIST",1268), ECL_SYM("CREATE",1235));
    {
     volatile bool unwinding = FALSE;
     cl_index v6=ECL_STACK_INDEX(cl_env_copy),v7;
     ecl_frame_ptr next_fr;
     ecl_frs_push(cl_env_copy,ECL_PROTECT_TAG);
     if (__ecl_frs_push_result) {
       unwinding = TRUE; next_fr=cl_env_copy->nlj_fr;
     } else {
     {
      struct ecl_stack_frame _ecl_inner_frame_aux;
      volatile cl_object _ecl_inner_frame = ecl_stack_frame_open(cl_env_copy,(cl_object)&_ecl_inner_frame_aux,0);
      {
       cl_object v8;
       v8 = _ecl_inner_frame;
       {
        cl_object v9i;
        v9i = ecl_make_fixnum(0);
        {
         cl_object v10macro;
         cl_object v11rest;
         cl_object v12;
         v10macro = ECL_NIL;
         v11rest = ECL_NIL;
         {
          cl_object v13;
          v13 = v1macros;
          if (ecl_unlikely(!ECL_LISTP(v13))) FEtype_error_list(v13);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          v12 = v13;
         }
L17:;
         if (!(ecl_endp(v12))) { goto L19; }
         goto L18;
L19:;
         {
          cl_object v13;
          v13 = _ecl_car(v12);
          v10macro = ecl_car(v13);
          v13 = ecl_cdr(v13);
          v11rest = v13;
         }
         {
          cl_object v13;
          v13 = _ecl_cdr(v12);
          if (ecl_unlikely(!ECL_LISTP(v13))) FEtype_error_list(v13);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          v12 = v13;
         }
         cl_format(5, v5s, VV[14], v10macro, v9i, v10macro);
         v9i = ecl_one_plus(v9i);
         goto L17;
L18:;
         cl_env_copy->values[0] = ECL_NIL;
         cl_env_copy->nvalues = 1;
        }
       }
       ecl_stack_frame_push_values(v8);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       if (Null(v5s)) { goto L36; }
       cl_close(1, v5s);
L36:;cl_env_copy->values[0]=ecl_stack_frame_pop_values(v8);
      }
      ecl_stack_frame_close(_ecl_inner_frame);
     }
     }
     ecl_frs_pop(cl_env_copy);
     v7=ecl_stack_push_values(cl_env_copy);
     if (Null(v5s)) { goto L38; }
     cl_close(3, v5s, ECL_SYM("ABORT",1217), ECL_T);
L38:;
     ecl_stack_pop_values(cl_env_copy,v7);
     if (unwinding) ecl_unwind(cl_env_copy,next_fr);
     ECL_STACK_SET_INDEX(cl_env_copy,v6);
    }
   }
   {
    cl_object v5list;
    {
     cl_object v6;
     v6 = (ECL_SYM("LIST",483)->symbol.gfdef);
     {
      cl_object v7;
      cl_object v8;
      cl_object v9;
      {
       cl_object v10;
       v10 = (ECL_SYM("FIRST",373)->symbol.gfdef);
       {
        cl_object v11;
        cl_object v12;
        v11 = ECL_NIL;
        {
         cl_object v13;
         v13 = v1macros;
         if (ecl_unlikely(!ECL_LISTP(v13))) FEtype_error_list(v13);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         v12 = v13;
        }
        {
         cl_object v13;
         cl_object v14;
         v13 = ecl_list1(ECL_NIL);
         v14 = v13;
L50:;
         if (!(ecl_endp(v12))) { goto L52; }
         goto L51;
L52:;
         v11 = _ecl_car(v12);
         {
          cl_object v15;
          v15 = _ecl_cdr(v12);
          if (ecl_unlikely(!ECL_LISTP(v15))) FEtype_error_list(v15);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          v12 = v15;
         }
         {
          cl_object v15;
          v15 = v14;
          if (ecl_unlikely(ECL_ATOM(v15))) FEtype_error_cons(v15);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          T0 = v15;
         }
         T1 = ecl_function_dispatch(cl_env_copy,v10)(1, v11);
         v14 = ecl_list1(T1);
         (ECL_CONS_CDR(T0)=v14,T0);
         goto L50;
L51:;
         v7 = ecl_cdr(v13);
         goto L42;
        }
       }
      }
L42:;
      v8 = ECL_NIL;
      {
       cl_object v10;
       v10 = v7;
       if (ecl_unlikely(!ECL_LISTP(v10))) FEtype_error_list(v10);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v9 = v10;
      }
      {
       cl_object v10;
       cl_object v11;
       v10 = ecl_list1(ECL_NIL);
       v11 = v10;
L74:;
       if (!(ecl_endp(v9))) { goto L76; }
       goto L75;
L76:;
       v8 = _ecl_car(v9);
       {
        cl_object v12;
        v12 = _ecl_cdr(v9);
        if (ecl_unlikely(!ECL_LISTP(v12))) FEtype_error_list(v12);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v9 = v12;
       }
       {
        cl_object v12;
        v12 = v11;
        if (ecl_unlikely(ECL_ATOM(v12))) FEtype_error_cons(v12);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        T0 = v12;
       }
       T1 = ecl_function_dispatch(cl_env_copy,v6)(1, v8);
       v11 = ecl_list1(T1);
       (ECL_CONS_CDR(T0)=v11,T0);
       goto L74;
L75:;
       v5list = ecl_cdr(v10);
       goto L40;
      }
     }
    }
L40:;
    {
     cl_object v6lines;
     T0 = ecl_symbol_value(VV[15]);
     T1 = ecl_function_dispatch(cl_env_copy,VV[36])(1, ecl_symbol_value(VV[16])) /*  SPLIT-PROGRAM-OPTIONS */;
     T2 = cl_namestring(v3fc);
     T3 = cl_namestring(v4fs);
     T4 = cl_list(4, VV[17], T2, VV[18], T3);
     T5 = ecl_append(T1,T4);
     v6lines = L2run_and_collect(3, T0, T5, v4fs);
     {
      cl_object v7l;
      cl_object v8;
      v7l = ECL_NIL;
      {
       cl_object v9;
       v9 = v6lines;
       if (ecl_unlikely(!ECL_LISTP(v9))) FEtype_error_list(v9);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v8 = v9;
      }
L97:;
      if (!(ecl_endp(v8))) { goto L99; }
      goto L98;
L99:;
      v7l = _ecl_car(v8);
      {
       cl_object v9;
       v9 = _ecl_cdr(v8);
       if (ecl_unlikely(!ECL_LISTP(v9))) FEtype_error_list(v9);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v8 = v9;
      }
      T0 = cl_search(2, VV[19], v7l);
      if (!((T0)==(ecl_make_fixnum(0)))) { goto L107; }
      {
       cl_object v9number;
       T0 = cl_subseq(3, v7l, ecl_make_fixnum(9), ecl_make_fixnum(13));
       v9number = cl_parse_integer(1, T0);
       T0 = ecl_elt(v1macros,ecl_fixnum(v9number));
       ecl_elt_set(v5list,ecl_to_size(v9number),T0);
      }
L107:;
      goto L97;
L98:;
      value0 = v5list;
      cl_env_copy->nvalues = 1;
      return value0;
     }
    }
   }
  }
 }
}
/*      function definition for RUN-AND-COLLECT-KEYWORDS              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L8run_and_collect_keywords(cl_narg narg, ...)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  cl_object v1args;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  v1args = cl_grab_rest_args(args);
  ecl_va_end(args);
  T0 = ecl_fdefinition(VV[2]);
  T1 = cl_apply(2, T0, v1args);
  value0 = L6gather_keywords(T1, ecl_symbol_value(VV[7]));
  return value0;
 }
}
/*      function definition for GATHER-SYSTEM-FEATURES                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L9gather_system_features(cl_narg narg, ...)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  cl_object v1executable;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  {
   cl_object keyvars[2];
   cl_parse_key(args,1,L9gather_system_featureskeys,keyvars,NULL,FALSE);
   ecl_va_end(args);
   if (Null(keyvars[1])) {
    v1executable = VV[23];
   } else {
    v1executable = keyvars[0];
   }
  }
  {
   cl_object v2ecl_binary;
   cl_object v3compiler_version;
   cl_object v4compiler_features;
   T0 = cl_truename(v1executable);
   v2ecl_binary = cl_namestring(T0);
   if (Null(cl_search(2, VV[24], ecl_symbol_value(VV[15])))) { goto L5; }
   T0 = VV[25];
   goto L4;
L5:;
   T0 = VV[26];
L4:;
   v3compiler_version = L8run_and_collect_keywords(2, ecl_symbol_value(VV[15]), T0);
   T0 = (ECL_SYM("APPEND",90)->symbol.gfdef);
   {
    cl_object v5;
    v5 = (ECL_SYM("REST",721)->symbol.gfdef);
    {
     cl_object v6;
     cl_object v7;
     cl_object v8;
     v6 = L7compiler_defines(ecl_symbol_value(VV[21]));
     v7 = ECL_NIL;
     {
      cl_object v9;
      v9 = v6;
      if (ecl_unlikely(!ECL_LISTP(v9))) FEtype_error_list(v9);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v8 = v9;
     }
     {
      cl_object v9;
      cl_object v10;
      v9 = ecl_list1(ECL_NIL);
      v10 = v9;
L18:;
      if (!(ecl_endp(v8))) { goto L20; }
      goto L19;
L20:;
      v7 = _ecl_car(v8);
      {
       cl_object v11;
       v11 = _ecl_cdr(v8);
       if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v8 = v11;
      }
      {
       cl_object v11;
       v11 = v10;
       if (ecl_unlikely(ECL_ATOM(v11))) FEtype_error_cons(v11);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       T2 = v11;
      }
      T3 = ecl_function_dispatch(cl_env_copy,v5)(1, v7);
      v10 = ecl_list1(T3);
      (ECL_CONS_CDR(T2)=v10,T2);
      goto L18;
L19:;
      T1 = ecl_cdr(v9);
      goto L9;
     }
    }
   }
L9:;
   v4compiler_features = cl_reduce(2, T0, T1);
   T0 = cl_nconc(3, ECL_NIL, v3compiler_version, v4compiler_features);
   T1 = (ECL_SYM("STRING-EQUAL",810)->symbol.gfdef);
   value0 = cl_delete_duplicates(3, T0, ECL_SYM("TEST",1343), T1);
   return value0;
  }
 }
}
/*      function definition for UPDATE-COMPILER-FEATURES              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L10update_compiler_features(cl_narg narg, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  cl_object v1args;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  v1args = cl_grab_rest_args(args);
  ecl_va_end(args);
  T0 = ecl_fdefinition(VV[27]);
  cl_set(VV[28],cl_apply(2, T0, v1args));
  value0 = ecl_symbol_value(VV[28]);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}

#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/cmp/cmpos-features.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclCn69iEb7_CEYmqq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CMP;CMPOS-FEATURES.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclCn69iEb7_CEYmqq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  ecl_cmp_defun(VV[30]);                          /*  RUN-AND-COLLECT */
  ecl_cmp_defun(VV[32]);                          /*  SPLIT-WORDS     */
  si_Xmake_constant(VV[7], VVtemp[1]);
  ecl_cmp_defun(VV[33]);                          /*  KNOWN-KEYWORD   */
  ecl_cmp_defun(VV[34]);                          /*  GATHER-KEYWORDS */
  ecl_cmp_defun(VV[35]);                          /*  COMPILER-DEFINES */
  si_Xmake_constant(VV[21], VVtemp[2]);
  ecl_cmp_defun(VV[37]);                          /*  RUN-AND-COLLECT-KEYWORDS */
  ecl_cmp_defun(VV[38]);                          /*  GATHER-SYSTEM-FEATURES */
  ecl_cmp_defun(VV[40]);                          /*  UPDATE-COMPILER-FEATURES */
}