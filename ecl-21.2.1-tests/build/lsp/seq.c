/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:LSP;SEQ.LSP                                       */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/lsp/seq.eclh"
/*      function definition for ERROR-NOT-A-SEQUENCE                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L1error_not_a_sequence(cl_object v1value)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = si_signal_type_error(v1value, ECL_SYM("SEQUENCE",743));
  return value0;
 }
}
/*      function definition for ERROR-SEQUENCE-INDEX                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L2error_sequence_index(cl_object v1sequence, cl_object v2index)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_list(2, v2index, v1sequence);
  value0 = cl_error(9, ECL_SYM("SIMPLE-TYPE-ERROR",775), ECL_SYM("DATUM",1236), v2index, ECL_SYM("EXPECTED-TYPE",1254), ECL_SYM("UNSIGNED-BYTE",887), ECL_SYM("FORMAT-CONTROL",1263), VV[0], ECL_SYM("FORMAT-ARGUMENTS",1262), T0);
  return value0;
 }
}
/*      function definition for ERROR-SEQUENCE-TYPE                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L3error_sequence_type(cl_object v1type)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_vector(0);
  T1 = ecl_list1(v1type);
  value0 = cl_error(9, ECL_SYM("SIMPLE-TYPE-ERROR",775), ECL_SYM("DATUM",1236), T0, ECL_SYM("EXPECTED-TYPE",1254), v1type, ECL_SYM("FORMAT-CONTROL",1263), VV[1], ECL_SYM("FORMAT-ARGUMENTS",1262), T1);
  return value0;
 }
}
/*      function definition for ERROR-SEQUENCE-LENGTH                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L4error_sequence_length(cl_object v1object, cl_object v2type, cl_object v3size)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_list(2, v3size, v2type);
  value0 = cl_error(9, ECL_SYM("SIMPLE-TYPE-ERROR",775), ECL_SYM("FORMAT-CONTROL",1263), VV[2], ECL_SYM("FORMAT-ARGUMENTS",1262), T0, ECL_SYM("EXPECTED-TYPE",1254), v2type, ECL_SYM("DATUM",1236), v1object);
  return value0;
 }
}
/*      function definition for CLOSEST-SEQUENCE-TYPE                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L5closest_sequence_type(cl_object v1type)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2elt_type;
   cl_object v3length;
   cl_object v4name;
   cl_object v5args;
   v2elt_type = ECL_NIL;
   v3length = ECL_NIL;
   v4name = ECL_NIL;
   v5args = ECL_NIL;
   if (!(ECL_CONSP(v1type))) { goto L6; }
   v4name = ecl_car(v1type);
   v5args = ecl_cdr(v1type);
   goto L5;
L6:;
   if (!(ECL_INSTANCEP(v1type))) { goto L11; }
   v4name = (cl_env_copy->function=(ECL_SYM("CLASS-NAME",936)->symbol.gfdef))->cfun.entry(1, v1type) /*  CLASS-NAME */;
   v5args = ECL_NIL;
   goto L5;
L11:;
   v4name = v1type;
   v5args = ECL_NIL;
L5:;
   if (!((v4name)==(ECL_SYM("LIST",483)))) { goto L20; }
   v2elt_type = ECL_SYM("LIST",483);
   v3length = ECL_SYM("*",20);
   goto L19;
L20:;
   if (!((v4name)==(ECL_SYM("VECTOR",900)))) { goto L26; }
   if (!(ecl_endp(v5args))) { goto L31; }
   v2elt_type = ECL_T;
   goto L30;
L31:;
   v2elt_type = ecl_car(v5args);
L30:;
   T0 = ecl_cdr(v5args);
   if (!(ecl_endp(T0))) { goto L34; }
   v3length = ECL_SYM("*",20);
   goto L33;
L34:;
   v3length = ecl_cadr(v5args);
L33:;
   goto L19;
L26:;
   if (!((v4name)==(ECL_SYM("SIMPLE-VECTOR",776)))) { goto L36; }
   v2elt_type = ECL_T;
   if (!(ecl_endp(v5args))) { goto L42; }
   v3length = ECL_SYM("*",20);
   goto L41;
L42:;
   v3length = ecl_car(v5args);
L41:;
   goto L19;
L36:;
   if (!((v4name)==(ECL_SYM("BASE-STRING",123)))) { goto L49; }
   goto L46;
   goto L47;
L49:;
   goto L47;
L47:;
   if (!((v4name)==(ECL_SYM("SIMPLE-BASE-STRING",766)))) { goto L44; }
   goto L45;
L46:;
L45:;
   v2elt_type = ECL_SYM("BASE-CHAR",122);
   if (!(ecl_endp(v5args))) { goto L55; }
   v3length = ECL_SYM("*",20);
   goto L54;
L55:;
   v3length = ecl_car(v5args);
L54:;
   goto L19;
L44:;
   if (!((v4name)==(ECL_SYM("STRING",807)))) { goto L62; }
   goto L59;
   goto L60;
L62:;
   goto L60;
L60:;
   if (!((v4name)==(ECL_SYM("SIMPLE-STRING",773)))) { goto L57; }
   goto L58;
