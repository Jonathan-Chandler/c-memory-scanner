/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CMP;CMPMAIN.LSP                                   */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/build/cmp/cmpmain.eclh"
/*      function definition for SAFE-MKSTEMP                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L1safe_mkstemp(cl_object v1template)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2base;
   v2base = si_mkstemp(v1template);
   if (Null(v2base)) { goto L2; }
   {
    cl_object v3output;
    T0 = cl_pathname_name(1, v2base);
    value0 = cl_pathname_type(1, v2base);
    if ((value0)!=ECL_NIL) { goto L7; }
    T1 = VV[0];
    goto L5;
L7:;
    T1 = value0;
    goto L5;
L5:;
    T2 = cl_concatenate(3, ECL_SYM("STRING",807), T0, T1);
    v3output = cl_make_pathname(6, ECL_SYM("NAME",1300), T2, ECL_SYM("TYPE",1346), VV[1], ECL_SYM("DEFAULTS",1238), v2base);
    if ((cl_probe_file(v3output))!=ECL_NIL) { goto L9; }
    if (Null(si_copy_file(v2base, v3output))) { goto L9; }
    T0 = cl_truename(v3output);
    T1 = cl_truename(v2base);
    v2base = cl_list(2, T0, T1);
    goto L2;
L9:;
    cl_delete_file(v2base);
    v2base = ECL_NIL;
   }
L2:;
   if ((v2base)!=ECL_NIL) { goto L15; }
   cl_error(2, VV[2], v1template);
L15:;
   value0 = v2base;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for COMPILE-FILE-PATHNAME                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L2compile_file_pathname(cl_narg narg, cl_object v1name, ...)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2output_file;
  cl_object v3type;
  cl_object v4type_supplied_p;
  cl_object v5verbose;
  cl_object v6print;
  cl_object v7c_file;
  cl_object v8h_file;
  cl_object v9data_file;
  cl_object v10system_p;
  cl_object v11load;
  cl_object v12external_format;
  cl_object v13source_truename;
  cl_object v14source_offset;
  ecl_va_list args; ecl_va_start(args,v1name,narg,1);
  {
   cl_object keyvars[24];
   cl_parse_key(args,12,L2compile_file_pathnamekeys,keyvars,NULL,FALSE);
   ecl_va_end(args);
   if (Null(keyvars[12])) {
    v2output_file = ECL_T;
   } else {
    v2output_file = keyvars[0];
   }
   v3type = keyvars[1];
   v4type_supplied_p = keyvars[13];
   v5verbose = keyvars[2];
   v6print = keyvars[3];
   v7c_file = keyvars[4];
   v8h_file = keyvars[5];
   v9data_file = keyvars[6];
   v10system_p = keyvars[7];
   v11load = keyvars[8];
   v12external_format = keyvars[9];
   v13source_truename = keyvars[10];
   v14source_offset = keyvars[11];
  }
  {
   cl_object v15format;
   cl_object v16extension;
   v15format = ECL_NIL;
   v16extension = ECL_NIL;
   if ((v4type_supplied_p)!=ECL_NIL) { goto L4; }
   if (Null(v10system_p)) { goto L7; }
   v3type = ECL_SYM("OBJECT",1305);
   goto L6;
L7:;
   v3type = VV[4];
L6:;
L4:;
   if (!(ecl_eql(v3type,VV[5]))) { goto L15; }
   goto L12;
   goto L13;
L15:;
   goto L13;
L13:;
   if (!(ecl_eql(v3type,VV[7]))) { goto L10; }
   goto L11;
L12:;
L11:;
   v15format = ecl_symbol_value(VV[9]);
   goto L9;
L10:;
   if (!(ecl_eql(v3type,VV[10]))) { goto L24; }
   goto L21;
   goto L22;
L24:;
   goto L22;
L22:;
   if (!(ecl_eql(v3type,VV[12]))) { goto L28; }
   goto L21;
   goto L26;
L28:;
   goto L26;
L26:;
   if (!(ecl_eql(v3type,VV[14]))) { goto L19; }
   goto L20;
L21:;
L20:;
   v15format = ecl_symbol_value(VV[16]);
   goto L9;
L19:;
   if (!(ecl_eql(v3type,VV[17]))) { goto L32; }
   v16extension = VV[18];
   goto L9;
L32:;
   if (!(ecl_eql(v3type,VV[19]))) { goto L35; }
   v16extension = VV[20];
   goto L9;
L35:;
   if (!(ecl_eql(v3type,VV[21]))) { goto L38; }
   if (Null(ecl_memql(VV[22],ecl_symbol_value(ECL_SYM("*FEATURES*",36))))) { goto L41; }
   v16extension = VV[23];
   goto L40;
L41:;
   v16extension = VV[24];
L40:;
   goto L9;
L38:;
   if (!(ecl_eql(v3type,VV[25]))) { goto L43; }
   v16extension = VV[26];
   goto L9;
L43:;
   if (!(ecl_eql(v3type,ECL_SYM("OBJECT",1305)))) { goto L46; }
   v16extension = ecl_symbol_value(VV[27]);
   goto L9;
L46:;
   if (!(ecl_eql(v3type,VV[28]))) { goto L49; }
   v15format = ecl_symbol_value(VV[29]);
   goto L9;
L49:;
   if (!(ecl_eql(v3type,VV[30]))) { goto L52; }
   v15format = VV[31];
   goto L9;
L52:;
   if (!(ecl_eql(v3type,VV[4]))) { goto L59; }
   goto L56;
   goto L57;
L59:;
   goto L57;
L57:;
   if (!(ecl_eql(v3type,VV[33]))) { goto L9; }
   goto L55;
L56:;
L55:;
   v16extension = VV[35];
L9:;
   if (!(ecl_eql(v2output_file,ECL_T))) { goto L67; }
   goto L63;
   goto L65;
L67:;
   goto L65;
L65:;
   if (!((v2output_file)==(ECL_NIL))) { goto L70; }
   goto L63;
   goto L64;
L70:;
   goto L64;
L64:;
   value0 = v2output_file;
   cl_env_copy->nvalues = 1;
   return value0;
L63:;
   if (Null(v15format)) { goto L72; }
   T0 = cl_pathname_name(1, v1name);
   T1 = cl_format(3, ECL_NIL, v15format, T0);
   value0 = cl_merge_pathnames(2, T1, v1name);
   return value0;
L72:;
   value0 = cl_make_pathname(4, ECL_SYM("TYPE",1346), v16extension, ECL_SYM("DEFAULTS",1238), v1name);
   return value0;
  }
 }
}
/*      function definition for CMP-DELETE-FILE                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L3cmp_delete_file(cl_object v1file)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2;
   v2 = ecl_make_bool(ecl_symbol_value(VV[39])==ECL_NIL);
   if (Null(v2)) { goto L2; }
   value0 = v2;
   cl_env_copy->nvalues = 1;
   return value0;
L2:;
   {
    cl_object v3;
    v3 = si_getenv(VV[40]);
    if (Null(v3)) { goto L5; }
    value0 = v3;
    cl_env_copy->nvalues = 1;
    return value0;
L5:;
    {
     cl_object v4;
     T0 = cl_probe_file(v1file);
     v4 = ecl_make_bool(T0==ECL_NIL);
     if (Null(v4)) { goto L8; }
     value0 = v4;
     cl_env_copy->nvalues = 1;
     return value0;
L8:;
     if (Null(ecl_symbol_value(VV[41]))) { goto L10; }
     ecl_function_dispatch(cl_env_copy,VV[252])(2, VV[42], v1file) /*  CMPPROGRESS */;
     cl_set(VV[43],CONS(v1file,ecl_symbol_value(VV[43])));
     value0 = ecl_symbol_value(VV[43]);
     cl_env_copy->nvalues = 1;
     return value0;
L10:;
     value0 = cl_delete_file(v1file);
     return value0;
    }
   }
  }
 }
}
/*      local function LAMBDA23                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC4__lambda23()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v1;
   v1 = (ECL_SYM("DELETE-FILE",295)->symbol.gfdef);
   {
    cl_object v2;
    v2 = ecl_symbol_value(VV[43]);
    {
     cl_object v3;
     cl_object v4;
     v3 = ECL_NIL;
     {
      cl_object v5;
      v5 = v2;
      if (ecl_unlikely(!ECL_LISTP(v5))) FEtype_error_list(v5);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v4 = v5;
     }
L7:;
     if (!(ecl_endp(v4))) { goto L9; }
     goto L8;
L9:;
     v3 = _ecl_car(v4);
     {
      cl_object v5;
      v5 = _ecl_cdr(v4);
      if (ecl_unlikely(!ECL_LISTP(v5))) FEtype_error_list(v5);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v4 = v5;
     }
     ecl_function_dispatch(cl_env_copy,v1)(1, v3);
     goto L7;
L8:;
     value0 = v2;
     cl_env_copy->nvalues = 1;
     return value0;
    }
   }
  }
 }
}
/*      function definition for FIX-FOR-MINGW                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L5fix_for_mingw(cl_object v1directory_namestring)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2x;
   v2x = cl_string_right_trim(VV[45], v1directory_namestring);
   {
    cl_fixnum v3;
    v3 = ecl_length(v2x);
    if (!((v3)==0)) { goto L2; }
   }
   value0 = VV[46];
   cl_env_copy->nvalues = 1;
   return value0;
L2:;
   value0 = v2x;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for LINKER-CC                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L6linker_cc(cl_narg narg, cl_object v1o_pathname, cl_object v2object_files, ...)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 {
  cl_object v3type;
  cl_object v4ld_flags;
  ecl_va_list args; ecl_va_start(args,v2object_files,narg,2);
  {
   cl_object keyvars[4];
   cl_parse_key(args,2,L6linker_cckeys,keyvars,NULL,FALSE);
   ecl_va_end(args);
   if (Null(keyvars[2])) {
    v3type = VV[28];
   } else {
    v3type = keyvars[0];
   }
   if (Null(keyvars[3])) {
    v4ld_flags = ecl_function_dispatch(cl_env_copy,VV[255])(1, ecl_symbol_value(VV[48])) /*  SPLIT-PROGRAM-OPTIONS */;
   } else {
    v4ld_flags = keyvars[1];
   }
  }
  T0 = ecl_symbol_value(VV[49]);
  T1 = ecl_function_dispatch(cl_env_copy,VV[258])(1, v1o_pathname) /*  BRIEF-NAMESTRING */;
  T2 = L40ecl_library_directory();
  T3 = L5fix_for_mingw(T2);
  T4 = cl_concatenate(3, ECL_SYM("STRING",807), VV[51], T3);
  if (Null(ecl_symbol_value(VV[52]))) { goto L5; }
  T5 = ecl_list1(ecl_symbol_value(VV[52]));
  goto L3;
L5:;
  T5 = ECL_NIL;
  goto L3;
L3:;
  T6 = ecl_function_dispatch(cl_env_copy,VV[255])(1, ecl_symbol_value(VV[53])) /*  SPLIT-PROGRAM-OPTIONS */;
  T7 = cl_append(4, v2object_files, T5, T6, v4ld_flags);
  T8 = cl_listX(4, VV[50], T1, T4, T7);
  value0 = ecl_function_dispatch(cl_env_copy,VV[259])(2, T0, T8) /*  SAFE-RUN-PROGRAM */;
  return value0;
 }
}
/*      function definition for LINKER-AR                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L7linker_ar(cl_object v1output_name, cl_object v2o_name, cl_object v3ld_flags)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_namestring(v1output_name);
  T1 = ecl_function_dispatch(cl_env_copy,VV[258])(1, v2o_name) /*  BRIEF-NAMESTRING */;
  T2 = CONS(T1,v3ld_flags);
  value0 = L8static_lib_ar(T0, T2);
  return value0;
 }
}
/*      function definition for STATIC-LIB-AR                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L8static_lib_ar(cl_object v1lib, cl_object v2object_files)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3lib;
   v3lib = ecl_function_dispatch(cl_env_copy,VV[258])(1, v1lib) /*  BRIEF-NAMESTRING */;
   if (Null(cl_probe_file(v3lib))) { goto L2; }
   cl_delete_file(v3lib);
L2:;
   T0 = ecl_symbol_value(VV[56]);
   {
    cl_object v4;
    v4 = ecl_fdefinition(VV[258]);
    {
     cl_object v5;
     cl_object v6;
     v5 = ECL_NIL;
     {
      cl_object v7;
      v7 = v2object_files;
      if (ecl_unlikely(!ECL_LISTP(v7))) FEtype_error_list(v7);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v6 = v7;
     }
     {
      cl_object v7;
      cl_object v8;
      v7 = ecl_list1(ECL_NIL);
      v8 = v7;
L13:;
      if (!(ecl_endp(v6))) { goto L15; }
      goto L14;
L15:;
      v5 = _ecl_car(v6);
      {
       cl_object v9;
       v9 = _ecl_cdr(v6);
       if (ecl_unlikely(!ECL_LISTP(v9))) FEtype_error_list(v9);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v6 = v9;
      }
      {
       cl_object v9;
       v9 = v8;
       if (ecl_unlikely(ECL_ATOM(v9))) FEtype_error_cons(v9);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       T2 = v9;
      }
      T3 = ecl_function_dispatch(cl_env_copy,v4)(1, v5);
      v8 = ecl_list1(T3);
      (ECL_CONS_CDR(T2)=v8,T2);
      goto L13;
L14:;
      T1 = ecl_cdr(v7);
      goto L5;
     }
    }
   }
L5:;
   T2 = cl_listX(3, VV[57], v3lib, T1);
   ecl_function_dispatch(cl_env_copy,VV[259])(2, T0, T2) /*  SAFE-RUN-PROGRAM */;
   T0 = ecl_list1(v3lib);
   value0 = ecl_function_dispatch(cl_env_copy,VV[259])(2, ecl_symbol_value(VV[58]), T0) /*  SAFE-RUN-PROGRAM */;
   return value0;
  }
 }
}
/*      function definition for SHARED-CC                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L9shared_cc(cl_object v1o_pathname, cl_object v2object_files)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3ld_flags;
   v3ld_flags = ecl_function_dispatch(cl_env_copy,VV[255])(1, ecl_symbol_value(VV[60])) /*  SPLIT-PROGRAM-OPTIONS */;
   v3ld_flags = CONS(VV[61],v3ld_flags);
   value0 = L6linker_cc(6, v1o_pathname, v2object_files, ECL_SYM("TYPE",1346), VV[7], VV[62], v3ld_flags);
   return value0;
  }
 }
}
/*      function definition for BUNDLE-CC                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L10bundle_cc(cl_object v1o_pathname, cl_object v2init_name, cl_object v3object_files)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v4ld_flags;
   v4ld_flags = ecl_function_dispatch(cl_env_copy,VV[255])(1, ecl_symbol_value(VV[64])) /*  SPLIT-PROGRAM-OPTIONS */;
   v4ld_flags = cl_listX(3, VV[61], VV[65], v4ld_flags);
   value0 = L6linker_cc(6, v1o_pathname, v3object_files, ECL_SYM("TYPE",1346), VV[4], VV[62], v4ld_flags);
   return value0;
  }
 }
}
/*      function definition for GUESS-KIND                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L11guess_kind(cl_object v1pathname)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2record;
   {
    cl_object v3;
    v3 = cl_pathname_type(1, v1pathname);
    {
     cl_object v4;
     v4 = VV[73];
     goto L6;
L5:;
     {
      cl_object v5;
      cl_object v6;
      {
       cl_object v7;
       v7 = v4;
       if (ecl_unlikely(ECL_ATOM(v7))) FEtype_error_cons(v7);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v5 = v7;
      }
      v6 = ECL_CONS_CAR(v5);
      if (Null(v6)) { goto L8; }
      {
       cl_object v7;
       {
        cl_object v8;
        v8 = v6;
        if (ecl_unlikely(ECL_ATOM(v8))) FEtype_error_cons(v8);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        T0 = v8;
       }
       v7 = ECL_CONS_CAR(T0);
       if (Null(cl_string_equal(2, v3, v7))) { goto L8; }
       v2record = v6;
       goto L1;
      }
     }
L8:;
     v4 = ECL_CONS_CDR(v4);
L6:;
     if (v4==ECL_NIL) { goto L21; }
     goto L5;
L21:;
     v2record = ECL_NIL;
    }
   }
L1:;
   if (Null(v2record)) { goto L23; }
   value0 = ecl_cadr(v2record);
   cl_env_copy->nvalues = 1;
   return value0;
L23:;
   (cl_env_copy->function=(ECL_SYM("WARN",905)->symbol.gfdef))->cfun.entry(2, VV[74], v1pathname) /*  WARN */;
   value0 = ECL_SYM("OBJECT",1305);
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for GUESS-LD-FLAGS                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L12guess_ld_flags(cl_narg narg, cl_object v1pathname, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2kind;
  ecl_va_list args; ecl_va_start(args,v1pathname,narg,1);
  {
   cl_object keyvars[2];
   cl_parse_key(args,1,L12guess_ld_flagskeys,keyvars,NULL,FALSE);
   ecl_va_end(args);
   if (Null(keyvars[1])) {
    v2kind = L11guess_kind(v1pathname);
   } else {
    v2kind = keyvars[0];
   }
  }
  if (!(ecl_eql(v2kind,ECL_SYM("OBJECT",1305)))) { goto L7; }
  goto L4;
  goto L5;
L7:;
  goto L5;
L5:;
  if (!(ecl_eql(v2kind,VV[21]))) { goto L2; }
  goto L3;
L4:;
L3:;
  value0 = ecl_function_dispatch(cl_env_copy,VV[258])(1, v1pathname) /*  BRIEF-NAMESTRING */;
  return value0;
L2:;
  if (!(ecl_eql(v2kind,VV[4]))) { goto L15; }
  goto L12;
  goto L13;
L15:;
  goto L13;
L13:;
  if (!(ecl_eql(v2kind,VV[33]))) { goto L10; }
  goto L11;
L12:;
L11:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L10:;
  if (!(ecl_eql(v2kind,VV[10]))) { goto L23; }
  goto L20;
  goto L21;
L23:;
  goto L21;
L21:;
  if (!(ecl_eql(v2kind,VV[14]))) { goto L18; }
  goto L19;
L20:;
L19:;
  value0 = ecl_function_dispatch(cl_env_copy,VV[258])(1, v1pathname) /*  BRIEF-NAMESTRING */;
  return value0;
L18:;
  if (!(ecl_eql(v2kind,VV[5]))) { goto L31; }
  goto L28;
  goto L29;
L31:;
  goto L29;
L29:;
  if (!(ecl_eql(v2kind,VV[7]))) { goto L26; }
  goto L27;
L28:;
L27:;
  value0 = ecl_function_dispatch(cl_env_copy,VV[258])(1, v1pathname) /*  BRIEF-NAMESTRING */;
  return value0;
L26:;
  if (!(ecl_eql(v2kind,VV[28]))) { goto L34; }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L34:;
  value0 = cl_error(2, VV[80], v2kind);
  return value0;
 }
}
/*      function definition for SYSTEM-LD-FLAG                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L19system_ld_flag(cl_object v1library)
{
 volatile cl_object lex0[2];
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  lex0[0] = v1library;                            /*  LIBRARY         */
TTL:
  {
   cl_object v2system;
   lex0[1] = ECL_NIL;                             /*  ASDF            */
   v2system = ECL_NIL;
   if (Null(lex0[1])) { goto L6; }
   v2system = LC14asdfcall(3, lex0, VV[85], lex0[0], ECL_NIL);
   if (Null(v2system)) { goto L6; }
   value0 = LC17find_archive(lex0, v2system);
   goto L4;
L6:;
   value0 = ECL_NIL;
   goto L4;
L4:;
   if ((value0)!=ECL_NIL) { goto L3; }
   value0 = LC18fallback(lex0);
   return value0;
L3:;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function FALLBACK                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC18fallback(volatile cl_object *lex0)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_string_downcase(1, lex0[0]);
  T1 = L2compile_file_pathname(3, T0, ECL_SYM("TYPE",1346), VV[12]);
  T2 = cl_merge_pathnames(2, VV[84], T1);
  value0 = cl_translate_logical_pathname(1, T2);
  return value0;
 }
}
/*      local function FIND-ARCHIVE                                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC17find_archive(volatile cl_object *lex0, cl_object v1system)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = LC16existing_system_output(lex0, v1system, VV[12]);
  if ((value0)!=ECL_NIL) { goto L2; }
  value0 = LC16existing_system_output(lex0, v1system, VV[5]);
  return value0;
L2:;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function EXISTING-SYSTEM-OUTPUT                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC16existing_system_output(volatile cl_object *lex0, cl_object v1system, cl_object v2type)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3o;
   v3o = LC15system_output(lex0, v1system, v2type);
   if (Null(v3o)) { goto L3; }
   v3o = cl_probe_file(v3o);
   if (Null(v3o)) { goto L3; }
   value0 = cl_namestring(v3o);
   return value0;
L3:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function SYSTEM-OUTPUT                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC15system_output(volatile cl_object *lex0, cl_object v1system, cl_object v2type)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3build;
   T0 = LC13asdfsym(lex0, VV[82]);
   v3build = (cl_env_copy->function=(ECL_SYM("MAKE-INSTANCE",951)->symbol.gfdef))->cfun.entry(3, T0, ECL_SYM("TYPE",1346), v2type) /*  MAKE-INSTANCE */;
   T0 = LC14asdfcall(3, lex0, VV[83], v3build, v1system);
   value0 = ecl_car(T0);
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function ASDFCALL                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC14asdfcall(cl_narg narg, volatile cl_object *lex0, cl_object v1fun, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2rest;
  ecl_va_list args; ecl_va_start(args,v1fun,narg,1);
  v2rest = cl_grab_rest_args(args);
  ecl_va_end(args);
  T0 = LC13asdfsym(lex0, v1fun);
  value0 = cl_apply(2, T0, v2rest);
  return value0;
 }
}
/*      local function ASDFSYM                                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC13asdfsym(volatile cl_object *lex0, cl_object v1x)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_string(v1x);
  value0 = cl_find_symbol(2, T0, lex0[1]);
  return value0;
 }
}
/*      function definition for BUILDER                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L20builder(volatile cl_narg narg, cl_object volatile v1target, cl_object volatile v2output_name, ...)
{
 cl_object T0, T1;
 cl_object volatile env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 {
  cl_object volatile v3lisp_files;
  cl_object volatile v4ld_flags;
  cl_object volatile v5init_name;
  cl_object volatile v6main_name;
  cl_object volatile v7prologue_code;
  cl_object volatile v8epilogue_code;
  cl_object volatile v9system;
  ecl_va_list args; ecl_va_start(args,v2output_name,narg,2);
  {
   cl_object keyvars[14];
   cl_parse_key(args,7,L20builderkeys,keyvars,NULL,FALSE);
   ecl_va_end(args);
   v3lisp_files = keyvars[0];
   v4ld_flags = keyvars[1];
   v5init_name = keyvars[2];
   v6main_name = keyvars[3];
   if (Null(keyvars[11])) {
    v7prologue_code = VV[0];
   } else {
    v7prologue_code = keyvars[4];
   }
   if (Null(keyvars[12])) {
    if (!((v1target)==(VV[28]))) { goto L3; }
    v8epilogue_code = VV[87];
    goto L2;
L3:;
    v8epilogue_code = ECL_NIL;
L2:;
   } else {
    v8epilogue_code = keyvars[5];
   }
   if (Null(keyvars[13])) {
    v9system = VV[88];
   } else {
    v9system = keyvars[6];
   }
  }
  {
   volatile cl_object v10target;
   volatile cl_object v11output_name;
   volatile cl_object v12wrap_name;
   value0 = ecl_symbol_value(VV[89]);
   if ((value0)!=ECL_NIL) { goto L8; }
   T0 = Null(ecl_symbol_value(ECL_SYM("*COMPILE-VERBOSE*",31)))?ECL_T:ECL_NIL;
   goto L6;
L8:;
   T0 = value0;
   goto L6;
L6:;
   ecl_bds_bind(cl_env_copy,VV[89],T0);           /*  *SUPPRESS-COMPILER-MESSAGES* */
   v10target = ecl_function_dispatch(cl_env_copy,VV[275])(1, v1target) /*  NORMALIZE-BUILD-TARGET-NAME */;
   if (ECL_SYMBOLP(v2output_name)) { goto L14; }
   if (!(ECL_STRINGP(v2output_name))) { goto L12; }
   goto L13;
