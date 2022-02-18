/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CMP;CMPTAG.LSP                                    */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/cmp/cmptag.eclh"
/*      function definition for ADD-LOOP-REGISTERS                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L3add_loop_registers(cl_object v1tagbody)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2v;
   cl_object v3end;
   cl_object v4first;
   v2v = v1tagbody;
   v3end = ECL_NIL;
   v4first = ECL_NIL;
   goto L6;
L5:;
   T0 = ecl_car(v2v);
   if (Null(ecl_function_dispatch(cl_env_copy,VV[47])(1, T0) /*  TAG-P */)) { goto L8; }
   if ((v4first)!=ECL_NIL) { goto L10; }
   v4first = v2v;
L10:;
   {
    cl_object v5;
    cl_object v6;
    cl_object v7w;
    v5 = ecl_cdr(v2v);
    T0 = ecl_car(v2v);
    v6 = ecl_function_dispatch(cl_env_copy,VV[48])(1, T0) /*  TAG-NAME */;
    v7w = v5;
    goto L18;
L17:;
    T0 = ecl_car(v7w);
    if (Null(LC2jumps_to_p(T0, v6))) { goto L20; }
    v3end = v7w;
L20:;
    v7w = ecl_cdr(v7w);
L18:;
    if (v7w==ECL_NIL) { goto L25; }
    goto L17;
L25:;
   }
L8:;
   v2v = ecl_cdr(v2v);
L6:;
   if (v2v==ECL_NIL) { goto L29; }
   goto L5;
L29:;
   {
    cl_object v5ww;
    v5ww = v4first;
    goto L34;
L33:;
    T0 = ecl_car(v5ww);
    LC1add_reg1(T0);
    v5ww = ecl_cdr(v5ww);
L34:;
    if ((v5ww)==(v3end)) { goto L39; }
    goto L33;
L39:;
    T0 = ecl_car(v5ww);
    value0 = LC1add_reg1(T0);
    return value0;
   }
  }
 }
}
/*      local function JUMPS-TO-P                                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC2jumps_to_p(cl_object v1clause, cl_object v2tag_name)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(ecl_function_dispatch(cl_env_copy,VV[49])(1, v1clause) /*  C1FORM-P */)) { goto L1; }
  T0 = ecl_function_dispatch(cl_env_copy,VV[50])(1, v1clause) /*  C1FORM-NAME */;
  if (!((T0)==(ECL_SYM("GO",416)))) { goto L4; }
  T0 = ecl_function_dispatch(cl_env_copy,VV[51])(1, v1clause) /*  C1FORM-ARGS */;
  T1 = ecl_car(T0);
  T2 = ecl_function_dispatch(cl_env_copy,VV[48])(1, T1) /*  TAG-NAME  */;
  value0 = ecl_make_bool((T2)==(v2tag_name));
  cl_env_copy->nvalues = 1;
  return value0;
L4:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  if (!(ECL_ATOM(v1clause))) { goto L6; }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L6:;
  T0 = ecl_car(v1clause);
  value0 = LC2jumps_to_p(T0, v2tag_name);
  if ((value0)!=ECL_NIL) { goto L9; }
  v1clause = ecl_cdr(v1clause);
  goto TTL;
