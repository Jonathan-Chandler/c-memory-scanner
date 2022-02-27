/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CLOS;SLOTVALUE.LSP                                */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/build/clos/slotvalue.eclh"
/*      local function CLASS-PROTOTYPE                                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC1class_prototype(cl_object v1class)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if ((cl_slot_boundp(v1class, VV[0]))!=ECL_NIL) { goto L1; }
  {
   cl_object v2;
   v2 = (cl_env_copy->function=(ECL_SYM("ALLOCATE-INSTANCE",929)->symbol.gfdef))->cfun.entry(1, v1class) /*  ALLOCATE-INSTANCE */;
   (cl_env_copy->function=ECL_CONS_CAR(VV[4]))->cfun.entry(3, v2, v1class, VV[0]) /*  (SETF SLOT-VALUE) */;
  }
L1:;
  value0 = cl_slot_value(v1class, VV[0]);
  return value0;
 }
}
/*      function definition for SLOT-MAKUNBOUND                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_slot_makunbound(cl_object v1self, cl_object v2slot_name)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3class;
   cl_object v4slotd;
   v3class = cl_class_of(v1self);
   v4slotd = ecl_function_dispatch(cl_env_copy,VV[5])(2, v3class, v2slot_name) /*  FIND-SLOT-DEFINITION */;
   if (Null(v4slotd)) { goto L4; }
   ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-MAKUNBOUND-USING-CLASS",1613))(3, v3class, v1self, v4slotd) /*  SLOT-MAKUNBOUND-USING-CLASS */;
   goto L3;
L4:;
   (cl_env_copy->function=(ECL_SYM("SLOT-MISSING",971)->symbol.gfdef))->cfun.entry(4, v3class, v1self, v2slot_name, ECL_SYM("SLOT-MAKUNBOUND",970)) /*  SLOT-MISSING */;
L3:;
   value0 = v1self;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function SLOT-VALUE-USING-CLASS                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC2slot_value_using_class(cl_object v1class, cl_object v2self, cl_object v3slotd)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v4location;
   cl_object v5value;
   v4location = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-LOCATION",1608))(1, v3slotd) /*  SLOT-DEFINITION-LOCATION */;
   v5value = clos_standard_instance_access(v2self, v4location);
   if (!((v5value)!=ECL_UNBOUND)) { goto L3; }
   value0 = v5value;
   cl_env_copy->nvalues = 1;
   return value0;
L3:;
   T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-NAME",1609))(1, v3slotd) /*  SLOT-DEFINITION-NAME */;
   value0 = (cl_env_copy->function=(ECL_SYM("SLOT-UNBOUND",972)->symbol.gfdef))->cfun.entry(3, v1class, v2self, T0) /*  SLOT-UNBOUND */;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function SLOT-BOUNDP-USING-CLASS                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC3slot_boundp_using_class(cl_object v1class, cl_object v2self, cl_object v3slotd)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-LOCATION",1608))(1, v3slotd) /*  SLOT-DEFINITION-LOCATION */;
  T1 = clos_standard_instance_access(v2self, T0);
  value0 = ecl_make_bool((T1)!=ECL_UNBOUND);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function (SETF SLOT-VALUE-USING-CLASS)                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC4_setf_slot_value_using_class_(cl_object v1val, cl_object v2class, cl_object v3self, cl_object v4slotd)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-LOCATION",1608))(1, v4slotd) /*  SLOT-DEFINITION-LOCATION */;
  value0 = clos_standard_instance_set(v3self, T0, v1val);
  return value0;
 }
}
/*      local function SLOT-MAKUNBOUND-USING-CLASS                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC5slot_makunbound_using_class(cl_object v1class, cl_object v2instance, cl_object v3slotd)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-LOCATION",1608))(1, v3slotd) /*  SLOT-DEFINITION-LOCATION */;
  T1 = ECL_UNBOUND;
  clos_standard_instance_set(v2instance, T0, T1);
  value0 = v2instance;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function SLOT-MISSING                                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC6slot_missing(cl_narg narg, cl_object v1class, cl_object v2object, cl_object v3slot_name, cl_object v4operation, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<4)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>5)) FEwrong_num_arguments_anonym();
 {
  cl_object v5new_value;
  va_list args; va_start(args,v4operation);
  {
   int i = 4;
   if (i >= narg) {
    v5new_value = ECL_NIL;
   } else {
    i++;
    v5new_value = va_arg(args,cl_object);
   }
  }
  va_end(args);
  value0 = cl_error(3, VV[1], v3slot_name, v2object);
  return value0;
 }
}
/*      local function SLOT-UNBOUND                                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC7slot_unbound(cl_object v1class, cl_object v2object, cl_object v3slot_name)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_error(5, ECL_SYM("UNBOUND-SLOT",878), ECL_SYM("INSTANCE",1282), v2object, ECL_SYM("NAME",1300), v3slot_name);
  return value0;
 }
}
/*      local function SLOT-UNBOUND                                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC8slot_unbound(cl_object v1class, cl_object v2object, cl_object v3slot_index)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v4class;
   cl_object v5slotd;
   v4class = cl_class_of(v2object);
   {
    cl_object v6;
    cl_object v7;
    v6 = cl_slot_value(v4class, VV[2]);
    v7 = ecl_function_dispatch(cl_env_copy,VV[6])(2, v6, ecl_make_fixnum(0)) /*  MAKE-SEQ-ITERATOR */;
