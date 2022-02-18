/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CMP;CMPNAME.LSP                                   */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/cmp/cmpname.eclh"
/*      function definition for ENCODE-NUMBER-IN-NAME                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L1encode_number_in_name(cl_object v1number)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ecl_zerop(v1number))) { goto L1; }
  value0 = VV[0];
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  if (!(ecl_minusp(v1number))) { goto L3; }
  v1number = ecl_negate(v1number);
  goto TTL;
L3:;
  {
   cl_fixnum v2base;
   cl_object v3output;
   cl_object v4digit;
   v2base = ecl_length(VV[1]);
   v3output = ECL_NIL;
   v4digit = ecl_make_fixnum(0);
   goto L12;
L11:;
   value0 = ecl_floor2(v1number,ecl_make_fixnum(v2base));
   {
    v1number = value0;
    v4digit = cl_env_copy->values[1];
   }
   T0 = cl_char(VV[1], v4digit);
   v3output = CONS(T0,v3output);
L12:;
   if (ecl_zerop(v1number)) { goto L18; }
   goto L11;
L18:;
   T0 = cl_nreverse(v3output);
   value0 = ecl_function_dispatch(cl_env_copy,VV[52])(4, T0, ECL_SYM("BASE-CHAR",122), ECL_SYM("*",20), ECL_NIL) /*  COERCE-TO-VECTOR */;
   return value0;
  }
 }
}
/*      function definition for UNIQUE-INIT-NAME                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L2unique_init_name(cl_object v1file)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2path;
   cl_object v3path_hash;
   cl_object v4seconds;
   cl_object v5ms;
   cl_object v6tag;
   v2path = cl_pathname(v1file);
   T0 = cl_sxhash(v2path);
   T1 = cl_ash(T0, ecl_make_fixnum(8));
   T2 = cl_pathname_directory(1, v2path);
   T3 = ecl_cddr(T2);
   T4 = cl_sxhash(T3);
   T5 = cl_ash(T4, ecl_make_fixnum(16));
   T6 = cl_pathname_name(1, v2path);
   T7 = cl_sxhash(T6);
   v3path_hash = cl_logxor(3, T1, T5, T7);
   v4seconds = cl_get_universal_time();
   T0 = ecl_times(v4seconds,ecl_make_fixnum(1000));
   T1 = cl_get_internal_real_time();
   T2 = ecl_times(ecl_make_fixnum(1000),T1);
   T3 = ecl_floor2(T2,ecl_make_fixnum(1000));
   T4 = (ecl_floor2(T3,ecl_make_fixnum(1000)),cl_env_copy->values[1]);
   v5ms = ecl_plus(T0,T4);
   T0 = L1encode_number_in_name(v3path_hash);
   T1 = L1encode_number_in_name(v5ms);
   v6tag = cl_concatenate(5, ECL_SYM("BASE-STRING",123), VV[2], T0, VV[3], T1);
   value0 = v6tag;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for KIND->TAG                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L3kind__tag(cl_object v1kind)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ecl_eql(v1kind,ECL_SYM("OBJECT",1305)))) { goto L6; }
  goto L3;
  goto L4;
L6:;
  goto L4;
L4:;
  if (!(ecl_eql(v1kind,VV[6]))) { goto L1; }
  goto L2;
L3:;
L2:;
  value0 = VV[8];
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  if (!(ecl_eql(v1kind,VV[9]))) { goto L14; }
  goto L11;
  goto L12;
L14:;
  goto L12;
L12:;
  if (!(ecl_eql(v1kind,VV[11]))) { goto L9; }
  goto L10;
L11:;
L10:;
  value0 = VV[13];
  cl_env_copy->nvalues = 1;
  return value0;
L9:;
  if (!(ecl_eql(v1kind,VV[14]))) { goto L22; }
  goto L19;
  goto L20;
L22:;
  goto L20;
L20:;
  if (!(ecl_eql(v1kind,VV[16]))) { goto L17; }
  goto L18;
L19:;
L18:;
  value0 = VV[18];
  cl_env_copy->nvalues = 1;
  return value0;
L17:;
  if (!(ecl_eql(v1kind,VV[19]))) { goto L30; }
  goto L27;
  goto L28;
L30:;
  goto L28;
L28:;
  if (!(ecl_eql(v1kind,VV[21]))) { goto L25; }
  goto L26;
L27:;
L26:;
  value0 = VV[23];
  cl_env_copy->nvalues = 1;
  return value0;
L25:;
  if (!(ecl_eql(v1kind,VV[24]))) { goto L33; }
  value0 = VV[26];
  cl_env_copy->nvalues = 1;
  return value0;
L33:;
  value0 = cl_error(2, VV[27], v1kind);
  return value0;
 }
}
/*      function definition for INIT-NAME-TAG                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L4init_name_tag(cl_narg narg, cl_object v1init_name, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2kind;
  ecl_va_list args; ecl_va_start(args,v1init_name,narg,1);
  {
   cl_object keyvars[2];
   cl_parse_key(args,1,L4init_name_tagkeys,keyvars,NULL,FALSE);
   ecl_va_end(args);
   if (Null(keyvars[1])) {
    v2kind = ECL_SYM("OBJECT",1305);
   } else {
    v2kind = keyvars[0];
   }
  }
  T0 = L3kind__tag(v2kind);
  value0 = cl_concatenate(5, ECL_SYM("BASE-STRING",123), T0, VV[29], v1init_name, VV[30]);
  return value0;
 }
}
/*      function definition for SEARCH-TAG                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L5search_tag(cl_object v1stream, cl_object v2tag)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3key;
   cl_object v4string;
   v3key = cl_concatenate(3, ECL_SYM("LIST",483), v2tag, VV[29]);
   v4string = v3key;
   goto L5;
L4:;
   {
    cl_object v5c;
    v5c = cl_read_byte(3, v1stream, ECL_NIL, ECL_NIL);
    if (!(v5c==ECL_NIL)) { goto L9; }
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
L9:;
    {
     cl_object v6;
     v6 = v4string;
     {
      cl_object v7;
      v7 = v6;
      if (ecl_unlikely(!ECL_LISTP(v7))) FEtype_error_list(v7);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
     }
     if (Null(v6)) { goto L18; }
     {
      cl_object v7;
      v7 = ECL_CONS_CDR(v6);
      v4string = v7;
      v6 = ECL_CONS_CAR(v6);
     }
L18:;
     T0 = v6;
    }
    T1 = cl_char_code(T0);
    if (ecl_number_equalp(v5c,T1)) { goto L11; }
    v4string = v3key;
    goto L7;
L11:;
    if (!(v4string==ECL_NIL)) { goto L7; }
    value0 = ECL_T;
    cl_env_copy->nvalues = 1;
    return value0;
   }
L7:;
L5:;
   goto L4;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for READ-NAME                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L6read_name(cl_object v1stream)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2c;
   v2c = ECL_T;
   {
    cl_object v3;
    cl_object v4;
    v3 = ecl_list1(ECL_NIL);
    v4 = v3;
L5:;
    v2c = cl_read_byte(3, v1stream, ECL_NIL, ECL_NIL);
    if (v2c==ECL_NIL) { goto L9; }
    if (!(ecl_number_equalp(v2c,ecl_make_fixnum(64)))) { goto L7; }
    goto L8;
L9:;
L8:;
    goto L6;
L7:;
    {
     cl_object v5;
     v5 = v4;
     if (ecl_unlikely(ECL_ATOM(v5))) FEtype_error_cons(v5);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     T1 = v5;
    }
    T2 = cl_code_char(v2c);
    v4 = ecl_list1(T2);
    (ECL_CONS_CDR(T1)=v4,T1);
    goto L5;
L6:;
    T0 = ecl_cdr(v3);
    goto L1;
   }
  }
L1:;
  value0 = cl_concatenate(2, ECL_SYM("STRING",807), T0);
  return value0;
 }
}
/*      function definition for FIND-INIT-NAME                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L7find_init_name(volatile cl_narg narg, cl_object volatile v1file, ...)
{
 cl_object volatile env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object volatile v2tag;
  ecl_va_list args; ecl_va_start(args,v1file,narg,1);
  {
   cl_object keyvars[2];
   cl_parse_key(args,1,L7find_init_namekeys,keyvars,NULL,FALSE);
   ecl_va_end(args);
   if (Null(keyvars[1])) {
    v2tag = VV[8];
   } else {
    v2tag = keyvars[0];
   }
  }
  {
   volatile cl_object v3stream;
   v3stream = cl_open(5, v1file, ECL_SYM("DIRECTION",1240), ECL_SYM("INPUT",1280), ECL_SYM("ELEMENT-TYPE",1246), VV[32]);
   {
    volatile bool unwinding = FALSE;
    cl_index v4=ECL_STACK_INDEX(cl_env_copy),v5;
    ecl_frame_ptr next_fr;
    ecl_frs_push(cl_env_copy,ECL_PROTECT_TAG);
    if (__ecl_frs_push_result) {
      unwinding = TRUE; next_fr=cl_env_copy->nlj_fr;
    } else {
    {
     struct ecl_stack_frame _ecl_inner_frame_aux;
     volatile cl_object _ecl_inner_frame = ecl_stack_frame_open(cl_env_copy,(cl_object)&_ecl_inner_frame_aux,0);
     {
      cl_object v6;
      v6 = _ecl_inner_frame;
      if (Null(L5search_tag(v3stream, v2tag))) { goto L8; }
      {
       cl_object v7name;
       v7name = L6read_name(v3stream);
       cl_env_copy->values[0] = v7name;
       cl_env_copy->nvalues = 1;
       goto L7;
      }
L8:;
      cl_env_copy->values[0] = ECL_NIL;
      cl_env_copy->nvalues = 1;
L7:;
      ecl_stack_frame_push_values(v6);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      if (Null(v3stream)) { goto L11; }
      cl_close(1, v3stream);
L11:;cl_env_copy->values[0]=ecl_stack_frame_pop_values(v6);
     }
     ecl_stack_frame_close(_ecl_inner_frame);
    }
    }
    ecl_frs_pop(cl_env_copy);
    v5=ecl_stack_push_values(cl_env_copy);
    if (Null(v3stream)) { goto L13; }
    cl_close(3, v3stream, ECL_SYM("ABORT",1217), ECL_T);
L13:;
    ecl_stack_pop_values(cl_env_copy,v5);
    if (unwinding) ecl_unwind(cl_env_copy,next_fr);
    ECL_STACK_SET_INDEX(cl_env_copy,v4);
    return cl_env_copy->values[0];
   }
  }
 }
}
/*      function definition for GUESS-INIT-NAME                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L8guess_init_name(cl_object v1pathname, cl_object v2kind)
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
   v3 = v2kind;
   if (Null(ecl_memql(v3,VV[34]))) { goto L2; }
   if (Null(cl_probe_file(v1pathname))) { goto L8; }
   T0 = L3kind__tag(v2kind);
   value0 = L7find_init_name(3, v1pathname, ECL_SYM("TAG",1342), T0);
   goto L6;
L8:;
   value0 = ECL_NIL;
   goto L6;
L6:;
   if ((value0)!=ECL_NIL) { goto L5; }
   value0 = ecl_function_dispatch(cl_env_copy,VV[59])(2, VV[35], v1pathname) /*  CMPNOTE */;
   return value0;
