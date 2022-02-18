/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:LSP;PROCESS.LSP                                   */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/clos/process.eclh"
/*      local function WITH-PROCESS-LOCK                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC1with_process_lock(cl_object v1, cl_object v2)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12;
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
   cl_object v6process;
   cl_object v7wait;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[30])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v8;
    v8 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4 = v8;
   }
   v5 = v4;
   if (!(v5==ECL_NIL)) { goto L10; }
   ecl_function_dispatch(cl_env_copy,VV[30])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L10:;
   {
    cl_object v8;
    v8 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v6process = v8;
   }
   if (Null(v5)) { goto L16; }
   {
    cl_object v8;
    v8 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v7wait = v8;
    goto L15;
   }
L16:;
   v7wait = ECL_T;
L15:;
   if (Null(v5)) { goto L21; }
   ecl_function_dispatch(cl_env_copy,VV[31])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L21:;
   {
    cl_object v8lock;
    cl_object v9wait_p;
    v8lock = cl_gensym(1, _ecl_static_0);
    v9wait_p = cl_gensym(1, _ecl_static_1);
    T0 = cl_list(2, VV[0], v6process);
    T1 = cl_list(2, v8lock, T0);
    T2 = cl_list(2, v9wait_p, v7wait);
    T3 = cl_list(2, T1, T2);
    T4 = cl_list(3, ECL_SYM("GET-LOCK",1452), v8lock, v9wait_p);
    T5 = CONS(ECL_SYM("LOCALLY",492),v3);
    T6 = cl_list(3, ECL_SYM("WHEN",907), T4, T5);
    T7 = cl_list(2, ECL_SYM("WITH-RESTORED-INTERRUPTS",1805), T6);
    T8 = cl_list(2, ECL_SYM("HOLDING-LOCK-P",1448), v8lock);
    T9 = cl_list(2, ECL_SYM("GIVEUP-LOCK",1453), v8lock);
    T10 = cl_list(3, ECL_SYM("WHEN",907), T8, T9);
    T11 = cl_list(3, ECL_SYM("UNWIND-PROTECT",890), T7, T10);
    T12 = cl_list(2, ECL_SYM("WITHOUT-INTERRUPTS",1804), T11);
    value0 = cl_list(3, ECL_SYM("LET",479), T3, T12);
    return value0;
   }
  }
 }
}
/*      function definition for MAKE-EXTERNAL-PROCESS                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L2make_external_process()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v1_lock;
   cl_object v2_pipe;
   v1_lock = mp_make_lock(0);
   v2_pipe = mp_make_process(0);
   value0 = si_make_structure(9, VV[4], ECL_NIL, ECL_NIL, ECL_NIL, ECL_NIL, ECL_SYM("RUNNING",1824), ECL_NIL, v1_lock, v2_pipe);
   return value0;
  }
 }
}
/*      local function LAMBDA14                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC3__lambda14(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), ECL_SYM("EXTERNAL-PROCESS",1816));
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(7), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), ECL_SYM("EXTERNAL-PROCESS",1816));
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(7));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA18                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC4__lambda18(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), ECL_SYM("EXTERNAL-PROCESS",1816));
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(6), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), ECL_SYM("EXTERNAL-PROCESS",1816));
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(6));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA22                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC5__lambda22(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), ECL_SYM("EXTERNAL-PROCESS",1816));
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(5), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), ECL_SYM("EXTERNAL-PROCESS",1816));
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(5));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA26                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC6__lambda26(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), ECL_SYM("EXTERNAL-PROCESS",1816));
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(4), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), ECL_SYM("EXTERNAL-PROCESS",1816));
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(4));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA30                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC7__lambda30(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), ECL_SYM("EXTERNAL-PROCESS",1816));
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(3), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), ECL_SYM("EXTERNAL-PROCESS",1816));
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(3));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA34                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC8__lambda34(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), ECL_SYM("EXTERNAL-PROCESS",1816));
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(2), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), ECL_SYM("EXTERNAL-PROCESS",1816));
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(2));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA38                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC9__lambda38(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), ECL_SYM("EXTERNAL-PROCESS",1816));
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(1), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), ECL_SYM("EXTERNAL-PROCESS",1816));
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(1));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA42                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC10__lambda42(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), ECL_SYM("EXTERNAL-PROCESS",1816));
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(0), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), ECL_SYM("EXTERNAL-PROCESS",1816));
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(0));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      function definition for EXTERNAL-PROCESS-STATUS               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L11external_process_status(cl_object v1external_process)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2status;
   v2status = ecl_function_dispatch(cl_env_copy,VV[9])(1, v1external_process) /*  EXTERNAL-PROCESS-%STATUS */;
   if (!(ecl_eql(v2status,ECL_SYM("STOPPED",1827)))) { goto L7; }
   goto L4;
   goto L5;
L7:;
   goto L5;
L5:;
   if (!(ecl_eql(v2status,ECL_SYM("RESUMED",1828)))) { goto L11; }
   goto L4;
   goto L9;
L11:;
   goto L9;
L9:;
   if (!(ecl_eql(v2status,ECL_SYM("RUNNING",1824)))) { goto L2; }
   goto L3;
L4:;
L3:;
   value0 = L12external_process_wait(2, v1external_process, ECL_NIL);
   return value0;
