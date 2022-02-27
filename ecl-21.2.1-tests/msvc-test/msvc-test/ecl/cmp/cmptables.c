/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CMP;CMPTABLES.LSP                                 */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/build/cmp/cmptables.eclh"
/*      function definition for MAKE-DISPATCH-TABLE                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L1make_dispatch_table(cl_object v1alist)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2hash;
   {
    cl_fixnum v3;
    v3 = ecl_length(v1alist);
    T0 = ecl_times(ecl_make_fixnum(2),ecl_make_fixnum(v3));
    T1 = ((ecl_float_nan_p(T0) || ecl_greatereq(ecl_make_fixnum(128),T0))?ecl_make_fixnum(128):T0);
    T2 = (ECL_SYM("EQ",335)->symbol.gfdef);
    v2hash = cl_make_hash_table(4, ECL_SYM("SIZE",1335), T1, ECL_SYM("TEST",1343), T2);
   }
   {
    cl_object v3name;
    cl_object v4function;
    cl_object v5;
    v3name = ECL_NIL;
    v4function = ECL_NIL;
    {
     cl_object v6;
     v6 = v1alist;
     if (ecl_unlikely(!ECL_LISTP(v6))) FEtype_error_list(v6);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v5 = v6;
    }
L8:;
    if (!(ecl_endp(v5))) { goto L10; }
    goto L9;
L10:;
    {
     cl_object v6;
     v6 = _ecl_car(v5);
     v3name = ecl_car(v6);
     v6 = ecl_cdr(v6);
     v4function = v6;
    }
    {
     cl_object v6;
     v6 = _ecl_cdr(v5);
     if (ecl_unlikely(!ECL_LISTP(v6))) FEtype_error_list(v6);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v5 = v6;
    }
    si_hash_set(v3name, v2hash, v4function);
    goto L8;
L9:;
    value0 = v2hash;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}

#include "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/build/cmp/cmptables.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _ecltGFp9Da7_wVnZTr51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CMP;CMPTABLES.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_ecltGFp9Da7_wVnZTr51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  T0 = cl_make_hash_table(8, ECL_SYM("SIZE",1335), ecl_make_fixnum(128), ECL_SYM("REHASH-SIZE",1324), _ecl_static_0, ECL_SYM("REHASH-THRESHOLD",1325), _ecl_static_1, ECL_SYM("TEST",1343), ECL_SYM("EQ",335));
  VVtemp[1]= si_hash_table_fill(T0, VVtemp[2]);
  si_Xmake_constant(VV[0], VVtemp[1]);
 }
  si_Xmake_constant(VV[1], VVtemp[3]);
  si_Xmake_constant(VV[2], VVtemp[4]);
  si_Xmake_constant(VV[3], VVtemp[5]);
  si_Xmake_constant(VV[4], VVtemp[6]);
  si_Xmake_constant(VV[5], VVtemp[7]);
  si_Xmake_constant(VV[6], VVtemp[8]);
  si_Xmake_constant(VV[7], VVtemp[9]);
  ecl_cmp_defun(VV[18]);                          /*  MAKE-DISPATCH-TABLE */
  si_Xmake_special(VV[9]);
  cl_set(VV[9],L1make_dispatch_table(ecl_symbol_value(VV[1])));
  si_Xmake_special(VV[10]);
  cl_set(VV[10],L1make_dispatch_table(ecl_symbol_value(VV[2])));
  si_Xmake_special(VV[11]);
  cl_set(VV[11],L1make_dispatch_table(ecl_symbol_value(VV[5])));
  si_Xmake_special(VV[12]);
  cl_set(VV[12],L1make_dispatch_table(ecl_symbol_value(VV[3])));
  si_Xmake_special(VV[13]);
  cl_set(VV[13],L1make_dispatch_table(ecl_symbol_value(VV[4])));
  si_Xmake_special(VV[14]);
  cl_set(VV[14],L1make_dispatch_table(ecl_symbol_value(VV[6])));
  si_Xmake_special(VV[15]);
  cl_set(VV[15],L1make_dispatch_table(ecl_symbol_value(VV[7])));
  si_Xmake_special(VV[16]);
  cl_set(VV[16],L1make_dispatch_table(ECL_NIL));
  si_Xmake_special(VV[17]);
  cl_set(VV[17],L1make_dispatch_table(ECL_NIL));
}
