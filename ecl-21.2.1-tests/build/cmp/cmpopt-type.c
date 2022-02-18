/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CMP;CMPOPT-TYPE.LSP                               */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/cmp/cmpopt-type.eclh"
/*      local function LAMBDA5                                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC1__lambda5(cl_object v1, cl_object v2)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29;
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
   cl_object v6variable;
   cl_object v7limit;
   T0 = ecl_car(v1);
   if (!((T0)==(ECL_SYM("FUNCALL",396)))) { goto L2; }
   T0 = ecl_caadr(v1);
   if (!((T0)==(ECL_SYM("FUNCTION",398)))) { goto L2; }
   v3 = ecl_cddr(v1);
   goto L1;
L2:;
   v3 = ecl_cdr(v1);
L1:;
   if (!(v3==ECL_NIL)) { goto L6; }
   ecl_function_dispatch(cl_env_copy,VV[2])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L6:;
   {
    cl_object v8;
    v8 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4 = v8;
   }
   v5 = v4;
   if (!(v5==ECL_NIL)) { goto L13; }
   ecl_function_dispatch(cl_env_copy,VV[2])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L13:;
   {
    cl_object v8;
    v8 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v6variable = v8;
   }
   if (!(v5==ECL_NIL)) { goto L19; }
   ecl_function_dispatch(cl_env_copy,VV[2])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L19:;
   {
    cl_object v8;
    v8 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v7limit = v8;
   }
   {
    cl_object v9;                                 /*  DECLARATIONS    */
    cl_object v10;                                /*  BODY            */
    value0 = si_process_declarations(2, v3, ECL_NIL);
    {
     const int v11 = cl_env_copy->nvalues;
     v9 = value0;
     cl_object v12;
     v12 = (v11<=1)? ECL_NIL : cl_env_copy->values[1];
     v10 = v12;
    }
    {
     cl_object v11_limit;
     v11_limit = cl_gensym(1, _ecl_static_0);
     T0 = cl_list(2, v11_limit, v7limit);
     T1 = ecl_list1(T0);
     T2 = cl_list(2, VV[0], v11_limit);
     T3 = cl_list(2, ECL_SYM("DECLARE",276), T2);
     T4 = cl_list(2, v6variable, ecl_make_fixnum(0));
     T5 = ecl_list1(T4);
     T6 = cl_list(2, ECL_SYM("FIXNUM",374), v6variable);
     T7 = cl_listX(3, ECL_SYM("DECLARE",276), T6, v9);
     T8 = cl_list(3, ECL_SYM("<",74), v6variable, v11_limit);
     T9 = cl_list(2, ECL_SYM("1+",72), v6variable);
     T10 = cl_list(3, ECL_SYM("SETQ",753), v6variable, T9);
     T11 = cl_list(2, VV[1], T10);
     T12 = ecl_list1(T11);
     T13 = ecl_append(v10,T12);
     T14 = cl_listX(3, ECL_SYM("WHILE",1530), T8, T13);
     T15 = cl_listX(5, ECL_SYM("LET",479), T5, T7, T14, v5);
     T16 = cl_list(2, ECL_SYM("FIXNUM",374), T15);
     T17 = cl_list(2, v6variable, ecl_make_fixnum(0));
     T18 = ecl_list1(T17);
     T19 = CONS(ECL_SYM("DECLARE",276),v9);
     T20 = cl_list(3, ECL_SYM("<",74), v6variable, v11_limit);
     T21 = cl_list(2, ECL_SYM("1+",72), v6variable);
     T22 = cl_list(3, ECL_SYM("SETQ",753), v6variable, T21);
     T23 = ecl_list1(T22);
     T24 = ecl_append(v10,T23);
     T25 = cl_listX(3, ECL_SYM("WHILE",1530), T20, T24);
     T26 = cl_listX(5, ECL_SYM("LET",479), T18, T19, T25, v5);
     T27 = cl_list(2, ECL_T, T26);
     T28 = cl_list(4, ECL_SYM("COMPILER-TYPECASE",1860), v11_limit, T16, T27);
     T29 = cl_list(4, ECL_SYM("LET",479), T1, T3, T28);
     value0 = cl_list(3, ECL_SYM("BLOCK",139), ECL_NIL, T29);
     return value0;
    }
   }
  }
 }
}

#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/cmp/cmpopt-type.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclxQQfqzZ7_aBXmqq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CMP;CMPOPT-TYPE.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclxQQfqzZ7_aBXmqq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC1__lambda5,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_put_sysprop(ECL_SYM("DOTIMES",316), ECL_SYM("COMPILER-MACRO",240), T0);
 }
}
