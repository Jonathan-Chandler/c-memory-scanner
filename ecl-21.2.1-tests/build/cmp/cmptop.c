/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CMP;CMPTOP.LSP                                    */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/cmp/cmptop.eclh"
/*      function definition for T1EXPR                                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L1t1expr(cl_object v1form)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  ecl_bds_bind(cl_env_copy,VV[0],ECL_NIL);        /*  *CURRENT-TOPLEVEL-FORM* */
  if (Null(ecl_symbol_value(VV[1]))) { goto L2; }
  T0 = ecl_function_dispatch(cl_env_copy,VV[241])(1, ecl_symbol_value(VV[1])) /*  CMP-ENV-COPY */;
  goto L1;
L2:;
  T0 = ecl_function_dispatch(cl_env_copy,VV[242])(0) /*  CMP-ENV-ROOT */;
L1:;
  ecl_bds_bind(cl_env_copy,VV[1],T0);             /*  *CMP-ENV*       */
  T0 = L2t1expr_(v1form);
  cl_set(VV[2],CONS(T0,ecl_symbol_value(VV[2])));
  value0 = ecl_symbol_value(VV[2]);
  cl_env_copy->nvalues = 1;
  ecl_bds_unwind1(cl_env_copy);
  ecl_bds_unwind1(cl_env_copy);
  return value0;
 }
}
/*      function definition for T1EXPR*                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L2t1expr_(cl_object v1form)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = CONS(v1form,ecl_symbol_value(VV[0]));
  ecl_bds_bind(cl_env_copy,VV[0],T0);             /*  *CURRENT-TOPLEVEL-FORM* */
  ecl_bds_bind(cl_env_copy,VV[5],v1form);         /*  *CURRENT-FORM*  */
  ecl_bds_bind(cl_env_copy,VV[6],ECL_T);          /*  *FIRST-ERROR*   */
  ecl_bds_bind(cl_env_copy,VV[7],ecl_make_fixnum(0)); /*  *SETJMPS*   */
  v1form = ecl_function_dispatch(cl_env_copy,VV[244])(1, v1form) /*  CHK-SYMBOL-MACROLET */;
  if (!(ECL_CONSP(v1form))) { goto L3; }
  {
   cl_object v2;
   cl_object v3;
   cl_object v4fun;
   cl_object v5fd;
   v2 = ecl_car(v1form);
   v3 = ecl_cdr(v1form);
   v4fun = v2;
   v5fd = ECL_NIL;
   if (Null(ecl_memql(v4fun,ecl_symbol_value(VV[4])))) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[245])(0)  /*  PRINT-CURRENT-FORM */;
L9:;
   if (!(ECL_CONSP(v4fun))) { goto L11; }
   value0 = L17t1ordinary(v1form);
   ecl_bds_unwind_n(cl_env_copy,4);
   return value0;
L11:;
   if (ECL_SYMBOLP(v4fun)) { goto L13; }
   value0 = ecl_function_dispatch(cl_env_copy,VV[246])(2, VV[8], v4fun) /*  CMPERR */;
   ecl_bds_unwind_n(cl_env_copy,4);
   return value0;
L13:;
   if (!((v4fun)==(ECL_SYM("QUOTE",681)))) { goto L15; }
   value0 = L17t1ordinary(ECL_NIL);
   ecl_bds_unwind_n(cl_env_copy,4);
   return value0;
L15:;
   v5fd = ecl_gethash_safe(v4fun,ecl_symbol_value(VV[9]),ECL_NIL);
   if (Null(v5fd)) { goto L17; }
   value0 = ecl_function_dispatch(cl_env_copy,v5fd)(1, v3);
   ecl_bds_unwind_n(cl_env_copy,4);
   return value0;
L17:;
   if (Null(ecl_gethash_safe(v4fun,ecl_symbol_value(VV[10]),ECL_NIL))) { goto L20; }
   value0 = L17t1ordinary(v1form);
   ecl_bds_unwind_n(cl_env_copy,4);
   return value0;
L20:;
   v5fd = (cl_env_copy->function=(ECL_SYM("COMPILER-MACRO-FUNCTION",241)->symbol.gfdef))->cfun.entry(1, v4fun) /*  COMPILER-MACRO-FUNCTION */;
   if (Null(v5fd)) { goto L22; }
   if (Null(ecl_function_dispatch(cl_env_copy,VV[247])(1, v4fun) /*  INLINE-POSSIBLE */)) { goto L22; }
   {
    cl_object v6success;
    v6success = ECL_NIL;
    value0 = ecl_function_dispatch(cl_env_copy,VV[248])(2, v5fd, v1form) /*  CMP-EXPAND-MACRO */;
    {
     const int v7 = cl_env_copy->nvalues;
     v5fd = value0;
     cl_object v8;
     v8 = (v7<=1)? ECL_NIL : cl_env_copy->values[1];
     v6success = v8;
    }
    if (Null(v6success)) { goto L22; }
   }
   if (Null(ecl_symbol_value(VV[11]))) { goto L30; }
   ecl_function_dispatch(cl_env_copy,VV[249])(1, v1form) /*  CMP-EVAL */;
L30:;
   ecl_bds_bind(cl_env_copy,VV[11],ECL_NIL);      /*  *COMPILE-TIME-TOO* */
   cl_set(VV[0],CONS(ECL_SYM("MACROEXPAND",521),ecl_symbol_value(VV[0])));
   value0 = L2t1expr_(v5fd);
   ecl_bds_unwind_n(cl_env_copy,5);
   return value0;
L22:;
   v5fd = ecl_function_dispatch(cl_env_copy,VV[250])(1, v4fun) /*  CMP-MACRO-FUNCTION */;
   if (Null(v5fd)) { goto L34; }
   cl_set(VV[0],CONS(ECL_SYM("MACROEXPAND",521),ecl_symbol_value(VV[0])));
   T0 = ecl_function_dispatch(cl_env_copy,VV[248])(2, v5fd, v1form) /*  CMP-EXPAND-MACRO */;
   value0 = L2t1expr_(T0);
   ecl_bds_unwind_n(cl_env_copy,4);
   return value0;
L34:;
   value0 = L17t1ordinary(v1form);
   ecl_bds_unwind_n(cl_env_copy,4);
   return value0;
  }
L3:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  ecl_bds_unwind_n(cl_env_copy,4);
  return value0;
 }
}
/*      function definition for T1/C1EXPR                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L3t1_c1expr(cl_object v1form)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if ((ecl_symbol_value(VV[13]))!=ECL_NIL) { goto L1; }
  value0 = ecl_function_dispatch(cl_env_copy,VV[252])(1, v1form) /*  C1EXPR */;
  return value0;
L1:;
  if (!(ECL_ATOM(v1form))) { goto L3; }
  value0 = L17t1ordinary(v1form);
  return value0;
L3:;
  value0 = L2t1expr_(v1form);
  return value0;
 }
}
/*      function definition for T2EXPR                                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L4t2expr(cl_object v1form)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(v1form)) { goto L1; }
  {
   cl_object v2def;
   T0 = ecl_function_dispatch(cl_env_copy,VV[254])(1, v1form) /*  C1FORM-NAME */;
   v2def = ecl_gethash_safe(T0,ecl_symbol_value(VV[15]),ECL_NIL);
   if (Null(v2def)) { goto L4; }
   {
    cl_object v3;
    cl_object v4;
    cl_object v5;
    cl_object v6;
    cl_object v7;
    v3 = ecl_function_dispatch(cl_env_copy,VV[255])(1, v1form) /*  C1FORM-FILE */;
    v4 = ecl_function_dispatch(cl_env_copy,VV[256])(1, v1form) /*  C1FORM-FILE-POSITION */;
    v5 = ecl_function_dispatch(cl_env_copy,VV[257])(1, v1form) /*  C1FORM-FORM */;
    v6 = ecl_function_dispatch(cl_env_copy,VV[257])(1, v1form) /*  C1FORM-FORM */;
    v7 = ecl_function_dispatch(cl_env_copy,VV[258])(1, v1form) /*  C1FORM-ENV */;
    ecl_bds_bind(cl_env_copy,ECL_SYM("*COMPILE-FILE-TRUENAME*",29),v3); /*  *COMPILE-FILE-TRUENAME* */
    ecl_bds_bind(cl_env_copy,VV[16],v4);          /*  *COMPILE-FILE-POSITION* */
    ecl_bds_bind(cl_env_copy,VV[0],v5);           /*  *CURRENT-TOPLEVEL-FORM* */
    ecl_bds_bind(cl_env_copy,VV[5],v6);           /*  *CURRENT-FORM*  */
    ecl_bds_bind(cl_env_copy,VV[1],v7);           /*  *CMP-ENV*       */
    T0 = ecl_function_dispatch(cl_env_copy,VV[259])(1, v1form) /*  C1FORM-ARGS */;
    value0 = cl_apply(3, v2def, v1form, T0);
    ecl_bds_unwind_n(cl_env_copy,5);
    return value0;
   }
L4:;
   value0 = ecl_function_dispatch(cl_env_copy,VV[246])(2, VV[17], v1form) /*  CMPERR */;
   return value0;
  }
L1:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for EMIT-LOCAL-FUNS                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L5emit_local_funs()
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  ecl_bds_bind(cl_env_copy,VV[11],ECL_NIL);       /*  *COMPILE-TIME-TOO* */
  ecl_bds_bind(cl_env_copy,VV[13],ECL_NIL);       /*  *COMPILE-TOPLEVEL* */
  goto L3;
L2:;
  {
   cl_object v1lfs;
   v1lfs = ecl_symbol_value(VV[20]);
   goto L9;
L8:;
   v1lfs = ecl_cdr(v1lfs);
L9:;
   T0 = ecl_cdr(v1lfs);
   if ((T0)==(ecl_symbol_value(VV[19]))) { goto L13; }
   goto L8;
L13:;
   cl_set(VV[19],v1lfs);
   T0 = ecl_car(v1lfs);
   ecl_function_dispatch(cl_env_copy,VV[187])(1, T0) /*  T3LOCAL-FUN  */;
  }
L3:;
  if ((ecl_symbol_value(VV[19]))==(ecl_symbol_value(VV[20]))) { goto L17; }
  goto L2;
