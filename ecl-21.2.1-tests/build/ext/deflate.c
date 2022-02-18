/*      Compiler: ECL 21.2.1                                          */
/*      Source: EXT:DEFLATE;DEFLATE.LISP                              */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/ext/deflate.eclh"
/*      local function LAMBDA0                                        */
/*      optimize speed 3, debug 1, space 1, safety 0                  */
static cl_object LC2__lambda0()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 {
  cl_object v1;
  v1 = ecl_make_cfun((cl_objectfn_fixed)LC1__lambda1,ECL_NIL,Cblock,2);
  value0 = v1;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function LAMBDA1                                        */
/*      optimize speed 3, debug 1, space 1, safety 0                  */
static cl_object LC1__lambda1(cl_object v1c, cl_object v2s)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 {
  cl_object v3;
  v3 = ECL_SYM_VAL(cl_env_copy,ECL_SYM("+IO-SYNTAX-PROGV-LIST+",1777));
  {
   cl_object v5, v6; cl_index v4;
   v5 = ECL_CONS_CAR(v3);
   v6 = ECL_CONS_CDR(v3);
   v4 = ecl_progv(cl_env_copy, v5, v6);
   ecl_bds_bind(cl_env_copy,ECL_SYM("*PRINT-READABLY*",59),ECL_NIL); /*  *PRINT-READABLY* */
   T0 = (cl_env_copy->function=(ECL_SYM("SIMPLE-CONDITION-FORMAT-CONTROL",770)->symbol.gfdef))->cfun.entry(1, v1c) /*  SIMPLE-CONDITION-FORMAT-CONTROL */;
   T1 = (cl_env_copy->function=(ECL_SYM("SIMPLE-CONDITION-FORMAT-ARGUMENTS",771)->symbol.gfdef))->cfun.entry(1, v1c) /*  SIMPLE-CONDITION-FORMAT-ARGUMENTS */;
   value0 = cl_format(4, v2s, VV[2], T0, T1);
   ecl_bds_unwind(cl_env_copy,v4);
   return value0;
  }
 }
}
/*      local function LAMBDA2                                        */
/*      optimize speed 3, debug 1, space 1, safety 0                  */
static cl_object LC4__lambda2()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 {
  cl_object v1;
  v1 = ecl_make_cfun((cl_objectfn_fixed)LC3__lambda3,ECL_NIL,Cblock,2);
  value0 = v1;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function LAMBDA3                                        */
/*      optimize speed 3, debug 1, space 1, safety 0                  */
static cl_object LC3__lambda3(cl_object v1c, cl_object v2s)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 {
  cl_object v3;
  v3 = ECL_SYM_VAL(cl_env_copy,ECL_SYM("+IO-SYNTAX-PROGV-LIST+",1777));
  {
   cl_object v5, v6; cl_index v4;
   v5 = ECL_CONS_CAR(v3);
   v6 = ECL_CONS_CDR(v3);
   v4 = ecl_progv(cl_env_copy, v5, v6);
   ecl_bds_bind(cl_env_copy,ECL_SYM("*PRINT-READABLY*",59),ECL_NIL); /*  *PRINT-READABLY* */
   T0 = (cl_env_copy->function=(ECL_SYM("SIMPLE-CONDITION-FORMAT-CONTROL",770)->symbol.gfdef))->cfun.entry(1, v1c) /*  SIMPLE-CONDITION-FORMAT-CONTROL */;
   T1 = (cl_env_copy->function=(ECL_SYM("SIMPLE-CONDITION-FORMAT-ARGUMENTS",771)->symbol.gfdef))->cfun.entry(1, v1c) /*  SIMPLE-CONDITION-FORMAT-ARGUMENTS */;
   value0 = cl_format(4, v2s, VV[4], T0, T1);
   ecl_bds_unwind(cl_env_copy,v4);
   return value0;
  }
 }
}
/*      local function LAMBDA4                                        */
/*      optimize speed 3, debug 1, space 1, safety 0                  */
static cl_object LC6__lambda4()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 {
  cl_object v1;
  v1 = ecl_make_cfun((cl_objectfn_fixed)LC5__lambda5,ECL_NIL,Cblock,2);
  value0 = v1;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function LAMBDA5                                        */
/*      optimize speed 3, debug 1, space 1, safety 0                  */
static cl_object LC5__lambda5(cl_object v1c, cl_object v2s)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 {
  cl_object v3;
  v3 = ECL_SYM_VAL(cl_env_copy,ECL_SYM("+IO-SYNTAX-PROGV-LIST+",1777));
  {
   cl_object v5, v6; cl_index v4;
   v5 = ECL_CONS_CAR(v3);
   v6 = ECL_CONS_CDR(v3);
   v4 = ecl_progv(cl_env_copy, v5, v6);
   ecl_bds_bind(cl_env_copy,ECL_SYM("*PRINT-READABLY*",59),ECL_NIL); /*  *PRINT-READABLY* */
   T0 = (cl_env_copy->function=(ECL_SYM("SIMPLE-CONDITION-FORMAT-CONTROL",770)->symbol.gfdef))->cfun.entry(1, v1c) /*  SIMPLE-CONDITION-FORMAT-CONTROL */;
   T1 = (cl_env_copy->function=(ECL_SYM("SIMPLE-CONDITION-FORMAT-ARGUMENTS",771)->symbol.gfdef))->cfun.entry(1, v1c) /*  SIMPLE-CONDITION-FORMAT-ARGUMENTS */;
   value0 = cl_format(4, v2s, VV[4], T0, T1);
   ecl_bds_unwind(cl_env_copy,v4);
   return value0;
  }
 }
}
/*      function definition for UPDATE-ADLER32-CHECKSUM               */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L7update_adler32_checksum(cl_object v1crc, cl_object v2buffer, cl_object v3end)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 unsigned int v4crc;
 cl_fixnum v5end;
 v4crc = ecl_to_uint(v1crc);
 v5end = ecl_fixnum(v3end);
TTL:
 {
  cl_object v6;
  cl_object v7;
  unsigned int v8s1;
  unsigned int v9s2;
  T0 = cl_ash(ecl_make_fixnum(-1), ecl_make_fixnum(16));
  T1 = ecl_boole(ECL_BOOLXOR,(T0),ecl_make_fixnum(-1));
  T2 = ecl_negate(ecl_make_fixnum(0));
  T3 = cl_ash(ecl_make_uint(v4crc), T2);
  v6 = ecl_boole(ECL_BOOLAND,(T1),(T3));
  T0 = cl_ash(ecl_make_fixnum(-1), ecl_make_fixnum(16));
  T1 = ecl_boole(ECL_BOOLXOR,(T0),ecl_make_fixnum(-1));
  T2 = ecl_negate(ecl_make_fixnum(16));
  T3 = cl_ash(ecl_make_uint(v4crc), T2);
  v7 = ecl_boole(ECL_BOOLAND,(T1),(T3));
  v8s1 = ecl_to_uint(v6);
  v9s2 = ecl_to_uint(v7);
  {
   cl_fixnum v10i;
   v10i = 0;
   goto L8;
L7:;
   {
    uint8_t v11;
    v11 = (uint8_t)((v2buffer)->vector.self.b8[v10i]);
    T0 = ecl_plus(ecl_make_uint(v8s1),ecl_make_uint8_t(v11));
    v8s1 = ecl_to_uint((ecl_floor2(T0,ecl_make_fixnum(65521)),cl_env_copy->values[1]));
   }
   T0 = ecl_plus(ecl_make_uint(v9s2),ecl_make_uint(v8s1));
   v9s2 = ecl_to_uint((ecl_floor2(T0,ecl_make_fixnum(65521)),cl_env_copy->values[1]));
   v10i = (v10i)+1;
L8:;
   if (!((v10i)<(v5end))) { goto L17; }
   goto L7;
L17:;
  }
  {
   cl_object v10;
   T0 = cl_ash(ecl_make_fixnum(-1), ecl_make_fixnum(16));
   T1 = ecl_boole(ECL_BOOLXOR,(T0),ecl_make_fixnum(-1));
   v10 = cl_ash(T1, ecl_make_fixnum(16));
   T0 = cl_ash(ecl_make_uint(v9s2), ecl_make_fixnum(16));
   T1 = ecl_boole(ECL_BOOLAND,(T0),(v10));
   T2 = ecl_boole(ECL_BOOLANDC2,(ecl_make_uint(v8s1)),(v10));
   value0 = ecl_boole(ECL_BOOLIOR,(T1),(T2));
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for GENERATE-CRC32-TABLE                  */
/*      optimize speed 3, debug 1, space 1, safety 0                  */
static cl_object L8generate_crc32_table()
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 {
  cl_object v1result;
  v1result = si_make_vector(ECL_SYM("BYTE32",1360), ecl_make_fixnum(256), ECL_NIL, ECL_NIL, ECL_NIL, ecl_make_fixnum(0));
  {
   cl_fixnum v2;
   v2 = (v1result)->vector.fillp;
   {
    cl_fixnum v3i;
    v3i = 0;
    goto L6;
L5:;
    {
     cl_object v4cur;
     v4cur = ecl_make_fixnum(v3i);
     {
      cl_fixnum v5k;
      v5k = 0;
      goto L13;
L12:;
      T0 = ecl_boole(ECL_BOOLAND,(v4cur),(ecl_make_fixnum(1)));
      if (!(ecl_number_equalp(ecl_make_fixnum(1),T0))) { goto L17; }
      T0 = ecl_ash(v4cur,-1);
      v4cur = ecl_boole(ECL_BOOLXOR,(T0),(ECL_SYM_VAL(cl_env_copy,VV[10])));
      goto L16;
L17:;
      v4cur = ecl_ash(v4cur,-1);
L16:;
      v5k = (v5k)+1;
L13:;
      if (!((v5k)<(8))) { goto L21; }
      goto L12;
L21:;
     }
     (v1result)->vector.self.b32[v3i]= ecl_to_uint(v4cur);
    }
    v3i = (v3i)+1;
L6:;
    if (!((v3i)<(v2))) { goto L25; }
    goto L5;
L25:;
    value0 = v1result;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      function definition for UPDATE-CRC32-CHECKSUM                 */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L9update_crc32_checksum(cl_object v1crc, cl_object v2buffer, cl_object v3end)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 unsigned int v4crc;
 cl_fixnum v5end;
 v4crc = ecl_to_uint(v1crc);
 v5end = ecl_fixnum(v3end);
TTL:
 {
  cl_object v6;
  unsigned int v7cur;
  v6 = ecl_boole(ECL_BOOLXOR,(ecl_make_uint(v4crc)),(VV[13]));
  v7cur = ecl_to_uint(v6);
  {
   cl_fixnum v8i;
   v8i = 0;
   goto L6;
L5:;
   {
    uint8_t v9index;
    {
     uint8_t v10;
     v10 = (uint8_t)((v2buffer)->vector.self.b8[v8i]);
     T0 = ecl_boole(ECL_BOOLXOR,(ecl_make_uint(v7cur)),(ecl_make_uint8_t(v10)));
     v9index = ecl_fixnum(ecl_boole(ECL_BOOLAND,(ecl_make_fixnum(255)),(T0)));
    }
    {
     unsigned int v10;
     v10 = (unsigned int)((VV[12])->vector.self.b32[(cl_fixnum)(v9index)]);
     T0 = ecl_ash(ecl_make_uint(v7cur),-8);
     v7cur = ecl_to_uint(ecl_boole(ECL_BOOLXOR,(ecl_make_uint(v10)),(T0)));
    }
   }
   v8i = (v8i)+1;
L6:;
   if (!((v8i)<(v5end))) { goto L15; }
   goto L5;
L15:;
  }
  value0 = ecl_boole(ECL_BOOLXOR,(ecl_make_uint(v7cur)),(VV[13]));
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for MAKE-SLIDING-WINDOW-STREAM            */
/*      optimize speed 3, debug 1, space 1, safety 0                  */
static cl_object L10make_sliding_window_stream(cl_narg narg, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 cl_object v1;
 cl_object v2;
 cl_object v3;
 cl_object v4;
 cl_object v5;
 ecl_va_list args; ecl_va_start(args,narg,narg,0);
 {
  cl_object keyvars[10];
  cl_parse_key(args,5,L10make_sliding_window_streamkeys,keyvars,NULL,FALSE);
  ecl_va_end(args);
  v1 = keyvars[0];
  if (Null(keyvars[6])) {
   v2 = si_make_vector(ECL_SYM("BYTE8",1358), ecl_make_fixnum(32768), ECL_NIL, ECL_NIL, ECL_NIL, ecl_make_fixnum(0));
  } else {
   v2 = keyvars[1];
  }
  if (Null(keyvars[7])) {
   v3 = ecl_make_fixnum(0);
  } else {
   v3 = keyvars[2];
  }
  v4 = keyvars[3];
  if (Null(keyvars[9])) {
   v5 = ecl_make_fixnum(0);
  } else {
   v5 = keyvars[4];
  }
 }
 {
  cl_object v6;
  v6 = ecl_make_fixnum(0);
  if (!(ECL_FIXNUMP(v5)||ECL_BIGNUMP(v5))) { goto L8; }
  v6 = v5;
  if (!(ecl_lowereq(v6,VV[13]))) { goto L13; }
  if (ecl_greatereq(v6,ecl_make_fixnum(0))) { goto L4; }
  goto L5;
L13:;
  goto L5;
L8:;
  goto L5;
 }
L5:;
 ecl_function_dispatch(cl_env_copy,VV[126])(4, v5, VV[19], VV[16], VV[20]) /*  STRUCTURE-TYPE-ERROR */;
L4:;
 if (ECL_SYMBOLP(v4)) { goto L15; }
 ecl_function_dispatch(cl_env_copy,VV[126])(4, v4, ECL_SYM("SYMBOL",842), VV[16], VV[21]) /*  STRUCTURE-TYPE-ERROR */;
L15:;
 if (ECL_FIXNUMP(v3)) { goto L17; }
 ecl_function_dispatch(cl_env_copy,VV[126])(4, v3, ECL_SYM("FIXNUM",374), VV[16], VV[22]) /*  STRUCTURE-TYPE-ERROR */;
L17:;
 if ((cl_typep(2, v2, VV[23]))!=ECL_NIL) { goto L19; }
 ecl_function_dispatch(cl_env_copy,VV[126])(4, v2, VV[23], VV[16], VV[24]) /*  STRUCTURE-TYPE-ERROR */;
L19:;
 if ((cl_streamp(v1))!=ECL_NIL) { goto L21; }
 ecl_function_dispatch(cl_env_copy,VV[126])(4, v1, ECL_SYM("STREAM",801), VV[16], ECL_SYM("STREAM",801)) /*  STRUCTURE-TYPE-ERROR */;
L21:;
 value0 = si_make_structure(6, VV[25], v1, v2, v3, v4, v5);
 return value0;
}
/*      local function LAMBDA32                                       */
/*      optimize speed 3, debug 1, space 1, safety 0                  */
static cl_object LC11__lambda32(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 {
  cl_object v3;
  cl_object v4;
  v3 = cl_gensym(0);
  v4 = cl_gensym(0);
  T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[16]);
  T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(4), v3, v4);
  T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[16]);
  T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(4));
  cl_env_copy->nvalues = 6;
  cl_env_copy->values[5] = T3;
  cl_env_copy->values[4] = T1;
  cl_env_copy->values[3] = v4;
  cl_env_copy->values[2] = v3;
  cl_env_copy->values[1] = ECL_NIL;
  cl_env_copy->values[0] = ECL_NIL;
  return cl_env_copy->values[0];
 }
}
/*      local function LAMBDA36                                       */
/*      optimize speed 3, debug 1, space 1, safety 0                  */
static cl_object LC12__lambda36(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 {
  cl_object v3;
  cl_object v4;
  v3 = cl_gensym(0);
  v4 = cl_gensym(0);
  T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[16]);
  T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(2), v3, v4);
  T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[16]);
  T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(2));
  cl_env_copy->nvalues = 6;
  cl_env_copy->values[5] = T3;
  cl_env_copy->values[4] = T1;
  cl_env_copy->values[3] = v4;
  cl_env_copy->values[2] = v3;
  cl_env_copy->values[1] = ECL_NIL;
  cl_env_copy->values[0] = ECL_NIL;
  return cl_env_copy->values[0];
 }
}
/*      function definition for SLIDING-WINDOW-STREAM-WRITE-BYTE      */
/*      optimize speed 3, debug 1, space 1, safety 0                  */
static cl_object L13sliding_window_stream_write_byte(cl_object v1stream, cl_object v2byte)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 uint8_t v3byte;
 v3byte = ecl_fixnum(v2byte);
TTL:
 {
  cl_fixnum v4end;
  v4end = ecl_fixnum(ecl_function_dispatch(cl_env_copy,VV[30])(1, v1stream) /*  SLIDING-WINDOW-STREAM-BUFFER-END */);
  if ((v4end)<(32768)) { goto L2; }
  T0 = ecl_function_dispatch(cl_env_copy,VV[31])(1, v1stream) /*  SLIDING-WINDOW-STREAM-BUFFER */;
  T1 = ecl_function_dispatch(cl_env_copy,VV[32])(1, v1stream) /*  SLIDING-WINDOW-STREAM-STREAM */;
  cl_write_sequence(2, T0, T1);
  {
   cl_object v5;
   v5 = ecl_function_dispatch(cl_env_copy,VV[29])(1, v1stream) /*  SLIDING-WINDOW-STREAM-CHECKSUM */;
   if (!(ecl_eql(v5,VV[33]))) { goto L7; }
   {
    cl_object v6;
    T0 = ecl_function_dispatch(cl_env_copy,VV[27])(1, v1stream) /*  SLIDING-WINDOW-STREAM-CHECKSUM-VALUE */;
    T1 = ecl_function_dispatch(cl_env_copy,VV[31])(1, v1stream) /*  SLIDING-WINDOW-STREAM-BUFFER */;
    v6 = L7update_adler32_checksum(T0, T1, ecl_make_fixnum(32768));
    {
     cl_object v7;
     v7 = v1stream;
     (v7)->instance.slots[4]=v6;
     goto L5;
    }
   }
L7:;
   if (!(ecl_eql(v5,VV[34]))) { goto L5; }
   {
    cl_object v8;
    T0 = ecl_function_dispatch(cl_env_copy,VV[27])(1, v1stream) /*  SLIDING-WINDOW-STREAM-CHECKSUM-VALUE */;
    T1 = ecl_function_dispatch(cl_env_copy,VV[31])(1, v1stream) /*  SLIDING-WINDOW-STREAM-BUFFER */;
    v8 = L9update_crc32_checksum(T0, T1, ecl_make_fixnum(32768));
    {
     cl_object v9;
     v9 = v1stream;
     (v9)->instance.slots[4]=v8;
    }
   }
  }
L5:;
  v4end = 0;
L2:;
  {
   cl_object v5;
   v5 = ecl_function_dispatch(cl_env_copy,VV[31])(1, v1stream) /*  SLIDING-WINDOW-STREAM-BUFFER */;
   ecl_aset_unsafe(v5,v4end,ecl_make_uint8_t(v3byte));
  }
  {
   cl_object v5;
   v5 = ecl_make_integer((v4end)+1);
   {
    cl_object v6;
    v6 = v1stream;
    value0 = (v6)->instance.slots[2]=v5;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      function definition for SLIDING-WINDOW-STREAM-FLUSH           */
/*      optimize speed 3, debug 1, space 1, safety 0                  */
static cl_object L14sliding_window_stream_flush(cl_object v1stream)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 {
  cl_fixnum v2end;
  v2end = ecl_fixnum(ecl_function_dispatch(cl_env_copy,VV[30])(1, v1stream) /*  SLIDING-WINDOW-STREAM-BUFFER-END */);
  if ((v2end)==0) { goto L2; }
  {
   cl_object v3;
   v3 = ecl_function_dispatch(cl_env_copy,VV[29])(1, v1stream) /*  SLIDING-WINDOW-STREAM-CHECKSUM */;
   if (!(ecl_eql(v3,VV[33]))) { goto L6; }
   {
    cl_object v4;
    T0 = ecl_function_dispatch(cl_env_copy,VV[27])(1, v1stream) /*  SLIDING-WINDOW-STREAM-CHECKSUM-VALUE */;
    T1 = ecl_function_dispatch(cl_env_copy,VV[31])(1, v1stream) /*  SLIDING-WINDOW-STREAM-BUFFER */;
    v4 = L7update_adler32_checksum(T0, T1, ecl_make_fixnum(v2end));
    {
     cl_object v5;
     v5 = v1stream;
     (v5)->instance.slots[4]=v4;
     goto L4;
    }
   }
L6:;
   if (!(ecl_eql(v3,VV[34]))) { goto L4; }
   {
    cl_object v6;
    T0 = ecl_function_dispatch(cl_env_copy,VV[27])(1, v1stream) /*  SLIDING-WINDOW-STREAM-CHECKSUM-VALUE */;
    T1 = ecl_function_dispatch(cl_env_copy,VV[31])(1, v1stream) /*  SLIDING-WINDOW-STREAM-BUFFER */;
    v6 = L9update_crc32_checksum(T0, T1, ecl_make_fixnum(v2end));
    {
     cl_object v7;
     v7 = v1stream;
     (v7)->instance.slots[4]=v6;
    }
   }
  }
L4:;
  T0 = ecl_function_dispatch(cl_env_copy,VV[31])(1, v1stream) /*  SLIDING-WINDOW-STREAM-BUFFER */;
  T1 = ecl_function_dispatch(cl_env_copy,VV[32])(1, v1stream) /*  SLIDING-WINDOW-STREAM-STREAM */;
  value0 = cl_write_sequence(4, T0, T1, ECL_SYM("END",1247), ecl_make_fixnum(v2end));
  return value0;
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for SLIDING-WINDOW-STREAM-COPY-BYTES      */
/*      optimize speed 3, debug 1, space 1, safety 0                  */
static cl_object L15sliding_window_stream_copy_bytes(cl_object v1stream, cl_object v2distance, cl_object v3length)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 cl_fixnum v4distance;
 cl_fixnum v5length;
 v4distance = ecl_fixnum(v2distance);
 v5length = ecl_fixnum(v3length);
TTL:
 {
  cl_fixnum v6end;
  cl_fixnum v7start;
  cl_object v8buffer;
  v6end = ecl_fixnum(ecl_function_dispatch(cl_env_copy,VV[30])(1, v1stream) /*  SLIDING-WINDOW-STREAM-BUFFER-END */);
  T0 = ecl_minus(ecl_make_fixnum(v6end),ecl_make_fixnum(v4distance));
  v7start = ecl_fixnum((ecl_floor2(T0,ecl_make_fixnum(32768)),cl_env_copy->values[1]));
  v8buffer = ecl_function_dispatch(cl_env_copy,VV[31])(1, v1stream) /*  SLIDING-WINDOW-STREAM-BUFFER */;
  {
   cl_fixnum v9i;
   v9i = 0;
   goto L6;
L5:;
   {
    uint8_t v10;
    T0 = ecl_plus(ecl_make_fixnum(v7start),ecl_make_fixnum(v9i));
    T1 = (ecl_floor2(T0,ecl_make_fixnum(32768)),cl_env_copy->values[1]);
    v10 = (uint8_t)((v8buffer)->vector.self.b8[ecl_fixnum(T1)]);
    {
     cl_fixnum v11end;
     v11end = ecl_fixnum(ecl_function_dispatch(cl_env_copy,VV[30])(1, v1stream) /*  SLIDING-WINDOW-STREAM-BUFFER-END */);
     if ((v11end)<(32768)) { goto L11; }
     T0 = ecl_function_dispatch(cl_env_copy,VV[31])(1, v1stream) /*  SLIDING-WINDOW-STREAM-BUFFER */;
     T1 = ecl_function_dispatch(cl_env_copy,VV[32])(1, v1stream) /*  SLIDING-WINDOW-STREAM-STREAM */;
     cl_write_sequence(2, T0, T1);
     {
      cl_object v12;
      v12 = ecl_function_dispatch(cl_env_copy,VV[29])(1, v1stream) /*  SLIDING-WINDOW-STREAM-CHECKSUM */;
      if (!(ecl_eql(v12,VV[33]))) { goto L16; }
      {
       cl_object v13;
       T0 = ecl_function_dispatch(cl_env_copy,VV[27])(1, v1stream) /*  SLIDING-WINDOW-STREAM-CHECKSUM-VALUE */;
       T1 = ecl_function_dispatch(cl_env_copy,VV[31])(1, v1stream) /*  SLIDING-WINDOW-STREAM-BUFFER */;
       v13 = L7update_adler32_checksum(T0, T1, ecl_make_fixnum(32768));
       {
        cl_object v14;
        v14 = v1stream;
        (v14)->instance.slots[4]=v13;
        goto L14;
       }
      }
L16:;
      if (!(ecl_eql(v12,VV[34]))) { goto L14; }
      {
       cl_object v15;
       T0 = ecl_function_dispatch(cl_env_copy,VV[27])(1, v1stream) /*  SLIDING-WINDOW-STREAM-CHECKSUM-VALUE */;
       T1 = ecl_function_dispatch(cl_env_copy,VV[31])(1, v1stream) /*  SLIDING-WINDOW-STREAM-BUFFER */;
       v15 = L9update_crc32_checksum(T0, T1, ecl_make_fixnum(32768));
       {
        cl_object v16;
        v16 = v1stream;
        (v16)->instance.slots[4]=v15;
       }
      }
     }
L14:;
     v11end = 0;
L11:;
     {
      cl_object v12;
      v12 = ecl_function_dispatch(cl_env_copy,VV[31])(1, v1stream) /*  SLIDING-WINDOW-STREAM-BUFFER */;
      ecl_aset_unsafe(v12,v11end,ecl_make_uint8_t(v10));
     }
     {
      cl_object v12;
      v12 = ecl_make_integer((v11end)+1);
      {
       cl_object v13;
       v13 = v1stream;
       (v13)->instance.slots[2]=v12;
      }
     }
    }
   }
   v9i = (v9i)+1;
L6:;
   if (!((v9i)<(v5length))) { goto L30; }
   goto L5;
L30:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for MAKE-BIT-STREAM                       */
/*      optimize speed 3, debug 1, space 1, safety 0                  */
static cl_object L16make_bit_stream(cl_narg narg, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 cl_object v1;
 cl_object v2;
 cl_object v3;
 cl_object v4;
 ecl_va_list args; ecl_va_start(args,narg,narg,0);
 {
  cl_object keyvars[8];
  cl_parse_key(args,4,L16make_bit_streamkeys,keyvars,NULL,FALSE);
  ecl_va_end(args);
  v1 = keyvars[0];
  if (Null(keyvars[5])) {
   v2 = ecl_make_fixnum(0);
  } else {
   v2 = keyvars[1];
  }
  if (Null(keyvars[6])) {
   v3 = ecl_make_fixnum(0);
  } else {
   v3 = keyvars[2];
  }
  if (Null(keyvars[7])) {
   v4 = ecl_make_fixnum(0);
  } else {
   v4 = keyvars[3];
  }
 }
 {
  cl_fixnum v5;
  v5 = 0;
  if (!(ECL_FIXNUMP(v4))) { goto L8; }
  v5 = ecl_fixnum(v4);
  if (!((v5)<=(255))) { goto L13; }
  if ((v5)>=(0)) { goto L4; }
  goto L5;
L13:;
  goto L5;
L8:;
  goto L5;
 }
L5:;
 ecl_function_dispatch(cl_env_copy,VV[126])(4, v4, VV[41], VV[38], VV[42]) /*  STRUCTURE-TYPE-ERROR */;
L4:;
 {
  cl_fixnum v5;
  v5 = 0;
  if (!(ECL_FIXNUMP(v3))) { goto L19; }
  v5 = ecl_fixnum(v3);
  if (!((v5)<=(536870911))) { goto L24; }
  if ((v5)>=(0)) { goto L15; }
  goto L16;
L24:;
  goto L16;
L19:;
  goto L16;
 }
L16:;
 ecl_function_dispatch(cl_env_copy,VV[126])(4, v3, VV[43], VV[38], VV[44]) /*  STRUCTURE-TYPE-ERROR */;
L15:;
 if (ECL_FIXNUMP(v2)) { goto L26; }
 ecl_function_dispatch(cl_env_copy,VV[126])(4, v2, ECL_SYM("FIXNUM",374), VV[38], VV[45]) /*  STRUCTURE-TYPE-ERROR */;
L26:;
 if ((cl_streamp(v1))!=ECL_NIL) { goto L28; }
 ecl_function_dispatch(cl_env_copy,VV[126])(4, v1, ECL_SYM("STREAM",801), VV[38], ECL_SYM("STREAM",801)) /*  STRUCTURE-TYPE-ERROR */;
L28:;
 value0 = si_make_structure(5, VV[46], v1, v2, v3, v4);
 return value0;
}
/*      local function LAMBDA90                                       */
/*      optimize speed 3, debug 1, space 1, safety 0                  */
static cl_object LC17__lambda90(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 {
  cl_object v3;
  cl_object v4;
  v3 = cl_gensym(0);
  v4 = cl_gensym(0);
  T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[38]);
  T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(3), v3, v4);
  T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[38]);
  T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(3));
  cl_env_copy->nvalues = 6;
  cl_env_copy->values[5] = T3;
  cl_env_copy->values[4] = T1;
  cl_env_copy->values[3] = v4;
  cl_env_copy->values[2] = v3;
  cl_env_copy->values[1] = ECL_NIL;
  cl_env_copy->values[0] = ECL_NIL;
  return cl_env_copy->values[0];
 }
}
/*      local function LAMBDA94                                       */
/*      optimize speed 3, debug 1, space 1, safety 0                  */
static cl_object LC18__lambda94(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 {
  cl_object v3;
  cl_object v4;
  v3 = cl_gensym(0);
  v4 = cl_gensym(0);
  T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[38]);
  T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(2), v3, v4);
  T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[38]);
  T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(2));
  cl_env_copy->nvalues = 6;
  cl_env_copy->values[5] = T3;
  cl_env_copy->values[4] = T1;
  cl_env_copy->values[3] = v4;
  cl_env_copy->values[2] = v3;
  cl_env_copy->values[1] = ECL_NIL;
  cl_env_copy->values[0] = ECL_NIL;
  return cl_env_copy->values[0];
 }
}
/*      local function LAMBDA98                                       */
/*      optimize speed 3, debug 1, space 1, safety 0                  */
static cl_object LC19__lambda98(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 {
  cl_object v3;
  cl_object v4;
  v3 = cl_gensym(0);
  v4 = cl_gensym(0);
  T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[38]);
  T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(1), v3, v4);
  T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[38]);
  T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(1));
  cl_env_copy->nvalues = 6;
  cl_env_copy->values[5] = T3;
  cl_env_copy->values[4] = T1;
  cl_env_copy->values[3] = v4;
  cl_env_copy->values[2] = v3;
  cl_env_copy->values[1] = ECL_NIL;
  cl_env_copy->values[0] = ECL_NIL;
  return cl_env_copy->values[0];
 }
}
/*      function definition for BIT-STREAM-GET-BYTE                   */
/*      optimize speed 3, debug 1, space 1, safety 0                  */
static cl_object L20bit_stream_get_byte(cl_object v1stream)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 T0 = ecl_function_dispatch(cl_env_copy,VV[51])(1, v1stream) /*  BIT-STREAM-STREAM */;
 value0 = cl_read_byte(1, T0);
 return value0;
}
/*      function definition for BIT-STREAM-READ-BITS                  */
/*      optimize speed 3, debug 1, space 1, safety 0                  */
static cl_object L21bit_stream_read_bits(cl_object v1stream, cl_object v2bits)
{
 cl_object T0, T1, T2, T3, T4;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
L2:;
 T0 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1stream) /*  BIT-STREAM-BIT-COUNT */;
 if (ecl_lower(T0,v2bits)) { goto L4; }
 goto L3;
