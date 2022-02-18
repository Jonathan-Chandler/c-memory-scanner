/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CLOS;DEFCLASS.LSP                                 */
#include <ecl/ecl-cmp.h>
#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/clos/defclass.eclh"
/*      function definition for PARSE-DEFAULT-INITARGS                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L1parse_default_initargs(cl_object v1default_initargs)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2output_list;
   cl_object v3scan;
   cl_object v4already_supplied;
   v2output_list = ECL_NIL;
   v3scan = v1default_initargs;
   v4already_supplied = ECL_NIL;
   goto L6;
L5:;
   T0 = ecl_cdr(v3scan);
   if (!(ecl_endp(T0))) { goto L8; }
   si_simple_program_error(1, VV[0]);
L8:;
   {
    cl_object v5;
    cl_object v6;
    cl_object v7slot_name;
    v5 = ecl_car(v3scan);
    v6 = ecl_cadr(v3scan);
    v7slot_name = v5;
    if (Null(ecl_memql(v7slot_name,v4already_supplied))) { goto L15; }
    si_simple_program_error(3, VV[1], v7slot_name, v1default_initargs);
    goto L14;
L15:;
    v4already_supplied = CONS(v7slot_name,v4already_supplied);
L14:;
    T0 = cl_list(2, ECL_SYM("QUOTE",681), v7slot_name);
    T1 = cl_list(2, ECL_SYM("QUOTE",681), v6);
    T2 = ecl_function_dispatch(cl_env_copy,VV[11])(1, v6) /*  MAKE-FUNCTION-INITFORM */;
    T3 = cl_list(4, ECL_SYM("LIST",483), T0, T1, T2);
    v2output_list = CONS(T3,v2output_list);
   }
   v3scan = ecl_cddr(v3scan);
L6:;
   if (ecl_endp(v3scan)) { goto L21; }
   goto L5;
L21:;
   T0 = cl_nreverse(v2output_list);
   value0 = CONS(ECL_SYM("LIST",483),T0);
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function DEFCLASS                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC2defclass(cl_object v1, cl_object v2)
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
   cl_object v4args;
   v3 = ecl_cdr(v1);
   v4args = v3;
   {
    cl_fixnum v5;
    v5 = ecl_length(v4args);
    if ((v5)>=(3)) { goto L3; }
   }
   si_simple_program_error(1, VV[2]);