L59:;
L58:;
   v2elt_type = ECL_SYM("CHARACTER",224);
   if (!(ecl_endp(v5args))) { goto L68; }
   v3length = ECL_SYM("*",20);
   goto L67;
L68:;
   v3length = ecl_car(v5args);
L67:;
   goto L19;
L57:;
   if (!((v4name)==(ECL_SYM("BIT-VECTOR",136)))) { goto L75; }
   goto L72;
   goto L73;
L75:;
   goto L73;
L73:;
   if (!((v4name)==(ECL_SYM("SIMPLE-BIT-VECTOR",767)))) { goto L70; }
   goto L71;
L72:;
L71:;
   v2elt_type = ECL_SYM("BIT",125);
   if (!(ecl_endp(v5args))) { goto L81; }
   v3length = ECL_SYM("*",20);
   goto L80;
L81:;
   v3length = ecl_car(v5args);
L80:;
   goto L19;
L70:;
   if (!((v4name)==(ECL_SYM("ARRAY",98)))) { goto L88; }
   goto L85;
   goto L86;
L88:;
   goto L86;
L86:;
   if (!((v4name)==(ECL_SYM("SIMPLE-ARRAY",765)))) { goto L83; }
   goto L84;
L85:;
L84:;
   {
    cl_object v6dimension_spec;
    v6dimension_spec = ecl_cadr(v5args);
    if (!((v6dimension_spec)==(ecl_make_fixnum(1)))) { goto L93; }
    v3length = ECL_SYM("*",20);
    goto L91;
L93:;
    if (!(ECL_CONSP(v6dimension_spec))) { goto L96; }
    T0 = ecl_cdr(v6dimension_spec);
    if (!(T0==ECL_NIL)) { goto L96; }
    v3length = ecl_car(v6dimension_spec);
    goto L91;
L96:;
    L3error_sequence_type(v1type);
   }
L91:;
   T0 = ecl_car(v5args);
   v2elt_type = cl_upgraded_array_element_type(1, T0);
   goto L19;
L83:;
   {
    cl_object v6;
    v6 = VV[14];
    goto L104;
L103:;
    {
     cl_object v7i;
     v7i = ecl_car(v6);
     T0 = ecl_car(v7i);
     if (Null(cl_subtypep(2, v1type, T0))) { goto L108; }
     v2elt_type = ecl_cdr(v7i);
     v3length = ECL_SYM("*",20);
     if ((v2elt_type)!=ECL_NIL) { goto L114; }
     L3error_sequence_type(v1type);
L114:;
     goto L19;
L108:;
    }
    v6 = ecl_cdr(v6);
L104:;
    if (Null(v6)) { goto L118; }
    goto L103;
L118:;
    if (Null(cl_subtypep(2, v1type, ECL_SYM("VECTOR",900)))) { goto L120; }
    cl_error(2, VV[15], v1type);
    goto L19;
L120:;
    L3error_sequence_type(v1type);
   }
L19:;
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v3length;
   cl_env_copy->values[0] = v2elt_type;
   return cl_env_copy->values[0];
  }
 }
}
/*      function definition for MAKE-SEQUENCE                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_make_sequence(cl_narg narg, cl_object v1type, cl_object v2size, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 {
  cl_fixnum v3size;
  cl_object v4initial_element;
  cl_object v5iesp;
  ecl_va_list args; ecl_va_start(args,v2size,narg,2);
  v3size = ecl_to_fixnum(v2size);
  {
   cl_object keyvars[2];
   cl_parse_key(args,1,cl_make_sequencekeys,keyvars,NULL,FALSE);
   ecl_va_end(args);
   v4initial_element = keyvars[0];
   v5iesp = keyvars[1];
  }
  {
   cl_object v6sequence;
   v6sequence = ECL_NIL;
   {
    cl_object v8;                                 /*  ELEMENT-TYPE    */
    cl_object v9;                                 /*  LENGTH          */
    value0 = L5closest_sequence_type(v1type);
    {
     const int v10 = cl_env_copy->nvalues;
     v8 = value0;
     cl_object v11;
     v11 = (v10<=1)? ECL_NIL : cl_env_copy->values[1];
     v9 = v11;
    }
    if (!((v8)==(ECL_SYM("LIST",483)))) { goto L4; }
    v6sequence = cl_make_list(3, ecl_make_fixnum(v3size), ECL_SYM("INITIAL-ELEMENT",1277), v4initial_element);
    if ((cl_subtypep(2, ECL_SYM("LIST",483), v1type))!=ECL_NIL) { goto L3; }
    if (Null(cl_subtypep(2, v1type, ECL_SYM("NULL",607)))) { goto L13; }
    if ((v3size)>0) { goto L10; }
    goto L11;
L13:;
    goto L11;
L11:;
    if (Null(cl_subtypep(2, v1type, ECL_SYM("CONS",253)))) { goto L3; }
    if (!((v3size)==0)) { goto L3; }
    goto L9;