L4:;
 {
  cl_object v3;
  T0 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1stream) /*  BIT-STREAM-BITS */;
  {
   uint8_t v4;
   T1 = ecl_function_dispatch(cl_env_copy,VV[51])(1, v1stream) /*  BIT-STREAM-STREAM */;
   v4 = ecl_fixnum(cl_read_byte(1, T1));
   T1 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1stream) /*  BIT-STREAM-BIT-COUNT */;
   T2 = cl_ash(ecl_make_uint8_t(v4), T1);
   v3 = ecl_boole(ECL_BOOLIOR,(T0),(T2));
  }
  {
   cl_object v4;
   v4 = v1stream;
   (v4)->instance.slots[2]=v3;
  }
 }
 {
  cl_object v3;
  T0 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1stream) /*  BIT-STREAM-BIT-COUNT */;
  v3 = ecl_plus(T0,ecl_make_fixnum(8));
  {
   cl_object v4;
   v4 = v1stream;
   (v4)->instance.slots[3]=v3;
  }
 }
 goto L2;
L3:;
 T0 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1stream) /*  BIT-STREAM-BIT-COUNT */;
 if (!(ecl_number_equalp(T0,v2bits))) { goto L14; }
 {
  cl_object v3;
  v3 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1stream) /*  BIT-STREAM-BITS */;
  {
   cl_object v4;
   v4 = ecl_make_fixnum(0);
   {
    cl_object v5;
    v5 = v1stream;
    (v5)->instance.slots[2]=v4;
   }
  }
  {
   cl_object v4;
   v4 = ecl_make_fixnum(0);
   {
    cl_object v5;
    v5 = v1stream;
    (v5)->instance.slots[3]=v4;
   }
  }
  value0 = v3;
  cl_env_copy->nvalues = 1;
  return value0;
 }
