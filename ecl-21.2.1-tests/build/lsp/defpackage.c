/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:LSP;DEFPACKAGE.LSP                                */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/lsp/defpackage.eclh"
/*      local function DEFPACKAGE                                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC3defpackage(cl_object v1, cl_object v2)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4name;
   cl_object v5options;
   v3 = ecl_cdr(v1);
   {
    cl_object v6;
    if (!(v3==ECL_NIL)) { goto L4; }
    ecl_function_dispatch(cl_env_copy,VV[17])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L4:;
    {
     cl_object v7;
     v7 = ecl_car(v3);
     v3 = ecl_cdr(v3);
     v6 = v7;
    }
    value0 = ecl_make_bool(ECL_SYMBOLP(v6));
    if ((value0)!=ECL_NIL) { goto L12; }
    value0 = ecl_make_bool(ECL_STRINGP(v6));
    if ((value0)!=ECL_NIL) { goto L12; }
    T0 = ecl_make_bool(ECL_CHARACTERP(v6));
    goto L10;
L12:;
    T0 = value0;
    goto L10;
L10:;
    if (ecl_unlikely(!((T0)!=ECL_NIL)))
         FEwrong_type_argument(VV[0],v6);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v4name = v6;
   }
   v5options = v3;
   {
    cl_object v6nicknames;
    cl_object v7documentation;
    cl_object v8size;
    cl_object v9shadowed_symbol_names;
    cl_object v10interned_symbol_names;
    cl_object v11exported_symbol_names;
    cl_object v12shadowing_imported_from_symbol_names_list;
    cl_object v13imported_from_symbol_names_list;
    cl_object v14exported_from_package_names;
    cl_object v15use;
    cl_object v16use_p;
    cl_object v17lock;
    cl_object v18local_nicknames;
    v6nicknames = ECL_NIL;
    v7documentation = ECL_NIL;
    v8size = ECL_NIL;
    v9shadowed_symbol_names = ECL_NIL;
    v10interned_symbol_names = ECL_NIL;
    v11exported_symbol_names = ECL_NIL;
    v12shadowing_imported_from_symbol_names_list = ECL_NIL;
    v13imported_from_symbol_names_list = ECL_NIL;
    v14exported_from_package_names = ECL_NIL;
    v15use = ECL_NIL;
    v16use_p = ECL_NIL;
    v17lock = ECL_NIL;
    v18local_nicknames = ECL_NIL;
    {
     cl_object v19;
     v19 = v5options;
     goto L33;
L32:;
     {
      cl_object v20option;
      v20option = ecl_car(v19);
      {
       cl_object v21;
       v21 = ecl_car(v20option);
       if (!(ecl_eql(v21,ECL_SYM("NICKNAMES",1304)))) { goto L39; }
       T1 = ecl_cdr(v20option);
       T0 = LC1designators(T1);
       v6nicknames = ecl_append(v6nicknames,T0);
       goto L37;
L39:;
       if (!(ecl_eql(v21,ECL_SYM("DOCUMENTATION",1244)))) { goto L43; }
       if (Null(v7documentation)) { goto L45; }
       si_simple_program_error(1, VV[1]);
L45:;
       v7documentation = ecl_cadr(v20option);
       goto L37;
L43:;
       if (!(ecl_eql(v21,ECL_SYM("USE",1351)))) { goto L48; }
       T1 = ecl_cdr(v20option);
       T0 = LC1designators(T1);
       v15use = ecl_append(v15use,T0);
       v16use_p = ECL_T;
       goto L37;
L48:;
       if (!(ecl_eql(v21,ECL_SYM("SHADOW",1333)))) { goto L54; }
       T1 = ecl_cdr(v20option);
       T0 = LC1designators(T1);
       v9shadowed_symbol_names = ecl_append(v9shadowed_symbol_names,T0);
       goto L37;
L54:;
       if (!(ecl_eql(v21,ECL_SYM("INTERN",1283)))) { goto L58; }
       T1 = ecl_cdr(v20option);
       T0 = LC1designators(T1);
       v10interned_symbol_names = ecl_append(v10interned_symbol_names,T0);
       goto L37;
L58:;
       if (!(ecl_eql(v21,ECL_SYM("EXPORT",1255)))) { goto L62; }
       T1 = ecl_cdr(v20option);
       T0 = LC1designators(T1);
       v11exported_symbol_names = ecl_append(v11exported_symbol_names,T0);
       goto L37;
L62:;
       if (!(ecl_eql(v21,VV[2]))) { goto L66; }
       {
        cl_object v22;
        cl_object v23;
        cl_object v24package_name;
        T0 = ecl_cdr(v20option);
        v22 = LC1designators(T0);
        v23 = v22;
        if (!(v23==ECL_NIL)) { goto L71; }
        ecl_function_dispatch(cl_env_copy,VV[17])(1, v22) /*  DM-TOO-FEW-ARGUMENTS */;
