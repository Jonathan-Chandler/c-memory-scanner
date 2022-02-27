/*      Compiler: ECL 21.2.1                                          */
/*      Source: EXT:ECL-CURL;ECL-CURL.LISP                            */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/build/ext/ecl-curl.eclh"
/*      local function LAMBDA0                                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC2__lambda0()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC1__lambda1,ECL_NIL,Cblock,2);
   value0 = v1;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function LAMBDA1                                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC1__lambda1(cl_object v1c, cl_object v2s)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,VV[42])(1, v1c) /*  DOWNLOAD-RESPONSE */;
  T1 = ecl_function_dispatch(cl_env_copy,VV[43])(1, v1c) /*  DOWNLOAD-URL */;
  value0 = cl_format(4, v2s, VV[3], T0, T1);
  return value0;
 }
}
/*      function definition for COPY-STREAM                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L3copy_stream(cl_object v1from, cl_object v2to)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_stream_element_type(v2to);
  T1 = cl_stream_element_type(v1from);
  if ((cl_subtypep(2, T0, T1))!=ECL_NIL) { goto L1; }
  cl_error(3, VV[5], v1from, v2to);
L1:;
  {
   cl_object v3buf;
   T0 = cl_stream_element_type(v1from);
   v3buf = si_make_pure_array(T0, ecl_symbol_value(VV[4]), ECL_NIL, ECL_NIL, ECL_NIL, ecl_make_fixnum(0));
L4:;
   {
    cl_fixnum v4pos;
    v4pos = ecl_fixnum(cl_read_sequence(2, v3buf, v1from));
    if (!((v4pos)==0)) { goto L7; }
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
L7:;
    cl_write_sequence(4, v3buf, v2to, ECL_SYM("END",1247), ecl_make_fixnum(v4pos));
   }
   goto L4;
  }
 }
}
/*      function definition for MAKE-STREAM-FROM-URL                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L4make_stream_from_url(cl_object v1url)
{
 cl_object T0, T1, T2, T3, T4;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2s;
   v2s = (cl_env_copy->function=(ECL_SYM("MAKE-INSTANCE",951)->symbol.gfdef))->cfun.entry(5, VV[7], ECL_SYM("TYPE",1346), ECL_SYM("STREAM",1340), VV[8], VV[9]) /*  MAKE-INSTANCE */;
   T0 = L5url_host(v1url);
   T1 = ecl_function_dispatch(cl_env_copy,VV[46])(1, T0) /*  GET-HOST-BY-NAME */;
   T2 = ecl_function_dispatch(cl_env_copy,VV[47])(1, T1) /*  HOST-ENT-ADDRESSES */;
   T3 = ecl_car(T2);
   T4 = L6url_port(v1url);
   ecl_function_dispatch(cl_env_copy,VV[48])(3, v2s, T3, T4) /*  SOCKET-CONNECT */;
   value0 = ecl_function_dispatch(cl_env_copy,VV[49])(9, v2s, ECL_SYM("INPUT",1280), ECL_T, ECL_SYM("OUTPUT",1309), ECL_T, VV[10], ECL_SYM("FULL",1662), ECL_SYM("EXTERNAL-FORMAT",1258), ECL_SYM("ISO-8859-1",1736)) /*  SOCKET-MAKE-STREAM */;
   return value0;
  }
 }
}
/*      function definition for URL-HOST                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L5url_host(cl_object v1url)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  goto L3;
L2:;
  si_assert_failure(1, VV[12]);
L3:;
  if ((cl_string_equal(4, v1url, VV[13], ECL_SYM("END1",1248), ecl_make_fixnum(7)))!=ECL_NIL) { goto L6; }
  goto L2;
L6:;
  {
   cl_object v2port_start;
   cl_object v3host_end;
   v2port_start = cl_position(4, CODE_CHAR(58), v1url, ECL_SYM("START",1337), ecl_make_fixnum(7));
   value0 = cl_position(4, CODE_CHAR(47), v1url, ECL_SYM("START",1337), ecl_make_fixnum(7));
   if ((value0)!=ECL_NIL) { goto L12; }
   T0 = ecl_make_fixnum(ecl_length(v1url));
   goto L10;
L12:;
   T0 = value0;
   goto L10;
L10:;
   value0 = v2port_start;
   if ((value0)!=ECL_NIL) { goto L16; }
   T1 = ecl_make_fixnum(ecl_length(v1url));
   goto L14;
L16:;
   T1 = value0;
   goto L14;
L14:;
   v3host_end = ((ecl_float_nan_p(T1) || ecl_lowereq(T0,T1))?T0:T1);
   value0 = cl_subseq(3, v1url, ecl_make_fixnum(7), v3host_end);
   return value0;
  }
 }
}
/*      function definition for URL-PORT                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L6url_port(cl_object v1url)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  goto L3;
L2:;
  si_assert_failure(1, VV[12]);
L3:;
  if ((cl_string_equal(4, v1url, VV[13], ECL_SYM("END1",1248), ecl_make_fixnum(7)))!=ECL_NIL) { goto L6; }
  goto L2;
L6:;
  {
   cl_object v2port_start;
   v2port_start = cl_position(4, CODE_CHAR(58), v1url, ECL_SYM("START",1337), ecl_make_fixnum(7));
   if (Null(v2port_start)) { goto L9; }
   T0 = ecl_one_plus(v2port_start);
   value0 = cl_parse_integer(5, v1url, ECL_SYM("START",1337), T0, ECL_SYM("JUNK-ALLOWED",1287), ECL_T);
   return value0;
L9:;
   value0 = ecl_make_fixnum(80);
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for BASE64-ENCODE                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L7base64_encode(cl_object v1string)
{
 cl_object T0, T1, T2, T3, T4;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2result;
   {
    cl_fixnum v3;
    v3 = ecl_length(v1string);
    T0 = ecl_plus(ecl_make_fixnum(2),ecl_make_fixnum(v3));
    T1 = ecl_divide(T0,ecl_make_fixnum(3));
    T2 = ecl_truncate1(T1);
    T3 = ecl_times(ecl_make_fixnum(4),T2);
    T4 = ecl_list1(T3);
    v2result = si_make_pure_array(ECL_SYM("BASE-CHAR",122), T4, ECL_NIL, ECL_NIL, ECL_NIL, ecl_make_fixnum(0));
   }
   {
    cl_object v3sidx;
    cl_object v4didx;
    cl_object v5chars;
    cl_object v6value;
    v3sidx = ecl_make_fixnum(0);
    v4didx = ecl_make_fixnum(0);
    v5chars = ecl_make_fixnum(2);
    v6value = ECL_NIL;
    goto L9;
L8:;
    T0 = cl_char(v1string, v3sidx);
    {
     cl_fixnum v7;
     v7 = ecl_char_code(T0);
     {
      cl_fixnum v8;
      v8 = ((255) & (v7));
      v6value = cl_ash(ecl_make_fixnum(v8), ecl_make_fixnum(8));
     }
    }
    {
     cl_fixnum v7n;
     v7n = 0;
     goto L16;
L15:;
     T0 = ecl_plus(v3sidx,ecl_make_fixnum(v7n));
     T1 = ecl_plus(T0,ecl_make_fixnum(1));
     {
      cl_fixnum v8;
      v8 = ecl_length(v1string);
      if (!(ecl_lower(T1,ecl_make_fixnum(v8)))) { goto L18; }
     }
     T0 = ecl_plus(v3sidx,ecl_make_fixnum(v7n));
     T1 = ecl_plus(T0,ecl_make_fixnum(1));
     T2 = cl_char(v1string, T1);
     {
      cl_fixnum v8;
      v8 = ecl_char_code(T2);
      {
       cl_fixnum v9;
       v9 = ((255) & (v8));
       v6value = ecl_boole(ECL_BOOLIOR,(v6value),(ecl_make_fixnum(v9)));
      }
     }
     v5chars = ecl_plus(v5chars,ecl_make_fixnum(1));
L18:;
     if (!((v7n)==(0))) { goto L23; }
     v6value = cl_ash(v6value, ecl_make_fixnum(8));
L23:;
     v7n = (v7n)+1;
L16:;
     if (!((v7n)<(2))) { goto L28; }
     goto L15;
L28:;
    }
    T0 = ecl_plus(v4didx,ecl_make_fixnum(3));
    if (!(ecl_greater(v5chars,ecl_make_fixnum(3)))) { goto L32; }
    T1 = ecl_boole(ECL_BOOLAND,(v6value),(ecl_make_fixnum(63)));
    goto L31;
L32:;
    T1 = ecl_make_fixnum(64);
L31:;
    T2 = ecl_elt(ecl_symbol_value(VV[16]),ecl_fixnum(T1));
    ecl_elt_set(v2result,ecl_to_size(T0),T2);
    v6value = cl_ash(v6value, ecl_make_fixnum(-6));
    T0 = ecl_plus(v4didx,ecl_make_fixnum(2));
    if (!(ecl_greater(v5chars,ecl_make_fixnum(2)))) { goto L38; }
    T1 = ecl_boole(ECL_BOOLAND,(v6value),(ecl_make_fixnum(63)));
    goto L37;
L38:;
    T1 = ecl_make_fixnum(64);
L37:;
    T2 = ecl_elt(ecl_symbol_value(VV[16]),ecl_fixnum(T1));
    ecl_elt_set(v2result,ecl_to_size(T0),T2);
    v6value = cl_ash(v6value, ecl_make_fixnum(-6));
    T0 = ecl_plus(v4didx,ecl_make_fixnum(1));
    T1 = ecl_boole(ECL_BOOLAND,(v6value),(ecl_make_fixnum(63)));
    T2 = ecl_elt(ecl_symbol_value(VV[16]),ecl_fixnum(T1));
    ecl_elt_set(v2result,ecl_to_size(T0),T2);
    v6value = cl_ash(v6value, ecl_make_fixnum(-6));
    T0 = ecl_boole(ECL_BOOLAND,(v6value),(ecl_make_fixnum(63)));
    T1 = ecl_elt(ecl_symbol_value(VV[16]),ecl_fixnum(T0));
    ecl_elt_set(v2result,ecl_to_size(v4didx),T1);
    v3sidx = ecl_plus(v3sidx,ecl_make_fixnum(3));
    v4didx = ecl_plus(v4didx,ecl_make_fixnum(4));
    v5chars = ecl_make_fixnum(2);
    v6value = ECL_NIL;
L9:;
    {
     cl_fixnum v7;
     v7 = ecl_length(v1string);
     if (ecl_greatereq(v3sidx,ecl_make_fixnum(v7))) { goto L51; }
    }
    goto L8;
L51:;
   }
   value0 = v2result;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for REQUEST-URI                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L8request_uri(cl_object v1url)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  goto L3;
L2:;
  si_assert_failure(1, VV[12]);
L3:;
  if ((cl_string_equal(4, v1url, VV[13], ECL_SYM("END1",1248), ecl_make_fixnum(7)))!=ECL_NIL) { goto L6; }
  goto L2;
L6:;
  if (Null(ecl_symbol_value(VV[18]))) { goto L8; }
  value0 = v1url;
  cl_env_copy->nvalues = 1;
  return value0;
L8:;
  {
   cl_object v2path_start;
   v2path_start = cl_position(4, CODE_CHAR(47), v1url, ECL_SYM("START",1337), ecl_make_fixnum(7));
   if (Null(v2path_start)) { goto L11; }
   value0 = cl_subseq(2, v1url, v2path_start);
   return value0;
L11:;
   value0 = VV[21];
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for HEADER-PAIR                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L9header_pair(cl_object v1name, cl_object v2headers)
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
   v3 = v2headers;
   goto L4;
L3:;
   {
    cl_object v4;
    cl_object v5;
    {
     cl_object v6;
     v6 = v3;
     if (ecl_unlikely(ECL_ATOM(v6))) FEtype_error_cons(v6);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v4 = v6;
    }
    v5 = ECL_CONS_CAR(v4);
    if (Null(v5)) { goto L6; }
    {
     cl_object v6;
     {
      cl_object v7;
      v7 = v5;
      if (ecl_unlikely(ECL_ATOM(v7))) FEtype_error_cons(v7);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      T0 = v7;
     }
     v6 = ECL_CONS_CAR(T0);
     T0 = ecl_symbol_name(v1name);
     T1 = ecl_symbol_name(v6);
     if (Null(cl_string_equal(2, T0, T1))) { goto L6; }
     value0 = v5;
     cl_env_copy->nvalues = 1;
     return value0;
    }
   }
L6:;
   v3 = ECL_CONS_CDR(v3);
L4:;
   if (v3==ECL_NIL) { goto L19; }
   goto L3;
L19:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for HEADER-VALUE                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L10header_value(cl_object v1name, cl_object v2headers)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = L9header_pair(v1name, v2headers);
  value0 = ecl_cdr(T0);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for URL-CONNECTION                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L11url_connection(cl_object v1url)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2;
   cl_object v3;
   value0 = ecl_symbol_value(VV[18]);
   if ((value0)!=ECL_NIL) { goto L4; }
   T0 = v1url;
   goto L2;
L4:;
   T0 = value0;
   goto L2;
L2:;
   v2 = L4make_stream_from_url(T0);
   v3 = L5url_host(v1url);
   T0 = L8request_uri(v1url);
   cl_format(8, v2, VV[25], T0, CODE_CHAR(13), CODE_CHAR(10), v3, CODE_CHAR(13), CODE_CHAR(10));
   if (Null(ecl_symbol_value(VV[20]))) { goto L8; }
   if (Null(ecl_symbol_value(VV[19]))) { goto L8; }
   T0 = cl_format(4, ECL_NIL, VV[27], ecl_symbol_value(VV[19]), ecl_symbol_value(VV[20]));
   T1 = L7base64_encode(T0);
   cl_format(5, v2, VV[26], T1, CODE_CHAR(13), CODE_CHAR(10));
L8:;
   cl_format(4, v2, VV[28], CODE_CHAR(13), CODE_CHAR(10));
   cl_force_output(1, v2);
   {
    cl_object v4l;
    cl_object v5space;
    v4l = cl_read_line(1, v2);
    v5space = cl_position(2, CODE_CHAR(32), v4l);
    T1 = ecl_one_plus(v5space);
    T0 = cl_parse_integer(5, v4l, ECL_SYM("START",1337), T1, ECL_SYM("JUNK-ALLOWED",1287), ECL_T);
   }
   {
    cl_object v4line;
    v4line = ECL_NIL;
    {
     cl_object v5;
     cl_object v6;
     v5 = ecl_list1(ECL_NIL);
     v6 = v5;
L20:;
     v4line = cl_read_line(1, v2);
     if (v4line==ECL_NIL) { goto L26; }
     {
      cl_fixnum v7;
      v7 = ecl_length(v4line);
      if ((v7)==0) { goto L26; }
     }
     T2 = ecl_elt(v4line,0);
     {
      ecl_character v7;
      v7 = 13;
      if (!(((T2)==ECL_CODE_CHAR(v7)))) { goto L24; }
      goto L25;
     }
L26:;
L25:;
     goto L21;
L24:;
     {
      cl_object v7;
      v7 = v6;
      if (ecl_unlikely(ECL_ATOM(v7))) FEtype_error_cons(v7);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      T2 = v7;
     }
     {
      cl_object v7colon;
      v7colon = cl_position(2, CODE_CHAR(58), v4line);
      T4 = cl_subseq(3, v4line, ecl_make_fixnum(0), v7colon);
      T5 = cl_string_upcase(1, T4);
      T6 = cl_intern(2, T5, VV[29]);
      {
       ecl_character v8;
       v8 = 13;
       T7 = cl_list(2, CODE_CHAR(32), CODE_CHAR(v8));
       T8 = ecl_one_plus(v7colon);
       T9 = cl_subseq(2, v4line, T8);
       T10 = cl_string_trim(T7, T9);
       T3 = CONS(T6,T10);
      }
     }
     v6 = ecl_list1(T3);
     (ECL_CONS_CDR(T2)=v6,T2);
     goto L20;
L21:;
     T1 = ecl_cdr(v5);
     goto L16;
    }
   }
L16:;
   cl_env_copy->nvalues = 3;
   cl_env_copy->values[2] = v2;
   cl_env_copy->values[1] = T1;
   cl_env_copy->values[0] = T0;
   return cl_env_copy->values[0];
  }
 }
}
/*      function definition for DOWNLOAD-URL-TO-FILE                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L12download_url_to_file(volatile cl_narg narg, cl_object volatile v1url, cl_object volatile v2file_name, ...)
{
 cl_object T0;
 cl_object volatile env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 {
  cl_object volatile v3quiet;
  ecl_va_list args; ecl_va_start(args,v2file_name,narg,2);
  {
   cl_object keyvars[2];
   cl_parse_key(args,1,L12download_url_to_filekeys,keyvars,NULL,FALSE);
   ecl_va_end(args);
   v3quiet = keyvars[0];
  }
  {
   cl_object volatile v5;                         /*  RESPONSE        */
   cl_object volatile v6;                         /*  HEADERS         */
   cl_object volatile v7;                         /*  STREAM          */
