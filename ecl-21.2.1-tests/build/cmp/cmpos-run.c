/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CMP;CMPOS-RUN.LSP                                 */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/cmp/cmpos-run.eclh"
/*      function definition for SAFE-SYSTEM                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L1safe_system(cl_object v1string)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  ecl_function_dispatch(cl_env_copy,VV[20])(2, VV[0], v1string) /*  CMPNOTE */;
  {
   cl_fixnum v2result;
   v2result = ecl_fixnum(si_system(v1string));
   if ((v2result)==0) { goto L3; }
   value0 = cl_cerror(4, VV[1], VV[2], v1string, ecl_make_fixnum(v2result));
   return value0;
L3:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for SAVE-DIRECTORY                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L2save_directory(cl_object volatile v1forms)
{
 cl_object T0;
 cl_object volatile env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   volatile cl_object v2directory;
   T0 = cl_make_pathname(6, ECL_SYM("NAME",1300), ECL_NIL, ECL_SYM("TYPE",1346), ECL_NIL, ECL_SYM("DEFAULTS",1238), ecl_symbol_value(ECL_SYM("*DEFAULT-PATHNAME-DEFAULTS*",34)));
   v2directory = cl_probe_file(T0);
   if (Null(v2directory)) { goto L2; }
   {
    volatile cl_object v3;
    v3 = si_chdir(1, v2directory);
    ecl_bds_bind(cl_env_copy,ECL_SYM("*DEFAULT-PATHNAME-DEFAULTS*",34),v2directory); /*  *DEFAULT-PATHNAME-DEFAULTS* */
    {
     volatile bool unwinding = FALSE;
     cl_index v4=ECL_STACK_INDEX(cl_env_copy),v5;
     ecl_frame_ptr next_fr;
     ecl_frs_push(cl_env_copy,ECL_PROTECT_TAG);
     if (__ecl_frs_push_result) {
       unwinding = TRUE; next_fr=cl_env_copy->nlj_fr;
     } else {
     cl_env_copy->values[0] = ecl_function_dispatch(cl_env_copy,v1forms)(0);
     }
     ecl_frs_pop(cl_env_copy);
     v5=ecl_stack_push_values(cl_env_copy);
     si_chdir(1, v3);
     ecl_stack_pop_values(cl_env_copy,v5);
     if (unwinding) ecl_unwind(cl_env_copy,next_fr);
     ECL_STACK_SET_INDEX(cl_env_copy,v4);
     ecl_bds_unwind1(cl_env_copy);
     return cl_env_copy->values[0];
    }
   }
L2:;
   value0 = ecl_function_dispatch(cl_env_copy,v1forms)(0);
   return value0;
  }
 }
}
/*      local function WITH-CURRENT-DIRECTORY                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC3with_current_directory(cl_object v1, cl_object v2)
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
   v3 = ecl_cdr(v1);
   T0 = cl_listX(3, ECL_SYM("LAMBDA",454), ECL_NIL, v3);
   T1 = cl_list(2, ECL_SYM("FUNCTION",398), T0);
   value0 = cl_list(2, VV[4], T1);
   return value0;
  }
 }
}
/*      function definition for SAFE-RUN-PROGRAM                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L5safe_run_program(cl_object v1program, cl_object v2args)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 cl_object CLV0, CLV1, CLV2, CLV3;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object env1 = env0;
   env1 = ECL_NIL;
   CLV0 = env1 = CONS(ECL_NIL,env1);              /*  RESULT          */
   CLV1 = env1 = CONS(ECL_NIL,env1);              /*  OUTPUT          */
   ecl_function_dispatch(cl_env_copy,VV[20])(3, VV[6], v1program, v2args) /*  CMPNOTE */;
   {
    cl_object v3program;
    cl_object env2 = env1;
    ecl_bds_bind(cl_env_copy,ECL_SYM("*STANDARD-OUTPUT*",69),ecl_symbol_value(ECL_SYM("+PROCESS-STANDARD-OUTPUT+",1895))); /*  *STANDARD-OUTPUT* */
    ecl_bds_bind(cl_env_copy,ECL_SYM("*ERROR-OUTPUT*",35),ecl_symbol_value(ECL_SYM("+PROCESS-ERROR-OUTPUT+",1896))); /*  *ERROR-OUTPUT* */
    v3program = L9split_program_options(v1program);
    T0 = ecl_cdr(v3program);
    T1 = ecl_append(T0,v2args);
    CLV2 = env2 = CONS(T1,env2);                  /*  ARGS            */
    T0 = ecl_car(v3program);
    CLV3 = env2 = CONS(T0,env2);                  /*  PROGRAM         */
    {
     cl_object v4;
     v4 = ecl_make_cclosure_va((cl_objectfn)LC4__lambda8,env2,Cblock,0);
     T0 = v4;
    }
    L2save_directory(T0);
    ecl_bds_unwind1(cl_env_copy);
    ecl_bds_unwind1(cl_env_copy);
   }
   if (!(ECL_CONS_CAR(CLV0)==ECL_NIL)) { goto L6; }
   cl_cerror(5, VV[1], VV[7], v1program, v2args, ECL_CONS_CAR(CLV0));
   goto L5;