L17:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  ecl_bds_unwind1(cl_env_copy);
  ecl_bds_unwind1(cl_env_copy);
  return value0;
 }
}
/*      function definition for CTOP-WRITE                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L6ctop_write(cl_object v1name, cl_object v2h_pathname, cl_object v3data_pathname)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v4top_output_string;
   v4top_output_string = ECL_NIL;
   ecl_bds_bind(cl_env_copy,VV[21],VV[22]);       /*  *VOLATILE*      */
   cl_set(VV[2],cl_nreverse(ecl_symbol_value(VV[2])));
   T0 = ecl_function_dispatch(cl_env_copy,VV[261])(1, v2h_pathname) /*  BRIEF-NAMESTRING */;
   ecl_function_dispatch(cl_env_copy,VV[262])(3, VV[23], T0, VV[24]) /*  WT-NL */;
   ecl_function_dispatch(cl_env_copy,VV[263])(1, VV[25]) /*  WT-NL-H  */;
   ecl_function_dispatch(cl_env_copy,VV[263])(1, VV[26]) /*  WT-NL-H  */;
   ecl_function_dispatch(cl_env_copy,VV[263])(1, VV[27]) /*  WT-NL-H  */;
   ecl_function_dispatch(cl_env_copy,VV[263])(1, VV[28]) /*  WT-NL-H  */;
   ecl_function_dispatch(cl_env_copy,VV[263])(1, VV[29]) /*  WT-NL-H  */;
   ecl_function_dispatch(cl_env_copy,VV[264])(1, ecl_symbol_value(VV[30])) /*  OUTPUT-CLINES */;
   ecl_function_dispatch(cl_env_copy,VV[263])(1, VV[31]) /*  WT-NL-H  */;
   ecl_function_dispatch(cl_env_copy,VV[263])(1, VV[32]) /*  WT-NL-H  */;
   ecl_function_dispatch(cl_env_copy,VV[263])(1, VV[29]) /*  WT-NL-H  */;
   {
    cl_object v5c_output_file;
    ecl_bds_bind(cl_env_copy,VV[33],ecl_make_fixnum(0)); /*  *OPENED-C-BRACES* */
    ecl_bds_bind(cl_env_copy,VV[34],ECL_NIL);     /*  *AUX-CLOSURE*   */
    v5c_output_file = ecl_symbol_value(VV[35]);
    T0 = cl_make_string_output_stream(0);
    ecl_bds_bind(cl_env_copy,VV[35],T0);          /*  *COMPILER-OUTPUT1* */
    ecl_bds_bind(cl_env_copy,VV[19],ECL_NIL);     /*  *EMITTED-LOCAL-FUNS* */
    T0 = cl_make_hash_table(0);
    ecl_bds_bind(cl_env_copy,VV[36],T0);          /*  *COMPILER-DECLARED-GLOBALS* */
    T0 = ecl_function_dispatch(cl_env_copy,VV[261])(1, v3data_pathname) /*  BRIEF-NAMESTRING */;
    ecl_function_dispatch(cl_env_copy,VV[262])(3, VV[23], T0, VV[24]) /*  WT-NL */;
    ecl_function_dispatch(cl_env_copy,VV[262])(1, VV[31]) /*  WT-NL   */;
    ecl_function_dispatch(cl_env_copy,VV[262])(1, VV[37]) /*  WT-NL   */;
    ecl_function_dispatch(cl_env_copy,VV[262])(1, VV[29]) /*  WT-NL   */;
    ecl_function_dispatch(cl_env_copy,VV[262])(3, VV[38], v1name, VV[39]) /*  WT-NL */;
    ecl_function_dispatch(cl_env_copy,VV[265])(0) /*  WT-NL-OPEN-BRACE */;
    ecl_function_dispatch(cl_env_copy,VV[262])(1, VV[40]) /*  WT-NL   */;
    ecl_function_dispatch(cl_env_copy,VV[262])(1, VV[41]) /*  WT-NL   */;
    ecl_function_dispatch(cl_env_copy,VV[262])(1, VV[42]) /*  WT-NL   */;
    ecl_function_dispatch(cl_env_copy,VV[262])(1, VV[43]) /*  WT-NL   */;
    ecl_function_dispatch(cl_env_copy,VV[262])(1, VV[44]) /*  WT-NL   */;
    ecl_function_dispatch(cl_env_copy,VV[262])(1, VV[45]) /*  WT-NL   */;
    ecl_function_dispatch(cl_env_copy,VV[262])(1, VV[46]) /*  WT-NL   */;
    ecl_function_dispatch(cl_env_copy,VV[262])(1, VV[29]) /*  WT-NL   */;
    if (Null(ecl_symbol_value(VV[47]))) { goto L30; }
    ecl_function_dispatch(cl_env_copy,VV[262])(1, VV[48]) /*  WT-NL   */;
L30:;
    ecl_function_dispatch(cl_env_copy,VV[262])(1, VV[49]) /*  WT-NL   */;
    ecl_function_dispatch(cl_env_copy,VV[262])(1, VV[50]) /*  WT-NL   */;
    ecl_function_dispatch(cl_env_copy,VV[262])(1, VV[51]) /*  WT-NL   */;
    ecl_function_dispatch(cl_env_copy,VV[262])(1, VV[52]) /*  WT-NL   */;
    ecl_function_dispatch(cl_env_copy,VV[262])(1, VV[53]) /*  WT-NL   */;
    if (Null(ecl_symbol_value(ECL_SYM("*SOURCE-LOCATION*",1202)))) { goto L37; }
    T0 = ecl_car(ecl_symbol_value(ECL_SYM("*SOURCE-LOCATION*",1202)));
    T1 = cl_namestring(T0);
    ecl_function_dispatch(cl_env_copy,VV[262])(3, VV[54], T1, VV[55]) /*  WT-NL */;
L37:;
    ecl_function_dispatch(cl_env_copy,VV[262])(1, VV[56]) /*  WT-NL   */;
    ecl_function_dispatch(cl_env_copy,VV[262])(1, VV[25]) /*  WT-NL   */;
    ecl_function_dispatch(cl_env_copy,VV[262])(1, VV[57]) /*  WT-NL   */;
    ecl_function_dispatch(cl_env_copy,VV[262])(1, VV[29]) /*  WT-NL   */;
    T0 = ecl_function_dispatch(cl_env_copy,VV[266])(1, v1name) /*  INIT-NAME-TAG */;
    ecl_function_dispatch(cl_env_copy,VV[262])(3, VV[58], T0, VV[59]) /*  WT-NL */;
    ecl_function_dispatch(cl_env_copy,VV[262])(1, VV[60]) /*  WT-NL   */;
    ecl_function_dispatch(cl_env_copy,VV[262])(1, VV[61]) /*  WT-NL   */;
    if (Null(ecl_symbol_value(VV[62]))) { goto L46; }
    cl_set(VV[63],VV[64]);
    {
     cl_object v6;
     v6 = ecl_symbol_value(VV[2]);
     goto L54;
L53:;
     {
      cl_object v7form;
      v7form = ecl_car(v6);
      if (Null(v7form)) { goto L58; }
      ecl_function_dispatch(cl_env_copy,VV[64])(2, v7form, ECL_NIL) /*  P1PROPAGATE */;
L58:;
     }
     v6 = ecl_cdr(v6);
L54:;
     if (Null(v6)) { goto L62; }
     goto L53;
L62:;
    }
    {
     cl_object v6;
     v6 = ecl_symbol_value(VV[20]);
     goto L67;
L66:;
     {
      cl_object v7fun;
      v7fun = ecl_car(v6);
      T0 = ecl_function_dispatch(cl_env_copy,VV[267])(1, v7fun) /*  FUN-LAMBDA */;
      ecl_function_dispatch(cl_env_copy,VV[64])(2, T0, ECL_NIL) /*  P1PROPAGATE */;
     }
     v6 = ecl_cdr(v6);
L67:;
     if (Null(v6)) { goto L74; }
     goto L66;
L74:;
    }
L46:;
    cl_set(VV[63],VV[65]);
    {
     cl_object v6;
     cl_object v7form;
     cl_object v8;
     T0 = cl_reverse(ecl_symbol_value(VV[66]));
     v6 = ecl_nconc(T0,ecl_symbol_value(VV[2]));
     v7form = ECL_NIL;
     {
      cl_object v9;
      v9 = v6;
      if (ecl_unlikely(!ECL_LISTP(v9))) FEtype_error_list(v9);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v8 = v9;
     }
L84:;
     if (!(ecl_endp(v8))) { goto L86; }
     goto L85;
L86:;
     v7form = _ecl_car(v8);
     {
      cl_object v9;
      v9 = _ecl_cdr(v8);
      if (ecl_unlikely(!ECL_LISTP(v9))) FEtype_error_list(v9);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v8 = v9;
     }
     L7emit_toplevel_form(v7form, v5c_output_file);
     goto L84;
L85:;
    }
    ecl_function_dispatch(cl_env_copy,VV[268])(1, ecl_make_fixnum(0)) /*  WT-NL-CLOSE-MANY-BRACES */;
    v4top_output_string = cl_get_output_stream_string(ecl_symbol_value(VV[35]));
    ecl_bds_unwind_n(cl_env_copy,5);
   }
   ecl_function_dispatch(cl_env_copy,VV[263])(1, VV[67]) /*  WT-NL-H  */;
   {
    cl_object v5num_objects;
    v5num_objects = ecl_function_dispatch(cl_env_copy,VV[269])(0) /*  DATA-SIZE */;
    if (!(ecl_zerop(v5num_objects))) { goto L101; }
    ecl_function_dispatch(cl_env_copy,VV[263])(1, VV[68]) /*  WT-NL-H */;
    ecl_function_dispatch(cl_env_copy,VV[263])(1, VV[69]) /*  WT-NL-H */;
    ecl_function_dispatch(cl_env_copy,VV[263])(1, VV[70]) /*  WT-NL-H */;
    ecl_function_dispatch(cl_env_copy,VV[263])(1, VV[71]) /*  WT-NL-H */;
    ecl_function_dispatch(cl_env_copy,VV[263])(1, VV[72]) /*  WT-NL-H */;
    goto L99;
L101:;
    T0 = ecl_function_dispatch(cl_env_copy,VV[270])(0) /*  DATA-PERMANENT-STORAGE-SIZE */;
    ecl_function_dispatch(cl_env_copy,VV[263])(2, VV[73], T0) /*  WT-NL-H */;
    T0 = ecl_function_dispatch(cl_env_copy,VV[271])(0) /*  DATA-TEMPORARY-STORAGE-SIZE */;
    ecl_function_dispatch(cl_env_copy,VV[263])(2, VV[74], T0) /*  WT-NL-H */;
   }
L99:;
   ecl_function_dispatch(cl_env_copy,VV[263])(1, VV[75]) /*  WT-NL-H  */;
   {
    cl_object v5;
    cl_object v6name;
    cl_object v7setf_vv;
    cl_object v8name_vv;
    cl_object v9;
    v5 = ecl_symbol_value(VV[76]);
    v6name = ECL_NIL;
    v7setf_vv = ECL_NIL;
    v8name_vv = ECL_NIL;
    {
     cl_object v10;
     v10 = v5;
     if (ecl_unlikely(!ECL_LISTP(v10))) FEtype_error_list(v10);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v9 = v10;
    }
L117:;
    if (!(ecl_endp(v9))) { goto L119; }
    goto L118;
L119:;
    {
     cl_object v10;
     v10 = _ecl_car(v9);
     v6name = ecl_car(v10);
     v10 = ecl_cdr(v10);
     v7setf_vv = ecl_car(v10);
     v10 = ecl_cdr(v10);
     v8name_vv = ecl_car(v10);
    }
    {
     cl_object v10;
     v10 = _ecl_cdr(v9);
     if (ecl_unlikely(!ECL_LISTP(v10))) FEtype_error_list(v10);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v9 = v10;
    }
    ecl_function_dispatch(cl_env_copy,VV[272])(6, CODE_CHAR(92), CODE_CHAR(10), v7setf_vv, VV[77], v8name_vv, VV[78]) /*  WT-H */;
    goto L117;
L118:;
   }
   ecl_function_dispatch(cl_env_copy,VV[263])(1, VV[31]) /*  WT-NL-H  */;
   ecl_function_dispatch(cl_env_copy,VV[263])(1, VV[79]) /*  WT-NL-H  */;
   ecl_function_dispatch(cl_env_copy,VV[263])(1, VV[29]) /*  WT-NL-H  */;
   if (!(ECL_LISTP(ecl_symbol_value(VV[80])))) { goto L141; }
   cl_set(VV[80],cl_nreverse(ecl_symbol_value(VV[80])));
   if (Null(ecl_symbol_value(VV[80]))) { goto L141; }
   ecl_function_dispatch(cl_env_copy,VV[263])(1, VV[81]) /*  WT-NL-H  */;
   ecl_function_dispatch(cl_env_copy,VV[263])(1, VV[82]) /*  WT-NL-H  */;
   ecl_function_dispatch(cl_env_copy,VV[263])(1, VV[83]) /*  WT-NL-H  */;
   {
    cl_object v5;
    cl_object v6value;
    cl_object v7name;
    cl_object v8builder;
    cl_object v9;
    v5 = cl_reverse(ecl_symbol_value(VV[80]));
    v6value = ECL_NIL;
    v7name = ECL_NIL;
    v8builder = ECL_NIL;
    {
     cl_object v10;
     v10 = v5;
     if (ecl_unlikely(!ECL_LISTP(v10))) FEtype_error_list(v10);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v9 = v10;
    }
L155:;
    if (!(ecl_endp(v9))) { goto L157; }
    goto L156;
L157:;
    {
     cl_object v10;
     v10 = _ecl_car(v9);
     v6value = ecl_car(v10);
     v10 = ecl_cdr(v10);
     v7name = ecl_car(v10);
     v10 = ecl_cdr(v10);
     v8builder = ecl_car(v10);
    }
    {
     cl_object v10;
     v10 = _ecl_cdr(v9);
     if (ecl_unlikely(!ECL_LISTP(v10))) FEtype_error_list(v10);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v9 = v10;
    }
    ecl_terpri(ecl_symbol_value(VV[30]));
    ecl_function_dispatch(cl_env_copy,v8builder)(3, v7name, v6value, ecl_symbol_value(VV[30]));
    goto L155;
L156:;
   }
L141:;
   L42output_cfuns(ecl_symbol_value(VV[30]));
   cl_set(VV[63],VV[84]);
   if (Null(ecl_symbol_value(VV[85]))) { goto L180; }
   ecl_function_dispatch(cl_env_copy,VV[263])(1, VV[86]) /*  WT-NL-H  */;
   {
    cl_object v5;
    v5 = ecl_symbol_value(VV[85]);
    goto L186;
L185:;
    {
     cl_object v6x;
     v6x = ecl_car(v5);
     T0 = ecl_fdefinition(VV[273]);
     cl_apply(2, T0, v6x);
    }
    v5 = ecl_cdr(v5);
L186:;
    if (Null(v5)) { goto L194; }
    goto L185;
L194:;
   }
L180:;
   value0 = ecl_function_dispatch(cl_env_copy,VV[262])(1, v4top_output_string) /*  WT-NL */;
   ecl_bds_unwind1(cl_env_copy);
   return value0;
  }
 }
}
/*      function definition for EMIT-TOPLEVEL-FORM                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L7emit_toplevel_form(cl_object volatile v1form, cl_object volatile v2c_output_file)
{
 cl_object T0;
 cl_object volatile env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   volatile cl_object v3;
   volatile cl_object v4;
   if (Null(v1form)) { goto L3; }
   v3 = ecl_function_dispatch(cl_env_copy,VV[255])(1, v1form) /*  C1FORM-FILE */;
   goto L1;
L3:;
   v3 = ECL_NIL;
   goto L1;
L1:;
   if (Null(v1form)) { goto L7; }
   v4 = ecl_function_dispatch(cl_env_copy,VV[256])(1, v1form) /*  C1FORM-FILE-POSITION */;
   goto L5;
L7:;
   v4 = ECL_NIL;
   goto L5;