L10:;
L9:;
    T0 = cl_make_list(3, ecl_make_fixnum(v3size), ECL_SYM("INITIAL-ELEMENT",1277), v4initial_element);
    L4error_sequence_length(T0, v1type, ecl_make_fixnum(0));
    goto L3;
L4:;
    if (!((v8)==(ECL_SYM("*",20)))) { goto L19; }
    T0 = ECL_T;
    goto L18;
L19:;
    T0 = v8;
L18:;
    v6sequence = si_make_vector(T0, ecl_make_fixnum(v3size), ECL_NIL, ECL_NIL, ECL_NIL, ECL_NIL);
    if (Null(v5iesp)) { goto L21; }
    si_fill_array_with_elt(v6sequence, v4initial_element, ecl_make_fixnum(0), ECL_NIL);
L21:;
    if ((v9)==(ECL_SYM("*",20))) { goto L3; }
    if ((v9)==(ecl_make_fixnum(v3size))) { goto L3; }
    L4error_sequence_length(v6sequence, v1type, ecl_make_fixnum(v3size));
L3:;
    value0 = v6sequence;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      function definition for MAKE-SEQ-ITERATOR                     */
/*      optimize speed 1, debug 1, space 1, safety 0                  */
static cl_object L6make_seq_iterator(cl_narg narg, cl_object v1sequence, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 cl_fixnum v2start;
 va_list args; va_start(args,v1sequence);
 {
  int i = 1;
  if (i >= narg) {
   v2start = 0;
  } else {
   i++;
   v2start = ecl_fixnum(va_arg(args,cl_object));
  }
 }
 va_end(args);
 if (!(1)) { goto L2; }
 if (!((v2start)<0)) { goto L4; }
 value0 = L2error_sequence_index(v1sequence, ecl_make_fixnum(v2start));
 return value0;
L4:;
 if (!(ECL_LISTP(v1sequence))) { goto L6; }
 value0 = ecl_nthcdr(v2start,v1sequence);
 cl_env_copy->nvalues = 1;
 return value0;
L6:;
 if (!(ECL_VECTORP(v1sequence))) { goto L8; }
 {
  cl_fixnum v3;
  v3 = (v1sequence)->vector.fillp;
  if (!((v2start)<(v3))) { goto L11; }
 }
 value0 = ecl_make_fixnum(v2start);
 cl_env_copy->nvalues = 1;
 return value0;
L11:;
 value0 = ECL_NIL;
 cl_env_copy->nvalues = 1;
 return value0;
L8:;
 value0 = L1error_not_a_sequence(v1sequence);
 return value0;
L2:;
 if (ECL_LISTP(v1sequence)) { goto L13; }
 if (ECL_VECTORP(v1sequence)) { goto L13; }
 value0 = L1error_not_a_sequence(v1sequence);
 return value0;
L13:;
 if (!(ECL_FIXNUMP(ecl_make_fixnum(v2start))||ECL_BIGNUMP(ecl_make_fixnum(v2start)))) { goto L16; }
 value0 = ECL_NIL;
 cl_env_copy->nvalues = 1;
 return value0;
L16:;
 value0 = L2error_sequence_index(v1sequence, ecl_make_fixnum(v2start));
 return value0;
}
/*      function definition for SEQ-ITERATOR-REF                      */
/*      optimize speed 1, debug 1, space 1, safety 0                  */
static cl_object L7seq_iterator_ref(cl_object v1sequence, cl_object v2iterator)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 if (!(ECL_FIXNUMP(v2iterator))) { goto L1; }
 value0 = ecl_aref_unsafe(v1sequence,ecl_fixnum(v2iterator));
 cl_env_copy->nvalues = 1;
 return value0;
L1:;
 value0 = ECL_CONS_CAR(v2iterator);
 cl_env_copy->nvalues = 1;
 return value0;
}
/*      function definition for SEQ-ITERATOR-SET                      */
/*      optimize speed 1, debug 1, space 1, safety 0                  */
static cl_object L8seq_iterator_set(cl_object v1sequence, cl_object v2iterator, cl_object v3value)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 if (!(ECL_FIXNUMP(v2iterator))) { goto L1; }
 value0 = ecl_aset_unsafe(v1sequence,ecl_fixnum(v2iterator),v3value);
 cl_env_copy->nvalues = 1;
 return value0;
