/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:LSP;FFI.LSP                                       */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/lsp/ffi.eclh"
/*      local function DEF-CONSTANT                                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC1def_constant(cl_object v1, cl_object v2)
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
   cl_object v4name;
   cl_object v5value;
   cl_object v6;
   cl_object v7export;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[144])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v8;
    v8 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4name = v8;
   }
   if (!(v3==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[144])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v8;
    v8 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5value = v8;
   }
   v6 = ecl_function_dispatch(cl_env_copy,VV[145])(2, v3, ECL_SYM("EXPORT",1255)) /*  SEARCH-KEYWORD */;
   if (!((v6)==(ECL_SYM("MISSING-KEYWORD",2015)))) { goto L16; }
   v7export = ECL_NIL;
   goto L15;
L16:;
   v7export = v6;
L15:;
   ecl_function_dispatch(cl_env_copy,VV[146])(2, v3, VV[0]) /*  CHECK-KEYWORD */;
   T0 = cl_list(3, ECL_SYM("DEFCONSTANT",279), v4name, v5value);
   if (Null(v7export)) { goto L20; }
   T2 = cl_list(2, ECL_SYM("QUOTE",681), v4name);
   T1 = cl_list(2, ECL_SYM("EXPORT",346), T2);
   goto L19;
L20:;
   T1 = ECL_NIL;
L19:;
   T2 = cl_list(2, ECL_SYM("QUOTE",681), v4name);
   value0 = cl_list(5, ECL_SYM("EVAL-WHEN",342), VV[1], T0, T1, T2);
   return value0;
  }
 }
}
/*      local function DEF-FOREIGN-TYPE                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC2def_foreign_type(cl_object v1, cl_object v2)
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
   cl_object v4name;
   cl_object v5definition;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[144])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4name = v6;
   }
   if (!(v3==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[144])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5definition = v6;
   }
   if (Null(v3)) { goto L14; }
   ecl_function_dispatch(cl_env_copy,VV[148])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L14:;
   T0 = cl_list(2, ECL_SYM("QUOTE",681), v4name);
   T1 = cl_list(3, ECL_SYM("GETHASH",415), T0, VV[3]);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), v5definition);
   T3 = cl_list(3, ECL_SYM("SETF",752), T1, T2);
   value0 = cl_list(3, ECL_SYM("EVAL-WHEN",342), VV[1], T3);
   return value0;
  }
 }
}
/*      local function DEF-TYPE                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC3def_type(cl_object v1, cl_object v2)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4name;
   cl_object v5definition;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[144])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4name = v6;
   }
   if (!(v3==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[144])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5definition = v6;
   }
   if (Null(v3)) { goto L14; }
   ecl_function_dispatch(cl_env_copy,VV[148])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L14:;
   value0 = cl_listX(3, ECL_SYM("DEFTYPE",290), v4name, VV[5]);
   return value0;
  }
 }
}
/*      function definition for %CONVERT-TO-FFI-TYPE                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L4_convert_to_ffi_type(cl_narg narg, cl_object v1type, ...)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2context;
  va_list args; va_start(args,v1type);
  {
   int i = 1;
   if (i >= narg) {
    v2context = ECL_NIL;
   } else {
    i++;
    v2context = va_arg(args,cl_object);
   }
  }
  va_end(args);
  if (!(ECL_ATOM(v1type))) { goto L2; }
  if (Null(ecl_memql(v1type,v2context))) { goto L4; }
  value0 = v1type;
  cl_env_copy->nvalues = 1;
  return value0;
L4:;
  {
   cl_object v4;                                  /*  VALUE           */
   cl_object v5;                                  /*  PRESENT-P       */
   value0 = cl_gethash(3, v1type, ecl_symbol_value(VV[3]), v1type);
   {
    v4 = value0;
    v5 = cl_env_copy->values[1];
   }
   if (Null(v5)) { goto L7; }
   T0 = CONS(v1type,v2context);
   value0 = L4_convert_to_ffi_type(2, v4, T0);
   return value0;
L7:;
   value0 = v4;
   cl_env_copy->nvalues = 1;
   return value0;
  }
L2:;
  T0 = ecl_car(v1type);
  T1 = L4_convert_to_ffi_type(2, T0, v2context);
  T2 = ecl_cdr(v1type);
  T3 = L4_convert_to_ffi_type(2, T2, v2context);
  value0 = CONS(T1,T3);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function %ALIGN-DATA                                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC5_align_data(cl_object v1, cl_object v2)
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
   cl_object v4data;
   cl_object v5align;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[144])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4data = v6;
   }
   if (!(v3==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[144])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5align = v6;
   }
   if (Null(v3)) { goto L14; }
   ecl_function_dispatch(cl_env_copy,VV[148])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L14:;
   T0 = cl_list(3, ECL_SYM("/",23), v4data, v5align);
   T1 = cl_list(2, ECL_SYM("CEILING",201), T0);
   T2 = cl_list(3, ECL_SYM("*",20), T1, v5align);
   value0 = cl_list(3, ECL_SYM("SETF",752), v4data, T2);
   return value0;
  }
 }
}
/*      function definition for SIZE-OF-FOREIGN-TYPE                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L7size_of_foreign_type(cl_object v1name)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2size;
   cl_object v3align;
   cl_object v4type;
   v2size = ecl_make_fixnum(0);
   v3align = ECL_NIL;
   v4type = L4_convert_to_ffi_type(1, v1name);
   if ((v4type)!=ECL_NIL) { goto L4; }
   cl_error(2, VV[9], v1name);
L4:;
   if (!(ECL_SYMBOLP(v4type))) { goto L7; }
   v2size = si_size_of_foreign_elt_type(v4type);
   v3align = si_alignment_of_foreign_elt_type(v4type);
   goto L6;
L7:;
   if (!(ECL_ATOM(v4type))) { goto L12; }
   cl_error(2, VV[10], v1name);
   goto L6;
L12:;
   v1name = ecl_car(v4type);
   if (!((v1name)==(ECL_SYM("STRUCT",1412)))) { goto L14; }
   v2size = L12slot_position(v4type, ECL_NIL);
   T0 = (ECL_SYM("MAX",553)->symbol.gfdef);
   {
    cl_object v5;
    {
     cl_object v6;
     v6 = ecl_make_cfun((cl_objectfn_fixed)LC6__lambda44,ECL_NIL,Cblock,1);
     v5 = v6;
    }
    {
     cl_object v6;
     cl_object v7;
     cl_object v8;
     v6 = ecl_cdr(v4type);
     v7 = ECL_NIL;
     {
      cl_object v9;
      v9 = v6;
      if (ecl_unlikely(!ECL_LISTP(v9))) FEtype_error_list(v9);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v8 = v9;
     }
     {
      cl_object v9;
      cl_object v10;
      v9 = ecl_list1(ECL_NIL);
      v10 = v9;
L31:;
      if (!(ecl_endp(v8))) { goto L33; }
      goto L32;
L33:;
      v7 = _ecl_car(v8);
      {
       cl_object v11;
       v11 = _ecl_cdr(v8);
       if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v8 = v11;
      }
      {
       cl_object v11;
       v11 = v10;
       if (ecl_unlikely(ECL_ATOM(v11))) FEtype_error_cons(v11);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       T2 = v11;
      }
      T3 = ecl_function_dispatch(cl_env_copy,v5)(1, v7);
      v10 = ecl_list1(T3);
      (ECL_CONS_CDR(T2)=v10,T2);
      goto L31;
L32:;
      T1 = ecl_cdr(v9);
      goto L22;
     }
    }
   }
L22:;
   v3align = cl_apply(2, T0, T1);
   T0 = ecl_divide(v2size,v3align);
   T1 = ecl_ceiling1(T0);
   v2size = ecl_times(T1,v3align);
   goto L6;
L14:;
   if (!((v1name)==(ECL_SYM("ARRAY",1221)))) { goto L50; }
   v2size = ecl_caddr(v4type);
   if (Null(v2size)) { goto L55; }
   if ((cl_realp(v2size))!=ECL_NIL) { goto L52; }
   goto L53;
L55:;
   goto L53;
L53:;
   cl_error(2, VV[11], v4type);
L52:;
   {
    cl_object v6;                                 /*  ELT-SIZE        */
    cl_object v7;                                 /*  ELT-ALIGN       */
    T0 = ecl_cadr(v4type);
    value0 = L7size_of_foreign_type(T0);
    {
     const int v8 = cl_env_copy->nvalues;
     v6 = value0;
     cl_object v9;
     v9 = (v8<=1)? ECL_NIL : cl_env_copy->values[1];
     v7 = v9;
    }
    v2size = ecl_times(v2size,v6);
    v3align = v7;
    goto L6;
   }
L50:;
   if (!((v1name)==(ECL_SYM("UNION",1413)))) { goto L62; }
   {
    cl_object v5;
    v5 = ecl_cdr(v4type);
    goto L67;
L66:;
    {
     cl_object v6field;
     v6field = ecl_car(v5);
     {
      cl_object v8;                               /*  FIELD-SIZE      */
      cl_object v9;                               /*  FIELD-ALIGN     */
      T0 = ecl_cadr(v6field);
      value0 = L7size_of_foreign_type(T0);
      {
       const int v10 = cl_env_copy->nvalues;
       v8 = value0;
       cl_object v11;
       v11 = (v10<=1)? ECL_NIL : cl_env_copy->values[1];
       v9 = v11;
      }
      if (!(ecl_greater(v8,v2size))) { goto L73; }
      v2size = v8;
L73:;
      if (v3align==ECL_NIL) { goto L77; }
      if (!(ecl_greater(v9,v3align))) { goto L71; }
      goto L76;
L77:;
L76:;
      v3align = v9;
     }
L71:;
    }
    v5 = ecl_cdr(v5);
L67:;
    if (Null(v5)) { goto L82; }
    goto L66;
L82:;
    goto L6;
   }
L62:;
   if (!((v1name)==(ECL_SYM("*",20)))) { goto L84; }
   v2size = si_size_of_foreign_elt_type(ECL_SYM("POINTER-VOID",1410));
   v3align = si_alignment_of_foreign_elt_type(ECL_SYM("POINTER-VOID",1410));
   goto L6;
L84:;
   if (!((v1name)==(ECL_SYM("QUOTE",681)))) { goto L89; }
   v1name = ecl_cadr(v4type);
   goto TTL;
L89:;
   cl_error(2, VV[12], v1name);
L6:;
   value0 = v3align;
   if ((value0)!=ECL_NIL) { goto L95; }
   T0 = ecl_make_fixnum(0);
   goto L93;
L95:;
   T0 = value0;
   goto L93;
L93:;
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = T0;
   cl_env_copy->values[0] = v2size;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA44                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC6__lambda44(cl_object v1field)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;                                  /*  FIELD-ALIGN     */
   T0 = ecl_cadr(v1field);
   value0 = L7size_of_foreign_type(T0);
   {
    const int v4 = cl_env_copy->nvalues;
    cl_object v5;
    v5 = (v4<=1)? ECL_NIL : cl_env_copy->values[1];
    v3 = v5;
   }
   value0 = v3;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for ALLOCATE-FOREIGN-OBJECT               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L8allocate_foreign_object(cl_narg narg, cl_object v1type, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2size;
  cl_object v3size_flag;
  va_list args; va_start(args,v1type);
  {
   int i = 1;
   if (i >= narg) {
    v2size = ecl_make_fixnum(0);
    v3size_flag = ECL_NIL;
   } else {
    i++;
    v2size = va_arg(args,cl_object);
    v3size_flag = ECL_T;
   }
  }
  va_end(args);
  {
   cl_object v4type_size;
   v4type_size = L7size_of_foreign_type(v1type);
   if (!(v3size_flag==ECL_NIL)) { goto L3; }
   value0 = si_allocate_foreign_data(v1type, v4type_size);
   return value0;
L3:;
   if (!(ECL_FIXNUMP(v2size))) { goto L5; }
   if (!(ecl_greatereq(v2size,ecl_make_fixnum(0)))) { goto L5; }
   {
    cl_object v5bytes;
    v5bytes = ecl_times(v2size,v4type_size);
    T0 = cl_list(3, ECL_SYM("ARRAY",1221), v1type, v2size);
    value0 = si_allocate_foreign_data(T0, v5bytes);
    return value0;
   }
L5:;
   value0 = cl_error(2, VV[14], v2size);
   return value0;
  }
 }
}
/*      function definition for FREE-FOREIGN-OBJECT                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L9free_foreign_object(cl_object v1ptr)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = si_free_foreign_data(v1ptr);
  return value0;
 }
}
/*      local function DEF-ENUM                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC10def_enum(cl_object v1, cl_object v2)
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
   cl_object v4name;
   cl_object v5values_list;
   cl_object v6;
   cl_object v7separator_string;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[144])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v8;
    v8 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4name = v8;
   }
   if (!(v3==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[144])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v8;
    v8 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5values_list = v8;
   }
   v6 = ecl_function_dispatch(cl_env_copy,VV[145])(2, v3, VV[17]) /*  SEARCH-KEYWORD */;
   if (!((v6)==(ECL_SYM("MISSING-KEYWORD",2015)))) { goto L16; }
   v7separator_string = VV[18];
   goto L15;