L9:;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function ADD-REG1                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC1add_reg1(cl_object v1form)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(ecl_function_dispatch(cl_env_copy,VV[49])(1, v1form) /*  C1FORM-P */)) { goto L1; }
  {
   cl_object v2;
   v2 = ecl_function_dispatch(cl_env_copy,VV[51])(1, v1form) /*  C1FORM-ARGS */;
   goto L6;
L5:;
   {
    cl_object v3v;
    v3v = ecl_car(v2);
    LC1add_reg1(v3v);
   }
   v2 = ecl_cdr(v2);
L6:;
   if (Null(v2)) { goto L13; }
   goto L5;
L13:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
L1:;
  if (!(ECL_CONSP(v1form))) { goto L15; }
  {
   cl_object v3;
   v3 = v1form;
   goto L20;
L19:;
   {
    cl_object v4v;
    v4v = ecl_car(v3);
    LC1add_reg1(v4v);
   }
   v3 = ecl_cdr(v3);
L20:;
   if (Null(v3)) { goto L27; }
   goto L19;
L27:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
L15:;
  if (Null(ecl_function_dispatch(cl_env_copy,VV[52])(1, v1form) /*  VAR-P */)) { goto L29; }
  value0 = ecl_structure_set(v1form,VV[1],1,ecl_make_fixnum(536870911));
  cl_env_copy->nvalues = 1;
  return value0;
L29:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for C1TAGBODY                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L4c1tagbody(cl_object v1orig_body)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2tag_var;
   cl_object v3tag_index;
   cl_object v4body;
   T0 = ecl_function_dispatch(cl_env_copy,VV[54])(0) /*  CMP-ENV-COPY */;
   ecl_bds_bind(cl_env_copy,VV[3],T0);            /*  *CMP-ENV*       */
   v2tag_var = ecl_function_dispatch(cl_env_copy,VV[55])(4, ECL_SYM("NAME",1300), ECL_SYM("TAGBODY",852), VV[4], ECL_NIL) /*  MAKE-VAR */;
   v3tag_index = ecl_make_fixnum(0);
   v4body = ECL_NIL;
   {
    cl_object v5x;
    cl_object v6;
    v5x = ECL_NIL;
    {
     cl_object v7;
     v7 = v1orig_body;
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
L12:;
     if (!(ecl_endp(v6))) { goto L14; }
     goto L13;
L14:;
     v5x = _ecl_car(v6);
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
     if (!(ECL_CONSP(v5x))) { goto L28; }
     T1 = v5x;
     goto L27;
L28:;
     {
      cl_object v9tag;
      v9tag = ecl_function_dispatch(cl_env_copy,VV[56])(6, ECL_SYM("NAME",1300), v5x, VV[5], v2tag_var, VV[6], v3tag_index) /*  MAKE-TAG */;
      T2 = ecl_function_dispatch(cl_env_copy,VV[48])(1, v9tag) /*  TAG-NAME */;
      ecl_function_dispatch(cl_env_copy,VV[57])(2, T2, v9tag) /*  CMP-ENV-REGISTER-TAG */;
      v3tag_index = ecl_plus(v3tag_index,ecl_make_fixnum(1));
      T1 = v9tag;
     }
L27:;
     v8 = ecl_list1(T1);
     (ECL_CONS_CDR(T0)=v8,T0);
     goto L12;
L13:;
     v4body = ecl_cdr(v7);
     goto L5;
    }
   }
L5:;
   {
    cl_object v5;
    cl_object v6form;
    cl_object v7;
    v5 = v4body;
    v6form = ECL_NIL;
    {
     cl_object v8;
     v8 = v5;
     if (ecl_unlikely(!ECL_LISTP(v8))) FEtype_error_list(v8);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v7 = v8;
    }
    {
     cl_object v8output;
     v8output = ECL_NIL;
     {
      cl_object v9tag_body;
      v9tag_body = ECL_NIL;
      {
       cl_object v10this_tag;
       v10this_tag = ecl_function_dispatch(cl_env_copy,VV[55])(4, ECL_SYM("NAME",1300), VV[7], VV[4], ECL_NIL) /*  MAKE-VAR */;
L45:;
       if (!(ecl_endp(v7))) { goto L47; }
       goto L46;
L47:;
       v6form = _ecl_car(v7);
       {
        cl_object v11;
        v11 = _ecl_cdr(v7);
        if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v7 = v11;
       }
       if (Null(ecl_function_dispatch(cl_env_copy,VV[47])(1, v6form) /*  TAG-P */)) { goto L56; }
       if (Null(v9tag_body)) { goto L58; }
       T0 = cl_nreconc(v9tag_body, VV[8]);
       T1 = ecl_function_dispatch(cl_env_copy,VV[58])(1, T0) /*  C1PROGN */;
       v8output = CONS(T1,v8output);
       v9tag_body = ECL_NIL;
L58:;
       v8output = CONS(v6form,v8output);
       goto L55;
L56:;
       v9tag_body = CONS(v6form,v9tag_body);
L55:;
       goto L45;
L46:;
       if (Null(v9tag_body)) { goto L68; }
       T0 = cl_nreconc(v9tag_body, VV[8]);
       T1 = ecl_function_dispatch(cl_env_copy,VV[58])(1, T0) /*  C1PROGN */;
       v4body = CONS(T1,v8output);
       goto L67;
L68:;
       v4body = v8output;
L67:;
      }
     }
    }
   }
   {
    cl_object v5;
    cl_object v6form;
    cl_object v7;
    v5 = v4body;
    v6form = ECL_NIL;
    {
     cl_object v8;
     v8 = v5;
     if (ecl_unlikely(!ECL_LISTP(v8))) FEtype_error_list(v8);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v7 = v8;
    }
    {
     cl_object v8output;
     v8output = ECL_NIL;
L77:;
     if (!(ecl_endp(v7))) { goto L79; }
     goto L78;
L79:;
     v6form = _ecl_car(v7);
     {
      cl_object v9;
      v9 = _ecl_cdr(v7);
      if (ecl_unlikely(!ECL_LISTP(v9))) FEtype_error_list(v9);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v7 = v9;
     }
     if (Null(ecl_function_dispatch(cl_env_copy,VV[47])(1, v6form) /*  TAG-P */)) { goto L89; }
     T0 = ecl_function_dispatch(cl_env_copy,VV[59])(1, v6form) /*  TAG-REF */;
     if (!(ecl_plusp(T0))) { goto L87; }
     goto L88;
L89:;
L88:;
     v8output = CONS(v6form,v8output);
L87:;
     goto L77;
L78:;
     v4body = v8output;
    }
   }
   if (!(v4body==ECL_NIL)) { goto L95; }
   value0 = ecl_function_dispatch(cl_env_copy,VV[58])(1, ECL_NIL) /*  C1PROGN */;
   ecl_bds_unwind1(cl_env_copy);
   return value0;
L95:;
   T0 = ecl_last(v4body,1);
   T1 = ecl_car(T0);
   if (Null(ecl_function_dispatch(cl_env_copy,VV[47])(1, T1) /*  TAG-P */)) { goto L97; }
   T0 = ecl_function_dispatch(cl_env_copy,VV[60])(1, ECL_NIL) /*  C1EXPR */;
   T1 = ecl_list1(T0);
   v4body = ecl_nconc(v4body,T1);
L97:;
   T0 = ecl_function_dispatch(cl_env_copy,VV[61])(1, v2tag_var) /*  VAR-REF */;
   if (!(ecl_zerop(T0))) { goto L100; }
   T0 = ecl_fdefinition(VV[47]);
   T1 = cl_delete_if(2, T0, v4body);
   value0 = ecl_function_dispatch(cl_env_copy,VV[62])(3, ECL_SYM("PROGN",673), VV[9], T1) /*  MAKE-C1FORM* */;
   ecl_bds_unwind1(cl_env_copy);
   return value0;
L100:;
   if (Null(ecl_function_dispatch(cl_env_copy,VV[63])(1, v2tag_var) /*  VAR-REF-CCB */)) { goto L103; }
   cl_set(VV[10],ecl_plus(ecl_symbol_value(VV[10]),ecl_make_fixnum(1)));
L103:;
   L3add_loop_registers(v4body);
   T0 = ecl_list1(v2tag_var);
   value0 = ecl_function_dispatch(cl_env_copy,VV[62])(6, ECL_SYM("TAGBODY",852), VV[11], T0, VV[9], v2tag_var, v4body) /*  MAKE-C1FORM* */;
   ecl_bds_unwind1(cl_env_copy);
   return value0;
  }
 }
}
/*      function definition for C2TAGBODY                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L5c2tagbody(cl_object v1c1form, cl_object v2tag_loc, cl_object v3body)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,VV[65])(1, v2tag_loc) /*  VAR-KIND */;
  if (!(T0==ECL_NIL)) { goto L1; }
  {
   cl_object v4;
   v4 = v3body;
   goto L6;
L5:;
   {
    cl_object v5x;
    v5x = ecl_car(v4);
    if (Null(ecl_function_dispatch(cl_env_copy,VV[47])(1, v5x) /*  TAG-P */)) { goto L10; }
    T0 = ecl_function_dispatch(cl_env_copy,VV[59])(1, v5x) /*  TAG-REF */;
    if (!(ecl_plusp(T0))) { goto L10; }
    {
     cl_object v6;
     v6 = ecl_function_dispatch(cl_env_copy,VV[66])(0) /*  NEXT-LABEL* */;
     ecl_structure_set(v5x,VV[13],5,v6);
    }
    {
     cl_object v6;
     v6 = ecl_symbol_value(VV[14]);
     ecl_structure_set(v5x,VV[13],6,v6);
    }
L10:;
   }
   v4 = ecl_cdr(v4);
L6:;
   if (Null(v4)) { goto L18; }
   goto L5;
L18:;
   value0 = L6c2tagbody_body(v3body);
   return value0;
  }
