/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CMP;CMPTYPE-PROP.LSP                              */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/build/cmp/cmptype-prop.eclh"
/*      function definition for INFER-ARG-AND-RETURN-TYPES            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L1infer_arg_and_return_types(cl_narg narg, cl_object v1fname, cl_object v2forms, ...)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>3)) FEwrong_num_arguments_anonym();
 {
  cl_object v3env;
  va_list args; va_start(args,v2forms);
  {
   int i = 2;
   if (i >= narg) {
    v3env = ecl_symbol_value(VV[0]);
   } else {
    i++;
    v3env = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v4;
   cl_object v5found;
   cl_object v6arg_types;
   cl_object v7return_type;
   v4 = ecl_gethash_safe(v1fname,ecl_symbol_value(VV[1]),ECL_NIL);
   v5found = v4;
   v6arg_types = ECL_NIL;
   v7return_type = VV[2];
   if (Null(v5found)) { goto L7; }
   {
    cl_object v8;
    v8 = ecl_fdefinition(VV[18]);
    {
     cl_object v9;
     cl_object v10;
     v9 = ECL_NIL;
     {
      cl_object v11;
      v11 = v2forms;
      if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v10 = v11;
     }
     {
      cl_object v11;
      cl_object v12;
      v11 = ecl_list1(ECL_NIL);
      v12 = v11;
L18:;
      if (!(ecl_endp(v10))) { goto L20; }
      goto L19;
L20:;
      v9 = _ecl_car(v10);
      {
       cl_object v13;
       v13 = _ecl_cdr(v10);
       if (ecl_unlikely(!ECL_LISTP(v13))) FEtype_error_list(v13);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v10 = v13;
      }
      {
       cl_object v13;
       v13 = v12;
       if (ecl_unlikely(ECL_ATOM(v13))) FEtype_error_cons(v13);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       T1 = v13;
      }
      T2 = ecl_function_dispatch(cl_env_copy,v8)(1, v9);
      v12 = ecl_list1(T2);
      (ECL_CONS_CDR(T1)=v12,T1);
      goto L18;
L19:;
      T0 = ecl_cdr(v11);
      goto L10;
     }
    }
   }
L10:;
   value0 = cl_apply(3, v5found, v1fname, T0);
   {
    const int v8 = cl_env_copy->nvalues;
    v6arg_types = value0;
    cl_object v9;
    v9 = (v8<=1)? ECL_NIL : cl_env_copy->values[1];
    v7return_type = v9;
   }
   goto L6;
L7:;
   value0 = ecl_function_dispatch(cl_env_copy,VV[19])(2, v1fname, v3env) /*  GET-ARG-TYPES */;
   {
    const int v8 = cl_env_copy->nvalues;
    v6arg_types = value0;
    cl_object v9;
    v9 = (v8<=1)? ECL_NIL : cl_env_copy->values[1];
    v5found = v9;
   }
   if (Null(value0)) { goto L6; }
   value0 = ecl_function_dispatch(cl_env_copy,VV[20])(1, v1fname) /*  GET-RETURN-TYPE */;
   if ((value0)!=ECL_NIL) { goto L40; }
   goto L38;
L40:;
   v7return_type = value0;
   goto L38;
L38:;
L6:;
   cl_env_copy->nvalues = 3;
   cl_env_copy->values[2] = v5found;
   cl_env_copy->values[1] = v7return_type;
   cl_env_copy->values[0] = v6arg_types;
   return cl_env_copy->values[0];
  }
 }
}
/*      function definition for ENFORCE-TYPES                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L2enforce_types(cl_object v1fname, cl_object v2arg_types, cl_object v3arguments)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v4types;
   cl_object v5args;
   cl_object v6i;
   cl_object v7in_optionals;
   v4types = v2arg_types;
   v5args = v3arguments;
   v6i = ecl_make_fixnum(1);
   v7in_optionals = ECL_NIL;
   goto L7;
L6:;
   {
    cl_object v8expected_type;
    v8expected_type = ecl_car(v4types);
    if (!((v8expected_type)==(ECL_SYM("*",20)))) { goto L16; }
    goto L13;
    goto L14;
L16:;
    goto L14;
L14:;
    if (!((v8expected_type)==(ECL_SYM("&REST",14)))) { goto L20; }
    goto L13;
    goto L18;
L20:;
    goto L18;
L18:;
    if (!((v8expected_type)==(ECL_SYM("&KEY",12)))) { goto L24; }
    goto L13;
    goto L22;
L24:;
    goto L22;
L22:;
    if (!((v8expected_type)==(ECL_SYM("&ALLOW-OTHER-KEYS",8)))) { goto L11; }
    goto L12;
L13:;
L12:;
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
L11:;
    if (!((v8expected_type)==(ECL_SYM("&OPTIONAL",13)))) { goto L27; }
    if (Null(v7in_optionals)) { goto L29; }
    ecl_function_dispatch(cl_env_copy,VV[22])(3, VV[8], v1fname, v2arg_types) /*  CMPWARN */;
L29:;
    v7in_optionals = ECL_T;
    v4types = ecl_cdr(v4types);
    goto L9;
L27:;
    if (!(ecl_endp(v5args))) { goto L34; }
    if ((v7in_optionals)!=ECL_NIL) { goto L36; }
    ecl_function_dispatch(cl_env_copy,VV[22])(2, VV[9], v1fname) /*  CMPWARN */;