L2:;
   T0 = ecl_function_dispatch(cl_env_copy,VV[8])(1, v1external_process) /*  EXTERNAL-PROCESS-%CODE */;
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = T0;
   cl_env_copy->values[0] = v2status;
   return cl_env_copy->values[0];
  }
 }
}
/*      function definition for EXTERNAL-PROCESS-WAIT                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L12external_process_wait(volatile cl_narg narg, cl_object volatile v1process, ...)
{
 cl_object T0, T1;
 cl_object volatile env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object volatile v2wait;
  va_list args; va_start(args,v1process);
  {
   int i = 1;
   if (i >= narg) {
    v2wait = ECL_NIL;
   } else {
    i++;
    v2wait = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   volatile cl_object v3;
   v3 = ecl_function_dispatch(cl_env_copy,VV[0])(1, v1process) /*  EXTERNAL-PROCESS-%LOCK */;
   {
    struct ecl_stack_frame _ecl_inner_frame_aux;
    volatile cl_object _ecl_inner_frame = ecl_stack_frame_open(cl_env_copy,(cl_object)&_ecl_inner_frame_aux,0);
    {
     volatile cl_object v4;
     v4 = _ecl_inner_frame;
     {
      volatile cl_object v5;
      v5 = ecl_symbol_value(ECL_SYM("*INTERRUPTS-ENABLED*",7));
      ecl_bds_bind(cl_env_copy,ECL_SYM("*INTERRUPTS-ENABLED*",7),ECL_NIL); /*  *INTERRUPTS-ENABLED* */
      ecl_bds_bind(cl_env_copy,ECL_SYM("*ALLOW-WITH-INTERRUPTS*",1793),ECL_NIL); /*  *ALLOW-WITH-INTERRUPTS* */
      {
       volatile bool unwinding = FALSE;
       cl_index v6=ECL_STACK_INDEX(cl_env_copy),v7;
       ecl_frame_ptr next_fr;
       ecl_frs_push(cl_env_copy,ECL_PROTECT_TAG);
       if (__ecl_frs_push_result) {
         unwinding = TRUE; next_fr=cl_env_copy->nlj_fr;
       } else {
       ecl_bds_bind(cl_env_copy,ECL_SYM("*INTERRUPTS-ENABLED*",7),v5); /*  *INTERRUPTS-ENABLED* */
       if (Null(mp_get_lock(2, v3, v2wait))) { goto L10; }
       {
        cl_object v8pid;
        v8pid = ecl_function_dispatch(cl_env_copy,ECL_SYM("EXTERNAL-PROCESS-PID",1817))(1, v1process) /*  EXTERNAL-PROCESS-PID */;
        if (Null(v8pid)) { goto L13; }
        {
         cl_object v10;                           /*  STATUS          */
         cl_object v11;                           /*  CODE            */
         value0 = si_waitpid(v8pid, v2wait);
         {
          v10 = value0;
          v11 = cl_env_copy->values[1];
         }
         if (!((v10)==(ECL_SYM("EXITED",1825)))) { goto L21; }
         goto L18;
         goto L19;
L21:;
         goto L19;
L19:;
         if (!((v10)==(ECL_SYM("SIGNALED",1826)))) { goto L25; }
         goto L18;
         goto L23;
L25:;
         goto L23;
L23:;
         if (!((v10)==(ECL_SYM("ABORT",1217)))) { goto L29; }
         goto L18;
         goto L27;
L29:;
         goto L27;
L27:;
         if (!((v10)==(ECL_SYM("ERROR",1251)))) { goto L16; }
         goto L17;
L18:;
L17:;
         ecl_structure_set(v1process,ECL_SYM("EXTERNAL-PROCESS",1816),0,ECL_NIL);
         ecl_structure_set(v1process,ECL_SYM("EXTERNAL-PROCESS",1816),4,v10);
         ecl_structure_set(v1process,ECL_SYM("EXTERNAL-PROCESS",1816),5,v11);
         T0 = ecl_function_dispatch(cl_env_copy,VV[6])(1, v1process) /*  EXTERNAL-PROCESS-%PIPE */;
         cl_env_copy->values[0] = mp_process_join(T0);
         ecl_bds_unwind1(cl_env_copy);
         goto L9;
L16:;
         if (!((v10)==(ECL_SYM("STOPPED",1827)))) { goto L40; }
         goto L37;
         goto L38;
L40:;
         goto L38;
L38:;
         if (!((v10)==(ECL_SYM("RESUMED",1828)))) { goto L44; }
         goto L37;
         goto L42;
L44:;
         goto L42;
L42:;
         if (!((v10)==(ECL_SYM("RUNNING",1824)))) { goto L35; }
         goto L36;
L37:;
L36:;
         ecl_structure_set(v1process,ECL_SYM("EXTERNAL-PROCESS",1816),4,v10);
         T0 = ecl_structure_set(v1process,ECL_SYM("EXTERNAL-PROCESS",1816),5,v11);
         ecl_bds_unwind1(cl_env_copy);
         cl_env_copy->values[0] = T0;
         cl_env_copy->nvalues = 1;
         goto L9;
L35:;
         if (!((v10)==(ECL_NIL))) { goto L48; }
         cl_env_copy->values[0] = ECL_NIL;
         cl_env_copy->nvalues = 1;
         ecl_bds_unwind1(cl_env_copy);
         goto L9;
L48:;
         cl_env_copy->values[0] = si_ecase_error(v10, VV[19]);
         ecl_bds_unwind1(cl_env_copy);
         goto L9;
        }
L13:;
        cl_env_copy->values[0] = ECL_NIL;
        cl_env_copy->nvalues = 1;
        ecl_bds_unwind1(cl_env_copy);
        goto L9;
       }
L10:;
       cl_env_copy->values[0] = ECL_NIL;
       cl_env_copy->nvalues = 1;
       ecl_bds_unwind1(cl_env_copy);
L9:;
       }
       ecl_frs_pop(cl_env_copy);
       v7=ecl_stack_push_values(cl_env_copy);
       if (Null(mp_holding_lock_p(v3))) { goto L51; }
       mp_giveup_lock(v3);
L51:;
       ecl_stack_pop_values(cl_env_copy,v7);
       if (unwinding) ecl_unwind(cl_env_copy,next_fr);
       ECL_STACK_SET_INDEX(cl_env_copy,v6);
       ecl_bds_unwind1(cl_env_copy);
       ecl_bds_unwind1(cl_env_copy);
      }
     }
     ecl_stack_frame_push_values(v4);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     if (Null(ecl_symbol_value(ECL_SYM("*INTERRUPTS-ENABLED*",7)))) { goto L53; }
     si_check_pending_interrupts();
L53:;cl_env_copy->values[0]=ecl_stack_frame_pop_values(v4);
    }
    ecl_stack_frame_close(_ecl_inner_frame);
   }
  }
  T0 = ecl_function_dispatch(cl_env_copy,VV[9])(1, v1process) /*  EXTERNAL-PROCESS-%STATUS */;
  T1 = ecl_function_dispatch(cl_env_copy,VV[8])(1, v1process) /*  EXTERNAL-PROCESS-%CODE */;
  cl_env_copy->nvalues = 2;
  cl_env_copy->values[1] = T1;
  cl_env_copy->values[0] = T0;
  return cl_env_copy->values[0];
 }
}
/*      function definition for TERMINATE-PROCESS                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object si_terminate_process(volatile cl_narg narg, cl_object volatile v1process, ...)
{
 cl_object volatile env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object volatile v2force;
  va_list args; va_start(args,v1process);
  {
   int i = 1;
   if (i >= narg) {
    v2force = ECL_NIL;
   } else {
    i++;
    v2force = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   volatile cl_object v3;
   v3 = ecl_function_dispatch(cl_env_copy,VV[0])(1, v1process) /*  EXTERNAL-PROCESS-%LOCK */;
   {
    struct ecl_stack_frame _ecl_inner_frame_aux;
    volatile cl_object _ecl_inner_frame = ecl_stack_frame_open(cl_env_copy,(cl_object)&_ecl_inner_frame_aux,0);
    {
     volatile cl_object v4;
     v4 = _ecl_inner_frame;
     {
      volatile cl_object v5;
      v5 = ecl_symbol_value(ECL_SYM("*INTERRUPTS-ENABLED*",7));
      ecl_bds_bind(cl_env_copy,ECL_SYM("*INTERRUPTS-ENABLED*",7),ECL_NIL); /*  *INTERRUPTS-ENABLED* */
      ecl_bds_bind(cl_env_copy,ECL_SYM("*ALLOW-WITH-INTERRUPTS*",1793),ECL_NIL); /*  *ALLOW-WITH-INTERRUPTS* */
      {
       volatile bool unwinding = FALSE;
       cl_index v6=ECL_STACK_INDEX(cl_env_copy),v7;
       ecl_frame_ptr next_fr;
       ecl_frs_push(cl_env_copy,ECL_PROTECT_TAG);
       if (__ecl_frs_push_result) {
         unwinding = TRUE; next_fr=cl_env_copy->nlj_fr;
       } else {
       ecl_bds_bind(cl_env_copy,ECL_SYM("*INTERRUPTS-ENABLED*",7),v5); /*  *INTERRUPTS-ENABLED* */
       if (Null(mp_get_lock(2, v3, ECL_T))) { goto L9; }
       {
        cl_object v8pid;
        v8pid = ecl_function_dispatch(cl_env_copy,ECL_SYM("EXTERNAL-PROCESS-PID",1817))(1, v1process) /*  EXTERNAL-PROCESS-PID */;
        if (Null(v8pid)) { goto L12; }
        HANDLE *ph = (HANDLE*)ecl_foreign_data_pointer_safe(v8pid);
         int ret = TerminateProcess(*ph, -1);
         if (ret == 0) FEerror("Cannot terminate the process ~A", 1, v1process);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        cl_env_copy->values[0] = value0;
        cl_env_copy->nvalues = 1;
        ecl_bds_unwind1(cl_env_copy);
        goto L8;
L12:;
        cl_env_copy->values[0] = ECL_NIL;
        cl_env_copy->nvalues = 1;
        ecl_bds_unwind1(cl_env_copy);
        goto L8;
       }
L9:;
       cl_env_copy->values[0] = ECL_NIL;
       cl_env_copy->nvalues = 1;
       ecl_bds_unwind1(cl_env_copy);
L8:;
       }
       ecl_frs_pop(cl_env_copy);
       v7=ecl_stack_push_values(cl_env_copy);
       if (Null(mp_holding_lock_p(v3))) { goto L14; }
       mp_giveup_lock(v3);
L14:;
       ecl_stack_pop_values(cl_env_copy,v7);
       if (unwinding) ecl_unwind(cl_env_copy,next_fr);
       ECL_STACK_SET_INDEX(cl_env_copy,v6);
       ecl_bds_unwind1(cl_env_copy);
       ecl_bds_unwind1(cl_env_copy);
      }
     }
     ecl_stack_frame_push_values(v4);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     if (Null(ecl_symbol_value(ECL_SYM("*INTERRUPTS-ENABLED*",7)))) { goto L16; }
     si_check_pending_interrupts();
L16:;cl_env_copy->values[0]=ecl_stack_frame_pop_values(v4);
     value0 = cl_env_copy->values[0];
    }
    ecl_stack_frame_close(_ecl_inner_frame);
   }
   return value0;
  }
 }
}
/*      function definition for FINALIZE-EXTERNAL-PROCESS             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L13finalize_external_process(cl_object v1process)
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
   v2 = L12external_process_wait(2, v1process, ECL_NIL);
   if (!(ecl_eql(v2,ECL_SYM("EXITED",1825)))) { goto L6; }
   goto L1;
   goto L4;
L6:;
   goto L4;
L4:;
   if (!(ecl_eql(v2,ECL_SYM("SIGNALED",1826)))) { goto L10; }
   goto L1;
   goto L8;
L10:;
   goto L8;
L8:;
   if (!(ecl_eql(v2,ECL_SYM("ABORT",1217)))) { goto L14; }
   goto L1;
   goto L12;
L14:;
   goto L12;
L12:;
   if (!(ecl_eql(v2,ECL_SYM("ERROR",1251)))) { goto L17; }
   goto L1;
   goto L2;
L17:;
   goto L2;
  }
L2:;
  T0 = ecl_fdefinition(VV[21]);
  value0 = si_set_finalizer(v1process, T0);
  return value0;
L1:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for RUN-PROGRAM                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object si_run_program(volatile cl_narg narg, cl_object volatile v1command, cl_object volatile v2argv, ...)
{
 cl_object T0, T1, T2;
 volatile cl_object lex0[6];
 cl_object volatile env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 {
  cl_object volatile v3input;
  cl_object volatile v4output;
  cl_object volatile v5error;
  cl_object volatile v6wait;
  cl_object volatile v7environ;
  ecl_va_list args; ecl_va_start(args,v2argv,narg,2);
  {
   cl_object keyvars[20];
   cl_parse_key(args,10,si_run_programkeys,keyvars,NULL,FALSE);
   ecl_va_end(args);
   if (Null(keyvars[10])) {
    v3input = ECL_SYM("STREAM",1340);
   } else {
    v3input = keyvars[0];
   }
   if (Null(keyvars[11])) {
    v4output = ECL_SYM("STREAM",1340);
   } else {
    v4output = keyvars[1];
   }
   if (Null(keyvars[12])) {
    v5error = ECL_SYM("OUTPUT",1309);
   } else {
    v5error = keyvars[2];
   }
   if (Null(keyvars[13])) {
    v6wait = ECL_T;
   } else {
    v6wait = keyvars[3];
   }
   if (Null(keyvars[14])) {
    v7environ = ECL_SYM("DEFAULT",1237);
   } else {
    v7environ = keyvars[4];
   }
   lex0[0] = keyvars[5];                          /*  IF-INPUT-DOES-NOT-EXIST */
   if (Null(keyvars[16])) {
    lex0[1] = ECL_SYM("ERROR",1251);              /*  IF-OUTPUT-EXISTS */
   } else {
    lex0[1] = keyvars[6];                         /*  IF-OUTPUT-EXISTS */
   }
   if (Null(keyvars[17])) {
    lex0[2] = ECL_SYM("ERROR",1251);              /*  IF-ERROR-EXISTS */
   } else {
    lex0[2] = keyvars[7];                         /*  IF-ERROR-EXISTS */
   }
   if (Null(keyvars[18])) {
    lex0[3] = ECL_SYM("DEFAULT",1237);            /*  EXTERNAL-FORMAT */
   } else {
    lex0[3] = keyvars[8];                         /*  EXTERNAL-FORMAT */
   }
   if (Null(keyvars[19])) {
    lex0[4] = ECL_T;                              /*  ESCAPE-ARGUMENTS */
   } else {
    lex0[4] = keyvars[9];                         /*  ESCAPE-ARGUMENTS */
   }
  }
  {
   lex0[5] = ECL_NEW_FRAME_ID(cl_env_copy);       /*  RUN-PROGRAM     */
   {
    ecl_frs_push(cl_env_copy,lex0[5]);
    if (__ecl_frs_push_result!=0) {
    value0 = cl_env_copy->values[0];
    ecl_frs_pop(cl_env_copy);
    return value0;
    } else {
    if (!(ecl_eql(v3input,ECL_T))) { goto L6; }
    v3input = ecl_symbol_value(ECL_SYM("*STANDARD-INPUT*",68));
L6:;
    if (!(ecl_eql(v4output,ECL_T))) { goto L9; }
    v4output = ecl_symbol_value(ECL_SYM("*STANDARD-OUTPUT*",69));
L9:;
    if (!(ecl_eql(v5error,ECL_T))) { goto L12; }
    v5error = ecl_symbol_value(ECL_SYM("*ERROR-OUTPUT*",35));
L12:;
    {
     cl_object v8;
     cl_object v9;
     cl_object v10;
     cl_object v11;
     cl_object v12;
     cl_object v13;
     cl_object v14pid;
     cl_object v15parent_write;
     cl_object v16parent_read;
     cl_object v17parent_error;
     v8 = si_copy_to_simple_base_string(v1command);
     T0 = CONS(v1command,v2argv);
     v9 = LC16prepare_args(lex0, T0);
     v10 = L2make_external_process();
     v11 = LC14process_stream(5, lex0, v3input, ECL_SYM("DIRECTION",1240), ECL_SYM("INPUT",1280), ECL_SYM("IF-DOES-NOT-EXIST",1268), lex0[0]);
     v12 = LC14process_stream(5, lex0, v4output, ECL_SYM("DIRECTION",1240), ECL_SYM("OUTPUT",1309), ECL_SYM("IF-EXISTS",1270), lex0[1]);
     if (!(ecl_eql(v5error,ECL_SYM("OUTPUT",1309)))) { goto L21; }
     v13 = ECL_SYM("OUTPUT",1309);
     goto L20;
L21:;
     v13 = LC14process_stream(5, lex0, v5error, ECL_SYM("DIRECTION",1240), ECL_SYM("OUTPUT",1309), ECL_SYM("IF-EXISTS",1270), lex0[2]);
L20:;
     v14pid = ECL_NIL;
     v15parent_write = ECL_NIL;
     v16parent_read = ECL_NIL;
     v17parent_error = ECL_NIL;
     T0 = LC18verify_stream(lex0, v11, ECL_SYM("INPUT",1280));
     T1 = LC18verify_stream(lex0, v12, ECL_SYM("OUTPUT",1309));
     T2 = LC18verify_stream(lex0, v13, ECL_SYM("ERROR",1251));
     value0 = si_spawn_subprocess(v8, v9, v7environ, T0, T1, T2);
     {
      v14pid = value0;
      v15parent_write = cl_env_copy->values[1];
      v16parent_read = cl_env_copy->values[2];
      v17parent_error = cl_env_copy->values[3];
     }
     {
      cl_object v18;
      cl_object v19;
      cl_object v20;
      cl_object v21pipes;
      if (!(ecl_plusp(v15parent_write))) { goto L33; }
      v18 = ecl_function_dispatch(cl_env_copy,ECL_SYM("MAKE-STREAM-FROM-FD",1076))(6, v15parent_write, ECL_SYM("OUTPUT",1309), ECL_SYM("ELEMENT-TYPE",1246), ECL_SYM("BASE-CHAR",122), ECL_SYM("EXTERNAL-FORMAT",1258), lex0[3]) /*  MAKE-STREAM-FROM-FD */;
      goto L32;
L33:;
      v18 = ECL_NIL;
L32:;
      if (!(ecl_plusp(v16parent_read))) { goto L36; }
      v19 = ecl_function_dispatch(cl_env_copy,ECL_SYM("MAKE-STREAM-FROM-FD",1076))(6, v16parent_read, ECL_SYM("INPUT",1280), ECL_SYM("ELEMENT-TYPE",1246), ECL_SYM("BASE-CHAR",122), ECL_SYM("EXTERNAL-FORMAT",1258), lex0[3]) /*  MAKE-STREAM-FROM-FD */;
      goto L35;
L36:;
      v19 = ECL_NIL;
L35:;
      if (!(ecl_plusp(v17parent_error))) { goto L39; }
      v20 = ecl_function_dispatch(cl_env_copy,ECL_SYM("MAKE-STREAM-FROM-FD",1076))(6, v17parent_error, ECL_SYM("INPUT",1280), ECL_SYM("ELEMENT-TYPE",1246), ECL_SYM("BASE-CHAR",122), ECL_SYM("EXTERNAL-FORMAT",1258), lex0[3]) /*  MAKE-STREAM-FROM-FD */;
      goto L38;
L39:;
      v20 = ECL_NIL;
L38:;
      v21pipes = ECL_NIL;
      if (!(ecl_eql(v11,VV[22]))) { goto L42; }
      T0 = cl_list(3, v3input, v18, ECL_SYM("INPUT",1280));
      v21pipes = CONS(T0,v21pipes);
L42:;
      if (!(ecl_eql(v12,VV[22]))) { goto L45; }
      T0 = cl_list(3, v19, v4output, ECL_SYM("OUTPUT",1309));
      v21pipes = CONS(T0,v21pipes);
L45:;
      if (!(ecl_eql(v13,VV[22]))) { goto L48; }
      T0 = cl_list(3, v20, v5error, ECL_SYM("ERROR",1251));
      v21pipes = CONS(T0,v21pipes);
L48:;
      ecl_structure_set(v10,ECL_SYM("EXTERNAL-PROCESS",1816),0,v14pid);
      ecl_structure_set(v10,ECL_SYM("EXTERNAL-PROCESS",1816),1,v18);
      ecl_structure_set(v10,ECL_SYM("EXTERNAL-PROCESS",1816),2,v19);
      ecl_structure_set(v10,ECL_SYM("EXTERNAL-PROCESS",1816),3,v20);
      if (Null(v21pipes)) { goto L55; }
      {
       cl_object v22thread;
       v22thread = ecl_function_dispatch(cl_env_copy,VV[6])(1, v10) /*  EXTERNAL-PROCESS-%PIPE */;
       T0 = ecl_fdefinition(VV[28]);
       mp_process_preset(4, v22thread, T0, v10, v21pipes);
       mp_process_enable(v22thread);
      }
L55:;
      if (Null(v6wait)) { goto L61; }
      L12external_process_wait(2, v10, ECL_T);
      goto L60;
L61:;
      T0 = ecl_fdefinition(VV[21]);
      si_set_finalizer(v10, T0);
L60:;
      if (Null(v19)) { goto L65; }
      if (Null(v18)) { goto L65; }
      T0 = cl_make_two_way_stream(v19, v18);
      goto L64;
L65:;
      value0 = v19;
      if ((value0)!=ECL_NIL) { goto L69; }
      T0 = v18;
      goto L64;
L69:;
      T0 = value0;
      goto L64;
L64:;
      T1 = ecl_function_dispatch(cl_env_copy,VV[8])(1, v10) /*  EXTERNAL-PROCESS-%CODE */;
      cl_env_copy->nvalues = 3;
      cl_env_copy->values[2] = v10;
      cl_env_copy->values[1] = T1;
      cl_env_copy->values[0] = T0;
      value0 = cl_env_copy->values[0];
      ecl_frs_pop(cl_env_copy);
      return value0;
     }
    }}
   }
  }
 }
}
/*      local function VERIFY-STREAM                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC18verify_stream(volatile cl_object *lex0, cl_object v1stream, cl_object v2stream_type)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!((v1stream)==(ECL_NIL))) { goto L1; }
  if (!(ecl_eql(v2stream_type,ECL_SYM("INPUT",1280)))) { goto L7; }
  T0 = lex0[0];
  goto L6;
L7:;
  if (!(ecl_eql(v2stream_type,ECL_SYM("OUTPUT",1309)))) { goto L9; }
  T0 = lex0[1];
  goto L6;
L9:;
  if (!(ecl_eql(v2stream_type,ECL_SYM("ERROR",1251)))) { goto L11; }
  T0 = lex0[2];
  goto L6;
L11:;
  T0 = ECL_NIL;
L6:;
  if (!(T0==ECL_NIL)) { goto L4; }
  cl_env_copy->values[0] = ECL_NIL;
  cl_env_copy->nvalues = 1;
  cl_return_from(lex0[5],ECL_NIL);
L4:;
  if (!(ecl_eql(v2stream_type,ECL_SYM("INPUT",1280)))) { goto L15; }
  T0 = ECL_SYM("OUTPUT",1309);
  goto L14;
L15:;
  T0 = ECL_SYM("INPUT",1280);
L14:;
  value0 = LC17null_stream(T0);
  return value0;
L1:;
  if (!(ecl_eql(v1stream,VV[22]))) { goto L17; }
  value0 = ECL_SYM("STREAM",1340);
  cl_env_copy->nvalues = 1;
  return value0;
L17:;
  value0 = v1stream;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function NULL-STREAM                                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC17null_stream(cl_object v1direction)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_open(5, VV[25], ECL_SYM("DIRECTION",1240), v1direction, ECL_SYM("IF-EXISTS",1270), ECL_SYM("OVERWRITE",1310));
  return value0;
 }
}
/*      local function PREPARE-ARGS                                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC16prepare_args(volatile cl_object *lex0, cl_object volatile v1args)
{
 cl_object T0, T1;
 cl_object volatile env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   volatile cl_object v2str;
   v2str = cl_make_string_output_stream(0);
   {
    volatile bool unwinding = FALSE;
    cl_index v3=ECL_STACK_INDEX(cl_env_copy),v4;
    ecl_frame_ptr next_fr;
    ecl_frs_push(cl_env_copy,ECL_PROTECT_TAG);
    if (__ecl_frs_push_result) {
      unwinding = TRUE; next_fr=cl_env_copy->nlj_fr;
    } else {
    {
     cl_object v5;
     cl_object v6arg;
     cl_object v7rest;
     v5 = v1args;
     v6arg = ECL_NIL;
     v7rest = ECL_NIL;
L8:;
     if (!(ECL_ATOM(v5))) { goto L10; }
     goto L9;
L10:;
     {
      cl_object v8;
      v8 = v5;
      v6arg = ecl_car(v8);
      v8 = ecl_cdr(v8);
      v7rest = v8;
     }
     v5 = _ecl_cdr(v5);
     if (Null(lex0[4])) { goto L23; }
     {
      cl_object v8;
      v8 = ecl_make_cfun((cl_objectfn_fixed)LC15__lambda105,ECL_NIL,Cblock,1);
      T1 = v8;
     }
     if (Null(cl_find_if(2, T1, v6arg))) { goto L23; }
     L19escape_arg(v6arg, v2str);
     goto L22;
L23:;
     ecl_princ(v6arg,v2str);
L22:;
     if (Null(v7rest)) { goto L21; }
     cl_write_char(2, CODE_CHAR(32), v2str);
L21:;
     goto L8;
L9:;
    }
    cl_env_copy->values[0] = cl_get_output_stream_string(v2str);
    }
    ecl_frs_pop(cl_env_copy);
    v4=ecl_stack_push_values(cl_env_copy);
    cl_close(1, v2str);
    ecl_stack_pop_values(cl_env_copy,v4);
    if (unwinding) ecl_unwind(cl_env_copy,next_fr);
    T0 = cl_env_copy->values[0];
    ECL_STACK_SET_INDEX(cl_env_copy,v3);
   }
  }
  value0 = si_copy_to_simple_base_string(T0);
  return value0;
 }
}
/*      local function PROCESS-STREAM                                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC14process_stream(cl_narg narg, volatile cl_object *lex0, cl_object v1which, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2args;
  ecl_va_list args; ecl_va_start(args,v1which,narg,1);
  v2args = cl_grab_rest_args(args);
  ecl_va_end(args);
  goto L3;
L2:;
  T0 = cl_synonym_stream_symbol(v1which);
  v1which = cl_symbol_value(T0);
L3:;
  if (Null(si_of_class_p(2, v1which, ECL_SYM("SYNONYM-STREAM",850)))) { goto L7; }
  goto L2;
L7:;
  if (!(v1which==ECL_NIL)) { goto L9; }
  T0 = cl_getf(2, v2args, ECL_SYM("DIRECTION",1240));
  value0 = LC17null_stream(T0);
  return value0;
L9:;
  if (ECL_STRINGP(v1which)) { goto L13; }
  if (Null(cl_pathnamep(v1which))) { goto L11; }
  goto L12;
L13:;
L12:;
  T0 = (ECL_SYM("OPEN",613)->symbol.gfdef);
  value0 = cl_apply(5, T0, v1which, ECL_SYM("EXTERNAL-FORMAT",1258), lex0[3], v2args);
  return value0;
L11:;
  if ((si_of_class_p(2, v1which, ECL_SYM("STRING-STREAM",818)))!=ECL_NIL) { goto L18; }
  if (Null(si_of_class_p(2, v1which, ECL_SYM("FUNDAMENTAL-STREAM",1701)))) { goto L16; }
  goto L17;
L18:;
L17:;
  value0 = VV[22];
  cl_env_copy->nvalues = 1;
  return value0;
L16:;
  if (ecl_eql(v1which,ECL_SYM("STREAM",1340))) { goto L22; }
  if (Null(cl_streamp(v1which))) { goto L20; }
  goto L21;
L22:;
L21:;
  value0 = v1which;
  cl_env_copy->nvalues = 1;
  return value0;
L20:;
  value0 = cl_error(2, VV[23], v1which);
  return value0;
 }
}
/*      local function LAMBDA105                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC15__lambda105(cl_object v1c)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2;
   v2 = ecl_function_dispatch(cl_env_copy,VV[47])(2, VV[24], ecl_make_fixnum(0)) /*  MAKE-SEQ-ITERATOR */;