L14:;
 {
  cl_object v4;
  {
   cl_object v5;
   {
    cl_object v6;
    v6 = v2bits;
    {
     cl_object v7;
     v7 = ecl_make_fixnum(0);
     if (!(ECL_FIXNUMP(v6)||ECL_BIGNUMP(v6))) { goto L30; }
     v7 = v6;
     T0 = ecl_make_bool(ecl_greatereq(v7,ecl_make_fixnum(0)));
     goto L27;
L30:;
     T0 = ECL_NIL;
     goto L27;
    }
L27:;
    if (ecl_unlikely(!((T0)!=ECL_NIL)))
         FEwrong_type_argument(ECL_SYM("UNSIGNED-BYTE",887),v6);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v5 = v6;
   }
   T0 = cl_ash(ecl_make_fixnum(-1), v5);
   T1 = ecl_boole(ECL_BOOLXOR,(T0),ecl_make_fixnum(-1));
   T2 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1stream) /*  BIT-STREAM-BITS */;
   T3 = ecl_negate(ecl_make_fixnum(0));
   T4 = cl_ash(T2, T3);
   v4 = ecl_boole(ECL_BOOLAND,(T1),(T4));
  }
  {
   cl_object v5;
   T0 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1stream) /*  BIT-STREAM-BITS */;
   T1 = ecl_negate(v2bits);
   v5 = cl_ash(T0, T1);
   {
    cl_object v6;
    v6 = v1stream;
    (v6)->instance.slots[2]=v5;
   }
  }
  {
   cl_object v5;
   T0 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1stream) /*  BIT-STREAM-BIT-COUNT */;
   v5 = ecl_minus(T0,v2bits);
   {
    cl_object v6;
    v6 = v1stream;
    (v6)->instance.slots[3]=v5;
   }
  }
  value0 = v4;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for BIT-STREAM-COPY-BLOCK                 */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L22bit_stream_copy_block(cl_object v1stream, cl_object v2out_stream)
{
 cl_object T0, T1, T2, T3, T4, T5, T6;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 {
  cl_object v3;
  v3 = ecl_make_fixnum(0);
  {
   cl_object v4;
   v4 = v1stream;
   (v4)->instance.slots[2]=v3;
  }
 }
 {
  cl_object v3;
  v3 = ecl_make_fixnum(0);
  {
   cl_object v4;
   v4 = v1stream;
   (v4)->instance.slots[3]=v3;
  }
 }
 {
  cl_object v3len;
  cl_object v4nlen;
  {
   uint8_t v5;
   T0 = ecl_function_dispatch(cl_env_copy,VV[51])(1, v1stream) /*  BIT-STREAM-STREAM */;
   v5 = ecl_fixnum(cl_read_byte(1, T0));
   {
    uint8_t v6;
    T0 = ecl_function_dispatch(cl_env_copy,VV[51])(1, v1stream) /*  BIT-STREAM-STREAM */;
    v6 = ecl_fixnum(cl_read_byte(1, T0));
    T0 = ecl_ash(ecl_make_uint8_t(v6),8);
    v3len = ecl_boole(ECL_BOOLIOR,(ecl_make_uint8_t(v5)),(T0));
   }
  }
  T0 = cl_ash(ecl_make_fixnum(-1), ecl_make_fixnum(16));
  T1 = ecl_boole(ECL_BOOLXOR,(T0),ecl_make_fixnum(-1));
  {
   uint8_t v5;
   T2 = ecl_function_dispatch(cl_env_copy,VV[51])(1, v1stream) /*  BIT-STREAM-STREAM */;
   v5 = ecl_fixnum(cl_read_byte(1, T2));
   {
    uint8_t v6;
    T2 = ecl_function_dispatch(cl_env_copy,VV[51])(1, v1stream) /*  BIT-STREAM-STREAM */;
    v6 = ecl_fixnum(cl_read_byte(1, T2));
    T2 = ecl_ash(ecl_make_uint8_t(v6),8);
    T3 = ecl_boole(ECL_BOOLIOR,(ecl_make_uint8_t(v5)),(T2));
    T4 = ecl_boole(ECL_BOOLXOR,(T3),ecl_make_fixnum(-1));
    T5 = ecl_negate(ecl_make_fixnum(0));
    T6 = cl_ash(T4, T5);
    v4nlen = ecl_boole(ECL_BOOLAND,(T1),(T6));
   }
  }
  if (ecl_number_equalp(v3len,v4nlen)) { goto L13; }
  T0 = cl_list(2, v3len, v4nlen);
  cl_error(5, VV[1], ECL_SYM("FORMAT-CONTROL",1263), VV[54], ECL_SYM("FORMAT-ARGUMENTS",1262), T0);
L13:;
  {
   cl_object v5i;
   v5i = ecl_make_fixnum(0);
   goto L17;
L16:;
   {
    uint8_t v6;
    T0 = ecl_function_dispatch(cl_env_copy,VV[51])(1, v1stream) /*  BIT-STREAM-STREAM */;
    v6 = ecl_fixnum(cl_read_byte(1, T0));
    {
     cl_fixnum v7end;
     v7end = ecl_fixnum(ecl_function_dispatch(cl_env_copy,VV[30])(1, v2out_stream) /*  SLIDING-WINDOW-STREAM-BUFFER-END */);
     if ((v7end)<(32768)) { goto L22; }
     T0 = ecl_function_dispatch(cl_env_copy,VV[31])(1, v2out_stream) /*  SLIDING-WINDOW-STREAM-BUFFER */;
     T1 = ecl_function_dispatch(cl_env_copy,VV[32])(1, v2out_stream) /*  SLIDING-WINDOW-STREAM-STREAM */;
     cl_write_sequence(2, T0, T1);
     {
      cl_object v8;
      v8 = ecl_function_dispatch(cl_env_copy,VV[29])(1, v2out_stream) /*  SLIDING-WINDOW-STREAM-CHECKSUM */;
      if (!(ecl_eql(v8,VV[33]))) { goto L27; }
      {
       cl_object v9;
       T0 = ecl_function_dispatch(cl_env_copy,VV[27])(1, v2out_stream) /*  SLIDING-WINDOW-STREAM-CHECKSUM-VALUE */;
       T1 = ecl_function_dispatch(cl_env_copy,VV[31])(1, v2out_stream) /*  SLIDING-WINDOW-STREAM-BUFFER */;
       v9 = L7update_adler32_checksum(T0, T1, ecl_make_fixnum(32768));
       {
        cl_object v10;
        v10 = v2out_stream;
        (v10)->instance.slots[4]=v9;
        goto L25;
       }
      }
L27:;
      if (!(ecl_eql(v8,VV[34]))) { goto L25; }
      {
       cl_object v11;
       T0 = ecl_function_dispatch(cl_env_copy,VV[27])(1, v2out_stream) /*  SLIDING-WINDOW-STREAM-CHECKSUM-VALUE */;
       T1 = ecl_function_dispatch(cl_env_copy,VV[31])(1, v2out_stream) /*  SLIDING-WINDOW-STREAM-BUFFER */;
       v11 = L9update_crc32_checksum(T0, T1, ecl_make_fixnum(32768));
       {
        cl_object v12;
        v12 = v2out_stream;
        (v12)->instance.slots[4]=v11;
       }
      }
     }
L25:;
     v7end = 0;
L22:;
     {
      cl_object v8;
      v8 = ecl_function_dispatch(cl_env_copy,VV[31])(1, v2out_stream) /*  SLIDING-WINDOW-STREAM-BUFFER */;
      ecl_aset_unsafe(v8,v7end,ecl_make_uint8_t(v6));
     }
     {
      cl_object v8;
      v8 = ecl_make_integer((v7end)+1);
      {
       cl_object v9;
       v9 = v2out_stream;
       (v9)->instance.slots[2]=v8;
      }
     }
    }
   }
   v5i = ecl_one_plus(v5i);
L17:;
   if (!(ecl_lower(v5i,v3len))) { goto L41; }
   goto L16;
L41:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for MAKE-DECODE-TREE                      */
/*      optimize speed 3, debug 1, space 1, safety 0                  */
static cl_object L23make_decode_tree(cl_narg narg, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 cl_object v1;
 cl_object v2;
 ecl_va_list args; ecl_va_start(args,narg,narg,0);
 {
  cl_object keyvars[4];
  cl_parse_key(args,2,L23make_decode_treekeys,keyvars,NULL,FALSE);
  ecl_va_end(args);
  if (Null(keyvars[2])) {
   T0 = si_make_vector(ECL_SYM("INTEGER32",1365), ecl_make_fixnum(16), ECL_NIL, ECL_NIL, ECL_NIL, ecl_make_fixnum(0));
   v1 = si_fill_array_with_elt(T0, ecl_make_fixnum(0), ecl_make_fixnum(0), ECL_NIL);
  } else {
   v1 = keyvars[0];
  }
  if (Null(keyvars[3])) {
   T0 = si_make_vector(ECL_SYM("INTEGER32",1365), ecl_make_fixnum(16), ECL_NIL, ECL_NIL, ECL_NIL, ecl_make_fixnum(0));
   v2 = si_fill_array_with_elt(T0, ecl_make_fixnum(0), ecl_make_fixnum(0), ECL_NIL);
  } else {
   v2 = keyvars[1];
  }
 }
 if ((cl_typep(2, v2, VV[59]))!=ECL_NIL) { goto L3; }
 ecl_function_dispatch(cl_env_copy,VV[126])(4, v2, VV[59], VV[56], VV[60]) /*  STRUCTURE-TYPE-ERROR */;
L3:;
 if ((cl_typep(2, v1, VV[59]))!=ECL_NIL) { goto L5; }
 ecl_function_dispatch(cl_env_copy,VV[126])(4, v1, VV[59], VV[56], VV[61]) /*  STRUCTURE-TYPE-ERROR */;
L5:;
 value0 = si_make_structure(3, VV[62], v1, v2);
 return value0;
}
/*      local function LAMBDA177                                      */
/*      optimize speed 3, debug 1, space 1, safety 0                  */
static cl_object LC24__lambda177(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 {
  cl_object v3;
  cl_object v4;
  v3 = cl_gensym(0);
  v4 = cl_gensym(0);
  T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[56]);
  T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(1), v3, v4);
  T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[56]);
  T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(1));
  cl_env_copy->nvalues = 6;
  cl_env_copy->values[5] = T3;
  cl_env_copy->values[4] = T1;
  cl_env_copy->values[3] = v4;
  cl_env_copy->values[2] = v3;
  cl_env_copy->values[1] = ECL_NIL;
  cl_env_copy->values[0] = ECL_NIL;
  return cl_env_copy->values[0];
 }
}
/*      function definition for MAKE-HUFFMAN-DECODE-TREE              */
/*      optimize speed 3, debug 1, space 1, safety 0                  */
static cl_object L25make_huffman_decode_tree(cl_object v1code_lengths)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 {
  cl_object v2max_length;
  cl_object v3next_code;
  cl_object v4code_symbols;
  cl_object v5length_count;
  T0 = (ECL_SYM("MAX",553)->symbol.gfdef);
  v2max_length = cl_reduce(4, T0, v1code_lengths, VV[66], ecl_make_fixnum(0));
  T0 = ecl_one_plus(v2max_length);
  T1 = si_make_pure_array(ECL_SYM("INTEGER32",1365), T0, ECL_NIL, ECL_NIL, ECL_NIL, ecl_make_fixnum(0));
  v3next_code = si_fill_array_with_elt(T1, ecl_make_fixnum(0), ecl_make_fixnum(0), ECL_NIL);
  {
   cl_fixnum v6;
   v6 = ecl_length(v1code_lengths);
   T0 = si_make_pure_array(ECL_SYM("INTEGER32",1365), ecl_make_fixnum(v6), ECL_NIL, ECL_NIL, ECL_NIL, ecl_make_fixnum(0));
   v4code_symbols = si_fill_array_with_elt(T0, ecl_make_fixnum(0), ecl_make_fixnum(0), ECL_NIL);
  }
  T0 = ecl_one_plus(v2max_length);
  T1 = si_make_pure_array(ECL_SYM("INTEGER32",1365), T0, ECL_NIL, ECL_NIL, ECL_NIL, ecl_make_fixnum(0));
  v5length_count = si_fill_array_with_elt(T1, ecl_make_fixnum(0), ecl_make_fixnum(0), ECL_NIL);
  {
   cl_object v6index;
   v6index = ecl_make_fixnum(1);
   {
    cl_object v7code;
    v7code = ECL_NIL;
    {
     cl_object v8length;
     cl_fixnum v9;
     cl_fixnum v10;
     v8length = ECL_NIL;
     v9 = 0;
     v10 = 0;
     v10 = (v1code_lengths)->vector.fillp;
L15:;
     if (!((v9)>=(v10))) { goto L19; }
     goto L16;
L19:;
     v8length = ecl_aref_unsafe(v1code_lengths,v9);
     v9 = (v9)+1;
     {
      cl_object v11;
      {
       int v12;
       v12 = (int)((v5length_count)->vector.self.i32[ecl_fixnum(v8length)]);
       v11 = ecl_plus(ecl_make_int(v12),ecl_make_fixnum(1));
      }
      (v5length_count)->vector.self.i32[ecl_fixnum(v8length)]= ecl_to_int(v11);
     }
     goto L15;
L16:;
     (v5length_count)->array.self.fix[0]= 0;
    }
    if (!(ecl_greater(v6index,v2max_length))) { goto L30; }
    goto L10;
L30:;
    v7code = ecl_make_fixnum(0);
L9:;
    (v3next_code)->vector.self.i32[ecl_fixnum(v6index)]= ecl_to_int(v7code);
    v6index = ecl_one_plus(v6index);
    if (!(ecl_greater(v6index,v2max_length))) { goto L37; }
    goto L10;
L37:;
    {
     int v8;
     T0 = ecl_one_minus(v6index);
     v8 = (int)((v5length_count)->vector.self.i32[ecl_fixnum(T0)]);
     v7code = ecl_plus(v7code,ecl_make_int(v8));
    }
    goto L9;
L10:;
   }
  }
  {
   cl_object v6length;
   cl_fixnum v7;
   cl_fixnum v8;
   v6length = ECL_NIL;
   v7 = 0;
   v8 = 0;
   {
    cl_object v9index;
    v9index = ecl_make_fixnum(0);
    v8 = (v1code_lengths)->vector.fillp;
    if (!((v7)>=(v8))) { goto L52; }
    goto L49;
L52:;
    v6length = ecl_aref_unsafe(v1code_lengths,v7);
    v7 = (v7)+1;
L48:;
    if (ecl_zerop(v6length)) { goto L58; }
    {
     cl_fixnum v10;
     v10 = (cl_fixnum)((v3next_code)->vector.self.i32[ecl_fixnum(v6length)]);
     (v4code_symbols)->vector.self.i32[v10]= ecl_to_int(v9index);
    }
    {
     cl_object v10;
     {
      int v11;
      v11 = (int)((v3next_code)->vector.self.i32[ecl_fixnum(v6length)]);
      v10 = ecl_plus(ecl_make_int(v11),ecl_make_fixnum(1));
     }
     (v3next_code)->vector.self.i32[ecl_fixnum(v6length)]= ecl_to_int(v10);
    }
L58:;
    if (!((v7)>=(v8))) { goto L64; }
    goto L49;
L64:;
    v6length = ecl_aref_unsafe(v1code_lengths,v7);
    v7 = (v7)+1;
    v9index = ecl_one_plus(v9index);
    goto L48;
L49:;
   }
  }
  value0 = L23make_decode_tree(4, VV[67], v5length_count, VV[68], v4code_symbols);
  return value0;
 }
}
/*      function definition for READ-HUFFMAN-CODE                     */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L26read_huffman_code(cl_object v1bit_stream, cl_object v2decode_tree)
{
 cl_object T0, T1, T2, T3, T4, T5, T6;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 {
  cl_object v3length_count;
  v3length_count = ecl_function_dispatch(cl_env_copy,VV[65])(1, v2decode_tree) /*  DECODE-TREE-LENGTH-COUNT */;
  {
   cl_object v4code_symbols;
   v4code_symbols = ecl_function_dispatch(cl_env_copy,VV[64])(1, v2decode_tree) /*  DECODE-TREE-CODE-SYMBOLS */;
   {
    cl_fixnum v5code;
    v5code = 0;
    {
     cl_fixnum v6index;
     v6index = 0;
     {
      cl_fixnum v7first;
      v7first = 0;
      {
       cl_fixnum v8;
       cl_fixnum v9length;
       v8 = (v3length_count)->vector.fillp;
       v9length = 1;
       {
        cl_object v10count;
        v10count = ECL_NIL;
        {
         cl_object v11;
         v11 = ECL_NIL;
L15:;
         T0 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
         if (ecl_lower(T0,ecl_make_fixnum(1))) { goto L17; }
         goto L16;
L17:;
         {
          cl_object v12;
          T0 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
          {
          uint8_t v13;
          T1 = ecl_function_dispatch(cl_env_copy,VV[51])(1, v1bit_stream) /*  BIT-STREAM-STREAM */;
          v13 = ecl_fixnum(cl_read_byte(1, T1));
          T1 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
          T2 = cl_ash(ecl_make_uint8_t(v13), T1);
          v12 = ecl_boole(ECL_BOOLIOR,(T0),(T2));
          }
          {
          cl_object v13;
          v13 = v1bit_stream;
          (v13)->instance.slots[2]=v12;
          }
         }
         {
          cl_object v12;
          T0 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
          v12 = ecl_plus(T0,ecl_make_fixnum(8));
          {
          cl_object v13;
          v13 = v1bit_stream;
          (v13)->instance.slots[3]=v12;
          }
         }
         goto L15;
L16:;
         T0 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
         if (!(ecl_number_equalp(T0,ecl_make_fixnum(1)))) { goto L27; }
         {
          cl_object v12;
          v12 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
          {
          cl_object v13;
          v13 = ecl_make_fixnum(0);
          {
          cl_object v14;
          v14 = v1bit_stream;
          (v14)->instance.slots[2]=v13;
          }
          }
          {
          cl_object v13;
          v13 = ecl_make_fixnum(0);
          {
          cl_object v14;
          v14 = v1bit_stream;
          (v14)->instance.slots[3]=v13;
          }
          }
          v5code = ecl_fixnum(v12);
          goto L13;
         }
L27:;
         {
          cl_object v13;
          {
          cl_object v14;
          {
          cl_object v15;
          v15 = ecl_make_fixnum(1);
          {
          cl_object v16;
          v16 = ecl_make_fixnum(0);
          if (!(ECL_FIXNUMP(v15)||ECL_BIGNUMP(v15))) { goto L43; }
          v16 = v15;
          T0 = ecl_make_bool(ecl_greatereq(v16,ecl_make_fixnum(0)));
          goto L40;
L43:;
          T0 = ECL_NIL;
          goto L40;
          }
L40:;
          if (ecl_unlikely(!((T0)!=ECL_NIL)))
         FEwrong_type_argument(ECL_SYM("UNSIGNED-BYTE",887),v15);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          v14 = v15;
          }
          T0 = cl_ash(ecl_make_fixnum(-1), v14);
          T1 = ecl_boole(ECL_BOOLXOR,(T0),ecl_make_fixnum(-1));
          T2 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
          T3 = ecl_negate(ecl_make_fixnum(0));
          T4 = cl_ash(T2, T3);
          v13 = ecl_boole(ECL_BOOLAND,(T1),(T4));
          }
          {
          cl_object v14;
          T0 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
          T1 = ecl_negate(ecl_make_fixnum(1));
          v14 = cl_ash(T0, T1);
          {
          cl_object v15;
          v15 = v1bit_stream;
          (v15)->instance.slots[2]=v14;
          }
          }
          {
          cl_object v14;
          T0 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
          v14 = ecl_minus(T0,ecl_make_fixnum(1));
          {
          cl_object v15;
          v15 = v1bit_stream;
          (v15)->instance.slots[3]=v14;
          }
          }
          v5code = ecl_fixnum(v13);
         }
L13:;
         v6index = 0;
         v7first = 0;
L10:;
         if (!((v9length)>=(v8))) { goto L57; }
         goto L11;
L57:;
         v10count = ecl_make_int32_t((v3length_count)->vector.self.i32[v9length]);
         T0 = ecl_plus(ecl_make_fixnum(v7first),v10count);
         if (!((v5code)<(ecl_fixnum(T0)))) { goto L64; }
         T0 = ecl_minus(ecl_make_fixnum(v5code),ecl_make_fixnum(v7first));
         T1 = ecl_plus(ecl_make_fixnum(v6index),T0);
         v11 = ecl_make_int32_t((v4code_symbols)->vector.self.i32[ecl_fixnum(T1)]);
         goto L63;
L64:;
         v11 = ECL_NIL;
L63:;
         if (Null(v11)) { goto L61; }
         value0 = v11;
         cl_env_copy->nvalues = 1;
         return value0;
L61:;
         T0 = ecl_times(ecl_make_fixnum(v5code),ecl_make_fixnum(2));
L70:;
         T2 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
         if (ecl_lower(T2,ecl_make_fixnum(1))) { goto L72; }
         goto L71;
L72:;
         {
          cl_object v12;
          T2 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
          {
          uint8_t v13;
          T3 = ecl_function_dispatch(cl_env_copy,VV[51])(1, v1bit_stream) /*  BIT-STREAM-STREAM */;
          v13 = ecl_fixnum(cl_read_byte(1, T3));
          T3 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
          T4 = cl_ash(ecl_make_uint8_t(v13), T3);
          v12 = ecl_boole(ECL_BOOLIOR,(T2),(T4));
          }
          {
          cl_object v13;
          v13 = v1bit_stream;
          (v13)->instance.slots[2]=v12;
          }
         }
         {
          cl_object v12;
          T2 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
          v12 = ecl_plus(T2,ecl_make_fixnum(8));
          {
          cl_object v13;
          v13 = v1bit_stream;
          (v13)->instance.slots[3]=v12;
          }
         }
         goto L70;
L71:;
         T2 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
         if (!(ecl_number_equalp(T2,ecl_make_fixnum(1)))) { goto L82; }
         {
          cl_object v12;
          v12 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
          {
          cl_object v13;
          v13 = ecl_make_fixnum(0);
          {
          cl_object v14;
          v14 = v1bit_stream;
          (v14)->instance.slots[2]=v13;
          }
          }
          {
          cl_object v13;
          v13 = ecl_make_fixnum(0);
          {
          cl_object v14;
          v14 = v1bit_stream;
          (v14)->instance.slots[3]=v13;
          }
          }
          T1 = v12;
          goto L68;
         }
L82:;
         {
          cl_object v13;
          {
          cl_object v14;
          {
          cl_object v15;
          v15 = ecl_make_fixnum(1);
          {
          cl_object v16;
          v16 = ecl_make_fixnum(0);
          if (!(ECL_FIXNUMP(v15)||ECL_BIGNUMP(v15))) { goto L98; }
          v16 = v15;
          T2 = ecl_make_bool(ecl_greatereq(v16,ecl_make_fixnum(0)));
          goto L95;
L98:;
          T2 = ECL_NIL;
          goto L95;
          }
L95:;
          if (ecl_unlikely(!((T2)!=ECL_NIL)))
         FEwrong_type_argument(ECL_SYM("UNSIGNED-BYTE",887),v15);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          v14 = v15;
          }
          T2 = cl_ash(ecl_make_fixnum(-1), v14);
          T3 = ecl_boole(ECL_BOOLXOR,(T2),ecl_make_fixnum(-1));
          T4 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
          T5 = ecl_negate(ecl_make_fixnum(0));
          T6 = cl_ash(T4, T5);
          v13 = ecl_boole(ECL_BOOLAND,(T3),(T6));
          }
          {
          cl_object v14;
          T2 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
          T3 = ecl_negate(ecl_make_fixnum(1));
          v14 = cl_ash(T2, T3);
          {
          cl_object v15;
          v15 = v1bit_stream;
          (v15)->instance.slots[2]=v14;
          }
          }
          {
          cl_object v14;
          T2 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
          v14 = ecl_minus(T2,ecl_make_fixnum(1));
          {
          cl_object v15;
          v15 = v1bit_stream;
          (v15)->instance.slots[3]=v14;
          }
          }
          T1 = v13;
         }
L68:;
         v5code = ecl_fixnum(ecl_plus(T0,T1));
         v6index = ecl_fixnum(ecl_plus(ecl_make_fixnum(v6index),v10count));
         T0 = ecl_plus(ecl_make_fixnum(v7first),v10count);
         v7first = ecl_fixnum(ecl_times(T0,ecl_make_fixnum(2)));
         v9length = (v9length)+1;
         goto L10;
L11:;
         T0 = ecl_list1(ecl_make_fixnum(v5code));
         cl_error(5, VV[1], ECL_SYM("FORMAT-CONTROL",1263), VV[70], ECL_SYM("FORMAT-ARGUMENTS",1262), T0);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 1;
         return value0;
        }
       }
      }
     }
    }
   }
  }
 }
}
/*      function definition for DECODE-CODE-LENGTH-ENTRIES            */
/*      optimize speed 3, debug 1, space 1, safety 0                  */
static cl_object L27decode_code_length_entries(cl_object v1bit_stream, cl_object v2count, cl_object v3decode_tree)
{
 cl_object T0, T1, T2, T3, T4, T5, T6;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 {
  cl_object v4;
  cl_object v5index;
  T0 = si_make_pure_array(ECL_SYM("INTEGER32",1365), v2count, ECL_NIL, ECL_NIL, ECL_NIL, ecl_make_fixnum(0));
  v4 = si_fill_array_with_elt(T0, ecl_make_fixnum(0), ecl_make_fixnum(0), ECL_NIL);
  v5index = ecl_make_fixnum(0);
  goto L5;
L4:;
  {
   cl_object v6code;
   {
    cl_object v7length_count;
    v7length_count = ecl_function_dispatch(cl_env_copy,VV[65])(1, v3decode_tree) /*  DECODE-TREE-LENGTH-COUNT */;
    {
     cl_object v8code_symbols;
     v8code_symbols = ecl_function_dispatch(cl_env_copy,VV[64])(1, v3decode_tree) /*  DECODE-TREE-CODE-SYMBOLS */;
     {
      cl_fixnum v9code;
      v9code = 0;
      {
       cl_fixnum v10index;
       v10index = 0;
       {
        cl_fixnum v11first;
        v11first = 0;
        {
         cl_fixnum v12;
         cl_fixnum v13length;
         v12 = (v7length_count)->vector.fillp;
         v13length = 1;
         {
          cl_object v14count;
          v14count = ECL_NIL;
          {
          cl_object v15;
          v15 = ECL_NIL;
L23:;
          T0 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
          if (ecl_lower(T0,ecl_make_fixnum(1))) { goto L25; }
          goto L24;
L25:;
          {
          cl_object v16;
          T0 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
          {
          uint8_t v17;
          T1 = ecl_function_dispatch(cl_env_copy,VV[51])(1, v1bit_stream) /*  BIT-STREAM-STREAM */;
          v17 = ecl_fixnum(cl_read_byte(1, T1));
          T1 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
          T2 = cl_ash(ecl_make_uint8_t(v17), T1);
          v16 = ecl_boole(ECL_BOOLIOR,(T0),(T2));
          }
          {
          cl_object v17;
          v17 = v1bit_stream;
          (v17)->instance.slots[2]=v16;
          }
          }
          {
          cl_object v16;
          T0 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
          v16 = ecl_plus(T0,ecl_make_fixnum(8));
          {
          cl_object v17;
          v17 = v1bit_stream;
          (v17)->instance.slots[3]=v16;
          }
          }
          goto L23;
L24:;
          T0 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
          if (!(ecl_number_equalp(T0,ecl_make_fixnum(1)))) { goto L35; }
          {
          cl_object v16;
          v16 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
          {
          cl_object v17;
          v17 = ecl_make_fixnum(0);
          {
          cl_object v18;
          v18 = v1bit_stream;
          (v18)->instance.slots[2]=v17;
          }
          }
          {
          cl_object v17;
          v17 = ecl_make_fixnum(0);
          {
          cl_object v18;
          v18 = v1bit_stream;
          (v18)->instance.slots[3]=v17;
          }
          }
          v9code = ecl_fixnum(v16);
          goto L21;
          }
L35:;
          {
          cl_object v17;
          {
          cl_object v18;
          {
          cl_object v19;
          v19 = ecl_make_fixnum(1);
          {
          cl_object v20;
          v20 = ecl_make_fixnum(0);
          if (!(ECL_FIXNUMP(v19)||ECL_BIGNUMP(v19))) { goto L51; }
          v20 = v19;
          T0 = ecl_make_bool(ecl_greatereq(v20,ecl_make_fixnum(0)));
          goto L48;
L51:;
          T0 = ECL_NIL;
          goto L48;
          }
L48:;
          if (ecl_unlikely(!((T0)!=ECL_NIL)))
         FEwrong_type_argument(ECL_SYM("UNSIGNED-BYTE",887),v19);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          v18 = v19;
          }
          T0 = cl_ash(ecl_make_fixnum(-1), v18);
          T1 = ecl_boole(ECL_BOOLXOR,(T0),ecl_make_fixnum(-1));
          T2 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
          T3 = ecl_negate(ecl_make_fixnum(0));
          T4 = cl_ash(T2, T3);
          v17 = ecl_boole(ECL_BOOLAND,(T1),(T4));
          }
          {
          cl_object v18;
          T0 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
          T1 = ecl_negate(ecl_make_fixnum(1));
          v18 = cl_ash(T0, T1);
          {
          cl_object v19;
          v19 = v1bit_stream;
          (v19)->instance.slots[2]=v18;
          }
          }
          {
          cl_object v18;
          T0 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
          v18 = ecl_minus(T0,ecl_make_fixnum(1));
          {
          cl_object v19;
          v19 = v1bit_stream;
          (v19)->instance.slots[3]=v18;
          }
          }
          v9code = ecl_fixnum(v17);
          }
L21:;
          v10index = 0;
          v11first = 0;
L18:;
          if (!((v13length)>=(v12))) { goto L65; }
          goto L19;
L65:;
          v14count = ecl_make_int32_t((v7length_count)->vector.self.i32[v13length]);
          T0 = ecl_plus(ecl_make_fixnum(v11first),v14count);
          if (!((v9code)<(ecl_fixnum(T0)))) { goto L72; }
          T0 = ecl_minus(ecl_make_fixnum(v9code),ecl_make_fixnum(v11first));
          T1 = ecl_plus(ecl_make_fixnum(v10index),T0);
          v15 = ecl_make_int32_t((v8code_symbols)->vector.self.i32[ecl_fixnum(T1)]);
          goto L71;
L72:;
          v15 = ECL_NIL;
L71:;
          if (Null(v15)) { goto L69; }
          v6code = v15;
          goto L8;
L69:;
          T0 = ecl_times(ecl_make_fixnum(v9code),ecl_make_fixnum(2));
L78:;
          T2 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
          if (ecl_lower(T2,ecl_make_fixnum(1))) { goto L80; }
          goto L79;
L80:;
          {
          cl_object v16;
          T2 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
          {
          uint8_t v17;
          T3 = ecl_function_dispatch(cl_env_copy,VV[51])(1, v1bit_stream) /*  BIT-STREAM-STREAM */;
          v17 = ecl_fixnum(cl_read_byte(1, T3));
          T3 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
          T4 = cl_ash(ecl_make_uint8_t(v17), T3);
          v16 = ecl_boole(ECL_BOOLIOR,(T2),(T4));
          }
          {
          cl_object v17;
          v17 = v1bit_stream;
          (v17)->instance.slots[2]=v16;
          }
          }
          {
          cl_object v16;
          T2 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
          v16 = ecl_plus(T2,ecl_make_fixnum(8));
          {
          cl_object v17;
          v17 = v1bit_stream;
          (v17)->instance.slots[3]=v16;
          }
          }
          goto L78;
L79:;
          T2 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
          if (!(ecl_number_equalp(T2,ecl_make_fixnum(1)))) { goto L90; }
          {
          cl_object v16;
          v16 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
          {
          cl_object v17;
          v17 = ecl_make_fixnum(0);
          {
          cl_object v18;
          v18 = v1bit_stream;
          (v18)->instance.slots[2]=v17;
          }
          }
          {
          cl_object v17;
          v17 = ecl_make_fixnum(0);
          {
          cl_object v18;
          v18 = v1bit_stream;
          (v18)->instance.slots[3]=v17;
          }
          }
          T1 = v16;
          goto L76;
          }
L90:;
          {
          cl_object v17;
          {
          cl_object v18;
          {
          cl_object v19;
          v19 = ecl_make_fixnum(1);
          {
          cl_object v20;
          v20 = ecl_make_fixnum(0);
          if (!(ECL_FIXNUMP(v19)||ECL_BIGNUMP(v19))) { goto L106; }
          v20 = v19;
          T2 = ecl_make_bool(ecl_greatereq(v20,ecl_make_fixnum(0)));
          goto L103;
L106:;
          T2 = ECL_NIL;
          goto L103;
          }
L103:;
          if (ecl_unlikely(!((T2)!=ECL_NIL)))
         FEwrong_type_argument(ECL_SYM("UNSIGNED-BYTE",887),v19);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          v18 = v19;
          }
          T2 = cl_ash(ecl_make_fixnum(-1), v18);
          T3 = ecl_boole(ECL_BOOLXOR,(T2),ecl_make_fixnum(-1));
          T4 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
          T5 = ecl_negate(ecl_make_fixnum(0));
          T6 = cl_ash(T4, T5);
          v17 = ecl_boole(ECL_BOOLAND,(T3),(T6));
          }
          {
          cl_object v18;
          T2 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
          T3 = ecl_negate(ecl_make_fixnum(1));
          v18 = cl_ash(T2, T3);
          {
          cl_object v19;
          v19 = v1bit_stream;
          (v19)->instance.slots[2]=v18;
          }
          }
          {
          cl_object v18;
          T2 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
          v18 = ecl_minus(T2,ecl_make_fixnum(1));
          {
          cl_object v19;
          v19 = v1bit_stream;
          (v19)->instance.slots[3]=v18;
          }
          }
          T1 = v17;
          }
L76:;
          v9code = ecl_fixnum(ecl_plus(T0,T1));
          v10index = ecl_fixnum(ecl_plus(ecl_make_fixnum(v10index),v14count));
          T0 = ecl_plus(ecl_make_fixnum(v11first),v14count);
          v11first = ecl_fixnum(ecl_times(T0,ecl_make_fixnum(2)));
          v13length = (v13length)+1;
          goto L18;
L19:;
          T0 = ecl_list1(ecl_make_fixnum(v9code));
          cl_error(5, VV[1], ECL_SYM("FORMAT-CONTROL",1263), VV[70], ECL_SYM("FORMAT-ARGUMENTS",1262), T0);
          v6code = ECL_NIL;
          }
         }
        }
       }
      }
     }
    }
   }
L8:;
   {
    cl_object v7;
    v7 = v6code;
    if (Null(ecl_memql(v7,VV[75]))) { goto L125; }
    (v4)->vector.self.i32[ecl_fixnum(v5index)]= ecl_to_int(v6code);
    v5index = ecl_plus(v5index,ecl_make_fixnum(1));
    goto L7;
L125:;
    if (!((v7)==(ecl_make_fixnum(16)))) { goto L129; }
    {
     cl_object v8length;
L134:;
     T1 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
     if (ecl_lower(T1,ecl_make_fixnum(2))) { goto L136; }
     goto L135;
L136:;
     {
      cl_object v9;
      T1 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
      {
       uint8_t v10;
       T2 = ecl_function_dispatch(cl_env_copy,VV[51])(1, v1bit_stream) /*  BIT-STREAM-STREAM */;
       v10 = ecl_fixnum(cl_read_byte(1, T2));
       T2 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
       T3 = cl_ash(ecl_make_uint8_t(v10), T2);
       v9 = ecl_boole(ECL_BOOLIOR,(T1),(T3));
      }
      {
       cl_object v10;
       v10 = v1bit_stream;
       (v10)->instance.slots[2]=v9;
      }
     }
     {
      cl_object v9;
      T1 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
      v9 = ecl_plus(T1,ecl_make_fixnum(8));
      {
       cl_object v10;
       v10 = v1bit_stream;
       (v10)->instance.slots[3]=v9;
      }
     }
     goto L134;
L135:;
     T1 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
     if (!(ecl_number_equalp(T1,ecl_make_fixnum(2)))) { goto L146; }
     {
      cl_object v9;
      v9 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
      {
       cl_object v10;
       v10 = ecl_make_fixnum(0);
       {
        cl_object v11;
        v11 = v1bit_stream;
        (v11)->instance.slots[2]=v10;
       }
      }
      {
       cl_object v10;
       v10 = ecl_make_fixnum(0);
       {
        cl_object v11;
        v11 = v1bit_stream;
        (v11)->instance.slots[3]=v10;
       }
      }
      T0 = v9;
      goto L132;
     }
L146:;
     {
      cl_object v10;
      {
       cl_object v11;
       {
        cl_object v12;
        v12 = ecl_make_fixnum(2);
        {
         cl_object v13;
         v13 = ecl_make_fixnum(0);
         if (!(ECL_FIXNUMP(v12)||ECL_BIGNUMP(v12))) { goto L162; }
         v13 = v12;
         T1 = ecl_make_bool(ecl_greatereq(v13,ecl_make_fixnum(0)));
         goto L159;
L162:;
         T1 = ECL_NIL;
         goto L159;
        }
L159:;
        if (ecl_unlikely(!((T1)!=ECL_NIL)))
         FEwrong_type_argument(ECL_SYM("UNSIGNED-BYTE",887),v12);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v11 = v12;
       }
       T1 = cl_ash(ecl_make_fixnum(-1), v11);
       T2 = ecl_boole(ECL_BOOLXOR,(T1),ecl_make_fixnum(-1));
       T3 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
       T4 = ecl_negate(ecl_make_fixnum(0));
       T5 = cl_ash(T3, T4);
       v10 = ecl_boole(ECL_BOOLAND,(T2),(T5));
      }
      {
       cl_object v11;
       T1 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
       T2 = ecl_negate(ecl_make_fixnum(2));
       v11 = cl_ash(T1, T2);
       {
        cl_object v12;
        v12 = v1bit_stream;
        (v12)->instance.slots[2]=v11;
       }
      }
      {
       cl_object v11;
       T1 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
       v11 = ecl_minus(T1,ecl_make_fixnum(2));
       {
        cl_object v12;
        v12 = v1bit_stream;
        (v12)->instance.slots[3]=v11;
       }
      }
      T0 = v10;
     }
L132:;
     v8length = ecl_plus(ecl_make_fixnum(3),T0);
     {
      cl_object v9i;
      v9i = ecl_make_fixnum(0);
      goto L175;
L174:;
      T0 = ecl_plus(v5index,v9i);
      {
       int v10;
       T1 = ecl_one_minus(v5index);
       v10 = (int)((v4)->vector.self.i32[ecl_fixnum(T1)]);
       (v4)->vector.self.i32[ecl_fixnum(T0)]= v10;
      }
      v9i = ecl_one_plus(v9i);
L175:;
      if (!(ecl_lower(v9i,v8length))) { goto L181; }
      goto L174;
L181:;
     }
     v5index = ecl_plus(v5index,v8length);
     goto L7;
    }
L129:;
    if (!((v7)==(ecl_make_fixnum(17)))) { goto L184; }
    {
     cl_object v9length;
L189:;
     T1 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
     if (ecl_lower(T1,ecl_make_fixnum(3))) { goto L191; }
     goto L190;
L191:;
     {
      cl_object v10;
      T1 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
      {
       uint8_t v11;
       T2 = ecl_function_dispatch(cl_env_copy,VV[51])(1, v1bit_stream) /*  BIT-STREAM-STREAM */;
       v11 = ecl_fixnum(cl_read_byte(1, T2));
       T2 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
       T3 = cl_ash(ecl_make_uint8_t(v11), T2);
       v10 = ecl_boole(ECL_BOOLIOR,(T1),(T3));
      }
      {
       cl_object v11;
       v11 = v1bit_stream;
       (v11)->instance.slots[2]=v10;
      }
     }
     {
      cl_object v10;
      T1 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
      v10 = ecl_plus(T1,ecl_make_fixnum(8));
      {
       cl_object v11;
       v11 = v1bit_stream;
       (v11)->instance.slots[3]=v10;
      }
     }
     goto L189;
L190:;
     T1 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
     if (!(ecl_number_equalp(T1,ecl_make_fixnum(3)))) { goto L201; }
     {
      cl_object v10;
      v10 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
      {
       cl_object v11;
       v11 = ecl_make_fixnum(0);
       {
        cl_object v12;
        v12 = v1bit_stream;
        (v12)->instance.slots[2]=v11;
       }
      }
      {
       cl_object v11;
       v11 = ecl_make_fixnum(0);
       {
        cl_object v12;
        v12 = v1bit_stream;
        (v12)->instance.slots[3]=v11;
       }
      }
      T0 = v10;
      goto L187;
     }
L201:;
     {
      cl_object v11;
      {
       cl_object v12;
       {
        cl_object v13;
        v13 = ecl_make_fixnum(3);
        {
         cl_object v14;
         v14 = ecl_make_fixnum(0);
         if (!(ECL_FIXNUMP(v13)||ECL_BIGNUMP(v13))) { goto L217; }
         v14 = v13;
         T1 = ecl_make_bool(ecl_greatereq(v14,ecl_make_fixnum(0)));
         goto L214;
L217:;
         T1 = ECL_NIL;
         goto L214;
        }
L214:;
        if (ecl_unlikely(!((T1)!=ECL_NIL)))
         FEwrong_type_argument(ECL_SYM("UNSIGNED-BYTE",887),v13);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v12 = v13;
       }
       T1 = cl_ash(ecl_make_fixnum(-1), v12);
       T2 = ecl_boole(ECL_BOOLXOR,(T1),ecl_make_fixnum(-1));
       T3 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
       T4 = ecl_negate(ecl_make_fixnum(0));
       T5 = cl_ash(T3, T4);
       v11 = ecl_boole(ECL_BOOLAND,(T2),(T5));
      }
      {
       cl_object v12;
       T1 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
       T2 = ecl_negate(ecl_make_fixnum(3));
       v12 = cl_ash(T1, T2);
       {
        cl_object v13;
        v13 = v1bit_stream;
        (v13)->instance.slots[2]=v12;
       }
      }
      {
       cl_object v12;
       T1 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
       v12 = ecl_minus(T1,ecl_make_fixnum(3));
       {
        cl_object v13;
        v13 = v1bit_stream;
        (v13)->instance.slots[3]=v12;
       }
      }
      T0 = v11;
     }
L187:;
     v9length = ecl_plus(ecl_make_fixnum(3),T0);
     {
      cl_object v10i;
      v10i = ecl_make_fixnum(0);
      goto L230;
L229:;
      T0 = ecl_plus(v5index,v10i);
      (v4)->array.self.fix[ecl_fixnum(T0)]= 0;
      v10i = ecl_one_plus(v10i);
L230:;
      if (!(ecl_lower(v10i,v9length))) { goto L235; }
      goto L229;
L235:;
     }
     v5index = ecl_plus(v5index,v9length);
     goto L7;
    }
L184:;
    if (!((v7)==(ecl_make_fixnum(18)))) { goto L238; }
    {
     cl_object v10length;
L243:;
     T1 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
     if (ecl_lower(T1,ecl_make_fixnum(7))) { goto L245; }
     goto L244;
L245:;
     {
      cl_object v11;
      T1 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
      {
       uint8_t v12;
       T2 = ecl_function_dispatch(cl_env_copy,VV[51])(1, v1bit_stream) /*  BIT-STREAM-STREAM */;
       v12 = ecl_fixnum(cl_read_byte(1, T2));
       T2 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
       T3 = cl_ash(ecl_make_uint8_t(v12), T2);
       v11 = ecl_boole(ECL_BOOLIOR,(T1),(T3));
      }
      {
       cl_object v12;
       v12 = v1bit_stream;
       (v12)->instance.slots[2]=v11;
      }
     }
     {
      cl_object v11;
      T1 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
      v11 = ecl_plus(T1,ecl_make_fixnum(8));
      {
       cl_object v12;
       v12 = v1bit_stream;
       (v12)->instance.slots[3]=v11;
      }
     }
     goto L243;
L244:;
     T1 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
     if (!(ecl_number_equalp(T1,ecl_make_fixnum(7)))) { goto L255; }
     {
      cl_object v11;
      v11 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
      {
       cl_object v12;
       v12 = ecl_make_fixnum(0);
       {
        cl_object v13;
        v13 = v1bit_stream;
        (v13)->instance.slots[2]=v12;
       }
      }
      {
       cl_object v12;
       v12 = ecl_make_fixnum(0);
       {
        cl_object v13;
        v13 = v1bit_stream;
        (v13)->instance.slots[3]=v12;
       }
      }
      T0 = v11;
      goto L241;
     }
L255:;
     {
      cl_object v12;
      {
       cl_object v13;
       {
        cl_object v14;
        v14 = ecl_make_fixnum(7);
        {
         cl_object v15;
         v15 = ecl_make_fixnum(0);
         if (!(ECL_FIXNUMP(v14)||ECL_BIGNUMP(v14))) { goto L271; }
         v15 = v14;
         T1 = ecl_make_bool(ecl_greatereq(v15,ecl_make_fixnum(0)));
         goto L268;
L271:;
         T1 = ECL_NIL;
         goto L268;
        }
L268:;
        if (ecl_unlikely(!((T1)!=ECL_NIL)))
         FEwrong_type_argument(ECL_SYM("UNSIGNED-BYTE",887),v14);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v13 = v14;
       }
       T1 = cl_ash(ecl_make_fixnum(-1), v13);
       T2 = ecl_boole(ECL_BOOLXOR,(T1),ecl_make_fixnum(-1));
       T3 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
       T4 = ecl_negate(ecl_make_fixnum(0));
       T5 = cl_ash(T3, T4);
       v12 = ecl_boole(ECL_BOOLAND,(T2),(T5));
      }
      {
       cl_object v13;
       T1 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
       T2 = ecl_negate(ecl_make_fixnum(7));
       v13 = cl_ash(T1, T2);
       {
        cl_object v14;
        v14 = v1bit_stream;
        (v14)->instance.slots[2]=v13;
       }
      }
      {
       cl_object v13;
       T1 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
       v13 = ecl_minus(T1,ecl_make_fixnum(7));
       {
        cl_object v14;
        v14 = v1bit_stream;
        (v14)->instance.slots[3]=v13;
       }
      }
      T0 = v12;
     }
L241:;
     v10length = ecl_plus(ecl_make_fixnum(11),T0);
     {
      cl_object v11i;
      v11i = ecl_make_fixnum(0);
      goto L284;
L283:;
      T0 = ecl_plus(v5index,v11i);
      (v4)->array.self.fix[ecl_fixnum(T0)]= 0;
      v11i = ecl_one_plus(v11i);
L284:;
      if (!(ecl_lower(v11i,v10length))) { goto L289; }
      goto L283;
L289:;
     }
     v5index = ecl_plus(v5index,v10length);
     goto L7;
    }
L238:;
    si_ecase_error(v6code, VV[76]);
   }
  }
L7:;
L5:;
  if (ecl_greatereq(v5index,v2count)) { goto L292; }
  goto L4;
L292:;
  value0 = v4;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for DECODE-HUFFMAN-TABLES                 */
/*      optimize speed 3, debug 1, space 1, safety 0                  */
static cl_object L28decode_huffman_tables(cl_object v1bit_stream)
{
 cl_object T0, T1, T2, T3, T4, T5;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 {
  cl_object v2hlit;
  cl_object v3hdist;
  cl_object v4hclen;
L3:;
  T0 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
  if (ecl_lower(T0,ecl_make_fixnum(5))) { goto L5; }
  goto L4;
L5:;
  {
   cl_object v5;
   T0 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
   {
    uint8_t v6;
    T1 = ecl_function_dispatch(cl_env_copy,VV[51])(1, v1bit_stream) /*  BIT-STREAM-STREAM */;
    v6 = ecl_fixnum(cl_read_byte(1, T1));
    T1 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
    T2 = cl_ash(ecl_make_uint8_t(v6), T1);
    v5 = ecl_boole(ECL_BOOLIOR,(T0),(T2));
   }
   {
    cl_object v6;
    v6 = v1bit_stream;
    (v6)->instance.slots[2]=v5;
   }
  }
  {
   cl_object v5;
   T0 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
   v5 = ecl_plus(T0,ecl_make_fixnum(8));
   {
    cl_object v6;
    v6 = v1bit_stream;
    (v6)->instance.slots[3]=v5;
   }
  }
  goto L3;
L4:;
  T0 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
  if (!(ecl_number_equalp(T0,ecl_make_fixnum(5)))) { goto L15; }
  {
   cl_object v5;
   v5 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
   {
    cl_object v6;
    v6 = ecl_make_fixnum(0);
    {
     cl_object v7;
     v7 = v1bit_stream;
     (v7)->instance.slots[2]=v6;
    }
   }
   {
    cl_object v6;
    v6 = ecl_make_fixnum(0);
    {
     cl_object v7;
     v7 = v1bit_stream;
     (v7)->instance.slots[3]=v6;
    }
   }
   v2hlit = v5;
   goto L1;
  }
L15:;
  {
   cl_object v6;
   {
    cl_object v7;
    {
     cl_object v8;
     v8 = ecl_make_fixnum(5);
     {
      cl_object v9;
      v9 = ecl_make_fixnum(0);
      if (!(ECL_FIXNUMP(v8)||ECL_BIGNUMP(v8))) { goto L31; }
      v9 = v8;
      T0 = ecl_make_bool(ecl_greatereq(v9,ecl_make_fixnum(0)));
      goto L28;
L31:;
      T0 = ECL_NIL;
      goto L28;
     }
L28:;
     if (ecl_unlikely(!((T0)!=ECL_NIL)))
         FEwrong_type_argument(ECL_SYM("UNSIGNED-BYTE",887),v8);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v7 = v8;
    }
    T0 = cl_ash(ecl_make_fixnum(-1), v7);
    T1 = ecl_boole(ECL_BOOLXOR,(T0),ecl_make_fixnum(-1));
    T2 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
    T3 = ecl_negate(ecl_make_fixnum(0));
    T4 = cl_ash(T2, T3);
    v6 = ecl_boole(ECL_BOOLAND,(T1),(T4));
   }
   {
    cl_object v7;
    T0 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
    T1 = ecl_negate(ecl_make_fixnum(5));
    v7 = cl_ash(T0, T1);
    {
     cl_object v8;
     v8 = v1bit_stream;
     (v8)->instance.slots[2]=v7;
    }
   }
   {
    cl_object v7;
    T0 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
    v7 = ecl_minus(T0,ecl_make_fixnum(5));
    {
     cl_object v8;
     v8 = v1bit_stream;
     (v8)->instance.slots[3]=v7;
    }
   }
   v2hlit = v6;
  }
L1:;
L43:;
  T0 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
  if (ecl_lower(T0,ecl_make_fixnum(5))) { goto L45; }
  goto L44;
L45:;
  {
   cl_object v5;
   T0 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
   {
    uint8_t v6;
    T1 = ecl_function_dispatch(cl_env_copy,VV[51])(1, v1bit_stream) /*  BIT-STREAM-STREAM */;
    v6 = ecl_fixnum(cl_read_byte(1, T1));
    T1 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
    T2 = cl_ash(ecl_make_uint8_t(v6), T1);
    v5 = ecl_boole(ECL_BOOLIOR,(T0),(T2));
   }
   {
    cl_object v6;
    v6 = v1bit_stream;
    (v6)->instance.slots[2]=v5;
   }
  }
  {
   cl_object v5;
   T0 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
   v5 = ecl_plus(T0,ecl_make_fixnum(8));
   {
    cl_object v6;
    v6 = v1bit_stream;
    (v6)->instance.slots[3]=v5;
   }
  }
  goto L43;
L44:;
  T0 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
  if (!(ecl_number_equalp(T0,ecl_make_fixnum(5)))) { goto L55; }
  {
   cl_object v5;
   v5 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
   {
    cl_object v6;
    v6 = ecl_make_fixnum(0);
    {
     cl_object v7;
     v7 = v1bit_stream;
     (v7)->instance.slots[2]=v6;
    }
   }
   {
    cl_object v6;
    v6 = ecl_make_fixnum(0);
    {
     cl_object v7;
     v7 = v1bit_stream;
     (v7)->instance.slots[3]=v6;
    }
   }
   v3hdist = v5;
   goto L41;
  }
L55:;
  {
   cl_object v6;
   {
    cl_object v7;
    {
     cl_object v8;
     v8 = ecl_make_fixnum(5);
     {
      cl_object v9;
      v9 = ecl_make_fixnum(0);
      if (!(ECL_FIXNUMP(v8)||ECL_BIGNUMP(v8))) { goto L71; }
      v9 = v8;
      T0 = ecl_make_bool(ecl_greatereq(v9,ecl_make_fixnum(0)));
      goto L68;
L71:;
      T0 = ECL_NIL;
      goto L68;
     }
L68:;
     if (ecl_unlikely(!((T0)!=ECL_NIL)))
         FEwrong_type_argument(ECL_SYM("UNSIGNED-BYTE",887),v8);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v7 = v8;
    }
    T0 = cl_ash(ecl_make_fixnum(-1), v7);
    T1 = ecl_boole(ECL_BOOLXOR,(T0),ecl_make_fixnum(-1));
    T2 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
    T3 = ecl_negate(ecl_make_fixnum(0));
    T4 = cl_ash(T2, T3);
    v6 = ecl_boole(ECL_BOOLAND,(T1),(T4));
   }
   {
    cl_object v7;
    T0 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
    T1 = ecl_negate(ecl_make_fixnum(5));
    v7 = cl_ash(T0, T1);
    {
     cl_object v8;
     v8 = v1bit_stream;
     (v8)->instance.slots[2]=v7;
    }
   }
   {
    cl_object v7;
    T0 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
    v7 = ecl_minus(T0,ecl_make_fixnum(5));
    {
     cl_object v8;
     v8 = v1bit_stream;
     (v8)->instance.slots[3]=v7;
    }
   }
   v3hdist = v6;
  }
L41:;
L83:;
  T0 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
  if (ecl_lower(T0,ecl_make_fixnum(4))) { goto L85; }
  goto L84;
L85:;
  {
   cl_object v5;
   T0 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
   {
    uint8_t v6;
    T1 = ecl_function_dispatch(cl_env_copy,VV[51])(1, v1bit_stream) /*  BIT-STREAM-STREAM */;
    v6 = ecl_fixnum(cl_read_byte(1, T1));
    T1 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
    T2 = cl_ash(ecl_make_uint8_t(v6), T1);
    v5 = ecl_boole(ECL_BOOLIOR,(T0),(T2));
   }
   {
    cl_object v6;
    v6 = v1bit_stream;
    (v6)->instance.slots[2]=v5;
   }
  }
  {
   cl_object v5;
   T0 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
   v5 = ecl_plus(T0,ecl_make_fixnum(8));
   {
    cl_object v6;
    v6 = v1bit_stream;
    (v6)->instance.slots[3]=v5;
   }
  }
  goto L83;
L84:;
  T0 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
  if (!(ecl_number_equalp(T0,ecl_make_fixnum(4)))) { goto L95; }
  {
   cl_object v5;
   v5 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
   {
    cl_object v6;
    v6 = ecl_make_fixnum(0);
    {
     cl_object v7;
     v7 = v1bit_stream;
     (v7)->instance.slots[2]=v6;
    }
   }
   {
    cl_object v6;
    v6 = ecl_make_fixnum(0);
    {
     cl_object v7;
     v7 = v1bit_stream;
     (v7)->instance.slots[3]=v6;
    }
   }
   v4hclen = v5;
   goto L81;
  }
L95:;
  {
   cl_object v6;
   {
    cl_object v7;
    {
     cl_object v8;
     v8 = ecl_make_fixnum(4);
     {
      cl_object v9;
      v9 = ecl_make_fixnum(0);
      if (!(ECL_FIXNUMP(v8)||ECL_BIGNUMP(v8))) { goto L111; }
      v9 = v8;
      T0 = ecl_make_bool(ecl_greatereq(v9,ecl_make_fixnum(0)));
      goto L108;
L111:;
      T0 = ECL_NIL;
      goto L108;
     }
L108:;
     if (ecl_unlikely(!((T0)!=ECL_NIL)))
         FEwrong_type_argument(ECL_SYM("UNSIGNED-BYTE",887),v8);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v7 = v8;
    }
    T0 = cl_ash(ecl_make_fixnum(-1), v7);
    T1 = ecl_boole(ECL_BOOLXOR,(T0),ecl_make_fixnum(-1));
    T2 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
    T3 = ecl_negate(ecl_make_fixnum(0));
    T4 = cl_ash(T2, T3);
    v6 = ecl_boole(ECL_BOOLAND,(T1),(T4));
   }
   {
    cl_object v7;
    T0 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
    T1 = ecl_negate(ecl_make_fixnum(4));
    v7 = cl_ash(T0, T1);
    {
     cl_object v8;
     v8 = v1bit_stream;
     (v8)->instance.slots[2]=v7;
    }
   }
   {
    cl_object v7;
    T0 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
    v7 = ecl_minus(T0,ecl_make_fixnum(4));
    {
     cl_object v8;
     v8 = v1bit_stream;
     (v8)->instance.slots[3]=v7;
    }
   }
   v4hclen = v6;
  }
L81:;
  {
   cl_object v5cl_decode_tree;
   {
    cl_object v6code_lengths;
    T0 = si_make_vector(ECL_SYM("BYTE8",1358), ecl_make_fixnum(19), ECL_NIL, ECL_NIL, ECL_NIL, ecl_make_fixnum(0));
    v6code_lengths = si_fill_array_with_elt(T0, ecl_make_fixnum(0), ecl_make_fixnum(0), ECL_NIL);
    {
     cl_object v7;
     cl_object v8index;
     v7 = ecl_plus(v4hclen,ecl_make_fixnum(4));
     v8index = ecl_make_fixnum(0);
     {
      cl_object v9code_length;
      v9code_length = ECL_NIL;
      {
       cl_object v10code_index;
       v10code_index = ECL_NIL;
L127:;
       if (!(ecl_greatereq(v8index,v7))) { goto L129; }
       goto L128;
L129:;
L134:;
       T0 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
       if (ecl_lower(T0,ecl_make_fixnum(3))) { goto L136; }
       goto L135;
L136:;
       {
        cl_object v11;
        T0 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
        {
         uint8_t v12;
         T1 = ecl_function_dispatch(cl_env_copy,VV[51])(1, v1bit_stream) /*  BIT-STREAM-STREAM */;
         v12 = ecl_fixnum(cl_read_byte(1, T1));
         T1 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
         T2 = cl_ash(ecl_make_uint8_t(v12), T1);
         v11 = ecl_boole(ECL_BOOLIOR,(T0),(T2));
        }
        {
         cl_object v12;
         v12 = v1bit_stream;
         (v12)->instance.slots[2]=v11;
        }
       }
       {
        cl_object v11;
        T0 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
        v11 = ecl_plus(T0,ecl_make_fixnum(8));
        {
         cl_object v12;
         v12 = v1bit_stream;
         (v12)->instance.slots[3]=v11;
        }
       }
       goto L134;
L135:;
       T0 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
       if (!(ecl_number_equalp(T0,ecl_make_fixnum(3)))) { goto L146; }
       {
        cl_object v11;
        v11 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
        {
         cl_object v12;
         v12 = ecl_make_fixnum(0);
         {
          cl_object v13;
          v13 = v1bit_stream;
          (v13)->instance.slots[2]=v12;
         }
        }
        {
         cl_object v12;
         v12 = ecl_make_fixnum(0);
         {
          cl_object v13;
          v13 = v1bit_stream;
          (v13)->instance.slots[3]=v12;
         }
        }
        v9code_length = v11;
        goto L132;
       }
L146:;
       {
        cl_object v12;
        {
         cl_object v13;
         {
          cl_object v14;
          v14 = ecl_make_fixnum(3);
          {
          cl_object v15;
          v15 = ecl_make_fixnum(0);
          if (!(ECL_FIXNUMP(v14)||ECL_BIGNUMP(v14))) { goto L162; }
          v15 = v14;
          T0 = ecl_make_bool(ecl_greatereq(v15,ecl_make_fixnum(0)));
          goto L159;
L162:;
          T0 = ECL_NIL;
          goto L159;
          }
L159:;
          if (ecl_unlikely(!((T0)!=ECL_NIL)))
         FEwrong_type_argument(ECL_SYM("UNSIGNED-BYTE",887),v14);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          v13 = v14;
         }
         T0 = cl_ash(ecl_make_fixnum(-1), v13);
         T1 = ecl_boole(ECL_BOOLXOR,(T0),ecl_make_fixnum(-1));
         T2 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
         T3 = ecl_negate(ecl_make_fixnum(0));
         T4 = cl_ash(T2, T3);
         v12 = ecl_boole(ECL_BOOLAND,(T1),(T4));
        }
        {
         cl_object v13;
         T0 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
         T1 = ecl_negate(ecl_make_fixnum(3));
         v13 = cl_ash(T0, T1);
         {
          cl_object v14;
          v14 = v1bit_stream;
          (v14)->instance.slots[2]=v13;
         }
        }
        {
         cl_object v13;
         T0 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
         v13 = ecl_minus(T0,ecl_make_fixnum(3));
         {
          cl_object v14;
          v14 = v1bit_stream;
          (v14)->instance.slots[3]=v13;
         }
        }
        v9code_length = v12;
       }
L132:;
       {
        cl_object v11;
        v11 = ECL_SYM_VAL(cl_env_copy,VV[74]);
        v10code_index = ecl_aref_unsafe(v11,ecl_fixnum(v8index));
       }
       (v6code_lengths)->vector.self.b8[ecl_fixnum(v10code_index)]= ecl_fixnum(v9code_length);
       v8index = ecl_one_plus(v8index);
       goto L127;
L128:;
       v5cl_decode_tree = L25make_huffman_decode_tree(v6code_lengths);
       goto L121;
      }
     }
    }
   }
L121:;
   {
    cl_object v6entries;
    T0 = ecl_plus(v2hlit,ecl_make_fixnum(257));
    T1 = ecl_plus(T0,v3hdist);
    T2 = ecl_plus(T1,ecl_make_fixnum(1));
    v6entries = L27decode_code_length_entries(v1bit_stream, T2, v5cl_decode_tree);
    T0 = ecl_plus(v2hlit,ecl_make_fixnum(257));
    T1 = cl_subseq(3, v6entries, ecl_make_fixnum(0), T0);
    T2 = L25make_huffman_decode_tree(T1);
    T3 = ecl_plus(v2hlit,ecl_make_fixnum(257));
    T4 = cl_subseq(2, v6entries, T3);
    T5 = L25make_huffman_decode_tree(T4);
    cl_env_copy->nvalues = 2;
    cl_env_copy->values[1] = T5;
    cl_env_copy->values[0] = T2;
    return cl_env_copy->values[0];
   }
  }
 }
}
/*      function definition for DECODE-LENGTH-ENTRY                   */
/*      optimize speed 3, debug 1, space 1, safety 0                  */
static cl_object L29decode_length_entry(cl_object v1symbol, cl_object v2bit_stream)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 if (!(ecl_lowereq(v1symbol,ecl_make_fixnum(264)))) { goto L1; }
 value0 = ecl_minus(v1symbol,ecl_make_fixnum(254));
 cl_env_copy->nvalues = 1;
 return value0;
L1:;
 if (!(ecl_lowereq(v1symbol,ecl_make_fixnum(268)))) { goto L3; }
 T0 = ecl_minus(v1symbol,ecl_make_fixnum(265));
 T1 = ecl_times(T0,ecl_make_fixnum(2));
 T2 = ecl_plus(ecl_make_fixnum(11),T1);
L7:;
 T4 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v2bit_stream) /*  BIT-STREAM-BIT-COUNT */;
 if (ecl_lower(T4,ecl_make_fixnum(1))) { goto L9; }
 goto L8;
L9:;
 {
  cl_object v3;
  T4 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v2bit_stream) /*  BIT-STREAM-BITS */;
  {
   uint8_t v4;
   T5 = ecl_function_dispatch(cl_env_copy,VV[51])(1, v2bit_stream) /*  BIT-STREAM-STREAM */;
   v4 = ecl_fixnum(cl_read_byte(1, T5));
   T5 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v2bit_stream) /*  BIT-STREAM-BIT-COUNT */;
   T6 = cl_ash(ecl_make_uint8_t(v4), T5);
   v3 = ecl_boole(ECL_BOOLIOR,(T4),(T6));
  }
  {
   cl_object v4;
   v4 = v2bit_stream;
   (v4)->instance.slots[2]=v3;
  }
 }
 {
  cl_object v3;
  T4 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v2bit_stream) /*  BIT-STREAM-BIT-COUNT */;
  v3 = ecl_plus(T4,ecl_make_fixnum(8));
  {
   cl_object v4;
   v4 = v2bit_stream;
   (v4)->instance.slots[3]=v3;
  }
 }
 goto L7;
