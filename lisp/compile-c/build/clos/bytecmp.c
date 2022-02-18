/*      Compiler: ECL 21.2.1                                          */
/*      Source: EXT:BYTECMP;BYTECMP.LSP                               */
#include <ecl/ecl-cmp.h>
#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/clos/bytecmp.eclh"
/*      function definition for BC-DISASSEMBLE                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L1bc_disassemble(cl_object v1thing)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(si_valid_function_name_p(v1thing))) { goto L1; }
  v1thing = cl_fdefinition(v1thing);
L1:;
  {
   cl_object v2;
   v2 = ecl_make_bool(v1thing==ECL_NIL);
   if (Null(v2)) { goto L6; }
   goto L4;
L6:;
   if (Null(cl_functionp(v1thing))) { goto L8; }
   si_bc_disassemble(v1thing);
   goto L4;
L8:;
   if (!(ECL_CONSP(v1thing))) { goto L10; }
   {
    cl_object v3;
    v3 = ecl_car(v1thing);
    if (!((v3)==(ECL_SYM("LAMBDA",454)))) { goto L17; }
    goto L14;
    goto L15;
L17:;
    goto L15;
L15:;
    if (!(ecl_eql(v3,VV[1]))) { goto L10; }
    goto L11;
L14:;
   }
L11:;
   T0 = (cl_env_copy->function=(ECL_SYM("COMPILE",235)->symbol.gfdef))->cfun.entry(2, ECL_NIL, v1thing) /*  COMPILE */;
   (cl_env_copy->function=(ECL_SYM("DISASSEMBLE",307)->symbol.gfdef))->cfun.entry(1, T0) /*  DISASSEMBLE */;
   goto L4;
L10:;
   T0 = ecl_list1(v1thing);
   cl_error(9, ECL_SYM("SIMPLE-TYPE-ERROR",775), ECL_SYM("DATUM",1236), v1thing, ECL_SYM("EXPECTED-TYPE",1254), VV[3], ECL_SYM("FORMAT-CONTROL",1263), VV[4], ECL_SYM("FORMAT-ARGUMENTS",1262), T0);
  }