L1:;
  {
   cl_object v5;
   cl_object v6;
   cl_object v7;
   cl_object v8;
   cl_object v9;
   cl_object v10;
   v5 = CONS(VV[15],ecl_symbol_value(VV[14]));
   v6 = ecl_symbol_value(VV[16]);
   v7 = ecl_symbol_value(VV[17]);
   v8 = ecl_symbol_value(VV[18]);
   v9 = ecl_symbol_value(VV[19]);
   T0 = ecl_function_dispatch(cl_env_copy,VV[63])(1, v2tag_loc) /*  VAR-REF-CCB */;
   v10 = ecl_function_dispatch(cl_env_copy,VV[67])(1, T0) /*  ENV-GROWS */;
   ecl_bds_bind(cl_env_copy,VV[14],v5);           /*  *UNWIND-EXIT*   */
   ecl_bds_bind(cl_env_copy,VV[16],v6);           /*  *ENV*           */
   ecl_bds_bind(cl_env_copy,VV[17],v7);           /*  *ENV-LVL*       */
   ecl_bds_bind(cl_env_copy,VV[18],v8);           /*  *LEX*           */
   ecl_bds_bind(cl_env_copy,VV[19],v9);           /*  *LCL*           */
   ecl_bds_bind(cl_env_copy,VV[20],ecl_make_fixnum(0)); /*  *INLINE-BLOCKS* */
   if (Null(v10)) { goto L26; }
   {
    cl_object v11env_lvl;
    v11env_lvl = ecl_symbol_value(VV[17]);
    ecl_function_dispatch(cl_env_copy,VV[68])(0)  /*  MAYBE-OPEN-INLINE-BLOCK */;
    cl_set(VV[17],ecl_plus(ecl_symbol_value(VV[17]),ecl_make_fixnum(1)));
    T0 = ecl_symbol_value(VV[17]);
    ecl_function_dispatch(cl_env_copy,VV[69])(5, VV[21], T0, VV[22], v11env_lvl, VV[23]) /*  WT-NL */;
   }
L26:;
   T0 = ecl_function_dispatch(cl_env_copy,VV[65])(1, v2tag_loc) /*  VAR-KIND */;
   if (!((ECL_SYM("OBJECT",1305))==(T0))) { goto L32; }
   {
    cl_object v11;
    v11 = ecl_function_dispatch(cl_env_copy,VV[70])(0) /*  NEXT-LCL   */;
    ecl_structure_set(v2tag_loc,VV[1],10,v11);
   }
   ecl_function_dispatch(cl_env_copy,VV[68])(0)   /*  MAYBE-OPEN-INLINE-BLOCK */;
   ecl_function_dispatch(cl_env_copy,VV[69])(3, VV[24], v2tag_loc, VV[23]) /*  WT-NL */;
L32:;
   ecl_function_dispatch(cl_env_copy,VV[71])(2, VV[25], v2tag_loc) /*  BIND */;
   ecl_function_dispatch(cl_env_copy,VV[72])(0)   /*  WT-NL-OPEN-BRACE */;
   ecl_function_dispatch(cl_env_copy,VV[69])(3, VV[26], v2tag_loc, VV[27]) /*  WT-NL */;
   ecl_function_dispatch(cl_env_copy,VV[69])(1, VV[28]) /*  WT-NL     */;
   {
    cl_object v11;
    v11 = v3body;
    goto L45;
L44:;
    {
     cl_object v12tag;
     v12tag = ecl_car(v11);
     if (Null(ecl_function_dispatch(cl_env_copy,VV[47])(1, v12tag) /*  TAG-P */)) { goto L49; }
     T0 = ecl_function_dispatch(cl_env_copy,VV[59])(1, v12tag) /*  TAG-REF */;
     if (!(ecl_plusp(T0))) { goto L49; }
     {
      cl_object v13;
      v13 = ecl_function_dispatch(cl_env_copy,VV[73])(0) /*  NEXT-LABEL */;
      ecl_structure_set(v12tag,VV[13],5,v13);
     }
     {
      cl_object v13;
      v13 = ecl_symbol_value(VV[14]);
      ecl_structure_set(v12tag,VV[13],6,v13);
     }
     T0 = ecl_function_dispatch(cl_env_copy,VV[74])(1, v12tag) /*  TAG-INDEX */;
     ecl_function_dispatch(cl_env_copy,VV[69])(3, VV[29], T0, VV[30]) /*  WT-NL */;
     T0 = ecl_function_dispatch(cl_env_copy,VV[75])(1, v12tag) /*  TAG-LABEL */;
     ecl_function_dispatch(cl_env_copy,VV[76])(1, T0) /*  WT-GO       */;
L49:;
    }
    v11 = ecl_cdr(v11);
L45:;
    if (Null(v11)) { goto L59; }
    goto L44;
L59:;
   }
   if (Null(ecl_function_dispatch(cl_env_copy,VV[63])(1, v2tag_loc) /*  VAR-REF-CCB */)) { goto L61; }
   ecl_function_dispatch(cl_env_copy,VV[69])(1, VV[31]) /*  WT-NL     */;
L61:;
   ecl_function_dispatch(cl_env_copy,VV[69])(1, VV[32]) /*  WT-NL     */;
   ecl_function_dispatch(cl_env_copy,VV[77])(0)   /*  WT-NL-CLOSE-BRACE */;
   L6c2tagbody_body(v3body);
   value0 = ecl_function_dispatch(cl_env_copy,VV[78])(0) /*  CLOSE-INLINE-BLOCKS */;
   ecl_bds_unwind_n(cl_env_copy,6);
   return value0;
  }
 }
}
/*      function definition for C2TAGBODY-BODY                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L6c2tagbody_body(cl_object v1body)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2l;
   v2l = v1body;
   goto L4;
L3:;
   {
    cl_object v3this_form;
    v3this_form = ecl_car(v2l);
    if (Null(ecl_function_dispatch(cl_env_copy,VV[47])(1, v3this_form) /*  TAG-P */)) { goto L8; }
    T0 = ecl_function_dispatch(cl_env_copy,VV[75])(1, v3this_form) /*  TAG-LABEL */;
    ecl_function_dispatch(cl_env_copy,VV[80])(1, T0) /*  WT-LABEL     */;
    goto L6;
