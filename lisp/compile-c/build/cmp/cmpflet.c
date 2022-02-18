/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CMP;CMPFLET.LSP                                   */
#include <ecl/ecl-cmp.h>
#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/cmp/cmpflet.eclh"
/*      function definition for C1LABELS                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L1c1labels(cl_object v1args)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = L3c1labels_flet(ECL_SYM("LABELS",453), v1args);
  return value0;
 }
}
/*      function definition for C1FLET                                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L2c1flet(cl_object v1args)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = L3c1labels_flet(ECL_SYM("FLET",375), v1args);
  return value0;
 }
}
/*      function definition for C1LABELS/FLET                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L3c1labels_flet(cl_object v1origin, cl_object v2args)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  ecl_function_dispatch(cl_env_copy,VV[46])(3, v1origin, v2args, ecl_make_fixnum(1)) /*  CHECK-ARGS-NUMBER */;
  {
   cl_object v3;
   cl_object v4defs;
   cl_object v5local_funs;
   cl_object v6fnames;
   cl_object v7body_c1form;
   v3 = ecl_function_dispatch(cl_env_copy,VV[47])(0) /*  CMP-ENV-COPY */;
   v4defs = ECL_NIL;
   v5local_funs = ECL_NIL;
   v6fnames = ECL_NIL;
   v7body_c1form = ECL_NIL;
   {
    cl_object v8;
    v8 = ecl_car(v2args);
    goto L11;
L10:;
    {
     cl_object v9def;
     v9def = ecl_car(v8);
     if (ecl_endp(v9def)) { goto L17; }
     T0 = ecl_car(v9def);
     if (Null(si_valid_function_name_p(T0))) { goto L17; }
     T0 = ecl_cdr(v9def);
     if (!(ecl_endp(T0))) { goto L15; }
     goto L16;
L17:;
L16:;
     ecl_function_dispatch(cl_env_copy,VV[48])(2, VV[2], v9def) /*  CMPERR */;
L15:;
     T0 = ecl_car(v9def);
     if (Null(ecl_memql(T0,v6fnames))) { goto L20; }
     T0 = ecl_car(v9def);
     ecl_function_dispatch(cl_env_copy,VV[48])(3, VV[3], v1origin, T0) /*  CMPERR */;
L20:;
     T0 = ecl_car(v9def);
     v6fnames = CONS(T0,v6fnames);
     {
      cl_object v10name;
      cl_object v11var;
      cl_object v12fun;
      v10name = ecl_car(v9def);
      v11var = ecl_function_dispatch(cl_env_copy,VV[49])(4, ECL_SYM("NAME",1300), v10name, VV[4], ECL_SYM("OBJECT",1305)) /*  MAKE-VAR */;
      v12fun = ecl_function_dispatch(cl_env_copy,VV[50])(4, ECL_SYM("NAME",1300), v10name, VV[5], v11var) /*  MAKE-FUN */;
      ecl_function_dispatch(cl_env_copy,VV[51])(2, v12fun, v3) /*  CMP-ENV-REGISTER-FUNCTION */;
      T0 = ecl_cdr(v9def);
      T1 = CONS(v12fun,T0);
      v4defs = CONS(T1,v4defs);
     }
    }
    v8 = ecl_cdr(v8);
L11:;
    if (Null(v8)) { goto L32; }
    goto L10;
L32:;
   }
   if (!((v1origin)==(ECL_SYM("FLET",375)))) { goto L36; }
   T0 = ecl_symbol_value(VV[6]);
   goto L35;
L36:;
   T0 = v3;
L35:;
   T1 = ecl_function_dispatch(cl_env_copy,VV[47])(1, T0) /*  CMP-ENV-COPY */;
   ecl_bds_bind(cl_env_copy,VV[6],T1);            /*  *CMP-ENV*       */
   {
    cl_object v8;
    v8 = cl_nreverse(v4defs);
    goto L41;
L40:;
    {
     cl_object v9def;
     v9def = ecl_car(v8);
     {
      cl_object v10fun;
      v10fun = ecl_car(v9def);
      T0 = ecl_cdr(v9def);
      T1 = ecl_function_dispatch(cl_env_copy,VV[52])(3, T0, VV[7], v10fun) /*  C1COMPILE-FUNCTION */;
      v5local_funs = CONS(T1,v5local_funs);
     }
    }
    v8 = ecl_cdr(v8);
L41:;
    if (Null(v8)) { goto L50; }
    goto L40;
L50:;
    ecl_bds_unwind1(cl_env_copy);
   }
   if (!((v1origin)==(ECL_SYM("LABELS",453)))) { goto L52; }
   {
    cl_object v8change;
    v8change = ECL_NIL;
L55:;
    v8change = ECL_NIL;
    {
     cl_object v9f1;
     cl_object v10;
     v9f1 = ECL_NIL;
     {
      cl_object v11;
      v11 = v5local_funs;
      if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v10 = v11;
     }
     {
      cl_object v11vars;
      v11vars = ECL_NIL;
      {
       cl_object v12funs;
       v12funs = ECL_NIL;
L65:;
       if (!(ecl_endp(v10))) { goto L67; }
       goto L66;
L67:;
       v9f1 = _ecl_car(v10);
       {
        cl_object v13;
        v13 = _ecl_cdr(v10);
        if (ecl_unlikely(!ECL_LISTP(v13))) FEtype_error_list(v13);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v10 = v13;
       }
       v11vars = ecl_function_dispatch(cl_env_copy,VV[53])(1, v9f1) /*  FUN-REFERENCED-VARS */;
       v12funs = ecl_function_dispatch(cl_env_copy,VV[54])(1, v9f1) /*  FUN-REFERENCED-FUNS */;
       {
        cl_object v13;
        cl_object v14f2;
        cl_object v15;
        v13 = ecl_function_dispatch(cl_env_copy,VV[55])(1, v9f1) /*  FUN-REFERENCING-FUNS */;
        v14f2 = ECL_NIL;
        {
         cl_object v16;
         v16 = v13;
         if (ecl_unlikely(!ECL_LISTP(v16))) FEtype_error_list(v16);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         v15 = v16;
        }
        {
         cl_object v16c1;
         v16c1 = ECL_NIL;
         {
          cl_object v17c2;
          v17c2 = ECL_NIL;
          {
          cl_object v18c3;
          v18c3 = ECL_NIL;
L88:;
          if (!(ecl_endp(v15))) { goto L90; }
          goto L89;
L90:;
          v14f2 = _ecl_car(v15);
          {
          cl_object v19;
          v19 = _ecl_cdr(v15);
          if (ecl_unlikely(!ECL_LISTP(v19))) FEtype_error_list(v19);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          v15 = v19;
          }
          v16c1 = ecl_function_dispatch(cl_env_copy,VV[56])(2, v14f2, v11vars) /*  ADD-TO-FUN-REFERENCED-VARS */;
          v17c2 = ecl_function_dispatch(cl_env_copy,VV[57])(2, v14f2, v12funs) /*  ADD-TO-FUN-REFERENCED-FUNS */;
          v18c3 = L8update_fun_closure_type(v14f2);
          if ((v16c1)!=ECL_NIL) { goto L106; }
          if ((v17c2)!=ECL_NIL) { goto L106; }
          if (Null(v18c3)) { goto L104; }
          goto L105;
L106:;
L105:;
          v8change = ECL_T;
L104:;
          goto L88;
L89:;
          }
         }
        }
       }
       goto L65;
L66:;
      }
     }
    }
    if ((v8change)!=ECL_NIL) { goto L112; }
    goto L52;
L112:;
    goto L55;
   }
L52:;
   ecl_bds_bind(cl_env_copy,VV[6],v3);            /*  *CMP-ENV*       */
   {
    cl_object v9;                                 /*  BODY            */
    cl_object v10;                                /*  SS              */
    cl_object v11;                                /*  TS              */
    cl_object v12;                                /*  IS              */
    cl_object v13;                                /*  OTHER-DECL      */
    T0 = ecl_cdr(v2args);
    value0 = ecl_function_dispatch(cl_env_copy,VV[58])(2, T0, ECL_T) /*  C1BODY */;
    {
     const int v14 = cl_env_copy->nvalues;
     v9 = value0;
     cl_object v15;
     v15 = (v14<=1)? ECL_NIL : cl_env_copy->values[1];
     v10 = v15;
     v15 = (v14<=2)? ECL_NIL : cl_env_copy->values[2];
     v11 = v15;
     v15 = (v14<=3)? ECL_NIL : cl_env_copy->values[3];
     v12 = v15;
     v15 = (v14<=4)? ECL_NIL : cl_env_copy->values[4];
     v13 = v15;
    }
    {
     cl_object v14;
     v14 = ecl_fdefinition(VV[59]);
     {
      cl_object v15;
      cl_object v16;
      v15 = ECL_NIL;
      {
       cl_object v17;
       v17 = v10;
       if (ecl_unlikely(!ECL_LISTP(v17))) FEtype_error_list(v17);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v16 = v17;
      }
L123:;
      if (!(ecl_endp(v16))) { goto L125; }
      goto L124;
L125:;
      v15 = _ecl_car(v16);
      {
       cl_object v17;
       v17 = _ecl_cdr(v16);
       if (ecl_unlikely(!ECL_LISTP(v17))) FEtype_error_list(v17);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v16 = v17;
      }
      ecl_function_dispatch(cl_env_copy,v14)(1, v15);
      goto L123;
L124:;
      goto L117;
     }
    }
L117:;
    ecl_function_dispatch(cl_env_copy,VV[60])(3, ECL_NIL, v11, v12) /*  CHECK-VDECL */;
    v7body_c1form = L10c1decl_body(v13, v9);
    ecl_bds_unwind1(cl_env_copy);
   }
   T0 = (ECL_SYM("PLUSP",644)->symbol.gfdef);
   T1 = ecl_fdefinition(VV[61]);
   v5local_funs = cl_remove_if_not(4, T0, v5local_funs, ECL_SYM("KEY",1288), T1);
L143:;
   {
    cl_object v8x;
    v8x = ECL_NIL;
    {
     cl_object v9f;
     cl_object v10;
     v9f = ECL_NIL;
     {
      cl_object v11;
      v11 = v5local_funs;
      if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v10 = v11;
     }
L153:;
     if (!(ecl_endp(v10))) { goto L155; }
     goto L154;
L155:;
     v9f = _ecl_car(v10);
     {
      cl_object v11;
      v11 = _ecl_cdr(v10);
      if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v10 = v11;
     }
     if (Null(L8update_fun_closure_type(v9f))) { goto L163; }
     v8x = ECL_T;
L163:;
     goto L153;
L154:;
    }
    if ((v8x)!=ECL_NIL) { goto L145; }
   }
   goto L144;
L145:;
   goto L143;
L144:;
   if (Null(v5local_funs)) { goto L168; }
   T0 = ecl_function_dispatch(cl_env_copy,VV[62])(1, v7body_c1form) /*  C1FORM-TYPE */;
   {
    bool v8;
    v8 = (v1origin)==(ECL_SYM("LABELS",453));
    value0 = ecl_function_dispatch(cl_env_copy,VV[63])(7, VV[8], ECL_SYM("TYPE",1346), T0, VV[9], v5local_funs, v7body_c1form, ecl_make_bool(v8)) /*  MAKE-C1FORM* */;
    return value0;
   }
L168:;
   value0 = v7body_c1form;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for CHILD-FUNCTION-P                      */
/*      optimize speed 3, debug 1, space 1, safety 2                  */
static cl_object L4child_function_p(cl_object v1presumed_parent, cl_object v2fun)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3real_parent;
   v3real_parent = ECL_NIL;
L2:;
   v3real_parent = ecl_function_dispatch(cl_env_copy,VV[65])(1, v2fun) /*  FUN-PARENT */;
   if ((v3real_parent)!=ECL_NIL) { goto L6; }
   goto L3;
L6:;
   if (!((v3real_parent)==(v1presumed_parent))) { goto L9; }
   value0 = ECL_T;
   cl_env_copy->nvalues = 1;
   return value0;
L9:;
   v2fun = v3real_parent;
   goto L2;
L3:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for COMPUTE-CLOSURE-TYPE                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L5compute_closure_type(cl_object v1fun)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2lexical_closure_p;
   v2lexical_closure_p = ECL_NIL;
   {
    cl_object v3;
    v3 = ecl_function_dispatch(cl_env_copy,VV[53])(1, v1fun) /*  FUN-REFERENCED-VARS */;
    goto L6;
L5:;
    {
     cl_object v4var;
     v4var = ecl_car(v3);
     {
      cl_object v5;
      v5 = ecl_function_dispatch(cl_env_copy,VV[66])(1, v4var) /*  GLOBAL-VAR-P */;
      if (Null(v5)) { goto L12; }
      goto L10;
L12:;
      if (Null(ecl_function_dispatch(cl_env_copy,VV[67])(1, v4var) /*  REF-REF-CCB */)) { goto L14; }
      value0 = VV[12];
      cl_env_copy->nvalues = 1;
      return value0;
L14:;
      v2lexical_closure_p = ECL_T;
     }
L10:;
    }
    v3 = ecl_cdr(v3);
L6:;
    if (Null(v3)) { goto L19; }
    goto L5;
L19:;
   }
   {
    cl_object v3;
    v3 = ecl_function_dispatch(cl_env_copy,VV[54])(1, v1fun) /*  FUN-REFERENCED-FUNS */;
    goto L25;
L24:;
    {
     cl_object v4f;
     v4f = ecl_car(v3);
     if ((L4child_function_p(v1fun, v4f))!=ECL_NIL) { goto L29; }
     {
      cl_object v5;
      v5 = ecl_function_dispatch(cl_env_copy,VV[68])(1, v4f) /*  FUN-CLOSURE */;
      if (!((v5)==(VV[12]))) { goto L32; }
      value0 = VV[12];
      cl_env_copy->nvalues = 1;
      return value0;
L32:;
      if (!((v5)==(VV[13]))) { goto L29; }
      v2lexical_closure_p = ECL_T;
     }
L29:;
    }
    v3 = ecl_cdr(v3);
L25:;
    if (Null(v3)) { goto L38; }
    goto L24;
L38:;
   }
   if (Null(v2lexical_closure_p)) { goto L40; }
   if ((ecl_function_dispatch(cl_env_copy,VV[69])(1, v1fun) /*  FUN-REF-CCB */)!=ECL_NIL) { goto L44; }
   if (Null(ecl_function_dispatch(cl_env_copy,VV[70])(1, v1fun) /*  FUN-VAR */)) { goto L42; }
   T0 = ecl_function_dispatch(cl_env_copy,VV[70])(1, v1fun) /*  FUN-VAR */;
   T1 = ecl_function_dispatch(cl_env_copy,VV[71])(1, T0) /*  VAR-REF  */;
   if (!(ecl_plusp(T1))) { goto L42; }
   goto L43;
L44:;
L43:;
   value0 = VV[12];
   cl_env_copy->nvalues = 1;
   return value0;
L42:;
   value0 = VV[13];
   cl_env_copy->nvalues = 1;
   return value0;
L40:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for UPDATE-FUN-CLOSURE-TYPE-MANY          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L6update_fun_closure_type_many(cl_object v1function_list)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2finish;
   cl_object v3recompute;
   v2finish = ECL_NIL;
   v3recompute = ECL_NIL;
   goto L5;
L4:;
   {
    cl_object v4;
    v4 = v1function_list;
    goto L11;
L10:;
    {
     cl_object v5f;
     v5f = ecl_car(v4);
     if (Null(L8update_fun_closure_type(v5f))) { goto L15; }
     v3recompute = ECL_T;
     v2finish = ECL_NIL;
L15:;
    }
    v4 = ecl_cdr(v4);
L11:;
    if (Null(v4)) { goto L22; }
    goto L10;
L22:;
   }
   v2finish = ECL_T;
L5:;
   if ((v2finish)!=ECL_NIL) { goto L26; }
   goto L4;
L26:;
   value0 = v3recompute;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for PREPEND-NEW                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L7prepend_new(cl_object v1l1, cl_object v2l2)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3f;
   cl_object v4;
   v3f = ECL_NIL;
   {
    cl_object v5;
    v5 = v1l1;
    if (ecl_unlikely(!ECL_LISTP(v5))) FEtype_error_list(v5);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v4 = v5;
   }
L6:;
   if (!(ecl_endp(v4))) { goto L8; }
   goto L7;
L8:;
   v3f = _ecl_car(v4);
   {
    cl_object v5;
    v5 = _ecl_cdr(v4);
    if (ecl_unlikely(!ECL_LISTP(v5))) FEtype_error_list(v5);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v4 = v5;
   }
   v2l2 = cl_adjoin(2, v3f, v2l2);
   goto L6;
L7:;
  }
  value0 = v2l2;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for UPDATE-FUN-CLOSURE-TYPE               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L8update_fun_closure_type(cl_object v1fun)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2old_type;
   v2old_type = ecl_function_dispatch(cl_env_copy,VV[68])(1, v1fun) /*  FUN-CLOSURE */;
   if (!((v2old_type)==(VV[12]))) { goto L2; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L2:;
   {
    cl_object v3;
    cl_object v4to_be_updated;
    v3 = L5compute_closure_type(v1fun);
    v4to_be_updated = ECL_NIL;
    if (!((v3)==(v2old_type))) { goto L6; }
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
L6:;
    if (Null(ecl_function_dispatch(cl_env_copy,VV[75])(1, v1fun) /*  FUN-GLOBAL */)) { goto L8; }
    T0 = ecl_function_dispatch(cl_env_copy,VV[76])(1, v1fun) /*  FUN-NAME */;
    {
     cl_object v5;
     v5 = ecl_fdefinition(VV[77]);
     {
      cl_object v6;
      cl_object v7;
      cl_object v8;
      v6 = ecl_function_dispatch(cl_env_copy,VV[53])(1, v1fun) /*  FUN-REFERENCED-VARS */;
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
L19:;
       if (!(ecl_endp(v8))) { goto L21; }
       goto L20;
L21:;
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
        T2 = v11;
       }
       T3 = ecl_function_dispatch(cl_env_copy,v5)(1, v7);
       v10 = ecl_list1(T3);
       (ECL_CONS_CDR(T2)=v10,T2);
       goto L19;
L20:;
       T1 = ecl_cdr(v9);
       goto L10;
      }
     }
    }
