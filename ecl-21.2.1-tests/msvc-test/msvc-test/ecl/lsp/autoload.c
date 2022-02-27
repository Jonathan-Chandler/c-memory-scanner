/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:LSP;AUTOLOAD.LSP                                  */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/build/lsp/autoload.eclh"
/*      function definition for LISP-IMPLEMENTATION-TYPE              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_lisp_implementation_type()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = VV[0];
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for AUTOLOAD                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L2autoload(cl_narg narg, cl_object v1pathname, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2si__function_names;
  ecl_va_list args; ecl_va_start(args,v1pathname,narg,1);
  env0 = ECL_NIL;
  CLV0 = env0 = CONS(v1pathname,env0);            /*  PATHNAME        */
  v2si__function_names = cl_grab_rest_args(args);
  ecl_va_end(args);
  {
   cl_object v3;
   v3 = v2si__function_names;
   goto L4;
L3:;
   {
    cl_object v4si__fname;
    v4si__fname = ecl_car(v3);
    {
     cl_object env1 = env0;
     CLV1 = env1 = CONS(v4si__fname,env1);        /*  THENAME         */
     {
      cl_object v5;
      v5 = ecl_make_cclosure_va((cl_objectfn)LC1__lambda3,env1,Cblock,0);
      T0 = v5;
     }
     si_fset(2, v4si__fname, T0);
    }
   }
   v3 = ecl_cdr(v3);
L4:;
   if (Null(v3)) { goto L12; }
   goto L3;
L12:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      closure LAMBDA3                                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC1__lambda3(cl_narg narg, ...)
{
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV1 = env0;                                     /*  THENAME         */
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 {
  cl_object v1si__args;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  v1si__args = cl_grab_rest_args(args);
  ecl_va_end(args);
  cl_load(1, ECL_CONS_CAR(CLV0));
  value0 = cl_apply(2, ECL_CONS_CAR(CLV1), v1si__args);
  return value0;
 }
 }
}
/*      local function PROCLAIM                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC3proclaim(cl_object v1si__d)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_car(v1si__d);
  if (!((T0)==(ECL_SYM("SPECIAL",791)))) { goto L1; }
  {
   cl_object v2;
   v2 = (ECL_SYM("*MAKE-SPECIAL",1029)->symbol.gfdef);
   {
    cl_object v3;
    v3 = ecl_cdr(v1si__d);
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
L9:;
     if (!(ecl_endp(v5))) { goto L11; }
     goto L10;
L11:;
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
     goto L9;
L10:;
     value0 = v3;
     cl_env_copy->nvalues = 1;
     return value0;
    }
   }
  }
L1:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function WITH-COMPILATION-UNIT                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC4with_compilation_unit(cl_object v1, cl_object v2)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4si__options;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[14])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v5;
    v5 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4si__options = v5;
   }
   value0 = CONS(ECL_SYM("PROGN",673),v3);
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for ED                                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L5ed(cl_narg narg, ...)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg>1)) FEwrong_num_arguments_anonym();
 {
  cl_object v1si__filename;
  va_list args; va_start(args,narg);
  {
   int i = 0;
   if (i >= narg) {
    v1si__filename = ECL_NIL;
   } else {
    i++;
    v1si__filename = va_arg(args,cl_object);
   }
  }
  va_end(args);
  value0 = si_getenv(VV[4]);
  if ((value0)!=ECL_NIL) { goto L4; }
  T0 = VV[5];
  goto L2;
L4:;
  T0 = value0;
  goto L2;
L2:;
  T1 = cl_format(4, ECL_NIL, VV[3], T0, v1si__filename);
  value0 = si_system(T1);
  return value0;
 }
}
/*      function definition for ROOM                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L6room(cl_narg narg, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg>1)) FEwrong_num_arguments_anonym();
 {
  cl_object v1si__x;
  va_list args; va_start(args,narg);
  {
   int i = 0;
   if (i >= narg) {
    v1si__x = ECL_NIL;
   } else {
    i++;
    v1si__x = va_arg(args,cl_object);
   }
  }
  va_end(args);
  cl_format(2, ECL_T, VV[7]);
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 0;
  return value0;
 }
}
/*      function definition for HELP                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L7help(cl_narg narg, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg>1)) FEwrong_num_arguments_anonym();
 {
  cl_object v1symbol;
  va_list args; va_start(args,narg);
  {
   int i = 0;
   if (i >= narg) {
    v1symbol = VV[11];
   } else {
    i++;
    v1symbol = va_arg(args,cl_object);
   }
  }
  va_end(args);
  value0 = ecl_function_dispatch(cl_env_copy,VV[18])(1, v1symbol) /*  PRINT-DOC */;
  return value0;
 }
}

#include "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/build/lsp/autoload.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclAmMBmKb7_u8dZTr51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:LSP;AUTOLOAD.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclAmMBmKb7_u8dZTr51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  (void)0; /* No entry created for LISP-IMPLEMENTATION-TYPE */
  ecl_cmp_defun(VV[12]);                          /*  AUTOLOAD        */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  if ((cl_fboundp(ECL_SYM("COMPILE",235)))!=ECL_NIL) { goto L10; }
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC3proclaim,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  si_fset(2, ECL_SYM("PROCLAIM",668), T0);
L10:;
 }
  ecl_cmp_defmacro(VV[13]);                       /*  WITH-COMPILATION-UNIT */
  ecl_cmp_defun(VV[15]);                          /*  ED              */
  ecl_cmp_defun(VV[16]);                          /*  ROOM            */
  L2autoload(3, VVtemp[1], VV[9], VV[10]);
  ecl_cmp_defun(VV[17]);                          /*  HELP            */
  si_select_package(VVtemp[2]);
  cl_import(1, VVtemp[3]);
}