L14:;
L13:;
   v11output_name = L2compile_file_pathname(3, v2output_name, ECL_SYM("TYPE",1346), v10target);
   goto L11;
L12:;
   v11output_name = v2output_name;
L11:;
   v12wrap_name = v5init_name;
   v5init_name = ecl_function_dispatch(cl_env_copy,VV[276])(3, v11output_name, VV[90], v10target) /*  COMPUTE-INIT-NAME */;
   if (v12wrap_name==ECL_NIL) { goto L19; }
   if (!(ecl_equal(v5init_name,v12wrap_name))) { goto L21; }
   ecl_function_dispatch(cl_env_copy,VV[277])(1, VV[91]) /*  CMPWARN  */;
   v12wrap_name = ECL_NIL;
   goto L19;
L21:;
   if (!(ecl_eql(v10target,VV[10]))) { goto L31; }
   value0 = VV[92];
   goto L29;
L31:;
   value0 = ECL_NIL;
   goto L29;
L29:;
   if ((value0)!=ECL_NIL) { goto L28; }
   if (!(ecl_eql(v10target,VV[5]))) { goto L34; }
   T0 = VV[93];
   goto L26;
L34:;
   T0 = ECL_NIL;
   goto L26;
L28:;
   T0 = value0;
   goto L26;
L26:;
   if (!(T0==ECL_NIL)) { goto L19; }
   ecl_function_dispatch(cl_env_copy,VV[277])(1, VV[94]) /*  CMPWARN  */;
L19:;
   if ((v6main_name)!=ECL_NIL) { goto L36; }
   v6main_name = ecl_function_dispatch(cl_env_copy,VV[276])(5, v11output_name, VV[90], v10target, VV[95], VV[96]) /*  COMPUTE-INIT-NAME */;
L36:;
   if (!(v8epilogue_code==ECL_NIL)) { goto L40; }
   v8epilogue_code = VV[0];
   goto L39;
L40:;
   if (ECL_STRINGP(v8epilogue_code)) { goto L39; }
   {
    volatile cl_object v13;
    v13 = ecl_symbol_value(ECL_SYM("+IO-SYNTAX-PROGV-LIST+",1777));
    {
     cl_object v15, v16; cl_index v14;
     v15 = _ecl_car(v13);
     v16 = _ecl_cdr(v13);
     v14 = ecl_progv(cl_env_copy, v15, v16);
     {
      volatile cl_object v17stream;
      v17stream = cl_make_string_output_stream(0);
      {
       volatile bool unwinding = FALSE;
       cl_index v18=ECL_STACK_INDEX(cl_env_copy),v19;
       ecl_frame_ptr next_fr;
       ecl_frs_push(cl_env_copy,ECL_PROTECT_TAG);
       if (__ecl_frs_push_result) {
         unwinding = TRUE; next_fr=cl_env_copy->nlj_fr;
       } else {
       ecl_princ(VV[97],v17stream);
       T0 = cl_write_to_string(1, v8epilogue_code);
       ecl_function_dispatch(cl_env_copy,VV[278])(2, T0, v17stream) /*  WT-FILTERED-DATA */;
       ecl_princ(VV[98],v17stream);
       cl_env_copy->values[0] = cl_get_output_stream_string(v17stream);
       }
       ecl_frs_pop(cl_env_copy);
       v19=ecl_stack_push_values(cl_env_copy);
       cl_close(1, v17stream);
       ecl_stack_pop_values(cl_env_copy,v19);
       if (unwinding) ecl_unwind(cl_env_copy,next_fr);
       v8epilogue_code = cl_env_copy->values[0];
       ECL_STACK_SET_INDEX(cl_env_copy,v18);
      }
     }
     ecl_bds_unwind(cl_env_copy,v14);
    }
   }
L39:;
   if (!(v7prologue_code==ECL_NIL)) { goto L55; }
   v7prologue_code = VV[0];
   goto L54;
L55:;
   {
    volatile cl_object v13;
    v13 = ecl_make_bool(ECL_STRINGP(v7prologue_code));
    if (Null(v13)) { goto L59; }
    goto L54;
L59:;
    {
     volatile cl_object v14;
     v14 = ecl_symbol_value(ECL_SYM("+IO-SYNTAX-PROGV-LIST+",1777));
     {
      cl_object v16, v17; cl_index v15;
      v16 = _ecl_car(v14);
      v17 = _ecl_cdr(v14);
      v15 = ecl_progv(cl_env_copy, v16, v17);
      {
       volatile cl_object v18stream;
       v18stream = cl_make_string_output_stream(0);
       {
        volatile bool unwinding = FALSE;
        cl_index v19=ECL_STACK_INDEX(cl_env_copy),v20;
        ecl_frame_ptr next_fr;
        ecl_frs_push(cl_env_copy,ECL_PROTECT_TAG);
        if (__ecl_frs_push_result) {
          unwinding = TRUE; next_fr=cl_env_copy->nlj_fr;
        } else {
        ecl_princ(VV[97],v18stream);
        T0 = cl_write_to_string(1, v7prologue_code);
        ecl_function_dispatch(cl_env_copy,VV[278])(2, T0, v18stream) /*  WT-FILTERED-DATA */;
        ecl_princ(VV[98],v18stream);
        cl_env_copy->values[0] = cl_get_output_stream_string(v18stream);
        }
        ecl_frs_pop(cl_env_copy);
        v20=ecl_stack_push_values(cl_env_copy);
        cl_close(1, v18stream);
        ecl_stack_pop_values(cl_env_copy,v20);
        if (unwinding) ecl_unwind(cl_env_copy,next_fr);
        v7prologue_code = cl_env_copy->values[0];
        ECL_STACK_SET_INDEX(cl_env_copy,v19);
       }
      }
      ecl_bds_unwind(cl_env_copy,v15);
     }
    }
   }