L1:;
 {
  cl_object v4;
  v4 = v2iterator;
  {
   cl_object v5;
   v5 = v3value;
   (ECL_CONS_CAR(v4)=v5,v4);
   value0 = v5;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for SEQ-ITERATOR-NEXT                     */
/*      optimize speed 1, debug 1, space 1, safety 0                  */
static cl_object L9seq_iterator_next(cl_object v1sequence, cl_object v2iterator)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 if (!(ECL_FIXNUMP(v2iterator))) { goto L1; }
 {
  cl_fixnum v3aux;
  v3aux = ecl_fixnum(ecl_one_plus(v2iterator));
  {
   cl_fixnum v4;
   v4 = (v1sequence)->vector.fillp;
   if (!((v3aux)<(v4))) { goto L5; }
  }
  value0 = ecl_make_fixnum(v3aux);
  cl_env_copy->nvalues = 1;
  return value0;
L5:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
L1:;
 if (!(ECL_ATOM(v2iterator))) { goto L7; }
 value0 = L1error_not_a_sequence(v2iterator);
 return value0;
L7:;
 v2iterator = ECL_CONS_CDR(v2iterator);
 if (ECL_LISTP(v2iterator)) { goto L11; }
 L1error_not_a_sequence(v2iterator);
L11:;
 value0 = v2iterator;
 cl_env_copy->nvalues = 1;
 return value0;
}
/*      function definition for SEQ-ITERATOR-LIST-POP                 */
/*      optimize speed 1, debug 1, space 1, safety 0                  */
static cl_object L10seq_iterator_list_pop(cl_object v1values_list, cl_object v2seq_list, cl_object v3iterator_list)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 {
  cl_object v4it_list;
  cl_object v5v_list;
  v4it_list = v3iterator_list;
  v5v_list = v1values_list;
  goto L5;
L4:;
  {
   cl_object v6it;
   cl_object v7sequence;
   v6it = ECL_CONS_CAR(v4it_list);
   v7sequence = ECL_CONS_CAR(v2seq_list);
   if (!(v6it==ECL_NIL)) { goto L11; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L11:;
   if (!(ECL_FIXNUMP(v6it))) { goto L13; }
   {
    cl_fixnum v8n;
    v8n = ecl_fixnum(v6it);
    T0 = ecl_aref_unsafe(v7sequence,v8n);
    (ECL_CONS_CAR(v5v_list)=T0,v5v_list);
    v8n = (v8n)+(1);
    T1 = ecl_make_fixnum(v8n);
    {
     cl_fixnum v9;
     v9 = (v7sequence)->vector.fillp;
     if (!(ecl_lower(T1,ecl_make_fixnum(v9)))) { goto L20; }
    }
    T0 = ecl_make_fixnum(v8n);
    goto L18;
L20:;
    T0 = ECL_NIL;
    goto L18;
L18:;
    (ECL_CONS_CAR(v4it_list)=T0,v4it_list);
    goto L10;
   }
L13:;
   if (!(ECL_ATOM(v6it))) { goto L24; }
   L1error_not_a_sequence(v6it);
   goto L10;
L24:;
   T0 = ECL_CONS_CAR(v6it);
   (ECL_CONS_CAR(v5v_list)=T0,v5v_list);
   v6it = ECL_CONS_CDR(v6it);
   if (ECL_LISTP(v6it)) { goto L27; }
   L1error_not_a_sequence(v6it);
L27:;
   (ECL_CONS_CAR(v4it_list)=v6it,v4it_list);
L10:;
   v5v_list = ECL_CONS_CDR(v5v_list);
   v4it_list = ECL_CONS_CDR(v4it_list);
   v2seq_list = ECL_CONS_CDR(v2seq_list);
  }
L5:;
  if (v5v_list==ECL_NIL) { goto L35; }
  goto L4;
L35:;
  value0 = v1values_list;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for COERCE-TO-LIST                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L11coerce_to_list(cl_object v1object)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ECL_LISTP(v1object))) { goto L1; }
  value0 = v1object;
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  {
   cl_object v2;
   cl_object v3it;
   cl_object v4output;
   v2 = L6make_seq_iterator(1, v1object);
   v3it = v2;
   v4output = ECL_NIL;
   goto L8;
L7:;
   T0 = L7seq_iterator_ref(v1object, v3it);
   v4output = CONS(T0,v4output);
   v3it = L9seq_iterator_next(v1object, v3it);
L8:;
   if (v3it==ECL_NIL) { goto L14; }
   goto L7;
L14:;
   value0 = cl_nreverse(v4output);
   return value0;
  }
 }
}
/*      function definition for COERCE-TO-VECTOR                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L12coerce_to_vector(cl_object v1object, cl_object v2elt_type, cl_object v3length, cl_object v4simple_array_p)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v5output;
   v5output = v1object;
   if (!(ECL_VECTORP(v1object))) { goto L5; }
   if (v4simple_array_p==ECL_NIL) { goto L8; }
   if (Null(ecl_function_dispatch(cl_env_copy,VV[35])(1, v1object) /*  SIMPLE-ARRAY-P */)) { goto L5; }
   goto L7;
L8:;
L7:;
   T0 = cl_array_element_type(v1object);
   if ((T0)==(v2elt_type)) { goto L2; }
   goto L3;
L5:;
   goto L3;