L3:;
   {
    cl_object v5name;
    cl_object v6superclasses;
    cl_object v7slots;
    {
     cl_object v8;
     v8 = v4args;
     {
      cl_object v9;
      v9 = v8;
      if (ecl_unlikely(!ECL_LISTP(v9))) FEtype_error_list(v9);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
     }
     if (Null(v8)) { goto L10; }
     {
      cl_object v9;
      v9 = ECL_CONS_CDR(v8);
      v4args = v9;
      v8 = ECL_CONS_CAR(v8);
     }
L10:;
     v5name = v8;
    }
    {
     cl_object v8;
     v8 = v4args;
     {
      cl_object v9;
      v9 = v8;
      if (ecl_unlikely(!ECL_LISTP(v9))) FEtype_error_list(v9);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
     }
     if (Null(v8)) { goto L21; }
     {
      cl_object v9;
      v9 = ECL_CONS_CDR(v8);
      v4args = v9;
      v8 = ECL_CONS_CAR(v8);
     }
L21:;
     v6superclasses = v8;
    }
    {
     cl_object v8;
     v8 = v4args;
     {
      cl_object v9;
      v9 = v8;
      if (ecl_unlikely(!ECL_LISTP(v9))) FEtype_error_list(v9);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
     }
     if (Null(v8)) { goto L32; }
     {
      cl_object v9;
      v9 = ECL_CONS_CDR(v8);
      v4args = v9;
      v8 = ECL_CONS_CAR(v8);
     }
L32:;
     v7slots = v8;
    }
    if (!(ECL_LISTP(v6superclasses))) { goto L41; }
    if (ECL_LISTP(v7slots)) { goto L38; }
    goto L39;
L41:;
    goto L39;
L39:;
    si_simple_program_error(1, VV[3]);
L38:;
    if (!(ECL_SYMBOLP(v5name))) { goto L46; }
    T0 = (ECL_SYM("SYMBOLP",849)->symbol.gfdef);
    if ((cl_every(2, T0, v6superclasses))!=ECL_NIL) { goto L43; }
    goto L44;
L46:;
    goto L44;
L44:;
    si_simple_program_error(1, VV[4]);
L43:;
    ecl_function_dispatch(cl_env_copy,ECL_SYM("CREATE-TYPE-NAME",1646))(1, v5name) /*  CREATE-TYPE-NAME */;
    if (Null(ecl_symbol_value(ECL_SYM("*REGISTER-WITH-PDE-HOOK*",1203)))) { goto L50; }
    T0 = ecl_symbol_value(ECL_SYM("*REGISTER-WITH-PDE-HOOK*",1203));
    T1 = cl_copy_tree(ecl_symbol_value(ECL_SYM("*SOURCE-LOCATION*",1202)));
    T2 = cl_list(2, ECL_SYM("QUOTE",681), v5name);
    T3 = cl_list(2, ECL_SYM("QUOTE",681), v6superclasses);
    T4 = L3compress_slot_forms(v7slots);
    T5 = L5process_class_options(v4args);
    T6 = cl_list(5, ECL_SYM("LOAD-DEFCLASS",1639), T2, T3, T4, T5);
    value0 = ecl_function_dispatch(cl_env_copy,T0)(3, T1, v1, T6);
    return value0;
L50:;
    T0 = cl_list(2, ECL_SYM("QUOTE",681), v5name);
    T1 = cl_list(2, ECL_SYM("QUOTE",681), v6superclasses);
    T2 = L3compress_slot_forms(v7slots);
    T3 = L5process_class_options(v4args);
    value0 = cl_list(5, ECL_SYM("LOAD-DEFCLASS",1639), T0, T1, T2, T3);
    return value0;
   }
  }
 }
}
/*      function definition for COMPRESS-SLOT-FORMS                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L3compress_slot_forms(cl_object v1slot_definitions)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2const;
   cl_object v3output;
   cl_object v4non_const;
   v2const = ECL_NIL;
   v3output = ECL_NIL;
   v4non_const = ECL_NIL;
   {
    cl_object v5;
    v5 = ecl_function_dispatch(cl_env_copy,VV[13])(1, v1slot_definitions) /*  PARSE-SLOTS */;
    goto L8;
L7:;
    {
     cl_object v6slotd;
     v6slotd = ecl_car(v5);
     {
      cl_object v7initfun;
      cl_object v8copy;
      v7initfun = cl_getf(3, v6slotd, ECL_SYM("INITFUNCTION",999), ECL_NIL);
      v8copy = cl_copy_list(v6slotd);
      {
       cl_object v10;
       cl_object v11;                             /*  FLAG            */
       value0 = si_rem_f(v8copy, ECL_SYM("INITFUNCTION",999));
       {
        v10 = value0;
        v11 = cl_env_copy->values[1];
       }
       v8copy = v10;
      }
      if (!(ECL_ATOM(v7initfun))) { goto L19; }
      v2const = CONS(v8copy,v2const);
      T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("MAYBE-QUOTE",1742))(1, v8copy) /*  MAYBE-QUOTE */;
      v3output = CONS(T0,v3output);
      goto L12;
L19:;
      T0 = ecl_car(v7initfun);
      if (!((T0)==(ECL_SYM("CONSTANTLY",255)))) { goto L24; }
      v2const = CONS(v8copy,v2const);
      T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("MAYBE-QUOTE",1742))(1, v8copy) /*  MAYBE-QUOTE */;
      v3output = CONS(T0,v3output);
      goto L12;