L54:;
   {
    cl_object v13tmp_names;
    cl_object v14tmp_name;
    cl_object v15c_name;
    cl_object v16o_name;
    cl_object v17submodules;
    cl_object v18c_file;
    v13tmp_names = L1safe_mkstemp(VV[99]);
    v14tmp_name = ecl_car(v13tmp_names);
    T0 = L2compile_file_pathname(3, v14tmp_name, ECL_SYM("TYPE",1346), VV[21]);
    v15c_name = si_coerce_to_filename(T0);
    T0 = L2compile_file_pathname(3, v14tmp_name, ECL_SYM("TYPE",1346), ECL_SYM("OBJECT",1305));
    v16o_name = si_coerce_to_filename(T0);
    v17submodules = ECL_NIL;
    v18c_file = ECL_NIL;
    {
     cl_object v19;
     v19 = cl_reverse(v3lisp_files);
     goto L81;
L80:;
     {
      cl_object v20item;
      v20item = ecl_car(v19);
      {
       cl_object v21path;
       cl_object v22kind;
       if (!(ECL_SYMBOLP(v20item))) { goto L87; }
       v21path = L19system_ld_flag(v20item);
       goto L86;
L87:;
       if (Null(cl_pathnamep(v20item))) { goto L89; }
       v21path = v20item;
       goto L86;
L89:;
       if (!(ECL_STRINGP(v20item))) { goto L91; }
       v21path = cl_parse_namestring(1, v20item);
       goto L86;
L91:;
       v21path = si_etypecase_error(v20item, VV[100]);
L86:;
       v22kind = L11guess_kind(v21path);
       if (ecl_eql(v10target,VV[10])) { goto L97; }
       T0 = VV[101];
       goto L96;
L97:;
       T0 = ECL_NIL;
L96:;
       T1 = ecl_append(T0,VV[76]);
       if ((ecl_memql(v22kind,T1))!=ECL_NIL) { goto L94; }
       cl_error(4, VV[102], v20item, v22kind, v10target);
L94:;
       {
        cl_object v23init_fn;
        cl_object v24flags;
        v23init_fn = ecl_function_dispatch(cl_env_copy,VV[279])(2, v21path, v22kind) /*  GUESS-INIT-NAME */;
        v24flags = L12guess_ld_flags(1, v21path);
        if (Null(v24flags)) { goto L101; }
        v4ld_flags = CONS(v24flags,v4ld_flags);
L101:;
        if (Null(v23init_fn)) { goto L85; }
        T0 = cl_list(2, v23init_fn, v21path);
        v17submodules = CONS(T0,v17submodules);
       }
      }
L85:;
     }
     v19 = ecl_cdr(v19);
L81:;
     if (Null(v19)) { goto L108; }
     goto L80;
L108:;
    }
    v18c_file = cl_open(5, v15c_name, ECL_SYM("DIRECTION",1240), ECL_SYM("OUTPUT",1309), ECL_SYM("EXTERNAL-FORMAT",1258), ECL_SYM("DEFAULT",1237));
    cl_format(3, v18c_file, ecl_symbol_value(VV[67]), v17submodules);
    {
     cl_object v19init_tag;
     v19init_tag = ecl_function_dispatch(cl_env_copy,VV[280])(3, v5init_name, VV[90], v10target) /*  INIT-NAME-TAG */;
     if (!(ecl_eql(v10target,VV[28]))) { goto L115; }
     cl_format(7, v18c_file, ecl_symbol_value(VV[68]), v5init_name, v19init_tag, VV[0], v17submodules, VV[0]);
     if (!(ecl_eql(v9system,VV[88]))) { goto L120; }
     T0 = ecl_symbol_value(VV[70]);
     goto L119;
L120:;
     if (!(ecl_eql(v9system,VV[103]))) { goto L122; }
     T0 = ecl_symbol_value(VV[72]);
     goto L119;
L122:;
     T0 = si_ecase_error(v9system, VV[104]);
L119:;
     cl_format(5, v18c_file, T0, v7prologue_code, v5init_name, v8epilogue_code);
     cl_close(1, v18c_file);
     L41compiler_cc(v15c_name, v16o_name);
     T0 = cl_namestring(v16o_name);
     T1 = CONS(T0,v4ld_flags);
     L6linker_cc(2, v11output_name, T1);
     goto L114;
L115:;
     if (!(ecl_eql(v10target,VV[10]))) { goto L126; }
     cl_format(7, v18c_file, ecl_symbol_value(VV[68]), v5init_name, v19init_tag, v7prologue_code, v17submodules, v8epilogue_code);
     if (Null(v12wrap_name)) { goto L129; }
     cl_format(4, v18c_file, ecl_symbol_value(VV[69]), v12wrap_name, v5init_name);
L129:;
     cl_format(6, v18c_file, ecl_symbol_value(VV[71]), v6main_name, v7prologue_code, v5init_name, v8epilogue_code);
     cl_close(1, v18c_file);
     L41compiler_cc(v15c_name, v16o_name);
     if (Null(cl_probe_file(v11output_name))) { goto L134; }
     cl_delete_file(v11output_name);
L134:;
     L7linker_ar(v11output_name, v16o_name, v4ld_flags);
     goto L114;
L126:;
     if (!(ecl_eql(v10target,VV[5]))) { goto L136; }
     cl_format(7, v18c_file, ecl_symbol_value(VV[68]), v5init_name, v19init_tag, v7prologue_code, v17submodules, v8epilogue_code);
     if (Null(v12wrap_name)) { goto L139; }
     cl_format(4, v18c_file, ecl_symbol_value(VV[69]), v12wrap_name, v5init_name);
L139:;
     cl_format(6, v18c_file, ecl_symbol_value(VV[71]), v6main_name, v7prologue_code, v5init_name, v8epilogue_code);
     cl_close(1, v18c_file);
     L41compiler_cc(v15c_name, v16o_name);
     T0 = CONS(v16o_name,v4ld_flags);
     L9shared_cc(v11output_name, T0);
     goto L114;
L136:;
     if (!(ecl_eql(v10target,VV[4]))) { goto L144; }
     cl_format(7, v18c_file, ecl_symbol_value(VV[68]), v5init_name, v19init_tag, v7prologue_code, v17submodules, v8epilogue_code);
     cl_close(1, v18c_file);
     L41compiler_cc(v15c_name, v16o_name);
     T0 = CONS(v16o_name,v4ld_flags);
     L10bundle_cc(v11output_name, v5init_name, T0);
     goto L114;
L144:;
     si_ecase_error(v10target, VV[105]);
L114:;
     {
      cl_object v20;
      cl_object v21;
      v20 = ECL_NIL;
      {
       cl_object v22;
       v22 = v13tmp_names;
       if (ecl_unlikely(!ECL_LISTP(v22))) FEtype_error_list(v22);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v21 = v22;
      }
L154:;
      if (!(ecl_endp(v21))) { goto L156; }
      goto L155;
L156:;
      v20 = _ecl_car(v21);
      {
       cl_object v22;
       v22 = _ecl_cdr(v21);
       if (ecl_unlikely(!ECL_LISTP(v22))) FEtype_error_list(v22);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v21 = v22;
      }
      ecl_function_dispatch(cl_env_copy,VV[44])(1, v20);
      goto L154;
L155:;
      goto L149;
     }
L149:;
     L3cmp_delete_file(v15c_name);
     L3cmp_delete_file(v16o_name);
     value0 = v11output_name;
     cl_env_copy->nvalues = 1;
     ecl_bds_unwind1(cl_env_copy);
     return value0;
    }
   }
  }
 }
}
/*      function definition for BUILD-FASL                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L21build_fasl(cl_narg narg, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  cl_object v1args;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  v1args = cl_grab_rest_args(args);
  ecl_va_end(args);
  T0 = ecl_fdefinition(VV[106]);
  value0 = cl_apply(3, T0, VV[4], v1args);
  return value0;
 }
}
/*      function definition for BUILD-PROGRAM                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L22build_program(cl_narg narg, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  cl_object v1args;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  v1args = cl_grab_rest_args(args);
  ecl_va_end(args);
  T0 = ecl_fdefinition(VV[106]);
  value0 = cl_apply(3, T0, VV[28], v1args);
  return value0;
 }
}
/*      function definition for BUILD-STATIC-LIBRARY                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L23build_static_library(cl_narg narg, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  cl_object v1args;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  v1args = cl_grab_rest_args(args);
  ecl_va_end(args);
  T0 = ecl_fdefinition(VV[106]);
  value0 = cl_apply(3, T0, VV[10], v1args);
  return value0;
 }
}
/*      function definition for BUILD-SHARED-LIBRARY                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L24build_shared_library(cl_narg narg, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  cl_object v1args;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  v1args = cl_grab_rest_args(args);
  ecl_va_end(args);
  T0 = ecl_fdefinition(VV[106]);
  value0 = cl_apply(3, T0, VV[5], v1args);
  return value0;
 }
}
/*      function definition for COMPILE-FILE                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L27compile_file(volatile cl_narg narg, cl_object volatile v1input_pathname, ...)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11;
 cl_object volatile env0 = ECL_NIL;
 cl_object volatile CLV0, CLV1, CLV2, CLV3, CLV4, CLV5, CLV6, CLV7, CLV8, CLV9, CLV10, CLV11, CLV12, CLV13, CLV14;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object volatile v2args;
  cl_object volatile v3c_file;
  cl_object volatile v4h_file;
  cl_object volatile v5data_file;
  cl_object volatile v6output_file;
  ecl_va_list args; ecl_va_start(args,v1input_pathname,narg,1);
  env0 = ECL_NIL;
  CLV0 = env0 = CONS(v1input_pathname,env0);      /*  INPUT-PATHNAME  */
  {
   cl_object keyvars[22];
   cl_parse_key(args,11,L27compile_filekeys,keyvars,(cl_object*)&v2args,FALSE);
   ecl_va_end(args);
   if (Null(keyvars[11])) {
    ecl_bds_push(cl_env_copy,ECL_SYM("*COMPILE-VERBOSE*",31)); /*  *COMPILE-VERBOSE* */
   } else {
    ecl_bds_bind(cl_env_copy,ECL_SYM("*COMPILE-VERBOSE*",31),keyvars[0]); /*  *COMPILE-VERBOSE* */
   }
   if (Null(keyvars[12])) {
    ecl_bds_push(cl_env_copy,ECL_SYM("*COMPILE-PRINT*",30)); /*  *COMPILE-PRINT* */
   } else {
    ecl_bds_bind(cl_env_copy,ECL_SYM("*COMPILE-PRINT*",30),keyvars[1]); /*  *COMPILE-PRINT* */
   }
   CLV1 = env0 = CONS(keyvars[2],env0);           /*  SOURCE-TRUENAME */
   if (Null(keyvars[14])) {
    CLV2 = env0 = CONS(ecl_make_fixnum(0),env0);  /*  SOURCE-OFFSET   */
   } else {
    CLV2 = env0 = CONS(keyvars[3],env0);          /*  SOURCE-OFFSET   */
   }
   v3c_file = keyvars[4];
   v4h_file = keyvars[5];
   v5data_file = keyvars[6];
   CLV3 = env0 = CONS(keyvars[7],env0);           /*  SYSTEM-P        */
   CLV4 = env0 = CONS(keyvars[8],env0);           /*  LOAD            */
   if (Null(keyvars[20])) {
    CLV5 = env0 = CONS(ECL_SYM("DEFAULT",1237),env0); /*  EXTERNAL-FORMAT */
   } else {
    CLV5 = env0 = CONS(keyvars[9],env0);          /*  EXTERNAL-FORMAT */
   }
   v6output_file = keyvars[10];
  }
  {
   volatile cl_object v7input_file;
   volatile cl_object env1 = env0;
   ecl_bds_push(cl_env_copy,ECL_SYM("*STANDARD-OUTPUT*",69)); /*  *STANDARD-OUTPUT* */
   ecl_bds_push(cl_env_copy,ECL_SYM("*ERROR-OUTPUT*",35)); /*  *ERROR-OUTPUT* */
   ecl_bds_push(cl_env_copy,VV[111]);             /*  *COMPILER-IN-USE* */
   ecl_bds_push(cl_env_copy,ECL_SYM("*PACKAGE*",45)); /*  *PACKAGE*   */
   ecl_bds_push(cl_env_copy,ECL_SYM("*READTABLE*",67)); /*  *READTABLE* */
   ecl_bds_bind(cl_env_copy,ECL_SYM("*PRINT-PRETTY*",57),ECL_NIL); /*  *PRINT-PRETTY* */
   ecl_bds_bind(cl_env_copy,ECL_SYM("*COMPILE-FILE-PATHNAME*",28),ECL_NIL); /*  *COMPILE-FILE-PATHNAME* */
   ecl_bds_bind(cl_env_copy,ECL_SYM("*COMPILE-FILE-TRUENAME*",29),ECL_NIL); /*  *COMPILE-FILE-TRUENAME* */
   T0 = CONS(ECL_CONS_CAR(CLV1),ecl_make_fixnum(0));
   ecl_bds_bind(cl_env_copy,ECL_SYM("*SOURCE-LOCATION*",1202),T0); /*  *SOURCE-LOCATION* */
   value0 = ecl_symbol_value(VV[89]);
   if ((value0)!=ECL_NIL) { goto L3; }
   T0 = Null(ecl_symbol_value(ECL_SYM("*COMPILE-VERBOSE*",31)))?ECL_T:ECL_NIL;
   goto L1;
L3:;
   T0 = value0;
   goto L1;
L1:;
   ecl_bds_bind(cl_env_copy,VV[89],T0);           /*  *SUPPRESS-COMPILER-MESSAGES* */
   v7input_file = ECL_NIL;
   CLV6 = env1 = CONS(ECL_NIL,env1);              /*  INIT-NAME       */
   T0 = cl_merge_pathnames(1, ECL_CONS_CAR(CLV0));
   cl_set(ECL_SYM("*COMPILE-FILE-PATHNAME*",28),cl_pathname(T0));
   if ((cl_probe_file(ecl_symbol_value(ECL_SYM("*COMPILE-FILE-PATHNAME*",28))))!=ECL_NIL) { goto L8; }
   if (Null(cl_pathname_type(1, ECL_CONS_CAR(CLV0)))) { goto L10; }
   cl_error(3, ECL_SYM("FILE-ERROR",355), ECL_SYM("PATHNAME",1312), ECL_CONS_CAR(CLV0));
   goto L8;
L10:;
   {
    cl_object v8;
    v8 = VV[112];
    goto L15;
L14:;
    {
     cl_object v9ext;
     v9ext = ecl_car(v8);
     cl_set(ECL_SYM("*COMPILE-FILE-PATHNAME*",28),cl_make_pathname(4, ECL_SYM("TYPE",1346), v9ext, ECL_SYM("DEFAULTS",1238), ECL_CONS_CAR(CLV0)));
     if (Null(cl_probe_file(ecl_symbol_value(ECL_SYM("*COMPILE-FILE-PATHNAME*",28))))) { goto L21; }
     goto L8;
L21:;
    }
    v8 = ecl_cdr(v8);
L15:;
    if (Null(v8)) { goto L25; }
    goto L14;
L25:;
    cl_error(3, ECL_SYM("FILE-ERROR",355), ECL_SYM("PATHNAME",1312), ECL_CONS_CAR(CLV0));
   }
L8:;
   v7input_file = cl_truename(ecl_symbol_value(ECL_SYM("*COMPILE-FILE-PATHNAME*",28)));
   cl_set(ECL_SYM("*COMPILE-FILE-TRUENAME*",29),v7input_file);
   if (Null(ECL_CONS_CAR(CLV3))) { goto L31; }
   if (Null(ECL_CONS_CAR(CLV4))) { goto L31; }
   cl_error(1, VV[113]);
L31:;
   T0 = cl_namestring(ECL_CONS_CAR(CLV0));
   ecl_function_dispatch(cl_env_copy,VV[252])(2, VV[114], T0) /*  CMPPROGRESS */;
   {
    volatile cl_object v8compiler_conditions;
    volatile cl_object env2 = env1;
    ecl_bds_push(cl_env_copy,VV[111]);            /*  *COMPILER-IN-USE* */
    ecl_bds_bind(cl_env_copy,VV[115],ECL_NIL);    /*  *LOAD-TIME-VALUES* */
    T0 = (VV[38]->symbol.gfdef);
    T1 = cl_apply(3, T0, v7input_file, v2args);
    CLV7 = env2 = CONS(T1,env2);                  /*  OUTPUT-FILE     */
    CLV8 = env2 = CONS(ECL_NIL,env2);             /*  TRUE-OUTPUT-FILE */
    T0 = (VV[38]->symbol.gfdef);
    T1 = cl_apply(7, T0, ECL_CONS_CAR(CLV7), VV[116], v3c_file, ECL_SYM("TYPE",1346), VV[21], v2args);
    CLV9 = env2 = CONS(T1,env2);                  /*  C-PATHNAME      */
    T0 = (VV[38]->symbol.gfdef);
    T1 = cl_apply(7, T0, ECL_CONS_CAR(CLV7), VV[116], v4h_file, ECL_SYM("TYPE",1346), VV[25], v2args);
    CLV10 = env2 = CONS(T1,env2);                 /*  H-PATHNAME      */
    T0 = (VV[38]->symbol.gfdef);
    T1 = cl_apply(7, T0, ECL_CONS_CAR(CLV7), VV[116], v5data_file, ECL_SYM("TYPE",1346), VV[17], v2args);
    CLV11 = env2 = CONS(T1,env2);                 /*  DATA-PATHNAME   */
    v8compiler_conditions = ECL_NIL;
    if ((v3c_file)!=ECL_NIL) { goto L41; }
    T0 = ecl_list1(ECL_CONS_CAR(CLV9));
    goto L40;
L41:;
    T0 = ECL_NIL;
L40:;
    if ((v4h_file)!=ECL_NIL) { goto L44; }
    T1 = ecl_list1(ECL_CONS_CAR(CLV10));
    goto L43;
L44:;
    T1 = ECL_NIL;
L43:;
    if ((v5data_file)!=ECL_NIL) { goto L47; }
    T2 = ecl_list1(ECL_CONS_CAR(CLV11));
    goto L46;
L47:;
    T2 = ECL_NIL;
L46:;
    T3 = cl_nconc(3, T0, T1, T2);
    CLV12 = env2 = CONS(T3,env2);                 /*  TO-DELETE       */
    ecl_bds_bind(cl_env_copy,VV[117],ECL_NIL);    /*  *COMPILER-CONDITIONS* */
    {
     volatile cl_object env3 = env2;
     CLV13 = env3 = CONS(ECL_NIL,env3);
     {
      volatile cl_object env4 = env3;
      CLV14 = env4 = CONS(ECL_NEW_FRAME_ID(cl_env_copy),env4); /*  TAGBODY */
      {
       ecl_frs_push(cl_env_copy,ECL_CONS_CAR(CLV14));
       if (__ecl_frs_push_result) {
       if (cl_env_copy->values[0]==ecl_make_fixnum(0))goto L51;
       ecl_internal_error("GO found an inexistent tag");
       }
      }
      {
       cl_object volatile v9;
       v9 = ecl_make_cclosure_va((cl_objectfn)LC25__lambda87,env4,Cblock,0);
       T0 = v9;
      }
      T1 = ecl_function_dispatch(cl_env_copy,VV[297])(4, ECL_SYM("NAME",1300), ECL_SYM("ABORT",79), ECL_SYM("FUNCTION",1264), T0) /*  MAKE-RESTART */;
      T2 = ecl_list1(T1);
      T3 = CONS(T2,ecl_symbol_value(ECL_SYM("*RESTART-CLUSTERS*",5)));
      ecl_bds_bind(cl_env_copy,ECL_SYM("*RESTART-CLUSTERS*",5),T3); /*  *RESTART-CLUSTERS* */
      T0 = ecl_fdefinition(VV[298]);
      T1 = CONS(VV[118],T0);
      T2 = ecl_fdefinition(VV[299]);
      T3 = CONS(ECL_SYM("WARNING",906),T2);
      T4 = ecl_fdefinition(VV[300]);
      T5 = CONS(VV[119],T4);
      T6 = ecl_fdefinition(VV[301]);
      T7 = CONS(VV[120],T6);
      T8 = ecl_fdefinition(VV[301]);
      T9 = CONS(ECL_SYM("SERIOUS-CONDITION",744),T8);
      T10 = cl_list(5, T1, T3, T5, T7, T9);
      T11 = CONS(T10,ecl_symbol_value(ECL_SYM("*HANDLER-CLUSTERS*",6)));
      ecl_bds_bind(cl_env_copy,ECL_SYM("*HANDLER-CLUSTERS*",6),T11); /*  *HANDLER-CLUSTERS* */
      {
       volatile cl_object v9;
       volatile cl_object v10;
       volatile cl_fixnum v11;
       v9 = ecl_symbol_value(ECL_SYM("+LOAD-COMPILE-LOCK+",1461));
       v10 = mp_lock_owner(v9);
       v11 = ecl_fixnum(mp_lock_count(v9));
       {
        struct ecl_stack_frame _ecl_inner_frame_aux;
        volatile cl_object _ecl_inner_frame = ecl_stack_frame_open(cl_env_copy,(cl_object)&_ecl_inner_frame_aux,0);
        {
         volatile cl_object v12;
         v12 = _ecl_inner_frame;
         {
          volatile cl_object v13;
          v13 = ecl_symbol_value(ECL_SYM("*INTERRUPTS-ENABLED*",7));
          ecl_bds_bind(cl_env_copy,ECL_SYM("*INTERRUPTS-ENABLED*",7),ECL_NIL); /*  *INTERRUPTS-ENABLED* */
          ecl_bds_bind(cl_env_copy,ECL_SYM("*ALLOW-WITH-INTERRUPTS*",1793),ECL_NIL); /*  *ALLOW-WITH-INTERRUPTS* */
          {
          volatile bool unwinding = FALSE;
          cl_index v14=ECL_STACK_INDEX(cl_env_copy),v15;
          ecl_frame_ptr next_fr;
          ecl_frs_push(cl_env_copy,ECL_PROTECT_TAG);
          if (__ecl_frs_push_result) {
            unwinding = TRUE; next_fr=cl_env_copy->nlj_fr;
          } else {
          ecl_bds_bind(cl_env_copy,ECL_SYM("*INTERRUPTS-ENABLED*",7),v13); /*  *INTERRUPTS-ENABLED* */
          mp_get_lock(1, v9);
          {
          volatile cl_object v16;
          volatile cl_object v17;
          volatile cl_object v18;
          volatile cl_object v19;
          volatile cl_object v20;
          v16 = cl_copy_tree(ecl_symbol_value(VV[122]));
          T0 = (ECL_SYM("EQUAL",337)->symbol.gfdef);
          v17 = cl_make_hash_table(4, ECL_SYM("SIZE",1335), ecl_make_fixnum(128), ECL_SYM("TEST",1343), T0);
          value0 = ecl_symbol_value(VV[124]);
          if ((value0)!=ECL_NIL) { goto L74; }
          v18 = ecl_symbol_value(VV[125]);
          goto L72;
L74:;
          v18 = value0;
          goto L72;
L72:;
          v19 = ecl_function_dispatch(cl_env_copy,VV[302])(1, ecl_symbol_value(VV[124])) /*  MAKE-OPTIMIZABLE-CONSTANTS */;
          {
          cl_object v21r;
          v21r = ecl_function_dispatch(cl_env_copy,VV[303])(1, ecl_symbol_value(VV[124])) /*  MACHINE-INLINE-INFORMATION */;
          if (Null(v21r)) { goto L79; }
          v20 = si_copy_hash_table(v21r);
          goto L77;
L79:;
          v20 = ecl_function_dispatch(cl_env_copy,VV[304])(1, ecl_symbol_value(VV[124])) /*  MAKE-INLINE-INFORMATION */;
          }
L77:;
          ecl_bds_bind(cl_env_copy,ECL_SYM("*GENSYM-COUNTER*",37),ecl_make_fixnum(0)); /*  *GENSYM-COUNTER* */
          ecl_bds_bind(cl_env_copy,VV[111],ECL_T); /*  *COMPILER-IN-USE* */
          ecl_bds_bind(cl_env_copy,VV[126],VV[121]); /*  *COMPILER-PHASE* */
          ecl_bds_bind(cl_env_copy,VV[127],ECL_NIL); /*  *CALLBACKS*  */
          ecl_bds_bind(cl_env_copy,VV[122],v16);  /*  *CMP-ENV-ROOT*  */
          ecl_bds_bind(cl_env_copy,VV[128],ECL_NIL); /*  *CMP-ENV*    */
          ecl_bds_bind(cl_env_copy,VV[129],ecl_make_fixnum(0)); /*  *MAX-TEMP* */
          ecl_bds_bind(cl_env_copy,VV[130],ecl_make_fixnum(0)); /*  *TEMP* */
          ecl_bds_bind(cl_env_copy,VV[131],ecl_make_fixnum(0)); /*  *NEXT-CMACRO* */
          ecl_bds_bind(cl_env_copy,VV[132],ecl_make_fixnum(0)); /*  *NEXT-CFUN* */
          ecl_bds_bind(cl_env_copy,VV[133],ecl_make_fixnum(0)); /*  *LAST-LABEL* */
          ecl_bds_bind(cl_env_copy,VV[134],v17);  /*  *LOAD-OBJECTS*  */
          ecl_bds_bind(cl_env_copy,VV[135],ECL_NIL); /*  *SETF-DEFINITIONS* */
          ecl_bds_bind(cl_env_copy,VV[136],ECL_NIL); /*  *MAKE-FORMS* */
          ecl_bds_bind(cl_env_copy,VV[137],ECL_NIL); /*  *STATIC-CONSTANTS* */
          ecl_bds_bind(cl_env_copy,VV[138],ECL_NIL); /*  *PERMANENT-OBJECTS* */
          ecl_bds_bind(cl_env_copy,VV[139],ECL_NIL); /*  *TEMPORARY-OBJECTS* */
          ecl_bds_bind(cl_env_copy,VV[140],ECL_NIL); /*  *LOCAL-FUNS* */
          ecl_bds_bind(cl_env_copy,VV[141],ECL_NIL); /*  *GLOBAL-VARS* */
          ecl_bds_bind(cl_env_copy,VV[142],ECL_NIL); /*  *GLOBAL-FUNS* */
          ecl_bds_bind(cl_env_copy,VV[143],ECL_NIL); /*  *GLOBAL-CFUNS-ARRAY* */
          ecl_bds_bind(cl_env_copy,VV[144],ECL_NIL); /*  *UNDEFINED-VARS* */
          ecl_bds_bind(cl_env_copy,VV[145],ECL_NIL); /*  *TOP-LEVEL-FORMS* */
          ecl_bds_bind(cl_env_copy,VV[146],ECL_NIL); /*  *COMPILE-TIME-TOO* */
          ecl_bds_bind(cl_env_copy,VV[147],ECL_NIL); /*  *CLINES-STRING-LIST* */
          ecl_bds_bind(cl_env_copy,VV[148],ecl_make_fixnum(0)); /*  *INLINE-BLOCKS* */
          ecl_bds_bind(cl_env_copy,VV[149],VV[123]); /*  *DEFUN-INLINE-HOOK* */
          ecl_bds_bind(cl_env_copy,VV[124],v18);  /*  *MACHINE*       */
          ecl_bds_bind(cl_env_copy,VV[150],v19);  /*  *OPTIMIZABLE-CONSTANTS* */
          ecl_bds_bind(cl_env_copy,VV[151],v20);  /*  *INLINE-INFORMATION* */
          {
          cl_object volatile v21;
          v21 = ecl_make_cclosure_va((cl_objectfn)LC26__lambda135,env4,Cblock,0);
          T0 = v21;
          }
          cl_env_copy->values[0] = ecl_function_dispatch(cl_env_copy,VV[305])(1, T0) /*  DO-COMPILATION-UNIT */;
          ecl_bds_unwind_n(cl_env_copy,31);
          }
          }
          ecl_frs_pop(cl_env_copy);
          v15=ecl_stack_push_values(cl_env_copy);
          {
          cl_object v16;
          v16 = ecl_symbol_value(ECL_SYM("*CURRENT-PROCESS*",1432));
          T0 = mp_lock_owner(v9);
          if (!((v16)==(T0))) { goto L82; }
          if (!((v10)==(v16))) { goto L86; }
          {
          cl_fixnum v17;
          v17 = ((v9)->lock.counter);
          if (!((v17)>(v11))) { goto L82; }
          goto L84;
          }
L86:;
L84:;
          mp_giveup_lock(v9);
          }
L82:;
          ecl_stack_pop_values(cl_env_copy,v15);
          if (unwinding) ecl_unwind(cl_env_copy,next_fr);
          ECL_STACK_SET_INDEX(cl_env_copy,v14);
          ecl_bds_unwind1(cl_env_copy);
          ecl_bds_unwind1(cl_env_copy);
          }
         }
         ecl_stack_frame_push_values(v12);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         if (Null(ecl_symbol_value(ECL_SYM("*INTERRUPTS-ENABLED*",7)))) { goto L88; }
         si_check_pending_interrupts();
L88:;cl_env_copy->values[0]=ecl_stack_frame_pop_values(v12);
        }
        ecl_stack_frame_close(_ecl_inner_frame);
       }
       ecl_frs_pop(cl_env_copy);
       ecl_bds_unwind1(cl_env_copy);
       ecl_bds_unwind1(cl_env_copy);
       goto L50;
      }
L51:;
      ecl_frs_pop(cl_env_copy);
      goto L50;
     }
    }
L50:;
    v8compiler_conditions = ecl_symbol_value(VV[117]);
    ecl_bds_unwind1(cl_env_copy);
    T0 = ECL_CONS_CAR(CLV8);
    value0 = L28compiler_output_values(T0, v8compiler_conditions);
    ecl_bds_unwind_n(cl_env_copy,14);
    return value0;
   }
  }
 }
}
/*      closure LAMBDA87                                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC25__lambda87(cl_narg narg, ...)
{
 cl_object CLV0, CLV1, CLV2, CLV3, CLV4, CLV5, CLV6, CLV7, CLV8, CLV9, CLV10, CLV11, CLV12, CLV13, CLV14;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV14 = env0;                                    /*  TAGBODY         */
 CLV13 = _ecl_cdr(CLV14);
 CLV12 = _ecl_cdr(CLV13);
 CLV11 = _ecl_cdr(CLV12);
 CLV10 = _ecl_cdr(CLV11);
 CLV9 = _ecl_cdr(CLV10);
 CLV8 = _ecl_cdr(CLV9);
 CLV7 = _ecl_cdr(CLV8);
 CLV6 = _ecl_cdr(CLV7);
 CLV5 = _ecl_cdr(CLV6);
 CLV4 = _ecl_cdr(CLV5);
 CLV3 = _ecl_cdr(CLV4);
 CLV2 = _ecl_cdr(CLV3);
 CLV1 = _ecl_cdr(CLV2);
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 {
  cl_object v1si__temp;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  v1si__temp = cl_grab_rest_args(args);
  ecl_va_end(args);
  ECL_CONS_CAR(CLV13) = v1si__temp;
  cl_go(ECL_CONS_CAR(CLV14),ecl_make_fixnum(0));
 }
 }
}
/*      closure LAMBDA135                                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC26__lambda135(volatile cl_narg narg, ...)
{
 cl_object T0, T1, T2, T3;
 cl_object volatile CLV0, CLV1, CLV2, CLV3, CLV4, CLV5, CLV6, CLV7, CLV8, CLV9, CLV10, CLV11, CLV12, CLV13, CLV14;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile env0 = cl_env_copy->function->cclosure.env;
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV14 = env0;
 CLV13 = _ecl_cdr(CLV14);
 CLV12 = _ecl_cdr(CLV13);                         /*  TO-DELETE       */
 CLV11 = _ecl_cdr(CLV12);
 CLV10 = _ecl_cdr(CLV11);
 CLV9 = _ecl_cdr(CLV10);
 CLV8 = _ecl_cdr(CLV9);
 CLV7 = _ecl_cdr(CLV8);
 CLV6 = _ecl_cdr(CLV7);
 CLV5 = _ecl_cdr(CLV6);
 CLV4 = _ecl_cdr(CLV5);
 CLV3 = _ecl_cdr(CLV4);
 CLV2 = _ecl_cdr(CLV3);
 CLV1 = _ecl_cdr(CLV2);
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=0)) FEwrong_num_arguments_anonym();
 {
TTL:
  L42print_compiler_info();
  if (Null(cl_probe_file(VV[152]))) { goto L2; }
  cl_load(3, VV[152], ECL_SYM("VERBOSE",1353), ecl_symbol_value(ECL_SYM("*COMPILE-VERBOSE*",31)));
L2:;
  {
   volatile cl_object v1stream;
   v1stream = cl_open(3, ecl_symbol_value(ECL_SYM("*COMPILE-FILE-PATHNAME*",28)), ECL_SYM("EXTERNAL-FORMAT",1258), ECL_CONS_CAR(CLV5));
   {
    volatile bool unwinding = FALSE;
    cl_index v2=ECL_STACK_INDEX(cl_env_copy),v3;
    ecl_frame_ptr next_fr;
    ecl_frs_push(cl_env_copy,ECL_PROTECT_TAG);
    if (__ecl_frs_push_result) {
      unwinding = TRUE; next_fr=cl_env_copy->nlj_fr;
    } else {
    {
     struct ecl_stack_frame _ecl_inner_frame_aux;
     volatile cl_object _ecl_inner_frame = ecl_stack_frame_open(cl_env_copy,(cl_object)&_ecl_inner_frame_aux,0);
     {
      cl_object v4;
      v4 = _ecl_inner_frame;
      if ((ECL_CONS_CAR(CLV1))!=ECL_NIL) { goto L11; }
      {
       cl_object v5;
       v5 = ecl_symbol_value(ECL_SYM("*SOURCE-LOCATION*",1202));
       {
        cl_object v6;
        v6 = ecl_symbol_value(ECL_SYM("*COMPILE-FILE-PATHNAME*",28));
        {
         cl_object v7;
         v7 = v5;
         if (ecl_unlikely(ECL_ATOM(v7))) FEtype_error_cons(v7);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         T0 = v7;
        }
        (ECL_CONS_CAR(T0)=v6,T0);
       }
      }
L11:;
      cl_env_copy->values[0] = L37compiler_pass1(2, v1stream, ECL_CONS_CAR(CLV2));
      ecl_stack_frame_push_values(v4);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      if (Null(v1stream)) { goto L19; }
      cl_close(1, v1stream);
L19:;cl_env_copy->values[0]=ecl_stack_frame_pop_values(v4);
     }
     ecl_stack_frame_close(_ecl_inner_frame);
    }
    }
    ecl_frs_pop(cl_env_copy);
    v3=ecl_stack_push_values(cl_env_copy);
    if (Null(v1stream)) { goto L21; }
    cl_close(3, v1stream, ECL_SYM("ABORT",1217), ECL_T);
L21:;
    ecl_stack_pop_values(cl_env_copy,v3);
    if (unwinding) ecl_unwind(cl_env_copy,next_fr);
    ECL_STACK_SET_INDEX(cl_env_copy,v2);
   }
  }
  ecl_function_dispatch(cl_env_copy,VV[252])(1, VV[153]) /*  CMPPROGRESS */;
  if (Null(ECL_CONS_CAR(CLV3))) { goto L27; }
  T0 = ECL_SYM("OBJECT",1305);
  goto L26;
L27:;
  T0 = VV[4];
L26:;
  ECL_CONS_CAR(CLV6) = ecl_function_dispatch(cl_env_copy,VV[276])(3, ECL_CONS_CAR(CLV7), VV[90], T0) /*  COMPUTE-INIT-NAME */;
  T0 = ECL_CONS_CAR(CLV6);
  T1 = cl_namestring(ECL_CONS_CAR(CLV0));
  L38compiler_pass2(6, ECL_CONS_CAR(CLV9), ECL_CONS_CAR(CLV10), ECL_CONS_CAR(CLV11), T0, VV[154], T1);
  ecl_function_dispatch(cl_env_copy,VV[306])(1, ECL_CONS_CAR(CLV11)) /*  DATA-C-DUMP */;
  {
   cl_object v1o_pathname;
   if (Null(ECL_CONS_CAR(CLV3))) { goto L33; }
   v1o_pathname = ECL_CONS_CAR(CLV7);
   goto L32;
L33:;
   v1o_pathname = L2compile_file_pathname(3, ECL_CONS_CAR(CLV7), ECL_SYM("TYPE",1346), ECL_SYM("OBJECT",1305));
L32:;
   ecl_function_dispatch(cl_env_copy,VV[210])(2, ECL_CONS_CAR(CLV9), v1o_pathname) /*  COMPILER-CC */;
   if ((ECL_CONS_CAR(CLV3))!=ECL_NIL) { goto L31; }
   ECL_CONS_CAR(CLV12) = CONS(v1o_pathname,ECL_CONS_CAR(CLV12));
   T0 = si_coerce_to_filename(ECL_CONS_CAR(CLV7));
   T1 = ECL_CONS_CAR(CLV6);
   T2 = si_coerce_to_filename(v1o_pathname);
   T3 = ecl_list1(T2);
   L10bundle_cc(T0, T1, T3);
  }
L31:;
  ECL_CONS_CAR(CLV8) = cl_probe_file(ECL_CONS_CAR(CLV7));
  if (Null(ECL_CONS_CAR(CLV8))) { goto L40; }
  T0 = cl_namestring(ECL_CONS_CAR(CLV0));
  ecl_function_dispatch(cl_env_copy,VV[252])(2, VV[155], T0) /*  CMPPROGRESS */;
  goto L39;
L40:;
  ecl_function_dispatch(cl_env_copy,VV[307])(1, VV[156]) /*  CMPERR   */;
L39:;
  {
   cl_object v1;
   v1 = ecl_fdefinition(VV[44]);
   {
    cl_object v2;
    v2 = ECL_CONS_CAR(CLV12);
    {
     cl_object v3;
     cl_object v4;
     v3 = ECL_NIL;
     {
      cl_object v5;
      v5 = v2;
      if (ecl_unlikely(!ECL_LISTP(v5))) FEtype_error_list(v5);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v4 = v5;
     }
L50:;
     if (!(ecl_endp(v4))) { goto L52; }
     goto L51;
L52:;
     v3 = _ecl_car(v4);
     {
      cl_object v5;
      v5 = _ecl_cdr(v4);
      if (ecl_unlikely(!ECL_LISTP(v5))) FEtype_error_list(v5);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v4 = v5;
     }
     ecl_function_dispatch(cl_env_copy,v1)(1, v3);
     goto L50;
L51:;
     goto L43;
    }
   }
  }
L43:;
  if (Null(ECL_CONS_CAR(CLV4))) { goto L63; }
  if (Null(ECL_CONS_CAR(CLV8))) { goto L63; }
  if ((ECL_CONS_CAR(CLV3))!=ECL_NIL) { goto L63; }
  T0 = ECL_CONS_CAR(CLV8);
  value0 = cl_load(3, T0, ECL_SYM("VERBOSE",1353), ecl_symbol_value(ECL_SYM("*COMPILE-VERBOSE*",31)));
  return value0;
L63:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
 }
}
/*      function definition for COMPILER-OUTPUT-VALUES                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L28compiler_output_values(cl_object v1main_value, cl_object v2conditions)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3i;
   cl_object v4;
   v3i = ECL_NIL;
   {
    cl_object v5;
    v5 = v2conditions;
    if (ecl_unlikely(!ECL_LISTP(v5))) FEtype_error_list(v5);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v4 = v5;
   }
   {
    cl_object v5warning_p;
    v5warning_p = ECL_NIL;
    {
     cl_object v6failure_p;
     v6failure_p = ECL_NIL;
L7:;
     if (!(ecl_endp(v4))) { goto L9; }
     goto L8;
L9:;
     v3i = _ecl_car(v4);
     {
      cl_object v7;
      v7 = _ecl_cdr(v4);
      if (ecl_unlikely(!ECL_LISTP(v7))) FEtype_error_list(v7);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v4 = v7;
     }
     if (Null(si_of_class_p(2, v3i, ECL_SYM("STYLE-WARNING",829)))) { goto L18; }
     v5warning_p = ECL_T;
     goto L17;
L18:;
     if ((si_of_class_p(2, v3i, VV[119]))!=ECL_NIL) { goto L22; }
     if (Null(si_of_class_p(2, v3i, ECL_SYM("WARNING",906)))) { goto L17; }
     goto L21;
L22:;
L21:;
     v5warning_p = ECL_T;
     v6failure_p = ECL_T;
L17:;
     goto L7;
L8:;
     cl_env_copy->nvalues = 3;
     cl_env_copy->values[2] = v6failure_p;
     cl_env_copy->values[1] = v5warning_p;
     cl_env_copy->values[0] = v1main_value;
     return cl_env_copy->values[0];
    }
   }
  }
 }
}
/*      function definition for COMPILE                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L32compile(volatile cl_narg narg, cl_object volatile v1name, ...)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11;
 cl_object volatile env0 = ECL_NIL;
 cl_object volatile CLV0, CLV1, CLV2, CLV3, CLV4, CLV5, CLV6, CLV7, CLV8, CLV9, CLV10, CLV11, CLV12, CLV13;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object volatile v2supplied_p;
  va_list args; va_start(args,v1name);
  env0 = ECL_NIL;
  CLV0 = env0 = CONS(v1name,env0);                /*  NAME            */
  {
   int i = 1;
   if (i >= narg) {
    CLV1 = env0 = CONS(ECL_NIL,env0);             /*  DEF             */
    v2supplied_p = ECL_NIL;
   } else {
    i++;
    CLV1 = env0 = CONS(va_arg(args,cl_object),env0); /*  DEF          */
    v2supplied_p = ECL_T;
   }
  }
  va_end(args);
  {
   volatile cl_object env1 = env0;
   CLV2 = env1 = CONS(ECL_NIL,env1);              /*  FORM            */
   CLV3 = env1 = CONS(ECL_NIL,env1);              /*  LEXENV          */
   value0 = ecl_symbol_value(VV[89]);
   if ((value0)!=ECL_NIL) { goto L3; }
   T0 = Null(ecl_symbol_value(ECL_SYM("*COMPILE-VERBOSE*",31)))?ECL_T:ECL_NIL;
   goto L1;
L3:;
   T0 = value0;
   goto L1;
L1:;
   ecl_bds_bind(cl_env_copy,VV[89],T0);           /*  *SUPPRESS-COMPILER-MESSAGES* */
   ecl_bds_push(cl_env_copy,VV[111]);             /*  *COMPILER-IN-USE* */
   ecl_bds_push(cl_env_copy,ECL_SYM("*STANDARD-OUTPUT*",69)); /*  *STANDARD-OUTPUT* */
   ecl_bds_push(cl_env_copy,ECL_SYM("*ERROR-OUTPUT*",35)); /*  *ERROR-OUTPUT* */
   ecl_bds_push(cl_env_copy,ECL_SYM("*PACKAGE*",45)); /*  *PACKAGE*   */
   ecl_bds_bind(cl_env_copy,ECL_SYM("*COMPILE-PRINT*",30),ECL_NIL); /*  *COMPILE-PRINT* */
   ecl_bds_bind(cl_env_copy,ECL_SYM("*PRINT-PRETTY*",57),ECL_NIL); /*  *PRINT-PRETTY* */
   ecl_bds_bind(cl_env_copy,ECL_SYM("*COMPILER-CONSTANTS*",1019),ECL_T); /*  *COMPILER-CONSTANTS* */
   if ((si_valid_function_name_p(ECL_CONS_CAR(CLV0)))!=ECL_NIL) { goto L5; }
   cl_error(2, VV[160], ECL_CONS_CAR(CLV0));
L5:;
   if (Null(v2supplied_p)) { goto L8; }
   if (Null(ECL_CONS_CAR(CLV1))) { goto L8; }
   if (Null(cl_functionp(ECL_CONS_CAR(CLV1)))) { goto L11; }
   if ((cl_function_lambda_expression(ECL_CONS_CAR(CLV1)))!=ECL_NIL) { goto L13; }
   value0 = ECL_CONS_CAR(CLV1);
   cl_env_copy->nvalues = 1;
   ecl_bds_unwind_n(cl_env_copy,8);
   return value0;
L13:;
   {
    cl_object v3;
    v3 = ECL_NIL;
    value0 = cl_function_lambda_expression(ECL_CONS_CAR(CLV1));
    {
     v3 = value0;
     ECL_CONS_CAR(CLV3) = cl_env_copy->values[1];
    }
    {
     cl_object v4;
     v4 = v3;
     value0 = ecl_make_bool(ECL_LISTP(v4));
     if ((value0)!=ECL_NIL) { goto L24; }
     T0 = cl_functionp(v4);
     goto L22;
L24:;
     T0 = value0;
     goto L22;
L22:;
     if (ecl_unlikely(!((T0)!=ECL_NIL)))
         FEwrong_type_argument(VV[161],v4);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     ECL_CONS_CAR(CLV1) = v4;
    }
   }
   if (!((ECL_CONS_CAR(CLV3))==(ECL_T))) { goto L11; }
   (cl_env_copy->function=(ECL_SYM("WARN",905)->symbol.gfdef))->cfun.entry(1, VV[162]) /*  WARN */;
   cl_env_copy->nvalues = 3;
   cl_env_copy->values[2] = ECL_NIL;
   cl_env_copy->values[1] = ECL_T;
   cl_env_copy->values[0] = ECL_CONS_CAR(CLV1);
   ecl_bds_unwind_n(cl_env_copy,8);
   return cl_env_copy->values[0];
L11:;
   if (Null(ECL_CONS_CAR(CLV0))) { goto L29; }
   T0 = cl_list(2, ECL_SYM("QUOTE",681), ECL_CONS_CAR(CLV0));
   T1 = cl_list(2, ECL_SYM("FDEFINITION",351), T0);
   T2 = cl_list(2, ECL_SYM("FUNCTION",398), ECL_CONS_CAR(CLV1));
   ECL_CONS_CAR(CLV2) = cl_list(3, ECL_SYM("SETF",752), T1, T2);
   goto L28;
L29:;
   T0 = cl_list(2, ECL_SYM("FUNCTION",398), ECL_CONS_CAR(CLV1));
   ECL_CONS_CAR(CLV2) = cl_list(3, ECL_SYM("SET",745), VV[163], T0);
L28:;
   goto L7;
L8:;
   if ((cl_fboundp(ECL_CONS_CAR(CLV0)))!=ECL_NIL) { goto L31; }
   cl_error(2, VV[164], ECL_CONS_CAR(CLV0));
   goto L7;
L31:;
   ECL_CONS_CAR(CLV1) = cl_fdefinition(ECL_CONS_CAR(CLV0));
   if (Null(si_of_class_p(2, ECL_CONS_CAR(CLV1), ECL_SYM("STANDARD-GENERIC-FUNCTION",976)))) { goto L33; }
   (cl_env_copy->function=(ECL_SYM("WARN",905)->symbol.gfdef))->cfun.entry(1, VV[165]) /*  WARN */;
   cl_env_copy->nvalues = 3;
   cl_env_copy->values[2] = ECL_NIL;
   cl_env_copy->values[1] = ECL_T;
   cl_env_copy->values[0] = ECL_CONS_CAR(CLV1);
   ecl_bds_unwind_n(cl_env_copy,8);
   return cl_env_copy->values[0];
L33:;
   ECL_CONS_CAR(CLV2) = cl_function_lambda_expression(ECL_CONS_CAR(CLV1));
   if (!(ECL_CONS_CAR(CLV2)==ECL_NIL)) { goto L37; }
   (cl_env_copy->function=(ECL_SYM("WARN",905)->symbol.gfdef))->cfun.entry(2, VV[166], ECL_CONS_CAR(CLV0)) /*  WARN */;
   cl_env_copy->nvalues = 3;
   cl_env_copy->values[2] = ECL_NIL;
   cl_env_copy->values[1] = ECL_T;
   cl_env_copy->values[0] = ECL_CONS_CAR(CLV1);
   ecl_bds_unwind_n(cl_env_copy,8);
   return cl_env_copy->values[0];
L37:;
   T0 = cl_list(2, ECL_SYM("QUOTE",681), ECL_CONS_CAR(CLV0));
   T1 = cl_list(2, ECL_SYM("FDEFINITION",351), T0);
   T2 = cl_list(2, ECL_SYM("FUNCTION",398), ECL_CONS_CAR(CLV2));
   ECL_CONS_CAR(CLV2) = cl_list(3, ECL_SYM("SETF",752), T1, T2);
L7:;
   {
    volatile cl_object env2 = env1;
    ecl_bds_bind(cl_env_copy,VV[115],ECL_SYM("VALUES",897)); /*  *LOAD-TIME-VALUES* */
    cl_set(VV[159],ecl_plus(ecl_symbol_value(VV[159]),ecl_make_fixnum(1)));
    T0 = ecl_symbol_value(VV[159]);
    T1 = cl_format(3, ECL_NIL, VV[167], T0);
    T2 = L1safe_mkstemp(T1);
    CLV4 = env2 = CONS(T2,env2);                  /*  TMP-NAMES       */
    T0 = ecl_car(ECL_CONS_CAR(CLV4));
    CLV5 = env2 = CONS(T0,env2);                  /*  DATA-PATHNAME   */
    T0 = L2compile_file_pathname(3, ECL_CONS_CAR(CLV5), ECL_SYM("TYPE",1346), VV[21]);
    CLV6 = env2 = CONS(T0,env2);                  /*  C-PATHNAME      */
    T0 = L2compile_file_pathname(3, ECL_CONS_CAR(CLV5), ECL_SYM("TYPE",1346), VV[25]);
    CLV7 = env2 = CONS(T0,env2);                  /*  H-PATHNAME      */
    T0 = L2compile_file_pathname(3, ECL_CONS_CAR(CLV5), ECL_SYM("TYPE",1346), ECL_SYM("OBJECT",1305));
    CLV8 = env2 = CONS(T0,env2);                  /*  O-PATHNAME      */
    T0 = L2compile_file_pathname(1, ECL_CONS_CAR(CLV5));
    CLV9 = env2 = CONS(T0,env2);                  /*  SO-PATHNAME     */
    T0 = ecl_function_dispatch(cl_env_copy,VV[276])(3, ECL_CONS_CAR(CLV9), VV[90], VV[4]) /*  COMPUTE-INIT-NAME */;
    CLV10 = env2 = CONS(T0,env2);                 /*  INIT-NAME       */
    CLV11 = env2 = CONS(ECL_NIL,env2);            /*  COMPILER-CONDITIONS */
    ecl_bds_bind(cl_env_copy,VV[168],ECL_T);      /*  *PERMANENT-DATA* */
    ecl_bds_push(cl_env_copy,VV[122]);            /*  *CMP-ENV-ROOT*  */
    ecl_bds_bind(cl_env_copy,VV[117],ECL_NIL);    /*  *COMPILER-CONDITIONS* */
    {
     volatile cl_object env3 = env2;
     CLV12 = env3 = CONS(ECL_NIL,env3);
     {
      volatile cl_object env4 = env3;
      CLV13 = env4 = CONS(ECL_NEW_FRAME_ID(cl_env_copy),env4); /*  TAGBODY */
      {
       ecl_frs_push(cl_env_copy,ECL_CONS_CAR(CLV13));
       if (__ecl_frs_push_result) {
       if (cl_env_copy->values[0]==ecl_make_fixnum(0))goto L46;
       ecl_internal_error("GO found an inexistent tag");
       }
      }
      {
       cl_object volatile v3;
       v3 = ecl_make_cclosure_va((cl_objectfn)LC29__lambda167,env4,Cblock,0);
       T0 = v3;
      }
      T1 = ecl_function_dispatch(cl_env_copy,VV[297])(4, ECL_SYM("NAME",1300), ECL_SYM("ABORT",79), ECL_SYM("FUNCTION",1264), T0) /*  MAKE-RESTART */;
      T2 = ecl_list1(T1);
      T3 = CONS(T2,ecl_symbol_value(ECL_SYM("*RESTART-CLUSTERS*",5)));
      ecl_bds_bind(cl_env_copy,ECL_SYM("*RESTART-CLUSTERS*",5),T3); /*  *RESTART-CLUSTERS* */
      T0 = ecl_fdefinition(VV[298]);
      T1 = CONS(VV[118],T0);
      T2 = ecl_fdefinition(VV[299]);
      T3 = CONS(ECL_SYM("WARNING",906),T2);
      T4 = ecl_fdefinition(VV[300]);
      T5 = CONS(VV[119],T4);
      T6 = ecl_fdefinition(VV[301]);
      T7 = CONS(VV[120],T6);
      T8 = ecl_fdefinition(VV[301]);
      T9 = CONS(ECL_SYM("SERIOUS-CONDITION",744),T8);
      T10 = cl_list(5, T1, T3, T5, T7, T9);
      T11 = CONS(T10,ecl_symbol_value(ECL_SYM("*HANDLER-CLUSTERS*",6)));
      ecl_bds_bind(cl_env_copy,ECL_SYM("*HANDLER-CLUSTERS*",6),T11); /*  *HANDLER-CLUSTERS* */
      {
       volatile cl_object v3;
       volatile cl_object v4;
       volatile cl_fixnum v5;
       v3 = ecl_symbol_value(ECL_SYM("+LOAD-COMPILE-LOCK+",1461));
       v4 = mp_lock_owner(v3);
       v5 = ecl_fixnum(mp_lock_count(v3));
       {
        struct ecl_stack_frame _ecl_inner_frame_aux;
        volatile cl_object _ecl_inner_frame = ecl_stack_frame_open(cl_env_copy,(cl_object)&_ecl_inner_frame_aux,0);
        {
         volatile cl_object v6;
         v6 = _ecl_inner_frame;
         {
          volatile cl_object v7;
          v7 = ecl_symbol_value(ECL_SYM("*INTERRUPTS-ENABLED*",7));
          ecl_bds_bind(cl_env_copy,ECL_SYM("*INTERRUPTS-ENABLED*",7),ECL_NIL); /*  *INTERRUPTS-ENABLED* */
          ecl_bds_bind(cl_env_copy,ECL_SYM("*ALLOW-WITH-INTERRUPTS*",1793),ECL_NIL); /*  *ALLOW-WITH-INTERRUPTS* */
          {
          volatile bool unwinding = FALSE;
          cl_index v8=ECL_STACK_INDEX(cl_env_copy),v9;
          ecl_frame_ptr next_fr;
          ecl_frs_push(cl_env_copy,ECL_PROTECT_TAG);
          if (__ecl_frs_push_result) {
            unwinding = TRUE; next_fr=cl_env_copy->nlj_fr;
          } else {
          ecl_bds_bind(cl_env_copy,ECL_SYM("*INTERRUPTS-ENABLED*",7),v7); /*  *INTERRUPTS-ENABLED* */
          mp_get_lock(1, v3);
          {
          cl_object v10;
          cl_object v11;
          cl_object v12;
          cl_object v13;
          cl_object v14;
          v10 = cl_copy_tree(ecl_symbol_value(VV[122]));
          T0 = (ECL_SYM("EQUAL",337)->symbol.gfdef);
          v11 = cl_make_hash_table(4, ECL_SYM("SIZE",1335), ecl_make_fixnum(128), ECL_SYM("TEST",1343), T0);
          value0 = ecl_symbol_value(VV[124]);
          if ((value0)!=ECL_NIL) { goto L69; }
          v12 = ecl_symbol_value(VV[125]);
          goto L67;
L69:;
          v12 = value0;
          goto L67;
L67:;
          v13 = ecl_function_dispatch(cl_env_copy,VV[302])(1, ecl_symbol_value(VV[124])) /*  MAKE-OPTIMIZABLE-CONSTANTS */;
          {
          cl_object v15r;
          v15r = ecl_function_dispatch(cl_env_copy,VV[303])(1, ecl_symbol_value(VV[124])) /*  MACHINE-INLINE-INFORMATION */;
          if (Null(v15r)) { goto L74; }
          v14 = si_copy_hash_table(v15r);
          goto L72;
L74:;
          v14 = ecl_function_dispatch(cl_env_copy,VV[304])(1, ecl_symbol_value(VV[124])) /*  MAKE-INLINE-INFORMATION */;
          }
L72:;
          ecl_bds_bind(cl_env_copy,ECL_SYM("*GENSYM-COUNTER*",37),ecl_make_fixnum(0)); /*  *GENSYM-COUNTER* */
          ecl_bds_bind(cl_env_copy,VV[111],ECL_T); /*  *COMPILER-IN-USE* */
          ecl_bds_bind(cl_env_copy,VV[126],VV[121]); /*  *COMPILER-PHASE* */
          ecl_bds_bind(cl_env_copy,VV[127],ECL_NIL); /*  *CALLBACKS*  */
          ecl_bds_bind(cl_env_copy,VV[122],v10);  /*  *CMP-ENV-ROOT*  */
          ecl_bds_bind(cl_env_copy,VV[128],ECL_NIL); /*  *CMP-ENV*    */
          ecl_bds_bind(cl_env_copy,VV[129],ecl_make_fixnum(0)); /*  *MAX-TEMP* */
          ecl_bds_bind(cl_env_copy,VV[130],ecl_make_fixnum(0)); /*  *TEMP* */
          ecl_bds_bind(cl_env_copy,VV[131],ecl_make_fixnum(0)); /*  *NEXT-CMACRO* */
          ecl_bds_bind(cl_env_copy,VV[132],ecl_make_fixnum(0)); /*  *NEXT-CFUN* */
          ecl_bds_bind(cl_env_copy,VV[133],ecl_make_fixnum(0)); /*  *LAST-LABEL* */
          ecl_bds_bind(cl_env_copy,VV[134],v11);  /*  *LOAD-OBJECTS*  */
          ecl_bds_bind(cl_env_copy,VV[135],ECL_NIL); /*  *SETF-DEFINITIONS* */
          ecl_bds_bind(cl_env_copy,VV[136],ECL_NIL); /*  *MAKE-FORMS* */
          ecl_bds_bind(cl_env_copy,VV[137],ECL_NIL); /*  *STATIC-CONSTANTS* */
          ecl_bds_bind(cl_env_copy,VV[138],ECL_NIL); /*  *PERMANENT-OBJECTS* */
          ecl_bds_bind(cl_env_copy,VV[139],ECL_NIL); /*  *TEMPORARY-OBJECTS* */
          ecl_bds_bind(cl_env_copy,VV[140],ECL_NIL); /*  *LOCAL-FUNS* */
          ecl_bds_bind(cl_env_copy,VV[141],ECL_NIL); /*  *GLOBAL-VARS* */
          ecl_bds_bind(cl_env_copy,VV[142],ECL_NIL); /*  *GLOBAL-FUNS* */
          ecl_bds_bind(cl_env_copy,VV[143],ECL_NIL); /*  *GLOBAL-CFUNS-ARRAY* */
          ecl_bds_bind(cl_env_copy,VV[144],ECL_NIL); /*  *UNDEFINED-VARS* */
          ecl_bds_bind(cl_env_copy,VV[145],ECL_NIL); /*  *TOP-LEVEL-FORMS* */
          ecl_bds_bind(cl_env_copy,VV[146],ECL_NIL); /*  *COMPILE-TIME-TOO* */
          ecl_bds_bind(cl_env_copy,VV[147],ECL_NIL); /*  *CLINES-STRING-LIST* */
          ecl_bds_bind(cl_env_copy,VV[148],ecl_make_fixnum(0)); /*  *INLINE-BLOCKS* */
          ecl_bds_bind(cl_env_copy,VV[149],VV[123]); /*  *DEFUN-INLINE-HOOK* */
          ecl_bds_bind(cl_env_copy,VV[124],v12);  /*  *MACHINE*       */
          ecl_bds_bind(cl_env_copy,VV[150],v13);  /*  *OPTIMIZABLE-CONSTANTS* */
          ecl_bds_bind(cl_env_copy,VV[151],v14);  /*  *INLINE-INFORMATION* */
          {
          cl_object v15;
          v15 = ecl_make_cclosure_va((cl_objectfn)LC30__lambda215,env4,Cblock,0);
          T0 = v15;
          }
          cl_env_copy->values[0] = ecl_function_dispatch(cl_env_copy,VV[305])(1, T0) /*  DO-COMPILATION-UNIT */;
          ecl_bds_unwind_n(cl_env_copy,31);
          }
          }
          ecl_frs_pop(cl_env_copy);
          v9=ecl_stack_push_values(cl_env_copy);
          {
          cl_object v10;
          v10 = ecl_symbol_value(ECL_SYM("*CURRENT-PROCESS*",1432));
          T0 = mp_lock_owner(v3);
          if (!((v10)==(T0))) { goto L77; }
          if (!((v4)==(v10))) { goto L81; }
          {
          cl_fixnum v11;
          v11 = ((v3)->lock.counter);
          if (!((v11)>(v5))) { goto L77; }
          goto L79;
          }
L81:;
L79:;
          mp_giveup_lock(v3);
          }
L77:;
          ecl_stack_pop_values(cl_env_copy,v9);
          if (unwinding) ecl_unwind(cl_env_copy,next_fr);
          ECL_STACK_SET_INDEX(cl_env_copy,v8);
          ecl_bds_unwind1(cl_env_copy);
          ecl_bds_unwind1(cl_env_copy);
          }
         }
         ecl_stack_frame_push_values(v6);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         if (Null(ecl_symbol_value(ECL_SYM("*INTERRUPTS-ENABLED*",7)))) { goto L83; }
         si_check_pending_interrupts();
L83:;cl_env_copy->values[0]=ecl_stack_frame_pop_values(v6);
        }
        ecl_stack_frame_close(_ecl_inner_frame);
       }
       ecl_frs_pop(cl_env_copy);
       ecl_bds_unwind1(cl_env_copy);
       ecl_bds_unwind1(cl_env_copy);
       goto L45;
      }
L46:;
      ecl_frs_pop(cl_env_copy);
      goto L45;
     }
    }
L45:;
    ECL_CONS_CAR(CLV11) = ecl_symbol_value(VV[117]);
    ecl_bds_unwind1(cl_env_copy);
    L3cmp_delete_file(ECL_CONS_CAR(CLV6));
    L3cmp_delete_file(ECL_CONS_CAR(CLV7));
    L3cmp_delete_file(ECL_CONS_CAR(CLV9));
    {
     cl_object v3;
     cl_object v4;
     v3 = ECL_NIL;
     {
      cl_object v5;
      v5 = ECL_CONS_CAR(CLV4);
      if (ecl_unlikely(!ECL_LISTP(v5))) FEtype_error_list(v5);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v4 = v5;
     }
L95:;
     if (!(ecl_endp(v4))) { goto L97; }
     goto L96;
L97:;
     v3 = _ecl_car(v4);
     {
      cl_object v5;
      v5 = _ecl_cdr(v4);
      if (ecl_unlikely(!ECL_LISTP(v5))) FEtype_error_list(v5);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v4 = v5;
     }
     ecl_function_dispatch(cl_env_copy,VV[44])(1, v3);
     goto L95;
L96:;
     goto L90;
    }
L90:;
    {
     cl_object v3output;
     value0 = ECL_CONS_CAR(CLV0);
     if ((value0)!=ECL_NIL) { goto L110; }
     if (!(ecl_boundp(cl_env_copy,VV[171]))) { goto L114; }
     value0 = cl_symbol_value(VV[171]);
     goto L112;
L114:;
     value0 = ECL_NIL;
     goto L112;
L112:;
     if ((value0)!=ECL_NIL) { goto L110; }
     {
      cl_object v4;
      v4 = ecl_make_cclosure_va((cl_objectfn)LC31__lambda232,env2,Cblock,0);
      v3output = v4;
      goto L108;
     }
L110:;
     v3output = value0;
     goto L108;
L108:;
     cl_set(VV[171], ECL_NIL);
     si_gc(1, ECL_T);
     value0 = L28compiler_output_values(v3output, ECL_CONS_CAR(CLV11));
     ecl_bds_unwind_n(cl_env_copy,11);
     return value0;
    }
   }
  }
 }
}
/*      closure LAMBDA167                                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC29__lambda167(cl_narg narg, ...)
{
 cl_object CLV0, CLV1, CLV2, CLV3, CLV4, CLV5, CLV6, CLV7, CLV8, CLV9, CLV10, CLV11, CLV12, CLV13;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV13 = env0;                                    /*  TAGBODY         */
 CLV12 = _ecl_cdr(CLV13);
 CLV11 = _ecl_cdr(CLV12);
 CLV10 = _ecl_cdr(CLV11);
 CLV9 = _ecl_cdr(CLV10);
 CLV8 = _ecl_cdr(CLV9);
 CLV7 = _ecl_cdr(CLV8);
 CLV6 = _ecl_cdr(CLV7);
 CLV5 = _ecl_cdr(CLV6);
 CLV4 = _ecl_cdr(CLV5);
 CLV3 = _ecl_cdr(CLV4);
 CLV2 = _ecl_cdr(CLV3);
 CLV1 = _ecl_cdr(CLV2);
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 {
  cl_object v1si__temp;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  v1si__temp = cl_grab_rest_args(args);
  ecl_va_end(args);
  ECL_CONS_CAR(CLV12) = v1si__temp;
  cl_go(ECL_CONS_CAR(CLV13),ecl_make_fixnum(0));
 }
 }
}
/*      closure LAMBDA215                                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC30__lambda215(cl_narg narg, ...)
{
 cl_object T0, T1, T2;
 cl_object CLV0, CLV1, CLV2, CLV3, CLV4, CLV5, CLV6, CLV7, CLV8, CLV9, CLV10, CLV11, CLV12, CLV13;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV13 = env0;
 CLV12 = _ecl_cdr(CLV13);
 CLV11 = _ecl_cdr(CLV12);
 CLV10 = _ecl_cdr(CLV11);                         /*  INIT-NAME       */
 CLV9 = _ecl_cdr(CLV10);
 CLV8 = _ecl_cdr(CLV9);
 CLV7 = _ecl_cdr(CLV8);
 CLV6 = _ecl_cdr(CLV7);
 CLV5 = _ecl_cdr(CLV6);
 CLV4 = _ecl_cdr(CLV5);
 CLV3 = _ecl_cdr(CLV4);
 CLV2 = _ecl_cdr(CLV3);
 CLV1 = _ecl_cdr(CLV2);
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=0)) FEwrong_num_arguments_anonym();
 {
TTL:
  T0 = ECL_CONS_CAR(CLV2);
  ECL_CONS_CAR(CLV2) = ecl_function_dispatch(cl_env_copy,VV[310])(3, T0, ECL_CONS_CAR(CLV3), ecl_symbol_value(VV[122])) /*  SET-CLOSURE-ENV */;
  L42print_compiler_info();
  L37compiler_pass1(1, ECL_CONS_CAR(CLV2));
  ecl_function_dispatch(cl_env_copy,VV[252])(1, VV[153]) /*  CMPPROGRESS */;
  ecl_bds_bind(cl_env_copy,VV[169],ECL_T);        /*  *SELF-DESTRUCTING-FASL* */
  ecl_bds_bind(cl_env_copy,ECL_SYM("*PRINT-CIRCLE*",49),ECL_T); /*  *PRINT-CIRCLE* */
  ecl_bds_bind(cl_env_copy,ECL_SYM("*PRINT-LENGTH*",52),ecl_make_fixnum(8)); /*  *PRINT-LENGTH* */
  T0 = cl_format(3, ECL_NIL, VV[170], ECL_CONS_CAR(CLV1));
  ecl_bds_unwind1(cl_env_copy);
  ecl_bds_unwind1(cl_env_copy);
  L38compiler_pass2(6, ECL_CONS_CAR(CLV6), ECL_CONS_CAR(CLV7), ECL_CONS_CAR(CLV5), ECL_CONS_CAR(CLV10), VV[154], T0);
  ecl_bds_unwind1(cl_env_copy);
  ecl_function_dispatch(cl_env_copy,VV[306])(1, ECL_CONS_CAR(CLV5)) /*  DATA-C-DUMP */;
  L41compiler_cc(ECL_CONS_CAR(CLV6), ECL_CONS_CAR(CLV8));
  T0 = si_coerce_to_filename(ECL_CONS_CAR(CLV9));
  T1 = si_coerce_to_filename(ECL_CONS_CAR(CLV8));
  T2 = ecl_list1(T1);
  L10bundle_cc(T0, ECL_CONS_CAR(CLV10), T2);
  L3cmp_delete_file(ECL_CONS_CAR(CLV6));
  L3cmp_delete_file(ECL_CONS_CAR(CLV7));
  L3cmp_delete_file(ECL_CONS_CAR(CLV8));
  {
   cl_object v1;
   cl_object v2;
   v1 = ECL_NIL;
   {
    cl_object v3;
    v3 = ECL_CONS_CAR(CLV4);
    if (ecl_unlikely(!ECL_LISTP(v3))) FEtype_error_list(v3);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v2 = v3;
   }
L19:;
   if (!(ecl_endp(v2))) { goto L21; }
   goto L20;
L21:;
   v1 = _ecl_car(v2);
   {
    cl_object v3;
    v3 = _ecl_cdr(v2);
    if (ecl_unlikely(!ECL_LISTP(v3))) FEtype_error_list(v3);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v2 = v3;
   }
   ecl_function_dispatch(cl_env_copy,VV[44])(1, v1);
   goto L19;
L20:;
   goto L14;
  }
L14:;
  if (Null(cl_probe_file(ECL_CONS_CAR(CLV9)))) { goto L32; }
  cl_load(3, ECL_CONS_CAR(CLV9), ECL_SYM("VERBOSE",1353), ECL_NIL);
  value0 = L3cmp_delete_file(ECL_CONS_CAR(CLV9));
  return value0;
L32:;
  ECL_CONS_CAR(CLV0) = ECL_NIL;
  cl_set(VV[171], ECL_NIL);
  value0 = ecl_function_dispatch(cl_env_copy,VV[307])(2, VV[172], ECL_CONS_CAR(CLV0)) /*  CMPERR */;
  return value0;
 }
 }
}
/*      closure LAMBDA232                                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC31__lambda232(cl_narg narg, ...)
{
 cl_object T0, T1, T2;
 cl_object CLV0, CLV1, CLV2, CLV3, CLV4, CLV5, CLV6, CLV7, CLV8, CLV9, CLV10, CLV11;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV11 = env0;                                    /*  COMPILER-CONDITIONS */
 CLV10 = _ecl_cdr(CLV11);
 CLV9 = _ecl_cdr(CLV10);
 CLV8 = _ecl_cdr(CLV9);
 CLV7 = _ecl_cdr(CLV8);
 CLV6 = _ecl_cdr(CLV7);
 CLV5 = _ecl_cdr(CLV6);
 CLV4 = _ecl_cdr(CLV5);
 CLV3 = _ecl_cdr(CLV4);
 CLV2 = _ecl_cdr(CLV3);
 CLV1 = _ecl_cdr(CLV2);
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 {
  {
   cl_object v1c;
   cl_object v2;
   v1c = ECL_NIL;
   {
    cl_object v3;
    v3 = ECL_CONS_CAR(CLV11);
    if (ecl_unlikely(!ECL_LISTP(v3))) FEtype_error_list(v3);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v2 = v3;
   }
L5:;
   if (!(ecl_endp(v2))) { goto L7; }
   goto L6;
L7:;
   v1c = _ecl_car(v2);
   {
    cl_object v3;
    v3 = _ecl_cdr(v2);
    if (ecl_unlikely(!ECL_LISTP(v3))) FEtype_error_list(v3);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v2 = v3;
   }
   if (Null(si_of_class_p(2, v1c, VV[119]))) { goto L15; }
   T0 = (ECL_SYM("SIMPLE-PROGRAM-ERROR",1159)->symbol.gfdef);
   T1 = (cl_env_copy->function=(ECL_SYM("SIMPLE-CONDITION-FORMAT-CONTROL",770)->symbol.gfdef))->cfun.entry(1, v1c) /*  SIMPLE-CONDITION-FORMAT-CONTROL */;
   T2 = (cl_env_copy->function=(ECL_SYM("SIMPLE-CONDITION-FORMAT-ARGUMENTS",771)->symbol.gfdef))->cfun.entry(1, v1c) /*  SIMPLE-CONDITION-FORMAT-ARGUMENTS */;
   cl_apply(3, T0, T1, T2);
L15:;
   goto L5;
L6:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
 }
}
/*      function definition for DISASSEMBLE                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L36disassemble(volatile cl_narg narg, cl_object volatile v1thing, ...)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11;
 cl_object volatile env0 = ECL_NIL;
 cl_object volatile CLV0, CLV1, CLV2, CLV3, CLV4, CLV5, CLV6;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  ecl_va_list args; ecl_va_start(args,v1thing,narg,1);
  {
   cl_object keyvars[4];
   cl_parse_key(args,2,L36disassemblekeys,keyvars,NULL,FALSE);
   ecl_va_end(args);
   env0 = ECL_NIL;
   CLV0 = env0 = CONS(keyvars[0],env0);           /*  H-FILE          */
   CLV1 = env0 = CONS(keyvars[1],env0);           /*  DATA-FILE       */
  }
  {
   volatile cl_object env1 = env0;
   CLV2 = env1 = CONS(ECL_NIL,env1);              /*  LEXENV          */
   CLV3 = env1 = CONS(ECL_NIL,env1);              /*  DISASSEMBLED-FORM */
   ecl_bds_push(cl_env_copy,VV[111]);             /*  *COMPILER-IN-USE* */
   ecl_bds_bind(cl_env_copy,ECL_SYM("*PRINT-PRETTY*",57),ECL_NIL); /*  *PRINT-PRETTY* */
   if (Null(si_valid_function_name_p(v1thing))) { goto L1; }
   v1thing = cl_fdefinition(v1thing);
L1:;
   if (Null(cl_functionp(v1thing))) { goto L4; }
   if (Null(cl_function_lambda_expression(v1thing))) { goto L4; }
   {
    cl_object v2;
    v2 = ECL_NIL;
    value0 = cl_function_lambda_expression(v1thing);
    {
     v2 = value0;
     ECL_CONS_CAR(CLV2) = cl_env_copy->values[1];
    }
    {
     cl_object v3;
     v3 = v2;
     value0 = ecl_make_bool(ECL_SYMBOLP(v3));
     if ((value0)!=ECL_NIL) { goto L19; }
     value0 = cl_functionp(v3);
     goto L17;
L19:;
     goto L17;
L17:;
     if ((value0)!=ECL_NIL) { goto L16; }
     T0 = ecl_make_bool(ECL_LISTP(v3));
     goto L14;
L16:;
     T0 = value0;
     goto L14;
L14:;
     if (ecl_unlikely(!((T0)!=ECL_NIL)))
         FEwrong_type_argument(VV[174],v3);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v1thing = v3;
    }
   }
   if (!((ECL_CONS_CAR(CLV2))==(ECL_T))) { goto L4; }
   (cl_env_copy->function=(ECL_SYM("WARN",905)->symbol.gfdef))->cfun.entry(1, VV[175]) /*  WARN */;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   ecl_bds_unwind1(cl_env_copy);
   ecl_bds_unwind1(cl_env_copy);
   return value0;
L4:;
   {
    cl_object v2;
    v2 = ecl_make_bool(v1thing==ECL_NIL);
    if (Null(v2)) { goto L25; }
    goto L23;
L25:;
    if (Null(cl_functionp(v1thing))) { goto L27; }
    if ((si_bc_disassemble(v1thing))!=ECL_NIL) { goto L23; }
    (cl_env_copy->function=(ECL_SYM("WARN",905)->symbol.gfdef))->cfun.entry(2, VV[176], v1thing) /*  WARN */;
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    ecl_bds_unwind1(cl_env_copy);
    ecl_bds_unwind1(cl_env_copy);
    return value0;
L27:;
    if (!(ECL_ATOM(v1thing))) { goto L31; }
    T0 = ecl_list1(v1thing);
    cl_error(9, ECL_SYM("SIMPLE-TYPE-ERROR",775), ECL_SYM("DATUM",1236), v1thing, ECL_SYM("EXPECTED-TYPE",1254), VV[177], ECL_SYM("FORMAT-CONTROL",1263), VV[178], ECL_SYM("FORMAT-ARGUMENTS",1262), T0);
    goto L23;
L31:;
    T0 = ecl_car(v1thing);
    if (!((T0)==(ECL_SYM("LAMBDA",454)))) { goto L33; }
    T0 = ecl_cdr(v1thing);
    ECL_CONS_CAR(CLV3) = cl_listX(3, ECL_SYM("DEFUN",291), VV[171], T0);
    goto L23;
L33:;
    T0 = ecl_car(v1thing);
    if (!((T0)==(ECL_SYM("LAMBDA-BLOCK",1367)))) { goto L36; }
    T0 = ecl_cdr(v1thing);
    ECL_CONS_CAR(CLV3) = CONS(ECL_SYM("DEFUN",291),T0);
    goto L23;
L36:;
    T0 = ecl_list1(v1thing);
    cl_error(9, ECL_SYM("SIMPLE-TYPE-ERROR",775), ECL_SYM("DATUM",1236), v1thing, ECL_SYM("EXPECTED-TYPE",1254), VV[177], ECL_SYM("FORMAT-CONTROL",1263), VV[178], ECL_SYM("FORMAT-ARGUMENTS",1262), T0);
   }
L23:;
   {
    volatile cl_object v2null_stream;
    volatile cl_object v3compiler_conditions;
    volatile cl_object env2 = env1;
    v2null_stream = cl_make_broadcast_stream(0);
    ecl_bds_bind(cl_env_copy,VV[179],v2null_stream); /*  *COMPILER-OUTPUT1* */
    if (Null(ECL_CONS_CAR(CLV0))) { goto L42; }
    T0 = cl_open(5, ECL_CONS_CAR(CLV0), ECL_SYM("DIRECTION",1240), ECL_SYM("OUTPUT",1309), ECL_SYM("EXTERNAL-FORMAT",1258), ECL_SYM("DEFAULT",1237));
    goto L41;
L42:;
    T0 = v2null_stream;
L41:;
    ecl_bds_bind(cl_env_copy,VV[180],T0);         /*  *COMPILER-OUTPUT2* */
    T0 = cl_symbol_function(VV[181]);
    CLV4 = env2 = CONS(T0,env2);                  /*  T3LOCAL-FUN     */
    v3compiler_conditions = ECL_NIL;
    ecl_bds_push(cl_env_copy,VV[122]);            /*  *CMP-ENV-ROOT*  */
    ecl_bds_bind(cl_env_copy,VV[117],ECL_NIL);    /*  *COMPILER-CONDITIONS* */
    {
     volatile cl_object env3 = env2;
     CLV5 = env3 = CONS(ECL_NIL,env3);
     {
      volatile cl_object env4 = env3;
      CLV6 = env4 = CONS(ECL_NEW_FRAME_ID(cl_env_copy),env4); /*  TAGBODY */
      {
       ecl_frs_push(cl_env_copy,ECL_CONS_CAR(CLV6));
       if (__ecl_frs_push_result) {
       if (cl_env_copy->values[0]==ecl_make_fixnum(0))goto L46;
       ecl_internal_error("GO found an inexistent tag");
       }
      }
      {
       cl_object volatile v4;
       v4 = ecl_make_cclosure_va((cl_objectfn)LC33__lambda245,env4,Cblock,0);
       T0 = v4;
      }
      T1 = ecl_function_dispatch(cl_env_copy,VV[297])(4, ECL_SYM("NAME",1300), ECL_SYM("ABORT",79), ECL_SYM("FUNCTION",1264), T0) /*  MAKE-RESTART */;
      T2 = ecl_list1(T1);
      T3 = CONS(T2,ecl_symbol_value(ECL_SYM("*RESTART-CLUSTERS*",5)));
      ecl_bds_bind(cl_env_copy,ECL_SYM("*RESTART-CLUSTERS*",5),T3); /*  *RESTART-CLUSTERS* */
      T0 = ecl_fdefinition(VV[298]);
      T1 = CONS(VV[118],T0);
      T2 = ecl_fdefinition(VV[299]);
      T3 = CONS(ECL_SYM("WARNING",906),T2);
      T4 = ecl_fdefinition(VV[300]);
      T5 = CONS(VV[119],T4);
      T6 = ecl_fdefinition(VV[301]);
      T7 = CONS(VV[120],T6);
      T8 = ecl_fdefinition(VV[301]);
      T9 = CONS(ECL_SYM("SERIOUS-CONDITION",744),T8);
      T10 = cl_list(5, T1, T3, T5, T7, T9);
      T11 = CONS(T10,ecl_symbol_value(ECL_SYM("*HANDLER-CLUSTERS*",6)));
      ecl_bds_bind(cl_env_copy,ECL_SYM("*HANDLER-CLUSTERS*",6),T11); /*  *HANDLER-CLUSTERS* */
      {
       volatile cl_object v4;
       volatile cl_object v5;
       volatile cl_fixnum v6;
       v4 = ecl_symbol_value(ECL_SYM("+LOAD-COMPILE-LOCK+",1461));
       v5 = mp_lock_owner(v4);
       v6 = ecl_fixnum(mp_lock_count(v4));
       {
        struct ecl_stack_frame _ecl_inner_frame_aux;
        volatile cl_object _ecl_inner_frame = ecl_stack_frame_open(cl_env_copy,(cl_object)&_ecl_inner_frame_aux,0);
        {
         volatile cl_object v7;
         v7 = _ecl_inner_frame;
         {
          volatile cl_object v8;
          v8 = ecl_symbol_value(ECL_SYM("*INTERRUPTS-ENABLED*",7));
          ecl_bds_bind(cl_env_copy,ECL_SYM("*INTERRUPTS-ENABLED*",7),ECL_NIL); /*  *INTERRUPTS-ENABLED* */
          ecl_bds_bind(cl_env_copy,ECL_SYM("*ALLOW-WITH-INTERRUPTS*",1793),ECL_NIL); /*  *ALLOW-WITH-INTERRUPTS* */
          {
          volatile bool unwinding = FALSE;
          cl_index v9=ECL_STACK_INDEX(cl_env_copy),v10;
          ecl_frame_ptr next_fr;
          ecl_frs_push(cl_env_copy,ECL_PROTECT_TAG);
          if (__ecl_frs_push_result) {
            unwinding = TRUE; next_fr=cl_env_copy->nlj_fr;
          } else {
          ecl_bds_bind(cl_env_copy,ECL_SYM("*INTERRUPTS-ENABLED*",7),v8); /*  *INTERRUPTS-ENABLED* */
          mp_get_lock(1, v4);
          {
          volatile cl_object v11;
          volatile cl_object v12;
          volatile cl_object v13;
          volatile cl_object v14;
          volatile cl_object v15;
          v11 = cl_copy_tree(ecl_symbol_value(VV[122]));
          T0 = (ECL_SYM("EQUAL",337)->symbol.gfdef);
          v12 = cl_make_hash_table(4, ECL_SYM("SIZE",1335), ecl_make_fixnum(128), ECL_SYM("TEST",1343), T0);
          value0 = ecl_symbol_value(VV[124]);
          if ((value0)!=ECL_NIL) { goto L69; }
          v13 = ecl_symbol_value(VV[125]);
          goto L67;
L69:;
          v13 = value0;
          goto L67;
L67:;
          v14 = ecl_function_dispatch(cl_env_copy,VV[302])(1, ecl_symbol_value(VV[124])) /*  MAKE-OPTIMIZABLE-CONSTANTS */;
          {
          cl_object v16r;
          v16r = ecl_function_dispatch(cl_env_copy,VV[303])(1, ecl_symbol_value(VV[124])) /*  MACHINE-INLINE-INFORMATION */;
          if (Null(v16r)) { goto L74; }
          v15 = si_copy_hash_table(v16r);
          goto L72;
L74:;
          v15 = ecl_function_dispatch(cl_env_copy,VV[304])(1, ecl_symbol_value(VV[124])) /*  MAKE-INLINE-INFORMATION */;
          }
L72:;
          ecl_bds_bind(cl_env_copy,ECL_SYM("*GENSYM-COUNTER*",37),ecl_make_fixnum(0)); /*  *GENSYM-COUNTER* */
          ecl_bds_bind(cl_env_copy,VV[111],ECL_T); /*  *COMPILER-IN-USE* */
          ecl_bds_bind(cl_env_copy,VV[126],VV[121]); /*  *COMPILER-PHASE* */
          ecl_bds_bind(cl_env_copy,VV[127],ECL_NIL); /*  *CALLBACKS*  */
          ecl_bds_bind(cl_env_copy,VV[122],v11);  /*  *CMP-ENV-ROOT*  */
          ecl_bds_bind(cl_env_copy,VV[128],ECL_NIL); /*  *CMP-ENV*    */
          ecl_bds_bind(cl_env_copy,VV[129],ecl_make_fixnum(0)); /*  *MAX-TEMP* */
          ecl_bds_bind(cl_env_copy,VV[130],ecl_make_fixnum(0)); /*  *TEMP* */
          ecl_bds_bind(cl_env_copy,VV[131],ecl_make_fixnum(0)); /*  *NEXT-CMACRO* */
          ecl_bds_bind(cl_env_copy,VV[132],ecl_make_fixnum(0)); /*  *NEXT-CFUN* */
          ecl_bds_bind(cl_env_copy,VV[133],ecl_make_fixnum(0)); /*  *LAST-LABEL* */
          ecl_bds_bind(cl_env_copy,VV[134],v12);  /*  *LOAD-OBJECTS*  */
          ecl_bds_bind(cl_env_copy,VV[135],ECL_NIL); /*  *SETF-DEFINITIONS* */
          ecl_bds_bind(cl_env_copy,VV[136],ECL_NIL); /*  *MAKE-FORMS* */
          ecl_bds_bind(cl_env_copy,VV[137],ECL_NIL); /*  *STATIC-CONSTANTS* */
          ecl_bds_bind(cl_env_copy,VV[138],ECL_NIL); /*  *PERMANENT-OBJECTS* */
          ecl_bds_bind(cl_env_copy,VV[139],ECL_NIL); /*  *TEMPORARY-OBJECTS* */
          ecl_bds_bind(cl_env_copy,VV[140],ECL_NIL); /*  *LOCAL-FUNS* */
          ecl_bds_bind(cl_env_copy,VV[141],ECL_NIL); /*  *GLOBAL-VARS* */
          ecl_bds_bind(cl_env_copy,VV[142],ECL_NIL); /*  *GLOBAL-FUNS* */
          ecl_bds_bind(cl_env_copy,VV[143],ECL_NIL); /*  *GLOBAL-CFUNS-ARRAY* */
          ecl_bds_bind(cl_env_copy,VV[144],ECL_NIL); /*  *UNDEFINED-VARS* */
          ecl_bds_bind(cl_env_copy,VV[145],ECL_NIL); /*  *TOP-LEVEL-FORMS* */
          ecl_bds_bind(cl_env_copy,VV[146],ECL_NIL); /*  *COMPILE-TIME-TOO* */
          ecl_bds_bind(cl_env_copy,VV[147],ECL_NIL); /*  *CLINES-STRING-LIST* */
          ecl_bds_bind(cl_env_copy,VV[148],ecl_make_fixnum(0)); /*  *INLINE-BLOCKS* */
          ecl_bds_bind(cl_env_copy,VV[149],VV[123]); /*  *DEFUN-INLINE-HOOK* */
          ecl_bds_bind(cl_env_copy,VV[124],v13);  /*  *MACHINE*       */
          ecl_bds_bind(cl_env_copy,VV[150],v14);  /*  *OPTIMIZABLE-CONSTANTS* */
          ecl_bds_bind(cl_env_copy,VV[151],v15);  /*  *INLINE-INFORMATION* */
          {
          cl_object volatile v16;
          v16 = ecl_make_cclosure_va((cl_objectfn)LC35__lambda293,env4,Cblock,0);
          T0 = v16;
          }
          cl_env_copy->values[0] = ecl_function_dispatch(cl_env_copy,VV[305])(1, T0) /*  DO-COMPILATION-UNIT */;
          ecl_bds_unwind_n(cl_env_copy,31);
          }
          }
          ecl_frs_pop(cl_env_copy);
          v10=ecl_stack_push_values(cl_env_copy);
          {
          cl_object v11;
          v11 = ecl_symbol_value(ECL_SYM("*CURRENT-PROCESS*",1432));
          T0 = mp_lock_owner(v4);
          if (!((v11)==(T0))) { goto L77; }
          if (!((v5)==(v11))) { goto L81; }
          {
          cl_fixnum v12;
          v12 = ((v4)->lock.counter);
          if (!((v12)>(v6))) { goto L77; }
          goto L79;
          }
L81:;
L79:;
          mp_giveup_lock(v4);
          }
L77:;
          ecl_stack_pop_values(cl_env_copy,v10);
          if (unwinding) ecl_unwind(cl_env_copy,next_fr);
          ECL_STACK_SET_INDEX(cl_env_copy,v9);
          ecl_bds_unwind1(cl_env_copy);
          ecl_bds_unwind1(cl_env_copy);
          }
         }
         ecl_stack_frame_push_values(v7);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         if (Null(ecl_symbol_value(ECL_SYM("*INTERRUPTS-ENABLED*",7)))) { goto L83; }
         si_check_pending_interrupts();
L83:;cl_env_copy->values[0]=ecl_stack_frame_pop_values(v7);
        }
        ecl_stack_frame_close(_ecl_inner_frame);
       }
       ecl_frs_pop(cl_env_copy);
       ecl_bds_unwind1(cl_env_copy);
       ecl_bds_unwind1(cl_env_copy);
       goto L45;
      }
L46:;
      ecl_frs_pop(cl_env_copy);
      goto L45;
     }
    }
L45:;
    v3compiler_conditions = ecl_symbol_value(VV[117]);
    ecl_bds_unwind_n(cl_env_copy,4);
   }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   ecl_bds_unwind1(cl_env_copy);
   ecl_bds_unwind1(cl_env_copy);
   return value0;
  }
 }
}
/*      closure LAMBDA245                                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC33__lambda245(cl_narg narg, ...)
{
 cl_object CLV0, CLV1, CLV2, CLV3, CLV4, CLV5, CLV6;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV6 = env0;                                     /*  TAGBODY         */
 CLV5 = _ecl_cdr(CLV6);
 CLV4 = _ecl_cdr(CLV5);
 CLV3 = _ecl_cdr(CLV4);
 CLV2 = _ecl_cdr(CLV3);
 CLV1 = _ecl_cdr(CLV2);
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 {
  cl_object v1si__temp;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  v1si__temp = cl_grab_rest_args(args);
  ecl_va_end(args);
  ECL_CONS_CAR(CLV5) = v1si__temp;
  cl_go(ECL_CONS_CAR(CLV6),ecl_make_fixnum(0));
 }
 }
}
/*      closure LAMBDA293                                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC35__lambda293(volatile cl_narg narg, ...)
{
 cl_object T0, T1, T2;
 cl_object volatile CLV0, CLV1, CLV2, CLV3, CLV4, CLV5, CLV6;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile env0 = cl_env_copy->function->cclosure.env;
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV6 = env0;
 CLV5 = _ecl_cdr(CLV6);
 CLV4 = _ecl_cdr(CLV5);                           /*  T3LOCAL-FUN     */
 CLV3 = _ecl_cdr(CLV4);
 CLV2 = _ecl_cdr(CLV3);
 CLV1 = _ecl_cdr(CLV2);
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=0)) FEwrong_num_arguments_anonym();
 {
TTL:
  T0 = ECL_CONS_CAR(CLV3);
  ECL_CONS_CAR(CLV3) = ecl_function_dispatch(cl_env_copy,VV[310])(3, T0, ECL_CONS_CAR(CLV2), ecl_symbol_value(VV[122])) /*  SET-CLOSURE-ENV */;
  {
   volatile bool unwinding = FALSE;
   cl_index v1=ECL_STACK_INDEX(cl_env_copy),v2;
   ecl_frame_ptr next_fr;
   ecl_frs_push(cl_env_copy,ECL_PROTECT_TAG);
   if (__ecl_frs_push_result) {
     unwinding = TRUE; next_fr=cl_env_copy->nlj_fr;
   } else {
   {
    cl_object volatile v3;
    v3 = ecl_make_cclosure_va((cl_objectfn)LC34__lambda297,env0,Cblock,0);
    T0 = v3;
   }
   si_fset(2, VV[181], T0);
   L37compiler_pass1(1, ECL_CONS_CAR(CLV3));
   T0 = ecl_function_dispatch(cl_env_copy,VV[276])(3, VV[182], VV[90], VV[4]) /*  COMPUTE-INIT-NAME */;
   if (Null(ECL_CONS_CAR(CLV0))) { goto L9; }
   T1 = ECL_CONS_CAR(CLV0);
   goto L8;
L9:;
   T1 = VV[0];
L8:;
   if (Null(ECL_CONS_CAR(CLV1))) { goto L12; }
   T2 = ECL_CONS_CAR(CLV1);
   goto L11;
L12:;
   T2 = VV[0];
L11:;
   ecl_function_dispatch(cl_env_copy,VV[312])(3, T0, T1, T2) /*  CTOP-WRITE */;
   if (Null(ECL_CONS_CAR(CLV1))) { goto L14; }
   cl_env_copy->values[0] = ecl_function_dispatch(cl_env_copy,VV[306])(1, ECL_CONS_CAR(CLV1)) /*  DATA-C-DUMP */;
   goto L3;
L14:;
   cl_env_copy->values[0] = ECL_NIL;
   cl_env_copy->nvalues = 1;
L3:;
   }
   ecl_frs_pop(cl_env_copy);
   v2=ecl_stack_push_values(cl_env_copy);
   si_fset(2, VV[181], ECL_CONS_CAR(CLV4));
   if (Null(ECL_CONS_CAR(CLV0))) { goto L16; }
   cl_close(1, ecl_symbol_value(VV[180]));
L16:;
   ecl_stack_pop_values(cl_env_copy,v2);
   if (unwinding) ecl_unwind(cl_env_copy,next_fr);
   ECL_STACK_SET_INDEX(cl_env_copy,v1);
   return cl_env_copy->values[0];
  }
 }
 }
}
/*      closure LAMBDA297                                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC34__lambda297(cl_narg narg, ...)
{
 cl_object CLV0, CLV1, CLV2, CLV3, CLV4, CLV5, CLV6;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV6 = env0;
 CLV5 = _ecl_cdr(CLV6);
 CLV4 = _ecl_cdr(CLV5);                           /*  T3LOCAL-FUN     */
 CLV3 = _ecl_cdr(CLV4);
 CLV2 = _ecl_cdr(CLV3);
 CLV1 = _ecl_cdr(CLV2);
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 {
  cl_object v1args;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  v1args = cl_grab_rest_args(args);
  ecl_va_end(args);
  ecl_bds_bind(cl_env_copy,VV[179],ecl_symbol_value(ECL_SYM("*STANDARD-OUTPUT*",69))); /*  *COMPILER-OUTPUT1* */
  value0 = cl_apply(2, ECL_CONS_CAR(CLV4), v1args);
  ecl_bds_unwind1(cl_env_copy);
  return value0;
 }
 }
}
/*      function definition for COMPILER-PASS1                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L37compiler_pass1(cl_narg narg, cl_object v1object, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2source_offset;
  va_list args; va_start(args,v1object);
  {
   int i = 1;
   if (i >= narg) {
    v2source_offset = ECL_NIL;
   } else {
    i++;
    v2source_offset = va_arg(args,cl_object);
   }
  }
  va_end(args);
  ecl_function_dispatch(cl_env_copy,VV[314])(0)   /*  DATA-INIT       */;
  if (Null(cl_streamp(v1object))) { goto L3; }
  {
   cl_object v3form;
   ecl_bds_bind(cl_env_copy,VV[184],ecl_make_fixnum(0)); /*  *COMPILE-FILE-POSITION* */
   v3form = si_read_object_or_ignore(v1object, VV[37]);
   goto L8;
L7:;
   if (Null(v3form)) { goto L10; }
   {
    cl_object v4;
    v4 = ecl_symbol_value(ECL_SYM("*SOURCE-LOCATION*",1202));
    {
     cl_object v5;
     v5 = ecl_plus(v2source_offset,ecl_symbol_value(VV[184]));
     {
      cl_object v6;
      v6 = v4;
      if (ecl_unlikely(ECL_ATOM(v6))) FEtype_error_cons(v6);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      T0 = v6;
     }
     (ECL_CONS_CDR(T0)=v5,T0);
    }
   }
   ecl_function_dispatch(cl_env_copy,VV[315])(1, v3form) /*  T1EXPR   */;
L10:;
   cl_set(VV[184],cl_file_position(1, v1object));
   v3form = si_read_object_or_ignore(v1object, VV[37]);
L8:;
   if ((v3form)==(VV[37])) { goto L23; }
   goto L7;
L23:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   ecl_bds_unwind1(cl_env_copy);
   return value0;
  }