L5:;
    if ((v7)!=ECL_NIL) { goto L7; }
    v5slotd = ECL_NIL;
    goto L2;
L7:;
    {
     cl_object v8;
     v8 = ecl_function_dispatch(cl_env_copy,VV[7])(2, v6, v7) /*  SEQ-ITERATOR-REF */;
     T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-LOCATION",1608))(1, v8) /*  SLOT-DEFINITION-LOCATION */;
     if (!(ecl_eql(v3slot_index,T0))) { goto L9; }
     v5slotd = v8;
     goto L2;
    }
L9:;
    v7 = ecl_function_dispatch(cl_env_copy,VV[8])(2, v6, v7) /*  SEQ-ITERATOR-NEXT */;
    goto L5;
   }
L2:;
   T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("SLOT-DEFINITION-NAME",1609))(1, v5slotd) /*  SLOT-DEFINITION-NAME */;
   value0 = (cl_env_copy->function=(ECL_SYM("SLOT-UNBOUND",972)->symbol.gfdef))->cfun.entry(3, v4class, v2object, T0) /*  SLOT-UNBOUND */;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function CLASS-NAME                                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC9class_name(cl_object v1class)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ecl_function_dispatch(cl_env_copy,VV[9])(1, v1class) /*  CLASS-ID */;
  return value0;
 }
}
/*      local function (SETF CLASS-NAME)                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC10_setf_class_name_(cl_object v1new_value, cl_object v2class)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  (cl_env_copy->function=(ECL_SYM("REINITIALIZE-INSTANCE",965)->symbol.gfdef))->cfun.entry(3, v2class, ECL_SYM("NAME",1300), v1new_value) /*  REINITIALIZE-INSTANCE */;
  value0 = v1new_value;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}

#include "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/build/clos/slotvalue.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclCoFn3mb7_y0fZTr51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CLOS;SLOTVALUE.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclCoFn3mb7_y0fZTr51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC1class_prototype,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[3])(5, ECL_SYM("CLASS-PROTOTYPE",1554), ECL_NIL, VVtemp[1], VVtemp[1], T0) /*  INSTALL-METHOD */;
 }
  (void)0; /* No entry created for SLOT-MAKUNBOUND */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC2slot_value_using_class,ECL_NIL,Cblock,3);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[3])(5, ECL_SYM("SLOT-VALUE-USING-CLASS",1614), ECL_NIL, VVtemp[2], VVtemp[3], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC3slot_boundp_using_class,ECL_NIL,Cblock,3);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[3])(5, ECL_SYM("SLOT-BOUNDP-USING-CLASS",1602), ECL_NIL, VVtemp[2], VVtemp[3], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC4_setf_slot_value_using_class_,ECL_NIL,Cblock,4);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[3])(5, VVtemp[4], ECL_NIL, VVtemp[5], VVtemp[6], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC5slot_makunbound_using_class,ECL_NIL,Cblock,3);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[3])(5, ECL_SYM("SLOT-MAKUNBOUND-USING-CLASS",1613), ECL_NIL, VVtemp[2], VVtemp[7], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC6slot_missing,ECL_NIL,Cblock,4);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[3])(5, ECL_SYM("SLOT-MISSING",971), ECL_NIL, VVtemp[8], VVtemp[9], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC7slot_unbound,ECL_NIL,Cblock,3);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[3])(5, ECL_SYM("SLOT-UNBOUND",972), ECL_NIL, VVtemp[10], VVtemp[11], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC8slot_unbound,ECL_NIL,Cblock,3);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[3])(5, ECL_SYM("SLOT-UNBOUND",972), ECL_NIL, VVtemp[12], VVtemp[13], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC9class_name,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[3])(5, ECL_SYM("CLASS-NAME",936), ECL_NIL, VVtemp[1], VVtemp[1], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC10_setf_class_name_,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[3])(5, VVtemp[14], ECL_NIL, VVtemp[15], VVtemp[16], T0) /*  INSTALL-METHOD */;
 }
}