L2:;
   if ((v2)!=ECL_NIL) { goto L4; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L4:;
   {
    cl_object v3;
    v3 = ecl_function_dispatch(cl_env_copy,VV[48])(2, VV[24], v2) /*  SEQ-ITERATOR-REF */;
    if (!(ecl_eql(v1c,v3))) { goto L6; }
    value0 = v3;
    cl_env_copy->nvalues = 1;
    return value0;
   }
L6:;
   v2 = ecl_function_dispatch(cl_env_copy,VV[49])(2, VV[24], v2) /*  SEQ-ITERATOR-NEXT */;
   goto L2;
  }
 }
}
/*      function definition for ESCAPE-ARG                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L19escape_arg(cl_object v1arg, cl_object v2stream)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  cl_write_char(2, CODE_CHAR(34), v2stream);
  {
   cl_object v3slashes;
   v3slashes = ecl_make_fixnum(0);
   {
    cl_fixnum v4;
    cl_object v5i;
    v4 = ecl_length(v1arg);
    v5i = ecl_make_fixnum(0);
    {
     cl_object v6previous_char;
     v6previous_char = ECL_NIL;
     {
      cl_object v7char;
      v7char = ECL_NIL;
      if (!(ecl_greatereq(v5i,ecl_make_fixnum(v4)))) { goto L10; }
      goto L9;
L10:;
      v6previous_char = CODE_CHAR(97);
L8:;
      v7char = cl_char(v1arg, v5i);
      if (!(((v7char)==ECL_CODE_CHAR((ecl_character)(34))))) { goto L18; }
      {
       cl_object v8;
       {
        cl_object v9;
        v9 = v3slashes;
        T0 = cl_realp(v9);
        if (ecl_unlikely(!((T0)!=ECL_NIL)))
         FEwrong_type_argument(ECL_SYM("REAL",705),v9);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v8 = v9;
       }
L24:;
       v8 = ecl_minus(v8,ecl_make_fixnum(1));
       T0 = v8;
       if (!(ecl_minusp(T0))) { goto L26; }
       goto L25;
L26:;
       cl_write_char(2, CODE_CHAR(92), v2stream);
       goto L24;
L25:;
      }
      cl_write_string(2, VV[26], v2stream);
      goto L17;
L18:;
      cl_write_char(2, v7char, v2stream);
L17:;
      if (!(((v7char)==ECL_CODE_CHAR((ecl_character)(92))))) { goto L32; }
      v3slashes = ecl_plus(v3slashes,ecl_make_fixnum(1));
      goto L16;
L32:;
      v3slashes = ecl_make_fixnum(0);
L16:;
      v5i = ecl_one_plus(v5i);
      if (!(ecl_greatereq(v5i,ecl_make_fixnum(v4)))) { goto L38; }
      goto L9;
L38:;
      v6previous_char = v7char;
      goto L8;
L9:;
      {
       cl_object v8;
       {
        cl_object v9;
        v9 = v3slashes;
        T0 = cl_realp(v9);
        if (ecl_unlikely(!((T0)!=ECL_NIL)))
         FEwrong_type_argument(ECL_SYM("REAL",705),v9);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v8 = v9;
       }
L47:;
       v8 = ecl_minus(v8,ecl_make_fixnum(1));
       T0 = v8;
       if (!(ecl_minusp(T0))) { goto L49; }
       goto L48;
L49:;
       cl_write_char(2, CODE_CHAR(92), v2stream);
       goto L47;
L48:;
      }
     }
    }
   }
  }
  value0 = cl_write_char(2, CODE_CHAR(34), v2stream);
  return value0;
 }
}
/*      function definition for PIPE-STREAMS                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L21pipe_streams(cl_object v1process, cl_object v2pipes)
{
 volatile cl_object lex0[2];
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  lex0[0] = v2pipes;                              /*  PIPES           */
TTL:
  lex0[1] = ECL_NIL;                              /*  TO-REMOVE       */
  goto L3;
