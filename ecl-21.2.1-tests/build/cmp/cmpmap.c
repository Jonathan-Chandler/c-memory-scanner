/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CMP;CMPMAP.LSP                                    */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/cmp/cmpmap.eclh"
/*      function definition for EXPAND-MAPCAR                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L1expand_mapcar(cl_object v1whole)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_fixnum v2;
   v2 = ecl_length(v1whole);
   if (!((v2)<(3))) { goto L1; }
  }
  T0 = ecl_car(v1whole);
  ecl_function_dispatch(cl_env_copy,VV[10])(3, VV[0], T0, v1whole) /*  CMPWARN */;
  T0 = ecl_car(v1whole);
  T1 = cl_list(2, ECL_SYM("QUOTE",681), T0);
  T2 = cl_list(2, ECL_SYM("QUOTE",681), v1whole);
  value0 = cl_list(4, ECL_SYM("SIMPLE-PROGRAM-ERROR",1159), VV[0], T1, T2);
  return value0;
L1:;
  {
   cl_object v2which;
   v2which = ecl_car(v1whole);
   if (!((v2which)==(ECL_SYM("FUNCALL",396)))) { goto L5; }
   v1whole = ecl_cdr(v1whole);
   v2which = ecl_car(v1whole);
   if (!(ECL_CONSP(v2which))) { goto L5; }
   T0 = ecl_car(v2which);
   if (!((T0)==(ECL_SYM("FUNCTION",398)))) { goto L12; }
   v2which = ecl_cadr(v2which);
   goto L5;
L12:;
   value0 = v1whole;
   cl_env_copy->nvalues = 1;
   return value0;
L5:;
   {
    cl_object v3function;
    cl_object v4fun_with;
    cl_object v5args;
    cl_object v6iterators;
    cl_object v7for_statements;
    cl_object v8in_or_on;
    cl_object v9do_or_collect;
    cl_object v10list_1_form;
    cl_object v11finally_form;
    v3function = cl_gensym(0);
    T0 = ecl_cadr(v1whole);
    v4fun_with = cl_list(4, VV[1], v3function, ECL_SYM("=",76), T0);
    v5args = ecl_cddr(v1whole);
    v6iterators = ECL_NIL;
    v7for_statements = ECL_NIL;
    v8in_or_on = VV[2];
    v9do_or_collect = VV[3];
    v10list_1_form = ECL_NIL;
    v11finally_form = ECL_NIL;
    if ((v2which)==(ECL_SYM("MAPCAR",547))) { goto L24; }
    if (!((v2which)==(ECL_SYM("MAPLIST",551)))) { goto L26; }
    v8in_or_on = VV[4];
    goto L24;
L26:;
    if (!((v2which)==(ECL_SYM("MAPC",545)))) { goto L29; }
    v9do_or_collect = VV[5];
    goto L24;
L29:;
    if (!((v2which)==(ECL_SYM("MAPL",550)))) { goto L32; }
    v8in_or_on = VV[4];
    v9do_or_collect = VV[5];
    goto L24;
L32:;
    if (!((v2which)==(ECL_SYM("MAPCAN",546)))) { goto L37; }
    v9do_or_collect = ECL_SYM("NCONC",583);
    goto L24;
L37:;
    if (!((v2which)==(ECL_SYM("MAPCON",548)))) { goto L24; }
    v8in_or_on = VV[4];
    v9do_or_collect = ECL_SYM("NCONC",583);
L24:;
    if (!((v9do_or_collect)==(VV[5]))) { goto L44; }
    {
     cl_object v12var;
     v12var = cl_gensym(0);
     T0 = ecl_car(v5args);
     v10list_1_form = cl_list(4, VV[1], v12var, ECL_SYM("=",76), T0);
     T0 = ecl_cdr(v5args);
     v5args = CONS(v12var,T0);
     T0 = cl_list(2, ECL_SYM("RETURN",726), v12var);
     v11finally_form = cl_list(2, VV[6], T0);
    }
L44:;
    {
     cl_object v12;
     cl_object v13arg;
     cl_object v14;
     v12 = cl_reverse(v5args);
     v13arg = ECL_NIL;
     {
      cl_object v15;
      v15 = v12;
      if (ecl_unlikely(!ECL_LISTP(v15))) FEtype_error_list(v15);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v14 = v15;
     }
L58:;
     if (!(ecl_endp(v14))) { goto L60; }
     goto L59;
L60:;
     v13arg = _ecl_car(v14);
     {
      cl_object v15;
      v15 = _ecl_cdr(v14);
      if (ecl_unlikely(!ECL_LISTP(v15))) FEtype_error_list(v15);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v14 = v15;
     }
     {
      cl_object v15var;
      v15var = cl_gensym(0);
      v6iterators = CONS(v15var,v6iterators);
      v7for_statements = cl_listX(5, VV[7], v15var, v8in_or_on, v13arg, v7for_statements);
     }
     goto L58;
L59:;
    }
    T0 = cl_listX(3, ECL_SYM("FUNCALL",396), v3function, v6iterators);
    T1 = cl_listX(3, v9do_or_collect, T0, v11finally_form);
    T2 = cl_append(4, v4fun_with, v10list_1_form, v7for_statements, T1);
    value0 = CONS(ECL_SYM("LOOP",514),T2);
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      local function LAMBDA22                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC2__lambda22(cl_object v1, cl_object v2)
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
   T0 = ecl_car(v1);
   if (!((T0)==(ECL_SYM("FUNCALL",396)))) { goto L2; }
   T0 = ecl_caadr(v1);
   if (!((T0)==(ECL_SYM("FUNCTION",398)))) { goto L2; }
   v3 = ecl_cddr(v1);
   goto L1;
L2:;
   v3 = ecl_cdr(v1);
L1:;
   value0 = L1expand_mapcar(v1);
   return value0;
  }
 }
}
/*      local function LAMBDA26                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC3__lambda26(cl_object v1, cl_object v2)
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
   T0 = ecl_car(v1);
   if (!((T0)==(ECL_SYM("FUNCALL",396)))) { goto L2; }
   T0 = ecl_caadr(v1);
   if (!((T0)==(ECL_SYM("FUNCTION",398)))) { goto L2; }
   v3 = ecl_cddr(v1);
   goto L1;
L2:;
   v3 = ecl_cdr(v1);
L1:;
   value0 = L1expand_mapcar(v1);
   return value0;
  }
 }
}
/*      local function LAMBDA30                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC4__lambda30(cl_object v1, cl_object v2)
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
   T0 = ecl_car(v1);
   if (!((T0)==(ECL_SYM("FUNCALL",396)))) { goto L2; }
   T0 = ecl_caadr(v1);
   if (!((T0)==(ECL_SYM("FUNCTION",398)))) { goto L2; }
   v3 = ecl_cddr(v1);
   goto L1;
L2:;
   v3 = ecl_cdr(v1);
L1:;
   value0 = L1expand_mapcar(v1);
   return value0;
  }
 }
}
/*      local function LAMBDA34                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC5__lambda34(cl_object v1, cl_object v2)
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
   T0 = ecl_car(v1);
   if (!((T0)==(ECL_SYM("FUNCALL",396)))) { goto L2; }
   T0 = ecl_caadr(v1);
   if (!((T0)==(ECL_SYM("FUNCTION",398)))) { goto L2; }
   v3 = ecl_cddr(v1);
   goto L1;
L2:;
   v3 = ecl_cdr(v1);
L1:;
   value0 = L1expand_mapcar(v1);
   return value0;
  }
 }
}
/*      local function LAMBDA38                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC6__lambda38(cl_object v1, cl_object v2)
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
   T0 = ecl_car(v1);
   if (!((T0)==(ECL_SYM("FUNCALL",396)))) { goto L2; }
   T0 = ecl_caadr(v1);
   if (!((T0)==(ECL_SYM("FUNCTION",398)))) { goto L2; }
   v3 = ecl_cddr(v1);
   goto L1;
L2:;
   v3 = ecl_cdr(v1);
L1:;
   value0 = L1expand_mapcar(v1);
   return value0;
  }
 }
}
/*      local function LAMBDA42                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC7__lambda42(cl_object v1, cl_object v2)
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
   T0 = ecl_car(v1);
   if (!((T0)==(ECL_SYM("FUNCALL",396)))) { goto L2; }
   T0 = ecl_caadr(v1);
   if (!((T0)==(ECL_SYM("FUNCTION",398)))) { goto L2; }
   v3 = ecl_cddr(v1);
   goto L1;
L2:;
   v3 = ecl_cdr(v1);
L1:;
   value0 = L1expand_mapcar(v1);
   return value0;
  }
 }
}

#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/cmp/cmpmap.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _ecl8oUzcib7_MNTmqq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CMP;CMPMAP.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_ecl8oUzcib7_MNTmqq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  ecl_cmp_defun(VV[9]);                           /*  EXPAND-MAPCAR   */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC2__lambda22,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_put_sysprop(ECL_SYM("MAPCAR",547), ECL_SYM("COMPILER-MACRO",240), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC3__lambda26,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_put_sysprop(ECL_SYM("MAPC",545), ECL_SYM("COMPILER-MACRO",240), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC4__lambda30,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_put_sysprop(ECL_SYM("MAPCAN",546), ECL_SYM("COMPILER-MACRO",240), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC5__lambda34,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_put_sysprop(ECL_SYM("MAPLIST",551), ECL_SYM("COMPILER-MACRO",240), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC6__lambda38,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_put_sysprop(ECL_SYM("MAPL",550), ECL_SYM("COMPILER-MACRO",240), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC7__lambda42,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_put_sysprop(ECL_SYM("MAPCON",548), ECL_SYM("COMPILER-MACRO",240), T0);
 }
}
