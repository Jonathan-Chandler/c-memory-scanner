/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CMP;CMPSTRUCTURES.LSP                             */
#include <ecl/ecl-cmp.h>
#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/cmp/cmpstructures.eclh"
/*      function definition for GET-SLOT-TYPE                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L1get_slot_type(cl_object v1name, cl_object v2index)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = si_get_sysprop(v1name, ECL_SYM("STRUCTURE-SLOT-DESCRIPTIONS",1171));
  T1 = ecl_nth(ecl_to_size(v2index),T0);
  value0 = ecl_caddr(T1);
  if ((value0)!=ECL_NIL) { goto L2; }
  value0 = ECL_T;
  cl_env_copy->nvalues = 1;
  return value0;
L2:;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for MAYBE-OPTIMIZE-STRUCTURE-ACCESS       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L2maybe_optimize_structure_access(cl_object v1fname, cl_object v2args)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3slot_description;
   v3slot_description = si_get_sysprop(v1fname, VV[1]);
   if (Null(v3slot_description)) { goto L2; }
   if (Null(ecl_function_dispatch(cl_env_copy,VV[12])(1, v1fname) /*  INLINE-POSSIBLE */)) { goto L2; }
   if (Null(ecl_function_dispatch(cl_env_copy,VV[13])(0) /*  POLICY-INLINE-SLOT-ACCESS-P */)) { goto L2; }
   {
    cl_object v4structure_type;
    cl_object v5slot_index;
    v4structure_type = ECL_NIL;
    v5slot_index = ECL_NIL;
    if (!(ECL_CONSP(v3slot_description))) { goto L11; }
    v4structure_type = ecl_car(v3slot_description);
    v5slot_index = ecl_cdr(v3slot_description);
    if (Null(v5slot_index)) { goto L11; }
    if (ECL_FIXNUMP(v5slot_index)) { goto L8; }
    goto L9;
L11:;
    goto L9;
L9:;
    ecl_function_dispatch(cl_env_copy,VV[14])(3, VV[2], v1fname, v5slot_index) /*  CMPWARN */;
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
L8:;
    {
     cl_fixnum v6;
     v6 = ecl_length(v2args);
     if ((v6)==(1)) { goto L18; }
    }
    ecl_function_dispatch(cl_env_copy,VV[14])(2, VV[3], v1fname) /*  CMPWARN */;
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
L18:;
    v2args = ecl_car(v2args);
    if (!((v4structure_type)==(ECL_SYM("LIST",483)))) { goto L23; }
    value0 = cl_list(3, ECL_SYM("ELT",329), v2args, v5slot_index);
    return value0;
L23:;
    if (!((v4structure_type)==(ECL_SYM("VECTOR",900)))) { goto L25; }
    value0 = cl_list(3, ECL_SYM("SVREF",840), v2args, v5slot_index);
    return value0;
L25:;
    if (!(ECL_CONSP(v4structure_type))) { goto L27; }
    T0 = cl_list(3, ECL_SYM("THE",858), v4structure_type, v2args);
    value0 = cl_list(3, ECL_SYM("AREF",94), T0, v5slot_index);
    return value0;
L27:;
    T0 = cl_list(2, ECL_SYM("QUOTE",681), v4structure_type);
    value0 = cl_list(3, v2args, T0, v5slot_index);
    return value0;
   }
L2:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function LAMBDA5                                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC3__lambda5(cl_object v1, cl_object v2env)
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
   cl_object v4object;
   cl_object v5structure_name;
   cl_object v6index;
   T0 = ecl_car(v1);
   if (!((T0)==(ECL_SYM("FUNCALL",396)))) { goto L2; }
   T0 = ecl_caadr(v1);
   if (!((T0)==(ECL_SYM("FUNCTION",398)))) { goto L2; }
   v3 = ecl_cddr(v1);
   goto L1;
L2:;
   v3 = ecl_cdr(v1);
L1:;
   if (!(v3==ECL_NIL)) { goto L6; }
   ecl_function_dispatch(cl_env_copy,VV[15])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L6:;
   {
    cl_object v7;
    v7 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4object = v7;
   }
   if (!(v3==ECL_NIL)) { goto L12; }
   ecl_function_dispatch(cl_env_copy,VV[15])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L12:;
   {
    cl_object v7;
    v7 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5structure_name = v7;
   }
   if (!(v3==ECL_NIL)) { goto L18; }
   ecl_function_dispatch(cl_env_copy,VV[15])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L18:;
   {
    cl_object v7;
    v7 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v6index = v7;
   }
   if (Null(v3)) { goto L23; }
   ecl_function_dispatch(cl_env_copy,VV[16])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L23:;
   if (Null(ecl_function_dispatch(cl_env_copy,VV[17])(1, v2env) /*  POLICY-INLINE-SLOT-ACCESS */)) { goto L25; }
   if (Null(cl_constantp(2, v5structure_name, v2env))) { goto L25; }
   if (Null(cl_constantp(2, v6index, v2env))) { goto L25; }
   {
    cl_object v7index;
    cl_object v8aux;
    cl_object v9form;
    v7index = ecl_function_dispatch(cl_env_copy,ECL_SYM("CONSTANT-FORM-VALUE",2118))(2, v6index, v2env) /*  CONSTANT-FORM-VALUE */;
    v8aux = cl_gensym(0);
    T0 = cl_list(2, v8aux, v7index);
    v9form = cl_listX(3, ECL_SYM("C-INLINE",2063), T0, VV[5]);
    if ((ecl_function_dispatch(cl_env_copy,VV[18])(1, v2env) /*  POLICY-ASSUME-NO-ERRORS */)!=ECL_NIL) { goto L32; }
    {
     cl_object v10structure_name;
     v10structure_name = ecl_function_dispatch(cl_env_copy,ECL_SYM("CONSTANT-FORM-VALUE",2118))(2, v5structure_name, v2env) /*  CONSTANT-FORM-VALUE */;
     T0 = cl_list(2, v10structure_name, v9form);
     T1 = cl_list(3, v8aux, v10structure_name, v7index);
     T2 = cl_listX(3, ECL_SYM("C-INLINE",2063), T1, VV[6]);
     T3 = cl_list(2, ECL_T, T2);
     v9form = cl_list(4, ECL_SYM("COMPILER-TYPECASE",1860), v8aux, T0, T3);
    }
L32:;
    T0 = cl_list(2, v8aux, v4object);
    T1 = ecl_list1(T0);
    T2 = cl_list(2, VV[7], v8aux);
    T3 = cl_list(2, ECL_SYM("DECLARE",276), T2);
    value0 = cl_list(4, ECL_SYM("LET",479), T1, T3, v9form);
    return value0;
   }