L2:;
  LC20thunk(lex0);
  if (Null(lex0[1])) { goto L6; }
  lex0[0] = cl_set_difference(2, lex0[0], lex0[1]);
L6:;
  cl_sleep(_ecl_static_3);
L3:;
  if (lex0[0]==ECL_NIL) { goto L10; }
  {
   cl_object v3;
   v3 = L12external_process_wait(2, v1process, ECL_NIL);
   if (!(ecl_eql(v3,ECL_SYM("EXITED",1825)))) { goto L16; }
   goto L10;
   goto L14;
L16:;
   goto L14;
L14:;
   if (!(ecl_eql(v3,ECL_SYM("SIGNALED",1826)))) { goto L20; }
   goto L10;
   goto L18;
L20:;
   goto L18;
L18:;
   if (!(ecl_eql(v3,ECL_SYM("ABORT",1217)))) { goto L24; }
   goto L10;
   goto L22;
L24:;
   goto L22;
L22:;
   if (!(ecl_eql(v3,ECL_SYM("ERROR",1251)))) { goto L27; }
   goto L10;
   goto L11;
L27:;
   goto L11;
  }
L11:;
  goto L2;
L10:;
  value0 = LC20thunk(lex0);
  return value0;
 }
}
/*      local function THUNK                                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC20thunk(volatile cl_object *lex0)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v1pipe;
   cl_object v2;
   v1pipe = ECL_NIL;
   {
    cl_object v3;
    v3 = lex0[0];
    if (ecl_unlikely(!ECL_LISTP(v3))) FEtype_error_list(v3);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v2 = v3;
   }
   {
    cl_object v3input;
    cl_object v4output;
    cl_object v5type;
    v3input = ECL_NIL;
    v4output = ECL_NIL;
    v5type = ECL_NIL;
L8:;
    if (!(ecl_endp(v2))) { goto L10; }
    goto L9;
L10:;
    v1pipe = _ecl_car(v2);
    {
     cl_object v6;
     v6 = _ecl_cdr(v2);
     if (ecl_unlikely(!ECL_LISTP(v6))) FEtype_error_list(v6);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v2 = v6;
    }
    {
     cl_object v6;
     v6 = v1pipe;
     v3input = ecl_car(v6);
     v6 = ecl_cdr(v6);
     v4output = ecl_car(v6);
     v6 = ecl_cdr(v6);
     v5type = ecl_car(v6);
    }
    T0 = cl_open_stream_p(v4output);
    if (T0==ECL_NIL) { goto L31; }
    T0 = cl_open_stream_p(v3input);
    if (T0==ECL_NIL) { goto L31; }
    {
     cl_object v6next_char;
     v6next_char = cl_read_char_no_hang(3, v3input, ECL_NIL, ECL_SYM("EOF",1250));
     if (!((v6next_char)==(ECL_SYM("EOF",1250)))) { goto L35; }
     goto L30;
L35:;
     if (Null(v6next_char)) { goto L37; }
     cl_unread_char(2, v6next_char, v3input);
     if (Null(si_copy_stream(v3input, v4output, ECL_NIL))) { goto L29; }
     goto L30;
L37:;
     goto L29;
    }
L31:;
L30:;
    if (!((v5type)==(ECL_SYM("INPUT",1280)))) { goto L40; }
    cl_close(1, v4output);
L40:;
    lex0[1] = CONS(v1pipe,lex0[1]);
L29:;
    goto L8;
L9:;
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}

#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/clos/process.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclbUu4NcZ7_GgKmqq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:LSP;PROCESS.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclbUu4NcZ7_GgKmqq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  ecl_cmp_defmacro(VV[29]);                       /*  WITH-PROCESS-LOCK */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  ecl_function_dispatch(cl_env_copy,VV[32])(15, ECL_SYM("EXTERNAL-PROCESS",1816), _ecl_static_2, ECL_NIL, ECL_NIL, VVtemp[1], VVtemp[2], VV[2], ECL_NIL, ECL_NIL, ECL_NIL, VVtemp[3], ecl_make_fixnum(8), ECL_NIL, ECL_NIL, VV[3]) /*  DEFINE-STRUCTURE */;
  VV[4]= cl_find_class(1, ECL_SYM("EXTERNAL-PROCESS",1816));
  ecl_cmp_defun(VV[33]);                          /*  MAKE-EXTERNAL-PROCESS */
  {
   cl_object v1package;
   v1package = cl_symbol_package(VV[6]);
   if (Null(v1package)) { goto L12; }
   if (Null(si_package_locked_p(v1package))) { goto L12; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L12; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[6], ECL_SYM("PACKAGE",1311), v1package);
  }
