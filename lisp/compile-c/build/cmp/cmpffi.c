/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CMP;CMPFFI.LSP                                    */
#include <ecl/ecl-cmp.h>
#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/cmp/cmpffi.eclh"
/*      function definition for REP-TYPE-RECORD-UNSAFE                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L1rep_type_record_unsafe(cl_object v1rep_type)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,VV[133])(1, ecl_symbol_value(VV[0])) /*  MACHINE-REP-TYPE-HASH */;
  value0 = cl_gethash(2, v1rep_type, T0);
  return value0;
 }
}
/*      function definition for REP-TYPE-RECORD                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L2rep_type_record(cl_object v1rep_type)
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
   T0 = ecl_function_dispatch(cl_env_copy,VV[133])(1, ecl_symbol_value(VV[0])) /*  MACHINE-REP-TYPE-HASH */;
   v2record = ecl_gethash_safe(v1rep_type,T0,ECL_NIL);
   if ((v2record)!=ECL_NIL) { goto L2; }
   ecl_function_dispatch(cl_env_copy,VV[135])(2, VV[2], v1rep_type) /*  CMPERR */;
L2:;
   value0 = v2record;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for REP-TYPE->LISP-TYPE                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L3rep_type__lisp_type(cl_object v1name)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2output;
   v2output = L1rep_type_record_unsafe(v1name);
   if (Null(v2output)) { goto L2; }
   value0 = ecl_function_dispatch(cl_env_copy,VV[137])(1, v2output) /*  REP-TYPE-LISP-TYPE */;
   return value0;
L2:;
   if (Null(L12lisp_type_p(v1name))) { goto L4; }
   value0 = v1name;
   cl_env_copy->nvalues = 1;
   return value0;
L4:;
   value0 = cl_error(2, VV[4], v1name);
   return value0;
  }
 }
}
/*      function definition for LISP-TYPE->REP-TYPE                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L4lisp_type__rep_type(cl_object v1type)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(v1type==ECL_NIL)) { goto L1; }
  value0 = ECL_SYM("OBJECT",1305);
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  {
   cl_object v2;
   {
    cl_object v3r;
    v3r = L1rep_type_record_unsafe(v1type);
    if (Null(v3r)) { goto L6; }
    v2 = ecl_function_dispatch(cl_env_copy,VV[139])(1, v3r) /*  REP-TYPE-NAME */;
    goto L3;
L6:;
    v2 = ECL_NIL;
    goto L3;
   }
L3:;
   if (Null(v2)) { goto L8; }
   value0 = v2;
   cl_env_copy->nvalues = 1;
   return value0;
L8:;
   {
    cl_object v3;
    v3 = ecl_function_dispatch(cl_env_copy,VV[140])(1, ecl_symbol_value(VV[0])) /*  MACHINE-SORTED-TYPES */;
    goto L13;
L12:;
    {
     cl_object v4record;
     v4record = ecl_car(v3);
     T0 = ecl_function_dispatch(cl_env_copy,VV[137])(1, v4record) /*  REP-TYPE-LISP-TYPE */;
     if (Null(cl_subtypep(2, v1type, T0))) { goto L17; }
     value0 = ecl_function_dispatch(cl_env_copy,VV[139])(1, v4record) /*  REP-TYPE-NAME */;
     return value0;
L17:;
    }
    v3 = ecl_cdr(v3);
L13:;
    if (Null(v3)) { goto L21; }
    goto L12;
L21:;
    value0 = ECL_SYM("OBJECT",1305);
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      function definition for C-NUMBER-REP-TYPE-P                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L5c_number_rep_type_p(cl_object v1rep_type)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2r;
   v2r = L1rep_type_record_unsafe(v1rep_type);
   if (Null(v2r)) { goto L3; }
   value0 = ecl_function_dispatch(cl_env_copy,VV[142])(1, v2r) /*  REP-TYPE-NUMBERP */;
   return value0;
L3:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for C-INTEGER-REP-TYPE-P                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L6c_integer_rep_type_p(cl_object v1rep_type)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2r;
   v2r = L1rep_type_record_unsafe(v1rep_type);
   if (Null(v2r)) { goto L3; }
   value0 = ecl_function_dispatch(cl_env_copy,VV[144])(1, v2r) /*  REP-TYPE-INTEGERP */;
   return value0;
L3:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for C-INTEGER-REP-TYPE-BITS               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L7c_integer_rep_type_bits(cl_object v1rep_type)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2r;
   v2r = L1rep_type_record_unsafe(v1rep_type);
   if (Null(v2r)) { goto L3; }
   value0 = ecl_function_dispatch(cl_env_copy,VV[146])(1, v2r) /*  REP-TYPE-BITS */;
   return value0;
L3:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for C-NUMBER-TYPE-P                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L8c_number_type_p(cl_object v1type)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = L4lisp_type__rep_type(v1type);
  value0 = L5c_number_rep_type_p(T0);
  return value0;
 }
}
/*      function definition for C-INTEGER-TYPE-P                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L9c_integer_type_p(cl_object v1type)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = L4lisp_type__rep_type(v1type);
  value0 = L6c_integer_rep_type_p(T0);
  return value0;
 }
}
/*      function definition for C-INTEGER-TYPE-BITS                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L10c_integer_type_bits(cl_object v1type)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = L4lisp_type__rep_type(v1type);
  value0 = ecl_function_dispatch(cl_env_copy,VV[150])(1, T0) /*  C-NUMBER-REP-TYPE-BITS */;
  return value0;
 }
}
/*      function definition for REP-TYPE->C-NAME                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L11rep_type__c_name(cl_object v1type)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = L2rep_type_record(v1type);
  value0 = ecl_function_dispatch(cl_env_copy,VV[152])(1, T0) /*  REP-TYPE-C-NAME */;
  return value0;
 }
}
/*      function definition for LISP-TYPE-P                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L12lisp_type_p(cl_object v1type)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_subtypep(2, v1type, ECL_T);
  return value0;
 }
}
/*      function definition for WT-TO-OBJECT-CONVERSION               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L13wt_to_object_conversion(cl_object v1loc_rep_type, cl_object v2loc)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ECL_CONSP(v2loc))) { goto L1; }
  T0 = ecl_car(v2loc);
  if (Null(ecl_memql(T0,VV[15]))) { goto L1; }
  T0 = ecl_caddr(v2loc);
  ecl_function_dispatch(cl_env_copy,VV[155])(1, T0) /*  WT            */;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  {
   cl_object v3record;
   v3record = L2rep_type_record(v1loc_rep_type);
   if ((v3record)!=ECL_NIL) { goto L6; }
   ecl_function_dispatch(cl_env_copy,VV[135])(2, VV[16], v1loc_rep_type) /*  CMPERR */;
L6:;
   T0 = ecl_function_dispatch(cl_env_copy,VV[156])(1, v3record) /*  REP-TYPE-TO-LISP */;
   value0 = ecl_function_dispatch(cl_env_copy,VV[155])(4, T0, VV[17], v2loc, VV[18]) /*  WT */;
   return value0;
  }
 }
}
/*      function definition for WT-FROM-OBJECT-CONVERSION             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L14wt_from_object_conversion(cl_object v1dest_type, cl_object v2loc_type, cl_object v3rep_type, cl_object v4loc)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v5record;
   cl_object v6coercer;
   v5record = L2rep_type_record(v3rep_type);
   if (Null(v5record)) { goto L4; }
   v6coercer = ecl_function_dispatch(cl_env_copy,VV[158])(1, v5record) /*  REP-TYPE-FROM-LISP */;
   goto L2;
L4:;
   v6coercer = ECL_NIL;
   goto L2;
L2:;
   if ((v6coercer)!=ECL_NIL) { goto L6; }
   ecl_function_dispatch(cl_env_copy,VV[135])(2, VV[20], v3rep_type) /*  CMPERR */;
L6:;
   if ((ecl_function_dispatch(cl_env_copy,VV[159])(0) /*  POLICY-ASSUME-NO-ERRORS */)!=ECL_NIL) { goto L11; }
   if (Null(cl_subtypep(2, v2loc_type, v1dest_type))) { goto L9; }
   goto L10;
L11:;
L10:;
   T0 = ecl_function_dispatch(cl_env_copy,VV[160])(1, v5record) /*  REP-TYPE-FROM-LISP-UNSAFE */;
   goto L8;
L9:;
   T0 = v6coercer;
L8:;
   value0 = ecl_function_dispatch(cl_env_copy,VV[155])(4, T0, VV[17], v4loc, VV[18]) /*  WT */;
   return value0;
  }
 }
}
/*      function definition for LOC-MOVABLE-P                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L15loc_movable_p(cl_object v1loc)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ECL_ATOM(v1loc))) { goto L1; }
  value0 = ECL_T;
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  {
   cl_object v2;
   v2 = ecl_car(v1loc);
   if (!((v2)==(VV[22]))) { goto L9; }
   goto L6;
   goto L7;
L9:;
   goto L7;
L7:;
   if (!((v2)==(VV[24]))) { goto L4; }
   goto L5;
L6:;
L5:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L4:;
   if (!((v2)==(ECL_SYM("C-INLINE",2063)))) { goto L12; }
   T0 = ecl_cddddr(v1loc);
   T1 = ecl_car(T0);
   value0 = Null(T1)?ECL_T:ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L12:;
   value0 = ECL_T;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for LOC-TYPE                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L16loc_type(cl_object v1loc)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!((v1loc)==(ECL_NIL))) { goto L1; }
  value0 = ECL_SYM("NULL",607);
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  if (Null(ecl_function_dispatch(cl_env_copy,VV[163])(1, v1loc) /*  VAR-P */)) { goto L3; }
  value0 = ecl_function_dispatch(cl_env_copy,VV[164])(1, v1loc) /*  VAR-TYPE */;
  return value0;
L3:;
  if (Null(ecl_function_dispatch(cl_env_copy,VV[165])(1, v1loc) /*  VV-P */)) { goto L5; }
  value0 = ecl_function_dispatch(cl_env_copy,VV[166])(1, v1loc) /*  VV-TYPE */;
  return value0;
L5:;
  if (!(ecl_numberp(v1loc))) { goto L7; }
  T0 = cl_type_of(v1loc);
  value0 = L4lisp_type__rep_type(T0);
  return value0;
