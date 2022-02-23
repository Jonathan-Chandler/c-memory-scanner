/*      Compiler: ECL 21.2.1                                          */
/*      Source: EXT:ECL-CDB;ECL-HELP.LISP                             */
#include <ecl/ecl-cmp.h>
#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/ext/ecl-help.eclh"
/*      function definition for TO-CDB-VECTOR                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L1to_cdb_vector(cl_object v1object)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2vector;
   cl_object v3stream;
   T0 = si_make_vector(ECL_SYM("BYTE8",1358), ecl_make_fixnum(128), ECL_T, ecl_make_fixnum(0), ECL_NIL, ecl_make_fixnum(0));
   v2vector = si_fill_array_with_elt(T0, ecl_make_fixnum(0), ecl_make_fixnum(0), ECL_NIL);
   v3stream = si_make_sequence_output_stream(3, v2vector, ECL_SYM("EXTERNAL-FORMAT",1258), ECL_SYM("UTF-8",1737));
   {
    cl_object v4;
    v4 = ecl_symbol_value(ECL_SYM("+IO-SYNTAX-PROGV-LIST+",1777));
    {
     cl_object v6, v7; cl_index v5;
     v6 = _ecl_car(v4);
     v7 = _ecl_cdr(v4);
     v5 = ecl_progv(cl_env_copy, v6, v7);
     T0 = cl_find_package(VV[0]);
     ecl_bds_bind(cl_env_copy,ECL_SYM("*PRINT-PACKAGE*",1030),T0); /*  *PRINT-PACKAGE* */
     cl_write(9, v1object, ECL_SYM("STREAM",1340), v3stream, ECL_SYM("PRETTY",1316), ECL_NIL, ECL_SYM("READABLY",1323), ECL_NIL, ECL_SYM("ESCAPE",1252), ECL_T);
     ecl_bds_unwind(cl_env_copy,v5);
    }
   }
   value0 = v2vector;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for FROM-CDB-VECTOR                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L2from_cdb_vector(cl_object v1vector)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2stream;
   v2stream = si_make_sequence_input_stream(3, v1vector, ECL_SYM("EXTERNAL-FORMAT",1258), ECL_SYM("UTF-8",1737));
   value0 = cl_read(4, v2stream, ECL_NIL, ECL_NIL, ECL_NIL);
   return value0;
  }
 }
}
/*      function definition for SEARCH-HELP-FILE                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L3search_help_file(cl_object v1string, cl_object v2path)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3key;
   cl_object v4value;
   v3key = L1to_cdb_vector(v1string);
   v4value = ecl_function_dispatch(cl_env_copy,VV[10])(2, v3key, v2path) /*  LOOKUP-CDB */;
   if (Null(v4value)) { goto L3; }
   value0 = L2from_cdb_vector(v4value);
   return value0;
