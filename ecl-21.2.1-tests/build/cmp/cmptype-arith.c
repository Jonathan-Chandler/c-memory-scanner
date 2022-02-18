/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CMP;CMPTYPE-ARITH.LSP                             */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/cmp/cmptype-arith.eclh"
/*      function definition for MEMBER-TYPE                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L1member_type(cl_object v1type, cl_object v2disjoint_supertypes)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   v3 = v2disjoint_supertypes;
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
    if (Null(cl_subtypep(2, v1type, v5))) { goto L6; }
    value0 = v4;
    cl_env_copy->nvalues = 1;
    return value0;
   }
L6:;
   v3 = ECL_CONS_CDR(v3);
L4:;
   if (v3==ECL_NIL) { goto L14; }
   goto L3;
L14:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for OBJECT-TYPE                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L2object_type(cl_object v1thing)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2type;
   if (Null(v1thing)) { goto L2; }
   v2type = cl_type_of(v1thing);
   goto L1;
L2:;
   v2type = ECL_SYM("SYMBOL",842);
L1:;
   {
    cl_object v3;
    v3 = v2type;
    if (Null(ecl_memql(v3,VV[2]))) { goto L5; }
    value0 = v2type;
    cl_env_copy->nvalues = 1;
    return value0;
L5:;
    if (!((v3)==(ECL_SYM("BASE-CHAR",122)))) { goto L12; }
    goto L9;
    goto L10;
L12:;
    goto L10;
L10:;
    if (!((v3)==(ECL_SYM("STANDARD-CHAR",796)))) { goto L16; }
    goto L9;
    goto L14;
L16:;
    goto L14;
L14:;
    if (!((v3)==(ECL_SYM("CHARACTER",224)))) { goto L20; }
    goto L9;
    goto L18;
L20:;
    goto L18;
L18:;
    if (!((v3)==(ECL_SYM("EXTENDED-CHAR",348)))) { goto L7; }
    goto L8;
L9:;
L8:;
    value0 = ECL_SYM("CHARACTER",224);
    cl_env_copy->nvalues = 1;
    return value0;
L7:;
    if (!((v3)==(ECL_SYM("STRING",807)))) { goto L28; }
    goto L25;
    goto L26;
L28:;
    goto L26;
L26:;
    if (!((v3)==(ECL_SYM("BASE-STRING",123)))) { goto L32; }
    goto L25;
    goto L30;
L32:;
    goto L30;
L30:;
    if (!((v3)==(ECL_SYM("BIT-VECTOR",136)))) { goto L23; }
    goto L24;
L25:;
L24:;
    value0 = v2type;
    cl_env_copy->nvalues = 1;
    return value0;
L23:;
    if (!((v3)==(ECL_SYM("VECTOR",900)))) { goto L35; }
    T0 = cl_array_element_type(v1thing);
    value0 = cl_list(2, ECL_SYM("VECTOR",900), T0);
    return value0;
L35:;
    if (!((v3)==(ECL_SYM("ARRAY",98)))) { goto L37; }
    T0 = cl_array_element_type(v1thing);
    value0 = cl_list(2, ECL_SYM("ARRAY",98), T0);
    return value0;
L37:;
    if (!((v3)==(ECL_SYM("STANDARD-OBJECT",978)))) { goto L39; }
    value0 = ECL_SYM("STANDARD-OBJECT",978);
    cl_env_copy->nvalues = 1;
    return value0;
L39:;
    if (!((v3)==(ECL_SYM("STRUCTURE-OBJECT",980)))) { goto L41; }
    value0 = ECL_SYM("STRUCTURE-OBJECT",980);
    cl_env_copy->nvalues = 1;
    return value0;
L41:;
    value0 = ECL_T;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      function definition for VALID-TYPE-SPECIFIER                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L4valid_type_specifier(cl_object volatile v1type)
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
     cl_object v2;
     v2 = ecl_make_cclosure_va((cl_objectfn)LC3__lambda16,env2,Cblock,1);
     T0 = v2;
    }
    T1 = CONS(ECL_SYM("ERROR",339),T0);
    T2 = ecl_list1(T1);
    T3 = CONS(T2,ecl_symbol_value(ECL_SYM("*HANDLER-CLUSTERS*",6)));
    ecl_bds_bind(cl_env_copy,ECL_SYM("*HANDLER-CLUSTERS*",6),T3); /*  *HANDLER-CLUSTERS* */
    if (Null(cl_subtypep(2, v1type, ECL_T))) { goto L4; }
    cl_env_copy->nvalues = 2;
    cl_env_copy->values[1] = v1type;
    cl_env_copy->values[0] = ECL_T;
    value0 = cl_env_copy->values[0];
    ecl_frs_pop(cl_env_copy);
    ecl_bds_unwind1(cl_env_copy);
    return value0;
L4:;
    cl_env_copy->nvalues = 2;
    cl_env_copy->values[1] = ECL_NIL;
    cl_env_copy->values[0] = ECL_NIL;
    value0 = cl_env_copy->values[0];
    ecl_frs_pop(cl_env_copy);
    ecl_bds_unwind1(cl_env_copy);
    return value0;