L71:;
        {
         cl_object v25;
         v25 = ecl_car(v23);
         v23 = ecl_cdr(v23);
         v24package_name = v25;
        }
        {
         cl_object v25assoc;
         {
          cl_object v26;
          v26 = v12shadowing_imported_from_symbol_names_list;
          goto L80;
L79:;
          {
          cl_object v27;
          cl_object v28;
          {
          cl_object v29;
          v29 = v26;
          if (ecl_unlikely(ECL_ATOM(v29))) FEtype_error_cons(v29);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          v27 = v29;
          }
          v28 = ECL_CONS_CAR(v27);
          if (Null(v28)) { goto L82; }
          {
          cl_object v29;
          {
          cl_object v30;
          v30 = v28;
          if (ecl_unlikely(ECL_ATOM(v30))) FEtype_error_cons(v30);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          T0 = v30;
          }
          v29 = ECL_CONS_CAR(T0);
          if (Null(cl_stringE(2, v24package_name, v29))) { goto L82; }
          v25assoc = v28;
          goto L76;
          }
          }
L82:;
          v26 = ECL_CONS_CDR(v26);
L80:;
          if (v26==ECL_NIL) { goto L95; }
          goto L79;
L95:;
          v25assoc = ECL_NIL;
         }
L76:;
         if (Null(v25assoc)) { goto L97; }
         {
          cl_object v26;
          T0 = ecl_cdr(v25assoc);
          v26 = ecl_append(T0,v23);
          {
          cl_object v27;
          v27 = v25assoc;
          if (ecl_unlikely(ECL_ATOM(v27))) FEtype_error_cons(v27);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          T0 = v27;
          }
          (ECL_CONS_CDR(T0)=v26,T0);
          goto L37;
         }
L97:;
         v12shadowing_imported_from_symbol_names_list = cl_acons(v24package_name, v23, v12shadowing_imported_from_symbol_names_list);
         goto L37;
        }
       }