L8:;
 T4 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v2bit_stream) /*  BIT-STREAM-BIT-COUNT */;
 if (!(ecl_number_equalp(T4,ecl_make_fixnum(1)))) { goto L19; }
 {
  cl_object v3;
  v3 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v2bit_stream) /*  BIT-STREAM-BITS */;
  {
   cl_object v4;
   v4 = ecl_make_fixnum(0);
   {
    cl_object v5;
    v5 = v2bit_stream;
    (v5)->instance.slots[2]=v4;
   }
  }
  {
   cl_object v4;
   v4 = ecl_make_fixnum(0);
   {
    cl_object v5;
    v5 = v2bit_stream;
    (v5)->instance.slots[3]=v4;
   }
  }
  T3 = v3;
  goto L5;
 }
L19:;
 {
  cl_object v4;
  {
   cl_object v5;
   {
    cl_object v6;
    v6 = ecl_make_fixnum(1);
    {
     cl_object v7;
     v7 = ecl_make_fixnum(0);
     if (!(ECL_FIXNUMP(v6)||ECL_BIGNUMP(v6))) { goto L35; }
     v7 = v6;
     T4 = ecl_make_bool(ecl_greatereq(v7,ecl_make_fixnum(0)));
     goto L32;
L35:;
     T4 = ECL_NIL;
     goto L32;
    }
L32:;
    if (ecl_unlikely(!((T4)!=ECL_NIL)))
         FEwrong_type_argument(ECL_SYM("UNSIGNED-BYTE",887),v6);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v5 = v6;
   }
   T4 = cl_ash(ecl_make_fixnum(-1), v5);
   T5 = ecl_boole(ECL_BOOLXOR,(T4),ecl_make_fixnum(-1));
   T6 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v2bit_stream) /*  BIT-STREAM-BITS */;
   T7 = ecl_negate(ecl_make_fixnum(0));
   T8 = cl_ash(T6, T7);
   v4 = ecl_boole(ECL_BOOLAND,(T5),(T8));
  }
  {
   cl_object v5;
   T4 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v2bit_stream) /*  BIT-STREAM-BITS */;
   T5 = ecl_negate(ecl_make_fixnum(1));
   v5 = cl_ash(T4, T5);
   {
    cl_object v6;
    v6 = v2bit_stream;
    (v6)->instance.slots[2]=v5;
   }
  }
  {
   cl_object v5;
   T4 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v2bit_stream) /*  BIT-STREAM-BIT-COUNT */;
   v5 = ecl_minus(T4,ecl_make_fixnum(1));
   {
    cl_object v6;
    v6 = v2bit_stream;
    (v6)->instance.slots[3]=v5;
   }
  }
  T3 = v4;
 }
L5:;
 value0 = ecl_plus(T2,T3);
 cl_env_copy->nvalues = 1;
 return value0;
L3:;
 if (!(ecl_lowereq(v1symbol,ecl_make_fixnum(272)))) { goto L45; }
 T0 = ecl_minus(v1symbol,ecl_make_fixnum(269));
 T1 = ecl_times(T0,ecl_make_fixnum(4));
 T2 = ecl_plus(ecl_make_fixnum(19),T1);
L49:;
 T4 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v2bit_stream) /*  BIT-STREAM-BIT-COUNT */;
 if (ecl_lower(T4,ecl_make_fixnum(2))) { goto L51; }
 goto L50;
L51:;
 {
  cl_object v3;
  T4 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v2bit_stream) /*  BIT-STREAM-BITS */;
  {
   uint8_t v4;
   T5 = ecl_function_dispatch(cl_env_copy,VV[51])(1, v2bit_stream) /*  BIT-STREAM-STREAM */;
   v4 = ecl_fixnum(cl_read_byte(1, T5));
   T5 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v2bit_stream) /*  BIT-STREAM-BIT-COUNT */;
   T6 = cl_ash(ecl_make_uint8_t(v4), T5);
   v3 = ecl_boole(ECL_BOOLIOR,(T4),(T6));
  }
  {
   cl_object v4;
   v4 = v2bit_stream;
   (v4)->instance.slots[2]=v3;
  }
 }
 {
  cl_object v3;
  T4 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v2bit_stream) /*  BIT-STREAM-BIT-COUNT */;
  v3 = ecl_plus(T4,ecl_make_fixnum(8));
  {
   cl_object v4;
   v4 = v2bit_stream;
   (v4)->instance.slots[3]=v3;
  }
 }
 goto L49;
L50:;
 T4 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v2bit_stream) /*  BIT-STREAM-BIT-COUNT */;
 if (!(ecl_number_equalp(T4,ecl_make_fixnum(2)))) { goto L61; }
 {
  cl_object v3;
  v3 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v2bit_stream) /*  BIT-STREAM-BITS */;
  {
   cl_object v4;
   v4 = ecl_make_fixnum(0);
   {
    cl_object v5;
    v5 = v2bit_stream;
    (v5)->instance.slots[2]=v4;
   }
  }
  {
   cl_object v4;
   v4 = ecl_make_fixnum(0);
   {
    cl_object v5;
    v5 = v2bit_stream;
    (v5)->instance.slots[3]=v4;
   }
  }
  T3 = v3;
  goto L47;
 }
L61:;
 {
  cl_object v4;
  {
   cl_object v5;
   {
    cl_object v6;
    v6 = ecl_make_fixnum(2);
    {
     cl_object v7;
     v7 = ecl_make_fixnum(0);
     if (!(ECL_FIXNUMP(v6)||ECL_BIGNUMP(v6))) { goto L77; }
     v7 = v6;
     T4 = ecl_make_bool(ecl_greatereq(v7,ecl_make_fixnum(0)));
     goto L74;
L77:;
     T4 = ECL_NIL;
     goto L74;
    }
L74:;
    if (ecl_unlikely(!((T4)!=ECL_NIL)))
         FEwrong_type_argument(ECL_SYM("UNSIGNED-BYTE",887),v6);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v5 = v6;
   }
   T4 = cl_ash(ecl_make_fixnum(-1), v5);
   T5 = ecl_boole(ECL_BOOLXOR,(T4),ecl_make_fixnum(-1));
   T6 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v2bit_stream) /*  BIT-STREAM-BITS */;
   T7 = ecl_negate(ecl_make_fixnum(0));
   T8 = cl_ash(T6, T7);
   v4 = ecl_boole(ECL_BOOLAND,(T5),(T8));
  }
  {
   cl_object v5;
   T4 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v2bit_stream) /*  BIT-STREAM-BITS */;
   T5 = ecl_negate(ecl_make_fixnum(2));
   v5 = cl_ash(T4, T5);
   {
    cl_object v6;
    v6 = v2bit_stream;
    (v6)->instance.slots[2]=v5;
   }
  }
  {
   cl_object v5;
   T4 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v2bit_stream) /*  BIT-STREAM-BIT-COUNT */;
   v5 = ecl_minus(T4,ecl_make_fixnum(2));
   {
    cl_object v6;
    v6 = v2bit_stream;
    (v6)->instance.slots[3]=v5;
   }
  }
  T3 = v4;
 }
L47:;
 value0 = ecl_plus(T2,T3);
 cl_env_copy->nvalues = 1;
 return value0;
L45:;
 if (!(ecl_lowereq(v1symbol,ecl_make_fixnum(276)))) { goto L87; }
 T0 = ecl_minus(v1symbol,ecl_make_fixnum(273));
 T1 = ecl_times(T0,ecl_make_fixnum(8));
 T2 = ecl_plus(ecl_make_fixnum(35),T1);
L91:;
 T4 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v2bit_stream) /*  BIT-STREAM-BIT-COUNT */;
 if (ecl_lower(T4,ecl_make_fixnum(3))) { goto L93; }
 goto L92;
L93:;
 {
  cl_object v3;
  T4 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v2bit_stream) /*  BIT-STREAM-BITS */;
  {
   uint8_t v4;
   T5 = ecl_function_dispatch(cl_env_copy,VV[51])(1, v2bit_stream) /*  BIT-STREAM-STREAM */;
   v4 = ecl_fixnum(cl_read_byte(1, T5));
   T5 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v2bit_stream) /*  BIT-STREAM-BIT-COUNT */;
   T6 = cl_ash(ecl_make_uint8_t(v4), T5);
   v3 = ecl_boole(ECL_BOOLIOR,(T4),(T6));
  }
  {
   cl_object v4;
   v4 = v2bit_stream;
   (v4)->instance.slots[2]=v3;
  }
 }
 {
  cl_object v3;
  T4 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v2bit_stream) /*  BIT-STREAM-BIT-COUNT */;
  v3 = ecl_plus(T4,ecl_make_fixnum(8));
  {
   cl_object v4;
   v4 = v2bit_stream;
   (v4)->instance.slots[3]=v3;
  }
 }
 goto L91;
L92:;
 T4 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v2bit_stream) /*  BIT-STREAM-BIT-COUNT */;
 if (!(ecl_number_equalp(T4,ecl_make_fixnum(3)))) { goto L103; }
 {
  cl_object v3;
  v3 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v2bit_stream) /*  BIT-STREAM-BITS */;
  {
   cl_object v4;
   v4 = ecl_make_fixnum(0);
   {
    cl_object v5;
    v5 = v2bit_stream;
    (v5)->instance.slots[2]=v4;
   }
  }
  {
   cl_object v4;
   v4 = ecl_make_fixnum(0);
   {
    cl_object v5;
    v5 = v2bit_stream;
    (v5)->instance.slots[3]=v4;
   }
  }
  T3 = v3;
  goto L89;
 }
L103:;
 {
  cl_object v4;
  {
   cl_object v5;
   {
    cl_object v6;
    v6 = ecl_make_fixnum(3);
    {
     cl_object v7;
     v7 = ecl_make_fixnum(0);
     if (!(ECL_FIXNUMP(v6)||ECL_BIGNUMP(v6))) { goto L119; }
     v7 = v6;
     T4 = ecl_make_bool(ecl_greatereq(v7,ecl_make_fixnum(0)));
     goto L116;
L119:;
     T4 = ECL_NIL;
     goto L116;
    }
L116:;
    if (ecl_unlikely(!((T4)!=ECL_NIL)))
         FEwrong_type_argument(ECL_SYM("UNSIGNED-BYTE",887),v6);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v5 = v6;
   }
   T4 = cl_ash(ecl_make_fixnum(-1), v5);
   T5 = ecl_boole(ECL_BOOLXOR,(T4),ecl_make_fixnum(-1));
   T6 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v2bit_stream) /*  BIT-STREAM-BITS */;
   T7 = ecl_negate(ecl_make_fixnum(0));
   T8 = cl_ash(T6, T7);
   v4 = ecl_boole(ECL_BOOLAND,(T5),(T8));
  }
  {
   cl_object v5;
   T4 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v2bit_stream) /*  BIT-STREAM-BITS */;
   T5 = ecl_negate(ecl_make_fixnum(3));
   v5 = cl_ash(T4, T5);
   {
    cl_object v6;
    v6 = v2bit_stream;
    (v6)->instance.slots[2]=v5;
   }
  }
  {
   cl_object v5;
   T4 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v2bit_stream) /*  BIT-STREAM-BIT-COUNT */;
   v5 = ecl_minus(T4,ecl_make_fixnum(3));
   {
    cl_object v6;
    v6 = v2bit_stream;
    (v6)->instance.slots[3]=v5;
   }
  }
  T3 = v4;
 }
L89:;
 value0 = ecl_plus(T2,T3);
 cl_env_copy->nvalues = 1;
 return value0;
L87:;
 if (!(ecl_lowereq(v1symbol,ecl_make_fixnum(280)))) { goto L129; }
 T0 = ecl_minus(v1symbol,ecl_make_fixnum(277));
 T1 = ecl_times(T0,ecl_make_fixnum(16));
 T2 = ecl_plus(ecl_make_fixnum(67),T1);
L133:;
 T4 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v2bit_stream) /*  BIT-STREAM-BIT-COUNT */;
 if (ecl_lower(T4,ecl_make_fixnum(4))) { goto L135; }
 goto L134;
L135:;
 {
  cl_object v3;
  T4 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v2bit_stream) /*  BIT-STREAM-BITS */;
  {
   uint8_t v4;
   T5 = ecl_function_dispatch(cl_env_copy,VV[51])(1, v2bit_stream) /*  BIT-STREAM-STREAM */;
   v4 = ecl_fixnum(cl_read_byte(1, T5));
   T5 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v2bit_stream) /*  BIT-STREAM-BIT-COUNT */;
   T6 = cl_ash(ecl_make_uint8_t(v4), T5);
   v3 = ecl_boole(ECL_BOOLIOR,(T4),(T6));
  }
  {
   cl_object v4;
   v4 = v2bit_stream;
   (v4)->instance.slots[2]=v3;
  }
 }
 {
  cl_object v3;
  T4 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v2bit_stream) /*  BIT-STREAM-BIT-COUNT */;
  v3 = ecl_plus(T4,ecl_make_fixnum(8));
  {
   cl_object v4;
   v4 = v2bit_stream;
   (v4)->instance.slots[3]=v3;
  }
 }
 goto L133;
L134:;
 T4 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v2bit_stream) /*  BIT-STREAM-BIT-COUNT */;
 if (!(ecl_number_equalp(T4,ecl_make_fixnum(4)))) { goto L145; }
 {
  cl_object v3;
  v3 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v2bit_stream) /*  BIT-STREAM-BITS */;
  {
   cl_object v4;
   v4 = ecl_make_fixnum(0);
   {
    cl_object v5;
    v5 = v2bit_stream;
    (v5)->instance.slots[2]=v4;
   }
  }
  {
   cl_object v4;
   v4 = ecl_make_fixnum(0);
   {
    cl_object v5;
    v5 = v2bit_stream;
    (v5)->instance.slots[3]=v4;
   }
  }
  T3 = v3;
  goto L131;
 }
L145:;
 {
  cl_object v4;
  {
   cl_object v5;
   {
    cl_object v6;
    v6 = ecl_make_fixnum(4);
    {
     cl_object v7;
     v7 = ecl_make_fixnum(0);
     if (!(ECL_FIXNUMP(v6)||ECL_BIGNUMP(v6))) { goto L161; }
     v7 = v6;
     T4 = ecl_make_bool(ecl_greatereq(v7,ecl_make_fixnum(0)));
     goto L158;
L161:;
     T4 = ECL_NIL;
     goto L158;
    }
L158:;
    if (ecl_unlikely(!((T4)!=ECL_NIL)))
         FEwrong_type_argument(ECL_SYM("UNSIGNED-BYTE",887),v6);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v5 = v6;
   }
   T4 = cl_ash(ecl_make_fixnum(-1), v5);
   T5 = ecl_boole(ECL_BOOLXOR,(T4),ecl_make_fixnum(-1));
   T6 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v2bit_stream) /*  BIT-STREAM-BITS */;
   T7 = ecl_negate(ecl_make_fixnum(0));
   T8 = cl_ash(T6, T7);
   v4 = ecl_boole(ECL_BOOLAND,(T5),(T8));
  }
  {
   cl_object v5;
   T4 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v2bit_stream) /*  BIT-STREAM-BITS */;
   T5 = ecl_negate(ecl_make_fixnum(4));
   v5 = cl_ash(T4, T5);
   {
    cl_object v6;
    v6 = v2bit_stream;
    (v6)->instance.slots[2]=v5;
   }
  }
  {
   cl_object v5;
   T4 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v2bit_stream) /*  BIT-STREAM-BIT-COUNT */;
   v5 = ecl_minus(T4,ecl_make_fixnum(4));
   {
    cl_object v6;
    v6 = v2bit_stream;
    (v6)->instance.slots[3]=v5;
   }
  }
  T3 = v4;
 }
L131:;
 value0 = ecl_plus(T2,T3);
 cl_env_copy->nvalues = 1;
 return value0;
L129:;
 if (!(ecl_lowereq(v1symbol,ecl_make_fixnum(284)))) { goto L171; }
 T0 = ecl_minus(v1symbol,ecl_make_fixnum(281));
 T1 = ecl_times(T0,ecl_make_fixnum(32));
 T2 = ecl_plus(ecl_make_fixnum(131),T1);
L175:;
 T4 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v2bit_stream) /*  BIT-STREAM-BIT-COUNT */;
 if (ecl_lower(T4,ecl_make_fixnum(5))) { goto L177; }
 goto L176;
L177:;
 {
  cl_object v3;
  T4 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v2bit_stream) /*  BIT-STREAM-BITS */;
  {
   uint8_t v4;
   T5 = ecl_function_dispatch(cl_env_copy,VV[51])(1, v2bit_stream) /*  BIT-STREAM-STREAM */;
   v4 = ecl_fixnum(cl_read_byte(1, T5));
   T5 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v2bit_stream) /*  BIT-STREAM-BIT-COUNT */;
   T6 = cl_ash(ecl_make_uint8_t(v4), T5);
   v3 = ecl_boole(ECL_BOOLIOR,(T4),(T6));
  }
  {
   cl_object v4;
   v4 = v2bit_stream;
   (v4)->instance.slots[2]=v3;
  }
 }
 {
  cl_object v3;
  T4 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v2bit_stream) /*  BIT-STREAM-BIT-COUNT */;
  v3 = ecl_plus(T4,ecl_make_fixnum(8));
  {
   cl_object v4;
   v4 = v2bit_stream;
   (v4)->instance.slots[3]=v3;
  }
 }
 goto L175;
L176:;
 T4 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v2bit_stream) /*  BIT-STREAM-BIT-COUNT */;
 if (!(ecl_number_equalp(T4,ecl_make_fixnum(5)))) { goto L187; }
 {
  cl_object v3;
  v3 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v2bit_stream) /*  BIT-STREAM-BITS */;
  {
   cl_object v4;
   v4 = ecl_make_fixnum(0);
   {
    cl_object v5;
    v5 = v2bit_stream;
    (v5)->instance.slots[2]=v4;
   }
  }
  {
   cl_object v4;
   v4 = ecl_make_fixnum(0);
   {
    cl_object v5;
    v5 = v2bit_stream;
    (v5)->instance.slots[3]=v4;
   }
  }
  T3 = v3;
  goto L173;
 }
L187:;
 {
  cl_object v4;
  {
   cl_object v5;
   {
    cl_object v6;
    v6 = ecl_make_fixnum(5);
    {
     cl_object v7;
     v7 = ecl_make_fixnum(0);
     if (!(ECL_FIXNUMP(v6)||ECL_BIGNUMP(v6))) { goto L203; }
     v7 = v6;
     T4 = ecl_make_bool(ecl_greatereq(v7,ecl_make_fixnum(0)));
     goto L200;
L203:;
     T4 = ECL_NIL;
     goto L200;
    }
L200:;
    if (ecl_unlikely(!((T4)!=ECL_NIL)))
         FEwrong_type_argument(ECL_SYM("UNSIGNED-BYTE",887),v6);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v5 = v6;
   }
   T4 = cl_ash(ecl_make_fixnum(-1), v5);
   T5 = ecl_boole(ECL_BOOLXOR,(T4),ecl_make_fixnum(-1));
   T6 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v2bit_stream) /*  BIT-STREAM-BITS */;
   T7 = ecl_negate(ecl_make_fixnum(0));
   T8 = cl_ash(T6, T7);
   v4 = ecl_boole(ECL_BOOLAND,(T5),(T8));
  }
  {
   cl_object v5;
   T4 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v2bit_stream) /*  BIT-STREAM-BITS */;
   T5 = ecl_negate(ecl_make_fixnum(5));
   v5 = cl_ash(T4, T5);
   {
    cl_object v6;
    v6 = v2bit_stream;
    (v6)->instance.slots[2]=v5;
   }
  }
  {
   cl_object v5;
   T4 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v2bit_stream) /*  BIT-STREAM-BIT-COUNT */;
   v5 = ecl_minus(T4,ecl_make_fixnum(5));
   {
    cl_object v6;
    v6 = v2bit_stream;
    (v6)->instance.slots[3]=v5;
   }
  }
  T3 = v4;
 }