L10:;
    ecl_function_dispatch(cl_env_copy,VV[78])(3, VV[16], T0, T1) /*  CMPNOTE */;
L8:;
    T0 = ecl_function_dispatch(cl_env_copy,VV[79])(1, v1fun) /*  FUN-CHILD-FUNS */;
    T1 = ecl_function_dispatch(cl_env_copy,VV[55])(1, v1fun) /*  FUN-REFERENCING-FUNS */;
    v4to_be_updated = ecl_append(T0,T1);
    ecl_structure_set(v1fun,VV[17],12,v3);
    if (!((v3)==(VV[12]))) { goto L40; }
    {
     cl_object v5;
     v5 = ecl_function_dispatch(cl_env_copy,VV[53])(1, v1fun) /*  FUN-REFERENCED-VARS */;
     goto L46;
L45:;
     {
      cl_object v6var;
      v6var = ecl_car(v5);
      if ((ecl_function_dispatch(cl_env_copy,VV[66])(1, v6var) /*  GLOBAL-VAR-P */)!=ECL_NIL) { goto L50; }
      T0 = ecl_function_dispatch(cl_env_copy,VV[80])(1, v6var) /*  VAR-KIND */;
      if ((T0)==(v3)) { goto L50; }
      ecl_structure_set(v6var,VV[18],3,ECL_NIL);
      ecl_structure_set(v6var,VV[18],2,ECL_T);
      ecl_structure_set(v6var,VV[18],6,VV[12]);
      ecl_structure_set(v6var,VV[18],10,ECL_SYM("OBJECT",2105));
      T0 = ecl_function_dispatch(cl_env_copy,VV[81])(1, v6var) /*  VAR-FUNCTIONS-READING */;
      T1 = ecl_function_dispatch(cl_env_copy,VV[82])(1, v6var) /*  VAR-FUNCTIONS-SETTING */;
      T2 = L7prepend_new(T1, v4to_be_updated);
      v4to_be_updated = L7prepend_new(T0, T2);
L50:;
     }
     v5 = ecl_cdr(v5);
L46:;
     if (Null(v5)) { goto L60; }
     goto L45;
L60:;
    }
    {
     cl_object v5;
     v5 = ecl_function_dispatch(cl_env_copy,VV[54])(1, v1fun) /*  FUN-REFERENCED-FUNS */;
     goto L65;
L64:;
     {
      cl_object v6f;
      v6f = ecl_car(v5);
      ecl_structure_set(v6f,VV[17],2,ECL_T);
     }
     v5 = ecl_cdr(v5);
L65:;
     if (Null(v5)) { goto L72; }
     goto L64;
L72:;
    }