L3:;
   {
    cl_object v6final_length;
    if (!((v3length)==(ECL_SYM("*",20)))) { goto L11; }
    v6final_length = ecl_make_fixnum(ecl_length(v1object));
    goto L10;
L11:;
    v6final_length = v3length;
L10:;
    v5output = si_make_vector(v2elt_type, v6final_length, ECL_NIL, ECL_NIL, ECL_NIL, ecl_make_fixnum(0));
    {
     cl_object v7;
     cl_object v8i;
     cl_fixnum v9j;
     v7 = L6make_seq_iterator(1, v1object);
     v8i = v7;
     v9j = 0;
     goto L21;
L20:;
     {
      cl_object v10;
      v10 = v5output;
      T0 = v10;
      {
       cl_fixnum v11;
       {
        cl_fixnum v12;
        v12 = v9j;
        if (ecl_unlikely((v12)>=(v10)->vector.dim))
           FEwrong_index(ECL_NIL,v10,-1,ecl_make_fixnum(v12),(v10)->vector.dim);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v11 = v12;
       }
       T1 = L7seq_iterator_ref(v1object, v8i);
       ecl_aset_unsafe(T0,v11,T1);
      }
     }
     v8i = L9seq_iterator_next(v5output, v8i);
     v9j = ecl_to_fixnum(ecl_make_integer((v9j)+1));
L21:;
     if (ecl_number_equalp(ecl_make_fixnum(v9j),v6final_length)) { goto L32; }
     goto L20;
L32:;
     v1object = v5output;
    }
   }