L24:;
      T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("MAYBE-QUOTE",1742))(1, v8copy) /*  MAYBE-QUOTE */;
      T1 = cl_list(4, ECL_SYM("LIST*",484), ECL_SYM("INITFUNCTION",999), v7initfun, T0);
      v3output = CONS(T1,v3output);
      v4non_const = ECL_T;
     }
L12:;
    }
    v5 = ecl_cdr(v5);
L8:;
    if (Null(v5)) { goto L34; }
    goto L7;
L34:;
   }
   if (Null(v4non_const)) { goto L36; }
   T0 = cl_nreverse(v3output);
   value0 = CONS(ECL_SYM("LIST",483),T0);
   cl_env_copy->nvalues = 1;
   return value0;
L36:;
   T0 = cl_nreverse(v2const);
   value0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("MAYBE-QUOTE",1742))(1, T0) /*  MAYBE-QUOTE */;
   return value0;
  }
 }
}
/*      function definition for UNCOMPRESS-SLOT-FORMS                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L4uncompress_slot_forms(cl_object v1slot_definitions)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2slotd;
   cl_object v3;
   v2slotd = ECL_NIL;
   {
    cl_object v4;
    v4 = v1slot_definitions;
    if (ecl_unlikely(!ECL_LISTP(v4))) FEtype_error_list(v4);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v3 = v4;
   }
   {
    cl_object v4initform;
    v4initform = ECL_NIL;
    {
     cl_object v5;
     cl_object v6;
     v5 = ecl_list1(ECL_NIL);
     v6 = v5;
L8:;
     if (!(ecl_endp(v3))) { goto L10; }
     goto L9;
L10:;
     v2slotd = _ecl_car(v3);
     {
      cl_object v7;
      v7 = _ecl_cdr(v3);
      if (ecl_unlikely(!ECL_LISTP(v7))) FEtype_error_list(v7);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v3 = v7;
     }
     v4initform = cl_getf(3, v2slotd, ECL_SYM("INITFORM",998), v2slotd);
     {
      cl_object v7;
      v7 = v6;
      if (ecl_unlikely(ECL_ATOM(v7))) FEtype_error_cons(v7);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      T0 = v7;
     }
     if (!((v4initform)==(v2slotd))) { goto L26; }
     T1 = v2slotd;
     goto L25;
L26:;
     if (Null(cl_getf(2, v2slotd, ECL_SYM("INITFUNCTION",999)))) { goto L28; }
     T1 = v2slotd;
     goto L25;
L28:;
     T2 = cl_eval(v4initform);
     T3 = cl_constantly(T2);
     T1 = cl_listX(3, ECL_SYM("INITFUNCTION",999), T3, v2slotd);
L25:;
     v6 = ecl_list1(T1);
     (ECL_CONS_CDR(T0)=v6,T0);
     goto L8;
L9:;
     value0 = ecl_cdr(v5);
     cl_env_copy->nvalues = 1;
     return value0;
    }
   }
  }
 }
}
/*      function definition for PROCESS-CLASS-OPTIONS                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L5process_class_options(cl_object v1class_args)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2options;
   cl_object v3processed_options;
   v2options = ECL_NIL;
   v3processed_options = ECL_NIL;
   {
    cl_object v4;
    v4 = v1class_args;
    goto L7;
L6:;
    {
     cl_object v5option;
     v5option = ecl_car(v4);
     {
      cl_object v6;
      cl_object v7option_name;
      cl_object v8option_value;
      v6 = ecl_car(v5option);
      v7option_name = v6;
      v8option_value = ECL_NIL;
      if (Null(ecl_memql(v7option_name,v3processed_options))) { goto L16; }
      si_simple_program_error(2, VV[7], v7option_name);
      goto L15;
L16:;
      v3processed_options = CONS(v7option_name,v3processed_options);
L15:;
      {
       cl_object v9;
       v9 = v7option_name;
       if (!(ecl_eql(v9,ECL_SYM("METACLASS",1002)))) { goto L27; }
       goto L24;
       goto L25;
L27:;
       goto L25;
L25:;
       if (!(ecl_eql(v9,ECL_SYM("DOCUMENTATION",1244)))) { goto L22; }
       goto L23;
L24:;
L23:;
       T0 = ecl_cadr(v5option);
       v8option_value = ecl_function_dispatch(cl_env_copy,ECL_SYM("MAYBE-QUOTE",1742))(1, T0) /*  MAYBE-QUOTE */;
       goto L20;