L40:;
    if (Null(L6update_fun_closure_type_many(v4to_be_updated))) { goto L74; }
    L8update_fun_closure_type(v1fun);
L74:;
    value0 = ECL_T;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      function definition for C2LOCALS                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L9c2locals(cl_object v1c1form, cl_object v2funs, cl_object v3body, cl_object v4labels)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  ecl_bds_push(cl_env_copy,VV[20]);               /*  *ENV*           */
  ecl_bds_bind(cl_env_copy,VV[21],ecl_make_fixnum(0)); /*  *INLINE-BLOCKS* */
  ecl_bds_push(cl_env_copy,VV[22]);               /*  *ENV-LVL*       */
  {
   cl_object v5env_grows;
   v5env_grows = ECL_NIL;
   {
    cl_object v6closed_vars;
    v6closed_vars = ECL_NIL;
    {
     cl_object v7fun;
     cl_object v8;
     v7fun = ECL_NIL;
     {
      cl_object v9;
      v9 = v2funs;
      if (ecl_unlikely(!ECL_LISTP(v9))) FEtype_error_list(v9);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v8 = v9;
     }
     {
      cl_object v9var;
      v9var = ECL_NIL;
L9:;
      if (!(ecl_endp(v8))) { goto L11; }
      goto L10;
L11:;
      v7fun = _ecl_car(v8);
      {
       cl_object v10;
       v10 = _ecl_cdr(v8);
       if (ecl_unlikely(!ECL_LISTP(v10))) FEtype_error_list(v10);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v8 = v10;
      }
      v9var = ecl_function_dispatch(cl_env_copy,VV[70])(1, v7fun) /*  FUN-VAR */;
      T0 = ecl_function_dispatch(cl_env_copy,VV[71])(1, v9var) /*  VAR-REF */;
      if (!(ecl_plusp(T0))) { goto L21; }
      {
       cl_object v10;
       v10 = ecl_function_dispatch(cl_env_copy,VV[80])(1, v9var) /*  VAR-KIND */;
       if (!((v10)==(VV[13]))) { goto L29; }
       goto L26;
       goto L27;
L29:;
       goto L27;
L27:;
       if (!((v10)==(VV[12]))) { goto L24; }
       goto L25;
L26:;
L25:;
       v6closed_vars = CONS(v9var,v6closed_vars);
       if ((v5env_grows)!=ECL_NIL) { goto L21; }
       v5env_grows = ecl_function_dispatch(cl_env_copy,VV[84])(1, v9var) /*  VAR-REF-CCB */;
       goto L21;
L24:;
       ecl_function_dispatch(cl_env_copy,VV[85])(0) /*  MAYBE-OPEN-INLINE-BLOCK */;
       T0 = ecl_function_dispatch(cl_env_copy,VV[86])(0) /*  NEXT-LCL */;
       ecl_function_dispatch(cl_env_copy,VV[87])(2, T0, v9var) /*  BIND */;
       ecl_function_dispatch(cl_env_copy,VV[88])(4, VV[25], ecl_symbol_value(VV[26]), v9var, VV[27]) /*  WT-NL */;
      }
L21:;
      goto L9;
L10:;
      if (Null(ecl_function_dispatch(cl_env_copy,VV[89])(1, v5env_grows) /*  ENV-GROWS */)) { goto L40; }
      ecl_function_dispatch(cl_env_copy,VV[85])(0) /*  MAYBE-OPEN-INLINE-BLOCK */;
      {
       cl_object v10env_lvl;
       v10env_lvl = ecl_symbol_value(VV[22]);
       cl_set(VV[22],ecl_plus(ecl_symbol_value(VV[22]),ecl_make_fixnum(1)));
       T0 = ecl_symbol_value(VV[22]);
       ecl_function_dispatch(cl_env_copy,VV[90])(7, VV[25], ecl_symbol_value(VV[26]), VV[28], T0, VV[29], v10env_lvl, VV[27]) /*  WT */;
      }
L40:;
      {
       cl_object v10var;
       cl_object v11;
       v10var = ECL_NIL;
       {
        cl_object v12;
        v12 = v6closed_vars;
        if (ecl_unlikely(!ECL_LISTP(v12))) FEtype_error_list(v12);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v11 = v12;
       }
L50:;
       if (!(ecl_endp(v11))) { goto L52; }
       goto L51;
L52:;
       v10var = _ecl_car(v11);
       {
        cl_object v12;
        v12 = _ecl_cdr(v11);
        if (ecl_unlikely(!ECL_LISTP(v12))) FEtype_error_list(v12);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v11 = v12;
       }
       ecl_function_dispatch(cl_env_copy,VV[87])(2, ECL_NIL, v10var) /*  BIND */;
       goto L50;
L51:;
      }
     }
    }
   }
  }
  {
   cl_object v5;
   v5 = ecl_fdefinition(VV[91]);
   {
    cl_object v6;
    cl_object v7;
    v6 = ECL_NIL;
    {
     cl_object v8;
     v8 = v2funs;
     if (ecl_unlikely(!ECL_LISTP(v8))) FEtype_error_list(v8);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v7 = v8;
    }
L68:;
    if (!(ecl_endp(v7))) { goto L70; }
    goto L69;
L70:;
    v6 = _ecl_car(v7);
    {
     cl_object v8;
     v8 = _ecl_cdr(v7);
     if (ecl_unlikely(!ECL_LISTP(v8))) FEtype_error_list(v8);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v7 = v8;
    }
    ecl_function_dispatch(cl_env_copy,v5)(1, v6);
    goto L68;
L69:;
    goto L62;
   }
  }