L4:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for BC-COMPILE                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L2bc_compile(cl_narg narg, cl_object v1name, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2definition;
  cl_object v3def_p;
  va_list args; va_start(args,v1name);
  {
   int i = 1;
   if (i >= narg) {
    v2definition = ECL_NIL;
    v3def_p = ECL_NIL;
   } else {
    i++;
    v2definition = va_arg(args,cl_object);
    v3def_p = ECL_T;
   }
  }
  va_end(args);
  ecl_bds_bind(cl_env_copy,ECL_SYM("*PRINT-PRETTY*",57),ECL_NIL); /*  *PRINT-PRETTY* */
  {
   cl_object v4;
   v4 = v1name;
   if ((si_valid_function_name_p(v4))!=ECL_NIL) { goto L4; }
   v1name = si_do_check_type(v4, VV[6], ECL_NIL, VV[7]);
L4:;
  }
  if (Null(v3def_p)) { goto L8; }
  {
   cl_object v4;
   v4 = v2definition;
   if ((cl_functionp(v4))!=ECL_NIL) { goto L11; }
   if (ECL_CONSP(v4)) { goto L11; }
   v2definition = si_do_check_type(v4, VV[8], ECL_NIL, VV[9]);
L11:;
  }
L8:;
  if (Null(cl_functionp(v2definition))) { goto L15; }
  {
   cl_object v5;                                  /*  FORM            */
   cl_object v6;                                  /*  LEXENV          */
   value0 = cl_function_lambda_expression(v2definition);
   {
    v5 = value0;
    v6 = cl_env_copy->values[1];
   }
   if (Null(v5)) { goto L17; }
   if (!((v6)==(ECL_T))) { goto L20; }
   (cl_env_copy->function=(ECL_SYM("WARN",905)->symbol.gfdef))->cfun.entry(1, VV[10]) /*  WARN */;
   cl_env_copy->nvalues = 3;
   cl_env_copy->values[2] = ECL_NIL;
   cl_env_copy->values[1] = ECL_T;
   cl_env_copy->values[0] = v2definition;
   ecl_bds_unwind1(cl_env_copy);
   return cl_env_copy->values[0];
L20:;
   if (Null(v6)) { goto L23; }
   v2definition = si_eval_with_env(2, v5, v6);
   goto L17;
L23:;
   v2definition = si_eval_with_env(5, v5, ECL_NIL, ECL_NIL, ECL_NIL, ECL_SYM("EXECUTE",1253));
  }
L17:;
  if (Null(v1name)) { goto L27; }
  si_fset(2, v1name, v2definition);
L27:;
  value0 = v1name;
  if ((value0)!=ECL_NIL) { goto L31; }
  T0 = v2definition;
  goto L29;
L31:;
  T0 = value0;
  goto L29;
L29:;
  cl_env_copy->nvalues = 3;
  cl_env_copy->values[2] = ECL_NIL;
  cl_env_copy->values[1] = ECL_NIL;
  cl_env_copy->values[0] = T0;
  ecl_bds_unwind1(cl_env_copy);
  return cl_env_copy->values[0];
L15:;
  if (v2definition==ECL_NIL) { goto L33; }
  {
   cl_object v4;
   v4 = ecl_car(v2definition);
   if (!((v4)==(ECL_SYM("LAMBDA",454)))) { goto L40; }
   goto L35;
   goto L38;
L40:;
   goto L38;
L38:;
   if (!((v4)==(ECL_SYM("LAMBDA-BLOCK",1367)))) { goto L43; }
   goto L35;
   goto L36;
L43:;
   goto L36;
  }
L36:;
  cl_format(3, ECL_T, VV[13], v2definition);
  cl_env_copy->nvalues = 3;
  cl_env_copy->values[2] = ECL_T;
  cl_env_copy->values[1] = ECL_T;
  cl_env_copy->values[0] = ECL_NIL;
  ecl_bds_unwind1(cl_env_copy);
  return cl_env_copy->values[0];
L35:;
  v2definition = si_eval_with_env(5, v2definition, ECL_NIL, ECL_NIL, ECL_NIL, ECL_SYM("EXECUTE",1253));
  if (Null(v1name)) { goto L48; }
  si_fset(2, v1name, v2definition);
L48:;
  value0 = v1name;
  if ((value0)!=ECL_NIL) { goto L52; }
  T0 = v2definition;
  goto L50;
L52:;
  T0 = value0;
  goto L50;
L50:;
  cl_env_copy->nvalues = 3;
  cl_env_copy->values[2] = ECL_NIL;
  cl_env_copy->values[1] = ECL_NIL;
  cl_env_copy->values[0] = T0;
  ecl_bds_unwind1(cl_env_copy);
  return cl_env_copy->values[0];
L33:;
  if ((cl_fboundp(v1name))!=ECL_NIL) { goto L54; }
  value0 = cl_error(2, VV[14], v1name);
  ecl_bds_unwind1(cl_env_copy);
  return value0;
L54:;
  T0 = cl_fdefinition(v1name);
  if (Null(si_of_class_p(2, T0, ECL_SYM("STANDARD-GENERIC-FUNCTION",976)))) { goto L56; }
  (cl_env_copy->function=(ECL_SYM("WARN",905)->symbol.gfdef))->cfun.entry(1, VV[15]) /*  WARN */;
  cl_env_copy->nvalues = 3;
  cl_env_copy->values[2] = ECL_NIL;
  cl_env_copy->values[1] = ECL_T;
  cl_env_copy->values[0] = v1name;
  ecl_bds_unwind1(cl_env_copy);
  return cl_env_copy->values[0];
L56:;
  {
   cl_object v5;                                  /*  FORM            */
   cl_object v6;                                  /*  LEXENV          */
   T0 = cl_fdefinition(v1name);
   value0 = cl_function_lambda_expression(T0);
   {
    v5 = value0;
    v6 = cl_env_copy->values[1];
   }
   if (Null(v5)) { goto L59; }
   if (!((v6)==(ECL_T))) { goto L62; }
   (cl_env_copy->function=(ECL_SYM("WARN",905)->symbol.gfdef))->cfun.entry(1, VV[16]) /*  WARN */;
   cl_env_copy->nvalues = 3;
   cl_env_copy->values[2] = ECL_NIL;
   cl_env_copy->values[1] = ECL_T;
   cl_env_copy->values[0] = v2definition;
   ecl_bds_unwind1(cl_env_copy);
   return cl_env_copy->values[0];
L62:;
   if (Null(v6)) { goto L65; }
   v2definition = si_eval_with_env(2, v5, v6);
   goto L59;
L65:;
   v2definition = si_eval_with_env(5, v5, ECL_NIL, ECL_NIL, ECL_NIL, ECL_SYM("EXECUTE",1253));
  }
L59:;
  if (!(v2definition==ECL_NIL)) { goto L69; }
  (cl_env_copy->function=(ECL_SYM("WARN",905)->symbol.gfdef))->cfun.entry(2, VV[17], v1name) /*  WARN */;
  cl_env_copy->nvalues = 3;
  cl_env_copy->values[2] = ECL_NIL;
  cl_env_copy->values[1] = ECL_T;
  cl_env_copy->values[0] = v1name;
  ecl_bds_unwind1(cl_env_copy);
  return cl_env_copy->values[0];
L69:;
  cl_env_copy->nvalues = 3;
  cl_env_copy->values[2] = ECL_NIL;
  cl_env_copy->values[1] = ECL_NIL;
  cl_env_copy->values[0] = v1name;
  ecl_bds_unwind1(cl_env_copy);
  return cl_env_copy->values[0];
 }
}
/*      function definition for BC-COMPILE-FILE-PATHNAME              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L3bc_compile_file_pathname(cl_narg narg, cl_object v1name, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2output_file;
  cl_object v3type;
  cl_object v4verbose;
  cl_object v5print;
  cl_object v6c_file;
  cl_object v7h_file;
  cl_object v8data_file;
  cl_object v9shared_data_file;
  cl_object v10system_p;
  cl_object v11load;
  cl_object v12external_format;
  ecl_va_list args; ecl_va_start(args,v1name,narg,1);
  {
   cl_object keyvars[22];
   cl_parse_key(args,11,L3bc_compile_file_pathnamekeys,keyvars,NULL,FALSE);
   ecl_va_end(args);
   if (Null(keyvars[11])) {
    v2output_file = v1name;
   } else {
    v2output_file = keyvars[0];
   }
   if (Null(keyvars[12])) {
    v3type = VV[19];
   } else {
    v3type = keyvars[1];
   }
   v4verbose = keyvars[2];
   v5print = keyvars[3];
   v6c_file = keyvars[4];
   v7h_file = keyvars[5];
   v8data_file = keyvars[6];
   v9shared_data_file = keyvars[7];
   v10system_p = keyvars[8];
   v11load = keyvars[9];
   v12external_format = keyvars[10];
  }
  {
   cl_object v13extension;
   v13extension = VV[20];
   if (!(ecl_eql(v3type,VV[19]))) { goto L10; }
   goto L7;
   goto L8;
L10:;
   goto L8;
L8:;
   if (!(ecl_eql(v3type,VV[22]))) { goto L5; }
   goto L6;
L7:;
L6:;
   v13extension = VV[20];
   goto L4;
L5:;
   cl_error(2, VV[24], v3type);
L4:;
   value0 = cl_make_pathname(4, ECL_SYM("TYPE",1346), v13extension, ECL_SYM("DEFAULTS",1238), v2output_file);
   return value0;
  }
 }
}
/*      function definition for BC-COMPILE-FILE                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L4bc_compile_file(volatile cl_narg narg, cl_object volatile v1input, ...)
{
 cl_object T0, T1;
 cl_object volatile env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object volatile v2load;
  cl_object volatile v3external_format;
  cl_object volatile v4output_file;
  cl_object volatile v5output_file_p;
  ecl_va_list args; ecl_va_start(args,v1input,narg,1);
  {
   cl_object keyvars[10];
   cl_parse_key(args,5,L4bc_compile_filekeys,keyvars,NULL,TRUE);
   ecl_va_end(args);
   if (Null(keyvars[5])) {
    ecl_bds_push(cl_env_copy,ECL_SYM("*COMPILE-VERBOSE*",31)); /*  *COMPILE-VERBOSE* */
   } else {
    ecl_bds_bind(cl_env_copy,ECL_SYM("*COMPILE-VERBOSE*",31),keyvars[0]); /*  *COMPILE-VERBOSE* */
   }
   if (Null(keyvars[6])) {
    ecl_bds_push(cl_env_copy,ECL_SYM("*COMPILE-PRINT*",30)); /*  *COMPILE-PRINT* */
   } else {
    ecl_bds_bind(cl_env_copy,ECL_SYM("*COMPILE-PRINT*",30),keyvars[1]); /*  *COMPILE-PRINT* */
   }
   v2load = keyvars[2];
   if (Null(keyvars[8])) {
    v3external_format = ECL_SYM("DEFAULT",1237);
   } else {
    v3external_format = keyvars[3];
   }
   v4output_file = keyvars[4];
   v5output_file_p = keyvars[9];
  }
  if (Null(v5output_file_p)) { goto L4; }
  if (ecl_eql(v4output_file,ECL_T)) { goto L4; }
  v4output_file = cl_pathname(v4output_file);
  goto L3;
