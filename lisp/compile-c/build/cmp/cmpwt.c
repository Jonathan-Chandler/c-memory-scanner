/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CMP;CMPWT.LSP                                     */
#include <ecl/ecl-cmp.h>
#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/cmp/cmpwt.eclh"
/*      function definition for DATA-PERMANENT-STORAGE-SIZE           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L1data_permanent_storage_size()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ecl_make_fixnum(ecl_length(ecl_symbol_value(VV[0])));
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for DATA-TEMPORARY-STORAGE-SIZE           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L2data_temporary_storage_size()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ecl_make_fixnum(ecl_length(ecl_symbol_value(VV[2])));
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for DATA-SIZE                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L3data_size()
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = L1data_permanent_storage_size();
  T1 = L2data_temporary_storage_size();
  value0 = ecl_plus(T0,T1);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for DATA-INIT                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L4data_init(volatile cl_narg narg, ...)
{
 cl_object volatile env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg>1)) FEwrong_num_arguments_anonym();
 {
  cl_object volatile v1filename;
  va_list args; va_start(args,narg);
  {
   int i = 0;
   if (i >= narg) {
    v1filename = ECL_NIL;
   } else {
    i++;
    v1filename = va_arg(args,cl_object);
   }
  }
  va_end(args);
  if (Null(v1filename)) { goto L2; }
  if (Null(cl_probe_file(v1filename))) { goto L2; }
  {
   volatile cl_object v2s;
   v2s = cl_open(3, v1filename, ECL_SYM("DIRECTION",1240), ECL_SYM("INPUT",1280));
   {
    volatile bool unwinding = FALSE;
    cl_index v3=ECL_STACK_INDEX(cl_env_copy),v4;
    ecl_frame_ptr next_fr;
    ecl_frs_push(cl_env_copy,ECL_PROTECT_TAG);
    if (__ecl_frs_push_result) {
      unwinding = TRUE; next_fr=cl_env_copy->nlj_fr;
    } else {
    {
     struct ecl_stack_frame _ecl_inner_frame_aux;
     volatile cl_object _ecl_inner_frame = ecl_stack_frame_open(cl_env_copy,(cl_object)&_ecl_inner_frame_aux,0);
     {
      cl_object v5;
      v5 = _ecl_inner_frame;
      cl_set(VV[0],cl_read(1, v2s));
      cl_set(VV[2],cl_read(1, v2s));
      cl_env_copy->values[0] = ecl_symbol_value(VV[2]);
      cl_env_copy->nvalues = 1;
      ecl_stack_frame_push_values(v5);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      if (Null(v2s)) { goto L14; }
      cl_close(1, v2s);
L14:;cl_env_copy->values[0]=ecl_stack_frame_pop_values(v5);
     }
     ecl_stack_frame_close(_ecl_inner_frame);
    }
    }
    ecl_frs_pop(cl_env_copy);
    v4=ecl_stack_push_values(cl_env_copy);
    if (Null(v2s)) { goto L16; }
    cl_close(3, v2s, ECL_SYM("ABORT",1217), ECL_T);
L16:;
    ecl_stack_pop_values(cl_env_copy,v4);
    if (unwinding) ecl_unwind(cl_env_copy,next_fr);
    ECL_STACK_SET_INDEX(cl_env_copy,v3);
    return cl_env_copy->values[0];
   }
  }
L2:;
  cl_set(VV[0],si_make_vector(ECL_T, ecl_make_fixnum(128), ECL_T, ecl_make_fixnum(0), ECL_NIL, ecl_make_fixnum(0)));
  cl_set(VV[2],si_make_vector(ECL_T, ecl_make_fixnum(128), ECL_T, ecl_make_fixnum(0), ECL_NIL, ecl_make_fixnum(0)));
  value0 = ecl_symbol_value(VV[2]);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for DATA-GET-ALL-OBJECTS                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L5data_get_all_objects()
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v1;
   cl_object v2array;
   cl_object v3;
   v1 = cl_list(2, ecl_symbol_value(VV[0]), ecl_symbol_value(VV[2]));
   v2array = ECL_NIL;
   v3 = v1;
   {
    cl_object v4;
    cl_object v5;
    v4 = ecl_list1(ECL_NIL);
    v5 = v4;
L6:;
    if (!(ecl_endp(v3))) { goto L8; }
    goto L7;
L8:;
    v2array = _ecl_car(v3);
    {
     cl_object v6;
     v6 = _ecl_cdr(v3);
     if (ecl_unlikely(!ECL_LISTP(v6))) FEtype_error_list(v6);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v3 = v6;
    }
    {
     cl_object v6;
     {
      cl_object v7object;
      cl_object v8vv_record;
      cl_object v9rest;
      cl_object v10;
      cl_fixnum v11;
      cl_fixnum v12;
      v7object = ECL_NIL;
      v8vv_record = ECL_NIL;
      v9rest = ECL_NIL;
      {
       cl_object v13;
       v13 = v2array;
       if (ecl_unlikely(!ECL_VECTORP(v13))) FEtype_error_vector(v13);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v10 = v13;
      }
      v11 = 0;
      v12 = 0;
      {
       cl_object v13;
       cl_object v14;
       v13 = ecl_list1(ECL_NIL);
       v14 = v13;
       v12 = ecl_length(v10);
L29:;
       if (!((v11)>=(v12))) { goto L33; }
       goto L30;
L33:;
       {
        cl_object v15;
        {
         cl_object v16;
         v16 = v10;
         T0 = v16;
         {
          cl_fixnum v17;
          {
          cl_fixnum v18;
          v18 = v11;
          if (ecl_unlikely((v18)>=(v16)->vector.dim))
           FEwrong_index(ECL_NIL,v16,-1,ecl_make_fixnum(v18),(v16)->vector.dim);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          v17 = v18;
          }
          v15 = ecl_aref_unsafe(T0,v17);
         }
        }
        v7object = ecl_car(v15);
        v15 = ecl_cdr(v15);
        v8vv_record = ecl_car(v15);
        v15 = ecl_cdr(v15);
        v9rest = v15;
       }
       {
        cl_object v15;
        v15 = ecl_make_integer((v11)+1);
        {
         bool v16;
         v16 = ECL_FIXNUMP(v15);
         if (ecl_unlikely(!(v16)))
         FEwrong_type_argument(ECL_SYM("FIXNUM",374),v15);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
        }
        v11 = ecl_fixnum(v15);
       }
       {
        cl_object v15;
        v15 = v14;
        if (ecl_unlikely(ECL_ATOM(v15))) FEtype_error_cons(v15);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        T0 = v15;
       }
       if (Null(ecl_gethash_safe(v7object,ecl_symbol_value(VV[6]),ECL_NIL))) { goto L61; }
       T1 = ecl_make_fixnum(0);
       goto L60;
L61:;
       if (Null(ecl_function_dispatch(cl_env_copy,VV[81])(1, v8vv_record) /*  VV-USED-P */)) { goto L63; }
       T1 = v7object;
       goto L60;