L62:;
  {
   cl_object v5fun;
   cl_object v6;
   v5fun = ECL_NIL;
   {
    cl_object v7;
    v7 = v2funs;
    if (ecl_unlikely(!ECL_LISTP(v7))) FEtype_error_list(v7);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v6 = v7;
   }
   {
    cl_object v7var;
    v7var = ECL_NIL;
L87:;
    if (!(ecl_endp(v6))) { goto L89; }
    goto L88;
L89:;
    v5fun = _ecl_car(v6);
    {
     cl_object v8;
     v8 = _ecl_cdr(v6);
     if (ecl_unlikely(!ECL_LISTP(v8))) FEtype_error_list(v8);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v6 = v8;
    }
    v7var = ecl_function_dispatch(cl_env_copy,VV[70])(1, v5fun) /*  FUN-VAR */;
    T0 = ecl_function_dispatch(cl_env_copy,VV[71])(1, v7var) /*  VAR-REF */;
    if (!(ecl_plusp(T0))) { goto L99; }
    T0 = cl_list(2, VV[30], v5fun);
    ecl_function_dispatch(cl_env_copy,VV[92])(2, T0, v7var) /*  SET-VAR */;
L99:;
    goto L87;
L88:;
   }
  }
  ecl_function_dispatch(cl_env_copy,VV[93])(1, v3body) /*  C2EXPR     */;
  value0 = ecl_function_dispatch(cl_env_copy,VV[94])(0) /*  CLOSE-INLINE-BLOCKS */;
  ecl_bds_unwind1(cl_env_copy);
  ecl_bds_unwind1(cl_env_copy);
  ecl_bds_unwind1(cl_env_copy);
  return value0;
 }
}
/*      function definition for C1DECL-BODY                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L10c1decl_body(cl_object v1decls, cl_object v2body)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(v1decls==ECL_NIL)) { goto L1; }
  value0 = ecl_function_dispatch(cl_env_copy,VV[96])(1, v2body) /*  C1PROGN */;
  return value0;