L7:;
  if (!(ECL_ATOM(v1loc))) { goto L9; }
  value0 = ECL_T;
  cl_env_copy->nvalues = 1;
  return value0;
L9:;
  {
   cl_object v2;
   v2 = ecl_car(v1loc);
   if (!((v2)==(VV[28]))) { goto L12; }
   value0 = ECL_SYM("FIXNUM",374);
   cl_env_copy->nvalues = 1;
   return value0;
L12:;
   if (!((v2)==(VV[29]))) { goto L14; }
   T0 = ecl_cadr(v1loc);
   T1 = cl_code_char(T0);
   value0 = cl_type_of(T1);
   return value0;
L14:;
   if (!((v2)==(VV[30]))) { goto L16; }
   value0 = ECL_SYM("DOUBLE-FLOAT",317);
   cl_env_copy->nvalues = 1;
   return value0;
L16:;
   if (!((v2)==(VV[31]))) { goto L18; }
   value0 = ECL_SYM("SINGLE-FLOAT",780);
   cl_env_copy->nvalues = 1;
   return value0;
L18:;
   if (!((v2)==(VV[32]))) { goto L20; }
   value0 = ECL_SYM("LONG-FLOAT",510);
   cl_env_copy->nvalues = 1;
   return value0;
L20:;
   if (!((v2)==(VV[33]))) { goto L22; }
   value0 = ECL_SYM("COMPLEX-SINGLE-FLOAT",1872);
   cl_env_copy->nvalues = 1;
   return value0;
L22:;
   if (!((v2)==(VV[34]))) { goto L24; }
   value0 = ECL_SYM("COMPLEX-DOUBLE-FLOAT",1873);
   cl_env_copy->nvalues = 1;
   return value0;
L24:;
   if (!((v2)==(VV[35]))) { goto L26; }
   value0 = ECL_SYM("COMPLEX-LONG-FLOAT",1874);
   cl_env_copy->nvalues = 1;
   return value0;
L26:;
   if (!((v2)==(ECL_SYM("C-INLINE",2063)))) { goto L28; }
   {
    cl_object v3type;
    T0 = ecl_cadr(v1loc);
    v3type = ecl_car(T0);
    if (!(ECL_CONSP(v3type))) { goto L31; }
    T0 = ecl_car(v3type);
    if (!((T0)==(ECL_SYM("VALUES",897)))) { goto L31; }
    value0 = ECL_T;
    cl_env_copy->nvalues = 1;
    return value0;
L31:;
    if (Null(L12lisp_type_p(v3type))) { goto L34; }
    value0 = v3type;
    cl_env_copy->nvalues = 1;
    return value0;
L34:;
    value0 = L3rep_type__lisp_type(v3type);
    return value0;
   }
L28:;
   if (!((v2)==(VV[36]))) { goto L36; }
   T0 = ecl_cadr(v1loc);
   value0 = ecl_function_dispatch(cl_env_copy,VV[164])(1, T0) /*  VAR-TYPE */;
   return value0;
L36:;
   if (!((v2)==(VV[37]))) { goto L38; }
   value0 = ecl_caddr(v1loc);
   if ((value0)!=ECL_NIL) { goto L41; }
   value0 = ECL_T;
   cl_env_copy->nvalues = 1;
   return value0;
L41:;
   cl_env_copy->nvalues = 1;
   return value0;
L38:;
   if (!((v2)==(ECL_SYM("THE",858)))) { goto L43; }
   value0 = ecl_cadr(v1loc);
   cl_env_copy->nvalues = 1;
   return value0;
L43:;
   if (!((v2)==(VV[38]))) { goto L45; }
   value0 = ecl_cadddr(v1loc);
   cl_env_copy->nvalues = 1;
   return value0;
L45:;
   value0 = ECL_T;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for LOC-REPRESENTATION-TYPE               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L17loc_representation_type(cl_object v1loc)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!((v1loc)==(ECL_NIL))) { goto L6; }
  goto L3;
  goto L4;
L6:;
  goto L4;
L4:;
  if (!(ecl_eql(v1loc,ECL_T))) { goto L1; }
  goto L2;
L3:;
L2:;
  value0 = ECL_SYM("OBJECT",1305);
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  if (Null(ecl_function_dispatch(cl_env_copy,VV[163])(1, v1loc) /*  VAR-P */)) { goto L9; }
  value0 = ecl_function_dispatch(cl_env_copy,VV[168])(1, v1loc) /*  VAR-REP-TYPE */;
  return value0;
L9:;
  if (Null(ecl_function_dispatch(cl_env_copy,VV[165])(1, v1loc) /*  VV-P */)) { goto L11; }
  value0 = ECL_SYM("OBJECT",1305);
  cl_env_copy->nvalues = 1;
  return value0;
L11:;
  if (!(ecl_numberp(v1loc))) { goto L13; }
  T0 = cl_type_of(v1loc);
  value0 = L4lisp_type__rep_type(T0);
  return value0;
L13:;
  if (!((v1loc)==(VV[42]))) { goto L15; }
  value0 = ECL_SYM("VOID",1414);
  cl_env_copy->nvalues = 1;
  return value0;
L15:;
  if (!(ECL_ATOM(v1loc))) { goto L17; }
  value0 = ECL_SYM("OBJECT",1305);
  cl_env_copy->nvalues = 1;
  return value0;