L16:;
   v7separator_string = v6;
L15:;
   ecl_function_dispatch(cl_env_copy,VV[146])(2, v3, VV[19]) /*  CHECK-KEYWORD */;
   {
    cl_object v8value;
    cl_object v9field;
    cl_object v10forms;
    v8value = ecl_make_fixnum(-1);
    v9field = ECL_NIL;
    v10forms = ECL_NIL;
    v7separator_string = cl_string(v7separator_string);
    {
     cl_object v11;
     v11 = v5values_list;
     goto L28;
L27:;
     {
      cl_object v12item;
      v12item = ecl_car(v11);
      if (!(ECL_SYMBOLP(v12item))) { goto L33; }
      v9field = v12item;
      v8value = ecl_plus(v8value,ecl_make_fixnum(1));
      goto L32;
L33:;
      {
       cl_object v13;
       if (!(ECL_CONSP(v12item))) { goto L40; }
       v9field = ecl_car(v12item);
       if (!(ECL_SYMBOLP(v9field))) { goto L40; }
       v8value = ecl_cadr(v12item);
       if (!(ECL_FIXNUMP(v8value)||ECL_BIGNUMP(v8value))) { goto L40; }
       T0 = ecl_cddr(v12item);
       v13 = ecl_make_bool(ecl_endp(T0));
       goto L38;
L40:;
       v13 = ECL_NIL;
       goto L38;
L38:;
       if (Null(v13)) { goto L46; }
       goto L32;
L46:;
       cl_error(2, VV[20], v5values_list);
      }
L32:;
      T0 = ecl_symbol_name(v4name);
      T1 = cl_string(v9field);
      v9field = cl_concatenate(4, ECL_SYM("STRING",807), T0, v7separator_string, T1);
      T0 = cl_symbol_package(v4name);
      T1 = cl_intern(2, v9field, T0);
      T2 = cl_list(2, ECL_SYM("QUOTE",681), v8value);
      T3 = cl_list(3, ECL_SYM("DEFCONSTANT",279), T1, T2);
      v10forms = CONS(T3,v10forms);
     }
     v11 = ecl_cdr(v11);
L28:;
     if (Null(v11)) { goto L54; }
     goto L27;
L54:;
    }
    T0 = cl_list(3, VV[4], v4name, ECL_SYM("INT",1401));
    value0 = cl_listX(3, ECL_SYM("PROGN",673), T0, v10forms);
    return value0;
   }
  }
 }
}
/*      local function DEF-STRUCT                                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC11def_struct(cl_object v1, cl_object v2)
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
   cl_object v4name;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[144])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v5;
    v5 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4name = v5;
   }
   {
    cl_object v5;
    cl_object v6struct_type;
    cl_object v7field;
    cl_object v8type;
    v5 = ecl_list1(ECL_SYM("STRUCT",1412));
    v6struct_type = v5;
    v7field = ECL_NIL;
    v8type = ECL_NIL;
    {
     cl_object v9;
     T0 = cl_list(2, ECL_SYM("*",20), v4name);
     v9 = cl_subst(3, T0, ECL_SYM("POINTER-SELF",1409), v3);
     goto L16;
L15:;
     {
      cl_object v10item;
      v10item = ecl_car(v9);
      if (!(ECL_CONSP(v10item))) { goto L21; }
      {
       cl_fixnum v11;
       v11 = ecl_length(v10item);
       if (!((v11)==(2))) { goto L21; }
      }
      v7field = ecl_car(v10item);
      if (!(ECL_SYMBOLP(v7field))) { goto L21; }
      v8type = ecl_cadr(v10item);
      goto L20;
L21:;
      cl_error(2, VV[22], v10item);
L20:;
      T0 = cl_list(2, v7field, v8type);
      v6struct_type = CONS(T0,v6struct_type);
     }
     v9 = ecl_cdr(v9);
L16:;
     if (Null(v9)) { goto L31; }
     goto L15;
L31:;
    }
    T0 = cl_nreverse(v6struct_type);
    value0 = cl_list(3, VV[4], v4name, T0);
    return value0;
   }
  }
 }
}
/*      function definition for SLOT-POSITION                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L12slot_position(cl_object v1type, cl_object v2field)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  v1type = L4_convert_to_ffi_type(1, v1type);
  {
   cl_object v3ndx;
   cl_object v4is_union;
   v3ndx = ecl_make_fixnum(0);
   v4is_union = ECL_NIL;
   if (!(ECL_ATOM(v1type))) { goto L6; }
   cl_error(2, VV[24], v1type);
   goto L5;
L6:;
   {
    cl_object v5;
    T0 = ecl_car(v1type);
    v5 = ecl_make_bool((T0)==(ECL_SYM("STRUCT",1412)));
    if (Null(v5)) { goto L9; }
    goto L5;
L9:;
    T0 = ecl_car(v1type);
    if (!((T0)==(ECL_SYM("UNION",1413)))) { goto L11; }
    v4is_union = ECL_T;
    goto L5;
L11:;
    cl_error(2, VV[24], v1type);
   }
L5:;
   {
    cl_object v5;
    v5 = ecl_cdr(v1type);
    goto L18;
L17:;
    {
     cl_object v6slot;
     v6slot = ecl_car(v5);
     {
      cl_object v7slot_name;
      cl_object v8slot_type;
      v7slot_name = ecl_car(v6slot);
      v8slot_type = ecl_cadr(v6slot);
      {
       cl_object v10;                             /*  SLOT-SIZE       */
       cl_object v11;                             /*  SLOT-ALIGN      */
       value0 = L7size_of_foreign_type(v8slot_type);
       {
        const int v12 = cl_env_copy->nvalues;
        v10 = value0;
        cl_object v13;
        v13 = (v12<=1)? ECL_NIL : cl_env_copy->values[1];
        v11 = v13;
       }
       T0 = ecl_divide(v3ndx,v11);
       T1 = ecl_ceiling1(T0);
       v3ndx = ecl_times(T1,v11);
       if (!((v7slot_name)==(v2field))) { goto L28; }
       cl_env_copy->nvalues = 3;
       cl_env_copy->values[2] = v10;
       cl_env_copy->values[1] = v8slot_type;
       cl_env_copy->values[0] = v3ndx;
       return cl_env_copy->values[0];
L28:;
       if ((v4is_union)!=ECL_NIL) { goto L22; }
       v3ndx = ecl_plus(v3ndx,v10);
      }
     }
L22:;
    }
    v5 = ecl_cdr(v5);
L18:;
    if (Null(v5)) { goto L34; }
    goto L17;
L34:;
   }
   cl_env_copy->nvalues = 3;
   cl_env_copy->values[2] = ECL_NIL;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = v3ndx;
   return cl_env_copy->values[0];
  }
 }
}
/*      function definition for GET-SLOT-VALUE                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L13get_slot_value(cl_object v1object, cl_object v2struct_type, cl_object v3field)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v5;                                  /*  SLOT-NDX        */
   cl_object v6;                                  /*  SLOT-TYPE       */
   cl_object v7;                                  /*  SLOT-SIZE       */
   value0 = L12slot_position(v2struct_type, v3field);
   {
    const int v8 = cl_env_copy->nvalues;
    v5 = value0;
    cl_object v9;
    v9 = (v8<=1)? ECL_NIL : cl_env_copy->values[1];
    v6 = v9;
    v9 = (v8<=2)? ECL_NIL : cl_env_copy->values[2];
    v7 = v9;
   }
   if ((v7)!=ECL_NIL) { goto L2; }
   cl_error(3, VV[26], v3field, v2struct_type);
L2:;
   value0 = L20_foreign_data_ref(4, v1object, v5, v6, v7);
   return value0;
  }
 }
}
/*      function definition for (SETF GET-SLOT-VALUE)                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L14_setf_get_slot_value_(cl_object v1value, cl_object v2object, cl_object v3struct_type, cl_object v4field)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v6;                                  /*  SLOT-NDX        */
   cl_object v7;                                  /*  SLOT-TYPE       */
   cl_object v8;                                  /*  SLOT-SIZE       */
   value0 = L12slot_position(v3struct_type, v4field);
   {
    const int v9 = cl_env_copy->nvalues;
    v6 = value0;
    cl_object v10;
    v10 = (v9<=1)? ECL_NIL : cl_env_copy->values[1];
    v7 = v10;
    v10 = (v9<=2)? ECL_NIL : cl_env_copy->values[2];
    v8 = v10;
   }
   if ((v8)!=ECL_NIL) { goto L2; }
   cl_error(3, VV[26], v4field, v3struct_type);
L2:;
   value0 = L19_foreign_data_set(v2object, v6, v7, v1value);
   return value0;
  }
 }
}
/*      function definition for GET-SLOT-POINTER                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L15get_slot_pointer(cl_object v1object, cl_object v2struct_type, cl_object v3field)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v5;                                  /*  SLOT-NDX        */
   cl_object v6;                                  /*  SLOT-TYPE       */
   cl_object v7;                                  /*  SLOT-SIZE       */
   value0 = L12slot_position(v2struct_type, v3field);
   {
    const int v8 = cl_env_copy->nvalues;
    v5 = value0;
    cl_object v9;
    v9 = (v8<=1)? ECL_NIL : cl_env_copy->values[1];
    v6 = v9;
    v9 = (v8<=2)? ECL_NIL : cl_env_copy->values[2];
    v7 = v9;
   }
   if ((v7)!=ECL_NIL) { goto L2; }
   cl_error(3, VV[26], v3field, v2struct_type);