L3:;
   {
    cl_object volatile v9;                        /*  RESPONSE        */
    cl_object volatile v10;                       /*  HEADERS         */
    cl_object volatile v11;                       /*  STREAM          */
    value0 = L11url_connection(v1url);
    {
     const int v12 = cl_env_copy->nvalues;
     v9 = value0;
     cl_object v13;
     v13 = (v12<=1)? ECL_NIL : cl_env_copy->values[1];
     v10 = v13;
     v13 = (v12<=2)? ECL_NIL : cl_env_copy->values[2];
     v11 = v13;
    }
    if (!((v9)==(ecl_make_fixnum(301)))) { goto L10; }
    goto L6;
    goto L8;
L10:;
    goto L8;
L8:;
    if (!((v9)==(ecl_make_fixnum(302)))) { goto L13; }
    goto L6;
    goto L7;
L13:;
    goto L7;
L7:;
    cl_env_copy->nvalues = 3;
    cl_env_copy->values[2] = v11;
    cl_env_copy->values[1] = v10;
    cl_env_copy->values[0] = v9;
    value0 = cl_env_copy->values[0];
    goto L2;
L6:;
    cl_close(1, v11);
    v1url = L10header_value(ECL_SYM("LOCATION",1001), v10);
   }
   goto L3;
