/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CMP;CMPENV-FUN.LSP                                */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/build/cmp/cmpenv-fun.eclh"
/*      function definition for FUNCTION-ARG-TYPES                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L1function_arg_types(cl_object v1arg_types)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2types;
   v2types = ECL_NIL;
   {
    cl_object v3al;
    {
     cl_object v4;
     v4 = v1arg_types;
     value0 = ecl_make_bool(ECL_FIXNUMP(v4));
     if ((value0)!=ECL_NIL) { goto L8; }
     value0 = ecl_make_bool(ECL_CHARACTERP(v4));
     if ((value0)!=ECL_NIL) { goto L8; }
     T1 = ecl_make_bool(floatp(v4));
     goto L6;
L8:;
     T1 = value0;
     goto L6;
L6:;
     T0 = Null(T1)?ECL_T:ECL_NIL;
     if (ecl_unlikely(!((T0)!=ECL_NIL)))
         FEwrong_type_argument(ECL_SYM("OBJECT",2105),v4);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v3al = v4;
    }
    goto L13;
L12:;
    T0 = ecl_car(v3al);
    v2types = CONS(T0,v2types);
    {
     cl_object v4;
     v4 = ecl_cdr(v3al);
     value0 = ecl_make_bool(ECL_FIXNUMP(v4));
     if ((value0)!=ECL_NIL) { goto L24; }
     value0 = ecl_make_bool(ECL_CHARACTERP(v4));
     if ((value0)!=ECL_NIL) { goto L24; }
     T1 = ecl_make_bool(floatp(v4));
     goto L22;
L24:;
     T1 = value0;
     goto L22;
L22:;
     T0 = Null(T1)?ECL_T:ECL_NIL;
     if (ecl_unlikely(!((T0)!=ECL_NIL)))
         FEwrong_type_argument(ECL_SYM("OBJECT",2105),v4);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v3al = v4;
    }
L13:;
    if (ecl_endp(v3al)) { goto L27; }
    {
     cl_object v4;
     v4 = ecl_car(v3al);
     if (!((v4)==(ECL_SYM("&OPTIONAL",13)))) { goto L33; }
     goto L27;
     goto L31;
L33:;
     goto L31;
L31:;
     if (!((v4)==(ECL_SYM("&REST",14)))) { goto L37; }
     goto L27;
     goto L35;
L37:;
     goto L35;
L35:;
     if (!((v4)==(ECL_SYM("&KEY",12)))) { goto L40; }
     goto L27;
     goto L28;
L40:;
     goto L28;
    }
L28:;
    goto L12;
L27:;
    value0 = cl_nreverse(v2types);
    return value0;
   }
  }
 }
}
/*      function definition for PROCLAIM-FUNCTION                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L2proclaim_function(cl_object v1fname, cl_object v2decl)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(si_valid_function_name_p(v1fname))) { goto L1; }
  {
   cl_object v3arg_types;
   cl_object v4return_types;
   cl_object v5l;
   v3arg_types = ECL_SYM("*",20);
   v4return_types = ECL_SYM("*",20);
   v5l = v2decl;
   {
    cl_object v6;
    v6 = ecl_make_bool(v5l==ECL_NIL);
    if (Null(v6)) { goto L8; }
    goto L6;
L8:;
    if (!(ECL_CONSP(v5l))) { goto L10; }
    {
     cl_object v7;
     v7 = v5l;
     {
      cl_object v8;
      v8 = v7;
      if (ecl_unlikely(!ECL_LISTP(v8))) FEtype_error_list(v8);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
     }
     if (Null(v7)) { goto L17; }
     {
      cl_object v8;
      v8 = ECL_CONS_CDR(v7);
      v5l = v8;
      v7 = ECL_CONS_CAR(v7);
     }
L17:;
     v3arg_types = v7;
    }
    goto L6;
L10:;
    (cl_env_copy->function=(ECL_SYM("WARN",905)->symbol.gfdef))->cfun.entry(3, VV[4], v1fname, v2decl) /*  WARN */;
   }