L2:;
   value0 = si_foreign_data_pointer(v1object, v5, v7, v6);
   return value0;
  }
 }
}
/*      local function DEF-ARRAY-POINTER                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC16def_array_pointer(cl_object v1, cl_object v2)
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
   cl_object v4name;
   cl_object v5element_type;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[144])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4name = v6;
   }
   if (!(v3==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[144])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5element_type = v6;
   }
   if (Null(v3)) { goto L14; }
   ecl_function_dispatch(cl_env_copy,VV[148])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L14:;
   T0 = cl_list(2, ECL_SYM("*",20), v5element_type);
   value0 = cl_list(3, VV[4], v4name, T0);
   return value0;
  }
 }
}
/*      function definition for DEREF-ARRAY                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L17deref_array(cl_object v1array, cl_object v2array_type, cl_object v3position)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  v2array_type = L4_convert_to_ffi_type(1, v2array_type);
  {
   cl_object v4element_type;
   cl_object v5element_size;
   cl_object v6ndx;
   cl_object v7length;
   v4element_type = ecl_cadr(v2array_type);
   v5element_size = L7size_of_foreign_type(v4element_type);
   v6ndx = ecl_times(v3position,v5element_size);
   value0 = ecl_caddr(v2array_type);
   if ((value0)!=ECL_NIL) { goto L8; }
   v7length = ECL_SYM("*",20);
   goto L6;
L8:;
   v7length = value0;
   goto L6;
L6:;
   if ((v7length)==(ECL_SYM("*",20))) { goto L10; }
   if ((cl_G(3, v7length, v3position, ecl_make_fixnum(-1)))!=ECL_NIL) { goto L10; }
   cl_error(2, VV[31], v1array);
L10:;
   T0 = ecl_plus(v6ndx,v5element_size);
   T1 = si_foreign_data_recast(v1array, T0, v2array_type);
   value0 = L20_foreign_data_ref(4, T1, v6ndx, v4element_type, v5element_size);
   return value0;
  }
 }
}
/*      function definition for (SETF DEREF-ARRAY)                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L18_setf_deref_array_(cl_object v1value, cl_object v2array, cl_object v3array_type, cl_object v4position)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  v3array_type = L4_convert_to_ffi_type(1, v3array_type);
  {
   cl_object v5element_type;
   cl_object v6element_size;
   cl_object v7ndx;
   cl_object v8length;
   v5element_type = ecl_cadr(v3array_type);
   v6element_size = L7size_of_foreign_type(v5element_type);
   v7ndx = ecl_times(v4position,v6element_size);
   value0 = ecl_caddr(v3array_type);
   if ((value0)!=ECL_NIL) { goto L8; }
   v8length = ECL_SYM("*",20);
   goto L6;
L8:;
   v8length = value0;
   goto L6;
L6:;
   if ((v8length)==(ECL_SYM("*",20))) { goto L10; }
   if ((cl_G(3, v8length, v4position, ecl_make_fixnum(-1)))!=ECL_NIL) { goto L10; }
   cl_error(2, VV[31], v2array);
L10:;
   T0 = ecl_plus(v7ndx,v6element_size);
   T1 = si_foreign_data_recast(v2array, T0, v3array_type);
   value0 = L19_foreign_data_set(T1, v7ndx, v5element_type, v1value);
   return value0;
  }
 }
}
/*      function definition for %FOREIGN-DATA-SET                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L19_foreign_data_set(cl_object v1obj, cl_object v2ndx, cl_object v3type, cl_object v4value)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(si_foreign_elt_type_p(v3type))) { goto L1; }
  value0 = si_foreign_data_set_elt(v1obj, v2ndx, v3type, v4value);
  return value0;
L1:;
  if (!(ECL_ATOM(v3type))) { goto L3; }
  value0 = cl_error(2, VV[34], v3type);
  return value0;
L3:;
  T0 = ecl_car(v3type);
  if (!((T0)==(ECL_SYM("*",20)))) { goto L5; }
  value0 = si_foreign_data_set_elt(v1obj, v2ndx, ECL_SYM("POINTER-VOID",1410), v4value);
  return value0;
L5:;
  value0 = si_foreign_data_set(v1obj, v2ndx, v4value);
  return value0;
 }
}
/*      function definition for %FOREIGN-DATA-REF                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L20_foreign_data_ref(cl_narg narg, cl_object v1obj, cl_object v2ndx, cl_object v3type, ...)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<3)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>4)) FEwrong_num_arguments_anonym();
 {
  cl_object v4size;
  cl_object v5size_p;
  va_list args; va_start(args,v3type);
  {
   int i = 3;
   if (i >= narg) {
    v4size = ecl_make_fixnum(0);
    v5size_p = ECL_NIL;
   } else {
    i++;
    v4size = va_arg(args,cl_object);
    v5size_p = ECL_T;
   }
  }
  va_end(args);
  if (Null(si_foreign_elt_type_p(v3type))) { goto L2; }
  value0 = si_foreign_data_ref_elt(v1obj, v2ndx, v3type);
  return value0;
L2:;
  if (!(ECL_ATOM(v3type))) { goto L4; }
  value0 = cl_error(2, VV[34], v3type);
  return value0;
L4:;
  T0 = ecl_car(v3type);
  if (!((T0)==(ECL_SYM("*",20)))) { goto L6; }
  T0 = si_foreign_data_ref_elt(v1obj, v2ndx, ECL_SYM("POINTER-VOID",1410));
  T1 = ecl_cadr(v3type);
  T2 = L7size_of_foreign_type(T1);
  value0 = si_foreign_data_recast(T0, T2, v3type);
  return value0;
L6:;
  if (Null(v5size_p)) { goto L9; }
  T0 = v4size;
  goto L8;
L9:;
  T0 = L7size_of_foreign_type(v3type);
L8:;
  value0 = si_foreign_data_ref(v1obj, v2ndx, T0, v3type);
  return value0;
 }
}
/*      local function DEF-UNION                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC21def_union(cl_object v1, cl_object v2)
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
   cl_object v4name;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[144])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v5;
    v5 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4name = v5;
   }
   {
    cl_object v5;
    cl_object v6struct_type;
    cl_object v7field;
    cl_object v8type;
    v5 = ecl_list1(ECL_SYM("UNION",1413));
    v6struct_type = v5;
    v7field = ECL_NIL;
    v8type = ECL_NIL;
    {
     cl_object v9;
     T0 = cl_list(2, ECL_SYM("*",20), v6struct_type);
     v9 = cl_subst(3, T0, ECL_SYM("POINTER-SELF",1409), v3);
     goto L16;
L15:;
     {
      cl_object v10item;
      v10item = ecl_car(v9);
      if (!(ECL_CONSP(v10item))) { goto L23; }
      {
       cl_fixnum v11;
       v11 = ecl_length(v10item);
       if (!((v11)==(2))) { goto L23; }
      }
      v7field = ecl_car(v10item);
      if (ECL_SYMBOLP(v7field)) { goto L20; }
      goto L21;
L23:;
      goto L21;
L21:;
      cl_error(2, VV[37], v10item);
L20:;
      v8type = ecl_cadr(v10item);
      T0 = cl_list(2, v7field, v8type);
      v6struct_type = CONS(T0,v6struct_type);
     }
     v9 = ecl_cdr(v9);
L16:;
     if (Null(v9)) { goto L33; }
     goto L15;
L33:;
    }
    T0 = cl_nreverse(v6struct_type);
    value0 = cl_list(3, VV[4], v4name, T0);
    return value0;
   }
  }
 }
}
/*      function definition for POINTER-ADDRESS                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L22pointer_address(cl_object v1ptr)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = si_foreign_data_address(v1ptr);
  return value0;
 }
}
/*      function definition for DEREF-POINTER                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L23deref_pointer(cl_object v1ptr, cl_object v2ftype)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  v2ftype = L4_convert_to_ffi_type(1, v2ftype);
  if (Null(si_foreign_elt_type_p(v2ftype))) { goto L3; }
  value0 = si_foreign_data_ref_elt(v1ptr, ecl_make_fixnum(0), v2ftype);
  return value0;
L3:;
  if (!(ECL_ATOM(v2ftype))) { goto L5; }
  value0 = cl_error(2, VV[34], v2ftype);
  return value0;
L5:;
  T0 = ecl_car(v2ftype);
  if (!((T0)==(ECL_SYM("*",20)))) { goto L7; }
  T0 = si_foreign_data_ref_elt(v1ptr, ecl_make_fixnum(0), ECL_SYM("POINTER-VOID",1410));
  T1 = ecl_cadr(v2ftype);
  T2 = L7size_of_foreign_type(T1);
  T3 = ecl_cadr(v2ftype);
  value0 = si_foreign_data_recast(T0, T2, T3);
  return value0;
L7:;
  value0 = cl_error(2, VV[40], v1ptr);
  return value0;
 }
}
/*      function definition for (SETF DEREF-POINTER)                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L24_setf_deref_pointer_(cl_object v1value, cl_object v2ptr, cl_object v3type)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  v3type = L4_convert_to_ffi_type(1, v3type);
  if (Null(si_foreign_elt_type_p(v3type))) { goto L3; }
  value0 = si_foreign_data_set_elt(v2ptr, ecl_make_fixnum(0), v3type, v1value);
  return value0;
L3:;
  value0 = si_foreign_data_set(v2ptr, ecl_make_fixnum(0), v1value);
  return value0;
 }
}
/*      function definition for MAKE-NULL-POINTER                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L25make_null_pointer(cl_object v1ftype)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = si_allocate_foreign_data(v1ftype, ecl_make_fixnum(0));
  return value0;
 }
}
/*      function definition for MAKE-POINTER                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L26make_pointer(cl_object v1addr, cl_object v2type)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = L7size_of_foreign_type(v2type);
  value0 = ecl_make_foreign_data(v2type, ecl_to_ulong(T0), (void*)ecl_to_ulong(v1addr));
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for NULL-CHAR-P                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L27null_char_p(cl_object v1char)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ecl_make_bool((v1char)==(CODE_CHAR(0)));
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for ENSURE-CHAR-CHARACTER                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L28ensure_char_character(cl_object v1char)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ECL_CHARACTERP(v1char))) { goto L1; }
  value0 = v1char;
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  if (!(ECL_FIXNUMP(v1char)||ECL_BIGNUMP(v1char))) { goto L3; }
  value0 = cl_code_char(v1char);
  return value0;
L3:;
  value0 = cl_error(2, VV[46], v1char);
  return value0;
 }
}
/*      function definition for ENSURE-CHAR-INTEGER                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L29ensure_char_integer(cl_object v1char)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ECL_CHARACTERP(v1char))) { goto L1; }
  value0 = cl_char_code(v1char);
  return value0;
L1:;
  if (!(ECL_FIXNUMP(v1char)||ECL_BIGNUMP(v1char))) { goto L3; }
  value0 = v1char;
  cl_env_copy->nvalues = 1;
  return value0;
L3:;
  value0 = cl_error(2, VV[48], v1char);
  return value0;
 }
}
/*      function definition for ENSURE-CHAR-STORABLE                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L30ensure_char_storable(cl_object v1char)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = v1char;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for CHAR-ARRAY-TO-POINTER                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L31char_array_to_pointer(cl_object v1obj)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = si_foreign_data_pointer(v1obj, ecl_make_fixnum(0), ecl_make_fixnum(1), VV[51]);
  return value0;
 }
}
/*      local function CONVERT-FROM-CSTRING                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC32convert_from_cstring(cl_object v1, cl_object v2)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4object;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[144])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v5;
    v5 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4object = v5;
   }
   if (Null(v3)) { goto L8; }
   ecl_function_dispatch(cl_env_copy,VV[148])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L8:;
   value0 = v4object;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function CONVERT-TO-CSTRING                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC33convert_to_cstring(cl_object v1, cl_object v2)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4object;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[144])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v5;
    v5 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4object = v5;
   }
   if (Null(v3)) { goto L8; }
   ecl_function_dispatch(cl_env_copy,VV[148])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L8:;
   value0 = cl_list(2, ECL_SYM("COPY-TO-SIMPLE-BASE-STRING",1062), v4object);
   return value0;
  }
 }
}
/*      local function FREE-CSTRING                                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC34free_cstring(cl_object v1, cl_object v2)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4cstring;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[144])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v5;
    v5 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4cstring = v5;
   }
   if (Null(v3)) { goto L8; }
   ecl_function_dispatch(cl_env_copy,VV[148])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L8:;
   value0 = v4cstring;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function WITH-CSTRING                                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC35with_cstring(cl_object v1, cl_object v2)
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
   cl_object v4;
   cl_object v5;
   cl_object v6cstring;
   cl_object v7string;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[144])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v8;
    v8 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4 = v8;
   }
   v5 = v4;
   if (!(v5==ECL_NIL)) { goto L10; }
   ecl_function_dispatch(cl_env_copy,VV[144])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L10:;
   {
    cl_object v8;
    v8 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v6cstring = v8;
   }
   if (!(v5==ECL_NIL)) { goto L16; }
   ecl_function_dispatch(cl_env_copy,VV[144])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L16:;
   {
    cl_object v8;
    v8 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v7string = v8;
   }
   if (Null(v5)) { goto L21; }
   ecl_function_dispatch(cl_env_copy,VV[148])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L21:;
   T0 = cl_list(2, VV[54], v7string);
   T1 = cl_list(2, v6cstring, T0);
   T2 = ecl_list1(T1);
   value0 = cl_listX(3, ECL_SYM("LET",479), T2, v3);
   return value0;
  }
 }
}
/*      local function WITH-CSTRINGS                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC36with_cstrings(cl_object v1, cl_object v2)
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
   cl_object v4bindings;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[144])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v5;
    v5 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4bindings = v5;
   }
   if (Null(v4bindings)) { goto L8; }
   T0 = ecl_car(v4bindings);
   T1 = ecl_cdr(v4bindings);
   T2 = cl_listX(3, ECL_SYM("WITH-CSTRINGS",2111), T1, v3);
   value0 = cl_list(3, VV[56], T0, T2);
   return value0;
L8:;
   value0 = CONS(ECL_SYM("PROGN",673),v3);
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for FOREIGN-STRING-LENGTH                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L37foreign_string_length(cl_object v1foreign_string)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ecl_make_int(strlen((v1foreign_string)->foreign.data));
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for CONVERT-FROM-FOREIGN-STRING           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L38convert_from_foreign_string(cl_narg narg, cl_object v1foreign_string, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2length;
  cl_object v3null_terminated_p;
  ecl_va_list args; ecl_va_start(args,v1foreign_string,narg,1);
  {
   cl_object keyvars[4];
   cl_parse_key(args,2,L38convert_from_foreign_stringkeys,keyvars,NULL,FALSE);
   ecl_va_end(args);
   v2length = keyvars[0];
   if (Null(keyvars[3])) {
    v3null_terminated_p = ECL_T;
   } else {
    v3null_terminated_p = keyvars[1];
   }
  }
  if ((v2length)!=ECL_NIL) { goto L3; }
  if (Null(v3null_terminated_p)) { goto L3; }
  v2length = L37foreign_string_length(v1foreign_string);
  goto L2;
L3:;
  if (ECL_FIXNUMP(v2length)||ECL_BIGNUMP(v2length)) { goto L2; }
  cl_error(2, VV[59], v2length);
L2:;
  {
   cl_object v4;
   {
        cl_index length = ecl_to_fixnum(v2length);
        cl_object output = ecl_alloc_simple_base_string(length);
        memcpy(output->base_string.self, (v1foreign_string)->foreign.data, length);
        v4= output;
        }
   value0 = v4;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for CONVERT-TO-FOREIGN-STRING             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L39convert_to_foreign_string(cl_object v1string_designator)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2lisp_string;
   v2lisp_string = cl_string(v1string_designator);
   {
    cl_object v3;
    {
        cl_object lisp_string = v2lisp_string;
        cl_index size = lisp_string->base_string.fillp;
        cl_object output = ecl_allocate_foreign_data(VV[187], size+1);
        memcpy(output->foreign.data, lisp_string->base_string.self, size);
        output->foreign.data[size] = '\0';
        v3= output;
        }
    value0 = v3;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      function definition for ALLOCATE-FOREIGN-STRING               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L40allocate_foreign_string(cl_narg narg, cl_object v1size, ...)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2unsigned;
  ecl_va_list args; ecl_va_start(args,v1size,narg,1);
  {
   cl_object keyvars[2];
   cl_parse_key(args,1,L40allocate_foreign_stringkeys,keyvars,NULL,FALSE);
   ecl_va_end(args);
   if (Null(keyvars[1])) {
    v2unsigned = ECL_T;
   } else {
    v2unsigned = keyvars[0];
   }
  }
  if (Null(v2unsigned)) { goto L3; }
  T0 = ECL_SYM("UNSIGNED-CHAR",1420);
  goto L2;
L3:;
  T0 = ECL_SYM("CHAR",1393);
L2:;
  T1 = cl_list(2, ECL_SYM("*",20), T0);
  T2 = ecl_one_plus(v1size);
  value0 = si_allocate_foreign_data(T1, T2);
  return value0;
 }
}
/*      local function WITH-FOREIGN-STRING                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC41with_foreign_string(cl_object v1, cl_object v2)
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
   cl_object v4;
   cl_object v5;
   cl_object v6foreign_string;
   cl_object v7lisp_string;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[144])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v8;
    v8 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4 = v8;
   }
   v5 = v4;
   if (!(v5==ECL_NIL)) { goto L10; }
   ecl_function_dispatch(cl_env_copy,VV[144])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L10:;
   {
    cl_object v8;
    v8 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v6foreign_string = v8;
   }
   if (!(v5==ECL_NIL)) { goto L16; }
   ecl_function_dispatch(cl_env_copy,VV[144])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L16:;
   {
    cl_object v8;
    v8 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v7lisp_string = v8;
   }
   if (Null(v5)) { goto L21; }
   ecl_function_dispatch(cl_env_copy,VV[148])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L21:;
   T0 = cl_list(2, VV[61], v7lisp_string);
   T1 = cl_list(2, v6foreign_string, T0);
   T2 = ecl_list1(T1);
   T3 = CONS(ECL_SYM("WITH-RESTORED-INTERRUPTS",1805),v3);
   T4 = cl_list(2, VV[16], v6foreign_string);
   T5 = cl_list(3, ECL_SYM("UNWIND-PROTECT",890), T3, T4);
   T6 = cl_list(2, ECL_SYM("WITHOUT-INTERRUPTS",1804), T5);
   value0 = cl_list(3, ECL_SYM("LET*",480), T2, T6);
   return value0;
  }
 }
}
/*      local function WITH-FOREIGN-STRINGS                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC42with_foreign_strings(cl_object v1, cl_object v2)
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
   cl_object v4bindings;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[144])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v5;
    v5 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4bindings = v5;
   }
   if (Null(v4bindings)) { goto L8; }
   T0 = ecl_car(v4bindings);
   T1 = ecl_cdr(v4bindings);
   T2 = cl_listX(3, ECL_SYM("WITH-FOREIGN-STRINGS",2115), T1, v3);
   value0 = cl_list(3, VV[63], T0, T2);
   return value0;
L8:;
   value0 = CONS(ECL_SYM("PROGN",673),v3);
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function WITH-FOREIGN-OBJECT                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC43with_foreign_object(cl_object v1, cl_object v2)
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
   cl_object v4;
   cl_object v5;
   cl_object v6var;
   cl_object v7type;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[144])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v8;
    v8 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4 = v8;
   }
   v5 = v4;
   if (!(v5==ECL_NIL)) { goto L10; }
   ecl_function_dispatch(cl_env_copy,VV[144])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L10:;
   {
    cl_object v8;
    v8 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v6var = v8;
   }
   if (!(v5==ECL_NIL)) { goto L16; }
   ecl_function_dispatch(cl_env_copy,VV[144])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L16:;
   {
    cl_object v8;
    v8 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v7type = v8;
   }
   if (Null(v5)) { goto L21; }
   ecl_function_dispatch(cl_env_copy,VV[148])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L21:;
   T0 = cl_list(2, VV[15], v7type);
   T1 = cl_list(2, v6var, T0);
   T2 = ecl_list1(T1);
   T3 = CONS(ECL_SYM("WITH-RESTORED-INTERRUPTS",1805),v3);
   T4 = cl_list(2, VV[16], v6var);
   T5 = cl_list(3, ECL_SYM("UNWIND-PROTECT",890), T3, T4);
   T6 = cl_list(2, ECL_SYM("WITHOUT-INTERRUPTS",1804), T5);
   value0 = cl_list(3, ECL_SYM("LET",479), T2, T6);
   return value0;
  }
 }
}
/*      local function WITH-FOREIGN-OBJECTS                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC44with_foreign_objects(cl_object v1, cl_object v2)
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
   cl_object v4bindings;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[144])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v5;
    v5 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4bindings = v5;
   }
   if (Null(v4bindings)) { goto L8; }
   T0 = ecl_car(v4bindings);
   T1 = ecl_cdr(v4bindings);
   T2 = cl_listX(3, ECL_SYM("WITH-FOREIGN-OBJECTS",2113), T1, v3);
   value0 = cl_list(3, VV[65], T0, T2);
   return value0;
L8:;
   value0 = CONS(ECL_SYM("PROGN",673),v3);
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function WITH-CAST-POINTER                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC45with_cast_pointer(cl_object v1, cl_object v2)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4bind;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[144])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v5;
    v5 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4bind = v5;
   }
   {
    cl_object v5binding_name;
    cl_object v6ptr;
    cl_object v7type;
    v5binding_name = ECL_NIL;
    v6ptr = ECL_NIL;
    v7type = ECL_NIL;
    {
     cl_fixnum v8;
     v8 = ecl_length(v4bind);
     if (!((v8)==(2))) { goto L13; }
     v5binding_name = ecl_car(v4bind);
     v6ptr = v5binding_name;
     v7type = ecl_cadr(v4bind);
     goto L11;
L13:;
     if (!((v8)==(3))) { goto L20; }
     v5binding_name = ecl_car(v4bind);
     v6ptr = ecl_cadr(v4bind);
     v7type = ecl_caddr(v4bind);
     goto L11;
L20:;
     cl_error(1, VV[67]);
    }
L11:;
    T0 = cl_list(2, ECL_SYM("QUOTE",681), v7type);
    T1 = cl_list(2, VV[13], T0);
    T2 = cl_list(4, ECL_SYM("FOREIGN-DATA-RECAST",1378), v6ptr, T1, ECL_SYM("VOID",1414));
    T3 = cl_list(2, ECL_SYM("QUOTE",681), v7type);
    T4 = cl_list(2, VV[13], T3);
    T5 = cl_list(2, ECL_SYM("QUOTE",681), v7type);
    T6 = cl_list(5, ECL_SYM("FOREIGN-DATA-POINTER",1377), T2, ecl_make_fixnum(0), T4, T5);
    T7 = cl_list(2, v5binding_name, T6);
    T8 = ecl_list1(T7);
    value0 = cl_listX(3, ECL_SYM("LET",479), T8, v3);
    return value0;
   }
  }
 }
}
/*      function definition for LISP-TO-C-NAME                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L46lisp_to_c_name(cl_object v1name)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (ECL_STRINGP(v1name)) { goto L3; }
  if (!(ECL_SYMBOLP(v1name))) { goto L1; }
  goto L2;
L3:;
L2:;
  T0 = cl_string(v1name);
  T1 = cl_substitute(3, CODE_CHAR(45), CODE_CHAR(95), T0);
  T2 = cl_string_upcase(1, T1);
  T3 = cl_intern(1, T2);
  cl_env_copy->nvalues = 2;
  cl_env_copy->values[1] = T3;
  cl_env_copy->values[0] = v1name;
  return cl_env_copy->values[0];
L1:;
  if (!(ECL_CONSP(v1name))) { goto L5; }
  {
   cl_fixnum v2;
   v2 = ecl_length(v1name);
   if (!((v2)==(2))) { goto L5; }
  }
  T0 = ecl_car(v1name);
  T1 = ecl_cadr(v1name);
  cl_env_copy->nvalues = 2;
  cl_env_copy->values[1] = T1;
  cl_env_copy->values[0] = T0;
  return cl_env_copy->values[0];
L5:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for %CONVERT-TO-ARG-TYPE                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L47_convert_to_arg_type(cl_object v1type)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2type;
   v2type = L4_convert_to_ffi_type(1, v1type);
   if (!(ECL_ATOM(v2type))) { goto L2; }
   value0 = v2type;
   cl_env_copy->nvalues = 1;
   return value0;
L2:;
   T0 = ecl_car(v2type);
   if (!((T0)==(ECL_SYM("*",20)))) { goto L4; }
   value0 = ECL_SYM("POINTER-VOID",1410);
   cl_env_copy->nvalues = 1;
   return value0;
L4:;
   T0 = ecl_car(v2type);
   if (!((T0)==(ECL_SYM("ARRAY",1221)))) { goto L6; }
   value0 = ECL_SYM("POINTER-VOID",1410);
   cl_env_copy->nvalues = 1;
   return value0;
L6:;
   value0 = cl_error(2, VV[70], v2type);
   return value0;
  }
 }
}
/*      function definition for %CONVERT-TO-RETURN-TYPE               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L48_convert_to_return_type(cl_object v1type)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2type;
   v2type = L4_convert_to_ffi_type(1, v1type);
   if (!(ECL_ATOM(v2type))) { goto L2; }
   value0 = v2type;
   cl_env_copy->nvalues = 1;
   return value0;
L2:;
   T0 = ecl_car(v2type);
   if (!((T0)==(ECL_SYM("*",20)))) { goto L4; }
   value0 = ecl_cadr(v2type);
   cl_env_copy->nvalues = 1;
   return value0;
L4:;
   value0 = v2type;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for PRODUCE-FUNCTION-CALL                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L49produce_function_call(cl_object v1c_name, cl_object v2nargs)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_times(v2nargs,ecl_make_fixnum(3));
  T1 = ecl_one_minus(T0);
  T2 = ((ecl_float_nan_p(T1) || ecl_greatereq(ecl_make_fixnum(0),T1))?ecl_make_fixnum(0):T1);
  T3 = cl_subseq(3, VV[74], ecl_make_fixnum(0), T2);
  value0 = cl_format(4, ECL_NIL, VV[73], v1c_name, T3);
  return value0;
 }
}
/*      local function DEF-LIB-FUNCTION                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC51def_lib_function(cl_object v1, cl_object v2)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4name;
   cl_object v5args;
   cl_object v6;
   cl_object v7returning;
   cl_object v8;
   cl_object v9module;
   cl_object v10;
   cl_object v11call;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[144])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v12;
    v12 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4name = v12;
   }
   if (!(v3==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[144])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v12;
    v12 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5args = v12;
   }
   v6 = ecl_function_dispatch(cl_env_copy,VV[145])(2, v3, VV[75]) /*  SEARCH-KEYWORD */;
   if (!((v6)==(ECL_SYM("MISSING-KEYWORD",2015)))) { goto L16; }
   v7returning = ECL_NIL;
   goto L15;