L6:;
   if (ecl_zerop(ECL_CONS_CAR(CLV0))) { goto L5; }
   T0 = ECL_CONS_CAR(CLV0);
   cl_cerror(6, VV[1], VV[8], T0, v1program, v2args, ECL_CONS_CAR(CLV1));
L5:;
   value0 = ECL_CONS_CAR(CLV0);
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      closure LAMBDA8                                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC4__lambda8(cl_narg narg, ...)
{
 cl_object CLV0, CLV1, CLV2, CLV3;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV3 = env0;                                     /*  PROGRAM         */
 CLV2 = _ecl_cdr(CLV3);
 CLV1 = _ecl_cdr(CLV2);
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=0)) FEwrong_num_arguments_anonym();
 {
TTL:
  {
   cl_object v2;                                  /*  OUTPUT-STREAM   */
   cl_object v3;                                  /*  RETURN-STATUS   */
   cl_object v4;                                  /*  PROCESS-OBJ     */
   value0 = si_run_program(4, ECL_CONS_CAR(CLV3), ECL_CONS_CAR(CLV2), ECL_SYM("WAIT",1357), ECL_NIL);
   {
    v2 = value0;
    v3 = cl_env_copy->values[1];
    v4 = cl_env_copy->values[2];
   }
   ECL_CONS_CAR(CLV1) = ecl_function_dispatch(cl_env_copy,VV[24])(1, v2) /*  COLLECT-LINES */;
   value0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("EXTERNAL-PROCESS-WAIT",1822))(2, v4, ECL_T) /*  EXTERNAL-PROCESS-WAIT */;
   {
    const int v5 = cl_env_copy->nvalues;
    v3 = value0;
    cl_object v6;
    v6 = (v5<=1)? ECL_NIL : cl_env_copy->values[1];
    ECL_CONS_CAR(CLV0) = v6;
   }
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
 }
}
/*      function definition for SPLIT-PROGRAM-OPTIONS                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L9split_program_options(cl_object v1string)
{
 cl_object T0;
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
    cl_object v3option;
    v3option = ECL_NIL;
    {
     cl_object v4status;
     v4status = ECL_NIL;
     {
      cl_fixnum v5;
      cl_object v6i;
      v5 = ecl_length(v1string);
      v6i = ecl_make_fixnum(0);
      {
       cl_object v7c;
       v7c = ECL_NIL;
       {
        cl_object v8now;
        v8now = ECL_NIL;
L8:;
        if (!(ecl_greatereq(v6i,ecl_make_fixnum(v5)))) { goto L10; }
        goto L9;
L10:;
        v7c = cl_char(v1string, v6i);
        v8now = ecl_car(v4status);
        if (!((v8now)==(CODE_CHAR(39)))) { goto L17; }
        if (!((v7c)==(CODE_CHAR(39)))) { goto L19; }
        v4status = ecl_cdr(v4status);
        goto L16;
L19:;
        v3option = LC8push_char(v7c, v3option);
        goto L16;
L17:;
        if (!((v8now)==(CODE_CHAR(92)))) { goto L23; }
        v3option = LC8push_char(v7c, v3option);
        v4status = ecl_cdr(v4status);
        goto L16;
L23:;
        if (!((v8now)==(CODE_CHAR(34)))) { goto L28; }
        if (!((v7c)==(CODE_CHAR(34)))) { goto L30; }
        v4status = ecl_cdr(v4status);
        goto L16;
L30:;
        v3option = LC8push_char(v7c, v3option);
        goto L16;
L28:;
        if (!(((v7c)==ECL_CODE_CHAR((ecl_character)(92))))) { goto L39; }
        goto L36;
        goto L37;
L39:;
        goto L37;
L37:;
        if (!(((v7c)==ECL_CODE_CHAR((ecl_character)(39))))) { goto L43; }
        goto L36;
        goto L41;
L43:;
        goto L41;
L41:;
        if (!(((v7c)==ECL_CODE_CHAR((ecl_character)(34))))) { goto L34; }
        goto L35;
L36:;
L35:;
        v4status = CONS(v7c,v4status);
        goto L16;
L34:;
        if (!(((v7c)==ECL_CODE_CHAR((ecl_character)(32))))) { goto L52; }
        goto L49;
        goto L50;
L52:;
        goto L50;
L50:;
        if (!(((v7c)==ECL_CODE_CHAR((ecl_character)(9))))) { goto L56; }
        goto L49;
        goto L54;
L56:;
        goto L54;
L54:;
        if (!(((v7c)==ECL_CODE_CHAR((ecl_character)(13))))) { goto L60; }
        goto L49;
        goto L58;
L60:;
        goto L58;
L58:;
        if (!(((v7c)==ECL_CODE_CHAR((ecl_character)(10))))) { goto L47; }
        goto L48;
L49:;
L48:;
        v2output = LC6maybe_push(v2output, v3option);
        v3option = ECL_NIL;
        goto L16;
L47:;
        v3option = LC8push_char(v7c, v3option);
L16:;
        v6i = ecl_one_plus(v6i);
        goto L8;
L9:;
        if (Null(v4status)) { goto L71; }
        cl_error(2, VV[17], v1string);
        goto L70;
L71:;
        T0 = LC6maybe_push(v2output, v3option);
        value0 = cl_nreverse(T0);
        return value0;
L70:;
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 1;
        return value0;
       }
      }
     }
    }
   }
  }
 }
}
/*      local function PUSH-CHAR                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC8push_char(cl_object v1c, cl_object v2s)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if ((v2s)!=ECL_NIL) { goto L1; }
  v2s = LC7new_string();
L1:;
  {
   cl_fixnum v3;
   cl_fixnum v4;
   v3 = ((v2s)->vector.fillp);
   v4 = ((v2s)->array.dim);
   if (!((v3)<(v4))) { goto L8; }
   {
    cl_fixnum v5;
    v5 = (1)+(v3);
    ((v2s)->vector.fillp)=(v5);
   }
   ecl_aset_unsafe(v2s,v3,v1c);
   goto L4;
L8:;
   cl_vector_push_extend(2, v1c, v2s);
  }
L4:;
  value0 = v2s;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function NEW-STRING                                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC7new_string()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = si_make_vector(ECL_SYM("BASE-CHAR",122), ecl_make_fixnum(32), ECL_T, ecl_make_fixnum(0), ECL_NIL, ecl_make_fixnum(0));
  return value0;
 }
}
/*      local function MAYBE-PUSH                                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC6maybe_push(cl_object v1options, cl_object v2current)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(v2current)) { goto L1; }
  value0 = CONS(v2current,v1options);
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  value0 = v1options;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}

#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/cmp/cmpos-run.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclBV02yoa7_ZKYmqq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CMP;CMPOS-RUN.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclBV02yoa7_ZKYmqq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  ecl_cmp_defun(VV[19]);                          /*  SAFE-SYSTEM     */
  ecl_cmp_defun(VV[21]);                          /*  SAVE-DIRECTORY  */
  ecl_cmp_defmacro(VV[22]);                       /*  WITH-CURRENT-DIRECTORY */
  ecl_cmp_defun(VV[23]);                          /*  SAFE-RUN-PROGRAM */
  ecl_cmp_defun(VV[25]);                          /*  SPLIT-PROGRAM-OPTIONS */
}