L1:;
    cl_env_copy->nvalues = 2;
    cl_env_copy->values[1] = ECL_NIL;
    cl_env_copy->values[0] = ECL_NIL;
    value0 = cl_env_copy->values[0];
    ecl_frs_pop(cl_env_copy);
    return value0;
   }
  }
 }
}
/*      closure LAMBDA16                                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC3__lambda16(cl_narg narg, cl_object v1si__temp, ...)
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
/*      function definition for KNOWN-TYPE-P                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L5known_type_p(cl_object v1type)
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
/*      function definition for TRIVIAL-TYPE-P                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L6trivial_type_p(cl_object v1type)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_subtypep(2, ECL_T, v1type);
  return value0;
 }
}
/*      function definition for TYPE-AND-EMPTY-CACHE                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L7type_and_empty_cache()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = si_make_vector(ECL_T, ecl_make_fixnum(1024), ECL_NIL, ECL_NIL, ECL_NIL, ecl_make_fixnum(0));
  return value0;
 }
}
/*      function definition for TYPE-AND                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L9type_and(cl_object v1t1, cl_object v2t2)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_fixnum v3hash;
   cl_object v4elt;
   {
    cl_object v5;
    T0 = si_hash_equal(2, v1t1, v2t2);
    v5 = ecl_boole(ECL_BOOLAND,(T0),(ecl_make_fixnum(1023)));
    {
     cl_fixnum v6;
     v6 = 0;
     if (!(ECL_FIXNUMP(v5))) { goto L7; }
     v6 = ecl_fixnum(v5);
     if (!((v6)<=(1023))) { goto L12; }
     T0 = ecl_make_bool((v6)>=(0));
     goto L4;
L12:;
     T0 = ECL_NIL;
     goto L4;
L7:;
     T0 = ECL_NIL;
     goto L4;
    }
L4:;
    if (ecl_unlikely(!((T0)!=ECL_NIL)))
         FEwrong_type_argument(VV[22],v5);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v3hash = ecl_fixnum(v5);
   }
   {
    cl_object v5;
    v5 = ecl_symbol_value(VV[14]);
    T0 = v5;
    {
     cl_fixnum v6;
     {
      cl_fixnum v7;
      v7 = v3hash;
      if (ecl_unlikely((v7)>=(v5)->vector.dim))
           FEwrong_index(ECL_NIL,v5,-1,ecl_make_fixnum(v7),(v5)->vector.dim);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v6 = v7;
     }
     v4elt = ecl_aref_unsafe(T0,v6);
    }
   }
   if (Null(v4elt)) { goto L20; }
   {
    cl_object v5;
    {
     cl_object v6;
     v6 = v4elt;
     if (ecl_unlikely(ECL_ATOM(v6))) FEtype_error_cons(v6);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v5 = v6;
    }
    {
     cl_object v6;
     v6 = v5;
     if (ecl_unlikely(!ECL_LISTP(v6))) FEtype_error_list(v6);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
    }
    if (Null(v5)) { goto L31; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     {
      cl_object v7;
      v7 = v6;
      if (ecl_unlikely(ECL_ATOM(v7))) FEtype_error_cons(v7);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v4elt = v7;
     }
     v5 = ECL_CONS_CAR(v5);
    }
L31:;
    T0 = v5;
   }
   if (!(ecl_equal(T0,v1t1))) { goto L20; }
   {
    cl_object v5;
    {
     cl_object v6;
     v6 = v4elt;
     if (ecl_unlikely(ECL_ATOM(v6))) FEtype_error_cons(v6);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v5 = v6;
    }
    {
     cl_object v6;
     v6 = v5;
     if (ecl_unlikely(!ECL_LISTP(v6))) FEtype_error_list(v6);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
    }
    if (Null(v5)) { goto L46; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     {
      cl_object v7;
      v7 = v6;
      if (ecl_unlikely(ECL_ATOM(v7))) FEtype_error_cons(v7);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v4elt = v7;
     }
     v5 = ECL_CONS_CAR(v5);
    }
L46:;
    T0 = v5;
   }
   if (!(ecl_equal(T0,v2t2))) { goto L20; }
   value0 = ecl_car(v4elt);
   cl_env_copy->nvalues = 1;
   return value0;
L20:;
   {
    cl_object v5output;
    v5output = LC8type_and(v1t1, v2t2);
    {
     cl_object v6;
     v6 = ecl_symbol_value(VV[14]);
     T0 = v6;
     {
      cl_fixnum v7;
      {
       cl_fixnum v8;
       v8 = v3hash;
       if (ecl_unlikely((v8)>=(v6)->vector.dim))
           FEwrong_index(ECL_NIL,v6,-1,ecl_make_fixnum(v8),(v6)->vector.dim);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v7 = v8;
      }
      T1 = cl_list(3, v1t1, v2t2, v5output);
      ecl_aset_unsafe(T0,v7,T1);
     }
    }
    value0 = v5output;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      local function TYPE-AND                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC8type_and(cl_object v1t1, cl_object v2t2)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if ((v1t1)==(v2t2)) { goto L3; }
  if (!((v2t2)==(ECL_SYM("*",20)))) { goto L1; }
  goto L2;
L3:;
L2:;
  value0 = v1t1;
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  if (!((v1t1)==(ECL_SYM("*",20)))) { goto L5; }
  value0 = v2t2;
  cl_env_copy->nvalues = 1;
  return value0;
L5:;
  {
   cl_object v3tag1;
   cl_object v4tag2;
   ecl_bds_push(cl_env_copy,VV[16]);              /*  *HIGHEST-TYPE-TAG* */
   ecl_bds_bind(cl_env_copy,VV[17],ECL_T);        /*  *SAVE-TYPES-DATABASE* */
   ecl_bds_push(cl_env_copy,VV[18]);              /*  *MEMBER-TYPES*  */
   ecl_bds_push(cl_env_copy,VV[19]);              /*  *ELEMENTARY-TYPES* */
   v3tag1 = ecl_function_dispatch(cl_env_copy,VV[57])(1, v1t1) /*  SAFE-CANONICAL-TYPE */;
   v4tag2 = ecl_function_dispatch(cl_env_copy,VV[57])(1, v2t2) /*  SAFE-CANONICAL-TYPE */;
   if (!(ecl_numberp(v3tag1))) { goto L9; }
   if (!(ecl_numberp(v4tag2))) { goto L9; }
   v3tag1 = ecl_function_dispatch(cl_env_copy,VV[57])(1, v1t1) /*  SAFE-CANONICAL-TYPE */;
   v4tag2 = ecl_function_dispatch(cl_env_copy,VV[57])(1, v2t2) /*  SAFE-CANONICAL-TYPE */;
   T0 = ecl_boole(ECL_BOOLAND,(v3tag1),(v4tag2));
   if (!(ecl_zerop(T0))) { goto L16; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   ecl_bds_unwind_n(cl_env_copy,4);
   return value0;
L16:;
   T0 = ecl_boole(ECL_BOOLANDC2,(v3tag1),(v4tag2));
   if (!(ecl_zerop(T0))) { goto L18; }
   value0 = v1t1;
   cl_env_copy->nvalues = 1;
   ecl_bds_unwind_n(cl_env_copy,4);
   return value0;
L18:;
   T0 = ecl_boole(ECL_BOOLANDC2,(v4tag2),(v3tag1));
   if (!(ecl_zerop(T0))) { goto L20; }
   value0 = v2t2;
   cl_env_copy->nvalues = 1;
   ecl_bds_unwind_n(cl_env_copy,4);
   return value0;
L20:;
   value0 = cl_list(3, ECL_SYM("AND",89), v1t1, v2t2);
   ecl_bds_unwind_n(cl_env_copy,4);
   return value0;
L9:;
   if (!((v3tag1)==(ECL_SYM("CONS",253)))) { goto L22; }
   ecl_function_dispatch(cl_env_copy,VV[58])(2, VV[20], v1t1) /*  CMPWARN */;
   value0 = v2t2;
   cl_env_copy->nvalues = 1;
   ecl_bds_unwind_n(cl_env_copy,4);
   return value0;
L22:;
   if (!((v4tag2)==(ECL_SYM("CONS",253)))) { goto L25; }
   ecl_function_dispatch(cl_env_copy,VV[58])(2, VV[20], v2t2) /*  CMPWARN */;
   value0 = v1t1;
   cl_env_copy->nvalues = 1;
   ecl_bds_unwind_n(cl_env_copy,4);
   return value0;
L25:;
   if (!(v3tag1==ECL_NIL)) { goto L28; }
   ecl_function_dispatch(cl_env_copy,VV[59])(2, VV[21], v1t1) /*  CMPNOTE */;
   value0 = v2t2;
   cl_env_copy->nvalues = 1;
   ecl_bds_unwind_n(cl_env_copy,4);
   return value0;
L28:;
   ecl_function_dispatch(cl_env_copy,VV[59])(2, VV[21], v2t2) /*  CMPNOTE */;
   value0 = v1t1;
   cl_env_copy->nvalues = 1;
   ecl_bds_unwind_n(cl_env_copy,4);
   return value0;
  }
 }
}
/*      function definition for VALUES-NUMBER-FROM-TYPE               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L10values_number_from_type(cl_object v1type)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if ((v1type)==(ECL_T)) { goto L3; }
  if (!((v1type)==(ECL_SYM("*",20)))) { goto L1; }
  goto L2;
L3:;
L2:;
  cl_env_copy->nvalues = 2;
  cl_env_copy->values[1] = ecl_make_fixnum(64);
  cl_env_copy->values[0] = ecl_make_fixnum(0);
  return cl_env_copy->values[0];
L1:;
  if (ECL_ATOM(v1type)) { goto L7; }
  T0 = ecl_car(v1type);
  if ((T0)==(ECL_SYM("VALUES",897))) { goto L5; }
  goto L6;
L7:;
L6:;
  cl_env_copy->nvalues = 2;
  cl_env_copy->values[1] = ecl_make_fixnum(1);
  cl_env_copy->values[0] = ecl_make_fixnum(1);
  return cl_env_copy->values[0];
L5:;
  if ((ecl_memql(ECL_SYM("&REST",14),v1type))!=ECL_NIL) { goto L11; }
  if (Null(ecl_memql(ECL_SYM("&OPTIONAL",13),v1type))) { goto L9; }
  goto L10;
L11:;
L10:;
  cl_env_copy->nvalues = 2;
  cl_env_copy->values[1] = ecl_make_fixnum(64);
  cl_env_copy->values[0] = ecl_make_fixnum(0);
  return cl_env_copy->values[0];
L9:;
  {
   cl_object v2l;
   {
    cl_fixnum v3;
    v3 = ecl_length(v1type);
    v2l = ecl_make_integer((v3)-1);
   }
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v2l;
   cl_env_copy->values[0] = v2l;
   return cl_env_copy->values[0];
  }
 }
}
/*      function definition for VALUES-TYPE-PRIMARY-TYPE-EMPTY-CACHE  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L11values_type_primary_type_empty_cache()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = si_make_vector(ECL_T, ecl_make_fixnum(1024), ECL_NIL, ECL_NIL, ECL_NIL, ecl_make_fixnum(0));
  return value0;
 }
}
/*      function definition for VALUES-TYPE-PRIMARY-TYPE              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L13values_type_primary_type(cl_object v1type)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_fixnum v2hash;
   cl_object v3elt;
   {
    cl_object v4;
    T0 = si_hash_equal(1, v1type);
    v4 = ecl_boole(ECL_BOOLAND,(T0),(ecl_make_fixnum(1023)));
    {
     cl_fixnum v5;
     v5 = 0;
     if (!(ECL_FIXNUMP(v4))) { goto L7; }
     v5 = ecl_fixnum(v4);
     if (!((v5)<=(1023))) { goto L12; }
     T0 = ecl_make_bool((v5)>=(0));
     goto L4;
L12:;
     T0 = ECL_NIL;
     goto L4;
L7:;
     T0 = ECL_NIL;
     goto L4;
    }
L4:;
    if (ecl_unlikely(!((T0)!=ECL_NIL)))
         FEwrong_type_argument(VV[22],v4);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v2hash = ecl_fixnum(v4);
   }
   {
    cl_object v4;
    v4 = ecl_symbol_value(VV[25]);
    T0 = v4;
    {
     cl_fixnum v5;
     {
      cl_fixnum v6;
      v6 = v2hash;
      if (ecl_unlikely((v6)>=(v4)->vector.dim))
           FEwrong_index(ECL_NIL,v4,-1,ecl_make_fixnum(v6),(v4)->vector.dim);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v5 = v6;
     }
     v3elt = ecl_aref_unsafe(T0,v5);
    }
   }
   if (Null(v3elt)) { goto L20; }
   {
    cl_object v4;
    {
     cl_object v5;
     v5 = v3elt;
     if (ecl_unlikely(ECL_ATOM(v5))) FEtype_error_cons(v5);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v4 = v5;
    }
    {
     cl_object v5;
     v5 = v4;
     if (ecl_unlikely(!ECL_LISTP(v5))) FEtype_error_list(v5);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
    }
    if (Null(v4)) { goto L30; }
    {
     cl_object v5;
     v5 = ECL_CONS_CDR(v4);
     {
      cl_object v6;
      v6 = v5;
      if (ecl_unlikely(ECL_ATOM(v6))) FEtype_error_cons(v6);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v3elt = v6;
     }
     v4 = ECL_CONS_CAR(v4);
    }
L30:;
    T0 = v4;
   }
   if (!(ecl_equal(T0,v1type))) { goto L20; }
   value0 = ecl_car(v3elt);
   cl_env_copy->nvalues = 1;
   return value0;
L20:;
   {
    cl_object v4output;
    v4output = LC12values_type_primary_type(v1type);
    {
     cl_object v5;
     v5 = ecl_symbol_value(VV[25]);
     T0 = v5;
     {
      cl_fixnum v6;
      {
       cl_fixnum v7;
       v7 = v2hash;
       if (ecl_unlikely((v7)>=(v5)->vector.dim))
           FEwrong_index(ECL_NIL,v5,-1,ecl_make_fixnum(v7),(v5)->vector.dim);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v6 = v7;
      }
      T1 = cl_list(2, v1type, v4output);
      ecl_aset_unsafe(T0,v6,T1);
     }
    }
    value0 = v4output;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      local function VALUES-TYPE-PRIMARY-TYPE                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC12values_type_primary_type(cl_object v1type)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2aux;
   v2aux = ECL_NIL;
   if (ECL_ATOM(v1type)) { goto L4; }
   T0 = ecl_car(v1type);
   if ((T0)==(ECL_SYM("VALUES",897))) { goto L2; }
   goto L3;
L4:;
L3:;
   value0 = v1type;
   cl_env_copy->nvalues = 1;
   return value0;
L2:;
   v2aux = ecl_cdr(v1type);
   if (!(v2aux==ECL_NIL)) { goto L6; }
   value0 = ECL_SYM("NULL",607);
   cl_env_copy->nvalues = 1;
   return value0;
L6:;
   {
    cl_object v3;
    v2aux = ecl_car(v2aux);
    v3 = v2aux;
    if (!((v3)==(ECL_SYM("&OPTIONAL",13)))) { goto L16; }
    goto L13;
    goto L14;
L16:;
    goto L14;
L14:;
    if (!((v3)==(ECL_SYM("&REST",14)))) { goto L20; }
    goto L13;
    goto L18;
L20:;
    goto L18;
L18:;
    if (!((v3)==(ECL_SYM("&ALLOW-OTHER-KEYS",8)))) { goto L9; }
    goto L10;
L13:;
   }
L10:;
   v2aux = L17do_values_type_to_n_types(v1type, ecl_make_fixnum(1));
   if (Null(v2aux)) { goto L25; }
   value0 = ecl_car(v2aux);
   cl_env_copy->nvalues = 1;
   return value0;
L25:;
   value0 = ECL_SYM("NULL",607);
   cl_env_copy->nvalues = 1;
   return value0;
L9:;
   value0 = v2aux;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for VALUES-TYPE-TO-N-TYPES-EMPTY-CACHE    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L14values_type_to_n_types_empty_cache()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = si_make_vector(ECL_T, ecl_make_fixnum(1024), ECL_NIL, ECL_NIL, ECL_NIL, ecl_make_fixnum(0));
  return value0;
 }
}
/*      function definition for VALUES-TYPE-TO-N-TYPES                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L16values_type_to_n_types(cl_object v1type, cl_object v2length)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_fixnum v3hash;
   cl_object v4elt;
   {
    cl_object v5;
    T0 = si_hash_equal(2, v1type, v2length);
    v5 = ecl_boole(ECL_BOOLAND,(T0),(ecl_make_fixnum(1023)));
    {
     cl_fixnum v6;
     v6 = 0;
     if (!(ECL_FIXNUMP(v5))) { goto L7; }
     v6 = ecl_fixnum(v5);
     if (!((v6)<=(1023))) { goto L12; }
     T0 = ecl_make_bool((v6)>=(0));
     goto L4;
L12:;
     T0 = ECL_NIL;
     goto L4;
L7:;
     T0 = ECL_NIL;
     goto L4;
    }
L4:;
    if (ecl_unlikely(!((T0)!=ECL_NIL)))
         FEwrong_type_argument(VV[22],v5);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v3hash = ecl_fixnum(v5);
   }
   {
    cl_object v5;
    v5 = ecl_symbol_value(VV[31]);
    T0 = v5;
    {
     cl_fixnum v6;
     {
      cl_fixnum v7;
      v7 = v3hash;
      if (ecl_unlikely((v7)>=(v5)->vector.dim))
           FEwrong_index(ECL_NIL,v5,-1,ecl_make_fixnum(v7),(v5)->vector.dim);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v6 = v7;
     }
     v4elt = ecl_aref_unsafe(T0,v6);
    }
   }
   if (Null(v4elt)) { goto L20; }
   {
    cl_object v5;
    {
     cl_object v6;
     v6 = v4elt;
     if (ecl_unlikely(ECL_ATOM(v6))) FEtype_error_cons(v6);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v5 = v6;
    }
    {
     cl_object v6;
     v6 = v5;
     if (ecl_unlikely(!ECL_LISTP(v6))) FEtype_error_list(v6);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
    }
    if (Null(v5)) { goto L31; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     {
      cl_object v7;
      v7 = v6;
      if (ecl_unlikely(ECL_ATOM(v7))) FEtype_error_cons(v7);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v4elt = v7;
     }
     v5 = ECL_CONS_CAR(v5);
    }
L31:;
    T0 = v5;
   }
   if (!(ecl_equal(T0,v1type))) { goto L20; }
   {
    cl_object v5;
    {
     cl_object v6;
     v6 = v4elt;
     if (ecl_unlikely(ECL_ATOM(v6))) FEtype_error_cons(v6);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v5 = v6;
    }
    {
     cl_object v6;
     v6 = v5;
     if (ecl_unlikely(!ECL_LISTP(v6))) FEtype_error_list(v6);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
    }
    if (Null(v5)) { goto L46; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     {
      cl_object v7;
      v7 = v6;
      if (ecl_unlikely(ECL_ATOM(v7))) FEtype_error_cons(v7);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v4elt = v7;
     }
     v5 = ECL_CONS_CAR(v5);
    }
L46:;
    T0 = v5;
   }
   if (!(ecl_equal(T0,v2length))) { goto L20; }
   value0 = ecl_car(v4elt);
   cl_env_copy->nvalues = 1;
   return value0;
L20:;
   {
    cl_object v5output;
    v5output = LC15values_type_to_n_types(v1type, v2length);
    {
     cl_object v6;
     v6 = ecl_symbol_value(VV[31]);
     T0 = v6;
     {
      cl_fixnum v7;
      {
       cl_fixnum v8;
       v8 = v3hash;
       if (ecl_unlikely((v8)>=(v6)->vector.dim))
           FEwrong_index(ECL_NIL,v6,-1,ecl_make_fixnum(v8),(v6)->vector.dim);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v7 = v8;
      }
      T1 = cl_list(3, v1type, v2length, v5output);
      ecl_aset_unsafe(T0,v7,T1);
     }
    }
    value0 = v5output;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      local function VALUES-TYPE-TO-N-TYPES                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC15values_type_to_n_types(cl_object v1type, cl_object v2length)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ecl_plusp(v2length))) { goto L1; }
  value0 = L17do_values_type_to_n_types(v1type, v2length);
  return value0;
L1:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for DO-VALUES-TYPE-TO-N-TYPES             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L17do_values_type_to_n_types(cl_object v1type, cl_object v2length)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v4;                                  /*  REQUIRED        */
   cl_object v5;                                  /*  OPTIONAL        */
   cl_object v6;                                  /*  REST            */
   value0 = L18split_values_type(v1type);
   {
    const int v7 = cl_env_copy->nvalues;
    v4 = value0;
    cl_object v8;
    v8 = (v7<=1)? ECL_NIL : cl_env_copy->values[1];
    v5 = v8;
    v8 = (v7<=2)? ECL_NIL : cl_env_copy->values[2];
    v6 = v8;
   }
   {
    cl_object v7optional;
    cl_object v8output;
    cl_fixnum v9l;
    {
     cl_object v10i;
     cl_object v11;
     v10i = ECL_NIL;
     {
      cl_object v12;
      v12 = v5;
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
L9:;
      if (!(ecl_endp(v11))) { goto L11; }
      goto L10;
L11:;
      v10i = _ecl_car(v11);
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
      if (!((v10i)==(ECL_T))) { goto L25; }
      T1 = v10i;
      goto L24;
L25:;
      T1 = cl_list(3, ECL_SYM("OR",616), ECL_SYM("NULL",607), v10i);
L24:;
      v13 = ecl_list1(T1);
      (ECL_CONS_CDR(T0)=v13,T0);
      goto L9;
L10:;
      v7optional = ecl_cdr(v12);
      goto L2;
     }
    }
L2:;
    v8output = ecl_nconc(v4,v7optional);
    v9l = ecl_length(v8output);
    if (!(ecl_lower(ecl_make_fixnum(v9l),v2length))) { goto L31; }
    T0 = ecl_minus(v2length,ecl_make_fixnum(v9l));
    if (Null(v6)) { goto L34; }
    T1 = ecl_car(v6);
    goto L33;
L34:;
    T1 = ECL_T;
L33:;
    T2 = cl_make_list(3, T0, ECL_SYM("INITIAL-ELEMENT",1277), T1);
    value0 = ecl_nconc(v8output,T2);
    cl_env_copy->nvalues = 1;
    return value0;
L31:;
    value0 = cl_subseq(3, v8output, ecl_make_fixnum(0), v2length);
    return value0;
   }
  }
 }
}
/*      function definition for SPLIT-VALUES-TYPE                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L18split_values_type(cl_object v1type)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (ECL_ATOM(v1type)) { goto L3; }
  T0 = ecl_car(v1type);
  if ((T0)==(ECL_SYM("VALUES",897))) { goto L1; }
  goto L2;
L3:;
L2:;
  T0 = ecl_list1(v1type);
  cl_env_copy->nvalues = 4;
  cl_env_copy->values[3] = ECL_NIL;
  cl_env_copy->values[2] = ECL_NIL;
  cl_env_copy->values[1] = ECL_NIL;
  cl_env_copy->values[0] = T0;
  return cl_env_copy->values[0];
L1:;
  {
   cl_object v2required;
   v2required = ECL_NIL;
   {
    cl_object v3optional_flag;
    v3optional_flag = ECL_NIL;
    {
     cl_object v4optional;
     v4optional = ECL_NIL;
     {
      cl_object v5rest;
      v5rest = ECL_NIL;
      {
       cl_object v6a_o_k;
       v6a_o_k = ECL_NIL;
       {
        cl_object v7l;
        v7l = ecl_cdr(v1type);
L11:;
        if ((v7l)!=ECL_NIL) { goto L13; }
        goto L12;
L13:;
        {
         cl_object v8typespec;
         {
          cl_object v9;
          v9 = v7l;
          {
          cl_object v10;
          v10 = v9;
          if (ecl_unlikely(!ECL_LISTP(v10))) FEtype_error_list(v10);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          }
          if (Null(v9)) { goto L21; }
          {
          cl_object v10;
          v10 = ECL_CONS_CDR(v9);
          v7l = v10;
          v9 = ECL_CONS_CAR(v9);
          }
L21:;
          v8typespec = v9;
         }
         if (!((v8typespec)==(ECL_SYM("&ALLOW-OTHER-KEYS",8)))) { goto L27; }
         v6a_o_k = ECL_T;
         if (Null(v7l)) { goto L15; }
         ecl_function_dispatch(cl_env_copy,VV[66])(2, VV[34], v1type) /*  CMPERR */;
         goto L15;