L63:;
       T1 = ecl_make_fixnum(0);
L60:;
       v14 = ecl_list1(T1);
       (ECL_CONS_CDR(T0)=v14,T0);
       goto L29;
L30:;
       v6 = ecl_cdr(v13);
       goto L18;
      }
     }
L18:;
     {
      cl_object v7;
      v7 = v5;
      if (ecl_unlikely(ECL_ATOM(v7))) FEtype_error_cons(v7);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      T0 = v7;
     }
     (ECL_CONS_CDR(T0)=v6,T0);
     if (Null(v6)) { goto L16; }
    }
    T0 = ecl_cdr(v5);
    v5 = ecl_last(T0,1);
L16:;
    goto L6;
L7:;
    value0 = ecl_cdr(v4);
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      function definition for DATA-DUMP-ARRAY                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L6data_dump_array()
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(ecl_symbol_value(ECL_SYM("*COMPILER-CONSTANTS*",1019)))) { goto L1; }
  T0 = L5data_get_all_objects();
  cl_set(ECL_SYM("*COMPILER-CONSTANTS*",1019),cl_concatenate(2, ECL_SYM("VECTOR",900), T0));
  value0 = VV[8];
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  T0 = L3data_size();
  if (!(ecl_plusp(T0))) { goto L5; }
  {
   cl_object v1data;
   cl_object v2data_string;
   cl_fixnum v3l;
   ecl_bds_bind(cl_env_copy,VV[9],ecl_make_fixnum(0)); /*  *WT-STRING-SIZE* */
   v1data = L5data_get_all_objects();
   {
    cl_object v4;
    v4 = ecl_symbol_value(ECL_SYM("+ECL-SYNTAX-PROGV-LIST+",1778));
    {
     cl_object v6, v7; cl_index v5;
     v6 = _ecl_car(v4);
     v7 = _ecl_cdr(v4);
     v5 = ecl_progv(cl_env_copy, v6, v7);
     v2data_string = cl_prin1_to_string(v1data);
     ecl_bds_unwind(cl_env_copy,v5);
    }
   }
   v3l = ecl_length(v2data_string);
   T0 = ecl_make_integer((v3l)-1);
   value0 = cl_subseq(3, v2data_string, ecl_make_fixnum(1), T0);
   ecl_bds_unwind1(cl_env_copy);
   return value0;
  }
L5:;
  value0 = VV[8];
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for DATA-C-DUMP                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L10data_c_dump(cl_object volatile v1filename)
{
 cl_object volatile env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   volatile cl_object v2stream;
   v2stream = cl_open(9, v1filename, ECL_SYM("DIRECTION",1240), ECL_SYM("OUTPUT",1309), ECL_SYM("IF-DOES-NOT-EXIST",1268), ECL_SYM("CREATE",1235), ECL_SYM("IF-EXISTS",1270), ECL_SYM("SUPERSEDE",1341), ECL_SYM("EXTERNAL-FORMAT",1258), ECL_SYM("DEFAULT",1237));
   {
    volatile bool unwinding = FALSE;
    cl_index v3=ECL_STACK_INDEX(cl_env_copy),v4;
    ecl_frame_ptr next_fr;
    ecl_frs_push(cl_env_copy,ECL_PROTECT_TAG);
    if (__ecl_frs_push_result) {
      unwinding = TRUE; next_fr=cl_env_copy->nlj_fr;
    } else {
    {
     struct ecl_stack_frame _ecl_inner_frame_aux;
     volatile cl_object _ecl_inner_frame = ecl_stack_frame_open(cl_env_copy,(cl_object)&_ecl_inner_frame_aux,0);
     {
      cl_object v5;
      v5 = _ecl_inner_frame;
      {
       cl_object v6strings;
       v6strings = LC7produce_strings();
       if (Null(v6strings)) { goto L9; }
       LC9output_c_strings(v6strings, v2stream);
       goto L8;
L9:;
       ecl_princ(VV[14],v2stream);
L8:;
       cl_env_copy->values[0] = ecl_terpri(v2stream);
       cl_env_copy->nvalues = 1;
      }
      ecl_stack_frame_push_values(v5);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      if (Null(v2stream)) { goto L11; }
      cl_close(1, v2stream);
L11:;cl_env_copy->values[0]=ecl_stack_frame_pop_values(v5);
     }
     ecl_stack_frame_close(_ecl_inner_frame);
    }
    }
    ecl_frs_pop(cl_env_copy);
    v4=ecl_stack_push_values(cl_env_copy);
    if (Null(v2stream)) { goto L13; }
    cl_close(3, v2stream, ECL_SYM("ABORT",1217), ECL_T);
L13:;
    ecl_stack_pop_values(cl_env_copy,v4);
    if (unwinding) ecl_unwind(cl_env_copy,next_fr);
    ECL_STACK_SET_INDEX(cl_env_copy,v3);
    return cl_env_copy->values[0];
   }
  }
 }
}
/*      local function OUTPUT-C-STRINGS                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC9output_c_strings(cl_object v1strings, cl_object v2stream)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3s;
   cl_object v4;
   v3s = ECL_NIL;
   {
    cl_object v5;
    v5 = v1strings;
    if (ecl_unlikely(!ECL_LISTP(v5))) FEtype_error_list(v5);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v4 = v5;
   }
   {
    cl_object v5i;
    v5i = ecl_make_fixnum(1);
    {
     cl_object v6name;
     v6name = ECL_NIL;
     {
      cl_object v7;
      cl_object v8;
      v7 = ecl_list1(ECL_NIL);
      v8 = v7;
      if (!(ecl_endp(v4))) { goto L12; }
      goto L11;
L12:;
      v3s = _ecl_car(v4);
      {
       cl_object v9;
       v9 = _ecl_cdr(v4);
       if (ecl_unlikely(!ECL_LISTP(v9))) FEtype_error_list(v9);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v4 = v9;
      }
L10:;
      v6name = cl_format(3, ECL_NIL, VV[13], v5i);
      {
       cl_object v9;
       v9 = v8;
       if (ecl_unlikely(ECL_ATOM(v9))) FEtype_error_cons(v9);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       T1 = v9;
      }
      T2 = LC8output_one_c_string(v6name, v3s, v2stream);
      v8 = ecl_list1(T2);
      (ECL_CONS_CDR(T1)=v8,T1);
      if (!(ecl_endp(v4))) { goto L28; }
      goto L11;
L28:;
      v3s = _ecl_car(v4);
      {
       cl_object v9;
       v9 = _ecl_cdr(v4);
       if (ecl_unlikely(!ECL_LISTP(v9))) FEtype_error_list(v9);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v4 = v9;
      }
      v5i = ecl_one_plus(v5i);
      goto L10;
L11:;
      T0 = ecl_cdr(v7);
      goto L1;
     }
    }
   }
  }
L1:;
  value0 = cl_format(3, v2stream, VV[12], T0);
  return value0;
 }
}
/*      local function OUTPUT-ONE-C-STRING                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC8output_one_c_string(cl_object volatile v1name, cl_object volatile v2string, cl_object volatile v3stream)
{
 cl_object volatile env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   volatile cl_object v4s;
   ecl_bds_bind(cl_env_copy,VV[9],ecl_make_fixnum(0)); /*  *WT-STRING-SIZE* */
   {
    volatile cl_object v5stream;
    v5stream = cl_make_string_output_stream(0);
    {
     volatile bool unwinding = FALSE;
     cl_index v6=ECL_STACK_INDEX(cl_env_copy),v7;
     ecl_frame_ptr next_fr;
     ecl_frs_push(cl_env_copy,ECL_PROTECT_TAG);
     if (__ecl_frs_push_result) {
       unwinding = TRUE; next_fr=cl_env_copy->nlj_fr;
     } else {
     ecl_function_dispatch(cl_env_copy,VV[84])(2, v2string, v5stream) /*  WT-FILTERED-DATA */;
     cl_env_copy->values[0] = cl_get_output_stream_string(v5stream);
     }
     ecl_frs_pop(cl_env_copy);
     v7=ecl_stack_push_values(cl_env_copy);
     cl_close(1, v5stream);
     ecl_stack_pop_values(cl_env_copy,v7);
     if (unwinding) ecl_unwind(cl_env_copy,next_fr);
     v4s = cl_env_copy->values[0];
     ECL_STACK_SET_INDEX(cl_env_copy,v6);
    }
   }
   cl_format(6, v3stream, VV[11], v1name, ecl_symbol_value(VV[9]), ecl_symbol_value(VV[9]), v4s);
   value0 = v1name;
   cl_env_copy->nvalues = 1;
   ecl_bds_unwind1(cl_env_copy);
   return value0;
  }
 }
}
/*      local function PRODUCE-STRINGS                                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC7produce_strings()
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v1string;
   v1string = L6data_dump_array();
   {
    cl_fixnum v2l;
    v2l = ecl_length(v1string);
    {
     cl_object v3i;
     cl_object v4;
     cl_object v5;
     v3i = ecl_make_fixnum(0);
     v4 = ecl_make_fixnum(v2l);
     v5 = ecl_make_fixnum(65530);
     {
      cl_object v6this_l;
      v6this_l = ECL_NIL;
      {
       cl_object v7;
       cl_object v8;
       v7 = ecl_list1(ECL_NIL);
       v8 = v7;
L9:;
       if (!(ecl_greatereq(v3i,v4))) { goto L11; }
       goto L10;
L11:;
       T0 = ecl_minus(ecl_make_fixnum(v2l),v3i);
       v6this_l = ((ecl_float_nan_p(ecl_make_fixnum(65530)) || ecl_lowereq(T0,ecl_make_fixnum(65530)))?T0:ecl_make_fixnum(65530));
       {
        cl_object v9;
        v9 = v8;
        if (ecl_unlikely(ECL_ATOM(v9))) FEtype_error_cons(v9);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        T0 = v9;
       }
       T1 = cl_array_element_type(v1string);
       T2 = si_make_pure_array(T1, v6this_l, ECL_NIL, ECL_NIL, v1string, v3i);
       v8 = ecl_list1(T2);
       (ECL_CONS_CDR(T0)=v8,T0);
       v3i = ecl_plus(v3i,v5);
       goto L9;
L10:;
       value0 = ecl_cdr(v7);
       cl_env_copy->nvalues = 1;
       return value0;
      }
     }
    }
   }
  }
 }
}
/*      function definition for DATA-EMPTY-LOC                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L11data_empty_loc()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = L15add_object(5, ecl_make_fixnum(0), VV[16], ECL_T, VV[17], ECL_T);
  return value0;
 }
}
/*      function definition for ADD-LOAD-FORM                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L14add_load_form(cl_object volatile v1object, cl_object volatile v2location)
{
 cl_object T0, T1;
 volatile cl_object lex0[2];
 cl_object volatile env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  lex0[0] = v2location;                           /*  LOCATION        */