L66:;
       if (!(ecl_eql(v21,ECL_SYM("IMPORT-FROM",1274)))) { goto L105; }
       {
        cl_object v27;
        cl_object v28;
        cl_object v29package_name;
        T0 = ecl_cdr(v20option);
        v27 = LC1designators(T0);
        v28 = v27;
        if (!(v28==ECL_NIL)) { goto L110; }
        ecl_function_dispatch(cl_env_copy,VV[17])(1, v27) /*  DM-TOO-FEW-ARGUMENTS */;
L110:;
        {
         cl_object v30;
         v30 = ecl_car(v28);
         v28 = ecl_cdr(v28);
         v29package_name = v30;
        }
        {
         cl_object v30assoc;
         {
          cl_object v31;
          v31 = v13imported_from_symbol_names_list;
          goto L119;
L118:;
          {
          cl_object v32;
          cl_object v33;
          {
          cl_object v34;
          v34 = v31;
          if (ecl_unlikely(ECL_ATOM(v34))) FEtype_error_cons(v34);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          v32 = v34;
          }
          v33 = ECL_CONS_CAR(v32);
          if (Null(v33)) { goto L121; }
          {
          cl_object v34;
          {
          cl_object v35;
          v35 = v33;
          if (ecl_unlikely(ECL_ATOM(v35))) FEtype_error_cons(v35);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          T0 = v35;
          }
          v34 = ECL_CONS_CAR(T0);
          if (Null(cl_stringE(2, v29package_name, v34))) { goto L121; }
          v30assoc = v33;
          goto L115;
          }
          }
L121:;
          v31 = ECL_CONS_CDR(v31);
L119:;
          if (v31==ECL_NIL) { goto L134; }
          goto L118;
L134:;
          v30assoc = ECL_NIL;
         }
L115:;
         if (Null(v30assoc)) { goto L136; }
         {
          cl_object v31;
          T0 = ecl_cdr(v30assoc);
          v31 = ecl_append(T0,v28);
          {
          cl_object v32;
          v32 = v30assoc;
          if (ecl_unlikely(ECL_ATOM(v32))) FEtype_error_cons(v32);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          T0 = v32;
          }
          (ECL_CONS_CDR(T0)=v31,T0);
          goto L37;
         }
L136:;
         v13imported_from_symbol_names_list = cl_acons(v29package_name, v28, v13imported_from_symbol_names_list);
         goto L37;
        }
       }
L105:;
       if (!(ecl_eql(v21,ECL_SYM("SIZE",1335)))) { goto L144; }
       if (Null(v8size)) { goto L146; }
       si_simple_program_error(1, VV[3]);
L146:;
       v8size = ecl_cadr(v20option);
       goto L37;
L144:;
       if (!(ecl_eql(v21,ECL_SYM("EXPORT-FROM",1256)))) { goto L149; }
       T1 = ecl_cdr(v20option);
       T0 = LC1designators(T1);
       v14exported_from_package_names = ecl_append(v14exported_from_package_names,T0);
       goto L37;
L149:;
       if (!(ecl_eql(v21,VV[4]))) { goto L153; }
       if (Null(v17lock)) { goto L37; }
       si_simple_program_error(1, VV[5]);
       v17lock = ecl_cadr(v20option);
       goto L37;
L153:;
       if (!(ecl_eql(v21,ECL_SYM("LOCAL-NICKNAMES",1295)))) { goto L158; }
       {
        cl_object v32;
        {
         cl_object v33;
         v33 = ecl_make_cfun((cl_objectfn_fixed)LC2__lambda263,ECL_NIL,Cblock,1);
         v32 = v33;
        }
        {
         cl_object v33;
         cl_object v34;
         cl_object v35;
         v33 = ecl_cdr(v20option);
         v34 = ECL_NIL;
         {
          cl_object v36;
          v36 = v33;
          if (ecl_unlikely(!ECL_LISTP(v36))) FEtype_error_list(v36);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          v35 = v36;
         }
         {
          cl_object v36;
          cl_object v37;
          v36 = ecl_list1(ECL_NIL);
          v37 = v36;
L170:;
          if (!(ecl_endp(v35))) { goto L172; }
          goto L171;
L172:;
          v34 = _ecl_car(v35);
          {
          cl_object v38;
          v38 = _ecl_cdr(v35);
          if (ecl_unlikely(!ECL_LISTP(v38))) FEtype_error_list(v38);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          v35 = v38;
          }
          {
          cl_object v38;
          v38 = v37;
          if (ecl_unlikely(ECL_ATOM(v38))) FEtype_error_cons(v38);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          T1 = v38;
          }
          T2 = ecl_function_dispatch(cl_env_copy,v32)(1, v34);
          v37 = ecl_list1(T2);
          (ECL_CONS_CDR(T1)=v37,T1);
          goto L170;
L171:;
          T0 = ecl_cdr(v36);
          goto L161;
         }
        }
       }