L6:;
   {
    cl_object v6;
    v6 = ecl_make_bool(v5l==ECL_NIL);
    if (Null(v6)) { goto L25; }
    goto L23;
L25:;
    if (ECL_ATOM(v5l)) { goto L29; }
    if (Null(ecl_cdr(v5l))) { goto L27; }
    goto L28;
L29:;
L28:;
    (cl_env_copy->function=(ECL_SYM("WARN",905)->symbol.gfdef))->cfun.entry(3, VV[4], v1fname, v2decl) /*  WARN */;
    goto L23;
L27:;
    v4return_types = ecl_car(v5l);
   }
L23:;
   if (!((v3arg_types)==(ECL_NIL))) { goto L32; }
   v3arg_types = VV[5];
L32:;
   if (!((v3arg_types)==(ECL_SYM("*",20)))) { goto L36; }
   si_rem_sysprop(v1fname, VV[6]);
   goto L35;
L36:;
   si_put_sysprop(v1fname, VV[6], v3arg_types);
L35:;
   if (!(ecl_equalp(v4return_types,ECL_SYM("*",20)))) { goto L43; }
   goto L40;
   goto L41;
L43:;
   goto L41;
L41:;
   if (!(ecl_equalp(v4return_types,VV[8]))) { goto L38; }
   goto L39;
L40:;
L39:;
   value0 = si_rem_sysprop(v1fname, VV[10]);
   return value0;
L38:;
   value0 = si_put_sysprop(v1fname, VV[10], v4return_types);
   return value0;
  }
L1:;
  value0 = (cl_env_copy->function=(ECL_SYM("WARN",905)->symbol.gfdef))->cfun.entry(3, VV[4], v1fname, v2decl) /*  WARN */;
  return value0;
 }
}
/*      function definition for ADD-FUNCTION-DECLARATION              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L3add_function_declaration(cl_narg narg, cl_object v1fname, cl_object v2ftype, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>3)) FEwrong_num_arguments_anonym();
 {
  cl_object v3env;
  va_list args; va_start(args,v2ftype);
  {
   int i = 2;
   if (i >= narg) {
    v3env = ecl_symbol_value(VV[12]);
   } else {
    i++;
    v3env = va_arg(args,cl_object);
   }
  }
  va_end(args);
  if (Null(si_valid_function_name_p(v1fname))) { goto L3; }
  {
   cl_object v4fun;
   v4fun = ecl_function_dispatch(cl_env_copy,VV[44])(1, v1fname) /*  CMP-ENV-SEARCH-FUNCTION */;
   if (Null(cl_functionp(v4fun))) { goto L6; }
   (cl_env_copy->function=(ECL_SYM("WARN",905)->symbol.gfdef))->cfun.entry(2, VV[13], v1fname) /*  WARN */;
   goto L2;
L6:;
   ecl_function_dispatch(cl_env_copy,VV[45])(3, v1fname, v2ftype, v3env) /*  CMP-ENV-REGISTER-FTYPE */;
   goto L2;
  }
L3:;
  (cl_env_copy->function=(ECL_SYM("WARN",905)->symbol.gfdef))->cfun.entry(2, VV[14], v1fname) /*  WARN */;
