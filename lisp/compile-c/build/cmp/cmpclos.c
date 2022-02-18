/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CMP;CMPCLOS.LSP                                   */
#include <ecl/ecl-cmp.h>
#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/cmp/cmpclos.eclh"
/*      function definition for MAYBE-OPTIMIZE-GENERIC-FUNCTION       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L1maybe_optimize_generic_function(cl_object v1fname, cl_object v2args)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(cl_fboundp(v1fname))) { goto L1; }
  {
   cl_object v3gf;
   v3gf = cl_fdefinition(v1fname);
   if (Null(si_of_class_p(2, v3gf, ECL_SYM("STANDARD-GENERIC-FUNCTION",976)))) { goto L4; }
   if (Null(ecl_function_dispatch(cl_env_copy,VV[9])(0) /*  POLICY-INLINE-SLOT-ACCESS */)) { goto L6; }
   value0 = L5maybe_optimize_slot_accessor(v1fname, v3gf, v2args);
   return value0;
L6:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L4:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
L1:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for PRECOMPUTE-APPLICABLE-METHODS         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L3precompute_applicable_methods(cl_object v1methods, cl_object v2c_args)
{
 cl_object env0 = ECL_NIL;
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  env0 = ECL_NIL;
  CLV0 = env0 = CONS(v2c_args,env0);              /*  C-ARGS          */
  {
   cl_object v3;
   v3 = ecl_make_cclosure_va((cl_objectfn)LC2applicable_method_p,env0,Cblock,1);
   value0 = cl_delete_if_not(2, v3, v1methods);
   return value0;
  }
 }
}
/*      closure APPLICABLE-METHOD-P                                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC2applicable_method_p(cl_narg narg, cl_object v1m, ...)
{
 cl_object T0, T1;
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV0 = env0;                                     /*  C-ARGS          */
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=1)) FEwrong_num_arguments_anonym();
 {
TTL:
  {
   cl_object v2;
   cl_object v3specializer;
   cl_object v4;
   v2 = ecl_function_dispatch(cl_env_copy,ECL_SYM("METHOD-SPECIALIZERS",1595))(1, v1m) /*  METHOD-SPECIALIZERS */;
   v3specializer = ECL_NIL;
   {
    cl_object v5;
    v5 = v2;
    if (ecl_unlikely(!ECL_LISTP(v5))) FEtype_error_list(v5);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v4 = v5;
   }
   {
    cl_object v5arg;
    cl_object v6;
    v5arg = ECL_NIL;
    {
     cl_object v7;
     v7 = ECL_CONS_CAR(CLV0);
     if (ecl_unlikely(!ECL_LISTP(v7))) FEtype_error_list(v7);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v6 = v7;
    }
L10:;
    if (!(ecl_endp(v4))) { goto L12; }
    goto L11;
L12:;
    v3specializer = _ecl_car(v4);
    {
     cl_object v7;
     v7 = _ecl_cdr(v4);
     if (ecl_unlikely(!ECL_LISTP(v7))) FEtype_error_list(v7);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v4 = v7;
    }
    if (!(ecl_endp(v6))) { goto L20; }
    goto L11;
L20:;
    v5arg = _ecl_car(v6);
    {
     cl_object v7;
     v7 = _ecl_cdr(v6);
     if (ecl_unlikely(!ECL_LISTP(v7))) FEtype_error_list(v7);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v6 = v7;
    }
    {
     cl_object v7arg_type;
     v7arg_type = ecl_function_dispatch(cl_env_copy,VV[11])(1, v5arg) /*  C1FORM-TYPE */;
     if (!(ECL_CONSP(v3specializer))) { goto L32; }
     T1 = ecl_cadr(v3specializer);
     T0 = cl_list(2, ECL_SYM("MEMBER",554), T1);
     goto L31;
L32:;
     T0 = v3specializer;
L31:;
     if ((cl_subtypep(2, v7arg_type, T0))!=ECL_NIL) { goto L28; }
    }
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
L28:;
    goto L10;
L11:;
    value0 = ECL_T;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
 }
}
/*      function definition for FIND-SLOT-ACCESSORS                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L4find_slot_accessors(cl_object v1gf)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2;
   cl_object v3method;
   cl_object v4;
   v2 = ecl_function_dispatch(cl_env_copy,ECL_SYM("GENERIC-FUNCTION-METHODS",1585))(1, v1gf) /*  GENERIC-FUNCTION-METHODS */;
   v3method = ECL_NIL;
   {
    cl_object v5;
    v5 = v2;
    if (ecl_unlikely(!ECL_LISTP(v5))) FEtype_error_list(v5);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v4 = v5;
   }
   {
    cl_object v5readers;
    v5readers = ECL_NIL;
    {
     cl_object v6writers;
     v6writers = ECL_NIL;
     {
      cl_object v7reader_class;
      v7reader_class = cl_find_class(1, ECL_SYM("STANDARD-READER-METHOD",1625));
      {
       cl_object v8writer_class;
       v8writer_class = cl_find_class(1, ECL_SYM("STANDARD-WRITER-METHOD",1627));
L10:;
       if (!(ecl_endp(v4))) { goto L12; }
       goto L11;
L12:;
       v3method = _ecl_car(v4);
       {
        cl_object v9;
        v9 = _ecl_cdr(v4);
        if (ecl_unlikely(!ECL_LISTP(v9))) FEtype_error_list(v9);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v4 = v9;
       }
       {
        cl_object v9method_class;
        v9method_class = cl_class_of(v3method);
        if (Null(si_subclassp(2, v9method_class, v7reader_class))) { goto L22; }
        v5readers = CONS(v3method,v5readers);
        goto L20;
L22:;
        if (Null(si_subclassp(2, v9method_class, v8writer_class))) { goto L20; }
        v6writers = CONS(v3method,v6writers);
       }
L20:;
       goto L10;
L11:;
       cl_env_copy->nvalues = 2;
       cl_env_copy->values[1] = v6writers;
       cl_env_copy->values[0] = v5readers;
       return cl_env_copy->values[0];
      }
     }
    }
   }
  }
 }
}
/*      function definition for MAYBE-OPTIMIZE-SLOT-ACCESSOR          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L5maybe_optimize_slot_accessor(cl_object v1fname, cl_object v2gf, cl_object v3args)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v5;                                  /*  READERS         */
   cl_object v6;                                  /*  WRITERS         */
   value0 = L4find_slot_accessors(v2gf);
   {
    const int v7 = cl_env_copy->nvalues;
    v5 = value0;
    cl_object v8;
    v8 = (v7<=1)? ECL_NIL : cl_env_copy->values[1];
    v6 = v8;
   }
   if (Null(v5)) { goto L2; }
   if (Null(v6)) { goto L2; }
   value0 = ecl_function_dispatch(cl_env_copy,VV[14])(2, VV[3], v1fname) /*  CMPWARN */;
   return value0;