L27:;
         if (!((v8typespec)==(ECL_SYM("&OPTIONAL",13)))) { goto L32; }
         if (Null(v3optional_flag)) { goto L34; }
         v4optional = CONS(v8typespec,v4optional);
         goto L15;
L34:;
         v3optional_flag = ECL_T;
         goto L15;
L32:;
         if (!((v8typespec)==(ECL_SYM("&REST",14)))) { goto L38; }
         if (v7l==ECL_NIL) { goto L42; }
         {
          cl_object v9;
          v9 = ecl_cdr(v7l);
          if (!(ecl_equal(v9,ECL_NIL))) { goto L47; }
          goto L40;
          goto L45;
L47:;
          goto L45;
L45:;
          if (!(ecl_equal(v9,VV[29]))) { goto L50; }
          goto L40;
          goto L41;
L50:;
          goto L41;
         }
L42:;
L41:;
         ecl_function_dispatch(cl_env_copy,VV[66])(2, VV[34], v1type) /*  CMPERR */;
L40:;
         T0 = ecl_car(v7l);
         v5rest = ecl_list1(T0);
         goto L15;
L38:;
         if (Null(v3optional_flag)) { goto L53; }
         v4optional = CONS(v8typespec,v4optional);
         goto L15;
L53:;
         v2required = CONS(v8typespec,v2required);
        }