L3:;
  value0 = ecl_function_dispatch(cl_env_copy,VV[315])(1, v1object) /*  T1EXPR */;
  return value0;
 }
}
/*      function definition for COMPILER-PASS2                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L38compiler_pass2(volatile cl_narg narg, cl_object volatile v1c_pathname, cl_object volatile v2h_pathname, cl_object volatile v3data_pathname, cl_object volatile v4init_name, ...)
{
 cl_object T0, T1, T2;
 cl_object volatile env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<4)) FEwrong_num_arguments_anonym();
 {
  cl_object volatile v5input_designator;
  ecl_va_list args; ecl_va_start(args,v4init_name,narg,4);
  {
   cl_object keyvars[2];
   cl_parse_key(args,1,L38compiler_pass2keys,keyvars,NULL,FALSE);
   ecl_va_end(args);
   v5input_designator = keyvars[0];
  }
  T0 = cl_open(7, v1c_pathname, ECL_SYM("DIRECTION",1240), ECL_SYM("OUTPUT",1309), ECL_SYM("IF-DOES-NOT-EXIST",1268), ECL_SYM("CREATE",1235), ECL_SYM("IF-EXISTS",1270), ECL_SYM("SUPERSEDE",1341));
  ecl_bds_bind(cl_env_copy,VV[179],T0);           /*  *COMPILER-OUTPUT1* */
  {
   volatile bool unwinding = FALSE;
   cl_index v6=ECL_STACK_INDEX(cl_env_copy),v7;
   ecl_frame_ptr next_fr;
   ecl_frs_push(cl_env_copy,ECL_PROTECT_TAG);
   if (__ecl_frs_push_result) {
     unwinding = TRUE; next_fr=cl_env_copy->nlj_fr;
   } else {
   {
    struct ecl_stack_frame _ecl_inner_frame_aux;
    volatile cl_object _ecl_inner_frame = ecl_stack_frame_open(cl_env_copy,(cl_object)&_ecl_inner_frame_aux,0);
    {
     volatile cl_object v8;
     v8 = _ecl_inner_frame;
     T0 = cl_lisp_implementation_type();
     T1 = cl_lisp_implementation_version();
     ecl_function_dispatch(cl_env_copy,VV[317])(3, VV[186], T0, T1) /*  WT-COMMENT-NL */;
     {
      cl_object volatile v10;                     /*  MINUTE          */
      cl_object volatile v11;                     /*  HOUR            */
      cl_object volatile v12;                     /*  DAY             */
      cl_object volatile v13;                     /*  MONTH           */
      cl_object volatile v14;                     /*  YEAR            */
      value0 = cl_get_decoded_time();
      {
       v10 = cl_env_copy->values[1];
       v11 = cl_env_copy->values[2];
       v12 = cl_env_copy->values[3];
       v13 = cl_env_copy->values[4];
       v14 = cl_env_copy->values[5];
      }
      ecl_function_dispatch(cl_env_copy,VV[317])(6, VV[187], v14, v13, v12, v11, v10) /*  WT-COMMENT-NL */;
      T0 = cl_software_type();
      T1 = cl_software_version();
      T2 = cl_machine_type();
      ecl_function_dispatch(cl_env_copy,VV[317])(4, VV[188], T0, T1, T2) /*  WT-COMMENT-NL */;
     }
     ecl_function_dispatch(cl_env_copy,VV[317])(2, VV[189], v5input_designator) /*  WT-COMMENT-NL */;
     T0 = cl_open(7, v2h_pathname, ECL_SYM("DIRECTION",1240), ECL_SYM("OUTPUT",1309), ECL_SYM("IF-DOES-NOT-EXIST",1268), ECL_SYM("CREATE",1235), ECL_SYM("IF-EXISTS",1270), ECL_SYM("SUPERSEDE",1341));
     ecl_bds_bind(cl_env_copy,VV[180],T0);        /*  *COMPILER-OUTPUT2* */
     {
      volatile bool unwinding = FALSE;
      cl_index v9=ECL_STACK_INDEX(cl_env_copy),v10;
      ecl_frame_ptr next_fr;
      ecl_frs_push(cl_env_copy,ECL_PROTECT_TAG);
      if (__ecl_frs_push_result) {
        unwinding = TRUE; next_fr=cl_env_copy->nlj_fr;
      } else {
      {
       struct ecl_stack_frame _ecl_inner_frame_aux;
       volatile cl_object _ecl_inner_frame = ecl_stack_frame_open(cl_env_copy,(cl_object)&_ecl_inner_frame_aux,0);
       {
        cl_object v11;
        v11 = _ecl_inner_frame;
        ecl_function_dispatch(cl_env_copy,VV[318])(2, VV[190], ecl_symbol_value(VV[191])) /*  WT-NL1 */;
        ecl_function_dispatch(cl_env_copy,VV[312])(3, v4init_name, v2h_pathname, v3data_pathname) /*  CTOP-WRITE */;
        ecl_terpri(ecl_symbol_value(VV[179]));
        cl_env_copy->values[0] = ecl_terpri(ecl_symbol_value(VV[180]));
        cl_env_copy->nvalues = 1;
        ecl_stack_frame_push_values(v11);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        if (Null(ecl_symbol_value(VV[180]))) { goto L19; }
        cl_close(1, ecl_symbol_value(VV[180]));
L19:;cl_env_copy->values[0]=ecl_stack_frame_pop_values(v11);
       }
       ecl_stack_frame_close(_ecl_inner_frame);
      }
      }
      ecl_frs_pop(cl_env_copy);
      v10=ecl_stack_push_values(cl_env_copy);
      if (Null(ecl_symbol_value(VV[180]))) { goto L21; }
      cl_close(3, ecl_symbol_value(VV[180]), ECL_SYM("ABORT",1217), ECL_T);
L21:;
      ecl_stack_pop_values(cl_env_copy,v10);
      if (unwinding) ecl_unwind(cl_env_copy,next_fr);
      ECL_STACK_SET_INDEX(cl_env_copy,v9);
      ecl_bds_unwind1(cl_env_copy);
     }
     ecl_stack_frame_push_values(v8);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     if (Null(ecl_symbol_value(VV[179]))) { goto L23; }
     cl_close(1, ecl_symbol_value(VV[179]));
L23:;cl_env_copy->values[0]=ecl_stack_frame_pop_values(v8);
    }
    ecl_stack_frame_close(_ecl_inner_frame);
   }
   }
   ecl_frs_pop(cl_env_copy);
   v7=ecl_stack_push_values(cl_env_copy);
   if (Null(ecl_symbol_value(VV[179]))) { goto L25; }
   cl_close(3, ecl_symbol_value(VV[179]), ECL_SYM("ABORT",1217), ECL_T);
L25:;
   ecl_stack_pop_values(cl_env_copy,v7);
   if (unwinding) ecl_unwind(cl_env_copy,next_fr);
   ECL_STACK_SET_INDEX(cl_env_copy,v6);
   ecl_bds_unwind1(cl_env_copy);
   return cl_env_copy->values[0];
  }
 }
}
/*      function definition for ECL-INCLUDE-DIRECTORY                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L39ecl_include_directory()
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(ecl_symbol_value(VV[193]))) { goto L1; }
  T0 = cl_merge_pathnames(2, VV[194], ecl_symbol_value(VV[193]));
  if (Null(cl_probe_file(T0))) { goto L1; }
  value0 = ecl_symbol_value(VV[193]);
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  if (Null(cl_probe_file(VV[195]))) { goto L4; }
  T0 = cl_translate_logical_pathname(1, VV[84]);
  cl_set(VV[193],cl_namestring(T0));
  value0 = ecl_symbol_value(VV[193]);
  cl_env_copy->nvalues = 1;
  return value0;
L4:;
  {
   cl_object v1;
   v1 = cl_error(1, VV[196]);
   if (Null(v1)) { goto L8; }
   value0 = v1;
   cl_env_copy->nvalues = 1;
   return value0;
L8:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for ECL-LIBRARY-DIRECTORY                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L40ecl_library_directory()
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(ecl_symbol_value(VV[198]))) { goto L1; }
  T0 = L2compile_file_pathname(3, VV[199], ECL_SYM("TYPE",1346), VV[5]);
  T1 = cl_merge_pathnames(2, T0, ecl_symbol_value(VV[198]));
  if (Null(cl_probe_file(T1))) { goto L1; }
  value0 = ecl_symbol_value(VV[198]);
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  if (Null(cl_probe_file(VV[200]))) { goto L4; }
  T0 = cl_translate_logical_pathname(1, VV[84]);
  cl_set(VV[198],cl_namestring(T0));
  value0 = ecl_symbol_value(VV[198]);
  cl_env_copy->nvalues = 1;
  return value0;
L4:;
  {
   cl_object v1;
   v1 = cl_error(1, VV[201]);
   if (Null(v1)) { goto L8; }
   value0 = v1;
   cl_env_copy->nvalues = 1;
   return value0;
L8:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for COMPILER-CC                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L41compiler_cc(cl_object v1c_pathname, cl_object v2o_pathname)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_symbol_value(VV[203]);
  T1 = L46precompiled_header_flags();
  T2 = L39ecl_include_directory();
  T3 = L5fix_for_mingw(T2);
  T4 = cl_concatenate(3, ECL_SYM("STRING",807), VV[205], T3);
  T5 = ecl_function_dispatch(cl_env_copy,VV[255])(1, ecl_symbol_value(VV[206])) /*  SPLIT-PROGRAM-OPTIONS */;
  T7 = ecl_function_dispatch(cl_env_copy,VV[322])(1, ECL_SYM("SPEED",793)) /*  CMP-ENV-OPTIMIZATION */;
  if (!(ecl_greatereq(T7,ecl_make_fixnum(2)))) { goto L3; }
  T6 = ecl_function_dispatch(cl_env_copy,VV[255])(1, ecl_symbol_value(VV[207])) /*  SPLIT-PROGRAM-OPTIONS */;
  goto L1;
