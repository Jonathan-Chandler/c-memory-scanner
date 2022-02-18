/*      Compiler: ECL 21.2.1                                          */
/*      Source: EXT:ECL-CDB;ECL-CDB.LISP                              */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/ext/ecl-cdb.eclh"
/*      function definition for MAKE-CDB                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L1make_cdb(cl_narg narg, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  cl_object v1;
  cl_object v2;
  cl_object v3;
  cl_object v4;
  cl_object v5;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  {
   cl_object keyvars[10];
   cl_parse_key(args,5,L1make_cdbkeys,keyvars,NULL,FALSE);
   ecl_va_end(args);
   v1 = keyvars[0];
   v2 = keyvars[1];
   v3 = keyvars[2];
   v4 = keyvars[3];
   v5 = keyvars[4];
  }
  value0 = si_make_structure(6, VV[3], v1, v2, v3, v4, v5);
  return value0;
 }
}
/*      local function LAMBDA1                                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC2__lambda1(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[0]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(4), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[0]);
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
}
/*      local function LAMBDA5                                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC3__lambda5(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[0]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(3), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[0]);
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
}
/*      local function LAMBDA9                                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC4__lambda9(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[0]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(2), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[0]);
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
}
/*      local function LAMBDA13                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC5__lambda13(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[0]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(1), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[0]);
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
}
/*      local function LAMBDA17                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC6__lambda17(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[0]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(0), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[0]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(0));
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
}
/*      function definition for READ-WORD                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L7read_word(cl_object v1stream)
{
 cl_object T0, T1, T2, T3, T4, T5, T6;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_read_byte(1, v1stream);
  T1 = cl_read_byte(1, v1stream);
  T2 = cl_ash(T1, ecl_make_fixnum(8));
  T3 = cl_read_byte(1, v1stream);
  T4 = cl_ash(T3, ecl_make_fixnum(16));
  T5 = cl_read_byte(1, v1stream);
  T6 = cl_ash(T5, ecl_make_fixnum(24));
  value0 = cl_logior(4, T0, T2, T4, T6);
  return value0;
 }
}
/*      function definition for WRITE-WORD                            */
/*      optimize speed 3, debug 1, space 1, safety 0                  */
static cl_object L8write_word(cl_object v1byte, cl_object v2stream)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_uint32_t v3byte;
 v3byte = ecl_to_uint32_t(v1byte);