L15:;
        goto L11;
L12:;
        T0 = cl_nreverse(v2required);
        T1 = cl_nreverse(v4optional);
        cl_env_copy->nvalues = 4;
        cl_env_copy->values[3] = v6a_o_k;
        cl_env_copy->values[2] = v5rest;
        cl_env_copy->values[1] = T1;
        cl_env_copy->values[0] = T0;
        return cl_env_copy->values[0];
       }
      }
     }
    }
   }
  }
 }
}
/*      function definition for VALUES-TYPE-OR-EMPTY-CACHE            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L19values_type_or_empty_cache()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = si_make_vector(ECL_T, ecl_make_fixnum(1024), ECL_NIL, ECL_NIL, ECL_NIL, ecl_make_fixnum(0));
  return value0;
 }
}
/*      function definition for VALUES-TYPE-OR                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L21values_type_or(cl_object v1t1, cl_object v2t2)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_fixnum v3hash;
   cl_object v4elt;
   {
    cl_object v5;
    T0 = si_hash_equal(2, v1t1, v2t2);
    v5 = ecl_boole(ECL_BOOLAND,(T0),(ecl_make_fixnum(1023)));
    {
     cl_fixnum v6;
     v6 = 0;
     if (!(ECL_FIXNUMP(v5))) { goto L7; }
     v6 = ecl_fixnum(v5);
     if (!((v6)<=(1023))) { goto L12; }
     T0 = ecl_make_bool((v6)>=(0));
     goto L4;
L12:;
     T0 = ECL_NIL;
     goto L4;
L7:;
     T0 = ECL_NIL;
     goto L4;
    }
L4:;
    if (ecl_unlikely(!((T0)!=ECL_NIL)))
         FEwrong_type_argument(VV[22],v5);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v3hash = ecl_fixnum(v5);
   }
   {
    cl_object v5;
    v5 = ecl_symbol_value(VV[38]);
    T0 = v5;
    {
     cl_fixnum v6;
     {
      cl_fixnum v7;
      v7 = v3hash;
      if (ecl_unlikely((v7)>=(v5)->vector.dim))
           FEwrong_index(ECL_NIL,v5,-1,ecl_make_fixnum(v7),(v5)->vector.dim);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v6 = v7;
     }
     v4elt = ecl_aref_unsafe(T0,v6);
    }
   }
   if (Null(v4elt)) { goto L20; }
   {
    cl_object v5;
    {
     cl_object v6;
     v6 = v4elt;
     if (ecl_unlikely(ECL_ATOM(v6))) FEtype_error_cons(v6);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v5 = v6;
    }
    {
     cl_object v6;
     v6 = v5;
     if (ecl_unlikely(!ECL_LISTP(v6))) FEtype_error_list(v6);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
    }
    if (Null(v5)) { goto L31; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     {
      cl_object v7;
      v7 = v6;
      if (ecl_unlikely(ECL_ATOM(v7))) FEtype_error_cons(v7);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v4elt = v7;
     }
     v5 = ECL_CONS_CAR(v5);
    }
L31:;
    T0 = v5;
   }
   if (!(ecl_equal(T0,v1t1))) { goto L20; }
   {
    cl_object v5;
    {
     cl_object v6;
     v6 = v4elt;
     if (ecl_unlikely(ECL_ATOM(v6))) FEtype_error_cons(v6);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v5 = v6;
    }
    {
     cl_object v6;
     v6 = v5;
     if (ecl_unlikely(!ECL_LISTP(v6))) FEtype_error_list(v6);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
    }
    if (Null(v5)) { goto L46; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     {
      cl_object v7;
      v7 = v6;
      if (ecl_unlikely(ECL_ATOM(v7))) FEtype_error_cons(v7);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v4elt = v7;
     }
     v5 = ECL_CONS_CAR(v5);
    }
L46:;
    T0 = v5;
   }
   if (!(ecl_equal(T0,v2t2))) { goto L20; }
   value0 = ecl_car(v4elt);
   cl_env_copy->nvalues = 1;
   return value0;
L20:;
   {
    cl_object v5output;
    v5output = LC20values_type_or(v1t1, v2t2);
    {
     cl_object v6;
     v6 = ecl_symbol_value(VV[38]);
     T0 = v6;
     {
      cl_fixnum v7;
      {
       cl_fixnum v8;
       v8 = v3hash;
       if (ecl_unlikely((v8)>=(v6)->vector.dim))
           FEwrong_index(ECL_NIL,v6,-1,ecl_make_fixnum(v8),(v6)->vector.dim);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v7 = v8;
      }
      T1 = cl_list(3, v1t1, v2t2, v5output);
      ecl_aset_unsafe(T0,v7,T1);
     }
    }
    value0 = v5output;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      local function VALUES-TYPE-OR                                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC20values_type_or(cl_object v1t1, cl_object v2t2)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if ((v2t2)==(ECL_T)) { goto L3; }
  if (!(ecl_equalp(v2t2,VV[40]))) { goto L1; }
  goto L2;
L3:;
L2:;
  value0 = v2t2;
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  if ((v1t1)==(ECL_T)) { goto L7; }
  if (!(ecl_equalp(v1t1,VV[40]))) { goto L5; }
  goto L6;
L7:;
L6:;
  value0 = v1t1;
  cl_env_copy->nvalues = 1;
  return value0;
L5:;
  if ((v1t1)!=ECL_NIL) { goto L9; }
  value0 = v2t2;
  cl_env_copy->nvalues = 1;
  return value0;
L9:;
  if ((v2t2)!=ECL_NIL) { goto L11; }
  value0 = v1t1;
  cl_env_copy->nvalues = 1;
  return value0;
L11:;
  {
   cl_object v4;                                  /*  REQ1            */
   cl_object v5;                                  /*  OPT1            */
   cl_object v6;                                  /*  REST1           */
   value0 = L18split_values_type(v1t1);
   {
    const int v7 = cl_env_copy->nvalues;
    v4 = value0;
    cl_object v8;
    v8 = (v7<=1)? ECL_NIL : cl_env_copy->values[1];
    v5 = v8;
    v8 = (v7<=2)? ECL_NIL : cl_env_copy->values[2];
    v6 = v8;
   }
   {
    cl_object v8;                                 /*  REQ2            */
    cl_object v9;                                 /*  OPT2            */
    cl_object v10;                                /*  REST2           */
    value0 = L18split_values_type(v2t2);
    {
     const int v11 = cl_env_copy->nvalues;
     v8 = value0;
     cl_object v12;
     v12 = (v11<=1)? ECL_NIL : cl_env_copy->values[1];
     v9 = v12;
     v12 = (v11<=2)? ECL_NIL : cl_env_copy->values[2];
     v10 = v12;
    }
    {
     cl_object v11req;
     cl_object v12opt;
     cl_object v13rest;
     v11req = ECL_NIL;
     v12opt = ECL_NIL;
     v13rest = ECL_NIL;
     {
      cl_object v14t1;
      cl_object v15;
      v14t1 = ECL_NIL;
      {
       cl_object v16;
       v16 = v4;
       if (ecl_unlikely(!ECL_LISTP(v16))) FEtype_error_list(v16);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v15 = v16;
      }
L23:;
      if (!(ecl_endp(v15))) { goto L25; }
      goto L24;
L25:;
      v14t1 = _ecl_car(v15);
      {
       cl_object v16;
       v16 = _ecl_cdr(v15);
       if (ecl_unlikely(!ECL_LISTP(v16))) FEtype_error_list(v16);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v15 = v16;
      }
      if (Null(v8)) { goto L34; }
      {
       cl_object v16;
       v16 = v8;
       {
        cl_object v17;
        v17 = v16;
        if (ecl_unlikely(!ECL_LISTP(v17))) FEtype_error_list(v17);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v16)) { goto L42; }
       {
        cl_object v17;
        v17 = ECL_CONS_CDR(v16);
        v8 = v17;
        v16 = ECL_CONS_CAR(v16);
       }
L42:;
       T0 = v16;
      }
      T1 = L27type_or(v14t1, T0);
      v11req = CONS(T1,v11req);
      goto L33;
L34:;
      if (Null(v9)) { goto L48; }
      {
       cl_object v16;
       v16 = v9;
       {
        cl_object v17;
        v17 = v16;
        if (ecl_unlikely(!ECL_LISTP(v17))) FEtype_error_list(v17);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v16)) { goto L56; }
       {
        cl_object v17;
        v17 = ECL_CONS_CDR(v16);
        v9 = v17;
        v16 = ECL_CONS_CAR(v16);
       }
L56:;
       T0 = v16;
      }
      T1 = L27type_or(v14t1, T0);
      v12opt = CONS(T1,v12opt);
      goto L33;
L48:;
      if (Null(v10)) { goto L62; }
      T0 = ecl_car(v10);
      T1 = L27type_or(v14t1, T0);
      v12opt = CONS(T1,v12opt);
      goto L33;
L62:;
      v12opt = CONS(v14t1,v12opt);
L33:;
      goto L23;
L24:;
     }
     {
      cl_object v14t1;
      cl_object v15;
      v14t1 = ECL_NIL;
      {
       cl_object v16;
       v16 = v5;
       if (ecl_unlikely(!ECL_LISTP(v16))) FEtype_error_list(v16);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v15 = v16;
      }
L72:;
      if (!(ecl_endp(v15))) { goto L74; }
      goto L73;
L74:;
      v14t1 = _ecl_car(v15);
      {
       cl_object v16;
       v16 = _ecl_cdr(v15);
       if (ecl_unlikely(!ECL_LISTP(v16))) FEtype_error_list(v16);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v15 = v16;
      }
      if (Null(v8)) { goto L83; }
      {
       cl_object v16;
       v16 = v8;
       {
        cl_object v17;
        v17 = v16;
        if (ecl_unlikely(!ECL_LISTP(v17))) FEtype_error_list(v17);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v16)) { goto L91; }
       {
        cl_object v17;
        v17 = ECL_CONS_CDR(v16);
        v8 = v17;
        v16 = ECL_CONS_CAR(v16);
       }
L91:;
       T0 = v16;
      }
      T1 = L27type_or(v14t1, T0);
      v12opt = CONS(T1,v12opt);
      goto L82;