L8:;
    T0 = ecl_cdr(v2l);
    if (!(ecl_endp(T0))) { goto L10; }
    ecl_function_dispatch(cl_env_copy,VV[81])(1, v3this_form) /*  C2EXPR */;
    goto L6;
L10:;
    {
     cl_object v4next_form;
     v4next_form = ecl_cadr(v2l);
     if (Null(ecl_function_dispatch(cl_env_copy,VV[47])(1, v4next_form) /*  TAG-P */)) { goto L14; }
     T0 = ecl_function_dispatch(cl_env_copy,VV[75])(1, v4next_form) /*  TAG-LABEL */;
     goto L13;
L14:;
     T0 = ecl_function_dispatch(cl_env_copy,VV[73])(0) /*  NEXT-LABEL */;
L13:;
     ecl_bds_bind(cl_env_copy,VV[34],T0);         /*  *EXIT*          */
     T0 = CONS(ecl_symbol_value(VV[34]),ecl_symbol_value(VV[14]));
     ecl_bds_bind(cl_env_copy,VV[14],T0);         /*  *UNWIND-EXIT*   */
     ecl_bds_bind(cl_env_copy,VV[35],VV[36]);     /*  *DESTINATION*   */
     ecl_function_dispatch(cl_env_copy,VV[81])(1, v3this_form) /*  C2EXPR */;
     if ((ecl_function_dispatch(cl_env_copy,VV[47])(1, v4next_form) /*  TAG-P */)!=ECL_NIL) {
     ecl_bds_unwind1(cl_env_copy);
     ecl_bds_unwind1(cl_env_copy);
     ecl_bds_unwind1(cl_env_copy);
      goto L6;
     }
     ecl_function_dispatch(cl_env_copy,VV[80])(1, ecl_symbol_value(VV[34])) /*  WT-LABEL */;
     ecl_bds_unwind1(cl_env_copy);
     ecl_bds_unwind1(cl_env_copy);
     ecl_bds_unwind1(cl_env_copy);
    }
   }