L2:;
   {
    const int v8 = cl_env_copy->nvalues;
    v5 = value0;
    cl_object v9;
    v9 = (v8<=1)? ECL_NIL : cl_env_copy->values[1];
    v6 = v9;
    v9 = (v8<=2)? ECL_NIL : cl_env_copy->values[2];
    v7 = v9;
   }
   if (!(ecl_greatereq(v5,ecl_make_fixnum(400)))) { goto L18; }
   cl_error(5, VV[2], VV[33], v1url, VV[34], v5);
L18:;
   {
    volatile cl_object v8length;
    value0 = L10header_value(VV[35], v6);
    if ((value0)!=ECL_NIL) { goto L24; }
    T0 = VV[36];
    goto L22;
L24:;
    T0 = value0;
    goto L22;
L22:;
    v8length = cl_parse_integer(3, T0, ECL_SYM("JUNK-ALLOWED",1287), ECL_T);
    if ((v3quiet)!=ECL_NIL) { goto L26; }
    value0 = v8length;
    if ((value0)!=ECL_NIL) { goto L30; }
    T0 = VV[38];
    goto L28;
L30:;
    T0 = value0;
    goto L28;
L28:;
    cl_format(5, ECL_T, VV[37], T0, v1url, v2file_name);
L26:;
    cl_force_output(0);
    {
     volatile cl_object v9ok_;
     volatile cl_object v10o;
     v9ok_ = ECL_NIL;
     v10o = ECL_NIL;
     {
      volatile bool unwinding = FALSE;
      cl_index v11=ECL_STACK_INDEX(cl_env_copy),v12;
      ecl_frame_ptr next_fr;
      ecl_frs_push(cl_env_copy,ECL_PROTECT_TAG);
      if (__ecl_frs_push_result) {
        unwinding = TRUE; next_fr=cl_env_copy->nlj_fr;
      } else {
      v10o = cl_open(7, v2file_name, ECL_SYM("DIRECTION",1240), ECL_SYM("OUTPUT",1309), ECL_SYM("IF-EXISTS",1270), ECL_SYM("SUPERSEDE",1341), ECL_SYM("EXTERNAL-FORMAT",1258), ECL_SYM("LATIN-1",1735));
      if (Null(v8length)) { goto L39; }
      {
       cl_object v13buf;
       T0 = cl_stream_element_type(v7);
       v13buf = si_make_pure_array(T0, v8length, ECL_NIL, ECL_NIL, ECL_NIL, ecl_make_fixnum(0));
       cl_read_sequence(2, v13buf, v7);
       cl_write_sequence(2, v13buf, v10o);
       goto L38;
      }
L39:;
      L3copy_stream(v7, v10o);
L38:;
      v9ok_ = ECL_T;
      cl_env_copy->values[0] = ECL_T;
      cl_env_copy->nvalues = 1;
      }
      ecl_frs_pop(cl_env_copy);
      v12=ecl_stack_push_values(cl_env_copy);
      if (Null(v10o)) { goto L44; }
      {
       bool v13;
       v13 = v9ok_==ECL_NIL;
       cl_close(3, v10o, ECL_SYM("ABORT",1217), ecl_make_bool(v13));
      }
L44:;
      ecl_stack_pop_values(cl_env_copy,v12);
      if (unwinding) ecl_unwind(cl_env_copy,next_fr);
      ECL_STACK_SET_INDEX(cl_env_copy,v11);
     }
    }
   }
   cl_close(1, v7);
  }
  value0 = v1url;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}