L16:;
   v7returning = v6;
L15:;
   v8 = ecl_function_dispatch(cl_env_copy,VV[145])(2, v3, VV[76]) /*  SEARCH-KEYWORD */;
   if (!((v8)==(ECL_SYM("MISSING-KEYWORD",2015)))) { goto L20; }
   v9module = ECL_NIL;
   goto L19;
L20:;
   v9module = v8;
L19:;
   v10 = ecl_function_dispatch(cl_env_copy,VV[145])(2, v3, VV[77]) /*  SEARCH-KEYWORD */;
   if (!((v10)==(ECL_SYM("MISSING-KEYWORD",2015)))) { goto L24; }
   v11call = ECL_SYM("DEFAULT",1237);
   goto L23;
L24:;
   v11call = v10;
L23:;
   ecl_function_dispatch(cl_env_copy,VV[146])(2, v3, VV[78]) /*  CHECK-KEYWORD */;
   {
    cl_object v13;                                /*  C-NAME          */
    cl_object v14;                                /*  LISP-NAME       */
    value0 = L46lisp_to_c_name(v4name);
    {
     const int v15 = cl_env_copy->nvalues;
     v13 = value0;
     cl_object v16;
     v16 = (v15<=1)? ECL_NIL : cl_env_copy->values[1];
     v14 = v16;
    }
    {
     cl_object v15return_type;
     cl_object v16argtypes;
     v15return_type = L48_convert_to_return_type(v7returning);
     {
      cl_object v17;
      {
       cl_object v18;
       v18 = ecl_make_cfun((cl_objectfn_fixed)LC50__lambda380,ECL_NIL,Cblock,1);
       v17 = v18;
      }
      {
       cl_object v18;
       cl_object v19;
       v18 = ECL_NIL;
       {
        cl_object v20;
        v20 = v5args;
        if (ecl_unlikely(!ECL_LISTP(v20))) FEtype_error_list(v20);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v19 = v20;
       }
       {
        cl_object v20;
        cl_object v21;
        v20 = ecl_list1(ECL_NIL);
        v21 = v20;
L37:;
        if (!(ecl_endp(v19))) { goto L39; }
        goto L38;
L39:;
        v18 = _ecl_car(v19);
        {
         cl_object v22;
         v22 = _ecl_cdr(v19);
         if (ecl_unlikely(!ECL_LISTP(v22))) FEtype_error_list(v22);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         v19 = v22;
        }
        {
         cl_object v22;
         v22 = v21;
         if (ecl_unlikely(ECL_ATOM(v22))) FEtype_error_cons(v22);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         T0 = v22;
        }
        T1 = ecl_function_dispatch(cl_env_copy,v17)(1, v18);
        v21 = ecl_list1(T1);
        (ECL_CONS_CDR(T0)=v21,T0);
        goto L37;
L38:;
        v16argtypes = ecl_cdr(v20);
        goto L29;
       }
      }
     }
L29:;
     T0 = cl_list(2, ECL_SYM("QUOTE",681), v13);
     T1 = cl_listX(4, ECL_SYM("FIND-FOREIGN-SYMBOL",1372), T0, v9module, VV[80]);
     T2 = cl_list(2, VV[79], T1);
     T3 = ecl_list1(T2);
     {
      cl_object v17;
      v17 = (ECL_SYM("FIRST",373)->symbol.gfdef);
      {
       cl_object v18;
       cl_object v19;
       v18 = ECL_NIL;
       {
        cl_object v20;
        v20 = v5args;
        if (ecl_unlikely(!ECL_LISTP(v20))) FEtype_error_list(v20);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v19 = v20;
       }
       {
        cl_object v20;
        cl_object v21;
        v20 = ecl_list1(ECL_NIL);
        v21 = v20;
L63:;
        if (!(ecl_endp(v19))) { goto L65; }
        goto L64;
L65:;
        v18 = _ecl_car(v19);
        {
         cl_object v22;
         v22 = _ecl_cdr(v19);
         if (ecl_unlikely(!ECL_LISTP(v22))) FEtype_error_list(v22);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         v19 = v22;
        }
        {
         cl_object v22;
         v22 = v21;
         if (ecl_unlikely(ECL_ATOM(v22))) FEtype_error_cons(v22);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         T5 = v22;
        }
        T6 = ecl_function_dispatch(cl_env_copy,v17)(1, v18);
        v21 = ecl_list1(T6);
        (ECL_CONS_CDR(T5)=v21,T5);
        goto L63;
L64:;
        T4 = ecl_cdr(v20);
        goto L55;
       }
      }
     }
L55:;
     T5 = cl_list(2, ECL_SYM("QUOTE",681), v15return_type);
     T6 = cl_list(2, ECL_SYM("QUOTE",681), v16argtypes);
     {
      cl_object v17;
      v17 = (ECL_SYM("FIRST",373)->symbol.gfdef);
      {
       cl_object v18;
       cl_object v19;
       v18 = ECL_NIL;
       {
        cl_object v20;
        v20 = v5args;
        if (ecl_unlikely(!ECL_LISTP(v20))) FEtype_error_list(v20);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v19 = v20;
       }
       {
        cl_object v20;
        cl_object v21;
        v20 = ecl_list1(ECL_NIL);
        v21 = v20;
L89:;
        if (!(ecl_endp(v19))) { goto L91; }
        goto L90;
L91:;
        v18 = _ecl_car(v19);
        {
         cl_object v22;
         v22 = _ecl_cdr(v19);
         if (ecl_unlikely(!ECL_LISTP(v22))) FEtype_error_list(v22);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         v19 = v22;
        }
        {
         cl_object v22;
         v22 = v21;
         if (ecl_unlikely(ECL_ATOM(v22))) FEtype_error_cons(v22);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         T8 = v22;
        }
        T9 = ecl_function_dispatch(cl_env_copy,v17)(1, v18);
        v21 = ecl_list1(T9);
        (ECL_CONS_CDR(T8)=v21,T8);
        goto L89;
L90:;
        T7 = ecl_cdr(v20);
        goto L81;
       }
      }
     }
L81:;
     T8 = CONS(ECL_SYM("LIST",483),T7);
     T9 = cl_list(6, ECL_SYM("CALL-CFUN",1650), VV[79], T5, T6, T8, v11call);
     T10 = cl_list(4, ECL_SYM("DEFUN",291), v14, T4, T9);
     value0 = cl_list(3, ECL_SYM("LET",479), T3, T10);
     return value0;
    }
   }
  }
 }
}
/*      local function LAMBDA380                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC50__lambda380(cl_object v1a)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_cadr(v1a);
  value0 = L47_convert_to_arg_type(T0);
  return value0;
 }
}
/*      local function DEF-FUNCTION                                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC53def_function(cl_object v1, cl_object v2)
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
   cl_object v4name;
   cl_object v5args;
   cl_object v6;
   cl_object v7module;
   cl_object v8;
   cl_object v9returning;
   cl_object v10;
   cl_object v11call;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[144])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v12;
    v12 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4name = v12;
   }
   if (!(v3==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[144])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v12;
    v12 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5args = v12;
   }
   v6 = ecl_function_dispatch(cl_env_copy,VV[145])(2, v3, VV[76]) /*  SEARCH-KEYWORD */;
   if (!((v6)==(ECL_SYM("MISSING-KEYWORD",2015)))) { goto L16; }
   v7module = ECL_NIL;
   goto L15;