L83:;
      if (Null(v9)) { goto L97; }
      {
       cl_object v16;
       v16 = v9;
       {
        cl_object v17;
        v17 = v16;
        if (ecl_unlikely(!ECL_LISTP(v17))) FEtype_error_list(v17);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v16)) { goto L105; }
       {
        cl_object v17;
        v17 = ECL_CONS_CDR(v16);
        v9 = v17;
        v16 = ECL_CONS_CAR(v16);
       }
L105:;
       T0 = v16;
      }
      T1 = L27type_or(v14t1, T0);
      v12opt = CONS(T1,v12opt);
      goto L82;
L97:;
      if (Null(v10)) { goto L111; }
      T0 = ecl_car(v10);
      T1 = L27type_or(v14t1, T0);
      v12opt = CONS(T1,v12opt);
      goto L82;
L111:;
      v12opt = CONS(v14t1,v12opt);
L82:;
      goto L72;
L73:;
     }
     {
      cl_object v14t1;
      if (Null(v6)) { goto L118; }
      v14t1 = ecl_car(v6);
      goto L117;
L118:;
      v14t1 = ECL_T;
L117:;
      {
       cl_object v15t2;
       cl_object v16;
       v15t2 = ECL_NIL;
       {
        cl_object v17;
        v17 = v8;
        if (ecl_unlikely(!ECL_LISTP(v17))) FEtype_error_list(v17);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v16 = v17;
       }
L125:;
       if (!(ecl_endp(v16))) { goto L127; }
       goto L126;
L127:;
       v15t2 = _ecl_car(v16);
       {
        cl_object v17;
        v17 = _ecl_cdr(v16);
        if (ecl_unlikely(!ECL_LISTP(v17))) FEtype_error_list(v17);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v16 = v17;
       }
       T0 = L27type_or(v14t1, v15t2);
       v12opt = CONS(T0,v12opt);
       goto L125;
L126:;
      }
      {
       cl_object v15t2;
       cl_object v16;
       v15t2 = ECL_NIL;
       {
        cl_object v17;
        v17 = v9;
        if (ecl_unlikely(!ECL_LISTP(v17))) FEtype_error_list(v17);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v16 = v17;
       }
L143:;
       if (!(ecl_endp(v16))) { goto L145; }
       goto L144;
L145:;
       v15t2 = _ecl_car(v16);
       {
        cl_object v17;
        v17 = _ecl_cdr(v16);
        if (ecl_unlikely(!ECL_LISTP(v17))) FEtype_error_list(v17);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v16 = v17;
       }
       T0 = L27type_or(v14t1, v15t2);
       v12opt = CONS(T0,v12opt);
       goto L143;
L144:;
      }
      if (Null(v10)) { goto L156; }
      T0 = ecl_car(v10);
      T1 = L27type_or(v14t1, T0);
      v13rest = ecl_list1(T1);
      goto L116;
L156:;
      v13rest = v6;
     }
