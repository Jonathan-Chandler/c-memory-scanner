/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:LSP;PPRINT.LSP                                    */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/clos/pprint.eclh"
/*      local function LAMBDA4                                        */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC1__lambda4()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 value0 = ECL_SYM_VAL(cl_env_copy,ECL_SYM("*PRINT-RIGHT-MARGIN*",60));
 if ((value0)!=ECL_NIL) { goto L2; }
 value0 = ecl_make_fixnum(80);
 cl_env_copy->nvalues = 1;
 return value0;
L2:;
 cl_env_copy->nvalues = 1;
 return value0;
}
/*      local function LAMBDA5                                        */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC2__lambda5()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 value0 = cl_make_string(1, ecl_make_fixnum(128));
 return value0;
}
/*      local function LAMBDA6                                        */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC3__lambda6()
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 T0 = L17make_logical_block(0);
 value0 = ecl_list1(T0);
 cl_env_copy->nvalues = 1;
 return value0;
}
/*      local function LAMBDA7                                        */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC4__lambda7()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 value0 = cl_make_string(1, ecl_make_fixnum(128));
 return value0;
}
/*      local function LAMBDA8                                        */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC5__lambda8()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 value0 = cl_make_string(1, ecl_make_fixnum(128));
 return value0;
}
/*      function definition for PRETTY-STREAM-P                       */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L6pretty_stream_p(cl_object v1stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 value0 = si_of_class_p(2, v1stream, VV[4]);
 return value0;
}
/*      function definition for MAKE-PRETTY-STREAM                    */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L7make_pretty_stream(cl_object v1target)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 value0 = si_file_column(v1target);
 if ((value0)!=ECL_NIL) { goto L3; }
 T0 = ecl_make_fixnum(0);
 goto L1;
L3:;
 T0 = value0;
 goto L1;
L1:;
 value0 = (cl_env_copy->function=(ECL_SYM("MAKE-INSTANCE",951)->symbol.gfdef))->cfun.entry(5, VV[4], VV[7], v1target, VV[8], T0) /*  MAKE-INSTANCE */;
 return value0;
}
/*      local function PRINT-OBJECT                                   */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC8print_object(cl_object v1pretty_stream, cl_object v2stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 value0 = si_print_unreadable_object_function(v1pretty_stream, v2stream, ECL_T, ECL_T, ECL_NIL);
 return value0;
}
/*      function definition for INDEX-POSN                            */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L9index_posn(cl_object v1index, cl_object v2stream)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 cl_fixnum v3index;
 v3index = ecl_fixnum(v1index);
TTL:
 T0 = (v2stream)->instance.slots[5];
 value0 = ecl_plus(ecl_make_fixnum(v3index),T0);
 cl_env_copy->nvalues = 1;
 return value0;
}
/*      function definition for POSN-INDEX                            */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L10posn_index(cl_object v1posn, cl_object v2stream)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 cl_fixnum v3posn;
 v3posn = ecl_fixnum(v1posn);
TTL:
 T0 = (v2stream)->instance.slots[5];
 value0 = ecl_minus(ecl_make_fixnum(v3posn),T0);
 cl_env_copy->nvalues = 1;
 return value0;
}
/*      function definition for POSN-COLUMN                           */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L11posn_column(cl_object v1posn, cl_object v2stream)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 cl_fixnum v3posn;
 v3posn = ecl_fixnum(v1posn);
TTL:
 T1 = (v2stream)->instance.slots[5];
 T0 = ecl_minus(ecl_make_fixnum(v3posn),T1);
 value0 = L64index_column(T0, v2stream);
 return value0;
}
/*      local function STREAM-WRITE-CHAR                              */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC12gray_stream_write_char(cl_object v1stream, cl_object v2char)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 value0 = L15pretty_out(v1stream, v2char);
 return value0;
}
/*      local function STREAM-FORCE-OUTPUT                            */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC13gray_stream_force_output(cl_object v1stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 value0 = ECL_NIL;
 cl_env_copy->nvalues = 1;
 return value0;
}
/*      local function STREAM-CLEAR-OUTPUT                            */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC14gray_stream_clear_output(cl_object v1stream)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 T0 = (v1stream)->instance.slots[1];
 value0 = cl_clear_output(1, T0);
 return value0;
}
/*      function definition for PRETTY-OUT                            */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L15pretty_out(cl_object v1stream, cl_object v2char)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_character v3char;
 v3char = CHAR_CODE(v2char);
TTL:
 if (!((v3char)==((ecl_character)(10)))) { goto L1; }
 value0 = L38enqueue_newline(v1stream, VV[13]);
 return value0;
L1:;
 L66assure_space_in_buffer(v1stream, ecl_make_fixnum(1));
 {
  cl_object v4fill_pointer;
  v4fill_pointer = (v1stream)->instance.slots[4];
  T0 = (v1stream)->instance.slots[3];
  ecl_char_set(T0,ecl_fixnum(v4fill_pointer),v3char);
  {
   cl_object v5;
   v5 = ecl_one_plus(v4fill_pointer);
   value0 = (v1stream)->instance.slots[4]=(v5);
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for PRETTY-SOUT                           */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L16pretty_sout(cl_object v1stream, cl_object v2string, cl_object v3start, cl_object v4end)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 cl_fixnum v5start;
 v5start = ecl_fixnum(v3start);
TTL:
 {
  cl_object v6end;
  value0 = v4end;
  if ((value0)!=ECL_NIL) { goto L3; }
  v6end = ecl_make_fixnum((v2string)->vector.fillp);
  goto L1;
L3:;
  v6end = value0;
  goto L1;
L1:;
  if (ecl_number_equalp(ecl_make_fixnum(v5start),v6end)) { goto L5; }
  {
   cl_object v7newline;
   v7newline = cl_position(6, CODE_CHAR(10), v2string, ECL_SYM("START",1337), ecl_make_fixnum(v5start), ECL_SYM("END",1247), v6end);
   if (Null(v7newline)) { goto L8; }
   L16pretty_sout(v1stream, v2string, ecl_make_fixnum(v5start), v7newline);
   L38enqueue_newline(v1stream, VV[13]);
   v5start = (ecl_fixnum(v7newline))+1;
   v4end = v6end;
   goto TTL;
L8:;
   {
    cl_object v8chars;
    v8chars = ecl_minus(v6end,ecl_make_fixnum(v5start));
L18:;
    {
     cl_object v9available;
     cl_object v10count;
     cl_object v11fill_pointer;
     cl_object v12new_fill_ptr;
     v9available = L66assure_space_in_buffer(v1stream, v8chars);
     v10count = ((ecl_float_nan_p(v8chars) || ecl_lowereq(v9available,v8chars))?v9available:v8chars);
     v11fill_pointer = (v1stream)->instance.slots[4];
     v12new_fill_ptr = ecl_plus(v11fill_pointer,v10count);
     T0 = (v1stream)->instance.slots[3];
     cl_replace(8, T0, v2string, ECL_SYM("START1",1338), v11fill_pointer, ECL_SYM("END1",1248), v12new_fill_ptr, ECL_SYM("START2",1339), ecl_make_fixnum(v5start));
     (v1stream)->instance.slots[4]=(v12new_fill_ptr);
     v8chars = ecl_minus(v8chars,v10count);
     if (!(ecl_zerop(v10count))) { goto L32; }
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 1;
     return value0;
L32:;
     v5start = ecl_fixnum(ecl_plus(ecl_make_fixnum(v5start),v10count));
    }
    goto L18;
   }
  }
L5:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for MAKE-LOGICAL-BLOCK                    */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L17make_logical_block(cl_narg narg, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 cl_object v1;
 cl_object v2;
 cl_object v3;
 cl_object v4;
 cl_object v5;
 cl_object v6;
 ecl_va_list args; ecl_va_start(args,narg,narg,0);
 {
  cl_object keyvars[12];
  cl_parse_key(args,6,L17make_logical_blockkeys,keyvars,NULL,FALSE);
  ecl_va_end(args);
  if (Null(keyvars[6])) {
   v1 = ecl_make_fixnum(0);
  } else {
   v1 = keyvars[0];
  }
  if (Null(keyvars[7])) {
   v2 = ecl_make_fixnum(0);
  } else {
   v2 = keyvars[1];
  }
  if (Null(keyvars[8])) {
   v3 = ecl_make_fixnum(0);
  } else {
   v3 = keyvars[2];
  }
  if (Null(keyvars[9])) {
   v4 = ecl_make_fixnum(0);
  } else {
   v4 = keyvars[3];
  }
  if (Null(keyvars[10])) {
   v5 = ecl_make_fixnum(0);
  } else {
   v5 = keyvars[4];
  }
  if (Null(keyvars[11])) {
   v6 = ecl_make_fixnum(0);
  } else {
   v6 = keyvars[5];
  }
 }
 {
  cl_fixnum v7;
  v7 = 0;
  if (!(ECL_FIXNUMP(v6))) { goto L11; }
  v7 = ecl_fixnum(v6);
  if (!((v7)<=(536870911))) { goto L16; }
  if ((v7)>=(0)) { goto L7; }
  goto L8;
L16:;
  goto L8;
L11:;
  goto L8;
 }
L8:;
 ecl_function_dispatch(cl_env_copy,VV[267])(4, v6, VV[17], VV[14], VV[18]) /*  STRUCTURE-TYPE-ERROR */;
L7:;
 {
  cl_fixnum v7;
  v7 = 0;
  if (!(ECL_FIXNUMP(v5))) { goto L22; }
  v7 = ecl_fixnum(v5);
  if (!((v7)<=(536870911))) { goto L27; }
  if ((v7)>=(0)) { goto L18; }
  goto L19;
L27:;
  goto L19;
L22:;
  goto L19;
 }
L19:;
 ecl_function_dispatch(cl_env_copy,VV[267])(4, v5, VV[17], VV[14], VV[19]) /*  STRUCTURE-TYPE-ERROR */;
L18:;
 {
  cl_fixnum v7;
  v7 = 0;
  if (!(ECL_FIXNUMP(v4))) { goto L33; }
  v7 = ecl_fixnum(v4);
  if (!((v7)<=(536870911))) { goto L38; }
  if ((v7)>=(0)) { goto L29; }
  goto L30;
L38:;
  goto L30;
L33:;
  goto L30;
 }
L30:;
 ecl_function_dispatch(cl_env_copy,VV[267])(4, v4, VV[17], VV[14], VV[20]) /*  STRUCTURE-TYPE-ERROR */;
L29:;
 {
  cl_fixnum v7;
  v7 = 0;
  if (!(ECL_FIXNUMP(v3))) { goto L44; }
  v7 = ecl_fixnum(v3);
  if (!((v7)<=(536870911))) { goto L49; }
  if ((v7)>=(0)) { goto L40; }
  goto L41;
L49:;
  goto L41;
L44:;
  goto L41;
 }
L41:;
 ecl_function_dispatch(cl_env_copy,VV[267])(4, v3, VV[17], VV[14], VV[21]) /*  STRUCTURE-TYPE-ERROR */;
L40:;
 if (!(ECL_FIXNUMP(v2))) { goto L54; }
 {
  cl_object v7;
  v7 = ecl_make_fixnum(0);
  if (!(ECL_FIXNUMP(v2)||ECL_BIGNUMP(v2))) { goto L58; }
  v7 = v2;
  if (ecl_greatereq(v7,ecl_make_fixnum(0))) { goto L51; }
  goto L52;
L58:;
  goto L52;
 }
L54:;
 goto L52;
L52:;
 ecl_function_dispatch(cl_env_copy,VV[267])(4, v2, VV[0], VV[14], VV[22]) /*  STRUCTURE-TYPE-ERROR */;
L51:;
 if (!(ECL_FIXNUMP(v1))) { goto L65; }
 {
  cl_object v7;
  v7 = ecl_make_fixnum(0);
  if (!(ECL_FIXNUMP(v1)||ECL_BIGNUMP(v1))) { goto L69; }
  v7 = v1;
  if (ecl_greatereq(v7,ecl_make_fixnum(0))) { goto L62; }
  goto L63;
L69:;
  goto L63;
 }
L65:;
 goto L63;
L63:;
 ecl_function_dispatch(cl_env_copy,VV[267])(4, v1, VV[0], VV[14], VV[23]) /*  STRUCTURE-TYPE-ERROR */;
L62:;
 value0 = si_make_structure(7, VV[24], v1, v2, v3, v4, v5, v6);
 return value0;
}
/*      local function LAMBDA60                                       */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC18__lambda60(cl_object v1, cl_object v2x)
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
  T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[14]);
  T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2x, T0, ecl_make_fixnum(5), v3, v4);
  T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[14]);
  T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2x, T2, ecl_make_fixnum(5));
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
/*      local function LAMBDA64                                       */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC19__lambda64(cl_object v1, cl_object v2x)
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
  T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[14]);
  T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2x, T0, ecl_make_fixnum(4), v3, v4);
  T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[14]);
  T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2x, T2, ecl_make_fixnum(4));
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
/*      local function LAMBDA68                                       */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC20__lambda68(cl_object v1, cl_object v2x)
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
  T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[14]);
  T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2x, T0, ecl_make_fixnum(3), v3, v4);
  T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[14]);
  T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2x, T2, ecl_make_fixnum(3));
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
/*      local function LAMBDA72                                       */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC21__lambda72(cl_object v1, cl_object v2x)
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
  T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[14]);
  T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2x, T0, ecl_make_fixnum(2), v3, v4);
  T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[14]);
  T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2x, T2, ecl_make_fixnum(2));
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
/*      local function LAMBDA76                                       */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC22__lambda76(cl_object v1, cl_object v2x)
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
  T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[14]);
  T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2x, T0, ecl_make_fixnum(1), v3, v4);
  T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[14]);
  T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2x, T2, ecl_make_fixnum(1));
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
/*      local function LAMBDA80                                       */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC23__lambda80(cl_object v1, cl_object v2x)
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
  T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[14]);
  T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2x, T0, ecl_make_fixnum(0), v3, v4);
  T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[14]);
  T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2x, T2, ecl_make_fixnum(0));
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
/*      function definition for REALLY-START-LOGICAL-BLOCK            */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L24really_start_logical_block(cl_object v1stream, cl_object v2column, cl_object v3prefix, cl_object v4suffix)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 {
  cl_object v5blocks;
  cl_object v6prev_block;
  cl_object v7per_line_end;
  cl_object v8prefix_length;
  cl_object v9suffix_length;
  cl_object v10block;
  v5blocks = (v1stream)->instance.slots[8];
  v6prev_block = _ecl_car(v5blocks);
  v7per_line_end = ecl_function_dispatch(cl_env_copy,VV[30])(1, v6prev_block) /*  LOGICAL-BLOCK-PER-LINE-PREFIX-END */;
  v8prefix_length = ecl_function_dispatch(cl_env_copy,VV[29])(1, v6prev_block) /*  LOGICAL-BLOCK-PREFIX-LENGTH */;
  v9suffix_length = ecl_function_dispatch(cl_env_copy,VV[28])(1, v6prev_block) /*  LOGICAL-BLOCK-SUFFIX-LENGTH */;
  T0 = (v1stream)->instance.slots[7];
  v10block = L17make_logical_block(12, VV[33], v2column, VV[34], v2column, VV[35], v7per_line_end, VV[36], v8prefix_length, VV[37], v9suffix_length, VV[38], T0);
  {
   cl_object v11;
   v11 = CONS(v10block,v5blocks);
   (v1stream)->instance.slots[8]=(v11);
  }
  L25set_indentation(v1stream, v2column);
  if (Null(v3prefix)) { goto L15; }
  {
   cl_object v11;
   v11 = v2column;
   {
    cl_object v12;
    v12 = v10block;
    (v12)->instance.slots[2]=v11;
   }
  }
  T0 = (v1stream)->instance.slots[9];
  {
   cl_fixnum v11;
   v11 = ecl_length(v3prefix);
   T1 = ecl_minus(v2column,ecl_make_fixnum(v11));
   cl_replace(6, T0, v3prefix, ECL_SYM("START1",1338), T1, ECL_SYM("END1",1248), v2column);
  }
L15:;
  if (Null(v4suffix)) { goto L1; }
  {
   cl_object v11total_suffix;
   cl_object v12total_suffix_len;
   cl_fixnum v13additional;
   cl_object v14new_suffix_len;
   v11total_suffix = (v1stream)->instance.slots[10];
   v12total_suffix_len = ecl_make_fixnum(ecl_length(v11total_suffix));
   v13additional = ecl_length(v4suffix);
   v14new_suffix_len = ecl_plus(v9suffix_length,ecl_make_fixnum(v13additional));
   if (!(ecl_greater(v14new_suffix_len,v12total_suffix_len))) { goto L28; }
   {
    cl_object v15new_total_suffix_len;
    T0 = ecl_times(v12total_suffix_len,ecl_make_fixnum(2));
    T1 = ecl_times(ecl_make_fixnum(v13additional),ecl_make_fixnum(5));
    T2 = ecl_floor2(T1,ecl_make_fixnum(4));
    T3 = ecl_plus(v9suffix_length,T2);
    v15new_total_suffix_len = ((ecl_float_nan_p(T3) || ecl_greatereq(T0,T3))?T0:T3);
    T0 = cl_make_string(1, v15new_total_suffix_len);
    T1 = ecl_minus(v15new_total_suffix_len,v9suffix_length);
    T2 = ecl_minus(v12total_suffix_len,v9suffix_length);
    v11total_suffix = cl_replace(6, T0, v11total_suffix, ECL_SYM("START1",1338), T1, ECL_SYM("START2",1339), T2);
    v12total_suffix_len = v15new_total_suffix_len;
    (v1stream)->instance.slots[10]=(v11total_suffix);
   }
L28:;
   T0 = ecl_minus(v12total_suffix_len,v14new_suffix_len);
   T1 = ecl_minus(v12total_suffix_len,v9suffix_length);
   cl_replace(6, v11total_suffix, v4suffix, ECL_SYM("START1",1338), T0, ECL_SYM("END1",1248), T1);
   {
    cl_object v15;
    v15 = v14new_suffix_len;
    {
     cl_object v16;
     v16 = v10block;
     (v16)->instance.slots[4]=v15;
    }
   }
  }
 }
L1:;
 value0 = ECL_NIL;
 cl_env_copy->nvalues = 1;
 return value0;
}
/*      function definition for SET-INDENTATION                       */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L25set_indentation(cl_object v1stream, cl_object v2column)
{
 cl_object T0, T1, T2, T3, T4, T5, T6;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 {
  cl_object v3prefix;
  cl_fixnum v4prefix_len;
  cl_object v5block;
  cl_object v6current;
  cl_object v7minimum;
  cl_object v8column;
  v3prefix = (v1stream)->instance.slots[9];
  v4prefix_len = ecl_length(v3prefix);
  T0 = (v1stream)->instance.slots[8];
  v5block = _ecl_car(T0);
  v6current = ecl_function_dispatch(cl_env_copy,VV[29])(1, v5block) /*  LOGICAL-BLOCK-PREFIX-LENGTH */;
  v7minimum = ecl_function_dispatch(cl_env_copy,VV[30])(1, v5block) /*  LOGICAL-BLOCK-PER-LINE-PREFIX-END */;
  v8column = ((ecl_float_nan_p(v2column) || ecl_greatereq(v7minimum,v2column))?v7minimum:v2column);
  if (!(ecl_greater(v8column,ecl_make_fixnum(v4prefix_len)))) { goto L10; }
  T0 = ecl_times(ecl_make_fixnum(v4prefix_len),ecl_make_fixnum(2));
  T1 = ecl_minus(v8column,ecl_make_fixnum(v4prefix_len));
  T2 = ecl_times(T1,ecl_make_fixnum(5));
  T3 = ecl_floor2(T2,ecl_make_fixnum(4));
  T4 = ecl_plus(ecl_make_fixnum(v4prefix_len),T3);
  T5 = ((ecl_float_nan_p(T4) || ecl_greatereq(T0,T4))?T0:T4);
  T6 = cl_make_string(1, T5);
  v3prefix = cl_replace(4, T6, v3prefix, ECL_SYM("END1",1248), v6current);
  (v1stream)->instance.slots[9]=(v3prefix);
L10:;
  if (!(ecl_greater(v8column,v6current))) { goto L15; }
  cl_fill(6, v3prefix, CODE_CHAR(32), ECL_SYM("START",1337), v6current, ECL_SYM("END",1247), v8column);
L15:;
  {
   cl_object v9;
   v9 = v8column;
   {
    cl_object v10;
    v10 = v5block;
    value0 = (v10)->instance.slots[3]=v9;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      function definition for REALLY-END-LOGICAL-BLOCK              */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L26really_end_logical_block(cl_object v1stream)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 {
  cl_object v2old;
  cl_object v3old_indent;
  cl_object v4new;
  cl_object v5new_indent;
  {
   cl_object v6;
   v6 = (v1stream)->instance.slots[8];
   if (Null(v6)) { goto L6; }
   {
    cl_object v7;
    v7 = ECL_CONS_CDR(v6);
    (v1stream)->instance.slots[8]=(v7);
    v6 = ECL_CONS_CAR(v6);
   }
L6:;
   v2old = v6;
  }
  v3old_indent = ecl_function_dispatch(cl_env_copy,VV[29])(1, v2old) /*  LOGICAL-BLOCK-PREFIX-LENGTH */;
  T0 = (v1stream)->instance.slots[8];
  v4new = _ecl_car(T0);
  v5new_indent = ecl_function_dispatch(cl_env_copy,VV[29])(1, v4new) /*  LOGICAL-BLOCK-PREFIX-LENGTH */;
  if (!(ecl_greater(v5new_indent,v3old_indent))) { goto L1; }
  T0 = (v1stream)->instance.slots[9];
  cl_fill(6, T0, CODE_CHAR(32), ECL_SYM("START",1337), v3old_indent, ECL_SYM("END",1247), v5new_indent);
 }
L1:;
 value0 = ECL_NIL;
 cl_env_copy->nvalues = 1;
 return value0;
}
/*      function definition for MAKE-QUEUED-OP                        */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L27make_queued_op(cl_narg narg, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 cl_object v1;
 ecl_va_list args; ecl_va_start(args,narg,narg,0);
 {
  cl_object keyvars[2];
  cl_parse_key(args,1,L27make_queued_opkeys,keyvars,NULL,FALSE);
  ecl_va_end(args);
  if (Null(keyvars[1])) {
   v1 = ecl_make_fixnum(0);
  } else {
   v1 = keyvars[0];
  }
 }
 if (ECL_FIXNUMP(v1)) { goto L2; }
 ecl_function_dispatch(cl_env_copy,VV[267])(4, v1, VV[1], VV[39], VV[1]) /*  STRUCTURE-TYPE-ERROR */;
L2:;
 value0 = si_make_structure(2, VV[42], v1);
 return value0;
}
/*      local function LAMBDA113                                      */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC28__lambda113(cl_object v1, cl_object v2x)
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
  T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[39]);
  T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2x, T0, ecl_make_fixnum(0), v3, v4);
  T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[39]);
  T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2x, T2, ecl_make_fixnum(0));
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
/*      function definition for MAKE-SECTION-START                    */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L29make_section_start(cl_narg narg, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 cl_object v1;
 cl_object v2;
 cl_object v3;
 ecl_va_list args; ecl_va_start(args,narg,narg,0);
 {
  cl_object keyvars[6];
  cl_parse_key(args,3,L29make_section_startkeys,keyvars,NULL,FALSE);
  ecl_va_end(args);
  if (Null(keyvars[3])) {
   v1 = ecl_make_fixnum(0);
  } else {
   v1 = keyvars[0];
  }
  if (Null(keyvars[4])) {
   v2 = ecl_make_fixnum(0);
  } else {
   v2 = keyvars[1];
  }
  v3 = keyvars[2];
 }
 if (v3==ECL_NIL) { goto L3; }
 if ((si_of_class_p(2, v3, VV[48]))!=ECL_NIL) { goto L3; }
 if ((si_of_class_p(2, v3, VV[49]))!=ECL_NIL) { goto L3; }
 ecl_function_dispatch(cl_env_copy,VV[267])(4, v3, VV[50], VV[45], VV[51]) /*  STRUCTURE-TYPE-ERROR */;
L3:;
 {
  cl_fixnum v4;
  v4 = 0;
  if (!(ECL_FIXNUMP(v2))) { goto L11; }
  v4 = ecl_fixnum(v2);
  if (!((v4)<=(536870911))) { goto L16; }
  if ((v4)>=(0)) { goto L7; }
  goto L8;
L16:;
  goto L8;
L11:;
  goto L8;
 }
L8:;
 ecl_function_dispatch(cl_env_copy,VV[267])(4, v2, VV[17], VV[45], VV[52]) /*  STRUCTURE-TYPE-ERROR */;
L7:;
 if (ECL_FIXNUMP(v1)) { goto L18; }
 ecl_function_dispatch(cl_env_copy,VV[267])(4, v1, VV[1], VV[45], VV[1]) /*  STRUCTURE-TYPE-ERROR */;
L18:;
 value0 = si_make_structure(4, VV[53], v1, v2, v3);
 return value0;
}
/*      local function LAMBDA134                                      */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC30__lambda134(cl_object v1, cl_object v2x)
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
  T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[45]);
  T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2x, T0, ecl_make_fixnum(2), v3, v4);
  T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[45]);
  T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2x, T2, ecl_make_fixnum(2));
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
/*      local function LAMBDA138                                      */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC31__lambda138(cl_object v1, cl_object v2x)
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
  T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[45]);
  T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2x, T0, ecl_make_fixnum(1), v3, v4);
  T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[45]);
  T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2x, T2, ecl_make_fixnum(1));
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
/*      local function LAMBDA142                                      */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC32__lambda142(cl_object v1, cl_object v2x)
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
  T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[45]);
  T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2x, T0, ecl_make_fixnum(0), v3, v4);
  T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[45]);
  T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2x, T2, ecl_make_fixnum(0));
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
/*      function definition for MAKE-NEWLINE                          */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L33make_newline(cl_narg narg, ...)
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
  cl_parse_key(args,4,L33make_newlinekeys,keyvars,NULL,FALSE);
  ecl_va_end(args);
  if (Null(keyvars[4])) {
   v1 = ecl_make_fixnum(0);
  } else {
   v1 = keyvars[0];
  }
  if (Null(keyvars[5])) {
   v2 = ecl_make_fixnum(0);
  } else {
   v2 = keyvars[1];
  }
  v3 = keyvars[2];
  if (Null(keyvars[7])) {
   v4 = ecl_function_dispatch(cl_env_copy,VV[274])(0) /*  REQUIRED-ARGUMENT */;
  } else {
   v4 = keyvars[3];
  }
 }
 if ((ecl_memql(v4,VV[60]))!=ECL_NIL) { goto L4; }
 ecl_function_dispatch(cl_env_copy,VV[267])(4, v4, VV[61], VV[48], VV[62]) /*  STRUCTURE-TYPE-ERROR */;
L4:;
 if (v3==ECL_NIL) { goto L6; }
 if ((si_of_class_p(2, v3, VV[48]))!=ECL_NIL) { goto L6; }
 if ((si_of_class_p(2, v3, VV[49]))!=ECL_NIL) { goto L6; }
 ecl_function_dispatch(cl_env_copy,VV[267])(4, v3, VV[50], VV[48], VV[51]) /*  STRUCTURE-TYPE-ERROR */;
L6:;
 {
  cl_fixnum v5;
  v5 = 0;
  if (!(ECL_FIXNUMP(v2))) { goto L14; }
  v5 = ecl_fixnum(v2);
  if (!((v5)<=(536870911))) { goto L19; }
  if ((v5)>=(0)) { goto L10; }
  goto L11;
L19:;
  goto L11;
L14:;
  goto L11;
 }
L11:;
 ecl_function_dispatch(cl_env_copy,VV[267])(4, v2, VV[17], VV[48], VV[52]) /*  STRUCTURE-TYPE-ERROR */;
L10:;
 if (ECL_FIXNUMP(v1)) { goto L21; }
 ecl_function_dispatch(cl_env_copy,VV[267])(4, v1, VV[1], VV[48], VV[1]) /*  STRUCTURE-TYPE-ERROR */;
L21:;
 value0 = si_make_structure(5, VV[63], v1, v2, v3, v4);
 return value0;
}
/*      local function LAMBDA152                                      */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC34__lambda152(cl_object v1, cl_object v2x)
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
  T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[48]);
  T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2x, T0, ecl_make_fixnum(3), v3, v4);
  T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[48]);
  T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2x, T2, ecl_make_fixnum(3));
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
/*      local function LAMBDA156                                      */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC35__lambda156(cl_object v1, cl_object v2x)
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
  T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[48]);
  T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2x, T0, ecl_make_fixnum(2), v3, v4);
  T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[48]);
  T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2x, T2, ecl_make_fixnum(2));
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
/*      local function LAMBDA160                                      */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC36__lambda160(cl_object v1, cl_object v2x)
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
  T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[48]);
  T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2x, T0, ecl_make_fixnum(1), v3, v4);
  T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[48]);
  T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2x, T2, ecl_make_fixnum(1));
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
/*      local function LAMBDA164                                      */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC37__lambda164(cl_object v1, cl_object v2x)
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
  T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[48]);
  T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2x, T0, ecl_make_fixnum(0), v3, v4);
  T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[48]);
  T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2x, T2, ecl_make_fixnum(0));
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
/*      function definition for ENQUEUE-NEWLINE                       */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L38enqueue_newline(cl_object v1stream, cl_object v2kind)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 {
  cl_fixnum v3depth;
  cl_object v4newline;
  T0 = (v1stream)->instance.slots[13];
  v3depth = ecl_length(T0);
  {
   cl_object v5;
   {
    cl_object v6;
    v6 = (v1stream)->instance.slots[4];
    T1 = (v1stream)->instance.slots[5];
    T0 = ecl_plus(v6,T1);
   }
   v5 = L33make_newline(6, VV[69], T0, VV[70], v2kind, VV[71], ecl_make_fixnum(v3depth));
   {
    cl_object v6;
    v6 = ecl_list1(v5);
    {
     cl_object v7;
     v7 = (v1stream)->instance.slots[12];
     if (Null(v7)) { goto L16; }
     {
      cl_object v8;
      v8 = v7;
      {
       cl_object v9;
       v9 = v6;
       (ECL_CONS_CDR(v8)=v9,v8);
       goto L15;
      }
     }
L16:;
     (v1stream)->instance.slots[11]=(v6);
L15:;
     (v1stream)->instance.slots[12]=(v6);
     v4newline = v5;
    }
   }
  }
  {
   cl_object v5;
   v5 = (v1stream)->instance.slots[11];
   goto L28;
L27:;
   {
    cl_object v6entry;
    v6entry = _ecl_car(v5);
    if ((v4newline)==(v6entry)) { goto L32; }
    if (Null(ecl_function_dispatch(cl_env_copy,VV[47])(1, v6entry) /*  SECTION-START-P */)) { goto L32; }
    T0 = ecl_function_dispatch(cl_env_copy,VV[55])(1, v6entry) /*  SECTION-START-SECTION-END */;
    if (!(T0==ECL_NIL)) { goto L32; }
    T0 = ecl_function_dispatch(cl_env_copy,VV[56])(1, v6entry) /*  SECTION-START-DEPTH */;
    if (!(ecl_lowereq(ecl_make_fixnum(v3depth),T0))) { goto L32; }
    {
     cl_object v7;
     v7 = v4newline;
     {
      cl_object v8;
      v8 = v6entry;
      (v8)->instance.slots[2]=v7;
     }
    }
L32:;
   }
   v5 = _ecl_cdr(v5);
L28:;
   if (Null(v5)) { goto L41; }
   goto L27;
L41:;
  }
 }
 value0 = ecl_make_bool((v2kind)==(VV[13]));
 if ((value0)!=ECL_NIL) { goto L45; }
 T0 = ecl_make_bool((v2kind)==(VV[72]));
 goto L43;
L45:;
 T0 = value0;
 goto L43;