L1:;
  T0 = ecl_fdefinition(VV[97]);
  T1 = ecl_function_dispatch(cl_env_copy,VV[47])(1, ecl_symbol_value(VV[6])) /*  CMP-ENV-COPY */;
  T2 = cl_reduce(4, T0, v1decls, VV[32], T1);
  ecl_bds_bind(cl_env_copy,VV[6],T2);             /*  *CMP-ENV*       */
  value0 = ecl_function_dispatch(cl_env_copy,VV[96])(1, v2body) /*  C1PROGN */;
  ecl_bds_unwind1(cl_env_copy);
  return value0;
 }
}
/*      function definition for C1LOCALLY                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L11c1locally(cl_object v1args)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;                                  /*  BODY            */
   cl_object v4;                                  /*  SS              */
   cl_object v5;                                  /*  TS              */
   cl_object v6;                                  /*  IS              */
   cl_object v7;                                  /*  OTHER-DECL      */
   value0 = ecl_function_dispatch(cl_env_copy,VV[58])(2, v1args, ECL_T) /*  C1BODY */;
   {
    const int v8 = cl_env_copy->nvalues;
    v3 = value0;
    cl_object v9;
    v9 = (v8<=1)? ECL_NIL : cl_env_copy->values[1];
    v4 = v9;
    v9 = (v8<=2)? ECL_NIL : cl_env_copy->values[2];
    v5 = v9;
    v9 = (v8<=3)? ECL_NIL : cl_env_copy->values[3];
    v6 = v9;
    v9 = (v8<=4)? ECL_NIL : cl_env_copy->values[4];
    v7 = v9;
   }
   if ((v4)!=ECL_NIL) { goto L4; }
   if ((v5)!=ECL_NIL) { goto L4; }
   if ((v6)!=ECL_NIL) { goto L4; }
   if (Null(v7)) { goto L2; }
   goto L3;
