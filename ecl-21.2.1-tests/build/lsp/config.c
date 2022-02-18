/*      Compiler: ECL 21.2.1                                          */
/*      Source: BUILD:LSP;CONFIG.LSP                                  */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/lsp/config.eclh"
/*      function definition for SHORT-SITE-NAME                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_short_site_name()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for LONG-SITE-NAME                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_long_site_name()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for LISP-IMPLEMENTATION-VERSION           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_lisp_implementation_version()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = VV[0];
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for LISP-IMPLEMENTATION-VCS-ID            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object si_lisp_implementation_vcs_id()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = VV[1];
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for MACHINE-TYPE                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_machine_type()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = si_getenv(VV[2]);
  if ((value0)!=ECL_NIL) { goto L2; }
  value0 = si_getenv(VV[3]);
  if ((value0)!=ECL_NIL) { goto L2; }
  value0 = VV[4];
  cl_env_copy->nvalues = 1;
  return value0;
L2:;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for MACHINE-INSTANCE                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_machine_instance()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = si_getenv(VV[5]);
  if ((value0)!=ECL_NIL) { goto L2; }
  value0 = si_getenv(VV[6]);
  return value0;
L2:;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for MACHINE-VERSION                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_machine_version()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = si_getenv(VV[7]);
  return value0;
 }
}
/*      function definition for SOFTWARE-TYPE                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_software_type()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = VV[9];
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for SOFTWARE-VERSION                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_software_version()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}

#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/lsp/config.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclhzRMKAb7_QADmqq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("BUILD:LSP;CONFIG.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclhzRMKAb7_QADmqq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  (void)0; /* No entry created for SHORT-SITE-NAME */
  (void)0; /* No entry created for LONG-SITE-NAME */
  (void)0; /* No entry created for LISP-IMPLEMENTATION-VERSION */
  (void)0; /* No entry created for LISP-IMPLEMENTATION-VCS-ID */
  (void)0; /* No entry created for MACHINE-TYPE */
  (void)0; /* No entry created for MACHINE-INSTANCE */
  (void)0; /* No entry created for MACHINE-VERSION */
  cl_set(ECL_SYM("*FEATURES*",36),cl_adjoin(2, VV[8], ecl_symbol_value(ECL_SYM("*FEATURES*",36))));
  (void)0; /* No entry created for SOFTWARE-TYPE */
  (void)0; /* No entry created for SOFTWARE-VERSION */
  si_pathname_translations(2, VVtemp[1], VVtemp[2]);
 {
  cl_object T0, T1, T2;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object v1x;
   v1x = ECL_NIL;
   {
    cl_object v2;
    v1x = si_getenv(VVtemp[3]);
    if (Null(v1x)) { goto L46; }
    v2 = cl_probe_file(v1x);
    goto L44;
L46:;
    v2 = ECL_NIL;
    goto L44;
L44:;
    if (Null(v2)) { goto L49; }
    goto L43;
L49:;
    {
     cl_object v3;
     v1x = si_getenv(VVtemp[4]);
     if (Null(v1x)) { goto L53; }
     v3 = cl_probe_file(v1x);
     goto L51;
L53:;
     v3 = ECL_NIL;
     goto L51;
L51:;
     if (Null(v3)) { goto L56; }
     goto L43;
L56:;
     {
      cl_object v4;
      v1x = si_getenv(VVtemp[5]);
      if (Null(v1x)) { goto L60; }
      v4 = cl_probe_file(v1x);
      goto L58;
L60:;
      v4 = ECL_NIL;
      goto L58;
L58:;
      if (Null(v4)) { goto L63; }
      goto L43;
L63:;
      v1x = VVtemp[6];
     }
    }
   }
L43:;
   T0 = cl_format(3, ECL_NIL, VVtemp[8], v1x);
   T1 = cl_list(2, VVtemp[7], T0);
   T2 = ecl_list1(T1);
   si_pathname_translations(2, VVtemp[5], T2);
  }
 }
 {
  cl_object T0, T1, T2;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object v1path;
   v1path = si_get_library_pathname();
   if (Null(v1path)) { goto L66; }
   T0 = cl_merge_pathnames(2, VVtemp[10], v1path);
   T1 = cl_list(2, VVtemp[7], T0);
   T2 = ecl_list1(T1);
   si_pathname_translations(2, VVtemp[9], T2);
  }
L66:;
  {
   cl_object v2x;
   v2x = si_getenv(VVtemp[11]);
   if (Null(v2x)) { goto L74; }
   v2x = cl_probe_file(v2x);
   if ((v2x)!=ECL_NIL) { goto L71; }
   goto L72;
L74:;
   goto L72;
L72:;
   v2x = VVtemp[12];
L71:;
   if (Null(v2x)) { goto L78; }
   T0 = cl_merge_pathnames(2, VVtemp[10], v2x);
   T1 = cl_list(2, VVtemp[7], T0);
   T2 = ecl_list1(T1);
   si_pathname_translations(2, VVtemp[13], T2);
L78:;
   {
    cl_object v3path;
    v3path = cl_merge_pathnames(2, VVtemp[14], v2x);
    if (Null(v3path)) { goto L69; }
    T0 = cl_merge_pathnames(2, VVtemp[10], v3path);
    T1 = cl_list(2, VVtemp[7], T0);
    T2 = ecl_list1(T1);
    si_pathname_translations(2, VVtemp[15], T2);
   }
  }
L69:;
 }
}