L43:;
 value0 = L67maybe_output(v1stream, T0);
 return value0;
}
/*      function definition for MAKE-INDENTATION                      */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L39make_indentation(cl_narg narg, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 cl_object v1;
 cl_object v2;
 cl_object v3;
 ecl_va_list args; ecl_va_start(args,narg,narg,0);
 {
  cl_object keyvars[6];
  cl_parse_key(args,3,L39make_indentationkeys,keyvars,NULL,FALSE);
  ecl_va_end(args);
  if (Null(keyvars[3])) {
   v1 = ecl_make_fixnum(0);
  } else {
   v1 = keyvars[0];
  }
  if (Null(keyvars[4])) {
   v2 = ecl_function_dispatch(cl_env_copy,VV[274])(0) /*  REQUIRED-ARGUMENT */;
  } else {
   v2 = keyvars[1];
  }
  if (Null(keyvars[5])) {
   v3 = ecl_make_fixnum(0);
  } else {
   v3 = keyvars[2];
  }
 }
 if (ECL_FIXNUMP(v3)) { goto L4; }
 ecl_function_dispatch(cl_env_copy,VV[267])(4, v3, ECL_SYM("FIXNUM",374), VV[73], VV[76]) /*  STRUCTURE-TYPE-ERROR */;
L4:;
 if (!(ecl_eql(v2,ECL_SYM("BLOCK",1224)))) { goto L10; }
 goto L6;
 goto L8;
L10:;
 goto L8;
L8:;
 if (!(ecl_eql(v2,VV[78]))) { goto L13; }
 goto L6;
 goto L7;
L13:;
 goto L7;
L7:;
 ecl_function_dispatch(cl_env_copy,VV[267])(4, v2, VV[80], VV[73], VV[62]) /*  STRUCTURE-TYPE-ERROR */;
L6:;
 if (ECL_FIXNUMP(v1)) { goto L15; }
 ecl_function_dispatch(cl_env_copy,VV[267])(4, v1, VV[1], VV[73], VV[1]) /*  STRUCTURE-TYPE-ERROR */;
L15:;
 value0 = si_make_structure(4, VV[81], v1, v2, v3);
 return value0;
}
/*      local function LAMBDA191                                      */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC40__lambda191(cl_object v1, cl_object v2x)
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
  T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[73]);
  T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2x, T0, ecl_make_fixnum(2), v3, v4);
  T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[73]);
  T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2x, T2, ecl_make_fixnum(2));
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
/*      local function LAMBDA195                                      */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC41__lambda195(cl_object v1, cl_object v2x)
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
  T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[73]);
  T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2x, T0, ecl_make_fixnum(1), v3, v4);
  T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[73]);
  T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2x, T2, ecl_make_fixnum(1));
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
/*      local function LAMBDA199                                      */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC42__lambda199(cl_object v1, cl_object v2x)
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
  T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[73]);
  T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2x, T0, ecl_make_fixnum(0), v3, v4);
  T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[73]);
  T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2x, T2, ecl_make_fixnum(0));
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
/*      function definition for ENQUEUE-INDENT                        */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L43enqueue_indent(cl_object v1stream, cl_object v2kind, cl_object v3amount)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 {
  cl_object v4;
  {
   cl_object v5;
   v5 = (v1stream)->instance.slots[4];
   T1 = (v1stream)->instance.slots[5];
   T0 = ecl_plus(v5,T1);
  }
  v4 = L39make_indentation(6, VV[69], T0, VV[70], v2kind, VV[86], v3amount);
  {
   cl_object v5;
   v5 = ecl_list1(v4);
   {
    cl_object v6;
    v6 = (v1stream)->instance.slots[12];
    if (Null(v6)) { goto L11; }
    {
     cl_object v7;
     v7 = v6;
     {
      cl_object v8;
      v8 = v5;
      (ECL_CONS_CDR(v7)=v8,v7);
      goto L10;
     }
    }
L11:;
    (v1stream)->instance.slots[11]=(v5);
L10:;
    (v1stream)->instance.slots[12]=(v5);
    value0 = v4;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      function definition for MAKE-BLOCK-START                      */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L44make_block_start(cl_narg narg, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 cl_object v1;
 cl_object v2;
 cl_object v3;
 cl_object v4;
 cl_object v5;
 cl_object v6;
 ecl_va_list args; ecl_va_start(args,narg,narg,0);
 {
  cl_object keyvars[12];
  cl_parse_key(args,6,L44make_block_startkeys,keyvars,NULL,FALSE);
  ecl_va_end(args);
  if (Null(keyvars[6])) {
   v1 = ecl_make_fixnum(0);
  } else {
   v1 = keyvars[0];
  }
  if (Null(keyvars[7])) {
   v2 = ecl_make_fixnum(0);
  } else {
   v2 = keyvars[1];
  }
  v3 = keyvars[2];
  v4 = keyvars[3];
  v5 = keyvars[4];
  v6 = keyvars[5];
 }
 if (v6==ECL_NIL) { goto L3; }
 if (ECL_STRINGP(v6)) { goto L3; }
 ecl_function_dispatch(cl_env_copy,VV[267])(4, v6, VV[90], VV[87], VV[91]) /*  STRUCTURE-TYPE-ERROR */;
L3:;
 if (v5==ECL_NIL) { goto L6; }
 if (ECL_STRINGP(v5)) { goto L6; }
 ecl_function_dispatch(cl_env_copy,VV[267])(4, v5, VV[90], VV[87], VV[92]) /*  STRUCTURE-TYPE-ERROR */;
L6:;
 if (v4==ECL_NIL) { goto L9; }
 if ((si_of_class_p(2, v4, VV[49]))!=ECL_NIL) { goto L9; }
 ecl_function_dispatch(cl_env_copy,VV[267])(4, v4, VV[93], VV[87], VV[49]) /*  STRUCTURE-TYPE-ERROR */;
L9:;
 if (v3==ECL_NIL) { goto L12; }
 if ((si_of_class_p(2, v3, VV[48]))!=ECL_NIL) { goto L12; }
 if ((si_of_class_p(2, v3, VV[49]))!=ECL_NIL) { goto L12; }
 ecl_function_dispatch(cl_env_copy,VV[267])(4, v3, VV[50], VV[87], VV[51]) /*  STRUCTURE-TYPE-ERROR */;
L12:;
 {
  cl_fixnum v7;
  v7 = 0;
  if (!(ECL_FIXNUMP(v2))) { goto L20; }
  v7 = ecl_fixnum(v2);
  if (!((v7)<=(536870911))) { goto L25; }
  if ((v7)>=(0)) { goto L16; }
  goto L17;
L25:;
  goto L17;
L20:;
  goto L17;
 }
L17:;
 ecl_function_dispatch(cl_env_copy,VV[267])(4, v2, VV[17], VV[87], VV[52]) /*  STRUCTURE-TYPE-ERROR */;
L16:;
 if (ECL_FIXNUMP(v1)) { goto L27; }
 ecl_function_dispatch(cl_env_copy,VV[267])(4, v1, VV[1], VV[87], VV[1]) /*  STRUCTURE-TYPE-ERROR */;
L27:;
 value0 = si_make_structure(7, VV[94], v1, v2, v3, v4, v5, v6);
 return value0;
}
/*      local function LAMBDA228                                      */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC45__lambda228(cl_object v1, cl_object v2x)
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
  T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[87]);
  T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2x, T0, ecl_make_fixnum(5), v3, v4);
  T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[87]);
  T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2x, T2, ecl_make_fixnum(5));
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
/*      local function LAMBDA232                                      */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC46__lambda232(cl_object v1, cl_object v2x)
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
  T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[87]);
  T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2x, T0, ecl_make_fixnum(4), v3, v4);
  T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[87]);
  T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2x, T2, ecl_make_fixnum(4));
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
/*      local function LAMBDA236                                      */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC47__lambda236(cl_object v1, cl_object v2x)
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
  T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[87]);
  T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2x, T0, ecl_make_fixnum(3), v3, v4);
  T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[87]);
  T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2x, T2, ecl_make_fixnum(3));
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
/*      local function LAMBDA240                                      */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC48__lambda240(cl_object v1, cl_object v2x)
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
  T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[87]);
  T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2x, T0, ecl_make_fixnum(2), v3, v4);
  T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[87]);
  T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2x, T2, ecl_make_fixnum(2));
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
/*      local function LAMBDA244                                      */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC49__lambda244(cl_object v1, cl_object v2x)
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
  T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[87]);
  T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2x, T0, ecl_make_fixnum(1), v3, v4);
  T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[87]);
  T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2x, T2, ecl_make_fixnum(1));
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
/*      local function LAMBDA248                                      */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC50__lambda248(cl_object v1, cl_object v2x)
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
  T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[87]);
  T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2x, T0, ecl_make_fixnum(0), v3, v4);
  T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[87]);
  T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2x, T2, ecl_make_fixnum(0));
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
/*      function definition for START-LOGICAL-BLOCK                   */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L51start_logical_block(cl_object v1stream, cl_object v2prefix, cl_object v3per_line_p, cl_object v4suffix)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 {
TTL:
  T0 = si_of_class_p(2, v1stream, VV[4]);
  if (ecl_unlikely(!((T0)!=ECL_NIL)))
         FEwrong_type_argument(VV[4],v1stream);
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 0;
  {
   bool v5;
   v5 = ECL_STRINGP(v2prefix);
   if (ecl_unlikely(!(v5)))
         FEwrong_type_argument(ECL_SYM("STRING",807),v2prefix);
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 0;
  }
  {
   bool v5;
   v5 = ECL_STRINGP(v4suffix);
   if (ecl_unlikely(!(v5)))
         FEwrong_type_argument(ECL_SYM("STRING",807),v4suffix);
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 0;
  }
  {
   cl_fixnum v5prefix_len;
   v5prefix_len = (v2prefix)->vector.fillp;
   if (!((v5prefix_len)>0)) { goto L5; }
   L16pretty_sout(v1stream, v2prefix, ecl_make_fixnum(0), ecl_make_fixnum(v5prefix_len));
L5:;
   {
    cl_object v6pending_blocks;
    cl_object v7start;
    v6pending_blocks = (v1stream)->instance.slots[13];
    {
     cl_object v8;
     {
      cl_object v9;
      v9 = (v1stream)->instance.slots[4];
      T1 = (v1stream)->instance.slots[5];
      T0 = ecl_plus(v9,T1);
     }
     if (!((v5prefix_len)>0)) { goto L18; }
     if (Null(v3per_line_p)) { goto L18; }
     T1 = v2prefix;
     goto L16;
L18:;
     T1 = ECL_NIL;
     goto L16;
L16:;
     {
      cl_fixnum v9;
      v9 = (v4suffix)->vector.fillp;
      if (!((v9)>0)) { goto L23; }
     }
     T2 = v4suffix;
     goto L21;
L23:;
     T2 = ECL_NIL;
     goto L21;
L21:;
     {
      cl_fixnum v9;
      v9 = ecl_length(v6pending_blocks);
      v8 = L44make_block_start(8, VV[69], T0, VV[102], T1, VV[103], T2, VV[71], ecl_make_fixnum(v9));
     }
     {
      cl_object v9;
      v9 = ecl_list1(v8);
      {
       cl_object v10;
       v10 = (v1stream)->instance.slots[12];
       if (Null(v10)) { goto L29; }
       {
        cl_object v11;
        v11 = v10;
        {
         cl_object v12;
         v12 = v9;
         (ECL_CONS_CDR(v11)=v12,v11);
         goto L28;
        }
       }
L29:;
       (v1stream)->instance.slots[11]=(v9);
L28:;
       (v1stream)->instance.slots[12]=(v9);
       v7start = v8;
      }
     }
    }
    {
     cl_object v8;
     v8 = CONS(v7start,v6pending_blocks);
     value0 = (v1stream)->instance.slots[13]=(v8);
     cl_env_copy->nvalues = 1;
     return value0;
    }
   }
  }
 }
}
/*      function definition for MAKE-BLOCK-END                        */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L52make_block_end(cl_narg narg, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 cl_object v1;
 cl_object v2;
 ecl_va_list args; ecl_va_start(args,narg,narg,0);
 {
  cl_object keyvars[4];
  cl_parse_key(args,2,L52make_block_endkeys,keyvars,NULL,FALSE);
  ecl_va_end(args);
  if (Null(keyvars[2])) {
   v1 = ecl_make_fixnum(0);
  } else {
   v1 = keyvars[0];
  }
  v2 = keyvars[1];
 }
 if (v2==ECL_NIL) { goto L2; }
 if (ECL_STRINGP(v2)) { goto L2; }
 ecl_function_dispatch(cl_env_copy,VV[267])(4, v2, VV[90], VV[49], VV[91]) /*  STRUCTURE-TYPE-ERROR */;
L2:;
 if (ECL_FIXNUMP(v1)) { goto L5; }
 ecl_function_dispatch(cl_env_copy,VV[267])(4, v1, VV[1], VV[49], VV[1]) /*  STRUCTURE-TYPE-ERROR */;
L5:;
 value0 = si_make_structure(3, VV[106], v1, v2);
 return value0;
}
/*      local function LAMBDA273                                      */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC53__lambda273(cl_object v1, cl_object v2x)
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
  T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[49]);
  T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2x, T0, ecl_make_fixnum(1), v3, v4);
  T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[49]);
  T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2x, T2, ecl_make_fixnum(1));
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
/*      local function LAMBDA277                                      */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC54__lambda277(cl_object v1, cl_object v2x)
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
  T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[49]);
  T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2x, T0, ecl_make_fixnum(0), v3, v4);
  T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[49]);
  T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2x, T2, ecl_make_fixnum(0));
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
/*      function definition for END-LOGICAL-BLOCK                     */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L55end_logical_block(cl_object v1stream)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 {
  cl_object v2start;
  cl_object v3suffix;
  cl_object v4end;
  {
   cl_object v5;
   v5 = (v1stream)->instance.slots[13];
   if (Null(v5)) { goto L5; }
   {
    cl_object v6;
    v6 = ECL_CONS_CDR(v5);
    (v1stream)->instance.slots[13]=(v6);
    v5 = ECL_CONS_CAR(v5);
   }
L5:;
   v2start = v5;
  }
  v3suffix = ecl_function_dispatch(cl_env_copy,VV[96])(1, v2start) /*  BLOCK-START-SUFFIX */;
  {
   cl_object v5;
   {
    cl_object v6;
    v6 = (v1stream)->instance.slots[4];
    T1 = (v1stream)->instance.slots[5];
    T0 = ecl_plus(v6,T1);
   }
   v5 = L52make_block_end(4, VV[69], T0, VV[103], v3suffix);
   {
    cl_object v6;
    v6 = ecl_list1(v5);
    {
     cl_object v7;
     v7 = (v1stream)->instance.slots[12];
     if (Null(v7)) { goto L23; }
     {
      cl_object v8;
      v8 = v7;
      {
       cl_object v9;
       v9 = v6;
       (ECL_CONS_CDR(v8)=v9,v8);
       goto L22;
      }
     }
L23:;
     (v1stream)->instance.slots[11]=(v6);
L22:;
     (v1stream)->instance.slots[12]=(v6);
     v4end = v5;
    }
   }
  }
  if (Null(v3suffix)) { goto L31; }
  {
   cl_fixnum v5;
   v5 = ecl_length(v3suffix);
   L16pretty_sout(v1stream, v3suffix, ecl_make_fixnum(0), ecl_make_fixnum(v5));
  }
L31:;
  {
   cl_object v5;
   v5 = v4end;
   {
    cl_object v6;
    v6 = v2start;
    value0 = (v6)->instance.slots[3]=v5;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      function definition for MAKE-TAB                              */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L56make_tab(cl_narg narg, ...)
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
  cl_parse_key(args,5,L56make_tabkeys,keyvars,NULL,FALSE);
  ecl_va_end(args);
  if (Null(keyvars[5])) {
   v1 = ecl_make_fixnum(0);
  } else {
   v1 = keyvars[0];
  }
  v2 = keyvars[1];
  v3 = keyvars[2];
  if (Null(keyvars[8])) {
   v4 = ecl_make_fixnum(0);
  } else {
   v4 = keyvars[3];
  }
  if (Null(keyvars[9])) {
   v5 = ecl_make_fixnum(0);
  } else {
   v5 = keyvars[4];
  }
 }
 if (!(ECL_FIXNUMP(v5))) { goto L7; }
 {
  cl_object v6;
  v6 = ecl_make_fixnum(0);
  if (!(ECL_FIXNUMP(v5)||ECL_BIGNUMP(v5))) { goto L11; }
  v6 = v5;
  if (ecl_greatereq(v6,ecl_make_fixnum(0))) { goto L4; }
  goto L5;
L11:;
  goto L5;
 }
L7:;
 goto L5;
L5:;
 ecl_function_dispatch(cl_env_copy,VV[267])(4, v5, VV[0], VV[110], VV[113]) /*  STRUCTURE-TYPE-ERROR */;
L4:;
 if (!(ECL_FIXNUMP(v4))) { goto L18; }
 {
  cl_object v6;
  v6 = ecl_make_fixnum(0);
  if (!(ECL_FIXNUMP(v4)||ECL_BIGNUMP(v4))) { goto L22; }
  v6 = v4;
  if (ecl_greatereq(v6,ecl_make_fixnum(0))) { goto L15; }
  goto L16;
L22:;
  goto L16;
 }
L18:;
 goto L16;
L16:;
 ecl_function_dispatch(cl_env_copy,VV[267])(4, v4, VV[0], VV[110], VV[114]) /*  STRUCTURE-TYPE-ERROR */;
L15:;
 if (!(ecl_eql(v3,ECL_T))) { goto L30; }
 goto L26;
 goto L28;
L30:;
 goto L28;
L28:;
 if (!((v3)==(ECL_NIL))) { goto L33; }
 goto L26;
 goto L27;
L33:;
 goto L27;
L27:;
 ecl_function_dispatch(cl_env_copy,VV[267])(4, v3, VV[117], VV[110], VV[118]) /*  STRUCTURE-TYPE-ERROR */;
L26:;
 if (!(ecl_eql(v2,ECL_T))) { goto L39; }
 goto L35;
 goto L37;
L39:;
 goto L37;
L37:;
 if (!((v2)==(ECL_NIL))) { goto L42; }
 goto L35;
 goto L36;
L42:;
 goto L36;
L36:;
 ecl_function_dispatch(cl_env_copy,VV[267])(4, v2, VV[117], VV[110], VV[119]) /*  STRUCTURE-TYPE-ERROR */;
L35:;
 if (ECL_FIXNUMP(v1)) { goto L44; }
 ecl_function_dispatch(cl_env_copy,VV[267])(4, v1, VV[1], VV[110], VV[1]) /*  STRUCTURE-TYPE-ERROR */;
L44:;
 value0 = si_make_structure(6, VV[120], v1, v2, v3, v4, v5);
 return value0;
}
/*      local function LAMBDA319                                      */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC57__lambda319(cl_object v1, cl_object v2x)
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
  T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[110]);
  T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2x, T0, ecl_make_fixnum(4), v3, v4);
  T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[110]);
  T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2x, T2, ecl_make_fixnum(4));
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
/*      local function LAMBDA323                                      */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC58__lambda323(cl_object v1, cl_object v2x)
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
  T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[110]);
  T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2x, T0, ecl_make_fixnum(3), v3, v4);
  T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[110]);
  T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2x, T2, ecl_make_fixnum(3));
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
/*      local function LAMBDA327                                      */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC59__lambda327(cl_object v1, cl_object v2x)
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
  T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[110]);
  T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2x, T0, ecl_make_fixnum(2), v3, v4);
  T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[110]);
  T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2x, T2, ecl_make_fixnum(2));
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
/*      local function LAMBDA331                                      */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC60__lambda331(cl_object v1, cl_object v2x)
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
  T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[110]);
  T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2x, T0, ecl_make_fixnum(1), v3, v4);
  T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[110]);
  T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2x, T2, ecl_make_fixnum(1));
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
/*      local function LAMBDA335                                      */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC61__lambda335(cl_object v1, cl_object v2x)
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
  T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[110]);
  T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2x, T0, ecl_make_fixnum(0), v3, v4);
  T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[110]);
  T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2x, T2, ecl_make_fixnum(0));
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
/*      function definition for ENQUEUE-TAB                           */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L62enqueue_tab(cl_object v1stream, cl_object v2kind, cl_object v3colnum, cl_object v4colinc)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 {
  cl_object v6;                                   /*  SECTIONP        */
  cl_object v7;                                   /*  RELATIVEP       */
  if (!(ecl_eql(v2kind,ECL_SYM("LINE",1661)))) { goto L2; }
  cl_env_copy->nvalues = 2;
  cl_env_copy->values[1] = ECL_NIL;
  cl_env_copy->values[0] = ECL_NIL;
  value0 = cl_env_copy->values[0];
  goto L1;
L2:;
  if (!(ecl_eql(v2kind,VV[127]))) { goto L4; }
  cl_env_copy->nvalues = 2;
  cl_env_copy->values[1] = ECL_T;
  cl_env_copy->values[0] = ECL_NIL;
  value0 = cl_env_copy->values[0];
  goto L1;
L4:;
  if (!(ecl_eql(v2kind,VV[128]))) { goto L6; }
  cl_env_copy->nvalues = 2;
  cl_env_copy->values[1] = ECL_NIL;
  cl_env_copy->values[0] = ECL_T;
  value0 = cl_env_copy->values[0];
  goto L1;
L6:;
  if (!(ecl_eql(v2kind,VV[129]))) { goto L8; }
  cl_env_copy->nvalues = 2;
  cl_env_copy->values[1] = ECL_T;
  cl_env_copy->values[0] = ECL_T;
  value0 = cl_env_copy->values[0];
  goto L1;
L8:;
  value0 = si_ecase_error(v2kind, VV[130]);
L1:;
  {
   const int v8 = cl_env_copy->nvalues;
   v6 = value0;
   cl_object v9;
   v9 = (v8<=1)? ECL_NIL : cl_env_copy->values[1];
   v7 = v9;
  }
  {
   cl_object v8;
   {
    cl_object v9;
    v9 = (v1stream)->instance.slots[4];
    T1 = (v1stream)->instance.slots[5];
    T0 = ecl_plus(v9,T1);
   }
   v8 = L56make_tab(10, VV[69], T0, VV[131], v6, VV[132], v7, VV[133], v3colnum, VV[134], v4colinc);
   {
    cl_object v9;
    v9 = ecl_list1(v8);
    {
     cl_object v10;
     v10 = (v1stream)->instance.slots[12];
     if (Null(v10)) { goto L20; }
     {
      cl_object v11;
      v11 = v10;
      {
       cl_object v12;
       v12 = v9;
       (ECL_CONS_CDR(v11)=v12,v11);
       goto L19;
      }
     }
L20:;
     (v1stream)->instance.slots[11]=(v9);
L19:;
     (v1stream)->instance.slots[12]=(v9);
     value0 = v8;
     cl_env_copy->nvalues = 1;
     return value0;
    }
   }
  }
 }
}
/*      function definition for COMPUTE-TAB-SIZE                      */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L63compute_tab_size(cl_object v1tab, cl_object v2section_start, cl_object v3column)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 {
  cl_object v4;
  cl_object v5;
  cl_object v6colnum;
  v4 = ecl_function_dispatch(cl_env_copy,VV[123])(1, v1tab) /*  TAB-COLNUM */;
  v5 = ecl_function_dispatch(cl_env_copy,VV[122])(1, v1tab) /*  TAB-COLINC */;
  v6colnum = v4;
  if (Null(ecl_function_dispatch(cl_env_copy,VV[125])(1, v1tab) /*  TAB-SECTIONP */)) { goto L4; }
  v3column = ecl_minus(v3column,v2section_start);
L4:;
  if (Null(ecl_function_dispatch(cl_env_copy,VV[124])(1, v1tab) /*  TAB-RELATIVEP */)) { goto L7; }
  if (ecl_lowereq(v5,ecl_make_fixnum(1))) { goto L9; }
  {
   cl_object v7newposn;
   v7newposn = ecl_plus(v3column,v6colnum);
   {
    cl_object v8rem;
    v8rem = (ecl_truncate2(v7newposn,v5),cl_env_copy->values[1]);
    if (ecl_zerop(v8rem)) { goto L9; }
    {
     cl_object v9;
     v9 = ecl_minus(v5,v8rem);
     v6colnum = ecl_plus(v6colnum,v9);
    }
   }
  }
L9:;
  value0 = v6colnum;
  cl_env_copy->nvalues = 1;
  return value0;
L7:;
  if (!(ecl_lower(v3column,v6colnum))) { goto L16; }
  value0 = ecl_minus(v6colnum,v3column);
  cl_env_copy->nvalues = 1;
  return value0;
L16:;
  if (!(ecl_number_equalp(v3column,v6colnum))) { goto L18; }
  value0 = v5;
  cl_env_copy->nvalues = 1;
  return value0;
L18:;
  if (!(ecl_plusp(v5))) { goto L20; }
  T0 = ecl_minus(v3column,v6colnum);
  T1 = (ecl_truncate2(T0,v5),cl_env_copy->values[1]);
  value0 = ecl_minus(v5,T1);
  cl_env_copy->nvalues = 1;
  return value0;
L20:;
  value0 = ecl_make_fixnum(0);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for INDEX-COLUMN                          */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L64index_column(cl_object v1index, cl_object v2stream)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 {
  cl_object v3;
  cl_object v4;
  cl_object v5;
  cl_object v6column;
  cl_object v7section_start;
  v3 = (v2stream)->instance.slots[6];
  T0 = (v2stream)->instance.slots[8];
  T1 = _ecl_car(T0);
  v4 = ecl_function_dispatch(cl_env_copy,VV[31])(1, T1) /*  LOGICAL-BLOCK-SECTION-COLUMN */;
  T0 = (v2stream)->instance.slots[5];
  v5 = ecl_plus(v1index,T0);
  v6column = v3;
  v7section_start = v4;
  {
   cl_object v8;
   v8 = (v2stream)->instance.slots[11];
   goto L16;
L15:;
   {
    cl_object v9op;
    v9op = _ecl_car(v8);
    T0 = ecl_function_dispatch(cl_env_copy,VV[44])(1, v9op) /*  QUEUED-OP-POSN */;
    if (!(ecl_greatereq(T0,v5))) { goto L20; }
    goto L11;
L20:;
    if (Null(si_of_class_p(2, v9op, VV[110]))) { goto L23; }
    {
     cl_object v10;
     {
      cl_object v11;
      v11 = ecl_function_dispatch(cl_env_copy,VV[126])(1, v9op) /*  TAB-POSN */;
      T1 = (v2stream)->instance.slots[5];
      T0 = ecl_minus(v11,T1);
     }
     T1 = ecl_plus(v6column,T0);
     v10 = L63compute_tab_size(v9op, v7section_start, T1);
     v6column = ecl_plus(v6column,v10);
     goto L22;
    }
L23:;
    if ((si_of_class_p(2, v9op, VV[48]))!=ECL_NIL) { goto L32; }
    if (Null(si_of_class_p(2, v9op, VV[87]))) { goto L22; }
    goto L31;
L32:;
L31:;
    {
     cl_object v11;
     v11 = ecl_function_dispatch(cl_env_copy,VV[44])(1, v9op) /*  QUEUED-OP-POSN */;
     T1 = (v2stream)->instance.slots[5];
     T0 = ecl_minus(v11,T1);
    }
    v7section_start = ecl_plus(v6column,T0);
L22:;
   }
   v8 = _ecl_cdr(v8);
L16:;
   if (Null(v8)) { goto L41; }
   goto L15;
L41:;
  }
L11:;
  value0 = ecl_plus(v6column,v1index);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for EXPAND-TABS                           */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L65expand_tabs(cl_object v1stream, cl_object v2through)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 {
  cl_object v3;
  cl_object v4;
  cl_object v5insertions;
  cl_object v6additional;
  cl_object v7column;
  cl_object v8section_start;
  v3 = (v1stream)->instance.slots[6];
  T0 = (v1stream)->instance.slots[8];
  T1 = _ecl_car(T0);
  v4 = ecl_function_dispatch(cl_env_copy,VV[31])(1, T1) /*  LOGICAL-BLOCK-SECTION-COLUMN */;
  v5insertions = ECL_NIL;
  v6additional = ecl_make_fixnum(0);
  v7column = v3;
  v8section_start = v4;
  {
   cl_object v9;
   v9 = (v1stream)->instance.slots[11];
   goto L15;
L14:;
   {
    cl_object v10op;
    v10op = _ecl_car(v9);
    if (Null(si_of_class_p(2, v10op, VV[110]))) { goto L20; }
    {
     cl_object v11index;
     cl_object v12tabsize;
     {
      cl_object v13;
      v13 = ecl_function_dispatch(cl_env_copy,VV[126])(1, v10op) /*  TAB-POSN */;
      T0 = (v1stream)->instance.slots[5];
      v11index = ecl_minus(v13,T0);
     }
     T0 = ecl_plus(v7column,v11index);
     v12tabsize = L63compute_tab_size(v10op, v8section_start, T0);
     if (ecl_zerop(v12tabsize)) { goto L19; }
     T0 = CONS(v11index,v12tabsize);
     v5insertions = CONS(T0,v5insertions);
     v6additional = ecl_plus(v6additional,v12tabsize);
     v7column = ecl_plus(v7column,v12tabsize);
     goto L19;
    }
L20:;
    if ((si_of_class_p(2, v10op, VV[48]))!=ECL_NIL) { goto L34; }
    if (Null(si_of_class_p(2, v10op, VV[87]))) { goto L19; }
    goto L33;
L34:;
L33:;
    {
     cl_object v13;
     v13 = ecl_function_dispatch(cl_env_copy,VV[44])(1, v10op) /*  QUEUED-OP-POSN */;
     T1 = (v1stream)->instance.slots[5];
     T0 = ecl_minus(v13,T1);
    }
    v8section_start = ecl_plus(v7column,T0);
L19:;
    if (!((v10op)==(v2through))) { goto L41; }
    goto L10;
L41:;
   }
   v9 = _ecl_cdr(v9);
L15:;
   if (Null(v9)) { goto L45; }
   goto L14;
L45:;
  }
L10:;
  if (Null(v5insertions)) { goto L47; }
  {
   cl_object v9fill_ptr;
   cl_object v10new_fill_ptr;
   cl_object v11buffer;
   cl_object v12new_buffer;
   cl_fixnum v13length;
   cl_object v14end;
   v9fill_ptr = (v1stream)->instance.slots[4];
   v10new_fill_ptr = ecl_plus(v9fill_ptr,v6additional);
   v11buffer = (v1stream)->instance.slots[3];
   v12new_buffer = v11buffer;
   v13length = ecl_length(v11buffer);
   v14end = v9fill_ptr;
   if (!(ecl_greater(v10new_fill_ptr,ecl_make_fixnum(v13length)))) { goto L57; }
   {
    cl_object v15new_length;
    T0 = ecl_times(ecl_make_fixnum(v13length),ecl_make_fixnum(2));
    T1 = ecl_times(v6additional,ecl_make_fixnum(5));
    T2 = ecl_floor2(T1,ecl_make_fixnum(4));
    T3 = ecl_plus(v9fill_ptr,T2);
    v15new_length = ((ecl_float_nan_p(T3) || ecl_greatereq(T0,T3))?T0:T3);
    v12new_buffer = cl_make_string(1, v15new_length);
    (v1stream)->instance.slots[3]=(v12new_buffer);
   }
L57:;
   (v1stream)->instance.slots[4]=(v10new_fill_ptr);
   {
    cl_object v15;
    T0 = (v1stream)->instance.slots[5];
    v15 = ecl_minus(T0,v6additional);
    (v1stream)->instance.slots[5]=(v15);
   }
   {
    cl_object v15;
    v15 = v5insertions;
    goto L74;
L73:;
    {
     cl_object v16insertion;
     v16insertion = _ecl_car(v15);
     {
      cl_object v17srcpos;
      cl_object v18amount;
      cl_object v19dstpos;
      v17srcpos = _ecl_car(v16insertion);
      v18amount = _ecl_cdr(v16insertion);
      v19dstpos = ecl_plus(v17srcpos,v6additional);
      cl_replace(8, v12new_buffer, v11buffer, ECL_SYM("START1",1338), v19dstpos, ECL_SYM("START2",1339), v17srcpos, ECL_SYM("END2",1249), v14end);
      T0 = ecl_minus(v19dstpos,v18amount);
      cl_fill(6, v12new_buffer, CODE_CHAR(32), ECL_SYM("START",1337), T0, ECL_SYM("END",1247), v19dstpos);
      v6additional = ecl_minus(v6additional,v18amount);
      v14end = v17srcpos;
     }
    }
    v15 = _ecl_cdr(v15);
L74:;
    if (Null(v15)) { goto L89; }
    goto L73;
L89:;
   }
   if ((v12new_buffer)==(v11buffer)) { goto L91; }
   value0 = cl_replace(6, v12new_buffer, v11buffer, ECL_SYM("END1",1248), v14end, ECL_SYM("END2",1249), v14end);
   return value0;
L91:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
L47:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for ASSURE-SPACE-IN-BUFFER                */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L66assure_space_in_buffer(cl_object v1stream, cl_object v2want)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 cl_fixnum v3want;
 v3want = ecl_fixnum(v2want);
TTL:
 {
  cl_object v4buffer;
  cl_fixnum v5length;
  cl_object v6fill_ptr;
  cl_object v7available;
  v4buffer = (v1stream)->instance.slots[3];
  v5length = ecl_length(v4buffer);
  v6fill_ptr = (v1stream)->instance.slots[4];
  v7available = ecl_minus(ecl_make_fixnum(v5length),v6fill_ptr);
  if (!(ecl_plusp(v7available))) { goto L7; }
  value0 = v7available;
  cl_env_copy->nvalues = 1;
  return value0;
L7:;
  T0 = (v1stream)->instance.slots[2];
  if (!(ecl_greater(v6fill_ptr,T0))) { goto L9; }
  if ((L67maybe_output(v1stream, ECL_NIL))!=ECL_NIL) { goto L13; }
  L71output_partial_line(v1stream);
L13:;
  goto TTL;
L9:;
  {
   cl_object v8new_length;
   cl_object v9new_buffer;
   T0 = ecl_times(ecl_make_fixnum(v5length),ecl_make_fixnum(2));
   T1 = ecl_times(ecl_make_fixnum(v3want),ecl_make_fixnum(5));
   T2 = ecl_floor2(T1,ecl_make_fixnum(4));
   T3 = ecl_plus(ecl_make_fixnum(v5length),T2);
   v8new_length = ((ecl_float_nan_p(T3) || ecl_greatereq(T0,T3))?T0:T3);
   v9new_buffer = cl_make_string(1, v8new_length);
   (v1stream)->instance.slots[3]=(v9new_buffer);
   cl_replace(4, v9new_buffer, v4buffer, ECL_SYM("END1",1248), v6fill_ptr);
   value0 = ecl_minus(v8new_length,v6fill_ptr);
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for MAYBE-OUTPUT                          */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L67maybe_output(cl_object v1stream, cl_object v2force_newlines_p)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 {
  cl_object v3;
  cl_object v4tail;
  cl_object v5output_anything;
  v3 = (v1stream)->instance.slots[11];
  v4tail = v3;
  v5output_anything = ECL_NIL;
L6:;
  if ((v4tail)!=ECL_NIL) { goto L8; }
  (v1stream)->instance.slots[12]=(ECL_NIL);
  goto L5;
L8:;
  {
   cl_object v6next;
   {
    cl_object v7;
    v7 = v4tail;
    if (Null(v7)) { goto L16; }
    {
     cl_object v8;
     v8 = ECL_CONS_CDR(v7);
     v4tail = v8;
     v7 = ECL_CONS_CAR(v7);
    }
L16:;
    v6next = v7;
   }
   if (Null(si_of_class_p(2, v6next, VV[48]))) { goto L22; }
   {
    cl_object v7;
    v7 = ecl_function_dispatch(cl_env_copy,VV[65])(1, v6next) /*  NEWLINE-KIND */;
    if (!(ecl_eql(v7,VV[13]))) { goto L31; }
    goto L28;
    goto L29;
L31:;
    goto L29;
L29:;
    if (!(ecl_eql(v7,VV[72]))) { goto L35; }
    goto L28;
    goto L33;
L35:;
    goto L33;
L33:;
    if (!(ecl_eql(v7,VV[137]))) { goto L26; }
    goto L27;
L28:;
L27:;
    goto L24;
L26:;
    if (!(ecl_eql(v7,VV[139]))) { goto L38; }
    if (Null(L68misering_p(v1stream))) { goto L12; }
    goto L24;
L38:;
    if (!(ecl_eql(v7,VV[140]))) { goto L40; }
    if ((L68misering_p(v1stream))!=ECL_NIL) { goto L42; }
    T0 = (v1stream)->instance.slots[7];
    T1 = (v1stream)->instance.slots[8];
    T2 = _ecl_car(T1);
    T3 = ecl_function_dispatch(cl_env_copy,VV[26])(1, T2) /*  LOGICAL-BLOCK-SECTION-START-LINE */;
    if (ecl_greater(T0,T3)) { goto L42; }
    {
     cl_object v8;
     T0 = ecl_function_dispatch(cl_env_copy,VV[66])(1, v6next) /*  NEWLINE-SECTION-END */;
     v8 = L69fits_on_line_p(v1stream, T0, v2force_newlines_p);
     if (!(ecl_eql(v8,ECL_T))) { goto L50; }
     goto L12;
L50:;
     if (!((v8)==(ECL_NIL))) { goto L53; }
     goto L24;
L53:;
     if (!(ecl_eql(v8,VV[142]))) { goto L56; }
     goto L5;
L56:;
     if (Null(si_ecase_error(v8, VV[143]))) { goto L12; }
     goto L24;
    }
L42:;
    goto L24;
L40:;
    if (Null(si_ecase_error(v7, VV[144]))) { goto L12; }
   }
L24:;
   v5output_anything = ECL_T;
   L70output_line(v1stream, v6next);
   goto L12;
L22:;
   if (Null(si_of_class_p(2, v6next, VV[73]))) { goto L60; }
   if ((L68misering_p(v1stream))!=ECL_NIL) { goto L12; }
   {
    cl_object v7;
    v7 = ecl_function_dispatch(cl_env_copy,VV[84])(1, v6next) /*  INDENTATION-KIND */;
    if (!(ecl_eql(v7,ECL_SYM("BLOCK",1224)))) { goto L65; }
    T1 = (v1stream)->instance.slots[8];
    T2 = _ecl_car(T1);
    T0 = ecl_function_dispatch(cl_env_copy,VV[32])(1, T2) /*  LOGICAL-BLOCK-START-COLUMN */;
    goto L63;
L65:;
    if (!(ecl_eql(v7,VV[78]))) { goto L69; }
    {
     cl_object v8;
     v8 = ecl_function_dispatch(cl_env_copy,VV[85])(1, v6next) /*  INDENTATION-POSN */;
     T2 = (v1stream)->instance.slots[5];
     T1 = ecl_minus(v8,T2);
     T0 = L64index_column(T1, v1stream);
     goto L63;
    }
L69:;
    T0 = si_ecase_error(v7, VV[77]);
   }
L63:;
   T1 = ecl_function_dispatch(cl_env_copy,VV[83])(1, v6next) /*  INDENTATION-AMOUNT */;
   T2 = ecl_plus(T0,T1);
   L25set_indentation(v1stream, T2);
   goto L12;
L60:;
   if (Null(si_of_class_p(2, v6next, VV[87]))) { goto L75; }
   {
    cl_object v7;
    T0 = ecl_function_dispatch(cl_env_copy,VV[99])(1, v6next) /*  BLOCK-START-SECTION-END */;
    v7 = L69fits_on_line_p(v1stream, T0, v2force_newlines_p);
    if (!(ecl_eql(v7,ECL_T))) { goto L78; }
    {
     cl_object v8end;
     v8end = ecl_function_dispatch(cl_env_copy,VV[98])(1, v6next) /*  BLOCK-START-BLOCK-END */;
     L65expand_tabs(v1stream, v8end);
     T0 = ecl_memql(v8end,v4tail);
     v4tail = _ecl_cdr(T0);
     goto L12;
    }
L78:;
    if (!((v7)==(ECL_NIL))) { goto L85; }
    {
     cl_object v9;
     v9 = ecl_function_dispatch(cl_env_copy,VV[101])(1, v6next) /*  BLOCK-START-POSN */;
     T2 = (v1stream)->instance.slots[5];
     T1 = ecl_minus(v9,T2);
     T0 = L64index_column(T1, v1stream);
    }
    T1 = ecl_function_dispatch(cl_env_copy,VV[97])(1, v6next) /*  BLOCK-START-PREFIX */;
    T2 = ecl_function_dispatch(cl_env_copy,VV[96])(1, v6next) /*  BLOCK-START-SUFFIX */;
    L24really_start_logical_block(v1stream, T0, T1, T2);
    goto L12;
L85:;
    if (!(ecl_eql(v7,VV[142]))) { goto L93; }
    goto L5;
L93:;
    si_ecase_error(v7, VV[143]);
    goto L12;
   }
L75:;
   if (Null(si_of_class_p(2, v6next, VV[49]))) { goto L95; }
   L26really_end_logical_block(v1stream);
   goto L12;
L95:;
   if (Null(si_of_class_p(2, v6next, VV[110]))) { goto L97; }
   L65expand_tabs(v1stream, v6next);
   goto L12;
L97:;
   si_etypecase_error(v6next, VV[145]);
  }
L12:;
  (v1stream)->instance.slots[11]=(v4tail);
  goto L6;
L5:;
  value0 = v5output_anything;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for MISERING-P                            */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L68misering_p(cl_object v1stream)
{
 cl_object T0, T1, T2, T3, T4;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 if (Null(ECL_SYM_VAL(cl_env_copy,ECL_SYM("*PRINT-MISER-WIDTH*",55)))) { goto L2; }
 T0 = (v1stream)->instance.slots[2];
 T1 = (v1stream)->instance.slots[8];
 T2 = _ecl_car(T1);
 T3 = ecl_function_dispatch(cl_env_copy,VV[32])(1, T2) /*  LOGICAL-BLOCK-START-COLUMN */;
 T4 = ecl_minus(T0,T3);
 value0 = ecl_make_bool(ecl_lowereq(T4,ECL_SYM_VAL(cl_env_copy,ECL_SYM("*PRINT-MISER-WIDTH*",55))));
 cl_env_copy->nvalues = 1;
 return value0;
L2:;
 value0 = ECL_NIL;
 cl_env_copy->nvalues = 1;
 return value0;
}
/*      function definition for FITS-ON-LINE-P                        */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L69fits_on_line_p(cl_object v1stream, cl_object v2until, cl_object v3force_newlines_p)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 {
  cl_object v4available;
  v4available = (v1stream)->instance.slots[2];
  if ((ECL_SYM_VAL(cl_env_copy,ECL_SYM("*PRINT-READABLY*",59)))!=ECL_NIL) { goto L3; }
  if (Null(ECL_SYM_VAL(cl_env_copy,ECL_SYM("*PRINT-LINES*",54)))) { goto L3; }
  T0 = (v1stream)->instance.slots[7];
  if (!(ecl_number_equalp(ECL_SYM_VAL(cl_env_copy,ECL_SYM("*PRINT-LINES*",54)),T0))) { goto L3; }
  v4available = ecl_minus(v4available,ecl_make_fixnum(3));
  {
   cl_object v5;
   T0 = (v1stream)->instance.slots[8];
   T1 = _ecl_car(T0);
   v5 = ecl_function_dispatch(cl_env_copy,VV[28])(1, T1) /*  LOGICAL-BLOCK-SUFFIX-LENGTH */;
   v4available = ecl_minus(v4available,v5);
  }
L3:;
  if (Null(v2until)) { goto L15; }
  {
   cl_object v5;
   v5 = ecl_function_dispatch(cl_env_copy,VV[44])(1, v2until) /*  QUEUED-OP-POSN */;
   T2 = (v1stream)->instance.slots[5];
   T1 = ecl_minus(v5,T2);
   T0 = L64index_column(T1, v1stream);
  }
  value0 = ecl_make_bool(ecl_lowereq(T0,v4available));
  cl_env_copy->nvalues = 1;
  return value0;
L15:;
  if (Null(v3force_newlines_p)) { goto L22; }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L22:;
  T0 = (v1stream)->instance.slots[4];
  T1 = L64index_column(T0, v1stream);
  if (!(ecl_greater(T1,v4available))) { goto L24; }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L24:;
  value0 = VV[142];
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for OUTPUT-LINE                           */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L70output_line(cl_object v1stream, cl_object v2until)
{
 cl_object T0, T1, T2, T3, T4, T5;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 {
  cl_object v3target;
  cl_object v4buffer;
  cl_object v5kind;
  cl_object v6literal_p;
  cl_object v7amount_to_consume;
  cl_object v8amount_to_print;
  v3target = (v1stream)->instance.slots[1];
  v4buffer = (v1stream)->instance.slots[3];
  v5kind = ecl_function_dispatch(cl_env_copy,VV[65])(1, v2until) /*  NEWLINE-KIND */;
  v6literal_p = ecl_make_bool((v5kind)==(VV[13]));
  {
   cl_object v9;
   v9 = ecl_function_dispatch(cl_env_copy,VV[68])(1, v2until) /*  NEWLINE-POSN */;
   T0 = (v1stream)->instance.slots[5];
   v7amount_to_consume = ecl_minus(v9,T0);
  }
  if (Null(v6literal_p)) { goto L12; }
  v8amount_to_print = v7amount_to_consume;
  goto L11;
L12:;
  {
   cl_object v9last_non_blank;
   T0 = (ECL_SYM("CHAR/=",218)->symbol.gfdef);
   v9last_non_blank = cl_position(8, CODE_CHAR(32), v4buffer, ECL_SYM("END",1247), v7amount_to_consume, VV[146], ECL_T, ECL_SYM("TEST",1343), T0);
   if (Null(v9last_non_blank)) { goto L16; }
   v8amount_to_print = ecl_make_integer((ecl_fixnum(v9last_non_blank))+1);
   goto L11;
L16:;
   v8amount_to_print = ecl_make_fixnum(0);
  }
L11:;
  cl_write_string(4, v4buffer, v3target, ECL_SYM("END",1247), v8amount_to_print);
  {
   cl_object v9line_number;
   v9line_number = (v1stream)->instance.slots[7];
   v9line_number = ecl_plus(v9line_number,ecl_make_fixnum(1));
   if ((ECL_SYM_VAL(cl_env_copy,ECL_SYM("*PRINT-READABLY*",59)))!=ECL_NIL) { goto L23; }
   if (Null(ECL_SYM_VAL(cl_env_copy,ECL_SYM("*PRINT-LINES*",54)))) { goto L23; }
   if (!(ecl_greatereq(v9line_number,ECL_SYM_VAL(cl_env_copy,ECL_SYM("*PRINT-LINES*",54))))) { goto L23; }
   cl_write_string(2, VV[147], v3target);
   {
    cl_object v10suffix_length;
    T0 = (v1stream)->instance.slots[8];
    T1 = _ecl_car(T0);
    v10suffix_length = ecl_function_dispatch(cl_env_copy,VV[28])(1, T1) /*  LOGICAL-BLOCK-SUFFIX-LENGTH */;
    if (ecl_zerop(v10suffix_length)) { goto L28; }
    {
     cl_object v11suffix;
     cl_fixnum v12len;
     v11suffix = (v1stream)->instance.slots[10];
     v12len = ecl_length(v11suffix);
     T0 = ecl_minus(ecl_make_fixnum(v12len),v10suffix_length);
     cl_write_string(6, v11suffix, v3target, ECL_SYM("START",1337), T0, ECL_SYM("END",1247), ecl_make_fixnum(v12len));
    }
   }
L28:;
   cl_env_copy->values[0] = ECL_T;
   cl_env_copy->nvalues = 1;
   cl_throw(VV[148]);
L23:;
   (v1stream)->instance.slots[7]=(v9line_number);
   cl_write_char(2, CODE_CHAR(10), v3target);
   (v1stream)->instance.slots[6]=(ecl_make_fixnum(0));
   {
    cl_object v10fill_ptr;
    cl_object v11block;
    cl_object v12prefix_len;
    cl_object v13shift;
    cl_object v14new_fill_ptr;
    cl_object v15new_buffer;
    cl_fixnum v16buffer_length;
    v10fill_ptr = (v1stream)->instance.slots[4];
    T0 = (v1stream)->instance.slots[8];
    v11block = _ecl_car(T0);
    if (Null(v6literal_p)) { goto L48; }
    v12prefix_len = ecl_function_dispatch(cl_env_copy,VV[30])(1, v11block) /*  LOGICAL-BLOCK-PER-LINE-PREFIX-END */;
    goto L47;
L48:;
    v12prefix_len = ecl_function_dispatch(cl_env_copy,VV[29])(1, v11block) /*  LOGICAL-BLOCK-PREFIX-LENGTH */;
L47:;
    v13shift = ecl_minus(v7amount_to_consume,v12prefix_len);
    v14new_fill_ptr = ecl_minus(v10fill_ptr,v13shift);
    v15new_buffer = v4buffer;
    v16buffer_length = ecl_length(v4buffer);
    if (!(ecl_greater(v14new_fill_ptr,ecl_make_fixnum(v16buffer_length)))) { goto L54; }
    T0 = ecl_times(ecl_make_fixnum(v16buffer_length),ecl_make_fixnum(2));
    T1 = ecl_minus(v14new_fill_ptr,ecl_make_fixnum(v16buffer_length));
    T2 = ecl_times(T1,ecl_make_fixnum(5));
    T3 = ecl_floor2(T2,ecl_make_fixnum(4));
    T4 = ecl_plus(ecl_make_fixnum(v16buffer_length),T3);
    T5 = ((ecl_float_nan_p(T4) || ecl_greatereq(T0,T4))?T0:T4);
    v15new_buffer = cl_make_string(1, T5);
    (v1stream)->instance.slots[3]=(v15new_buffer);
L54:;
    cl_replace(8, v15new_buffer, v4buffer, ECL_SYM("START1",1338), v12prefix_len, ECL_SYM("START2",1339), v7amount_to_consume, ECL_SYM("END2",1249), v10fill_ptr);
    T0 = (v1stream)->instance.slots[9];
    cl_replace(4, v15new_buffer, T0, ECL_SYM("END1",1248), v12prefix_len);
    (v1stream)->instance.slots[4]=(v14new_fill_ptr);
    {
     cl_object v17;
     T0 = (v1stream)->instance.slots[5];
     v17 = ecl_plus(T0,v13shift);
     (v1stream)->instance.slots[5]=(v17);
    }
    if ((v6literal_p)!=ECL_NIL) { goto L70; }
    {
     cl_object v17;
     v17 = v12prefix_len;
     {
      cl_object v18;
      v18 = v11block;
      (v18)->instance.slots[1]=v17;
     }
    }
    {
     cl_object v17;
     v17 = v9line_number;
     {
      cl_object v18;
      v18 = v11block;
      value0 = (v18)->instance.slots[5]=v17;
      cl_env_copy->nvalues = 1;
      return value0;
     }
    }
L70:;
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      function definition for OUTPUT-PARTIAL-LINE                   */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L71output_partial_line(cl_object v1stream)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 {
  cl_object v2fill_ptr;
  cl_object v3tail;
  cl_object v4count;
  cl_object v5new_fill_ptr;
  cl_object v6buffer;
  v2fill_ptr = (v1stream)->instance.slots[4];
  v3tail = (v1stream)->instance.slots[11];
  if (Null(v3tail)) { goto L6; }
  {
   cl_object v7;
   T0 = _ecl_car(v3tail);
   v7 = ecl_function_dispatch(cl_env_copy,VV[44])(1, T0) /*  QUEUED-OP-POSN */;
   T0 = (v1stream)->instance.slots[5];
   v4count = ecl_minus(v7,T0);
   goto L5;
  }
L6:;
  v4count = v2fill_ptr;
L5:;
  v5new_fill_ptr = ecl_minus(v2fill_ptr,v4count);
  v6buffer = (v1stream)->instance.slots[3];
  if (!(ecl_zerop(v4count))) { goto L14; }
  cl_error(1, VV[149]);
L14:;
  T0 = (v1stream)->instance.slots[1];
  cl_write_string(6, v6buffer, T0, ECL_SYM("START",1337), ecl_make_fixnum(0), ECL_SYM("END",1247), v4count);
  {
   cl_object v7;
   T0 = (v1stream)->instance.slots[6];
   v7 = ecl_plus(T0,v4count);
   (v1stream)->instance.slots[6]=(v7);
  }
  cl_replace(8, v6buffer, v6buffer, ECL_SYM("END1",1248), v5new_fill_ptr, ECL_SYM("START2",1339), v4count, ECL_SYM("END2",1249), v2fill_ptr);
  (v1stream)->instance.slots[4]=(v5new_fill_ptr);
  {
   cl_object v7;
   T0 = (v1stream)->instance.slots[5];
   v7 = ecl_plus(T0,v4count);
   value0 = (v1stream)->instance.slots[5]=(v7);
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for FORCE-PRETTY-OUTPUT                   */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L72force_pretty_output(cl_object v1stream)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 L67maybe_output(v1stream, ECL_NIL);
 L65expand_tabs(v1stream, ECL_NIL);
 T0 = (v1stream)->instance.slots[3];
 T1 = (v1stream)->instance.slots[1];
 T2 = (v1stream)->instance.slots[4];
 value0 = cl_write_string(4, T0, T1, ECL_SYM("END",1247), T2);
 return value0;
}
/*      function definition for PPRINT-POP-HELPER                     */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L73pprint_pop_helper(cl_object v1object, cl_object v2count, cl_object v3stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 {
  cl_object v4code;
  v4code = ECL_NIL;
  if (ECL_LISTP(v1object)) { goto L2; }
  cl_write_string(2, VV[150], v3stream);
  si_write_object(v1object, v3stream);
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L2:;
  if ((ECL_SYM_VAL(cl_env_copy,ECL_SYM("*PRINT-READABLY*",59)))!=ECL_NIL) { goto L6; }
  if (!(ecl_eql(v2count,ECL_SYM_VAL(cl_env_copy,ECL_SYM("*PRINT-LENGTH*",52))))) { goto L6; }
  cl_write_string(2, VV[151], v3stream);
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L6:;
  if (v1object==ECL_NIL) { goto L12; }
  if (ecl_zerop(v2count)) { goto L12; }
  if (!(ECL_SYM_VAL(cl_env_copy,ECL_SYM("*CIRCLE-COUNTER*",1016))==ECL_NIL)) { goto L10; }
  goto L11;
L12:;
L11:;
  value0 = ECL_T;
  cl_env_copy->nvalues = 1;
  return value0;
L10:;
  v4code = ecl_gethash_safe(v1object,ECL_SYM_VAL(cl_env_copy,ECL_SYM("*CIRCLE-STACK*",1017)),ECL_SYM("NULL",607));
  if (!((ECL_SYM("NULL",607))==(v4code))) { goto L15; }
  si_search_print_circle(v1object);
  value0 = ECL_T;
  cl_env_copy->nvalues = 1;
  return value0;
L15:;
  if (!(v4code==ECL_NIL)) { goto L19; }
  if (!(ECL_FIXNUMP(ECL_SYM_VAL(cl_env_copy,ECL_SYM("*CIRCLE-COUNTER*",1016)))||ECL_BIGNUMP(ECL_SYM_VAL(cl_env_copy,ECL_SYM("*CIRCLE-COUNTER*",1016))))) { goto L19; }
  value0 = ECL_T;
  cl_env_copy->nvalues = 1;
  return value0;
L19:;
  cl_write_string(2, VV[150], v3stream);
  si_write_object(v1object, v3stream);
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for CHECK-PRINT-LEVEL                     */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L74check_print_level()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 if ((ECL_SYM_VAL(cl_env_copy,ECL_SYM("*PRINT-READABLY*",59)))!=ECL_NIL) { goto L3; }
 if (!(ECL_SYM_VAL(cl_env_copy,ECL_SYM("*PRINT-LEVEL*",53))==ECL_NIL)) { goto L1; }
 goto L2;
L3:;
L2:;
 value0 = ECL_T;
 cl_env_copy->nvalues = 1;
 return value0;
L1:;
 if (!(ecl_zerop(ECL_SYM_VAL(cl_env_copy,ECL_SYM("*PRINT-LEVEL*",53))))) { goto L5; }
 value0 = ECL_NIL;
 cl_env_copy->nvalues = 1;
 return value0;
L5:;
 ECL_SETQ(cl_env_copy,ECL_SYM("*PRINT-LEVEL*",53),ecl_one_minus(ECL_SYM_VAL(cl_env_copy,ECL_SYM("*PRINT-LEVEL*",53))));
 value0 = ECL_SYM_VAL(cl_env_copy,ECL_SYM("*PRINT-LEVEL*",53));
 cl_env_copy->nvalues = 1;
 return value0;
}
/*      function definition for DO-PPRINT-LOGICAL-BLOCK               */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L76do_pprint_logical_block(cl_object v1function, cl_object v2object, cl_object v3stream, cl_object v4prefix, cl_object v5per_line_prefix_p, cl_object v6suffix)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 cl_object CLV0, CLV1, CLV2, CLV3;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 env0 = ECL_NIL;
 CLV0 = env0 = CONS(v1function,env0);             /*  FUNCTION        */
 CLV1 = env0 = CONS(v4prefix,env0);               /*  PREFIX          */
 CLV2 = env0 = CONS(v5per_line_prefix_p,env0);    /*  PER-LINE-PREFIX-P */
 CLV3 = env0 = CONS(v6suffix,env0);               /*  SUFFIX          */
 if (ECL_LISTP(v2object)) { goto L1; }
 si_write_object(v2object, v3stream);
 value0 = ECL_NIL;
 cl_env_copy->nvalues = 1;
 return value0;
L1:;
 if ((ECL_SYM_VAL(cl_env_copy,ECL_SYM("*PRINT-READABLY*",59)))!=ECL_NIL) { goto L4; }
 if (!((ECL_SYM_VAL(cl_env_copy,ECL_SYM("*PRINT-LEVEL*",53)))==(ecl_make_fixnum(0)))) { goto L4; }
 cl_write_char(2, CODE_CHAR(35), v3stream);
 value0 = ECL_NIL;
 cl_env_copy->nvalues = 1;
 return value0;
L4:;
 {
  cl_object v7;
  v7 = ecl_make_cclosure_va((cl_objectfn)LC75__lambda516,env0,Cblock,2);
  T0 = v7;
 }
 si_write_object_with_circle(v2object, v3stream, T0);
 value0 = ECL_NIL;
 cl_env_copy->nvalues = 1;
 return value0;
}
/*      closure LAMBDA516                                             */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC75__lambda516(cl_narg narg, cl_object v1object, cl_object v2s, ...)
{
 cl_object T0;
 cl_object CLV0, CLV1, CLV2, CLV3;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 /* Scanning closure data ... */
 CLV3 = env0;                                     /*  SUFFIX          */
 CLV2 = _ecl_cdr(CLV3);
 CLV1 = _ecl_cdr(CLV2);
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
TTL:
 if ((L6pretty_stream_p(v2s))!=ECL_NIL) { goto L1; }
 v2s = L7make_pretty_stream(v2s);
L1:;
 if ((ECL_SYM_VAL(cl_env_copy,ECL_SYM("*PRINT-READABLY*",59)))!=ECL_NIL) { goto L6; }
 if (Null(ECL_SYM_VAL(cl_env_copy,ECL_SYM("*PRINT-LEVEL*",53)))) { goto L6; }
 T0 = ecl_one_minus(ECL_SYM_VAL(cl_env_copy,ECL_SYM("*PRINT-LEVEL*",53)));
 goto L4;
L6:;
 T0 = ECL_NIL;
 goto L4;
L4:;
 ecl_bds_bind(cl_env_copy,ECL_SYM("*PRINT-LEVEL*",53),T0); /*  *PRINT-LEVEL* */
 L51start_logical_block(v2s, ECL_CONS_CAR(CLV1), ECL_CONS_CAR(CLV2), ECL_CONS_CAR(CLV3));
 ecl_function_dispatch(cl_env_copy,ECL_CONS_CAR(CLV0))(2, v1object, v2s);
 value0 = L55end_logical_block(v2s);
 ecl_bds_unwind1(cl_env_copy);
 return value0;
 }
}
/*      function definition for PPRINT-LOGICAL-BLOCK-HELPER           */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L77pprint_logical_block_helper(cl_object volatile v1function, cl_object volatile v2object, cl_object volatile v3stream, cl_object volatile v4prefix, cl_object volatile v5per_line_prefix_p, cl_object volatile v6suffix)
{
 cl_object volatile env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
TTL:
 if (!((v3stream)==(ECL_NIL))) { goto L3; }
 v3stream = ECL_SYM_VAL(cl_env_copy,ECL_SYM("*STANDARD-OUTPUT*",69));
 goto L2;
L3:;
 if (!(ecl_eql(v3stream,ECL_T))) { goto L6; }
 v3stream = ECL_SYM_VAL(cl_env_copy,ECL_SYM("*TERMINAL-IO*",70));
 goto L2;
L6:;
L2:;
 if (Null(L6pretty_stream_p(v3stream))) { goto L9; }
 value0 = L76do_pprint_logical_block(v1function, v2object, v3stream, v4prefix, v5per_line_prefix_p, v6suffix);
 return value0;
L9:;
 {
  volatile cl_object v7stream;
  v7stream = L7make_pretty_stream(v3stream);
  value0 = VV[148];
  {
   ecl_frs_push(cl_env_copy,value0);
   if (__ecl_frs_push_result==0) {                /*  BEGIN CATCH 13  */
    L76do_pprint_logical_block(v1function, v2object, v7stream, v4prefix, v5per_line_prefix_p, v6suffix);
    L72force_pretty_output(v7stream);
   }
   ecl_frs_pop(cl_env_copy);                      /*  END CATCH 13    */
  }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function PPRINT-LOGICAL-BLOCK                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC78pprint_logical_block(cl_object v1, cl_object v2)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15;
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
   cl_object v6stream_symbol;
   cl_object v7object;
   cl_object v8;
   cl_object v9prefix;
   cl_object v10prefix_p;
   cl_object v11;
   cl_object v12per_line_prefix;
   cl_object v13per_line_prefix_p;
   cl_object v14;
   cl_object v15suffix;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[302])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v16;
    v16 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4 = v16;
   }
   v5 = v4;
   if (!(v5==ECL_NIL)) { goto L10; }
   ecl_function_dispatch(cl_env_copy,VV[302])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L10:;
   {
    cl_object v16;
    v16 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v6stream_symbol = v16;
   }
   if (!(v5==ECL_NIL)) { goto L16; }
   ecl_function_dispatch(cl_env_copy,VV[302])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L16:;
   {
    cl_object v16;
    v16 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v7object = v16;
   }
   v8 = ecl_function_dispatch(cl_env_copy,VV[303])(2, v5, VV[102]) /*  SEARCH-KEYWORD */;
   if (!((v8)==(ECL_SYM("MISSING-KEYWORD",2015)))) { goto L23; }
   v9prefix = VV[154];
   goto L22;
L23:;
   v9prefix = v8;
L22:;
   {
    bool v16;
    v16 = (v8)==(ECL_SYM("MISSING-KEYWORD",2015));
    v10prefix_p = (v16)?ECL_NIL:ECL_T;
   }
   v11 = ecl_function_dispatch(cl_env_copy,VV[303])(2, v5, VV[155]) /*  SEARCH-KEYWORD */;
   if (!((v11)==(ECL_SYM("MISSING-KEYWORD",2015)))) { goto L28; }
   v12per_line_prefix = VV[154];
   goto L27;
L28:;
   v12per_line_prefix = v11;
L27:;
   {
    bool v16;
    v16 = (v11)==(ECL_SYM("MISSING-KEYWORD",2015));
    v13per_line_prefix_p = (v16)?ECL_NIL:ECL_T;
   }
   v14 = ecl_function_dispatch(cl_env_copy,VV[303])(2, v5, VV[103]) /*  SEARCH-KEYWORD */;
   if (!((v14)==(ECL_SYM("MISSING-KEYWORD",2015)))) { goto L33; }
   v15suffix = VV[154];
   goto L32;
L33:;
   v15suffix = v14;
L32:;
   ecl_function_dispatch(cl_env_copy,VV[304])(2, v5, VV[156]) /*  CHECK-KEYWORD */;
   if (Null(v13per_line_prefix_p)) { goto L36; }
   if (Null(v10prefix_p)) { goto L38; }
   cl_error(1, VV[157]);
L38:;
   v9prefix = v12per_line_prefix;
L36:;
   {
    cl_object v16object_var;
    cl_object v17block_name;
    cl_object v18count_name;
    cl_object v19stream_var;
    cl_object v20function;
    v16object_var = cl_gensym(0);
    v17block_name = cl_gensym(1, VV[158]);
    v18count_name = cl_gensym(1, VV[159]);
    if (!((v6stream_symbol)==(ECL_NIL))) { goto L45; }
    v19stream_var = ECL_SYM("*STANDARD-OUTPUT*",69);
    goto L44;
L45:;
    if (!(ecl_eql(v6stream_symbol,ECL_T))) { goto L48; }
    v19stream_var = ECL_SYM("*TERMINAL-IO*",70);
    goto L44;
L48:;
    v19stream_var = v6stream_symbol;
L44:;
    T0 = cl_list(2, v18count_name, ecl_make_fixnum(0));
    T1 = cl_list(4, v16object_var, v19stream_var, ECL_SYM("&AUX",9), T0);
    T2 = cl_list(4, ECL_SYM("IGNORABLE",429), v16object_var, v19stream_var, v18count_name);
    T3 = cl_list(2, ECL_SYM("DECLARE",276), T2);
    T4 = cl_list(4, VV[152], v16object_var, v18count_name, v19stream_var);
    T5 = cl_list(3, ECL_SYM("RETURN-FROM",727), v17block_name, ECL_NIL);
    T6 = cl_list(3, ECL_SYM("UNLESS",885), T4, T5);
    T7 = cl_list(2, ECL_SYM("INCF",435), v18count_name);
    if (Null(v7object)) { goto L53; }
    T8 = cl_list(2, ECL_SYM("POP",645), v16object_var);
    goto L52;
L53:;
    T8 = ECL_NIL;
L52:;
    T9 = cl_list(4, ECL_SYM("PROGN",673), T6, T7, T8);
    T10 = cl_list(2, ECL_SYM("QUOTE",681), T9);
    T11 = cl_list(3, ECL_SYM("PPRINT-POP",657), ECL_NIL, T10);
    if (Null(v7object)) { goto L56; }
    T13 = cl_list(2, ECL_SYM("NULL",607), v16object_var);
    T14 = cl_list(3, ECL_SYM("RETURN-FROM",727), v17block_name, ECL_NIL);
    T15 = cl_list(3, ECL_SYM("WHEN",907), T13, T14);
    T12 = cl_list(2, ECL_SYM("QUOTE",681), T15);
    goto L55;
L56:;
    T13 = cl_list(3, ECL_SYM("RETURN-FROM",727), v17block_name, ECL_NIL);
    T12 = cl_list(2, ECL_SYM("QUOTE",681), T13);
L55:;
    T13 = cl_list(3, ECL_SYM("PPRINT-EXIT-IF-LIST-EXHAUSTED",651), ECL_NIL, T12);
    T14 = cl_list(2, T11, T13);
    T15 = cl_listX(3, ECL_SYM("MACROLET",523), T14, v3);
    v20function = cl_list(5, ECL_SYM("LAMBDA-BLOCK",1367), v17block_name, T1, T3, T15);
    T0 = cl_list(2, ECL_SYM("FUNCTION",398), v20function);
    value0 = cl_list(7, VV[153], T0, v7object, v6stream_symbol, v9prefix, v13per_line_prefix_p, v15suffix);
    return value0;
   }
  }
 }
}
/*      local function PPRINT-EXIT-IF-LIST-EXHAUSTED                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC79pprint_exit_if_list_exhausted(cl_object v1, cl_object v2)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   v3 = ecl_cdr(v1);
   if (Null(v3)) { goto L2; }
   ecl_function_dispatch(cl_env_copy,VV[306])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L2:;
   value0 = cl_error(1, VV[161]);
   return value0;
  }
 }
}
/*      local function PPRINT-POP                                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC80pprint_pop(cl_object v1, cl_object v2)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   v3 = ecl_cdr(v1);
   if (Null(v3)) { goto L2; }
   ecl_function_dispatch(cl_env_copy,VV[306])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L2:;
   value0 = cl_error(1, VV[163]);
   return value0;
  }
 }
}
/*      function definition for PPRINT-NEWLINE                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_pprint_newline(cl_narg narg, cl_object v1kind, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2stream;
  va_list args; va_start(args,v1kind);
  {
   int i = 1;
   if (i >= narg) {
    v2stream = ECL_NIL;
   } else {
    i++;
    v2stream = va_arg(args,cl_object);
    value0 = cl_streamp(v2stream);
    if ((value0)!=ECL_NIL) { goto L5; }
    if (!(ecl_eql(v2stream,ECL_T))) { goto L11; }
    value0 = VV[115];
    goto L9;
L11:;
    value0 = ECL_NIL;
    goto L9;
L9:;
    if ((value0)!=ECL_NIL) { goto L8; }
    if (!((v2stream)==(ECL_NIL))) { goto L14; }
    T0 = VV[116];
    goto L3;
L14:;
    T0 = ECL_NIL;
    goto L3;
L8:;
    T0 = value0;
    goto L3;
L5:;
    T0 = value0;
    goto L3;
L3:;
    if (ecl_unlikely(!((T0)!=ECL_NIL)))
         FEwrong_type_argument(VV[170],v2stream);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
   }
  }
  va_end(args);
  if (!(ecl_eql(v1kind,VV[137]))) { goto L22; }
  value0 = VV[165];
  goto L20;
L22:;
  value0 = ECL_NIL;
  goto L20;
L20:;
  if ((value0)!=ECL_NIL) { goto L19; }
  if (!(ecl_eql(v1kind,VV[139]))) { goto L26; }
  value0 = VV[166];
  goto L24;
L26:;
  value0 = ECL_NIL;
  goto L24;
L24:;
  if ((value0)!=ECL_NIL) { goto L19; }
  if (!(ecl_eql(v1kind,VV[140]))) { goto L30; }
  value0 = VV[167];
  goto L28;
L30:;
  value0 = ECL_NIL;
  goto L28;
L28:;
  if ((value0)!=ECL_NIL) { goto L19; }
  if (!(ecl_eql(v1kind,VV[72]))) { goto L33; }
  T0 = VV[168];
  goto L17;
L33:;
  T0 = ECL_NIL;
  goto L17;
L19:;
  T0 = value0;
  goto L17;
L17:;
  if (ecl_unlikely(!((T0)!=ECL_NIL)))
         FEwrong_type_argument(VV[169],v1kind);
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 0;
  {
   cl_object v3stream;
   if (!((v2stream)==(ECL_T))) { goto L37; }
   v3stream = ecl_symbol_value(ECL_SYM("*TERMINAL-IO*",70));
   goto L36;
L37:;
   if (!((v2stream)==(ECL_NIL))) { goto L40; }
   v3stream = ecl_symbol_value(ECL_SYM("*STANDARD-OUTPUT*",69));
   goto L36;
L40:;
   v3stream = v2stream;
L36:;
   if (Null(L6pretty_stream_p(v3stream))) { goto L35; }
   if (Null(ecl_symbol_value(ECL_SYM("*PRINT-PRETTY*",57)))) { goto L35; }
   L38enqueue_newline(v3stream, v1kind);
  }
L35:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for PPRINT-INDENT                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_pprint_indent(cl_narg narg, cl_object v1relative_to, cl_object v2n, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>3)) FEwrong_num_arguments_anonym();
 {
  cl_object v3stream;
  va_list args; va_start(args,v2n);
  {
   int i = 2;
   if (i >= narg) {
    v3stream = ECL_NIL;
   } else {
    i++;
    v3stream = va_arg(args,cl_object);
    value0 = cl_streamp(v3stream);
    if ((value0)!=ECL_NIL) { goto L5; }
    if (!(ecl_eql(v3stream,ECL_T))) { goto L11; }
    value0 = VV[115];
    goto L9;
L11:;
    value0 = ECL_NIL;
    goto L9;
L9:;
    if ((value0)!=ECL_NIL) { goto L8; }
    if (!((v3stream)==(ECL_NIL))) { goto L14; }
    T0 = VV[116];
    goto L3;
L14:;
    T0 = ECL_NIL;
    goto L3;
L8:;
    T0 = value0;
    goto L3;
L5:;
    T0 = value0;
    goto L3;
L3:;
    if (ecl_unlikely(!((T0)!=ECL_NIL)))
         FEwrong_type_argument(VV[170],v3stream);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
   }
  }
  va_end(args);
  if (!(ecl_eql(v1relative_to,ECL_SYM("BLOCK",1224)))) { goto L22; }
  value0 = VV[77];
  goto L20;
L22:;
  value0 = ECL_NIL;
  goto L20;
L20:;
  if ((value0)!=ECL_NIL) { goto L19; }
  if (!(ecl_eql(v1relative_to,VV[78]))) { goto L25; }
  T0 = VV[79];
  goto L17;
L25:;
  T0 = ECL_NIL;
  goto L17;
L19:;
  T0 = value0;
  goto L17;
L17:;
  if (ecl_unlikely(!((T0)!=ECL_NIL)))
         FEwrong_type_argument(VV[80],v1relative_to);
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 0;
  T0 = cl_realp(v2n);
  if (ecl_unlikely(!((T0)!=ECL_NIL)))
         FEwrong_type_argument(ECL_SYM("REAL",705),v2n);
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 0;
  {
   cl_object v4stream;
   if (!((v3stream)==(ECL_T))) { goto L30; }
   v4stream = ecl_symbol_value(ECL_SYM("*TERMINAL-IO*",70));
   goto L29;
L30:;
   if (!((v3stream)==(ECL_NIL))) { goto L33; }
   v4stream = ecl_symbol_value(ECL_SYM("*STANDARD-OUTPUT*",69));
   goto L29;
L33:;
   v4stream = v3stream;
L29:;
   if (Null(L6pretty_stream_p(v4stream))) { goto L28; }
   if (Null(ecl_symbol_value(ECL_SYM("*PRINT-PRETTY*",57)))) { goto L28; }
   T0 = ecl_round1(v2n);
   L43enqueue_indent(v4stream, v1relative_to, T0);
  }
L28:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for PPRINT-TAB                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_pprint_tab(cl_narg narg, cl_object v1kind, cl_object v2colnum, cl_object v3colinc, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<3)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>4)) FEwrong_num_arguments_anonym();
 {
  cl_object v4stream;
  va_list args; va_start(args,v3colinc);
  {
   int i = 3;
   if (i >= narg) {
    v4stream = ECL_NIL;
   } else {
    i++;
    v4stream = va_arg(args,cl_object);
    value0 = cl_streamp(v4stream);
    if ((value0)!=ECL_NIL) { goto L5; }
    if (!(ecl_eql(v4stream,ECL_T))) { goto L11; }
    value0 = VV[115];
    goto L9;
L11:;
    value0 = ECL_NIL;
    goto L9;
L9:;
    if ((value0)!=ECL_NIL) { goto L8; }
    if (!((v4stream)==(ECL_NIL))) { goto L14; }
    T0 = VV[116];
    goto L3;
L14:;
    T0 = ECL_NIL;
    goto L3;
L8:;
    T0 = value0;
    goto L3;
L5:;
    T0 = value0;
    goto L3;
L3:;
    if (ecl_unlikely(!((T0)!=ECL_NIL)))
         FEwrong_type_argument(VV[170],v4stream);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
   }
  }
  va_end(args);
  if (!(ecl_eql(v1kind,ECL_SYM("LINE",1661)))) { goto L22; }
  value0 = VV[171];
  goto L20;
L22:;
  value0 = ECL_NIL;
  goto L20;
L20:;
  if ((value0)!=ECL_NIL) { goto L19; }
  if (!(ecl_eql(v1kind,VV[128]))) { goto L26; }
  value0 = VV[172];
  goto L24;
L26:;
  value0 = ECL_NIL;
  goto L24;
L24:;
  if ((value0)!=ECL_NIL) { goto L19; }
  if (!(ecl_eql(v1kind,VV[127]))) { goto L30; }
  value0 = VV[173];
  goto L28;
L30:;
  value0 = ECL_NIL;
  goto L28;
L28:;
  if ((value0)!=ECL_NIL) { goto L19; }
  if (!(ecl_eql(v1kind,VV[129]))) { goto L33; }
  T0 = VV[174];
  goto L17;
L33:;
  T0 = ECL_NIL;
  goto L17;
L19:;
  T0 = value0;
  goto L17;
L17:;
  if (ecl_unlikely(!((T0)!=ECL_NIL)))
         FEwrong_type_argument(VV[175],v1kind);
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 0;
  {
   cl_object v5;
   v5 = ecl_make_fixnum(0);
   if (!(ECL_FIXNUMP(v2colnum)||ECL_BIGNUMP(v2colnum))) { goto L39; }
   v5 = v2colnum;
   T0 = ecl_make_bool(ecl_greatereq(v5,ecl_make_fixnum(0)));
   goto L36;
L39:;
   T0 = ECL_NIL;
   goto L36;
  }
L36:;
  if (ecl_unlikely(!((T0)!=ECL_NIL)))
         FEwrong_type_argument(ECL_SYM("UNSIGNED-BYTE",887),v2colnum);
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 0;
  {
   cl_object v5;
   v5 = ecl_make_fixnum(0);
   if (!(ECL_FIXNUMP(v3colinc)||ECL_BIGNUMP(v3colinc))) { goto L47; }
   v5 = v3colinc;
   T0 = ecl_make_bool(ecl_greatereq(v5,ecl_make_fixnum(0)));
   goto L44;
L47:;
   T0 = ECL_NIL;
   goto L44;
  }
L44:;
  if (ecl_unlikely(!((T0)!=ECL_NIL)))
         FEwrong_type_argument(ECL_SYM("UNSIGNED-BYTE",887),v3colinc);
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 0;
  {
   cl_object v5stream;
   if (!((v4stream)==(ECL_T))) { goto L53; }
   v5stream = ecl_symbol_value(ECL_SYM("*TERMINAL-IO*",70));
   goto L52;
L53:;
   if (!((v4stream)==(ECL_NIL))) { goto L56; }
   v5stream = ecl_symbol_value(ECL_SYM("*STANDARD-OUTPUT*",69));
   goto L52;
L56:;
   v5stream = v4stream;
L52:;
   if (Null(L6pretty_stream_p(v5stream))) { goto L51; }
   if (Null(ecl_symbol_value(ECL_SYM("*PRINT-PRETTY*",57)))) { goto L51; }
   L62enqueue_tab(v5stream, v1kind, v2colnum, v3colinc);
  }
L51:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for PPRINT-FILL                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_pprint_fill(cl_narg narg, cl_object v1stream, cl_object v2list, ...)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>4)) FEwrong_num_arguments_anonym();
 {
  cl_object v3colon_;
  cl_object v4atsign_;
  va_list args; va_start(args,v2list);
  {
   int i = 2;
   if (i >= narg) {
    v3colon_ = ECL_T;
   } else {
    i++;
    v3colon_ = va_arg(args,cl_object);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
   }
   if (i >= narg) {
    v4atsign_ = ECL_NIL;
   } else {
    i++;
    v4atsign_ = va_arg(args,cl_object);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
   }
  }
  va_end(args);
  value0 = cl_streamp(v1stream);
  if ((value0)!=ECL_NIL) { goto L8; }
  if (!(ecl_eql(v1stream,ECL_T))) { goto L14; }
  value0 = VV[115];
  goto L12;
L14:;
  value0 = ECL_NIL;
  goto L12;
L12:;
  if ((value0)!=ECL_NIL) { goto L11; }
  if (!((v1stream)==(ECL_NIL))) { goto L17; }
  T0 = VV[116];
  goto L6;
L17:;
  T0 = ECL_NIL;
  goto L6;
L11:;
  T0 = value0;
  goto L6;
L8:;
  T0 = value0;
  goto L6;
L6:;
  if (ecl_unlikely(!((T0)!=ECL_NIL)))
         FEwrong_type_argument(VV[170],v1stream);
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 0;
  {
   cl_object v5;
   v5 = ecl_make_cfun((cl_objectfn_fixed)LC81__pprint_logical_block_592,ECL_NIL,Cblock,2);
   T0 = v5;
  }
  if (Null(v3colon_)) { goto L21; }
  T1 = VV[176];
  goto L20;
L21:;
  T1 = VV[154];
L20:;
  if (Null(v3colon_)) { goto L24; }
  T2 = VV[177];
  goto L23;
L24:;
  T2 = VV[154];
L23:;
  value0 = L77pprint_logical_block_helper(T0, v2list, v1stream, T1, ECL_NIL, T2);
  return value0;
 }
}
/*      local function PPRINT-LOGICAL-BLOCK-592                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC81__pprint_logical_block_592(cl_object v1, cl_object v2stream)
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
   v3 = ecl_make_fixnum(0);
   if (!(v1==ECL_NIL)) { goto L2; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L2:;
L4:;
   if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L7; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L7:;
   v3 = ecl_plus(v3,ecl_make_fixnum(1));
   {
    cl_object v4;
    v4 = v1;
    {
     cl_object v5;
     v5 = v4;
     if (ecl_unlikely(!ECL_LISTP(v5))) FEtype_error_list(v5);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
    }
    if (Null(v4)) { goto L16; }
    {
     cl_object v5;
     v5 = ECL_CONS_CDR(v4);
     v1 = v5;
     v4 = ECL_CONS_CAR(v4);
    }
L16:;
    T0 = v4;
   }
   si_write_object(T0, v2stream);
   if (!(v1==ECL_NIL)) { goto L22; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L22:;
   cl_write_char(2, CODE_CHAR(32), v2stream);
   cl_pprint_newline(2, VV[140], v2stream);
   goto L4;
  }
 }
}
/*      function definition for PPRINT-LINEAR                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_pprint_linear(cl_narg narg, cl_object v1stream, cl_object v2list, ...)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>4)) FEwrong_num_arguments_anonym();
 {
  cl_object v3colon_;
  cl_object v4atsign_;
  va_list args; va_start(args,v2list);
  {
   int i = 2;
   if (i >= narg) {
    v3colon_ = ECL_T;
   } else {
    i++;
    v3colon_ = va_arg(args,cl_object);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
   }
   if (i >= narg) {
    v4atsign_ = ECL_NIL;
   } else {
    i++;
    v4atsign_ = va_arg(args,cl_object);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
   }
  }
  va_end(args);
  value0 = cl_streamp(v1stream);
  if ((value0)!=ECL_NIL) { goto L8; }
  if (!(ecl_eql(v1stream,ECL_T))) { goto L14; }
  value0 = VV[115];
  goto L12;
L14:;
  value0 = ECL_NIL;
  goto L12;
L12:;
  if ((value0)!=ECL_NIL) { goto L11; }
  if (!((v1stream)==(ECL_NIL))) { goto L17; }
  T0 = VV[116];
  goto L6;
L17:;
  T0 = ECL_NIL;
  goto L6;
L11:;
  T0 = value0;
  goto L6;
L8:;
  T0 = value0;
  goto L6;
L6:;
  if (ecl_unlikely(!((T0)!=ECL_NIL)))
         FEwrong_type_argument(VV[170],v1stream);
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 0;
  {
   cl_object v5;
   v5 = ecl_make_cfun((cl_objectfn_fixed)LC82__pprint_logical_block_608,ECL_NIL,Cblock,2);
   T0 = v5;
  }
  if (Null(v3colon_)) { goto L21; }
  T1 = VV[176];
  goto L20;
L21:;
  T1 = VV[154];
L20:;
  if (Null(v3colon_)) { goto L24; }
  T2 = VV[177];
  goto L23;
L24:;
  T2 = VV[154];
L23:;
  value0 = L77pprint_logical_block_helper(T0, v2list, v1stream, T1, ECL_NIL, T2);
  return value0;
 }
}
/*      local function PPRINT-LOGICAL-BLOCK-608                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC82__pprint_logical_block_608(cl_object v1, cl_object v2stream)
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
   v3 = ecl_make_fixnum(0);
   if (!(v1==ECL_NIL)) { goto L2; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L2:;
L4:;
   if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L7; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L7:;
   v3 = ecl_plus(v3,ecl_make_fixnum(1));
   {
    cl_object v4;
    v4 = v1;
    {
     cl_object v5;
     v5 = v4;
     if (ecl_unlikely(!ECL_LISTP(v5))) FEtype_error_list(v5);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
    }
    if (Null(v4)) { goto L16; }
    {
     cl_object v5;
     v5 = ECL_CONS_CDR(v4);
     v1 = v5;
     v4 = ECL_CONS_CAR(v4);
    }
L16:;
    T0 = v4;
   }
   si_write_object(T0, v2stream);
   if (!(v1==ECL_NIL)) { goto L22; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L22:;
   cl_write_char(2, CODE_CHAR(32), v2stream);
   cl_pprint_newline(2, VV[137], v2stream);
   goto L4;
  }
 }
}
/*      function definition for PPRINT-TABULAR                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_pprint_tabular(cl_narg narg, cl_object v1stream, cl_object v2list, ...)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>5)) FEwrong_num_arguments_anonym();
 {
  cl_object v3colon_;
  cl_object v4atsign_;
  cl_object v5tabsize;
  va_list args; va_start(args,v2list);
  {
   int i = 2;
   if (i >= narg) {
    v3colon_ = ECL_T;
   } else {
    i++;
    v3colon_ = va_arg(args,cl_object);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
   }
   if (i >= narg) {
    v4atsign_ = ECL_NIL;
   } else {
    i++;
    v4atsign_ = va_arg(args,cl_object);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
   }
   if (i >= narg) {
    v5tabsize = ecl_make_fixnum(16);
   } else {
    i++;
    v5tabsize = va_arg(args,cl_object);
    {
     cl_object v6;
     v6 = ecl_make_fixnum(0);
     if (!(ECL_FIXNUMP(v5tabsize)||ECL_BIGNUMP(v5tabsize))) { goto L13; }
     v6 = v5tabsize;
     value0 = ecl_make_bool(ecl_greatereq(v6,ecl_make_fixnum(0)));
     goto L10;
L13:;
     value0 = ECL_NIL;
     goto L10;
    }
L10:;
    if ((value0)!=ECL_NIL) { goto L9; }
    T0 = ecl_make_bool(v5tabsize==ECL_NIL);
    goto L7;
L9:;
    T0 = value0;
    goto L7;
L7:;
    if (ecl_unlikely(!((T0)!=ECL_NIL)))
         FEwrong_type_argument(VV[178],v5tabsize);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
   }
  }
  va_end(args);
  value0 = cl_streamp(v1stream);
  if ((value0)!=ECL_NIL) { goto L20; }
  if (!(ecl_eql(v1stream,ECL_T))) { goto L26; }
  value0 = VV[115];
  goto L24;
L26:;
  value0 = ECL_NIL;
  goto L24;
L24:;
  if ((value0)!=ECL_NIL) { goto L23; }
  if (!((v1stream)==(ECL_NIL))) { goto L29; }
  T0 = VV[116];
  goto L18;
L29:;
  T0 = ECL_NIL;
  goto L18;
L23:;
  T0 = value0;
  goto L18;
L20:;
  T0 = value0;
  goto L18;
L18:;
  if (ecl_unlikely(!((T0)!=ECL_NIL)))
         FEwrong_type_argument(VV[170],v1stream);
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 0;
  {
   cl_object env1 = env0;
   env1 = ECL_NIL;
   CLV0 = env1 = CONS(v5tabsize,env1);            /*  TABSIZE         */
   {
    cl_object v6;
    v6 = ecl_make_cclosure_va((cl_objectfn)LC83__pprint_logical_block_624,env1,Cblock,2);
    T0 = v6;
   }
   if (Null(v3colon_)) { goto L33; }
   T1 = VV[176];
   goto L32;
L33:;
   T1 = VV[154];
L32:;
   if (Null(v3colon_)) { goto L36; }
   T2 = VV[177];
   goto L35;
L36:;
   T2 = VV[154];
L35:;
   value0 = L77pprint_logical_block_helper(T0, v2list, v1stream, T1, ECL_NIL, T2);
   return value0;
  }
 }
}
/*      closure PPRINT-LOGICAL-BLOCK-624                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC83__pprint_logical_block_624(cl_narg narg, cl_object v1, cl_object v2stream, ...)
{
 cl_object T0;
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV0 = env0;                                     /*  TABSIZE         */
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=2)) FEwrong_num_arguments_anonym();
 {
TTL:
  {
   cl_object v3;
   v3 = ecl_make_fixnum(0);
   if (!(v1==ECL_NIL)) { goto L2; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L2:;
L4:;
   if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L7; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L7:;
   v3 = ecl_plus(v3,ecl_make_fixnum(1));
   {
    cl_object v4;
    v4 = v1;
    {
     cl_object v5;
     v5 = v4;
     if (ecl_unlikely(!ECL_LISTP(v5))) FEtype_error_list(v5);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
    }
    if (Null(v4)) { goto L16; }
    {
     cl_object v5;
     v5 = ECL_CONS_CDR(v4);
     v1 = v5;
     v4 = ECL_CONS_CAR(v4);
    }
L16:;
    T0 = v4;
   }
   si_write_object(T0, v2stream);
   if (!(v1==ECL_NIL)) { goto L22; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L22:;
   cl_write_char(2, CODE_CHAR(32), v2stream);
   value0 = ECL_CONS_CAR(CLV0);
   if ((value0)!=ECL_NIL) { goto L28; }
   T0 = ecl_make_fixnum(16);
   goto L26;
L28:;
   T0 = value0;
   goto L26;
L26:;
   cl_pprint_tab(4, VV[129], ecl_make_fixnum(0), T0, v2stream);
   cl_pprint_newline(2, VV[140], v2stream);
   goto L4;
  }
 }
 }
}
/*      function definition for MAKE-PPRINT-DISPATCH-ENTRY            */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L84make_pprint_dispatch_entry(cl_narg narg, ...)
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
  cl_parse_key(args,4,L84make_pprint_dispatch_entrykeys,keyvars,NULL,FALSE);
  ecl_va_end(args);
  if (Null(keyvars[4])) {
   v1 = ecl_function_dispatch(cl_env_copy,VV[274])(0) /*  REQUIRED-ARGUMENT */;
  } else {
   v1 = keyvars[0];
  }
  if (Null(keyvars[5])) {
   v2 = ecl_make_fixnum(0);
  } else {
   v2 = keyvars[1];
  }
  if (Null(keyvars[6])) {
   {
    bool v5;
    v5 = ecl_boundp(cl_env_copy,VV[180]);
    v3 = (v5)?ECL_NIL:ECL_T;
   }
  } else {
   v3 = keyvars[2];
  }
  if (Null(keyvars[7])) {
   v4 = ecl_function_dispatch(cl_env_copy,VV[274])(0) /*  REQUIRED-ARGUMENT */;
  } else {
   v4 = keyvars[3];
  }
 }
 if ((cl_functionp(v4))!=ECL_NIL) { goto L5; }
 if (ECL_SYMBOLP(v4)) { goto L5; }
 ecl_function_dispatch(cl_env_copy,VV[267])(4, v4, VV[185], VV[181], ECL_SYM("FUNCTION",398)) /*  STRUCTURE-TYPE-ERROR */;
L5:;
 if (!(ecl_eql(v3,ECL_T))) { goto L12; }
 goto L8;
 goto L10;
L12:;
 goto L10;
L10:;
 if (!((v3)==(ECL_NIL))) { goto L15; }
 goto L8;
 goto L9;
L15:;
 goto L9;
L9:;
 ecl_function_dispatch(cl_env_copy,VV[267])(4, v3, VV[117], VV[181], VV[186]) /*  STRUCTURE-TYPE-ERROR */;
L8:;
 if ((cl_realp(v2))!=ECL_NIL) { goto L17; }
 ecl_function_dispatch(cl_env_copy,VV[267])(4, v2, ECL_SYM("REAL",705), VV[181], VV[187]) /*  STRUCTURE-TYPE-ERROR */;
L17:;
 value0 = si_make_structure(5, VV[188], v1, v2, v3, v4);
 return value0;
}
/*      local function LAMBDA646                                      */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC85__lambda646(cl_object v1, cl_object v2x)
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
  T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[181]);
  T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2x, T0, ecl_make_fixnum(3), v3, v4);
  T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[181]);
  T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2x, T2, ecl_make_fixnum(3));
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
/*      local function LAMBDA650                                      */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC86__lambda650(cl_object v1, cl_object v2x)
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
  T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[181]);
  T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2x, T0, ecl_make_fixnum(2), v3, v4);
  T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[181]);
  T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2x, T2, ecl_make_fixnum(2));
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
/*      local function LAMBDA654                                      */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC87__lambda654(cl_object v1, cl_object v2x)
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
  T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[181]);
  T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2x, T0, ecl_make_fixnum(1), v3, v4);
  T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[181]);
  T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2x, T2, ecl_make_fixnum(1));
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
/*      local function LAMBDA658                                      */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC88__lambda658(cl_object v1, cl_object v2x)
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
  T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[181]);
  T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2x, T0, ecl_make_fixnum(0), v3, v4);
  T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[181]);
  T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2x, T2, ecl_make_fixnum(0));
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
/*      function definition for %PRINT-PPRINT-DISPATCH-ENTRY          */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L90_print_pprint_dispatch_entry(cl_object v1entry, cl_object v2stream, cl_object v3depth)
{
 cl_object env0 = ECL_NIL;
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 env0 = ECL_NIL;
 CLV0 = env0 = CONS(v1entry,env0);                /*  ENTRY           */
 CLV1 = env0 = CONS(v2stream,env0);               /*  STREAM          */
 {
  cl_object v4;
  v4 = ecl_make_cclosure_va((cl_objectfn)LC89_print_unreadable_object_body_,env0,Cblock,0);
  value0 = si_print_unreadable_object_function(ECL_CONS_CAR(CLV0), ECL_CONS_CAR(CLV1), ECL_T, ECL_NIL, v4);
  return value0;
 }
}
/*      closure .PRINT-UNREADABLE-OBJECT-BODY.                        */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC89_print_unreadable_object_body_(cl_narg narg, ...)
{
 cl_object T0, T1, T2;
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 /* Scanning closure data ... */
 CLV1 = env0;                                     /*  STREAM          */
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
TTL:
 T0 = ecl_function_dispatch(cl_env_copy,VV[193])(1, ECL_CONS_CAR(CLV0)) /*  PPRINT-DISPATCH-ENTRY-TYPE */;
 T1 = ecl_function_dispatch(cl_env_copy,VV[192])(1, ECL_CONS_CAR(CLV0)) /*  PPRINT-DISPATCH-ENTRY-PRIORITY */;
 T2 = ecl_function_dispatch(cl_env_copy,VV[191])(1, ECL_CONS_CAR(CLV0)) /*  PPRINT-DISPATCH-ENTRY-INITIAL-P */;
 value0 = cl_format(5, ECL_CONS_CAR(CLV1), VV[194], T0, T1, T2);
 return value0;
 }
}
/*      function definition for MAKE-PPRINT-DISPATCH-TABLE            */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L91make_pprint_dispatch_table(cl_narg narg, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 cl_object v1;
 cl_object v2;
 cl_object v3;
 ecl_va_list args; ecl_va_start(args,narg,narg,0);
 {
  cl_object keyvars[6];
  cl_parse_key(args,3,L91make_pprint_dispatch_tablekeys,keyvars,NULL,FALSE);
  ecl_va_end(args);
  v1 = keyvars[0];
  v2 = keyvars[1];
  if (Null(keyvars[5])) {
   T0 = (ECL_SYM("EQL",336)->symbol.gfdef);
   v3 = cl_make_hash_table(2, ECL_SYM("TEST",1343), T0);
  } else {
   v3 = keyvars[2];
  }
 }
 if (ECL_LISTP(v2)) { goto L3; }
 ecl_function_dispatch(cl_env_copy,VV[267])(4, v2, ECL_SYM("LIST",483), VV[195], VV[199]) /*  STRUCTURE-TYPE-ERROR */;
L3:;
 value0 = si_make_structure(4, VV[200], v1, v2, v3);
 return value0;
}
/*      local function LAMBDA662                                      */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC92__lambda662(cl_object v1, cl_object v2x)
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
  T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[195]);
  T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2x, T0, ecl_make_fixnum(2), v3, v4);
  T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[195]);
  T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2x, T2, ecl_make_fixnum(2));
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
/*      local function LAMBDA666                                      */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC93__lambda666(cl_object v1, cl_object v2x)
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
  T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[195]);
  T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2x, T0, ecl_make_fixnum(1), v3, v4);
  T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[195]);
  T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2x, T2, ecl_make_fixnum(1));
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
/*      local function LAMBDA670                                      */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC94__lambda670(cl_object v1, cl_object v2x)
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
  T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[195]);
  T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2x, T0, ecl_make_fixnum(0), v3, v4);
  T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[195]);
  T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2x, T2, ecl_make_fixnum(0));
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
/*      function definition for %PRINT-PPRINT-DISPATCH-TABLE          */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L95_print_pprint_dispatch_table(cl_object v1table, cl_object v2stream, cl_object v3depth)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 value0 = si_print_unreadable_object_function(v1table, v2stream, ECL_T, ECL_T, ECL_NIL);
 return value0;
}
/*      function definition for CONS-TYPE-SPECIFIER-P                 */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L96cons_type_specifier_p(cl_object v1spec)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 if (!(ECL_CONSP(v1spec))) { goto L2; }
 T0 = _ecl_car(v1spec);
 if (!((T0)==(ECL_SYM("CONS",253)))) { goto L2; }
 if (Null(_ecl_cdr(v1spec))) { goto L2; }
 T0 = _ecl_cddr(v1spec);
 if (!(T0==ECL_NIL)) { goto L2; }
 {
  cl_object v2car;
  v2car = _ecl_cadr(v1spec);
  if (!(ECL_CONSP(v2car))) { goto L9; }
  {
   cl_object v3carcar;
   v3carcar = _ecl_car(v2car);
   if ((v3carcar)==(ECL_SYM("MEMBER",554))) { goto L13; }
   if (!((v3carcar)==(ECL_SYM("EQL",336)))) { goto L9; }
   goto L11;
L13:;
  }
L11:;
  if (Null(_ecl_cdr(v2car))) { goto L9; }
  T0 = _ecl_cddr(v2car);
  value0 = ecl_make_bool(T0==ECL_NIL);
  cl_env_copy->nvalues = 1;
  return value0;
L9:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
L2:;
 value0 = ECL_NIL;
 cl_env_copy->nvalues = 1;
 return value0;
}
/*      function definition for ENTRY<                                */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L97entry_(cl_object v1e1, cl_object v2e2)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 if (Null(ecl_function_dispatch(cl_env_copy,VV[191])(1, v1e1) /*  PPRINT-DISPATCH-ENTRY-INITIAL-P */)) { goto L1; }
 if (Null(ecl_function_dispatch(cl_env_copy,VV[191])(1, v2e2) /*  PPRINT-DISPATCH-ENTRY-INITIAL-P */)) { goto L3; }
 T0 = ecl_function_dispatch(cl_env_copy,VV[192])(1, v1e1) /*  PPRINT-DISPATCH-ENTRY-PRIORITY */;
 T1 = ecl_function_dispatch(cl_env_copy,VV[192])(1, v2e2) /*  PPRINT-DISPATCH-ENTRY-PRIORITY */;
 value0 = ecl_make_bool(ecl_lower(T0,T1));
 cl_env_copy->nvalues = 1;
 return value0;