L17:;
  {
   cl_object v2;
   v2 = ecl_car(v1loc);
   if (!((v2)==(VV[28]))) { goto L20; }
   value0 = ECL_SYM("FIXNUM",1399);
   cl_env_copy->nvalues = 1;
   return value0;
L20:;
   if (!((v2)==(VV[29]))) { goto L22; }
   T0 = ecl_cadr(v1loc);
   if (!(ecl_lowereq(T0,ecl_make_fixnum(255)))) { goto L24; }
   value0 = ECL_SYM("UNSIGNED-CHAR",1420);
   cl_env_copy->nvalues = 1;
   return value0;
L24:;
   value0 = VV[43];
   cl_env_copy->nvalues = 1;
   return value0;
L22:;
   if (!((v2)==(VV[30]))) { goto L26; }
   value0 = ECL_SYM("DOUBLE",1398);
   cl_env_copy->nvalues = 1;
   return value0;
L26:;
   if (!((v2)==(VV[31]))) { goto L28; }
   value0 = ECL_SYM("FLOAT",1400);
   cl_env_copy->nvalues = 1;
   return value0;
L28:;
   if (!((v2)==(VV[32]))) { goto L30; }
   value0 = ECL_SYM("LONG-DOUBLE",1407);
   cl_env_copy->nvalues = 1;
   return value0;
L30:;
   if (!((v2)==(VV[33]))) { goto L32; }
   value0 = ECL_SYM("CSFLOAT",1394);
   cl_env_copy->nvalues = 1;
   return value0;
L32:;
   if (!((v2)==(VV[34]))) { goto L34; }
   value0 = ECL_SYM("CDFLOAT",1395);
   cl_env_copy->nvalues = 1;
   return value0;
L34:;
   if (!((v2)==(VV[35]))) { goto L36; }
   value0 = ECL_SYM("CLFLOAT",1396);
   cl_env_copy->nvalues = 1;
   return value0;
L36:;
   if (!((v2)==(ECL_SYM("C-INLINE",2063)))) { goto L38; }
   {
    cl_object v3type;
    T0 = ecl_cadr(v1loc);
    v3type = ecl_car(T0);
    if (!(ECL_CONSP(v3type))) { goto L41; }
    T0 = ecl_car(v3type);
    if (!((T0)==(ECL_SYM("VALUES",897)))) { goto L41; }
    value0 = ECL_SYM("OBJECT",1305);
    cl_env_copy->nvalues = 1;
    return value0;
L41:;
    if (Null(L12lisp_type_p(v3type))) { goto L44; }
    value0 = L4lisp_type__rep_type(v3type);
    return value0;
L44:;
    value0 = v3type;
    cl_env_copy->nvalues = 1;
    return value0;
   }
L38:;
   if (!((v2)==(VV[36]))) { goto L46; }
   T0 = ecl_cadr(v1loc);
   value0 = ecl_function_dispatch(cl_env_copy,VV[168])(1, T0) /*  VAR-REP-TYPE */;
   return value0;
L46:;
   if (!((v2)==(VV[37]))) { goto L48; }
   value0 = ecl_caddr(v1loc);
   if ((value0)!=ECL_NIL) { goto L52; }
   T0 = ECL_T;
   goto L50;
L52:;
   T0 = value0;
   goto L50;
L50:;
   value0 = L4lisp_type__rep_type(T0);
   return value0;
L48:;
   if (!((v2)==(VV[44]))) { goto L59; }
   goto L56;
   goto L57;
L59:;
   goto L57;
L57:;
   if (!((v2)==(VV[46]))) { goto L54; }
   goto L55;
L56:;
L55:;
   value0 = VV[48];
   cl_env_copy->nvalues = 1;
   return value0;
L54:;
   if (!((v2)==(ECL_SYM("THE",858)))) { goto L62; }
   v1loc = ecl_caddr(v1loc);
   goto TTL;
L62:;
   value0 = ECL_SYM("OBJECT",1305);
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for WT-COERCE-LOC                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L20wt_coerce_loc(cl_object v1dest_rep_type, cl_object v2loc)
{
 cl_object T0;
 volatile cl_object lex0[4];
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  lex0[0] = v1dest_rep_type;                      /*  DEST-REP-TYPE   */
TTL:
  lex0[0] = L4lisp_type__rep_type(lex0[0]);
  T0 = L3rep_type__lisp_type(lex0[0]);
  lex0[1] = T0;                                   /*  DEST-TYPE       */
  T0 = L16loc_type(v2loc);
  lex0[2] = T0;                                   /*  LOC-TYPE        */
  T0 = L17loc_representation_type(v2loc);
  lex0[3] = T0;                                   /*  LOC-REP-TYPE    */
  if (!((lex0[0])==(lex0[3]))) { goto L3; }
  ecl_function_dispatch(cl_env_copy,VV[155])(1, v2loc) /*  WT         */;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L3:;
  if (!(ecl_eql(lex0[0],ECL_SYM("CHAR",1393)))) { goto L11; }
  goto L8;
  goto L9;
L11:;
  goto L9;
L9:;
  if (!(ecl_eql(lex0[0],ECL_SYM("UNSIGNED-CHAR",1420)))) { goto L15; }
  goto L8;
  goto L13;
L15:;
  goto L13;
L13:;
  if (!(ecl_eql(lex0[0],VV[43]))) { goto L6; }
  goto L7;
L8:;
L7:;
  if (!(ecl_eql(lex0[3],ECL_SYM("CHAR",1393)))) { goto L23; }
  goto L20;
  goto L21;
L23:;
  goto L21;
L21:;
  if (!(ecl_eql(lex0[3],ECL_SYM("UNSIGNED-CHAR",1420)))) { goto L27; }
  goto L20;
  goto L25;
L27:;
  goto L25;
L25:;
  if (!(ecl_eql(lex0[3],VV[43]))) { goto L18; }
  goto L19;
L20:;
L19:;
  T0 = L11rep_type__c_name(lex0[0]);
  value0 = ecl_function_dispatch(cl_env_copy,VV[155])(5, VV[17], T0, VV[54], v2loc, VV[18]) /*  WT */;
  return value0;
L18:;
  if (!(ecl_eql(lex0[3],ECL_SYM("OBJECT",1305)))) { goto L30; }
  LC19ensure_valid_object_type(lex0, lex0[1]);
  value0 = L14wt_from_object_conversion(lex0[1], lex0[2], lex0[0], v2loc);
  return value0;
L30:;
  value0 = LC18coercion_error(lex0);
  return value0;
L6:;
  if (!(ecl_eql(lex0[0],ECL_SYM("FLOAT",1400)))) { goto L39; }
  goto L36;
  goto L37;
L39:;
  goto L37;
L37:;
  if (!(ecl_eql(lex0[0],ECL_SYM("DOUBLE",1398)))) { goto L43; }
  goto L36;
  goto L41;
L43:;
  goto L41;
L41:;
  if (!(ecl_eql(lex0[0],ECL_SYM("LONG-DOUBLE",1407)))) { goto L34; }
  goto L35;
L36:;
L35:;
  if (Null(L5c_number_rep_type_p(lex0[3]))) { goto L46; }
  T0 = L11rep_type__c_name(lex0[0]);
  value0 = ecl_function_dispatch(cl_env_copy,VV[155])(5, VV[17], T0, VV[54], v2loc, VV[18]) /*  WT */;
  return value0;
L46:;
  if (!((lex0[3])==(ECL_SYM("OBJECT",1305)))) { goto L48; }
  LC19ensure_valid_object_type(lex0, ECL_SYM("FLOAT",376));
  value0 = L14wt_from_object_conversion(lex0[1], lex0[2], lex0[0], v2loc);
  return value0;
L48:;
  value0 = LC18coercion_error(lex0);
  return value0;
L34:;
  if (!(ecl_eql(lex0[0],ECL_SYM("CSFLOAT",1394)))) { goto L56; }
  goto L53;
  goto L54;
L56:;
  goto L54;
L54:;
  if (!(ecl_eql(lex0[0],ECL_SYM("CDFLOAT",1395)))) { goto L60; }
  goto L53;
  goto L58;
L60:;
  goto L58;
L58:;
  if (!(ecl_eql(lex0[0],ECL_SYM("CLFLOAT",1396)))) { goto L51; }
  goto L52;
L53:;
L52:;
  if (Null(L5c_number_rep_type_p(lex0[3]))) { goto L63; }
  T0 = L11rep_type__c_name(lex0[0]);
  value0 = ecl_function_dispatch(cl_env_copy,VV[155])(5, VV[17], T0, VV[54], v2loc, VV[18]) /*  WT */;
  return value0;
L63:;
  if (!((lex0[3])==(ECL_SYM("OBJECT",1305)))) { goto L65; }
  LC19ensure_valid_object_type(lex0, ECL_SYM("COMPLEX-FLOAT",1871));
  value0 = L14wt_from_object_conversion(lex0[1], lex0[2], lex0[0], v2loc);
  return value0;
L65:;
  value0 = LC18coercion_error(lex0);
  return value0;
L51:;
  if (!(ecl_eql(lex0[0],VV[48]))) { goto L68; }
  if (Null(L5c_number_rep_type_p(lex0[3]))) { goto L71; }
  value0 = ecl_function_dispatch(cl_env_copy,VV[155])(1, VV[63]) /*  WT */;
  return value0;
L71:;
  if (!((lex0[3])==(ECL_SYM("OBJECT",1305)))) { goto L73; }
  value0 = ecl_function_dispatch(cl_env_copy,VV[155])(3, VV[17], v2loc, VV[64]) /*  WT */;
  return value0;
L73:;
  value0 = LC18coercion_error(lex0);
  return value0;
L68:;
  if (!(ecl_eql(lex0[0],ECL_SYM("OBJECT",1305)))) { goto L75; }
  if (!(ecl_eql(lex0[3],VV[65]))) { goto L83; }
  goto L80;
  goto L81;
L83:;
  goto L81;
L81:;
  if (!(ecl_eql(lex0[3],VV[67]))) { goto L87; }
  goto L80;
  goto L85;
L87:;
  goto L85;
L85:;
  if (!(ecl_eql(lex0[3],VV[69]))) { goto L78; }
  goto L79;
L80:;
L79:;
  T0 = ecl_function_dispatch(cl_env_copy,VV[170])(1, ECL_SYM("SPEED",793)) /*  CMP-ENV-OPTIMIZATION */;
  if (!(ecl_greatereq(T0,ecl_make_fixnum(1)))) { goto L78; }
  ecl_function_dispatch(cl_env_copy,VV[171])(2, VV[71], lex0[3]) /*  CMPWARN-STYLE */;
L78:;
  value0 = L13wt_to_object_conversion(lex0[3], v2loc);
  return value0;
L75:;
  if (!(ecl_eql(lex0[0],ECL_SYM("POINTER-VOID",1410)))) { goto L91; }
  if (!(ecl_eql(lex0[3],ECL_SYM("OBJECT",1305)))) { goto L94; }
  value0 = L14wt_from_object_conversion(lex0[1], lex0[2], lex0[0], v2loc);
  return value0;
L94:;
  if (!(ecl_eql(lex0[3],ECL_SYM("CSTRING",1397)))) { goto L97; }
  value0 = ecl_function_dispatch(cl_env_copy,VV[155])(3, VV[74], v2loc, VV[18]) /*  WT */;
  return value0;
L97:;
  value0 = LC18coercion_error(lex0);
  return value0;
L91:;
  if (!(ecl_eql(lex0[0],ECL_SYM("CSTRING",1397)))) { goto L100; }
  value0 = LC18coercion_error(lex0);
  return value0;
L100:;
  if (!(ecl_eql(lex0[0],VV[75]))) { goto L103; }
  if (!(ecl_eql(lex0[3],ECL_SYM("OBJECT",1305)))) { goto L106; }
  value0 = ecl_function_dispatch(cl_env_copy,VV[155])(3, VV[77], v2loc, VV[18]) /*  WT */;
  return value0;
L106:;
  if (!(ecl_eql(lex0[3],ECL_SYM("POINTER-VOID",1410)))) { goto L109; }
  value0 = ecl_function_dispatch(cl_env_copy,VV[155])(3, VV[74], v2loc, VV[18]) /*  WT */;
  return value0;
L109:;
  value0 = LC18coercion_error(lex0);
  return value0;
L103:;
  if (!(ecl_eql(lex0[0],VV[65]))) { goto L117; }
  goto L114;
  goto L115;
L117:;
  goto L115;
L115:;
  if (!(ecl_eql(lex0[0],VV[67]))) { goto L121; }
  goto L114;
  goto L119;
L121:;
  goto L119;
L119:;
  if (!(ecl_eql(lex0[0],VV[69]))) { goto L112; }
  goto L113;
L114:;
L113:;
  if (!(ecl_eql(lex0[3],ECL_SYM("OBJECT",1305)))) { goto L124; }
  value0 = L14wt_from_object_conversion(ECL_SYM("SSE-PACK",1875), lex0[2], lex0[0], v2loc);
  return value0;
L124:;
  if (!(ecl_eql(lex0[3],VV[65]))) { goto L132; }
  goto L129;
  goto L130;
L132:;
  goto L130;
L130:;
  if (!(ecl_eql(lex0[3],VV[67]))) { goto L136; }
  goto L129;
  goto L134;
L136:;
  goto L134;
L134:;
  if (!(ecl_eql(lex0[3],VV[69]))) { goto L127; }
  goto L128;
L129:;
L128:;
  if (!(ecl_eql(lex0[0],VV[65]))) { goto L140; }
  if (!(ecl_eql(lex0[3],VV[67]))) { goto L142; }
  T0 = VV[78];
  goto L139;
L142:;
  if (!(ecl_eql(lex0[3],VV[69]))) { goto L144; }
  T0 = VV[79];
  goto L139;
L144:;
  T0 = si_ecase_error(lex0[3], VV[68]);
  goto L139;
L140:;
  if (!(ecl_eql(lex0[0],VV[67]))) { goto L146; }
  if (!(ecl_eql(lex0[3],VV[65]))) { goto L148; }
  T0 = VV[80];
  goto L139;
L148:;
  if (!(ecl_eql(lex0[3],VV[69]))) { goto L150; }
  T0 = VV[81];
  goto L139;
L150:;
  T0 = si_ecase_error(lex0[3], VV[82]);
  goto L139;
L146:;
  if (!(ecl_eql(lex0[0],VV[69]))) { goto L152; }
  if (!(ecl_eql(lex0[3],VV[65]))) { goto L154; }
  T0 = VV[83];
  goto L139;
L154:;
  if (!(ecl_eql(lex0[3],VV[67]))) { goto L156; }
  T0 = VV[84];
  goto L139;
L156:;
  T0 = si_ecase_error(lex0[3], VV[85]);
  goto L139;
L152:;
  T0 = si_ecase_error(lex0[0], VV[66]);
L139:;
  value0 = ecl_function_dispatch(cl_env_copy,VV[155])(4, T0, VV[17], v2loc, VV[18]) /*  WT */;
  return value0;
L127:;
  value0 = LC18coercion_error(lex0);
  return value0;
L112:;
  if ((L6c_integer_rep_type_p(lex0[0]))!=ECL_NIL) { goto L158; }
  value0 = LC18coercion_error(lex0);
  return value0;
L158:;
  if (Null(L5c_number_rep_type_p(lex0[3]))) { goto L160; }
  T0 = L11rep_type__c_name(lex0[0]);
  value0 = ecl_function_dispatch(cl_env_copy,VV[155])(5, VV[17], T0, VV[54], v2loc, VV[18]) /*  WT */;
  return value0;
L160:;
  if (!((ECL_SYM("OBJECT",1305))==(lex0[3]))) { goto L162; }
  LC19ensure_valid_object_type(lex0, lex0[1]);
  value0 = L14wt_from_object_conversion(lex0[1], lex0[2], lex0[0], v2loc);
  return value0;
L162:;
  value0 = LC18coercion_error(lex0);
  return value0;
 }
}
/*      local function ENSURE-VALID-OBJECT-TYPE                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC19ensure_valid_object_type(volatile cl_object *lex0, cl_object v1a_lisp_type)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_list(3, ECL_SYM("AND",89), lex0[2], v1a_lisp_type);
  if (Null(cl_subtypep(2, T0, ECL_NIL))) { goto L1; }
  value0 = LC18coercion_error(lex0);
  return value0;
L1:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function COERCION-ERROR                                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC18coercion_error(volatile cl_object *lex0)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ecl_function_dispatch(cl_env_copy,VV[172])(5, VV[50], lex0[2], lex0[3], lex0[1], lex0[0]) /*  CMPWARN */;
  return value0;
 }
}
/*      function definition for C1CLINES                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L21c1clines(cl_object v1args)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = (ECL_SYM("STRINGP",827)->symbol.gfdef);
  if ((cl_every(2, T0, v1args))!=ECL_NIL) { goto L1; }
  ecl_function_dispatch(cl_env_copy,VV[135])(2, VV[87], v1args) /*  CMPERR */;