L5:;
   ecl_bds_bind(cl_env_copy,VV[88],ECL_NIL);      /*  *IHS-USED-P*    */
   ecl_bds_bind(cl_env_copy,VV[89],ecl_make_fixnum(0)); /*  *MAX-LEX* */
   ecl_bds_bind(cl_env_copy,VV[90],ecl_make_fixnum(0)); /*  *MAX-ENV* */
   ecl_bds_bind(cl_env_copy,VV[91],ecl_make_fixnum(0)); /*  *MAX-TEMP* */
   ecl_bds_bind(cl_env_copy,VV[92],ecl_make_fixnum(0)); /*  *LCL*     */
   ecl_bds_bind(cl_env_copy,VV[93],ecl_make_fixnum(0)); /*  *LEX*     */
   ecl_bds_bind(cl_env_copy,VV[94],ecl_make_fixnum(0)); /*  *LEVEL*   */
   ecl_bds_bind(cl_env_copy,VV[95],ecl_make_fixnum(0)); /*  *ENV*     */
   ecl_bds_bind(cl_env_copy,VV[96],ecl_make_fixnum(0)); /*  *ENV-LVL* */
   ecl_bds_bind(cl_env_copy,VV[97],ecl_make_fixnum(0)); /*  *TEMP*    */
   ecl_bds_bind(cl_env_copy,VV[98],ECL_NIL);      /*  *COMPILE-TO-LINKING-CALL* */
   ecl_bds_bind(cl_env_copy,ECL_SYM("*COMPILE-FILE-TRUENAME*",29),v3); /*  *COMPILE-FILE-TRUENAME* */
   ecl_bds_bind(cl_env_copy,VV[16],v4);           /*  *COMPILE-FILE-POSITION* */
   {
    volatile cl_object v5body;
    T0 = ecl_one_plus(ecl_symbol_value(VV[33]));
    ecl_bds_bind(cl_env_copy,VV[33],T0);          /*  *OPENED-C-BRACES* */
    T0 = cl_make_string_output_stream(0);
    ecl_bds_bind(cl_env_copy,VV[35],T0);          /*  *COMPILER-OUTPUT1* */
    {
     volatile bool unwinding = FALSE;
     cl_index v6=ECL_STACK_INDEX(cl_env_copy),v7;
     ecl_frame_ptr next_fr;
     ecl_frs_push(cl_env_copy,ECL_PROTECT_TAG);
     if (__ecl_frs_push_result) {
       unwinding = TRUE; next_fr=cl_env_copy->nlj_fr;
     } else {
     L4t2expr(v1form);
     cl_env_copy->values[0] = cl_get_output_stream_string(ecl_symbol_value(VV[35]));
     }
     ecl_frs_pop(cl_env_copy);
     v7=ecl_stack_push_values(cl_env_copy);
     cl_close(1, ecl_symbol_value(VV[35]));
     ecl_stack_pop_values(cl_env_copy,v7);
     if (unwinding) ecl_unwind(cl_env_copy,next_fr);
     v5body = cl_env_copy->values[0];
     ECL_STACK_SET_INDEX(cl_env_copy,v6);
     ecl_bds_unwind1(cl_env_copy);
     ecl_bds_unwind1(cl_env_copy);
    }
    if (ecl_plusp(ecl_symbol_value(VV[89]))) { goto L16; }
    if (ecl_plusp(ecl_symbol_value(VV[91]))) { goto L16; }
    if (ecl_plusp(ecl_symbol_value(VV[90]))) { goto L16; }
    if (Null(ecl_symbol_value(VV[88]))) { goto L14; }
    goto L15;
L16:;
L15:;
    ecl_function_dispatch(cl_env_copy,VV[265])(0) /*  WT-NL-OPEN-BRACE */;
    L15wt_function_locals(0);
    cl_write_sequence(2, v5body, ecl_symbol_value(VV[35]));
    ecl_function_dispatch(cl_env_copy,VV[274])(0) /*  WT-NL-CLOSE-BRACE */;
    goto L9;
L14:;
    cl_write_sequence(2, v5body, ecl_symbol_value(VV[35]));
   }
L9:;
   ecl_bds_bind(cl_env_copy,VV[35],v2c_output_file); /*  *COMPILER-OUTPUT1* */
   value0 = L5emit_local_funs();
   ecl_bds_unwind_n(cl_env_copy,14);
   return value0;
  }
 }
}
/*      function definition for C1EVAL-WHEN                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L8c1eval_when(cl_object v1args)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  ecl_function_dispatch(cl_env_copy,VV[276])(3, ECL_SYM("EVAL-WHEN",342), v1args, ecl_make_fixnum(1)) /*  CHECK-ARGS-NUMBER */;
  {
   cl_object v2load_flag;
   cl_object v3compile_flag;
   cl_object v4execute_flag;
   v2load_flag = ECL_NIL;
   v3compile_flag = ECL_NIL;
   v4execute_flag = ECL_NIL;
   {
    cl_object v5;
    v5 = ecl_car(v1args);
    goto L9;
L8:;
    {
     cl_object v6situation;
     v6situation = ecl_car(v5);
     if (!((v6situation)==(ECL_SYM("LOAD",489)))) { goto L19; }
     goto L16;
     goto L17;
L19:;
     goto L17;
L17:;
     if (!(ecl_eql(v6situation,ECL_SYM("LOAD-TOPLEVEL",1297)))) { goto L14; }
     goto L15;
L16:;
L15:;
     v2load_flag = ECL_T;
     goto L13;
L14:;
     if (!((v6situation)==(ECL_SYM("COMPILE",235)))) { goto L28; }
     goto L25;
     goto L26;
L28:;
     goto L26;
L26:;
     if (!(ecl_eql(v6situation,ECL_SYM("COMPILE-TOPLEVEL",1229)))) { goto L23; }
     goto L24;
L25:;
L24:;
     v3compile_flag = ECL_T;
     goto L13;
L23:;
     if (!((v6situation)==(ECL_SYM("EVAL",341)))) { goto L37; }
     goto L34;
     goto L35;
L37:;
     goto L35;
L35:;
     if (!(ecl_eql(v6situation,ECL_SYM("EXECUTE",1253)))) { goto L32; }
     goto L33;
L34:;
L33:;
     if (Null(ecl_symbol_value(VV[13]))) { goto L40; }
     value0 = ecl_symbol_value(VV[11]);
     if ((value0)!=ECL_NIL) { goto L44; }
     goto L42;
L44:;
     v3compile_flag = value0;
     goto L42;
L42:;
     goto L13;
L40:;
     v4execute_flag = ECL_T;
     goto L13;
L32:;
     ecl_function_dispatch(cl_env_copy,VV[246])(2, VV[105], v6situation) /*  CMPERR */;
L13:;
    }
    v5 = ecl_cdr(v5);
L9:;
    if (Null(v5)) { goto L49; }
    goto L8;
L49:;
   }
   if ((ecl_symbol_value(VV[13]))!=ECL_NIL) { goto L51; }
   if (Null(v4execute_flag)) { goto L55; }
   T0 = ecl_cdr(v1args);
   goto L53;
L55:;
   T0 = ECL_NIL;
   goto L53;
L53:;
   value0 = ecl_function_dispatch(cl_env_copy,VV[277])(1, T0) /*  C1PROGN */;
   return value0;
L51:;
   if (Null(v2load_flag)) { goto L57; }
   ecl_bds_bind(cl_env_copy,VV[11],v3compile_flag); /*  *COMPILE-TIME-TOO* */
   T0 = ecl_cdr(v1args);
   value0 = ecl_function_dispatch(cl_env_copy,VV[277])(1, T0) /*  C1PROGN */;
   ecl_bds_unwind1(cl_env_copy);
   return value0;
L57:;
   if (Null(v3compile_flag)) { goto L59; }
   T0 = ecl_cdr(v1args);
   T1 = CONS(ECL_SYM("PROGN",673),T0);
   ecl_function_dispatch(cl_env_copy,VV[249])(1, T1) /*  CMP-EVAL     */;
   value0 = ecl_function_dispatch(cl_env_copy,VV[277])(1, ECL_NIL) /*  C1PROGN */;
   return value0;
L59:;
   value0 = ecl_function_dispatch(cl_env_copy,VV[277])(1, ECL_NIL) /*  C1PROGN */;
   return value0;
  }
 }
}
/*      function definition for T2COMPILER-LET                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L9t2compiler_let(cl_object v1c1form, cl_object v2symbols, cl_object v3values, cl_object v4body)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v6, v7; cl_index v5;
   v6 = v2symbols;
   v7 = v3values;
   v5 = ecl_progv(cl_env_copy, v6, v7);
   value0 = ecl_function_dispatch(cl_env_copy,VV[279])(1, v4body) /*  C2EXPR */;
   ecl_bds_unwind(cl_env_copy,v5);
   return value0;
  }
 }
}
/*      function definition for T2PROGN                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L10t2progn(cl_object v1c1form, cl_object v2args)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   v3 = ecl_fdefinition(VV[18]);
   {
    cl_object v4;
    cl_object v5;
    v4 = ECL_NIL;
    {
     cl_object v6;
     v6 = v2args;
     if (ecl_unlikely(!ECL_LISTP(v6))) FEtype_error_list(v6);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v5 = v6;
    }
L6:;
    if (!(ecl_endp(v5))) { goto L8; }
    goto L7;
L8:;
    v4 = _ecl_car(v5);
    {
     cl_object v6;
     v6 = _ecl_cdr(v5);
     if (ecl_unlikely(!ECL_LISTP(v6))) FEtype_error_list(v6);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v5 = v6;
    }
    ecl_function_dispatch(cl_env_copy,v3)(1, v4);
    goto L6;
L7:;
    value0 = v2args;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      function definition for EXPORTED-FNAME                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L11exported_fname(cl_object v1name)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2cname;
   v2cname = ECL_NIL;
   if (!(ECL_SYMBOLP(v1name))) { goto L2; }
   v2cname = si_get_sysprop(v1name, VV[109]);
   if (Null(v2cname)) { goto L2; }
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = ECL_T;
   cl_env_copy->values[0] = v2cname;
   return cl_env_copy->values[0];
L2:;
   T0 = ecl_function_dispatch(cl_env_copy,VV[282])(2, VV[110], v1name) /*  NEXT-CFUN */;
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = T0;
   return cl_env_copy->values[0];
  }
 }
}
/*      function definition for NEW-DEFUN                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L12new_defun(cl_narg narg, cl_object v1new, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2no_entry;
  va_list args; va_start(args,v1new);
  {
   int i = 1;
   if (i >= narg) {
    v2no_entry = ECL_NIL;
   } else {
    i++;
    v2no_entry = va_arg(args,cl_object);
   }
  }
  va_end(args);
  cl_set(VV[112],CONS(v1new,ecl_symbol_value(VV[112])));
  value0 = ecl_symbol_value(VV[112]);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for PRINT-FUNCTION                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L13print_function(cl_object v1x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,VV[285])(1, v1x) /*  FUN-NAME */;
  T1 = ecl_function_dispatch(cl_env_copy,VV[286])(1, v1x) /*  FUN-CLOSURE */;
  T2 = ecl_function_dispatch(cl_env_copy,VV[287])(1, v1x) /*  FUN-LEVEL */;
  T3 = ecl_function_dispatch(cl_env_copy,VV[288])(1, v1x) /*  FUN-ENV */;
  value0 = cl_format(6, ECL_T, VV[114], T0, T1, T2, T3);
  return value0;
 }
}
/*      local function AND!                                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC14and_(cl_object v1, cl_object v2)
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
   v3 = ecl_cdr(v1);
   T0 = CONS(ECL_SYM("LIST",483),v3);
   T1 = cl_list(2, VV[116], T0);
   T2 = ecl_list1(T1);
   value0 = cl_listX(3, ECL_SYM("LET",479), T2, VV[117]);
   return value0;
  }
 }
}
/*      function definition for WT-FUNCTION-LOCALS                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L15wt_function_locals(cl_narg narg, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg>1)) FEwrong_num_arguments_anonym();
 {
  cl_object v1closure_type;
  va_list args; va_start(args,narg);
  {
   int i = 0;
   if (i >= narg) {
    v1closure_type = ECL_NIL;
   } else {
    i++;
    v1closure_type = va_arg(args,cl_object);
   }
  }
  va_end(args);
  if (!(ecl_plusp(ecl_symbol_value(VV[91])))) { goto L2; }
  ecl_function_dispatch(cl_env_copy,VV[262])(1, VV[119]) /*  WT-NL    */;
  {
   cl_object v2;
   v2 = ecl_symbol_value(VV[91]);
   {
    cl_object v3i;
    v3i = ecl_make_fixnum(0);
    goto L9;
L8:;
    ecl_function_dispatch(cl_env_copy,VV[291])(2, VV[120], v3i) /*  WT */;
    T0 = ecl_one_plus(v3i);
    if (ecl_number_equalp(T0,ecl_symbol_value(VV[91]))) { goto L12; }
    ecl_function_dispatch(cl_env_copy,VV[291])(1, VV[121]) /*  WT     */;
L12:;
    v3i = ecl_one_plus(v3i);
L9:;
    if (!(ecl_lower(v3i,v2))) { goto L16; }
    goto L8;
L16:;
   }
  }
  ecl_function_dispatch(cl_env_copy,VV[291])(1, VV[122]) /*  WT       */;