TTL:
  if ((si_need_to_make_load_form_p(v1object))!=ECL_NIL) { goto L1; }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  if ((ecl_symbol_value(VV[19]))==(VV[20])) { goto L3; }
  ecl_function_dispatch(cl_env_copy,VV[87])(3, VV[21], v1object, ecl_symbol_value(VV[19])) /*  CMPERR */;
L3:;
  {
   cl_object volatile v4;                         /*  MAKE-FORM       */
   value0 = (cl_env_copy->function=(ECL_SYM("MAKE-LOAD-FORM",953)->symbol.gfdef))->cfun.entry(1, v1object) /*  MAKE-LOAD-FORM */;
   {
    const int v5 = cl_env_copy->nvalues;
    v4 = value0;
    cl_object v6;
    v6 = (v5<=1)? ECL_NIL : cl_env_copy->values[1];
    lex0[1] = v6;                                 /*  INIT-FORM       */
   }
   si_hash_set(v1object, ecl_symbol_value(VV[6]), lex0[0]);
   {
    volatile cl_object v5deferred;
    v5deferred = ECL_NIL;
    if (Null(v4)) { goto L8; }
    {
     cl_object v6;
     v6 = CONS(v1object,ecl_symbol_value(VV[22]));
     ecl_bds_bind(cl_env_copy,VV[23],ECL_NIL);    /*  *OBJECTS-INIT-DEFERRED* */
     ecl_bds_bind(cl_env_copy,VV[22],v6);         /*  *OBJECTS-BEING-CREATED* */
     T0 = ecl_function_dispatch(cl_env_copy,VV[88])(1, v4) /*  C1EXPR */;
     T1 = ecl_function_dispatch(cl_env_copy,VV[89])(4, VV[25], VV[26], lex0[0], T0) /*  MAKE-C1FORM* */;
     cl_set(VV[24],CONS(T1,ecl_symbol_value(VV[24])));
     v5deferred = cl_nreverse(ecl_symbol_value(VV[23]));
     ecl_bds_unwind1(cl_env_copy);
     ecl_bds_unwind1(cl_env_copy);
    }
L8:;
    {
     cl_object v6loc;
     cl_object v7init;
     cl_object v8;
     v6loc = ECL_NIL;
     v7init = ECL_NIL;
     {
      cl_object v9;
      v9 = v5deferred;
      if (ecl_unlikely(!ECL_LISTP(v9))) FEtype_error_list(v9);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v8 = v9;
     }
L19:;
     if (!(ecl_endp(v8))) { goto L21; }
     goto L20;
L21:;
     {
      cl_object v9;
      v9 = _ecl_car(v8);
      v6loc = ecl_car(v9);
      v9 = ecl_cdr(v9);
      v7init = v9;
     }
     {
      cl_object v9;
      v9 = _ecl_cdr(v8);
      if (ecl_unlikely(!ECL_LISTP(v9))) FEtype_error_list(v9);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v8 = v9;
     }
     LC13maybe_init(lex0, v6loc, v7init);
     goto L19;
L20:;
     if (Null(lex0[1])) { goto L36; }
     LC13maybe_init(lex0, lex0[0], lex0[1]);
L36:;
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 1;
     return value0;
    }
   }
  }
 }
}
/*      local function MAYBE-INIT                                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC13maybe_init(volatile cl_object *lex0, cl_object volatile v1loc, cl_object volatile v2init)
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
   volatile cl_object env1 = env0;
   env1 = ECL_NIL;
   CLV0 = env1 = CONS(ECL_NIL,env1);
   {
    volatile cl_object env2 = env1;
    CLV1 = env2 = CONS(ECL_NEW_FRAME_ID(cl_env_copy),env2); /*  TAGBODY */
    {
     ecl_frs_push(cl_env_copy,ECL_CONS_CAR(CLV1));
     if (__ecl_frs_push_result) {
     if (cl_env_copy->values[0]==ecl_make_fixnum(0))goto L1;
     ecl_internal_error("GO found an inexistent tag");
     }
    }
    {
     cl_object v3;
     v3 = ecl_make_cclosure_va((cl_objectfn)LC12__lambda47,env2,Cblock,1);
     T0 = v3;
    }
    T1 = CONS(VV[27],T0);
    T2 = ecl_list1(T1);
    T3 = CONS(T2,ecl_symbol_value(ECL_SYM("*HANDLER-CLUSTERS*",6)));
    ecl_bds_bind(cl_env_copy,ECL_SYM("*HANDLER-CLUSTERS*",6),T3); /*  *HANDLER-CLUSTERS* */
    T0 = ecl_function_dispatch(cl_env_copy,VV[88])(1, v2init) /*  C1EXPR */;
    T1 = ecl_function_dispatch(cl_env_copy,VV[89])(4, VV[28], VV[26], v1loc, T0) /*  MAKE-C1FORM* */;
    cl_set(VV[24],CONS(T1,ecl_symbol_value(VV[24])));
    value0 = ecl_symbol_value(VV[24]);
    cl_env_copy->nvalues = 1;
    ecl_frs_pop(cl_env_copy);
    ecl_bds_unwind1(cl_env_copy);
    return value0;