L1:;
  T0 = cl_copy_list(v1args);
  cl_set(VV[88],ecl_nconc(ecl_symbol_value(VV[88]),T0));
  value0 = VV[89];
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for OUTPUT-CLINES                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L24output_clines(cl_object volatile v1output_stream)
{
 cl_object volatile env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2;
   cl_object v3s;
   cl_object v4;
   v2 = ecl_symbol_value(VV[88]);
   v3s = ECL_NIL;
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
   v3s = _ecl_car(v4);
   {
    cl_object v5;
    v5 = _ecl_cdr(v4);
    if (ecl_unlikely(!ECL_LISTP(v5))) FEtype_error_list(v5);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v4 = v5;
   }
   ecl_terpri(v1output_stream);
   {
    cl_object v5;
    v5 = ecl_function_dispatch(cl_env_copy,VV[175])(2, v3s, ecl_make_fixnum(0)) /*  MAKE-SEQ-ITERATOR */;
L22:;
    if ((v5)!=ECL_NIL) { goto L24; }
    goto L19;
L24:;
    {
     cl_object v6;
     v6 = ecl_function_dispatch(cl_env_copy,VV[176])(2, v3s, v5) /*  SEQ-ITERATOR-REF */;
     if (!((ECL_CODE_CHAR((ecl_character)(64))==(v6)))) { goto L26; }
     if (Null(v6)) { goto L19; }
     goto L20;
    }
L26:;
    v5 = ecl_function_dispatch(cl_env_copy,VV[177])(2, v3s, v5) /*  SEQ-ITERATOR-NEXT */;
    goto L22;
   }
L20:;
   LC23parse_one_string(v3s, v1output_stream);
   goto L18;
L19:;
   cl_write_string(2, v3s, v1output_stream);
L18:;
   goto L7;
L8:;
  }
  ecl_terpri(v1output_stream);
  cl_set(VV[88],ECL_NIL);
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function PARSE-ONE-STRING                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC23parse_one_string(cl_object volatile v1s, cl_object volatile v2output_stream)
{
 cl_object T0, T1, T2, T3;
 cl_object volatile env0 = ECL_NIL;
 cl_object volatile CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   volatile cl_object v3stream;
   v3stream = cl_make_string_input_stream(3, v1s, ecl_make_fixnum(0), ECL_NIL);
   {
    volatile bool unwinding = FALSE;
    cl_index v4=ECL_STACK_INDEX(cl_env_copy),v5;
    ecl_frame_ptr next_fr;
    ecl_frs_push(cl_env_copy,ECL_PROTECT_TAG);
    if (__ecl_frs_push_result) {
      unwinding = TRUE; next_fr=cl_env_copy->nlj_fr;
    } else {
    {
     volatile cl_object v6c;
     v6c = ECL_NIL;
L4:;
     v6c = cl_read_char(3, v3stream, ECL_NIL, ECL_NIL);
     if ((v6c)!=ECL_NIL) { goto L8; }
     goto L5;
L8:;
     if (!((v6c)==(CODE_CHAR(64)))) { goto L11; }
     {
      volatile cl_object v7object;
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
         if (cl_env_copy->values[0]==ecl_make_fixnum(0))goto L14;
         ecl_internal_error("GO found an inexistent tag");
         }
        }
        {
         cl_object v8;
         v8 = ecl_make_cclosure_va((cl_objectfn)LC22__lambda47,env2,Cblock,1);
         T0 = v8;
        }
        T1 = CONS(ECL_SYM("SERIOUS-CONDITION",744),T0);
        T2 = ecl_list1(T1);
        T3 = CONS(T2,ecl_symbol_value(ECL_SYM("*HANDLER-CLUSTERS*",6)));
        ecl_bds_bind(cl_env_copy,ECL_SYM("*HANDLER-CLUSTERS*",6),T3); /*  *HANDLER-CLUSTERS* */
        value0 = cl_read(1, v3stream);
        ecl_frs_pop(cl_env_copy);
        v7object = value0;
        ecl_bds_unwind1(cl_env_copy);
        goto L13;
L14:;
        value0 = ecl_function_dispatch(cl_env_copy,VV[135])(2, VV[91], v1s) /*  CMPERR */;
        ecl_frs_pop(cl_env_copy);
        v7object = value0;
        goto L13;
       }
      }
L13:;
      ecl_bds_bind(cl_env_copy,VV[92],v2output_stream); /*  *COMPILER-OUTPUT1* */
      T0 = ecl_function_dispatch(cl_env_copy,VV[178])(3, v7object, VV[93], ECL_T) /*  ADD-OBJECT */;
      ecl_function_dispatch(cl_env_copy,VV[155])(1, T0) /*  WT        */;
      ecl_bds_unwind1(cl_env_copy);
      goto L10;
     }
L11:;
     cl_write_char(2, v6c, v2output_stream);
L10:;
     goto L4;
L5:;
     cl_env_copy->values[0] = ECL_NIL;
     cl_env_copy->nvalues = 1;
    }
    }
    ecl_frs_pop(cl_env_copy);
    v5=ecl_stack_push_values(cl_env_copy);
    cl_close(1, v3stream);
    ecl_stack_pop_values(cl_env_copy,v5);
    if (unwinding) ecl_unwind(cl_env_copy,next_fr);
    ECL_STACK_SET_INDEX(cl_env_copy,v4);
    return cl_env_copy->values[0];
   }
  }
 }
}
/*      closure LAMBDA47                                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC22__lambda47(cl_narg narg, cl_object v1si__temp, ...)
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
/*      function definition for C1C-INLINE                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L26c1c_inline(cl_object v1args)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2;
   cl_object v3arguments;
   cl_object v4arg_types;
   cl_object v5output_type;
   cl_object v6c_expression;
   cl_object v7;
   cl_object v8side_effects;
   cl_object v9;
   cl_object v10one_liner;
   cl_object v11output_rep_type;
   v2 = v1args;
   if (!(v2==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[180])(1, v1args) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v12;
    v12 = ecl_car(v2);
    v2 = ecl_cdr(v2);
    v3arguments = v12;
   }
   if (!(v2==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[180])(1, v1args) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v12;
    v12 = ecl_car(v2);
    v2 = ecl_cdr(v2);
    v4arg_types = v12;
   }
   if (!(v2==ECL_NIL)) { goto L15; }
   ecl_function_dispatch(cl_env_copy,VV[180])(1, v1args) /*  DM-TOO-FEW-ARGUMENTS */;
L15:;
   {
    cl_object v12;
    v12 = ecl_car(v2);
    v2 = ecl_cdr(v2);
    v5output_type = v12;
   }
   if (!(v2==ECL_NIL)) { goto L21; }
   ecl_function_dispatch(cl_env_copy,VV[180])(1, v1args) /*  DM-TOO-FEW-ARGUMENTS */;
L21:;
   {
    cl_object v12;
    v12 = ecl_car(v2);
    v2 = ecl_cdr(v2);
    v6c_expression = v12;
   }
   v7 = ecl_function_dispatch(cl_env_copy,VV[181])(2, v2, VV[95]) /*  SEARCH-KEYWORD */;
   if (!((v7)==(ECL_SYM("MISSING-KEYWORD",2015)))) { goto L28; }
   v8side_effects = ECL_T;
   goto L27;
L28:;
   v8side_effects = v7;
L27:;
   v9 = ecl_function_dispatch(cl_env_copy,VV[181])(2, v2, VV[96]) /*  SEARCH-KEYWORD */;
   if (!((v9)==(ECL_SYM("MISSING-KEYWORD",2015)))) { goto L32; }
   v10one_liner = ECL_NIL;
   goto L31;
L32:;
   v10one_liner = v9;
L31:;
   v11output_rep_type = ECL_NIL;
   ecl_function_dispatch(cl_env_copy,VV[182])(2, v2, VV[97]) /*  CHECK-KEYWORD */;
   {
    cl_fixnum v12;
    v12 = ecl_length(v3arguments);
    {
     cl_fixnum v13;
     v13 = ecl_length(v4arg_types);
     if ((v12)==(v13)) { goto L36; }
    }
   }
   T0 = CONS(ECL_SYM("C-INLINE",2063),v1args);
   ecl_function_dispatch(cl_env_copy,VV[135])(2, VV[98], T0) /*  CMPERR */;