L2:;
  if (Null(ecl_symbol_value(VV[88]))) { goto L18; }
  ecl_function_dispatch(cl_env_copy,VV[262])(1, VV[123]) /*  WT-NL    */;
  ecl_function_dispatch(cl_env_copy,VV[262])(1, VV[124]) /*  WT-NL    */;
L18:;
  if (!(ecl_plusp(ecl_symbol_value(VV[89])))) { goto L21; }
  ecl_function_dispatch(cl_env_copy,VV[262])(5, VV[125], ecl_symbol_value(VV[94]), VV[126], ecl_symbol_value(VV[89]), VV[127]) /*  WT-NL */;
L21:;
  if ((v1closure_type)==(VV[128])) { goto L23; }
  ecl_function_dispatch(cl_env_copy,VV[262])(3, VV[119], ecl_symbol_value(VV[21]), VV[129]) /*  WT-NL */;
L23:;
  if (!(ecl_plusp(ecl_symbol_value(VV[90])))) { goto L25; }
  if (Null(ecl_symbol_value(VV[34]))) { goto L27; }
  ecl_function_dispatch(cl_env_copy,VV[262])(1, VV[130]) /*  WT-NL    */;
L27:;
  ecl_function_dispatch(cl_env_copy,VV[262])(2, VV[119], ecl_symbol_value(VV[21])) /*  WT-NL */;
  {
   cl_object v2;
   cl_object v3i;
   cl_object v4;
   v2 = ecl_symbol_value(VV[90]);
   v3i = ecl_make_fixnum(0);
   {
    cl_object v5;
    v5 = v2;
    {
     bool v6;
     v6 = ecl_numberp(v5);
     if (ecl_unlikely(!(v6)))
         FEwrong_type_argument(ECL_SYM("NUMBER",608),v5);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
    }
    v4 = v5;
   }
   {
    cl_object v5comma;
    v5comma = ECL_NIL;
    if (!(ecl_greatereq(v3i,v4))) { goto L38; }
    goto L37;
L38:;
    v5comma = VV[131];
L36:;
    ecl_function_dispatch(cl_env_copy,VV[291])(3, v5comma, VV[132], v3i) /*  WT */;
    v3i = ecl_one_plus(v3i);
    if (!(ecl_greatereq(v3i,v4))) { goto L45; }
    goto L37;
L45:;
    v5comma = VV[121];
    goto L36;
L37:;
    ecl_function_dispatch(cl_env_copy,VV[291])(1, VV[122]) /*  WT     */;
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
L25:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for REP-TYPE                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L16rep_type(cl_object v1type)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!((v1type)==(ECL_SYM("FIXNUM",374)))) { goto L1; }
  value0 = VV[134];
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  if (!((v1type)==(ECL_SYM("CHARACTER",224)))) { goto L3; }
  value0 = VV[135];
  cl_env_copy->nvalues = 1;
  return value0;
L3:;
  if (!((v1type)==(ECL_SYM("SINGLE-FLOAT",780)))) { goto L5; }
  value0 = VV[136];
  cl_env_copy->nvalues = 1;
  return value0;
L5:;
  if (!((v1type)==(ECL_SYM("DOUBLE-FLOAT",317)))) { goto L7; }
  value0 = VV[137];
  cl_env_copy->nvalues = 1;
  return value0;
L7:;
  value0 = VV[119];
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for T1ORDINARY                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L17t1ordinary(cl_object v1form)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(ecl_symbol_value(VV[11]))) { goto L1; }
  ecl_function_dispatch(cl_env_copy,VV[249])(1, v1form) /*  CMP-EVAL  */;
L1:;
  ecl_bds_bind(cl_env_copy,VV[13],ECL_NIL);       /*  *COMPILE-TOPLEVEL* */
  ecl_bds_bind(cl_env_copy,VV[11],ECL_NIL);       /*  *COMPILE-TIME-TOO* */
  T0 = ecl_function_dispatch(cl_env_copy,VV[252])(1, v1form) /*  C1EXPR */;
  T1 = ecl_function_dispatch(cl_env_copy,VV[294])(3, VV[139], VV[140], T0) /*  MAKE-C1FORM* */;
  value0 = L20add_load_time_values(T1);
  ecl_bds_unwind1(cl_env_copy);
  ecl_bds_unwind1(cl_env_copy);
  return value0;
 }
}
/*      function definition for P1ORDINARY                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L18p1ordinary(cl_object v1c1form, cl_object v2assumptions, cl_object v3form)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ecl_function_dispatch(cl_env_copy,VV[64])(2, v3form, v2assumptions) /*  P1PROPAGATE */;
  return value0;
 }
}
/*      function definition for T2ORDINARY                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L19t2ordinary(cl_object v1c1form, cl_object v2form)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,VV[297])(0) /*  NEXT-LABEL   */;
  ecl_bds_bind(cl_env_copy,VV[143],T0);           /*  *EXIT*          */
  T0 = ecl_list1(ecl_symbol_value(VV[143]));
  ecl_bds_bind(cl_env_copy,VV[144],T0);           /*  *UNWIND-EXIT*   */
  ecl_bds_bind(cl_env_copy,VV[145],VV[146]);      /*  *DESTINATION*   */
  ecl_function_dispatch(cl_env_copy,VV[279])(1, v2form) /*  C2EXPR    */;
  value0 = ecl_function_dispatch(cl_env_copy,VV[298])(1, ecl_symbol_value(VV[143])) /*  WT-LABEL */;
  ecl_bds_unwind1(cl_env_copy);
  ecl_bds_unwind1(cl_env_copy);
  ecl_bds_unwind1(cl_env_copy);
  return value0;
 }
}
/*      function definition for ADD-LOAD-TIME-VALUES                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L20add_load_time_values(cl_object v1form)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2previous;
   if (!(ECL_CONSP(ecl_symbol_value(VV[148])))) { goto L5; }
   T0 = cl_nreverse(ecl_symbol_value(VV[148]));
   goto L3;
L5:;
   T0 = ECL_NIL;
   goto L3;
L3:;
   T1 = cl_nreverse(ecl_symbol_value(VV[66]));
   v2previous = ecl_append(T0,T1);
   if (Null(v2previous)) { goto L1; }
   cl_set(VV[148],ECL_NIL);
   cl_set(VV[66],ECL_NIL);
   T0 = ecl_list1(v1form);
   T1 = ecl_nconc(v2previous,T0);
   v1form = ecl_function_dispatch(cl_env_copy,VV[294])(3, ECL_SYM("PROGN",673), VV[140], T1) /*  MAKE-C1FORM* */;
  }
L1:;
  value0 = v1form;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for T1DEFMACRO                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L21t1defmacro(cl_object v1args)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  ecl_function_dispatch(cl_env_copy,VV[276])(3, ECL_SYM("LOAD-TIME-VALUE",491), v1args, ecl_make_fixnum(2)) /*  CHECK-ARGS-NUMBER */;
  {
   cl_object v2;
   cl_object v3name;
   cl_object v4lambda_list;
   v2 = v1args;
   if (!(v2==ECL_NIL)) { goto L4; }
   ecl_function_dispatch(cl_env_copy,VV[301])(1, v1args) /*  DM-TOO-FEW-ARGUMENTS */;
L4:;
   {
    cl_object v5;
    v5 = ecl_car(v2);
    v2 = ecl_cdr(v2);
    v3name = v5;
   }
   if (!(v2==ECL_NIL)) { goto L10; }
   ecl_function_dispatch(cl_env_copy,VV[301])(1, v1args) /*  DM-TOO-FEW-ARGUMENTS */;
L10:;
   {
    cl_object v5;
    v5 = ecl_car(v2);
    v2 = ecl_cdr(v2);
    v4lambda_list = v5;
   }
   {
    cl_object v6;                                 /*  FUNCTION        */
    value0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("EXPAND-DEFMACRO",1071))(3, v3name, v4lambda_list, v2) /*  EXPAND-DEFMACRO */;
    {
     v6 = value0;
    }
    {
     cl_object v7fn;
     v7fn = ecl_function_dispatch(cl_env_copy,VV[249])(2, v6, ecl_symbol_value(VV[1])) /*  CMP-EVAL */;
     ecl_function_dispatch(cl_env_copy,VV[302])(2, v3name, v7fn) /*  CMP-ENV-REGISTER-GLOBAL-MACRO */;
    }
    T0 = CONS(ECL_SYM("DEFMACRO",285),v1args);
    T1 = cl_macroexpand(1, T0);
    value0 = L2t1expr_(T1);
    return value0;
   }
  }
 }
}
/*      function definition for C1LOAD-TIME-VALUE                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L22c1load_time_value(cl_object v1args)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  ecl_function_dispatch(cl_env_copy,VV[276])(4, ECL_SYM("LOAD-TIME-VALUE",491), v1args, ecl_make_fixnum(1), ecl_make_fixnum(2)) /*  CHECK-ARGS-NUMBER */;
  {
   cl_object v2;
   cl_object v3loc;
   v2 = ecl_car(v1args);
   v3loc = ECL_NIL;
   if (ECL_LISTP(ecl_symbol_value(VV[148]))) { goto L5; }
   T0 = ecl_function_dispatch(cl_env_copy,VV[249])(1, v2) /*  CMP-EVAL */;
   value0 = ecl_function_dispatch(cl_env_copy,VV[304])(3, T0, VV[151], ECL_T) /*  C1CONSTANT-VALUE */;
   return value0;
L5:;
   if (ECL_LISTP(v2)) { goto L9; }
   if (!(ECL_SYMBOLP(v2))) { goto L7; }
   goto L8;
L9:;
L8:;
   v3loc = ecl_function_dispatch(cl_env_copy,VV[305])(0) /*  DATA-EMPTY-LOC */;
   T0 = ecl_function_dispatch(cl_env_copy,VV[252])(1, v2) /*  C1EXPR  */;
   T1 = ecl_function_dispatch(cl_env_copy,VV[294])(4, ECL_SYM("LOAD-TIME-VALUE",491), VV[140], v3loc, T0) /*  MAKE-C1FORM* */;
   cl_set(VV[148],CONS(T1,ecl_symbol_value(VV[148])));
   goto L4;
L7:;
   T0 = ecl_function_dispatch(cl_env_copy,VV[249])(1, v2) /*  CMP-EVAL */;
   v3loc = ecl_function_dispatch(cl_env_copy,VV[306])(1, T0) /*  ADD-OBJECT */;
L4:;
   value0 = ecl_function_dispatch(cl_env_copy,VV[294])(5, ECL_SYM("LOCATION",1842), ECL_SYM("TYPE",1346), ECL_T, VV[140], v3loc) /*  MAKE-C1FORM* */;
   return value0;
  }
 }
}
/*      function definition for T2LOAD-TIME-VALUE                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L23t2load_time_value(cl_object v1c1form, cl_object v2vv_loc, cl_object v3form)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,VV[297])(0) /*  NEXT-LABEL   */;
  ecl_bds_bind(cl_env_copy,VV[143],T0);           /*  *EXIT*          */
  T0 = ecl_list1(ecl_symbol_value(VV[143]));
  ecl_bds_bind(cl_env_copy,VV[144],T0);           /*  *UNWIND-EXIT*   */
  ecl_bds_bind(cl_env_copy,VV[145],v2vv_loc);     /*  *DESTINATION*   */
  ecl_function_dispatch(cl_env_copy,VV[279])(1, v3form) /*  C2EXPR    */;
  value0 = ecl_function_dispatch(cl_env_copy,VV[298])(1, ecl_symbol_value(VV[143])) /*  WT-LABEL */;
  ecl_bds_unwind1(cl_env_copy);
  ecl_bds_unwind1(cl_env_copy);
  ecl_bds_unwind1(cl_env_copy);
  return value0;
 }
}
/*      function definition for T2MAKE-FORM                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L24t2make_form(cl_object v1c1form, cl_object v2vv_loc, cl_object v3form)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,VV[297])(0) /*  NEXT-LABEL   */;
  ecl_bds_bind(cl_env_copy,VV[143],T0);           /*  *EXIT*          */
  T0 = ecl_list1(ecl_symbol_value(VV[143]));
  ecl_bds_bind(cl_env_copy,VV[144],T0);           /*  *UNWIND-EXIT*   */
  ecl_bds_bind(cl_env_copy,VV[145],v2vv_loc);     /*  *DESTINATION*   */
  ecl_function_dispatch(cl_env_copy,VV[279])(1, v3form) /*  C2EXPR    */;
  value0 = ecl_function_dispatch(cl_env_copy,VV[298])(1, ecl_symbol_value(VV[143])) /*  WT-LABEL */;
  ecl_bds_unwind1(cl_env_copy);
  ecl_bds_unwind1(cl_env_copy);
  ecl_bds_unwind1(cl_env_copy);
  return value0;
 }
}
/*      function definition for T2INIT-FORM                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L25t2init_form(cl_object v1c1form, cl_object v2vv_loc, cl_object v3form)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,VV[297])(0) /*  NEXT-LABEL   */;
  ecl_bds_bind(cl_env_copy,VV[143],T0);           /*  *EXIT*          */
  T0 = ecl_list1(ecl_symbol_value(VV[143]));
  ecl_bds_bind(cl_env_copy,VV[144],T0);           /*  *UNWIND-EXIT*   */
  ecl_bds_bind(cl_env_copy,VV[145],VV[146]);      /*  *DESTINATION*   */
  ecl_function_dispatch(cl_env_copy,VV[279])(1, v3form) /*  C2EXPR    */;
  value0 = ecl_function_dispatch(cl_env_copy,VV[298])(1, ecl_symbol_value(VV[143])) /*  WT-LABEL */;
  ecl_bds_unwind1(cl_env_copy);
  ecl_bds_unwind1(cl_env_copy);
  ecl_bds_unwind1(cl_env_copy);
  return value0;
 }
}
/*      function definition for PARSE-CVSPECS                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L26parse_cvspecs(cl_object v1x)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2cvspecs;
   v2cvspecs = ECL_NIL;
   {
    cl_object v3;
    v3 = v1x;
    goto L5;
L4:;
    {
     cl_object v4cvs;
     v4cvs = ecl_car(v3);
     if (!(ECL_SYMBOLP(v4cvs))) { goto L10; }
     T0 = ecl_symbol_name(v4cvs);
     T1 = cl_string_downcase(1, T0);
     T2 = cl_list(2, ECL_SYM("OBJECT",1305), T1);
     v2cvspecs = CONS(T2,v2cvspecs);
     goto L9;
L10:;
     if (!(ECL_STRINGP(v4cvs))) { goto L13; }
     T0 = cl_list(2, ECL_SYM("OBJECT",1305), v4cvs);
     v2cvspecs = CONS(T0,v2cvspecs);
     goto L9;
L13:;
     if (!(ECL_CONSP(v4cvs))) { goto L16; }
     T0 = ecl_car(v4cvs);
     if (Null(ecl_memql(T0,VV[156]))) { goto L16; }
     {
      cl_object v5;
      v5 = ecl_cdr(v4cvs);
      goto L22;
L21:;
      {
       cl_object v6name;
       v6name = ecl_car(v5);
       T0 = ecl_car(v4cvs);
       if (!(ECL_SYMBOLP(v6name))) { goto L29; }
       T2 = ecl_symbol_name(v6name);
       T1 = cl_string_downcase(1, T2);
       goto L28;
L29:;
       if (!(ECL_STRINGP(v6name))) { goto L31; }
       T1 = v6name;
       goto L28;
L31:;
       T1 = ecl_function_dispatch(cl_env_copy,VV[246])(2, VV[157], v6name) /*  CMPERR */;