L12:;
  {
   cl_object volatile v2;
   v2 = ecl_make_cfun((cl_objectfn_fixed)LC3__lambda14,ECL_NIL,Cblock,2);
   T0 = v2;
  }
  si_put_sysprop(VV[6], VV[7], T0);
  {
   cl_object v2package;
   v2package = cl_symbol_package(VV[0]);
   if (Null(v2package)) { goto L20; }
   if (Null(si_package_locked_p(v2package))) { goto L20; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L20; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[7], ECL_SYM("PACKAGE",1311), v2package);
  }
L20:;
  {
   cl_object volatile v3;
   v3 = ecl_make_cfun((cl_objectfn_fixed)LC4__lambda18,ECL_NIL,Cblock,2);
   T0 = v3;
  }
  si_put_sysprop(VV[0], VV[7], T0);
  {
   cl_object v3package;
   v3package = cl_symbol_package(VV[8]);
   if (Null(v3package)) { goto L28; }
   if (Null(si_package_locked_p(v3package))) { goto L28; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L28; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[8], ECL_SYM("PACKAGE",1311), v3package);
  }
L28:;
  {
   cl_object volatile v4;
   v4 = ecl_make_cfun((cl_objectfn_fixed)LC5__lambda22,ECL_NIL,Cblock,2);
   T0 = v4;
  }
  si_put_sysprop(VV[8], VV[7], T0);
  {
   cl_object v4package;
   v4package = cl_symbol_package(VV[9]);
   if (Null(v4package)) { goto L36; }
   if (Null(si_package_locked_p(v4package))) { goto L36; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L36; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[9], ECL_SYM("PACKAGE",1311), v4package);
  }