L4:;
L3:;
   T0 = ecl_function_dispatch(cl_env_copy,VV[47])(0) /*  CMP-ENV-COPY */;
   ecl_bds_bind(cl_env_copy,VV[6],T0);            /*  *CMP-ENV*       */
   {
    cl_object v8;
    v8 = ecl_fdefinition(VV[59]);
    {
     cl_object v9;
     cl_object v10;
     v9 = ECL_NIL;
     {
      cl_object v11;
      v11 = v4;
      if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v10 = v11;
     }
L14:;
     if (!(ecl_endp(v10))) { goto L16; }
     goto L15;
L16:;
     v9 = _ecl_car(v10);
     {
      cl_object v11;
      v11 = _ecl_cdr(v10);
      if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v10 = v11;
     }
     ecl_function_dispatch(cl_env_copy,v8)(1, v9);
     goto L14;
L15:;
     goto L8;
    }
   }
L8:;
   ecl_function_dispatch(cl_env_copy,VV[60])(3, ECL_NIL, v5, v6) /*  CHECK-VDECL */;
   value0 = L10c1decl_body(v7, v3);
   ecl_bds_unwind1(cl_env_copy);
   return value0;
L2:;
   value0 = ecl_function_dispatch(cl_env_copy,VV[96])(1, v3) /*  C1PROGN */;
   return value0;
  }
 }
}
/*      function definition for C1MACROLET                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L12c1macrolet(cl_object v1args)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  ecl_function_dispatch(cl_env_copy,VV[46])(3, ECL_SYM("MACROLET",523), v1args, ecl_make_fixnum(1)) /*  CHECK-ARGS-NUMBER */;
  T0 = ecl_car(v1args);
  T1 = ecl_function_dispatch(cl_env_copy,VV[47])(0) /*  CMP-ENV-COPY  */;
  T2 = ecl_function_dispatch(cl_env_copy,ECL_SYM("CMP-ENV-REGISTER-MACROLET",1663))(2, T0, T1) /*  CMP-ENV-REGISTER-MACROLET */;
  ecl_bds_bind(cl_env_copy,VV[6],T2);             /*  *CMP-ENV*       */
  T0 = ecl_cdr(v1args);
  value0 = L11c1locally(T0);
  ecl_bds_unwind1(cl_env_copy);
  return value0;
 }
}
/*      function definition for C1SYMBOL-MACROLET                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L13c1symbol_macrolet(cl_object v1args)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  ecl_function_dispatch(cl_env_copy,VV[46])(3, ECL_SYM("SYMBOL-MACROLET",844), v1args, ecl_make_fixnum(1)) /*  CHECK-ARGS-NUMBER */;
  T0 = ecl_function_dispatch(cl_env_copy,VV[47])(0) /*  CMP-ENV-COPY  */;
  ecl_bds_bind(cl_env_copy,VV[6],T0);             /*  *CMP-ENV*       */
  {
   cl_object v2;
   v2 = ecl_car(v1args);
   goto L6;
L5:;
   {
    cl_object v3def;
    v3def = ecl_car(v2);
    {
     cl_object v4name;
     v4name = ecl_car(v3def);
     if (ecl_endp(v3def)) { goto L14; }
     if (!(ECL_SYMBOLP(v4name))) { goto L14; }
     T0 = ecl_cdr(v3def);
     if (!(ecl_endp(T0))) { goto L12; }
     goto L13;
L14:;
L13:;
     ecl_function_dispatch(cl_env_copy,VV[48])(2, VV[36], v3def) /*  CMPERR */;
L12:;
     T0 = ecl_cadr(v3def);
     ecl_function_dispatch(cl_env_copy,VV[101])(2, v4name, T0) /*  CMP-ENV-REGISTER-SYMBOL-MACRO */;
    }
   }
   v2 = ecl_cdr(v2);
L6:;
   if (Null(v2)) { goto L19; }
   goto L5;
L19:;
  }
  T0 = ecl_cdr(v1args);
  value0 = L11c1locally(T0);
  ecl_bds_unwind1(cl_env_copy);
  return value0;
 }
}
/*      function definition for LOCAL-FUNCTION-REF                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L14local_function_ref(cl_narg narg, cl_object v1fname, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2build_object;
  va_list args; va_start(args,v1fname);
  {
   int i = 1;
   if (i >= narg) {
    v2build_object = ECL_NIL;
   } else {
    i++;
    v2build_object = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v4;                                  /*  FUN             */
   cl_object v5;                                  /*  CFB             */
   value0 = ecl_function_dispatch(cl_env_copy,VV[103])(1, v1fname) /*  CMP-ENV-SEARCH-FUNCTION */;
   {
    const int v6 = cl_env_copy->nvalues;
    v4 = value0;
    cl_object v7;
    v7 = (v6<=1)? ECL_NIL : cl_env_copy->values[1];
    v5 = v7;
   }
   if (Null(v4)) { goto L3; }
   if (Null(cl_functionp(v4))) { goto L5; }
   if (Null(v2build_object)) { goto L7; }
   ecl_function_dispatch(cl_env_copy,VV[48])(2, VV[38], v1fname) /*  CMPERR */;