L28:;
       T2 = cl_list(2, T0, T1);
       v2cvspecs = CONS(T2,v2cvspecs);
      }
      v5 = ecl_cdr(v5);
L22:;
      if (Null(v5)) { goto L35; }
      goto L21;
L35:;
      goto L9;
     }
L16:;
     ecl_function_dispatch(cl_env_copy,VV[246])(2, VV[158], v4cvs) /*  CMPERR */;
L9:;
    }
    v3 = ecl_cdr(v3);
L5:;
    if (Null(v3)) { goto L39; }
    goto L4;
L39:;
    value0 = cl_nreverse(v2cvspecs);
    return value0;
   }
  }
 }
}
/*      function definition for LOCATIVE-TYPE-FROM-VAR-KIND           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L27locative_type_from_var_kind(cl_object v1kind)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_assql(v1kind,VV[160]);
  value0 = ecl_cdr(T0);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for BUILD-DEBUG-LEXICAL-ENV               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L28build_debug_lexical_env(cl_narg narg, cl_object v1var_locations, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2first;
  va_list args; va_start(args,v1var_locations);
  {
   int i = 1;
   if (i >= narg) {
    v2first = ECL_NIL;
   } else {
    i++;
    v2first = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v3filtered_locations;
   cl_object v4filtered_codes;
   v3filtered_locations = ECL_NIL;
   v4filtered_codes = ECL_NIL;
   {
    cl_object v5var;
    cl_object v6;
    v5var = ECL_NIL;
    {
     cl_object v7;
     v7 = v1var_locations;
     if (ecl_unlikely(!ECL_LISTP(v7))) FEtype_error_list(v7);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v6 = v7;
    }
    {
     cl_object v7name;
     v7name = ECL_NIL;
     {
      cl_object v8code;
      v8code = ECL_NIL;
      {
       cl_object v9loc;
       v9loc = ECL_NIL;
L12:;
       if (!(ecl_endp(v6))) { goto L14; }
       goto L13;
L14:;
       v5var = _ecl_car(v6);
       {
        cl_object v10;
        v10 = _ecl_cdr(v6);
        if (ecl_unlikely(!ECL_LISTP(v10))) FEtype_error_list(v10);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v6 = v10;
       }
       T0 = cl_find_package(VV[162]);
       ecl_bds_bind(cl_env_copy,ECL_SYM("*PACKAGE*",45),T0); /*  *PACKAGE* */
       T0 = ecl_function_dispatch(cl_env_copy,VV[313])(1, v5var) /*  VAR-NAME */;
       v7name = cl_format(3, ECL_NIL, VV[163], T0);
       ecl_bds_unwind1(cl_env_copy);
       T0 = ecl_function_dispatch(cl_env_copy,VV[314])(1, v5var) /*  VAR-KIND */;
       v8code = L27locative_type_from_var_kind(T0);
       v9loc = ecl_function_dispatch(cl_env_copy,VV[315])(1, v5var) /*  VAR-LOC */;
       if (Null(v8code)) { goto L28; }
       if (!(ECL_CONSP(v9loc))) { goto L28; }
       T0 = ecl_car(v9loc);
       if (!((T0)==(VV[164]))) { goto L28; }
       T0 = CONS(v7name,v8code);
       v4filtered_codes = CONS(T0,v4filtered_codes);
       v3filtered_locations = CONS(v9loc,v3filtered_locations);
L28:;
       goto L12;
L13:;
      }
     }
    }
   }
   if (Null(v4filtered_codes)) { goto L36; }
   cl_set(VV[88],ECL_T);
   ecl_function_dispatch(cl_env_copy,VV[262])(1, VV[165]) /*  WT-NL   */;
   {
    cl_object v5name;
    cl_object v6code;
    cl_object v7;
    v5name = ECL_NIL;
    v6code = ECL_NIL;
    {
     cl_object v8;
     v8 = v4filtered_codes;
     if (ecl_unlikely(!ECL_LISTP(v8))) FEtype_error_list(v8);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v7 = v8;
    }
    {
     cl_object v8i;
     v8i = ecl_make_fixnum(0);
     if (!(ecl_endp(v7))) { goto L50; }
     goto L49;
L50:;
     {
      cl_object v9;
      v9 = _ecl_car(v7);
      v5name = ecl_car(v9);
      v9 = ecl_cdr(v9);
      v6code = v9;
     }
     {
      cl_object v9;
      v9 = _ecl_cdr(v7);
      if (ecl_unlikely(!ECL_LISTP(v9))) FEtype_error_list(v9);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v7 = v9;
     }
L48:;
     if (!(ecl_zerop(v8i))) { goto L65; }
     T0 = VV[166];
     goto L64;
L65:;
     T0 = VV[167];
L64:;
     ecl_function_dispatch(cl_env_copy,VV[262])(5, T0, v5name, VV[168], v6code, VV[79]) /*  WT-NL */;
     if (!(ecl_endp(v7))) { goto L67; }
     goto L49;
L67:;
     {
      cl_object v9;
      v9 = _ecl_car(v7);
      v5name = ecl_car(v9);
      v9 = ecl_cdr(v9);
      v6code = v9;
     }
     {
      cl_object v9;
      v9 = _ecl_cdr(v7);
      if (ecl_unlikely(!ECL_LISTP(v9))) FEtype_error_list(v9);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v7 = v9;
     }
     v8i = ecl_one_plus(v8i);
     goto L48;
L49:;
    }
   }
   ecl_function_dispatch(cl_env_copy,VV[291])(1, VV[169]) /*  WT      */;
   ecl_function_dispatch(cl_env_copy,VV[262])(1, VV[170]) /*  WT-NL   */;
   if (Null(v2first)) { goto L87; }
   T0 = VV[171];
   goto L86;
L87:;
   T0 = VV[172];
L86:;
   ecl_function_dispatch(cl_env_copy,VV[262])(2, T0, VV[173]) /*  WT-NL */;
   {
    cl_object v5var_loc;
    cl_object v6;
    v5var_loc = ECL_NIL;
    {
     cl_object v7;
     v7 = v3filtered_locations;
     if (ecl_unlikely(!ECL_LISTP(v7))) FEtype_error_list(v7);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v6 = v7;
    }
L94:;
    if (!(ecl_endp(v6))) { goto L96; }
    goto L95;
L96:;
    v5var_loc = _ecl_car(v6);
    {
     cl_object v7;
     v7 = _ecl_cdr(v6);
     if (ecl_unlikely(!ECL_LISTP(v7))) FEtype_error_list(v7);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v6 = v7;
    }
    ecl_function_dispatch(cl_env_copy,VV[291])(3, VV[174], v5var_loc, VV[175]) /*  WT */;
    goto L94;
L95:;
   }
   ecl_function_dispatch(cl_env_copy,VV[291])(1, VV[169]) /*  WT      */;
   {
    cl_fixnum v5;
    v5 = ecl_length(v3filtered_locations);
    T0 = ecl_plus(ecl_make_fixnum(2),ecl_make_fixnum(v5));
    ecl_function_dispatch(cl_env_copy,VV[262])(3, VV[176], T0, VV[177]) /*  WT-NL */;
   }
   if ((v2first)!=ECL_NIL) { goto L36; }
   ecl_function_dispatch(cl_env_copy,VV[262])(1, VV[178]) /*  WT-NL   */;
L36:;
   value0 = v4filtered_codes;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for POP-DEBUG-LEXICAL-ENV                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L29pop_debug_lexical_env()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ecl_function_dispatch(cl_env_copy,VV[262])(1, VV[178]) /*  WT-NL */;
  return value0;
 }
}
/*      function definition for T3LOCAL-FUN                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L30t3local_fun(cl_object v1fun)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  ecl_function_dispatch(cl_env_copy,VV[318])(1, v1fun) /*  PRINT-EMITTING */;
  {
   cl_object v2lambda_expr;
   v2lambda_expr = ecl_function_dispatch(cl_env_copy,VV[267])(1, v1fun) /*  FUN-LAMBDA */;
   T0 = ecl_function_dispatch(cl_env_copy,VV[258])(1, v2lambda_expr) /*  C1FORM-ENV */;
   ecl_bds_bind(cl_env_copy,VV[1],T0);            /*  *CMP-ENV*       */
   ecl_bds_bind(cl_env_copy,VV[92],ecl_make_fixnum(0)); /*  *LCL*     */
   ecl_bds_bind(cl_env_copy,VV[97],ecl_make_fixnum(0)); /*  *TEMP*    */
   ecl_bds_bind(cl_env_copy,VV[91],ecl_make_fixnum(0)); /*  *MAX-TEMP* */
   ecl_bds_bind(cl_env_copy,VV[181],ecl_make_fixnum(0)); /*  *LAST-LABEL* */
   ecl_bds_bind(cl_env_copy,VV[93],ecl_make_fixnum(0)); /*  *LEX*     */
   ecl_bds_bind(cl_env_copy,VV[89],ecl_make_fixnum(0)); /*  *MAX-LEX* */
   T0 = ecl_function_dispatch(cl_env_copy,VV[288])(1, v1fun) /*  FUN-ENV */;
   ecl_bds_bind(cl_env_copy,VV[95],T0);           /*  *ENV*           */
   ecl_bds_bind(cl_env_copy,VV[90],ecl_symbol_value(VV[95])); /*  *MAX-ENV* */
   ecl_bds_bind(cl_env_copy,VV[96],ecl_make_fixnum(0)); /*  *ENV-LVL* */
   ecl_bds_bind(cl_env_copy,VV[34],ECL_NIL);      /*  *AUX-CLOSURE*   */
   T0 = L35fun_lexical_levels(v1fun);
   ecl_bds_bind(cl_env_copy,VV[94],T0);           /*  *LEVEL*         */
   ecl_bds_bind(cl_env_copy,VV[143],ECL_SYM("RETURN",726)); /*  *EXIT* */
   ecl_bds_bind(cl_env_copy,VV[144],VV[182]);     /*  *UNWIND-EXIT*   */
   ecl_bds_bind(cl_env_copy,VV[145],ECL_SYM("RETURN",726)); /*  *DESTINATION* */
   ecl_bds_bind(cl_env_copy,VV[88],ECL_NIL);      /*  *IHS-USED-P*    */
   ecl_bds_bind(cl_env_copy,VV[33],ecl_make_fixnum(0)); /*  *OPENED-C-BRACES* */
   ecl_bds_bind(cl_env_copy,VV[183],v1fun);       /*  *TAIL-RECURSION-INFO* */
   T0 = ecl_function_dispatch(cl_env_copy,VV[319])(1, v2lambda_expr) /*  C1FORM-VOLATILE* */;
   ecl_bds_bind(cl_env_copy,VV[21],T0);           /*  *VOLATILE*      */
   if (Null(L32t3local_fun_declaration(v1fun))) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[265])(0)  /*  WT-NL-OPEN-BRACE */;
   {
    cl_object v3body;
    v3body = L31t3local_fun_body(v1fun);
    T0 = ecl_function_dispatch(cl_env_copy,VV[286])(1, v1fun) /*  FUN-CLOSURE */;
    L15wt_function_locals(1, T0);
    ecl_function_dispatch(cl_env_copy,VV[262])(1, VV[40]) /*  WT-NL   */;
    T0 = ecl_function_dispatch(cl_env_copy,VV[286])(1, v1fun) /*  FUN-CLOSURE */;
    if (!((T0)==(VV[128]))) { goto L9; }
    ecl_function_dispatch(cl_env_copy,VV[262])(3, VV[119], ecl_symbol_value(VV[21]), VV[184]) /*  WT-NL */;
L9:;
    ecl_function_dispatch(cl_env_copy,VV[262])(3, VV[119], ecl_symbol_value(VV[21]), VV[185]) /*  WT-NL */;
    if (Null(ecl_function_dispatch(cl_env_copy,VV[320])(0) /*  POLICY-CHECK-STACK-OVERFLOW */)) { goto L12; }
    ecl_function_dispatch(cl_env_copy,VV[262])(1, VV[186]) /*  WT-NL  */;
L12:;
    T0 = ecl_function_dispatch(cl_env_copy,VV[286])(1, v1fun) /*  FUN-CLOSURE */;
    if (!((T0)==(VV[128]))) { goto L14; }
    L36t3local_fun_closure_scan(v1fun);
L14:;
    cl_write_sequence(2, v3body, ecl_symbol_value(VV[35]));
    value0 = ecl_function_dispatch(cl_env_copy,VV[268])(1, ecl_make_fixnum(0)) /*  WT-NL-CLOSE-MANY-BRACES */;
    ecl_bds_unwind_n(cl_env_copy,19);
    return value0;
   }