L161:;
       v18local_nicknames = ecl_append(v18local_nicknames,T0);
       goto L37;
L158:;
       cl_cerror(3, VV[6], VV[7], v20option);
      }
L37:;
     }
     v19 = ecl_cdr(v19);
L33:;
     if (Null(v19)) { goto L190; }
     goto L32;
L190:;
    }
    T0 = CONS(ECL_SYM("INTERN",1283),v10interned_symbol_names);
    T1 = CONS(ECL_SYM("EXPORT",1255),v11exported_symbol_names);
    L4check_disjoint(2, T0, T1);
    T0 = CONS(ECL_SYM("INTERN",1283),v10interned_symbol_names);
    T1 = (ECL_SYM("APPEND",90)->symbol.gfdef);
    {
     cl_object v19;
     v19 = (ECL_SYM("REST",721)->symbol.gfdef);
     {
      cl_object v20;
      cl_object v21;
      v20 = ECL_NIL;
      {
       cl_object v22;
       v22 = v13imported_from_symbol_names_list;
       if (ecl_unlikely(!ECL_LISTP(v22))) FEtype_error_list(v22);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v21 = v22;
      }
      {
       cl_object v22;
       cl_object v23;
       v22 = ecl_list1(ECL_NIL);
       v23 = v22;
L203:;
       if (!(ecl_endp(v21))) { goto L205; }
       goto L204;
L205:;
       v20 = _ecl_car(v21);
       {
        cl_object v24;
        v24 = _ecl_cdr(v21);
        if (ecl_unlikely(!ECL_LISTP(v24))) FEtype_error_list(v24);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v21 = v24;
       }
       {
        cl_object v24;
        v24 = v23;
        if (ecl_unlikely(ECL_ATOM(v24))) FEtype_error_cons(v24);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        T3 = v24;
       }
       T4 = ecl_function_dispatch(cl_env_copy,v19)(1, v20);
       v23 = ecl_list1(T4);
       (ECL_CONS_CDR(T3)=v23,T3);
       goto L203;
L204:;
       T2 = ecl_cdr(v22);
       goto L195;
      }
     }
    }
L195:;
    T3 = cl_apply(2, T1, T2);
    T4 = CONS(ECL_SYM("IMPORT-FROM",1274),T3);
    T5 = CONS(ECL_SYM("SHADOW",1333),v9shadowed_symbol_names);
    T6 = (ECL_SYM("APPEND",90)->symbol.gfdef);
    {
     cl_object v19;
     v19 = (ECL_SYM("REST",721)->symbol.gfdef);
     {
      cl_object v20;
      cl_object v21;
      v20 = ECL_NIL;
      {
       cl_object v22;
       v22 = v12shadowing_imported_from_symbol_names_list;
       if (ecl_unlikely(!ECL_LISTP(v22))) FEtype_error_list(v22);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v21 = v22;
      }
      {
       cl_object v22;
       cl_object v23;
       v22 = ecl_list1(ECL_NIL);
       v23 = v22;
L230:;
       if (!(ecl_endp(v21))) { goto L232; }
       goto L231;
L232:;
       v20 = _ecl_car(v21);
       {
        cl_object v24;
        v24 = _ecl_cdr(v21);
        if (ecl_unlikely(!ECL_LISTP(v24))) FEtype_error_list(v24);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v21 = v24;
       }
       {
        cl_object v24;
        v24 = v23;
        if (ecl_unlikely(ECL_ATOM(v24))) FEtype_error_cons(v24);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        T8 = v24;
       }
       T9 = ecl_function_dispatch(cl_env_copy,v19)(1, v20);
       v23 = ecl_list1(T9);
       (ECL_CONS_CDR(T8)=v23,T8);
       goto L230;
L231:;
       T7 = ecl_cdr(v22);
       goto L222;
      }
     }
    }