L116:;
     T0 = cl_nreverse(v11req);
     if (Null(v12opt)) { goto L162; }
     T2 = cl_nreverse(v12opt);
     T1 = CONS(ECL_SYM("&OPTIONAL",13),T2);
     goto L160;
L162:;
     T1 = ECL_NIL;
     goto L160;
L160:;
     if (Null(v13rest)) { goto L166; }
     T2 = CONS(ECL_SYM("&OPTIONAL",13),v13rest);
     goto L164;
L166:;
     T2 = ECL_NIL;
     goto L164;
L164:;
     T3 = cl_append(3, T0, T1, T2);
     value0 = CONS(ECL_SYM("VALUES",897),T3);
     cl_env_copy->nvalues = 1;
     return value0;
    }
   }
  }
 }
}
/*      function definition for VALUES-TYPE-AND-EMPTY-CACHE           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L22values_type_and_empty_cache()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = si_make_vector(ECL_T, ecl_make_fixnum(1024), ECL_NIL, ECL_NIL, ECL_NIL, ecl_make_fixnum(0));
  return value0;
 }
}
/*      function definition for VALUES-TYPE-AND                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L24values_type_and(cl_object v1t1, cl_object v2t2)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_fixnum v3hash;
   cl_object v4elt;
   {
    cl_object v5;
    T0 = si_hash_equal(2, v1t1, v2t2);
    v5 = ecl_boole(ECL_BOOLAND,(T0),(ecl_make_fixnum(1023)));
    {
     cl_fixnum v6;
     v6 = 0;
     if (!(ECL_FIXNUMP(v5))) { goto L7; }
     v6 = ecl_fixnum(v5);
     if (!((v6)<=(1023))) { goto L12; }
     T0 = ecl_make_bool((v6)>=(0));
     goto L4;
L12:;
     T0 = ECL_NIL;
     goto L4;
L7:;
     T0 = ECL_NIL;
     goto L4;
    }
L4:;
    if (ecl_unlikely(!((T0)!=ECL_NIL)))
         FEwrong_type_argument(VV[22],v5);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v3hash = ecl_fixnum(v5);
   }
   {
    cl_object v5;
    v5 = ecl_symbol_value(VV[42]);
    T0 = v5;
    {
     cl_fixnum v6;
     {
      cl_fixnum v7;
      v7 = v3hash;
      if (ecl_unlikely((v7)>=(v5)->vector.dim))
           FEwrong_index(ECL_NIL,v5,-1,ecl_make_fixnum(v7),(v5)->vector.dim);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v6 = v7;
     }
     v4elt = ecl_aref_unsafe(T0,v6);
    }
   }
   if (Null(v4elt)) { goto L20; }
   {
    cl_object v5;
    {
     cl_object v6;
     v6 = v4elt;
     if (ecl_unlikely(ECL_ATOM(v6))) FEtype_error_cons(v6);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v5 = v6;
    }
    {
     cl_object v6;
     v6 = v5;
     if (ecl_unlikely(!ECL_LISTP(v6))) FEtype_error_list(v6);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
    }
    if (Null(v5)) { goto L31; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     {
      cl_object v7;
      v7 = v6;
      if (ecl_unlikely(ECL_ATOM(v7))) FEtype_error_cons(v7);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v4elt = v7;
     }
     v5 = ECL_CONS_CAR(v5);
    }
L31:;
    T0 = v5;
   }
   if (!(ecl_equal(T0,v1t1))) { goto L20; }
   {
    cl_object v5;
    {
     cl_object v6;
     v6 = v4elt;
     if (ecl_unlikely(ECL_ATOM(v6))) FEtype_error_cons(v6);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v5 = v6;
    }
    {
     cl_object v6;
     v6 = v5;
     if (ecl_unlikely(!ECL_LISTP(v6))) FEtype_error_list(v6);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
    }
    if (Null(v5)) { goto L46; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     {
      cl_object v7;
      v7 = v6;
      if (ecl_unlikely(ECL_ATOM(v7))) FEtype_error_cons(v7);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v4elt = v7;
     }
     v5 = ECL_CONS_CAR(v5);
    }
L46:;
    T0 = v5;
   }
   if (!(ecl_equal(T0,v2t2))) { goto L20; }
   value0 = ecl_car(v4elt);
   cl_env_copy->nvalues = 1;
   return value0;
L20:;
   {
    cl_object v5output;
    v5output = LC23values_type_and(v1t1, v2t2);
    {
     cl_object v6;
     v6 = ecl_symbol_value(VV[42]);
     T0 = v6;
     {
      cl_fixnum v7;
      {
       cl_fixnum v8;
       v8 = v3hash;
       if (ecl_unlikely((v8)>=(v6)->vector.dim))
           FEwrong_index(ECL_NIL,v6,-1,ecl_make_fixnum(v8),(v6)->vector.dim);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v7 = v8;
      }
      T1 = cl_list(3, v1t1, v2t2, v5output);
      ecl_aset_unsafe(T0,v7,T1);
     }
    }
    value0 = v5output;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      local function VALUES-TYPE-AND                                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC23values_type_and(cl_object v1t1, cl_object v2t2)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if ((v2t2)==(ECL_T)) { goto L3; }
  if (!(ecl_equalp(v2t2,VV[40]))) { goto L1; }
  goto L2;
L3:;
L2:;
  value0 = v1t1;
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  if ((v1t1)==(ECL_T)) { goto L7; }
  if (!(ecl_equalp(v1t1,VV[40]))) { goto L5; }
  goto L6;
L7:;
L6:;
  value0 = v2t2;
  cl_env_copy->nvalues = 1;
  return value0;
L5:;
  if (v1t1==ECL_NIL) { goto L11; }
  if (!(v2t2==ECL_NIL)) { goto L9; }
  goto L10;
L11:;
L10:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L9:;
  {
   cl_object v4;                                  /*  REQ1            */
   cl_object v5;                                  /*  OPT1            */
   cl_object v6;                                  /*  REST1           */
   value0 = L18split_values_type(v1t1);
   {
    const int v7 = cl_env_copy->nvalues;
    v4 = value0;
    cl_object v8;
    v8 = (v7<=1)? ECL_NIL : cl_env_copy->values[1];
    v5 = v8;
    v8 = (v7<=2)? ECL_NIL : cl_env_copy->values[2];
    v6 = v8;
   }
   {
    cl_object v8;                                 /*  REQ2            */
    cl_object v9;                                 /*  OPT2            */
    cl_object v10;                                /*  REST2           */
    value0 = L18split_values_type(v2t2);
    {
     const int v11 = cl_env_copy->nvalues;
     v8 = value0;
     cl_object v12;
     v12 = (v11<=1)? ECL_NIL : cl_env_copy->values[1];
     v9 = v12;
     v12 = (v11<=2)? ECL_NIL : cl_env_copy->values[2];
     v10 = v12;
    }
    {
     cl_object v11req;
     cl_object v12opt;
     cl_object v13rest;
     v11req = ECL_NIL;
     v12opt = ECL_NIL;
     v13rest = ECL_NIL;
     {
      cl_object v14t1;
      cl_object v15;
      v14t1 = ECL_NIL;
      {
       cl_object v16;
       v16 = v4;
       if (ecl_unlikely(!ECL_LISTP(v16))) FEtype_error_list(v16);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v15 = v16;
      }
L23:;
      if (!(ecl_endp(v15))) { goto L25; }
      goto L24;
L25:;
      v14t1 = _ecl_car(v15);
      {
       cl_object v16;
       v16 = _ecl_cdr(v15);
       if (ecl_unlikely(!ECL_LISTP(v16))) FEtype_error_list(v16);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v15 = v16;
      }
      if (Null(v8)) { goto L34; }
      {
       cl_object v16;
       v16 = v8;
       {
        cl_object v17;
        v17 = v16;
        if (ecl_unlikely(!ECL_LISTP(v17))) FEtype_error_list(v17);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v16)) { goto L42; }
       {
        cl_object v17;
        v17 = ECL_CONS_CDR(v16);
        v8 = v17;
        v16 = ECL_CONS_CAR(v16);
       }
L42:;
       T0 = v16;
      }
      T1 = L9type_and(v14t1, T0);
      v11req = CONS(T1,v11req);
      goto L33;
L34:;
      if (Null(v9)) { goto L48; }
      {
       cl_object v16;
       v16 = v9;
       {
        cl_object v17;
        v17 = v16;
        if (ecl_unlikely(!ECL_LISTP(v17))) FEtype_error_list(v17);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v16)) { goto L56; }
       {
        cl_object v17;
        v17 = ECL_CONS_CDR(v16);
        v9 = v17;
        v16 = ECL_CONS_CAR(v16);
       }
L56:;
       T0 = v16;
      }
      T1 = L9type_and(v14t1, T0);
      v11req = CONS(T1,v11req);
      goto L33;
L48:;
      if (Null(v10)) { goto L62; }
      T0 = ecl_car(v10);
      T1 = L9type_and(v14t1, T0);
      v11req = CONS(T1,v11req);
      goto L33;
L62:;
      v5 = ECL_NIL;
      v6 = ECL_NIL;
      goto L18;
L33:;
      goto L23;
L24:;
     }