L4:;
  v4output_file = L3bc_compile_file_pathname(1, v1input);
L3:;
  if (Null(ecl_symbol_value(ECL_SYM("*COMPILE-VERBOSE*",31)))) { goto L7; }
  cl_format(3, ECL_T, VV[26], v1input);
L7:;
  if ((cl_streamp(v1input))!=ECL_NIL) { goto L10; }
  T0 = cl_truename(v1input);
  T1 = CONS(T0,ecl_make_fixnum(0));
  ecl_bds_bind(cl_env_copy,ECL_SYM("*SOURCE-LOCATION*",1202),T1); /*  *SOURCE-LOCATION* */
  T0 = cl_merge_pathnames(1, v1input);
  T1 = cl_pathname(T0);
  ecl_bds_bind(cl_env_copy,ECL_SYM("*COMPILE-FILE-PATHNAME*",28),T1); /*  *COMPILE-FILE-PATHNAME* */
  T0 = cl_truename(v1input);
  ecl_bds_bind(cl_env_copy,ECL_SYM("*COMPILE-FILE-TRUENAME*",29),T0); /*  *COMPILE-FILE-TRUENAME* */
  {
   volatile cl_object v6sin;
   v6sin = cl_open(3, v1input, ECL_SYM("DIRECTION",1240), ECL_SYM("INPUT",1280));
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
      cl_env_copy->values[0] = L4bc_compile_file(3, v6sin, VV[27], v4output_file);
      ecl_stack_frame_push_values(v9);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      if (Null(v6sin)) { goto L18; }
      cl_close(1, v6sin);
L18:;cl_env_copy->values[0]=ecl_stack_frame_pop_values(v9);
     }
     ecl_stack_frame_close(_ecl_inner_frame);
    }
    }
    ecl_frs_pop(cl_env_copy);
    v8=ecl_stack_push_values(cl_env_copy);
    if (Null(v6sin)) { goto L20; }
    cl_close(3, v6sin, ECL_SYM("ABORT",1217), ECL_T);