L36:;
   {
    cl_object v12ndx;
    v12ndx = cl_position(2, ECL_SYM("CSTRING",1397), v4arg_types);
    if (Null(v12ndx)) { goto L38; }
    {
     cl_object v13var;
     cl_object v14arguments;
     cl_object v15value;
     v13var = cl_gensym(0);
     v14arguments = cl_copy_list(v3arguments);
     v15value = ecl_elt(v14arguments,ecl_fixnum(v12ndx));
     ecl_elt_set(v14arguments,ecl_to_size(v12ndx),v13var);
     ecl_elt_set(v4arg_types,ecl_to_size(v12ndx),VV[75]);
     T0 = cl_list(2, v13var, v15value);
     T1 = cl_listX(6, ECL_SYM("C-INLINE",2063), v14arguments, v4arg_types, v5output_type, v6c_expression, v2);
     T2 = cl_list(3, ECL_SYM("WITH-CSTRING",2110), T0, T1);
     value0 = ecl_function_dispatch(cl_env_copy,VV[183])(1, T2) /*  C1EXPR */;
     return value0;
    }
   }
L38:;
   {
    cl_object v12;
    v12 = ecl_make_cfun((cl_objectfn_fixed)LC25produce_type_pair,ECL_NIL,Cblock,1);
    if (!((v5output_type)==(ECL_SYM("VOID",1414)))) { goto L47; }
    v11output_rep_type = ECL_NIL;
    v5output_type = ECL_NIL;
    goto L46;
L47:;
    if (!(ecl_equal(v5output_type,VV[99]))) { goto L52; }
    v11output_rep_type = VV[100];
    goto L46;
L52:;
    if (!(ECL_CONSP(v5output_type))) { goto L55; }
    T0 = ecl_car(v5output_type);
    if (!((T0)==(ECL_SYM("VALUES",897)))) { goto L55; }
    {
     cl_object v13x;
     {
      cl_object v14;
      cl_object v15;
      cl_object v16;
      v14 = ecl_cdr(v5output_type);
      v15 = ECL_NIL;
      {
       cl_object v17;
       v17 = v14;
       if (ecl_unlikely(!ECL_LISTP(v17))) FEtype_error_list(v17);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v16 = v17;
      }
      {
       cl_object v17;
       cl_object v18;
       v17 = ecl_list1(ECL_NIL);
       v18 = v17;
L66:;
       if (!(ecl_endp(v16))) { goto L68; }
       goto L67;
L68:;
       v15 = _ecl_car(v16);
       {
        cl_object v19;
        v19 = _ecl_cdr(v16);
        if (ecl_unlikely(!ECL_LISTP(v19))) FEtype_error_list(v19);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v16 = v19;
       }
       {
        cl_object v19;
        v19 = v18;
        if (ecl_unlikely(ECL_ATOM(v19))) FEtype_error_cons(v19);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        T0 = v19;
       }
       T1 = ecl_function_dispatch(cl_env_copy,v12)(1, v15);
       v18 = ecl_list1(T1);
       (ECL_CONS_CDR(T0)=v18,T0);
       goto L66;
L67:;
       v13x = ecl_cdr(v17);
       goto L58;
      }
     }
L58:;
     {
      cl_object v14;
      v14 = (ECL_SYM("CDR",200)->symbol.gfdef);
      {
       cl_object v15;
       cl_object v16;
       v15 = ECL_NIL;
       {
        cl_object v17;
        v17 = v13x;
        if (ecl_unlikely(!ECL_LISTP(v17))) FEtype_error_list(v17);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v16 = v17;
       }
       {
        cl_object v17;
        cl_object v18;
        v17 = ecl_list1(ECL_NIL);
        v18 = v17;
L93:;
        if (!(ecl_endp(v16))) { goto L95; }
        goto L94;
L95:;
        v15 = _ecl_car(v16);
        {
         cl_object v19;
         v19 = _ecl_cdr(v16);
         if (ecl_unlikely(!ECL_LISTP(v19))) FEtype_error_list(v19);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         v16 = v19;
        }
        {
         cl_object v19;
         v19 = v18;
         if (ecl_unlikely(ECL_ATOM(v19))) FEtype_error_cons(v19);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         T0 = v19;
        }
        T1 = ecl_function_dispatch(cl_env_copy,v14)(1, v15);
        v18 = ecl_list1(T1);
        (ECL_CONS_CDR(T0)=v18,T0);
        goto L93;
L94:;
        v11output_rep_type = ecl_cdr(v17);
        goto L85;
       }
      }
     }
L85:;
     {
      cl_object v14;
      v14 = (ECL_SYM("CAR",182)->symbol.gfdef);
      {
       cl_object v15;
       cl_object v16;
       v15 = ECL_NIL;
       {
        cl_object v17;
        v17 = v13x;
        if (ecl_unlikely(!ECL_LISTP(v17))) FEtype_error_list(v17);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v16 = v17;
       }
       {
        cl_object v17;
        cl_object v18;
        v17 = ecl_list1(ECL_NIL);
        v18 = v17;
L120:;
        if (!(ecl_endp(v16))) { goto L122; }
        goto L121;
L122:;
        v15 = _ecl_car(v16);
        {
         cl_object v19;
         v19 = _ecl_cdr(v16);
         if (ecl_unlikely(!ECL_LISTP(v19))) FEtype_error_list(v19);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         v16 = v19;
        }
        {
         cl_object v19;
         v19 = v18;
         if (ecl_unlikely(ECL_ATOM(v19))) FEtype_error_cons(v19);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         T1 = v19;
        }
        T2 = ecl_function_dispatch(cl_env_copy,v14)(1, v15);
        v18 = ecl_list1(T2);
        (ECL_CONS_CDR(T1)=v18,T1);
        goto L120;
L121:;
        T0 = ecl_cdr(v17);
        goto L112;
       }
      }
     }
L112:;
     v5output_type = CONS(ECL_SYM("VALUES",897),T0);
     goto L46;
    }
L55:;
    {
     cl_object v14x;
     v14x = LC25produce_type_pair(v5output_type);
     v5output_type = ecl_car(v14x);
     T0 = ecl_cdr(v14x);
     v11output_rep_type = ecl_list1(T0);
    }
   }
L46:;
   if (!(ECL_LISTP(v3arguments))) { goto L145; }
   if (!(ECL_LISTP(v4arg_types))) { goto L145; }
   if (ECL_STRINGP(v6c_expression)) { goto L142; }
   goto L143;
L145:;
   goto L143;
L143:;
   T0 = CONS(ECL_SYM("C-INLINE",2063),v1args);
   ecl_function_dispatch(cl_env_copy,VV[135])(2, VV[101], T0) /*  CMPERR */;
L142:;
   {
    cl_fixnum v12;
    v12 = ecl_length(v3arguments);
    {
     cl_fixnum v13;
     v13 = ecl_length(v4arg_types);
     if ((v12)==(v13)) { goto L148; }
    }
   }
   T0 = CONS(ECL_SYM("C-INLINE",2063),v1args);
   ecl_function_dispatch(cl_env_copy,VV[135])(2, VV[102], T0) /*  CMPERR */;
L148:;
   {
    cl_object v12arguments;
    cl_object v13form;
    {
     cl_object v14;
     v14 = ecl_fdefinition(VV[183]);
     {
      cl_object v15;
      cl_object v16;
      v15 = ECL_NIL;
      {
       cl_object v17;
       v17 = v3arguments;
       if (ecl_unlikely(!ECL_LISTP(v17))) FEtype_error_list(v17);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v16 = v17;
      }
      {
       cl_object v17;
       cl_object v18;
       v17 = ecl_list1(ECL_NIL);
       v18 = v17;
L158:;
       if (!(ecl_endp(v16))) { goto L160; }
       goto L159;
L160:;
       v15 = _ecl_car(v16);
       {
        cl_object v19;
        v19 = _ecl_cdr(v16);
        if (ecl_unlikely(!ECL_LISTP(v19))) FEtype_error_list(v19);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v16 = v19;
       }
       {
        cl_object v19;
        v19 = v18;
        if (ecl_unlikely(ECL_ATOM(v19))) FEtype_error_cons(v19);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        T0 = v19;
       }
       T1 = ecl_function_dispatch(cl_env_copy,v14)(1, v15);
       v18 = ecl_list1(T1);
       (ECL_CONS_CDR(T0)=v18,T0);
       goto L158;
L159:;
       v12arguments = ecl_cdr(v17);
       goto L150;
      }
     }
    }
L150:;
    v13form = ecl_function_dispatch(cl_env_copy,VV[184])(12, ECL_SYM("C-INLINE",2063), ECL_SYM("TYPE",1346), v5output_type, VV[95], v8side_effects, VV[103], v12arguments, v4arg_types, v11output_rep_type, v6c_expression, v8side_effects, v10one_liner) /*  MAKE-C1FORM* */;
    {
     cl_object v14form;
     cl_object v15;
     v14form = ECL_NIL;
     {
      cl_object v16;
      v16 = v12arguments;
      if (ecl_unlikely(!ECL_LISTP(v16))) FEtype_error_list(v16);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v15 = v16;
     }
L182:;
     if (!(ecl_endp(v15))) { goto L184; }
     goto L183;
L184:;
     v14form = _ecl_car(v15);
     {
      cl_object v16;
      v16 = _ecl_cdr(v15);
      if (ecl_unlikely(!ECL_LISTP(v16))) FEtype_error_list(v16);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v15 = v16;
     }
     T0 = ecl_function_dispatch(cl_env_copy,VV[185])(1, v14form) /*  C1FORM-NAME */;
     if (!((T0)==(VV[104]))) { goto L192; }
     {
      cl_object v16var;
      T0 = ecl_function_dispatch(cl_env_copy,VV[186])(1, v14form) /*  C1FORM-ARGS */;
      v16var = ecl_car(T0);
      ecl_function_dispatch(cl_env_copy,VV[187])(2, v16var, v14form) /*  ADD-TO-SET-NODES */;
     }
L192:;
     goto L182;
L183:;
    }
    value0 = v13form;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      local function PRODUCE-TYPE-PAIR                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC25produce_type_pair(cl_object v1type)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(L12lisp_type_p(v1type))) { goto L1; }
  T0 = L4lisp_type__rep_type(v1type);
  value0 = CONS(v1type,T0);
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  T0 = L3rep_type__lisp_type(v1type);
  value0 = CONS(T0,v1type);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for C1C-PROGN                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L27c1c_progn(cl_object v1arguments)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2variables;
   cl_object v3statements;
   cl_object v4form;
   {
    cl_object v5;
    v5 = ecl_fdefinition(VV[189]);
    {
     cl_object v6;
     cl_object v7;
     cl_object v8;
     {
      cl_object v9;
      v9 = v1arguments;
      {
       cl_object v10;
       v10 = v9;
       if (ecl_unlikely(!ECL_LISTP(v10))) FEtype_error_list(v10);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v9)) { goto L8; }
      {
       cl_object v10;
       v10 = ECL_CONS_CDR(v9);
       v1arguments = v10;
       v9 = ECL_CONS_CAR(v9);
      }
L8:;
      v6 = v9;
     }
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
L20:;
      if (!(ecl_endp(v8))) { goto L22; }
      goto L21;
L22:;
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
       T0 = v11;
      }
      T1 = ecl_function_dispatch(cl_env_copy,v5)(1, v7);
      v10 = ecl_list1(T1);
      (ECL_CONS_CDR(T0)=v10,T0);
      goto L20;