L3:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   ecl_bds_unwind_n(cl_env_copy,19);
   return value0;
  }
 }
}
/*      function definition for T3LOCAL-FUN-BODY                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L31t3local_fun_body(cl_object volatile v1fun)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11;
 cl_object volatile env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   volatile cl_object v2string;
   v2string = si_make_vector(ECL_SYM("BASE-CHAR",122), ecl_make_fixnum(2048), ECL_T, ecl_make_fixnum(0), ECL_NIL, ecl_make_fixnum(0));
   {
    volatile cl_object v3;
    v3 = si_make_string_output_stream_from_string(v2string);
    ecl_bds_bind(cl_env_copy,VV[35],v3);          /*  *COMPILER-OUTPUT1* */
    {
     volatile bool unwinding = FALSE;
     cl_index v4=ECL_STACK_INDEX(cl_env_copy),v5;
     ecl_frame_ptr next_fr;
     ecl_frs_push(cl_env_copy,ECL_PROTECT_TAG);
     if (__ecl_frs_push_result) {
       unwinding = TRUE; next_fr=cl_env_copy->nlj_fr;
     } else {
     {
      cl_object v6lambda_expr;
      v6lambda_expr = ecl_function_dispatch(cl_env_copy,VV[267])(1, v1fun) /*  FUN-LAMBDA */;
      T0 = ecl_function_dispatch(cl_env_copy,VV[259])(1, v6lambda_expr) /*  C1FORM-ARGS */;
      T1 = ecl_car(T0);
      T2 = ecl_function_dispatch(cl_env_copy,VV[259])(1, v6lambda_expr) /*  C1FORM-ARGS */;
      T3 = ecl_caddr(T2);
      T4 = ecl_function_dispatch(cl_env_copy,VV[322])(1, v1fun) /*  FUN-CFUN */;
      T5 = ecl_function_dispatch(cl_env_copy,VV[285])(1, v1fun) /*  FUN-NAME */;
      T6 = ecl_function_dispatch(cl_env_copy,VV[323])(1, v1fun) /*  FUN-DESCRIPTION */;
      T7 = ecl_function_dispatch(cl_env_copy,VV[324])(1, v1fun) /*  FUN-NEEDS-NARG */;
      T8 = ecl_function_dispatch(cl_env_copy,VV[325])(1, v1fun) /*  FUN-REQUIRED-LCLS */;
      T9 = ecl_function_dispatch(cl_env_copy,VV[286])(1, v1fun) /*  FUN-CLOSURE */;
      T10 = ecl_function_dispatch(cl_env_copy,VV[326])(1, v1fun) /*  FUN-OPTIONAL-TYPE-CHECK-FORMS */;
      T11 = ecl_function_dispatch(cl_env_copy,VV[327])(1, v1fun) /*  FUN-KEYWORD-TYPE-CHECK-FORMS */;
      cl_env_copy->values[0] = ecl_function_dispatch(cl_env_copy,VV[328])(10, T1, T3, T4, T5, T6, T7, T8, T9, T10, T11) /*  C2LAMBDA-EXPR */;
     }
     }
     ecl_frs_pop(cl_env_copy);
     v5=ecl_stack_push_values(cl_env_copy);
     cl_close(1, ecl_symbol_value(VV[35]));
     ecl_stack_pop_values(cl_env_copy,v5);
     if (unwinding) ecl_unwind(cl_env_copy,next_fr);
     ECL_STACK_SET_INDEX(cl_env_copy,v4);
     ecl_bds_unwind1(cl_env_copy);
    }
   }
   value0 = v2string;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for T3LOCAL-FUN-DECLARATION               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L32t3local_fun_declaration(cl_object v1fun)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(ecl_function_dispatch(cl_env_copy,VV[330])(1, v1fun) /*  FUN-GLOBAL */)) { goto L3; }
  T0 = VV[189];
  goto L2;
L3:;
  T1 = ecl_function_dispatch(cl_env_copy,VV[286])(1, v1fun) /*  FUN-CLOSURE */;
  if (!((T1)==(VV[128]))) { goto L5; }
  T0 = VV[190];
  goto L2;
L5:;
  T0 = VV[191];
L2:;
  value0 = ecl_function_dispatch(cl_env_copy,VV[285])(1, v1fun) /*  FUN-NAME */;
  if ((value0)!=ECL_NIL) { goto L9; }
  value0 = ecl_function_dispatch(cl_env_copy,VV[323])(1, v1fun) /*  FUN-DESCRIPTION */;
  if ((value0)!=ECL_NIL) { goto L9; }
  T1 = VV[128];
  goto L7;
L9:;
  T1 = value0;
  goto L7;
L7:;
  ecl_function_dispatch(cl_env_copy,VV[331])(2, T0, T1) /*  WT-COMMENT-NL */;
  if (Null(ecl_function_dispatch(cl_env_copy,VV[332])(1, v1fun) /*  FUN-SHARES-WITH */)) { goto L12; }
  T0 = ecl_function_dispatch(cl_env_copy,VV[332])(1, v1fun) /*  FUN-SHARES-WITH */;
  T1 = ecl_function_dispatch(cl_env_copy,VV[285])(1, T0) /*  FUN-NAME */;
  ecl_function_dispatch(cl_env_copy,VV[331])(2, VV[192], T1) /*  WT-COMMENT-NL */;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L12:;
  {
   cl_object v2comma;
   cl_object v3lambda_expr;
   cl_object v4volatile;
   cl_object v5lambda_list;
   cl_object v6requireds;
   cl_object v7narg;
   v2comma = VV[131];
   v3lambda_expr = ecl_function_dispatch(cl_env_copy,VV[267])(1, v1fun) /*  FUN-LAMBDA */;
   v4volatile = ecl_function_dispatch(cl_env_copy,VV[319])(1, v3lambda_expr) /*  C1FORM-VOLATILE* */;
   T0 = ecl_function_dispatch(cl_env_copy,VV[259])(1, v3lambda_expr) /*  C1FORM-ARGS */;
   v5lambda_list = ecl_car(T0);
   {
    cl_object v8;
    cl_object v9;
    cl_object v10arg;
    cl_object v11;
    v8 = ecl_car(v5lambda_list);
    v9 = ecl_make_fixnum(63);
    v10arg = ECL_NIL;
    {
     cl_object v12;
     v12 = v8;
     if (ecl_unlikely(!ECL_LISTP(v12))) FEtype_error_list(v12);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v11 = v12;
    }
    {
     cl_object v12;
     cl_object v13;
     v12 = ecl_list1(ECL_NIL);
     v13 = v12;
L29:;
     v9 = ecl_minus(v9,ecl_make_fixnum(1));
     T0 = v9;
     if (!(ecl_minusp(T0))) { goto L31; }
     goto L30;
L31:;
     if (!(ecl_endp(v11))) { goto L35; }
     goto L30;
L35:;
     v10arg = _ecl_car(v11);
     {
      cl_object v14;
      v14 = _ecl_cdr(v11);
      if (ecl_unlikely(!ECL_LISTP(v14))) FEtype_error_list(v14);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v11 = v14;
     }
     {
      cl_object v14;
      v14 = v13;
      if (ecl_unlikely(ECL_ATOM(v14))) FEtype_error_cons(v14);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      T0 = v14;
     }
     T1 = ecl_function_dispatch(cl_env_copy,VV[313])(1, v10arg) /*  VAR-NAME */;
     T2 = ecl_function_dispatch(cl_env_copy,VV[333])(1, T1) /*  NEXT-LCL */;
     v13 = ecl_list1(T2);
     (ECL_CONS_CDR(T0)=v13,T0);
     goto L29;
L30:;
     v6requireds = ecl_cdr(v12);
     goto L20;
    }
   }
L20:;
   v7narg = ecl_function_dispatch(cl_env_copy,VV[324])(1, v1fun) /*  FUN-NEEDS-NARG */;
   {
    cl_object v8cmp_env;
    v8cmp_env = ecl_function_dispatch(cl_env_copy,VV[258])(1, v3lambda_expr) /*  C1FORM-ENV */;
    T0 = ecl_function_dispatch(cl_env_copy,VV[334])(2, ECL_SYM("SPEED",793), v8cmp_env) /*  CMP-ENV-OPTIMIZATION */;
    T1 = ecl_function_dispatch(cl_env_copy,VV[334])(2, ECL_SYM("DEBUG",272), v8cmp_env) /*  CMP-ENV-OPTIMIZATION */;
    T2 = ecl_function_dispatch(cl_env_copy,VV[334])(2, ECL_SYM("SPACE",790), v8cmp_env) /*  CMP-ENV-OPTIMIZATION */;
    T3 = ecl_function_dispatch(cl_env_copy,VV[334])(2, ECL_SYM("SAFETY",736), v8cmp_env) /*  CMP-ENV-OPTIMIZATION */;
    ecl_function_dispatch(cl_env_copy,VV[331])(5, VV[193], T0, T1, T2, T3) /*  WT-COMMENT-NL */;
   }
   {
    cl_object v8cfun;
    v8cfun = ecl_function_dispatch(cl_env_copy,VV[322])(1, v1fun) /*  FUN-CFUN */;
    if (Null(ecl_function_dispatch(cl_env_copy,VV[335])(1, v1fun) /*  FUN-EXPORTED */)) { goto L55; }
    ecl_function_dispatch(cl_env_copy,VV[263])(3, VV[194], v8cfun, VV[195]) /*  WT-NL-H */;
    ecl_function_dispatch(cl_env_copy,VV[262])(3, VV[119], v8cfun, VV[195]) /*  WT-NL */;
    goto L53;
L55:;
    ecl_function_dispatch(cl_env_copy,VV[263])(3, VV[196], v8cfun, VV[195]) /*  WT-NL-H */;
    ecl_function_dispatch(cl_env_copy,VV[262])(3, VV[196], v8cfun, VV[195]) /*  WT-NL */;
   }
L53:;
   if (Null(v7narg)) { goto L59; }
   ecl_function_dispatch(cl_env_copy,VV[272])(2, v4volatile, VV[197]) /*  WT-H */;
   ecl_function_dispatch(cl_env_copy,VV[291])(2, v4volatile, VV[198]) /*  WT */;
   v2comma = VV[121];
L59:;
   {
    cl_object v8;
    v8 = L35fun_lexical_levels(v1fun);
    {
     cl_object v9n;
     v9n = ecl_make_fixnum(0);
     goto L68;
L67:;
     ecl_function_dispatch(cl_env_copy,VV[272])(2, v2comma, VV[199]) /*  WT-H */;
     ecl_function_dispatch(cl_env_copy,VV[291])(3, v2comma, VV[200], v9n) /*  WT */;
     v2comma = VV[121];
     v9n = ecl_one_plus(v9n);
L68:;
     if (!(ecl_lower(v9n,v8))) { goto L76; }
     goto L67;
L76:;
    }
   }
   {
    cl_object v8;
    cl_object v9lcl;
    cl_object v10;
    v8 = ecl_structure_set(v1fun,VV[201],29,v6requireds);
    v9lcl = ECL_NIL;
    {
     cl_object v11;
     v11 = v8;
     if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v10 = v11;
    }
L84:;
    if (!(ecl_endp(v10))) { goto L86; }
    goto L85;
L86:;
    v9lcl = _ecl_car(v10);
    {
     cl_object v11;
     v11 = _ecl_cdr(v10);
     if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v10 = v11;
    }
    ecl_function_dispatch(cl_env_copy,VV[272])(3, v2comma, VV[119], v4volatile) /*  WT-H */;
    ecl_function_dispatch(cl_env_copy,VV[291])(4, v2comma, VV[119], v4volatile, v9lcl) /*  WT */;
    v2comma = VV[121];
    goto L84;
L85:;
   }
   if (Null(v7narg)) { goto L99; }
   ecl_function_dispatch(cl_env_copy,VV[272])(1, VV[202]) /*  WT-H    */;
   ecl_function_dispatch(cl_env_copy,VV[291])(1, VV[202]) /*  WT      */;
L99:;
   ecl_function_dispatch(cl_env_copy,VV[272])(1, VV[203]) /*  WT-H    */;
   ecl_function_dispatch(cl_env_copy,VV[291])(1, VV[175]) /*  WT      */;
  }
  value0 = ECL_T;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for FUN-CLOSURE-VARIABLES                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L34fun_closure_variables(cl_object v1fun)
{
 cl_object T0, T1, T2, T3, T4;
 cl_object env0 = ECL_NIL;
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  env0 = ECL_NIL;
  CLV0 = env0 = CONS(v1fun,env0);                 /*  FUN             */
  {
   cl_object v2;
   v2 = ecl_make_cclosure_va((cl_objectfn)LC33__lambda147,env0,Cblock,1);
   T0 = v2;
  }
  T1 = ecl_function_dispatch(cl_env_copy,VV[337])(1, ECL_CONS_CAR(CLV0)) /*  FUN-REFERENCED-VARS */;
  T2 = cl_remove_if(2, T0, T1);
  T3 = (ECL_SYM(">",77)->symbol.gfdef);
  T4 = ecl_fdefinition(VV[315]);
  value0 = cl_sort(4, T2, T3, ECL_SYM("KEY",1288), T4);
  return value0;
 }
}
/*      closure LAMBDA147                                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC33__lambda147(cl_narg narg, cl_object v1x, ...)
{
 cl_object T0, T1;
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV0 = env0;                                     /*  FUN             */
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=1)) FEwrong_num_arguments_anonym();
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,VV[338])(1, v1x) /*  REF-REF-CCB */;
  value0 = Null(T0)?ECL_T:ECL_NIL;
  if ((value0)!=ECL_NIL) { goto L2; }
  T0 = ecl_function_dispatch(cl_env_copy,VV[314])(1, v1x) /*  VAR-KIND */;
  value0 = ecl_make_bool((T0)==(ECL_SYM("SPECIAL",791)));
  if ((value0)!=ECL_NIL) { goto L2; }
  T0 = ecl_function_dispatch(cl_env_copy,VV[267])(1, ECL_CONS_CAR(CLV0)) /*  FUN-LAMBDA */;
  if ((ecl_function_dispatch(cl_env_copy,VV[339])(2, v1x, T0) /*  VAR-REFERENCED-IN-FORM */)!=ECL_NIL) { goto L7; }
  T0 = ecl_function_dispatch(cl_env_copy,VV[267])(1, ECL_CONS_CAR(CLV0)) /*  FUN-LAMBDA */;
  T1 = ecl_function_dispatch(cl_env_copy,VV[340])(2, v1x, T0) /*  VAR-CHANGED-IN-FORM */;
  value0 = Null(T1)?ECL_T:ECL_NIL;
  goto L5;