L222:;
    T8 = cl_apply(2, T6, T7);
    T9 = CONS(VV[2],T8);
    L4check_disjoint(4, T0, T4, T5, T9);
    T0 = cl_string(v4name);
    T1 = cl_list(2, ECL_SYM("QUOTE",681), v6nicknames);
    T2 = ecl_assql(VV[4],v5options);
    T3 = ecl_cadr(T2);
    if (Null(v16use_p)) { goto L250; }
    T4 = v15use;
    goto L249;
L250:;
    T4 = VV[10];
L249:;
    T5 = cl_list(2, ECL_SYM("QUOTE",681), T4);
    T6 = cl_list(2, ECL_SYM("QUOTE",681), v18local_nicknames);
    T7 = cl_list(2, ECL_SYM("QUOTE",681), v9shadowed_symbol_names);
    T8 = cl_list(2, ECL_SYM("QUOTE",681), v10interned_symbol_names);
    T9 = cl_list(2, ECL_SYM("QUOTE",681), v11exported_symbol_names);
    T10 = cl_list(2, ECL_SYM("QUOTE",681), v12shadowing_imported_from_symbol_names_list);
    T11 = cl_list(2, ECL_SYM("QUOTE",681), v13imported_from_symbol_names_list);
    T12 = cl_list(2, ECL_SYM("QUOTE",681), v14exported_from_package_names);
    T13 = cl_list(13, VV[9], T0, T1, v7documentation, T3, T5, T6, T7, T8, T9, T10, T11, T12);
    value0 = cl_list(3, ECL_SYM("EVAL-WHEN",342), VV[8], T13);
    return value0;
   }
  }
 }
}
/*      local function DESIGNATORS                                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC1designators(cl_object v1values)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2;
   v2 = (ECL_SYM("STRING",807)->symbol.gfdef);
   {
    cl_object v3;
    cl_object v4;
    v3 = ECL_NIL;
    {
     cl_object v5;
     v5 = v1values;
     if (ecl_unlikely(!ECL_LISTP(v5))) FEtype_error_list(v5);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v4 = v5;
    }
    {
     cl_object v5;
     cl_object v6;
     v5 = ecl_list1(ECL_NIL);
     v6 = v5;
L8:;
     if (!(ecl_endp(v4))) { goto L10; }
     goto L9;
L10:;
     v3 = _ecl_car(v4);
     {
      cl_object v7;
      v7 = _ecl_cdr(v4);
      if (ecl_unlikely(!ECL_LISTP(v7))) FEtype_error_list(v7);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v4 = v7;
     }
     {
      cl_object v7;
      v7 = v6;
      if (ecl_unlikely(ECL_ATOM(v7))) FEtype_error_cons(v7);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      T0 = v7;
     }
     T1 = ecl_function_dispatch(cl_env_copy,v2)(1, v3);
     v6 = ecl_list1(T1);
     (ECL_CONS_CDR(T0)=v6,T0);
     goto L8;
L9:;
     value0 = ecl_cdr(v5);
     cl_env_copy->nvalues = 1;
     return value0;
    }
   }
  }
 }
}
/*      local function LAMBDA263                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC2__lambda263(cl_object v1spec)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2;
   cl_object v3nick;
   cl_object v4name;
   v2 = v1spec;
   if (!(v2==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[17])(1, v1spec) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v5;
    v5 = ecl_car(v2);
    v2 = ecl_cdr(v2);
    v3nick = v5;
   }
   if (!(v2==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[17])(1, v1spec) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v5;
    v5 = ecl_car(v2);
    v2 = ecl_cdr(v2);
    v4name = v5;
   }
   if (Null(v2)) { goto L14; }
   ecl_function_dispatch(cl_env_copy,VV[18])(1, v1spec) /*  DM-TOO-MANY-ARGUMENTS */;