L2:;
  value0 = v3env;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for GET-ARG-TYPES                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L4get_arg_types(cl_narg narg, cl_object v1fname, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>3)) FEwrong_num_arguments_anonym();
 {
  cl_object v2env;
  cl_object v3may_be_global;
  va_list args; va_start(args,v1fname);
  {
   int i = 1;
   if (i >= narg) {
    v2env = ecl_symbol_value(VV[12]);
   } else {
    i++;
    v2env = va_arg(args,cl_object);
   }
   if (i >= narg) {
    v3may_be_global = ECL_T;
   } else {
    i++;
    v3may_be_global = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v4x;
   v4x = ecl_function_dispatch(cl_env_copy,VV[47])(2, v1fname, v2env) /*  CMP-ENV-SEARCH-FTYPE */;
   if (Null(v4x)) { goto L4; }
   {
    cl_object v5arg_types;
    v5arg_types = ecl_car(v4x);
    if ((v5arg_types)==(ECL_SYM("*",20))) { goto L7; }
    cl_env_copy->nvalues = 2;
    cl_env_copy->values[1] = ECL_T;
    cl_env_copy->values[0] = v5arg_types;
    return cl_env_copy->values[0];
L7:;
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
   }
L4:;
   if (Null(v3may_be_global)) { goto L9; }
   {
    cl_object v6fun;
    v6fun = ecl_function_dispatch(cl_env_copy,VV[44])(2, v1fname, v2env) /*  CMP-ENV-SEARCH-FUNCTION */;
    if (v6fun==ECL_NIL) { goto L14; }
    if (Null(ecl_function_dispatch(cl_env_copy,VV[48])(1, v6fun) /*  FUN-P */)) { goto L12; }
    if (Null(ecl_function_dispatch(cl_env_copy,VV[49])(1, v6fun) /*  FUN-GLOBAL */)) { goto L12; }
    goto L13;
L14:;
L13:;
    value0 = si_get_sysprop(v1fname, VV[6]);
    return value0;
L12:;
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
   }
L9:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for GET-RETURN-TYPE                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L5get_return_type(cl_narg narg, cl_object v1fname, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2env;
  va_list args; va_start(args,v1fname);
  {
   int i = 1;
   if (i >= narg) {
    v2env = ecl_symbol_value(VV[12]);
   } else {
    i++;
    v2env = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v3x;
   v3x = ecl_function_dispatch(cl_env_copy,VV[47])(2, v1fname, v2env) /*  CMP-ENV-SEARCH-FTYPE */;
   if (Null(v3x)) { goto L3; }
   {
    cl_object v4return_types;
    v4return_types = ecl_cadr(v3x);
    if ((v4return_types)==(ECL_SYM("*",20))) { goto L6; }
    cl_env_copy->nvalues = 2;
    cl_env_copy->values[1] = ECL_T;
    cl_env_copy->values[0] = v4return_types;
    return cl_env_copy->values[0];
L6:;
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
   }
L3:;
   {
    cl_object v5fun;
    v5fun = ecl_function_dispatch(cl_env_copy,VV[44])(2, v1fname, v2env) /*  CMP-ENV-SEARCH-FUNCTION */;
    if (v5fun==ECL_NIL) { goto L11; }
    if (Null(ecl_function_dispatch(cl_env_copy,VV[48])(1, v5fun) /*  FUN-P */)) { goto L9; }
    if (Null(ecl_function_dispatch(cl_env_copy,VV[49])(1, v5fun) /*  FUN-GLOBAL */)) { goto L9; }
    goto L10;
L11:;
L10:;
    value0 = si_get_sysprop(v1fname, VV[10]);
    return value0;
L9:;
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      function definition for GET-LOCAL-ARG-TYPES                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L6get_local_arg_types(cl_narg narg, cl_object v1fun, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2env;
  va_list args; va_start(args,v1fun);
  {
   int i = 1;
   if (i >= narg) {
    v2env = ecl_symbol_value(VV[12]);
   } else {
    i++;
    v2env = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v3x;
   T0 = ecl_function_dispatch(cl_env_copy,VV[52])(1, v1fun) /*  FUN-NAME */;
   v3x = ecl_function_dispatch(cl_env_copy,VV[47])(2, T0, v2env) /*  CMP-ENV-SEARCH-FTYPE */;
   if (Null(v3x)) { goto L3; }
   T0 = ecl_car(v3x);
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = ECL_T;
   cl_env_copy->values[0] = T0;
   return cl_env_copy->values[0];
L3:;
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      function definition for GET-LOCAL-RETURN-TYPE                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L7get_local_return_type(cl_narg narg, cl_object v1fun, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2env;
  va_list args; va_start(args,v1fun);
  {
   int i = 1;
   if (i >= narg) {
    v2env = ecl_symbol_value(VV[12]);
   } else {
    i++;
    v2env = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v3x;
   T0 = ecl_function_dispatch(cl_env_copy,VV[52])(1, v1fun) /*  FUN-NAME */;
   v3x = ecl_function_dispatch(cl_env_copy,VV[47])(2, T0, v2env) /*  CMP-ENV-SEARCH-FTYPE */;
   if (Null(v3x)) { goto L3; }
   T0 = ecl_cadr(v3x);
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = ECL_T;
   cl_env_copy->values[0] = T0;
   return cl_env_copy->values[0];
L3:;
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      function definition for GET-PROCLAIMED-NARG                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L8get_proclaimed_narg(cl_narg narg, cl_object v1fun, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2env;
  va_list args; va_start(args,v1fun);
  {
   int i = 1;
   if (i >= narg) {
    v2env = ecl_symbol_value(VV[12]);
   } else {
    i++;
    v2env = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v4;                                  /*  ARG-LIST        */
   cl_object v5;                                  /*  FOUND           */
   value0 = L4get_arg_types(2, v1fun, v2env);
   {
    const int v6 = cl_env_copy->nvalues;
    v4 = value0;
    cl_object v7;
    v7 = (v6<=1)? ECL_NIL : cl_env_copy->values[1];
    v5 = v7;
   }
   if (Null(v5)) { goto L3; }
   {
    cl_object v6type;
    cl_object v7;
    v6type = ECL_NIL;
    {
     cl_object v8;
     v8 = v4;
     if (ecl_unlikely(!ECL_LISTP(v8))) FEtype_error_list(v8);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v7 = v8;
    }
    {
     cl_object v8minarg;
     cl_object v9maxarg;
     cl_object v10in_optionals;
     v8minarg = ecl_make_fixnum(0);
     v9maxarg = ecl_make_fixnum(0);
     v10in_optionals = ECL_NIL;
L12:;
     if (!(ecl_endp(v7))) { goto L14; }
     goto L13;
L14:;
     v6type = _ecl_car(v7);
     {
      cl_object v11;
      v11 = _ecl_cdr(v7);
      if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v7 = v11;
     }
     if (!((v6type)==(ECL_SYM("*",20)))) { goto L28; }
     goto L25;
     goto L26;
L28:;
     goto L26;
L26:;
     if (!((v6type)==(ECL_SYM("&REST",14)))) { goto L32; }
     goto L25;
     goto L30;
L32:;
     goto L30;
L30:;
     if (!((v6type)==(ECL_SYM("&KEY",12)))) { goto L36; }
     goto L25;
     goto L34;
L36:;
     goto L34;
L34:;
     if (!((v6type)==(ECL_SYM("&ALLOW-OTHER-KEYS",8)))) { goto L23; }
     goto L24;
L25:;
L24:;
     cl_env_copy->nvalues = 3;
     cl_env_copy->values[2] = v5;
     cl_env_copy->values[1] = ecl_make_fixnum(65536);
     cl_env_copy->values[0] = v8minarg;
     return cl_env_copy->values[0];
L23:;
     if (!((v6type)==(ECL_SYM("&OPTIONAL",13)))) { goto L39; }
     v10in_optionals = ECL_T;
     v9maxarg = v8minarg;
     goto L22;
L39:;
     if (Null(v10in_optionals)) { goto L44; }
     v9maxarg = ecl_plus(v9maxarg,ecl_make_fixnum(1));
     goto L22;
L44:;
     v8minarg = ecl_plus(v8minarg,ecl_make_fixnum(1));
     v9maxarg = ecl_plus(v9maxarg,ecl_make_fixnum(1));
L22:;
     goto L12;
L13:;
     cl_env_copy->nvalues = 3;
     cl_env_copy->values[2] = v5;
     cl_env_copy->values[1] = v9maxarg;
     cl_env_copy->values[0] = v8minarg;
     return cl_env_copy->values[0];
    }
   }
L3:;
   cl_env_copy->nvalues = 3;
   cl_env_copy->values[2] = v5;
   cl_env_copy->values[1] = ecl_make_fixnum(65536);
   cl_env_copy->values[0] = ecl_make_fixnum(0);
   return cl_env_copy->values[0];
  }
 }
}
/*      function definition for DECLARE-INLINE                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L9declare_inline(cl_narg narg, cl_object v1fname, ...)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>3)) FEwrong_num_arguments_anonym();
 {
  cl_object v2env;
  cl_object v3definition;
  va_list args; va_start(args,v1fname);
  {
   int i = 1;
   if (i >= narg) {
    v2env = ecl_symbol_value(VV[12]);
   } else {
    i++;
    v2env = va_arg(args,cl_object);
   }
   if (i >= narg) {
    v3definition = ECL_T;
   } else {
    i++;
    v3definition = va_arg(args,cl_object);
   }
  }
  va_end(args);
  if ((si_valid_function_name_p(v1fname))!=ECL_NIL) { goto L3; }
  ecl_function_dispatch(cl_env_copy,VV[56])(2, VV[25], v1fname) /*  CMPERR */;
L3:;
  T0 = CONS(v1fname,v3definition);
  T1 = ecl_list1(T0);
  value0 = ecl_function_dispatch(cl_env_copy,VV[57])(3, ECL_SYM("INLINE",436), T1, v2env) /*  CMP-ENV-EXTEND-DECLARATION */;
  return value0;
 }
}
/*      function definition for DECLARE-NOTINLINE                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L10declare_notinline(cl_narg narg, cl_object v1fname, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2env;
  va_list args; va_start(args,v1fname);
  {
   int i = 1;
   if (i >= narg) {
    v2env = ecl_symbol_value(VV[12]);
   } else {
    i++;
    v2env = va_arg(args,cl_object);
   }
  }
  va_end(args);
  value0 = L9declare_inline(3, v1fname, v2env, ECL_NIL);
  return value0;
 }
}
/*      function definition for PROCLAIM-INLINE                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L11proclaim_inline(cl_object v1fname_list)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2;
   v2 = v1fname_list;
   goto L4;
L3:;
   {
    cl_object v3fun;
    v3fun = ecl_car(v2);
    if ((si_valid_function_name_p(v3fun))!=ECL_NIL) { goto L8; }
    cl_error(2, VV[28], v3fun);
L8:;
    if ((si_get_sysprop(v3fun, ECL_SYM("INLINE",436)))!=ECL_NIL) { goto L10; }
    si_put_sysprop(v3fun, ECL_SYM("INLINE",436), ECL_T);
    si_rem_sysprop(v3fun, ECL_SYM("NOTINLINE",589));
L10:;
   }
   v2 = ecl_cdr(v2);
L4:;
   if (Null(v2)) { goto L15; }
   goto L3;
L15:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for PROCLAIM-NOTINLINE                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L12proclaim_notinline(cl_object v1fname_list)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2;
   v2 = v1fname_list;
   goto L4;
L3:;
   {
    cl_object v3fun;
    v3fun = ecl_car(v2);
    if ((si_valid_function_name_p(v3fun))!=ECL_NIL) { goto L8; }
    cl_error(2, VV[30], v3fun);
L8:;
    si_rem_sysprop(v3fun, ECL_SYM("INLINE",436));
    si_put_sysprop(v3fun, ECL_SYM("NOTINLINE",589), ECL_T);
   }
   v2 = ecl_cdr(v2);
L4:;
   if (Null(v2)) { goto L14; }
   goto L3;
L14:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for DECLARED-INLINE-P                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L13declared_inline_p(cl_narg narg, cl_object v1fname, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2env;
  va_list args; va_start(args,v1fname);
  {
   int i = 1;
   if (i >= narg) {
    v2env = ecl_symbol_value(VV[12]);
   } else {
    i++;
    v2env = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v3x;
   cl_object v4flag;
   v3x = ecl_function_dispatch(cl_env_copy,VV[62])(2, ECL_SYM("INLINE",436), v2env) /*  CMP-ENV-SEARCH-DECLARATION */;
   {
    cl_object v5;
    v5 = v3x;
    goto L7;
L6:;
    {
     cl_object v6;
     cl_object v7;
     {
      cl_object v8;
      v8 = v5;
      if (ecl_unlikely(ECL_ATOM(v8))) FEtype_error_cons(v8);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v6 = v8;
     }
     v7 = ECL_CONS_CAR(v6);
     if (Null(v7)) { goto L9; }
     {
      cl_object v8;
      {
       cl_object v9;
       v9 = v7;
       if (ecl_unlikely(ECL_ATOM(v9))) FEtype_error_cons(v9);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       T0 = v9;
      }
      v8 = ECL_CONS_CAR(T0);
      if (Null(ecl_function_dispatch(cl_env_copy,VV[63])(2, v1fname, v8) /*  SAME-FNAME-P */)) { goto L9; }
      v4flag = v7;
      goto L3;
     }
    }
L9:;
    v5 = ECL_CONS_CDR(v5);
L7:;
    if (v5==ECL_NIL) { goto L22; }
    goto L6;
L22:;
    v4flag = ECL_NIL;
   }
L3:;
   if (Null(v4flag)) { goto L24; }
   value0 = ecl_cdr(v4flag);
   cl_env_copy->nvalues = 1;
   return value0;
L24:;
   value0 = si_get_sysprop(v1fname, ECL_SYM("INLINE",436));
   return value0;
  }
 }
}
/*      function definition for DECLARED-NOTINLINE-P                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L14declared_notinline_p(cl_narg narg, cl_object v1fname, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2env;
  va_list args; va_start(args,v1fname);
  {
   int i = 1;
   if (i >= narg) {
    v2env = ecl_symbol_value(VV[12]);
   } else {
    i++;
    v2env = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v3x;
   cl_object v4flag;
   v3x = ecl_function_dispatch(cl_env_copy,VV[62])(2, ECL_SYM("INLINE",436), v2env) /*  CMP-ENV-SEARCH-DECLARATION */;
   {
    cl_object v5;
    v5 = v3x;
    goto L7;
L6:;
    {
     cl_object v6;
     cl_object v7;
     {
      cl_object v8;
      v8 = v5;
      if (ecl_unlikely(ECL_ATOM(v8))) FEtype_error_cons(v8);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v6 = v8;
     }
     v7 = ECL_CONS_CAR(v6);
     if (Null(v7)) { goto L9; }
     {
      cl_object v8;
      {
       cl_object v9;
       v9 = v7;
       if (ecl_unlikely(ECL_ATOM(v9))) FEtype_error_cons(v9);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       T0 = v9;
      }
      v8 = ECL_CONS_CAR(T0);
      if (Null(ecl_function_dispatch(cl_env_copy,VV[63])(2, v1fname, v8) /*  SAME-FNAME-P */)) { goto L9; }
      v4flag = v7;
      goto L3;
     }
    }
L9:;
    v5 = ECL_CONS_CDR(v5);
L7:;
    if (v5==ECL_NIL) { goto L22; }
    goto L6;
L22:;
    v4flag = ECL_NIL;
   }
L3:;
   if (Null(v4flag)) { goto L24; }
   T0 = ecl_cdr(v4flag);
   value0 = ecl_make_bool(T0==ECL_NIL);
   cl_env_copy->nvalues = 1;
   return value0;
L24:;
   value0 = si_get_sysprop(v1fname, ECL_SYM("NOTINLINE",589));
   return value0;
  }
 }
}
/*      function definition for INLINE-POSSIBLE                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L15inline_possible(cl_narg narg, cl_object v1fname, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2env;
  va_list args; va_start(args,v1fname);
  {
   int i = 1;
   if (i >= narg) {
    v2env = ecl_symbol_value(VV[12]);
   } else {
    i++;
    v2env = va_arg(args,cl_object);
   }
  }
  va_end(args);
  T0 = L14declared_notinline_p(2, v1fname, v2env);
  value0 = Null(T0)?ECL_T:ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for MAYBE-INSTALL-INLINE-FUNCTION         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L16maybe_install_inline_function(cl_object v1fname, cl_object v2form, cl_object v3env)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v4x;
   cl_object v5flag;
   cl_object v6declared;
   cl_object v7proclaimed;
   v4x = ecl_function_dispatch(cl_env_copy,VV[62])(2, ECL_SYM("INLINE",436), v3env) /*  CMP-ENV-SEARCH-DECLARATION */;
   {
    cl_object v8;
    v8 = v4x;
    goto L6;
L5:;
    {
     cl_object v9;
     cl_object v10;
     {
      cl_object v11;
      v11 = v8;
      if (ecl_unlikely(ECL_ATOM(v11))) FEtype_error_cons(v11);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v9 = v11;
     }
     v10 = ECL_CONS_CAR(v9);
     if (Null(v10)) { goto L8; }
     {
      cl_object v11;
      {
       cl_object v12;
       v12 = v10;
       if (ecl_unlikely(ECL_ATOM(v12))) FEtype_error_cons(v12);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       T0 = v12;
      }
      v11 = ECL_CONS_CAR(T0);
      if (Null(ecl_function_dispatch(cl_env_copy,VV[63])(2, v1fname, v11) /*  SAME-FNAME-P */)) { goto L8; }
      v5flag = v10;
      goto L2;
     }
    }
L8:;
    v8 = ECL_CONS_CDR(v8);
L6:;
    if (v8==ECL_NIL) { goto L21; }
    goto L5;
L21:;
    v5flag = ECL_NIL;
   }
L2:;
   if (Null(v5flag)) { goto L25; }
   v6declared = ecl_cdr(v5flag);
   goto L23;
L25:;
   v6declared = ECL_NIL;
   goto L23;
L23:;
   v7proclaimed = si_get_sysprop(v1fname, ECL_SYM("INLINE",436));
   if (Null(v6declared)) { goto L29; }
   T1 = cl_list(2, ECL_SYM("QUOTE",681), v1fname);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), v2form);
   T3 = cl_list(4, VV[26], T1, VV[36], T2);
   T4 = cl_list(3, ECL_SYM("EVAL-WHEN",342), VV[35], T3);
   T5 = cl_list(2, ECL_SYM("QUOTE",681), v1fname);
   T6 = cl_list(2, ECL_SYM("QUOTE",681), v2form);
   T7 = cl_list(4, ECL_SYM("PUT-SYSPROP",1141), T5, VV[38], T6);
   T8 = cl_list(3, ECL_SYM("EVAL-WHEN",342), VV[37], T7);
   T0 = cl_list(3, ECL_SYM("PROGN",673), T4, T8);
   goto L28;
L29:;
   T0 = ECL_NIL;
L28:;
   if (Null(v7proclaimed)) { goto L32; }
   T2 = cl_list(2, ECL_SYM("QUOTE",681), v1fname);
   T3 = cl_list(2, ECL_SYM("QUOTE",681), v2form);
   T4 = cl_list(4, ECL_SYM("PUT-SYSPROP",1141), T2, VV[38], T3);
   T1 = cl_list(3, ECL_SYM("EVAL-WHEN",342), VV[39], T4);
   goto L31;
L32:;
   T1 = ECL_NIL;
L31:;
   value0 = cl_list(3, ECL_SYM("PROGN",673), T0, T1);
   return value0;
  }
 }
}