L2:;
   if ((v5)!=ECL_NIL) { goto L5; }
   if ((v6)!=ECL_NIL) { goto L5; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L5:;
   {
    cl_fixnum v7;
    v7 = ecl_length(v3args);
    T0 = ecl_function_dispatch(cl_env_copy,VV[15])(1, v2gf) /*  GENERIC-FUNCTION-SPEC-LIST */;
    {
     cl_fixnum v8;
     v8 = ecl_length(T0);
     if (!((v7)!=(v8))) { goto L8; }
    }
   }
   ecl_function_dispatch(cl_env_copy,VV[14])(2, VV[4], v1fname) /*  CMPWARN */;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L8:;
   if (Null(v5)) { goto L11; }
   value0 = L6try_optimize_slot_reader(v5, v3args);
   return value0;
L11:;
   if (Null(v6)) { goto L13; }
   value0 = L7try_optimize_slot_writer(v6, v3args);
   return value0;
L13:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for TRY-OPTIMIZE-SLOT-READER              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L6try_optimize_slot_reader(cl_object v1readers, cl_object v2args)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3object;
   cl_object v4c_object;
   cl_object v5readers;
   v3object = ecl_car(v2args);
   v4c_object = ecl_function_dispatch(cl_env_copy,VV[17])(1, v3object) /*  C1EXPR */;
   T0 = ecl_list1(v4c_object);
   v5readers = L3precompute_applicable_methods(v1readers, T0);
   {
    cl_fixnum v6;
    v6 = ecl_length(v5readers);
    if (!((v6)==(1))) { goto L4; }
   }
   {
    cl_object v6reader;
    v6reader = ecl_car(v5readers);
    if (Null(si_of_class_p(2, v6reader, ECL_SYM("STANDARD-READER-METHOD",1625)))) { goto L7; }
    {
     cl_object v7slotd;
     cl_object v8index;
     v7slotd = ecl_function_dispatch(cl_env_copy,ECL_SYM("ACCESSOR-METHOD-SLOT-DEFINITION",1543))(1, v6reader) /*  ACCESSOR-METHOD-SLOT-DEFINITION */;
     v8index = ecl_function_dispatch(cl_env_copy,VV[18])(1, v7slotd) /*  SAFE-SLOT-DEFINITION-LOCATION */;
     if (!(ECL_FIXNUMP(v8index))) { goto L11; }
     value0 = cl_list(3, ECL_SYM("SAFE-INSTANCE-REF",1641), v3object, v8index);
     return value0;
L11:;
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 1;
     return value0;
    }
L7:;
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
   }
L4:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for TRY-OPTIMIZE-SLOT-WRITER              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L7try_optimize_slot_writer(cl_object v1orig_writers, cl_object v2args)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3c_args;
   cl_object v4writers;
   {
    cl_object v5;
    v5 = ecl_fdefinition(VV[17]);
    {
     cl_object v6;
     cl_object v7;
     v6 = ECL_NIL;
     {
      cl_object v8;
      v8 = v2args;
      if (ecl_unlikely(!ECL_LISTP(v8))) FEtype_error_list(v8);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v7 = v8;
     }
     {
      cl_object v8;
      cl_object v9;
      v8 = ecl_list1(ECL_NIL);
      v9 = v8;
L9:;
      if (!(ecl_endp(v7))) { goto L11; }
      goto L10;
L11:;
      v6 = _ecl_car(v7);
      {
       cl_object v10;
       v10 = _ecl_cdr(v7);
       if (ecl_unlikely(!ECL_LISTP(v10))) FEtype_error_list(v10);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v7 = v10;
      }
      {
       cl_object v10;
       v10 = v9;
       if (ecl_unlikely(ECL_ATOM(v10))) FEtype_error_cons(v10);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       T0 = v10;
      }
      T1 = ecl_function_dispatch(cl_env_copy,v5)(1, v6);
      v9 = ecl_list1(T1);
      (ECL_CONS_CDR(T0)=v9,T0);
      goto L9;
L10:;
      v3c_args = ecl_cdr(v8);
      goto L1;
     }
    }
   }
L1:;
   v4writers = L3precompute_applicable_methods(v1orig_writers, v3c_args);
   {
    cl_fixnum v5;
    v5 = ecl_length(v4writers);
    if (!((v5)==(1))) { goto L28; }
   }
   {
    cl_object v5writer;
    v5writer = ecl_car(v4writers);
    if (Null(si_of_class_p(2, v5writer, ECL_SYM("STANDARD-WRITER-METHOD",1627)))) { goto L31; }
    {
     cl_object v6slotd;
     cl_object v7index;
     v6slotd = ecl_function_dispatch(cl_env_copy,ECL_SYM("ACCESSOR-METHOD-SLOT-DEFINITION",1543))(1, v5writer) /*  ACCESSOR-METHOD-SLOT-DEFINITION */;
     v7index = ecl_function_dispatch(cl_env_copy,VV[18])(1, v6slotd) /*  SAFE-SLOT-DEFINITION-LOCATION */;
     if (!(ECL_FIXNUMP(v7index))) { goto L35; }
     T0 = ecl_cadr(v2args);
     T1 = ecl_car(v2args);
     value0 = cl_list(4, ECL_SYM("INSTANCE-SET",1189), T0, v7index, T1);
     return value0;
L35:;
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 1;
     return value0;
    }
L31:;
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
   }
L28:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}

#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/cmp/cmpclos.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclF7HFjjZ7_1Ga6lq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CMP;CMPCLOS.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclF7HFjjZ7_1Ga6lq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  ecl_cmp_defun(VV[8]);                           /*  MAYBE-OPTIMIZE-GENERIC-FUNCTION */
  ecl_cmp_defun(VV[10]);                          /*  PRECOMPUTE-APPLICABLE-METHODS */
  ecl_cmp_defun(VV[12]);                          /*  FIND-SLOT-ACCESSORS */
  ecl_cmp_defun(VV[13]);                          /*  MAYBE-OPTIMIZE-SLOT-ACCESSOR */
  ecl_cmp_defun(VV[16]);                          /*  TRY-OPTIMIZE-SLOT-READER */
  ecl_cmp_defun(VV[19]);                          /*  TRY-OPTIMIZE-SLOT-WRITER */
}