L20:;
    ecl_stack_pop_values(cl_env_copy,v8);
    if (unwinding) ecl_unwind(cl_env_copy,next_fr);
    ECL_STACK_SET_INDEX(cl_env_copy,v7);
    ecl_bds_unwind1(cl_env_copy);
    ecl_bds_unwind1(cl_env_copy);
    ecl_bds_unwind1(cl_env_copy);
    goto L9;
   }
  }
L10:;
  if ((v5output_file_p)!=ECL_NIL) { goto L22; }
  cl_error(1, VV[28]);
  goto L9;
L22:;
  {
   volatile cl_object v9sout;
   v9sout = cl_open(9, v4output_file, ECL_SYM("DIRECTION",1240), ECL_SYM("OUTPUT",1309), ECL_SYM("IF-EXISTS",1270), ECL_SYM("SUPERSEDE",1341), ECL_SYM("IF-DOES-NOT-EXIST",1268), ECL_SYM("CREATE",1235), ECL_SYM("EXTERNAL-FORMAT",1258), v3external_format);
   {
    volatile bool unwinding = FALSE;
    cl_index v10=ECL_STACK_INDEX(cl_env_copy),v11;
    ecl_frame_ptr next_fr;
    ecl_frs_push(cl_env_copy,ECL_PROTECT_TAG);
    if (__ecl_frs_push_result) {
      unwinding = TRUE; next_fr=cl_env_copy->nlj_fr;
    } else {
    {
     struct ecl_stack_frame _ecl_inner_frame_aux;
     volatile cl_object _ecl_inner_frame = ecl_stack_frame_open(cl_env_copy,(cl_object)&_ecl_inner_frame_aux,0);
     {
      cl_object v12;
      v12 = _ecl_inner_frame;
      {
       cl_object v13binary;
       {
        cl_object v14;
        cl_object v15;
        v14 = ecl_symbol_value(ECL_SYM("*PACKAGE*",45));
        v15 = ecl_symbol_value(ECL_SYM("*READTABLE*",67));
        ecl_bds_bind(cl_env_copy,ECL_SYM("*PACKAGE*",45),v14); /*  *PACKAGE* */
        ecl_bds_bind(cl_env_copy,ECL_SYM("*READTABLE*",67),v15); /*  *READTABLE* */
        ecl_bds_bind(cl_env_copy,ECL_SYM("*BYTECODES-COMPILER*",1761),ECL_T); /*  *BYTECODES-COMPILER* */
        v13binary = si_bc_compile_from_stream(v1input);
        ecl_bds_unwind1(cl_env_copy);
        ecl_bds_unwind1(cl_env_copy);
        ecl_bds_unwind1(cl_env_copy);
       }
       {
        cl_object v14;
        v14 = ecl_symbol_value(ECL_SYM("+ECL-SYNTAX-PROGV-LIST+",1778));
        {
         cl_object v16, v17; cl_index v15;
         v16 = _ecl_car(v14);
         v17 = _ecl_cdr(v14);
         v15 = ecl_progv(cl_env_copy, v16, v17);
         cl_write(11, v13binary, ECL_SYM("STREAM",1340), v9sout, ECL_SYM("CIRCLE",1228), ECL_T, ECL_SYM("ESCAPE",1252), ECL_T, ECL_SYM("READABLY",1323), ECL_T, ECL_SYM("PRETTY",1316), ECL_NIL);
         ecl_bds_unwind(cl_env_copy,v15);
        }
       }
       cl_env_copy->values[0] = ecl_terpri(v9sout);
       cl_env_copy->nvalues = 1;
      }
      ecl_stack_frame_push_values(v12);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      if (Null(v9sout)) { goto L37; }
      cl_close(1, v9sout);
L37:;cl_env_copy->values[0]=ecl_stack_frame_pop_values(v12);
     }
     ecl_stack_frame_close(_ecl_inner_frame);
    }
    }
    ecl_frs_pop(cl_env_copy);
    v11=ecl_stack_push_values(cl_env_copy);
    if (Null(v9sout)) { goto L39; }
    cl_close(3, v9sout, ECL_SYM("ABORT",1217), ECL_T);
L39:;
    ecl_stack_pop_values(cl_env_copy,v11);
    if (unwinding) ecl_unwind(cl_env_copy,next_fr);
    ECL_STACK_SET_INDEX(cl_env_copy,v10);
   }
  }