#include "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/build/cmp/cmpenv-fun.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclfo5ks1b7_XdoZTr51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CMP;CMPENV-FUN.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclfo5ks1b7_XdoZTr51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  ecl_cmp_defun(VV[41]);                          /*  FUNCTION-ARG-TYPES */
  ecl_cmp_defun(VV[42]);                          /*  PROCLAIM-FUNCTION */
  ecl_cmp_defun(VV[43]);                          /*  ADD-FUNCTION-DECLARATION */
  ecl_cmp_defun(VV[46]);                          /*  GET-ARG-TYPES   */
  ecl_cmp_defun(VV[50]);                          /*  GET-RETURN-TYPE */
  ecl_cmp_defun(VV[51]);                          /*  GET-LOCAL-ARG-TYPES */
  ecl_cmp_defun(VV[53]);                          /*  GET-LOCAL-RETURN-TYPE */
  ecl_cmp_defun(VV[54]);                          /*  GET-PROCLAIMED-NARG */
  ecl_cmp_defun(VV[55]);                          /*  DECLARE-INLINE  */
  ecl_cmp_defun(VV[58]);                          /*  DECLARE-NOTINLINE */
  ecl_cmp_defun(VV[59]);                          /*  PROCLAIM-INLINE */
  ecl_cmp_defun(VV[60]);                          /*  PROCLAIM-NOTINLINE */
  ecl_cmp_defun(VV[61]);                          /*  DECLARED-INLINE-P */
  ecl_cmp_defun(VV[64]);                          /*  DECLARED-NOTINLINE-P */
  ecl_cmp_defun(VV[65]);                          /*  INLINE-POSSIBLE */
  ecl_cmp_defun(VV[66]);                          /*  MAYBE-INSTALL-INLINE-FUNCTION */
}