L21:;
      v2variables = ecl_cdr(v9);
      goto L1;
     }
    }
   }
L1:;
   {
    cl_object v5form;
    cl_object v6;
    v5form = ECL_NIL;
    {
     cl_object v7;
     v7 = v1arguments;
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
L45:;
     if (!(ecl_endp(v6))) { goto L47; }
     goto L46;
L47:;
     v5form = _ecl_car(v6);
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
      T0 = v9;
     }
     if (!(ECL_STRINGP(v5form))) { goto L61; }
     T1 = v5form;
     goto L60;
L61:;
     T1 = ecl_function_dispatch(cl_env_copy,VV[183])(1, v5form) /*  C1EXPR */;
L60:;
     v8 = ecl_list1(T1);
     (ECL_CONS_CDR(T0)=v8,T0);
     goto L45;
L46:;
     v3statements = ecl_cdr(v7);
     goto L38;
    }
   }
L38:;
   v4form = ecl_function_dispatch(cl_env_copy,VV[184])(8, ECL_SYM("C-PROGN",2064), ECL_SYM("TYPE",1346), ECL_NIL, VV[95], ECL_T, VV[103], v2variables, v3statements) /*  MAKE-C1FORM* */;
   ecl_function_dispatch(cl_env_copy,VV[190])(2, v2variables, v4form) /*  ADD-TO-SET-NODES-OF-VAR-LIST */;
   value0 = v4form;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for C2C-PROGN                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L28c2c_progn(cl_object v1c1form, cl_object v2variables, cl_object v3statements)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  ecl_bds_bind(cl_env_copy,VV[107],VV[42]);       /*  *DESTINATION*   */
  {
   cl_object v4form;
   cl_object v5;
   v4form = ECL_NIL;
   {
    cl_object v6;
    v6 = v3statements;
    if (ecl_unlikely(!ECL_LISTP(v6))) FEtype_error_list(v6);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v5 = v6;
   }
L5:;
   if (!(ecl_endp(v5))) { goto L7; }
   goto L6;
L7:;
   v4form = _ecl_car(v5);
   {
    cl_object v6;
    v6 = _ecl_cdr(v5);
    if (ecl_unlikely(!ECL_LISTP(v6))) FEtype_error_list(v6);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v5 = v6;
   }
   if (!(ECL_STRINGP(v4form))) { goto L16; }
   ecl_function_dispatch(cl_env_copy,VV[192])(0)  /*  WT-NL           */;
   L33wt_c_inline_loc(ECL_SYM("VOID",1414), v4form, v2variables, ECL_T, ECL_NIL);
   goto L15;
L16:;
   ecl_function_dispatch(cl_env_copy,VV[193])(1, v4form) /*  C2EXPR*  */;
L15:;
   goto L5;
L6:;
   ecl_function_dispatch(cl_env_copy,VV[194])(1, ECL_NIL) /*  UNWIND-EXIT */;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   ecl_bds_unwind1(cl_env_copy);
   return value0;
  }
 }
}
/*      function definition for PRODUCE-INLINE-LOC                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L30produce_inline_loc(cl_object v1inlined_arguments, cl_object v2arg_types, cl_object v3output_rep_type, cl_object v4c_expression, cl_object v5side_effects, cl_object v6one_liner)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v7args_to_be_saved;
   cl_object v8coerced_arguments;
   v7args_to_be_saved = ECL_NIL;
   v8coerced_arguments = ECL_NIL;
   {
    cl_fixnum v9;
    v9 = ecl_length(v4c_expression);
    if (!((v9)>(1))) { goto L3; }
   }
   {
    ecl_character v9;
    v9 = ecl_char(v4c_expression,0);
    if (!((CODE_CHAR(v9))==(CODE_CHAR(64)))) { goto L3; }
   }
   {
    cl_object v9ndx;
    v9ndx = ecl_make_fixnum(1);
    goto L9;
L8:;
    {
     ecl_character v10c;
     v10c = CHAR_CODE(cl_char(v4c_expression, v9ndx));
     if (!((CODE_CHAR(v10c))==(CODE_CHAR(59)))) { goto L13; }
     T0 = ecl_one_plus(v9ndx);
     v4c_expression = cl_subseq(2, v4c_expression, T0);
     goto L3;
L13:;
     if (ecl_alphanumericp(v10c)) { goto L17; }
     v7args_to_be_saved = ECL_NIL;
     goto L3;
L17:;
     {
      cl_fixnum v11;
      v11 = v10c;
      {
       cl_fixnum v12;
       v12 = (ecl_character)(48);
       T0 = ecl_minus(ecl_make_fixnum(v11),ecl_make_fixnum(v12));
       v7args_to_be_saved = CONS(T0,v7args_to_be_saved);
      }
     }
    }
    v9ndx = ecl_one_plus(v9ndx);
L9:;
    {
     cl_fixnum v10;
     v10 = ecl_length(v4c_expression);
     if (ecl_greatereq(v9ndx,ecl_make_fixnum(v10))) { goto L24; }
    }
    goto L8;
L24:;
   }
L3:;
   v8coerced_arguments = L32coerce_locs(3, v1inlined_arguments, v2arg_types, v7args_to_be_saved);
   if (!(v3output_rep_type==ECL_NIL)) { goto L28; }
   if (Null(v5side_effects)) { goto L31; }
   ecl_function_dispatch(cl_env_copy,VV[192])(0)  /*  WT-NL           */;
   L33wt_c_inline_loc(v3output_rep_type, v4c_expression, v8coerced_arguments, ECL_T, ECL_NIL);
   if (Null(v6one_liner)) { goto L30; }
   ecl_function_dispatch(cl_env_copy,VV[155])(1, VV[109]) /*  WT      */;
   goto L30;
L31:;
   ecl_function_dispatch(cl_env_copy,VV[196])(2, VV[110], v4c_expression) /*  CMPNOTE */;
L30:;
   ecl_function_dispatch(cl_env_copy,VV[192])(1, VV[111]) /*  WT-NL   */;
   ecl_function_dispatch(cl_env_copy,VV[192])(1, VV[112]) /*  WT-NL   */;
   value0 = ECL_SYM("RETURN",726);
   cl_env_copy->nvalues = 1;
   return value0;
L28:;
   if (Null(v6one_liner)) { goto L38; }
   if (!(ecl_equalp(v3output_rep_type,VV[100]))) { goto L41; }
   T0 = ECL_SYM("VALUES",897);
   goto L40;
L41:;
   T0 = ECL_NIL;
L40:;
   value0 = cl_list(6, ECL_SYM("C-INLINE",2063), v3output_rep_type, v4c_expression, v8coerced_arguments, v5side_effects, T0);
   return value0;
L38:;
   if (!(ecl_equalp(v3output_rep_type,VV[100]))) { goto L43; }
   L33wt_c_inline_loc(v3output_rep_type, v4c_expression, v8coerced_arguments, v5side_effects, ECL_SYM("VALUES",897));
   value0 = ECL_SYM("VALUES",897);
   cl_env_copy->nvalues = 1;
   return value0;
