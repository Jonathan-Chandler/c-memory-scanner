/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CLOS;BUILTIN.LSP                                  */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/clos/builtin.eclh"
/*      local function MAKE-INSTANCE                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC1make_instance(cl_narg narg, cl_object v1class, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  value0 = cl_error(2, VV[0], v1class);
  return value0;
 }
}
/*      local function ENSURE-CLASS-USING-CLASS                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC2ensure_class_using_class(cl_narg narg, cl_object v1class, cl_object v2name, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 {
  cl_object v3rest;
  ecl_va_list args; ecl_va_start(args,v2name,narg,2);
  v3rest = cl_grab_rest_args(args);
  ecl_va_end(args);
  {
   cl_object v5;                                  /*  METACLASS       */
   cl_object v6;                                  /*  OPTIONS         */
   T0 = (VV[14]->symbol.gfdef);
   value0 = cl_apply(2, T0, v3rest);
   {
    const int v7 = cl_env_copy->nvalues;
    v5 = value0;
    cl_object v8;
    v8 = (v7<=2)? ECL_NIL : cl_env_copy->values[2];
    v6 = v8;
   }
   T0 = (ECL_SYM("MAKE-INSTANCE",951)->symbol.gfdef);
   v1class = cl_apply(5, T0, v5, ECL_SYM("NAME",1300), v2name, v6);
   if (Null(v2name)) { goto L6; }
   ecl_function_dispatch(cl_env_copy,ECL_SYM("CREATE-TYPE-NAME",1646))(1, v2name) /*  CREATE-TYPE-NAME */;
   value0 = ecl_function_dispatch(cl_env_copy,VV[15])(2, v1class, v2name) /*  SETF-FIND-CLASS */;
   return value0;
L6:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function CHANGE-CLASS                                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC3change_class(cl_narg narg, cl_object v1instance, cl_object v2new_class, ...)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 {
  cl_object v3initargs;
  ecl_va_list args; ecl_va_start(args,v2new_class,narg,2);
  v3initargs = cl_grab_rest_args(args);
  ecl_va_end(args);
  T0 = (ECL_SYM("CHANGE-CLASS",934)->symbol.gfdef);
  T1 = cl_find_class(1, v2new_class);
  value0 = cl_apply(4, T0, v1instance, T1, v3initargs);
  return value0;
 }
}
/*      local function MAKE-INSTANCES-OBSOLETE                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC4make_instances_obsolete(cl_object v1class)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_find_class(1, v1class);
  (cl_env_copy->function=(ECL_SYM("MAKE-INSTANCES-OBSOLETE",952)->symbol.gfdef))->cfun.entry(1, T0) /*  MAKE-INSTANCES-OBSOLETE */;
  value0 = v1class;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function MAKE-INSTANCE                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC5make_instance(cl_narg narg, cl_object v1class_name, ...)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2initargs;
  ecl_va_list args; ecl_va_start(args,v1class_name,narg,1);
  v2initargs = cl_grab_rest_args(args);
  ecl_va_end(args);
  T0 = (ECL_SYM("MAKE-INSTANCE",951)->symbol.gfdef);
  T1 = cl_find_class(1, v1class_name);
  value0 = cl_apply(3, T0, T1, v2initargs);
  return value0;
 }
}
/*      local function SLOT-MAKUNBOUND-USING-CLASS                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC6slot_makunbound_using_class(cl_object v1class, cl_object v2self, cl_object v3slotd)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_error(1, VV[2]);
  return value0;
 }
}
/*      local function SLOT-BOUNDP-USING-CLASS                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC7slot_boundp_using_class(cl_object v1class, cl_object v2self, cl_object v3slotd)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_error(1, VV[3]);
  return value0;
 }
}
/*      local function SLOT-VALUE-USING-CLASS                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC8slot_value_using_class(cl_object v1class, cl_object v2self, cl_object v3slotd)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_error(1, VV[4]);
  return value0;
 }
}
/*      local function (SETF SLOT-VALUE-USING-CLASS)                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC9_setf_slot_value_using_class_(cl_object v1val, cl_object v2class, cl_object v3self, cl_object v4slotd)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_error(1, VV[4]);
  return value0;
 }
}
/*      local function SLOT-EXISTS-P-USING-CLASS                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC10slot_exists_p_using_class(cl_object v1class, cl_object v2self, cl_object v3slotd)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function ALLOCATE-INSTANCE                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC11allocate_instance(cl_narg narg, cl_object v1class, ...)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  T0 = (ECL_SYM("MAKE-STRUCTURE",1109)->symbol.gfdef);
  T1 = ecl_function_dispatch(cl_env_copy,VV[16])(1, v1class) /*  CLASS-SIZE */;
  T2 = cl_make_list(3, T1, ECL_SYM("INITIAL-ELEMENT",1277), ECL_NIL);
  value0 = cl_apply(3, T0, v1class, T2);
  return value0;
 }
}
/*      local function FINALIZE-INHERITANCE                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC12finalize_inheritance(cl_object v1class)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(ecl_function_dispatch(cl_env_copy,ECL_SYM("CLASS-FINALIZED-P",1552))(1, v1class) /*  CLASS-FINALIZED-P */)) { goto L1; }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  if (Null(ecl_symbol_value(ECL_SYM("*NEXT-METHODS*",1536)))) { goto L4; }
  T0 = ecl_car(ecl_symbol_value(ECL_SYM("*NEXT-METHODS*",1536)));
  T1 = ecl_cdr(ecl_symbol_value(ECL_SYM("*NEXT-METHODS*",1536)));
  ecl_function_dispatch(cl_env_copy,T0)(2, ecl_symbol_value(ECL_SYM(".COMBINED-METHOD-ARGS.",1534)), T1);
  goto L3;