L1:;
    {
     cl_object v3c;
     v3c = ECL_CONS_CAR(CLV0);
     if (Null(ecl_symbol_value(VV[22]))) { goto L7; }
     T0 = CONS(lex0[0],lex0[1]);
     cl_set(VV[23],CONS(T0,ecl_symbol_value(VV[23])));
     value0 = ecl_symbol_value(VV[23]);
     cl_env_copy->nvalues = 1;
     ecl_frs_pop(cl_env_copy);
     return value0;
L7:;
     value0 = cl_error(1, v3c);
     ecl_frs_pop(cl_env_copy);
     return value0;
    }
   }
  }
 }
}
/*      closure LAMBDA47                                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC12__lambda47(cl_narg narg, cl_object v1si__temp, ...)
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
/*      function definition for ADD-OBJECT                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L15add_object(cl_narg narg, cl_object v1object, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2duplicate;
  cl_object v3used_p;
  cl_object v4permanent;
  ecl_va_list args; ecl_va_start(args,v1object,narg,1);
  {
   cl_object keyvars[6];
   cl_parse_key(args,3,L15add_objectkeys,keyvars,NULL,FALSE);
   ecl_va_end(args);
   v2duplicate = keyvars[0];
   v3used_p = keyvars[1];
   if (Null(keyvars[5])) {
    value0 = ecl_make_bool(ECL_SYMBOLP(v1object));
    if ((value0)!=ECL_NIL) { goto L3; }
    v4permanent = ecl_symbol_value(VV[30]);
    goto L1;
L3:;
    v4permanent = value0;
    goto L1;
L1:;
   } else {
    v4permanent = keyvars[2];
   }
  }
  {
   cl_object v5vv;
   v5vv = L32add_static_constant(v1object);
   if (Null(v5vv)) { goto L5; }
   if (Null(v3used_p)) { goto L8; }
   ecl_structure_set(v5vv,VV[31],1,ECL_T);
L8:;
   value0 = v5vv;
   cl_env_copy->nvalues = 1;
   return value0;
  }
L5:;
  {
   cl_object v5test;
   cl_object v6item;
   cl_object v7array;
   cl_object v8vv;
   if (Null(ecl_symbol_value(ECL_SYM("*COMPILER-CONSTANTS*",1019)))) { goto L11; }
   v5test = ECL_SYM("EQ",335);
   goto L10;
L11:;
   v5test = ECL_SYM("EQUAL",337);
L10:;
   if (Null(v4permanent)) { goto L14; }
   {
    cl_object v9;
    cl_object v10;
    v9 = ecl_symbol_value(VV[0]);
    v10 = ecl_function_dispatch(cl_env_copy,VV[94])(2, v9, ecl_make_fixnum(0)) /*  MAKE-SEQ-ITERATOR */;
L18:;
    if ((v10)!=ECL_NIL) { goto L20; }
    v6item = ECL_NIL;
    goto L13;
L20:;
    {
     cl_object v11;
     v11 = ecl_function_dispatch(cl_env_copy,VV[95])(2, v9, v10) /*  SEQ-ITERATOR-REF */;
     T0 = ecl_car(v11);
     if (Null(ecl_function_dispatch(cl_env_copy,v5test)(2, v1object, T0))) { goto L22; }
     v6item = v11;
     goto L13;
    }
L22:;
    v10 = ecl_function_dispatch(cl_env_copy,VV[96])(2, v9, v10) /*  SEQ-ITERATOR-NEXT */;
    goto L18;
   }
L14:;
   {
    cl_object v11;
    cl_object v12;
    v11 = ecl_symbol_value(VV[0]);
    v12 = ecl_function_dispatch(cl_env_copy,VV[94])(2, v11, ecl_make_fixnum(0)) /*  MAKE-SEQ-ITERATOR */;
L33:;
    if ((v12)!=ECL_NIL) { goto L35; }
    value0 = ECL_NIL;
    goto L30;
L35:;
    {
     cl_object v13;
     v13 = ecl_function_dispatch(cl_env_copy,VV[95])(2, v11, v12) /*  SEQ-ITERATOR-REF */;
     T0 = ecl_car(v13);
     if (Null(ecl_function_dispatch(cl_env_copy,v5test)(2, v1object, T0))) { goto L37; }
     value0 = v13;
     goto L30;
    }
L37:;
    v12 = ecl_function_dispatch(cl_env_copy,VV[96])(2, v11, v12) /*  SEQ-ITERATOR-NEXT */;
    goto L33;
   }