L43:;
   {
    cl_object v9;
    v9 = ecl_make_cfun((cl_objectfn_fixed)LC29make_output_var,ECL_NIL,Cblock,1);
    ecl_function_dispatch(cl_env_copy,VV[197])(0) /*  OPEN-INLINE-BLOCK */;
    {
     cl_object v10output_vars;
     {
      cl_object v11;
      cl_object v12;
      v11 = ECL_NIL;
      {
       cl_object v13;
       v13 = v3output_rep_type;
       if (ecl_unlikely(!ECL_LISTP(v13))) FEtype_error_list(v13);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v12 = v13;
      }
      {
       cl_object v13;
       cl_object v14;
       v13 = ecl_list1(ECL_NIL);
       v14 = v13;
L54:;
       if (!(ecl_endp(v12))) { goto L56; }
       goto L55;
L56:;
       v11 = _ecl_car(v12);
       {
        cl_object v15;
        v15 = _ecl_cdr(v12);
        if (ecl_unlikely(!ECL_LISTP(v15))) FEtype_error_list(v15);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v12 = v15;
       }
       {
        cl_object v15;
        v15 = v14;
        if (ecl_unlikely(ECL_ATOM(v15))) FEtype_error_cons(v15);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        T0 = v15;
       }
       T1 = ecl_function_dispatch(cl_env_copy,v9)(1, v11);
       v14 = ecl_list1(T1);
       (ECL_CONS_CDR(T0)=v14,T0);
       goto L54;
L55:;
       v10output_vars = ecl_cdr(v13);
       goto L47;
      }
     }
L47:;
     L33wt_c_inline_loc(v3output_rep_type, v4c_expression, v8coerced_arguments, v5side_effects, v10output_vars);
     {
      cl_fixnum v11;
      v11 = ecl_length(v10output_vars);
      if (!((v11)==(1))) { goto L73; }
     }
     value0 = ecl_car(v10output_vars);
     cl_env_copy->nvalues = 1;
     return value0;
L73:;
     {
      cl_object v11v;
      cl_object v12;
      v11v = ECL_NIL;
      {
       cl_object v13;
       v13 = v10output_vars;
       if (ecl_unlikely(!ECL_LISTP(v13))) FEtype_error_list(v13);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v12 = v13;
      }
      {
       cl_object v13i;
       v13i = ecl_make_fixnum(0);
       if (!(ecl_endp(v12))) { goto L83; }
       goto L82;
L83:;
       v11v = _ecl_car(v12);
       {
        cl_object v14;
        v14 = _ecl_cdr(v12);
        if (ecl_unlikely(!ECL_LISTP(v14))) FEtype_error_list(v14);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v12 = v14;
       }
L81:;
       T0 = cl_list(2, VV[115], v13i);
       ecl_bds_bind(cl_env_copy,VV[107],T0);      /*  *DESTINATION*   */
       ecl_function_dispatch(cl_env_copy,VV[198])(1, v11v) /*  SET-LOC */;
       ecl_bds_unwind1(cl_env_copy);
       if (!(ecl_endp(v12))) { goto L92; }
       goto L82;
L92:;
       v11v = _ecl_car(v12);
       {
        cl_object v14;
        v14 = _ecl_cdr(v12);
        if (ecl_unlikely(!ECL_LISTP(v14))) FEtype_error_list(v14);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v12 = v14;
       }
       v13i = ecl_one_plus(v13i);
       goto L81;
L82:;
      }
     }
     {
      cl_fixnum v11;
      v11 = ecl_length(v10output_vars);
      ecl_function_dispatch(cl_env_copy,VV[155])(3, VV[116], ecl_make_fixnum(v11), VV[109]) /*  WT */;
     }
     value0 = ECL_SYM("VALUES",897);
     cl_env_copy->nvalues = 1;
     return value0;
    }
   }
  }
 }
}
/*      local function MAKE-OUTPUT-VAR                                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC29make_output_var(cl_object v1type)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2var;
   v2var = ecl_function_dispatch(cl_env_copy,VV[199])(2, VV[113], v1type) /*  MAKE-LCL-VAR */;
   T0 = L11rep_type__c_name(v1type);
   ecl_function_dispatch(cl_env_copy,VV[192])(4, T0, VV[114], v2var, VV[109]) /*  WT-NL */;
   value0 = v2var;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for C2C-INLINE                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L31c2c_inline(cl_narg narg, cl_object v1c1form, cl_object v2arguments, ...)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 {
  cl_object v3rest;
  ecl_va_list args; ecl_va_start(args,v2arguments,narg,2);
  v3rest = cl_grab_rest_args(args);
  ecl_va_end(args);
  {
   cl_object v4;
   v4 = ecl_symbol_value(VV[118]);
   ecl_bds_bind(cl_env_copy,VV[119],ecl_make_fixnum(0)); /*  *INLINE-BLOCKS* */
   ecl_bds_bind(cl_env_copy,VV[118],v4);          /*  *TEMP*          */
   T0 = ecl_fdefinition(VV[117]);
   T1 = ecl_function_dispatch(cl_env_copy,VV[201])(1, v2arguments) /*  INLINE-ARGS */;
   T2 = cl_apply(3, T0, T1, v3rest);
   ecl_function_dispatch(cl_env_copy,VV[194])(1, T2) /*  UNWIND-EXIT  */;
   value0 = ecl_function_dispatch(cl_env_copy,VV[202])(0) /*  CLOSE-INLINE-BLOCKS */;
   ecl_bds_unwind1(cl_env_copy);
   ecl_bds_unwind1(cl_env_copy);
   return value0;
  }
 }
}
/*      function definition for COERCE-LOCS                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L32coerce_locs(cl_narg narg, cl_object v1inlined_args, ...)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>3)) FEwrong_num_arguments_anonym();
 {
  cl_object v2types;
  cl_object v3args_to_be_saved;
  va_list args; va_start(args,v1inlined_args);
  {
   int i = 1;
   if (i >= narg) {
    v2types = ECL_NIL;
   } else {
    i++;
    v2types = va_arg(args,cl_object);
   }
   if (i >= narg) {
    v3args_to_be_saved = ECL_NIL;
   } else {
    i++;
    v3args_to_be_saved = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v4block_opened;
   v4block_opened = ECL_NIL;
   {
    cl_object v5lisp_type;
    cl_object v6loc;
    cl_object v7;
    v5lisp_type = ECL_NIL;
    v6loc = ECL_NIL;
    {
     cl_object v8;
     v8 = v1inlined_args;
     if (ecl_unlikely(!ECL_LISTP(v8))) FEtype_error_list(v8);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v7 = v8;
    }
    {
     cl_object v8;
     cl_object v9type;
     cl_object v10;
     value0 = v2types;
     if ((value0)!=ECL_NIL) { goto L11; }
     v8 = VV[121];
     goto L9;
L11:;
     v8 = value0;
     goto L9;
L9:;
     v9type = ECL_NIL;
     {
      cl_object v11;
      v11 = v8;
      if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v10 = v11;
     }
     {
      cl_object v11i;
      v11i = ecl_make_fixnum(0);
      {
       cl_object v12rep_type;
       v12rep_type = ECL_NIL;
       {
        cl_object v13;
        cl_object v14;
        v13 = ecl_list1(ECL_NIL);
        v14 = v13;
        if (!(ecl_endp(v7))) { goto L23; }
        goto L22;
L23:;
        {
         cl_object v15;
         v15 = _ecl_car(v7);
         v5lisp_type = ecl_car(v15);
         v15 = ecl_cdr(v15);
         v6loc = ecl_car(v15);
        }
        {
         cl_object v15;
         v15 = _ecl_cdr(v7);
         if (ecl_unlikely(!ECL_LISTP(v15))) FEtype_error_list(v15);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         v7 = v15;
        }
        if (!(ecl_endp(v10))) { goto L36; }
        goto L22;
L36:;
        v9type = _ecl_car(v10);
        {
         cl_object v15;
         v15 = _ecl_cdr(v10);
         if (ecl_unlikely(!ECL_LISTP(v15))) FEtype_error_list(v15);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         v10 = v15;
        }
L21:;
        v12rep_type = L4lisp_type__rep_type(v9type);
        {
         cl_object v15;
         v15 = v14;
         if (ecl_unlikely(ECL_ATOM(v15))) FEtype_error_cons(v15);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         T0 = v15;
        }
        if (Null(v3args_to_be_saved)) { goto L52; }
        if (Null(ecl_memql(v11i,v3args_to_be_saved))) { goto L52; }
        if ((L15loc_movable_p(v6loc))!=ECL_NIL) { goto L52; }
        {
         cl_object v15lcl;
         v15lcl = ecl_function_dispatch(cl_env_copy,VV[199])(2, VV[113], v12rep_type) /*  MAKE-LCL-VAR */;
         ecl_function_dispatch(cl_env_copy,VV[192])(0) /*  WT-NL      */;
         if ((v4block_opened)!=ECL_NIL) { goto L58; }
         v4block_opened = ECL_T;
         ecl_function_dispatch(cl_env_copy,VV[197])(0) /*  OPEN-INLINE-BLOCK */;
L58:;
         T2 = L11rep_type__c_name(v12rep_type);
         ecl_function_dispatch(cl_env_copy,VV[155])(4, T2, VV[114], v15lcl, VV[122]) /*  WT */;
         L20wt_coerce_loc(v12rep_type, v6loc);
         ecl_function_dispatch(cl_env_copy,VV[155])(1, VV[109]) /*  WT */;
         T1 = v15lcl;
         goto L51;
        }
L52:;
        T2 = L17loc_representation_type(v6loc);
        if (!(ecl_equal(v12rep_type,T2))) { goto L65; }
        T1 = v6loc;
        goto L51;
L65:;
        T1 = cl_list(3, VV[123], v12rep_type, v6loc);
L51:;
        v14 = ecl_list1(T1);
        (ECL_CONS_CDR(T0)=v14,T0);
        if (!(ecl_endp(v7))) { goto L67; }
        goto L22;
L67:;
        {
         cl_object v15;
         v15 = _ecl_car(v7);
         v5lisp_type = ecl_car(v15);
         v15 = ecl_cdr(v15);
         v6loc = ecl_car(v15);
        }
        {
         cl_object v15;
         v15 = _ecl_cdr(v7);
         if (ecl_unlikely(!ECL_LISTP(v15))) FEtype_error_list(v15);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         v7 = v15;
        }
        if (!(ecl_endp(v10))) { goto L80; }
        goto L22;
L80:;
        v9type = _ecl_car(v10);
        {
         cl_object v15;
         v15 = _ecl_cdr(v10);
         if (ecl_unlikely(!ECL_LISTP(v15))) FEtype_error_list(v15);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         v10 = v15;
        }
        v11i = ecl_one_plus(v11i);
        goto L21;
L22:;
        value0 = ecl_cdr(v13);
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
/*      function definition for WT-C-INLINE-LOC                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L33wt_c_inline_loc(cl_object volatile v1output_rep_type, cl_object volatile v2c_expression, cl_object volatile v3coerced_arguments, cl_object volatile v4side_effects, cl_object volatile v5output_vars)
{
 cl_object T0;
 cl_object volatile env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   volatile cl_object v6s;
   v6s = cl_make_string_input_stream(3, v2c_expression, ecl_make_fixnum(0), ECL_NIL);
   {
    volatile bool unwinding = FALSE;
    cl_index v7=ECL_STACK_INDEX(cl_env_copy),v8;
    ecl_frame_ptr next_fr;
    ecl_frs_push(cl_env_copy,ECL_PROTECT_TAG);
    if (__ecl_frs_push_result) {
      unwinding = TRUE; next_fr=cl_env_copy->nlj_fr;
    } else {
    if (Null(v5output_vars)) { goto L3; }
    if ((v5output_vars)==(ECL_SYM("VALUES",897))) { goto L3; }
    ecl_function_dispatch(cl_env_copy,VV[192])(0) /*  WT-NL           */;