L16:;
   v7module = v6;
L15:;
   v8 = ecl_function_dispatch(cl_env_copy,VV[145])(2, v3, VV[75]) /*  SEARCH-KEYWORD */;
   if (!((v8)==(ECL_SYM("MISSING-KEYWORD",2015)))) { goto L20; }
   v9returning = ECL_SYM("VOID",1414);
   goto L19;
L20:;
   v9returning = v8;
L19:;
   v10 = ecl_function_dispatch(cl_env_copy,VV[145])(2, v3, VV[77]) /*  SEARCH-KEYWORD */;
   if (!((v10)==(ECL_SYM("MISSING-KEYWORD",2015)))) { goto L24; }
   v11call = ECL_SYM("DEFAULT",1237);
   goto L23;
L24:;
   v11call = v10;
L23:;
   ecl_function_dispatch(cl_env_copy,VV[146])(2, v3, VV[82]) /*  CHECK-KEYWORD */;
   if (Null(v7module)) { goto L27; }
   if (Null(ecl_symbol_value(ECL_SYM("*USE-DFFI*",2059)))) { goto L27; }
   value0 = cl_list(9, VV[81], v4name, v5args, VV[75], v9returning, VV[76], v7module, VV[77], v11call);
   return value0;
L27:;
   {
    cl_object v13;                                /*  C-NAME          */
    cl_object v14;                                /*  LISP-NAME       */
    value0 = L46lisp_to_c_name(v4name);
    {
     const int v15 = cl_env_copy->nvalues;
     v13 = value0;
     cl_object v16;
     v16 = (v15<=1)? ECL_NIL : cl_env_copy->values[1];
     v14 = v16;
    }
    {
     cl_object v15arguments;
     cl_object v16arg_types;
     cl_object v17return_type;
     cl_fixnum v18nargs;
     cl_object v19c_string;
     cl_object v20casting_required;
     cl_object v21inline_form;
     {
      cl_object v22;
      v22 = (ECL_SYM("FIRST",373)->symbol.gfdef);
      {
       cl_object v23;
       cl_object v24;
       v23 = ECL_NIL;
       {
        cl_object v25;
        v25 = v5args;
        if (ecl_unlikely(!ECL_LISTP(v25))) FEtype_error_list(v25);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v24 = v25;
       }
       {
        cl_object v25;
        cl_object v26;
        v25 = ecl_list1(ECL_NIL);
        v26 = v25;
L39:;
        if (!(ecl_endp(v24))) { goto L41; }
        goto L40;
L41:;
        v23 = _ecl_car(v24);
        {
         cl_object v27;
         v27 = _ecl_cdr(v24);
         if (ecl_unlikely(!ECL_LISTP(v27))) FEtype_error_list(v27);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         v24 = v27;
        }
        {
         cl_object v27;
         v27 = v26;
         if (ecl_unlikely(ECL_ATOM(v27))) FEtype_error_cons(v27);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         T0 = v27;
        }
        T1 = ecl_function_dispatch(cl_env_copy,v22)(1, v23);
        v26 = ecl_list1(T1);
        (ECL_CONS_CDR(T0)=v26,T0);
        goto L39;
L40:;
        v15arguments = ecl_cdr(v25);
        goto L31;
       }
      }
     }
L31:;
     {
      cl_object v22;
      {
       cl_object v23;
       v23 = ecl_make_cfun((cl_objectfn_fixed)LC52__lambda425,ECL_NIL,Cblock,1);
       v22 = v23;
      }
      {
       cl_object v23;
       cl_object v24;
       v23 = ECL_NIL;
       {
        cl_object v25;
        v25 = v5args;
        if (ecl_unlikely(!ECL_LISTP(v25))) FEtype_error_list(v25);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v24 = v25;
       }
       {
        cl_object v25;
        cl_object v26;
        v25 = ecl_list1(ECL_NIL);
        v26 = v25;
L65:;
        if (!(ecl_endp(v24))) { goto L67; }
        goto L66;
L67:;
        v23 = _ecl_car(v24);
        {
         cl_object v27;
         v27 = _ecl_cdr(v24);
         if (ecl_unlikely(!ECL_LISTP(v27))) FEtype_error_list(v27);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         v24 = v27;
        }
        {
         cl_object v27;
         v27 = v26;
         if (ecl_unlikely(ECL_ATOM(v27))) FEtype_error_cons(v27);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         T0 = v27;
        }
        T1 = ecl_function_dispatch(cl_env_copy,v22)(1, v23);
        v26 = ecl_list1(T1);
        (ECL_CONS_CDR(T0)=v26,T0);
        goto L65;
L66:;
        v16arg_types = ecl_cdr(v25);
        goto L57;
       }
      }
     }
L57:;
     v17return_type = L48_convert_to_return_type(v9returning);
     v18nargs = ecl_length(v15arguments);
     v19c_string = L49produce_function_call(v13, ecl_make_fixnum(v18nargs));
     if (!(ecl_eql(v17return_type,ECL_SYM("VOID",1414)))) { goto L95; }
     value0 = VV[83];
     goto L93;
L95:;
     value0 = ECL_NIL;
     goto L93;
L93:;
     if ((value0)!=ECL_NIL) { goto L92; }
     if (!(ecl_eql(v17return_type,ECL_SYM("CSTRING",1397)))) { goto L98; }
     value0 = VV[84];
     goto L90;
L98:;
     value0 = ECL_NIL;
     goto L90;
L92:;
     goto L90;
L90:;
     if ((value0)!=ECL_NIL) { goto L89; }
     T0 = si_foreign_elt_type_p(v17return_type);
     goto L87;
L89:;
     T0 = value0;
     goto L87;
L87:;
     v20casting_required = Null(T0)?ECL_T:ECL_NIL;
     if (Null(v20casting_required)) { goto L102; }
     T0 = ECL_SYM("POINTER-VOID",1410);
     goto L101;
L102:;
     T0 = v17return_type;
L101:;
     v21inline_form = cl_listX(6, ECL_SYM("C-INLINE",2063), v15arguments, v16arg_types, T0, v19c_string, VV[85]);
     if (Null(v20casting_required)) { goto L104; }
     T0 = cl_list(2, ECL_SYM("QUOTE",681), v17return_type);
     T1 = cl_list(2, VV[13], T0);
     T2 = cl_list(2, ECL_SYM("QUOTE",681), v17return_type);
     v21inline_form = cl_list(4, ECL_SYM("FOREIGN-DATA-RECAST",1378), v21inline_form, T1, T2);
L104:;
     if (!((v18nargs)>(36))) { goto L107; }
     cl_error(1, VV[86]);
L107:;
     value0 = cl_list(4, ECL_SYM("DEFUN",291), v14, v15arguments, v21inline_form);
     return value0;
    }
   }
  }
 }
}
/*      local function LAMBDA425                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC52__lambda425(cl_object v1type)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_cadr(v1type);
  value0 = L47_convert_to_arg_type(T0);
  return value0;
 }
}
/*      local function DEF-FOREIGN-VAR                                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC54def_foreign_var(cl_object v1, cl_object v2)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4name;
   cl_object v5type;
   cl_object v6module;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[144])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v7;
    v7 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4name = v7;
   }
   if (!(v3==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[144])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v7;
    v7 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5type = v7;
   }
   if (!(v3==ECL_NIL)) { goto L15; }
   ecl_function_dispatch(cl_env_copy,VV[144])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L15:;
   {
    cl_object v7;
    v7 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v6module = v7;
   }
   if (Null(v3)) { goto L20; }
   ecl_function_dispatch(cl_env_copy,VV[148])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L20:;
   {
    cl_object v8;                                 /*  C-NAME          */
    cl_object v9;                                 /*  LISP-NAME       */
    value0 = L46lisp_to_c_name(v4name);
    {
     const int v10 = cl_env_copy->nvalues;
     v8 = value0;
     cl_object v11;
     v11 = (v10<=1)? ECL_NIL : cl_env_copy->values[1];
     v9 = v11;
    }
    {
     cl_object v10ffi_type;
     cl_object v11can_deref;
     cl_object v12inline_form;
     v10ffi_type = L4_convert_to_ffi_type(1, v5type);
     value0 = si_foreign_elt_type_p(v10ffi_type);
     if ((value0)!=ECL_NIL) { goto L26; }
     if (!(ECL_CONSP(v10ffi_type))) { goto L29; }
     {
      cl_object v13;
      v13 = ecl_car(v10ffi_type);
      if (!((v13)==(ECL_SYM("*",20)))) { goto L36; }
      value0 = VV[88];
      goto L34;
L36:;
      value0 = ECL_NIL;
      goto L34;
L34:;
      if ((value0)!=ECL_NIL) { goto L33; }
      if (!(ecl_eql(v13,ECL_SYM("ARRAY",1221)))) { goto L39; }
      v11can_deref = VV[89];
      goto L24;
L39:;
      v11can_deref = ECL_NIL;
      goto L24;
L33:;
      v11can_deref = value0;
      goto L24;
     }
L29:;
     v11can_deref = ECL_NIL;
     goto L24;
L26:;
     v11can_deref = value0;
     goto L24;
L24:;
     if (Null(v6module)) { goto L42; }
     if (Null(ecl_symbol_value(ECL_SYM("*USE-DFFI*",2059)))) { goto L42; }
     T0 = cl_list(2, ECL_SYM("QUOTE",681), v5type);
     T1 = L7size_of_foreign_type(v5type);
     v12inline_form = cl_list(5, ECL_SYM("FIND-FOREIGN-SYMBOL",1372), v8, v6module, T0, T1);
     goto L41;
L42:;
     T0 = L7size_of_foreign_type(v5type);
     T1 = cl_format(5, ECL_NIL, VV[90], v5type, T0, v8);
     v12inline_form = cl_listX(6, ECL_SYM("C-INLINE",2063), ECL_NIL, ECL_NIL, ECL_SYM("OBJECT",1305), T1, VV[91]);
L41:;
     if (Null(v11can_deref)) { goto L45; }
     T0 = cl_list(2, ECL_SYM("QUOTE",681), v9);
     T1 = cl_list(4, ECL_SYM("PUT-SYSPROP",1141), T0, VV[92], v12inline_form);
     T2 = cl_list(2, ECL_SYM("QUOTE",681), v9);
     T3 = cl_list(3, ECL_SYM("GET-SYSPROP",1087), T2, VV[92]);
     T4 = cl_list(2, ECL_SYM("QUOTE",681), v5type);
     T5 = cl_list(3, VV[41], T3, T4);
     T6 = cl_list(3, ECL_SYM("DEFINE-SYMBOL-MACRO",284), v9, T5);
     T7 = cl_list(3, ECL_SYM("EVAL-WHEN",342), VV[1], T6);
     value0 = cl_list(3, ECL_SYM("PROGN",673), T1, T7);
     return value0;
L45:;
     value0 = cl_list(3, ECL_SYM("DEFPARAMETER",287), v9, v12inline_form);
     return value0;
    }
   }
  }
 }
}
/*      function definition for FIND-FOREIGN-LIBRARY                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L55find_foreign_library(cl_narg narg, cl_object v1names, cl_object v2directories, ...)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 {
  cl_object v3drive_letters;
  cl_object v4types;
  ecl_va_list args; ecl_va_start(args,v2directories,narg,2);
  {
   cl_object keyvars[4];
   cl_parse_key(args,2,L55find_foreign_librarykeys,keyvars,NULL,FALSE);
   ecl_va_end(args);
   v3drive_letters = keyvars[0];
   v4types = keyvars[1];
  }
  if (ECL_LISTP(v1names)) { goto L1; }
  v1names = ecl_list1(v1names);
L1:;
  if (ECL_LISTP(v2directories)) { goto L4; }
  v2directories = ecl_list1(v2directories);
L4:;
  if ((v4types)!=ECL_NIL) { goto L7; }
  v4types = VV[94];
L7:;
  if (ECL_LISTP(v4types)) { goto L10; }
  v4types = ecl_list1(v4types);
L10:;
  if (ECL_LISTP(v3drive_letters)) { goto L13; }
  v3drive_letters = ecl_list1(v3drive_letters);
L13:;
  v3drive_letters = VV[95];
  {
   cl_object v5;
   v5 = v3drive_letters;
   goto L22;
L21:;
   {
    cl_object v6d;
    v6d = ecl_car(v5);
    {
     cl_object v7;
     v7 = v2directories;
     goto L30;
L29:;
     {
      cl_object v8p;
      v8p = ecl_car(v7);
      {
       cl_object v9;
       v9 = v1names;
       goto L38;
L37:;
       {
        cl_object v10n;
        v10n = ecl_car(v9);
        {
         cl_object v11;
         v11 = v4types;
         goto L46;
L45:;
         {
          cl_object v12e;
          v12e = ecl_car(v11);
          {
          cl_object v13full_path;
          if (Null(cl_pathnamep(v8p))) { goto L53; }
          T0 = cl_pathname_directory(1, v8p);
          goto L52;
L53:;
          if (!(ECL_STRINGP(v8p))) { goto L55; }
          T1 = cl_parse_namestring(1, v8p);
          T0 = cl_pathname_directory(1, T1);
          goto L52;
L55:;
          if (!(ECL_LISTP(v8p))) { goto L57; }
          T0 = v8p;
          goto L52;
L57:;
          T0 = si_etypecase_error(v8p, VV[96]);
L52:;
          T1 = cl_make_pathname(8, ECL_SYM("DEVICE",1239), v6d, ECL_SYM("DIRECTORY",1241), T0, ECL_SYM("NAME",1300), v10n, ECL_SYM("TYPE",1346), v12e);
          v13full_path = cl_probe_file(T1);
          if (Null(v13full_path)) { goto L50; }
          value0 = v13full_path;
          cl_env_copy->nvalues = 1;
          return value0;
          }
L50:;
         }
         v11 = ecl_cdr(v11);
L46:;
         if (Null(v11)) { goto L62; }
         goto L45;
L62:;
        }
       }
       v9 = ecl_cdr(v9);
L38:;
       if (Null(v9)) { goto L66; }
       goto L37;
L66:;
      }
     }
     v7 = ecl_cdr(v7);
L30:;
     if (Null(v7)) { goto L70; }
     goto L29;
L70:;
    }
   }
   v5 = ecl_cdr(v5);
L22:;
   if (Null(v5)) { goto L74; }
   goto L21;
L74:;
  }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for DO-LOAD-FOREIGN-LIBRARY               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L56do_load_foreign_library(cl_narg narg, cl_object v1tmp, ...)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2system_library;
  va_list args; va_start(args,v1tmp);
  {
   int i = 1;
   if (i >= narg) {
    v2system_library = ECL_NIL;
   } else {
    i++;
    v2system_library = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v3path;
   cl_object v4filename;
   cl_object v5pack;
   cl_object v6flag;
   if (Null(cl_pathnamep(v1tmp))) { goto L3; }
   v3path = v1tmp;
   goto L2;
L3:;
   v1tmp = cl_string(v1tmp);
   if (Null(cl_probe_file(v1tmp))) { goto L5; }
   v3path = v1tmp;
   goto L2;
L5:;
   v3path = (cl_env_copy->function=(ECL_SYM("COMPILE-FILE-PATHNAME",237)->symbol.gfdef))->cfun.entry(3, v1tmp, ECL_SYM("TYPE",1346), VV[99]) /*  COMPILE-FILE-PATHNAME */;