L18:;
     {
      cl_object v14;
      cl_object v15t1;
      cl_object v16;
      v14 = v5;
      v15t1 = ECL_NIL;
      {
       cl_object v17;
       v17 = v14;
       if (ecl_unlikely(!ECL_LISTP(v17))) FEtype_error_list(v17);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v16 = v17;
      }
L76:;
      if (!(ecl_endp(v16))) { goto L78; }
      goto L77;
L78:;
      v15t1 = _ecl_car(v16);
      {
       cl_object v17;
       v17 = _ecl_cdr(v16);
       if (ecl_unlikely(!ECL_LISTP(v17))) FEtype_error_list(v17);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v16 = v17;
      }
      if (Null(v8)) { goto L87; }
      {
       cl_object v17;
       v17 = v8;
       {
        cl_object v18;
        v18 = v17;
        if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v17)) { goto L95; }
       {
        cl_object v18;
        v18 = ECL_CONS_CDR(v17);
        v8 = v18;
        v17 = ECL_CONS_CAR(v17);
       }
L95:;
       T0 = v17;
      }
      T1 = L9type_and(v15t1, T0);
      v11req = CONS(T1,v11req);
      goto L86;
L87:;
      if (Null(v9)) { goto L101; }
      {
       cl_object v17;
       v17 = v9;
       {
        cl_object v18;
        v18 = v17;
        if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
       }
       if (Null(v17)) { goto L109; }
       {
        cl_object v18;
        v18 = ECL_CONS_CDR(v17);
        v9 = v18;
        v17 = ECL_CONS_CAR(v17);
       }
L109:;
       T0 = v17;
      }
      T1 = L9type_and(v15t1, T0);
      v12opt = CONS(T1,v12opt);
      goto L86;
L101:;
      if (Null(v10)) { goto L115; }
      T0 = ecl_car(v10);
      T1 = L9type_and(v15t1, T0);
      v12opt = CONS(T1,v12opt);
      goto L86;
L115:;
      v5 = ECL_NIL;
      v6 = ECL_NIL;
      goto L70;
L86:;
      goto L76;
L77:;
     }
L70:;
     if (Null(v13rest)) { goto L123; }
     {
      cl_object v14t1;
      v14t1 = ecl_car(v13rest);
      {
       cl_object v15t2;
       cl_object v16;
       v15t2 = ECL_NIL;
       {
        cl_object v17;
        v17 = v8;
        if (ecl_unlikely(!ECL_LISTP(v17))) FEtype_error_list(v17);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v16 = v17;
       }
L131:;
       if (!(ecl_endp(v16))) { goto L133; }
       goto L132;
L133:;
       v15t2 = _ecl_car(v16);
       {
        cl_object v17;
        v17 = _ecl_cdr(v16);
        if (ecl_unlikely(!ECL_LISTP(v17))) FEtype_error_list(v17);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v16 = v17;
       }
       T0 = L9type_and(v14t1, v15t2);
       v11req = CONS(T0,v11req);
       goto L131;
L132:;
      }
      {
       cl_object v15t2;
       cl_object v16;
       v15t2 = ECL_NIL;
       {
        cl_object v17;
        v17 = v9;
        if (ecl_unlikely(!ECL_LISTP(v17))) FEtype_error_list(v17);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v16 = v17;
       }
L149:;
       if (!(ecl_endp(v16))) { goto L151; }
       goto L150;
L151:;
       v15t2 = _ecl_car(v16);
       {
        cl_object v17;
        v17 = _ecl_cdr(v16);
        if (ecl_unlikely(!ECL_LISTP(v17))) FEtype_error_list(v17);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v16 = v17;
       }
       T0 = L9type_and(v14t1, v15t2);
       v12opt = CONS(T0,v12opt);
       goto L149;
L150:;
      }
      if (Null(v10)) { goto L123; }
      T0 = ecl_car(v10);
      T1 = L9type_and(v14t1, T0);
      v13rest = ecl_list1(T1);
     }
L123:;
     T0 = cl_nreverse(v11req);
     if (Null(v12opt)) { goto L166; }
     T2 = cl_nreverse(v12opt);
     T1 = CONS(ECL_SYM("&OPTIONAL",13),T2);
     goto L164;
L166:;
     T1 = ECL_NIL;
     goto L164;
L164:;
     if (Null(v13rest)) { goto L170; }
     T2 = CONS(ECL_SYM("&OPTIONAL",13),v13rest);
     goto L168;
L170:;
     T2 = ECL_NIL;
     goto L168;
L168:;
     T3 = cl_append(3, T0, T1, T2);
     value0 = CONS(ECL_SYM("VALUES",897),T3);
     cl_env_copy->nvalues = 1;
     return value0;
    }
   }
  }
 }
}
/*      function definition for TYPE-OR-EMPTY-CACHE                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L25type_or_empty_cache()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = si_make_vector(ECL_T, ecl_make_fixnum(1024), ECL_NIL, ECL_NIL, ECL_NIL, ecl_make_fixnum(0));
  return value0;
 }
}
/*      function definition for TYPE-OR                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L27type_or(cl_object v1t1, cl_object v2t2)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_fixnum v3hash;
   cl_object v4elt;
   {
    cl_object v5;
    T0 = si_hash_equal(2, v1t1, v2t2);
    v5 = ecl_boole(ECL_BOOLAND,(T0),(ecl_make_fixnum(1023)));
    {
     cl_fixnum v6;
     v6 = 0;
     if (!(ECL_FIXNUMP(v5))) { goto L7; }
     v6 = ecl_fixnum(v5);
     if (!((v6)<=(1023))) { goto L12; }
     T0 = ecl_make_bool((v6)>=(0));
     goto L4;
L12:;
     T0 = ECL_NIL;
     goto L4;
L7:;
     T0 = ECL_NIL;
     goto L4;
    }
L4:;
    if (ecl_unlikely(!((T0)!=ECL_NIL)))
         FEwrong_type_argument(VV[22],v5);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v3hash = ecl_fixnum(v5);
   }
   {
    cl_object v5;
    v5 = ecl_symbol_value(VV[45]);
    T0 = v5;
    {
     cl_fixnum v6;
     {
      cl_fixnum v7;
      v7 = v3hash;
      if (ecl_unlikely((v7)>=(v5)->vector.dim))
           FEwrong_index(ECL_NIL,v5,-1,ecl_make_fixnum(v7),(v5)->vector.dim);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v6 = v7;
     }
     v4elt = ecl_aref_unsafe(T0,v6);
    }
   }
   if (Null(v4elt)) { goto L20; }
   {
    cl_object v5;
    {
     cl_object v6;
     v6 = v4elt;
     if (ecl_unlikely(ECL_ATOM(v6))) FEtype_error_cons(v6);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v5 = v6;
    }
    {
     cl_object v6;
     v6 = v5;
     if (ecl_unlikely(!ECL_LISTP(v6))) FEtype_error_list(v6);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
    }
    if (Null(v5)) { goto L31; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     {
      cl_object v7;
      v7 = v6;
      if (ecl_unlikely(ECL_ATOM(v7))) FEtype_error_cons(v7);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v4elt = v7;
     }
     v5 = ECL_CONS_CAR(v5);
    }
L31:;
    T0 = v5;
   }
   if (!(ecl_equal(T0,v1t1))) { goto L20; }
   {
    cl_object v5;
    {
     cl_object v6;
     v6 = v4elt;
     if (ecl_unlikely(ECL_ATOM(v6))) FEtype_error_cons(v6);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v5 = v6;
    }
    {
     cl_object v6;
     v6 = v5;
     if (ecl_unlikely(!ECL_LISTP(v6))) FEtype_error_list(v6);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
    }
    if (Null(v5)) { goto L46; }
    {
     cl_object v6;
     v6 = ECL_CONS_CDR(v5);
     {
      cl_object v7;
      v7 = v6;
      if (ecl_unlikely(ECL_ATOM(v7))) FEtype_error_cons(v7);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v4elt = v7;
     }
     v5 = ECL_CONS_CAR(v5);
    }
L46:;
    T0 = v5;
   }
   if (!(ecl_equal(T0,v2t2))) { goto L20; }
   value0 = ecl_car(v4elt);
   cl_env_copy->nvalues = 1;
   return value0;
L20:;
   {
    cl_object v5output;
    v5output = LC26type_or(v1t1, v2t2);
    {
     cl_object v6;
     v6 = ecl_symbol_value(VV[45]);
     T0 = v6;
     {
      cl_fixnum v7;
      {
       cl_fixnum v8;
       v8 = v3hash;
       if (ecl_unlikely((v8)>=(v6)->vector.dim))
           FEwrong_index(ECL_NIL,v6,-1,ecl_make_fixnum(v8),(v6)->vector.dim);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v7 = v8;
      }
      T1 = cl_list(3, v1t1, v2t2, v5output);
      ecl_aset_unsafe(T0,v7,T1);
     }
    }
    value0 = v5output;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      local function TYPE-OR                                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC26type_or(cl_object v1t1, cl_object v2t2)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if ((v1t1)==(v2t2)) { goto L3; }
  if (!((v2t2)==(ECL_SYM("*",20)))) { goto L1; }
  goto L2;
L3:;
L2:;
  value0 = v1t1;
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  if (!((v1t1)==(ECL_SYM("*",20)))) { goto L5; }
  value0 = v2t2;
  cl_env_copy->nvalues = 1;
  return value0;
L5:;
  {
   cl_object v3tag1;
   cl_object v4tag2;
   ecl_bds_push(cl_env_copy,VV[16]);              /*  *HIGHEST-TYPE-TAG* */
   ecl_bds_bind(cl_env_copy,VV[17],ECL_T);        /*  *SAVE-TYPES-DATABASE* */
   ecl_bds_push(cl_env_copy,VV[18]);              /*  *MEMBER-TYPES*  */
   ecl_bds_push(cl_env_copy,VV[19]);              /*  *ELEMENTARY-TYPES* */
   v3tag1 = ecl_function_dispatch(cl_env_copy,VV[57])(1, v1t1) /*  SAFE-CANONICAL-TYPE */;
   v4tag2 = ecl_function_dispatch(cl_env_copy,VV[57])(1, v2t2) /*  SAFE-CANONICAL-TYPE */;
   if (!(ecl_numberp(v3tag1))) { goto L9; }
   if (!(ecl_numberp(v4tag2))) { goto L9; }
   v3tag1 = ecl_function_dispatch(cl_env_copy,VV[57])(1, v1t1) /*  SAFE-CANONICAL-TYPE */;
   v4tag2 = ecl_function_dispatch(cl_env_copy,VV[57])(1, v2t2) /*  SAFE-CANONICAL-TYPE */;
   T0 = ecl_boole(ECL_BOOLANDC2,(v3tag1),(v4tag2));
   if (!(ecl_zerop(T0))) { goto L16; }
   value0 = v2t2;
   cl_env_copy->nvalues = 1;
   ecl_bds_unwind_n(cl_env_copy,4);
   return value0;