L4:;
  cl_error(1, VV[6]);
L3:;
  {
   cl_object v2;
   v2 = ecl_function_dispatch(cl_env_copy,ECL_SYM("CLASS-SLOTS",1555))(1, v1class) /*  CLASS-SLOTS */;
   goto L10;
L9:;
   {
    cl_object v3slot;
    v3slot = ecl_car(v2);
    T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-ALLOCATION",1604))(1, v3slot) /*  SLOT-DEFINITION-ALLOCATION */;
    if ((ECL_SYM("INSTANCE",1282))==(T0)) { goto L14; }
    T0 = (cl_env_copy->function=(ECL_SYM("CLASS-NAME",936)->symbol.gfdef))->cfun.entry(1, v1class) /*  CLASS-NAME */;
    cl_error(2, VV[7], T0);
L14:;
   }
   v2 = ecl_cdr(v2);
L10:;
   if (Null(v2)) { goto L18; }
   goto L9;
L18:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function MAKE-LOAD-FORM                                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC13make_load_form(cl_narg narg, cl_object v1object, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2environment;
  va_list args; va_start(args,v1object);
  {
   int i = 1;
   if (i >= narg) {
    v2environment = ECL_NIL;
   } else {
    i++;
    v2environment = va_arg(args,cl_object);
   }
  }
  va_end(args);
  value0 = (cl_env_copy->function=(ECL_SYM("MAKE-LOAD-FORM-SAVING-SLOTS",954)->symbol.gfdef))->cfun.entry(3, v1object, ECL_SYM("KEY",1288), v2environment) /*  MAKE-LOAD-FORM-SAVING-SLOTS */;
  return value0;
 }
}
/*      local function PRINT-OBJECT                                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC14print_object(cl_object v1obj, cl_object v2stream)
{
 cl_object T0, T1, T2, T3, T4;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3class;
   cl_object v4slotds;
   v3class = si_instance_class(v1obj);
   v4slotds = ecl_function_dispatch(cl_env_copy,ECL_SYM("CLASS-SLOTS",1555))(1, v3class) /*  CLASS-SLOTS */;
   if ((ecl_symbol_value(ECL_SYM("*PRINT-READABLY*",59)))!=ECL_NIL) { goto L3; }
   if (Null(ecl_symbol_value(ECL_SYM("*PRINT-LEVEL*",53)))) { goto L3; }
   if (!(ecl_zerop(ecl_symbol_value(ECL_SYM("*PRINT-LEVEL*",53))))) { goto L3; }
   cl_write_string(2, VV[8], v2stream);
   value0 = v1obj;
   cl_env_copy->nvalues = 1;
   return value0;
L3:;
   cl_write_string(2, VV[9], v2stream);
   T0 = (cl_env_copy->function=(ECL_SYM("CLASS-NAME",936)->symbol.gfdef))->cfun.entry(1, v3class) /*  CLASS-NAME */;
   ecl_prin1(T0,v2stream);
   if (Null(ecl_symbol_value(ECL_SYM("*PRINT-LEVEL*",53)))) { goto L12; }
   if (!(ecl_greatereq(ecl_symbol_value(ECL_SYM("*PRINT-LEVEL*",53)),ecl_make_fixnum(1)))) { goto L12; }
   T0 = ecl_one_minus(ecl_symbol_value(ECL_SYM("*PRINT-LEVEL*",53)));
   goto L11;
L12:;
   T0 = ecl_symbol_value(ECL_SYM("*PRINT-LEVEL*",53));