L2:;
   value0 = v5output;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for CONCATENATE                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_concatenate(cl_narg narg, cl_object v1result_type, ...)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2sequences;
  ecl_va_list args; ecl_va_start(args,v1result_type,narg,1);
  v2sequences = cl_grab_rest_args(args);
  ecl_va_end(args);
  {
   cl_object v3length_list;
   cl_object v4output;
   cl_object v5sequences;
   cl_object v6i;
   {
    cl_object v7;
    v7 = (ECL_SYM("LENGTH",478)->symbol.gfdef);
    {
     cl_object v8;
     cl_object v9;
     v8 = ECL_NIL;
     {
      cl_object v10;
      v10 = v2sequences;
      if (ecl_unlikely(!ECL_LISTP(v10))) FEtype_error_list(v10);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v9 = v10;
     }
     {
      cl_object v10;
      cl_object v11;
      v10 = ecl_list1(ECL_NIL);
      v11 = v10;
L9:;
      if (!(ecl_endp(v9))) { goto L11; }
      goto L10;
L11:;
      v8 = _ecl_car(v9);
      {
       cl_object v12;
       v12 = _ecl_cdr(v9);
       if (ecl_unlikely(!ECL_LISTP(v12))) FEtype_error_list(v12);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v9 = v12;
      }
      {
       cl_object v12;
       v12 = v11;
       if (ecl_unlikely(ECL_ATOM(v12))) FEtype_error_cons(v12);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       T0 = v12;
      }
      T1 = ecl_function_dispatch(cl_env_copy,v7)(1, v8);
      v11 = ecl_list1(T1);
      (ECL_CONS_CDR(T0)=v11,T0);
      goto L9;
L10:;
      v3length_list = ecl_cdr(v10);
      goto L1;
     }
    }
   }
L1:;
   T0 = (ECL_SYM("+",16)->symbol.gfdef);
   T1 = cl_apply(2, T0, v3length_list);
   v4output = cl_make_sequence(2, v1result_type, T1);
   v5sequences = v2sequences;
   v6i = L6make_seq_iterator(1, v4output);
   goto L33;
L32:;
   {
    cl_object v7s;
    cl_object v8j;
    v7s = ecl_car(v5sequences);
    v8j = L6make_seq_iterator(1, v7s);
    goto L40;
L39:;
    T0 = L7seq_iterator_ref(v7s, v8j);
    L8seq_iterator_set(v4output, v6i, T0);
    v6i = L9seq_iterator_next(v4output, v6i);
    v8j = L9seq_iterator_next(v7s, v8j);
L40:;
    if (v8j==ECL_NIL) { goto L47; }
    goto L39;
L47:;
   }
   v3length_list = ecl_cdr(v3length_list);
   v5sequences = ecl_cdr(v5sequences);
L33:;
   if (v5sequences==ECL_NIL) { goto L53; }
   goto L32;
L53:;
   value0 = v4output;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for MAP                                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_map(cl_narg narg, cl_object v1result_type, cl_object v2function, cl_object v3sequence, ...)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<3)) FEwrong_num_arguments_anonym();
 {
  cl_object v4more_sequences;
  ecl_va_list args; ecl_va_start(args,v3sequence,narg,3);
  v4more_sequences = cl_grab_rest_args(args);
  ecl_va_end(args);
  {
   cl_object v5sequences;
   cl_object v6function;
   cl_object v7output;
   cl_object v8it;
   v5sequences = CONS(v3sequence,v4more_sequences);
   v6function = si_coerce_to_function(v2function);
   v7output = ECL_NIL;
   v8it = ECL_NIL;
   if (Null(v1result_type)) { goto L5; }
   {
    cl_object v9l;
    v9l = ecl_make_fixnum(ecl_length(v3sequence));
    if (Null(v4more_sequences)) { goto L8; }
    T0 = (ECL_SYM("MIN",559)->symbol.gfdef);
    T1 = (ECL_SYM("LENGTH",478)->symbol.gfdef);
    v9l = cl_reduce(6, T0, v4more_sequences, VV[24], v9l, ECL_SYM("KEY",1288), T1);
L8:;
    v7output = cl_make_sequence(2, v1result_type, v9l);
    v8it = L6make_seq_iterator(1, v7output);
   }
L5:;
   {
    cl_object v9;
    cl_object v10elt_list;
    {
     cl_object v11;
     v11 = (VV[17]->symbol.gfdef);
     {
      cl_object v12;
      cl_object v13;
      v12 = ECL_NIL;
      {
       cl_object v14;
       v14 = v5sequences;
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
L24:;
       if (!(ecl_endp(v13))) { goto L26; }
       goto L25;
L26:;
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
       goto L24;
L25:;
       v9 = ecl_cdr(v14);
       goto L16;
      }
     }
    }
L16:;
    v10elt_list = cl_copy_list(v5sequences);
    goto L45;
L44:;
    {
     cl_object v11value;
     v11value = cl_apply(2, v6function, v10elt_list);
     if (Null(v1result_type)) { goto L47; }
     L8seq_iterator_set(v7output, v8it, v11value);
     v8it = L9seq_iterator_next(v7output, v8it);
    }
L47:;
L45:;
    v10elt_list = L10seq_iterator_list_pop(v10elt_list, v5sequences, v9);
    if (v10elt_list==ECL_NIL) { goto L52; }
    goto L44;
L52:;
    value0 = v7output;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      function definition for SOME                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_some(cl_narg narg, cl_object v1predicate, cl_object v2sequence, ...)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 {
  cl_object v3more_sequences;
  ecl_va_list args; ecl_va_start(args,v2sequence,narg,2);
  v3more_sequences = cl_grab_rest_args(args);
  ecl_va_end(args);
  {
   cl_object v4;
   cl_object v5;
   cl_object v6elt_list;
   v4 = CONS(v2sequence,v3more_sequences);
   {
    cl_object v7;
    v7 = (VV[17]->symbol.gfdef);
    {
     cl_object v8;
     cl_object v9;
     v8 = ECL_NIL;
     v9 = v4;
     {
      cl_object v10;
      cl_object v11;
      v10 = ecl_list1(ECL_NIL);
      v11 = v10;
L8:;
      if (!(v9==ECL_NIL)) { goto L10; }
      goto L9;
L10:;
      v8 = ECL_CONS_CAR(v9);
      v9 = ECL_CONS_CDR(v9);
      T0 = v11;
      T1 = (cl_env_copy->function=v7)->cfun.entry(1, v8);
      v11 = ecl_list1(T1);
      (ECL_CONS_CDR(T0)=v11,T0);
      goto L8;
L9:;
      v5 = _ecl_cdr(v10);
      goto L2;
     }
    }
   }
L2:;
   v6elt_list = cl_copy_list(v4);
   goto L24;
L23:;
   {
    cl_object v7x;
    v7x = cl_apply(2, v1predicate, v6elt_list);
    if (Null(v7x)) { goto L26; }
    value0 = v7x;
    cl_env_copy->nvalues = 1;
    return value0;
   }
L26:;
L24:;
   v6elt_list = L10seq_iterator_list_pop(v6elt_list, v4, v5);
   if (v6elt_list==ECL_NIL) { goto L29; }
   goto L23;
L29:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for EVERY                                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_every(cl_narg narg, cl_object v1predicate, cl_object v2sequence, ...)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 {
  cl_object v3more_sequences;
  ecl_va_list args; ecl_va_start(args,v2sequence,narg,2);
  v3more_sequences = cl_grab_rest_args(args);
  ecl_va_end(args);
  {
   cl_object v4;
   cl_object v5;
   cl_object v6elt_list;
   v4 = CONS(v2sequence,v3more_sequences);
   {
    cl_object v7;
    v7 = (VV[17]->symbol.gfdef);
    {
     cl_object v8;
     cl_object v9;
     v8 = ECL_NIL;
     v9 = v4;
     {
      cl_object v10;
      cl_object v11;
      v10 = ecl_list1(ECL_NIL);
      v11 = v10;
L8:;
      if (!(v9==ECL_NIL)) { goto L10; }
      goto L9;
L10:;
      v8 = ECL_CONS_CAR(v9);
      v9 = ECL_CONS_CDR(v9);
      T0 = v11;
      T1 = (cl_env_copy->function=v7)->cfun.entry(1, v8);
      v11 = ecl_list1(T1);
      (ECL_CONS_CDR(T0)=v11,T0);
      goto L8;
L9:;
      v5 = _ecl_cdr(v10);
      goto L2;
     }
    }
   }
L2:;
   v6elt_list = cl_copy_list(v4);
   goto L24;
L23:;
   if ((cl_apply(2, v1predicate, v6elt_list))!=ECL_NIL) { goto L26; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L26:;
L24:;
   v6elt_list = L10seq_iterator_list_pop(v6elt_list, v4, v5);
   if (v6elt_list==ECL_NIL) { goto L28; }
   goto L23;
L28:;
   value0 = ECL_T;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for EVERY*                                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L13every_(cl_narg narg, cl_object v1predicate, ...)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2sequences;
  ecl_va_list args; ecl_va_start(args,v1predicate,narg,1);
  v2sequences = cl_grab_rest_args(args);
  ecl_va_end(args);
  T0 = (ECL_SYM("=",76)->symbol.gfdef);
  {
   cl_object v3;
   v3 = (ECL_SYM("LENGTH",478)->symbol.gfdef);
   {
    cl_object v4;
    cl_object v5;
    v4 = ECL_NIL;
    {
     cl_object v6;
     v6 = v2sequences;
     if (ecl_unlikely(!ECL_LISTP(v6))) FEtype_error_list(v6);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v5 = v6;
    }
    {
     cl_object v6;
     cl_object v7;
     v6 = ecl_list1(ECL_NIL);
     v7 = v6;
L13:;
     if (!(ecl_endp(v5))) { goto L15; }
     goto L14;
L15:;
     v4 = _ecl_car(v5);
     {
      cl_object v8;
      v8 = _ecl_cdr(v5);
      if (ecl_unlikely(!ECL_LISTP(v8))) FEtype_error_list(v8);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v5 = v8;
     }
     {
      cl_object v8;
      v8 = v7;
      if (ecl_unlikely(ECL_ATOM(v8))) FEtype_error_cons(v8);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      T2 = v8;
     }
     T3 = ecl_function_dispatch(cl_env_copy,v3)(1, v4);
     v7 = ecl_list1(T3);
     (ECL_CONS_CDR(T2)=v7,T2);
     goto L13;
L14:;
     T1 = ecl_cdr(v6);
     goto L5;
    }
   }
  }
L5:;
  if (Null(cl_apply(2, T0, T1))) { goto L2; }
  T0 = (ECL_SYM("EVERY",344)->symbol.gfdef);
  value0 = cl_apply(3, T0, v1predicate, v2sequences);
  return value0;
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for NOTANY                                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_notany(cl_narg narg, cl_object v1predicate, cl_object v2sequence, ...)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 {
  cl_object v3more_sequences;
  ecl_va_list args; ecl_va_start(args,v2sequence,narg,2);
  v3more_sequences = cl_grab_rest_args(args);
  ecl_va_end(args);
  T0 = (ECL_SYM("SOME",788)->symbol.gfdef);
  T1 = cl_apply(4, T0, v1predicate, v2sequence, v3more_sequences);
  value0 = Null(T1)?ECL_T:ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for NOTEVERY                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_notevery(cl_narg narg, cl_object v1predicate, cl_object v2sequence, ...)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 {
  cl_object v3more_sequences;
  ecl_va_list args; ecl_va_start(args,v2sequence,narg,2);
  v3more_sequences = cl_grab_rest_args(args);
  ecl_va_end(args);
  T0 = (ECL_SYM("EVERY",344)->symbol.gfdef);
  T1 = cl_apply(4, T0, v1predicate, v2sequence, v3more_sequences);
  value0 = Null(T1)?ECL_T:ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for MAP-INTO                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_map_into(cl_narg narg, cl_object v1result_sequence, cl_object v2function, ...)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 {
  cl_object v3sequences;
  ecl_va_list args; ecl_va_start(args,v2function,narg,2);
  v3sequences = cl_grab_rest_args(args);
  ecl_va_end(args);
  {
   cl_fixnum v4nel;
   {
    cl_object v5;
    T0 = (ECL_SYM("MIN",559)->symbol.gfdef);
    {
     cl_fixnum v6;
     if (!(ECL_VECTORP(v1result_sequence))) { goto L5; }
     v6 = ecl_array_dimension(v1result_sequence,0);
     goto L4;
L5:;
     v6 = ecl_length(v1result_sequence);
L4:;
     {
      cl_object v7;
      v7 = (ECL_SYM("LENGTH",478)->symbol.gfdef);
      {
       cl_object v8;
       cl_object v9;
       v8 = ECL_NIL;
       {
        cl_object v10;
        v10 = v3sequences;
        if (ecl_unlikely(!ECL_LISTP(v10))) FEtype_error_list(v10);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v9 = v10;
       }
       {
        cl_object v10;
        cl_object v11;
        v10 = ecl_list1(ECL_NIL);
        v11 = v10;
L15:;
        if (!(ecl_endp(v9))) { goto L17; }
        goto L16;
L17:;
        v8 = _ecl_car(v9);
        {
         cl_object v12;
         v12 = _ecl_cdr(v9);
         if (ecl_unlikely(!ECL_LISTP(v12))) FEtype_error_list(v12);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         v9 = v12;
        }
        {
         cl_object v12;
         v12 = v11;
         if (ecl_unlikely(ECL_ATOM(v12))) FEtype_error_cons(v12);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         T2 = v12;
        }
        T3 = ecl_function_dispatch(cl_env_copy,v7)(1, v8);
        v11 = ecl_list1(T3);
        (ECL_CONS_CDR(T2)=v11,T2);
        goto L15;
L16:;
        T1 = ecl_cdr(v10);
        goto L7;
       }
      }
     }
L7:;
     v5 = cl_apply(3, T0, ecl_make_fixnum(v6), T1);
    }
    {
     bool v6;
     v6 = ECL_FIXNUMP(v5);
     if (ecl_unlikely(!(v6)))
         FEwrong_type_argument(ECL_SYM("FIXNUM",374),v5);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
    }
    v4nel = ecl_fixnum(v5);
   }
   if (!(ECL_VECTORP(v1result_sequence))) { goto L34; }
   if (!((ECL_ARRAYP(v1result_sequence)?(void)0:FEtype_error_array(v1result_sequence),ECL_ARRAY_HAS_FILL_POINTER_P(v1result_sequence)))) { goto L34; }
   si_fill_pointer_set(v1result_sequence, ecl_make_fixnum(v4nel));
L34:;
   {
    cl_object v5;
    cl_object v6;
    cl_object v7;
    cl_object v8ir;
    v5 = L6make_seq_iterator(1, v1result_sequence);
    {
     cl_object v9;
     v9 = (VV[17]->symbol.gfdef);
     {
      cl_object v10;
      cl_object v11;
      v10 = ECL_NIL;
      {
       cl_object v12;
       v12 = v3sequences;
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
L46:;
       if (!(ecl_endp(v11))) { goto L48; }
       goto L47;
L48:;
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
       goto L46;
L47:;
       v6 = ecl_cdr(v12);
       goto L38;
      }
     }
    }
L38:;
    {
     cl_fixnum v9;
     v9 = ecl_length(v3sequences);
     v7 = cl_make_sequence(2, ECL_SYM("LIST",483), ecl_make_fixnum(v9));
    }
    v8ir = v5;
    goto L68;
L67:;
    {
     cl_object v9i;
     cl_object v10v;
     cl_object v11s;
     v9i = v6;
     v10v = v7;
     v11s = v3sequences;
     goto L76;
L75:;
     if ((ecl_car(v9i))!=ECL_NIL) { goto L78; }
     value0 = v1result_sequence;
     cl_env_copy->nvalues = 1;
     return value0;
L78:;
     {
      cl_object v12;
      v12 = v10v;
      if (ecl_unlikely(ECL_ATOM(v12))) FEtype_error_cons(v12);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      T0 = v12;
     }
     T1 = ecl_car(v11s);
     T2 = ecl_car(v9i);
     T3 = L7seq_iterator_ref(T1, T2);
     (ECL_CONS_CAR(T0)=T3,T0);
     {
      cl_object v12;
      v12 = v9i;
      if (ecl_unlikely(ECL_ATOM(v12))) FEtype_error_cons(v12);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      T0 = v12;
     }
     T1 = ecl_car(v11s);
     T2 = ecl_car(v9i);
     T3 = L9seq_iterator_next(T1, T2);
     (ECL_CONS_CAR(T0)=T3,T0);
     v9i = ecl_cdr(v9i);
     v10v = ecl_cdr(v10v);
     v11s = ecl_cdr(v11s);
L76:;
     if (v9i==ECL_NIL) { goto L92; }
     goto L75;
L92:;
    }
    T0 = cl_apply(2, v2function, v7);
    L8seq_iterator_set(v1result_sequence, v8ir, T0);
    v8ir = L9seq_iterator_next(v1result_sequence, v8ir);
L68:;
    if (v8ir==ECL_NIL) { goto L97; }
    goto L67;
L97:;
    value0 = v1result_sequence;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}

#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/lsp/seq.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _ecll97UBza7_6c7mqq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:LSP;SEQ.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_ecll97UBza7_6c7mqq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  (void)0; /* No entry created for ERROR-NOT-A-SEQUENCE */
  (void)0; /* No entry created for ERROR-SEQUENCE-INDEX */
  (void)0; /* No entry created for ERROR-SEQUENCE-TYPE */
  (void)0; /* No entry created for ERROR-SEQUENCE-LENGTH */
  ecl_cmp_defun(VV[26]);                          /*  CLOSEST-SEQUENCE-TYPE */
  (void)0; /* No entry created for MAKE-SEQUENCE */
  ecl_cmp_defun(VV[28]);                          /*  MAKE-SEQ-ITERATOR */
  ecl_cmp_defun(VV[29]);                          /*  SEQ-ITERATOR-REF */
  ecl_cmp_defun(VV[30]);                          /*  SEQ-ITERATOR-SET */
  ecl_cmp_defun(VV[31]);                          /*  SEQ-ITERATOR-NEXT */
  ecl_cmp_defun(VV[32]);                          /*  SEQ-ITERATOR-LIST-POP */
  ecl_cmp_defun(VV[33]);                          /*  COERCE-TO-LIST  */
  ecl_cmp_defun(VV[34]);                          /*  COERCE-TO-VECTOR */
  (void)0; /* No entry created for CONCATENATE */
  (void)0; /* No entry created for MAP */
  (void)0; /* No entry created for SOME */
  (void)0; /* No entry created for EVERY */
  ecl_cmp_defun(VV[36]);                          /*  EVERY*          */
  (void)0; /* No entry created for NOTANY */
  (void)0; /* No entry created for NOTEVERY */
  (void)0; /* No entry created for MAP-INTO */
}