L16:;
   T0 = ecl_boole(ECL_BOOLANDC2,(v4tag2),(v3tag1));
   if (!(ecl_zerop(T0))) { goto L18; }
   value0 = v1t1;
   cl_env_copy->nvalues = 1;
   ecl_bds_unwind_n(cl_env_copy,4);
   return value0;
L18:;
   value0 = cl_list(3, ECL_SYM("OR",616), v1t1, v2t2);
   ecl_bds_unwind_n(cl_env_copy,4);
   return value0;
L9:;
   if (!((v3tag1)==(ECL_SYM("CONS",253)))) { goto L20; }
   ecl_function_dispatch(cl_env_copy,VV[58])(2, VV[20], v1t1) /*  CMPWARN */;
   value0 = ECL_T;
   cl_env_copy->nvalues = 1;
   ecl_bds_unwind_n(cl_env_copy,4);
   return value0;
L20:;
   if (!((v4tag2)==(ECL_SYM("CONS",253)))) { goto L23; }
   ecl_function_dispatch(cl_env_copy,VV[58])(2, VV[20], v2t2) /*  CMPWARN */;
   value0 = ECL_T;
   cl_env_copy->nvalues = 1;
   ecl_bds_unwind_n(cl_env_copy,4);
   return value0;
L23:;
   if (!(v3tag1==ECL_NIL)) { goto L26; }
   ecl_function_dispatch(cl_env_copy,VV[59])(2, VV[47], v1t1) /*  CMPNOTE */;
   value0 = ECL_T;
   cl_env_copy->nvalues = 1;
   ecl_bds_unwind_n(cl_env_copy,4);
   return value0;
L26:;
   ecl_function_dispatch(cl_env_copy,VV[59])(2, VV[47], v2t2) /*  CMPNOTE */;
   value0 = ECL_T;
   cl_env_copy->nvalues = 1;
   ecl_bds_unwind_n(cl_env_copy,4);
   return value0;
  }
 }
}
/*      function definition for TYPE>=                                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L28type__(cl_object v1type1, cl_object v2type2)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_subtypep(2, v2type2, v1type1);
  return value0;
 }
}

#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/cmp/cmptype-arith.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclE1PvGeb7_eLOmqq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CMP;CMPTYPE-ARITH.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclE1PvGeb7_eLOmqq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  si_do_deftype(3, VV[0], VVtemp[1], ECL_T);
  ecl_cmp_defun(VV[50]);                          /*  MEMBER-TYPE     */
  ecl_cmp_defun(VV[51]);                          /*  OBJECT-TYPE     */
  ecl_cmp_defun(VV[52]);                          /*  VALID-TYPE-SPECIFIER */
  ecl_cmp_defun(VV[53]);                          /*  KNOWN-TYPE-P    */
  ecl_cmp_defun(VV[54]);                          /*  TRIVIAL-TYPE-P  */
  si_Xmake_special(VV[14]);
  cl_set(VV[14],si_make_vector(ECL_T, ecl_make_fixnum(1024), ECL_NIL, ECL_NIL, ECL_NIL, ecl_make_fixnum(0)));
  ecl_cmp_defun(VV[55]);                          /*  TYPE-AND-EMPTY-CACHE */
  ecl_cmp_defun(VV[56]);                          /*  TYPE-AND        */
  ecl_cmp_defun(VV[60]);                          /*  VALUES-NUMBER-FROM-TYPE */
  si_Xmake_special(VV[25]);
  cl_set(VV[25],si_make_vector(ECL_T, ecl_make_fixnum(1024), ECL_NIL, ECL_NIL, ECL_NIL, ecl_make_fixnum(0)));
  ecl_cmp_defun(VV[61]);                          /*  VALUES-TYPE-PRIMARY-TYPE-EMPTY-CACHE */
  ecl_cmp_defun(VV[62]);                          /*  VALUES-TYPE-PRIMARY-TYPE */
  si_Xmake_special(VV[31]);
  cl_set(VV[31],si_make_vector(ECL_T, ecl_make_fixnum(1024), ECL_NIL, ECL_NIL, ECL_NIL, ecl_make_fixnum(0)));
  ecl_cmp_defun(VV[63]);                          /*  VALUES-TYPE-TO-N-TYPES-EMPTY-CACHE */
  ecl_cmp_defun(VV[64]);                          /*  VALUES-TYPE-TO-N-TYPES */
  (void)0; /* No entry created for DO-VALUES-TYPE-TO-N-TYPES */
  ecl_cmp_defun(VV[65]);                          /*  SPLIT-VALUES-TYPE */
  si_Xmake_special(VV[38]);
  cl_set(VV[38],si_make_vector(ECL_T, ecl_make_fixnum(1024), ECL_NIL, ECL_NIL, ECL_NIL, ecl_make_fixnum(0)));
  ecl_cmp_defun(VV[67]);                          /*  VALUES-TYPE-OR-EMPTY-CACHE */
  ecl_cmp_defun(VV[68]);                          /*  VALUES-TYPE-OR  */
  si_Xmake_special(VV[42]);
  cl_set(VV[42],si_make_vector(ECL_T, ecl_make_fixnum(1024), ECL_NIL, ECL_NIL, ECL_NIL, ecl_make_fixnum(0)));
  ecl_cmp_defun(VV[69]);                          /*  VALUES-TYPE-AND-EMPTY-CACHE */
  ecl_cmp_defun(VV[70]);                          /*  VALUES-TYPE-AND */
  si_Xmake_special(VV[45]);
  cl_set(VV[45],si_make_vector(ECL_T, ecl_make_fixnum(1024), ECL_NIL, ECL_NIL, ECL_NIL, ecl_make_fixnum(0)));
  ecl_cmp_defun(VV[71]);                          /*  TYPE-OR-EMPTY-CACHE */
  ecl_cmp_defun(VV[72]);                          /*  TYPE-OR         */
  ecl_cmp_defun(VV[73]);                          /*  TYPE>=          */
}