L36:;
  {
   cl_object volatile v5;
   v5 = ecl_make_cfun((cl_objectfn_fixed)LC6__lambda26,ECL_NIL,Cblock,2);
   T0 = v5;
  }
  si_put_sysprop(VV[9], VV[7], T0);
  {
   cl_object v5package;
   v5package = cl_symbol_package(ECL_SYM("EXTERNAL-PROCESS-ERROR-STREAM",1820));
   if (Null(v5package)) { goto L44; }
   if (Null(si_package_locked_p(v5package))) { goto L44; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L44; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[10], ECL_SYM("PACKAGE",1311), v5package);
  }
L44:;
  {
   cl_object volatile v6;
   v6 = ecl_make_cfun((cl_objectfn_fixed)LC7__lambda30,ECL_NIL,Cblock,2);
   T0 = v6;
  }
  si_put_sysprop(ECL_SYM("EXTERNAL-PROCESS-ERROR-STREAM",1820), VV[7], T0);
  {
   cl_object v6package;
   v6package = cl_symbol_package(ECL_SYM("EXTERNAL-PROCESS-OUTPUT",1819));
   if (Null(v6package)) { goto L52; }
   if (Null(si_package_locked_p(v6package))) { goto L52; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L52; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[11], ECL_SYM("PACKAGE",1311), v6package);
  }