L5:;
   cl_env_copy->nvalues = 1;
   return value0;
L2:;
   value0 = L9compute_init_name(3, v1pathname, VV[36], v2kind);
   return value0;
  }
 }
}
/*      function definition for COMPUTE-INIT-NAME                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L9compute_init_name(cl_narg narg, cl_object v1pathname, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2kind;
  cl_object v3prefix;
  ecl_va_list args; ecl_va_start(args,v1pathname,narg,1);
  {
   cl_object keyvars[4];
   cl_parse_key(args,2,L9compute_init_namekeys,keyvars,NULL,FALSE);
   ecl_va_end(args);
   if (Null(keyvars[2])) {
    v2kind = ecl_function_dispatch(cl_env_copy,VV[61])(1, v1pathname) /*  GUESS-KIND */;
   } else {
    v2kind = keyvars[0];
   }
   v3prefix = keyvars[1];
  }
  {
   cl_object v4unique_name;
   v4unique_name = L2unique_init_name(v1pathname);
   if (!(ecl_eql(v2kind,ECL_SYM("OBJECT",1305)))) { goto L8; }
   goto L5;
   goto L6;
L8:;
   goto L6;
L6:;
   if (!(ecl_eql(v2kind,VV[6]))) { goto L3; }
   goto L4;
L5:;
L4:;
   value0 = v4unique_name;
   cl_env_copy->nvalues = 1;
   return value0;
L3:;
   if (!(ecl_eql(v2kind,VV[9]))) { goto L16; }
   goto L13;
   goto L14;
L16:;
   goto L14;
L14:;
   if (!(ecl_eql(v2kind,VV[11]))) { goto L11; }
   goto L12;
L13:;
L12:;
   value0 = L12init_function_name(5, VV[38], VV[36], VV[11], VV[39], v3prefix);
   return value0;
L11:;
   if (!(ecl_eql(v2kind,VV[14]))) { goto L24; }
   goto L21;
   goto L22;
L24:;
   goto L22;
L22:;
   if (!(ecl_eql(v2kind,VV[16]))) { goto L19; }
   goto L20;
L21:;
L20:;
   value0 = L12init_function_name(5, v4unique_name, VV[36], VV[16], VV[39], v3prefix);
   return value0;
L19:;
   if (!(ecl_eql(v2kind,VV[19]))) { goto L32; }
   goto L29;
   goto L30;
L32:;
   goto L30;
L30:;
   if (!(ecl_eql(v2kind,VV[21]))) { goto L27; }
   goto L28;
L29:;
L28:;
   value0 = L12init_function_name(5, v4unique_name, VV[36], VV[21], VV[39], v3prefix);
   return value0;
L27:;
   if (!(ecl_eql(v2kind,VV[24]))) { goto L35; }
   value0 = v3prefix;
   if ((value0)!=ECL_NIL) { goto L40; }
   T0 = VV[40];
   goto L38;
L40:;
   T0 = value0;
   goto L38;
L38:;
   value0 = cl_concatenate(3, ECL_SYM("STRING",807), T0, VV[41]);
   return value0;
L35:;
   value0 = cl_error(2, VV[27], v2kind);
   return value0;
  }
 }
}
/*      function definition for INIT-FUNCTION-NAME                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L12init_function_name(cl_narg narg, cl_object v1s, ...)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2kind;
  cl_object v3prefix;
  ecl_va_list args; ecl_va_start(args,v1s,narg,1);
  {
   cl_object keyvars[4];
   cl_parse_key(args,2,L12init_function_namekeys,keyvars,NULL,FALSE);
   ecl_va_end(args);
   if (Null(keyvars[2])) {
    v2kind = ECL_SYM("OBJECT",1305);
   } else {
    v2kind = keyvars[0];
   }
   v3prefix = keyvars[1];
  }
  {
   cl_object v4;
   v4 = ecl_make_cfun((cl_objectfn_fixed)LC10translate_char,ECL_NIL,Cblock,1);
   T0 = cl_string(v1s);
   v1s = cl_map(3, ECL_SYM("STRING",807), v4, T0);
   value0 = v3prefix;
   if ((value0)!=ECL_NIL) { goto L6; }
   T0 = VV[40];
   goto L4;
L6:;
   T0 = value0;
   goto L4;
L4:;
   T1 = LC11disambiguation(v2kind);
   T2 = cl_string(v1s);
   T3 = cl_map(3, ECL_SYM("STRING",807), v4, T2);
   value0 = cl_concatenate(4, ECL_SYM("STRING",807), T0, T1, T3);
   return value0;
  }
 }
}
/*      local function DISAMBIGUATION                                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC11disambiguation(cl_object v1kind)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ecl_eql(v1kind,ECL_SYM("OBJECT",1305)))) { goto L6; }
  goto L3;
  goto L4;
L6:;
  goto L4;
L4:;
  if (!(ecl_eql(v1kind,VV[6]))) { goto L1; }
  goto L2;
L3:;
L2:;
  value0 = VV[43];
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  if (!(ecl_eql(v1kind,VV[9]))) { goto L14; }
  goto L11;
  goto L12;
L14:;
  goto L12;
L12:;
  if (!(ecl_eql(v1kind,VV[11]))) { goto L9; }
  goto L10;
L11:;
L10:;
  value0 = VV[44];
  cl_env_copy->nvalues = 1;
  return value0;
L9:;
  if (!(ecl_eql(v1kind,VV[45]))) { goto L22; }
  goto L19;
  goto L20;
L22:;
  goto L20;
L20:;
  if (!(ecl_eql(v1kind,VV[14]))) { goto L26; }
  goto L19;
  goto L24;
L26:;
  goto L24;
L24:;
  if (!(ecl_eql(v1kind,VV[16]))) { goto L17; }
  goto L18;
L19:;
L18:;
  value0 = VV[47];
  cl_env_copy->nvalues = 1;
  return value0;
L17:;
  if (!(ecl_eql(v1kind,VV[19]))) { goto L34; }
  goto L31;
  goto L32;
L34:;
  goto L32;
L32:;
  if (!(ecl_eql(v1kind,VV[21]))) { goto L29; }
  goto L30;
L31:;
L30:;
  value0 = VV[48];
  cl_env_copy->nvalues = 1;
  return value0;
L29:;
  if (!(ecl_eql(v1kind,VV[24]))) { goto L37; }
  value0 = VV[49];
  cl_env_copy->nvalues = 1;
  return value0;
L37:;
  value0 = cl_error(2, VV[50], v1kind);
  return value0;
 }
}
/*      local function TRANSLATE-CHAR                                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC10translate_char(cl_object v1c)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(cl_charGE(2, v1c, CODE_CHAR(97)))) { goto L1; }
  if (Null(cl_charLE(2, v1c, CODE_CHAR(122)))) { goto L1; }
  value0 = cl_char_upcase(v1c);
  return value0;
L1:;
  if (Null(cl_charGE(2, v1c, CODE_CHAR(65)))) { goto L4; }
  if (Null(cl_charLE(2, v1c, CODE_CHAR(90)))) { goto L4; }
  value0 = v1c;
  cl_env_copy->nvalues = 1;
  return value0;
L4:;
  if ((v1c)==(CODE_CHAR(45))) { goto L9; }
  if (!((v1c)==(CODE_CHAR(95)))) { goto L7; }
  goto L8;
L9:;
L8:;
  value0 = CODE_CHAR(95);
  cl_env_copy->nvalues = 1;
  return value0;
L7:;
  if (!((v1c)==(CODE_CHAR(42)))) { goto L11; }
  value0 = CODE_CHAR(120);
  cl_env_copy->nvalues = 1;
  return value0;
L11:;
  if (!((v1c)==(CODE_CHAR(63)))) { goto L13; }
  value0 = CODE_CHAR(97);
  cl_env_copy->nvalues = 1;
  return value0;
L13:;
  if (Null(cl_digit_char_p(1, v1c))) { goto L15; }
  value0 = v1c;
  cl_env_copy->nvalues = 1;
  return value0;
L15:;
  value0 = CODE_CHAR(112);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}

#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/cmp/cmpname.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclAGRSFCa7_rqVmqq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CMP;CMPNAME.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclAGRSFCa7_rqVmqq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  (void)0; /* No entry created for ENCODE-NUMBER-IN-NAME */
  ecl_cmp_defun(VV[53]);                          /*  UNIQUE-INIT-NAME */
  ecl_cmp_defun(VV[54]);                          /*  KIND->TAG       */
  ecl_cmp_defun(VV[55]);                          /*  INIT-NAME-TAG   */
  (void)0; /* No entry created for SEARCH-TAG */
  (void)0; /* No entry created for READ-NAME */
  ecl_cmp_defun(VV[56]);                          /*  FIND-INIT-NAME  */
  ecl_cmp_defun(VV[58]);                          /*  GUESS-INIT-NAME */
  ecl_cmp_defun(VV[60]);                          /*  COMPUTE-INIT-NAME */
  ecl_cmp_defun(VV[64]);                          /*  INIT-FUNCTION-NAME */
}