TTL:
 T0 = ecl_boole(ECL_BOOLAND,(ecl_make_fixnum(255)),(ecl_make_uint32_t(v3byte)));
 cl_write_byte(T0, v2stream);
 T0 = ecl_ash(ecl_make_uint32_t(v3byte),-8);
 T1 = ecl_boole(ECL_BOOLAND,(ecl_make_fixnum(255)),(T0));
 cl_write_byte(T1, v2stream);
 T0 = ecl_ash(ecl_make_uint32_t(v3byte),-16);
 T1 = ecl_boole(ECL_BOOLAND,(ecl_make_fixnum(255)),(T0));
 cl_write_byte(T1, v2stream);
 T0 = ecl_ash(ecl_make_uint32_t(v3byte),-24);
 T1 = ecl_boole(ECL_BOOLAND,(ecl_make_fixnum(255)),(T0));
 value0 = cl_write_byte(T1, v2stream);
 return value0;
}
/*      function definition for WRITE-VECTOR                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L9write_vector(cl_object v1vector, cl_object v2stream)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3v;
   cl_fixnum v4;
   cl_fixnum v5;
   v3v = ECL_NIL;
   v4 = 0;
   v5 = 0;
   v5 = ecl_length(v1vector);
L4:;
   if (!((v4)>=(v5))) { goto L8; }
   goto L5;
L8:;
   {
    cl_object v6;
    v6 = v1vector;
    T0 = v6;
    {
     cl_fixnum v7;
     {
      cl_fixnum v8;
      v8 = v4;
      if (ecl_unlikely((v8)>=(v6)->vector.dim))
           FEwrong_index(ECL_NIL,v6,-1,ecl_make_fixnum(v8),(v6)->vector.dim);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v7 = v8;
     }
     v3v = ecl_aref_unsafe(T0,v7);
    }
   }
   {
    cl_object v6;
    v6 = ecl_make_integer((v4)+1);
    {
     bool v7;
     v7 = ECL_FIXNUMP(v6);
     if (ecl_unlikely(!(v7)))
         FEwrong_type_argument(ECL_SYM("FIXNUM",374),v6);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
    }
    v4 = ecl_fixnum(v6);
   }
   L8write_word(v3v, v2stream);
   goto L4;
L5:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for TO-CDB-HASH                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L10to_cdb_hash(cl_object v1key_vector)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2h;
   v2h = ecl_make_fixnum(5381);
   {
    uint8_t v3byte;
    cl_fixnum v4;
    cl_fixnum v5;
    v3byte = (uint8_t)(0);
    v4 = 0;
    v5 = 0;
    v5 = ecl_length(v1key_vector);
L6:;
    if (!((v4)>=(v5))) { goto L10; }
    goto L7;
L10:;
    {
     cl_object v6;
     {
      cl_object v7;
      v7 = v1key_vector;
      T0 = v7;
      {
       cl_fixnum v8;
       {
        cl_fixnum v9;
        v9 = v4;
        if (ecl_unlikely((v9)>=(v7)->vector.dim))
           FEwrong_index(ECL_NIL,v7,-1,ecl_make_fixnum(v9),(v7)->vector.dim);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v8 = v9;
       }
       v6 = ecl_aref_unsafe(T0,v8);
      }
     }
     {
      cl_fixnum v7;
      v7 = 0;
      if (!(ECL_FIXNUMP(v6))) { goto L24; }
      v7 = ecl_fixnum(v6);
      if (!((v7)<=(255))) { goto L29; }
      T0 = ecl_make_bool((v7)>=(0));
      goto L21;
L29:;
      T0 = ECL_NIL;
      goto L21;
L24:;
      T0 = ECL_NIL;
      goto L21;
     }
L21:;
     if (ecl_unlikely(!((T0)!=ECL_NIL)))
         FEwrong_type_argument(VV[14],v6);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v3byte = ecl_fixnum(v6);
    }
    {
     cl_object v6;
     v6 = ecl_make_integer((v4)+1);
     {
      bool v7;
      v7 = ECL_FIXNUMP(v6);
      if (ecl_unlikely(!(v7)))
         FEwrong_type_argument(ECL_SYM("FIXNUM",374),v6);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
     }
     v4 = ecl_fixnum(v6);
    }
    T0 = cl_logand(2, ecl_make_fixnum(134217727), v2h);
    T1 = cl_ash(T0, ecl_make_fixnum(5));
    T2 = ecl_plus(T1,v2h);
    T3 = ecl_boole(ECL_BOOLAND,(VV[15]),(T2));
    v2h = ecl_boole(ECL_BOOLXOR,(T3),(ecl_make_uint8_t(v3byte)));
    goto L6;
L7:;
    value0 = v2h;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      function definition for %MAKE-CDB                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L11_make_cdb(cl_object v1cdb_pathname, cl_object v2temporary_pathname)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3stream;
   v3stream = cl_open(9, v2temporary_pathname, ECL_SYM("DIRECTION",1240), ECL_SYM("OUTPUT",1309), ECL_SYM("IF-EXISTS",1270), ECL_SYM("SUPERSEDE",1341), ECL_SYM("IF-DOES-NOT-EXIST",1268), ECL_SYM("CREATE",1235), ECL_SYM("ELEMENT-TYPE",1246), VV[14]);
   if (Null(v3stream)) { goto L2; }
   cl_file_position(2, v3stream, ecl_make_fixnum(0));
   {
    cl_fixnum v4i;
    v4i = 0;
    goto L8;
L7:;
    L8write_word(ecl_make_fixnum(0), v3stream);
    v4i = (v4i)+1;
L8:;
    if (!((v4i)<(512))) { goto L13; }
    goto L7;
L13:;
   }
   T0 = si_make_vector(ECL_T, ecl_make_fixnum(256), ECL_NIL, ECL_NIL, ECL_NIL, ecl_make_fixnum(0));
   T1 = si_fill_array_with_elt(T0, ECL_NIL, ecl_make_fixnum(0), ECL_NIL);
   value0 = L1make_cdb(8, ECL_SYM("STREAM",1340), v3stream, ECL_SYM("PATHNAME",1312), v1cdb_pathname, VV[17], T1, VV[18], v2temporary_pathname);
   return value0;
L2:;
   value0 = cl_error(2, VV[19], v2temporary_pathname);
   return value0;
  }
 }
}
/*      local function WITH-OUTPUT-TO-CDB                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC12with_output_to_cdb(cl_object v1, cl_object v2)
{
 cl_object T0, T1, T2, T3, T4, T5;
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
   cl_object v6cdb;
   cl_object v7cdb_pathname;
   cl_object v8temporary_pathname;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[46])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v9;
    v9 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4 = v9;
   }
   v5 = v4;
   if (!(v5==ECL_NIL)) { goto L10; }
   ecl_function_dispatch(cl_env_copy,VV[46])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L10:;
   {
    cl_object v9;
    v9 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v6cdb = v9;
   }
   if (!(v5==ECL_NIL)) { goto L16; }
   ecl_function_dispatch(cl_env_copy,VV[46])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L16:;
   {
    cl_object v9;
    v9 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v7cdb_pathname = v9;
   }
   if (!(v5==ECL_NIL)) { goto L22; }
   ecl_function_dispatch(cl_env_copy,VV[46])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L22:;
   {
    cl_object v9;
    v9 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v8temporary_pathname = v9;
   }
   if (Null(v5)) { goto L27; }
   ecl_function_dispatch(cl_env_copy,VV[47])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L27:;
   T0 = ecl_list1(v6cdb);
   T1 = cl_list(3, VV[20], v7cdb_pathname, v8temporary_pathname);
   T2 = cl_list(3, ECL_SYM("SETF",752), v6cdb, T1);
   T3 = cl_listX(3, ECL_SYM("PROGN",673), T2, v3);
   T4 = cl_list(2, VV[21], v6cdb);
   T5 = cl_list(3, ECL_SYM("UNWIND-PROTECT",890), T3, T4);
   value0 = cl_list(3, ECL_SYM("LET",479), T0, T5);
   return value0;
  }
 }
}
/*      function definition for ADD-RECORD                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L13add_record(cl_object v1key, cl_object v2value, cl_object v3cdb)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v4hash_key;
   cl_object v5table_index;
   cl_object v6stream;
   v4hash_key = L10to_cdb_hash(v1key);
   v5table_index = ecl_boole(ECL_BOOLAND,(ecl_make_fixnum(255)),(v4hash_key));
   v6stream = ecl_function_dispatch(cl_env_copy,VV[10])(1, v3cdb) /*  CDB-STREAM */;
   {
    cl_object v7;
    cl_object v8;
    cl_object v9;
    T0 = cl_file_position(1, v6stream);
    v7 = CONS(v4hash_key,T0);
    v8 = ecl_function_dispatch(cl_env_copy,VV[7])(1, v3cdb) /*  CDB-TABLES */;
    {
     cl_object v10;
     v10 = v8;
     T1 = v10;
     {
      cl_fixnum v11;
      {
       cl_object v12;
       v12 = v5table_index;
       if (ecl_unlikely((ecl_fixnum(v12))>=(v10)->vector.dim))
           FEwrong_index(ECL_NIL,v10,-1,ecl_make_fixnum(ecl_fixnum(v12)),(v10)->vector.dim);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v11 = ecl_fixnum(v12);
      }
      T0 = ecl_aref_unsafe(T1,v11);
     }
    }
    v9 = CONS(v7,T0);
    {
     cl_object v10;
     v10 = v8;
     T0 = v10;
     {
      cl_fixnum v11;
      {
       cl_object v12;
       v12 = v5table_index;
       if (ecl_unlikely((ecl_fixnum(v12))>=(v10)->vector.dim))
           FEwrong_index(ECL_NIL,v10,-1,ecl_make_fixnum(ecl_fixnum(v12)),(v10)->vector.dim);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v11 = ecl_fixnum(v12);
      }
      ecl_aset_unsafe(T0,v11,v9);
     }
    }
   }
   {
    cl_fixnum v7;
    v7 = ecl_length(v1key);
    L8write_word(ecl_make_fixnum(v7), v6stream);
   }
   {
    cl_fixnum v7;
    v7 = ecl_length(v2value);
    L8write_word(ecl_make_fixnum(v7), v6stream);
   }
   cl_write_sequence(2, v1key, v6stream);
   value0 = cl_write_sequence(2, v2value, v6stream);
   return value0;
  }
 }
}
/*      function definition for DUMP-TABLE                            */
/*      optimize speed 3, debug 1, space 1, safety 0                  */
static cl_object L14dump_table(cl_object v1table, cl_object v2stream)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 {
  cl_object v3length;
  {
   cl_fixnum v4;
   v4 = ecl_length(v1table);
   v3length = ecl_times(ecl_make_fixnum(2),ecl_make_fixnum(v4));
  }
  {
   cl_object v4vector;
   T0 = ecl_times(ecl_make_fixnum(2),v3length);
   T1 = si_make_pure_array(ECL_SYM("BYTE32",1360), T0, ECL_NIL, ECL_NIL, ECL_NIL, ecl_make_fixnum(0));
   v4vector = si_fill_array_with_elt(T1, ecl_make_fixnum(0), ecl_make_fixnum(0), ECL_NIL);
   {
    cl_object v5hash_key;
    cl_object v6pos;
    cl_object v7;
    v5hash_key = ECL_NIL;
    v6pos = ECL_NIL;
    v7 = v1table;
    {
     cl_object v8index;
     v8index = ECL_NIL;
L7:;
     if (!(v7==ECL_NIL)) { goto L9; }
     goto L8;
L9:;
     {
      cl_object v9;
      v9 = ECL_CONS_CAR(v7);
      v5hash_key = _ecl_car(v9);
      v9 = _ecl_cdr(v9);
      v6pos = v9;
     }
     v7 = ECL_CONS_CDR(v7);
     T0 = ecl_ash(v5hash_key,-8);
     v8index = (ecl_floor2(T0,v3length),cl_env_copy->values[1]);
     {
      cl_object v9disp;
      v9disp = ecl_make_fixnum(0);
      {
       cl_object v10i;
       v10i = ECL_NIL;
       {
        cl_object v11record_pos;
        v11record_pos = ECL_NIL;
L26:;
        if (!(ecl_greatereq(v9disp,v3length))) { goto L28; }
        goto L27;
L28:;
        T0 = ecl_plus(v9disp,v8index);
        T1 = (ecl_floor2(T0,v3length),cl_env_copy->values[1]);
        v10i = ecl_times(ecl_make_fixnum(2),T1);
        T0 = ecl_one_plus(v10i);
        v11record_pos = ecl_make_uint32_t((v4vector)->vector.self.b32[ecl_fixnum(T0)]);
        if (!(ecl_zerop(v11record_pos))) { goto L34; }
        goto L27;
L34:;
        v9disp = ecl_one_plus(v9disp);
        goto L26;
L27:;
        (v4vector)->vector.self.b32[ecl_fixnum(v10i)]= ecl_to_uint(v5hash_key);
        T0 = ecl_one_plus(v10i);
        (v4vector)->vector.self.b32[ecl_fixnum(T0)]= ecl_to_uint(v6pos);
       }
      }
     }
     goto L7;
L8:;
     L9write_vector(v4vector, v2stream);
     value0 = v3length;
     cl_env_copy->nvalues = 1;
     return value0;
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 1;
     return value0;
    }
   }
  }
 }
}
/*      function definition for DUMP-CDB                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L15dump_cdb(cl_object v1cdb)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2stream;
   cl_object v3index;
   v2stream = ecl_function_dispatch(cl_env_copy,VV[10])(1, v1cdb) /*  CDB-STREAM */;
   v3index = si_make_vector(ECL_SYM("BYTE32",1360), ecl_make_fixnum(512), ECL_NIL, ECL_NIL, ECL_NIL, ecl_make_fixnum(0));
   {
    cl_object v4;
    cl_object v5table;
    cl_object v6;
    cl_fixnum v7;
    cl_fixnum v8;
    v4 = ecl_function_dispatch(cl_env_copy,VV[7])(1, v1cdb) /*  CDB-TABLES */;
    v5table = ECL_NIL;
    {
     cl_object v9;
     v9 = v4;
     if (ecl_unlikely(!ECL_VECTORP(v9))) FEtype_error_vector(v9);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v6 = v9;
    }
    v7 = 0;
    v8 = 0;
    {
     cl_fixnum v9i;
     v9i = 0;
     v8 = ecl_length(v6);
     if (!((v7)>=(v8))) { goto L16; }
     goto L13;
L16:;
     {
      cl_object v10;
      v10 = v6;
      T0 = v10;
      {
       cl_fixnum v11;
       {
        cl_fixnum v12;
        v12 = v7;
        if (ecl_unlikely((v12)>=(v10)->vector.dim))
           FEwrong_index(ECL_NIL,v10,-1,ecl_make_fixnum(v12),(v10)->vector.dim);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v11 = v12;
       }
       v5table = ecl_aref_unsafe(T0,v11);
      }
     }
     {
      cl_object v10;
      v10 = ecl_make_integer((v7)+1);
      {
       bool v11;
       v11 = ECL_FIXNUMP(v10);
       if (ecl_unlikely(!(v11)))
         FEwrong_type_argument(ECL_SYM("FIXNUM",374),v10);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      v7 = ecl_fixnum(v10);
     }
L12:;
     {
      cl_object v10;
      v10 = v3index;
      T0 = v10;
      {
       cl_fixnum v11;
       {
        cl_fixnum v12;
        v12 = v9i;
        if (ecl_unlikely((v12)>=(v10)->vector.dim))
           FEwrong_index(ECL_NIL,v10,-1,ecl_make_fixnum(v12),(v10)->vector.dim);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v11 = v12;
       }
       T1 = cl_file_position(1, v2stream);
       ecl_aset_unsafe(T0,v11,T1);
      }
     }
     {
      cl_object v10;
      v10 = v3index;
      T0 = v10;
      {
       cl_fixnum v11;
       {
        cl_object v12;
        v12 = ecl_make_integer((v9i)+1);
        if (ecl_unlikely((ecl_fixnum(v12))>=(v10)->vector.dim))
           FEwrong_index(ECL_NIL,v10,-1,ecl_make_fixnum(ecl_fixnum(v12)),(v10)->vector.dim);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v11 = ecl_fixnum(v12);
       }
       T1 = L14dump_table(v5table, v2stream);
       ecl_aset_unsafe(T0,v11,T1);
      }
     }
     if (!((v7)>=(v8))) { goto L41; }
     goto L13;
L41:;
     {
      cl_object v10;
      v10 = v6;
      T0 = v10;
      {
       cl_fixnum v11;
       {
        cl_fixnum v12;
        v12 = v7;
        if (ecl_unlikely((v12)>=(v10)->vector.dim))
           FEwrong_index(ECL_NIL,v10,-1,ecl_make_fixnum(v12),(v10)->vector.dim);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v11 = v12;
       }
       v5table = ecl_aref_unsafe(T0,v11);
      }
     }
     {
      cl_object v10;
      v10 = ecl_make_integer((v7)+1);
      {
       bool v11;
       v11 = ECL_FIXNUMP(v10);
       if (ecl_unlikely(!(v11)))
         FEwrong_type_argument(ECL_SYM("FIXNUM",374),v10);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      v7 = ecl_fixnum(v10);
     }
     v9i = (v9i)+(2);
     goto L12;
L13:;
    }
   }
   cl_file_position(2, v2stream, ecl_make_fixnum(0));
   value0 = L9write_vector(v3index, v2stream);
   return value0;
  }
 }
}
/*      function definition for CLOSE-CDB                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L16close_cdb(cl_object v1cdb)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2stream;
   v2stream = ecl_function_dispatch(cl_env_copy,VV[10])(1, v1cdb) /*  CDB-STREAM */;
   if (Null(cl_open_stream_p(v2stream))) { goto L2; }
   L15dump_cdb(v1cdb);
   cl_close(1, v2stream);
   if (Null(ecl_function_dispatch(cl_env_copy,VV[9])(1, v1cdb) /*  CDB-PATHNAME */)) { goto L6; }
   T0 = ecl_function_dispatch(cl_env_copy,VV[5])(1, v1cdb) /*  CDB-TEMPORARY-PATHNAME */;
   T1 = ecl_function_dispatch(cl_env_copy,VV[9])(1, v1cdb) /*  CDB-PATHNAME */;
   value0 = cl_rename_file(2, T0, T1);
   return value0;