L36:;
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
L34:;
    {
     cl_object v9value;
     cl_object v10actual_type;
     cl_object v11intersection;
     v9value = ecl_car(v5args);
     v10actual_type = ecl_function_dispatch(cl_env_copy,VV[18])(1, v9value) /*  LOCATION-PRIMARY-TYPE */;
     v11intersection = ecl_function_dispatch(cl_env_copy,VV[23])(2, v10actual_type, v8expected_type) /*  TYPE-AND */;
     if ((v11intersection)!=ECL_NIL) { goto L41; }
     ecl_function_dispatch(cl_env_copy,VV[24])(5, VV[10], v6i, v1fname, v10actual_type, v8expected_type) /*  CMPWARN-STYLE */;
L41:;
     T0 = ecl_function_dispatch(cl_env_copy,VV[25])(1, ECL_SYM("SAFETY",736)) /*  CMP-ENV-OPTIMIZATION */;
     if (!(ecl_zerop(T0))) { goto L9; }
     ecl_structure_set(v9value,VV[11],1,v11intersection);
    }
   }
L9:;
   v4types = ecl_cdr(v4types);
   v5args = ecl_cdr(v5args);
   v6i = ecl_one_plus(v6i);
L7:;
   if (ecl_endp(v4types)) { goto L50; }
   goto L6;
L50:;
   if (Null(v4types)) { goto L52; }
   value0 = ecl_function_dispatch(cl_env_copy,VV[22])(2, VV[12], v1fname) /*  CMPWARN */;
   return value0;
L52:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for PROPAGATE-TYPES                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L3propagate_types(cl_object v1fname, cl_object v2forms)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v4;                                  /*  ARG-TYPES       */
   cl_object v5;                                  /*  RETURN-TYPE     */
   cl_object v6;                                  /*  FOUND           */
   value0 = L1infer_arg_and_return_types(2, v1fname, v2forms);
   {
    const int v7 = cl_env_copy->nvalues;
    v4 = value0;
    cl_object v8;
    v8 = (v7<=1)? ECL_NIL : cl_env_copy->values[1];
    v5 = v8;
    v8 = (v7<=2)? ECL_NIL : cl_env_copy->values[2];
    v6 = v8;
   }
   if (Null(v6)) { goto L2; }
   L2enforce_types(v1fname, v4, v2forms);
L2:;
   value0 = v5;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function DEF-TYPE-PROPAGATOR                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC4def_type_propagator(cl_object v1, cl_object v2)
{
 cl_object T0, T1, T2, T3, T4, T5, T6;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4fname;
   cl_object v5lambda_list;
   cl_object v6body;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[28])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v7;
    v7 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4fname = v7;
   }
   if (!(v3==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[28])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v7;
    v7 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5lambda_list = v7;
   }
   v6body = v3;
   if ((ecl_memql(ECL_SYM("&REST",14),v5lambda_list))!=ECL_NIL) { goto L15; }
   {
    cl_object v7var;
    v7var = cl_gensym(0);
    T0 = cl_list(2, ECL_SYM("&REST",14), v7var);
    v5lambda_list = ecl_append(v5lambda_list,T0);
    T0 = cl_list(2, ECL_SYM("IGNORABLE",429), v7var);
    T1 = cl_list(2, ECL_SYM("DECLARE",276), T0);
    v6body = CONS(T1,v6body);
   }
L15:;
   T0 = cl_list(2, ECL_SYM("QUOTE",681), v4fname);
   T1 = cl_list(3, ECL_SYM("GETHASH",415), T0, VV[1]);
   T2 = ecl_car(v5lambda_list);
   T3 = cl_list(2, ECL_SYM("IGNORABLE",429), T2);
   T4 = cl_list(2, ECL_SYM("DECLARE",276), T3);
   T5 = cl_listX(4, ECL_SYM("LAMBDA",454), v5lambda_list, T4, v6body);
   T6 = cl_list(2, ECL_SYM("FUNCTION",398), T5);
   value0 = cl_list(3, ECL_SYM("SETF",752), T1, T6);
   return value0;
  }
 }
}
/*      function definition for COPY-TYPE-PROPAGATOR                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L5copy_type_propagator(cl_object v1orig, cl_object v2dest_list)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3function;
   v3function = ecl_gethash_safe(v1orig,ecl_symbol_value(VV[1]),ECL_NIL);
   {
    cl_object v4name;
    cl_object v5;
    v4name = ECL_NIL;
    {
     cl_object v6;
     v6 = v2dest_list;
     if (ecl_unlikely(!ECL_LISTP(v6))) FEtype_error_list(v6);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v5 = v6;
    }
L6:;
    if (!(ecl_endp(v5))) { goto L8; }
    goto L7;
L8:;
    v4name = _ecl_car(v5);
    {
     cl_object v6;
     v6 = _ecl_cdr(v5);
     if (ecl_unlikely(!ECL_LISTP(v6))) FEtype_error_list(v6);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v5 = v6;
    }
    if (Null(v3function)) { goto L16; }
    si_hash_set(v4name, ecl_symbol_value(VV[1]), v3function);
L16:;
    goto L6;
L7:;
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}

#include "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/build/cmp/cmptype-prop.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclRr0g2oa7_qtnZTr51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CMP;CMPTYPE-PROP.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclRr0g2oa7_qtnZTr51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  ecl_cmp_defun(VV[17]);                          /*  INFER-ARG-AND-RETURN-TYPES */
  ecl_cmp_defun(VV[21]);                          /*  ENFORCE-TYPES   */
  ecl_cmp_defun(VV[26]);                          /*  PROPAGATE-TYPES */
  ecl_cmp_defmacro(VV[27]);                       /*  DEF-TYPE-PROPAGATOR */
  ecl_cmp_defun(VV[29]);                          /*  COPY-TYPE-PROPAGATOR */
}