L2:;
   v4filename = cl_namestring(v3path);
   v5pack = cl_find_package(VV[100]);
   if (Null(v2system_library)) { goto L11; }
   v6flag = cl_concatenate(3, ECL_SYM("STRING",807), VV[101], v1tmp);
   goto L10;
L11:;
   v6flag = v4filename;
L10:;
   {
    cl_object v7;
    cl_object v8;
    v7 = ecl_symbol_value(VV[98]);
    v8 = ecl_function_dispatch(cl_env_copy,VV[205])(2, v7, ecl_make_fixnum(0)) /*  MAKE-SEQ-ITERATOR */;
L17:;
    if ((v8)!=ECL_NIL) { goto L19; }
    goto L14;
L19:;
    {
     cl_object v9;
     v9 = ecl_function_dispatch(cl_env_copy,VV[206])(2, v7, v8) /*  SEQ-ITERATOR-REF */;
     if (Null(cl_string_equal(2, v4filename, v9))) { goto L21; }
     if ((v9)!=ECL_NIL) { goto L13; }
     goto L14;
    }
L21:;
    v8 = ecl_function_dispatch(cl_env_copy,VV[207])(2, v7, v8) /*  SEQ-ITERATOR-NEXT */;
    goto L17;
   }
L14:;
   T0 = cl_intern(2, VV[102], v5pack);
   T1 = cl_intern(2, VV[102], v5pack);
   T2 = cl_symbol_value(T1);
   T3 = cl_concatenate(4, ECL_SYM("STRING",807), T2, VV[103], v6flag);
   cl_set(T0, T3);
   T0 = cl_intern(2, VV[104], v5pack);
   T1 = cl_intern(2, VV[104], v5pack);
   T2 = cl_symbol_value(T1);
   T3 = cl_concatenate(4, ECL_SYM("STRING",807), T2, VV[103], v6flag);
   cl_set(T0, T3);
   T0 = cl_intern(2, VV[105], v5pack);
   T1 = cl_intern(2, VV[105], v5pack);
   T2 = cl_symbol_value(T1);
   T3 = cl_concatenate(4, ECL_SYM("STRING",807), T2, VV[103], v6flag);
   cl_set(T0, T3);
   cl_set(VV[98],CONS(v4filename,ecl_symbol_value(VV[98])));
L13:;
   value0 = ECL_T;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function LOAD-FOREIGN-LIBRARY                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC57load_foreign_library(cl_object v1, cl_object v2env)
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
   cl_object v4filename;
   cl_object v5;
   cl_object v6;
   cl_object v7;
   cl_object v8;
   cl_object v9system_library;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[144])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v10;
    v10 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4filename = v10;
   }
   v5 = ecl_function_dispatch(cl_env_copy,VV[145])(2, v3, VV[76]) /*  SEARCH-KEYWORD */;
   v6 = ecl_function_dispatch(cl_env_copy,VV[145])(2, v3, VV[107]) /*  SEARCH-KEYWORD */;
   v7 = ecl_function_dispatch(cl_env_copy,VV[145])(2, v3, VV[108]) /*  SEARCH-KEYWORD */;
   v8 = ecl_function_dispatch(cl_env_copy,VV[145])(2, v3, VV[109]) /*  SEARCH-KEYWORD */;
   if (!((v8)==(ECL_SYM("MISSING-KEYWORD",2015)))) { goto L13; }
   v9system_library = ECL_NIL;
   goto L12;