L173:;
 value0 = ecl_plus(T2,T3);
 cl_env_copy->nvalues = 1;
 return value0;
L171:;
 if (!(ecl_number_equalp(v1symbol,ecl_make_fixnum(285)))) { goto L213; }
 value0 = ecl_make_fixnum(258);
 cl_env_copy->nvalues = 1;
 return value0;
L213:;
 T0 = ecl_list1(v1symbol);
 value0 = cl_error(5, VV[1], ECL_SYM("FORMAT-CONTROL",1263), VV[79], ECL_SYM("FORMAT-ARGUMENTS",1262), T0);
 return value0;
}
/*      function definition for DECODE-DISTANCE-ENTRY                 */
/*      optimize speed 3, debug 1, space 1, safety 0                  */
static cl_object L30decode_distance_entry(cl_object v1symbol, cl_object v2bit_stream)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 if (!(ecl_lowereq(v1symbol,ecl_make_fixnum(3)))) { goto L1; }
 value0 = ecl_one_plus(v1symbol);
 cl_env_copy->nvalues = 1;
 return value0;
L1:;
 {
  cl_object v4;                                   /*  ORDER           */
  cl_object v5;                                   /*  OFFSET          */
  value0 = ecl_truncate2(v1symbol,ecl_make_fixnum(2));
  {
   v4 = value0;
   v5 = cl_env_copy->values[1];
  }
  {
   cl_object v6extra_bits;
   cl_object v7factor;
   v6extra_bits = ecl_one_minus(v4);
   v7factor = cl_ash(ecl_make_fixnum(1), v6extra_bits);
   T0 = cl_ash(ecl_make_fixnum(1), v4);
   T1 = ecl_one_plus(T0);
   T2 = ecl_times(v5,v7factor);
   T3 = ecl_plus(T1,T2);
L8:;
   T5 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v2bit_stream) /*  BIT-STREAM-BIT-COUNT */;
   if (ecl_lower(T5,v6extra_bits)) { goto L10; }
   goto L9;
L10:;
   {
    cl_object v8;
    T5 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v2bit_stream) /*  BIT-STREAM-BITS */;
    {
     uint8_t v9;
     T6 = ecl_function_dispatch(cl_env_copy,VV[51])(1, v2bit_stream) /*  BIT-STREAM-STREAM */;
     v9 = ecl_fixnum(cl_read_byte(1, T6));
     T6 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v2bit_stream) /*  BIT-STREAM-BIT-COUNT */;
     T7 = cl_ash(ecl_make_uint8_t(v9), T6);
     v8 = ecl_boole(ECL_BOOLIOR,(T5),(T7));
    }
    {
     cl_object v9;
     v9 = v2bit_stream;
     (v9)->instance.slots[2]=v8;
    }
   }
   {
    cl_object v8;
    T5 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v2bit_stream) /*  BIT-STREAM-BIT-COUNT */;
    v8 = ecl_plus(T5,ecl_make_fixnum(8));
    {
     cl_object v9;
     v9 = v2bit_stream;
     (v9)->instance.slots[3]=v8;
    }
   }
   goto L8;
L9:;
   T5 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v2bit_stream) /*  BIT-STREAM-BIT-COUNT */;
   if (!(ecl_number_equalp(T5,v6extra_bits))) { goto L20; }
   {
    cl_object v8;
    v8 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v2bit_stream) /*  BIT-STREAM-BITS */;
    {
     cl_object v9;
     v9 = ecl_make_fixnum(0);
     {
      cl_object v10;
      v10 = v2bit_stream;
      (v10)->instance.slots[2]=v9;
     }
    }
    {
     cl_object v9;
     v9 = ecl_make_fixnum(0);
     {
      cl_object v10;
      v10 = v2bit_stream;
      (v10)->instance.slots[3]=v9;
     }
    }
    T4 = v8;
    goto L6;
   }
L20:;
   {
    cl_object v9;
    {
     cl_object v10;
     {
      cl_object v11;
      v11 = v6extra_bits;
      {
       cl_object v12;
       v12 = ecl_make_fixnum(0);
       if (!(ECL_FIXNUMP(v11)||ECL_BIGNUMP(v11))) { goto L36; }
       v12 = v11;
       T5 = ecl_make_bool(ecl_greatereq(v12,ecl_make_fixnum(0)));
       goto L33;
L36:;
       T5 = ECL_NIL;
       goto L33;
      }
L33:;
      if (ecl_unlikely(!((T5)!=ECL_NIL)))
         FEwrong_type_argument(ECL_SYM("UNSIGNED-BYTE",887),v11);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v10 = v11;
     }
     T5 = cl_ash(ecl_make_fixnum(-1), v10);
     T6 = ecl_boole(ECL_BOOLXOR,(T5),ecl_make_fixnum(-1));
     T7 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v2bit_stream) /*  BIT-STREAM-BITS */;
     T8 = ecl_negate(ecl_make_fixnum(0));
     T9 = cl_ash(T7, T8);
     v9 = ecl_boole(ECL_BOOLAND,(T6),(T9));
    }
    {
     cl_object v10;
     T5 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v2bit_stream) /*  BIT-STREAM-BITS */;
     T6 = ecl_negate(v6extra_bits);
     v10 = cl_ash(T5, T6);
     {
      cl_object v11;
      v11 = v2bit_stream;
      (v11)->instance.slots[2]=v10;
     }
    }
    {
     cl_object v10;
     T5 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v2bit_stream) /*  BIT-STREAM-BIT-COUNT */;
     v10 = ecl_minus(T5,v6extra_bits);
     {
      cl_object v11;
      v11 = v2bit_stream;
      (v11)->instance.slots[3]=v10;
     }
    }
    T4 = v9;
   }