L3:;
  T6 = ECL_NIL;
  goto L1;
L1:;
  T7 = ecl_function_dispatch(cl_env_copy,VV[258])(1, v1c_pathname) /*  BRIEF-NAMESTRING */;
  T8 = ecl_function_dispatch(cl_env_copy,VV[258])(1, v2o_pathname) /*  BRIEF-NAMESTRING */;
  T9 = cl_list(2, VV[50], T8);
  T10 = ecl_function_dispatch(cl_env_copy,VV[255])(1, ecl_symbol_value(VV[209])) /*  SPLIT-PROGRAM-OPTIONS */;
  T11 = ecl_append(T9,T10);
  T12 = cl_listX(3, VV[208], T7, T11);
  T13 = cl_append(3, T5, T6, T12);
  T14 = CONS(T4,T13);
  T15 = ecl_append(T1,T14);
  T16 = CONS(VV[204],T15);
  value0 = ecl_function_dispatch(cl_env_copy,VV[259])(2, T0, T16) /*  SAFE-RUN-PROGRAM */;
  return value0;
 }
}
/*      function definition for PRINT-COMPILER-INFO                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L42print_compiler_info()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ecl_function_dispatch(cl_env_copy,VV[252])(5, VV[211], ecl_symbol_value(VV[212]), ecl_symbol_value(VV[213]), ecl_symbol_value(VV[214]), ecl_symbol_value(VV[215])) /*  CMPPROGRESS */;
  return value0;
 }
}
/*      local function WITH-COMPILATION-UNIT                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC43with_compilation_unit(cl_object v1, cl_object v2)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4options;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[325])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v5;
    v5 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4options = v5;
   }
   value0 = CONS(ECL_SYM("PROGN",673),v3);
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for NEED-TO-DUMP-PRECOMPILED-HEADER       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L44need_to_dump_precompiled_header()
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v1config;
   cl_object v2need_to_dump;
   v1config = ecl_symbol_value(VV[218]);
   value0 = ecl_make_bool(v1config==ECL_NIL);
   if ((value0)!=ECL_NIL) { goto L4; }
   T0 = ecl_aref1(v1config,0);
   {
    bool v3;
    v3 = (T0)==(ecl_symbol_value(VV[203]));
    value0 = (v3)?ECL_NIL:ECL_T;
   }
   if ((value0)!=ECL_NIL) { goto L4; }
   T0 = ecl_aref1(v1config,1);
   T1 = L39ecl_include_directory();
   {
    bool v3;
    v3 = (T0)==(T1);
    value0 = (v3)?ECL_NIL:ECL_T;
   }
   if ((value0)!=ECL_NIL) { goto L4; }
   T0 = ecl_aref1(v1config,2);
   {
    bool v3;
    v3 = (T0)==(ecl_symbol_value(VV[206]));
    value0 = (v3)?ECL_NIL:ECL_T;
   }
   if ((value0)!=ECL_NIL) { goto L4; }
   T0 = ecl_aref1(v1config,3);
   {
    bool v3;
    v3 = (T0)==(ecl_symbol_value(VV[207]));
    value0 = (v3)?ECL_NIL:ECL_T;
   }
   if ((value0)!=ECL_NIL) { goto L4; }
   T0 = ecl_aref1(v1config,4);
   {
    bool v3;
    v3 = (T0)==(ecl_symbol_value(VV[209]));
    v2need_to_dump = (v3)?ECL_NIL:ECL_T;
    goto L2;
   }
L4:;
   v2need_to_dump = value0;
   goto L2;
L2:;
   if (Null(v2need_to_dump)) { goto L10; }
   T0 = ecl_symbol_value(VV[203]);
   T1 = L39ecl_include_directory();
   cl_set(VV[218],cl_vector(5, T0, T1, ecl_symbol_value(VV[206]), ecl_symbol_value(VV[207]), ecl_symbol_value(VV[209])));
L10:;
   value0 = v2need_to_dump;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for PRECOMPILED-HEADER-FLAGS              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L46precompiled_header_flags()
{
 cl_object T0, T1, T2, T3;
 cl_object volatile env0 = ECL_NIL;
 cl_object volatile CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(ecl_symbol_value(VV[220]))) { goto L1; }
  if (Null(L44need_to_dump_precompiled_header())) { goto L3; }
  {
   volatile cl_object env1 = env0;
   env1 = ECL_NIL;
   CLV0 = env1 = CONS(ECL_NIL,env1);
   {
    volatile cl_object env2 = env1;
    CLV1 = env2 = CONS(ECL_NEW_FRAME_ID(cl_env_copy),env2); /*  TAGBODY */
    {
     ecl_frs_push(cl_env_copy,ECL_CONS_CAR(CLV1));
     if (__ecl_frs_push_result) {
     if (cl_env_copy->values[0]==ecl_make_fixnum(0))goto L5;
     ecl_internal_error("GO found an inexistent tag");
     }
    }
    {
     cl_object v1;
     v1 = ecl_make_cclosure_va((cl_objectfn)LC45__lambda323,env2,Cblock,1);
     T0 = v1;
    }
    T1 = CONS(ECL_SYM("ERROR",339),T0);
    T2 = ecl_list1(T1);
    T3 = CONS(T2,ecl_symbol_value(ECL_SYM("*HANDLER-CLUSTERS*",6)));
    ecl_bds_bind(cl_env_copy,ECL_SYM("*HANDLER-CLUSTERS*",6),T3); /*  *HANDLER-CLUSTERS* */
    L47dump_precompiled_header();
    ecl_frs_pop(cl_env_copy);
    ecl_bds_unwind1(cl_env_copy);
    goto L3;