L14:;
   value0 = CONS(v3nick,v4name);
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for CHECK-DISJOINT                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L4check_disjoint(cl_narg narg, ...)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  cl_object v1args;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  v1args = cl_grab_rest_args(args);
  ecl_va_end(args);
  {
   cl_object v2list;
   v2list = v1args;
   goto L4;
L3:;
   {
    cl_object v3x;
    v3x = ecl_car(v2list);
    {
     cl_object v4;
     cl_object v5y;
     cl_object v6;
     v4 = ecl_cdr(v2list);
     v5y = ECL_NIL;
     {
      cl_object v7;
      v7 = v4;
      if (ecl_unlikely(!ECL_LISTP(v7))) FEtype_error_list(v7);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v6 = v7;
     }
     {
      cl_object v7z;
      v7z = ECL_NIL;
L14:;
      if (!(ecl_endp(v6))) { goto L16; }
      goto L15;
L16:;
      v5y = _ecl_car(v6);
      {
       cl_object v8;
       v8 = _ecl_cdr(v6);
       if (ecl_unlikely(!ECL_LISTP(v8))) FEtype_error_list(v8);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v6 = v8;
      }
      T0 = ecl_cdr(v3x);
      T1 = ecl_cdr(v5y);
      T2 = (ECL_SYM("STRING=",824)->symbol.gfdef);
      T3 = cl_intersection(4, T0, T1, ECL_SYM("TEST",1343), T2);
      v7z = cl_remove_duplicates(1, T3);
      if (Null(v7z)) { goto L27; }
      T0 = ecl_car(v3x);
      T1 = ecl_car(v5y);
      T2 = cl_list(3, T0, T1, v7z);
      cl_error(5, ECL_SYM("SIMPLE-PROGRAM-ERROR",1159), ECL_SYM("FORMAT-CONTROL",1263), VV[12], ECL_SYM("FORMAT-ARGUMENTS",1262), T2);
L27:;
      goto L14;
L15:;
     }
    }
   }
   v2list = ecl_cdr(v2list);
L4:;
   if (ecl_endp(v2list)) { goto L32; }
   goto L3;
L32:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for DODEFPACKAGE                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L5dodefpackage(cl_object v1name, cl_object v2nicknames, cl_object v3documentation, cl_object v4lock, cl_object v5use, cl_object v6local_nicknames, cl_object v7shadowed_symbol_names, cl_object v8interned_symbol_names, cl_object v9exported_symbol_names, cl_object v10shadowing_imported_from_symbol_names_list, cl_object v11imported_from_symbol_names_list, cl_object v12exported_from_package_names)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(cl_find_package(v1name))) { goto L2; }
  if (Null(v2nicknames)) { goto L4; }
  cl_rename_package(3, v1name, v1name, v2nicknames);
L4:;
  if (Null(v5use)) { goto L1; }
  T0 = cl_find_package(v1name);
  T1 = cl_package_use_list(T0);
  cl_unuse_package(2, T1, v1name);
  goto L1;
L2:;
  cl_make_package(7, v1name, ECL_SYM("USE",1351), ECL_NIL, ECL_SYM("NICKNAMES",1304), v2nicknames, ECL_SYM("LOCAL-NICKNAMES",1295), v6local_nicknames);
L1:;
  T0 = cl_find_package(v1name);
  ecl_bds_bind(cl_env_copy,ECL_SYM("*PACKAGE*",45),T0); /*  *PACKAGE* */
  if (Null(v3documentation)) { goto L8; }
  {
   cl_object v13;
   v13 = ecl_symbol_value(ECL_SYM("*PACKAGE*",45));
   (cl_env_copy->function=ECL_CONS_CAR(VV[20]))->cfun.entry(3, v3documentation, v13, ECL_T) /*  (SETF DOCUMENTATION) */;
  }