L3:;
 value0 = ECL_T;
 cl_env_copy->nvalues = 1;
 return value0;
L1:;
 if (Null(ecl_function_dispatch(cl_env_copy,VV[191])(1, v2e2) /*  PPRINT-DISPATCH-ENTRY-INITIAL-P */)) { goto L5; }
 value0 = ECL_NIL;
 cl_env_copy->nvalues = 1;
 return value0;
L5:;
 T0 = ecl_function_dispatch(cl_env_copy,VV[192])(1, v1e1) /*  PPRINT-DISPATCH-ENTRY-PRIORITY */;
 T1 = ecl_function_dispatch(cl_env_copy,VV[192])(1, v2e2) /*  PPRINT-DISPATCH-ENTRY-PRIORITY */;
 value0 = ecl_make_bool(ecl_lower(T0,T1));
 cl_env_copy->nvalues = 1;
 return value0;
}
/*      function definition for COPY-PPRINT-DISPATCH                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_copy_pprint_dispatch(cl_narg narg, ...)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg>1)) FEwrong_num_arguments_anonym();
 {
  cl_object v1table;
  va_list args; va_start(args,narg);
  {
   int i = 0;
   if (i >= narg) {
    v1table = ECL_SYM_VAL(cl_env_copy,ECL_SYM("*PRINT-PPRINT-DISPATCH*",56));
   } else {
    i++;
    v1table = va_arg(args,cl_object);
    value0 = si_of_class_p(2, v1table, VV[195]);
    if ((value0)!=ECL_NIL) { goto L5; }
    T0 = ecl_make_bool(v1table==ECL_NIL);
    goto L3;
L5:;
    T0 = value0;
    goto L3;
L3:;
    if (ecl_unlikely(!((T0)!=ECL_NIL)))
         FEwrong_type_argument(VV[206],v1table);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
   }
  }
  va_end(args);
  {
   cl_object v2orig;
   value0 = v1table;
   if ((value0)!=ECL_NIL) { goto L9; }
   v2orig = ecl_symbol_value(VV[180]);
   goto L7;
L9:;
   v2orig = value0;
   goto L7;
L7:;
   {
    cl_object v3new;
    cl_object env1 = env0;
    T0 = ecl_function_dispatch(cl_env_copy,VV[203])(1, v2orig) /*  PPRINT-DISPATCH-TABLE-ENTRIES */;
    T1 = cl_copy_list(T0);
    v3new = L91make_pprint_dispatch_table(2, VV[205], T1);
    T0 = ecl_function_dispatch(cl_env_copy,VV[202])(1, v3new) /*  PPRINT-DISPATCH-TABLE-CONS-ENTRIES */;
    env1 = ECL_NIL;
    CLV0 = env1 = CONS(T0,env1);                  /*  NEW-CONS-ENTRIES */
    {
     cl_object v4;
     v4 = ecl_make_cclosure_va((cl_objectfn)LC98__lambda673,env1,Cblock,2);
     T0 = v4;
    }
    T1 = ecl_function_dispatch(cl_env_copy,VV[202])(1, v2orig) /*  PPRINT-DISPATCH-TABLE-CONS-ENTRIES */;
    cl_maphash(T0, T1);
    value0 = v3new;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      closure LAMBDA673                                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC98__lambda673(cl_narg narg, cl_object v1key, cl_object v2value, ...)
{
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV0 = env0;                                     /*  NEW-CONS-ENTRIES */
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=2)) FEwrong_num_arguments_anonym();
 {
TTL:
  value0 = si_hash_set(v1key, ECL_CONS_CAR(CLV0), v2value);
  return value0;
 }
 }
}
/*      function definition for DEFAULT-PPRINT-DISPATCH               */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L99default_pprint_dispatch(cl_object v1stream, cl_object v2object)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 value0 = si_write_ugly_object(v2object, v1stream);
 return value0;
}
/*      function definition for PPRINT-DISPATCH                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_pprint_dispatch(cl_narg narg, cl_object v1object, ...)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2table;
  va_list args; va_start(args,v1object);
  {
   int i = 1;
   if (i >= narg) {
    v2table = ECL_SYM_VAL(cl_env_copy,ECL_SYM("*PRINT-PPRINT-DISPATCH*",56));
   } else {
    i++;
    v2table = va_arg(args,cl_object);
    value0 = si_of_class_p(2, v2table, VV[195]);
    if ((value0)!=ECL_NIL) { goto L5; }
    T0 = ecl_make_bool(v2table==ECL_NIL);
    goto L3;
L5:;
    T0 = value0;
    goto L3;
L3:;
    if (ecl_unlikely(!((T0)!=ECL_NIL)))
         FEwrong_type_argument(VV[206],v2table);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
   }
  }
  va_end(args);
  {
   cl_object v3table;
   cl_object v4cons_entry;
   cl_object v5entry;
   value0 = v2table;
   if ((value0)!=ECL_NIL) { goto L9; }
   v3table = ecl_symbol_value(VV[180]);
   goto L7;
L9:;
   v3table = value0;
   goto L7;
L7:;
   if (!(ECL_CONSP(v1object))) { goto L13; }
   T0 = ecl_car(v1object);
   T1 = ecl_function_dispatch(cl_env_copy,VV[202])(1, v3table) /*  PPRINT-DISPATCH-TABLE-CONS-ENTRIES */;
   v4cons_entry = ecl_gethash_safe(T0,T1,ECL_NIL);
   goto L11;