L6:;
   value0 = ecl_plus(T3,T4);
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for DECODE-HUFFMAN-BLOCK                  */
/*      optimize speed 3, debug 1, space 1, safety 0                  */
static cl_object L31decode_huffman_block(cl_object v1bit_stream, cl_object v2window_stream, cl_object v3lit_decode_tree, cl_object v4dist_decode_tree)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 {
  cl_object v5symbol;
  {
   cl_object v6length_count;
   v6length_count = ecl_function_dispatch(cl_env_copy,VV[65])(1, v3lit_decode_tree) /*  DECODE-TREE-LENGTH-COUNT */;
   {
    cl_object v7code_symbols;
    v7code_symbols = ecl_function_dispatch(cl_env_copy,VV[64])(1, v3lit_decode_tree) /*  DECODE-TREE-CODE-SYMBOLS */;
    {
     cl_fixnum v8code;
     v8code = 0;
     {
      cl_fixnum v9index;
      v9index = 0;
      {
       cl_fixnum v10first;
       v10first = 0;
       {
        cl_fixnum v11;
        cl_fixnum v12length;
        v11 = (v6length_count)->vector.fillp;
        v12length = 1;
        {
         cl_object v13count;
         v13count = ECL_NIL;
         {
          cl_object v14;
          v14 = ECL_NIL;
L16:;
          T0 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
          if (ecl_lower(T0,ecl_make_fixnum(1))) { goto L18; }
          goto L17;
L18:;
          {
          cl_object v15;
          T0 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
          {
          uint8_t v16;
          T1 = ecl_function_dispatch(cl_env_copy,VV[51])(1, v1bit_stream) /*  BIT-STREAM-STREAM */;
          v16 = ecl_fixnum(cl_read_byte(1, T1));
          T1 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
          T2 = cl_ash(ecl_make_uint8_t(v16), T1);
          v15 = ecl_boole(ECL_BOOLIOR,(T0),(T2));
          }
          {
          cl_object v16;
          v16 = v1bit_stream;
          (v16)->instance.slots[2]=v15;
          }
          }
          {
          cl_object v15;
          T0 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
          v15 = ecl_plus(T0,ecl_make_fixnum(8));
          {
          cl_object v16;
          v16 = v1bit_stream;
          (v16)->instance.slots[3]=v15;
          }
          }
          goto L16;
L17:;
          T0 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
          if (!(ecl_number_equalp(T0,ecl_make_fixnum(1)))) { goto L28; }
          {
          cl_object v15;
          v15 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
          {
          cl_object v16;
          v16 = ecl_make_fixnum(0);
          {
          cl_object v17;
          v17 = v1bit_stream;
          (v17)->instance.slots[2]=v16;
          }
          }
          {
          cl_object v16;
          v16 = ecl_make_fixnum(0);
          {
          cl_object v17;
          v17 = v1bit_stream;
          (v17)->instance.slots[3]=v16;
          }
          }
          v8code = ecl_fixnum(v15);
          goto L14;
          }
L28:;
          {
          cl_object v16;
          {
          cl_object v17;
          {
          cl_object v18;
          v18 = ecl_make_fixnum(1);
          {
          cl_object v19;
          v19 = ecl_make_fixnum(0);
          if (!(ECL_FIXNUMP(v18)||ECL_BIGNUMP(v18))) { goto L44; }
          v19 = v18;
          T0 = ecl_make_bool(ecl_greatereq(v19,ecl_make_fixnum(0)));
          goto L41;
L44:;
          T0 = ECL_NIL;
          goto L41;
          }
L41:;
          if (ecl_unlikely(!((T0)!=ECL_NIL)))
         FEwrong_type_argument(ECL_SYM("UNSIGNED-BYTE",887),v18);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          v17 = v18;
          }
          T0 = cl_ash(ecl_make_fixnum(-1), v17);
          T1 = ecl_boole(ECL_BOOLXOR,(T0),ecl_make_fixnum(-1));
          T2 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
          T3 = ecl_negate(ecl_make_fixnum(0));
          T4 = cl_ash(T2, T3);
          v16 = ecl_boole(ECL_BOOLAND,(T1),(T4));
          }
          {
          cl_object v17;
          T0 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
          T1 = ecl_negate(ecl_make_fixnum(1));
          v17 = cl_ash(T0, T1);
          {
          cl_object v18;
          v18 = v1bit_stream;
          (v18)->instance.slots[2]=v17;
          }
          }
          {
          cl_object v17;
          T0 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
          v17 = ecl_minus(T0,ecl_make_fixnum(1));
          {
          cl_object v18;
          v18 = v1bit_stream;
          (v18)->instance.slots[3]=v17;
          }
          }
          v8code = ecl_fixnum(v16);
          }
L14:;
          v9index = 0;
          v10first = 0;
L11:;
          if (!((v12length)>=(v11))) { goto L58; }
          goto L12;
L58:;
          v13count = ecl_make_int32_t((v6length_count)->vector.self.i32[v12length]);
          T0 = ecl_plus(ecl_make_fixnum(v10first),v13count);
          if (!((v8code)<(ecl_fixnum(T0)))) { goto L65; }
          T0 = ecl_minus(ecl_make_fixnum(v8code),ecl_make_fixnum(v10first));
          T1 = ecl_plus(ecl_make_fixnum(v9index),T0);
          v14 = ecl_make_int32_t((v7code_symbols)->vector.self.i32[ecl_fixnum(T1)]);
          goto L64;
L65:;
          v14 = ECL_NIL;
L64:;
          if (Null(v14)) { goto L62; }
          v5symbol = v14;
          goto L1;
L62:;
          T0 = ecl_times(ecl_make_fixnum(v8code),ecl_make_fixnum(2));
L71:;
          T2 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
          if (ecl_lower(T2,ecl_make_fixnum(1))) { goto L73; }
          goto L72;
L73:;
          {
          cl_object v15;
          T2 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
          {
          uint8_t v16;
          T3 = ecl_function_dispatch(cl_env_copy,VV[51])(1, v1bit_stream) /*  BIT-STREAM-STREAM */;
          v16 = ecl_fixnum(cl_read_byte(1, T3));
          T3 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
          T4 = cl_ash(ecl_make_uint8_t(v16), T3);
          v15 = ecl_boole(ECL_BOOLIOR,(T2),(T4));
          }
          {
          cl_object v16;
          v16 = v1bit_stream;
          (v16)->instance.slots[2]=v15;
          }
          }
          {
          cl_object v15;
          T2 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
          v15 = ecl_plus(T2,ecl_make_fixnum(8));
          {
          cl_object v16;
          v16 = v1bit_stream;
          (v16)->instance.slots[3]=v15;
          }
          }
          goto L71;
L72:;
          T2 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
          if (!(ecl_number_equalp(T2,ecl_make_fixnum(1)))) { goto L83; }
          {
          cl_object v15;
          v15 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
          {
          cl_object v16;
          v16 = ecl_make_fixnum(0);
          {
          cl_object v17;
          v17 = v1bit_stream;
          (v17)->instance.slots[2]=v16;
          }
          }
          {
          cl_object v16;
          v16 = ecl_make_fixnum(0);
          {
          cl_object v17;
          v17 = v1bit_stream;
          (v17)->instance.slots[3]=v16;
          }
          }
          T1 = v15;
          goto L69;
          }
L83:;
          {
          cl_object v16;
          {
          cl_object v17;
          {
          cl_object v18;
          v18 = ecl_make_fixnum(1);
          {
          cl_object v19;
          v19 = ecl_make_fixnum(0);
          if (!(ECL_FIXNUMP(v18)||ECL_BIGNUMP(v18))) { goto L99; }
          v19 = v18;
          T2 = ecl_make_bool(ecl_greatereq(v19,ecl_make_fixnum(0)));
          goto L96;
L99:;
          T2 = ECL_NIL;
          goto L96;
          }
L96:;
          if (ecl_unlikely(!((T2)!=ECL_NIL)))
         FEwrong_type_argument(ECL_SYM("UNSIGNED-BYTE",887),v18);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          v17 = v18;
          }
          T2 = cl_ash(ecl_make_fixnum(-1), v17);
          T3 = ecl_boole(ECL_BOOLXOR,(T2),ecl_make_fixnum(-1));
          T4 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
          T5 = ecl_negate(ecl_make_fixnum(0));
          T6 = cl_ash(T4, T5);
          v16 = ecl_boole(ECL_BOOLAND,(T3),(T6));
          }
          {
          cl_object v17;
          T2 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
          T3 = ecl_negate(ecl_make_fixnum(1));
          v17 = cl_ash(T2, T3);
          {
          cl_object v18;
          v18 = v1bit_stream;
          (v18)->instance.slots[2]=v17;
          }
          }
          {
          cl_object v17;
          T2 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
          v17 = ecl_minus(T2,ecl_make_fixnum(1));
          {
          cl_object v18;
          v18 = v1bit_stream;
          (v18)->instance.slots[3]=v17;
          }
          }
          T1 = v16;
          }
L69:;
          v8code = ecl_fixnum(ecl_plus(T0,T1));
          v9index = ecl_fixnum(ecl_plus(ecl_make_fixnum(v9index),v13count));
          T0 = ecl_plus(ecl_make_fixnum(v10first),v13count);
          v10first = ecl_fixnum(ecl_times(T0,ecl_make_fixnum(2)));
          v12length = (v12length)+1;
          goto L11;
L12:;
          T0 = ecl_list1(ecl_make_fixnum(v8code));
          cl_error(5, VV[1], ECL_SYM("FORMAT-CONTROL",1263), VV[70], ECL_SYM("FORMAT-ARGUMENTS",1262), T0);
          v5symbol = ECL_NIL;
         }
        }
       }
      }
     }
    }
   }
  }
L1:;
  goto L119;
L118:;
  if (!(ecl_lowereq(v5symbol,ecl_make_fixnum(255)))) { goto L122; }
  {
   cl_fixnum v6end;
   v6end = ecl_fixnum(ecl_function_dispatch(cl_env_copy,VV[30])(1, v2window_stream) /*  SLIDING-WINDOW-STREAM-BUFFER-END */);
   if ((v6end)<(32768)) { goto L125; }
   T0 = ecl_function_dispatch(cl_env_copy,VV[31])(1, v2window_stream) /*  SLIDING-WINDOW-STREAM-BUFFER */;
   T1 = ecl_function_dispatch(cl_env_copy,VV[32])(1, v2window_stream) /*  SLIDING-WINDOW-STREAM-STREAM */;
   cl_write_sequence(2, T0, T1);
   {
    cl_object v7;
    v7 = ecl_function_dispatch(cl_env_copy,VV[29])(1, v2window_stream) /*  SLIDING-WINDOW-STREAM-CHECKSUM */;
    if (!(ecl_eql(v7,VV[33]))) { goto L130; }
    {
     cl_object v8;
     T0 = ecl_function_dispatch(cl_env_copy,VV[27])(1, v2window_stream) /*  SLIDING-WINDOW-STREAM-CHECKSUM-VALUE */;
     T1 = ecl_function_dispatch(cl_env_copy,VV[31])(1, v2window_stream) /*  SLIDING-WINDOW-STREAM-BUFFER */;
     v8 = L7update_adler32_checksum(T0, T1, ecl_make_fixnum(32768));
     {
      cl_object v9;
      v9 = v2window_stream;
      (v9)->instance.slots[4]=v8;
      goto L128;
     }
    }
L130:;
    if (!(ecl_eql(v7,VV[34]))) { goto L128; }
    {
     cl_object v10;
     T0 = ecl_function_dispatch(cl_env_copy,VV[27])(1, v2window_stream) /*  SLIDING-WINDOW-STREAM-CHECKSUM-VALUE */;
     T1 = ecl_function_dispatch(cl_env_copy,VV[31])(1, v2window_stream) /*  SLIDING-WINDOW-STREAM-BUFFER */;
     v10 = L9update_crc32_checksum(T0, T1, ecl_make_fixnum(32768));
     {
      cl_object v11;
      v11 = v2window_stream;
      (v11)->instance.slots[4]=v10;
     }
    }
   }
L128:;
   v6end = 0;
L125:;
   {
    cl_object v7;
    v7 = ecl_function_dispatch(cl_env_copy,VV[31])(1, v2window_stream) /*  SLIDING-WINDOW-STREAM-BUFFER */;
    ecl_aset_unsafe(v7,v6end,v5symbol);
   }
   {
    cl_object v7;
    v7 = ecl_make_integer((v6end)+1);
    {
     cl_object v8;
     v8 = v2window_stream;
     (v8)->instance.slots[2]=v7;
     goto L121;
    }
   }
  }
L122:;
  {
   cl_object v9;
   cl_object v10;
   if (!(ecl_lowereq(v5symbol,ecl_make_fixnum(264)))) { goto L143; }
   v9 = ecl_minus(v5symbol,ecl_make_fixnum(254));
   goto L142;
L143:;
   if (!(ecl_lowereq(v5symbol,ecl_make_fixnum(268)))) { goto L145; }
   T0 = ecl_minus(v5symbol,ecl_make_fixnum(265));
   T1 = ecl_times(T0,ecl_make_fixnum(2));
   T2 = ecl_plus(ecl_make_fixnum(11),T1);
L149:;
   T4 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
   if (ecl_lower(T4,ecl_make_fixnum(1))) { goto L151; }
   goto L150;
L151:;
   {
    cl_object v11;
    T4 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
    {
     uint8_t v12;
     T5 = ecl_function_dispatch(cl_env_copy,VV[51])(1, v1bit_stream) /*  BIT-STREAM-STREAM */;
     v12 = ecl_fixnum(cl_read_byte(1, T5));
     T5 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
     T6 = cl_ash(ecl_make_uint8_t(v12), T5);
     v11 = ecl_boole(ECL_BOOLIOR,(T4),(T6));
    }
    {
     cl_object v12;
     v12 = v1bit_stream;
     (v12)->instance.slots[2]=v11;
    }
   }
   {
    cl_object v11;
    T4 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
    v11 = ecl_plus(T4,ecl_make_fixnum(8));
    {
     cl_object v12;
     v12 = v1bit_stream;
     (v12)->instance.slots[3]=v11;
    }
   }
   goto L149;
L150:;
   T4 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
   if (!(ecl_number_equalp(T4,ecl_make_fixnum(1)))) { goto L161; }
   {
    cl_object v11;
    v11 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
    {
     cl_object v12;
     v12 = ecl_make_fixnum(0);
     {
      cl_object v13;
      v13 = v1bit_stream;
      (v13)->instance.slots[2]=v12;
     }
    }
    {
     cl_object v12;
     v12 = ecl_make_fixnum(0);
     {
      cl_object v13;
      v13 = v1bit_stream;
      (v13)->instance.slots[3]=v12;
     }
    }
    T3 = v11;
    goto L147;
   }
L161:;
   {
    cl_object v12;
    {
     cl_object v13;
     {
      cl_object v14;
      v14 = ecl_make_fixnum(1);
      {
       cl_object v15;
       v15 = ecl_make_fixnum(0);
       if (!(ECL_FIXNUMP(v14)||ECL_BIGNUMP(v14))) { goto L177; }
       v15 = v14;
       T4 = ecl_make_bool(ecl_greatereq(v15,ecl_make_fixnum(0)));
       goto L174;
L177:;
       T4 = ECL_NIL;
       goto L174;
      }
L174:;
      if (ecl_unlikely(!((T4)!=ECL_NIL)))
         FEwrong_type_argument(ECL_SYM("UNSIGNED-BYTE",887),v14);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v13 = v14;
     }
     T4 = cl_ash(ecl_make_fixnum(-1), v13);
     T5 = ecl_boole(ECL_BOOLXOR,(T4),ecl_make_fixnum(-1));
     T6 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
     T7 = ecl_negate(ecl_make_fixnum(0));
     T8 = cl_ash(T6, T7);
     v12 = ecl_boole(ECL_BOOLAND,(T5),(T8));
    }
    {
     cl_object v13;
     T4 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
     T5 = ecl_negate(ecl_make_fixnum(1));
     v13 = cl_ash(T4, T5);
     {
      cl_object v14;
      v14 = v1bit_stream;
      (v14)->instance.slots[2]=v13;
     }
    }
    {
     cl_object v13;
     T4 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
     v13 = ecl_minus(T4,ecl_make_fixnum(1));
     {
      cl_object v14;
      v14 = v1bit_stream;
      (v14)->instance.slots[3]=v13;
     }
    }
    T3 = v12;
   }
L147:;
   v9 = ecl_plus(T2,T3);
   goto L142;
L145:;
   if (!(ecl_lowereq(v5symbol,ecl_make_fixnum(272)))) { goto L187; }
   T0 = ecl_minus(v5symbol,ecl_make_fixnum(269));
   T1 = ecl_times(T0,ecl_make_fixnum(4));
   T2 = ecl_plus(ecl_make_fixnum(19),T1);
L191:;
   T4 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
   if (ecl_lower(T4,ecl_make_fixnum(2))) { goto L193; }
   goto L192;
L193:;
   {
    cl_object v11;
    T4 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
    {
     uint8_t v12;
     T5 = ecl_function_dispatch(cl_env_copy,VV[51])(1, v1bit_stream) /*  BIT-STREAM-STREAM */;
     v12 = ecl_fixnum(cl_read_byte(1, T5));
     T5 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
     T6 = cl_ash(ecl_make_uint8_t(v12), T5);
     v11 = ecl_boole(ECL_BOOLIOR,(T4),(T6));
    }
    {
     cl_object v12;
     v12 = v1bit_stream;
     (v12)->instance.slots[2]=v11;
    }
   }
   {
    cl_object v11;
    T4 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
    v11 = ecl_plus(T4,ecl_make_fixnum(8));
    {
     cl_object v12;
     v12 = v1bit_stream;
     (v12)->instance.slots[3]=v11;
    }
   }
   goto L191;
L192:;
   T4 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
   if (!(ecl_number_equalp(T4,ecl_make_fixnum(2)))) { goto L203; }
   {
    cl_object v11;
    v11 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
    {
     cl_object v12;
     v12 = ecl_make_fixnum(0);
     {
      cl_object v13;
      v13 = v1bit_stream;
      (v13)->instance.slots[2]=v12;
     }
    }
    {
     cl_object v12;
     v12 = ecl_make_fixnum(0);
     {
      cl_object v13;
      v13 = v1bit_stream;
      (v13)->instance.slots[3]=v12;
     }
    }
    T3 = v11;
    goto L189;
   }
L203:;
   {
    cl_object v12;
    {
     cl_object v13;
     {
      cl_object v14;
      v14 = ecl_make_fixnum(2);
      {
       cl_object v15;
       v15 = ecl_make_fixnum(0);
       if (!(ECL_FIXNUMP(v14)||ECL_BIGNUMP(v14))) { goto L219; }
       v15 = v14;
       T4 = ecl_make_bool(ecl_greatereq(v15,ecl_make_fixnum(0)));
       goto L216;
L219:;
       T4 = ECL_NIL;
       goto L216;
      }
L216:;
      if (ecl_unlikely(!((T4)!=ECL_NIL)))
         FEwrong_type_argument(ECL_SYM("UNSIGNED-BYTE",887),v14);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v13 = v14;
     }
     T4 = cl_ash(ecl_make_fixnum(-1), v13);
     T5 = ecl_boole(ECL_BOOLXOR,(T4),ecl_make_fixnum(-1));
     T6 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
     T7 = ecl_negate(ecl_make_fixnum(0));
     T8 = cl_ash(T6, T7);
     v12 = ecl_boole(ECL_BOOLAND,(T5),(T8));
    }
    {
     cl_object v13;
     T4 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
     T5 = ecl_negate(ecl_make_fixnum(2));
     v13 = cl_ash(T4, T5);
     {
      cl_object v14;
      v14 = v1bit_stream;
      (v14)->instance.slots[2]=v13;
     }
    }
    {
     cl_object v13;
     T4 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
     v13 = ecl_minus(T4,ecl_make_fixnum(2));
     {
      cl_object v14;
      v14 = v1bit_stream;
      (v14)->instance.slots[3]=v13;
     }
    }
    T3 = v12;
   }
L189:;
   v9 = ecl_plus(T2,T3);
   goto L142;
L187:;
   if (!(ecl_lowereq(v5symbol,ecl_make_fixnum(276)))) { goto L229; }
   T0 = ecl_minus(v5symbol,ecl_make_fixnum(273));
   T1 = ecl_times(T0,ecl_make_fixnum(8));
   T2 = ecl_plus(ecl_make_fixnum(35),T1);
L233:;
   T4 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
   if (ecl_lower(T4,ecl_make_fixnum(3))) { goto L235; }
   goto L234;
L235:;
   {
    cl_object v11;
    T4 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
    {
     uint8_t v12;
     T5 = ecl_function_dispatch(cl_env_copy,VV[51])(1, v1bit_stream) /*  BIT-STREAM-STREAM */;
     v12 = ecl_fixnum(cl_read_byte(1, T5));
     T5 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
     T6 = cl_ash(ecl_make_uint8_t(v12), T5);
     v11 = ecl_boole(ECL_BOOLIOR,(T4),(T6));
    }
    {
     cl_object v12;
     v12 = v1bit_stream;
     (v12)->instance.slots[2]=v11;
    }
   }
   {
    cl_object v11;
    T4 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
    v11 = ecl_plus(T4,ecl_make_fixnum(8));
    {
     cl_object v12;
     v12 = v1bit_stream;
     (v12)->instance.slots[3]=v11;
    }
   }
   goto L233;
L234:;
   T4 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
   if (!(ecl_number_equalp(T4,ecl_make_fixnum(3)))) { goto L245; }
   {
    cl_object v11;
    v11 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
    {
     cl_object v12;
     v12 = ecl_make_fixnum(0);
     {
      cl_object v13;
      v13 = v1bit_stream;
      (v13)->instance.slots[2]=v12;
     }
    }
    {
     cl_object v12;
     v12 = ecl_make_fixnum(0);
     {
      cl_object v13;
      v13 = v1bit_stream;
      (v13)->instance.slots[3]=v12;
     }
    }
    T3 = v11;
    goto L231;
   }
L245:;
   {
    cl_object v12;
    {
     cl_object v13;
     {
      cl_object v14;
      v14 = ecl_make_fixnum(3);
      {
       cl_object v15;
       v15 = ecl_make_fixnum(0);
       if (!(ECL_FIXNUMP(v14)||ECL_BIGNUMP(v14))) { goto L261; }
       v15 = v14;
       T4 = ecl_make_bool(ecl_greatereq(v15,ecl_make_fixnum(0)));
       goto L258;
L261:;
       T4 = ECL_NIL;
       goto L258;
      }
L258:;
      if (ecl_unlikely(!((T4)!=ECL_NIL)))
         FEwrong_type_argument(ECL_SYM("UNSIGNED-BYTE",887),v14);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v13 = v14;
     }
     T4 = cl_ash(ecl_make_fixnum(-1), v13);
     T5 = ecl_boole(ECL_BOOLXOR,(T4),ecl_make_fixnum(-1));
     T6 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
     T7 = ecl_negate(ecl_make_fixnum(0));
     T8 = cl_ash(T6, T7);
     v12 = ecl_boole(ECL_BOOLAND,(T5),(T8));
    }
    {
     cl_object v13;
     T4 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
     T5 = ecl_negate(ecl_make_fixnum(3));
     v13 = cl_ash(T4, T5);
     {
      cl_object v14;
      v14 = v1bit_stream;
      (v14)->instance.slots[2]=v13;
     }
    }
    {
     cl_object v13;
     T4 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
     v13 = ecl_minus(T4,ecl_make_fixnum(3));
     {
      cl_object v14;
      v14 = v1bit_stream;
      (v14)->instance.slots[3]=v13;
     }
    }
    T3 = v12;
   }
L231:;
   v9 = ecl_plus(T2,T3);
   goto L142;
L229:;
   if (!(ecl_lowereq(v5symbol,ecl_make_fixnum(280)))) { goto L271; }
   T0 = ecl_minus(v5symbol,ecl_make_fixnum(277));
   T1 = ecl_times(T0,ecl_make_fixnum(16));
   T2 = ecl_plus(ecl_make_fixnum(67),T1);
L275:;
   T4 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
   if (ecl_lower(T4,ecl_make_fixnum(4))) { goto L277; }
   goto L276;
L277:;
   {
    cl_object v11;
    T4 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
    {
     uint8_t v12;
     T5 = ecl_function_dispatch(cl_env_copy,VV[51])(1, v1bit_stream) /*  BIT-STREAM-STREAM */;
     v12 = ecl_fixnum(cl_read_byte(1, T5));
     T5 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
     T6 = cl_ash(ecl_make_uint8_t(v12), T5);
     v11 = ecl_boole(ECL_BOOLIOR,(T4),(T6));
    }
    {
     cl_object v12;
     v12 = v1bit_stream;
     (v12)->instance.slots[2]=v11;
    }
   }
   {
    cl_object v11;
    T4 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
    v11 = ecl_plus(T4,ecl_make_fixnum(8));
    {
     cl_object v12;
     v12 = v1bit_stream;
     (v12)->instance.slots[3]=v11;
    }
   }
   goto L275;
L276:;
   T4 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
   if (!(ecl_number_equalp(T4,ecl_make_fixnum(4)))) { goto L287; }
   {
    cl_object v11;
    v11 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
    {
     cl_object v12;
     v12 = ecl_make_fixnum(0);
     {
      cl_object v13;
      v13 = v1bit_stream;
      (v13)->instance.slots[2]=v12;
     }
    }
    {
     cl_object v12;
     v12 = ecl_make_fixnum(0);
     {
      cl_object v13;
      v13 = v1bit_stream;
      (v13)->instance.slots[3]=v12;
     }
    }
    T3 = v11;
    goto L273;
   }
L287:;
   {
    cl_object v12;
    {
     cl_object v13;
     {
      cl_object v14;
      v14 = ecl_make_fixnum(4);
      {
       cl_object v15;
       v15 = ecl_make_fixnum(0);
       if (!(ECL_FIXNUMP(v14)||ECL_BIGNUMP(v14))) { goto L303; }
       v15 = v14;
       T4 = ecl_make_bool(ecl_greatereq(v15,ecl_make_fixnum(0)));
       goto L300;
L303:;
       T4 = ECL_NIL;
       goto L300;
      }
L300:;
      if (ecl_unlikely(!((T4)!=ECL_NIL)))
         FEwrong_type_argument(ECL_SYM("UNSIGNED-BYTE",887),v14);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v13 = v14;
     }
     T4 = cl_ash(ecl_make_fixnum(-1), v13);
     T5 = ecl_boole(ECL_BOOLXOR,(T4),ecl_make_fixnum(-1));
     T6 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
     T7 = ecl_negate(ecl_make_fixnum(0));
     T8 = cl_ash(T6, T7);
     v12 = ecl_boole(ECL_BOOLAND,(T5),(T8));
    }
    {
     cl_object v13;
     T4 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
     T5 = ecl_negate(ecl_make_fixnum(4));
     v13 = cl_ash(T4, T5);
     {
      cl_object v14;
      v14 = v1bit_stream;
      (v14)->instance.slots[2]=v13;
     }
    }
    {
     cl_object v13;
     T4 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
     v13 = ecl_minus(T4,ecl_make_fixnum(4));
     {
      cl_object v14;
      v14 = v1bit_stream;
      (v14)->instance.slots[3]=v13;
     }
    }
    T3 = v12;
   }
L273:;
   v9 = ecl_plus(T2,T3);
   goto L142;
L271:;
   if (!(ecl_lowereq(v5symbol,ecl_make_fixnum(284)))) { goto L313; }
   T0 = ecl_minus(v5symbol,ecl_make_fixnum(281));
   T1 = ecl_times(T0,ecl_make_fixnum(32));
   T2 = ecl_plus(ecl_make_fixnum(131),T1);
L317:;
   T4 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
   if (ecl_lower(T4,ecl_make_fixnum(5))) { goto L319; }
   goto L318;
L319:;
   {
    cl_object v11;
    T4 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
    {
     uint8_t v12;
     T5 = ecl_function_dispatch(cl_env_copy,VV[51])(1, v1bit_stream) /*  BIT-STREAM-STREAM */;
     v12 = ecl_fixnum(cl_read_byte(1, T5));
     T5 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
     T6 = cl_ash(ecl_make_uint8_t(v12), T5);
     v11 = ecl_boole(ECL_BOOLIOR,(T4),(T6));
    }
    {
     cl_object v12;
     v12 = v1bit_stream;
     (v12)->instance.slots[2]=v11;
    }
   }
   {
    cl_object v11;
    T4 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
    v11 = ecl_plus(T4,ecl_make_fixnum(8));
    {
     cl_object v12;
     v12 = v1bit_stream;
     (v12)->instance.slots[3]=v11;
    }
   }
   goto L317;
L318:;
   T4 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
   if (!(ecl_number_equalp(T4,ecl_make_fixnum(5)))) { goto L329; }
   {
    cl_object v11;
    v11 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
    {
     cl_object v12;
     v12 = ecl_make_fixnum(0);
     {
      cl_object v13;
      v13 = v1bit_stream;
      (v13)->instance.slots[2]=v12;
     }
    }
    {
     cl_object v12;
     v12 = ecl_make_fixnum(0);
     {
      cl_object v13;
      v13 = v1bit_stream;
      (v13)->instance.slots[3]=v12;
     }
    }
    T3 = v11;
    goto L315;
   }
L329:;
   {
    cl_object v12;
    {
     cl_object v13;
     {
      cl_object v14;
      v14 = ecl_make_fixnum(5);
      {
       cl_object v15;
       v15 = ecl_make_fixnum(0);
       if (!(ECL_FIXNUMP(v14)||ECL_BIGNUMP(v14))) { goto L345; }
       v15 = v14;
       T4 = ecl_make_bool(ecl_greatereq(v15,ecl_make_fixnum(0)));
       goto L342;
L345:;
       T4 = ECL_NIL;
       goto L342;
      }
L342:;
      if (ecl_unlikely(!((T4)!=ECL_NIL)))
         FEwrong_type_argument(ECL_SYM("UNSIGNED-BYTE",887),v14);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v13 = v14;
     }
     T4 = cl_ash(ecl_make_fixnum(-1), v13);
     T5 = ecl_boole(ECL_BOOLXOR,(T4),ecl_make_fixnum(-1));
     T6 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
     T7 = ecl_negate(ecl_make_fixnum(0));
     T8 = cl_ash(T6, T7);
     v12 = ecl_boole(ECL_BOOLAND,(T5),(T8));
    }
    {
     cl_object v13;
     T4 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
     T5 = ecl_negate(ecl_make_fixnum(5));
     v13 = cl_ash(T4, T5);
     {
      cl_object v14;
      v14 = v1bit_stream;
      (v14)->instance.slots[2]=v13;
     }
    }
    {
     cl_object v13;
     T4 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
     v13 = ecl_minus(T4,ecl_make_fixnum(5));
     {
      cl_object v14;
      v14 = v1bit_stream;
      (v14)->instance.slots[3]=v13;
     }
    }
    T3 = v12;
   }
L315:;
   v9 = ecl_plus(T2,T3);
   goto L142;
L313:;
   if (!(ecl_number_equalp(v5symbol,ecl_make_fixnum(285)))) { goto L355; }
   v9 = ecl_make_fixnum(258);
   goto L142;
L355:;
   T0 = ecl_list1(v5symbol);
   v9 = cl_error(5, VV[1], ECL_SYM("FORMAT-CONTROL",1263), VV[79], ECL_SYM("FORMAT-ARGUMENTS",1262), T0);
L142:;
   {
    cl_object v11;
    {
     cl_object v12length_count;
     v12length_count = ecl_function_dispatch(cl_env_copy,VV[65])(1, v4dist_decode_tree) /*  DECODE-TREE-LENGTH-COUNT */;
     {
      cl_object v13code_symbols;
      v13code_symbols = ecl_function_dispatch(cl_env_copy,VV[64])(1, v4dist_decode_tree) /*  DECODE-TREE-CODE-SYMBOLS */;
      {
       cl_fixnum v14code;
       v14code = 0;
       {
        cl_fixnum v15index;
        v15index = 0;
        {
         cl_fixnum v16first;
         v16first = 0;
         {
          cl_fixnum v17;
          cl_fixnum v18length;
          v17 = (v12length_count)->vector.fillp;
          v18length = 1;
          {
          cl_object v19count;
          v19count = ECL_NIL;
          {
          cl_object v20;
          v20 = ECL_NIL;
L373:;
          T0 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
          if (ecl_lower(T0,ecl_make_fixnum(1))) { goto L375; }
          goto L374;
L375:;
          {
          cl_object v21;
          T0 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
          {
          uint8_t v22;
          T1 = ecl_function_dispatch(cl_env_copy,VV[51])(1, v1bit_stream) /*  BIT-STREAM-STREAM */;
          v22 = ecl_fixnum(cl_read_byte(1, T1));
          T1 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
          T2 = cl_ash(ecl_make_uint8_t(v22), T1);
          v21 = ecl_boole(ECL_BOOLIOR,(T0),(T2));
          }
          {
          cl_object v22;
          v22 = v1bit_stream;
          (v22)->instance.slots[2]=v21;
          }
          }
          {
          cl_object v21;
          T0 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
          v21 = ecl_plus(T0,ecl_make_fixnum(8));
          {
          cl_object v22;
          v22 = v1bit_stream;
          (v22)->instance.slots[3]=v21;
          }
          }
          goto L373;
L374:;
          T0 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
          if (!(ecl_number_equalp(T0,ecl_make_fixnum(1)))) { goto L385; }
          {
          cl_object v21;
          v21 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
          {
          cl_object v22;
          v22 = ecl_make_fixnum(0);
          {
          cl_object v23;
          v23 = v1bit_stream;
          (v23)->instance.slots[2]=v22;
          }
          }
          {
          cl_object v22;
          v22 = ecl_make_fixnum(0);
          {
          cl_object v23;
          v23 = v1bit_stream;
          (v23)->instance.slots[3]=v22;
          }
          }
          v14code = ecl_fixnum(v21);
          goto L371;
          }
L385:;
          {
          cl_object v22;
          {
          cl_object v23;
          {
          cl_object v24;
          v24 = ecl_make_fixnum(1);
          {
          cl_object v25;
          v25 = ecl_make_fixnum(0);
          if (!(ECL_FIXNUMP(v24)||ECL_BIGNUMP(v24))) { goto L401; }
          v25 = v24;
          T0 = ecl_make_bool(ecl_greatereq(v25,ecl_make_fixnum(0)));
          goto L398;
L401:;
          T0 = ECL_NIL;
          goto L398;
          }
L398:;
          if (ecl_unlikely(!((T0)!=ECL_NIL)))
         FEwrong_type_argument(ECL_SYM("UNSIGNED-BYTE",887),v24);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          v23 = v24;
          }
          T0 = cl_ash(ecl_make_fixnum(-1), v23);
          T1 = ecl_boole(ECL_BOOLXOR,(T0),ecl_make_fixnum(-1));
          T2 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
          T3 = ecl_negate(ecl_make_fixnum(0));
          T4 = cl_ash(T2, T3);
          v22 = ecl_boole(ECL_BOOLAND,(T1),(T4));
          }
          {
          cl_object v23;
          T0 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
          T1 = ecl_negate(ecl_make_fixnum(1));
          v23 = cl_ash(T0, T1);
          {
          cl_object v24;
          v24 = v1bit_stream;
          (v24)->instance.slots[2]=v23;
          }
          }
          {
          cl_object v23;
          T0 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
          v23 = ecl_minus(T0,ecl_make_fixnum(1));
          {
          cl_object v24;
          v24 = v1bit_stream;
          (v24)->instance.slots[3]=v23;
          }
          }
          v14code = ecl_fixnum(v22);
          }
L371:;
          v15index = 0;
          v16first = 0;
L368:;
          if (!((v18length)>=(v17))) { goto L415; }
          goto L369;
L415:;
          v19count = ecl_make_int32_t((v12length_count)->vector.self.i32[v18length]);
          T0 = ecl_plus(ecl_make_fixnum(v16first),v19count);
          if (!((v14code)<(ecl_fixnum(T0)))) { goto L422; }
          T0 = ecl_minus(ecl_make_fixnum(v14code),ecl_make_fixnum(v16first));
          T1 = ecl_plus(ecl_make_fixnum(v15index),T0);
          v20 = ecl_make_int32_t((v13code_symbols)->vector.self.i32[ecl_fixnum(T1)]);
          goto L421;
L422:;
          v20 = ECL_NIL;
L421:;
          if (Null(v20)) { goto L419; }
          v11 = v20;
          goto L358;
L419:;
          T0 = ecl_times(ecl_make_fixnum(v14code),ecl_make_fixnum(2));
L428:;
          T2 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
          if (ecl_lower(T2,ecl_make_fixnum(1))) { goto L430; }
          goto L429;
L430:;
          {
          cl_object v21;
          T2 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
          {
          uint8_t v22;
          T3 = ecl_function_dispatch(cl_env_copy,VV[51])(1, v1bit_stream) /*  BIT-STREAM-STREAM */;
          v22 = ecl_fixnum(cl_read_byte(1, T3));
          T3 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
          T4 = cl_ash(ecl_make_uint8_t(v22), T3);
          v21 = ecl_boole(ECL_BOOLIOR,(T2),(T4));
          }
          {
          cl_object v22;
          v22 = v1bit_stream;
          (v22)->instance.slots[2]=v21;
          }
          }
          {
          cl_object v21;
          T2 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
          v21 = ecl_plus(T2,ecl_make_fixnum(8));
          {
          cl_object v22;
          v22 = v1bit_stream;
          (v22)->instance.slots[3]=v21;
          }
          }
          goto L428;
L429:;
          T2 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
          if (!(ecl_number_equalp(T2,ecl_make_fixnum(1)))) { goto L440; }
          {
          cl_object v21;
          v21 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
          {
          cl_object v22;
          v22 = ecl_make_fixnum(0);
          {
          cl_object v23;
          v23 = v1bit_stream;
          (v23)->instance.slots[2]=v22;
          }
          }
          {
          cl_object v22;
          v22 = ecl_make_fixnum(0);
          {
          cl_object v23;
          v23 = v1bit_stream;
          (v23)->instance.slots[3]=v22;
          }
          }
          T1 = v21;
          goto L426;
          }
L440:;
          {
          cl_object v22;
          {
          cl_object v23;
          {
          cl_object v24;
          v24 = ecl_make_fixnum(1);
          {
          cl_object v25;
          v25 = ecl_make_fixnum(0);
          if (!(ECL_FIXNUMP(v24)||ECL_BIGNUMP(v24))) { goto L456; }
          v25 = v24;
          T2 = ecl_make_bool(ecl_greatereq(v25,ecl_make_fixnum(0)));
          goto L453;
L456:;
          T2 = ECL_NIL;
          goto L453;
          }
L453:;
          if (ecl_unlikely(!((T2)!=ECL_NIL)))
         FEwrong_type_argument(ECL_SYM("UNSIGNED-BYTE",887),v24);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          v23 = v24;
          }
          T2 = cl_ash(ecl_make_fixnum(-1), v23);
          T3 = ecl_boole(ECL_BOOLXOR,(T2),ecl_make_fixnum(-1));
          T4 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
          T5 = ecl_negate(ecl_make_fixnum(0));
          T6 = cl_ash(T4, T5);
          v22 = ecl_boole(ECL_BOOLAND,(T3),(T6));
          }
          {
          cl_object v23;
          T2 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
          T3 = ecl_negate(ecl_make_fixnum(1));
          v23 = cl_ash(T2, T3);
          {
          cl_object v24;
          v24 = v1bit_stream;
          (v24)->instance.slots[2]=v23;
          }
          }
          {
          cl_object v23;
          T2 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
          v23 = ecl_minus(T2,ecl_make_fixnum(1));
          {
          cl_object v24;
          v24 = v1bit_stream;
          (v24)->instance.slots[3]=v23;
          }
          }
          T1 = v22;
          }
L426:;
          v14code = ecl_fixnum(ecl_plus(T0,T1));
          v15index = ecl_fixnum(ecl_plus(ecl_make_fixnum(v15index),v19count));
          T0 = ecl_plus(ecl_make_fixnum(v16first),v19count);
          v16first = ecl_fixnum(ecl_times(T0,ecl_make_fixnum(2)));
          v18length = (v18length)+1;
          goto L368;
L369:;
          T0 = ecl_list1(ecl_make_fixnum(v14code));
          cl_error(5, VV[1], ECL_SYM("FORMAT-CONTROL",1263), VV[70], ECL_SYM("FORMAT-ARGUMENTS",1262), T0);
          v11 = ECL_NIL;
          }
          }
         }
        }
       }
      }
     }
    }
L358:;
    if (!(ecl_lowereq(v11,ecl_make_fixnum(3)))) { goto L474; }
    v10 = ecl_one_plus(v11);
    goto L357;
L474:;
    {
     cl_object v13;                               /*  ORDER           */
     cl_object v14;                               /*  OFFSET          */
     value0 = ecl_truncate2(v11,ecl_make_fixnum(2));
     {
      v13 = value0;
      v14 = cl_env_copy->values[1];
     }
     {
      cl_object v15extra_bits;
      cl_object v16factor;
      v15extra_bits = ecl_one_minus(v13);
      v16factor = cl_ash(ecl_make_fixnum(1), v15extra_bits);
      T0 = cl_ash(ecl_make_fixnum(1), v13);
      T1 = ecl_one_plus(T0);
      T2 = ecl_times(v14,v16factor);
      T3 = ecl_plus(T1,T2);
L481:;
      T5 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
      if (ecl_lower(T5,v15extra_bits)) { goto L483; }
      goto L482;
L483:;
      {
       cl_object v17;
       T5 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
       {
        uint8_t v18;
        T6 = ecl_function_dispatch(cl_env_copy,VV[51])(1, v1bit_stream) /*  BIT-STREAM-STREAM */;
        v18 = ecl_fixnum(cl_read_byte(1, T6));
        T6 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
        T7 = cl_ash(ecl_make_uint8_t(v18), T6);
        v17 = ecl_boole(ECL_BOOLIOR,(T5),(T7));
       }
       {
        cl_object v18;
        v18 = v1bit_stream;
        (v18)->instance.slots[2]=v17;
       }
      }
      {
       cl_object v17;
       T5 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
       v17 = ecl_plus(T5,ecl_make_fixnum(8));
       {
        cl_object v18;
        v18 = v1bit_stream;
        (v18)->instance.slots[3]=v17;
       }
      }
      goto L481;
L482:;
      T5 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
      if (!(ecl_number_equalp(T5,v15extra_bits))) { goto L493; }
      {
       cl_object v17;
       v17 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
       {
        cl_object v18;
        v18 = ecl_make_fixnum(0);
        {
         cl_object v19;
         v19 = v1bit_stream;
         (v19)->instance.slots[2]=v18;
        }
       }
       {
        cl_object v18;
        v18 = ecl_make_fixnum(0);
        {
         cl_object v19;
         v19 = v1bit_stream;
         (v19)->instance.slots[3]=v18;
        }
       }
       T4 = v17;
       goto L479;
      }
L493:;
      {
       cl_object v18;
       {
        cl_object v19;
        {
         cl_object v20;
         v20 = v15extra_bits;
         {
          cl_object v21;
          v21 = ecl_make_fixnum(0);
          if (!(ECL_FIXNUMP(v20)||ECL_BIGNUMP(v20))) { goto L509; }
          v21 = v20;
          T5 = ecl_make_bool(ecl_greatereq(v21,ecl_make_fixnum(0)));
          goto L506;
L509:;
          T5 = ECL_NIL;
          goto L506;
         }
L506:;
         if (ecl_unlikely(!((T5)!=ECL_NIL)))
         FEwrong_type_argument(ECL_SYM("UNSIGNED-BYTE",887),v20);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         v19 = v20;
        }
        T5 = cl_ash(ecl_make_fixnum(-1), v19);
        T6 = ecl_boole(ECL_BOOLXOR,(T5),ecl_make_fixnum(-1));
        T7 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
        T8 = ecl_negate(ecl_make_fixnum(0));
        T9 = cl_ash(T7, T8);
        v18 = ecl_boole(ECL_BOOLAND,(T6),(T9));
       }
       {
        cl_object v19;
        T5 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
        T6 = ecl_negate(v15extra_bits);
        v19 = cl_ash(T5, T6);
        {
         cl_object v20;
         v20 = v1bit_stream;
         (v20)->instance.slots[2]=v19;
        }
       }
       {
        cl_object v19;
        T5 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
        v19 = ecl_minus(T5,v15extra_bits);
        {
         cl_object v20;
         v20 = v1bit_stream;
         (v20)->instance.slots[3]=v19;
        }
       }
       T4 = v18;
      }
L479:;
      v10 = ecl_plus(T3,T4);
     }
    }
   }
L357:;
   L15sliding_window_stream_copy_bytes(v2window_stream, v10, v9);
  }
L121:;
  {
   cl_object v6length_count;
   v6length_count = ecl_function_dispatch(cl_env_copy,VV[65])(1, v3lit_decode_tree) /*  DECODE-TREE-LENGTH-COUNT */;
   {
    cl_object v7code_symbols;
    v7code_symbols = ecl_function_dispatch(cl_env_copy,VV[64])(1, v3lit_decode_tree) /*  DECODE-TREE-CODE-SYMBOLS */;
    {
     cl_fixnum v8code;
     v8code = 0;
     {
      cl_fixnum v9index;
      v9index = 0;
      {
       cl_fixnum v10first;
       v10first = 0;
       {
        cl_fixnum v11;
        cl_fixnum v12length;
        v11 = (v6length_count)->vector.fillp;
        v12length = 1;
        {
         cl_object v13count;
         v13count = ECL_NIL;
         {
          cl_object v14;
          v14 = ECL_NIL;
L535:;
          T0 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
          if (ecl_lower(T0,ecl_make_fixnum(1))) { goto L537; }
          goto L536;
L537:;
          {
          cl_object v15;
          T0 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
          {
          uint8_t v16;
          T1 = ecl_function_dispatch(cl_env_copy,VV[51])(1, v1bit_stream) /*  BIT-STREAM-STREAM */;
          v16 = ecl_fixnum(cl_read_byte(1, T1));
          T1 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
          T2 = cl_ash(ecl_make_uint8_t(v16), T1);
          v15 = ecl_boole(ECL_BOOLIOR,(T0),(T2));
          }
          {
          cl_object v16;
          v16 = v1bit_stream;
          (v16)->instance.slots[2]=v15;
          }
          }
          {
          cl_object v15;
          T0 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
          v15 = ecl_plus(T0,ecl_make_fixnum(8));
          {
          cl_object v16;
          v16 = v1bit_stream;
          (v16)->instance.slots[3]=v15;
          }
          }
          goto L535;
L536:;
          T0 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
          if (!(ecl_number_equalp(T0,ecl_make_fixnum(1)))) { goto L547; }
          {
          cl_object v15;
          v15 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
          {
          cl_object v16;
          v16 = ecl_make_fixnum(0);
          {
          cl_object v17;
          v17 = v1bit_stream;
          (v17)->instance.slots[2]=v16;
          }
          }
          {
          cl_object v16;
          v16 = ecl_make_fixnum(0);
          {
          cl_object v17;
          v17 = v1bit_stream;
          (v17)->instance.slots[3]=v16;
          }
          }
          v8code = ecl_fixnum(v15);
          goto L533;
          }
L547:;
          {
          cl_object v16;
          {
          cl_object v17;
          {
          cl_object v18;
          v18 = ecl_make_fixnum(1);
          {
          cl_object v19;
          v19 = ecl_make_fixnum(0);
          if (!(ECL_FIXNUMP(v18)||ECL_BIGNUMP(v18))) { goto L563; }
          v19 = v18;
          T0 = ecl_make_bool(ecl_greatereq(v19,ecl_make_fixnum(0)));
          goto L560;
L563:;
          T0 = ECL_NIL;
          goto L560;
          }
L560:;
          if (ecl_unlikely(!((T0)!=ECL_NIL)))
         FEwrong_type_argument(ECL_SYM("UNSIGNED-BYTE",887),v18);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          v17 = v18;
          }
          T0 = cl_ash(ecl_make_fixnum(-1), v17);
          T1 = ecl_boole(ECL_BOOLXOR,(T0),ecl_make_fixnum(-1));
          T2 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
          T3 = ecl_negate(ecl_make_fixnum(0));
          T4 = cl_ash(T2, T3);
          v16 = ecl_boole(ECL_BOOLAND,(T1),(T4));
          }
          {
          cl_object v17;
          T0 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
          T1 = ecl_negate(ecl_make_fixnum(1));
          v17 = cl_ash(T0, T1);
          {
          cl_object v18;
          v18 = v1bit_stream;
          (v18)->instance.slots[2]=v17;
          }
          }
          {
          cl_object v17;
          T0 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
          v17 = ecl_minus(T0,ecl_make_fixnum(1));
          {
          cl_object v18;
          v18 = v1bit_stream;
          (v18)->instance.slots[3]=v17;
          }
          }
          v8code = ecl_fixnum(v16);
          }
L533:;
          v9index = 0;
          v10first = 0;
L530:;
          if (!((v12length)>=(v11))) { goto L577; }
          goto L531;
L577:;
          v13count = ecl_make_int32_t((v6length_count)->vector.self.i32[v12length]);
          T0 = ecl_plus(ecl_make_fixnum(v10first),v13count);
          if (!((v8code)<(ecl_fixnum(T0)))) { goto L584; }
          T0 = ecl_minus(ecl_make_fixnum(v8code),ecl_make_fixnum(v10first));
          T1 = ecl_plus(ecl_make_fixnum(v9index),T0);
          v14 = ecl_make_int32_t((v7code_symbols)->vector.self.i32[ecl_fixnum(T1)]);
          goto L583;
L584:;
          v14 = ECL_NIL;
L583:;
          if (Null(v14)) { goto L581; }
          v5symbol = v14;
          goto L520;
L581:;
          T0 = ecl_times(ecl_make_fixnum(v8code),ecl_make_fixnum(2));
L590:;
          T2 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
          if (ecl_lower(T2,ecl_make_fixnum(1))) { goto L592; }
          goto L591;
L592:;
          {
          cl_object v15;
          T2 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
          {
          uint8_t v16;
          T3 = ecl_function_dispatch(cl_env_copy,VV[51])(1, v1bit_stream) /*  BIT-STREAM-STREAM */;
          v16 = ecl_fixnum(cl_read_byte(1, T3));
          T3 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
          T4 = cl_ash(ecl_make_uint8_t(v16), T3);
          v15 = ecl_boole(ECL_BOOLIOR,(T2),(T4));
          }
          {
          cl_object v16;
          v16 = v1bit_stream;
          (v16)->instance.slots[2]=v15;
          }
          }
          {
          cl_object v15;
          T2 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
          v15 = ecl_plus(T2,ecl_make_fixnum(8));
          {
          cl_object v16;
          v16 = v1bit_stream;
          (v16)->instance.slots[3]=v15;
          }
          }
          goto L590;
L591:;
          T2 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
          if (!(ecl_number_equalp(T2,ecl_make_fixnum(1)))) { goto L602; }
          {
          cl_object v15;
          v15 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
          {
          cl_object v16;
          v16 = ecl_make_fixnum(0);
          {
          cl_object v17;
          v17 = v1bit_stream;
          (v17)->instance.slots[2]=v16;
          }
          }
          {
          cl_object v16;
          v16 = ecl_make_fixnum(0);
          {
          cl_object v17;
          v17 = v1bit_stream;
          (v17)->instance.slots[3]=v16;
          }
          }
          T1 = v15;
          goto L588;
          }
L602:;
          {
          cl_object v16;
          {
          cl_object v17;
          {
          cl_object v18;
          v18 = ecl_make_fixnum(1);
          {
          cl_object v19;
          v19 = ecl_make_fixnum(0);
          if (!(ECL_FIXNUMP(v18)||ECL_BIGNUMP(v18))) { goto L618; }
          v19 = v18;
          T2 = ecl_make_bool(ecl_greatereq(v19,ecl_make_fixnum(0)));
          goto L615;
L618:;
          T2 = ECL_NIL;
          goto L615;
          }
L615:;
          if (ecl_unlikely(!((T2)!=ECL_NIL)))
         FEwrong_type_argument(ECL_SYM("UNSIGNED-BYTE",887),v18);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          v17 = v18;
          }
          T2 = cl_ash(ecl_make_fixnum(-1), v17);
          T3 = ecl_boole(ECL_BOOLXOR,(T2),ecl_make_fixnum(-1));
          T4 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
          T5 = ecl_negate(ecl_make_fixnum(0));
          T6 = cl_ash(T4, T5);
          v16 = ecl_boole(ECL_BOOLAND,(T3),(T6));
          }
          {
          cl_object v17;
          T2 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
          T3 = ecl_negate(ecl_make_fixnum(1));
          v17 = cl_ash(T2, T3);
          {
          cl_object v18;
          v18 = v1bit_stream;
          (v18)->instance.slots[2]=v17;
          }
          }
          {
          cl_object v17;
          T2 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
          v17 = ecl_minus(T2,ecl_make_fixnum(1));
          {
          cl_object v18;
          v18 = v1bit_stream;
          (v18)->instance.slots[3]=v17;
          }
          }
          T1 = v16;
          }
L588:;
          v8code = ecl_fixnum(ecl_plus(T0,T1));
          v9index = ecl_fixnum(ecl_plus(ecl_make_fixnum(v9index),v13count));
          T0 = ecl_plus(ecl_make_fixnum(v10first),v13count);
          v10first = ecl_fixnum(ecl_times(T0,ecl_make_fixnum(2)));
          v12length = (v12length)+1;
          goto L530;
L531:;
          T0 = ecl_list1(ecl_make_fixnum(v8code));
          cl_error(5, VV[1], ECL_SYM("FORMAT-CONTROL",1263), VV[70], ECL_SYM("FORMAT-ARGUMENTS",1262), T0);
          v5symbol = ECL_NIL;
         }
        }
       }
      }
     }
    }
   }
  }
L520:;
L119:;
  if (ecl_number_equalp(v5symbol,ecl_make_fixnum(256))) { goto L636; }
  goto L118;
L636:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for DECODE-BLOCK                          */
/*      optimize speed 3, debug 1, space 1, safety 0                  */
static cl_object L32decode_block(cl_object v1bit_stream, cl_object v2window_stream)
{
 cl_object T0, T1, T2, T3, T4, T5, T6;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 {
  cl_object v3finalp;
  cl_object v4type;
L4:;
  T1 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
  if (ecl_lower(T1,ecl_make_fixnum(1))) { goto L6; }
  goto L5;
L6:;
  {
   cl_object v5;
   T1 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
   {
    uint8_t v6;
    T2 = ecl_function_dispatch(cl_env_copy,VV[51])(1, v1bit_stream) /*  BIT-STREAM-STREAM */;
    v6 = ecl_fixnum(cl_read_byte(1, T2));
    T2 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
    T3 = cl_ash(ecl_make_uint8_t(v6), T2);
    v5 = ecl_boole(ECL_BOOLIOR,(T1),(T3));
   }
   {
    cl_object v6;
    v6 = v1bit_stream;
    (v6)->instance.slots[2]=v5;
   }
  }
  {
   cl_object v5;
   T1 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
   v5 = ecl_plus(T1,ecl_make_fixnum(8));
   {
    cl_object v6;
    v6 = v1bit_stream;
    (v6)->instance.slots[3]=v5;
   }
  }
  goto L4;
L5:;
  T1 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
  if (!(ecl_number_equalp(T1,ecl_make_fixnum(1)))) { goto L16; }
  {
   cl_object v5;
   v5 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
   {
    cl_object v6;
    v6 = ecl_make_fixnum(0);
    {
     cl_object v7;
     v7 = v1bit_stream;
     (v7)->instance.slots[2]=v6;
    }
   }
   {
    cl_object v6;
    v6 = ecl_make_fixnum(0);
    {
     cl_object v7;
     v7 = v1bit_stream;
     (v7)->instance.slots[3]=v6;
    }
   }
   T0 = v5;
   goto L2;
  }
L16:;
  {
   cl_object v6;
   {
    cl_object v7;
    {
     cl_object v8;
     v8 = ecl_make_fixnum(1);
     {
      cl_object v9;
      v9 = ecl_make_fixnum(0);
      if (!(ECL_FIXNUMP(v8)||ECL_BIGNUMP(v8))) { goto L32; }
      v9 = v8;
      T1 = ecl_make_bool(ecl_greatereq(v9,ecl_make_fixnum(0)));
      goto L29;
L32:;
      T1 = ECL_NIL;
      goto L29;
     }
L29:;
     if (ecl_unlikely(!((T1)!=ECL_NIL)))
         FEwrong_type_argument(ECL_SYM("UNSIGNED-BYTE",887),v8);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v7 = v8;
    }
    T1 = cl_ash(ecl_make_fixnum(-1), v7);
    T2 = ecl_boole(ECL_BOOLXOR,(T1),ecl_make_fixnum(-1));
    T3 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
    T4 = ecl_negate(ecl_make_fixnum(0));
    T5 = cl_ash(T3, T4);
    v6 = ecl_boole(ECL_BOOLAND,(T2),(T5));
   }
   {
    cl_object v7;
    T1 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
    T2 = ecl_negate(ecl_make_fixnum(1));
    v7 = cl_ash(T1, T2);
    {
     cl_object v8;
     v8 = v1bit_stream;
     (v8)->instance.slots[2]=v7;
    }
   }
   {
    cl_object v7;
    T1 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
    v7 = ecl_minus(T1,ecl_make_fixnum(1));
    {
     cl_object v8;
     v8 = v1bit_stream;
     (v8)->instance.slots[3]=v7;
    }
   }
   T0 = v6;
  }
L2:;
  {
   bool v5;
   v5 = ecl_zerop(T0);
   v3finalp = (v5)?ECL_NIL:ECL_T;
  }
L44:;
  T0 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
  if (ecl_lower(T0,ecl_make_fixnum(2))) { goto L46; }
  goto L45;
L46:;
  {
   cl_object v5;
   T0 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
   {
    uint8_t v6;
    T1 = ecl_function_dispatch(cl_env_copy,VV[51])(1, v1bit_stream) /*  BIT-STREAM-STREAM */;
    v6 = ecl_fixnum(cl_read_byte(1, T1));
    T1 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
    T2 = cl_ash(ecl_make_uint8_t(v6), T1);
    v5 = ecl_boole(ECL_BOOLIOR,(T0),(T2));
   }
   {
    cl_object v6;
    v6 = v1bit_stream;
    (v6)->instance.slots[2]=v5;
   }
  }
  {
   cl_object v5;
   T0 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
   v5 = ecl_plus(T0,ecl_make_fixnum(8));
   {
    cl_object v6;
    v6 = v1bit_stream;
    (v6)->instance.slots[3]=v5;
   }
  }
  goto L44;
L45:;
  T0 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
  if (!(ecl_number_equalp(T0,ecl_make_fixnum(2)))) { goto L56; }
  {
   cl_object v5;
   v5 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
   {
    cl_object v6;
    v6 = ecl_make_fixnum(0);
    {
     cl_object v7;
     v7 = v1bit_stream;
     (v7)->instance.slots[2]=v6;
    }
   }
   {
    cl_object v6;
    v6 = ecl_make_fixnum(0);
    {
     cl_object v7;
     v7 = v1bit_stream;
     (v7)->instance.slots[3]=v6;
    }
   }
   v4type = v5;
   goto L42;
  }
L56:;
  {
   cl_object v6;
   {
    cl_object v7;
    {
     cl_object v8;
     v8 = ecl_make_fixnum(2);
     {
      cl_object v9;
      v9 = ecl_make_fixnum(0);
      if (!(ECL_FIXNUMP(v8)||ECL_BIGNUMP(v8))) { goto L72; }
      v9 = v8;
      T0 = ecl_make_bool(ecl_greatereq(v9,ecl_make_fixnum(0)));
      goto L69;
L72:;
      T0 = ECL_NIL;
      goto L69;
     }
L69:;
     if (ecl_unlikely(!((T0)!=ECL_NIL)))
         FEwrong_type_argument(ECL_SYM("UNSIGNED-BYTE",887),v8);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v7 = v8;
    }
    T0 = cl_ash(ecl_make_fixnum(-1), v7);
    T1 = ecl_boole(ECL_BOOLXOR,(T0),ecl_make_fixnum(-1));
    T2 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
    T3 = ecl_negate(ecl_make_fixnum(0));
    T4 = cl_ash(T2, T3);
    v6 = ecl_boole(ECL_BOOLAND,(T1),(T4));
   }
   {
    cl_object v7;
    T0 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1bit_stream) /*  BIT-STREAM-BITS */;
    T1 = ecl_negate(ecl_make_fixnum(2));
    v7 = cl_ash(T0, T1);
    {
     cl_object v8;
     v8 = v1bit_stream;
     (v8)->instance.slots[2]=v7;
    }
   }
   {
    cl_object v7;
    T0 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v1bit_stream) /*  BIT-STREAM-BIT-COUNT */;
    v7 = ecl_minus(T0,ecl_make_fixnum(2));
    {
     cl_object v8;
     v8 = v1bit_stream;
     (v8)->instance.slots[3]=v7;
    }
   }
   v4type = v6;
  }
L42:;
  if (!((v4type)==(ecl_make_fixnum(0)))) { goto L83; }
  {
   cl_object v5;
   v5 = ecl_make_fixnum(0);
   {
    cl_object v6;
    v6 = v1bit_stream;
    (v6)->instance.slots[2]=v5;
   }
  }
  {
   cl_object v5;
   v5 = ecl_make_fixnum(0);
   {
    cl_object v6;
    v6 = v1bit_stream;
    (v6)->instance.slots[3]=v5;
   }
  }
  {
   cl_object v5len;
   cl_object v6nlen;
   {
    uint8_t v7;
    T0 = ecl_function_dispatch(cl_env_copy,VV[51])(1, v1bit_stream) /*  BIT-STREAM-STREAM */;
    v7 = ecl_fixnum(cl_read_byte(1, T0));
    {
     uint8_t v8;
     T0 = ecl_function_dispatch(cl_env_copy,VV[51])(1, v1bit_stream) /*  BIT-STREAM-STREAM */;
     v8 = ecl_fixnum(cl_read_byte(1, T0));
     T0 = ecl_ash(ecl_make_uint8_t(v8),8);
     v5len = ecl_boole(ECL_BOOLIOR,(ecl_make_uint8_t(v7)),(T0));
    }
   }
   T0 = cl_ash(ecl_make_fixnum(-1), ecl_make_fixnum(16));
   T1 = ecl_boole(ECL_BOOLXOR,(T0),ecl_make_fixnum(-1));
   {
    uint8_t v7;
    T2 = ecl_function_dispatch(cl_env_copy,VV[51])(1, v1bit_stream) /*  BIT-STREAM-STREAM */;
    v7 = ecl_fixnum(cl_read_byte(1, T2));
    {
     uint8_t v8;
     T2 = ecl_function_dispatch(cl_env_copy,VV[51])(1, v1bit_stream) /*  BIT-STREAM-STREAM */;
     v8 = ecl_fixnum(cl_read_byte(1, T2));
     T2 = ecl_ash(ecl_make_uint8_t(v8),8);
     T3 = ecl_boole(ECL_BOOLIOR,(ecl_make_uint8_t(v7)),(T2));
     T4 = ecl_boole(ECL_BOOLXOR,(T3),ecl_make_fixnum(-1));
     T5 = ecl_negate(ecl_make_fixnum(0));
     T6 = cl_ash(T4, T5);
     v6nlen = ecl_boole(ECL_BOOLAND,(T1),(T6));
    }
   }
   if (ecl_number_equalp(v5len,v6nlen)) { goto L97; }
   T0 = cl_list(2, v5len, v6nlen);
   cl_error(5, VV[1], ECL_SYM("FORMAT-CONTROL",1263), VV[54], ECL_SYM("FORMAT-ARGUMENTS",1262), T0);
L97:;
   {
    cl_object v7i;
    v7i = ecl_make_fixnum(0);
    goto L101;
L100:;
    {
     uint8_t v8;
     T0 = ecl_function_dispatch(cl_env_copy,VV[51])(1, v1bit_stream) /*  BIT-STREAM-STREAM */;
     v8 = ecl_fixnum(cl_read_byte(1, T0));
     {
      cl_fixnum v9end;
      v9end = ecl_fixnum(ecl_function_dispatch(cl_env_copy,VV[30])(1, v2window_stream) /*  SLIDING-WINDOW-STREAM-BUFFER-END */);
      if ((v9end)<(32768)) { goto L106; }
      T0 = ecl_function_dispatch(cl_env_copy,VV[31])(1, v2window_stream) /*  SLIDING-WINDOW-STREAM-BUFFER */;
      T1 = ecl_function_dispatch(cl_env_copy,VV[32])(1, v2window_stream) /*  SLIDING-WINDOW-STREAM-STREAM */;
      cl_write_sequence(2, T0, T1);
      {
       cl_object v10;
       v10 = ecl_function_dispatch(cl_env_copy,VV[29])(1, v2window_stream) /*  SLIDING-WINDOW-STREAM-CHECKSUM */;
       if (!(ecl_eql(v10,VV[33]))) { goto L111; }
       {
        cl_object v11;
        T0 = ecl_function_dispatch(cl_env_copy,VV[27])(1, v2window_stream) /*  SLIDING-WINDOW-STREAM-CHECKSUM-VALUE */;
        T1 = ecl_function_dispatch(cl_env_copy,VV[31])(1, v2window_stream) /*  SLIDING-WINDOW-STREAM-BUFFER */;
        v11 = L7update_adler32_checksum(T0, T1, ecl_make_fixnum(32768));
        {
         cl_object v12;
         v12 = v2window_stream;
         (v12)->instance.slots[4]=v11;
         goto L109;
        }
       }
L111:;
       if (!(ecl_eql(v10,VV[34]))) { goto L109; }
       {
        cl_object v13;
        T0 = ecl_function_dispatch(cl_env_copy,VV[27])(1, v2window_stream) /*  SLIDING-WINDOW-STREAM-CHECKSUM-VALUE */;
        T1 = ecl_function_dispatch(cl_env_copy,VV[31])(1, v2window_stream) /*  SLIDING-WINDOW-STREAM-BUFFER */;
        v13 = L9update_crc32_checksum(T0, T1, ecl_make_fixnum(32768));
        {
         cl_object v14;
         v14 = v2window_stream;
         (v14)->instance.slots[4]=v13;
        }
       }
      }
L109:;
      v9end = 0;
L106:;
      {
       cl_object v10;
       v10 = ecl_function_dispatch(cl_env_copy,VV[31])(1, v2window_stream) /*  SLIDING-WINDOW-STREAM-BUFFER */;
       ecl_aset_unsafe(v10,v9end,ecl_make_uint8_t(v8));
      }
      {
       cl_object v10;
       v10 = ecl_make_integer((v9end)+1);
       {
        cl_object v11;
        v11 = v2window_stream;
        (v11)->instance.slots[2]=v10;
       }
      }
     }
    }
    v7i = ecl_one_plus(v7i);
L101:;
    if (!(ecl_lower(v7i,v5len))) { goto L125; }
    goto L100;
L125:;
    goto L82;
   }
  }
L83:;
  if (!((v4type)==(ecl_make_fixnum(1)))) { goto L127; }
  L31decode_huffman_block(v1bit_stream, v2window_stream, ECL_SYM_VAL(cl_env_copy,VV[72]), ECL_SYM_VAL(cl_env_copy,VV[73]));
  goto L82;
L127:;
  if (!((v4type)==(ecl_make_fixnum(2)))) { goto L129; }
  {
   cl_object v9;                                  /*  LIT-DECODE-TREE */
   cl_object v10;                                 /*  DIST-DECODE-TREE */
   value0 = L28decode_huffman_tables(v1bit_stream);
   {
    const int v11 = cl_env_copy->nvalues;
    v9 = value0;
    cl_object v12;
    v12 = (v11<=1)? ECL_NIL : cl_env_copy->values[1];
    v10 = v12;
   }
   L31decode_huffman_block(v1bit_stream, v2window_stream, v9, v10);
   goto L82;
  }
L129:;
  if (!((v4type)==(ecl_make_fixnum(3)))) { goto L132; }
  T0 = ecl_list1(v4type);
  cl_error(5, VV[1], ECL_SYM("FORMAT-CONTROL",1263), VV[83], ECL_SYM("FORMAT-ARGUMENTS",1262), T0);
  goto L82;
L132:;
  si_ecase_error(v4type, VV[84]);
L82:;
  value0 = Null(v3finalp)?ECL_T:ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for PARSE-ZLIB-HEADER                     */
/*      optimize speed 3, debug 1, space 1, safety 0                  */
static cl_object L33parse_zlib_header(cl_object v1input_stream)
{
 cl_object T0, T1, T2, T3, T4, T5, T6;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 {
  cl_object v2;
  cl_object v3;
  v2 = cl_read_byte(1, v1input_stream);
  v3 = cl_read_byte(1, v1input_stream);
  T0 = ecl_times(v2,ecl_make_fixnum(256));
  T1 = ecl_plus(T0,v3);
  T2 = (ecl_floor2(T1,ecl_make_fixnum(31)),cl_env_copy->values[1]);
  if (ecl_zerop(T2)) { goto L3; }
  T0 = cl_list(2, v2, v3);
  cl_error(5, VV[3], ECL_SYM("FORMAT-CONTROL",1263), VV[86], ECL_SYM("FORMAT-ARGUMENTS",1262), T0);
L3:;
  {
   cl_object v4dict;
   T1 = cl_ash(ecl_make_fixnum(-1), ecl_make_fixnum(1));
   T2 = ecl_boole(ECL_BOOLXOR,(T1),ecl_make_fixnum(-1));
   T3 = ecl_negate(ecl_make_fixnum(5));
   T4 = cl_ash(v3, T3);
   T0 = ecl_boole(ECL_BOOLAND,(T2),(T4));
   if (ecl_zerop(T0)) { goto L6; }
   v4dict = L34parse_zlib_checksum(v1input_stream);
   goto L5;
L6:;
   v4dict = ECL_NIL;
L5:;
   T1 = cl_ash(ecl_make_fixnum(-1), ecl_make_fixnum(4));
   T2 = ecl_boole(ECL_BOOLXOR,(T1),ecl_make_fixnum(-1));
   T3 = ecl_negate(ecl_make_fixnum(0));
   T4 = cl_ash(v2, T3);
   T0 = ecl_boole(ECL_BOOLAND,(T2),(T4));
   T2 = cl_ash(ecl_make_fixnum(-1), ecl_make_fixnum(4));
   T3 = ecl_boole(ECL_BOOLXOR,(T2),ecl_make_fixnum(-1));
   T4 = ecl_negate(ecl_make_fixnum(4));
   T5 = cl_ash(v2, T4);
   T1 = ecl_boole(ECL_BOOLAND,(T3),(T5));
   T3 = cl_ash(ecl_make_fixnum(-1), ecl_make_fixnum(2));
   T4 = ecl_boole(ECL_BOOLXOR,(T3),ecl_make_fixnum(-1));
   T5 = ecl_negate(ecl_make_fixnum(6));
   T6 = cl_ash(v3, T5);
   T2 = ecl_boole(ECL_BOOLAND,(T4),(T6));
   cl_env_copy->nvalues = 4;
   cl_env_copy->values[3] = T2;
   cl_env_copy->values[2] = v4dict;
   cl_env_copy->values[1] = T1;
   cl_env_copy->values[0] = T0;
   return cl_env_copy->values[0];
  }
 }
}
/*      function definition for PARSE-ZLIB-CHECKSUM                   */
/*      optimize speed 3, debug 1, space 1, safety 0                  */
static cl_object L34parse_zlib_checksum(cl_object v1input_stream)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 T0 = cl_read_byte(1, v1input_stream);
 T1 = ecl_times(T0,ecl_make_fixnum(256));
 T2 = ecl_times(T1,ecl_make_fixnum(256));
 T3 = ecl_times(T2,ecl_make_fixnum(256));
 T4 = cl_read_byte(1, v1input_stream);
 T5 = ecl_times(T4,ecl_make_fixnum(256));
 T6 = ecl_times(T5,ecl_make_fixnum(256));
 T7 = ecl_plus(T3,T6);
 T8 = cl_read_byte(1, v1input_stream);
 T9 = ecl_times(T8,ecl_make_fixnum(256));
 T10 = ecl_plus(T7,T9);
 T11 = cl_read_byte(1, v1input_stream);
 value0 = ecl_plus(T10,T11);
 cl_env_copy->nvalues = 1;
 return value0;
}
/*      function definition for PARSE-ZLIB-FOOTER                     */
/*      optimize speed 3, debug 1, space 1, safety 0                  */
static cl_object L35parse_zlib_footer(cl_object v1input_stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 value0 = L34parse_zlib_checksum(v1input_stream);
 return value0;
}
/*      function definition for PARSE-GZIP-HEADER                     */
/*      optimize speed 3, debug 1, space 1, safety 0                  */
static cl_object L36parse_gzip_header(cl_object v1input_stream)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 {
  cl_object v2;
  cl_object v3;
  cl_object v4;
  cl_object v5;
  v2 = cl_read_byte(1, v1input_stream);
  v3 = cl_read_byte(1, v1input_stream);
  v4 = cl_read_byte(1, v1input_stream);
  v5 = cl_read_byte(1, v1input_stream);
  if (!(ecl_number_equalp(v2,ecl_make_fixnum(31)))) { goto L8; }
  if (ecl_number_equalp(v3,ecl_make_fixnum(139))) { goto L5; }
  goto L6;
L8:;
  goto L6;
L6:;
  T0 = cl_list(4, ecl_make_fixnum(31), ecl_make_fixnum(139), v2, v3);
  cl_error(5, VV[5], ECL_SYM("FORMAT-CONTROL",1263), VV[92], ECL_SYM("FORMAT-ARGUMENTS",1262), T0);
L5:;
  if (ecl_number_equalp(v4,ecl_make_fixnum(8))) { goto L10; }
  T0 = ecl_list1(v4);
  cl_error(5, VV[5], ECL_SYM("FORMAT-CONTROL",1263), VV[93], ECL_SYM("FORMAT-ARGUMENTS",1262), T0);
L10:;
  T1 = cl_ash(ecl_make_fixnum(-1), ecl_make_fixnum(3));
  T2 = ecl_boole(ECL_BOOLXOR,(T1),ecl_make_fixnum(-1));
  T3 = ecl_negate(ecl_make_fixnum(5));
  T4 = cl_ash(v5, T3);
  T0 = ecl_boole(ECL_BOOLAND,(T2),(T4));
  if (ecl_zerop(T0)) { goto L12; }
  T0 = ecl_list1(v5);
  cl_error(5, VV[5], ECL_SYM("FORMAT-CONTROL",1263), VV[94], ECL_SYM("FORMAT-ARGUMENTS",1262), T0);
L12:;
  T1 = cl_ash(ecl_make_fixnum(-1), ecl_make_fixnum(1));
  T2 = ecl_boole(ECL_BOOLXOR,(T1),ecl_make_fixnum(-1));
  T3 = ecl_negate(ecl_make_fixnum(0));
  T4 = cl_ash(v5, T3);
  T0 = ecl_boole(ECL_BOOLAND,(T2),(T4));
  {
   bool v6;
   v6 = ecl_number_equalp(ecl_make_fixnum(1),T0);
   T1 = L37parse_gzip_mtime(v1input_stream);
   T2 = cl_read_byte(1, v1input_stream);
   T3 = cl_read_byte(1, v1input_stream);
   T6 = cl_ash(ecl_make_fixnum(-1), ecl_make_fixnum(1));
   T7 = ecl_boole(ECL_BOOLXOR,(T6),ecl_make_fixnum(-1));
   T8 = ecl_negate(ecl_make_fixnum(2));
   T9 = cl_ash(v5, T8);
   T5 = ecl_boole(ECL_BOOLAND,(T7),(T9));
   if (ecl_zerop(T5)) { goto L17; }
   T4 = L38parse_gzip_extra(v1input_stream);
   goto L16;
L17:;
   T4 = ECL_NIL;
L16:;
   T7 = cl_ash(ecl_make_fixnum(-1), ecl_make_fixnum(1));
   T8 = ecl_boole(ECL_BOOLXOR,(T7),ecl_make_fixnum(-1));
   T9 = ecl_negate(ecl_make_fixnum(3));
   T10 = cl_ash(v5, T9);
   T6 = ecl_boole(ECL_BOOLAND,(T8),(T10));
   if (ecl_zerop(T6)) { goto L21; }
   T5 = L39parse_gzip_string(v1input_stream);
   goto L20;
L21:;
   T5 = ECL_NIL;
L20:;
   T8 = cl_ash(ecl_make_fixnum(-1), ecl_make_fixnum(1));
   T9 = ecl_boole(ECL_BOOLXOR,(T8),ecl_make_fixnum(-1));
   T10 = ecl_negate(ecl_make_fixnum(4));
   T11 = cl_ash(v5, T10);
   T7 = ecl_boole(ECL_BOOLAND,(T9),(T11));
   if (ecl_zerop(T7)) { goto L25; }
   T6 = L39parse_gzip_string(v1input_stream);
   goto L24;
L25:;
   T6 = ECL_NIL;
L24:;
   T9 = cl_ash(ecl_make_fixnum(-1), ecl_make_fixnum(1));
   T10 = ecl_boole(ECL_BOOLXOR,(T9),ecl_make_fixnum(-1));
   T11 = ecl_negate(ecl_make_fixnum(1));
   T12 = cl_ash(v5, T11);
   T8 = ecl_boole(ECL_BOOLAND,(T10),(T12));
   if (ecl_zerop(T8)) { goto L29; }
   T8 = cl_read_byte(1, v1input_stream);
   T9 = cl_read_byte(2, v1input_stream, ecl_make_fixnum(256));
   T7 = ecl_plus(T8,T9);
   goto L28;
L29:;
   T7 = ECL_NIL;
L28:;
   cl_env_copy->nvalues = 9;
   cl_env_copy->values[8] = T7;
   cl_env_copy->values[7] = T6;
   cl_env_copy->values[6] = T5;
   cl_env_copy->values[5] = T4;
   cl_env_copy->values[4] = T3;
   cl_env_copy->values[3] = T2;
   cl_env_copy->values[2] = T1;
   cl_env_copy->values[1] = ecl_make_bool(v6);
   cl_env_copy->values[0] = v4;
   return cl_env_copy->values[0];
  }
 }
}
/*      function definition for PARSE-GZIP-MTIME                      */
/*      optimize speed 3, debug 1, space 1, safety 0                  */
static cl_object L37parse_gzip_mtime(cl_object v1input_stream)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 {
  cl_object v2time;
  T0 = cl_read_byte(1, v1input_stream);
  T1 = cl_read_byte(1, v1input_stream);
  T2 = ecl_times(T1,ecl_make_fixnum(256));
  T3 = ecl_plus(T0,T2);
  T4 = cl_read_byte(1, v1input_stream);
  T5 = ecl_times(T4,ecl_make_fixnum(256));
  T6 = ecl_times(T5,ecl_make_fixnum(256));
  T7 = ecl_plus(T3,T6);
  T8 = cl_read_byte(1, v1input_stream);
  T9 = ecl_times(T8,ecl_make_fixnum(256));
  T10 = ecl_times(T9,ecl_make_fixnum(256));
  T11 = ecl_times(T10,ecl_make_fixnum(256));
  v2time = ecl_plus(T7,T11);
  if (!(ecl_zerop(v2time))) { goto L2; }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L2:;
  value0 = ecl_plus(v2time,VV[96]);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for PARSE-GZIP-EXTRA                      */
/*      optimize speed 3, debug 1, space 1, safety 0                  */
static cl_object L38parse_gzip_extra(cl_object v1input_stream)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 {
  cl_object v2length;
  cl_object v3result;
  T0 = cl_read_byte(1, v1input_stream);
  T1 = cl_read_byte(1, v1input_stream);
  T2 = ecl_times(T1,ecl_make_fixnum(256));
  v2length = ecl_plus(T0,T2);
  v3result = si_make_pure_array(ECL_SYM("BYTE8",1358), v2length, ECL_NIL, ECL_NIL, ECL_NIL, ecl_make_fixnum(0));
  cl_read_sequence(2, v3result, v1input_stream);
  value0 = v3result;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for PARSE-GZIP-STRING                     */
/*      optimize speed 3, debug 1, space 1, safety 0                  */
static cl_object L39parse_gzip_string(cl_object volatile v1input_stream)
{
 cl_object volatile env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
TTL:
 {
  volatile cl_object v2string;
  v2string = cl_make_string_output_stream(0);
  {
   volatile bool unwinding = FALSE;
   cl_index v3=ECL_STACK_INDEX(cl_env_copy),v4;
   ecl_frame_ptr next_fr;
   ecl_frs_push(cl_env_copy,ECL_PROTECT_TAG);
   if (__ecl_frs_push_result) {
     unwinding = TRUE; next_fr=cl_env_copy->nlj_fr;
   } else {
   {
    cl_object v5value;
    v5value = ECL_NIL;
L5:;
    v5value = cl_read_byte(1, v1input_stream);
    if (!(ecl_zerop(v5value))) { goto L9; }
    goto L6;
L9:;
    {
     ecl_character v6;
     v6 = ecl_fixnum(v5value);
     cl_write_char(2, CODE_CHAR(v6), v2string);
    }
    goto L5;
L6:;
   }
   cl_env_copy->values[0] = cl_get_output_stream_string(v2string);
   }
   ecl_frs_pop(cl_env_copy);
   v4=ecl_stack_push_values(cl_env_copy);
   cl_close(1, v2string);
   ecl_stack_pop_values(cl_env_copy,v4);
   if (unwinding) ecl_unwind(cl_env_copy,next_fr);
   ECL_STACK_SET_INDEX(cl_env_copy,v3);
   return cl_env_copy->values[0];
  }
 }
}
/*      function definition for PARSE-GZIP-CHECKSUM                   */
/*      optimize speed 3, debug 1, space 1, safety 0                  */
static cl_object L40parse_gzip_checksum(cl_object v1input_stream)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 T0 = cl_read_byte(1, v1input_stream);
 T1 = cl_read_byte(1, v1input_stream);
 T2 = ecl_times(T1,ecl_make_fixnum(256));
 T3 = ecl_plus(T0,T2);
 T4 = cl_read_byte(1, v1input_stream);
 T5 = ecl_times(T4,ecl_make_fixnum(256));
 T6 = ecl_times(T5,ecl_make_fixnum(256));
 T7 = ecl_plus(T3,T6);
 T8 = cl_read_byte(1, v1input_stream);
 T9 = ecl_times(T8,ecl_make_fixnum(256));
 T10 = ecl_times(T9,ecl_make_fixnum(256));
 T11 = ecl_times(T10,ecl_make_fixnum(256));
 value0 = ecl_plus(T7,T11);
 cl_env_copy->nvalues = 1;
 return value0;
}
/*      function definition for PARSE-GZIP-FOOTER                     */
/*      optimize speed 3, debug 1, space 1, safety 0                  */
static cl_object L41parse_gzip_footer(cl_object v1input_stream)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 T0 = L40parse_gzip_checksum(v1input_stream);
 T1 = cl_read_byte(1, v1input_stream);
 T2 = cl_read_byte(1, v1input_stream);
 T3 = ecl_times(T2,ecl_make_fixnum(256));
 T4 = ecl_plus(T1,T3);
 T5 = cl_read_byte(1, v1input_stream);
 T6 = ecl_times(T5,ecl_make_fixnum(256));
 T7 = ecl_times(T6,ecl_make_fixnum(256));
 T8 = ecl_plus(T4,T7);
 T9 = cl_read_byte(1, v1input_stream);
 T10 = ecl_times(T9,ecl_make_fixnum(256));
 T11 = ecl_times(T10,ecl_make_fixnum(256));
 T12 = ecl_times(T11,ecl_make_fixnum(256));
 T13 = ecl_plus(T8,T12);
 cl_env_copy->nvalues = 2;
 cl_env_copy->values[1] = T13;
 cl_env_copy->values[0] = T0;
 return cl_env_copy->values[0];
}
/*      function definition for INFLATE-STREAM                        */
/*      optimize speed 3, debug 1, space 1, safety 0                  */
static cl_object L42inflate_stream(cl_narg narg, cl_object v1input_stream, cl_object v2output_stream, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 cl_object v3checksum;
 ecl_va_list args; ecl_va_start(args,v2output_stream,narg,2);
 {
  cl_object keyvars[2];
  cl_parse_key(args,1,L42inflate_streamkeys,keyvars,NULL,FALSE);
  ecl_va_end(args);
  v3checksum = keyvars[0];
 }
 {
  cl_object v4window_stream;
  if (!((v3checksum)==(ECL_NIL))) { goto L3; }
  T0 = ecl_make_fixnum(0);
  goto L2;
L3:;
  if (!(ecl_eql(v3checksum,VV[34]))) { goto L6; }
  T0 = ecl_make_fixnum(0);
  goto L2;
L6:;
  if (!(ecl_eql(v3checksum,VV[33]))) { goto L8; }
  T0 = ecl_make_fixnum(1);
  goto L2;
L8:;
  T0 = si_ecase_error(v3checksum, VV[105]);
L2:;
  v4window_stream = L10make_sliding_window_stream(6, ECL_SYM("STREAM",1340), v2output_stream, VV[102], v3checksum, VV[103], T0);
  {
   cl_object v5bit_stream;
   v5bit_stream = L16make_bit_stream(2, ECL_SYM("STREAM",1340), v1input_stream);
L11:;
   if ((L32decode_block(v5bit_stream, v4window_stream))!=ECL_NIL) { goto L13; }
   goto L12;
L13:;
   goto L11;
L12:;
   L14sliding_window_stream_flush(v4window_stream);
   if (Null(v3checksum)) { goto L16; }
   value0 = ecl_function_dispatch(cl_env_copy,VV[27])(1, v4window_stream) /*  SLIDING-WINDOW-STREAM-CHECKSUM-VALUE */;
   return value0;
L16:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for INFLATE-ZLIB-STREAM                   */
/*      optimize speed 3, debug 1, space 1, safety 0                  */
static cl_object L43inflate_zlib_stream(cl_narg narg, cl_object v1input_stream, cl_object v2output_stream, ...)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 cl_object v3check_checksum;
 ecl_va_list args; ecl_va_start(args,v2output_stream,narg,2);
 {
  cl_object keyvars[2];
  cl_parse_key(args,1,L43inflate_zlib_streamkeys,keyvars,NULL,FALSE);
  ecl_va_end(args);
  v3check_checksum = keyvars[0];
 }
 {
  cl_object v5;                                   /*  CM              */
  cl_object v6;                                   /*  CINFO           */
  cl_object v7;                                   /*  DICTID          */
  cl_object v8;                                   /*  FLEVEL          */
  value0 = L33parse_zlib_header(v1input_stream);
  {
   const int v9 = cl_env_copy->nvalues;
   v5 = value0;
   cl_object v10;
   v10 = (v9<=1)? ECL_NIL : cl_env_copy->values[1];
   v6 = v10;
   v10 = (v9<=2)? ECL_NIL : cl_env_copy->values[2];
   v7 = v10;
   v10 = (v9<=3)? ECL_NIL : cl_env_copy->values[3];
   v8 = v10;
  }
  if (ecl_number_equalp(v5,ecl_make_fixnum(8))) { goto L2; }
  T0 = ecl_list1(v5);
  cl_error(5, VV[3], ECL_SYM("FORMAT-CONTROL",1263), VV[107], ECL_SYM("FORMAT-ARGUMENTS",1262), T0);
L2:;
  if (ecl_lowereq(v6,ecl_make_fixnum(7))) { goto L4; }
  T0 = ecl_plus(ecl_make_fixnum(8),v6);
  T1 = ecl_plus(ecl_make_fixnum(8),v6);
  T2 = ecl_expt(ecl_make_fixnum(2),T1);
  T3 = cl_list(2, T0, T2);
  cl_error(5, VV[3], ECL_SYM("FORMAT-CONTROL",1263), VV[108], ECL_SYM("FORMAT-ARGUMENTS",1262), T3);
L4:;
  if (v7==ECL_NIL) { goto L6; }
  T0 = ecl_list1(v7);
  cl_error(5, VV[3], ECL_SYM("FORMAT-CONTROL",1263), VV[109], ECL_SYM("FORMAT-ARGUMENTS",1262), T0);
L6:;
  {
   cl_object v9;
   cl_object v10;
   if (Null(v3check_checksum)) { goto L10; }
   T0 = VV[33];
   goto L9;
L10:;
   T0 = ECL_NIL;
L9:;
   v9 = L42inflate_stream(4, v1input_stream, v2output_stream, VV[102], T0);
   v10 = L35parse_zlib_footer(v1input_stream);
   if (Null(v3check_checksum)) { goto L13; }
   if (ecl_number_equalp(v10,v9)) { goto L13; }
   T0 = cl_list(2, v10, v9);
   cl_error(5, VV[3], ECL_SYM("FORMAT-CONTROL",1263), VV[110], ECL_SYM("FORMAT-ARGUMENTS",1262), T0);
L13:;
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v8;
   cl_env_copy->values[0] = v10;
   return cl_env_copy->values[0];
  }
 }
}
/*      function definition for INFLATE-GZIP-STREAM                   */
/*      optimize speed 3, debug 1, space 1, safety 0                  */
static cl_object L44inflate_gzip_stream(cl_narg narg, cl_object v1input_stream, cl_object v2output_stream, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 cl_object v3check_checksum;
 ecl_va_list args; ecl_va_start(args,v2output_stream,narg,2);
 {
  cl_object keyvars[2];
  cl_parse_key(args,1,L44inflate_gzip_streamkeys,keyvars,NULL,FALSE);
  ecl_va_end(args);
  v3check_checksum = keyvars[0];
 }
 {
  cl_object v5;                                   /*  CM              */
  cl_object v6;                                   /*  MTIME           */
  cl_object v7;                                   /*  FNAME           */
  cl_object v8;                                   /*  FCOMMENT        */
  value0 = L36parse_gzip_header(v1input_stream);
  {
   const int v9 = cl_env_copy->nvalues;
   v5 = value0;
   cl_object v10;
   v10 = (v9<=2)? ECL_NIL : cl_env_copy->values[2];
   v6 = v10;
   v10 = (v9<=6)? ECL_NIL : cl_env_copy->values[6];
   v7 = v10;
   v10 = (v9<=7)? ECL_NIL : cl_env_copy->values[7];
   v8 = v10;
  }
  if (ecl_number_equalp(v5,ecl_make_fixnum(8))) { goto L2; }
  T0 = ecl_list1(v5);
  cl_error(5, VV[5], ECL_SYM("FORMAT-CONTROL",1263), VV[107], ECL_SYM("FORMAT-ARGUMENTS",1262), T0);
L2:;
  {
   cl_object v9;
   cl_object v10;
   if (Null(v3check_checksum)) { goto L6; }
   T0 = VV[34];
   goto L5;
L6:;
   T0 = ECL_NIL;
L5:;
   v9 = L42inflate_stream(4, v1input_stream, v2output_stream, VV[102], T0);
   v10 = L41parse_gzip_footer(v1input_stream);
   if (Null(v3check_checksum)) { goto L9; }
   if (ecl_number_equalp(v10,v9)) { goto L9; }
   T0 = cl_list(2, v10, v9);
   cl_error(5, VV[5], ECL_SYM("FORMAT-CONTROL",1263), VV[110], ECL_SYM("FORMAT-ARGUMENTS",1262), T0);
L9:;
   cl_env_copy->nvalues = 4;
   cl_env_copy->values[3] = v8;
   cl_env_copy->values[2] = v6;
   cl_env_copy->values[1] = v7;
   cl_env_copy->values[0] = v10;
   return cl_env_copy->values[0];
  }
 }
}
/*      function definition for GUNZIP                                */
/*      optimize speed 3, debug 1, space 1, safety 0                  */
static cl_object L45gunzip(cl_object volatile v1input_file, cl_object volatile v2output_file)
{
 cl_object volatile env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
TTL:
 {
  volatile cl_object v3input;
  v3input = cl_open(3, v1input_file, ECL_SYM("ELEMENT-TYPE",1246), VV[41]);
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
     volatile cl_object v6;
     v6 = _ecl_inner_frame;
     {
      volatile cl_object v7output;
      v7output = cl_open(7, v2output_file, ECL_SYM("DIRECTION",1240), ECL_SYM("OUTPUT",1309), ECL_SYM("IF-EXISTS",1270), ECL_SYM("SUPERSEDE",1341), ECL_SYM("ELEMENT-TYPE",1246), VV[41]);
      {
       volatile bool unwinding = FALSE;
       cl_index v8=ECL_STACK_INDEX(cl_env_copy),v9;
       ecl_frame_ptr next_fr;
       ecl_frs_push(cl_env_copy,ECL_PROTECT_TAG);
       if (__ecl_frs_push_result) {
         unwinding = TRUE; next_fr=cl_env_copy->nlj_fr;
       } else {
       {
        struct ecl_stack_frame _ecl_inner_frame_aux;
        volatile cl_object _ecl_inner_frame = ecl_stack_frame_open(cl_env_copy,(cl_object)&_ecl_inner_frame_aux,0);
        {
         cl_object v10;
         v10 = _ecl_inner_frame;
         cl_env_copy->values[0] = L44inflate_gzip_stream(2, v3input, v7output);
         ecl_stack_frame_push_values(v10);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         if (Null(v7output)) { goto L14; }
         cl_close(1, v7output);
L14:;cl_env_copy->values[0]=ecl_stack_frame_pop_values(v10);
        }
        ecl_stack_frame_close(_ecl_inner_frame);
       }
       }
       ecl_frs_pop(cl_env_copy);
       v9=ecl_stack_push_values(cl_env_copy);
       if (Null(v7output)) { goto L16; }
       cl_close(3, v7output, ECL_SYM("ABORT",1217), ECL_T);
L16:;
       ecl_stack_pop_values(cl_env_copy,v9);
       if (unwinding) ecl_unwind(cl_env_copy,next_fr);
       ECL_STACK_SET_INDEX(cl_env_copy,v8);
      }
     }
     ecl_stack_frame_push_values(v6);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     if (Null(v3input)) { goto L18; }
     cl_close(1, v3input);
L18:;cl_env_copy->values[0]=ecl_stack_frame_pop_values(v6);
    }
    ecl_stack_frame_close(_ecl_inner_frame);
   }
   }
   ecl_frs_pop(cl_env_copy);
   v5=ecl_stack_push_values(cl_env_copy);
   if (Null(v3input)) { goto L20; }
   cl_close(3, v3input, ECL_SYM("ABORT",1217), ECL_T);
L20:;
   ecl_stack_pop_values(cl_env_copy,v5);
   if (unwinding) ecl_unwind(cl_env_copy,next_fr);
   ECL_STACK_SET_INDEX(cl_env_copy,v4);
  }
 }
 value0 = cl_probe_file(v2output_file);
 return value0;
}