L8:;
  cl_shadow(1, v7shadowed_symbol_names);
  {
   cl_object v13;
   v13 = v10shadowing_imported_from_symbol_names_list;
   goto L16;
L15:;
   {
    cl_object v14item;
    v14item = ecl_car(v13);
    {
     cl_object v15package;
     T0 = ecl_car(v14item);
     v15package = cl_find_package(T0);
     {
      cl_object v16;
      v16 = ecl_cdr(v14item);
      goto L25;
L24:;
      {
       cl_object v17name;
       v17name = ecl_car(v16);
       T0 = L6find_or_make_symbol(v17name, v15package);
       cl_shadowing_import(1, T0);
      }
      v16 = ecl_cdr(v16);
L25:;
      if (Null(v16)) { goto L32; }
      goto L24;
L32:;
     }
    }
   }
   v13 = ecl_cdr(v13);
L16:;
   if (Null(v13)) { goto L36; }
   goto L15;
L36:;
  }
  cl_use_package(1, v5use);
  {
   cl_object v13;
   v13 = v11imported_from_symbol_names_list;
   goto L43;
L42:;
   {
    cl_object v14item;
    v14item = ecl_car(v13);
    {
     cl_object v15package;
     T0 = ecl_car(v14item);
     v15package = cl_find_package(T0);
     {
      cl_object v16;
      v16 = ecl_cdr(v14item);
      goto L52;
L51:;
      {
       cl_object v17name;
       v17name = ecl_car(v16);
       value0 = L6find_or_make_symbol(v17name, v15package);
       if ((value0)!=ECL_NIL) { goto L59; }
       T0 = ecl_list1(ECL_NIL);
       goto L57;
L59:;
       T0 = value0;
       goto L57;
L57:;
       cl_import(1, T0);
      }
      v16 = ecl_cdr(v16);
L52:;
      if (Null(v16)) { goto L63; }
      goto L51;
L63:;
     }
    }
   }
   v13 = ecl_cdr(v13);
L43:;
   if (Null(v13)) { goto L67; }
   goto L42;
L67:;
  }
  {
   cl_object v13;
   v13 = (ECL_SYM("INTERN",444)->symbol.gfdef);
   {
    cl_object v14;
    cl_object v15;
    v14 = ECL_NIL;
    {
     cl_object v16;
     v16 = v8interned_symbol_names;
     if (ecl_unlikely(!ECL_LISTP(v16))) FEtype_error_list(v16);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v15 = v16;
    }
L75:;
    if (!(ecl_endp(v15))) { goto L77; }
    goto L76;
L77:;
    v14 = _ecl_car(v15);
    {
     cl_object v16;
     v16 = _ecl_cdr(v15);
     if (ecl_unlikely(!ECL_LISTP(v16))) FEtype_error_list(v16);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v15 = v16;
    }
    ecl_function_dispatch(cl_env_copy,v13)(1, v14);
    goto L75;
L76:;
    goto L69;
   }
  }
L69:;
  {
   cl_object v13;
   v13 = (ECL_SYM("INTERN",444)->symbol.gfdef);
   {
    cl_object v14;
    cl_object v15;
    v14 = ECL_NIL;
    {
     cl_object v16;
     v16 = v9exported_symbol_names;
     if (ecl_unlikely(!ECL_LISTP(v16))) FEtype_error_list(v16);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v15 = v16;
    }
    {
     cl_object v16;
     cl_object v17;
     v16 = ecl_list1(ECL_NIL);
     v17 = v16;
L97:;
     if (!(ecl_endp(v15))) { goto L99; }
     goto L98;
L99:;
     v14 = _ecl_car(v15);
     {
      cl_object v18;
      v18 = _ecl_cdr(v15);
      if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v15 = v18;
     }
     {
      cl_object v18;
      v18 = v17;
      if (ecl_unlikely(ECL_ATOM(v18))) FEtype_error_cons(v18);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      T1 = v18;
     }
     T2 = ecl_function_dispatch(cl_env_copy,v13)(1, v14);
     v17 = ecl_list1(T2);
     (ECL_CONS_CDR(T1)=v17,T1);
     goto L97;
L98:;
     T0 = ecl_cdr(v16);
     goto L89;
    }
   }
  }