L13:;
   v4cons_entry = ECL_NIL;
   goto L11;
L11:;
   {
    cl_object v6;
    v6 = ecl_function_dispatch(cl_env_copy,VV[203])(1, v3table) /*  PPRINT-DISPATCH-TABLE-ENTRIES */;
    goto L19;
L18:;
    {
     cl_object v7entry;
     v7entry = ecl_car(v6);
     if (Null(v4cons_entry)) { goto L23; }
     if (Null(L97entry_(v7entry, v4cons_entry))) { goto L23; }
     v5entry = v4cons_entry;
     goto L15;
L23:;
     T0 = ecl_function_dispatch(cl_env_copy,VV[193])(1, v7entry) /*  PPRINT-DISPATCH-ENTRY-TYPE */;
     if (Null(cl_typep(2, v1object, T0))) { goto L26; }
     v5entry = v7entry;
     goto L15;
L26:;
    }
    v6 = ecl_cdr(v6);
L19:;
    if (Null(v6)) { goto L30; }
    goto L18;
L30:;
    v5entry = v4cons_entry;
   }
L15:;
   if (Null(v5entry)) { goto L32; }
   T0 = ecl_function_dispatch(cl_env_copy,VV[190])(1, v5entry) /*  PPRINT-DISPATCH-ENTRY-FUNCTION */;
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = ECL_T;
   cl_env_copy->values[0] = T0;
   return cl_env_copy->values[0];
L32:;
   T0 = (VV[207]->symbol.gfdef);
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = T0;
   return cl_env_copy->values[0];
  }
 }
}
/*      function definition for SET-PPRINT-DISPATCH                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_set_pprint_dispatch(cl_narg narg, cl_object v1type, cl_object v2function, ...)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>4)) FEwrong_num_arguments_anonym();
 {
  cl_object v3priority;
  cl_object v4table;
  va_list args; va_start(args,v2function);
  {
   int i = 2;
   if (i >= narg) {
    v3priority = ecl_make_fixnum(0);
   } else {
    i++;
    v3priority = va_arg(args,cl_object);
    T0 = cl_realp(v3priority);
    if (ecl_unlikely(!((T0)!=ECL_NIL)))
         FEwrong_type_argument(ECL_SYM("REAL",705),v3priority);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
   }
   if (i >= narg) {
    v4table = ECL_SYM_VAL(cl_env_copy,ECL_SYM("*PRINT-PPRINT-DISPATCH*",56));
   } else {
    i++;
    v4table = va_arg(args,cl_object);
    T0 = si_of_class_p(2, v4table, VV[195]);
    if (ecl_unlikely(!((T0)!=ECL_NIL)))
         FEwrong_type_argument(VV[195],v4table);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
   }
  }
  va_end(args);
  value0 = ecl_make_bool(v2function==ECL_NIL);
  if ((value0)!=ECL_NIL) { goto L8; }
  value0 = cl_functionp(v2function);
  if ((value0)!=ECL_NIL) { goto L8; }
  T0 = ecl_make_bool(ECL_SYMBOLP(v2function));
  goto L6;
L8:;
  T0 = value0;
  goto L6;
L6:;
  if (ecl_unlikely(!((T0)!=ECL_NIL)))
         FEwrong_type_argument(VV[208],v2function);
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 0;
  if (Null(ecl_function_dispatch(cl_env_copy,VV[204])(1, v4table) /*  PPRINT-DISPATCH-TABLE-READ-ONLY-P */)) { goto L11; }
  cl_cerror(3, VV[209], VV[210], v4table);
L11:;
  if (Null(v2function)) { goto L15; }
  if (Null(L96cons_type_specifier_p(v1type))) { goto L17; }
  T0 = ecl_cadr(v1type);
  T1 = ecl_cadr(T0);
  T2 = ecl_function_dispatch(cl_env_copy,VV[202])(1, v4table) /*  PPRINT-DISPATCH-TABLE-CONS-ENTRIES */;
  T3 = L84make_pprint_dispatch_entry(6, ECL_SYM("TYPE",1346), v1type, VV[211], v3priority, ECL_SYM("FUNCTION",1264), v2function);
  si_hash_set(T1, T2, T3);
  goto L14;
L17:;
  {
   cl_object v5;
   cl_object v6;
   cl_object v7list;
   T0 = ecl_function_dispatch(cl_env_copy,VV[203])(1, v4table) /*  PPRINT-DISPATCH-TABLE-ENTRIES */;
   T1 = (VV[193]->symbol.gfdef);
   T2 = (ECL_SYM("EQUAL",337)->symbol.gfdef);
   v5 = cl_delete(6, v1type, T0, ECL_SYM("KEY",1288), T1, ECL_SYM("TEST",1343), T2);
   v6 = L84make_pprint_dispatch_entry(6, ECL_SYM("TYPE",1346), v1type, VV[211], v3priority, ECL_SYM("FUNCTION",1264), v2function);
   v7list = v5;
   {
    cl_object v8;
    cl_object v9prev;
    cl_object v10next;
    v8 = v7list;
    v9prev = ECL_NIL;
    v10next = v8;
    goto L30;
L29:;
    T0 = ecl_car(v10next);
    if (Null(L97entry_(T0, v6))) { goto L32; }
    if (Null(v9prev)) { goto L35; }
    {
     cl_object v11;
     v11 = CONS(v6,v10next);
     {
      cl_object v12;
      v12 = v9prev;
      if (ecl_unlikely(ECL_ATOM(v12))) FEtype_error_cons(v12);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      T0 = v12;
     }
     (ECL_CONS_CDR(T0)=v11,T0);
     goto L34;
    }
L35:;
    v7list = CONS(v6,v10next);
L34:;
    goto L24;
L32:;
    v9prev = v10next;
    v10next = ecl_cdr(v10next);
L30:;
    if (v10next==ECL_NIL) { goto L46; }
    goto L29;
L46:;
    if (Null(v9prev)) { goto L48; }
    {
     cl_object v11;
     v11 = ecl_list1(v6);
     {
      cl_object v12;
      v12 = v9prev;
      if (ecl_unlikely(ECL_ATOM(v12))) FEtype_error_cons(v12);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      T0 = v12;
     }
     (ECL_CONS_CDR(T0)=v11,T0);
     goto L24;
    }
L48:;
    v7list = ecl_list1(v6);
   }
L24:;
   ecl_structure_set(v4table,VV[195],1,v7list);
   goto L14;
  }
L15:;
  if (Null(L96cons_type_specifier_p(v1type))) { goto L56; }
  T0 = ecl_cadr(v1type);
  T1 = ecl_cadr(T0);
  T2 = ecl_function_dispatch(cl_env_copy,VV[202])(1, v4table) /*  PPRINT-DISPATCH-TABLE-CONS-ENTRIES */;
  cl_remhash(T1, T2);
  goto L14;
L56:;
  {
   cl_object v8;
   T0 = ecl_function_dispatch(cl_env_copy,VV[203])(1, v4table) /*  PPRINT-DISPATCH-TABLE-ENTRIES */;
   T1 = (VV[193]->symbol.gfdef);
   T2 = (ECL_SYM("EQUAL",337)->symbol.gfdef);
   v8 = cl_delete(6, v1type, T0, ECL_SYM("KEY",1288), T1, ECL_SYM("TEST",1343), T2);
   ecl_structure_set(v4table,VV[195],1,v8);
  }
L14:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for PPRINT-ARRAY                          */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L100pprint_array(cl_object v1stream, cl_object v2array)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 if (!(ECL_SYM_VAL(cl_env_copy,ECL_SYM("*PRINT-ARRAY*",46))==ECL_NIL)) { goto L6; }
 if (ECL_SYM_VAL(cl_env_copy,ECL_SYM("*PRINT-READABLY*",59))==ECL_NIL) { goto L3; }
 goto L4;
L6:;
 goto L4;
L4:;
 if (ECL_STRINGP(v2array)) { goto L3; }
 if (!(ECL_BIT_VECTOR_P(v2array))) { goto L1; }
 goto L2;
L3:;
L2:;
 value0 = si_write_ugly_object(v2array, v1stream);
 return value0;
L1:;
 if (Null(ECL_SYM_VAL(cl_env_copy,ECL_SYM("*PRINT-READABLY*",59)))) { goto L9; }
 value0 = L111pprint_raw_array(v1stream, v2array);
 return value0;
L9:;
 if (!(ECL_VECTORP(v2array))) { goto L11; }
 value0 = L103pprint_vector(v1stream, v2array);
 return value0;
L11:;
 value0 = L108pprint_multi_dim_array(v1stream, v2array);
 return value0;
}
/*      function definition for PPRINT-VECTOR                         */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L103pprint_vector(cl_object v1stream, cl_object v2vector)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 {
  cl_object v3;
  v3 = ecl_make_cfun((cl_objectfn_fixed)LC102__lambda702,ECL_NIL,Cblock,2);
  T0 = v3;
 }
 value0 = si_write_object_with_circle(v2vector, v1stream, T0);
 return value0;
}
/*      local function LAMBDA702                                      */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC102__lambda702(cl_object v1vector, cl_object v2stream)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 env0 = ECL_NIL;
 CLV0 = env0 = CONS(v1vector,env0);               /*  VECTOR          */
 {
  cl_object v3;
  v3 = ecl_make_cclosure_va((cl_objectfn)LC101__pprint_logical_block_704,env0,Cblock,2);
  T0 = v3;
 }
 value0 = L77pprint_logical_block_helper(T0, ECL_NIL, v2stream, VV[213], ECL_NIL, VV[177]);
 return value0;
}
/*      closure PPRINT-LOGICAL-BLOCK-704                              */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC101__pprint_logical_block_704(cl_narg narg, cl_object v1, cl_object v2stream, ...)
{
 cl_object T0;
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 /* Scanning closure data ... */
 CLV0 = env0;                                     /*  VECTOR          */
 { /* ... closure scanning finished */
TTL:
 {
  cl_object v3;
  v3 = ecl_make_fixnum(0);
  {
   cl_fixnum v4;
   v4 = ecl_length(ECL_CONS_CAR(CLV0));
   {
    cl_fixnum v5i;
    v5i = 0;
    goto L5;
L4:;
    if ((v5i)==0) { goto L7; }
    cl_write_char(2, CODE_CHAR(32), v2stream);
    cl_pprint_newline(2, VV[140], v2stream);
L7:;
    if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L11; }
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
L11:;
    v3 = ecl_plus(v3,ecl_make_fixnum(1));
    T0 = ecl_aref_unsafe(ECL_CONS_CAR(CLV0),v5i);
    si_write_object(T0, v2stream);
    v5i = (v5i)+1;
L5:;
    if (!((v5i)<(v4))) { goto L19; }
    goto L4;
L19:;
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
 }
}
/*      function definition for PPRINT-ARRAY-CONTENTS                 */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L106pprint_array_contents(cl_object v1stream, cl_object v2array)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 volatile struct ecl_cclosure aux_closure;
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 env0 = ECL_NIL;
 CLV0 = env0 = CONS(v2array,env0);                /*  ARRAY           */
 T0 = cl_array_dimensions(ECL_CONS_CAR(CLV0));
 value0 = (aux_closure.env=env0,cl_env_copy->function=(cl_object)&aux_closure,LC105output_guts(3, v1stream, ecl_make_fixnum(0), T0));
 return value0;
}
/*      closure OUTPUT-GUTS                                           */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC105output_guts(cl_narg narg, cl_object v1stream, cl_object v2index, cl_object v3dimensions, ...)
{
 cl_object T0;
 cl_object CLV0, CLV1, CLV2;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 /* Scanning closure data ... */
 CLV0 = env0;                                     /*  ARRAY           */
 { /* ... closure scanning finished */
 CLV1 = env0 = CONS(v2index,env0);                /*  INDEX           */
 CLV2 = env0 = CONS(v3dimensions,env0);           /*  DIMENSIONS      */
 if (!(ECL_CONS_CAR(CLV2)==ECL_NIL)) { goto L1; }
 T0 = ecl_aref_unsafe(ECL_CONS_CAR(CLV0),ecl_fixnum(ECL_CONS_CAR(CLV1)));
 value0 = si_write_object(T0, v1stream);
 return value0;
L1:;
 {
  cl_object v4;
  v4 = ecl_make_cclosure_va((cl_objectfn)LC104__pprint_logical_block_718,env0,Cblock,2);
  T0 = v4;
 }
 value0 = L77pprint_logical_block_helper(T0, ECL_NIL, v1stream, VV[176], ECL_NIL, VV[177]);
 return value0;
 }
}
/*      closure PPRINT-LOGICAL-BLOCK-718                              */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC104__pprint_logical_block_718(cl_narg narg, cl_object v1, cl_object v2stream, ...)
{
 cl_object T0;
 volatile struct ecl_cclosure aux_closure;
 cl_object CLV0, CLV1, CLV2;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 /* Scanning closure data ... */
 CLV2 = env0;                                     /*  DIMENSIONS      */
 CLV1 = _ecl_cdr(CLV2);
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
TTL:
 {
  cl_object v3;
  v3 = ecl_make_fixnum(0);
  {
   cl_object v4dim;
   v4dim = _ecl_car(ECL_CONS_CAR(CLV2));
   if (ecl_zerop(v4dim)) { goto L3; }
   {
    cl_object v5dims;
    cl_object v6index;
    cl_object v7step;
    cl_object v8count;
    v5dims = _ecl_cdr(ECL_CONS_CAR(CLV2));
    v6index = ECL_CONS_CAR(CLV1);
    T0 = (ECL_SYM("*",20)->symbol.gfdef);
    v7step = cl_reduce(2, T0, v5dims);
    v8count = ecl_make_fixnum(0);
L10:;
    if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L13; }
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
L13:;
    v3 = ecl_plus(v3,ecl_make_fixnum(1));
    (aux_closure.env=ecl_nthcdr(2,env0),cl_env_copy->function=(cl_object)&aux_closure,LC105output_guts(3, v2stream, v6index, v5dims));
    v8count = ecl_plus(v8count,ecl_make_fixnum(1));
    T0 = v8count;
    if (!(ecl_number_equalp(T0,v4dim))) { goto L18; }
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
L18:;
    cl_write_char(2, CODE_CHAR(32), v2stream);
    if (Null(v5dims)) { goto L25; }
    T0 = VV[137];
    goto L24;
L25:;
    T0 = VV[140];
L24:;
    cl_pprint_newline(2, T0, v2stream);
    v6index = ecl_plus(v6index,v7step);
    goto L10;
   }
L3:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
 }
}
/*      function definition for PPRINT-MULTI-DIM-ARRAY                */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L108pprint_multi_dim_array(cl_object v1stream, cl_object v2array)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 {
  cl_object v3;
  v3 = ecl_make_cfun((cl_objectfn_fixed)LC107__lambda733,ECL_NIL,Cblock,2);
  T0 = v3;
 }
 value0 = si_write_object_with_circle(v2array, v1stream, T0);
 return value0;
}
/*      local function LAMBDA733                                      */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC107__lambda733(cl_object v1array, cl_object v2stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 {
  int8_t v3;
  v3 = (int8_t)((((v1array)->d.t == t_array)?(v1array)->array.rank:1));
  cl_write_string(2, VV[215], v2stream);
  cl_write(9, ecl_make_int8_t(v3), ECL_SYM("STREAM",1340), v2stream, ECL_SYM("BASE",1223), ecl_make_fixnum(10), ECL_SYM("RADIX",1322), ECL_NIL, ECL_SYM("ESCAPE",1252), ECL_NIL);
  cl_write_string(2, VV[216], v2stream);
 }
 value0 = L106pprint_array_contents(v2stream, v1array);
 return value0;
}
/*      function definition for PPRINT-RAW-ARRAY                      */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L111pprint_raw_array(cl_object v1stream, cl_object v2array)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 {
  cl_object v3;
  v3 = ecl_make_cfun((cl_objectfn_fixed)LC110__lambda737,ECL_NIL,Cblock,2);
  T0 = v3;
 }
 value0 = si_write_object_with_circle(v2array, v1stream, T0);
 return value0;
}
/*      local function LAMBDA737                                      */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC110__lambda737(cl_object v1array, cl_object v2stream)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 env0 = ECL_NIL;
 CLV0 = env0 = CONS(v1array,env0);                /*  ARRAY           */
 {
  cl_object v3;
  v3 = ecl_make_cclosure_va((cl_objectfn)LC109__pprint_logical_block_739,env0,Cblock,2);
  T0 = v3;
 }
 value0 = L77pprint_logical_block_helper(T0, ECL_NIL, v2stream, VV[217], ECL_NIL, VV[177]);
 return value0;
}
/*      closure PPRINT-LOGICAL-BLOCK-739                              */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC109__pprint_logical_block_739(cl_narg narg, cl_object v1, cl_object v2stream, ...)
{
 cl_object T0;
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 /* Scanning closure data ... */
 CLV0 = env0;                                     /*  ARRAY           */
 { /* ... closure scanning finished */
TTL:
 T0 = cl_array_element_type(ECL_CONS_CAR(CLV0));
 si_write_object(T0, v2stream);
 cl_write_char(2, CODE_CHAR(32), v2stream);
 cl_pprint_newline(2, VV[140], v2stream);
 T0 = cl_array_dimensions(ECL_CONS_CAR(CLV0));
 si_write_object(T0, v2stream);
 cl_write_char(2, CODE_CHAR(32), v2stream);
 cl_pprint_newline(2, VV[140], v2stream);
 value0 = L106pprint_array_contents(v2stream, ECL_CONS_CAR(CLV0));
 return value0;
 }
}
/*      function definition for PPRINT-LAMBDA-LIST                    */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L115pprint_lambda_list(cl_narg narg, cl_object v1stream, cl_object v2lambda_list, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 {
  cl_object v3;
  v3 = ecl_make_cfun((cl_objectfn_fixed)LC114__pprint_logical_block_748,ECL_NIL,Cblock,2);
  T0 = v3;
 }
 value0 = L77pprint_logical_block_helper(T0, v2lambda_list, v1stream, VV[176], ECL_NIL, VV[177]);
 return value0;
}
/*      local function PPRINT-LOGICAL-BLOCK-748                       */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC114__pprint_logical_block_748(cl_object v1, cl_object v2stream)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 {
  cl_object v3;
  v3 = ecl_make_fixnum(0);
  {
   cl_object v4first;
   cl_object env1 = env0;
   env1 = ECL_NIL;
   CLV0 = env1 = CONS(ECL_SYM("REQUIRED",1010),env1); /*  STATE       */
   v4first = ECL_T;
L3:;
   if (!(v1==ECL_NIL)) { goto L5; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L5:;
   if ((v4first)!=ECL_NIL) { goto L7; }
   cl_write_char(2, CODE_CHAR(32), v2stream);
L7:;
   {
    cl_object v5arg;
    if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L11; }
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
L11:;
    v3 = ecl_plus(v3,ecl_make_fixnum(1));
    {
     cl_object v6;
     v6 = v1;
     if (Null(v6)) { goto L17; }
     {
      cl_object v7;
      v7 = ECL_CONS_CDR(v6);
      v1 = v7;
      v6 = ECL_CONS_CAR(v6);
     }
L17:;
     v5arg = v6;
    }
    if ((v4first)!=ECL_NIL) { goto L23; }
    if (!((v5arg)==(ECL_SYM("&OPTIONAL",13)))) { goto L25; }
    ECL_CONS_CAR(CLV0) = VV[218];
    cl_pprint_newline(2, VV[137], v2stream);
    goto L23;
L25:;
    if (!((v5arg)==(ECL_SYM("&REST",14)))) { goto L34; }
    goto L31;
    goto L32;
L34:;
    goto L32;
L32:;
    if (!((v5arg)==(ECL_SYM("&BODY",10)))) { goto L29; }
    goto L30;
L31:;
L30:;
    ECL_CONS_CAR(CLV0) = ECL_SYM("REQUIRED",1010);
    cl_pprint_newline(2, VV[137], v2stream);
    goto L23;
L29:;
    if (!((v5arg)==(ECL_SYM("&KEY",12)))) { goto L39; }
    ECL_CONS_CAR(CLV0) = ECL_SYM("KEY",1288);
    cl_pprint_newline(2, VV[137], v2stream);
    goto L23;
L39:;
    if (!((v5arg)==(ECL_SYM("&AUX",9)))) { goto L43; }
    ECL_CONS_CAR(CLV0) = VV[218];
    cl_pprint_newline(2, VV[137], v2stream);
    goto L23;
L43:;
    cl_pprint_newline(2, VV[140], v2stream);
L23:;
    if (!(ecl_eql(ECL_CONS_CAR(CLV0),ECL_SYM("REQUIRED",1010)))) { goto L47; }
    L115pprint_lambda_list(2, v2stream, v5arg);
    goto L9;
L47:;
    if (!(ecl_eql(ECL_CONS_CAR(CLV0),VV[218]))) { goto L54; }
    goto L51;
    goto L52;
L54:;
    goto L52;
L52:;
    if (!(ecl_eql(ECL_CONS_CAR(CLV0),ECL_SYM("KEY",1288)))) { goto L49; }
    goto L50;
L51:;
L50:;
    {
     cl_object v6;
     v6 = ecl_make_cclosure_va((cl_objectfn)LC113__pprint_logical_block_773,env1,Cblock,2);
     T0 = v6;
    }
    L77pprint_logical_block_helper(T0, v5arg, v2stream, VV[176], ECL_NIL, VV[177]);
    goto L9;
L49:;
    si_ecase_error(ECL_CONS_CAR(CLV0), VV[223]);
   }
L9:;
   v4first = ECL_NIL;
   goto L3;
  }
 }
}
/*      closure PPRINT-LOGICAL-BLOCK-773                              */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC113__pprint_logical_block_773(cl_narg narg, cl_object v1, cl_object v2stream, ...)
{
 cl_object T0, T1;
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 /* Scanning closure data ... */
 CLV0 = env0;                                     /*  STATE           */
 { /* ... closure scanning finished */
TTL:
 {
  cl_object v3;
  v3 = ecl_make_fixnum(0);
  if (!(v1==ECL_NIL)) { goto L2; }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L2:;
  if (!((ECL_CONS_CAR(CLV0))==(ECL_SYM("KEY",1288)))) { goto L5; }
  {
   cl_object v4;
   v4 = ecl_make_cfun((cl_objectfn_fixed)LC112__pprint_logical_block_782,ECL_NIL,Cblock,2);
   T0 = v4;
  }
  if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L8; }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L8:;
  v3 = ecl_plus(v3,ecl_make_fixnum(1));
  {
   cl_object v4;
   v4 = v1;
   if (Null(v4)) { goto L15; }
   {
    cl_object v5;
    v5 = ECL_CONS_CDR(v4);
    v1 = v5;
    v4 = ECL_CONS_CAR(v4);
   }
L15:;
   T1 = v4;
  }
  L77pprint_logical_block_helper(T0, T1, v2stream, VV[176], ECL_NIL, VV[177]);
  goto L4;
L5:;
  if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L21; }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L21:;
  v3 = ecl_plus(v3,ecl_make_fixnum(1));
  {
   cl_object v4;
   v4 = v1;
   if (Null(v4)) { goto L28; }
   {
    cl_object v5;
    v5 = ECL_CONS_CDR(v4);
    v1 = v5;
    v4 = ECL_CONS_CAR(v4);
   }
L28:;
   T0 = v4;
  }
  L115pprint_lambda_list(2, v2stream, T0);
L4:;
L34:;
  if (!(v1==ECL_NIL)) { goto L36; }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L36:;
  cl_write_char(2, CODE_CHAR(32), v2stream);
  cl_pprint_newline(2, VV[137], v2stream);
  if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L40; }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L40:;
  v3 = ecl_plus(v3,ecl_make_fixnum(1));
  {
   cl_object v4;
   v4 = v1;
   if (Null(v4)) { goto L47; }
   {
    cl_object v5;
    v5 = ECL_CONS_CDR(v4);
    v1 = v5;
    v4 = ECL_CONS_CAR(v4);
   }
L47:;
   T0 = v4;
  }
  si_write_object(T0, v2stream);
  goto L34;
 }
 }
}
/*      local function PPRINT-LOGICAL-BLOCK-782                       */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC112__pprint_logical_block_782(cl_object v1, cl_object v2stream)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 {
  cl_object v3;
  v3 = ecl_make_fixnum(0);
  if (!(v1==ECL_NIL)) { goto L2; }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L2:;
  if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L5; }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L5:;
  v3 = ecl_plus(v3,ecl_make_fixnum(1));
  {
   cl_object v4;
   v4 = v1;
   if (Null(v4)) { goto L12; }
   {
    cl_object v5;
    v5 = ECL_CONS_CDR(v4);
    v1 = v5;
    v4 = ECL_CONS_CAR(v4);
   }
L12:;
   T0 = v4;
  }
  si_write_object(T0, v2stream);
  if (!(v1==ECL_NIL)) { goto L18; }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L18:;
  cl_write_char(2, CODE_CHAR(32), v2stream);
  cl_pprint_newline(2, VV[140], v2stream);
  if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L23; }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L23:;
  v3 = ecl_plus(v3,ecl_make_fixnum(1));
  {
   cl_object v4;
   v4 = v1;
   if (Null(v4)) { goto L30; }
   {
    cl_object v5;
    v5 = ECL_CONS_CDR(v4);
    v1 = v5;
    v4 = ECL_CONS_CAR(v4);
   }
L30:;
   T0 = v4;
  }
  L115pprint_lambda_list(2, v2stream, T0);