L30:;
   if ((value0)!=ECL_NIL) { goto L29; }
   {
    cl_object v11;
    cl_object v12;
    v11 = ecl_symbol_value(VV[2]);
    v12 = ecl_function_dispatch(cl_env_copy,VV[94])(2, v11, ecl_make_fixnum(0)) /*  MAKE-SEQ-ITERATOR */;
L45:;
    if ((v12)!=ECL_NIL) { goto L47; }
    v6item = ECL_NIL;
    goto L13;
L47:;
    {
     cl_object v13;
     v13 = ecl_function_dispatch(cl_env_copy,VV[95])(2, v11, v12) /*  SEQ-ITERATOR-REF */;
     T0 = ecl_car(v13);
     if (Null(ecl_function_dispatch(cl_env_copy,v5test)(2, v1object, T0))) { goto L49; }
     v6item = v13;
     goto L13;
    }
L49:;
    v12 = ecl_function_dispatch(cl_env_copy,VV[96])(2, v11, v12) /*  SEQ-ITERATOR-NEXT */;
    goto L45;
   }
L29:;
   v6item = value0;
   goto L13;
L13:;
   if (Null(v4permanent)) { goto L56; }
   v7array = ecl_symbol_value(VV[0]);
   goto L55;
L56:;
   v7array = ecl_symbol_value(VV[2]);
L55:;
   if (Null(v6item)) { goto L59; }
   if (Null(v2duplicate)) { goto L59; }
   {
    cl_fixnum v9ndx;
    cl_object v10vv;
    v9ndx = ecl_length(v7array);
    v10vv = ecl_function_dispatch(cl_env_copy,VV[97])(6, ECL_SYM("LOCATION",1001), ecl_make_fixnum(v9ndx), VV[32], v4permanent, ECL_SYM("VALUE",2032), v1object) /*  MAKE-VV */;
    {
     cl_object v11;
     v11 = cl_list(3, v1object, v10vv, ecl_make_fixnum(v9ndx));
     {
      cl_fixnum v12;
      cl_fixnum v13;
      v12 = ((v7array)->vector.fillp);
      v13 = ((v7array)->array.dim);
      if (!((v12)<(v13))) { goto L69; }
      {
       cl_fixnum v14;
       v14 = (1)+(v12);
       ((v7array)->vector.fillp)=(v14);
      }
      ecl_aset_unsafe(v7array,v12,v11);
      goto L64;
L69:;
      cl_vector_push_extend(2, v11, v7array);
     }
    }
L64:;
    v8vv = v10vv;
    goto L58;
   }
L59:;
   if (Null(v6item)) { goto L73; }
   if (Null(ecl_memql(v1object,ecl_symbol_value(VV[22])))) { goto L75; }
   cl_error(3, VV[27], VV[33], v1object);
L75:;
   v8vv = ecl_cadr(v6item);
   goto L58;
L73:;
   {
    cl_object v11;
    if ((v6item)!=ECL_NIL) { goto L79; }
    if ((v2duplicate)!=ECL_NIL) { goto L79; }
    if (!(ECL_SYMBOLP(v1object))) { goto L79; }
    {
     cl_object v13;                               /*  FOUNDP          */
     cl_object v14;                               /*  SYMBOL          */
     value0 = si_mangle_name(1, v1object);
     {
      const int v15 = cl_env_copy->nvalues;
      v13 = value0;
      cl_object v16;
      v16 = (v15<=1)? ECL_NIL : cl_env_copy->values[1];
      v14 = v16;
     }
     if (Null(v13)) { goto L85; }
     value0 = v14;
     cl_env_copy->nvalues = 1;
     return value0;
L85:;
     v11 = ECL_NIL;
     goto L77;
    }
L79:;
    v11 = ECL_NIL;
    goto L77;
L77:;
    if (Null(v11)) { goto L87; }
    v8vv = v11;
    goto L58;
L87:;
    {
     cl_fixnum v12ndx;
     cl_object v13vv;
     v12ndx = ecl_length(v7array);
     v13vv = ecl_function_dispatch(cl_env_copy,VV[97])(6, ECL_SYM("LOCATION",1001), ecl_make_fixnum(v12ndx), VV[32], v4permanent, ECL_SYM("VALUE",2032), v1object) /*  MAKE-VV */;
     {
      cl_object v14;
      v14 = cl_list(3, v1object, v13vv, ecl_make_fixnum(v12ndx));
      {
       cl_fixnum v15;
       cl_fixnum v16;
       v15 = ((v7array)->vector.fillp);
       v16 = ((v7array)->array.dim);
       if (!((v15)<(v16))) { goto L96; }
       {
        cl_fixnum v17;
        v17 = (1)+(v15);
        ((v7array)->vector.fillp)=(v17);
       }
       ecl_aset_unsafe(v7array,v15,v14);
       goto L91;
L96:;
       cl_vector_push_extend(2, v14, v7array);
      }
     }
L91:;
     if ((ecl_symbol_value(ECL_SYM("*COMPILER-CONSTANTS*",1019)))!=ECL_NIL) { goto L100; }
     L14add_load_form(v1object, v13vv);
L100:;
     v8vv = v13vv;
    }
   }
L58:;
   if ((v2duplicate)!=ECL_NIL) { goto L104; }
   if (Null(v3used_p)) { goto L102; }
   goto L103;
L104:;
L103:;
   ecl_structure_set(v8vv,VV[31],1,ECL_T);