L52:;
  {
   cl_object volatile v7;
   v7 = ecl_make_cfun((cl_objectfn_fixed)LC8__lambda34,ECL_NIL,Cblock,2);
   T0 = v7;
  }
  si_put_sysprop(ECL_SYM("EXTERNAL-PROCESS-OUTPUT",1819), VV[7], T0);
  {
   cl_object v7package;
   v7package = cl_symbol_package(ECL_SYM("EXTERNAL-PROCESS-INPUT",1818));
   if (Null(v7package)) { goto L60; }
   if (Null(si_package_locked_p(v7package))) { goto L60; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L60; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[12], ECL_SYM("PACKAGE",1311), v7package);
  }
L60:;
  {
   cl_object volatile v8;
   v8 = ecl_make_cfun((cl_objectfn_fixed)LC9__lambda38,ECL_NIL,Cblock,2);
   T0 = v8;
  }
  si_put_sysprop(ECL_SYM("EXTERNAL-PROCESS-INPUT",1818), VV[7], T0);
  {
   cl_object v8package;
   v8package = cl_symbol_package(ECL_SYM("EXTERNAL-PROCESS-PID",1817));
   if (Null(v8package)) { goto L68; }
   if (Null(si_package_locked_p(v8package))) { goto L68; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L68; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[13], ECL_SYM("PACKAGE",1311), v8package);
  }
L68:;
  {
   cl_object volatile v9;
   v9 = ecl_make_cfun((cl_objectfn_fixed)LC10__lambda42,ECL_NIL,Cblock,2);
   T0 = v9;
  }
  si_put_sysprop(ECL_SYM("EXTERNAL-PROCESS-PID",1817), VV[7], T0);
 }
  ecl_cmp_defun(VV[34]);                          /*  EXTERNAL-PROCESS-STATUS */
  ecl_cmp_defun(VV[35]);                          /*  EXTERNAL-PROCESS-WAIT */
  (void)0; /* No entry created for TERMINATE-PROCESS */
  ecl_cmp_defun(VV[36]);                          /*  FINALIZE-EXTERNAL-PROCESS */
  (void)0; /* No entry created for RUN-PROGRAM */
  ecl_cmp_defun(VV[50]);                          /*  ESCAPE-ARG      */
  ecl_cmp_defun(VV[51]);                          /*  PIPE-STREAMS    */
}