#include "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/build/ext/ecl-curl.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclUmVUzGb7_Mn9aTr51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("EXT:ECL-CURL;ECL-CURL.LISP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclUmVUzGb7_Mn9aTr51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  cl_require(1, VV[0]);
  ecl_function_dispatch(cl_env_copy,VV[41])(12, _ecl_static_0, ECL_NIL, ECL_NIL, ECL_NIL, VVtemp[0], ECL_NIL, ECL_NIL, ECL_NIL, VVtemp[1], ECL_NIL, ECL_NIL, ECL_NIL) /*  DODEFPACKAGE */;
  si_select_package(_ecl_static_0);
  clos_load_defclass(VV[1], VVtemp[2], VVtemp[3], ECL_NIL);
 {
  cl_object T0, T1, T2;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC2__lambda0,ECL_NIL,Cblock,0);
   T0 = v1;
  }
  T1 = cl_listX(3, ECL_SYM("INITFUNCTION",999), T0, VVtemp[5]);
  T2 = cl_list(2, T1, VVtemp[6]);
  clos_load_defclass(VV[2], VVtemp[4], T2, ECL_NIL);
 }
  si_Xmake_special(VV[4]);
  if (ecl_boundp(cl_env_copy,VV[4])) { goto L10; }
  cl_set(VV[4],ecl_make_fixnum(8192));