L5:;
    {
     cl_object v1err;
     v1err = ECL_CONS_CAR(CLV0);
     cl_set(VV[220],ECL_NIL);
     cl_set(VV[221],ECL_NIL);
     cl_set(VV[218],ECL_NIL);
     ecl_function_dispatch(cl_env_copy,VV[328])(2, VV[222], v1err) /*  CMPNOTE */;
     ecl_frs_pop(cl_env_copy);
     goto L3;
    }
   }
  }
L3:;
  value0 = ecl_symbol_value(VV[221]);
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      closure LAMBDA323                                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC45__lambda323(cl_narg narg, cl_object v1si__temp, ...)
{
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV1 = env0;                                     /*  TAGBODY         */
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=1)) FEwrong_num_arguments_anonym();
 {
TTL:
  ECL_CONS_CAR(CLV0) = v1si__temp;
  cl_go(ECL_CONS_CAR(CLV1),ecl_make_fixnum(0));
 }
 }
}
/*      function definition for DUMP-PRECOMPILED-HEADER               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L47dump_precompiled_header()
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v1input_file;
   cl_object v2output_dir;
   cl_object v3output_file;
   T0 = L39ecl_include_directory();
   T1 = cl_pathname_directory(1, T0);
   T2 = ecl_append(T1,VV[224]);
   T3 = L39ecl_include_directory();
   v1input_file = cl_make_pathname(8, ECL_SYM("DIRECTORY",1241), T2, ECL_SYM("DEFAULTS",1238), T3, ECL_SYM("NAME",1300), VV[225], ECL_SYM("TYPE",1346), VV[226]);
   T0 = cl_random(1, ecl_make_fixnum(65535));
   T1 = cl_format(3, ECL_NIL, VV[227], T0);
   T2 = cl_translate_logical_pathname(1, VV[228]);
   v2output_dir = cl_merge_pathnames(2, T1, T2);
   T0 = cl_make_pathname(4, ECL_SYM("NAME",1300), VV[225], ECL_SYM("DEFAULTS",1238), v2output_dir);
   v3output_file = L2compile_file_pathname(3, T0, ECL_SYM("TYPE",1346), VV[30]);
   cl_ensure_directories_exist(1, v2output_dir);
   cl_set(VV[43],CONS(v2output_dir,ecl_symbol_value(VV[43])));
   T0 = ecl_symbol_value(VV[203]);
   T1 = cl_namestring(v1input_file);
   T2 = L5fix_for_mingw(T1);
   T3 = L39ecl_include_directory();
   T4 = L5fix_for_mingw(T3);
   T5 = cl_concatenate(3, ECL_SYM("STRING",807), VV[205], T4);
   T6 = ecl_function_dispatch(cl_env_copy,VV[255])(1, ecl_symbol_value(VV[206])) /*  SPLIT-PROGRAM-OPTIONS */;
   T7 = ecl_function_dispatch(cl_env_copy,VV[255])(1, ecl_symbol_value(VV[207])) /*  SPLIT-PROGRAM-OPTIONS */;
   T8 = cl_namestring(v3output_file);
   T9 = L5fix_for_mingw(T8);
   T10 = ecl_function_dispatch(cl_env_copy,VV[255])(1, ecl_symbol_value(VV[209])) /*  SPLIT-PROGRAM-OPTIONS */;
   T11 = cl_listX(3, VV[50], T9, T10);
   T12 = cl_append(3, T6, T7, T11);
   T13 = cl_listX(5, VV[229], VV[230], T2, T5, T12);
   ecl_function_dispatch(cl_env_copy,VV[259])(2, T0, T13) /*  SAFE-RUN-PROGRAM */;
   cl_set(VV[43],CONS(v3output_file,ecl_symbol_value(VV[43])));
   T0 = cl_namestring(v2output_dir);
   T1 = cl_concatenate(3, ECL_SYM("STRING",807), VV[205], T0);
   T2 = cl_namestring(v2output_dir);
   T3 = cl_concatenate(3, ECL_SYM("STRING",807), T2, VV[232]);
   cl_set(VV[221],cl_list(3, T1, VV[231], T3));
   value0 = ecl_symbol_value(VV[221]);
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      closure INSTALL-C-COMPILER                                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC48install_c_compiler(cl_narg narg, ...)
{
 cl_object T0;
 cl_object CLV0, CLV1, CLV2, CLV3;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV3 = env0;                                     /*  COMPILE-FILE-PATHNAME */
 CLV2 = _ecl_cdr(CLV3);
 CLV1 = _ecl_cdr(CLV2);
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=0)) FEwrong_num_arguments_anonym();
 {
TTL:
  T0 = cl_find_package(VV[235]);
  si_package_lock(T0, ECL_NIL);
  cl_set(ECL_SYM("*FEATURES*",36),cl_delete(2, VV[234], ecl_symbol_value(ECL_SYM("*FEATURES*",36))));
  si_fset(2, VV[183], ECL_CONS_CAR(CLV1));
  si_fset(2, VV[173], ECL_CONS_CAR(CLV0));
  si_fset(2, VV[157], ECL_CONS_CAR(CLV2));
  si_fset(2, VV[38], ECL_CONS_CAR(CLV3));
  T0 = cl_find_package(VV[235]);
  value0 = si_package_lock(T0, ECL_T);
  return value0;
 }
 }
}