L7:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L5:;
   {
    cl_object v6;
    T0 = ecl_function_dispatch(cl_env_copy,VV[61])(1, v4) /*  FUN-REF */;
    v6 = ecl_plus(T0,ecl_make_fixnum(1));
    ecl_structure_set(v4,VV[17],1,v6);
   }
   if (Null(v2build_object)) { goto L12; }
   ecl_structure_set(v4,VV[17],2,ECL_T);
   goto L11;
L12:;
   {
    cl_object v6caller;
    v6caller = ecl_symbol_value(VV[39]);
    if (Null(v6caller)) { goto L11; }
    T0 = ecl_function_dispatch(cl_env_copy,VV[54])(1, v6caller) /*  FUN-REFERENCED-FUNS */;
    if ((si_memq(v4,T0))!=ECL_NIL) { goto L11; }
    {
     cl_object v7;
     T0 = ecl_function_dispatch(cl_env_copy,VV[54])(1, v6caller) /*  FUN-REFERENCED-FUNS */;
     v7 = CONS(v4,T0);
     ecl_structure_set(v6caller,VV[17],23,v7);
    }
    {
     cl_object v7;
     T0 = ecl_function_dispatch(cl_env_copy,VV[55])(1, v4) /*  FUN-REFERENCING-FUNS */;
     v7 = CONS(v6caller,T0);
     ecl_structure_set(v4,VV[17],24,v7);
    }
   }