L102:;
   value0 = v8vv;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for ADD-SYMBOL                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L16add_symbol(cl_object v1symbol)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = L15add_object(5, v1symbol, VV[16], ECL_NIL, VV[17], ECL_T);
  return value0;
 }
}
/*      function definition for ADD-KEYWORDS                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L18add_keywords(cl_object v1keywords)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2x;
   {
    cl_object v3;
    v3 = ecl_make_cfun((cl_objectfn_fixed)LC17__lambda98,ECL_NIL,Cblock,2);
    T0 = v3;
   }
   v2x = cl_search(4, v1keywords, ecl_symbol_value(VV[0]), ECL_SYM("TEST",1343), T0);
   if (Null(v2x)) { goto L3; }
   T0 = ecl_elt(ecl_symbol_value(VV[0]),ecl_fixnum(v2x));
   value0 = ecl_cadr(T0);
   cl_env_copy->nvalues = 1;
   return value0;
L3:;
   {
    cl_object v3;
    {
     cl_object v4;
     v4 = v1keywords;
     {
      cl_object v5;
      v5 = v4;
      if (ecl_unlikely(!ECL_LISTP(v5))) FEtype_error_list(v5);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
     }
     if (Null(v4)) { goto L11; }
     {
      cl_object v5;
      v5 = ECL_CONS_CDR(v4);
      v1keywords = v5;
      v4 = ECL_CONS_CAR(v4);
     }
L11:;
     T0 = v4;
    }
    v3 = L15add_object(5, T0, VV[16], ECL_T, VV[17], ECL_T);
    {
     cl_object v4;
     v4 = v1keywords;
     goto L21;
L20:;
     {
      cl_object v5k;
      v5k = ecl_car(v4);
      L15add_object(5, v5k, VV[16], ECL_T, VV[17], ECL_T);
     }
     v4 = ecl_cdr(v4);
L21:;
     if (Null(v4)) { goto L28; }
     goto L20;
L28:;
    }
    value0 = v3;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      local function LAMBDA98                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC17__lambda98(cl_object v1k, cl_object v2record)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_car(v2record);
  value0 = ecl_make_bool((v1k)==(T0));
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for STATIC-BASE-STRING-BUILDER            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L19static_base_string_builder(cl_object v1name, cl_object v2value, cl_object v3stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  cl_format(3, v3stream, VV[37], v1name);
  ecl_function_dispatch(cl_env_copy,VV[84])(4, v2value, v3stream, VV[38], ECL_T) /*  WT-FILTERED-DATA */;
  {
   cl_fixnum v4;
   v4 = ecl_length(v2value);
   value0 = cl_format(3, v3stream, VV[39], ecl_make_fixnum(v4));
   return value0;
  }
 }
}
/*      function definition for STATIC-SINGLE-FLOAT-BUILDER           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L20static_single_float_builder(cl_object v1name, cl_object v2value, cl_object v3stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  ecl_bds_bind(cl_env_copy,ECL_SYM("*READ-DEFAULT-FLOAT-FORMAT*",64),ECL_SYM("SINGLE-FLOAT",780)); /*  *READ-DEFAULT-FLOAT-FORMAT* */
  ecl_bds_bind(cl_env_copy,ECL_SYM("*PRINT-READABLY*",59),ECL_T); /*  *PRINT-READABLY* */
  value0 = cl_format(5, v3stream, VV[41], v1name, v2value, v3stream);
  ecl_bds_unwind1(cl_env_copy);
  ecl_bds_unwind1(cl_env_copy);
  return value0;
 }
}
/*      function definition for STATIC-DOUBLE-FLOAT-BUILDER           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L21static_double_float_builder(cl_object v1name, cl_object v2value, cl_object v3stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  ecl_bds_bind(cl_env_copy,ECL_SYM("*READ-DEFAULT-FLOAT-FORMAT*",64),ECL_SYM("DOUBLE-FLOAT",317)); /*  *READ-DEFAULT-FLOAT-FORMAT* */
  ecl_bds_bind(cl_env_copy,ECL_SYM("*PRINT-READABLY*",59),ECL_T); /*  *PRINT-READABLY* */
  value0 = cl_format(5, v3stream, VV[43], v1name, v2value, v3stream);
  ecl_bds_unwind1(cl_env_copy);
  ecl_bds_unwind1(cl_env_copy);
  return value0;
 }
}
/*      function definition for STATIC-LONG-FLOAT-BUILDER             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L22static_long_float_builder(cl_object v1name, cl_object v2value, cl_object v3stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  ecl_bds_bind(cl_env_copy,ECL_SYM("*READ-DEFAULT-FLOAT-FORMAT*",64),ECL_SYM("LONG-FLOAT",510)); /*  *READ-DEFAULT-FLOAT-FORMAT* */
  ecl_bds_bind(cl_env_copy,ECL_SYM("*PRINT-READABLY*",59),ECL_T); /*  *PRINT-READABLY* */
  value0 = cl_format(5, v3stream, VV[45], v1name, v2value, v3stream);
  ecl_bds_unwind1(cl_env_copy);
  ecl_bds_unwind1(cl_env_copy);
  return value0;
 }
}
/*      function definition for STATIC-RATIONAL-BUILDER               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L23static_rational_builder(cl_object v1name, cl_object v2value, cl_object v3stream)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  ecl_bds_bind(cl_env_copy,ECL_SYM("*READ-DEFAULT-FLOAT-FORMAT*",64),ECL_SYM("DOUBLE-FLOAT",317)); /*  *READ-DEFAULT-FLOAT-FORMAT* */
  ecl_bds_bind(cl_env_copy,ECL_SYM("*PRINT-READABLY*",59),ECL_T); /*  *PRINT-READABLY* */
  T0 = cl_numerator(v2value);
  T1 = cl_denominator(v2value);
  value0 = cl_format(5, v3stream, VV[47], v1name, T0, T1);
  ecl_bds_unwind1(cl_env_copy);
  ecl_bds_unwind1(cl_env_copy);
  return value0;
 }
}
/*      function definition for STATIC-CONSTANT-DELEGATE              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L24static_constant_delegate(cl_object v1name, cl_object v2value, cl_object v3stream)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = L31static_constant_expression(v2value);
  value0 = ecl_function_dispatch(cl_env_copy,T0)(3, v1name, v2value, v3stream);
  return value0;
 }
}
/*      function definition for STATIC-COMPLEX-BUILDER                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L25static_complex_builder(cl_object v1name, cl_object v2value, cl_object v3stream)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v4name_real;
   cl_object v5name_imag;
   ecl_bds_bind(cl_env_copy,ECL_SYM("*READ-DEFAULT-FLOAT-FORMAT*",64),ECL_SYM("DOUBLE-FLOAT",317)); /*  *READ-DEFAULT-FLOAT-FORMAT* */
   ecl_bds_bind(cl_env_copy,ECL_SYM("*PRINT-READABLY*",59),ECL_T); /*  *PRINT-READABLY* */
   v4name_real = cl_concatenate(3, ECL_SYM("STRING",807), v1name, VV[50]);
   v5name_imag = cl_concatenate(3, ECL_SYM("STRING",807), v1name, VV[51]);
   T0 = cl_realpart(v2value);
   L24static_constant_delegate(v4name_real, T0, v3stream);
   ecl_terpri(v3stream);
   T0 = cl_imagpart(v2value);
   L24static_constant_delegate(v5name_imag, T0, v3stream);
   ecl_terpri(v3stream);
   value0 = cl_format(5, v3stream, VV[52], v1name, v4name_real, v5name_imag);
   ecl_bds_unwind1(cl_env_copy);
   ecl_bds_unwind1(cl_env_copy);
   return value0;
  }
 }
}
/*      function definition for STATIC-CSFLOAT-BUILDER                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L26static_csfloat_builder(cl_object v1name, cl_object v2value, cl_object v3stream)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  ecl_bds_bind(cl_env_copy,ECL_SYM("*READ-DEFAULT-FLOAT-FORMAT*",64),ECL_SYM("SINGLE-FLOAT",780)); /*  *READ-DEFAULT-FLOAT-FORMAT* */
  ecl_bds_bind(cl_env_copy,ECL_SYM("*PRINT-READABLY*",59),ECL_T); /*  *PRINT-READABLY* */
  T0 = cl_realpart(v2value);
  T1 = cl_imagpart(v2value);
  value0 = cl_format(6, v3stream, VV[54], v1name, T0, T1, v3stream);
  ecl_bds_unwind1(cl_env_copy);
  ecl_bds_unwind1(cl_env_copy);
  return value0;
 }
}
/*      function definition for STATIC-CDFLOAT-BUILDER                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L27static_cdfloat_builder(cl_object v1name, cl_object v2value, cl_object v3stream)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  ecl_bds_bind(cl_env_copy,ECL_SYM("*READ-DEFAULT-FLOAT-FORMAT*",64),ECL_SYM("DOUBLE-FLOAT",317)); /*  *READ-DEFAULT-FLOAT-FORMAT* */
  ecl_bds_bind(cl_env_copy,ECL_SYM("*PRINT-READABLY*",59),ECL_T); /*  *PRINT-READABLY* */
  T0 = cl_realpart(v2value);
  T1 = cl_imagpart(v2value);
  value0 = cl_format(6, v3stream, VV[56], v1name, T0, T1, v3stream);
  ecl_bds_unwind1(cl_env_copy);
  ecl_bds_unwind1(cl_env_copy);
  return value0;
 }
}
/*      function definition for STATIC-CLFLOAT-BUILDER                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L28static_clfloat_builder(cl_object v1name, cl_object v2value, cl_object v3stream)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  ecl_bds_bind(cl_env_copy,ECL_SYM("*READ-DEFAULT-FLOAT-FORMAT*",64),ECL_SYM("LONG-FLOAT",510)); /*  *READ-DEFAULT-FLOAT-FORMAT* */
  ecl_bds_bind(cl_env_copy,ECL_SYM("*PRINT-READABLY*",59),ECL_T); /*  *PRINT-READABLY* */
  T0 = cl_realpart(v2value);
  T1 = cl_imagpart(v2value);
  value0 = cl_format(6, v3stream, VV[58], v1name, T0, T1, v3stream);
  ecl_bds_unwind1(cl_env_copy);
  ecl_bds_unwind1(cl_env_copy);
  return value0;
 }
}
/*      function definition for STATIC-CONSTANT-BUILDER               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L30static_constant_builder(cl_object v1format, cl_object v2value)
{
 cl_object env0 = ECL_NIL;
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  env0 = ECL_NIL;
  CLV0 = env0 = CONS(v1format,env0);              /*  FORMAT          */
  CLV1 = env0 = CONS(v2value,env0);               /*  VALUE           */
  {
   cl_object v3;
   v3 = ecl_make_cclosure_va((cl_objectfn)LC29__lambda105,env0,Cblock,2);
   value0 = v3;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      closure LAMBDA105                                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC29__lambda105(cl_narg narg, cl_object v1name, cl_object v2stream, ...)
{
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV1 = env0;                                     /*  VALUE           */
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=2)) FEwrong_num_arguments_anonym();
 {
TTL:
  value0 = cl_format(4, v2stream, ECL_CONS_CAR(CLV0), v1name, ECL_CONS_CAR(CLV1));
  return value0;
 }
 }
}
/*      function definition for STATIC-CONSTANT-EXPRESSION            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L31static_constant_expression(cl_object v1object)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(si_base_string_p(v1object))) { goto L1; }
  value0 = ecl_fdefinition(VV[40]);
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  if (Null(si_ratiop(v1object))) { goto L3; }
  T0 = cl_numerator(v1object);
  if (Null(L31static_constant_expression(T0))) { goto L6; }
  T0 = cl_denominator(v1object);
  if (Null(L31static_constant_expression(T0))) { goto L6; }
  value0 = ecl_fdefinition(VV[48]);
  cl_env_copy->nvalues = 1;
  return value0;
L6:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L3:;
  if (!(ECL_SINGLE_FLOAT_P(v1object))) { goto L9; }
  if ((si_float_nan_p(v1object))!=ECL_NIL) { goto L12; }
  if ((si_float_infinity_p(v1object))!=ECL_NIL) { goto L12; }
  value0 = ecl_fdefinition(VV[42]);
  cl_env_copy->nvalues = 1;
  return value0;
L12:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L9:;
  if (!(ECL_DOUBLE_FLOAT_P(v1object))) { goto L15; }
  if ((si_float_nan_p(v1object))!=ECL_NIL) { goto L18; }
  if ((si_float_infinity_p(v1object))!=ECL_NIL) { goto L18; }
  value0 = ecl_fdefinition(VV[44]);
  cl_env_copy->nvalues = 1;
  return value0;
L18:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L15:;
  if (!(ECL_LONG_FLOAT_P(v1object))) { goto L21; }
  if ((si_float_nan_p(v1object))!=ECL_NIL) { goto L24; }
  if ((si_float_infinity_p(v1object))!=ECL_NIL) { goto L24; }
  value0 = ecl_fdefinition(VV[46]);
  cl_env_copy->nvalues = 1;
  return value0;
L24:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L21:;
  if (!(ECL_COMPLEX_SINGLE_FLOAT_P(v1object))) { goto L27; }
  value0 = ecl_fdefinition(VV[55]);
  cl_env_copy->nvalues = 1;
  return value0;
L27:;
  if (!(ECL_COMPLEX_DOUBLE_FLOAT_P(v1object))) { goto L29; }
  value0 = ecl_fdefinition(VV[57]);
  cl_env_copy->nvalues = 1;
  return value0;
L29:;
  if (!(ECL_COMPLEX_LONG_FLOAT_P(v1object))) { goto L31; }
  value0 = ecl_fdefinition(VV[59]);
  cl_env_copy->nvalues = 1;
  return value0;
L31:;
  if (Null(cl_complexp(v1object))) { goto L33; }
  T0 = cl_realpart(v1object);
  if (Null(L31static_constant_expression(T0))) { goto L36; }
  T0 = cl_imagpart(v1object);
  if (Null(L31static_constant_expression(T0))) { goto L36; }
  value0 = ecl_fdefinition(VV[53]);
  cl_env_copy->nvalues = 1;
  return value0;
L36:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L33:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for ADD-STATIC-CONSTANT                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L32add_static_constant(cl_object v1object)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if ((ecl_symbol_value(ECL_SYM("*COMPILER-CONSTANTS*",1019)))!=ECL_NIL) { goto L1; }
  if (Null(ecl_symbol_value(VV[62]))) { goto L1; }
  if (!(ECL_LISTP(ecl_symbol_value(VV[63])))) { goto L1; }
  {
   cl_object v2record;
   {
    cl_object v3;
    cl_object v4;
    v3 = ecl_symbol_value(VV[63]);
    v4 = ecl_function_dispatch(cl_env_copy,VV[94])(2, v3, ecl_make_fixnum(0)) /*  MAKE-SEQ-ITERATOR */;