L7:;
  value0 = ECL_NIL;
  goto L5;
L5:;
  if ((value0)!=ECL_NIL) { goto L2; }
  T0 = ecl_function_dispatch(cl_env_copy,VV[315])(1, v1x) /*  VAR-LOC */;
  value0 = ecl_make_bool((T0)==(ECL_SYM("OBJECT",2105)));
  cl_env_copy->nvalues = 1;
  return value0;
L2:;
  cl_env_copy->nvalues = 1;
  return value0;
 }
 }
}
/*      function definition for FUN-LEXICAL-LEVELS                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L35fun_lexical_levels(cl_object v1fun)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,VV[286])(1, v1fun) /*  FUN-CLOSURE */;
  if (!((T0)==(VV[206]))) { goto L1; }
  value0 = ecl_function_dispatch(cl_env_copy,VV[287])(1, v1fun) /*  FUN-LEVEL */;
  return value0;
L1:;
  value0 = ecl_make_fixnum(0);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for T3LOCAL-FUN-CLOSURE-SCAN              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L36t3local_fun_closure_scan(cl_object v1fun)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2clv_used;
   v2clv_used = L34fun_closure_variables(v1fun);
   ecl_function_dispatch(cl_env_copy,VV[262])(1, VV[208]) /*  WT-NL   */;
   {
    cl_object v3;
    cl_object v4;
    cl_object v5n;
    cl_object v6first;
    T0 = ecl_function_dispatch(cl_env_copy,VV[288])(1, v1fun) /*  FUN-ENV */;
    v3 = ecl_one_minus(T0);
    v4 = v2clv_used;
    v5n = v3;
    v6first = ECL_T;
    goto L10;
L9:;
    ecl_function_dispatch(cl_env_copy,VV[262])(2, VV[132], v5n) /*  WT-NL */;
    if (Null(v6first)) { goto L14; }
    ecl_function_dispatch(cl_env_copy,VV[291])(1, VV[209]) /*  WT     */;
    v6first = ECL_NIL;
    goto L13;
L14:;
    T0 = ecl_one_plus(v5n);
    ecl_function_dispatch(cl_env_copy,VV[291])(3, VV[210], T0, VV[203]) /*  WT */;
L13:;
    T0 = ecl_car(v4);
    T1 = ecl_function_dispatch(cl_env_copy,VV[315])(1, T0) /*  VAR-LOC */;
    if (!(ecl_number_equalp(v5n,T1))) { goto L18; }
    T0 = ecl_car(v2clv_used);
    T1 = ecl_function_dispatch(cl_env_copy,VV[313])(1, T0) /*  VAR-NAME */;
    ecl_function_dispatch(cl_env_copy,VV[343])(1, T1) /*  WT-COMMENT  */;
    {
     cl_object v7;
     v7 = v2clv_used;
     {
      cl_object v8;
      v8 = v7;
      if (ecl_unlikely(!ECL_LISTP(v8))) FEtype_error_list(v8);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
     }
     if (Null(v7)) { goto L25; }
     {
      cl_object v8;
      v8 = ECL_CONS_CDR(v7);
      v2clv_used = v8;
      v7 = ECL_CONS_CAR(v7);
     }
L25:;
    }
L18:;
    v5n = ecl_one_minus(v5n);
L10:;
    if (ecl_minusp(v5n)) { goto L33; }
    if (v4==ECL_NIL) { goto L33; }
    goto L9;
L33:;
   }
   ecl_function_dispatch(cl_env_copy,VV[265])(0)  /*  WT-NL-OPEN-BRACE */;
   value0 = ecl_function_dispatch(cl_env_copy,VV[291])(1, VV[211]) /*  WT */;
   return value0;
  }
 }
}
/*      function definition for T1FSET                                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L37t1fset(cl_object v1args)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2form;
   v2form = CONS(ECL_SYM("FSET",1084),v1args);
   if (Null(ecl_symbol_value(VV[11]))) { goto L2; }
   ecl_function_dispatch(cl_env_copy,VV[249])(1, v2form) /*  CMP-EVAL */;
L2:;
   ecl_bds_bind(cl_env_copy,VV[13],ECL_NIL);      /*  *COMPILE-TOPLEVEL* */
   ecl_bds_bind(cl_env_copy,VV[11],ECL_NIL);      /*  *COMPILE-TIME-TOO* */
   T0 = L38c1fset(v2form);
   value0 = L20add_load_time_values(T0);
   ecl_bds_unwind1(cl_env_copy);
   ecl_bds_unwind1(cl_env_copy);
   return value0;
  }
 }
}
/*      function definition for C1FSET                                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L38c1fset(cl_object v1form)
{
 cl_object T0, T1, T2, T3, T4;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2;
   cl_object v3;
   cl_object v4fname;
   cl_object v5def;
   cl_object v6macro;
   cl_object v7pprint;
   v2 = ecl_cdr(v1form);
   v3 = v2;
   if (!(v3==ECL_NIL)) { goto L4; }
   ecl_function_dispatch(cl_env_copy,VV[301])(1, v2) /*  DM-TOO-FEW-ARGUMENTS */;
L4:;
   {
    cl_object v8;
    v8 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4fname = v8;
   }
   if (!(v3==ECL_NIL)) { goto L10; }
   ecl_function_dispatch(cl_env_copy,VV[301])(1, v2) /*  DM-TOO-FEW-ARGUMENTS */;
L10:;
   {
    cl_object v8;
    v8 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5def = v8;
   }
   if (Null(v3)) { goto L16; }
   {
    cl_object v8;
    v8 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v6macro = v8;
    goto L15;
   }
L16:;
   v6macro = ECL_NIL;
L15:;
   if (Null(v3)) { goto L22; }
   {
    cl_object v8;
    v8 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v7pprint = v8;
    goto L21;
   }
L22:;
   v7pprint = ECL_NIL;
L21:;
   if (Null(v3)) { goto L27; }
   ecl_function_dispatch(cl_env_copy,VV[346])(1, v2) /*  DM-TOO-MANY-ARGUMENTS */;
L27:;
   {
    cl_object v8fun_form;
    ecl_bds_bind(cl_env_copy,VV[214],ECL_T);      /*  *USE-C-GLOBAL*  */
    v8fun_form = ecl_function_dispatch(cl_env_copy,VV[252])(1, v5def) /*  C1EXPR */;
    T0 = ecl_function_dispatch(cl_env_copy,VV[254])(1, v8fun_form) /*  C1FORM-NAME */;
    if (!((T0)==(VV[215]))) {
    ecl_bds_unwind1(cl_env_copy);
     goto L29;
    }
    {
     cl_object v9function_list;
     cl_object v10fun_object;
     cl_object v11form;
     cl_object v12labels;
     T0 = ecl_function_dispatch(cl_env_copy,VV[259])(1, v8fun_form) /*  C1FORM-ARGS */;
     v9function_list = ecl_car(T0);
     {
      cl_object v13;
      v13 = v9function_list;
      {
       cl_object v14;
       v14 = v13;
       if (ecl_unlikely(!ECL_LISTP(v14))) FEtype_error_list(v14);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v13)) { goto L38; }
      {
       cl_object v14;
       v14 = ECL_CONS_CDR(v13);
       v9function_list = v14;
       v13 = ECL_CONS_CAR(v13);
      }
L38:;
      v10fun_object = v13;
     }
     T0 = ecl_function_dispatch(cl_env_copy,VV[259])(1, v8fun_form) /*  C1FORM-ARGS */;
     v11form = ecl_cadr(T0);
     T0 = ecl_function_dispatch(cl_env_copy,VV[259])(1, v8fun_form) /*  C1FORM-ARGS */;
     v12labels = ecl_caddr(T0);
     if (!(v9function_list==ECL_NIL)) {
     ecl_bds_unwind1(cl_env_copy);
      goto L29;
     }
     T0 = ecl_fdefinition(VV[347]);
     T1 = ecl_function_dispatch(cl_env_copy,VV[337])(1, v10fun_object) /*  FUN-REFERENCED-VARS */;
     if (Null(cl_every(2, T0, T1))) {
     ecl_bds_unwind1(cl_env_copy);
      goto L29;
     }
     T0 = ecl_function_dispatch(cl_env_copy,VV[254])(1, v11form) /*  C1FORM-NAME */;
     if (!((T0)==(VV[216]))) {
     ecl_bds_unwind1(cl_env_copy);
      goto L29;
     }
     T0 = ecl_function_dispatch(cl_env_copy,VV[259])(1, v11form) /*  C1FORM-ARGS */;
     T1 = ecl_car(T0);
     T2 = ecl_function_dispatch(cl_env_copy,VV[348])(1, v10fun_object) /*  FUN-VAR */;
     if (!((T1)==(T2))) {
     ecl_bds_unwind1(cl_env_copy);
      goto L29;
     }
     if (Null(ecl_function_dispatch(cl_env_copy,VV[349])(1, v10fun_object) /*  FUN-NO-ENTRY */)) { goto L51; }
     if (Null(v6macro)) { goto L53; }
     T0 = ecl_function_dispatch(cl_env_copy,VV[285])(1, v10fun_object) /*  FUN-NAME */;
     ecl_function_dispatch(cl_env_copy,VV[246])(2, VV[217], T0) /*  CMPERR */;
L53:;
     value0 = ecl_function_dispatch(cl_env_copy,VV[294])(7, ECL_SYM("FSET",1084), VV[140], v10fun_object, ECL_NIL, ECL_NIL, ECL_NIL, ECL_NIL) /*  MAKE-C1FORM* */;
     ecl_bds_unwind1(cl_env_copy);
     return value0;
L51:;
     if (!((v6macro)==(ECL_NIL))) { goto L60; }
     goto L57;
     goto L58;
L60:;
     goto L58;
L58:;
     if (!(ecl_eql(v6macro,ECL_T))) {
     ecl_bds_unwind1(cl_env_copy);
      goto L29;
     }
     goto L56;
L57:;
L56:;
     if (ECL_FIXNUMP(v7pprint)||ECL_BIGNUMP(v7pprint)) { goto L64; }
     if (!(v7pprint==ECL_NIL)) {
     ecl_bds_unwind1(cl_env_copy);
      goto L29;
     }
     goto L63;
L64:;
L63:;
     if (!(ECL_CONSP(v4fname))) {
     ecl_bds_unwind1(cl_env_copy);
      goto L29;
     }
     T0 = ecl_car(v4fname);
     if (!((T0)==(ECL_SYM("QUOTE",681)))) {
     ecl_bds_unwind1(cl_env_copy);
      goto L29;
     }
     {
      cl_object v13fname;
      cl_object v14in_cl_symbols_p;
      v13fname = ecl_cadr(v4fname);
      if (!(ECL_SYMBOLP(v13fname))) { goto L71; }
      v14in_cl_symbols_p = si_mangle_name(1, v13fname);
      goto L69;
L71:;
      v14in_cl_symbols_p = ECL_NIL;
      goto L69;
L69:;
      T0 = ecl_function_dispatch(cl_env_copy,VV[306])(7, v13fname, VV[220], ECL_T, VV[221], v14in_cl_symbols_p, VV[222], ECL_T) /*  ADD-OBJECT */;
     }
     T1 = ecl_function_dispatch(cl_env_copy,VV[252])(1, v4fname) /*  C1EXPR */;
     T2 = ecl_function_dispatch(cl_env_copy,VV[252])(1, v6macro) /*  C1EXPR */;
     T3 = ecl_function_dispatch(cl_env_copy,VV[252])(1, v7pprint) /*  C1EXPR */;
     T4 = cl_list(4, T1, v8fun_form, T2, T3);
     value0 = ecl_function_dispatch(cl_env_copy,VV[294])(7, ECL_SYM("FSET",1084), VV[140], v10fun_object, T0, v6macro, v7pprint, T4) /*  MAKE-C1FORM* */;
     ecl_bds_unwind1(cl_env_copy);
     return value0;
    }
   }