L6:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L2:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for CDB-ERROR                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L17cdb_error(cl_object v1stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_error(2, VV[26], v1stream);
  return value0;
 }
}
/*      function definition for VALUES-COINCIDE                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L18values_coincide(cl_object v1position, cl_object v2key_vector, cl_object v3stream, cl_object v4return_position_p)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if ((cl_file_position(2, v3stream, v1position))!=ECL_NIL) { goto L1; }
  L17cdb_error(v3stream);
L1:;
  {
   cl_object v5key_length;
   v5key_length = L7read_word(v3stream);
   {
    cl_fixnum v6;
    v6 = ecl_length(v2key_vector);
    if (!(ecl_number_equalp(v5key_length,ecl_make_fixnum(v6)))) { goto L4; }
   }
   {
    cl_object v6value_length;
    cl_object v7other_key;
    v6value_length = L7read_word(v3stream);
    v7other_key = si_make_pure_array(ECL_SYM("BYTE8",1358), v5key_length, ECL_NIL, ECL_NIL, ECL_NIL, ecl_make_fixnum(0));
    cl_read_sequence(2, v7other_key, v3stream);
    if (!(ecl_equalp(v7other_key,v2key_vector))) { goto L9; }
    if (Null(v4return_position_p)) { goto L11; }
    value0 = cl_file_position(1, v3stream);
    return value0;
L11:;
    {
     cl_object v8value;
     v8value = si_make_pure_array(ECL_SYM("BYTE8",1358), v6value_length, ECL_NIL, ECL_NIL, ECL_NIL, ecl_make_fixnum(0));
     cl_read_sequence(2, v8value, v3stream);
     value0 = v8value;
     cl_env_copy->nvalues = 1;
     return value0;
    }
L9:;
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
   }
L4:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for LOOKUP-CDB                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L19lookup_cdb(volatile cl_narg narg, cl_object volatile v1key, cl_object volatile v2stream, ...)
{
 cl_object T0;
 cl_object volatile env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>3)) FEwrong_num_arguments_anonym();
 {
  cl_object volatile v3return_position_p;
  va_list args; va_start(args,v2stream);
  {
   int i = 2;
   if (i >= narg) {
    v3return_position_p = ECL_NIL;
   } else {
    i++;
    v3return_position_p = va_arg(args,cl_object);
   }
  }
  va_end(args);
  if (Null(cl_streamp(v2stream))) { goto L2; }
  {
   cl_object v4hash;
   cl_object v5table;
   v4hash = L10to_cdb_hash(v1key);
   v5table = ecl_boole(ECL_BOOLAND,(ecl_make_fixnum(255)),(v4hash));
   T0 = ecl_times(v5table,ecl_make_fixnum(8));
   if ((cl_file_position(2, v2stream, T0))!=ECL_NIL) { goto L6; }
   L17cdb_error(v2stream);
L6:;
   {
    cl_object v6start;
    cl_object v7length;
    cl_object v8index;
    v6start = L7read_word(v2stream);
    v7length = L7read_word(v2stream);
    T0 = cl_ash(v4hash, ecl_make_fixnum(-8));
    v8index = (ecl_floor2(T0,v7length),cl_env_copy->values[1]);
    {
     cl_object v9reset;
     v9reset = ECL_NIL;
     {
      cl_object v10i;
      cl_object v11;
      v10i = ecl_make_fixnum(0);
      {
       cl_object v12;
       v12 = v7length;
       {
        bool v13;
        v13 = ecl_numberp(v12);
        if (ecl_unlikely(!(v13)))
         FEwrong_type_argument(ECL_SYM("NUMBER",608),v12);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       v11 = v12;
      }
      {
       cl_object v12rounded_i;
       v12rounded_i = ECL_NIL;
       {
        cl_object v13position;
        v13position = ECL_NIL;
        v9reset = ECL_T;
L18:;
        if (!(ecl_greatereq(v10i,v11))) { goto L22; }
        goto L19;
L22:;
        T0 = ecl_plus(v8index,v10i);
        v12rounded_i = (ecl_floor2(T0,v7length),cl_env_copy->values[1]);
        T0 = ecl_times(ecl_make_fixnum(8),v12rounded_i);
        v13position = ecl_plus(v6start,T0);
        if (Null(v9reset)) { goto L29; }
        if ((cl_file_position(2, v2stream, v13position))!=ECL_NIL) { goto L31; }
        L17cdb_error(v2stream);
L31:;
        v9reset = ECL_NIL;
L29:;
        {
         cl_object v14other_hash;
         cl_object v15record_position;
         v14other_hash = L7read_word(v2stream);
         v15record_position = L7read_word(v2stream);
         if (!(ecl_zerop(v15record_position))) { goto L36; }
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 1;
         return value0;
L36:;
         if (!(ecl_number_equalp(v14other_hash,v4hash))) { goto L28; }
         {
          cl_object v16output;
          v16output = L18values_coincide(v15record_position, v1key, v2stream, v3return_position_p);
          if (Null(v16output)) { goto L40; }
          value0 = v16output;
          cl_env_copy->nvalues = 1;
          return value0;
L40:;
          v9reset = ECL_T;
         }
        }
L28:;
        v9reset = ECL_T;
        v10i = ecl_one_plus(v10i);
        goto L18;
L19:;
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 1;
        return value0;
       }
      }
     }
    }
   }
  }
L2:;
  {
   volatile cl_object v14s;
   v14s = cl_open(5, v2stream, ECL_SYM("DIRECTION",1240), ECL_SYM("INPUT",1280), ECL_SYM("ELEMENT-TYPE",1246), VV[14]);
   {
    volatile bool unwinding = FALSE;
    cl_index v15=ECL_STACK_INDEX(cl_env_copy),v16;
    ecl_frame_ptr next_fr;
    ecl_frs_push(cl_env_copy,ECL_PROTECT_TAG);
    if (__ecl_frs_push_result) {
      unwinding = TRUE; next_fr=cl_env_copy->nlj_fr;
    } else {
    {
     struct ecl_stack_frame _ecl_inner_frame_aux;
     volatile cl_object _ecl_inner_frame = ecl_stack_frame_open(cl_env_copy,(cl_object)&_ecl_inner_frame_aux,0);
     {
      cl_object v17;
      v17 = _ecl_inner_frame;
      cl_env_copy->values[0] = L19lookup_cdb(3, v1key, v14s, v3return_position_p);
      ecl_stack_frame_push_values(v17);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      if (Null(v14s)) { goto L54; }
      cl_close(1, v14s);
L54:;cl_env_copy->values[0]=ecl_stack_frame_pop_values(v17);
     }
     ecl_stack_frame_close(_ecl_inner_frame);
    }
    }
    ecl_frs_pop(cl_env_copy);
    v16=ecl_stack_push_values(cl_env_copy);
    if (Null(v14s)) { goto L56; }
    cl_close(3, v14s, ECL_SYM("ABORT",1217), ECL_T);
L56:;
    ecl_stack_pop_values(cl_env_copy,v16);
    if (unwinding) ecl_unwind(cl_env_copy,next_fr);
    ECL_STACK_SET_INDEX(cl_env_copy,v15);
    return cl_env_copy->values[0];
   }
  }
 }
}
/*      function definition for MAP-CDB                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L20map_cdb(cl_object volatile v1function, cl_object volatile v2stream)
{
 cl_object T0;
 cl_object volatile env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(cl_streamp(v2stream))) { goto L1; }
  {
   cl_object v3index;
   v3index = si_make_vector(ECL_SYM("BYTE32",1360), ecl_make_fixnum(512), ECL_NIL, ECL_NIL, ECL_NIL, ecl_make_fixnum(0));
   if ((cl_file_position(2, v2stream, ecl_make_fixnum(0)))!=ECL_NIL) { goto L4; }
   L17cdb_error(v2stream);
L4:;
   T0 = cl_read_sequence(2, v3index, v2stream);
   {
    cl_fixnum v4;
    v4 = ecl_length(v3index);
    if ((ecl_to_fixnum(T0))==(v4)) { goto L6; }
   }
   L17cdb_error(v2stream);
L6:;
   {
    cl_fixnum v4;
    cl_object v5i;
    v4 = ecl_length(v3index);
    v5i = ecl_make_fixnum(0);
    {
     cl_object v6table_position;
     v6table_position = ECL_NIL;
     {
      cl_object v7table_length;
      v7table_length = ECL_NIL;
L12:;
      if (!(ecl_greatereq(v5i,ecl_make_fixnum(v4)))) { goto L14; }
      goto L13;
L14:;
      {
       cl_object v8;
       v8 = v3index;
       T0 = v8;
       {
        cl_fixnum v9;
        {
         cl_object v10;
         v10 = v5i;
         if (ecl_unlikely((ecl_fixnum(v10))>=(v8)->vector.dim))
           FEwrong_index(ECL_NIL,v8,-1,ecl_make_fixnum(ecl_fixnum(v10)),(v8)->vector.dim);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         v9 = ecl_fixnum(v10);
        }
        v6table_position = ecl_aref_unsafe(T0,v9);
       }
      }
      {
       cl_object v8;
       v8 = v3index;
       T0 = v8;
       {
        cl_fixnum v9;
        {
         cl_object v10;
         v10 = ecl_one_plus(v5i);
         if (ecl_unlikely((ecl_fixnum(v10))>=(v8)->vector.dim))
           FEwrong_index(ECL_NIL,v8,-1,ecl_make_fixnum(ecl_fixnum(v10)),(v8)->vector.dim);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         v9 = ecl_fixnum(v10);
        }
        v7table_length = ecl_aref_unsafe(T0,v9);
       }
      }
      if ((cl_file_position(2, v2stream, v6table_position))!=ECL_NIL) { goto L31; }
      L17cdb_error(v2stream);
L31:;
      {
       cl_object v8i;
       cl_object v9;
       v8i = ecl_make_fixnum(0);
       {
        cl_object v10;
        v10 = v7table_length;
        {
         bool v11;
         v11 = ecl_numberp(v10);
         if (ecl_unlikely(!(v11)))
         FEwrong_type_argument(ECL_SYM("NUMBER",608),v10);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
        }
        v9 = v10;
       }
       {
        cl_object v10position;
        {
         cl_object v11;
         v11 = v6table_position;
         {
          bool v12;
          v12 = ecl_numberp(v11);
          if (ecl_unlikely(!(v12)))
         FEwrong_type_argument(ECL_SYM("NUMBER",608),v11);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
         }
         v10position = v11;
        }
        {
         cl_object v11record_hash;
         v11record_hash = ECL_NIL;
         {
          cl_object v12record_position;
          v12record_position = ECL_NIL;
          if (!(ecl_greatereq(v8i,v9))) { goto L44; }
          goto L43;
L44:;
L42:;
          v11record_hash = L7read_word(v2stream);
          v12record_position = L7read_word(v2stream);
          if (ecl_zerop(v12record_position)) { goto L50; }
          if ((cl_file_position(2, v2stream, v12record_position))!=ECL_NIL) { goto L52; }
          L17cdb_error(v2stream);
L52:;
          {
          cl_object v13key_length;
          cl_object v14value_length;
          cl_object v15key;
          cl_object v16value;
          v13key_length = L7read_word(v2stream);
          v14value_length = L7read_word(v2stream);
          v15key = si_make_pure_array(ECL_SYM("BYTE8",1358), v13key_length, ECL_NIL, ECL_NIL, ECL_NIL, ecl_make_fixnum(0));
          v16value = si_make_pure_array(ECL_SYM("BYTE8",1358), v14value_length, ECL_NIL, ECL_NIL, ECL_NIL, ecl_make_fixnum(0));
          T0 = cl_read_sequence(2, v15key, v2stream);
          if (!(ecl_number_equalp(T0,v13key_length))) { goto L61; }
          T0 = cl_read_sequence(2, v16value, v2stream);
          if (ecl_number_equalp(T0,v14value_length)) { goto L58; }
          goto L59;
L61:;
          goto L59;
L59:;
          L17cdb_error(v2stream);
L58:;
          ecl_function_dispatch(cl_env_copy,v1function)(2, v15key, v16value);
          }
L50:;
          v8i = ecl_one_plus(v8i);
          if (!(ecl_greatereq(v8i,v9))) { goto L65; }
          goto L43;
L65:;
          v10position = ecl_plus(v10position,ecl_make_fixnum(8));
          goto L42;
L43:;
         }
        }
       }
      }
      v5i = ecl_plus(v5i,ecl_make_fixnum(2));
      goto L12;
L13:;
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 1;
      return value0;
     }
    }
   }
  }
L1:;
  {
   volatile cl_object v8s;
   v8s = cl_open(5, v2stream, ECL_SYM("DIRECTION",1240), ECL_SYM("INPUT",1280), ECL_SYM("ELEMENT-TYPE",1246), VV[14]);
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
      cl_env_copy->values[0] = L20map_cdb(v1function, v8s);
      ecl_stack_frame_push_values(v11);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      if (Null(v8s)) { goto L79; }
      cl_close(1, v8s);
L79:;cl_env_copy->values[0]=ecl_stack_frame_pop_values(v11);
     }
     ecl_stack_frame_close(_ecl_inner_frame);
    }
    }
    ecl_frs_pop(cl_env_copy);
    v10=ecl_stack_push_values(cl_env_copy);
    if (Null(v8s)) { goto L81; }
    cl_close(3, v8s, ECL_SYM("ABORT",1217), ECL_T);
L81:;
    ecl_stack_pop_values(cl_env_copy,v10);
    if (unwinding) ecl_unwind(cl_env_copy,next_fr);
    ECL_STACK_SET_INDEX(cl_env_copy,v9);
    return cl_env_copy->values[0];
   }
  }
 }
}

#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/ext/ecl-cdb.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _ecl3UKqEgb7_pmZmqq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("EXT:ECL-CDB;ECL-CDB.LISP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_ecl3UKqEgb7_pmZmqq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  ecl_function_dispatch(cl_env_copy,VV[32])(12, VVtemp[0], ECL_NIL, ECL_NIL, ECL_NIL, VVtemp[1], ECL_NIL, ECL_NIL, ECL_NIL, VVtemp[2], ECL_NIL, ECL_NIL, ECL_NIL) /*  DODEFPACKAGE */;
  si_select_package(VVtemp[0]);
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  ecl_function_dispatch(cl_env_copy,VV[33])(15, VV[0], _ecl_static_0, ECL_NIL, ECL_NIL, VVtemp[3], VVtemp[4], VV[1], ECL_NIL, ECL_NIL, ECL_NIL, VVtemp[5], ecl_make_fixnum(5), ECL_NIL, ECL_NIL, VV[2]) /*  DEFINE-STRUCTURE */;
  VV[3]= cl_find_class(1, VV[0]);
  ecl_cmp_defun(VV[34]);                          /*  MAKE-CDB        */
  {
   cl_object v1package;
   v1package = cl_symbol_package(VV[5]);
   if (Null(v1package)) { goto L11; }
   if (Null(si_package_locked_p(v1package))) { goto L11; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L11; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[6], VVtemp[7], VVtemp[8], ECL_SYM("PACKAGE",1311), v1package);
  }