L8:;
    if ((v4)!=ECL_NIL) { goto L10; }
    v2record = ECL_NIL;
    goto L5;
L10:;
    {
     cl_object v5;
     v5 = ecl_function_dispatch(cl_env_copy,VV[95])(2, v3, v4) /*  SEQ-ITERATOR-REF */;
     T0 = ecl_car(v5);
     if (!(ecl_equal(v1object,T0))) { goto L12; }
     v2record = v5;
     goto L5;
    }
L12:;
    v4 = ecl_function_dispatch(cl_env_copy,VV[96])(2, v3, v4) /*  SEQ-ITERATOR-NEXT */;
    goto L8;
   }
L5:;
   if (Null(v2record)) { goto L18; }
   value0 = ecl_cadr(v2record);
   cl_env_copy->nvalues = 1;
   return value0;
L18:;
   {
    cl_object v3builder;
    v3builder = L31static_constant_expression(v1object);
    if (Null(v3builder)) { goto L21; }
    {
     cl_object v4c_name;
     {
      cl_fixnum v5;
      v5 = ecl_length(ecl_symbol_value(VV[63]));
      v4c_name = cl_format(3, ECL_NIL, VV[64], ecl_make_fixnum(v5));
     }
     T0 = cl_list(3, v1object, v4c_name, v3builder);
     cl_set(VV[63],CONS(T0,ecl_symbol_value(VV[63])));
     value0 = ecl_function_dispatch(cl_env_copy,VV[97])(4, ECL_SYM("LOCATION",1001), v4c_name, ECL_SYM("VALUE",2032), v1object) /*  MAKE-VV */;
     return value0;
    }
L21:;
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
L1:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for WT-VV-INDEX                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L33wt_vv_index(cl_object v1index, cl_object v2permanent_p)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (ecl_numberp(v1index)) { goto L1; }
  value0 = ecl_function_dispatch(cl_env_copy,VV[114])(1, v1index) /*  WT */;
  return value0;
L1:;
  if (Null(v2permanent_p)) { goto L3; }
  value0 = ecl_function_dispatch(cl_env_copy,VV[114])(3, VV[66], v1index, VV[67]) /*  WT */;
  return value0;
L3:;
  value0 = ecl_function_dispatch(cl_env_copy,VV[114])(3, VV[68], v1index, VV[67]) /*  WT */;
  return value0;
 }
}
/*      function definition for SET-VV-INDEX                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L34set_vv_index(cl_object v1loc, cl_object v2index, cl_object v3permanent_p)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  ecl_function_dispatch(cl_env_copy,VV[116])(0)   /*  WT-NL           */;
  L33wt_vv_index(v2index, v3permanent_p);
  ecl_function_dispatch(cl_env_copy,VV[114])(1, VV[70]) /*  WT        */;
  ecl_function_dispatch(cl_env_copy,VV[117])(2, ECL_SYM("OBJECT",1305), v1loc) /*  WT-COERCE-LOC */;
  value0 = ecl_function_dispatch(cl_env_copy,VV[114])(1, VV[71]) /*  WT */;
  return value0;
 }
}
/*      function definition for WT-VV                                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L35wt_vv(cl_object v1vv_loc)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  ecl_structure_set(v1vv_loc,VV[31],1,ECL_T);
  T0 = ecl_function_dispatch(cl_env_copy,VV[119])(1, v1vv_loc) /*  VV-LOCATION */;
  T1 = ecl_function_dispatch(cl_env_copy,VV[120])(1, v1vv_loc) /*  VV-PERMANENT-P */;
  value0 = L33wt_vv_index(T0, T1);
  return value0;
 }
}
/*      function definition for SET-VV                                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L36set_vv(cl_object v1loc, cl_object v2vv_loc)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  ecl_structure_set(v2vv_loc,VV[31],1,ECL_T);
  T0 = ecl_function_dispatch(cl_env_copy,VV[119])(1, v2vv_loc) /*  VV-LOCATION */;
  T1 = ecl_function_dispatch(cl_env_copy,VV[120])(1, v2vv_loc) /*  VV-PERMANENT-P */;
  value0 = L34set_vv_index(v1loc, T0, T1);
  return value0;
 }
}
/*      function definition for VV-TYPE                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L37vv_type(cl_object v1loc)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2value;
   v2value = ecl_function_dispatch(cl_env_copy,VV[123])(1, v1loc) /*  VV-VALUE */;
   if (Null(v2value)) { goto L2; }
   if (ECL_FIXNUMP(v2value)) { goto L2; }
   value0 = cl_type_of(v2value);
   return value0;