L11:;
   {
    cl_object v6var;
    v6var = ecl_function_dispatch(cl_env_copy,VV[70])(1, v4) /*  FUN-VAR */;
    if (Null(v5)) { goto L3; }
    if (Null(v2build_object)) { goto L3; }
    ecl_structure_set(v6var,VV[18],3,ECL_T);
    T0 = ecl_function_dispatch(cl_env_copy,VV[80])(1, v6var) /*  VAR-KIND */;
    if ((T0)==(VV[12])) { goto L3; }
    ecl_structure_set(v6var,VV[18],6,VV[13]);
   }
L3:;
   value0 = v4;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for C2CALL-LOCAL                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L15c2call_local(cl_object v1c1form, cl_object v2fun, cl_object v3args)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if ((ecl_function_dispatch(cl_env_copy,VV[105])(2, v2fun, v3args) /*  C2TRY-TAIL-RECURSIVE-CALL */)!=ECL_NIL) { goto L1; }
  {
   cl_object v4;
   v4 = ecl_symbol_value(VV[41]);
   ecl_bds_bind(cl_env_copy,VV[21],ecl_make_fixnum(0)); /*  *INLINE-BLOCKS* */
   ecl_bds_bind(cl_env_copy,VV[41],v4);           /*  *TEMP*          */
   T0 = ecl_function_dispatch(cl_env_copy,VV[76])(1, v2fun) /*  FUN-NAME */;
   T1 = ecl_function_dispatch(cl_env_copy,VV[106])(1, v3args) /*  INLINE-ARGS */;
   T2 = ecl_function_dispatch(cl_env_copy,VV[107])(1, v1c1form) /*  C1FORM-PRIMARY-TYPE */;
   T3 = ecl_function_dispatch(cl_env_copy,VV[108])(4, T0, v2fun, T1, T2) /*  CALL-LOC */;
   ecl_function_dispatch(cl_env_copy,VV[109])(1, T3) /*  UNWIND-EXIT  */;
   value0 = ecl_function_dispatch(cl_env_copy,VV[94])(0) /*  CLOSE-INLINE-BLOCKS */;
   ecl_bds_unwind1(cl_env_copy);
   ecl_bds_unwind1(cl_env_copy);
   return value0;
  }
L1:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}

#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/cmp/cmpflet.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclb7qIoza7_muT6lq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CMP;CMPFLET.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclb7qIoza7_muT6lq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  ecl_cmp_defun(VV[43]);                          /*  C1LABELS        */
  ecl_cmp_defun(VV[44]);                          /*  C1FLET          */
  ecl_cmp_defun(VV[45]);                          /*  C1LABELS/FLET   */
  ecl_cmp_defun(VV[64]);                          /*  CHILD-FUNCTION-P */
  (void)0; /* No entry created for COMPUTE-CLOSURE-TYPE */
  ecl_cmp_defun(VV[72]);                          /*  UPDATE-FUN-CLOSURE-TYPE-MANY */
  ecl_cmp_defun(VV[73]);                          /*  PREPEND-NEW     */
  ecl_cmp_defun(VV[74]);                          /*  UPDATE-FUN-CLOSURE-TYPE */
  ecl_cmp_defun(VV[83]);                          /*  C2LOCALS        */
  ecl_cmp_defun(VV[95]);                          /*  C1DECL-BODY     */
  ecl_cmp_defun(VV[98]);                          /*  C1LOCALLY       */
  ecl_cmp_defun(VV[99]);                          /*  C1MACROLET      */
  ecl_cmp_defun(VV[100]);                         /*  C1SYMBOL-MACROLET */
  ecl_cmp_defun(VV[102]);                         /*  LOCAL-FUNCTION-REF */
  ecl_cmp_defun(VV[104]);                         /*  C2CALL-LOCAL    */
}