#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/ext/deflate.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _ecl6WSZmSZ7_Ptlmqq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("EXT:DEFLATE;DEFLATE.LISP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_ecl6WSZmSZ7_Ptlmqq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  ecl_function_dispatch(cl_env_copy,VV[115])(12, VVtemp[0], ECL_NIL, ECL_NIL, ECL_NIL, VVtemp[1], ECL_NIL, ECL_NIL, ECL_NIL, VVtemp[2], ECL_NIL, ECL_NIL, ECL_NIL) /*  DODEFPACKAGE */;
  si_select_package(VVtemp[0]);
  (cl_env_copy->function=(ECL_SYM("MAPC",545)->symbol.gfdef))->cfun.entry(2, ECL_SYM("PROCLAIM",668), VVtemp[3]) /*  MAPC */;
  clos_load_defclass(VV[0], VVtemp[4], ECL_NIL, ECL_NIL);
 {
  cl_object T0, T1, T2;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC2__lambda0,ECL_NIL,Cblock,0);
   T0 = v1;
  }
  T1 = cl_listX(3, ECL_SYM("INITFUNCTION",999), T0, VVtemp[6]);
  T2 = ecl_list1(T1);
  clos_load_defclass(VV[1], VVtemp[5], T2, ECL_NIL);
 }
 {
  cl_object T0, T1, T2;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC4__lambda2,ECL_NIL,Cblock,0);
   T0 = v1;
  }
  T1 = cl_listX(3, ECL_SYM("INITFUNCTION",999), T0, VVtemp[7]);
  T2 = ecl_list1(T1);
  clos_load_defclass(VV[3], VVtemp[5], T2, ECL_NIL);
 }
 {
  cl_object T0, T1, T2;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC6__lambda4,ECL_NIL,Cblock,0);
   T0 = v1;
  }
  T1 = cl_listX(3, ECL_SYM("INITFUNCTION",999), T0, VVtemp[7]);
  T2 = ecl_list1(T1);
  clos_load_defclass(VV[5], VVtemp[5], T2, ECL_NIL);
 }
  si_Xmake_constant(VV[6], ecl_make_fixnum(1));
  si_Xmake_constant(VV[7], ecl_make_fixnum(65521));
  (cl_env_copy->function=(ECL_SYM("MAPC",545)->symbol.gfdef))->cfun.entry(2, ECL_SYM("PROCLAIM",668), VVtemp[8]) /*  MAPC */;
  ecl_cmp_defun(VV[116]);                         /*  UPDATE-ADLER32-CHECKSUM */
  si_Xmake_constant(VV[9], ecl_make_fixnum(0));
  si_Xmake_constant(VV[10], VVtemp[9]);
  (cl_env_copy->function=(ECL_SYM("MAPC",545)->symbol.gfdef))->cfun.entry(2, ECL_SYM("PROCLAIM",668), VVtemp[10]) /*  MAPC */;
  ecl_cmp_defun(VV[117]);                         /*  GENERATE-CRC32-TABLE */
  (cl_env_copy->function=(ECL_SYM("MAPC",545)->symbol.gfdef))->cfun.entry(2, ECL_SYM("PROCLAIM",668), VVtemp[11]) /*  MAPC */;
  VV[12]= L8generate_crc32_table();
  ecl_cmp_defun(VV[118]);                         /*  UPDATE-CRC32-CHECKSUM */
  si_Xmake_constant(VV[15], ecl_make_fixnum(32768));
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  ecl_function_dispatch(cl_env_copy,VV[119])(15, VV[16], _ecl_static_0, ECL_NIL, ECL_NIL, VVtemp[12], VVtemp[13], VV[17], ECL_NIL, ECL_NIL, ECL_NIL, VVtemp[14], ecl_make_fixnum(5), ECL_NIL, ECL_NIL, VV[18]) /*  DEFINE-STRUCTURE */;
  VV[25]= cl_find_class(1, VV[16]);
  ecl_cmp_defun(VV[120]);                         /*  MAKE-SLIDING-WINDOW-STREAM */
  {
   cl_object v1package;
   v1package = cl_symbol_package(VV[27]);
   if (Null(v1package)) { goto L63; }
   if (Null(si_package_locked_p(v1package))) { goto L63; }
   if (!(ECL_SYM_VAL(cl_env_copy,ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L63; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[15], VVtemp[16], VVtemp[17], ECL_SYM("PACKAGE",1311), v1package);
  }
L63:;
  {
   cl_object volatile v2;
   v2 = ecl_make_cfun((cl_objectfn_fixed)LC11__lambda32,ECL_NIL,Cblock,2);
   T0 = v2;
  }
  si_put_sysprop(VV[27], VV[28], T0);
  ecl_function_dispatch(cl_env_copy,ECL_SYM("REMCAS",1522))(1, VV[29]) /*  REMCAS */;
  {
   cl_object v2package;
   v2package = cl_symbol_package(VV[30]);
   if (Null(v2package)) { goto L72; }
   if (Null(si_package_locked_p(v2package))) { goto L72; }
   if (!(ECL_SYM_VAL(cl_env_copy,ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L72; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[15], VVtemp[16], VVtemp[18], ECL_SYM("PACKAGE",1311), v2package);
  }
L72:;
  {
   cl_object volatile v3;
   v3 = ecl_make_cfun((cl_objectfn_fixed)LC12__lambda36,ECL_NIL,Cblock,2);
   T0 = v3;
  }
  si_put_sysprop(VV[30], VV[28], T0);
  ecl_function_dispatch(cl_env_copy,ECL_SYM("REMCAS",1522))(1, VV[31]) /*  REMCAS */;
  ecl_function_dispatch(cl_env_copy,ECL_SYM("REMCAS",1522))(1, VV[32]) /*  REMCAS */;
 }
  (cl_env_copy->function=(ECL_SYM("MAPC",545)->symbol.gfdef))->cfun.entry(2, ECL_SYM("PROCLAIM",668), VVtemp[19]) /*  MAPC */;
  ecl_cmp_defun(VV[127]);                         /*  SLIDING-WINDOW-STREAM-WRITE-BYTE */
  si_put_sysprop(VV[35], ECL_SYM("INLINE",436), VVtemp[20]);
  ecl_cmp_defun(VV[128]);                         /*  SLIDING-WINDOW-STREAM-FLUSH */
  ecl_cmp_defun(VV[129]);                         /*  SLIDING-WINDOW-STREAM-COPY-BYTES */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  ecl_function_dispatch(cl_env_copy,VV[119])(15, VV[38], _ecl_static_1, ECL_NIL, ECL_NIL, VVtemp[21], VVtemp[22], VV[39], ECL_NIL, ECL_NIL, ECL_NIL, VVtemp[23], ecl_make_fixnum(4), ECL_NIL, ECL_NIL, VV[40]) /*  DEFINE-STRUCTURE */;
  VV[46]= cl_find_class(1, VV[38]);
  ecl_cmp_defun(VV[130]);                         /*  MAKE-BIT-STREAM */
  {
   cl_object v1package;
   v1package = cl_symbol_package(VV[48]);
   if (Null(v1package)) { goto L106; }
   if (Null(si_package_locked_p(v1package))) { goto L106; }
   if (!(ECL_SYM_VAL(cl_env_copy,ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L106; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[15], VVtemp[16], VVtemp[24], ECL_SYM("PACKAGE",1311), v1package);
  }
L106:;
  {
   cl_object volatile v2;
   v2 = ecl_make_cfun((cl_objectfn_fixed)LC17__lambda90,ECL_NIL,Cblock,2);
   T0 = v2;
  }
  si_put_sysprop(VV[48], VV[28], T0);
  {
   cl_object v2package;
   v2package = cl_symbol_package(VV[49]);
   if (Null(v2package)) { goto L114; }
   if (Null(si_package_locked_p(v2package))) { goto L114; }
   if (!(ECL_SYM_VAL(cl_env_copy,ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L114; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[15], VVtemp[16], VVtemp[25], ECL_SYM("PACKAGE",1311), v2package);
  }
L114:;
  {
   cl_object volatile v3;
   v3 = ecl_make_cfun((cl_objectfn_fixed)LC18__lambda94,ECL_NIL,Cblock,2);
   T0 = v3;
  }
  si_put_sysprop(VV[49], VV[28], T0);
  {
   cl_object v3package;
   v3package = cl_symbol_package(VV[50]);
   if (Null(v3package)) { goto L122; }
   if (Null(si_package_locked_p(v3package))) { goto L122; }
   if (!(ECL_SYM_VAL(cl_env_copy,ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L122; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[15], VVtemp[16], VVtemp[26], ECL_SYM("PACKAGE",1311), v3package);
  }
L122:;
  {
   cl_object volatile v4;
   v4 = ecl_make_cfun((cl_objectfn_fixed)LC19__lambda98,ECL_NIL,Cblock,2);
   T0 = v4;
  }
  si_put_sysprop(VV[50], VV[28], T0);
  ecl_function_dispatch(cl_env_copy,ECL_SYM("REMCAS",1522))(1, VV[51]) /*  REMCAS */;
 }
  (cl_env_copy->function=(ECL_SYM("MAPC",545)->symbol.gfdef))->cfun.entry(2, ECL_SYM("PROCLAIM",668), VVtemp[27]) /*  MAPC */;
  ecl_cmp_defun(VV[135]);                         /*  BIT-STREAM-GET-BYTE */
  si_put_sysprop(VV[52], ECL_SYM("INLINE",436), VVtemp[28]);
  (cl_env_copy->function=(ECL_SYM("MAPC",545)->symbol.gfdef))->cfun.entry(2, ECL_SYM("PROCLAIM",668), VVtemp[29]) /*  MAPC */;
  ecl_cmp_defun(VV[136]);                         /*  BIT-STREAM-READ-BITS */
  si_put_sysprop(VV[53], ECL_SYM("INLINE",436), VVtemp[30]);
  (cl_env_copy->function=(ECL_SYM("MAPC",545)->symbol.gfdef))->cfun.entry(2, ECL_SYM("PROCLAIM",668), VVtemp[31]) /*  MAPC */;
  ecl_cmp_defun(VV[137]);                         /*  BIT-STREAM-COPY-BLOCK */
  si_put_sysprop(VV[55], ECL_SYM("INLINE",436), VVtemp[32]);
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  ecl_function_dispatch(cl_env_copy,VV[119])(15, VV[56], _ecl_static_2, ECL_NIL, ECL_NIL, VVtemp[33], VVtemp[34], VV[57], ECL_NIL, ECL_NIL, ECL_NIL, VVtemp[35], ecl_make_fixnum(2), ECL_NIL, ECL_NIL, VV[58]) /*  DEFINE-STRUCTURE */;
  VV[62]= cl_find_class(1, VV[56]);
  ecl_cmp_defun(VV[138]);                         /*  MAKE-DECODE-TREE */
  {
   cl_object v1package;
   v1package = cl_symbol_package(VV[64]);
   if (Null(v1package)) { goto L161; }
   if (Null(si_package_locked_p(v1package))) { goto L161; }
   if (!(ECL_SYM_VAL(cl_env_copy,ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L161; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[15], VVtemp[16], VVtemp[36], ECL_SYM("PACKAGE",1311), v1package);
  }
L161:;
  {
   cl_object volatile v2;
   v2 = ecl_make_cfun((cl_objectfn_fixed)LC24__lambda177,ECL_NIL,Cblock,2);
   T0 = v2;
  }
  si_put_sysprop(VV[64], VV[28], T0);
  ecl_function_dispatch(cl_env_copy,ECL_SYM("REMCAS",1522))(1, VV[65]) /*  REMCAS */;
 }
  ecl_cmp_defun(VV[139]);                         /*  MAKE-HUFFMAN-DECODE-TREE */
  (cl_env_copy->function=(ECL_SYM("MAPC",545)->symbol.gfdef))->cfun.entry(2, ECL_SYM("PROCLAIM",668), VVtemp[37]) /*  MAPC */;
  ecl_cmp_defun(VV[140]);                         /*  READ-HUFFMAN-CODE */
  si_put_sysprop(VV[71], ECL_SYM("INLINE",436), VVtemp[38]);
 {
  cl_object T0, T1, T2, T3, T4;
  cl_object volatile env0 = ECL_NIL;
  si_Xmake_special(VV[72]);
  T0 = cl_make_sequence(4, ECL_SYM("VECTOR",900), ecl_make_fixnum(144), ECL_SYM("INITIAL-ELEMENT",1277), ecl_make_fixnum(8));
  T1 = cl_make_sequence(4, ECL_SYM("VECTOR",900), ecl_make_fixnum(112), ECL_SYM("INITIAL-ELEMENT",1277), ecl_make_fixnum(9));
  T2 = cl_make_sequence(4, ECL_SYM("VECTOR",900), ecl_make_fixnum(24), ECL_SYM("INITIAL-ELEMENT",1277), ecl_make_fixnum(7));
  T3 = cl_make_sequence(4, ECL_SYM("VECTOR",900), ecl_make_fixnum(8), ECL_SYM("INITIAL-ELEMENT",1277), ecl_make_fixnum(8));
  T4 = cl_concatenate(5, ECL_SYM("VECTOR",900), T0, T1, T2, T3);
  ECL_SETQ(cl_env_copy,VV[72],L25make_huffman_decode_tree(T4));
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  si_Xmake_special(VV[73]);
  T0 = cl_make_sequence(4, ECL_SYM("VECTOR",900), ecl_make_fixnum(32), ECL_SYM("INITIAL-ELEMENT",1277), ecl_make_fixnum(5));
  ECL_SETQ(cl_env_copy,VV[73],L25make_huffman_decode_tree(T0));
 }
  si_Xmake_special(VV[74]);
  ECL_SETQ(cl_env_copy,VV[74],VVtemp[39]);
  ecl_cmp_defun(VV[141]);                         /*  DECODE-CODE-LENGTH-ENTRIES */
  ecl_cmp_defun(VV[142]);                         /*  DECODE-HUFFMAN-TABLES */
  (cl_env_copy->function=(ECL_SYM("MAPC",545)->symbol.gfdef))->cfun.entry(2, ECL_SYM("PROCLAIM",668), VVtemp[40]) /*  MAPC */;
  ecl_cmp_defun(VV[143]);                         /*  DECODE-LENGTH-ENTRY */
  si_put_sysprop(VV[80], ECL_SYM("INLINE",436), VVtemp[41]);
  (cl_env_copy->function=(ECL_SYM("MAPC",545)->symbol.gfdef))->cfun.entry(2, ECL_SYM("PROCLAIM",668), VVtemp[42]) /*  MAPC */;
  ecl_cmp_defun(VV[144]);                         /*  DECODE-DISTANCE-ENTRY */
  si_put_sysprop(VV[81], ECL_SYM("INLINE",436), VVtemp[43]);
  ecl_cmp_defun(VV[145]);                         /*  DECODE-HUFFMAN-BLOCK */
  ecl_cmp_defun(VV[146]);                         /*  DECODE-BLOCK    */
  ecl_cmp_defun(VV[147]);                         /*  PARSE-ZLIB-HEADER */
  ecl_cmp_defun(VV[148]);                         /*  PARSE-ZLIB-CHECKSUM */
  ecl_cmp_defun(VV[149]);                         /*  PARSE-ZLIB-FOOTER */
  si_Xmake_constant(VV[90], ecl_make_fixnum(31));
  si_Xmake_constant(VV[91], ecl_make_fixnum(139));
  ecl_cmp_defun(VV[150]);                         /*  PARSE-GZIP-HEADER */
  ecl_cmp_defun(VV[151]);                         /*  PARSE-GZIP-MTIME */
  ecl_cmp_defun(VV[152]);                         /*  PARSE-GZIP-EXTRA */
  ecl_cmp_defun(VV[153]);                         /*  PARSE-GZIP-STRING */
  ecl_cmp_defun(VV[154]);                         /*  PARSE-GZIP-CHECKSUM */
  ecl_cmp_defun(VV[155]);                         /*  PARSE-GZIP-FOOTER */
  ecl_cmp_defun(VV[156]);                         /*  INFLATE-STREAM  */
  ecl_cmp_defun(VV[157]);                         /*  INFLATE-ZLIB-STREAM */
  ecl_cmp_defun(VV[159]);                         /*  INFLATE-GZIP-STREAM */
  ecl_cmp_defun(VV[160]);                         /*  GUNZIP          */
  cl_provide(VV[114]);
}