L2:;
   value0 = ECL_T;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}

#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/cmp/cmpwt.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclzgCNSHb7_z1X6lq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CMP;CMPWT.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclzgCNSHb7_z1X6lq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  ecl_cmp_defun(VV[76]);                          /*  DATA-PERMANENT-STORAGE-SIZE */
  ecl_cmp_defun(VV[77]);                          /*  DATA-TEMPORARY-STORAGE-SIZE */
  ecl_cmp_defun(VV[78]);                          /*  DATA-SIZE       */
  ecl_cmp_defun(VV[79]);                          /*  DATA-INIT       */
  ecl_cmp_defun(VV[80]);                          /*  DATA-GET-ALL-OBJECTS */
  ecl_cmp_defun(VV[82]);                          /*  DATA-DUMP-ARRAY */
  ecl_cmp_defun(VV[83]);                          /*  DATA-C-DUMP     */
  ecl_cmp_defun(VV[85]);                          /*  DATA-EMPTY-LOC  */
  ecl_cmp_defun(VV[86]);                          /*  ADD-LOAD-FORM   */
  ecl_cmp_defun(VV[90]);                          /*  ADD-OBJECT      */
  ecl_cmp_defun(VV[98]);                          /*  ADD-SYMBOL      */
  ecl_cmp_defun(VV[99]);                          /*  ADD-KEYWORDS    */
  ecl_cmp_defun(VV[100]);                         /*  STATIC-BASE-STRING-BUILDER */
  ecl_cmp_defun(VV[101]);                         /*  STATIC-SINGLE-FLOAT-BUILDER */
  ecl_cmp_defun(VV[102]);                         /*  STATIC-DOUBLE-FLOAT-BUILDER */
  ecl_cmp_defun(VV[103]);                         /*  STATIC-LONG-FLOAT-BUILDER */
  ecl_cmp_defun(VV[104]);                         /*  STATIC-RATIONAL-BUILDER */
  ecl_cmp_defun(VV[105]);                         /*  STATIC-CONSTANT-DELEGATE */
  ecl_cmp_defun(VV[106]);                         /*  STATIC-COMPLEX-BUILDER */
  ecl_cmp_defun(VV[107]);                         /*  STATIC-CSFLOAT-BUILDER */
  ecl_cmp_defun(VV[108]);                         /*  STATIC-CDFLOAT-BUILDER */
  ecl_cmp_defun(VV[109]);                         /*  STATIC-CLFLOAT-BUILDER */
  ecl_cmp_defun(VV[110]);                         /*  STATIC-CONSTANT-BUILDER */
  ecl_cmp_defun(VV[111]);                         /*  STATIC-CONSTANT-EXPRESSION */
  ecl_cmp_defun(VV[112]);                         /*  ADD-STATIC-CONSTANT */
  ecl_cmp_defun(VV[113]);                         /*  WT-VV-INDEX     */
  ecl_cmp_defun(VV[115]);                         /*  SET-VV-INDEX    */
  ecl_cmp_defun(VV[118]);                         /*  WT-VV           */
  ecl_cmp_defun(VV[121]);                         /*  SET-VV          */
  ecl_cmp_defun(VV[122]);                         /*  VV-TYPE         */
}