L22:;
       if (!(ecl_eql(v9,ECL_SYM("DEFAULT-INITARGS",989)))) { goto L30; }
       v7option_name = ECL_SYM("DIRECT-DEFAULT-INITARGS",991);
       T0 = ecl_cdr(v5option);
       v8option_value = L1parse_default_initargs(T0);
       goto L20;
L30:;
       T0 = ecl_cdr(v5option);
       v8option_value = ecl_function_dispatch(cl_env_copy,ECL_SYM("MAYBE-QUOTE",1742))(1, T0) /*  MAYBE-QUOTE */;
      }
L20:;
      T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("MAYBE-QUOTE",1742))(1, v7option_name) /*  MAYBE-QUOTE */;
      v2options = cl_listX(3, T0, v8option_value, v2options);
     }
    }
    v4 = ecl_cdr(v4);
L7:;
    if (Null(v4)) { goto L37; }
    goto L6;
L37:;
   }
   if (Null(v2options)) { goto L40; }
   value0 = CONS(ECL_SYM("LIST",483),v2options);
   cl_env_copy->nvalues = 1;
   return value0;
L40:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for LOAD-DEFCLASS                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object clos_load_defclass(cl_object v1name, cl_object v2superclasses, cl_object v3slot_definitions, cl_object v4options)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = (ECL_SYM("ENSURE-CLASS",1567)->symbol.gfdef);
  T1 = L4uncompress_slot_forms(v3slot_definitions);
  value0 = cl_apply(7, T0, v1name, ECL_SYM("DIRECT-SUPERCLASSES",993), v2superclasses, ECL_SYM("DIRECT-SLOTS",992), T1, v4options);
  return value0;
 }
}
/*      function definition for ENSURE-CLASS                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object clos_ensure_class(cl_narg narg, cl_object v1name, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2initargs;
  ecl_va_list args; ecl_va_start(args,v1name,narg,1);
  v2initargs = cl_grab_rest_args(args);
  ecl_va_end(args);
  {
   cl_object v3old_class;
   cl_object v4new_class;
   v3old_class = ECL_NIL;
   v4new_class = ECL_NIL;
   if (Null(v1name)) { goto L3; }
   v3old_class = cl_find_class(2, v1name, ECL_NIL);
   if (Null(v3old_class)) { goto L3; }
   T0 = (cl_env_copy->function=(ECL_SYM("CLASS-NAME",936)->symbol.gfdef))->cfun.entry(1, v3old_class) /*  CLASS-NAME */;
   if ((T0)==(v1name)) { goto L3; }
   v3old_class = ECL_NIL;
L3:;
   T0 = (ECL_SYM("ENSURE-CLASS-USING-CLASS",1568)->symbol.gfdef);
   v4new_class = cl_apply(4, T0, v3old_class, v1name, v2initargs);
   value0 = v4new_class;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}

#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/clos/defclass.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclwP70oQa7_aGH6lq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CLOS;DEFCLASS.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclwP70oQa7_aGH6lq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  (void)0; /* No entry created for PARSE-DEFAULT-INITARGS */
  ecl_cmp_defmacro(VV[12]);                       /*  DEFCLASS        */
  (void)0; /* No entry created for COMPRESS-SLOT-FORMS */
  ecl_cmp_defun(VV[14]);                          /*  UNCOMPRESS-SLOT-FORMS */
  ecl_cmp_defun(VV[15]);                          /*  PROCESS-CLASS-OPTIONS */
  (void)0; /* No entry created for LOAD-DEFCLASS */
  (void)0; /* No entry created for ENSURE-CLASS */
}