L13:;
   v9system_library = v8;
L12:;
   ecl_function_dispatch(cl_env_copy,VV[146])(2, v3, VV[110]) /*  CHECK-KEYWORD */;
   {
    cl_object v10;
    cl_object v11;
    if (Null(cl_constantp(2, v4filename, v2env))) { goto L18; }
    T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("CONSTANT-FORM-VALUE",2118))(1, v9system_library) /*  CONSTANT-FORM-VALUE */;
    T1 = cl_list(3, VV[106], v4filename, T0);
    T2 = cl_list(3, ECL_SYM("EVAL-WHEN",342), VV[111], T1);
    T3 = cl_listX(4, ECL_SYM("WITH-BACKEND",1847), ECL_SYM("C/C++",1849), T2, VV[112]);
    v10 = ecl_list1(T3);
    goto L16;
L18:;
    v10 = ECL_NIL;
    goto L16;
L16:;
    if ((v9system_library)!=ECL_NIL) { goto L21; }
    if (Null(ecl_symbol_value(ECL_SYM("*USE-DFFI*",2059)))) { goto L21; }
    T0 = cl_list(2, ECL_SYM("LOAD-FOREIGN-MODULE",1387), v4filename);
    v11 = ecl_list1(T0);
    goto L20;
L21:;
    v11 = ECL_NIL;
L20:;
    T0 = ecl_append(v10,v11);
    value0 = CONS(ECL_SYM("PROGN",673),T0);
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      local function DEFCALLBACK                                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC58defcallback(cl_object v1, cl_object v2)
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
   cl_object v4name;
   cl_object v5ret_type;
   cl_object v6arg_desc;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[144])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v7;
    v7 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4name = v7;
   }
   if (!(v3==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[144])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v7;
    v7 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5ret_type = v7;
   }
   if (!(v3==ECL_NIL)) { goto L15; }
   ecl_function_dispatch(cl_env_copy,VV[144])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L15:;
   {
    cl_object v7;
    v7 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v6arg_desc = v7;
   }
   if (Null(ecl_symbol_value(ECL_SYM("*USE-DFFI*",2059)))) { goto L20; }
   {
    cl_object v8;                                 /*  NAME            */
    cl_object v9;                                 /*  CALL-TYPE       */
    if (!(ECL_CONSP(v4name))) { goto L23; }
    value0 = cl_values_list(v4name);
    goto L22;
L23:;
    cl_env_copy->nvalues = 2;
    cl_env_copy->values[1] = ECL_SYM("DEFAULT",1237);
    cl_env_copy->values[0] = v4name;
    value0 = cl_env_copy->values[0];
L22:;
    {
     const int v10 = cl_env_copy->nvalues;
     v8 = value0;
     cl_object v11;
     v11 = (v10<=1)? ECL_NIL : cl_env_copy->values[1];
     v9 = v11;
    }
    {
     cl_object v10;
     cl_object v11;
     cl_object v12;
     {
      cl_object v13;
      v13 = (ECL_SYM("SECOND",742)->symbol.gfdef);
      {
       cl_object v14;
       cl_object v15;
       v14 = ECL_NIL;
       {
        cl_object v16;
        v16 = v6arg_desc;
        if (ecl_unlikely(!ECL_LISTP(v16))) FEtype_error_list(v16);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v15 = v16;
       }
       {
        cl_object v16;
        cl_object v17;
        v16 = ecl_list1(ECL_NIL);
        v17 = v16;
L33:;
        if (!(ecl_endp(v15))) { goto L35; }
        goto L34;
L35:;
        v14 = _ecl_car(v15);
        {
         cl_object v18;
         v18 = _ecl_cdr(v15);
         if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         v15 = v18;
        }
        {
         cl_object v18;
         v18 = v17;
         if (ecl_unlikely(ECL_ATOM(v18))) FEtype_error_cons(v18);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         T0 = v18;
        }
        T1 = ecl_function_dispatch(cl_env_copy,v13)(1, v14);
        v17 = ecl_list1(T1);
        (ECL_CONS_CDR(T0)=v17,T0);
        goto L33;
L34:;
        v10 = ecl_cdr(v16);
        goto L25;
       }
      }
     }
L25:;
     {
      cl_object v13;
      v13 = (ECL_SYM("FIRST",373)->symbol.gfdef);
      {
       cl_object v14;
       cl_object v15;
       v14 = ECL_NIL;
       {
        cl_object v16;
        v16 = v6arg_desc;
        if (ecl_unlikely(!ECL_LISTP(v16))) FEtype_error_list(v16);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v15 = v16;
       }
       {
        cl_object v16;
        cl_object v17;
        v16 = ecl_list1(ECL_NIL);
        v17 = v16;
L59:;
        if (!(ecl_endp(v15))) { goto L61; }
        goto L60;
L61:;
        v14 = _ecl_car(v15);
        {
         cl_object v18;
         v18 = _ecl_cdr(v15);
         if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         v15 = v18;
        }
        {
         cl_object v18;
         v18 = v17;
         if (ecl_unlikely(ECL_ATOM(v18))) FEtype_error_cons(v18);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         T0 = v18;
        }
        T1 = ecl_function_dispatch(cl_env_copy,v13)(1, v14);
        v17 = ecl_list1(T1);
        (ECL_CONS_CDR(T0)=v17,T0);
        goto L59;
L60:;
        v11 = ecl_cdr(v16);
        goto L51;
       }
      }
     }
L51:;
     if (!((v5ret_type)==(ECL_NIL))) { goto L83; }
     goto L80;
     goto L81;
L83:;
     goto L81;
L81:;
     if (!(ecl_eql(v5ret_type,ECL_SYM("VOID",1414)))) { goto L78; }
     goto L79;
L80:;
L79:;
     v12 = ECL_SYM("VOID",1414);
     goto L77;
L78:;
     if (Null(cl_typep(2, v5ret_type, VV[116]))) { goto L86; }
     v12 = ECL_SYM("POINTER-VOID",1410);
     goto L77;
L86:;
     v12 = v5ret_type;
L77:;
     T0 = cl_listX(4, ECL_SYM("LAMBDA-BLOCK",1367), v8, v11, v3);
     T1 = cl_list(2, ECL_SYM("FUNCTION",398), T0);
     T2 = cl_list(2, ECL_SYM("QUOTE",681), v8);
     T3 = cl_list(2, ECL_SYM("QUOTE",681), v12);
     T4 = cl_list(2, ECL_SYM("QUOTE",681), v10);
     value0 = cl_list(6, ECL_SYM("MAKE-DYNAMIC-CALLBACK",1652), T1, T2, T3, T4, v9);
     return value0;
    }
   }
L20:;
   value0 = cl_error(1, VV[117]);
   return value0;
  }
 }
}
/*      function definition for CALLBACK                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L59callback(cl_object v1name)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2x;
   v2x = si_get_sysprop(v1name, ECL_SYM("CALLBACK",1651));
   if ((v2x)!=ECL_NIL) { goto L2; }
   cl_error(2, VV[119], v1name);
L2:;
   value0 = v2x;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for CLINES                                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L60clines(cl_narg narg, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  cl_object v1c_c___code;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  v1c_c___code = cl_grab_rest_args(args);
  ecl_va_end(args);
  value0 = cl_error(2, VV[121], v1c_c___code);
  return value0;
 }
}
/*      local function C-INLINE                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC61c_inline(cl_object v1, cl_object v2)
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
   cl_object v4lisp_values;
   cl_object v5arg_c_types;
   cl_object v6return_type;
   cl_object v7c_c___code;
   cl_object v8;
   cl_object v9side_effects;
   cl_object v10;
   cl_object v11one_liner;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[144])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v12;
    v12 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4lisp_values = v12;
   }
   if (!(v3==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[144])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v12;
    v12 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5arg_c_types = v12;
   }
   if (!(v3==ECL_NIL)) { goto L15; }
   ecl_function_dispatch(cl_env_copy,VV[144])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L15:;
   {
    cl_object v12;
    v12 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v6return_type = v12;
   }
   if (!(v3==ECL_NIL)) { goto L21; }
   ecl_function_dispatch(cl_env_copy,VV[144])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L21:;
   {
    cl_object v12;
    v12 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v7c_c___code = v12;
   }
   v8 = ecl_function_dispatch(cl_env_copy,VV[145])(2, v3, VV[123]) /*  SEARCH-KEYWORD */;
   if (!((v8)==(ECL_SYM("MISSING-KEYWORD",2015)))) { goto L28; }
   v9side_effects = ECL_T;
   goto L27;
L28:;
   v9side_effects = v8;
L27:;
   v10 = ecl_function_dispatch(cl_env_copy,VV[145])(2, v3, VV[124]) /*  SEARCH-KEYWORD */;
   if (!((v10)==(ECL_SYM("MISSING-KEYWORD",2015)))) { goto L32; }
   v11one_liner = ECL_NIL;
   goto L31;
L32:;
   v11one_liner = v10;
L31:;
   ecl_function_dispatch(cl_env_copy,VV[146])(2, v3, VV[125]) /*  CHECK-KEYWORD */;
   T0 = CONS(ECL_SYM("LIST",483),v4lisp_values);
   T1 = cl_list(2, ECL_SYM("QUOTE",681), v5arg_c_types);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), v6return_type);
   T3 = cl_list(9, ECL_SYM("LIST",483), T0, T1, T2, v7c_c___code, VV[123], v9side_effects, VV[124], v11one_liner);
   value0 = cl_list(3, ECL_SYM("ERROR",339), VV[126], T3);
   return value0;
  }
 }
}
/*      local function C-PROGN                                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC62c_progn(cl_object v1, cl_object v2)
{
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
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[144])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v5;
    v5 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4args = v5;
   }
   value0 = VV[128];
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function DEFINLINE                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC63definline(cl_object v1, cl_object v2)
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
   cl_object v4fun;
   cl_object v5arg_types;
   cl_object v6type;
   cl_object v7code;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[144])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v8;
    v8 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4fun = v8;
   }
   if (!(v3==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[144])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v8;
    v8 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5arg_types = v8;
   }
   if (!(v3==ECL_NIL)) { goto L15; }
   ecl_function_dispatch(cl_env_copy,VV[144])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L15:;
   {
    cl_object v8;
    v8 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v6type = v8;
   }
   if (!(v3==ECL_NIL)) { goto L21; }
   ecl_function_dispatch(cl_env_copy,VV[144])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L21:;
   {
    cl_object v8;
    v8 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v7code = v8;
   }
   if (Null(v3)) { goto L26; }
   ecl_function_dispatch(cl_env_copy,VV[148])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L26:;
   T0 = cl_list(5, ECL_SYM("DEFCBODY",2084), v4fun, v5arg_types, v6type, v7code);
   T1 = cl_list(3, ECL_SYM("FUNCTION",398), v5arg_types, v6type);
   T2 = cl_list(3, ECL_SYM("FTYPE",395), T1, v4fun);
   T3 = cl_list(2, ECL_SYM("DECLAIM",274), T2);
   T4 = cl_list(6, VV[131], v4fun, VV[132], v5arg_types, v6type, v7code);
   value0 = cl_list(5, ECL_SYM("EVAL-WHEN",342), VV[1], T0, T3, T4);
   return value0;
  }
 }
}
/*      local function DEFLA                                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC64defla(cl_object v1, cl_object v2)
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
   cl_object v4name;
   cl_object v5args;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[144])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4name = v6;
   }
   if (!(v3==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[144])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5args = v6;
   }
   T0 = cl_listX(4, ECL_SYM("DEFUN",291), v4name, v5args, v3);
   value0 = cl_list(3, ECL_SYM("EVAL-WHEN",342), VV[134], T0);
   return value0;
  }
 }
}
/*      local function DEFCBODY                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC66defcbody(cl_object v1, cl_object v2)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4name;
   cl_object v5arg_types;
   cl_object v6result_type;
   cl_object v7c_expression;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[144])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v8;
    v8 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4name = v8;
   }
   if (!(v3==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[144])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v8;
    v8 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5arg_types = v8;
   }
   if (!(v3==ECL_NIL)) { goto L15; }
   ecl_function_dispatch(cl_env_copy,VV[144])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L15:;
   {
    cl_object v8;
    v8 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v6result_type = v8;
   }
   if (!(v3==ECL_NIL)) { goto L21; }
   ecl_function_dispatch(cl_env_copy,VV[144])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L21:;
   {
    cl_object v8;
    v8 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v7c_expression = v8;
   }
   if (Null(v3)) { goto L26; }
   ecl_function_dispatch(cl_env_copy,VV[148])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L26:;
   {
    cl_object v8args;
    {
     cl_object v9;
     {
      cl_object v10;
      v10 = ecl_make_cfun((cl_objectfn_fixed)LC65__lambda570,ECL_NIL,Cblock,1);
      v9 = v10;
     }
     {
      cl_object v10;
      cl_object v11;
      v10 = ECL_NIL;
      {
       cl_object v12;
       v12 = v5arg_types;
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
L36:;
       if (!(ecl_endp(v11))) { goto L38; }
       goto L37;
L38:;
       v10 = _ecl_car(v11);
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
       T1 = ecl_function_dispatch(cl_env_copy,v9)(1, v10);
       v13 = ecl_list1(T1);
       (ECL_CONS_CDR(T0)=v13,T0);
       goto L36;
L37:;
       v8args = ecl_cdr(v12);
       goto L28;
      }
     }
    }
L28:;
    T0 = cl_listX(6, VV[127], v8args, v5arg_types, v6result_type, v7c_expression, VV[136]);
    value0 = cl_list(4, ECL_SYM("DEFUN",291), v4name, v8args, T0);
    return value0;
   }
  }
 }
}
/*      local function LAMBDA570                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC65__lambda570(cl_object v1x)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_gensym(0);
  return value0;
 }
}
/*      local function DEFENTRY                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC68defentry(cl_object v1, cl_object v2)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4name;
   cl_object v5arg_types;
   cl_object v6c_name;
   cl_object v7;
   cl_object v8no_interrupts;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[144])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v9;
    v9 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4name = v9;
   }
   if (!(v3==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[144])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v9;
    v9 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5arg_types = v9;
   }
   if (!(v3==ECL_NIL)) { goto L15; }
   ecl_function_dispatch(cl_env_copy,VV[144])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L15:;
   {
    cl_object v9;
    v9 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v6c_name = v9;
   }
   v7 = ecl_function_dispatch(cl_env_copy,VV[145])(2, v3, VV[138]) /*  SEARCH-KEYWORD */;
   if (!((v7)==(ECL_SYM("MISSING-KEYWORD",2015)))) { goto L22; }
   v8no_interrupts = ECL_NIL;
   goto L21;