L9:;
  if (Null(v2load)) { goto L41; }
  cl_load(3, v4output_file, ECL_SYM("VERBOSE",1353), ecl_symbol_value(ECL_SYM("*COMPILE-VERBOSE*",31)));
L41:;
  cl_env_copy->nvalues = 3;
  cl_env_copy->values[2] = ECL_NIL;
  cl_env_copy->values[1] = ECL_NIL;
  cl_env_copy->values[0] = v4output_file;
  ecl_bds_unwind1(cl_env_copy);
  ecl_bds_unwind1(cl_env_copy);
  return cl_env_copy->values[0];
 }
}
/*      function definition for INSTALL-BYTECODES-COMPILER            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L5install_bytecodes_compiler()
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_find_package(VV[30]);
  si_package_lock(T0, ECL_NIL);
  cl_set(ECL_SYM("*FEATURES*",36),cl_adjoin(2, VV[31], ecl_symbol_value(ECL_SYM("*FEATURES*",36))));
  T0 = ecl_fdefinition(VV[5]);
  si_fset(2, ECL_SYM("DISASSEMBLE",307), T0);
  T0 = ecl_fdefinition(VV[18]);
  si_fset(2, ECL_SYM("COMPILE",235), T0);
  T0 = ecl_fdefinition(VV[29]);
  si_fset(2, ECL_SYM("COMPILE-FILE",236), T0);
  T0 = ecl_fdefinition(VV[25]);
  si_fset(2, ECL_SYM("COMPILE-FILE-PATHNAME",237), T0);
  T0 = cl_find_package(VV[30]);
  value0 = si_package_lock(T0, ECL_T);
  return value0;
 }
}
/*      function definition for INSTALL-C-COMPILER                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L6install_c_compiler()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  cl_require(1, VV[33]);
  value0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("INSTALL-C-COMPILER",2042))(0);
  return value0;
 }
}

#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/clos/bytecmp.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _ecl4YHz1Db7_b6N6lq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("EXT:BYTECMP;BYTECMP.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_ecl4YHz1Db7_b6N6lq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  ecl_function_dispatch(cl_env_copy,VV[36])(12, VVtemp[1], ECL_NIL, ECL_NIL, ECL_NIL, VVtemp[2], ECL_NIL, ECL_NIL, ECL_NIL, VVtemp[3], ECL_NIL, ECL_NIL, ECL_NIL) /*  DODEFPACKAGE */;
  ecl_cmp_defun(VV[37]);                          /*  BC-DISASSEMBLE  */
  ecl_cmp_defun(VV[38]);                          /*  BC-COMPILE      */
  ecl_cmp_defun(VV[39]);                          /*  BC-COMPILE-FILE-PATHNAME */
  ecl_cmp_defun(VV[51]);                          /*  BC-COMPILE-FILE */
  ecl_cmp_defun(VV[57]);                          /*  INSTALL-BYTECODES-COMPILER */
  ecl_cmp_defun(VV[58]);                          /*  INSTALL-C-COMPILER */
  L5install_bytecodes_compiler();
  cl_provide(VV[35]);
  si_package_lock(VVtemp[4], ECL_T);
}