L11:;
   ecl_bds_bind(cl_env_copy,ECL_SYM("*PRINT-LEVEL*",53),T0); /*  *PRINT-LEVEL* */
   {
    cl_object v5;
    cl_object v6scan;
    cl_fixnum v7i;
    cl_object v8sv;
    value0 = ecl_symbol_value(ECL_SYM("*PRINT-LENGTH*",52));
    if ((value0)!=ECL_NIL) { goto L17; }
    v5 = ecl_make_fixnum(536870911);
    goto L15;
L17:;
    v5 = value0;
    goto L15;
L15:;
    v6scan = v4slotds;
    v7i = 0;
    v8sv = ECL_NIL;
    goto L24;
L23:;
    if (!(ecl_greatereq(ecl_make_fixnum(v7i),v5))) { goto L26; }
    cl_write_string(2, VV[10], v2stream);
    ecl_bds_unwind1(cl_env_copy);
    goto L10;
L26:;
    v8sv = ecl_instance_ref((v1obj),(v7i));
    cl_write_string(2, VV[11], v2stream);
    T0 = ecl_car(v6scan);
    T1 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-NAME",1609))(1, T0) /*  SLOT-DEFINITION-NAME */;
    T2 = ecl_symbol_name(T1);
    T3 = cl_find_package(ECL_SYM("KEYWORD",451));
    T4 = cl_intern(2, T2, T3);
    ecl_prin1(T4,v2stream);
    cl_write_string(2, VV[11], v2stream);
    ecl_prin1(v8sv,v2stream);
    v6scan = ecl_cdr(v6scan);
    {
     cl_object v9;
     v9 = ecl_make_integer((v7i)+1);
     {
      bool v10;
      v10 = ECL_FIXNUMP(v9);
      if (ecl_unlikely(!(v10)))
         FEwrong_type_argument(ECL_SYM("FIXNUM",374),v9);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
     }
     v7i = ecl_fixnum(v9);
    }
L24:;
    if (v6scan==ECL_NIL) { goto L40; }
    goto L23;
L40:;
    ecl_bds_unwind1(cl_env_copy);
   }
L10:;
   cl_write_string(2, VV[12], v2stream);
   value0 = v1obj;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}

#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/clos/builtin.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _ecldElwZMb7_7SGmqq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CLOS;BUILTIN.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_ecldElwZMb7_7SGmqq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC1make_instance,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[13])(5, ECL_SYM("MAKE-INSTANCE",951), ECL_NIL, VVtemp[1], VVtemp[2], T0) /*  INSTALL-METHOD */;
 }
  si_Xmake_constant(ECL_SYM("+BUILTIN-CLASSES+",1535), ecl_symbol_value(VV[1]));
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC2ensure_class_using_class,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[13])(5, ECL_SYM("ENSURE-CLASS-USING-CLASS",1568), ECL_NIL, VVtemp[3], VVtemp[4], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC3change_class,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[13])(5, ECL_SYM("CHANGE-CLASS",934), ECL_NIL, VVtemp[5], VVtemp[6], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC4make_instances_obsolete,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[13])(5, ECL_SYM("MAKE-INSTANCES-OBSOLETE",952), ECL_NIL, VVtemp[7], VVtemp[8], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC5make_instance,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[13])(5, ECL_SYM("MAKE-INSTANCE",951), ECL_NIL, VVtemp[7], VVtemp[9], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC6slot_makunbound_using_class,ECL_NIL,Cblock,3);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[13])(5, ECL_SYM("SLOT-MAKUNBOUND-USING-CLASS",1613), ECL_NIL, VVtemp[10], VVtemp[11], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC7slot_boundp_using_class,ECL_NIL,Cblock,3);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[13])(5, ECL_SYM("SLOT-BOUNDP-USING-CLASS",1602), ECL_NIL, VVtemp[10], VVtemp[11], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC8slot_value_using_class,ECL_NIL,Cblock,3);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[13])(5, ECL_SYM("SLOT-VALUE-USING-CLASS",1614), ECL_NIL, VVtemp[10], VVtemp[11], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC9_setf_slot_value_using_class_,ECL_NIL,Cblock,4);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[13])(5, VVtemp[12], ECL_NIL, VVtemp[13], VVtemp[14], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC10slot_exists_p_using_class,ECL_NIL,Cblock,3);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[13])(5, VV[5], ECL_NIL, VVtemp[10], VVtemp[11], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC11allocate_instance,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[13])(5, ECL_SYM("ALLOCATE-INSTANCE",929), ECL_NIL, VVtemp[15], VVtemp[2], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC12finalize_inheritance,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[13])(5, ECL_SYM("FINALIZE-INHERITANCE",1574), ECL_NIL, VVtemp[15], VVtemp[8], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC13make_load_form,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[13])(5, ECL_SYM("MAKE-LOAD-FORM",953), ECL_NIL, VVtemp[16], VVtemp[17], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC14print_object,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[13])(5, ECL_SYM("PRINT-OBJECT",963), ECL_NIL, VVtemp[18], VVtemp[19], T0) /*  INSTALL-METHOD */;
 }
}