#include "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/build/cmp/cmpmain.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _ecl6w8STuZ7_F6yZTr51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CMP;CMPMAIN.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_ecl6w8STuZ7_F6yZTr51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_package_lock(VVtemp[0], ECL_NIL);
  si_select_package(VVtemp[1]);
  ecl_cmp_defun(VV[237]);                         /*  SAFE-MKSTEMP    */
  ecl_cmp_defun(VV[238]);                         /*  COMPILE-FILE-PATHNAME */
  ecl_cmp_defun(VV[251]);                         /*  CMP-DELETE-FILE */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC4__lambda23,ECL_NIL,Cblock,0);
   T0 = v1;
  }
  cl_set(ECL_SYM("*EXIT-HOOKS*",1533),CONS(T0,ecl_symbol_value(ECL_SYM("*EXIT-HOOKS*",1533))));
 }
  ecl_cmp_defun(VV[253]);                         /*  FIX-FOR-MINGW   */
  ecl_cmp_defun(VV[254]);                         /*  LINKER-CC       */
  ecl_cmp_defun(VV[260]);                         /*  LINKER-AR       */
  ecl_cmp_defun(VV[261]);                         /*  STATIC-LIB-AR   */
  ecl_cmp_defun(VV[262]);                         /*  SHARED-CC       */
  ecl_cmp_defun(VV[263]);                         /*  BUNDLE-CC       */
  si_Xmake_constant(VV[67], VVtemp[2]);
  si_Xmake_constant(VV[68], VVtemp[3]);
  si_Xmake_constant(VV[69], VVtemp[4]);
  si_Xmake_constant(VV[70], VVtemp[5]);
  si_Xmake_constant(VV[71], VVtemp[6]);
  si_Xmake_constant(VV[72], VVtemp[7]);
  ecl_cmp_defun(VV[264]);                         /*  GUESS-KIND      */
  ecl_cmp_defun(VV[265]);                         /*  GUESS-LD-FLAGS  */
  ecl_cmp_defun(VV[266]);                         /*  SYSTEM-LD-FLAG  */
  ecl_cmp_defun(VV[267]);                         /*  BUILDER         */
  ecl_cmp_defun(VV[281]);                         /*  BUILD-FASL      */
  ecl_cmp_defun(VV[282]);                         /*  BUILD-PROGRAM   */
  ecl_cmp_defun(VV[283]);                         /*  BUILD-STATIC-LIBRARY */
  ecl_cmp_defun(VV[284]);                         /*  BUILD-SHARED-LIBRARY */
  ecl_cmp_defun(VV[285]);                         /*  COMPILE-FILE    */
  ecl_cmp_defun(VV[308]);                         /*  COMPILER-OUTPUT-VALUES */
  si_Xmake_special(VV[159]);
  if (ecl_boundp(cl_env_copy,VV[159])) { goto L107; }
  cl_set(VV[159],ecl_make_fixnum(0));