L6:;
   v2l = ecl_cdr(v2l);
L4:;
   if (v2l==ECL_NIL) { goto L20; }
   goto L3;
L20:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for C1GO                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L7c1go(cl_object v1args)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  ecl_function_dispatch(cl_env_copy,VV[83])(4, ECL_SYM("GO",416), v1args, ecl_make_fixnum(1), ecl_make_fixnum(1)) /*  CHECK-ARGS-NUMBER */;
  {
   cl_object v2name;
   v2name = ecl_car(v1args);
   if (ECL_SYMBOLP(v2name)) { goto L3; }
   if (ECL_FIXNUMP(v2name)||ECL_BIGNUMP(v2name)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[84])(2, VV[38], v2name) /*  CMPERR */;
L3:;
   {
    cl_object v4;                                 /*  TAG             */
    cl_object v5;                                 /*  CFB             */
    cl_object v6;                                 /*  UNW             */
    value0 = ecl_function_dispatch(cl_env_copy,VV[85])(1, v2name) /*  CMP-ENV-SEARCH-TAG */;
    {
     const int v7 = cl_env_copy->nvalues;
     v4 = value0;
     cl_object v8;
     v8 = (v7<=1)? ECL_NIL : cl_env_copy->values[1];
     v5 = v8;
     v8 = (v7<=2)? ECL_NIL : cl_env_copy->values[2];
     v6 = v8;
    }
    if ((v4)!=ECL_NIL) { goto L7; }
    ecl_function_dispatch(cl_env_copy,VV[84])(2, VV[39], v2name) /*  CMPERR */;
L7:;
    {
     cl_object v7var;
     v7var = ecl_function_dispatch(cl_env_copy,VV[86])(1, v4) /*  TAG-VAR */;
     if (Null(v5)) { goto L11; }
     ecl_structure_set(v7var,VV[1],3,ECL_T);
     ecl_structure_set(v7var,VV[1],6,VV[40]);
     goto L10;
L11:;
     if (Null(v6)) { goto L10; }
     if ((ecl_function_dispatch(cl_env_copy,VV[65])(1, v7var) /*  VAR-KIND */)!=ECL_NIL) { goto L10; }
     ecl_structure_set(v7var,VV[1],6,ECL_SYM("OBJECT",1305));
L10:;
     {
      cl_object v8;
      T0 = ecl_function_dispatch(cl_env_copy,VV[59])(1, v4) /*  TAG-REF */;
      v8 = ecl_plus(T0,ecl_make_fixnum(1));
      ecl_structure_set(v4,VV[13],1,v8);
     }
     value0 = v5;
     if ((value0)!=ECL_NIL) { goto L20; }
     T0 = v6;
     goto L18;
L20:;
     T0 = value0;
     goto L18;
L18:;
     T1 = ecl_function_dispatch(cl_env_copy,VV[62])(4, ECL_SYM("GO",416), VV[9], v4, T0) /*  MAKE-C1FORM* */;
     value0 = ecl_function_dispatch(cl_env_copy,VV[87])(2, v7var, T1) /*  ADD-TO-READ-NODES */;
     return value0;
    }
   }
  }
 }
}
/*      function definition for C2GO                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L8c2go(cl_object v1c1form, cl_object v2tag, cl_object v3nonlocal)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(v3nonlocal)) { goto L1; }
  {
   cl_object v4var;
   v4var = ecl_function_dispatch(cl_env_copy,VV[86])(1, v2tag) /*  TAG-VAR */;
   T0 = ecl_function_dispatch(cl_env_copy,VV[74])(1, v2tag) /*  TAG-INDEX */;
   value0 = ecl_function_dispatch(cl_env_copy,VV[69])(5, VV[42], v4var, VV[43], T0, VV[44]) /*  WT-NL */;
   return value0;
  }