L22:;
   v8no_interrupts = v7;
L21:;
   ecl_function_dispatch(cl_env_copy,VV[146])(2, v3, VV[139]) /*  CHECK-KEYWORD */;
   {
    cl_object v9;
    cl_object v10output_type;
    {
     cl_object v11;
     {
      cl_object v12;
      v12 = ecl_make_cfun((cl_objectfn_fixed)LC67__lambda599,ECL_NIL,Cblock,1);
      v11 = v12;
     }
     {
      cl_object v12;
      cl_object v13;
      v12 = ECL_NIL;
      {
       cl_object v14;
       v14 = v5arg_types;
       if (ecl_unlikely(!ECL_LISTP(v14))) FEtype_error_list(v14);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v13 = v14;
      }
      {
       cl_object v14;
       cl_object v15;
       v14 = ecl_list1(ECL_NIL);
       v15 = v14;
L33:;
       if (!(ecl_endp(v13))) { goto L35; }
       goto L34;
L35:;
       v12 = _ecl_car(v13);
       {
        cl_object v16;
        v16 = _ecl_cdr(v13);
        if (ecl_unlikely(!ECL_LISTP(v16))) FEtype_error_list(v16);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v13 = v16;
       }
       {
        cl_object v16;
        v16 = v15;
        if (ecl_unlikely(ECL_ATOM(v16))) FEtype_error_cons(v16);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        T0 = v16;
       }
       T1 = ecl_function_dispatch(cl_env_copy,v11)(1, v12);
       v15 = ecl_list1(T1);
       (ECL_CONS_CDR(T0)=v15,T0);
       goto L33;
L34:;
       v9 = ecl_cdr(v14);
       goto L25;
      }
     }
    }
L25:;
    v10output_type = ECL_SYM("OBJECT",1305);
    if (!(ECL_CONSP(v6c_name))) { goto L52; }
    v10output_type = ecl_car(v6c_name);
    v6c_name = ecl_cadr(v6c_name);
L52:;
    {
     cl_object v11call;
     cl_object v12full_text;
     T0 = cl_string(v6c_name);
     {
      cl_fixnum v13;
      v13 = ecl_length(v5arg_types);
      v11call = L49produce_function_call(T0, ecl_make_fixnum(v13));
     }
     if (Null(v8no_interrupts)) { goto L59; }
     v12full_text = cl_concatenate(4, ECL_SYM("STRING",807), VV[140], v11call, VV[141]);
     goto L58;
L59:;
     v12full_text = v11call;
L58:;
     T0 = Null(v8no_interrupts)?ECL_T:ECL_NIL;
     T1 = cl_list(7, VV[127], v9, v5arg_types, v10output_type, v12full_text, VV[124], T0);
     value0 = cl_list(4, ECL_SYM("DEFUN",291), v4name, v9, T1);
     return value0;
    }
   }
  }
 }
}
/*      local function LAMBDA599                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC67__lambda599(cl_object v1x)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_gensym(0);
  return value0;
 }
}

#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/lsp/ffi.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _ecll270RZa7_waCmqq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:LSP;FFI.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_ecll270RZa7_waCmqq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  cl_import(1, ECL_SYM("NULL-POINTER-P",1389));
  cl_export(1, ECL_SYM("NULL-POINTER-P",1389));
  ecl_cmp_defmacro(VV[143]);                      /*  DEF-CONSTANT    */
  si_Xmake_special(VV[3]);
  cl_set(VV[3],cl_make_hash_table(2, ECL_SYM("SIZE",1335), ecl_make_fixnum(128)));
  si_Xmake_special(ECL_SYM("*USE-DFFI*",2059));
  cl_set(ECL_SYM("*USE-DFFI*",2059),ECL_T);
  ecl_cmp_defmacro(VV[147]);                      /*  DEF-FOREIGN-TYPE */
  ecl_cmp_defmacro(VV[149]);                      /*  DEF-TYPE        */
  ecl_cmp_defun(VV[150]);                         /*  %CONVERT-TO-FFI-TYPE */
  ecl_cmp_defmacro(VV[151]);                      /*  %ALIGN-DATA     */
  ecl_cmp_defun(VV[152]);                         /*  SIZE-OF-FOREIGN-TYPE */
  ecl_cmp_defun(VV[153]);                         /*  ALLOCATE-FOREIGN-OBJECT */
  ecl_cmp_defun(VV[154]);                         /*  FREE-FOREIGN-OBJECT */
  ecl_cmp_defmacro(VV[155]);                      /*  DEF-ENUM        */
  ecl_cmp_defmacro(VV[156]);                      /*  DEF-STRUCT      */
  ecl_cmp_defun(VV[157]);                         /*  SLOT-POSITION   */
  ecl_cmp_defun(VV[158]);                         /*  GET-SLOT-VALUE  */
  ecl_cmp_defun(VV[159]);                         /*  (SETF GET-SLOT-VALUE) */
  ecl_cmp_defun(VV[160]);                         /*  GET-SLOT-POINTER */
  ecl_cmp_defmacro(VV[161]);                      /*  DEF-ARRAY-POINTER */
  ecl_cmp_defun(VV[162]);                         /*  DEREF-ARRAY     */
  ecl_cmp_defun(VV[163]);                         /*  (SETF DEREF-ARRAY) */
  ecl_cmp_defun(VV[164]);                         /*  %FOREIGN-DATA-SET */
  ecl_cmp_defun(VV[165]);                         /*  %FOREIGN-DATA-REF */
  ecl_cmp_defmacro(VV[166]);                      /*  DEF-UNION       */
  si_Xmake_special(ECL_SYM("+NULL-CSTRING-POINTER+",2060));
  cl_set(ECL_SYM("+NULL-CSTRING-POINTER+",2060),si_allocate_foreign_data(ECL_SYM("POINTER-VOID",1410), ecl_make_fixnum(0)));
  ecl_cmp_defun(VV[167]);                         /*  POINTER-ADDRESS */
  ecl_cmp_defun(VV[168]);                         /*  DEREF-POINTER   */
  ecl_cmp_defun(VV[169]);                         /*  (SETF DEREF-POINTER) */
  ecl_cmp_defun(VV[170]);                         /*  MAKE-NULL-POINTER */
  ecl_cmp_defun(VV[171]);                         /*  MAKE-POINTER    */
  ecl_cmp_defun(VV[172]);                         /*  NULL-CHAR-P     */
  ecl_cmp_defun(VV[173]);                         /*  ENSURE-CHAR-CHARACTER */
  ecl_cmp_defun(VV[174]);                         /*  ENSURE-CHAR-INTEGER */
  ecl_cmp_defun(VV[175]);                         /*  ENSURE-CHAR-STORABLE */
  ecl_cmp_defun(VV[176]);                         /*  CHAR-ARRAY-TO-POINTER */
  ecl_cmp_defmacro(VV[177]);                      /*  CONVERT-FROM-CSTRING */
  ecl_cmp_defmacro(VV[178]);                      /*  CONVERT-TO-CSTRING */
  ecl_cmp_defmacro(VV[179]);                      /*  FREE-CSTRING    */
  ecl_cmp_defmacro(VV[180]);                      /*  WITH-CSTRING    */
  ecl_cmp_defmacro(VV[181]);                      /*  WITH-CSTRINGS   */
  ecl_cmp_defun(VV[182]);                         /*  FOREIGN-STRING-LENGTH */
  ecl_cmp_defun(VV[183]);                         /*  CONVERT-FROM-FOREIGN-STRING */
  ecl_cmp_defun(VV[186]);                         /*  CONVERT-TO-FOREIGN-STRING */
  ecl_cmp_defun(VV[188]);                         /*  ALLOCATE-FOREIGN-STRING */
  ecl_cmp_defmacro(VV[190]);                      /*  WITH-FOREIGN-STRING */
  ecl_cmp_defmacro(VV[191]);                      /*  WITH-FOREIGN-STRINGS */
  ecl_cmp_defmacro(VV[192]);                      /*  WITH-FOREIGN-OBJECT */
  ecl_cmp_defmacro(VV[193]);                      /*  WITH-FOREIGN-OBJECTS */
  ecl_cmp_defmacro(VV[194]);                      /*  WITH-CAST-POINTER */
  ecl_cmp_defun(VV[195]);                         /*  LISP-TO-C-NAME  */
  ecl_cmp_defun(VV[196]);                         /*  %CONVERT-TO-ARG-TYPE */
  ecl_cmp_defun(VV[197]);                         /*  %CONVERT-TO-RETURN-TYPE */
  (void)0; /* No entry created for PRODUCE-FUNCTION-CALL */
  ecl_cmp_defmacro(VV[198]);                      /*  DEF-LIB-FUNCTION */
  ecl_cmp_defmacro(VV[199]);                      /*  DEF-FUNCTION    */
  ecl_cmp_defmacro(VV[200]);                      /*  DEF-FOREIGN-VAR */
  ecl_cmp_defun(VV[201]);                         /*  FIND-FOREIGN-LIBRARY */
  si_Xmake_special(VV[98]);
  cl_set(VV[98],ECL_NIL);
  ecl_cmp_defun(VV[204]);                         /*  DO-LOAD-FOREIGN-LIBRARY */
  ecl_cmp_defmacro(VV[208]);                      /*  LOAD-FOREIGN-LIBRARY */
  ecl_cmp_defmacro(VV[209]);                      /*  DEFCALLBACK     */
  ecl_cmp_defun(VV[210]);                         /*  CALLBACK        */
  ecl_cmp_defun(VV[211]);                         /*  CLINES          */
  ecl_cmp_defmacro(VV[212]);                      /*  C-INLINE        */
  ecl_cmp_defmacro(VV[213]);                      /*  C-PROGN         */
  ecl_cmp_defmacro(VV[214]);                      /*  DEFINLINE       */
  ecl_cmp_defmacro(VV[215]);                      /*  DEFLA           */
  ecl_cmp_defmacro(VV[216]);                      /*  DEFCBODY        */
  ecl_cmp_defmacro(VV[217]);                      /*  DEFENTRY        */
}