L107:;
  ecl_cmp_defun(VV[309]);                         /*  COMPILE         */
  ecl_cmp_defun(VV[311]);                         /*  DISASSEMBLE     */
  ecl_cmp_defun(VV[313]);                         /*  COMPILER-PASS1  */
  ecl_cmp_defun(VV[316]);                         /*  COMPILER-PASS2  */
  ecl_cmp_defun(VV[319]);                         /*  ECL-INCLUDE-DIRECTORY */
  ecl_cmp_defun(VV[320]);                         /*  ECL-LIBRARY-DIRECTORY */
  ecl_cmp_defun(VV[321]);                         /*  COMPILER-CC     */
  ecl_cmp_defun(VV[323]);                         /*  PRINT-COMPILER-INFO */
  ecl_cmp_defmacro(VV[324]);                      /*  WITH-COMPILATION-UNIT */
  ecl_cmp_defun(VV[326]);                         /*  NEED-TO-DUMP-PRECOMPILED-HEADER */
  ecl_cmp_defun(VV[327]);                         /*  PRECOMPILED-HEADER-FLAGS */
  ecl_cmp_defun(VV[329]);                         /*  DUMP-PRECOMPILED-HEADER */
  si_package_lock(VVtemp[0], ECL_T);
  cl_set(ECL_SYM("*FEATURES*",36),cl_delete(2, VV[234], ecl_symbol_value(ECL_SYM("*FEATURES*",36))));
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  cl_object volatile CLV0, CLV1, CLV2, CLV3;
  {
   cl_object env1 = env0;
   T0 = (VV[173]->symbol.gfdef);
   env1 = ECL_NIL;
   CLV0 = env1 = CONS(T0,env1);                   /*  COMPILE         */
   T0 = (VV[183]->symbol.gfdef);
   CLV1 = env1 = CONS(T0,env1);                   /*  DISASSEMBLE     */
   T0 = (VV[157]->symbol.gfdef);
   CLV2 = env1 = CONS(T0,env1);                   /*  COMPILE-FILE    */
   T0 = (VV[38]->symbol.gfdef);
   CLV3 = env1 = CONS(T0,env1);                   /*  COMPILE-FILE-PATHNAME */
   {
    cl_object v1;
    v1 = ecl_make_cclosure_va((cl_objectfn)LC48install_c_compiler,env1,Cblock,0);
    T0 = v1;
   }
   si_fset(2, ECL_SYM("INSTALL-C-COMPILER",2042), T0);
  }
 }
  cl_provide(VV[236]);
}