L89:;
  cl_export(1, T0);
  {
   cl_object v13;
   v13 = v12exported_from_package_names;
   goto L118;
L117:;
   {
    cl_object v14package;
    v14package = ecl_car(v13);
    {
     cl_object v15;
     cl_object v16;
     cl_object v17symbol;
     T0 = cl_find_package(v14package);
     v15 = ecl_function_dispatch(cl_env_copy,VV[21])(3, T0, VV[13], ECL_T) /*  PACKAGES-ITERATOR */;
     v16 = ECL_NIL;
     v17symbol = ECL_NIL;
     goto L128;
L127:;
     value0 = ecl_function_dispatch(cl_env_copy,v15)(0);
     {
      const int v18 = cl_env_copy->nvalues;
      v16 = value0;
      cl_object v19;
      v19 = (v18<=1)? ECL_NIL : cl_env_copy->values[1];
      v17symbol = v19;
     }
     if ((v16)!=ECL_NIL) { goto L132; }
     goto L122;
L132:;
     {
      struct ecl_stack_frame _ecl_inner_frame_aux;
      cl_object _ecl_inner_frame = ecl_stack_frame_open(cl_env_copy,(cl_object)&_ecl_inner_frame_aux,0);
      {
       cl_object v18;
       v18 = _ecl_inner_frame;
       {
        cl_object v19;
        v19 = ECL_SYM("LIST",483);
        T1 = cl_string(v17symbol);
        cl_env_copy->values[0] = cl_find_symbol(1, T1);
        ecl_stack_frame_push_values(v18);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;cl_env_copy->values[0]=ecl_apply_from_stack_frame(v18,v19);
        value0 = cl_env_copy->values[0];
       }
      }
      ecl_stack_frame_close(_ecl_inner_frame);
     }
     T0 = value0;
     if (Null(ecl_cadr(T0))) { goto L134; }
     T0 = cl_string(v17symbol);
     T1 = cl_intern(1, T0);
     T2 = ecl_list1(T1);
     cl_export(1, T2);
L134:;
L128:;
     goto L127;
    }
L122:;
   }
   v13 = ecl_cdr(v13);
L118:;
   if (Null(v13)) { goto L145; }
   goto L117;
L145:;
   ecl_bds_unwind1(cl_env_copy);
  }
  if (Null(v4lock)) { goto L147; }
  ecl_function_dispatch(cl_env_copy,ECL_SYM("LOCK-PACKAGE",1122))(1, v1name) /*  LOCK-PACKAGE */;
L147:;
  value0 = cl_find_package(v1name);
  return value0;
 }
}
/*      function definition for FIND-OR-MAKE-SYMBOL                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L6find_or_make_symbol(cl_object v1name, cl_object v2package)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v4;                                  /*  SYMBOL          */
   cl_object v5;                                  /*  FOUND           */
   value0 = cl_find_symbol(2, v1name, v2package);
   {
    v4 = value0;
    v5 = cl_env_copy->values[1];
   }
   if ((v5)!=ECL_NIL) { goto L2; }
   T0 = cl_list(2, v1name, v2package);
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VV[14], VV[15], T0, ECL_SYM("PACKAGE",1311), v2package);
   v4 = cl_intern(2, v1name, v2package);
L2:;
   value0 = v4;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}

#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/lsp/defpackage.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclFLNC7Zb7_QNCmqq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:LSP;DEFPACKAGE.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclFLNC7Zb7_QNCmqq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  ecl_cmp_defmacro(VV[16]);                       /*  DEFPACKAGE      */
  (void)0; /* No entry created for CHECK-DISJOINT */
  ecl_cmp_defun(VV[19]);                          /*  DODEFPACKAGE    */
  (void)0; /* No entry created for FIND-OR-MAKE-SYMBOL */
}