L1:;
  T0 = ecl_function_dispatch(cl_env_copy,VV[89])(1, v2tag) /*  TAG-UNWIND-EXIT */;
  ecl_function_dispatch(cl_env_copy,VV[90])(1, T0) /*  UNWIND-NO-EXIT-UNTIL */;
  ecl_function_dispatch(cl_env_copy,VV[69])(0)    /*  WT-NL           */;
  T0 = ecl_function_dispatch(cl_env_copy,VV[75])(1, v2tag) /*  TAG-LABEL */;
  value0 = ecl_function_dispatch(cl_env_copy,VV[76])(1, T0) /*  WT-GO */;
  return value0;
 }
}

#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/cmp/cmptag.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclbs6kC1a7_mlTmqq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CMP;CMPTAG.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclbs6kC1a7_mlTmqq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  si_Xmake_special(VV[0]);
  if (ecl_boundp(cl_env_copy,VV[0])) { goto L3; }
  cl_set(VV[0],ecl_make_fixnum(60));
L3:;
  ecl_cmp_defun(VV[46]);                          /*  ADD-LOOP-REGISTERS */
  ecl_cmp_defun(VV[53]);                          /*  C1TAGBODY       */
  ecl_cmp_defun(VV[64]);                          /*  C2TAGBODY       */
  ecl_cmp_defun(VV[79]);                          /*  C2TAGBODY-BODY  */
  ecl_cmp_defun(VV[82]);                          /*  C1GO            */
  ecl_cmp_defun(VV[88]);                          /*  C2GO            */
}