L36:;
  if (!(v1==ECL_NIL)) { goto L38; }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L38:;
  cl_write_char(2, CODE_CHAR(32), v2stream);
  cl_pprint_newline(2, VV[140], v2stream);
  if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L42; }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L42:;
  v3 = ecl_plus(v3,ecl_make_fixnum(1));
  {
   cl_object v4;
   v4 = v1;
   if (Null(v4)) { goto L49; }
   {
    cl_object v5;
    v5 = ECL_CONS_CDR(v4);
    v1 = v5;
    v4 = ECL_CONS_CAR(v4);
   }
L49:;
   T0 = v4;
  }
  si_write_object(T0, v2stream);
  goto L36;
 }
}
/*      function definition for PPRINT-LAMBDA                         */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L117pprint_lambda(cl_narg narg, cl_object v1stream, cl_object v2list, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 {
  cl_object env1 = env0;
  env1 = ECL_NIL;
  CLV0 = env1 = CONS(v2list,env1);                /*  ARG             */
  {
   cl_object v3;
   v3 = ecl_make_cclosure_va((cl_objectfn)LC116__pprint_logical_block_821,env1,Cblock,2);
   T0 = v3;
  }
  L77pprint_logical_block_helper(T0, ECL_CONS_CAR(CLV0), v1stream, VV[176], ECL_NIL, VV[177]);
 }
 value0 = ECL_NIL;
 cl_env_copy->nvalues = 1;
 return value0;
}
/*      closure PPRINT-LOGICAL-BLOCK-821                              */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC116__pprint_logical_block_821(cl_narg narg, cl_object v1, cl_object v2stream, ...)
{
 cl_object T0;
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 /* Scanning closure data ... */
 CLV0 = env0;                                     /*  ARG             */
 { /* ... closure scanning finished */
TTL:
 {
  cl_object v3;
  v3 = ecl_make_fixnum(0);
  {
   cl_object v4args;
   v4args = ECL_CONS_CAR(CLV0);
   goto L5;
   if (Null(cl_LE(3, ECL_NIL, ECL_NIL, ECL_NIL))) { goto L3; }
   goto L4;
L5:;
   goto L7;
   if (!((ECL_NIL)==(ECL_NIL))) { goto L3; }
   goto L4;
L7:;
   goto L9;
   if (!((ECL_NIL)==(ecl_make_fixnum(0)))) { goto L3; }
   goto L4;
L9:;
   if (!(v4args==ECL_NIL)) { goto L3; }
L4:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L3:;
   if (!(v4args==ECL_NIL)) { goto L12; }
   cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[225], VV[226], ECL_SYM("CONTROL-STRING",1233), VV[227], ECL_SYM("OFFSET",1306), ecl_make_fixnum(6));
L12:;
   if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L15; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L15:;
   v3 = ecl_plus(v3,ecl_make_fixnum(1));
   {
    cl_object v5;
    v5 = v1;
    if (Null(v5)) { goto L21; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v1 = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L21:;
   }
   {
    cl_object v5;
    v5 = v4args;
    if (Null(v5)) { goto L30; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v4args = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L30:;
    T0 = v5;
   }
   si_write_object(T0, v2stream);
   goto L38;
   if (Null(cl_LE(3, ECL_NIL, ECL_NIL, ECL_NIL))) { goto L36; }
   goto L37;
L38:;
   goto L40;
   if (!((ECL_NIL)==(ECL_NIL))) { goto L36; }
   goto L37;
L40:;
   goto L42;
   if (!((ECL_NIL)==(ecl_make_fixnum(0)))) { goto L36; }
   goto L37;
L42:;
   if (!(v4args==ECL_NIL)) { goto L36; }
L37:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L36:;
   cl_pprint_indent(3, ECL_SYM("BLOCK",1224), ecl_make_fixnum(3), v2stream);
   cl_write_string(2, VV[228], v2stream);
   cl_pprint_newline(2, VV[140], v2stream);
   if (!(v4args==ECL_NIL)) { goto L48; }
   cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[225], VV[226], ECL_SYM("CONTROL-STRING",1233), VV[227], ECL_SYM("OFFSET",1306), ecl_make_fixnum(39));
L48:;
   if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L51; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L51:;
   v3 = ecl_plus(v3,ecl_make_fixnum(1));
   {
    cl_object v5;
    v5 = v1;
    if (Null(v5)) { goto L57; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v1 = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L57:;
   }
   {
    cl_object v5;
    v5 = v4args;
    if (Null(v5)) { goto L66; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v4args = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L66:;
    T0 = v5;
   }
   L115pprint_lambda_list(4, v2stream, T0, ECL_NIL, ECL_NIL);
   cl_pprint_indent(3, ECL_SYM("BLOCK",1224), ecl_make_fixnum(1), v2stream);
L73:;
   if (!(v4args==ECL_NIL)) { goto L75; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L75:;
   cl_write_string(2, VV[228], v2stream);
   cl_pprint_newline(2, VV[137], v2stream);
   if (!(v4args==ECL_NIL)) { goto L79; }
   cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[225], VV[226], ECL_SYM("CONTROL-STRING",1233), VV[227], ECL_SYM("OFFSET",1306), ecl_make_fixnum(50));
L79:;
   if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L82; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L82:;
   v3 = ecl_plus(v3,ecl_make_fixnum(1));
   {
    cl_object v5;
    v5 = v1;
    if (Null(v5)) { goto L88; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v1 = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L88:;
   }
   {
    cl_object v5;
    v5 = v4args;
    if (Null(v5)) { goto L97; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v4args = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L97:;
    T0 = v5;
   }
   si_write_object(T0, v2stream);
   goto L73;
  }
 }
 }
}
/*      function definition for PPRINT-BLOCK                          */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L119pprint_block(cl_narg narg, cl_object v1stream, cl_object v2list, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 {
  cl_object env1 = env0;
  env1 = ECL_NIL;
  CLV0 = env1 = CONS(v2list,env1);                /*  ARG             */
  {
   cl_object v3;
   v3 = ecl_make_cclosure_va((cl_objectfn)LC118__pprint_logical_block_860,env1,Cblock,2);
   T0 = v3;
  }
  L77pprint_logical_block_helper(T0, ECL_CONS_CAR(CLV0), v1stream, VV[176], ECL_NIL, VV[177]);
 }
 value0 = ECL_NIL;
 cl_env_copy->nvalues = 1;
 return value0;
}
/*      closure PPRINT-LOGICAL-BLOCK-860                              */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC118__pprint_logical_block_860(cl_narg narg, cl_object v1, cl_object v2stream, ...)
{
 cl_object T0;
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 /* Scanning closure data ... */
 CLV0 = env0;                                     /*  ARG             */
 { /* ... closure scanning finished */
TTL:
 {
  cl_object v3;
  v3 = ecl_make_fixnum(0);
  {
   cl_object v4args;
   v4args = ECL_CONS_CAR(CLV0);
   goto L5;
   if (Null(cl_LE(3, ECL_NIL, ECL_NIL, ECL_NIL))) { goto L3; }
   goto L4;
L5:;
   goto L7;
   if (!((ECL_NIL)==(ECL_NIL))) { goto L3; }
   goto L4;
L7:;
   goto L9;
   if (!((ECL_NIL)==(ecl_make_fixnum(0)))) { goto L3; }
   goto L4;
L9:;
   if (!(v4args==ECL_NIL)) { goto L3; }
L4:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L3:;
   if (!(v4args==ECL_NIL)) { goto L12; }
   cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[225], VV[226], ECL_SYM("CONTROL-STRING",1233), VV[230], ECL_SYM("OFFSET",1306), ecl_make_fixnum(6));
L12:;
   if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L15; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L15:;
   v3 = ecl_plus(v3,ecl_make_fixnum(1));
   {
    cl_object v5;
    v5 = v1;
    if (Null(v5)) { goto L21; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v1 = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L21:;
   }
   {
    cl_object v5;
    v5 = v4args;
    if (Null(v5)) { goto L30; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v4args = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L30:;
    T0 = v5;
   }
   si_write_object(T0, v2stream);
   goto L38;
   if (Null(cl_LE(3, ECL_NIL, ECL_NIL, ECL_NIL))) { goto L36; }
   goto L37;
L38:;
   goto L40;
   if (!((ECL_NIL)==(ECL_NIL))) { goto L36; }
   goto L37;
L40:;
   goto L42;
   if (!((ECL_NIL)==(ecl_make_fixnum(0)))) { goto L36; }
   goto L37;
L42:;
   if (!(v4args==ECL_NIL)) { goto L36; }
L37:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L36:;
   cl_pprint_indent(3, ECL_SYM("BLOCK",1224), ecl_make_fixnum(3), v2stream);
   cl_write_string(2, VV[228], v2stream);
   cl_pprint_newline(2, VV[140], v2stream);
   if (!(v4args==ECL_NIL)) { goto L48; }
   cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[225], VV[226], ECL_SYM("CONTROL-STRING",1233), VV[230], ECL_SYM("OFFSET",1306), ecl_make_fixnum(17));
L48:;
   if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L51; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L51:;
   v3 = ecl_plus(v3,ecl_make_fixnum(1));
   {
    cl_object v5;
    v5 = v1;
    if (Null(v5)) { goto L57; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v1 = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L57:;
   }
   {
    cl_object v5;
    v5 = v4args;
    if (Null(v5)) { goto L66; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v4args = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L66:;
    T0 = v5;
   }
   si_write_object(T0, v2stream);
   cl_pprint_indent(3, ECL_SYM("BLOCK",1224), ecl_make_fixnum(1), v2stream);
L73:;
   if (!(v4args==ECL_NIL)) { goto L75; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L75:;
   cl_write_string(2, VV[228], v2stream);
   cl_pprint_newline(2, VV[137], v2stream);
   if (!(v4args==ECL_NIL)) { goto L79; }
   cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[225], VV[226], ECL_SYM("CONTROL-STRING",1233), VV[230], ECL_SYM("OFFSET",1306), ecl_make_fixnum(28));
L79:;
   if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L82; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L82:;
   v3 = ecl_plus(v3,ecl_make_fixnum(1));
   {
    cl_object v5;
    v5 = v1;
    if (Null(v5)) { goto L88; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v1 = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L88:;
   }
   {
    cl_object v5;
    v5 = v4args;
    if (Null(v5)) { goto L97; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v4args = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L97:;
    T0 = v5;
   }
   si_write_object(T0, v2stream);
   goto L73;
  }
 }
 }
}
/*      function definition for PPRINT-FLET                           */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L123pprint_flet(cl_narg narg, cl_object v1stream, cl_object v2list, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 {
  cl_object env1 = env0;
  env1 = ECL_NIL;
  CLV0 = env1 = CONS(v2list,env1);                /*  ARG             */
  {
   cl_object v3;
   v3 = ecl_make_cclosure_va((cl_objectfn)LC122__pprint_logical_block_899,env1,Cblock,2);
   T0 = v3;
  }
  L77pprint_logical_block_helper(T0, ECL_CONS_CAR(CLV0), v1stream, VV[176], ECL_NIL, VV[177]);
 }
 value0 = ECL_NIL;
 cl_env_copy->nvalues = 1;
 return value0;
}
/*      closure PPRINT-LOGICAL-BLOCK-899                              */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC122__pprint_logical_block_899(cl_narg narg, cl_object v1, cl_object v2stream, ...)
{
 cl_object T0;
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 /* Scanning closure data ... */
 CLV0 = env0;                                     /*  ARG             */
 { /* ... closure scanning finished */
TTL:
 {
  cl_object v3;
  v3 = ecl_make_fixnum(0);
  {
   cl_object v4args;
   v4args = ECL_CONS_CAR(CLV0);
   goto L5;
   if (Null(cl_LE(3, ECL_NIL, ECL_NIL, ECL_NIL))) { goto L3; }
   goto L4;
L5:;
   goto L7;
   if (!((ECL_NIL)==(ECL_NIL))) { goto L3; }
   goto L4;
L7:;
   goto L9;
   if (!((ECL_NIL)==(ecl_make_fixnum(0)))) { goto L3; }
   goto L4;
L9:;
   if (!(v4args==ECL_NIL)) { goto L3; }
L4:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L3:;
   if (!(v4args==ECL_NIL)) { goto L12; }
   cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[225], VV[226], ECL_SYM("CONTROL-STRING",1233), VV[232], ECL_SYM("OFFSET",1306), ecl_make_fixnum(6));
L12:;
   if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L15; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L15:;
   v3 = ecl_plus(v3,ecl_make_fixnum(1));
   {
    cl_object v5;
    v5 = v1;
    if (Null(v5)) { goto L21; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v1 = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L21:;
   }
   {
    cl_object v5;
    v5 = v4args;
    if (Null(v5)) { goto L30; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v4args = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L30:;
    T0 = v5;
   }
   si_write_object(T0, v2stream);
   goto L38;
   if (Null(cl_LE(3, ECL_NIL, ECL_NIL, ECL_NIL))) { goto L36; }
   goto L37;
L38:;
   goto L40;
   if (!((ECL_NIL)==(ECL_NIL))) { goto L36; }
   goto L37;
L40:;
   goto L42;
   if (!((ECL_NIL)==(ecl_make_fixnum(0)))) { goto L36; }
   goto L37;
L42:;
   if (!(v4args==ECL_NIL)) { goto L36; }
L37:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L36:;
   cl_write_string(2, VV[228], v2stream);
   cl_pprint_newline(2, VV[139], v2stream);
   {
    cl_object env1 = env0;
    if (!(v4args==ECL_NIL)) { goto L47; }
    cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[225], VV[226], ECL_SYM("CONTROL-STRING",1233), VV[232], ECL_SYM("OFFSET",1306), ecl_make_fixnum(15));
L47:;
    if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L50; }
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
L50:;
    v3 = ecl_plus(v3,ecl_make_fixnum(1));
    {
     cl_object v5;
     v5 = v1;
     if (Null(v5)) { goto L56; }
     {
      cl_object v6;
      v6 = ECL_CONS_CDR(v5);
      v1 = v6;
      v5 = ECL_CONS_CAR(v5);
     }
L56:;
    }
    {
     cl_object v5;
     v5 = v4args;
     if (Null(v5)) { goto L65; }
     {
      cl_object v6;
      v6 = ECL_CONS_CDR(v5);
      v4args = v6;
      v5 = ECL_CONS_CAR(v5);
     }
L65:;
     T0 = v5;
    }
    CLV1 = env1 = CONS(T0,env1);                  /*  ARG             */
    {
     cl_object v5;
     v5 = ecl_make_cclosure_va((cl_objectfn)LC121__pprint_logical_block_928,env1,Cblock,2);
     T0 = v5;
    }
    L77pprint_logical_block_helper(T0, ECL_CONS_CAR(CLV1), v2stream, VV[176], ECL_NIL, VV[177]);
   }
   cl_pprint_indent(3, ECL_SYM("BLOCK",1224), ecl_make_fixnum(1), v2stream);
   cl_pprint_newline(2, VV[72], v2stream);
L74:;
   if (!(v4args==ECL_NIL)) { goto L76; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L76:;
   if (!(v4args==ECL_NIL)) { goto L79; }
   cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[225], VV[226], ECL_SYM("CONTROL-STRING",1233), VV[232], ECL_SYM("OFFSET",1306), ecl_make_fixnum(102));
L79:;
   if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L82; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L82:;
   v3 = ecl_plus(v3,ecl_make_fixnum(1));
   {
    cl_object v5;
    v5 = v1;
    if (Null(v5)) { goto L88; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v1 = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L88:;
   }
   {
    cl_object v5;
    v5 = v4args;
    if (Null(v5)) { goto L97; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v4args = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L97:;
    T0 = v5;
   }
   si_write_object(T0, v2stream);
   goto L105;
   if (Null(cl_LE(3, ECL_NIL, ECL_NIL, ECL_NIL))) { goto L103; }
   goto L104;
L105:;
   goto L107;
   if (!((ECL_NIL)==(ECL_NIL))) { goto L103; }
   goto L104;
L107:;
   goto L109;
   if (!((ECL_NIL)==(ecl_make_fixnum(0)))) { goto L103; }
   goto L104;
L109:;
   if (!(v4args==ECL_NIL)) { goto L103; }
L104:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L103:;
   cl_write_string(2, VV[228], v2stream);
   cl_pprint_newline(2, VV[137], v2stream);
   goto L74;
  }
 }
 }
}
/*      closure PPRINT-LOGICAL-BLOCK-928                              */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC121__pprint_logical_block_928(cl_narg narg, cl_object v1, cl_object v2stream, ...)
{
 cl_object T0;
 cl_object CLV0, CLV1, CLV2;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 /* Scanning closure data ... */
 CLV1 = env0;                                     /*  ARG             */
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
TTL:
 {
  cl_object v3;
  v3 = ecl_make_fixnum(0);
  {
   cl_object v4args;
   v4args = ECL_CONS_CAR(CLV1);
L3:;
   if (!(v4args==ECL_NIL)) { goto L5; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L5:;
   {
    cl_object env1 = env0;
    if (!(v4args==ECL_NIL)) { goto L8; }
    cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[225], VV[226], ECL_SYM("CONTROL-STRING",1233), VV[232], ECL_SYM("OFFSET",1306), ecl_make_fixnum(21));
L8:;
    if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L11; }
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
L11:;
    v3 = ecl_plus(v3,ecl_make_fixnum(1));
    {
     cl_object v5;
     v5 = v1;
     if (Null(v5)) { goto L17; }
     {
      cl_object v6;
      v6 = ECL_CONS_CDR(v5);
      v1 = v6;
      v5 = ECL_CONS_CAR(v5);
     }
L17:;
    }
    {
     cl_object v5;
     v5 = v4args;
     if (Null(v5)) { goto L26; }
     {
      cl_object v6;
      v6 = ECL_CONS_CDR(v5);
      v4args = v6;
      v5 = ECL_CONS_CAR(v5);
     }
L26:;
     T0 = v5;
    }
    CLV2 = env1 = CONS(T0,env1);                  /*  ARG             */
    {
     cl_object v5;
     v5 = ecl_make_cclosure_va((cl_objectfn)LC120__pprint_logical_block_946,env1,Cblock,2);
     T0 = v5;
    }
    L77pprint_logical_block_helper(T0, ECL_CONS_CAR(CLV2), v2stream, VV[176], ECL_NIL, VV[177]);
   }
   goto L35;
   if (Null(cl_LE(3, ECL_NIL, ECL_NIL, ECL_NIL))) { goto L33; }
   goto L34;
L35:;
   goto L37;
   if (!((ECL_NIL)==(ECL_NIL))) { goto L33; }
   goto L34;
L37:;
   goto L39;
   if (!((ECL_NIL)==(ecl_make_fixnum(0)))) { goto L33; }
   goto L34;
L39:;
   if (!(v4args==ECL_NIL)) { goto L33; }
L34:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L33:;
   cl_write_string(2, VV[228], v2stream);
   cl_pprint_newline(2, VV[137], v2stream);
   goto L3;
  }
 }
 }
}
/*      closure PPRINT-LOGICAL-BLOCK-946                              */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC120__pprint_logical_block_946(cl_narg narg, cl_object v1, cl_object v2stream, ...)
{
 cl_object T0;
 cl_object CLV0, CLV1, CLV2;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 /* Scanning closure data ... */
 CLV2 = env0;                                     /*  ARG             */
 CLV1 = _ecl_cdr(CLV2);
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
TTL:
 {
  cl_object v3;
  v3 = ecl_make_fixnum(0);
  {
   cl_object v4args;
   v4args = ECL_CONS_CAR(CLV2);
   goto L5;
   if (Null(cl_LE(3, ECL_NIL, ECL_NIL, ECL_NIL))) { goto L3; }
   goto L4;
L5:;
   goto L7;
   if (!((ECL_NIL)==(ECL_NIL))) { goto L3; }
   goto L4;
L7:;
   goto L9;
   if (!((ECL_NIL)==(ecl_make_fixnum(0)))) { goto L3; }
   goto L4;
L9:;
   if (!(v4args==ECL_NIL)) { goto L3; }
L4:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L3:;
   if (!(v4args==ECL_NIL)) { goto L12; }
   cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[225], VV[226], ECL_SYM("CONTROL-STRING",1233), VV[232], ECL_SYM("OFFSET",1306), ecl_make_fixnum(25));
L12:;
   if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L15; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L15:;
   v3 = ecl_plus(v3,ecl_make_fixnum(1));
   {
    cl_object v5;
    v5 = v1;
    if (Null(v5)) { goto L21; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v1 = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L21:;
   }
   {
    cl_object v5;
    v5 = v4args;
    if (Null(v5)) { goto L30; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v4args = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L30:;
    T0 = v5;
   }
   si_write_object(T0, v2stream);
   goto L38;
   if (Null(cl_LE(3, ECL_NIL, ECL_NIL, ECL_NIL))) { goto L36; }
   goto L37;
L38:;
   goto L40;
   if (!((ECL_NIL)==(ECL_NIL))) { goto L36; }
   goto L37;
L40:;
   goto L42;
   if (!((ECL_NIL)==(ecl_make_fixnum(0)))) { goto L36; }
   goto L37;
L42:;
   if (!(v4args==ECL_NIL)) { goto L36; }
L37:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L36:;
   cl_pprint_indent(3, ECL_SYM("BLOCK",1224), ecl_make_fixnum(3), v2stream);
   cl_write_string(2, VV[228], v2stream);
   cl_pprint_newline(2, VV[140], v2stream);
   if (!(v4args==ECL_NIL)) { goto L48; }
   cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[225], VV[226], ECL_SYM("CONTROL-STRING",1233), VV[232], ECL_SYM("OFFSET",1306), ecl_make_fixnum(58));
L48:;
   if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L51; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L51:;
   v3 = ecl_plus(v3,ecl_make_fixnum(1));
   {
    cl_object v5;
    v5 = v1;
    if (Null(v5)) { goto L57; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v1 = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L57:;
   }
   {
    cl_object v5;
    v5 = v4args;
    if (Null(v5)) { goto L66; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v4args = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L66:;
    T0 = v5;
   }
   L115pprint_lambda_list(4, v2stream, T0, ECL_NIL, ECL_NIL);
   cl_pprint_indent(3, ECL_SYM("BLOCK",1224), ecl_make_fixnum(1), v2stream);
   cl_pprint_newline(2, VV[72], v2stream);
L74:;
   if (!(v4args==ECL_NIL)) { goto L76; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L76:;
   if (!(v4args==ECL_NIL)) { goto L79; }
   cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[225], VV[226], ECL_SYM("CONTROL-STRING",1233), VV[232], ECL_SYM("OFFSET",1306), ecl_make_fixnum(70));
L79:;
   if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L82; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L82:;
   v3 = ecl_plus(v3,ecl_make_fixnum(1));
   {
    cl_object v5;
    v5 = v1;
    if (Null(v5)) { goto L88; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v1 = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L88:;
   }
   {
    cl_object v5;
    v5 = v4args;
    if (Null(v5)) { goto L97; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v4args = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L97:;
    T0 = v5;
   }
   si_write_object(T0, v2stream);
   goto L105;
   if (Null(cl_LE(3, ECL_NIL, ECL_NIL, ECL_NIL))) { goto L103; }
   goto L104;
L105:;
   goto L107;
   if (!((ECL_NIL)==(ECL_NIL))) { goto L103; }
   goto L104;
L107:;
   goto L109;
   if (!((ECL_NIL)==(ecl_make_fixnum(0)))) { goto L103; }
   goto L104;
L109:;
   if (!(v4args==ECL_NIL)) { goto L103; }
L104:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L103:;
   cl_write_string(2, VV[228], v2stream);
   cl_pprint_newline(2, VV[137], v2stream);
   goto L74;
  }
 }
 }
}
/*      function definition for PPRINT-LET                            */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L127pprint_let(cl_narg narg, cl_object v1stream, cl_object v2list, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 {
  cl_object env1 = env0;
  env1 = ECL_NIL;
  CLV0 = env1 = CONS(v2list,env1);                /*  ARG             */
  {
   cl_object v3;
   v3 = ecl_make_cclosure_va((cl_objectfn)LC126__pprint_logical_block_1001,env1,Cblock,2);
   T0 = v3;
  }
  L77pprint_logical_block_helper(T0, ECL_CONS_CAR(CLV0), v1stream, VV[176], ECL_NIL, VV[177]);
 }
 value0 = ECL_NIL;
 cl_env_copy->nvalues = 1;
 return value0;
}
/*      closure PPRINT-LOGICAL-BLOCK-1001                             */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC126__pprint_logical_block_1001(cl_narg narg, cl_object v1, cl_object v2stream, ...)
{
 cl_object T0;
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 /* Scanning closure data ... */
 CLV0 = env0;                                     /*  ARG             */
 { /* ... closure scanning finished */
TTL:
 {
  cl_object v3;
  v3 = ecl_make_fixnum(0);
  {
   cl_object v4args;
   v4args = ECL_CONS_CAR(CLV0);
   goto L5;
   if (Null(cl_LE(3, ECL_NIL, ECL_NIL, ECL_NIL))) { goto L3; }
   goto L4;
L5:;
   goto L7;
   if (!((ECL_NIL)==(ECL_NIL))) { goto L3; }
   goto L4;
L7:;
   goto L9;
   if (!((ECL_NIL)==(ecl_make_fixnum(0)))) { goto L3; }
   goto L4;
L9:;
   if (!(v4args==ECL_NIL)) { goto L3; }
L4:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L3:;
   if (!(v4args==ECL_NIL)) { goto L12; }
   cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[225], VV[226], ECL_SYM("CONTROL-STRING",1233), VV[234], ECL_SYM("OFFSET",1306), ecl_make_fixnum(6));
L12:;
   if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L15; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L15:;
   v3 = ecl_plus(v3,ecl_make_fixnum(1));
   {
    cl_object v5;
    v5 = v1;
    if (Null(v5)) { goto L21; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v1 = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L21:;
   }
   {
    cl_object v5;
    v5 = v4args;
    if (Null(v5)) { goto L30; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v4args = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L30:;
    T0 = v5;
   }
   si_write_object(T0, v2stream);
   goto L38;
   if (Null(cl_LE(3, ECL_NIL, ECL_NIL, ECL_NIL))) { goto L36; }
   goto L37;
L38:;
   goto L40;
   if (!((ECL_NIL)==(ECL_NIL))) { goto L36; }
   goto L37;
L40:;
   goto L42;
   if (!((ECL_NIL)==(ecl_make_fixnum(0)))) { goto L36; }
   goto L37;
L42:;
   if (!(v4args==ECL_NIL)) { goto L36; }
L37:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L36:;
   cl_write_string(2, VV[228], v2stream);
   cl_pprint_newline(2, VV[139], v2stream);
   {
    cl_object env1 = env0;
    if (!(v4args==ECL_NIL)) { goto L47; }
    cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[225], VV[226], ECL_SYM("CONTROL-STRING",1233), VV[234], ECL_SYM("OFFSET",1306), ecl_make_fixnum(15));
L47:;
    if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L50; }
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
L50:;
    v3 = ecl_plus(v3,ecl_make_fixnum(1));
    {
     cl_object v5;
     v5 = v1;
     if (Null(v5)) { goto L56; }
     {
      cl_object v6;
      v6 = ECL_CONS_CDR(v5);
      v1 = v6;
      v5 = ECL_CONS_CAR(v5);
     }
L56:;
    }
    {
     cl_object v5;
     v5 = v4args;
     if (Null(v5)) { goto L65; }
     {
      cl_object v6;
      v6 = ECL_CONS_CDR(v5);
      v4args = v6;
      v5 = ECL_CONS_CAR(v5);
     }
L65:;
     T0 = v5;
    }
    CLV1 = env1 = CONS(T0,env1);                  /*  ARG             */
    {
     cl_object v5;
     v5 = ecl_make_cclosure_va((cl_objectfn)LC125__pprint_logical_block_1030,env1,Cblock,2);
     T0 = v5;
    }
    L77pprint_logical_block_helper(T0, ECL_CONS_CAR(CLV1), v2stream, VV[176], ECL_NIL, VV[177]);
   }
   cl_pprint_indent(3, ECL_SYM("BLOCK",1224), ecl_make_fixnum(1), v2stream);
   cl_pprint_newline(2, VV[72], v2stream);
L74:;
   if (!(v4args==ECL_NIL)) { goto L76; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L76:;
   if (!(v4args==ECL_NIL)) { goto L79; }
   cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[225], VV[226], ECL_SYM("CONTROL-STRING",1233), VV[234], ECL_SYM("OFFSET",1306), ecl_make_fixnum(60));
L79:;
   if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L82; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L82:;
   v3 = ecl_plus(v3,ecl_make_fixnum(1));
   {
    cl_object v5;
    v5 = v1;
    if (Null(v5)) { goto L88; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v1 = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L88:;
   }
   {
    cl_object v5;
    v5 = v4args;
    if (Null(v5)) { goto L97; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v4args = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L97:;
    T0 = v5;
   }
   si_write_object(T0, v2stream);
   goto L105;
   if (Null(cl_LE(3, ECL_NIL, ECL_NIL, ECL_NIL))) { goto L103; }
   goto L104;
L105:;
   goto L107;
   if (!((ECL_NIL)==(ECL_NIL))) { goto L103; }
   goto L104;
L107:;
   goto L109;
   if (!((ECL_NIL)==(ecl_make_fixnum(0)))) { goto L103; }
   goto L104;
L109:;
   if (!(v4args==ECL_NIL)) { goto L103; }
L104:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L103:;
   cl_write_string(2, VV[228], v2stream);
   cl_pprint_newline(2, VV[137], v2stream);
   goto L74;
  }
 }
 }
}
/*      closure PPRINT-LOGICAL-BLOCK-1030                             */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC125__pprint_logical_block_1030(cl_narg narg, cl_object v1, cl_object v2stream, ...)
{
 cl_object T0;
 cl_object CLV0, CLV1, CLV2;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 /* Scanning closure data ... */
 CLV1 = env0;                                     /*  ARG             */
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
TTL:
 {
  cl_object v3;
  v3 = ecl_make_fixnum(0);
  {
   cl_object v4args;
   v4args = ECL_CONS_CAR(CLV1);
L3:;
   if (!(v4args==ECL_NIL)) { goto L5; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L5:;
   {
    cl_object env1 = env0;
    if (!(v4args==ECL_NIL)) { goto L8; }
    cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[225], VV[226], ECL_SYM("CONTROL-STRING",1233), VV[234], ECL_SYM("OFFSET",1306), ecl_make_fixnum(21));
L8:;
    if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L11; }
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
L11:;
    v3 = ecl_plus(v3,ecl_make_fixnum(1));
    {
     cl_object v5;
     v5 = v1;
     if (Null(v5)) { goto L17; }
     {
      cl_object v6;
      v6 = ECL_CONS_CDR(v5);
      v1 = v6;
      v5 = ECL_CONS_CAR(v5);
     }
L17:;
    }
    {
     cl_object v5;
     v5 = v4args;
     if (Null(v5)) { goto L26; }
     {
      cl_object v6;
      v6 = ECL_CONS_CDR(v5);
      v4args = v6;
      v5 = ECL_CONS_CAR(v5);
     }
L26:;
     T0 = v5;
    }
    CLV2 = env1 = CONS(T0,env1);                  /*  ARG             */
    {
     cl_object v5;
     v5 = ecl_make_cclosure_va((cl_objectfn)LC124__pprint_logical_block_1048,env1,Cblock,2);
     T0 = v5;
    }
    L77pprint_logical_block_helper(T0, ECL_CONS_CAR(CLV2), v2stream, VV[176], ECL_NIL, VV[177]);
   }
   goto L35;
   if (Null(cl_LE(3, ECL_NIL, ECL_NIL, ECL_NIL))) { goto L33; }
   goto L34;
L35:;
   goto L37;
   if (!((ECL_NIL)==(ECL_NIL))) { goto L33; }
   goto L34;
L37:;
   goto L39;
   if (!((ECL_NIL)==(ecl_make_fixnum(0)))) { goto L33; }
   goto L34;
L39:;
   if (!(v4args==ECL_NIL)) { goto L33; }
L34:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L33:;
   cl_write_string(2, VV[228], v2stream);
   cl_pprint_newline(2, VV[137], v2stream);
   goto L3;
  }
 }
 }
}
/*      closure PPRINT-LOGICAL-BLOCK-1048                             */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC124__pprint_logical_block_1048(cl_narg narg, cl_object v1, cl_object v2stream, ...)
{
 cl_object T0;
 cl_object CLV0, CLV1, CLV2;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 /* Scanning closure data ... */
 CLV2 = env0;                                     /*  ARG             */
 CLV1 = _ecl_cdr(CLV2);
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
TTL:
 {
  cl_object v3;
  v3 = ecl_make_fixnum(0);
  {
   cl_object v4args;
   v4args = ECL_CONS_CAR(CLV2);
   goto L5;
   if (Null(cl_LE(3, ECL_NIL, ECL_NIL, ECL_NIL))) { goto L3; }
   goto L4;
L5:;
   goto L7;
   if (!((ECL_NIL)==(ECL_NIL))) { goto L3; }
   goto L4;
L7:;
   goto L9;
   if (!((ECL_NIL)==(ecl_make_fixnum(0)))) { goto L3; }
   goto L4;
L9:;
   if (!(v4args==ECL_NIL)) { goto L3; }
L4:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L3:;
   if (!(v4args==ECL_NIL)) { goto L12; }
   cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[225], VV[226], ECL_SYM("CONTROL-STRING",1233), VV[234], ECL_SYM("OFFSET",1306), ecl_make_fixnum(25));
L12:;
   if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L15; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L15:;
   v3 = ecl_plus(v3,ecl_make_fixnum(1));
   {
    cl_object v5;
    v5 = v1;
    if (Null(v5)) { goto L21; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v1 = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L21:;
   }
   {
    cl_object v5;
    v5 = v4args;
    if (Null(v5)) { goto L30; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v4args = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L30:;
    T0 = v5;
   }
   si_write_object(T0, v2stream);
L36:;
   if (!(v4args==ECL_NIL)) { goto L38; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L38:;
   cl_write_string(2, VV[228], v2stream);
   cl_pprint_newline(2, VV[137], v2stream);
   if (!(v4args==ECL_NIL)) { goto L42; }
   cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[225], VV[226], ECL_SYM("CONTROL-STRING",1233), VV[234], ECL_SYM("OFFSET",1306), ecl_make_fixnum(33));
L42:;
   if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L45; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L45:;
   v3 = ecl_plus(v3,ecl_make_fixnum(1));
   {
    cl_object v5;
    v5 = v1;
    if (Null(v5)) { goto L51; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v1 = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L51:;
   }
   {
    cl_object v5;
    v5 = v4args;
    if (Null(v5)) { goto L60; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v4args = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L60:;
    T0 = v5;
   }
   si_write_object(T0, v2stream);
   goto L36;
  }
 }
 }
}
/*      function definition for PPRINT-PROGN                          */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L129pprint_progn(cl_narg narg, cl_object v1stream, cl_object v2list, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 {
  cl_object env1 = env0;
  env1 = ECL_NIL;
  CLV0 = env1 = CONS(v2list,env1);                /*  ARG             */
  {
   cl_object v3;
   v3 = ecl_make_cclosure_va((cl_objectfn)LC128__pprint_logical_block_1091,env1,Cblock,2);
   T0 = v3;
  }
  L77pprint_logical_block_helper(T0, ECL_CONS_CAR(CLV0), v1stream, VV[176], ECL_NIL, VV[177]);
 }
 value0 = ECL_NIL;
 cl_env_copy->nvalues = 1;
 return value0;
}
/*      closure PPRINT-LOGICAL-BLOCK-1091                             */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC128__pprint_logical_block_1091(cl_narg narg, cl_object v1, cl_object v2stream, ...)
{
 cl_object T0;
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 /* Scanning closure data ... */
 CLV0 = env0;                                     /*  ARG             */
 { /* ... closure scanning finished */
TTL:
 {
  cl_object v3;
  v3 = ecl_make_fixnum(0);
  {
   cl_object v4args;
   v4args = ECL_CONS_CAR(CLV0);
   goto L5;
   if (Null(cl_LE(3, ECL_NIL, ECL_NIL, ECL_NIL))) { goto L3; }
   goto L4;
L5:;
   goto L7;
   if (!((ECL_NIL)==(ECL_NIL))) { goto L3; }
   goto L4;
L7:;
   goto L9;
   if (!((ECL_NIL)==(ecl_make_fixnum(0)))) { goto L3; }
   goto L4;
L9:;
   if (!(v4args==ECL_NIL)) { goto L3; }
L4:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L3:;
   if (!(v4args==ECL_NIL)) { goto L12; }
   cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[225], VV[226], ECL_SYM("CONTROL-STRING",1233), VV[236], ECL_SYM("OFFSET",1306), ecl_make_fixnum(6));
L12:;
   if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L15; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L15:;
   v3 = ecl_plus(v3,ecl_make_fixnum(1));
   {
    cl_object v5;
    v5 = v1;
    if (Null(v5)) { goto L21; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v1 = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L21:;
   }
   {
    cl_object v5;
    v5 = v4args;
    if (Null(v5)) { goto L30; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v4args = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L30:;
    T0 = v5;
   }
   si_write_object(T0, v2stream);
L36:;
   if (!(v4args==ECL_NIL)) { goto L38; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L38:;
   cl_write_string(2, VV[228], v2stream);
   cl_pprint_newline(2, VV[137], v2stream);
   if (!(v4args==ECL_NIL)) { goto L42; }
   cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[225], VV[226], ECL_SYM("CONTROL-STRING",1233), VV[236], ECL_SYM("OFFSET",1306), ecl_make_fixnum(14));
L42:;
   if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L45; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L45:;
   v3 = ecl_plus(v3,ecl_make_fixnum(1));
   {
    cl_object v5;
    v5 = v1;
    if (Null(v5)) { goto L51; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v1 = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L51:;
   }
   {
    cl_object v5;
    v5 = v4args;
    if (Null(v5)) { goto L60; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v4args = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L60:;
    T0 = v5;
   }
   si_write_object(T0, v2stream);
   goto L36;
  }
 }
 }
}
/*      function definition for PPRINT-PROGV                          */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L131pprint_progv(cl_narg narg, cl_object v1stream, cl_object v2list, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 {
  cl_object env1 = env0;
  env1 = ECL_NIL;
  CLV0 = env1 = CONS(v2list,env1);                /*  ARG             */
  {
   cl_object v3;
   v3 = ecl_make_cclosure_va((cl_objectfn)LC130__pprint_logical_block_1121,env1,Cblock,2);
   T0 = v3;
  }
  L77pprint_logical_block_helper(T0, ECL_CONS_CAR(CLV0), v1stream, VV[176], ECL_NIL, VV[177]);
 }
 value0 = ECL_NIL;
 cl_env_copy->nvalues = 1;
 return value0;
}
/*      closure PPRINT-LOGICAL-BLOCK-1121                             */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC130__pprint_logical_block_1121(cl_narg narg, cl_object v1, cl_object v2stream, ...)
{
 cl_object T0;
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 /* Scanning closure data ... */
 CLV0 = env0;                                     /*  ARG             */
 { /* ... closure scanning finished */
TTL:
 {
  cl_object v3;
  v3 = ecl_make_fixnum(0);
  {
   cl_object v4args;
   v4args = ECL_CONS_CAR(CLV0);
   goto L5;
   if (Null(cl_LE(3, ECL_NIL, ECL_NIL, ECL_NIL))) { goto L3; }
   goto L4;
L5:;
   goto L7;
   if (!((ECL_NIL)==(ECL_NIL))) { goto L3; }
   goto L4;
L7:;
   goto L9;
   if (!((ECL_NIL)==(ecl_make_fixnum(0)))) { goto L3; }
   goto L4;
L9:;
   if (!(v4args==ECL_NIL)) { goto L3; }
L4:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L3:;
   if (!(v4args==ECL_NIL)) { goto L12; }
   cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[225], VV[226], ECL_SYM("CONTROL-STRING",1233), VV[238], ECL_SYM("OFFSET",1306), ecl_make_fixnum(6));
L12:;
   if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L15; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L15:;
   v3 = ecl_plus(v3,ecl_make_fixnum(1));
   {
    cl_object v5;
    v5 = v1;
    if (Null(v5)) { goto L21; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v1 = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L21:;
   }
   {
    cl_object v5;
    v5 = v4args;
    if (Null(v5)) { goto L30; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v4args = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L30:;
    T0 = v5;
   }
   si_write_object(T0, v2stream);
   goto L38;
   if (Null(cl_LE(3, ECL_NIL, ECL_NIL, ECL_NIL))) { goto L36; }
   goto L37;
L38:;
   goto L40;
   if (!((ECL_NIL)==(ECL_NIL))) { goto L36; }
   goto L37;
L40:;
   goto L42;
   if (!((ECL_NIL)==(ecl_make_fixnum(0)))) { goto L36; }
   goto L37;
L42:;
   if (!(v4args==ECL_NIL)) { goto L36; }
L37:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L36:;
   cl_pprint_indent(3, ECL_SYM("BLOCK",1224), ecl_make_fixnum(3), v2stream);
   cl_write_string(2, VV[228], v2stream);
   cl_pprint_newline(2, VV[137], v2stream);
   if (!(v4args==ECL_NIL)) { goto L48; }
   cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[225], VV[226], ECL_SYM("CONTROL-STRING",1233), VV[238], ECL_SYM("OFFSET",1306), ecl_make_fixnum(16));
L48:;
   if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L51; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L51:;
   v3 = ecl_plus(v3,ecl_make_fixnum(1));
   {
    cl_object v5;
    v5 = v1;
    if (Null(v5)) { goto L57; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v1 = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L57:;
   }
   {
    cl_object v5;
    v5 = v4args;
    if (Null(v5)) { goto L66; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v4args = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L66:;
    T0 = v5;
   }
   si_write_object(T0, v2stream);
   goto L74;
   if (Null(cl_LE(3, ECL_NIL, ECL_NIL, ECL_NIL))) { goto L72; }
   goto L73;
L74:;
   goto L76;
   if (!((ECL_NIL)==(ECL_NIL))) { goto L72; }
   goto L73;
L76:;
   goto L78;
   if (!((ECL_NIL)==(ecl_make_fixnum(0)))) { goto L72; }
   goto L73;
L78:;
   if (!(v4args==ECL_NIL)) { goto L72; }
L73:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L72:;
   cl_write_string(2, VV[228], v2stream);
   cl_pprint_newline(2, VV[137], v2stream);
   if (!(v4args==ECL_NIL)) { goto L83; }
   cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[225], VV[226], ECL_SYM("CONTROL-STRING",1233), VV[238], ECL_SYM("OFFSET",1306), ecl_make_fixnum(23));
L83:;
   if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L86; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L86:;
   v3 = ecl_plus(v3,ecl_make_fixnum(1));
   {
    cl_object v5;
    v5 = v1;
    if (Null(v5)) { goto L92; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v1 = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L92:;
   }
   {
    cl_object v5;
    v5 = v4args;
    if (Null(v5)) { goto L101; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v4args = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L101:;
    T0 = v5;
   }
   si_write_object(T0, v2stream);
   goto L109;
   if (Null(cl_LE(3, ECL_NIL, ECL_NIL, ECL_NIL))) { goto L107; }
   goto L108;
L109:;
   goto L111;
   if (!((ECL_NIL)==(ECL_NIL))) { goto L107; }
   goto L108;
L111:;
   goto L113;
   if (!((ECL_NIL)==(ecl_make_fixnum(0)))) { goto L107; }
   goto L108;
L113:;
   if (!(v4args==ECL_NIL)) { goto L107; }
L108:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L107:;
   cl_pprint_indent(3, ECL_SYM("BLOCK",1224), ecl_make_fixnum(1), v2stream);
L116:;
   if (!(v4args==ECL_NIL)) { goto L118; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L118:;
   cl_write_string(2, VV[228], v2stream);
   cl_pprint_newline(2, VV[137], v2stream);
   if (!(v4args==ECL_NIL)) { goto L122; }
   cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[225], VV[226], ECL_SYM("CONTROL-STRING",1233), VV[238], ECL_SYM("OFFSET",1306), ecl_make_fixnum(36));
L122:;
   if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L125; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L125:;
   v3 = ecl_plus(v3,ecl_make_fixnum(1));
   {
    cl_object v5;
    v5 = v1;
    if (Null(v5)) { goto L131; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v1 = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L131:;
   }
   {
    cl_object v5;
    v5 = v4args;
    if (Null(v5)) { goto L140; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v4args = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L140:;
    T0 = v5;
   }
   si_write_object(T0, v2stream);
   goto L116;
  }
 }
 }
}
/*      function definition for PPRINT-QUOTE                          */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L132pprint_quote(cl_narg narg, cl_object v1stream, cl_object v2list, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 if (!(ECL_CONSP(v2list))) { goto L1; }
 T0 = _ecl_cdr(v2list);
 if (!(ECL_CONSP(T0))) { goto L1; }
 T0 = _ecl_cddr(v2list);
 if (!(T0==ECL_NIL)) { goto L1; }
 {
  cl_object v3;
  v3 = _ecl_car(v2list);
  if (!((v3)==(ECL_SYM("FUNCTION",398)))) { goto L6; }
  cl_write_string(2, VV[240], v1stream);
  T0 = _ecl_cadr(v2list);
  value0 = si_write_object(T0, v1stream);
  return value0;
L6:;
  if (!((v3)==(ECL_SYM("QUOTE",681)))) { goto L9; }
  cl_write_char(2, CODE_CHAR(39), v1stream);
  T0 = _ecl_cadr(v2list);
  value0 = si_write_object(T0, v1stream);
  return value0;
L9:;
  value0 = cl_pprint_fill(2, v1stream, v2list);
  return value0;
 }
L1:;
 value0 = cl_pprint_fill(2, v1stream, v2list);
 return value0;
}
/*      function definition for PPRINT-SETQ                           */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L134pprint_setq(cl_narg narg, cl_object v1stream, cl_object v2list, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 env0 = ECL_NIL;
 CLV0 = env0 = CONS(v2list,env0);                 /*  LIST            */
 {
  cl_object v3;
  v3 = ecl_make_cclosure_va((cl_objectfn)LC133__pprint_logical_block_1170,env0,Cblock,2);
  T0 = v3;
 }
 value0 = L77pprint_logical_block_helper(T0, ECL_CONS_CAR(CLV0), v1stream, VV[176], ECL_NIL, VV[177]);
 return value0;
}
/*      closure PPRINT-LOGICAL-BLOCK-1170                             */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC133__pprint_logical_block_1170(cl_narg narg, cl_object v1, cl_object v2stream, ...)
{
 cl_object T0;
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 /* Scanning closure data ... */
 CLV0 = env0;                                     /*  LIST            */
 { /* ... closure scanning finished */
TTL:
 {
  cl_object v3;
  v3 = ecl_make_fixnum(0);
  if (!(v1==ECL_NIL)) { goto L2; }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L2:;
  if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L5; }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L5:;
  v3 = ecl_plus(v3,ecl_make_fixnum(1));
  {
   cl_object v4;
   v4 = v1;
   if (Null(v4)) { goto L12; }
   {
    cl_object v5;
    v5 = ECL_CONS_CDR(v4);
    v1 = v5;
    v4 = ECL_CONS_CAR(v4);
   }
L12:;
   T0 = v4;
  }
  si_write_object(T0, v2stream);
  if (!(v1==ECL_NIL)) { goto L18; }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L18:;
  cl_write_char(2, CODE_CHAR(32), v2stream);
  cl_pprint_newline(2, VV[139], v2stream);
  T0 = _ecl_cdr(ECL_CONS_CAR(CLV0));
  if (!(ECL_CONSP(T0))) { goto L22; }
  T0 = _ecl_cddr(ECL_CONS_CAR(CLV0));
  if (!(ECL_CONSP(T0))) { goto L22; }
L25:;
  cl_pprint_indent(3, VV[78], ecl_make_fixnum(2), v2stream);
  if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L29; }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L29:;
  v3 = ecl_plus(v3,ecl_make_fixnum(1));
  {
   cl_object v4;
   v4 = v1;
   if (Null(v4)) { goto L36; }
   {
    cl_object v5;
    v5 = ECL_CONS_CDR(v4);
    v1 = v5;
    v4 = ECL_CONS_CAR(v4);
   }
L36:;
   T0 = v4;
  }
  si_write_object(T0, v2stream);
  if (!(v1==ECL_NIL)) { goto L42; }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L42:;
  cl_write_char(2, CODE_CHAR(32), v2stream);
  cl_pprint_newline(2, VV[137], v2stream);
  cl_pprint_indent(3, VV[78], ecl_make_fixnum(-2), v2stream);
  if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L48; }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L48:;
  v3 = ecl_plus(v3,ecl_make_fixnum(1));
  {
   cl_object v4;
   v4 = v1;
   if (Null(v4)) { goto L55; }
   {
    cl_object v5;
    v5 = ECL_CONS_CDR(v4);
    v1 = v5;
    v4 = ECL_CONS_CAR(v4);
   }
L55:;
   T0 = v4;
  }
  si_write_object(T0, v2stream);
  if (!(v1==ECL_NIL)) { goto L61; }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L61:;
  cl_write_char(2, CODE_CHAR(32), v2stream);
  cl_pprint_newline(2, VV[137], v2stream);
  goto L25;
L22:;
  cl_pprint_indent(3, VV[78], ecl_make_fixnum(0), v2stream);
  if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L67; }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L67:;
  v3 = ecl_plus(v3,ecl_make_fixnum(1));
  {
   cl_object v4;
   v4 = v1;
   if (Null(v4)) { goto L74; }
   {
    cl_object v5;
    v5 = ECL_CONS_CDR(v4);
    v1 = v5;
    v4 = ECL_CONS_CAR(v4);
   }
L74:;
   T0 = v4;
  }
  si_write_object(T0, v2stream);
  if (!(v1==ECL_NIL)) { goto L80; }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L80:;
  cl_write_char(2, CODE_CHAR(32), v2stream);
  cl_pprint_newline(2, VV[137], v2stream);
  if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L84; }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L84:;
  v3 = ecl_plus(v3,ecl_make_fixnum(1));
  {
   cl_object v4;
   v4 = v1;
   if (Null(v4)) { goto L91; }
   {
    cl_object v5;
    v5 = ECL_CONS_CDR(v4);
    v1 = v5;
    v4 = ECL_CONS_CAR(v4);
   }
L91:;
   T0 = v4;
  }
  value0 = si_write_object(T0, v2stream);
  return value0;
 }
 }
}
/*      function definition for PPRINT-TAGBODY                        */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L136pprint_tagbody(cl_narg narg, cl_object v1stream, cl_object v2list, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 {
  cl_object v3;
  v3 = ecl_make_cfun((cl_objectfn_fixed)LC135__pprint_logical_block_1200,ECL_NIL,Cblock,2);
  T0 = v3;
 }
 value0 = L77pprint_logical_block_helper(T0, v2list, v1stream, VV[176], ECL_NIL, VV[177]);
 return value0;
}
/*      local function PPRINT-LOGICAL-BLOCK-1200                      */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC135__pprint_logical_block_1200(cl_object v1, cl_object v2stream)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 {
  cl_object v3;
  v3 = ecl_make_fixnum(0);
  if (!(v1==ECL_NIL)) { goto L2; }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L2:;
  if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L5; }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L5:;
  v3 = ecl_plus(v3,ecl_make_fixnum(1));
  {
   cl_object v4;
   v4 = v1;
   if (Null(v4)) { goto L12; }
   {
    cl_object v5;
    v5 = ECL_CONS_CDR(v4);
    v1 = v5;
    v4 = ECL_CONS_CAR(v4);
   }
L12:;
   T0 = v4;
  }
  si_write_object(T0, v2stream);
L18:;
  if (!(v1==ECL_NIL)) { goto L20; }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L20:;
  cl_write_char(2, CODE_CHAR(32), v2stream);
  {
   cl_object v4form_or_tag;
   if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L24; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L24:;
   v3 = ecl_plus(v3,ecl_make_fixnum(1));
   {
    cl_object v5;
    v5 = v1;
    if (Null(v5)) { goto L30; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v1 = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L30:;
    v4form_or_tag = v5;
   }
   {
    cl_fixnum v5;
    if (!(ECL_ATOM(v4form_or_tag))) { goto L38; }
    v5 = 0;
    goto L37;
L38:;
    v5 = 1;
L37:;
    cl_pprint_indent(3, ECL_SYM("BLOCK",1224), ecl_make_fixnum(v5), v2stream);
   }
   cl_pprint_newline(2, VV[137], v2stream);
   si_write_object(v4form_or_tag, v2stream);
  }
  goto L18;
 }
}
/*      function definition for PPRINT-CASE                           */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L139pprint_case(cl_narg narg, cl_object v1stream, cl_object v2list, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 {
  cl_object env1 = env0;
  env1 = ECL_NIL;
  CLV0 = env1 = CONS(v2list,env1);                /*  ARG             */
  {
   cl_object v3;
   v3 = ecl_make_cclosure_va((cl_objectfn)LC138__pprint_logical_block_1221,env1,Cblock,2);
   T0 = v3;
  }
  L77pprint_logical_block_helper(T0, ECL_CONS_CAR(CLV0), v1stream, VV[176], ECL_NIL, VV[177]);
 }
 value0 = ECL_NIL;
 cl_env_copy->nvalues = 1;
 return value0;
}
/*      closure PPRINT-LOGICAL-BLOCK-1221                             */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC138__pprint_logical_block_1221(cl_narg narg, cl_object v1, cl_object v2stream, ...)
{
 cl_object T0;
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 /* Scanning closure data ... */
 CLV0 = env0;                                     /*  ARG             */
 { /* ... closure scanning finished */
TTL:
 {
  cl_object v3;
  v3 = ecl_make_fixnum(0);
  {
   cl_object v4args;
   v4args = ECL_CONS_CAR(CLV0);
   goto L5;
   if (Null(cl_LE(3, ECL_NIL, ECL_NIL, ECL_NIL))) { goto L3; }
   goto L4;
L5:;
   goto L7;
   if (!((ECL_NIL)==(ECL_NIL))) { goto L3; }
   goto L4;
L7:;
   goto L9;
   if (!((ECL_NIL)==(ecl_make_fixnum(0)))) { goto L3; }
   goto L4;
L9:;
   if (!(v4args==ECL_NIL)) { goto L3; }
L4:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L3:;
   if (!(v4args==ECL_NIL)) { goto L12; }
   cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[225], VV[226], ECL_SYM("CONTROL-STRING",1233), VV[244], ECL_SYM("OFFSET",1306), ecl_make_fixnum(6));
L12:;
   if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L15; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L15:;
   v3 = ecl_plus(v3,ecl_make_fixnum(1));
   {
    cl_object v5;
    v5 = v1;
    if (Null(v5)) { goto L21; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v1 = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L21:;
   }
   {
    cl_object v5;
    v5 = v4args;
    if (Null(v5)) { goto L30; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v4args = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L30:;
    T0 = v5;
   }
   si_write_object(T0, v2stream);
   goto L38;
   if (Null(cl_LE(3, ECL_NIL, ECL_NIL, ECL_NIL))) { goto L36; }
   goto L37;
L38:;
   goto L40;
   if (!((ECL_NIL)==(ECL_NIL))) { goto L36; }
   goto L37;
L40:;
   goto L42;
   if (!((ECL_NIL)==(ecl_make_fixnum(0)))) { goto L36; }
   goto L37;
L42:;
   if (!(v4args==ECL_NIL)) { goto L36; }
L37:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L36:;
   cl_write_string(2, VV[228], v2stream);
   cl_pprint_indent(3, ECL_SYM("BLOCK",1224), ecl_make_fixnum(3), v2stream);
   cl_pprint_newline(2, VV[140], v2stream);
   if (!(v4args==ECL_NIL)) { goto L48; }
   cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[225], VV[226], ECL_SYM("CONTROL-STRING",1233), VV[244], ECL_SYM("OFFSET",1306), ecl_make_fixnum(17));
L48:;
   if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L51; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L51:;
   v3 = ecl_plus(v3,ecl_make_fixnum(1));
   {
    cl_object v5;
    v5 = v1;
    if (Null(v5)) { goto L57; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v1 = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L57:;
   }
   {
    cl_object v5;
    v5 = v4args;
    if (Null(v5)) { goto L66; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v4args = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L66:;
    T0 = v5;
   }
   si_write_object(T0, v2stream);
   cl_pprint_indent(3, ECL_SYM("BLOCK",1224), ecl_make_fixnum(1), v2stream);
L73:;
   if (!(v4args==ECL_NIL)) { goto L75; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L75:;
   cl_write_string(2, VV[228], v2stream);
   cl_pprint_newline(2, VV[137], v2stream);
   {
    cl_object env1 = env0;
    if (!(v4args==ECL_NIL)) { goto L79; }
    cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[225], VV[226], ECL_SYM("CONTROL-STRING",1233), VV[244], ECL_SYM("OFFSET",1306), ecl_make_fixnum(29));
L79:;
    if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L82; }
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
L82:;
    v3 = ecl_plus(v3,ecl_make_fixnum(1));
    {
     cl_object v5;
     v5 = v1;
     if (Null(v5)) { goto L88; }
     {
      cl_object v6;
      v6 = ECL_CONS_CDR(v5);
      v1 = v6;
      v5 = ECL_CONS_CAR(v5);
     }
L88:;
    }
    {
     cl_object v5;
     v5 = v4args;
     if (Null(v5)) { goto L97; }
     {
      cl_object v6;
      v6 = ECL_CONS_CDR(v5);
      v4args = v6;
      v5 = ECL_CONS_CAR(v5);
     }
L97:;
     T0 = v5;
    }
    CLV1 = env1 = CONS(T0,env1);                  /*  ARG             */
    {
     cl_object v5;
     v5 = ecl_make_cclosure_va((cl_objectfn)LC137__pprint_logical_block_1257,env1,Cblock,2);
     T0 = v5;
    }
    L77pprint_logical_block_helper(T0, ECL_CONS_CAR(CLV1), v2stream, VV[176], ECL_NIL, VV[177]);
   }
   goto L73;
  }
 }
 }
}
/*      closure PPRINT-LOGICAL-BLOCK-1257                             */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC137__pprint_logical_block_1257(cl_narg narg, cl_object v1, cl_object v2stream, ...)
{
 cl_object T0;
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 /* Scanning closure data ... */
 CLV1 = env0;                                     /*  ARG             */
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
TTL:
 {
  cl_object v3;
  v3 = ecl_make_fixnum(0);
  {
   cl_object v4args;
   v4args = ECL_CONS_CAR(CLV1);
   goto L5;
   if (Null(cl_LE(3, ECL_NIL, ECL_NIL, ECL_NIL))) { goto L3; }
   goto L4;
L5:;
   goto L7;
   if (!((ECL_NIL)==(ECL_NIL))) { goto L3; }
   goto L4;
L7:;
   goto L9;
   if (!((ECL_NIL)==(ecl_make_fixnum(0)))) { goto L3; }
   goto L4;
L9:;
   if (!(v4args==ECL_NIL)) { goto L3; }
L4:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L3:;
   if (!(v4args==ECL_NIL)) { goto L12; }
   cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[225], VV[226], ECL_SYM("CONTROL-STRING",1233), VV[244], ECL_SYM("OFFSET",1306), ecl_make_fixnum(49));
L12:;
   if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L15; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L15:;
   v3 = ecl_plus(v3,ecl_make_fixnum(1));
   {
    cl_object v5;
    v5 = v1;
    if (Null(v5)) { goto L21; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v1 = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L21:;
   }
   {
    cl_object v5;
    v5 = v4args;
    if (Null(v5)) { goto L30; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v4args = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L30:;
    T0 = v5;
   }
   cl_pprint_fill(4, v2stream, T0, ECL_T, ECL_NIL);
   goto L38;
   if (Null(cl_LE(3, ECL_NIL, ECL_NIL, ECL_NIL))) { goto L36; }
   goto L37;
L38:;
   goto L40;
   if (!((ECL_NIL)==(ECL_NIL))) { goto L36; }
   goto L37;
L40:;
   goto L42;
   if (!((ECL_NIL)==(ecl_make_fixnum(0)))) { goto L36; }
   goto L37;
L42:;
   if (!(v4args==ECL_NIL)) { goto L36; }
L37:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L36:;
L44:;
   if (!(v4args==ECL_NIL)) { goto L46; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L46:;
   cl_write_string(2, VV[228], v2stream);
   cl_pprint_newline(2, VV[137], v2stream);
   if (!(v4args==ECL_NIL)) { goto L50; }
   cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[225], VV[226], ECL_SYM("CONTROL-STRING",1233), VV[244], ECL_SYM("OFFSET",1306), ecl_make_fixnum(59));
L50:;
   if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L53; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L53:;
   v3 = ecl_plus(v3,ecl_make_fixnum(1));
   {
    cl_object v5;
    v5 = v1;
    if (Null(v5)) { goto L59; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v1 = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L59:;
   }
   {
    cl_object v5;
    v5 = v4args;
    if (Null(v5)) { goto L68; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v4args = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L68:;
    T0 = v5;
   }
   si_write_object(T0, v2stream);
   goto L44;
  }
 }
 }
}
/*      function definition for PPRINT-DEFUN                          */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L141pprint_defun(cl_narg narg, cl_object v1stream, cl_object v2list, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 {
  cl_object env1 = env0;
  env1 = ECL_NIL;
  CLV0 = env1 = CONS(v2list,env1);                /*  ARG             */
  {
   cl_object v3;
   v3 = ecl_make_cclosure_va((cl_objectfn)LC140__pprint_logical_block_1290,env1,Cblock,2);
   T0 = v3;
  }
  L77pprint_logical_block_helper(T0, ECL_CONS_CAR(CLV0), v1stream, VV[176], ECL_NIL, VV[177]);
 }
 value0 = ECL_NIL;
 cl_env_copy->nvalues = 1;
 return value0;
}
/*      closure PPRINT-LOGICAL-BLOCK-1290                             */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC140__pprint_logical_block_1290(cl_narg narg, cl_object v1, cl_object v2stream, ...)
{
 cl_object T0;
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 /* Scanning closure data ... */
 CLV0 = env0;                                     /*  ARG             */
 { /* ... closure scanning finished */
TTL:
 {
  cl_object v3;
  v3 = ecl_make_fixnum(0);
  {
   cl_object v4args;
   v4args = ECL_CONS_CAR(CLV0);
   goto L5;
   if (Null(cl_LE(3, ECL_NIL, ECL_NIL, ECL_NIL))) { goto L3; }
   goto L4;
L5:;
   goto L7;
   if (!((ECL_NIL)==(ECL_NIL))) { goto L3; }
   goto L4;
L7:;
   goto L9;
   if (!((ECL_NIL)==(ecl_make_fixnum(0)))) { goto L3; }
   goto L4;
L9:;
   if (!(v4args==ECL_NIL)) { goto L3; }
L4:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L3:;
   if (!(v4args==ECL_NIL)) { goto L12; }
   cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[225], VV[226], ECL_SYM("CONTROL-STRING",1233), VV[246], ECL_SYM("OFFSET",1306), ecl_make_fixnum(6));
L12:;
   if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L15; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L15:;
   v3 = ecl_plus(v3,ecl_make_fixnum(1));
   {
    cl_object v5;
    v5 = v1;
    if (Null(v5)) { goto L21; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v1 = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L21:;
   }
   {
    cl_object v5;
    v5 = v4args;
    if (Null(v5)) { goto L30; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v4args = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L30:;
    T0 = v5;
   }
   si_write_object(T0, v2stream);
   goto L38;
   if (Null(cl_LE(3, ECL_NIL, ECL_NIL, ECL_NIL))) { goto L36; }
   goto L37;
L38:;
   goto L40;
   if (!((ECL_NIL)==(ECL_NIL))) { goto L36; }
   goto L37;
L40:;
   goto L42;
   if (!((ECL_NIL)==(ecl_make_fixnum(0)))) { goto L36; }
   goto L37;
L42:;
   if (!(v4args==ECL_NIL)) { goto L36; }
L37:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L36:;
   cl_write_string(2, VV[228], v2stream);
   cl_pprint_newline(2, VV[139], v2stream);
   cl_pprint_indent(3, VV[78], ecl_make_fixnum(0), v2stream);
   if (!(v4args==ECL_NIL)) { goto L48; }
   cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[225], VV[226], ECL_SYM("CONTROL-STRING",1233), VV[246], ECL_SYM("OFFSET",1306), ecl_make_fixnum(17));
L48:;
   if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L51; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L51:;
   v3 = ecl_plus(v3,ecl_make_fixnum(1));
   {
    cl_object v5;
    v5 = v1;
    if (Null(v5)) { goto L57; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v1 = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L57:;
   }
   {
    cl_object v5;
    v5 = v4args;
    if (Null(v5)) { goto L66; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v4args = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L66:;
    T0 = v5;
   }
   si_write_object(T0, v2stream);
   goto L74;
   if (Null(cl_LE(3, ECL_NIL, ECL_NIL, ECL_NIL))) { goto L72; }
   goto L73;
L74:;
   goto L76;
   if (!((ECL_NIL)==(ECL_NIL))) { goto L72; }
   goto L73;
L76:;
   goto L78;
   if (!((ECL_NIL)==(ecl_make_fixnum(0)))) { goto L72; }
   goto L73;
L78:;
   if (!(v4args==ECL_NIL)) { goto L72; }
L73:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L72:;
   cl_write_string(2, VV[228], v2stream);
   cl_pprint_newline(2, VV[140], v2stream);
   if (!(v4args==ECL_NIL)) { goto L83; }
   cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[225], VV[226], ECL_SYM("CONTROL-STRING",1233), VV[246], ECL_SYM("OFFSET",1306), ecl_make_fixnum(47));
L83:;
   if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L86; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L86:;
   v3 = ecl_plus(v3,ecl_make_fixnum(1));
   {
    cl_object v5;
    v5 = v1;
    if (Null(v5)) { goto L92; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v1 = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L92:;
   }
   {
    cl_object v5;
    v5 = v4args;
    if (Null(v5)) { goto L101; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v4args = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L101:;
    T0 = v5;
   }
   L115pprint_lambda_list(4, v2stream, T0, ECL_NIL, ECL_NIL);
   cl_pprint_indent(3, ECL_SYM("BLOCK",1224), ecl_make_fixnum(1), v2stream);
L108:;
   if (!(v4args==ECL_NIL)) { goto L110; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L110:;
   cl_write_string(2, VV[228], v2stream);
   cl_pprint_newline(2, VV[137], v2stream);
   if (!(v4args==ECL_NIL)) { goto L114; }
   cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[225], VV[226], ECL_SYM("CONTROL-STRING",1233), VV[246], ECL_SYM("OFFSET",1306), ecl_make_fixnum(58));
L114:;
   if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L117; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L117:;
   v3 = ecl_plus(v3,ecl_make_fixnum(1));
   {
    cl_object v5;
    v5 = v1;
    if (Null(v5)) { goto L123; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v1 = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L123:;
   }
   {
    cl_object v5;
    v5 = v4args;
    if (Null(v5)) { goto L132; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v4args = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L132:;
    T0 = v5;
   }
   si_write_object(T0, v2stream);
   goto L108;
  }
 }
 }
}
/*      function definition for PPRINT-DESTRUCTURING-BIND             */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L143pprint_destructuring_bind(cl_narg narg, cl_object v1stream, cl_object v2list, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 {
  cl_object env1 = env0;
  env1 = ECL_NIL;
  CLV0 = env1 = CONS(v2list,env1);                /*  ARG             */
  {
   cl_object v3;
   v3 = ecl_make_cclosure_va((cl_objectfn)LC142__pprint_logical_block_1338,env1,Cblock,2);
   T0 = v3;
  }
  L77pprint_logical_block_helper(T0, ECL_CONS_CAR(CLV0), v1stream, VV[176], ECL_NIL, VV[177]);
 }
 value0 = ECL_NIL;
 cl_env_copy->nvalues = 1;
 return value0;
}
/*      closure PPRINT-LOGICAL-BLOCK-1338                             */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC142__pprint_logical_block_1338(cl_narg narg, cl_object v1, cl_object v2stream, ...)
{
 cl_object T0;
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 /* Scanning closure data ... */
 CLV0 = env0;                                     /*  ARG             */
 { /* ... closure scanning finished */
TTL:
 {
  cl_object v3;
  v3 = ecl_make_fixnum(0);
  {
   cl_object v4args;
   v4args = ECL_CONS_CAR(CLV0);
   goto L5;
   if (Null(cl_LE(3, ECL_NIL, ECL_NIL, ECL_NIL))) { goto L3; }
   goto L4;
L5:;
   goto L7;
   if (!((ECL_NIL)==(ECL_NIL))) { goto L3; }
   goto L4;
L7:;
   goto L9;
   if (!((ECL_NIL)==(ecl_make_fixnum(0)))) { goto L3; }
   goto L4;
L9:;
   if (!(v4args==ECL_NIL)) { goto L3; }
L4:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L3:;
   if (!(v4args==ECL_NIL)) { goto L12; }
   cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[225], VV[226], ECL_SYM("CONTROL-STRING",1233), VV[248], ECL_SYM("OFFSET",1306), ecl_make_fixnum(6));
L12:;
   if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L15; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L15:;
   v3 = ecl_plus(v3,ecl_make_fixnum(1));
   {
    cl_object v5;
    v5 = v1;
    if (Null(v5)) { goto L21; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v1 = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L21:;
   }
   {
    cl_object v5;
    v5 = v4args;
    if (Null(v5)) { goto L30; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v4args = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L30:;
    T0 = v5;
   }
   si_write_object(T0, v2stream);
   goto L38;
   if (Null(cl_LE(3, ECL_NIL, ECL_NIL, ECL_NIL))) { goto L36; }
   goto L37;
L38:;
   goto L40;
   if (!((ECL_NIL)==(ECL_NIL))) { goto L36; }
   goto L37;
L40:;
   goto L42;
   if (!((ECL_NIL)==(ecl_make_fixnum(0)))) { goto L36; }
   goto L37;
L42:;
   if (!(v4args==ECL_NIL)) { goto L36; }
L37:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L36:;
   cl_pprint_indent(3, ECL_SYM("BLOCK",1224), ecl_make_fixnum(3), v2stream);
   cl_write_string(2, VV[228], v2stream);
   cl_pprint_newline(2, VV[137], v2stream);
   if (!(v4args==ECL_NIL)) { goto L48; }
   cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[225], VV[226], ECL_SYM("CONTROL-STRING",1233), VV[248], ECL_SYM("OFFSET",1306), ecl_make_fixnum(39));
L48:;
   if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L51; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L51:;
   v3 = ecl_plus(v3,ecl_make_fixnum(1));
   {
    cl_object v5;
    v5 = v1;
    if (Null(v5)) { goto L57; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v1 = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L57:;
   }
   {
    cl_object v5;
    v5 = v4args;
    if (Null(v5)) { goto L66; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v4args = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L66:;
    T0 = v5;
   }
   L115pprint_lambda_list(4, v2stream, T0, ECL_T, ECL_NIL);
   goto L74;
   if (Null(cl_LE(3, ECL_NIL, ECL_NIL, ECL_NIL))) { goto L72; }
   goto L73;
L74:;
   goto L76;
   if (!((ECL_NIL)==(ECL_NIL))) { goto L72; }
   goto L73;
L76:;
   goto L78;
   if (!((ECL_NIL)==(ecl_make_fixnum(0)))) { goto L72; }
   goto L73;
L78:;
   if (!(v4args==ECL_NIL)) { goto L72; }
L73:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L72:;
   cl_write_string(2, VV[228], v2stream);
   cl_pprint_newline(2, VV[137], v2stream);
   if (!(v4args==ECL_NIL)) { goto L83; }
   cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[225], VV[226], ECL_SYM("CONTROL-STRING",1233), VV[248], ECL_SYM("OFFSET",1306), ecl_make_fixnum(46));
L83:;
   if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L86; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L86:;
   v3 = ecl_plus(v3,ecl_make_fixnum(1));
   {
    cl_object v5;
    v5 = v1;
    if (Null(v5)) { goto L92; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v1 = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L92:;
   }
   {
    cl_object v5;
    v5 = v4args;
    if (Null(v5)) { goto L101; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v4args = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L101:;
    T0 = v5;
   }
   si_write_object(T0, v2stream);
   goto L109;
   if (Null(cl_LE(3, ECL_NIL, ECL_NIL, ECL_NIL))) { goto L107; }
   goto L108;
L109:;
   goto L111;
   if (!((ECL_NIL)==(ECL_NIL))) { goto L107; }
   goto L108;
L111:;
   goto L113;
   if (!((ECL_NIL)==(ecl_make_fixnum(0)))) { goto L107; }
   goto L108;
L113:;
   if (!(v4args==ECL_NIL)) { goto L107; }
L108:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L107:;
   cl_pprint_indent(3, ECL_SYM("BLOCK",1224), ecl_make_fixnum(1), v2stream);
L116:;
   if (!(v4args==ECL_NIL)) { goto L118; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L118:;
   cl_write_string(2, VV[228], v2stream);
   cl_pprint_newline(2, VV[137], v2stream);
   if (!(v4args==ECL_NIL)) { goto L122; }
   cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[225], VV[226], ECL_SYM("CONTROL-STRING",1233), VV[248], ECL_SYM("OFFSET",1306), ecl_make_fixnum(59));
L122:;
   if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L125; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L125:;
   v3 = ecl_plus(v3,ecl_make_fixnum(1));
   {
    cl_object v5;
    v5 = v1;
    if (Null(v5)) { goto L131; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v1 = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L131:;
   }
   {
    cl_object v5;
    v5 = v4args;
    if (Null(v5)) { goto L140; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v4args = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L140:;
    T0 = v5;
   }
   si_write_object(T0, v2stream);
   goto L116;
  }
 }
 }
}
/*      function definition for PPRINT-DO                             */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L147pprint_do(cl_narg narg, cl_object v1stream, cl_object v2list, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 {
  cl_object v3;
  v3 = ecl_make_cfun((cl_objectfn_fixed)LC146__pprint_logical_block_1386,ECL_NIL,Cblock,2);
  T0 = v3;
 }
 value0 = L77pprint_logical_block_helper(T0, v2list, v1stream, VV[176], ECL_NIL, VV[177]);
 return value0;
}
/*      local function PPRINT-LOGICAL-BLOCK-1386                      */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC146__pprint_logical_block_1386(cl_object v1, cl_object v2stream)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 {
  cl_object v3;
  v3 = ecl_make_fixnum(0);
  if (!(v1==ECL_NIL)) { goto L2; }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L2:;
  if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L5; }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L5:;
  v3 = ecl_plus(v3,ecl_make_fixnum(1));
  {
   cl_object v4;
   v4 = v1;
   if (Null(v4)) { goto L12; }
   {
    cl_object v5;
    v5 = ECL_CONS_CDR(v4);
    v1 = v5;
    v4 = ECL_CONS_CAR(v4);
   }
L12:;
   T0 = v4;
  }
  si_write_object(T0, v2stream);
  if (!(v1==ECL_NIL)) { goto L18; }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L18:;
  cl_write_char(2, CODE_CHAR(32), v2stream);
  cl_pprint_indent(3, VV[78], ecl_make_fixnum(0), v2stream);
  {
   cl_object v4;
   if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L24; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L24:;
   v3 = ecl_plus(v3,ecl_make_fixnum(1));
   {
    cl_object v5;
    v5 = v1;
    if (Null(v5)) { goto L30; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v1 = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L30:;
    v4 = v5;
   }
   {
    cl_object env1 = env0;
    env1 = ECL_NIL;
    CLV0 = env1 = CONS(v4,env1);                  /*  ARG             */
    {
     cl_object v5;
     v5 = ecl_make_cclosure_va((cl_objectfn)LC145__pprint_logical_block_1406,env1,Cblock,2);
     T0 = v5;
    }
    L77pprint_logical_block_helper(T0, ECL_CONS_CAR(CLV0), v2stream, VV[176], ECL_NIL, VV[177]);
   }
  }
  if (!(v1==ECL_NIL)) { goto L38; }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L38:;
  cl_write_char(2, CODE_CHAR(32), v2stream);
  cl_pprint_newline(2, VV[137], v2stream);
  if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L43; }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L43:;
  v3 = ecl_plus(v3,ecl_make_fixnum(1));
  {
   cl_object v4;
   v4 = v1;
   if (Null(v4)) { goto L50; }
   {
    cl_object v5;
    v5 = ECL_CONS_CDR(v4);
    v1 = v5;
    v4 = ECL_CONS_CAR(v4);
   }
L50:;
   T0 = v4;
  }
  cl_pprint_linear(2, v2stream, T0);
L56:;
  if (!(v1==ECL_NIL)) { goto L58; }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L58:;
  cl_write_char(2, CODE_CHAR(32), v2stream);
  {
   cl_object v4form_or_tag;
   if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L62; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L62:;
   v3 = ecl_plus(v3,ecl_make_fixnum(1));
   {
    cl_object v5;
    v5 = v1;
    if (Null(v5)) { goto L68; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v1 = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L68:;
    v4form_or_tag = v5;
   }
   {
    cl_fixnum v5;
    if (!(ECL_ATOM(v4form_or_tag))) { goto L76; }
    v5 = 0;
    goto L75;
L76:;
    v5 = 1;
L75:;
    cl_pprint_indent(3, ECL_SYM("BLOCK",1224), ecl_make_fixnum(v5), v2stream);
   }
   cl_pprint_newline(2, VV[137], v2stream);
   si_write_object(v4form_or_tag, v2stream);
  }
  goto L56;
 }
}
/*      closure PPRINT-LOGICAL-BLOCK-1406                             */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC145__pprint_logical_block_1406(cl_narg narg, cl_object v1, cl_object v2stream, ...)
{
 cl_object T0;
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 /* Scanning closure data ... */
 CLV0 = env0;                                     /*  ARG             */
 { /* ... closure scanning finished */
TTL:
 {
  cl_object v3;
  v3 = ecl_make_fixnum(0);
  {
   cl_object v4args;
   v4args = ECL_CONS_CAR(CLV0);
L3:;
   if (!(v4args==ECL_NIL)) { goto L5; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L5:;
   {
    cl_object env1 = env0;
    if (!(v4args==ECL_NIL)) { goto L8; }
    cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[225], VV[226], ECL_SYM("CONTROL-STRING",1233), VV[250], ECL_SYM("OFFSET",1306), ecl_make_fixnum(8));
L8:;
    if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L11; }
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
L11:;
    v3 = ecl_plus(v3,ecl_make_fixnum(1));
    {
     cl_object v5;
     v5 = v1;
     if (Null(v5)) { goto L17; }
     {
      cl_object v6;
      v6 = ECL_CONS_CDR(v5);
      v1 = v6;
      v5 = ECL_CONS_CAR(v5);
     }
L17:;
    }
    {
     cl_object v5;
     v5 = v4args;
     if (Null(v5)) { goto L26; }
     {
      cl_object v6;
      v6 = ECL_CONS_CDR(v5);
      v4args = v6;
      v5 = ECL_CONS_CAR(v5);
     }
L26:;
     T0 = v5;
    }
    CLV1 = env1 = CONS(T0,env1);                  /*  ARG             */
    {
     cl_object v5;
     v5 = ecl_make_cclosure_va((cl_objectfn)LC144__pprint_logical_block_1424,env1,Cblock,2);
     T0 = v5;
    }
    L77pprint_logical_block_helper(T0, ECL_CONS_CAR(CLV1), v2stream, VV[176], ECL_NIL, VV[177]);
   }
   goto L35;
   if (Null(cl_LE(3, ECL_NIL, ECL_NIL, ECL_NIL))) { goto L33; }
   goto L34;
L35:;
   goto L37;
   if (!((ECL_NIL)==(ECL_NIL))) { goto L33; }
   goto L34;
L37:;
   goto L39;
   if (!((ECL_NIL)==(ecl_make_fixnum(0)))) { goto L33; }
   goto L34;
L39:;
   if (!(v4args==ECL_NIL)) { goto L33; }
L34:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L33:;
   cl_pprint_newline(2, VV[72], v2stream);
   goto L3;
  }
 }
 }
}
/*      closure PPRINT-LOGICAL-BLOCK-1424                             */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC144__pprint_logical_block_1424(cl_narg narg, cl_object v1, cl_object v2stream, ...)
{
 cl_object T0;
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 /* Scanning closure data ... */
 CLV1 = env0;                                     /*  ARG             */
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
TTL:
 {
  cl_object v3;
  v3 = ecl_make_fixnum(0);
  {
   cl_object v4args;
   v4args = ECL_CONS_CAR(CLV1);
   goto L5;
   if (Null(cl_LE(3, ECL_NIL, ECL_NIL, ECL_NIL))) { goto L3; }
   goto L4;
L5:;
   goto L7;
   if (!((ECL_NIL)==(ECL_NIL))) { goto L3; }
   goto L4;
L7:;
   goto L9;
   if (!((ECL_NIL)==(ecl_make_fixnum(0)))) { goto L3; }
   goto L4;
L9:;
   if (!(v4args==ECL_NIL)) { goto L3; }
L4:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L3:;
   if (!(v4args==ECL_NIL)) { goto L12; }
   cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[225], VV[226], ECL_SYM("CONTROL-STRING",1233), VV[250], ECL_SYM("OFFSET",1306), ecl_make_fixnum(12));
L12:;
   if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L15; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L15:;
   v3 = ecl_plus(v3,ecl_make_fixnum(1));
   {
    cl_object v5;
    v5 = v1;
    if (Null(v5)) { goto L21; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v1 = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L21:;
   }
   {
    cl_object v5;
    v5 = v4args;
    if (Null(v5)) { goto L30; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v4args = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L30:;
    T0 = v5;
   }
   si_write_object(T0, v2stream);
   goto L38;
   if (Null(cl_LE(3, ECL_NIL, ECL_NIL, ECL_NIL))) { goto L36; }
   goto L37;
L38:;
   goto L40;
   if (!((ECL_NIL)==(ECL_NIL))) { goto L36; }
   goto L37;
L40:;
   goto L42;
   if (!((ECL_NIL)==(ecl_make_fixnum(0)))) { goto L36; }
   goto L37;
L42:;
   if (!(v4args==ECL_NIL)) { goto L36; }
L37:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L36:;
   cl_write_string(2, VV[228], v2stream);
   cl_pprint_newline(2, VV[139], v2stream);
   cl_pprint_indent(3, VV[78], ecl_make_fixnum(0), v2stream);
   if (!(v4args==ECL_NIL)) { goto L48; }
   cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[225], VV[226], ECL_SYM("CONTROL-STRING",1233), VV[250], ECL_SYM("OFFSET",1306), ecl_make_fixnum(23));
L48:;
   if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L51; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L51:;
   v3 = ecl_plus(v3,ecl_make_fixnum(1));
   {
    cl_object v5;
    v5 = v1;
    if (Null(v5)) { goto L57; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v1 = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L57:;
   }
   {
    cl_object v5;
    v5 = v4args;
    if (Null(v5)) { goto L66; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v4args = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L66:;
    T0 = v5;
   }
   si_write_object(T0, v2stream);
L72:;
   if (!(v4args==ECL_NIL)) { goto L74; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L74:;
   cl_write_string(2, VV[228], v2stream);
   cl_pprint_newline(2, VV[137], v2stream);
   if (!(v4args==ECL_NIL)) { goto L78; }
   cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[225], VV[226], ECL_SYM("CONTROL-STRING",1233), VV[250], ECL_SYM("OFFSET",1306), ecl_make_fixnum(31));
L78:;
   if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L81; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L81:;
   v3 = ecl_plus(v3,ecl_make_fixnum(1));
   {
    cl_object v5;
    v5 = v1;
    if (Null(v5)) { goto L87; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v1 = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L87:;
   }
   {
    cl_object v5;
    v5 = v4args;
    if (Null(v5)) { goto L96; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v4args = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L96:;
    T0 = v5;
   }
   si_write_object(T0, v2stream);
   goto L72;
  }
 }
 }
}
/*      function definition for PPRINT-DOLIST                         */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L150pprint_dolist(cl_narg narg, cl_object v1stream, cl_object v2list, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 {
  cl_object v3;
  v3 = ecl_make_cfun((cl_objectfn_fixed)LC149__pprint_logical_block_1472,ECL_NIL,Cblock,2);
  T0 = v3;
 }
 value0 = L77pprint_logical_block_helper(T0, v2list, v1stream, VV[176], ECL_NIL, VV[177]);
 return value0;
}
/*      local function PPRINT-LOGICAL-BLOCK-1472                      */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC149__pprint_logical_block_1472(cl_object v1, cl_object v2stream)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 {
  cl_object v3;
  v3 = ecl_make_fixnum(0);
  if (!(v1==ECL_NIL)) { goto L2; }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L2:;
  if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L5; }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L5:;
  v3 = ecl_plus(v3,ecl_make_fixnum(1));
  {
   cl_object v4;
   v4 = v1;
   if (Null(v4)) { goto L12; }
   {
    cl_object v5;
    v5 = ECL_CONS_CDR(v4);
    v1 = v5;
    v4 = ECL_CONS_CAR(v4);
   }
L12:;
   T0 = v4;
  }
  si_write_object(T0, v2stream);
  if (!(v1==ECL_NIL)) { goto L18; }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L18:;
  cl_pprint_indent(3, ECL_SYM("BLOCK",1224), ecl_make_fixnum(3), v2stream);
  cl_write_char(2, CODE_CHAR(32), v2stream);
  cl_pprint_newline(2, VV[140], v2stream);
  {
   cl_object v4;
   if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L25; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L25:;
   v3 = ecl_plus(v3,ecl_make_fixnum(1));
   {
    cl_object v5;
    v5 = v1;
    if (Null(v5)) { goto L31; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v1 = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L31:;
    v4 = v5;
   }
   {
    cl_object env1 = env0;
    env1 = ECL_NIL;
    CLV0 = env1 = CONS(v4,env1);                  /*  ARG             */
    {
     cl_object v5;
     v5 = ecl_make_cclosure_va((cl_objectfn)LC148__pprint_logical_block_1492,env1,Cblock,2);
     T0 = v5;
    }
    L77pprint_logical_block_helper(T0, ECL_CONS_CAR(CLV0), v2stream, VV[176], ECL_NIL, VV[177]);
   }
  }
L39:;
  if (!(v1==ECL_NIL)) { goto L41; }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L41:;
  cl_write_char(2, CODE_CHAR(32), v2stream);
  {
   cl_object v4form_or_tag;
   if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L45; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L45:;
   v3 = ecl_plus(v3,ecl_make_fixnum(1));
   {
    cl_object v5;
    v5 = v1;
    if (Null(v5)) { goto L51; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v1 = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L51:;
    v4form_or_tag = v5;
   }
   {
    cl_fixnum v5;
    if (!(ECL_ATOM(v4form_or_tag))) { goto L59; }
    v5 = 0;
    goto L58;
L59:;
    v5 = 1;
L58:;
    cl_pprint_indent(3, ECL_SYM("BLOCK",1224), ecl_make_fixnum(v5), v2stream);
   }
   cl_pprint_newline(2, VV[137], v2stream);
   si_write_object(v4form_or_tag, v2stream);
  }
  goto L39;
 }
}
/*      closure PPRINT-LOGICAL-BLOCK-1492                             */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC148__pprint_logical_block_1492(cl_narg narg, cl_object v1, cl_object v2stream, ...)
{
 cl_object T0;
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 /* Scanning closure data ... */
 CLV0 = env0;                                     /*  ARG             */
 { /* ... closure scanning finished */
TTL:
 {
  cl_object v3;
  v3 = ecl_make_fixnum(0);
  {
   cl_object v4args;
   v4args = ECL_CONS_CAR(CLV0);
   goto L5;
   if (Null(cl_LE(3, ECL_NIL, ECL_NIL, ECL_NIL))) { goto L3; }
   goto L4;
L5:;
   goto L7;
   if (!((ECL_NIL)==(ECL_NIL))) { goto L3; }
   goto L4;
L7:;
   goto L9;
   if (!((ECL_NIL)==(ecl_make_fixnum(0)))) { goto L3; }
   goto L4;
L9:;
   if (!(v4args==ECL_NIL)) { goto L3; }
L4:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L3:;
   if (!(v4args==ECL_NIL)) { goto L12; }
   cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[225], VV[226], ECL_SYM("CONTROL-STRING",1233), VV[252], ECL_SYM("OFFSET",1306), ecl_make_fixnum(6));
L12:;
   if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L15; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L15:;
   v3 = ecl_plus(v3,ecl_make_fixnum(1));
   {
    cl_object v5;
    v5 = v1;
    if (Null(v5)) { goto L21; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v1 = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L21:;
   }
   {
    cl_object v5;
    v5 = v4args;
    if (Null(v5)) { goto L30; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v4args = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L30:;
    T0 = v5;
   }
   si_write_object(T0, v2stream);
   goto L38;
   if (Null(cl_LE(3, ECL_NIL, ECL_NIL, ECL_NIL))) { goto L36; }
   goto L37;
L38:;
   goto L40;
   if (!((ECL_NIL)==(ECL_NIL))) { goto L36; }
   goto L37;
L40:;
   goto L42;
   if (!((ECL_NIL)==(ecl_make_fixnum(0)))) { goto L36; }
   goto L37;
L42:;
   if (!(v4args==ECL_NIL)) { goto L36; }
L37:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L36:;
   cl_write_string(2, VV[228], v2stream);
   cl_pprint_newline(2, VV[140], v2stream);
   cl_pprint_indent(3, VV[78], ecl_make_fixnum(0), v2stream);
   if (!(v4args==ECL_NIL)) { goto L48; }
   cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[225], VV[226], ECL_SYM("CONTROL-STRING",1233), VV[252], ECL_SYM("OFFSET",1306), ecl_make_fixnum(17));
L48:;
   if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L51; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L51:;
   v3 = ecl_plus(v3,ecl_make_fixnum(1));
   {
    cl_object v5;
    v5 = v1;
    if (Null(v5)) { goto L57; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v1 = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L57:;
   }
   {
    cl_object v5;
    v5 = v4args;
    if (Null(v5)) { goto L66; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v4args = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L66:;
    T0 = v5;
   }
   si_write_object(T0, v2stream);
L72:;
   if (!(v4args==ECL_NIL)) { goto L74; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L74:;
   cl_write_string(2, VV[228], v2stream);
   cl_pprint_newline(2, VV[137], v2stream);
   if (!(v4args==ECL_NIL)) { goto L78; }
   cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[225], VV[226], ECL_SYM("CONTROL-STRING",1233), VV[252], ECL_SYM("OFFSET",1306), ecl_make_fixnum(25));
L78:;
   if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L81; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L81:;
   v3 = ecl_plus(v3,ecl_make_fixnum(1));
   {
    cl_object v5;
    v5 = v1;
    if (Null(v5)) { goto L87; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v1 = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L87:;
   }
   {
    cl_object v5;
    v5 = v4args;
    if (Null(v5)) { goto L96; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v4args = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L96:;
    T0 = v5;
   }
   si_write_object(T0, v2stream);
   goto L72;
  }
 }
 }
}
/*      function definition for PPRINT-TYPECASE                       */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L153pprint_typecase(cl_narg narg, cl_object v1stream, cl_object v2list, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 {
  cl_object env1 = env0;
  env1 = ECL_NIL;
  CLV0 = env1 = CONS(v2list,env1);                /*  ARG             */
  {
   cl_object v3;
   v3 = ecl_make_cclosure_va((cl_objectfn)LC152__pprint_logical_block_1536,env1,Cblock,2);
   T0 = v3;
  }
  L77pprint_logical_block_helper(T0, ECL_CONS_CAR(CLV0), v1stream, VV[176], ECL_NIL, VV[177]);
 }
 value0 = ECL_NIL;
 cl_env_copy->nvalues = 1;
 return value0;
}
/*      closure PPRINT-LOGICAL-BLOCK-1536                             */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC152__pprint_logical_block_1536(cl_narg narg, cl_object v1, cl_object v2stream, ...)
{
 cl_object T0;
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 /* Scanning closure data ... */
 CLV0 = env0;                                     /*  ARG             */
 { /* ... closure scanning finished */
TTL:
 {
  cl_object v3;
  v3 = ecl_make_fixnum(0);
  {
   cl_object v4args;
   v4args = ECL_CONS_CAR(CLV0);
   goto L5;
   if (Null(cl_LE(3, ECL_NIL, ECL_NIL, ECL_NIL))) { goto L3; }
   goto L4;
L5:;
   goto L7;
   if (!((ECL_NIL)==(ECL_NIL))) { goto L3; }
   goto L4;
L7:;
   goto L9;
   if (!((ECL_NIL)==(ecl_make_fixnum(0)))) { goto L3; }
   goto L4;
L9:;
   if (!(v4args==ECL_NIL)) { goto L3; }
L4:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L3:;
   if (!(v4args==ECL_NIL)) { goto L12; }
   cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[225], VV[226], ECL_SYM("CONTROL-STRING",1233), VV[254], ECL_SYM("OFFSET",1306), ecl_make_fixnum(6));
L12:;
   if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L15; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L15:;
   v3 = ecl_plus(v3,ecl_make_fixnum(1));
   {
    cl_object v5;
    v5 = v1;
    if (Null(v5)) { goto L21; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v1 = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L21:;
   }
   {
    cl_object v5;
    v5 = v4args;
    if (Null(v5)) { goto L30; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v4args = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L30:;
    T0 = v5;
   }
   si_write_object(T0, v2stream);
   goto L38;
   if (Null(cl_LE(3, ECL_NIL, ECL_NIL, ECL_NIL))) { goto L36; }
   goto L37;
L38:;
   goto L40;
   if (!((ECL_NIL)==(ECL_NIL))) { goto L36; }
   goto L37;
L40:;
   goto L42;
   if (!((ECL_NIL)==(ecl_make_fixnum(0)))) { goto L36; }
   goto L37;
L42:;
   if (!(v4args==ECL_NIL)) { goto L36; }
L37:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L36:;
   cl_write_string(2, VV[228], v2stream);
   cl_pprint_indent(3, ECL_SYM("BLOCK",1224), ecl_make_fixnum(3), v2stream);
   cl_pprint_newline(2, VV[140], v2stream);
   if (!(v4args==ECL_NIL)) { goto L48; }
   cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[225], VV[226], ECL_SYM("CONTROL-STRING",1233), VV[254], ECL_SYM("OFFSET",1306), ecl_make_fixnum(17));
L48:;
   if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L51; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L51:;
   v3 = ecl_plus(v3,ecl_make_fixnum(1));
   {
    cl_object v5;
    v5 = v1;
    if (Null(v5)) { goto L57; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v1 = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L57:;
   }
   {
    cl_object v5;
    v5 = v4args;
    if (Null(v5)) { goto L66; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v4args = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L66:;
    T0 = v5;
   }
   si_write_object(T0, v2stream);
   cl_pprint_indent(3, ECL_SYM("BLOCK",1224), ecl_make_fixnum(1), v2stream);
L73:;
   if (!(v4args==ECL_NIL)) { goto L75; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L75:;
   cl_write_string(2, VV[228], v2stream);
   cl_pprint_newline(2, VV[137], v2stream);
   {
    cl_object env1 = env0;
    if (!(v4args==ECL_NIL)) { goto L79; }
    cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[225], VV[226], ECL_SYM("CONTROL-STRING",1233), VV[254], ECL_SYM("OFFSET",1306), ecl_make_fixnum(29));
L79:;
    if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L82; }
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
L82:;
    v3 = ecl_plus(v3,ecl_make_fixnum(1));
    {
     cl_object v5;
     v5 = v1;
     if (Null(v5)) { goto L88; }
     {
      cl_object v6;
      v6 = ECL_CONS_CDR(v5);
      v1 = v6;
      v5 = ECL_CONS_CAR(v5);
     }
L88:;
    }
    {
     cl_object v5;
     v5 = v4args;
     if (Null(v5)) { goto L97; }
     {
      cl_object v6;
      v6 = ECL_CONS_CDR(v5);
      v4args = v6;
      v5 = ECL_CONS_CAR(v5);
     }
L97:;
     T0 = v5;
    }
    CLV1 = env1 = CONS(T0,env1);                  /*  ARG             */
    {
     cl_object v5;
     v5 = ecl_make_cclosure_va((cl_objectfn)LC151__pprint_logical_block_1572,env1,Cblock,2);
     T0 = v5;
    }
    L77pprint_logical_block_helper(T0, ECL_CONS_CAR(CLV1), v2stream, VV[176], ECL_NIL, VV[177]);
   }
   goto L73;
  }
 }
 }
}
/*      closure PPRINT-LOGICAL-BLOCK-1572                             */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC151__pprint_logical_block_1572(cl_narg narg, cl_object v1, cl_object v2stream, ...)
{
 cl_object T0;
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 /* Scanning closure data ... */
 CLV1 = env0;                                     /*  ARG             */
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
TTL:
 {
  cl_object v3;
  v3 = ecl_make_fixnum(0);
  {
   cl_object v4args;
   v4args = ECL_CONS_CAR(CLV1);
   goto L5;
   if (Null(cl_LE(3, ECL_NIL, ECL_NIL, ECL_NIL))) { goto L3; }
   goto L4;
L5:;
   goto L7;
   if (!((ECL_NIL)==(ECL_NIL))) { goto L3; }
   goto L4;
L7:;
   goto L9;
   if (!((ECL_NIL)==(ecl_make_fixnum(0)))) { goto L3; }
   goto L4;
L9:;
   if (!(v4args==ECL_NIL)) { goto L3; }
L4:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L3:;
   if (!(v4args==ECL_NIL)) { goto L12; }
   cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[225], VV[226], ECL_SYM("CONTROL-STRING",1233), VV[254], ECL_SYM("OFFSET",1306), ecl_make_fixnum(33));
L12:;
   if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L15; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L15:;
   v3 = ecl_plus(v3,ecl_make_fixnum(1));
   {
    cl_object v5;
    v5 = v1;
    if (Null(v5)) { goto L21; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v1 = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L21:;
   }
   {
    cl_object v5;
    v5 = v4args;
    if (Null(v5)) { goto L30; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v4args = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L30:;
    T0 = v5;
   }
   si_write_object(T0, v2stream);
   goto L38;
   if (Null(cl_LE(3, ECL_NIL, ECL_NIL, ECL_NIL))) { goto L36; }
   goto L37;
L38:;
   goto L40;
   if (!((ECL_NIL)==(ECL_NIL))) { goto L36; }
   goto L37;
L40:;
   goto L42;
   if (!((ECL_NIL)==(ecl_make_fixnum(0)))) { goto L36; }
   goto L37;
L42:;
   if (!(v4args==ECL_NIL)) { goto L36; }
L37:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L36:;
L44:;
   if (!(v4args==ECL_NIL)) { goto L46; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L46:;
   cl_write_string(2, VV[228], v2stream);
   cl_pprint_newline(2, VV[137], v2stream);
   if (!(v4args==ECL_NIL)) { goto L50; }
   cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[225], VV[226], ECL_SYM("CONTROL-STRING",1233), VV[254], ECL_SYM("OFFSET",1306), ecl_make_fixnum(43));
L50:;
   if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L53; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L53:;
   v3 = ecl_plus(v3,ecl_make_fixnum(1));
   {
    cl_object v5;
    v5 = v1;
    if (Null(v5)) { goto L59; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v1 = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L59:;
   }
   {
    cl_object v5;
    v5 = v4args;
    if (Null(v5)) { goto L68; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v4args = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L68:;
    T0 = v5;
   }
   si_write_object(T0, v2stream);
   goto L44;
  }
 }
 }
}
/*      function definition for PPRINT-PROG                           */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L155pprint_prog(cl_narg narg, cl_object v1stream, cl_object v2list, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 {
  cl_object v3;
  v3 = ecl_make_cfun((cl_objectfn_fixed)LC154__pprint_logical_block_1602,ECL_NIL,Cblock,2);
  T0 = v3;
 }
 value0 = L77pprint_logical_block_helper(T0, v2list, v1stream, VV[176], ECL_NIL, VV[177]);
 return value0;
}
/*      local function PPRINT-LOGICAL-BLOCK-1602                      */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC154__pprint_logical_block_1602(cl_object v1, cl_object v2stream)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 {
  cl_object v3;
  v3 = ecl_make_fixnum(0);
  if (!(v1==ECL_NIL)) { goto L2; }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L2:;
  if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L5; }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L5:;
  v3 = ecl_plus(v3,ecl_make_fixnum(1));
  {
   cl_object v4;
   v4 = v1;
   if (Null(v4)) { goto L12; }
   {
    cl_object v5;
    v5 = ECL_CONS_CDR(v4);
    v1 = v5;
    v4 = ECL_CONS_CAR(v4);
   }
L12:;
   T0 = v4;
  }
  si_write_object(T0, v2stream);
  if (!(v1==ECL_NIL)) { goto L18; }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L18:;
  cl_write_char(2, CODE_CHAR(32), v2stream);
  cl_pprint_newline(2, VV[139], v2stream);
  if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L23; }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L23:;
  v3 = ecl_plus(v3,ecl_make_fixnum(1));
  {
   cl_object v4;
   v4 = v1;
   if (Null(v4)) { goto L30; }
   {
    cl_object v5;
    v5 = ECL_CONS_CDR(v4);
    v1 = v5;
    v4 = ECL_CONS_CAR(v4);
   }
L30:;
   T0 = v4;
  }
  cl_pprint_fill(2, v2stream, T0);
L36:;
  if (!(v1==ECL_NIL)) { goto L38; }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L38:;
  cl_write_char(2, CODE_CHAR(32), v2stream);
  {
   cl_object v4form_or_tag;
   if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L42; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L42:;
   v3 = ecl_plus(v3,ecl_make_fixnum(1));
   {
    cl_object v5;
    v5 = v1;
    if (Null(v5)) { goto L48; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v1 = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L48:;
    v4form_or_tag = v5;
   }
   {
    cl_fixnum v5;
    if (!(ECL_ATOM(v4form_or_tag))) { goto L56; }
    v5 = 0;
    goto L55;
L56:;
    v5 = 1;
L55:;
    cl_pprint_indent(3, ECL_SYM("BLOCK",1224), ecl_make_fixnum(v5), v2stream);
   }
   cl_pprint_newline(2, VV[137], v2stream);
   si_write_object(v4form_or_tag, v2stream);
  }
  goto L36;
 }
}
/*      function definition for PPRINT-FUNCTION-CALL                  */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object L157pprint_function_call(cl_narg narg, cl_object v1stream, cl_object v2list, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 {
  cl_object env1 = env0;
  env1 = ECL_NIL;
  CLV0 = env1 = CONS(v2list,env1);                /*  ARG             */
  {
   cl_object v3;
   v3 = ecl_make_cclosure_va((cl_objectfn)LC156__pprint_logical_block_1627,env1,Cblock,2);
   T0 = v3;
  }
  L77pprint_logical_block_helper(T0, ECL_CONS_CAR(CLV0), v1stream, VV[176], ECL_NIL, VV[177]);
 }
 value0 = ECL_NIL;
 cl_env_copy->nvalues = 1;
 return value0;
}
/*      closure PPRINT-LOGICAL-BLOCK-1627                             */
/*      optimize speed 3, debug 0, space 0, safety 0                  */
static cl_object LC156__pprint_logical_block_1627(cl_narg narg, cl_object v1, cl_object v2stream, ...)
{
 cl_object T0;
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 /* Scanning closure data ... */
 CLV0 = env0;                                     /*  ARG             */
 { /* ... closure scanning finished */
TTL:
 {
  cl_object v3;
  v3 = ecl_make_fixnum(0);
  {
   cl_object v4args;
   v4args = ECL_CONS_CAR(CLV0);
   goto L5;
   if (Null(cl_LE(3, ECL_NIL, ECL_NIL, ECL_NIL))) { goto L3; }
   goto L4;
L5:;
   goto L7;
   if (!((ECL_NIL)==(ECL_NIL))) { goto L3; }
   goto L4;
L7:;
   goto L9;
   if (!((ECL_NIL)==(ecl_make_fixnum(0)))) { goto L3; }
   goto L4;
L9:;
   if (!(v4args==ECL_NIL)) { goto L3; }
L4:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L3:;
   if (!(v4args==ECL_NIL)) { goto L12; }
   cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[225], VV[226], ECL_SYM("CONTROL-STRING",1233), VV[257], ECL_SYM("OFFSET",1306), ecl_make_fixnum(6));
L12:;
   if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L15; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L15:;
   v3 = ecl_plus(v3,ecl_make_fixnum(1));
   {
    cl_object v5;
    v5 = v1;
    if (Null(v5)) { goto L21; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v1 = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L21:;
   }
   {
    cl_object v5;
    v5 = v4args;
    if (Null(v5)) { goto L30; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v4args = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L30:;
    T0 = v5;
   }
   si_write_object(T0, v2stream);
   goto L38;
   if (Null(cl_LE(3, ECL_NIL, ECL_NIL, ECL_NIL))) { goto L36; }
   goto L37;
L38:;
   goto L40;
   if (!((ECL_NIL)==(ECL_NIL))) { goto L36; }
   goto L37;
L40:;
   goto L42;
   if (!((ECL_NIL)==(ecl_make_fixnum(0)))) { goto L36; }
   goto L37;
L42:;
   if (!(v4args==ECL_NIL)) { goto L36; }
L37:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L36:;
   cl_write_string(2, VV[228], v2stream);
   cl_pprint_newline(2, VV[140], v2stream);
   cl_pprint_indent(3, VV[78], ecl_make_fixnum(0), v2stream);
L47:;
   if (!(v4args==ECL_NIL)) { goto L49; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L49:;
   if (!(v4args==ECL_NIL)) { goto L52; }
   cl_error(7, ECL_SYM("FORMAT-ERROR",1078), VV[225], VV[226], ECL_SYM("CONTROL-STRING",1233), VV[257], ECL_SYM("OFFSET",1306), ecl_make_fixnum(20));
L52:;
   if ((L73pprint_pop_helper(v1, v3, v2stream))!=ECL_NIL) { goto L55; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L55:;
   v3 = ecl_plus(v3,ecl_make_fixnum(1));
   {
    cl_object v5;
    v5 = v1;
    if (Null(v5)) { goto L61; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v1 = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L61:;
   }
   {
    cl_object v5;
    v5 = v4args;
    if (Null(v5)) { goto L70; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     v4args = v6;
     v5 = ECL_CONS_CAR(v5);
    }
L70:;
    T0 = v5;
   }
   si_write_object(T0, v2stream);
   goto L78;
   if (Null(cl_LE(3, ECL_NIL, ECL_NIL, ECL_NIL))) { goto L76; }
   goto L77;
L78:;
   goto L80;
   if (!((ECL_NIL)==(ECL_NIL))) { goto L76; }
   goto L77;
L80:;
   goto L82;
   if (!((ECL_NIL)==(ecl_make_fixnum(0)))) { goto L76; }
   goto L77;
L82:;
   if (!(v4args==ECL_NIL)) { goto L76; }
L77:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L76:;
   cl_write_string(2, VV[228], v2stream);
   cl_pprint_newline(2, VV[137], v2stream);
   goto L47;
  }
 }
 }
}

#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/clos/pprint.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclq4e8WEb7_jvImqq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:LSP;PPRINT.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclq4e8WEb7_jvImqq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  (cl_env_copy->function=(ECL_SYM("MAPC",545)->symbol.gfdef))->cfun.entry(2, ECL_SYM("PROCLAIM",668), VVtemp[1]) /*  MAPC */;
  si_do_deftype(3, VV[0], VVtemp[2], VVtemp[3]);
  si_do_deftype(3, VV[1], VVtemp[4], ECL_SYM("FIXNUM",374));
  si_Xmake_constant(VV[2], ecl_make_fixnum(128));
  si_Xmake_constant(VV[3], ecl_make_fixnum(80));
 {
  cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC1__lambda4,ECL_NIL,Cblock,0);
   T0 = v1;
  }
  T1 = cl_listX(3, ECL_SYM("INITFUNCTION",999), T0, VVtemp[7]);
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC2__lambda5,ECL_NIL,Cblock,0);
   T2 = v1;
  }
  T3 = cl_listX(3, ECL_SYM("INITFUNCTION",999), T2, VVtemp[8]);
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC3__lambda6,ECL_NIL,Cblock,0);
   T4 = v1;
  }
  T5 = cl_listX(3, ECL_SYM("INITFUNCTION",999), T4, VVtemp[13]);
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC4__lambda7,ECL_NIL,Cblock,0);
   T6 = v1;
  }
  T7 = cl_listX(3, ECL_SYM("INITFUNCTION",999), T6, VVtemp[14]);
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC5__lambda8,ECL_NIL,Cblock,0);
   T8 = v1;
  }
  T9 = cl_listX(3, ECL_SYM("INITFUNCTION",999), T8, VVtemp[15]);
  T10 = cl_list(13, VVtemp[6], T1, T3, VVtemp[9], VVtemp[10], VVtemp[11], VVtemp[12], T5, T7, T9, VVtemp[16], VVtemp[17], VVtemp[18]);
  T11 = cl_list(2, VV[5], VVtemp[19]);
  clos_load_defclass(VV[4], VVtemp[5], T10, T11);
 }
  ecl_cmp_defun(VV[259]);                         /*  PRETTY-STREAM-P */
  ecl_cmp_defun(VV[260]);                         /*  MAKE-PRETTY-STREAM */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC8print_object,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[261])(5, ECL_SYM("PRINT-OBJECT",963), ECL_NIL, VVtemp[20], VVtemp[21], T0) /*  INSTALL-METHOD */;
 }
  (cl_env_copy->function=(ECL_SYM("MAPC",545)->symbol.gfdef))->cfun.entry(2, ECL_SYM("PROCLAIM",668), VVtemp[22]) /*  MAPC */;
  ecl_cmp_defun(VV[262]);                         /*  INDEX-POSN      */
  si_put_sysprop(VV[10], ECL_SYM("INLINE",436), VVtemp[23]);
  ecl_cmp_defun(VV[263]);                         /*  POSN-INDEX      */
  si_put_sysprop(VV[11], ECL_SYM("INLINE",436), VVtemp[24]);
  ecl_cmp_defun(VV[264]);                         /*  POSN-COLUMN     */
  si_put_sysprop(VV[12], ECL_SYM("INLINE",436), VVtemp[25]);
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC12gray_stream_write_char,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[261])(5, ECL_SYM("STREAM-WRITE-CHAR",1698), ECL_NIL, VVtemp[20], VVtemp[26], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC13gray_stream_force_output,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[261])(5, ECL_SYM("STREAM-FORCE-OUTPUT",1683), ECL_NIL, VVtemp[27], VVtemp[28], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC14gray_stream_clear_output,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[261])(5, ECL_SYM("STREAM-CLEAR-OUTPUT",1678), ECL_NIL, VVtemp[27], VVtemp[28], T0) /*  INSTALL-METHOD */;
 }
  (void)0; /* No entry created for PRETTY-OUT */
  (void)0; /* No entry created for PRETTY-SOUT */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  ecl_function_dispatch(cl_env_copy,VV[265])(15, VV[14], _ecl_static_0, ECL_NIL, ECL_NIL, VVtemp[29], VVtemp[30], VV[15], ECL_NIL, ECL_NIL, ECL_NIL, VVtemp[31], ecl_make_fixnum(6), ECL_NIL, ECL_NIL, VV[16]) /*  DEFINE-STRUCTURE */;
  VV[24]= cl_find_class(1, VV[14]);
  ecl_cmp_defun(VV[266]);                         /*  MAKE-LOGICAL-BLOCK */
  {
   cl_object v1package;
   v1package = cl_symbol_package(VV[26]);
   if (Null(v1package)) { goto L69; }
   if (Null(si_package_locked_p(v1package))) { goto L69; }
   if (!(ECL_SYM_VAL(cl_env_copy,ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L69; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[32], VVtemp[33], VVtemp[34], ECL_SYM("PACKAGE",1311), v1package);
  }
L69:;
  {
   cl_object volatile v2;
   v2 = ecl_make_cfun((cl_objectfn_fixed)LC18__lambda60,ECL_NIL,Cblock,2);
   T0 = v2;
  }
  si_put_sysprop(VV[26], VV[27], T0);
  {
   cl_object v2package;
   v2package = cl_symbol_package(VV[28]);
   if (Null(v2package)) { goto L77; }
   if (Null(si_package_locked_p(v2package))) { goto L77; }
   if (!(ECL_SYM_VAL(cl_env_copy,ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L77; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[32], VVtemp[33], VVtemp[35], ECL_SYM("PACKAGE",1311), v2package);
  }
L77:;
  {
   cl_object volatile v3;
   v3 = ecl_make_cfun((cl_objectfn_fixed)LC19__lambda64,ECL_NIL,Cblock,2);
   T0 = v3;
  }
  si_put_sysprop(VV[28], VV[27], T0);
  {
   cl_object v3package;
   v3package = cl_symbol_package(VV[29]);
   if (Null(v3package)) { goto L85; }
   if (Null(si_package_locked_p(v3package))) { goto L85; }
   if (!(ECL_SYM_VAL(cl_env_copy,ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L85; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[32], VVtemp[33], VVtemp[36], ECL_SYM("PACKAGE",1311), v3package);
  }
L85:;
  {
   cl_object volatile v4;
   v4 = ecl_make_cfun((cl_objectfn_fixed)LC20__lambda68,ECL_NIL,Cblock,2);
   T0 = v4;
  }
  si_put_sysprop(VV[29], VV[27], T0);
  {
   cl_object v4package;
   v4package = cl_symbol_package(VV[30]);
   if (Null(v4package)) { goto L93; }
   if (Null(si_package_locked_p(v4package))) { goto L93; }
   if (!(ECL_SYM_VAL(cl_env_copy,ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L93; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[32], VVtemp[33], VVtemp[37], ECL_SYM("PACKAGE",1311), v4package);
  }
L93:;
  {
   cl_object volatile v5;
   v5 = ecl_make_cfun((cl_objectfn_fixed)LC21__lambda72,ECL_NIL,Cblock,2);
   T0 = v5;
  }
  si_put_sysprop(VV[30], VV[27], T0);
  {
   cl_object v5package;
   v5package = cl_symbol_package(VV[31]);
   if (Null(v5package)) { goto L101; }
   if (Null(si_package_locked_p(v5package))) { goto L101; }
   if (!(ECL_SYM_VAL(cl_env_copy,ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L101; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[32], VVtemp[33], VVtemp[38], ECL_SYM("PACKAGE",1311), v5package);
  }
L101:;
  {
   cl_object volatile v6;
   v6 = ecl_make_cfun((cl_objectfn_fixed)LC22__lambda76,ECL_NIL,Cblock,2);
   T0 = v6;
  }
  si_put_sysprop(VV[31], VV[27], T0);
  {
   cl_object v6package;
   v6package = cl_symbol_package(VV[32]);
   if (Null(v6package)) { goto L109; }
   if (Null(si_package_locked_p(v6package))) { goto L109; }
   if (!(ECL_SYM_VAL(cl_env_copy,ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L109; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[32], VVtemp[33], VVtemp[39], ECL_SYM("PACKAGE",1311), v6package);
  }
L109:;
  {
   cl_object volatile v7;
   v7 = ecl_make_cfun((cl_objectfn_fixed)LC23__lambda80,ECL_NIL,Cblock,2);
   T0 = v7;
  }
  si_put_sysprop(VV[32], VV[27], T0);
 }
  (void)0; /* No entry created for REALLY-START-LOGICAL-BLOCK */
  (void)0; /* No entry created for SET-INDENTATION */
  (void)0; /* No entry created for REALLY-END-LOGICAL-BLOCK */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  ecl_function_dispatch(cl_env_copy,VV[265])(15, VV[39], _ecl_static_1, ECL_NIL, ECL_NIL, VVtemp[40], VVtemp[41], VV[40], ECL_NIL, ECL_NIL, ECL_NIL, VVtemp[42], ecl_make_fixnum(1), ECL_NIL, ECL_NIL, VV[41]) /*  DEFINE-STRUCTURE */;
  VV[42]= cl_find_class(1, VV[39]);
  ecl_cmp_defun(VV[268]);                         /*  MAKE-QUEUED-OP  */
  {
   cl_object v1package;
   v1package = cl_symbol_package(VV[44]);
   if (Null(v1package)) { goto L138; }
   if (Null(si_package_locked_p(v1package))) { goto L138; }
   if (!(ECL_SYM_VAL(cl_env_copy,ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L138; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[32], VVtemp[33], VVtemp[43], ECL_SYM("PACKAGE",1311), v1package);
  }
L138:;
  {
   cl_object volatile v2;
   v2 = ecl_make_cfun((cl_objectfn_fixed)LC28__lambda113,ECL_NIL,Cblock,2);
   T0 = v2;
  }
  si_put_sysprop(VV[44], VV[27], T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  ecl_function_dispatch(cl_env_copy,VV[265])(15, VV[45], _ecl_static_2, ECL_NIL, ECL_NIL, VVtemp[44], VVtemp[45], VV[46], VV[39], ECL_NIL, ECL_NIL, VVtemp[46], ecl_make_fixnum(3), ECL_NIL, ECL_NIL, VV[47]) /*  DEFINE-STRUCTURE */;
  VV[53]= cl_find_class(1, VV[45]);
  ecl_cmp_defun(VV[269]);                         /*  MAKE-SECTION-START */
  {
   cl_object v1package;
   v1package = cl_symbol_package(VV[55]);
   if (Null(v1package)) { goto L156; }
   if (Null(si_package_locked_p(v1package))) { goto L156; }
   if (!(ECL_SYM_VAL(cl_env_copy,ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L156; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[32], VVtemp[33], VVtemp[47], ECL_SYM("PACKAGE",1311), v1package);
  }
L156:;
  {
   cl_object volatile v2;
   v2 = ecl_make_cfun((cl_objectfn_fixed)LC30__lambda134,ECL_NIL,Cblock,2);
   T0 = v2;
  }
  si_put_sysprop(VV[55], VV[27], T0);
  {
   cl_object v2package;
   v2package = cl_symbol_package(VV[56]);
   if (Null(v2package)) { goto L164; }
   if (Null(si_package_locked_p(v2package))) { goto L164; }
   if (!(ECL_SYM_VAL(cl_env_copy,ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L164; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[32], VVtemp[33], VVtemp[48], ECL_SYM("PACKAGE",1311), v2package);
  }
L164:;
  {
   cl_object volatile v3;
   v3 = ecl_make_cfun((cl_objectfn_fixed)LC31__lambda138,ECL_NIL,Cblock,2);
   T0 = v3;
  }
  si_put_sysprop(VV[56], VV[27], T0);
  {
   cl_object v3package;
   v3package = cl_symbol_package(VV[57]);
   if (Null(v3package)) { goto L172; }
   if (Null(si_package_locked_p(v3package))) { goto L172; }
   if (!(ECL_SYM_VAL(cl_env_copy,ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L172; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[32], VVtemp[33], VVtemp[49], ECL_SYM("PACKAGE",1311), v3package);
  }
L172:;
  {
   cl_object volatile v4;
   v4 = ecl_make_cfun((cl_objectfn_fixed)LC32__lambda142,ECL_NIL,Cblock,2);
   T0 = v4;
  }
  si_put_sysprop(VV[57], VV[27], T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  ecl_function_dispatch(cl_env_copy,VV[265])(15, VV[48], _ecl_static_3, ECL_NIL, ECL_NIL, VVtemp[50], VVtemp[51], VV[58], VV[45], ECL_NIL, ECL_NIL, VVtemp[52], ecl_make_fixnum(4), ECL_NIL, ECL_NIL, VV[59]) /*  DEFINE-STRUCTURE */;
  VV[63]= cl_find_class(1, VV[48]);
  ecl_cmp_defun(VV[273]);                         /*  MAKE-NEWLINE    */
  {
   cl_object v1package;
   v1package = cl_symbol_package(VV[65]);
   if (Null(v1package)) { goto L189; }
   if (Null(si_package_locked_p(v1package))) { goto L189; }
   if (!(ECL_SYM_VAL(cl_env_copy,ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L189; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[32], VVtemp[33], VVtemp[53], ECL_SYM("PACKAGE",1311), v1package);
  }
L189:;
  {
   cl_object volatile v2;
   v2 = ecl_make_cfun((cl_objectfn_fixed)LC34__lambda152,ECL_NIL,Cblock,2);
   T0 = v2;
  }
  si_put_sysprop(VV[65], VV[27], T0);
  {
   cl_object v2package;
   v2package = cl_symbol_package(VV[66]);
   if (Null(v2package)) { goto L197; }
   if (Null(si_package_locked_p(v2package))) { goto L197; }
   if (!(ECL_SYM_VAL(cl_env_copy,ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L197; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[32], VVtemp[33], VVtemp[54], ECL_SYM("PACKAGE",1311), v2package);
  }
L197:;
  {
   cl_object volatile v3;
   v3 = ecl_make_cfun((cl_objectfn_fixed)LC35__lambda156,ECL_NIL,Cblock,2);
   T0 = v3;
  }
  si_put_sysprop(VV[66], VV[27], T0);
  {
   cl_object v3package;
   v3package = cl_symbol_package(VV[67]);
   if (Null(v3package)) { goto L205; }
   if (Null(si_package_locked_p(v3package))) { goto L205; }
   if (!(ECL_SYM_VAL(cl_env_copy,ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L205; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[32], VVtemp[33], VVtemp[55], ECL_SYM("PACKAGE",1311), v3package);
  }
L205:;
  {
   cl_object volatile v4;
   v4 = ecl_make_cfun((cl_objectfn_fixed)LC36__lambda160,ECL_NIL,Cblock,2);
   T0 = v4;
  }
  si_put_sysprop(VV[67], VV[27], T0);
  {
   cl_object v4package;
   v4package = cl_symbol_package(VV[68]);
   if (Null(v4package)) { goto L213; }
   if (Null(si_package_locked_p(v4package))) { goto L213; }
   if (!(ECL_SYM_VAL(cl_env_copy,ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L213; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[32], VVtemp[33], VVtemp[56], ECL_SYM("PACKAGE",1311), v4package);
  }
L213:;
  {
   cl_object volatile v5;
   v5 = ecl_make_cfun((cl_objectfn_fixed)LC37__lambda164,ECL_NIL,Cblock,2);
   T0 = v5;
  }
  si_put_sysprop(VV[68], VV[27], T0);
 }
  (void)0; /* No entry created for ENQUEUE-NEWLINE */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  ecl_function_dispatch(cl_env_copy,VV[265])(15, VV[73], _ecl_static_4, ECL_NIL, ECL_NIL, VVtemp[57], VVtemp[58], VV[74], VV[39], ECL_NIL, ECL_NIL, VVtemp[59], ecl_make_fixnum(3), ECL_NIL, ECL_NIL, VV[75]) /*  DEFINE-STRUCTURE */;
  VV[81]= cl_find_class(1, VV[73]);
  ecl_cmp_defun(VV[279]);                         /*  MAKE-INDENTATION */
  {
   cl_object v1package;
   v1package = cl_symbol_package(VV[83]);
   if (Null(v1package)) { goto L234; }
   if (Null(si_package_locked_p(v1package))) { goto L234; }
   if (!(ECL_SYM_VAL(cl_env_copy,ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L234; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[32], VVtemp[33], VVtemp[60], ECL_SYM("PACKAGE",1311), v1package);
  }
L234:;
  {
   cl_object volatile v2;
   v2 = ecl_make_cfun((cl_objectfn_fixed)LC40__lambda191,ECL_NIL,Cblock,2);
   T0 = v2;
  }
  si_put_sysprop(VV[83], VV[27], T0);
  {
   cl_object v2package;
   v2package = cl_symbol_package(VV[84]);
   if (Null(v2package)) { goto L242; }
   if (Null(si_package_locked_p(v2package))) { goto L242; }
   if (!(ECL_SYM_VAL(cl_env_copy,ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L242; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[32], VVtemp[33], VVtemp[61], ECL_SYM("PACKAGE",1311), v2package);
  }
L242:;
  {
   cl_object volatile v3;
   v3 = ecl_make_cfun((cl_objectfn_fixed)LC41__lambda195,ECL_NIL,Cblock,2);
   T0 = v3;
  }
  si_put_sysprop(VV[84], VV[27], T0);
  {
   cl_object v3package;
   v3package = cl_symbol_package(VV[85]);
   if (Null(v3package)) { goto L250; }
   if (Null(si_package_locked_p(v3package))) { goto L250; }
   if (!(ECL_SYM_VAL(cl_env_copy,ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L250; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[32], VVtemp[33], VVtemp[62], ECL_SYM("PACKAGE",1311), v3package);
  }
L250:;
  {
   cl_object volatile v4;
   v4 = ecl_make_cfun((cl_objectfn_fixed)LC42__lambda199,ECL_NIL,Cblock,2);
   T0 = v4;
  }
  si_put_sysprop(VV[85], VV[27], T0);
 }
  (void)0; /* No entry created for ENQUEUE-INDENT */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  ecl_function_dispatch(cl_env_copy,VV[265])(15, VV[87], _ecl_static_5, ECL_NIL, ECL_NIL, VVtemp[63], VVtemp[64], VV[88], VV[45], ECL_NIL, ECL_NIL, VVtemp[65], ecl_make_fixnum(6), ECL_NIL, ECL_NIL, VV[89]) /*  DEFINE-STRUCTURE */;
  VV[94]= cl_find_class(1, VV[87]);
  ecl_cmp_defun(VV[283]);                         /*  MAKE-BLOCK-START */
  {
   cl_object v1package;
   v1package = cl_symbol_package(VV[96]);
   if (Null(v1package)) { goto L271; }
   if (Null(si_package_locked_p(v1package))) { goto L271; }
   if (!(ECL_SYM_VAL(cl_env_copy,ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L271; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[32], VVtemp[33], VVtemp[66], ECL_SYM("PACKAGE",1311), v1package);
  }
L271:;
  {
   cl_object volatile v2;
   v2 = ecl_make_cfun((cl_objectfn_fixed)LC45__lambda228,ECL_NIL,Cblock,2);
   T0 = v2;
  }
  si_put_sysprop(VV[96], VV[27], T0);
  {
   cl_object v2package;
   v2package = cl_symbol_package(VV[97]);
   if (Null(v2package)) { goto L279; }
   if (Null(si_package_locked_p(v2package))) { goto L279; }
   if (!(ECL_SYM_VAL(cl_env_copy,ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L279; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[32], VVtemp[33], VVtemp[67], ECL_SYM("PACKAGE",1311), v2package);
  }
L279:;
  {
   cl_object volatile v3;
   v3 = ecl_make_cfun((cl_objectfn_fixed)LC46__lambda232,ECL_NIL,Cblock,2);
   T0 = v3;
  }
  si_put_sysprop(VV[97], VV[27], T0);
  {
   cl_object v3package;
   v3package = cl_symbol_package(VV[98]);
   if (Null(v3package)) { goto L287; }
   if (Null(si_package_locked_p(v3package))) { goto L287; }
   if (!(ECL_SYM_VAL(cl_env_copy,ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L287; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[32], VVtemp[33], VVtemp[68], ECL_SYM("PACKAGE",1311), v3package);
  }
L287:;
  {
   cl_object volatile v4;
   v4 = ecl_make_cfun((cl_objectfn_fixed)LC47__lambda236,ECL_NIL,Cblock,2);
   T0 = v4;
  }
  si_put_sysprop(VV[98], VV[27], T0);
  {
   cl_object v4package;
   v4package = cl_symbol_package(VV[99]);
   if (Null(v4package)) { goto L295; }
   if (Null(si_package_locked_p(v4package))) { goto L295; }
   if (!(ECL_SYM_VAL(cl_env_copy,ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L295; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[32], VVtemp[33], VVtemp[69], ECL_SYM("PACKAGE",1311), v4package);
  }
L295:;
  {
   cl_object volatile v5;
   v5 = ecl_make_cfun((cl_objectfn_fixed)LC48__lambda240,ECL_NIL,Cblock,2);
   T0 = v5;
  }
  si_put_sysprop(VV[99], VV[27], T0);
  {
   cl_object v5package;
   v5package = cl_symbol_package(VV[100]);
   if (Null(v5package)) { goto L303; }
   if (Null(si_package_locked_p(v5package))) { goto L303; }
   if (!(ECL_SYM_VAL(cl_env_copy,ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L303; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[32], VVtemp[33], VVtemp[70], ECL_SYM("PACKAGE",1311), v5package);
  }
L303:;
  {
   cl_object volatile v6;
   v6 = ecl_make_cfun((cl_objectfn_fixed)LC49__lambda244,ECL_NIL,Cblock,2);
   T0 = v6;
  }
  si_put_sysprop(VV[100], VV[27], T0);
  {
   cl_object v6package;
   v6package = cl_symbol_package(VV[101]);
   if (Null(v6package)) { goto L311; }
   if (Null(si_package_locked_p(v6package))) { goto L311; }
   if (!(ECL_SYM_VAL(cl_env_copy,ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L311; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[32], VVtemp[33], VVtemp[71], ECL_SYM("PACKAGE",1311), v6package);
  }
L311:;
  {
   cl_object volatile v7;
   v7 = ecl_make_cfun((cl_objectfn_fixed)LC50__lambda248,ECL_NIL,Cblock,2);
   T0 = v7;
  }
  si_put_sysprop(VV[101], VV[27], T0);
 }
  (void)0; /* No entry created for START-LOGICAL-BLOCK */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  ecl_function_dispatch(cl_env_copy,VV[265])(15, VV[49], _ecl_static_6, ECL_NIL, ECL_NIL, VVtemp[72], VVtemp[73], VV[104], VV[39], ECL_NIL, ECL_NIL, VVtemp[74], ecl_make_fixnum(2), ECL_NIL, ECL_NIL, VV[105]) /*  DEFINE-STRUCTURE */;
  VV[106]= cl_find_class(1, VV[49]);
  ecl_cmp_defun(VV[290]);                         /*  MAKE-BLOCK-END  */
  {
   cl_object v1package;
   v1package = cl_symbol_package(VV[108]);
   if (Null(v1package)) { goto L332; }
   if (Null(si_package_locked_p(v1package))) { goto L332; }
   if (!(ECL_SYM_VAL(cl_env_copy,ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L332; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[32], VVtemp[33], VVtemp[75], ECL_SYM("PACKAGE",1311), v1package);
  }
L332:;
  {
   cl_object volatile v2;
   v2 = ecl_make_cfun((cl_objectfn_fixed)LC53__lambda273,ECL_NIL,Cblock,2);
   T0 = v2;
  }
  si_put_sysprop(VV[108], VV[27], T0);
  {
   cl_object v2package;
   v2package = cl_symbol_package(VV[109]);
   if (Null(v2package)) { goto L340; }
   if (Null(si_package_locked_p(v2package))) { goto L340; }
   if (!(ECL_SYM_VAL(cl_env_copy,ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L340; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[32], VVtemp[33], VVtemp[76], ECL_SYM("PACKAGE",1311), v2package);
  }
L340:;
  {
   cl_object volatile v3;
   v3 = ecl_make_cfun((cl_objectfn_fixed)LC54__lambda277,ECL_NIL,Cblock,2);
   T0 = v3;
  }
  si_put_sysprop(VV[109], VV[27], T0);
 }
  (void)0; /* No entry created for END-LOGICAL-BLOCK */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  ecl_function_dispatch(cl_env_copy,VV[265])(15, VV[110], _ecl_static_7, ECL_NIL, ECL_NIL, VVtemp[77], VVtemp[78], VV[111], VV[39], ECL_NIL, ECL_NIL, VVtemp[79], ecl_make_fixnum(5), ECL_NIL, ECL_NIL, VV[112]) /*  DEFINE-STRUCTURE */;
  VV[120]= cl_find_class(1, VV[110]);
  ecl_cmp_defun(VV[293]);                         /*  MAKE-TAB        */
  {
   cl_object v1package;
   v1package = cl_symbol_package(VV[122]);
   if (Null(v1package)) { goto L361; }
   if (Null(si_package_locked_p(v1package))) { goto L361; }
   if (!(ECL_SYM_VAL(cl_env_copy,ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L361; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[32], VVtemp[33], VVtemp[80], ECL_SYM("PACKAGE",1311), v1package);
  }
L361:;
  {
   cl_object volatile v2;
   v2 = ecl_make_cfun((cl_objectfn_fixed)LC57__lambda319,ECL_NIL,Cblock,2);
   T0 = v2;
  }
  si_put_sysprop(VV[122], VV[27], T0);
  {
   cl_object v2package;
   v2package = cl_symbol_package(VV[123]);
   if (Null(v2package)) { goto L369; }
   if (Null(si_package_locked_p(v2package))) { goto L369; }
   if (!(ECL_SYM_VAL(cl_env_copy,ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L369; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[32], VVtemp[33], VVtemp[81], ECL_SYM("PACKAGE",1311), v2package);
  }
L369:;
  {
   cl_object volatile v3;
   v3 = ecl_make_cfun((cl_objectfn_fixed)LC58__lambda323,ECL_NIL,Cblock,2);
   T0 = v3;
  }
  si_put_sysprop(VV[123], VV[27], T0);
  {
   cl_object v3package;
   v3package = cl_symbol_package(VV[124]);
   if (Null(v3package)) { goto L377; }
   if (Null(si_package_locked_p(v3package))) { goto L377; }
   if (!(ECL_SYM_VAL(cl_env_copy,ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L377; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[32], VVtemp[33], VVtemp[82], ECL_SYM("PACKAGE",1311), v3package);
  }
L377:;
  {
   cl_object volatile v4;
   v4 = ecl_make_cfun((cl_objectfn_fixed)LC59__lambda327,ECL_NIL,Cblock,2);
   T0 = v4;
  }
  si_put_sysprop(VV[124], VV[27], T0);
  {
   cl_object v4package;
   v4package = cl_symbol_package(VV[125]);
   if (Null(v4package)) { goto L385; }
   if (Null(si_package_locked_p(v4package))) { goto L385; }
   if (!(ECL_SYM_VAL(cl_env_copy,ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L385; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[32], VVtemp[33], VVtemp[83], ECL_SYM("PACKAGE",1311), v4package);
  }
L385:;
  {
   cl_object volatile v5;
   v5 = ecl_make_cfun((cl_objectfn_fixed)LC60__lambda331,ECL_NIL,Cblock,2);
   T0 = v5;
  }
  si_put_sysprop(VV[125], VV[27], T0);
  {
   cl_object v5package;
   v5package = cl_symbol_package(VV[126]);
   if (Null(v5package)) { goto L393; }
   if (Null(si_package_locked_p(v5package))) { goto L393; }
   if (!(ECL_SYM_VAL(cl_env_copy,ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L393; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[32], VVtemp[33], VVtemp[84], ECL_SYM("PACKAGE",1311), v5package);
  }
L393:;
  {
   cl_object volatile v6;
   v6 = ecl_make_cfun((cl_objectfn_fixed)LC61__lambda335,ECL_NIL,Cblock,2);
   T0 = v6;
  }
  si_put_sysprop(VV[126], VV[27], T0);
 }
  (void)0; /* No entry created for ENQUEUE-TAB */
  (void)0; /* No entry created for COMPUTE-TAB-SIZE */
  (void)0; /* No entry created for INDEX-COLUMN */
  (void)0; /* No entry created for EXPAND-TABS */
  (void)0; /* No entry created for ASSURE-SPACE-IN-BUFFER */
  (void)0; /* No entry created for MAYBE-OUTPUT */
  (void)0; /* No entry created for MISERING-P */
  (void)0; /* No entry created for FITS-ON-LINE-P */
  (void)0; /* No entry created for OUTPUT-LINE */
  (void)0; /* No entry created for OUTPUT-PARTIAL-LINE */
  (void)0; /* No entry created for FORCE-PRETTY-OUTPUT */
  ecl_cmp_defun(VV[299]);                         /*  PPRINT-POP-HELPER */
  (void)0; /* No entry created for CHECK-PRINT-LEVEL */
  (void)0; /* No entry created for DO-PPRINT-LOGICAL-BLOCK */
  ecl_cmp_defun(VV[300]);                         /*  PPRINT-LOGICAL-BLOCK-HELPER */
  ecl_cmp_defmacro(VV[301]);                      /*  PPRINT-LOGICAL-BLOCK */
  ecl_cmp_defmacro(VV[305]);                      /*  PPRINT-EXIT-IF-LIST-EXHAUSTED */
  ecl_cmp_defmacro(VV[307]);                      /*  PPRINT-POP      */
  (void)0; /* No entry created for PPRINT-NEWLINE */
  (void)0; /* No entry created for PPRINT-INDENT */
  (void)0; /* No entry created for PPRINT-TAB */
  (void)0; /* No entry created for PPRINT-FILL */
  (void)0; /* No entry created for PPRINT-LINEAR */
  (void)0; /* No entry created for PPRINT-TABULAR */
  si_Xmake_special(VV[179]);
  si_Xmake_special(VV[180]);
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  ecl_function_dispatch(cl_env_copy,VV[265])(15, VV[181], _ecl_static_8, ECL_NIL, ECL_NIL, VVtemp[85], VVtemp[86], VV[182], ECL_NIL, VV[183], ECL_NIL, VVtemp[87], ecl_make_fixnum(4), ECL_NIL, ECL_NIL, VV[184]) /*  DEFINE-STRUCTURE */;
  VV[188]= cl_find_class(1, VV[181]);
  ecl_cmp_defun(VV[308]);                         /*  MAKE-PPRINT-DISPATCH-ENTRY */
  {
   cl_object v1package;
   v1package = cl_symbol_package(VV[190]);
   if (Null(v1package)) { goto L508; }
   if (Null(si_package_locked_p(v1package))) { goto L508; }
   if (!(ECL_SYM_VAL(cl_env_copy,ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L508; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[32], VVtemp[33], VVtemp[88], ECL_SYM("PACKAGE",1311), v1package);
  }
L508:;
  {
   cl_object volatile v2;
   v2 = ecl_make_cfun((cl_objectfn_fixed)LC85__lambda646,ECL_NIL,Cblock,2);
   T0 = v2;
  }
  si_put_sysprop(VV[190], VV[27], T0);
  {
   cl_object v2package;
   v2package = cl_symbol_package(VV[191]);
   if (Null(v2package)) { goto L516; }
   if (Null(si_package_locked_p(v2package))) { goto L516; }
   if (!(ECL_SYM_VAL(cl_env_copy,ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L516; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[32], VVtemp[33], VVtemp[89], ECL_SYM("PACKAGE",1311), v2package);
  }
L516:;
  {
   cl_object volatile v3;
   v3 = ecl_make_cfun((cl_objectfn_fixed)LC86__lambda650,ECL_NIL,Cblock,2);
   T0 = v3;
  }
  si_put_sysprop(VV[191], VV[27], T0);
  {
   cl_object v3package;
   v3package = cl_symbol_package(VV[192]);
   if (Null(v3package)) { goto L524; }
   if (Null(si_package_locked_p(v3package))) { goto L524; }
   if (!(ECL_SYM_VAL(cl_env_copy,ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L524; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[32], VVtemp[33], VVtemp[90], ECL_SYM("PACKAGE",1311), v3package);
  }
L524:;
  {
   cl_object volatile v4;
   v4 = ecl_make_cfun((cl_objectfn_fixed)LC87__lambda654,ECL_NIL,Cblock,2);
   T0 = v4;
  }
  si_put_sysprop(VV[192], VV[27], T0);
  {
   cl_object v4package;
   v4package = cl_symbol_package(VV[193]);
   if (Null(v4package)) { goto L532; }
   if (Null(si_package_locked_p(v4package))) { goto L532; }
   if (!(ECL_SYM_VAL(cl_env_copy,ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L532; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[32], VVtemp[33], VVtemp[91], ECL_SYM("PACKAGE",1311), v4package);
  }
L532:;
  {
   cl_object volatile v5;
   v5 = ecl_make_cfun((cl_objectfn_fixed)LC88__lambda658,ECL_NIL,Cblock,2);
   T0 = v5;
  }
  si_put_sysprop(VV[193], VV[27], T0);
 }
  ecl_cmp_defun(VV[313]);                         /*  %PRINT-PPRINT-DISPATCH-ENTRY */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  ecl_function_dispatch(cl_env_copy,VV[265])(15, VV[195], _ecl_static_9, ECL_NIL, ECL_NIL, VVtemp[92], VVtemp[93], VV[196], ECL_NIL, VV[197], ECL_NIL, VVtemp[94], ecl_make_fixnum(3), ECL_NIL, ECL_NIL, VV[198]) /*  DEFINE-STRUCTURE */;
  VV[200]= cl_find_class(1, VV[195]);
  ecl_cmp_defun(VV[314]);                         /*  MAKE-PPRINT-DISPATCH-TABLE */
  {
   cl_object v1package;
   v1package = cl_symbol_package(VV[202]);
   if (Null(v1package)) { goto L553; }
   if (Null(si_package_locked_p(v1package))) { goto L553; }
   if (!(ECL_SYM_VAL(cl_env_copy,ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L553; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[32], VVtemp[33], VVtemp[95], ECL_SYM("PACKAGE",1311), v1package);
  }
L553:;
  {
   cl_object volatile v2;
   v2 = ecl_make_cfun((cl_objectfn_fixed)LC92__lambda662,ECL_NIL,Cblock,2);
   T0 = v2;
  }
  si_put_sysprop(VV[202], VV[27], T0);
  {
   cl_object v2package;
   v2package = cl_symbol_package(VV[203]);
   if (Null(v2package)) { goto L561; }
   if (Null(si_package_locked_p(v2package))) { goto L561; }
   if (!(ECL_SYM_VAL(cl_env_copy,ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L561; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[32], VVtemp[33], VVtemp[96], ECL_SYM("PACKAGE",1311), v2package);
  }
L561:;
  {
   cl_object volatile v3;
   v3 = ecl_make_cfun((cl_objectfn_fixed)LC93__lambda666,ECL_NIL,Cblock,2);
   T0 = v3;
  }
  si_put_sysprop(VV[203], VV[27], T0);
  {
   cl_object v3package;
   v3package = cl_symbol_package(VV[204]);
   if (Null(v3package)) { goto L569; }
   if (Null(si_package_locked_p(v3package))) { goto L569; }
   if (!(ECL_SYM_VAL(cl_env_copy,ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L569; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[32], VVtemp[33], VVtemp[97], ECL_SYM("PACKAGE",1311), v3package);
  }
L569:;
  {
   cl_object volatile v4;
   v4 = ecl_make_cfun((cl_objectfn_fixed)LC94__lambda670,ECL_NIL,Cblock,2);
   T0 = v4;
  }
  si_put_sysprop(VV[204], VV[27], T0);
 }
  ecl_cmp_defun(VV[318]);                         /*  %PRINT-PPRINT-DISPATCH-TABLE */
  (void)0; /* No entry created for CONS-TYPE-SPECIFIER-P */
  (void)0; /* No entry created for ENTRY< */
  (void)0; /* No entry created for COPY-PPRINT-DISPATCH */
  ecl_cmp_defun(VV[319]);                         /*  DEFAULT-PPRINT-DISPATCH */
  (void)0; /* No entry created for PPRINT-DISPATCH */
  (void)0; /* No entry created for SET-PPRINT-DISPATCH */
  ecl_cmp_defun(VV[320]);                         /*  PPRINT-ARRAY    */
  ecl_cmp_defun(VV[321]);                         /*  PPRINT-VECTOR   */
  (void)0; /* No entry created for PPRINT-ARRAY-CONTENTS */
  (void)0; /* No entry created for PPRINT-MULTI-DIM-ARRAY */
  (void)0; /* No entry created for PPRINT-RAW-ARRAY */
  ecl_cmp_defun(VV[322]);                         /*  PPRINT-LAMBDA-LIST */
  ecl_cmp_defun(VV[323]);                         /*  PPRINT-LAMBDA   */
  ecl_cmp_defun(VV[324]);                         /*  PPRINT-BLOCK    */
  ecl_cmp_defun(VV[325]);                         /*  PPRINT-FLET     */
  ecl_cmp_defun(VV[326]);                         /*  PPRINT-LET      */
  ecl_cmp_defun(VV[327]);                         /*  PPRINT-PROGN    */
  ecl_cmp_defun(VV[328]);                         /*  PPRINT-PROGV    */
  ecl_cmp_defun(VV[329]);                         /*  PPRINT-QUOTE    */
  ecl_cmp_defun(VV[330]);                         /*  PPRINT-SETQ     */
  ecl_cmp_defun(VV[331]);                         /*  PPRINT-TAGBODY  */
  ecl_cmp_defun(VV[332]);                         /*  PPRINT-CASE     */
  ecl_cmp_defun(VV[333]);                         /*  PPRINT-DEFUN    */
  ecl_cmp_defun(VV[334]);                         /*  PPRINT-DESTRUCTURING-BIND */
  ecl_cmp_defun(VV[335]);                         /*  PPRINT-DO       */
  ecl_cmp_defun(VV[336]);                         /*  PPRINT-DOLIST   */
  ecl_cmp_defun(VV[337]);                         /*  PPRINT-TYPECASE */
  ecl_cmp_defun(VV[338]);                         /*  PPRINT-PROG     */
  ecl_cmp_defun(VV[339]);                         /*  PPRINT-FUNCTION-CALL */
 {
  cl_object T0, T1, T2, T3, T4;
  cl_object volatile env0 = ECL_NIL;
  T0 = L91make_pprint_dispatch_table(0);
  ecl_bds_bind(cl_env_copy,ECL_SYM("*PRINT-PPRINT-DISPATCH*",56),T0); /*  *PRINT-PPRINT-DISPATCH* */
  T0 = (VV[212]->symbol.gfdef);
  cl_set_pprint_dispatch(2, ECL_SYM("ARRAY",98), T0);
  T0 = (VV[258]->symbol.gfdef);
  cl_set_pprint_dispatch(3, VVtemp[98], T0, ecl_make_fixnum(-1));
  T0 = (ECL_SYM("PPRINT-FILL",652)->symbol.gfdef);
  cl_set_pprint_dispatch(3, ECL_SYM("CONS",253), T0, ecl_make_fixnum(-2));
  {
   cl_object v1;
   v1 = VVtemp[99];
   goto L710;
L709:;
   {
    cl_object v2magic_form;
    v2magic_form = _ecl_car(v1);
    T0 = _ecl_car(v2magic_form);
    T1 = cl_list(2, ECL_SYM("EQL",336), T0);
    T2 = cl_list(2, ECL_SYM("CONS",253), T1);
    T3 = _ecl_cadr(v2magic_form);
    T4 = cl_symbol_function(T3);
    cl_set_pprint_dispatch(2, T2, T4);
   }
   v1 = _ecl_cdr(v1);
L710:;
   if (Null(v1)) { goto L717; }
   goto L709;
L717:;
  }
  ECL_SETQ(cl_env_copy,VV[180],ECL_SYM_VAL(cl_env_copy,ECL_SYM("*PRINT-PPRINT-DISPATCH*",56)));
  T0 = ECL_SYM_VAL(cl_env_copy,VV[180]);
  ecl_bds_unwind1(cl_env_copy);
  ECL_SETQ(cl_env_copy,ECL_SYM("*PRINT-PPRINT-DISPATCH*",56),cl_copy_pprint_dispatch(1, ECL_NIL));
  ECL_SETQ(cl_env_copy,VV[179],ECL_SYM_VAL(cl_env_copy,VV[180]));
  {
   cl_object v1;
   v1 = ECL_SYM_VAL(cl_env_copy,VV[179]);
   {
    cl_object v2;
    v2 = ECL_T;
    {
     cl_object v3;
     v3 = v1;
     (v3)->instance.slots[0]=v2;
    }
   }
  }
  {
   cl_object v4;
   v4 = _ecl_cdr(ECL_SYM_VAL(cl_env_copy,ECL_SYM("+IO-SYNTAX-PROGV-LIST+",1777)));
   {
    cl_object v5;
    v5 = ECL_SYM_VAL(cl_env_copy,VV[179]);
    (ECL_CONS_CAR(v4)=v5,v4);
   }
  }
  {
   cl_object v6;
   v6 = _ecl_cdr(ECL_SYM_VAL(cl_env_copy,ECL_SYM("+ECL-SYNTAX-PROGV-LIST+",1778)));
   {
    cl_object v7;
    v7 = ECL_SYM_VAL(cl_env_copy,VV[179]);
    (ECL_CONS_CAR(v6)=v7,v6);
   }
  }
  cl_set(ECL_SYM("*PRINT-PRETTY*",57),ECL_T);
 }
}