L3:;
    {
     cl_object v9c;
     v9c = cl_read_char(3, v6s, ECL_NIL, ECL_NIL);
     goto L9;
L8:;
     if (!(((v9c)==ECL_CODE_CHAR((ecl_character)(64))))) { goto L12; }
     {
      cl_object v10object;
      v10object = cl_read(1, v6s);
      if (!(ECL_CONSP(v10object))) { goto L15; }
      T0 = ecl_car(v10object);
      if (!(ecl_equal(T0,ECL_SYM("RETURN",726)))) { goto L15; }
      if (!((v5output_vars)==(ECL_SYM("VALUES",897)))) { goto L18; }
      ecl_function_dispatch(cl_env_copy,VV[135])(1, VV[125]) /*  CMPERR */;
      goto L11;
L18:;
      {
       cl_object v11;
       cl_fixnum v12;
       value0 = ecl_cadr(v10object);
       if ((value0)!=ECL_NIL) { goto L22; }
       v11 = ecl_make_fixnum(0);
       goto L20;
L22:;
       v11 = value0;
       goto L20;
L20:;
       v12 = ecl_length(v5output_vars);
       if (!(ecl_lower(v11,ecl_make_fixnum(v12)))) { goto L25; }
       T0 = ecl_nth(ecl_to_size(v11),v5output_vars);
       ecl_function_dispatch(cl_env_copy,VV[155])(1, T0) /*  WT       */;
       goto L11;
L25:;
       ecl_function_dispatch(cl_env_copy,VV[135])(3, VV[126], v11, ecl_make_fixnum(v12)) /*  CMPERR */;
       goto L11;
      }
L15:;
      if (!(ECL_CONSP(v10object))) { goto L27; }
      T0 = ecl_car(v10object);
      if (!((T0)==(ECL_SYM("QUOTE",681)))) { goto L27; }
      v10object = ecl_cadr(v10object);
L27:;
      T0 = ecl_function_dispatch(cl_env_copy,VV[178])(3, v10object, VV[93], ECL_T) /*  ADD-OBJECT */;
      ecl_function_dispatch(cl_env_copy,VV[155])(1, T0) /*  WT        */;
      goto L11;
     }
L12:;
     if (!(((v9c)==ECL_CODE_CHAR((ecl_character)(35))))) { goto L31; }
     {
      cl_object v13k;
      cl_object v14next_char;
      cl_object v15index;
      v13k = cl_read_char(1, v6s);
      v14next_char = cl_peek_char(4, ECL_NIL, v6s, ECL_NIL, ECL_NIL);
      v15index = cl_digit_char_p(2, v13k, ecl_make_fixnum(36));
      if (!((v13k)==(CODE_CHAR(35)))) { goto L36; }
      ecl_function_dispatch(cl_env_copy,VV[155])(1, CODE_CHAR(35)) /*  WT */;
      goto L11;
L36:;
      if (v15index==ECL_NIL) { goto L40; }
      if (Null(v14next_char)) { goto L38; }
      if (Null(cl_alphanumericp(v14next_char))) { goto L38; }
      goto L39;
L40:;
L39:;
      ecl_function_dispatch(cl_env_copy,VV[155])(2, CODE_CHAR(35), v13k) /*  WT */;
      goto L11;
L38:;
      {
       cl_fixnum v16;
       v16 = ecl_length(v3coerced_arguments);
       if (!(ecl_lower(v15index,ecl_make_fixnum(v16)))) { goto L43; }
      }
      T0 = ecl_nth(ecl_to_size(v15index),v3coerced_arguments);
      ecl_function_dispatch(cl_env_copy,VV[155])(1, T0) /*  WT        */;
      goto L11;
L43:;
      ecl_function_dispatch(cl_env_copy,VV[135])(1, VV[127]) /*  CMPERR */;
      goto L11;
     }
L31:;
     cl_write_char(2, v9c, ecl_symbol_value(VV[92]));
L11:;
     v9c = cl_read_char(3, v6s, ECL_NIL, ECL_NIL);
L9:;
     if (v9c==ECL_NIL) { goto L47; }
     goto L8;
L47:;
     cl_env_copy->values[0] = ECL_NIL;
     cl_env_copy->nvalues = 1;
    }
    }
    ecl_frs_pop(cl_env_copy);
    v8=ecl_stack_push_values(cl_env_copy);
    cl_close(1, v6s);
    ecl_stack_pop_values(cl_env_copy,v8);
    if (unwinding) ecl_unwind(cl_env_copy,next_fr);
    ECL_STACK_SET_INDEX(cl_env_copy,v7);
    return cl_env_copy->values[0];
   }
  }
 }
}
/*      function definition for C-INLINE-SAFE-STRING                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L34c_inline_safe_string(cl_object v1constant_string)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2c;
   cl_object v3;
   cl_fixnum v4;
   cl_fixnum v5;
   v2c = ECL_NIL;
   {
    cl_object v6;
    v6 = v1constant_string;
    if (ecl_unlikely(!ECL_VECTORP(v6))) FEtype_error_vector(v6);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v3 = v6;
   }
   v4 = 0;
   v5 = 0;
   {
    cl_object v6;
    cl_object v7;
    v6 = ecl_list1(ECL_NIL);
    v7 = v6;
    v5 = ecl_length(v3);
L10:;
    if (!((v4)>=(v5))) { goto L14; }
    goto L11;
L14:;
    {
     cl_object v8;
     v8 = v3;
     T1 = v8;
     {
      cl_fixnum v9;
      {
       cl_fixnum v10;
       v10 = v4;
       if (ecl_unlikely((v10)>=(v8)->vector.dim))
           FEwrong_index(ECL_NIL,v8,-1,ecl_make_fixnum(v10),(v8)->vector.dim);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v9 = v10;
      }
      v2c = ecl_aref_unsafe(T1,v9);
     }
    }
    {
     cl_object v8;
     v8 = ecl_make_integer((v4)+1);
     {
      bool v9;
      v9 = ECL_FIXNUMP(v8);
      if (ecl_unlikely(!(v9)))
         FEwrong_type_argument(ECL_SYM("FIXNUM",374),v8);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
     }
     v4 = ecl_fixnum(v8);
    }
    if (!(((v2c)==ECL_CODE_CHAR((ecl_character)(35))))) { goto L32; }
    goto L29;
    goto L30;
L32:;
    goto L30;
L30:;
    if (!(((v2c)==ECL_CODE_CHAR((ecl_character)(64))))) { goto L27; }
    goto L28;
L29:;
L28:;
    {
     cl_object v8;
     v8 = v7;
     if (ecl_unlikely(ECL_ATOM(v8))) FEtype_error_cons(v8);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     T1 = v8;
    }
    v7 = ecl_list1(v2c);
    (ECL_CONS_CDR(T1)=v7,T1);
L27:;
    {
     cl_object v8;
     v8 = v7;
     if (ecl_unlikely(ECL_ATOM(v8))) FEtype_error_cons(v8);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     T1 = v8;
    }
    v7 = ecl_list1(v2c);
    (ECL_CONS_CDR(T1)=v7,T1);
    goto L10;
L11:;
    T0 = ecl_cdr(v6);
    goto L1;
   }
  }
L1:;
  T1 = cl_concatenate(2, ECL_SYM("STRING",807), T0);
  value0 = ecl_function_dispatch(cl_env_copy,VV[206])(1, T1) /*  C-FILTERED-STRING */;
  return value0;
 }
}

#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/cmp/cmpffi.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclQFErEBb7_mKX6lq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CMP;CMPFFI.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclQFErEBb7_mKX6lq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  ecl_cmp_defun(VV[132]);                         /*  REP-TYPE-RECORD-UNSAFE */
  ecl_cmp_defun(VV[134]);                         /*  REP-TYPE-RECORD */
  ecl_cmp_defun(VV[136]);                         /*  REP-TYPE->LISP-TYPE */
  ecl_cmp_defun(VV[138]);                         /*  LISP-TYPE->REP-TYPE */
  ecl_cmp_defun(VV[141]);                         /*  C-NUMBER-REP-TYPE-P */
  ecl_cmp_defun(VV[143]);                         /*  C-INTEGER-REP-TYPE-P */
  ecl_cmp_defun(VV[145]);                         /*  C-INTEGER-REP-TYPE-BITS */
  ecl_cmp_defun(VV[147]);                         /*  C-NUMBER-TYPE-P */
  ecl_cmp_defun(VV[148]);                         /*  C-INTEGER-TYPE-P */
  ecl_cmp_defun(VV[149]);                         /*  C-INTEGER-TYPE-BITS */
  ecl_cmp_defun(VV[151]);                         /*  REP-TYPE->C-NAME */
  ecl_cmp_defun(VV[153]);                         /*  LISP-TYPE-P     */
  ecl_cmp_defun(VV[154]);                         /*  WT-TO-OBJECT-CONVERSION */
  ecl_cmp_defun(VV[157]);                         /*  WT-FROM-OBJECT-CONVERSION */
  ecl_cmp_defun(VV[161]);                         /*  LOC-MOVABLE-P   */
  ecl_cmp_defun(VV[162]);                         /*  LOC-TYPE        */
  ecl_cmp_defun(VV[167]);                         /*  LOC-REPRESENTATION-TYPE */
  ecl_cmp_defun(VV[169]);                         /*  WT-COERCE-LOC   */
  ecl_cmp_defun(VV[173]);                         /*  C1CLINES        */
  ecl_cmp_defun(VV[174]);                         /*  OUTPUT-CLINES   */
  ecl_cmp_defun(VV[179]);                         /*  C1C-INLINE      */
  ecl_cmp_defun(VV[188]);                         /*  C1C-PROGN       */
  ecl_cmp_defun(VV[191]);                         /*  C2C-PROGN       */
  ecl_cmp_defun(VV[195]);                         /*  PRODUCE-INLINE-LOC */
  ecl_cmp_defun(VV[200]);                         /*  C2C-INLINE      */
  ecl_cmp_defun(VV[203]);                         /*  COERCE-LOCS     */
  ecl_cmp_defun(VV[204]);                         /*  WT-C-INLINE-LOC */
  ecl_cmp_defun(VV[205]);                         /*  C-INLINE-SAFE-STRING */
}