L10:;
  ecl_cmp_defun(VV[44]);                          /*  COPY-STREAM     */
  ecl_cmp_defun(VV[45]);                          /*  MAKE-STREAM-FROM-URL */
  ecl_cmp_defun(VV[50]);                          /*  URL-HOST        */
  ecl_cmp_defun(VV[51]);                          /*  URL-PORT        */
  si_Xmake_special(VV[16]);
  cl_set(VV[16],VVtemp[7]);
  ecl_cmp_defun(VV[52]);                          /*  BASE64-ENCODE   */
  si_Xmake_special(VV[18]);
  if (ecl_boundp(cl_env_copy,VV[18])) { goto L43; }
  cl_set(VV[18],si_getenv(VVtemp[8]));
L43:;
  si_Xmake_special(VV[19]);
  if (ecl_boundp(cl_env_copy,VV[19])) { goto L50; }
  cl_set(VV[19],ECL_NIL);
L50:;
  si_Xmake_special(VV[20]);
  if (ecl_boundp(cl_env_copy,VV[20])) { goto L57; }
  cl_set(VV[20],ECL_NIL);
L57:;
  ecl_cmp_defun(VV[53]);                          /*  REQUEST-URI     */
  ecl_cmp_defun(VV[54]);                          /*  HEADER-PAIR     */
  ecl_cmp_defun(VV[55]);                          /*  HEADER-VALUE    */
  ecl_cmp_defun(VV[56]);                          /*  URL-CONNECTION  */
  ecl_cmp_defun(VV[57]);                          /*  DOWNLOAD-URL-TO-FILE */
  cl_provide(VV[40]);
}