L25:;
   value0 = v1;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function LAMBDA12                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC4__lambda12(cl_object v1, cl_object v2env)
{
 cl_object T0, T1, T2, T3, T4;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4object;
   cl_object v5structure_name;
   cl_object v6index;
   cl_object v7value;
   T0 = ecl_car(v1);
   if (!((T0)==(ECL_SYM("FUNCALL",396)))) { goto L2; }
   T0 = ecl_caadr(v1);
   if (!((T0)==(ECL_SYM("FUNCTION",398)))) { goto L2; }
   v3 = ecl_cddr(v1);
   goto L1;
L2:;
   v3 = ecl_cdr(v1);
L1:;
   if (!(v3==ECL_NIL)) { goto L6; }
   ecl_function_dispatch(cl_env_copy,VV[15])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L6:;
   {
    cl_object v8;
    v8 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4object = v8;
   }
   if (!(v3==ECL_NIL)) { goto L12; }
   ecl_function_dispatch(cl_env_copy,VV[15])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L12:;
   {
    cl_object v8;
    v8 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5structure_name = v8;
   }
   if (!(v3==ECL_NIL)) { goto L18; }
   ecl_function_dispatch(cl_env_copy,VV[15])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L18:;
   {
    cl_object v8;
    v8 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v6index = v8;
   }
   if (!(v3==ECL_NIL)) { goto L24; }
   ecl_function_dispatch(cl_env_copy,VV[15])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L24:;
   {
    cl_object v8;
    v8 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v7value = v8;
   }
   if (Null(v3)) { goto L29; }
   ecl_function_dispatch(cl_env_copy,VV[16])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L29:;
   if (Null(ecl_function_dispatch(cl_env_copy,VV[17])(1, v2env) /*  POLICY-INLINE-SLOT-ACCESS */)) { goto L31; }
   if (Null(cl_constantp(2, v5structure_name, v2env))) { goto L31; }
   if (Null(cl_constantp(2, v6index, v2env))) { goto L31; }
   {
    cl_object v8index;
    cl_object v9aux;
    cl_object v10form;
    v8index = ecl_function_dispatch(cl_env_copy,ECL_SYM("CONSTANT-FORM-VALUE",2118))(2, v6index, v2env) /*  CONSTANT-FORM-VALUE */;
    v9aux = cl_gensym(0);
    T0 = cl_list(3, v9aux, v8index, v7value);
    v10form = cl_listX(3, ECL_SYM("C-INLINE",2063), T0, VV[8]);
    if ((ecl_function_dispatch(cl_env_copy,VV[18])(1, v2env) /*  POLICY-ASSUME-NO-ERRORS */)!=ECL_NIL) { goto L38; }
    {
     cl_object v11structure_name;
     v11structure_name = ecl_function_dispatch(cl_env_copy,ECL_SYM("CONSTANT-FORM-VALUE",2118))(2, v5structure_name, v2env) /*  CONSTANT-FORM-VALUE */;
     T0 = cl_list(2, v11structure_name, v10form);
     T1 = cl_list(2, ECL_SYM("QUOTE",681), v11structure_name);
     T2 = cl_list(4, v9aux, T1, v8index, v7value);
     T3 = cl_listX(3, ECL_SYM("C-INLINE",2063), T2, VV[9]);
     T4 = cl_list(2, ECL_T, T3);
     v10form = cl_list(4, ECL_SYM("COMPILER-TYPECASE",1860), v9aux, T0, T4);
    }
L38:;
    T0 = cl_list(2, v9aux, v4object);
    T1 = ecl_list1(T0);
    T2 = cl_list(2, VV[7], v9aux);
    T3 = cl_list(2, ECL_SYM("DECLARE",276), T2);
    value0 = cl_list(4, ECL_SYM("LET",479), T1, T3, v10form);
    return value0;
   }
L31:;
   value0 = v1;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}

#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/cmp/cmpstructures.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclHBxIaea7_o8a6lq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CMP;CMPSTRUCTURES.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclHBxIaea7_o8a6lq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  ecl_cmp_defun(VV[10]);                          /*  GET-SLOT-TYPE   */
  ecl_cmp_defun(VV[11]);                          /*  MAYBE-OPTIMIZE-STRUCTURE-ACCESS */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC3__lambda5,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_put_sysprop(ECL_SYM("STRUCTURE-REF",1169), ECL_SYM("COMPILER-MACRO",240), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC4__lambda12,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_put_sysprop(ECL_SYM("STRUCTURE-SET",1170), ECL_SYM("COMPILER-MACRO",240), T0);
 }
}