L3:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for DUMP-HELP-FILE                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L4dump_help_file(volatile cl_narg narg, cl_object volatile v1hash_table, cl_object volatile v2path, ...)
{
 cl_object T0, T1;
 cl_object volatile env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>4)) FEwrong_num_arguments_anonym();
 {
  cl_object volatile v3merge;
  cl_object volatile v4test;
  va_list args; va_start(args,v2path);
  {
   int i = 2;
   if (i >= narg) {
    v3merge = ECL_NIL;
   } else {
    i++;
    v3merge = va_arg(args,cl_object);
   }
   if (i >= narg) {
    v4test = ECL_NIL;
   } else {
    i++;
    v4test = va_arg(args,cl_object);
   }
  }
  va_end(args);
  if (Null(v3merge)) { goto L3; }
  cl_error(1, VV[4]);
L3:;
  {
   volatile cl_object v5cdb;
   v5cdb = ECL_NIL;
   {
    volatile bool unwinding = FALSE;
    cl_index v6=ECL_STACK_INDEX(cl_env_copy),v7;
    ecl_frame_ptr next_fr;
    ecl_frs_push(cl_env_copy,ECL_PROTECT_TAG);
    if (__ecl_frs_push_result) {
      unwinding = TRUE; next_fr=cl_env_copy->nlj_fr;
    } else {
    v5cdb = ecl_function_dispatch(cl_env_copy,VV[12])(2, ECL_NIL, v2path) /*  %MAKE-CDB */;
    {
     cl_object v8;
     cl_object v9k;
     cl_object v10v;
     v8 = ECL_NIL;
     v9k = ECL_NIL;
     v10v = ECL_NIL;
     {
      cl_object v11;
      v11 = si_hash_table_iterator(v1hash_table);
L14:;
      {
       cl_object v13;
       cl_object v14;
       cl_object v15;
       value0 = ecl_function_dispatch(cl_env_copy,v11)(0);
       {
        const int v16 = cl_env_copy->nvalues;
        v13 = value0;
        cl_object v17;
        v17 = (v16<=1)? ECL_NIL : cl_env_copy->values[1];
        v14 = v17;
        v17 = (v16<=2)? ECL_NIL : cl_env_copy->values[2];
        v15 = v17;
       }
       if (Null(v13)) { goto L19; }
       v10v = v15;
       v9k = v14;
L19:;
       v8 = v13;
       if ((v8)!=ECL_NIL) { goto L16; }
      }
      goto L15;
L16:;
      T0 = L1to_cdb_vector(v9k);
      T1 = L1to_cdb_vector(v10v);
      ecl_function_dispatch(cl_env_copy,VV[13])(3, T0, T1, v5cdb) /*  ADD-RECORD */;
      goto L14;
L15:;
      cl_env_copy->values[0] = ECL_NIL;
      cl_env_copy->nvalues = 1;
     }
    }
    }
    ecl_frs_pop(cl_env_copy);
    v7=ecl_stack_push_values(cl_env_copy);
    ecl_function_dispatch(cl_env_copy,VV[14])(1, v5cdb) /*  CLOSE-CDB */;
    ecl_stack_pop_values(cl_env_copy,v7);
    if (unwinding) ecl_unwind(cl_env_copy,next_fr);
    ECL_STACK_SET_INDEX(cl_env_copy,v6);
   }
  }
  if (Null(v4test)) { goto L28; }
  {
   cl_object v5;
   cl_object v6k;
   cl_object v7v;
   v5 = ECL_NIL;
   v6k = ECL_NIL;
   v7v = ECL_NIL;
   {
    cl_object v8;
    v8 = si_hash_table_iterator(v1hash_table);
    {
     cl_object v9other_value;
     v9other_value = ECL_NIL;
L35:;
     {
      cl_object v11;
      cl_object v12;
      cl_object v13;
      value0 = ecl_function_dispatch(cl_env_copy,v8)(0);
      {
       const int v14 = cl_env_copy->nvalues;
       v11 = value0;
       cl_object v15;
       v15 = (v14<=1)? ECL_NIL : cl_env_copy->values[1];
       v12 = v15;
       v15 = (v14<=2)? ECL_NIL : cl_env_copy->values[2];
       v13 = v15;
      }
      if (Null(v11)) { goto L40; }
      v7v = v13;
      v6k = v12;
L40:;
      v5 = v11;
      if ((v5)!=ECL_NIL) { goto L37; }
     }
     goto L36;
L37:;
     v9other_value = L3search_help_file(v6k, v2path);
     if (Null(v9other_value)) { goto L51; }
     if (ecl_equalp(v9other_value,v7v)) { goto L48; }
     goto L49;
L51:;
     goto L49;
L49:;
     cl_error(3, VV[5], v6k, v2path);
L48:;
     goto L35;
L36:;
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 1;
     return value0;
    }
   }
  }
L28:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}

#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/ext/ecl-help.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclRkxTbXZ7_pmc6lq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("EXT:ECL-CDB;ECL-HELP.LISP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclRkxTbXZ7_pmc6lq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  ecl_cmp_defun(VV[7]);                           /*  TO-CDB-VECTOR   */
  ecl_cmp_defun(VV[8]);                           /*  FROM-CDB-VECTOR */
  ecl_cmp_defun(VV[9]);                           /*  SEARCH-HELP-FILE */
  ecl_cmp_defun(VV[11]);                          /*  DUMP-HELP-FILE  */
}