L11:;
  {
   cl_object volatile v2;
   v2 = ecl_make_cfun((cl_objectfn_fixed)LC2__lambda1,ECL_NIL,Cblock,2);
   T0 = v2;
  }
  si_put_sysprop(VV[5], VV[6], T0);
  {
   cl_object v2package;
   v2package = cl_symbol_package(VV[7]);
   if (Null(v2package)) { goto L19; }
   if (Null(si_package_locked_p(v2package))) { goto L19; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L19; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[6], VVtemp[7], VVtemp[9], ECL_SYM("PACKAGE",1311), v2package);
  }
L19:;
  {
   cl_object volatile v3;
   v3 = ecl_make_cfun((cl_objectfn_fixed)LC3__lambda5,ECL_NIL,Cblock,2);
   T0 = v3;
  }
  si_put_sysprop(VV[7], VV[6], T0);
  {
   cl_object v3package;
   v3package = cl_symbol_package(VV[8]);
   if (Null(v3package)) { goto L27; }
   if (Null(si_package_locked_p(v3package))) { goto L27; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L27; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[6], VVtemp[7], VVtemp[10], ECL_SYM("PACKAGE",1311), v3package);
  }
L27:;
  {
   cl_object volatile v4;
   v4 = ecl_make_cfun((cl_objectfn_fixed)LC4__lambda9,ECL_NIL,Cblock,2);
   T0 = v4;
  }
  si_put_sysprop(VV[8], VV[6], T0);
  {
   cl_object v4package;
   v4package = cl_symbol_package(VV[9]);
   if (Null(v4package)) { goto L35; }
   if (Null(si_package_locked_p(v4package))) { goto L35; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L35; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[6], VVtemp[7], VVtemp[11], ECL_SYM("PACKAGE",1311), v4package);
  }