L29:;
   value0 = L17t1ordinary(v1form);
   return value0;
  }
 }
}
/*      function definition for P1FSET                                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L39p1fset(cl_object v1c1form, cl_object v2assumptions, cl_object v3fun, cl_object v4fname, cl_object v5macro, cl_object v6pprint, cl_object v7c1forms)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,VV[267])(1, v3fun) /*  FUN-LAMBDA */;
  value0 = ecl_function_dispatch(cl_env_copy,VV[64])(2, T0, v2assumptions) /*  P1PROPAGATE */;
  return value0;
 }
}
/*      function definition for T2FSET                                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L40t2fset(cl_narg narg, cl_object v1c1form, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  value0 = L19t2ordinary(ECL_NIL, v1c1form);
  return value0;
 }
}
/*      function definition for C2FSET                                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L41c2fset(cl_object v1c1form, cl_object v2fun, cl_object v3fname, cl_object v4macro, cl_object v5pprint, cl_object v6c1forms)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(ecl_function_dispatch(cl_env_copy,VV[349])(1, v2fun) /*  FUN-NO-ENTRY */)) { goto L1; }
  T0 = ecl_function_dispatch(cl_env_copy,VV[285])(1, v2fun) /*  FUN-NAME */;
  T1 = cl_format(3, ECL_NIL, VV[227], T0);
  ecl_function_dispatch(cl_env_copy,VV[262])(3, VV[226], T1, VV[83]) /*  WT-NL */;
  ecl_function_dispatch(cl_env_copy,VV[353])(1, v2fun) /*  NEW-LOCAL  */;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  if ((ecl_function_dispatch(cl_env_copy,VV[286])(1, v2fun) /*  FUN-CLOSURE */)!=ECL_NIL) { goto L8; }
  if ((ecl_symbol_value(VV[145]))==(VV[146])) { goto L5; }
  goto L6;
L8:;
  goto L6;
L6:;
  value0 = ecl_function_dispatch(cl_env_copy,VV[354])(3, v1c1form, ECL_SYM("FSET",1084), v6c1forms) /*  C2CALL-GLOBAL */;
  return value0;
L5:;
  {
   cl_object v7;
   v7 = ecl_function_dispatch(cl_env_copy,VV[305])(0) /*  DATA-EMPTY-LOC */;
   ecl_bds_bind(cl_env_copy,VV[228],ecl_make_fixnum(0)); /*  *INLINE-BLOCKS* */
   T0 = cl_list(3, v7, v3fname, v2fun);
   cl_set(VV[229],CONS(T0,ecl_symbol_value(VV[229])));
   ecl_function_dispatch(cl_env_copy,VV[353])(1, v2fun) /*  NEW-LOCAL */;
   if (Null(v4macro)) { goto L16; }
   T0 = VV[230];
   goto L15;
L16:;
   T0 = VV[231];
L15:;
   ecl_function_dispatch(cl_env_copy,VV[262])(3, T0, v7, VV[203]) /*  WT-NL */;
   T0 = ecl_function_dispatch(cl_env_copy,VV[355])(1, v3fname) /*  LOC-IMMEDIATE-VALUE */;
   ecl_function_dispatch(cl_env_copy,VV[343])(1, T0) /*  WT-COMMENT   */;
   value0 = ecl_function_dispatch(cl_env_copy,VV[356])(0) /*  CLOSE-INLINE-BLOCKS */;
   ecl_bds_unwind1(cl_env_copy);
   return value0;
  }
 }
}
/*      function definition for OUTPUT-CFUNS                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L42output_cfuns(cl_object v1stream)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_fixnum v2n_cfuns;
   v2n_cfuns = ecl_length(ecl_symbol_value(VV[229]));
   ecl_function_dispatch(cl_env_copy,VV[263])(1, VV[81]) /*  WT-NL-H  */;
   ecl_function_dispatch(cl_env_copy,VV[263])(1, VV[233]) /*  WT-NL-H */;
   ecl_function_dispatch(cl_env_copy,VV[263])(1, VV[83]) /*  WT-NL-H  */;
   ecl_function_dispatch(cl_env_copy,VV[263])(2, VV[234], ecl_make_fixnum(v2n_cfuns)) /*  WT-NL-H */;
   if (!((v2n_cfuns)==0)) { goto L6; }
   value0 = ecl_function_dispatch(cl_env_copy,VV[263])(1, VV[235]) /*  WT-NL-H */;
   return value0;
L6:;
   cl_format(2, v1stream, VV[236]);
   {
    cl_object v3;
    cl_object v4loc;
    cl_object v5fname_loc;
    cl_object v6fun;
    cl_object v7;
    v3 = cl_nreverse(ecl_symbol_value(VV[229]));
    v4loc = ECL_NIL;
    v5fname_loc = ECL_NIL;
    v6fun = ECL_NIL;
    {
     cl_object v8;
     v8 = v3;
     if (ecl_unlikely(!ECL_LISTP(v8))) FEtype_error_list(v8);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v7 = v8;
    }
L17:;
    if (!(ecl_endp(v7))) { goto L19; }
    goto L18;
L19:;
    {
     cl_object v8;
     v8 = _ecl_car(v7);
     v4loc = ecl_car(v8);
     v8 = ecl_cdr(v8);
     v5fname_loc = ecl_car(v8);
     v8 = ecl_cdr(v8);
     v6fun = ecl_car(v8);
    }
    {
     cl_object v8;
     v8 = _ecl_cdr(v7);
     if (ecl_unlikely(!ECL_LISTP(v8))) FEtype_error_list(v8);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v7 = v8;
    }
    {
     cl_object v8cfun;
     cl_object v9minarg;
     cl_object v10maxarg;
     cl_object v11narg;
     v8cfun = ecl_function_dispatch(cl_env_copy,VV[322])(1, v6fun) /*  FUN-CFUN */;
     v9minarg = ecl_function_dispatch(cl_env_copy,VV[358])(1, v6fun) /*  FUN-MINARG */;
     v10maxarg = ecl_function_dispatch(cl_env_copy,VV[359])(1, v6fun) /*  FUN-MAXARG */;
     if (!(ecl_number_equalp(v9minarg,v10maxarg))) { goto L41; }
     if (!(ecl_lowereq(v10maxarg,ecl_make_fixnum(63)))) { goto L41; }
     v11narg = v10maxarg;
     goto L40;
L41:;
     T0 = ((ecl_float_nan_p(ecl_make_fixnum(63)) || ecl_lowereq(v9minarg,ecl_make_fixnum(63)))?v9minarg:ecl_make_fixnum(63));
     T1 = ecl_negate(T0);
     v11narg = ecl_one_minus(T1);
L40:;
     T0 = ecl_function_dispatch(cl_env_copy,VV[360])(1, v4loc) /*  VV-LOCATION */;
     T1 = ecl_function_dispatch(cl_env_copy,VV[360])(1, v5fname_loc) /*  VV-LOCATION */;
     T2 = ecl_function_dispatch(cl_env_copy,VV[361])(1, v6fun) /*  FUN-FILE-POSITION */;
     cl_format(7, v1stream, VV[237], v11narg, T0, T1, v8cfun, T2);
    }
    goto L17;
L18:;
   }
   value0 = cl_format(2, v1stream, VV[238]);
   return value0;
  }
 }
}

#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/cmp/cmptop.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _ecl0cPtiRZ7_7GUmqq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CMP;CMPTOP.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_ecl0cPtiRZ7_7GUmqq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  ecl_cmp_defun(VV[240]);                         /*  T1EXPR          */
  si_Xmake_special(VV[4]);
  if (ecl_boundp(cl_env_copy,VV[4])) { goto L7; }
  cl_set(VV[4],VVtemp[1]);
L7:;
  ecl_cmp_defun(VV[243]);                         /*  T1EXPR*         */
  ecl_cmp_defun(VV[251]);                         /*  T1/C1EXPR       */
  ecl_cmp_defun(VV[253]);                         /*  T2EXPR          */
  si_Xmake_special(VV[19]);
  if (ecl_boundp(cl_env_copy,VV[19])) { goto L26; }
  cl_set(VV[19],ECL_NIL);
L26:;
  (void)0; /* No entry created for EMIT-LOCAL-FUNS */
  ecl_cmp_defun(VV[260]);                         /*  CTOP-WRITE      */
  (void)0; /* No entry created for EMIT-TOPLEVEL-FORM */
  ecl_cmp_defun(VV[275]);                         /*  C1EVAL-WHEN     */
  ecl_cmp_defun(VV[278]);                         /*  T2COMPILER-LET  */
  ecl_cmp_defun(VV[280]);                         /*  T2PROGN         */
  ecl_cmp_defun(VV[281]);                         /*  EXPORTED-FNAME  */
  ecl_cmp_defun(VV[283]);                         /*  NEW-DEFUN       */
  ecl_cmp_defun(VV[284]);                         /*  PRINT-FUNCTION  */
  ecl_cmp_defmacro(VV[289]);                      /*  AND!            */
  ecl_cmp_defun(VV[290]);                         /*  WT-FUNCTION-LOCALS */
  ecl_cmp_defun(VV[292]);                         /*  REP-TYPE        */
  ecl_cmp_defun(VV[293]);                         /*  T1ORDINARY      */
  ecl_cmp_defun(VV[295]);                         /*  P1ORDINARY      */
  ecl_cmp_defun(VV[296]);                         /*  T2ORDINARY      */
  ecl_cmp_defun(VV[299]);                         /*  ADD-LOAD-TIME-VALUES */
  ecl_cmp_defun(VV[300]);                         /*  T1DEFMACRO      */
  ecl_cmp_defun(VV[303]);                         /*  C1LOAD-TIME-VALUE */
  ecl_cmp_defun(VV[307]);                         /*  T2LOAD-TIME-VALUE */
  ecl_cmp_defun(VV[308]);                         /*  T2MAKE-FORM     */
  ecl_cmp_defun(VV[309]);                         /*  T2INIT-FORM     */
  ecl_cmp_defun(VV[310]);                         /*  PARSE-CVSPECS   */
  ecl_cmp_defun(VV[311]);                         /*  LOCATIVE-TYPE-FROM-VAR-KIND */
  ecl_cmp_defun(VV[312]);                         /*  BUILD-DEBUG-LEXICAL-ENV */
  ecl_cmp_defun(VV[316]);                         /*  POP-DEBUG-LEXICAL-ENV */
  ecl_cmp_defun(VV[317]);                         /*  T3LOCAL-FUN     */
  ecl_cmp_defun(VV[321]);                         /*  T3LOCAL-FUN-BODY */
  ecl_cmp_defun(VV[329]);                         /*  T3LOCAL-FUN-DECLARATION */
  ecl_cmp_defun(VV[336]);                         /*  FUN-CLOSURE-VARIABLES */
  ecl_cmp_defun(VV[341]);                         /*  FUN-LEXICAL-LEVELS */
  ecl_cmp_defun(VV[342]);                         /*  T3LOCAL-FUN-CLOSURE-SCAN */
  ecl_cmp_defun(VV[344]);                         /*  T1FSET          */
  ecl_cmp_defun(VV[345]);                         /*  C1FSET          */
  ecl_cmp_defun(VV[350]);                         /*  P1FSET          */
  ecl_cmp_defun(VV[351]);                         /*  T2FSET          */
  ecl_cmp_defun(VV[352]);                         /*  C2FSET          */
  ecl_cmp_defun(VV[357]);                         /*  OUTPUT-CFUNS    */
}