L35:;
  {
   cl_object volatile v5;
   v5 = ecl_make_cfun((cl_objectfn_fixed)LC5__lambda13,ECL_NIL,Cblock,2);
   T0 = v5;
  }
  si_put_sysprop(VV[9], VV[6], T0);
  {
   cl_object v5package;
   v5package = cl_symbol_package(VV[10]);
   if (Null(v5package)) { goto L43; }
   if (Null(si_package_locked_p(v5package))) { goto L43; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L43; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[6], VVtemp[7], VVtemp[12], ECL_SYM("PACKAGE",1311), v5package);
  }
L43:;
  {
   cl_object volatile v6;
   v6 = ecl_make_cfun((cl_objectfn_fixed)LC6__lambda17,ECL_NIL,Cblock,2);
   T0 = v6;
  }
  si_put_sysprop(VV[10], VV[6], T0);
 }
  ecl_cmp_defun(VV[40]);                          /*  READ-WORD       */
  ecl_cmp_defun(VV[41]);                          /*  WRITE-WORD      */
  ecl_cmp_defun(VV[42]);                          /*  WRITE-VECTOR    */
  ecl_cmp_defun(VV[43]);                          /*  TO-CDB-HASH     */
  ecl_cmp_defun(VV[44]);                          /*  %MAKE-CDB       */
  ecl_cmp_defmacro(VV[45]);                       /*  WITH-OUTPUT-TO-CDB */
  ecl_cmp_defun(VV[48]);                          /*  ADD-RECORD      */
  ecl_cmp_defun(VV[49]);                          /*  DUMP-TABLE      */
  ecl_cmp_defun(VV[50]);                          /*  DUMP-CDB        */
  ecl_cmp_defun(VV[51]);                          /*  CLOSE-CDB       */
  ecl_cmp_defun(VV[52]);                          /*  CDB-ERROR       */
  ecl_cmp_defun(VV[53]);                          /*  VALUES-COINCIDE */
  ecl_cmp_defun(VV[54]);                          /*  LOOKUP-CDB      */
  ecl_cmp_defun(VV[55]);                          /*  MAP-CDB         */
  cl_provide(VV[31]);
}
