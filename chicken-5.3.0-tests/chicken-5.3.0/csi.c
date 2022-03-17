/* Generated from csi.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.3.0rc4 ((HEAD detached at 5.3.0rc4)) (rev b6cbb1ba)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: csi.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -no-lambda-info -no-trace -output-file csi.c
   uses: expand data-structures repl posix port pathname eval internal file extras library
*/
#include "chicken.h"

#include <signal.h>

#if defined(HAVE_DIRECT_H)
# include <direct.h>
#else
# define _getcwd(buf, len)       NULL
#endif

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_expand_toplevel)
C_externimport void C_ccall C_expand_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_data_2dstructures_toplevel)
C_externimport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_repl_toplevel)
C_externimport void C_ccall C_repl_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_posix_toplevel)
C_externimport void C_ccall C_posix_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_port_toplevel)
C_externimport void C_ccall C_port_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_pathname_toplevel)
C_externimport void C_ccall C_pathname_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_internal_toplevel)
C_externimport void C_ccall C_internal_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_file_toplevel)
C_externimport void C_ccall C_file_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[404];
static double C_possibly_force_alignment;


/* from k3962 */
C_regparm static C_word C_fcall stub733(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_data_pointer_or_null(C_a0);
int t1=(int )C_unfix(C_a1);
C_r=C_mpointer(&C_a,(void*)_getcwd(t0,t1));
return C_r;}

C_noret_decl(f9390)
static void C_ccall f9390(C_word c,C_word *av) C_noret;
C_noret_decl(f9394)
static void C_ccall f9394(C_word c,C_word *av) C_noret;
C_noret_decl(f9476)
static void C_ccall f9476(C_word c,C_word *av) C_noret;
C_noret_decl(f9517)
static void C_ccall f9517(C_word c,C_word *av) C_noret;
C_noret_decl(f9543)
static void C_ccall f9543(C_word c,C_word *av) C_noret;
C_noret_decl(f9547)
static void C_ccall f9547(C_word c,C_word *av) C_noret;
C_noret_decl(f_2537)
static void C_ccall f_2537(C_word c,C_word *av) C_noret;
C_noret_decl(f_2540)
static void C_ccall f_2540(C_word c,C_word *av) C_noret;
C_noret_decl(f_2543)
static void C_ccall f_2543(C_word c,C_word *av) C_noret;
C_noret_decl(f_2546)
static void C_ccall f_2546(C_word c,C_word *av) C_noret;
C_noret_decl(f_2549)
static void C_ccall f_2549(C_word c,C_word *av) C_noret;
C_noret_decl(f_2552)
static void C_ccall f_2552(C_word c,C_word *av) C_noret;
C_noret_decl(f_2555)
static void C_ccall f_2555(C_word c,C_word *av) C_noret;
C_noret_decl(f_2558)
static void C_ccall f_2558(C_word c,C_word *av) C_noret;
C_noret_decl(f_2561)
static void C_ccall f_2561(C_word c,C_word *av) C_noret;
C_noret_decl(f_2564)
static void C_ccall f_2564(C_word c,C_word *av) C_noret;
C_noret_decl(f_2567)
static void C_ccall f_2567(C_word c,C_word *av) C_noret;
C_noret_decl(f_2570)
static void C_ccall f_2570(C_word c,C_word *av) C_noret;
C_noret_decl(f_3068)
static void C_fcall f_3068(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3095)
static void C_ccall f_3095(C_word c,C_word *av) C_noret;
C_noret_decl(f_3143)
static void C_fcall f_3143(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3157)
static void C_ccall f_3157(C_word c,C_word *av) C_noret;
C_noret_decl(f_3170)
static void C_ccall f_3170(C_word c,C_word *av) C_noret;
C_noret_decl(f_3860)
static void C_ccall f_3860(C_word c,C_word *av) C_noret;
C_noret_decl(f_3865)
static void C_ccall f_3865(C_word c,C_word *av) C_noret;
C_noret_decl(f_3868)
static void C_fcall f_3868(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3874)
static void C_ccall f_3874(C_word c,C_word *av) C_noret;
C_noret_decl(f_3877)
static void C_ccall f_3877(C_word c,C_word *av) C_noret;
C_noret_decl(f_3884)
static void C_ccall f_3884(C_word c,C_word *av) C_noret;
C_noret_decl(f_3908)
static void C_ccall f_3908(C_word c,C_word *av) C_noret;
C_noret_decl(f_3923)
static void C_ccall f_3923(C_word c,C_word *av) C_noret;
C_noret_decl(f_3937)
static void C_ccall f_3937(C_word c,C_word *av) C_noret;
C_noret_decl(f_3950)
static void C_ccall f_3950(C_word c,C_word *av) C_noret;
C_noret_decl(f_3969)
static void C_fcall f_3969(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3976)
static void C_ccall f_3976(C_word c,C_word *av) C_noret;
C_noret_decl(f_3979)
static void C_ccall f_3979(C_word c,C_word *av) C_noret;
C_noret_decl(f_3985)
static void C_ccall f_3985(C_word c,C_word *av) C_noret;
C_noret_decl(f_3998)
static void C_fcall f_3998(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4011)
static void C_ccall f_4011(C_word c,C_word *av) C_noret;
C_noret_decl(f_4020)
static void C_fcall f_4020(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4024)
static void C_ccall f_4024(C_word c,C_word *av) C_noret;
C_noret_decl(f_4036)
static void C_ccall f_4036(C_word c,C_word *av) C_noret;
C_noret_decl(f_4045)
static void C_ccall f_4045(C_word c,C_word *av) C_noret;
C_noret_decl(f_4048)
static void C_ccall f_4048(C_word c,C_word *av) C_noret;
C_noret_decl(f_4055)
static void C_ccall f_4055(C_word c,C_word *av) C_noret;
C_noret_decl(f_4059)
static void C_ccall f_4059(C_word c,C_word *av) C_noret;
C_noret_decl(f_4062)
static void C_ccall f_4062(C_word c,C_word *av) C_noret;
C_noret_decl(f_4068)
static void C_ccall f_4068(C_word c,C_word *av) C_noret;
C_noret_decl(f_4075)
static void C_ccall f_4075(C_word c,C_word *av) C_noret;
C_noret_decl(f_4077)
static void C_fcall f_4077(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4087)
static void C_ccall f_4087(C_word c,C_word *av) C_noret;
C_noret_decl(f_4090)
static void C_ccall f_4090(C_word c,C_word *av) C_noret;
C_noret_decl(f_4104)
static void C_ccall f_4104(C_word c,C_word *av) C_noret;
C_noret_decl(f_4127)
static void C_fcall f_4127(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4137)
static void C_fcall f_4137(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4151)
static void C_ccall f_4151(C_word c,C_word *av) C_noret;
C_noret_decl(f_4182)
static void C_fcall f_4182(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4195)
static void C_ccall f_4195(C_word c,C_word *av) C_noret;
C_noret_decl(f_4198)
static void C_ccall f_4198(C_word c,C_word *av) C_noret;
C_noret_decl(f_4201)
static void C_ccall f_4201(C_word c,C_word *av) C_noret;
C_noret_decl(f_4204)
static void C_ccall f_4204(C_word c,C_word *av) C_noret;
C_noret_decl(f_4207)
static void C_ccall f_4207(C_word c,C_word *av) C_noret;
C_noret_decl(f_4216)
static void C_ccall f_4216(C_word c,C_word *av) C_noret;
C_noret_decl(f_4226)
static void C_fcall f_4226(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4230)
static void C_ccall f_4230(C_word c,C_word *av) C_noret;
C_noret_decl(f_4253)
static void C_ccall f_4253(C_word c,C_word *av) C_noret;
C_noret_decl(f_4270)
static void C_ccall f_4270(C_word c,C_word *av) C_noret;
C_noret_decl(f_4282)
static void C_ccall f_4282(C_word c,C_word *av) C_noret;
C_noret_decl(f_4290)
static void C_ccall f_4290(C_word c,C_word *av) C_noret;
C_noret_decl(f_4293)
static void C_ccall f_4293(C_word c,C_word *av) C_noret;
C_noret_decl(f_4305)
static void C_ccall f_4305(C_word c,C_word *av) C_noret;
C_noret_decl(f_4312)
static void C_ccall f_4312(C_word c,C_word *av) C_noret;
C_noret_decl(f_4318)
static void C_ccall f_4318(C_word c,C_word *av) C_noret;
C_noret_decl(f_4338)
static C_word C_fcall f_4338(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_4368)
static void C_ccall f_4368(C_word c,C_word *av) C_noret;
C_noret_decl(f_4401)
static void C_ccall f_4401(C_word c,C_word *av) C_noret;
C_noret_decl(f_4416)
static void C_ccall f_4416(C_word c,C_word *av) C_noret;
C_noret_decl(f_4419)
static void C_ccall f_4419(C_word c,C_word *av) C_noret;
C_noret_decl(f_4426)
static void C_ccall f_4426(C_word c,C_word *av) C_noret;
C_noret_decl(f_4430)
static void C_ccall f_4430(C_word c,C_word *av) C_noret;
C_noret_decl(f_4439)
static void C_ccall f_4439(C_word c,C_word *av) C_noret;
C_noret_decl(f_4442)
static void C_ccall f_4442(C_word c,C_word *av) C_noret;
C_noret_decl(f_4445)
static void C_ccall f_4445(C_word c,C_word *av) C_noret;
C_noret_decl(f_4457)
static void C_ccall f_4457(C_word c,C_word *av) C_noret;
C_noret_decl(f_4460)
static void C_ccall f_4460(C_word c,C_word *av) C_noret;
C_noret_decl(f_4472)
static void C_ccall f_4472(C_word c,C_word *av) C_noret;
C_noret_decl(f_4475)
static void C_ccall f_4475(C_word c,C_word *av) C_noret;
C_noret_decl(f_4487)
static void C_ccall f_4487(C_word c,C_word *av) C_noret;
C_noret_decl(f_4490)
static void C_ccall f_4490(C_word c,C_word *av) C_noret;
C_noret_decl(f_4493)
static void C_ccall f_4493(C_word c,C_word *av) C_noret;
C_noret_decl(f_4496)
static void C_ccall f_4496(C_word c,C_word *av) C_noret;
C_noret_decl(f_4526)
static void C_ccall f_4526(C_word c,C_word *av) C_noret;
C_noret_decl(f_4529)
static void C_ccall f_4529(C_word c,C_word *av) C_noret;
C_noret_decl(f_4534)
static void C_fcall f_4534(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4544)
static void C_ccall f_4544(C_word c,C_word *av) C_noret;
C_noret_decl(f_4559)
static void C_ccall f_4559(C_word c,C_word *av) C_noret;
C_noret_decl(f_4568)
static void C_ccall f_4568(C_word c,C_word *av) C_noret;
C_noret_decl(f_4569)
static void C_fcall f_4569(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4575)
static void C_ccall f_4575(C_word c,C_word *av) C_noret;
C_noret_decl(f_4579)
static void C_ccall f_4579(C_word c,C_word *av) C_noret;
C_noret_decl(f_4585)
static void C_ccall f_4585(C_word c,C_word *av) C_noret;
C_noret_decl(f_4590)
static void C_fcall f_4590(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4600)
static void C_ccall f_4600(C_word c,C_word *av) C_noret;
C_noret_decl(f_4615)
static void C_ccall f_4615(C_word c,C_word *av) C_noret;
C_noret_decl(f_4624)
static void C_ccall f_4624(C_word c,C_word *av) C_noret;
C_noret_decl(f_4629)
static void C_ccall f_4629(C_word c,C_word *av) C_noret;
C_noret_decl(f_4633)
static void C_ccall f_4633(C_word c,C_word *av) C_noret;
C_noret_decl(f_4638)
static void C_ccall f_4638(C_word c,C_word *av) C_noret;
C_noret_decl(f_4644)
static void C_ccall f_4644(C_word c,C_word *av) C_noret;
C_noret_decl(f_4648)
static void C_ccall f_4648(C_word c,C_word *av) C_noret;
C_noret_decl(f_4655)
static void C_ccall f_4655(C_word c,C_word *av) C_noret;
C_noret_decl(f_4657)
static void C_ccall f_4657(C_word c,C_word *av) C_noret;
C_noret_decl(f_4661)
static void C_ccall f_4661(C_word c,C_word *av) C_noret;
C_noret_decl(f_4676)
static void C_ccall f_4676(C_word c,C_word *av) C_noret;
C_noret_decl(f_4692)
static void C_ccall f_4692(C_word c,C_word *av) C_noret;
C_noret_decl(f_4710)
static void C_ccall f_4710(C_word c,C_word *av) C_noret;
C_noret_decl(f_4714)
static void C_ccall f_4714(C_word c,C_word *av) C_noret;
C_noret_decl(f_4730)
static void C_ccall f_4730(C_word c,C_word *av) C_noret;
C_noret_decl(f_4742)
static void C_ccall f_4742(C_word c,C_word *av) C_noret;
C_noret_decl(f_4754)
static void C_ccall f_4754(C_word c,C_word *av) C_noret;
C_noret_decl(f_4766)
static void C_ccall f_4766(C_word c,C_word *av) C_noret;
C_noret_decl(f_4773)
static void C_ccall f_4773(C_word c,C_word *av) C_noret;
C_noret_decl(f_4786)
static void C_ccall f_4786(C_word c,C_word *av) C_noret;
C_noret_decl(f_4795)
static void C_ccall f_4795(C_word c,C_word *av) C_noret;
C_noret_decl(f_4798)
static void C_ccall f_4798(C_word c,C_word *av) C_noret;
C_noret_decl(f_4801)
static void C_ccall f_4801(C_word c,C_word *av) C_noret;
C_noret_decl(f_4814)
static void C_ccall f_4814(C_word c,C_word *av) C_noret;
C_noret_decl(f_4836)
static void C_ccall f_4836(C_word c,C_word *av) C_noret;
C_noret_decl(f_4841)
static void C_fcall f_4841(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4851)
static void C_ccall f_4851(C_word c,C_word *av) C_noret;
C_noret_decl(f_4865)
static void C_ccall f_4865(C_word c,C_word *av) C_noret;
C_noret_decl(f_4911)
static void C_ccall f_4911(C_word c,C_word *av) C_noret;
C_noret_decl(f_4917)
static void C_ccall f_4917(C_word c,C_word *av) C_noret;
C_noret_decl(f_4921)
static void C_ccall f_4921(C_word c,C_word *av) C_noret;
C_noret_decl(f_4937)
static void C_ccall f_4937(C_word c,C_word *av) C_noret;
C_noret_decl(f_4943)
static void C_ccall f_4943(C_word c,C_word *av) C_noret;
C_noret_decl(f_4957)
static void C_ccall f_4957(C_word c,C_word *av) C_noret;
C_noret_decl(f_4960)
static void C_ccall f_4960(C_word c,C_word *av) C_noret;
C_noret_decl(f_4966)
static void C_ccall f_4966(C_word c,C_word *av) C_noret;
C_noret_decl(f_4969)
static void C_ccall f_4969(C_word c,C_word *av) C_noret;
C_noret_decl(f_4977)
static void C_fcall f_4977(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4987)
static void C_fcall f_4987(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5002)
static void C_ccall f_5002(C_word c,C_word *av) C_noret;
C_noret_decl(f_5011)
static void C_ccall f_5011(C_word c,C_word *av) C_noret;
C_noret_decl(f_5017)
static void C_ccall f_5017(C_word c,C_word *av) C_noret;
C_noret_decl(f_5023)
static void C_ccall f_5023(C_word c,C_word *av) C_noret;
C_noret_decl(f_5029)
static void C_ccall f_5029(C_word c,C_word *av) C_noret;
C_noret_decl(f_5035)
static void C_ccall f_5035(C_word c,C_word *av) C_noret;
C_noret_decl(f_5043)
static void C_ccall f_5043(C_word c,C_word *av) C_noret;
C_noret_decl(f_5045)
static void C_fcall f_5045(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5062)
static void C_ccall f_5062(C_word c,C_word *av) C_noret;
C_noret_decl(f_5068)
static void C_ccall f_5068(C_word c,C_word *av) C_noret;
C_noret_decl(f_5074)
static void C_ccall f_5074(C_word c,C_word *av) C_noret;
C_noret_decl(f_5082)
static void C_ccall f_5082(C_word c,C_word *av) C_noret;
C_noret_decl(f_5083)
static void C_fcall f_5083(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5093)
static void C_ccall f_5093(C_word c,C_word *av) C_noret;
C_noret_decl(f_5097)
static void C_ccall f_5097(C_word c,C_word *av) C_noret;
C_noret_decl(f_5100)
static void C_ccall f_5100(C_word c,C_word *av) C_noret;
C_noret_decl(f_5103)
static void C_ccall f_5103(C_word c,C_word *av) C_noret;
C_noret_decl(f_5105)
static void C_fcall f_5105(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5113)
static void C_ccall f_5113(C_word c,C_word *av) C_noret;
C_noret_decl(f_5121)
static void C_ccall f_5121(C_word c,C_word *av) C_noret;
C_noret_decl(f_5124)
static void C_ccall f_5124(C_word c,C_word *av) C_noret;
C_noret_decl(f_5125)
static void C_fcall f_5125(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5129)
static void C_ccall f_5129(C_word c,C_word *av) C_noret;
C_noret_decl(f_5139)
static void C_fcall f_5139(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5148)
static void C_ccall f_5148(C_word c,C_word *av) C_noret;
C_noret_decl(f_5156)
static void C_ccall f_5156(C_word c,C_word *av) C_noret;
C_noret_decl(f_5171)
static void C_ccall f_5171(C_word c,C_word *av) C_noret;
C_noret_decl(f_5174)
static void C_ccall f_5174(C_word c,C_word *av) C_noret;
C_noret_decl(f_5177)
static void C_ccall f_5177(C_word c,C_word *av) C_noret;
C_noret_decl(f_5180)
static void C_ccall f_5180(C_word c,C_word *av) C_noret;
C_noret_decl(f_5187)
static void C_ccall f_5187(C_word c,C_word *av) C_noret;
C_noret_decl(f_5192)
static void C_ccall f_5192(C_word c,C_word *av) C_noret;
C_noret_decl(f_5196)
static void C_ccall f_5196(C_word c,C_word *av) C_noret;
C_noret_decl(f_5200)
static void C_ccall f_5200(C_word c,C_word *av) C_noret;
C_noret_decl(f_5204)
static void C_ccall f_5204(C_word c,C_word *av) C_noret;
C_noret_decl(f_5208)
static void C_ccall f_5208(C_word c,C_word *av) C_noret;
C_noret_decl(f_5212)
static void C_ccall f_5212(C_word c,C_word *av) C_noret;
C_noret_decl(f_5216)
static void C_ccall f_5216(C_word c,C_word *av) C_noret;
C_noret_decl(f_5220)
static void C_ccall f_5220(C_word c,C_word *av) C_noret;
C_noret_decl(f_5248)
static void C_ccall f_5248(C_word c,C_word *av) C_noret;
C_noret_decl(f_5260)
static void C_ccall f_5260(C_word c,C_word *av) C_noret;
C_noret_decl(f_5262)
static void C_fcall f_5262(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5272)
static void C_ccall f_5272(C_word c,C_word *av) C_noret;
C_noret_decl(f_5293)
static void C_ccall f_5293(C_word c,C_word *av) C_noret;
C_noret_decl(f_5295)
static void C_fcall f_5295(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5320)
static void C_ccall f_5320(C_word c,C_word *av) C_noret;
C_noret_decl(f_5340)
static C_word C_fcall f_5340(C_word t0,C_word t1);
C_noret_decl(f_5375)
static C_word C_fcall f_5375(C_word t0);
C_noret_decl(f_5405)
static void C_ccall f_5405(C_word c,C_word *av) C_noret;
C_noret_decl(f_5407)
static void C_fcall f_5407(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5413)
static void C_ccall f_5413(C_word c,C_word *av) C_noret;
C_noret_decl(f_5420)
static void C_ccall f_5420(C_word c,C_word *av) C_noret;
C_noret_decl(f_5425)
static void C_fcall f_5425(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5448)
static void C_ccall f_5448(C_word c,C_word *av) C_noret;
C_noret_decl(f_5457)
static void C_fcall f_5457(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5467)
static void C_ccall f_5467(C_word c,C_word *av) C_noret;
C_noret_decl(f_5470)
static void C_ccall f_5470(C_word c,C_word *av) C_noret;
C_noret_decl(f_5499)
static void C_ccall f_5499(C_word c,C_word *av) C_noret;
C_noret_decl(f_5527)
static void C_ccall f_5527(C_word c,C_word *av) C_noret;
C_noret_decl(f_5542)
static void C_ccall f_5542(C_word c,C_word *av) C_noret;
C_noret_decl(f_5545)
static void C_ccall f_5545(C_word c,C_word *av) C_noret;
C_noret_decl(f_5548)
static void C_ccall f_5548(C_word c,C_word *av) C_noret;
C_noret_decl(f_5614)
static void C_ccall f_5614(C_word c,C_word *av) C_noret;
C_noret_decl(f_5620)
static void C_ccall f_5620(C_word c,C_word *av) C_noret;
C_noret_decl(f_5711)
static void C_ccall f_5711(C_word c,C_word *av) C_noret;
C_noret_decl(f_5718)
static void C_ccall f_5718(C_word c,C_word *av) C_noret;
C_noret_decl(f_5727)
static void C_ccall f_5727(C_word c,C_word *av) C_noret;
C_noret_decl(f_5730)
static void C_ccall f_5730(C_word c,C_word *av) C_noret;
C_noret_decl(f_5742)
static void C_ccall f_5742(C_word c,C_word *av) C_noret;
C_noret_decl(f_5747)
static void C_fcall f_5747(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5757)
static void C_ccall f_5757(C_word c,C_word *av) C_noret;
C_noret_decl(f_5760)
static void C_ccall f_5760(C_word c,C_word *av) C_noret;
C_noret_decl(f_5763)
static void C_ccall f_5763(C_word c,C_word *av) C_noret;
C_noret_decl(f_5772)
static void C_ccall f_5772(C_word c,C_word *av) C_noret;
C_noret_decl(f_5792)
static void C_ccall f_5792(C_word c,C_word *av) C_noret;
C_noret_decl(f_5795)
static void C_ccall f_5795(C_word c,C_word *av) C_noret;
C_noret_decl(f_5798)
static void C_ccall f_5798(C_word c,C_word *av) C_noret;
C_noret_decl(f_5810)
static void C_fcall f_5810(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5813)
static void C_ccall f_5813(C_word c,C_word *av) C_noret;
C_noret_decl(f_5822)
static void C_fcall f_5822(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5853)
static void C_ccall f_5853(C_word c,C_word *av) C_noret;
C_noret_decl(f_5917)
static void C_ccall f_5917(C_word c,C_word *av) C_noret;
C_noret_decl(f_5921)
static void C_ccall f_5921(C_word c,C_word *av) C_noret;
C_noret_decl(f_5927)
static void C_ccall f_5927(C_word c,C_word *av) C_noret;
C_noret_decl(f_5946)
static void C_ccall f_5946(C_word c,C_word *av) C_noret;
C_noret_decl(f_5955)
static void C_ccall f_5955(C_word c,C_word *av) C_noret;
C_noret_decl(f_5962)
static void C_ccall f_5962(C_word c,C_word *av) C_noret;
C_noret_decl(f_6079)
static void C_ccall f_6079(C_word c,C_word *av) C_noret;
C_noret_decl(f_6085)
static void C_ccall f_6085(C_word c,C_word *av) C_noret;
C_noret_decl(f_6091)
static void C_ccall f_6091(C_word c,C_word *av) C_noret;
C_noret_decl(f_6104)
static void C_ccall f_6104(C_word c,C_word *av) C_noret;
C_noret_decl(f_6116)
static void C_ccall f_6116(C_word c,C_word *av) C_noret;
C_noret_decl(f_6119)
static void C_ccall f_6119(C_word c,C_word *av) C_noret;
C_noret_decl(f_6130)
static void C_fcall f_6130(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6138)
static void C_fcall f_6138(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6159)
static void C_ccall f_6159(C_word c,C_word *av) C_noret;
C_noret_decl(f_6168)
static void C_fcall f_6168(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6178)
static void C_ccall f_6178(C_word c,C_word *av) C_noret;
C_noret_decl(f_6213)
static void C_ccall f_6213(C_word c,C_word *av) C_noret;
C_noret_decl(f_6214)
static void C_fcall f_6214(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6218)
static void C_ccall f_6218(C_word c,C_word *av) C_noret;
C_noret_decl(f_6227)
static void C_fcall f_6227(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6237)
static void C_ccall f_6237(C_word c,C_word *av) C_noret;
C_noret_decl(f_6250)
static void C_ccall f_6250(C_word c,C_word *av) C_noret;
C_noret_decl(f_6255)
static void C_ccall f_6255(C_word c,C_word *av) C_noret;
C_noret_decl(f_6282)
static void C_fcall f_6282(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6292)
static void C_ccall f_6292(C_word c,C_word *av) C_noret;
C_noret_decl(f_6319)
static void C_ccall f_6319(C_word c,C_word *av) C_noret;
C_noret_decl(f_6323)
static void C_fcall f_6323(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6337)
static void C_fcall f_6337(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6345)
static void C_ccall f_6345(C_word c,C_word *av) C_noret;
C_noret_decl(f_6358)
static void C_ccall f_6358(C_word c,C_word *av) C_noret;
C_noret_decl(f_6364)
static void C_fcall f_6364(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6389)
static void C_ccall f_6389(C_word c,C_word *av) C_noret;
C_noret_decl(f_6402)
static void C_ccall f_6402(C_word c,C_word *av) C_noret;
C_noret_decl(f_6429)
static void C_ccall f_6429(C_word c,C_word *av) C_noret;
C_noret_decl(f_6437)
static void C_ccall f_6437(C_word c,C_word *av) C_noret;
C_noret_decl(f_6446)
static void C_fcall f_6446(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6448)
static void C_fcall f_6448(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6451)
static void C_fcall f_6451(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6473)
static void C_ccall f_6473(C_word c,C_word *av) C_noret;
C_noret_decl(f_6480)
static void C_ccall f_6480(C_word c,C_word *av) C_noret;
C_noret_decl(f_6497)
static void C_ccall f_6497(C_word c,C_word *av) C_noret;
C_noret_decl(f_6526)
static void C_ccall f_6526(C_word c,C_word *av) C_noret;
C_noret_decl(f_6554)
static void C_fcall f_6554(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6559)
static void C_fcall f_6559(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6594)
static void C_fcall f_6594(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6597)
static void C_fcall f_6597(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6601)
static void C_ccall f_6601(C_word c,C_word *av) C_noret;
C_noret_decl(f_6617)
static void C_ccall f_6617(C_word c,C_word *av) C_noret;
C_noret_decl(f_6629)
static void C_fcall f_6629(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6639)
static void C_ccall f_6639(C_word c,C_word *av) C_noret;
C_noret_decl(f_6642)
static void C_ccall f_6642(C_word c,C_word *av) C_noret;
C_noret_decl(f_6645)
static void C_ccall f_6645(C_word c,C_word *av) C_noret;
C_noret_decl(f_6648)
static void C_ccall f_6648(C_word c,C_word *av) C_noret;
C_noret_decl(f_6651)
static void C_ccall f_6651(C_word c,C_word *av) C_noret;
C_noret_decl(f_6654)
static void C_ccall f_6654(C_word c,C_word *av) C_noret;
C_noret_decl(f_6663)
static void C_fcall f_6663(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6676)
static void C_ccall f_6676(C_word c,C_word *av) C_noret;
C_noret_decl(f_6679)
static void C_ccall f_6679(C_word c,C_word *av) C_noret;
C_noret_decl(f_6714)
static void C_fcall f_6714(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6748)
static void C_fcall f_6748(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6758)
static void C_ccall f_6758(C_word c,C_word *av) C_noret;
C_noret_decl(f_6768)
static void C_ccall f_6768(C_word c,C_word *av) C_noret;
C_noret_decl(f_6771)
static void C_ccall f_6771(C_word c,C_word *av) C_noret;
C_noret_decl(f_6786)
static void C_ccall f_6786(C_word c,C_word *av) C_noret;
C_noret_decl(f_6790)
static void C_ccall f_6790(C_word c,C_word *av) C_noret;
C_noret_decl(f_6797)
static void C_ccall f_6797(C_word c,C_word *av) C_noret;
C_noret_decl(f_6799)
static void C_fcall f_6799(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6802)
static void C_fcall f_6802(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6808)
static void C_ccall f_6808(C_word c,C_word *av) C_noret;
C_noret_decl(f_6825)
static void C_fcall f_6825(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6834)
static void C_fcall f_6834(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6865)
static void C_ccall f_6865(C_word c,C_word *av) C_noret;
C_noret_decl(f_6868)
static void C_ccall f_6868(C_word c,C_word *av) C_noret;
C_noret_decl(f_6871)
static void C_ccall f_6871(C_word c,C_word *av) C_noret;
C_noret_decl(f_6874)
static void C_ccall f_6874(C_word c,C_word *av) C_noret;
C_noret_decl(f_6877)
static void C_ccall f_6877(C_word c,C_word *av) C_noret;
C_noret_decl(f_6880)
static void C_ccall f_6880(C_word c,C_word *av) C_noret;
C_noret_decl(f_6883)
static void C_ccall f_6883(C_word c,C_word *av) C_noret;
C_noret_decl(f_6886)
static void C_ccall f_6886(C_word c,C_word *av) C_noret;
C_noret_decl(f_6889)
static void C_ccall f_6889(C_word c,C_word *av) C_noret;
C_noret_decl(f_6892)
static void C_ccall f_6892(C_word c,C_word *av) C_noret;
C_noret_decl(f_6895)
static void C_ccall f_6895(C_word c,C_word *av) C_noret;
C_noret_decl(f_6908)
static void C_fcall f_6908(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6918)
static void C_ccall f_6918(C_word c,C_word *av) C_noret;
C_noret_decl(f_6923)
static void C_fcall f_6923(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6936)
static void C_ccall f_6936(C_word c,C_word *av) C_noret;
C_noret_decl(f_6939)
static void C_ccall f_6939(C_word c,C_word *av) C_noret;
C_noret_decl(f_6942)
static void C_ccall f_6942(C_word c,C_word *av) C_noret;
C_noret_decl(f_6945)
static void C_ccall f_6945(C_word c,C_word *av) C_noret;
C_noret_decl(f_6948)
static void C_ccall f_6948(C_word c,C_word *av) C_noret;
C_noret_decl(f_6982)
static void C_fcall f_6982(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6992)
static void C_ccall f_6992(C_word c,C_word *av) C_noret;
C_noret_decl(f_7026)
static void C_ccall f_7026(C_word c,C_word *av) C_noret;
C_noret_decl(f_7029)
static void C_ccall f_7029(C_word c,C_word *av) C_noret;
C_noret_decl(f_7084)
static void C_fcall f_7084(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7141)
static void C_fcall f_7141(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7143)
static void C_fcall f_7143(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7154)
static void C_ccall f_7154(C_word c,C_word *av) C_noret;
C_noret_decl(f_7174)
static void C_ccall f_7174(C_word c,C_word *av) C_noret;
C_noret_decl(f_7177)
static void C_fcall f_7177(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7181)
static void C_ccall f_7181(C_word c,C_word *av) C_noret;
C_noret_decl(f_7184)
static void C_ccall f_7184(C_word c,C_word *av) C_noret;
C_noret_decl(f_7196)
static void C_fcall f_7196(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7221)
static void C_ccall f_7221(C_word c,C_word *av) C_noret;
C_noret_decl(f_7230)
static void C_fcall f_7230(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7236)
static void C_fcall f_7236(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7246)
static void C_ccall f_7246(C_word c,C_word *av) C_noret;
C_noret_decl(f_7258)
static void C_ccall f_7258(C_word c,C_word *av) C_noret;
C_noret_decl(f_7261)
static void C_ccall f_7261(C_word c,C_word *av) C_noret;
C_noret_decl(f_7264)
static void C_ccall f_7264(C_word c,C_word *av) C_noret;
C_noret_decl(f_7267)
static void C_ccall f_7267(C_word c,C_word *av) C_noret;
C_noret_decl(f_7270)
static void C_ccall f_7270(C_word c,C_word *av) C_noret;
C_noret_decl(f_7306)
static void C_ccall f_7306(C_word c,C_word *av) C_noret;
C_noret_decl(f_7313)
static void C_ccall f_7313(C_word c,C_word *av) C_noret;
C_noret_decl(f_7315)
static void C_fcall f_7315(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7325)
static void C_ccall f_7325(C_word c,C_word *av) C_noret;
C_noret_decl(f_7368)
static void C_ccall f_7368(C_word c,C_word *av) C_noret;
C_noret_decl(f_7373)
static void C_fcall f_7373(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7379)
static void C_fcall f_7379(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7391)
static void C_fcall f_7391(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7428)
static void C_fcall f_7428(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7434)
static void C_fcall f_7434(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7469)
static void C_ccall f_7469(C_word c,C_word *av) C_noret;
C_noret_decl(f_7481)
static void C_fcall f_7481(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7495)
static void C_ccall f_7495(C_word c,C_word *av) C_noret;
C_noret_decl(f_7516)
static void C_ccall f_7516(C_word c,C_word *av) C_noret;
C_noret_decl(f_7520)
static void C_ccall f_7520(C_word c,C_word *av) C_noret;
C_noret_decl(f_7524)
static void C_fcall f_7524(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7563)
static void C_ccall f_7563(C_word c,C_word *av) C_noret;
C_noret_decl(f_7571)
static void C_ccall f_7571(C_word c,C_word *av) C_noret;
C_noret_decl(f_7613)
static C_word C_fcall f_7613(C_word t0);
C_noret_decl(f_7643)
static void C_ccall f_7643(C_word c,C_word *av) C_noret;
C_noret_decl(f_7646)
static void C_ccall f_7646(C_word c,C_word *av) C_noret;
C_noret_decl(f_7649)
static void C_ccall f_7649(C_word c,C_word *av) C_noret;
C_noret_decl(f_7652)
static void C_ccall f_7652(C_word c,C_word *av) C_noret;
C_noret_decl(f_7655)
static void C_fcall f_7655(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7658)
static void C_ccall f_7658(C_word c,C_word *av) C_noret;
C_noret_decl(f_7661)
static void C_fcall f_7661(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7664)
static void C_ccall f_7664(C_word c,C_word *av) C_noret;
C_noret_decl(f_7673)
static void C_ccall f_7673(C_word c,C_word *av) C_noret;
C_noret_decl(f_7679)
static void C_ccall f_7679(C_word c,C_word *av) C_noret;
C_noret_decl(f_7681)
static void C_fcall f_7681(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7687)
static void C_fcall f_7687(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7695)
static void C_fcall f_7695(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7716)
static void C_ccall f_7716(C_word c,C_word *av) C_noret;
C_noret_decl(f_7732)
static void C_ccall f_7732(C_word c,C_word *av) C_noret;
C_noret_decl(f_7735)
static void C_ccall f_7735(C_word c,C_word *av) C_noret;
C_noret_decl(f_7738)
static void C_ccall f_7738(C_word c,C_word *av) C_noret;
C_noret_decl(f_7741)
static void C_ccall f_7741(C_word c,C_word *av) C_noret;
C_noret_decl(f_7747)
static void C_ccall f_7747(C_word c,C_word *av) C_noret;
C_noret_decl(f_7756)
static void C_ccall f_7756(C_word c,C_word *av) C_noret;
C_noret_decl(f_7778)
static void C_ccall f_7778(C_word c,C_word *av) C_noret;
C_noret_decl(f_7793)
static void C_fcall f_7793(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7800)
static void C_ccall f_7800(C_word c,C_word *av) C_noret;
C_noret_decl(f_7807)
static void C_ccall f_7807(C_word c,C_word *av) C_noret;
C_noret_decl(f_7809)
static void C_fcall f_7809(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7819)
static void C_ccall f_7819(C_word c,C_word *av) C_noret;
C_noret_decl(f_7826)
static void C_ccall f_7826(C_word c,C_word *av) C_noret;
C_noret_decl(f_7830)
static void C_ccall f_7830(C_word c,C_word *av) C_noret;
C_noret_decl(f_7832)
static void C_ccall f_7832(C_word c,C_word *av) C_noret;
C_noret_decl(f_7840)
static void C_ccall f_7840(C_word c,C_word *av) C_noret;
C_noret_decl(f_7850)
static void C_ccall f_7850(C_word c,C_word *av) C_noret;
C_noret_decl(f_7853)
static void C_ccall f_7853(C_word c,C_word *av) C_noret;
C_noret_decl(f_7856)
static void C_fcall f_7856(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7859)
static void C_ccall f_7859(C_word c,C_word *av) C_noret;
C_noret_decl(f_7862)
static void C_fcall f_7862(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7865)
static void C_ccall f_7865(C_word c,C_word *av) C_noret;
C_noret_decl(f_7868)
static void C_ccall f_7868(C_word c,C_word *av) C_noret;
C_noret_decl(f_7874)
static void C_ccall f_7874(C_word c,C_word *av) C_noret;
C_noret_decl(f_7877)
static void C_ccall f_7877(C_word c,C_word *av) C_noret;
C_noret_decl(f_7883)
static void C_ccall f_7883(C_word c,C_word *av) C_noret;
C_noret_decl(f_7886)
static void C_ccall f_7886(C_word c,C_word *av) C_noret;
C_noret_decl(f_7892)
static void C_ccall f_7892(C_word c,C_word *av) C_noret;
C_noret_decl(f_7896)
static void C_ccall f_7896(C_word c,C_word *av) C_noret;
C_noret_decl(f_7899)
static void C_ccall f_7899(C_word c,C_word *av) C_noret;
C_noret_decl(f_7902)
static void C_ccall f_7902(C_word c,C_word *av) C_noret;
C_noret_decl(f_7905)
static void C_ccall f_7905(C_word c,C_word *av) C_noret;
C_noret_decl(f_7908)
static void C_ccall f_7908(C_word c,C_word *av) C_noret;
C_noret_decl(f_7911)
static void C_ccall f_7911(C_word c,C_word *av) C_noret;
C_noret_decl(f_7914)
static void C_ccall f_7914(C_word c,C_word *av) C_noret;
C_noret_decl(f_7917)
static void C_ccall f_7917(C_word c,C_word *av) C_noret;
C_noret_decl(f_7920)
static void C_ccall f_7920(C_word c,C_word *av) C_noret;
C_noret_decl(f_7923)
static void C_fcall f_7923(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7928)
static void C_fcall f_7928(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7956)
static void C_ccall f_7956(C_word c,C_word *av) C_noret;
C_noret_decl(f_7985)
static void C_ccall f_7985(C_word c,C_word *av) C_noret;
C_noret_decl(f_7997)
static void C_ccall f_7997(C_word c,C_word *av) C_noret;
C_noret_decl(f_8012)
static void C_ccall f_8012(C_word c,C_word *av) C_noret;
C_noret_decl(f_8031)
static void C_ccall f_8031(C_word c,C_word *av) C_noret;
C_noret_decl(f_8041)
static void C_ccall f_8041(C_word c,C_word *av) C_noret;
C_noret_decl(f_8056)
static void C_ccall f_8056(C_word c,C_word *av) C_noret;
C_noret_decl(f_8066)
static void C_ccall f_8066(C_word c,C_word *av) C_noret;
C_noret_decl(f_8076)
static void C_ccall f_8076(C_word c,C_word *av) C_noret;
C_noret_decl(f_8087)
static void C_ccall f_8087(C_word c,C_word *av) C_noret;
C_noret_decl(f_8091)
static void C_ccall f_8091(C_word c,C_word *av) C_noret;
C_noret_decl(f_8098)
static void C_ccall f_8098(C_word c,C_word *av) C_noret;
C_noret_decl(f_8100)
static void C_ccall f_8100(C_word c,C_word *av) C_noret;
C_noret_decl(f_8128)
static void C_ccall f_8128(C_word c,C_word *av) C_noret;
C_noret_decl(f_8132)
static void C_ccall f_8132(C_word c,C_word *av) C_noret;
C_noret_decl(f_8138)
static void C_ccall f_8138(C_word c,C_word *av) C_noret;
C_noret_decl(f_8141)
static void C_ccall f_8141(C_word c,C_word *av) C_noret;
C_noret_decl(f_8144)
static void C_ccall f_8144(C_word c,C_word *av) C_noret;
C_noret_decl(f_8147)
static void C_ccall f_8147(C_word c,C_word *av) C_noret;
C_noret_decl(f_8152)
static void C_fcall f_8152(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8165)
static void C_ccall f_8165(C_word c,C_word *av) C_noret;
C_noret_decl(f_8168)
static void C_ccall f_8168(C_word c,C_word *av) C_noret;
C_noret_decl(f_8183)
static void C_ccall f_8183(C_word c,C_word *av) C_noret;
C_noret_decl(f_8202)
static void C_ccall f_8202(C_word c,C_word *av) C_noret;
C_noret_decl(f_8214)
static void C_ccall f_8214(C_word c,C_word *av) C_noret;
C_noret_decl(f_8217)
static void C_ccall f_8217(C_word c,C_word *av) C_noret;
C_noret_decl(f_8231)
static void C_ccall f_8231(C_word c,C_word *av) C_noret;
C_noret_decl(f_8234)
static void C_ccall f_8234(C_word c,C_word *av) C_noret;
C_noret_decl(f_8237)
static void C_ccall f_8237(C_word c,C_word *av) C_noret;
C_noret_decl(f_8240)
static void C_ccall f_8240(C_word c,C_word *av) C_noret;
C_noret_decl(f_8243)
static void C_ccall f_8243(C_word c,C_word *av) C_noret;
C_noret_decl(f_8252)
static void C_ccall f_8252(C_word c,C_word *av) C_noret;
C_noret_decl(f_8255)
static void C_ccall f_8255(C_word c,C_word *av) C_noret;
C_noret_decl(f_8264)
static void C_ccall f_8264(C_word c,C_word *av) C_noret;
C_noret_decl(f_8267)
static void C_ccall f_8267(C_word c,C_word *av) C_noret;
C_noret_decl(f_8331)
static void C_ccall f_8331(C_word c,C_word *av) C_noret;
C_noret_decl(f_8338)
static void C_ccall f_8338(C_word c,C_word *av) C_noret;
C_noret_decl(f_8344)
static void C_ccall f_8344(C_word c,C_word *av) C_noret;
C_noret_decl(f_8351)
static void C_ccall f_8351(C_word c,C_word *av) C_noret;
C_noret_decl(f_8357)
static void C_ccall f_8357(C_word c,C_word *av) C_noret;
C_noret_decl(f_8359)
static void C_fcall f_8359(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8384)
static void C_ccall f_8384(C_word c,C_word *av) C_noret;
C_noret_decl(f_8393)
static void C_fcall f_8393(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8418)
static void C_ccall f_8418(C_word c,C_word *av) C_noret;
C_noret_decl(f_8427)
static void C_fcall f_8427(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8437)
static void C_ccall f_8437(C_word c,C_word *av) C_noret;
C_noret_decl(f_8450)
static void C_fcall f_8450(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8460)
static void C_ccall f_8460(C_word c,C_word *av) C_noret;
C_noret_decl(f_8473)
static void C_fcall f_8473(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8483)
static void C_ccall f_8483(C_word c,C_word *av) C_noret;
C_noret_decl(f_8497)
static void C_ccall f_8497(C_word c,C_word *av) C_noret;
C_noret_decl(f_8500)
static void C_ccall f_8500(C_word c,C_word *av) C_noret;
C_noret_decl(f_8503)
static void C_ccall f_8503(C_word c,C_word *av) C_noret;
C_noret_decl(f_8512)
static void C_ccall f_8512(C_word c,C_word *av) C_noret;
C_noret_decl(f_8515)
static void C_ccall f_8515(C_word c,C_word *av) C_noret;
C_noret_decl(f_8525)
static void C_ccall f_8525(C_word c,C_word *av) C_noret;
C_noret_decl(f_8532)
static void C_ccall f_8532(C_word c,C_word *av) C_noret;
C_noret_decl(f_8542)
static void C_ccall f_8542(C_word c,C_word *av) C_noret;
C_noret_decl(f_8548)
static void C_ccall f_8548(C_word c,C_word *av) C_noret;
C_noret_decl(f_8551)
static void C_ccall f_8551(C_word c,C_word *av) C_noret;
C_noret_decl(f_8556)
static void C_fcall f_8556(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8581)
static void C_ccall f_8581(C_word c,C_word *av) C_noret;
C_noret_decl(f_8592)
static void C_ccall f_8592(C_word c,C_word *av) C_noret;
C_noret_decl(f_8601)
static void C_ccall f_8601(C_word c,C_word *av) C_noret;
C_noret_decl(f_8607)
static void C_ccall f_8607(C_word c,C_word *av) C_noret;
C_noret_decl(f_8610)
static void C_ccall f_8610(C_word c,C_word *av) C_noret;
C_noret_decl(f_8613)
static void C_ccall f_8613(C_word c,C_word *av) C_noret;
C_noret_decl(f_8616)
static void C_ccall f_8616(C_word c,C_word *av) C_noret;
C_noret_decl(f_8625)
static void C_ccall f_8625(C_word c,C_word *av) C_noret;
C_noret_decl(f_8690)
static void C_ccall f_8690(C_word c,C_word *av) C_noret;
C_noret_decl(f_8703)
static void C_ccall f_8703(C_word c,C_word *av) C_noret;
C_noret_decl(f_8707)
static void C_ccall f_8707(C_word c,C_word *av) C_noret;
C_noret_decl(f_8711)
static void C_ccall f_8711(C_word c,C_word *av) C_noret;
C_noret_decl(f_8717)
static void C_ccall f_8717(C_word c,C_word *av) C_noret;
C_noret_decl(f_8723)
static void C_ccall f_8723(C_word c,C_word *av) C_noret;
C_noret_decl(f_8725)
static void C_ccall f_8725(C_word c,C_word *av) C_noret;
C_noret_decl(f_8731)
static void C_ccall f_8731(C_word c,C_word *av) C_noret;
C_noret_decl(f_8735)
static void C_ccall f_8735(C_word c,C_word *av) C_noret;
C_noret_decl(f_8744)
static void C_ccall f_8744(C_word c,C_word *av) C_noret;
C_noret_decl(f_8750)
static void C_ccall f_8750(C_word c,C_word *av) C_noret;
C_noret_decl(f_8754)
static void C_fcall f_8754(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8758)
static void C_ccall f_8758(C_word c,C_word *av) C_noret;
C_noret_decl(f_8771)
static void C_ccall f_8771(C_word c,C_word *av) C_noret;
C_noret_decl(f_8773)
static void C_ccall f_8773(C_word c,C_word *av) C_noret;
C_noret_decl(f_8781)
static void C_ccall f_8781(C_word c,C_word *av) C_noret;
C_noret_decl(f_8784)
static void C_ccall f_8784(C_word c,C_word *av) C_noret;
C_noret_decl(f_8791)
static void C_ccall f_8791(C_word c,C_word *av) C_noret;
C_noret_decl(f_8795)
static void C_ccall f_8795(C_word c,C_word *av) C_noret;
C_noret_decl(f_8804)
static void C_ccall f_8804(C_word c,C_word *av) C_noret;
C_noret_decl(f_8806)
static void C_ccall f_8806(C_word c,C_word *av) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_3068)
static void C_ccall trf_3068(C_word c,C_word *av) C_noret;
static void C_ccall trf_3068(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3068(t0,t1,t2);}

C_noret_decl(trf_3143)
static void C_ccall trf_3143(C_word c,C_word *av) C_noret;
static void C_ccall trf_3143(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3143(t0,t1,t2);}

C_noret_decl(trf_3868)
static void C_ccall trf_3868(C_word c,C_word *av) C_noret;
static void C_ccall trf_3868(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3868(t0,t1);}

C_noret_decl(trf_3969)
static void C_ccall trf_3969(C_word c,C_word *av) C_noret;
static void C_ccall trf_3969(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3969(t0,t1);}

C_noret_decl(trf_3998)
static void C_ccall trf_3998(C_word c,C_word *av) C_noret;
static void C_ccall trf_3998(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3998(t0,t1,t2);}

C_noret_decl(trf_4020)
static void C_ccall trf_4020(C_word c,C_word *av) C_noret;
static void C_ccall trf_4020(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4020(t0,t1,t2);}

C_noret_decl(trf_4077)
static void C_ccall trf_4077(C_word c,C_word *av) C_noret;
static void C_ccall trf_4077(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4077(t0,t1,t2);}

C_noret_decl(trf_4127)
static void C_ccall trf_4127(C_word c,C_word *av) C_noret;
static void C_ccall trf_4127(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4127(t0,t1,t2);}

C_noret_decl(trf_4137)
static void C_ccall trf_4137(C_word c,C_word *av) C_noret;
static void C_ccall trf_4137(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4137(t0,t1);}

C_noret_decl(trf_4182)
static void C_ccall trf_4182(C_word c,C_word *av) C_noret;
static void C_ccall trf_4182(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4182(t0,t1,t2);}

C_noret_decl(trf_4226)
static void C_ccall trf_4226(C_word c,C_word *av) C_noret;
static void C_ccall trf_4226(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4226(t0,t1);}

C_noret_decl(trf_4534)
static void C_ccall trf_4534(C_word c,C_word *av) C_noret;
static void C_ccall trf_4534(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4534(t0,t1,t2);}

C_noret_decl(trf_4569)
static void C_ccall trf_4569(C_word c,C_word *av) C_noret;
static void C_ccall trf_4569(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4569(t0,t1,t2);}

C_noret_decl(trf_4590)
static void C_ccall trf_4590(C_word c,C_word *av) C_noret;
static void C_ccall trf_4590(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4590(t0,t1,t2);}

C_noret_decl(trf_4841)
static void C_ccall trf_4841(C_word c,C_word *av) C_noret;
static void C_ccall trf_4841(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4841(t0,t1,t2);}

C_noret_decl(trf_4977)
static void C_ccall trf_4977(C_word c,C_word *av) C_noret;
static void C_ccall trf_4977(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4977(t0,t1,t2);}

C_noret_decl(trf_4987)
static void C_ccall trf_4987(C_word c,C_word *av) C_noret;
static void C_ccall trf_4987(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4987(t0,t1);}

C_noret_decl(trf_5045)
static void C_ccall trf_5045(C_word c,C_word *av) C_noret;
static void C_ccall trf_5045(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5045(t0,t1,t2,t3);}

C_noret_decl(trf_5083)
static void C_ccall trf_5083(C_word c,C_word *av) C_noret;
static void C_ccall trf_5083(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5083(t0,t1,t2);}

C_noret_decl(trf_5105)
static void C_ccall trf_5105(C_word c,C_word *av) C_noret;
static void C_ccall trf_5105(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5105(t0,t1);}

C_noret_decl(trf_5125)
static void C_ccall trf_5125(C_word c,C_word *av) C_noret;
static void C_ccall trf_5125(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5125(t0,t1,t2);}

C_noret_decl(trf_5139)
static void C_ccall trf_5139(C_word c,C_word *av) C_noret;
static void C_ccall trf_5139(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5139(t0,t1);}

C_noret_decl(trf_5262)
static void C_ccall trf_5262(C_word c,C_word *av) C_noret;
static void C_ccall trf_5262(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5262(t0,t1,t2);}

C_noret_decl(trf_5295)
static void C_ccall trf_5295(C_word c,C_word *av) C_noret;
static void C_ccall trf_5295(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5295(t0,t1,t2);}

C_noret_decl(trf_5407)
static void C_ccall trf_5407(C_word c,C_word *av) C_noret;
static void C_ccall trf_5407(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5407(t0,t1,t2,t3);}

C_noret_decl(trf_5425)
static void C_ccall trf_5425(C_word c,C_word *av) C_noret;
static void C_ccall trf_5425(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5425(t0,t1,t2);}

C_noret_decl(trf_5457)
static void C_ccall trf_5457(C_word c,C_word *av) C_noret;
static void C_ccall trf_5457(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5457(t0,t1,t2,t3);}

C_noret_decl(trf_5747)
static void C_ccall trf_5747(C_word c,C_word *av) C_noret;
static void C_ccall trf_5747(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5747(t0,t1,t2);}

C_noret_decl(trf_5810)
static void C_ccall trf_5810(C_word c,C_word *av) C_noret;
static void C_ccall trf_5810(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5810(t0,t1);}

C_noret_decl(trf_5822)
static void C_ccall trf_5822(C_word c,C_word *av) C_noret;
static void C_ccall trf_5822(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5822(t0,t1,t2,t3);}

C_noret_decl(trf_6130)
static void C_ccall trf_6130(C_word c,C_word *av) C_noret;
static void C_ccall trf_6130(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6130(t0,t1,t2);}

C_noret_decl(trf_6138)
static void C_ccall trf_6138(C_word c,C_word *av) C_noret;
static void C_ccall trf_6138(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6138(t0,t1,t2);}

C_noret_decl(trf_6168)
static void C_ccall trf_6168(C_word c,C_word *av) C_noret;
static void C_ccall trf_6168(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6168(t0,t1,t2);}

C_noret_decl(trf_6214)
static void C_ccall trf_6214(C_word c,C_word *av) C_noret;
static void C_ccall trf_6214(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6214(t0,t1,t2);}

C_noret_decl(trf_6227)
static void C_ccall trf_6227(C_word c,C_word *av) C_noret;
static void C_ccall trf_6227(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6227(t0,t1,t2);}

C_noret_decl(trf_6282)
static void C_ccall trf_6282(C_word c,C_word *av) C_noret;
static void C_ccall trf_6282(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6282(t0,t1,t2);}

C_noret_decl(trf_6323)
static void C_ccall trf_6323(C_word c,C_word *av) C_noret;
static void C_ccall trf_6323(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6323(t0,t1,t2);}

C_noret_decl(trf_6337)
static void C_ccall trf_6337(C_word c,C_word *av) C_noret;
static void C_ccall trf_6337(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6337(t0,t1,t2);}

C_noret_decl(trf_6364)
static void C_ccall trf_6364(C_word c,C_word *av) C_noret;
static void C_ccall trf_6364(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6364(t0,t1,t2);}

C_noret_decl(trf_6446)
static void C_ccall trf_6446(C_word c,C_word *av) C_noret;
static void C_ccall trf_6446(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6446(t0,t1,t2);}

C_noret_decl(trf_6448)
static void C_ccall trf_6448(C_word c,C_word *av) C_noret;
static void C_ccall trf_6448(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6448(t0,t1,t2,t3);}

C_noret_decl(trf_6451)
static void C_ccall trf_6451(C_word c,C_word *av) C_noret;
static void C_ccall trf_6451(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6451(t0,t1,t2);}

C_noret_decl(trf_6554)
static void C_ccall trf_6554(C_word c,C_word *av) C_noret;
static void C_ccall trf_6554(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6554(t0,t1,t2);}

C_noret_decl(trf_6559)
static void C_ccall trf_6559(C_word c,C_word *av) C_noret;
static void C_ccall trf_6559(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6559(t0,t1);}

C_noret_decl(trf_6594)
static void C_ccall trf_6594(C_word c,C_word *av) C_noret;
static void C_ccall trf_6594(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_6594(t0,t1,t2,t3,t4);}

C_noret_decl(trf_6597)
static void C_ccall trf_6597(C_word c,C_word *av) C_noret;
static void C_ccall trf_6597(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_6597(t0,t1,t2,t3,t4);}

C_noret_decl(trf_6629)
static void C_ccall trf_6629(C_word c,C_word *av) C_noret;
static void C_ccall trf_6629(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6629(t0,t1,t2);}

C_noret_decl(trf_6663)
static void C_ccall trf_6663(C_word c,C_word *av) C_noret;
static void C_ccall trf_6663(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6663(t0,t1,t2,t3);}

C_noret_decl(trf_6714)
static void C_ccall trf_6714(C_word c,C_word *av) C_noret;
static void C_ccall trf_6714(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6714(t0,t1,t2,t3);}

C_noret_decl(trf_6748)
static void C_ccall trf_6748(C_word c,C_word *av) C_noret;
static void C_ccall trf_6748(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6748(t0,t1,t2);}

C_noret_decl(trf_6799)
static void C_ccall trf_6799(C_word c,C_word *av) C_noret;
static void C_ccall trf_6799(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6799(t0,t1);}

C_noret_decl(trf_6802)
static void C_ccall trf_6802(C_word c,C_word *av) C_noret;
static void C_ccall trf_6802(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6802(t0,t1);}

C_noret_decl(trf_6825)
static void C_ccall trf_6825(C_word c,C_word *av) C_noret;
static void C_ccall trf_6825(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6825(t0,t1);}

C_noret_decl(trf_6834)
static void C_ccall trf_6834(C_word c,C_word *av) C_noret;
static void C_ccall trf_6834(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6834(t0,t1,t2,t3);}

C_noret_decl(trf_6908)
static void C_ccall trf_6908(C_word c,C_word *av) C_noret;
static void C_ccall trf_6908(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6908(t0,t1,t2,t3);}

C_noret_decl(trf_6923)
static void C_ccall trf_6923(C_word c,C_word *av) C_noret;
static void C_ccall trf_6923(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6923(t0,t1,t2,t3);}

C_noret_decl(trf_6982)
static void C_ccall trf_6982(C_word c,C_word *av) C_noret;
static void C_ccall trf_6982(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6982(t0,t1,t2,t3);}

C_noret_decl(trf_7084)
static void C_ccall trf_7084(C_word c,C_word *av) C_noret;
static void C_ccall trf_7084(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7084(t0,t1);}

C_noret_decl(trf_7141)
static void C_ccall trf_7141(C_word c,C_word *av) C_noret;
static void C_ccall trf_7141(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7141(t0,t1);}

C_noret_decl(trf_7143)
static void C_ccall trf_7143(C_word c,C_word *av) C_noret;
static void C_ccall trf_7143(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7143(t0,t1,t2);}

C_noret_decl(trf_7177)
static void C_ccall trf_7177(C_word c,C_word *av) C_noret;
static void C_ccall trf_7177(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7177(t0,t1,t2);}

C_noret_decl(trf_7196)
static void C_ccall trf_7196(C_word c,C_word *av) C_noret;
static void C_ccall trf_7196(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7196(t0,t1,t2);}

C_noret_decl(trf_7230)
static void C_ccall trf_7230(C_word c,C_word *av) C_noret;
static void C_ccall trf_7230(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7230(t0,t1,t2,t3);}

C_noret_decl(trf_7236)
static void C_ccall trf_7236(C_word c,C_word *av) C_noret;
static void C_ccall trf_7236(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7236(t0,t1,t2,t3);}

C_noret_decl(trf_7315)
static void C_ccall trf_7315(C_word c,C_word *av) C_noret;
static void C_ccall trf_7315(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7315(t0,t1,t2,t3);}

C_noret_decl(trf_7373)
static void C_ccall trf_7373(C_word c,C_word *av) C_noret;
static void C_ccall trf_7373(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7373(t0,t1,t2);}

C_noret_decl(trf_7379)
static void C_ccall trf_7379(C_word c,C_word *av) C_noret;
static void C_ccall trf_7379(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7379(t0,t1,t2);}

C_noret_decl(trf_7391)
static void C_ccall trf_7391(C_word c,C_word *av) C_noret;
static void C_ccall trf_7391(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7391(t0,t1,t2);}

C_noret_decl(trf_7428)
static void C_ccall trf_7428(C_word c,C_word *av) C_noret;
static void C_ccall trf_7428(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7428(t0,t1);}

C_noret_decl(trf_7434)
static void C_ccall trf_7434(C_word c,C_word *av) C_noret;
static void C_ccall trf_7434(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7434(t0,t1,t2);}

C_noret_decl(trf_7481)
static void C_ccall trf_7481(C_word c,C_word *av) C_noret;
static void C_ccall trf_7481(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7481(t0,t1);}

C_noret_decl(trf_7524)
static void C_ccall trf_7524(C_word c,C_word *av) C_noret;
static void C_ccall trf_7524(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7524(t0,t1,t2);}

C_noret_decl(trf_7655)
static void C_ccall trf_7655(C_word c,C_word *av) C_noret;
static void C_ccall trf_7655(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7655(t0,t1);}

C_noret_decl(trf_7661)
static void C_ccall trf_7661(C_word c,C_word *av) C_noret;
static void C_ccall trf_7661(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7661(t0,t1);}

C_noret_decl(trf_7681)
static void C_ccall trf_7681(C_word c,C_word *av) C_noret;
static void C_ccall trf_7681(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7681(t0,t1,t2);}

C_noret_decl(trf_7687)
static void C_ccall trf_7687(C_word c,C_word *av) C_noret;
static void C_ccall trf_7687(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7687(t0,t1,t2);}

C_noret_decl(trf_7695)
static void C_ccall trf_7695(C_word c,C_word *av) C_noret;
static void C_ccall trf_7695(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7695(t0,t1,t2);}

C_noret_decl(trf_7793)
static void C_ccall trf_7793(C_word c,C_word *av) C_noret;
static void C_ccall trf_7793(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7793(t0,t1,t2);}

C_noret_decl(trf_7809)
static void C_ccall trf_7809(C_word c,C_word *av) C_noret;
static void C_ccall trf_7809(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7809(t0,t1,t2);}

C_noret_decl(trf_7856)
static void C_ccall trf_7856(C_word c,C_word *av) C_noret;
static void C_ccall trf_7856(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7856(t0,t1);}

C_noret_decl(trf_7862)
static void C_ccall trf_7862(C_word c,C_word *av) C_noret;
static void C_ccall trf_7862(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7862(t0,t1);}

C_noret_decl(trf_7923)
static void C_ccall trf_7923(C_word c,C_word *av) C_noret;
static void C_ccall trf_7923(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7923(t0,t1);}

C_noret_decl(trf_7928)
static void C_ccall trf_7928(C_word c,C_word *av) C_noret;
static void C_ccall trf_7928(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7928(t0,t1,t2);}

C_noret_decl(trf_8152)
static void C_ccall trf_8152(C_word c,C_word *av) C_noret;
static void C_ccall trf_8152(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8152(t0,t1,t2);}

C_noret_decl(trf_8359)
static void C_ccall trf_8359(C_word c,C_word *av) C_noret;
static void C_ccall trf_8359(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8359(t0,t1,t2);}

C_noret_decl(trf_8393)
static void C_ccall trf_8393(C_word c,C_word *av) C_noret;
static void C_ccall trf_8393(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8393(t0,t1,t2);}

C_noret_decl(trf_8427)
static void C_ccall trf_8427(C_word c,C_word *av) C_noret;
static void C_ccall trf_8427(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8427(t0,t1,t2);}

C_noret_decl(trf_8450)
static void C_ccall trf_8450(C_word c,C_word *av) C_noret;
static void C_ccall trf_8450(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8450(t0,t1,t2);}

C_noret_decl(trf_8473)
static void C_ccall trf_8473(C_word c,C_word *av) C_noret;
static void C_ccall trf_8473(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8473(t0,t1,t2);}

C_noret_decl(trf_8556)
static void C_ccall trf_8556(C_word c,C_word *av) C_noret;
static void C_ccall trf_8556(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8556(t0,t1,t2);}

C_noret_decl(trf_8754)
static void C_ccall trf_8754(C_word c,C_word *av) C_noret;
static void C_ccall trf_8754(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8754(t0,t1,t2);}

/* f9390 in k4712 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f9390(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f9390,c,av);}
/* csi.scm:349: scheme#string-append */
t2=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[80];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* f9394 in k4712 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f9394(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f9394,c,av);}
/* csi.scm:349: scheme#string-append */
t2=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[9],C_text("chicken.csi#default-editor"));
av2[3]=lf[80];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* f9476 in doloop1874 in k7921 in k7918 in k7915 in k7912 in k7909 in k7906 in k7903 in k7900 in k7897 in k7894 in k7890 in k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in k7854 in ... */
static void C_ccall f9476(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9476,c,av);}
/* csi.scm:1098: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[90]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[90]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(10);
av2[3]=*((C_word*)lf[84]+1);
tp(4,av2);}}

/* f9517 in k8212 in k7912 in k7909 in k7906 in k7903 in k7900 in k7897 in k7894 in k7890 in k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in k7854 in k7851 in k7848 in k7677 in ... */
static void C_ccall f9517(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f9517,c,av);}
/* csi.scm:144: chicken.base#print */
t2=*((C_word*)lf[107]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[314];
av2[3]=t1;
av2[4]=lf[315];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* f9543 in k8495 in k7860 in k7857 in k7854 in k7851 in k7848 in k7677 in k7671 in k7662 in k7659 in k7656 in k7653 in k7650 in k7647 in k7644 in k7641 in k5403 in k5080 in k4935 in k4291 in k3948 in ... */
static void C_ccall f9543(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f9543,c,av);}
/* csi.scm:1048: chicken.base#case-sensitive */
t2=C_fast_retrieve(lf[324]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* f9547 in k7848 in k7677 in k7671 in k7662 in k7659 in k7656 in k7653 in k7650 in k7647 in k7644 in k7641 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in ... */
static void C_ccall f9547(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f9547,c,av);}
/* csi.scm:144: chicken.base#print */
t2=*((C_word*)lf[107]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[314];
av2[3]=t1;
av2[4]=lf[315];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k2535 */
static void C_ccall f_2537(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2537,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2540,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k2538 in k2535 */
static void C_ccall f_2540(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_2540,c,av);}
a=C_alloc(13);
t2=C_a_i_provide(&a,1,lf[0]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2543,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8806,tmp=(C_word)a,a+=2,tmp);
/* csi.scm:43: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[403]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[403]+1);
av2[1]=t3;
av2[2]=t4;
tp(3,av2);}}

/* k2541 in k2538 in k2535 */
static void C_ccall f_2543(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2543,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2546,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

/* k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_2546(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2546,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2549,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_file_toplevel(2,av2);}}

/* k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_2549(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2549,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2552,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_internal_toplevel(2,av2);}}

/* k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_2552(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2552,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2555,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_pathname_toplevel(2,av2);}}

/* k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_2555(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2555,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2558,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_port_toplevel(2,av2);}}

/* k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_2558(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2558,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2561,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_posix_toplevel(2,av2);}}

/* k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_2561(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2561,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2564,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_repl_toplevel(2,av2);}}

/* k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_2564(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2564,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2567,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_data_2dstructures_toplevel(2,av2);}}

/* k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_2567(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2567,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2570,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_expand_toplevel(2,av2);}}

/* k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_2570(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_2570,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[1] /* (set! chicken.csi#constant701 ...) */,lf[2]);
t3=C_set_block_item(lf[3] /* ##sys#repl-print-length-limit */,0,C_fix(2048));
t4=C_a_i_cons(&a,2,lf[4],C_fast_retrieve(lf[5]));
t5=C_mutate((C_word*)lf[5]+1 /* (set! ##sys#features ...) */,t4);
t6=C_set_block_item(lf[6] /* ##sys#notices-enabled */,0,C_SCHEME_TRUE);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3860,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:81: chicken.base#make-parameter */
t8=C_fast_retrieve(lf[399]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}

/* loop in loop in k8329 in k7890 in k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in k7854 in k7851 in k7848 in k7677 in k7671 in k7662 in k7659 in k7656 in k7653 in k7650 in ... */
static void C_fcall f_3068(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_3068,3,t0,t1,t2);}
a=C_alloc(4);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_car(t2);
if(C_truep(C_i_string_equal_p(((C_word*)t0)[2],t3))){
/* mini-srfi-1.scm:107: loop */
t7=t1;
t8=C_u_i_cdr(t2);
t1=t7;
t2=t8;
goto loop;}
else{
t4=C_u_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3095,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* mini-srfi-1.scm:109: loop */
t7=t5;
t8=C_u_i_cdr(t2);
t1=t7;
t2=t8;
goto loop;}}}

/* k3093 in loop in loop in k8329 in k7890 in k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in k7854 in k7851 in k7848 in k7677 in k7671 in k7662 in k7659 in k7656 in k7653 in ... */
static void C_ccall f_3095(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_3095,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop in k8329 in k7890 in k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in k7854 in k7851 in k7848 in k7677 in k7671 in k7662 in k7659 in k7656 in k7653 in k7650 in k7647 in ... */
static void C_fcall f_3143(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,0,3)))){
C_save_and_reclaim_args((void *)trf_3143,3,t0,t1,t2);}
a=C_alloc(16);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_car(t2);
t4=C_u_i_cdr(t2);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3157,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3170,a[2]=((C_word*)t0)[2],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3068,a[2]=t3,a[3]=t8,tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_3068(t10,t6,t4);}}

/* k3155 in loop in k8329 in k7890 in k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in k7854 in k7851 in k7848 in k7677 in k7671 in k7662 in k7659 in k7656 in k7653 in k7650 in ... */
static void C_ccall f_3157(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_3157,c,av);}
a=C_alloc(3);
t2=C_i_equalp(((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(C_truep(t2)?((C_word*)t0)[4]:C_a_i_cons(&a,2,((C_word*)t0)[5],t1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3168 in loop in k8329 in k7890 in k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in k7854 in k7851 in k7848 in k7677 in k7671 in k7662 in k7659 in k7656 in k7653 in k7650 in ... */
static void C_ccall f_3170(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3170,c,av);}
/* mini-srfi-1.scm:123: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3143(t2,((C_word*)t0)[3],t1);}

/* k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_3860(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3860,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[7]+1 /* (set! chicken.csi#editor-command ...) */,t1);
t3=lf[8] /* chicken.csi#selected-frame */ =C_SCHEME_FALSE;;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3865,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:85: chicken.process-context#get-environment-variable */
t5=C_fast_retrieve(lf[23]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[398];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_3865(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_3865,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3868,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=t2;
f_3868(t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8795,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:86: chicken.process-context#get-environment-variable */
t4=C_fast_retrieve(lf[23]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[397];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_fcall f_3868(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_3868,2,t0,t1);}
a=C_alloc(7);
t2=C_mutate(&lf[9] /* (set! chicken.csi#default-editor ...) */,t1);
t3=C_mutate(&lf[10] /* (set! chicken.csi#dirseparator? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3908,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate(&lf[12] /* (set! chicken.csi#chop-separator ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3923,tmp=(C_word)a,a+=2,tmp));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3950,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[393]);
C_word av2[4];
av2[0]=*((C_word*)lf[393]+1);
av2[1]=t5;
av2[2]=C_fix(256);
av2[3]=C_make_character(32);
tp(4,av2);}}

/* k3872 in k8546 in k7677 in k7671 in k7662 in k7659 in k7656 in k7653 in k7650 in k7647 in k7644 in k7641 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in ... */
static void C_ccall f_3874(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_3874,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3877,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3884,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_cons(&a,2,lf[353],C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,C_retrieve2(lf[1],C_text("chicken.csi#constant701")),t4);
t6=C_a_i_cons(&a,2,lf[354],t5);
/* csi.scm:43: ##sys#print-to-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[355]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[355]+1);
av2[1]=t3;
av2[2]=t6;
tp(3,av2);}}

/* k3875 in k3872 in k8546 in k7677 in k7671 in k7662 in k7659 in k7656 in k7653 in k7650 in k7647 in k7644 in k7641 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in ... */
static void C_ccall f_3877(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3877,c,av);}
/* csi.scm:121: scheme#display */
t2=*((C_word*)lf[94]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[352];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k3882 in k3872 in k8546 in k7677 in k7671 in k7662 in k7659 in k7656 in k7653 in k7650 in k7647 in k7644 in k7641 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in ... */
static void C_ccall f_3884(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3884,c,av);}
/* csi.scm:116: scheme#display */
t2=*((C_word*)lf[94]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* chicken.csi#dirseparator? in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_3908(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3908,c,av);}
if(C_truep(*((C_word*)lf[11]+1))){
t3=C_i_char_equalp(t2,C_make_character(92));
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=(C_truep(t3)?t3:C_i_char_equalp(t2,C_make_character(47)));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_char_equalp(t2,C_make_character(47));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* chicken.csi#chop-separator in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_3923(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_3923,c,av);}
a=C_alloc(10);
t3=C_block_size(t2);
t4=C_a_i_fixnum_difference(&a,2,t3,C_fix(1));
t5=C_i_string_ref(t2,t4);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3937,a[2]=t1,a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_fixnum_greaterp(t4,C_fix(0)))){
/* csi.scm:158: dirseparator? */
t7=C_retrieve2(lf[10],C_text("chicken.csi#dirseparator\077"));{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
av2[2]=t5;
f_3908(3,av2);}}
else{
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* k3935 in chicken.csi#chop-separator in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_3937(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3937,c,av);}
if(C_truep(t1)){
/* csi.scm:159: substring */
t2=*((C_word*)lf[13]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_fix(0);
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_3950(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(49,c,3)))){
C_save_and_reclaim((void *)f_3950,c,av);}
a=C_alloc(49);
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3969,tmp=(C_word)a,a+=2,tmp);
t3=C_mutate(&lf[17] /* (set! chicken.csi#lookup-script-file ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4020,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp));
t4=C_SCHEME_UNDEFINED;
t5=C_a_i_vector(&a,32,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4);
t6=C_mutate(&lf[25] /* (set! chicken.csi#history-list ...) */,t5);
t7=lf[26] /* chicken.csi#history-count */ =C_fix(1);;
t8=C_fast_retrieve(lf[27]);
t9=C_mutate(&lf[28] /* (set! chicken.csi#history-add ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4127,a[2]=t8,tmp=(C_word)a,a+=3,tmp));
t10=C_mutate(&lf[30] /* (set! chicken.csi#history-ref ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4226,tmp=(C_word)a,a+=2,tmp));
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4293,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t12=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8773,tmp=(C_word)a,a+=2,tmp);
/* csi.scm:246: chicken.repl#repl-prompt */
t13=C_fast_retrieve(lf[392]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t13;
av2[1]=t11;
av2[2]=t12;
((C_proc)(void*)(*((C_word*)t13+1)))(3,av2);}}

/* addext in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_fcall f_3969(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_3969,2,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3976,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:169: chicken.file#file-exists? */
t4=C_fast_retrieve(lf[14]);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3974 in addext in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_3976(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3976,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3979,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[15]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[15]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[16];
tp(4,av2);}}}

/* k3977 in k3974 in addext in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_3979(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3979,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3985,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:172: chicken.file#file-exists? */
t3=C_fast_retrieve(lf[14]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k3983 in k3977 in k3974 in addext in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_3985(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3985,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(t1)?((C_word*)t0)[3]:C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop in k4034 in k4022 in chicken.csi#lookup-script-file in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_fcall f_3998(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3998,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4011,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:177: proc */
t4=C_retrieve2(lf[10],C_text("chicken.csi#dirseparator\077"));{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_subchar(((C_word*)t0)[4],t2);
f_3908(3,av2);}}}

/* k4009 in loop in k4034 in k4022 in chicken.csi#lookup-script-file in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_4011(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4011,c,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* csi.scm:178: loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3998(t2,((C_word*)t0)[2],C_fixnum_plus(((C_word*)t0)[3],C_fix(1)));}}

/* chicken.csi#lookup-script-file in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_fcall f_4020(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_4020,3,t0,t1,t2);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4024,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:180: chicken.process-context#get-environment-variable */
t4=C_fast_retrieve(lf[23]);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[24];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4022 in chicken.csi#lookup-script-file in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_4024(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_4024,c,av);}
a=C_alloc(7);
t2=C_block_size(((C_word*)t0)[2]);
if(C_truep(C_fixnum_greaterp(t2,C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4036,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* csi.scm:182: dirseparator? */
t4=C_retrieve2(lf[10],C_text("chicken.csi#dirseparator\077"));{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_i_string_ref(((C_word*)t0)[2],C_fix(0));
f_3908(3,av2);}}
else{
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4034 in k4022 in chicken.csi#lookup-script-file in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_4036(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_4036,c,av);}
a=C_alloc(14);
if(C_truep(t1)){
/* csi.scm:182: addext */
f_3969(((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4045,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_retrieve2(lf[10],C_text("chicken.csi#dirseparator\077"));
t4=C_block_size(((C_word*)t0)[4]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3998,a[2]=t4,a[3]=t6,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_3998(t8,t2,C_fix(0));}}

/* k4043 in k4034 in k4022 in chicken.csi#lookup-script-file in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_4045(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_4045,c,av);}
a=C_alloc(10);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4048,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_a_i_bytevector(&a,1,C_fix(3));
t4=(C_truep(((C_word*)t0)[5])?C_i_foreign_block_argumentp(((C_word*)t0)[5]):C_SCHEME_FALSE);
t5=C_fix(256);
/* csi.scm:167: ##sys#peek-nonnull-c-string */
t6=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t2;
av2[2]=stub733(t3,t4,t5);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4062,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:186: addext */
f_3969(t2,((C_word*)t0)[4]);}}

/* k4046 in k4043 in k4034 in k4022 in chicken.csi#lookup-script-file in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_4048(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_4048,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4055,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4059,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:185: chop-separator */
t4=C_retrieve2(lf[12],C_text("chicken.csi#chop-separator"));{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t1;
f_3923(3,av2);}}

/* k4053 in k4046 in k4043 in k4034 in k4022 in chicken.csi#lookup-script-file in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 in ... */
static void C_ccall f_4055(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4055,c,av);}
/* csi.scm:185: addext */
f_3969(((C_word*)t0)[3],t1);}

/* k4057 in k4046 in k4043 in k4034 in k4022 in chicken.csi#lookup-script-file in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 in ... */
static void C_ccall f_4059(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4059,c,av);}
/* csi.scm:185: scheme#string-append */
t2=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[19];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k4060 in k4043 in k4034 in k4022 in chicken.csi#lookup-script-file in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_4062(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4062,c,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4068,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[15]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[15]+1);
av2[1]=t2;
av2[2]=lf[22];
av2[3]=((C_word*)t0)[5];
tp(4,av2);}}}

/* k4066 in k4060 in k4043 in k4034 in k4022 in chicken.csi#lookup-script-file in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 in ... */
static void C_ccall f_4068(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4068,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4075,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:189: ##sys#split-path */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[21]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[21]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}

/* k4073 in k4066 in k4060 in k4043 in k4034 in k4022 in chicken.csi#lookup-script-file in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in ... */
static void C_ccall f_4075(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_4075,c,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4077,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_4077(t5,((C_word*)t0)[4],t1);}

/* loop in k4073 in k4066 in k4060 in k4043 in k4034 in k4022 in chicken.csi#lookup-script-file in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in ... */
static void C_fcall f_4077(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_4077,3,t0,t1,t2);}
a=C_alloc(10);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4087,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4104,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:191: chop-separator */
t5=C_retrieve2(lf[12],C_text("chicken.csi#chop-separator"));{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=C_slot(t2,C_fix(0));
f_3923(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4085 in loop in k4073 in k4066 in k4060 in k4043 in k4034 in k4022 in chicken.csi#lookup-script-file in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in ... */
static void C_ccall f_4087(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4087,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4090,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:192: addext */
f_3969(t2,t1);}

/* k4088 in k4085 in loop in k4073 in k4066 in k4060 in k4043 in k4034 in k4022 in chicken.csi#lookup-script-file in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in ... */
static void C_ccall f_4090(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4090,c,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* csi.scm:193: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_4077(t2,((C_word*)t0)[2],C_slot(((C_word*)t0)[4],C_fix(1)));}}

/* k4102 in loop in k4073 in k4066 in k4060 in k4043 in k4034 in k4022 in chicken.csi#lookup-script-file in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in ... */
static void C_ccall f_4104(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4104,c,av);}
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[15]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[15]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* chicken.csi#history-add in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_fcall f_4127(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_4127,3,t0,t1,t2);}
a=C_alloc(7);
t3=C_i_nullp(t2);
t4=(C_truep(t3)?*((C_word*)lf[29]+1):C_slot(t2,C_fix(0)));
t5=C_block_size(C_retrieve2(lf[25],C_text("chicken.csi#history-list")));
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4137,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(C_retrieve2(lf[26],C_text("chicken.csi#history-count")),t5))){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4151,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:208: vector-resize */
t8=((C_word*)t0)[2];{
C_word av2[4];
av2[0]=t8;
av2[1]=t7;
av2[2]=C_retrieve2(lf[25],C_text("chicken.csi#history-list"));
av2[3]=C_fixnum_times(C_fix(2),t5);
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}
else{
t7=t6;
f_4137(t7,C_SCHEME_UNDEFINED);}}

/* k4135 in chicken.csi#history-add in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_fcall f_4137(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,1)))){
C_save_and_reclaim_args((void *)trf_4137,2,t0,t1);}
t2=C_i_vector_set(C_retrieve2(lf[25],C_text("chicken.csi#history-list")),C_retrieve2(lf[26],C_text("chicken.csi#history-count")),((C_word*)t0)[2]);
t3=C_fixnum_plus(C_retrieve2(lf[26],C_text("chicken.csi#history-count")),C_fix(1));
t4=lf[26] /* chicken.csi#history-count */ =t3;;
t5=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t5;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k4149 in chicken.csi#history-add in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_4151(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4151,c,av);}
t2=C_mutate(&lf[25] /* (set! chicken.csi#history-list ...) */,t1);
t3=((C_word*)t0)[2];
f_4137(t3,t2);}

/* doloop790 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_fcall f_4182(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_4182,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_greater_or_equalp(t2,C_retrieve2(lf[26],C_text("chicken.csi#history-count"))))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=*((C_word*)lf[84]+1);
t4=*((C_word*)lf[84]+1);
t5=C_i_check_port_2(*((C_word*)lf[84]+1),C_fix(2),C_SCHEME_TRUE,lf[85]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4195,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* csi.scm:221: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[90]);
C_word av2[4];
av2[0]=*((C_word*)lf[90]+1);
av2[1]=t6;
av2[2]=C_make_character(35);
av2[3]=*((C_word*)lf[84]+1);
tp(4,av2);}}}

/* k4193 in doloop790 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_4195(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_4195,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4198,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:221: ##sys#print */
t3=*((C_word*)lf[87]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4196 in k4193 in doloop790 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_4198(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_4198,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4201,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:221: ##sys#print */
t3=*((C_word*)lf[87]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[89];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4199 in k4196 in k4193 in doloop790 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 in ... */
static void C_ccall f_4201(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_4201,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4204,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4216,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:222: ##sys#with-print-length-limit */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[88]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[88]+1);
av2[1]=t2;
av2[2]=C_fix(80);
av2[3]=t3;
tp(4,av2);}}

/* k4202 in k4199 in k4196 in k4193 in doloop790 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in ... */
static void C_ccall f_4204(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4204,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4207,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:226: newline */
t3=*((C_word*)lf[86]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k4205 in k4202 in k4199 in k4196 in k4193 in doloop790 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in ... */
static void C_ccall f_4207(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4207,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_4182(t2,((C_word*)t0)[3],C_fixnum_plus(((C_word*)t0)[4],C_fix(1)));}

/* a4215 in k4199 in k4196 in k4193 in doloop790 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in ... */
static void C_ccall f_4216(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4216,c,av);}
/* csi.scm:225: ##sys#print */
t2=*((C_word*)lf[87]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=C_i_vector_ref(C_retrieve2(lf[25],C_text("chicken.csi#history-list")),((C_word*)t0)[2]);
av2[3]=C_SCHEME_TRUE;
av2[4]=*((C_word*)lf[84]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* chicken.csi#history-ref in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_fcall f_4226(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_4226,2,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4230,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:229: scheme#inexact->exact */
t4=*((C_word*)lf[33]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4228 in chicken.csi#history-ref in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_4230(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4230,c,av);}
t2=C_fixnum_greaterp(t1,C_fix(0));
t3=(C_truep(t2)?C_fixnum_less_or_equal_p(t1,C_retrieve2(lf[26],C_text("chicken.csi#history-count"))):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_vector_ref(C_retrieve2(lf[25],C_text("chicken.csi#history-list")),t1);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* csi.scm:232: ##sys#error */
t4=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[32];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* ##sys#user-read-hook in doloop1874 in k7921 in k7918 in k7915 in k7912 in k7909 in k7906 in k7903 in k7900 in k7897 in k7894 in k7890 in k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in k7854 in ... */
static void C_ccall f_4253(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4253,c,av);}
a=C_alloc(3);
t4=C_i_char_equalp(C_make_character(41),t2);
t5=(C_truep(t4)?t4:C_u_i_char_whitespacep(t2));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4270,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:241: history-ref */
f_4226(t6,C_fixnum_difference(C_retrieve2(lf[26],C_text("chicken.csi#history-count")),C_fix(1)));}
else{
/* csi.scm:242: old-hook */
t6=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
((C_proc)C_fast_retrieve_proc(t6))(4,av2);}}}

/* k4268 in ##sys#user-read-hook in doloop1874 in k7921 in k7918 in k7915 in k7912 in k7909 in k7906 in k7903 in k7900 in k7897 in k7894 in k7890 in k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in ... */
static void C_ccall f_4270(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_4270,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,2,lf[275],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* ##sys#sharp-number-hook in doloop1874 in k7921 in k7918 in k7915 in k7912 in k7909 in k7906 in k7903 in k7900 in k7897 in k7894 in k7890 in k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in k7854 in ... */
static void C_ccall f_4282(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4282,c,av);}
a=C_alloc(3);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4290,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:244: history-ref */
f_4226(t4,t3);}

/* k4288 in ##sys#sharp-number-hook in doloop1874 in k7921 in k7918 in k7915 in k7912 in k7909 in k7906 in k7903 in k7900 in k7897 in k7894 in k7890 in k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in ... */
static void C_ccall f_4290(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_4290,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,2,lf[275],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_4293(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,4)))){
C_save_and_reclaim((void *)f_4293,c,av);}
a=C_alloc(18);
t2=C_set_block_item(lf[34] /* ##sys#break-on-error */,0,C_SCHEME_FALSE);
t3=C_fast_retrieve(lf[35]);
t4=C_mutate((C_word*)lf[35]+1 /* (set! ##sys#read-prompt-hook ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4305,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=lf[38] /* chicken.csi#command-table */ =C_SCHEME_END_OF_LIST;;
t6=C_mutate((C_word*)lf[39]+1 /* (set! chicken.csi#toplevel-command ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4318,tmp=(C_word)a,a+=2,tmp));
t7=C_fast_retrieve(lf[41]);
t8=C_fast_retrieve(lf[42]);
t9=C_fast_retrieve(lf[43]);
t10=C_fast_retrieve(lf[44]);
t11=C_fast_retrieve(lf[45]);
t12=*((C_word*)lf[46]+1);
t13=C_mutate(&lf[47] /* (set! chicken.csi#csi-eval ...) */,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4368,a[2]=t11,a[3]=t10,a[4]=t9,a[5]=t8,a[6]=t7,a[7]=t12,tmp=(C_word)a,a+=8,tmp));
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4937,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t15=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8731,tmp=(C_word)a,a+=2,tmp);
/* csi.scm:415: toplevel-command */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[39]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[39]+1);
av2[1]=t14;
av2[2]=lf[385];
av2[3]=t15;
av2[4]=lf[386];
tp(5,av2);}}

/* ##sys#read-prompt-hook in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_4305(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4305,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4312,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_i_tty_forcedp();
if(C_truep(t3)){
if(C_truep(t3)){
/* csi.scm:268: old */
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
/* csi.scm:261: ##sys#tty-port? */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[36]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[36]+1);
av2[1]=t2;
av2[2]=*((C_word*)lf[37]+1);
tp(3,av2);}}}

/* k4310 in ##sys#read-prompt-hook in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_4312(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4312,c,av);}
if(C_truep(t1)){
/* csi.scm:268: old */
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* chicken.csi#toplevel-command in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_4318(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_4318,c,av);}
a=C_alloc(12);
t4=C_rest_nullp(c,4);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_get_rest_arg(c,4,av,4,t0));
t6=C_i_check_symbol_2(t2,lf[40]);
t7=(C_truep(t5)?C_i_check_string_2(t5,lf[40]):C_SCHEME_UNDEFINED);
t8=C_i_assq(t2,C_retrieve2(lf[38],C_text("chicken.csi#command-table")));
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4338,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t10=(
/* csi.scm:275: g855 */
  f_4338(C_a_i(&a,6),t9,t8)
);
t11=t1;{
C_word *av2=av;
av2[0]=t11;
av2[1]=*((C_word*)lf[29]+1);
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}
else{
t9=C_a_i_list3(&a,3,t2,t3,t5);
t10=C_a_i_cons(&a,2,t9,C_retrieve2(lf[38],C_text("chicken.csi#command-table")));
t11=C_mutate(&lf[38] /* (set! chicken.csi#command-table ...) */,t10);
t12=t1;{
C_word *av2=av;
av2[0]=t12;
av2[1]=*((C_word*)lf[29]+1);
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}}

/* g855 in chicken.csi#toplevel-command in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static C_word C_fcall f_4338(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
return(C_i_set_cdr(t1,t2));}

/* chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_4368(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word t23;
C_word t24;
C_word t25;
C_word t26;
C_word t27;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_4368,c,av);}
a=C_alloc(10);
if(C_truep(C_eofp(t2))){
/* csi.scm:294: chicken.base#exit */
t3=C_fast_retrieve(lf[48]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_pairp(t2);
t4=(C_truep(t3)?C_eqp(lf[49],C_slot(t2,C_fix(0))):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=C_i_cadr(t2);
t6=C_i_assq(t5,C_retrieve2(lf[38],C_text("chicken.csi#command-table")));
if(C_truep(t6)){
t7=C_i_cadr(t6);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4401,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:299: g888 */
t9=t7;{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
((C_proc)C_fast_retrieve_proc(t9))(2,av2);}}
else{
t7=C_eqp(t5,lf[50]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4416,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:306: read */
t9=*((C_word*)lf[52]+1);{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t8=C_eqp(t5,lf[53]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4439,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:310: read */
t10=*((C_word*)lf[52]+1);{
C_word *av2=av;
av2[0]=t10;
av2[1]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
t9=C_eqp(t5,lf[55]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4457,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:315: read */
t11=*((C_word*)lf[52]+1);{
C_word *av2=av;
av2[0]=t11;
av2[1]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}
else{
t10=C_eqp(t5,lf[57]);
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4472,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:319: read */
t12=*((C_word*)lf[52]+1);{
C_word *av2=av;
av2[0]=t12;
av2[1]=t11;
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}
else{
t11=C_eqp(t5,lf[59]);
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4487,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:323: read */
t13=*((C_word*)lf[52]+1);{
C_word *av2=av;
av2[0]=t13;
av2[1]=t12;
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}
else{
t12=C_eqp(t5,lf[60]);
if(C_truep(t12)){
/* csi.scm:328: report */
t13=C_retrieve2(lf[61],C_text("chicken.csi#report"));
f_5083(t13,t1,C_SCHEME_END_OF_LIST);}
else{
t13=C_eqp(t5,lf[62]);
if(C_truep(t13)){
/* csi.scm:329: chicken.repl#quit */
t14=C_fast_retrieve(lf[63]);{
C_word *av2=av;
av2[0]=t14;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t14+1)))(2,av2);}}
else{
t14=C_eqp(t5,lf[64]);
if(C_truep(t14)){
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4526,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t16=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4559,a[2]=((C_word*)t0)[4],a[3]=t15,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:331: read-line */
t17=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t17;
av2[1]=t16;
((C_proc)(void*)(*((C_word*)t17+1)))(2,av2);}}
else{
t15=C_eqp(t5,lf[66]);
if(C_truep(t15)){
t16=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4568,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[6],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t17=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4615,a[2]=((C_word*)t0)[4],a[3]=t16,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:335: read-line */
t18=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t18;
av2[1]=t17;
((C_proc)(void*)(*((C_word*)t18+1)))(2,av2);}}
else{
t16=C_eqp(t5,lf[70]);
if(C_truep(t16)){
t17=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4624,a[2]=((C_word*)t0)[7],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:339: read */
t18=*((C_word*)lf[52]+1);{
C_word *av2=av;
av2[0]=t18;
av2[1]=t17;
((C_proc)(void*)(*((C_word*)t18+1)))(2,av2);}}
else{
t17=C_eqp(t5,lf[74]);
if(C_truep(t17)){
if(C_truep(C_fast_retrieve(lf[75]))){
t18=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4676,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t19=C_a_i_list1(&a,1,C_fast_retrieve(lf[75]));
/* csi.scm:345: history-add */
t20=C_retrieve2(lf[28],C_text("chicken.csi#history-add"));
f_4127(t20,t18,t19);}
else{
t18=C_SCHEME_UNDEFINED;
t19=t1;{
C_word *av2=av;
av2[0]=t19;
av2[1]=t18;
((C_proc)(void*)(*((C_word*)t19+1)))(2,av2);}}}
else{
t18=C_eqp(t5,lf[76]);
if(C_truep(t18)){
t19=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4692,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t20=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4710,a[2]=t19,tmp=(C_word)a,a+=3,tmp);
t21=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4714,a[2]=t20,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:350: editor-command */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[7]);
C_word *av2=av;
av2[0]=*((C_word*)lf[7]+1);
av2[1]=t21;
tp(2,av2);}}
else{
t19=C_eqp(t5,lf[81]);
if(C_truep(t19)){
t20=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4730,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t21=*((C_word*)lf[29]+1);
/* csi.scm:214: scheme#vector-fill! */
t22=*((C_word*)lf[82]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t22;
av2[1]=t20;
av2[2]=C_retrieve2(lf[25],C_text("chicken.csi#history-list"));
av2[3]=*((C_word*)lf[29]+1);
((C_proc)(void*)(*((C_word*)t22+1)))(4,av2);}}
else{
t20=C_eqp(t5,lf[83]);
if(C_truep(t20)){
t21=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4742,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t22=C_SCHEME_UNDEFINED;
t23=(*a=C_VECTOR_TYPE|1,a[1]=t22,tmp=(C_word)a,a+=2,tmp);
t24=C_set_block_item(t23,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4182,a[2]=t23,tmp=(C_word)a,a+=3,tmp));
t25=((C_word*)t23)[1];
f_4182(t25,t21,C_fix(1));}
else{
t21=C_eqp(t5,lf[91]);
if(C_truep(t21)){
t22=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4754,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:361: show-frameinfo */
f_6799(t22,C_retrieve2(lf[8],C_text("chicken.csi#selected-frame")));}
else{
t22=C_eqp(t5,lf[93]);
if(C_truep(t22)){
t23=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4766,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t24=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4773,a[2]=t23,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:364: read */
t25=*((C_word*)lf[52]+1);{
C_word *av2=av;
av2[0]=t25;
av2[1]=t24;
((C_proc)(void*)(*((C_word*)t25+1)))(2,av2);}}
else{
t23=C_eqp(t5,lf[97]);
if(C_truep(t23)){
t24=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4786,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:367: read */
t25=*((C_word*)lf[52]+1);{
C_word *av2=av;
av2[0]=t25;
av2[1]=t24;
((C_proc)(void*)(*((C_word*)t25+1)))(2,av2);}}
else{
t24=C_eqp(t5,lf[105]);
if(C_truep(t24)){
t25=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4795,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:369: read-line */
t26=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t26;
av2[1]=t25;
((C_proc)(void*)(*((C_word*)t26+1)))(2,av2);}}
else{
t25=C_eqp(t5,lf[106]);
if(C_truep(t25)){
t26=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4814,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:374: display */
t27=*((C_word*)lf[94]+1);{
C_word *av2=av;
av2[0]=t27;
av2[1]=t26;
av2[2]=lf[109];
((C_proc)(void*)(*((C_word*)t27+1)))(3,av2);}}
else{
t26=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4865,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:405: printf */
t27=*((C_word*)lf[77]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t27;
av2[1]=t26;
av2[2]=lf[110];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t27+1)))(4,av2);}}}}}}}}}}}}}}}}}}}}}}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4911,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4917,a[2]=((C_word*)t0)[7],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:408: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=t5;
av2[3]=t6;
C_call_with_values(4,av2);}}}}

/* k4399 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_4401(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4401,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=*((C_word*)lf[29]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4414 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_4416(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_4416,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4419,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4426,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4430,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:307: expand */
t5=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k4417 in k4414 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_4419(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4419,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=*((C_word*)lf[29]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4424 in k4414 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_4426(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4426,c,av);}
/* csi.scm:307: pretty-print */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k4428 in k4414 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_4430(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4430,c,av);}
/* csi.scm:307: chicken.syntax#strip-syntax */
t2=C_fast_retrieve(lf[51]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k4437 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_4439(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4439,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4442,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:311: eval */
t3=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k4440 in k4437 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_4442(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4442,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4445,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:312: pretty-print */
t3=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k4443 in k4440 in k4437 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_4445(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4445,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=*((C_word*)lf[29]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4455 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_4457(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4457,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4460,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:316: eval */
t3=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k4458 in k4455 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_4460(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4460,c,av);}
/* csi.scm:317: describe */
t2=C_retrieve2(lf[56],C_text("chicken.csi#describe"));
f_5407(t2,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k4470 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_4472(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4472,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4475,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:320: eval */
t3=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k4473 in k4470 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_4475(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4475,c,av);}
/* csi.scm:321: dump */
f_6446(((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k4485 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_4487(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4487,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4490,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:324: read */
t3=*((C_word*)lf[52]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k4488 in k4485 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_4490(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4490,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4493,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:325: eval */
t3=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k4491 in k4488 in k4485 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_4493(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4493,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4496,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:326: eval */
t3=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k4494 in k4491 in k4488 in k4485 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 in ... */
static void C_ccall f_4496(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4496,c,av);}
a=C_alloc(3);
/* csi.scm:327: dump */
f_6446(((C_word*)t0)[2],((C_word*)t0)[3],C_a_i_list(&a,1,t1));}

/* k4524 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_4526(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_4526,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4529,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4534,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_4534(t6,t2,t1);}

/* k4527 in k4524 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_4529(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4529,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=*((C_word*)lf[29]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* for-each-loop913 in k4524 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_fcall f_4534(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_4534,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4544,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:332: g914 */
t4=*((C_word*)lf[65]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_slot(t2,C_fix(0));
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4542 in for-each-loop913 in k4524 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_4544(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4544,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_4534(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k4557 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_4559(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4559,c,av);}
/* csi.scm:331: string-split */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k4566 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_4568(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_4568,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4569,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4585,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4590,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_4590(t7,t3,t1);}

/* g933 in k4566 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_fcall f_4569(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,4)))){
C_save_and_reclaim_args((void *)trf_4569,3,t0,t1,t2);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4575,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:336: g948 */
t4=((C_word*)t0)[3];{
C_word av2[5];
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=lf[69];
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* a4574 in g933 in k4566 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_4575(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4575,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4579,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:336: pretty-print */
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4577 in a4574 in g933 in k4566 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 in ... */
static void C_ccall f_4579(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4579,c,av);}
/* csi.scm:336: chicken.base#print* */
t2=*((C_word*)lf[67]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[68];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k4583 in k4566 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_4585(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4585,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=*((C_word*)lf[29]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* for-each-loop932 in k4566 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_fcall f_4590(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_4590,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4600,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:336: g933 */
t4=((C_word*)t0)[3];
f_4569(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4598 in for-each-loop932 in k4566 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_4600(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4600,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_4590(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k4613 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_4615(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4615,c,av);}
/* csi.scm:335: string-split */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k4622 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_4624(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4624,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4629,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4657,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:340: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}

/* a4628 in k4622 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_4629(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4629,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4633,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:340: ##sys#start-timer */
t3=*((C_word*)lf[73]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k4631 in a4628 in k4622 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_4633(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4633,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4638,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4644,tmp=(C_word)a,a+=2,tmp);
/* csi.scm:340: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}

/* a4637 in k4631 in a4628 in k4622 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 in ... */
static void C_ccall f_4638(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4638,c,av);}
/* csi.scm:340: eval */
t2=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* a4643 in k4631 in a4628 in k4622 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 in ... */
static void C_ccall f_4644(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +7,c,2)))){
C_save_and_reclaim((void*)f_4644,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+7);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4648,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4655,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:340: ##sys#stop-timer */
t5=*((C_word*)lf[72]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k4646 in a4643 in k4631 in a4628 in k4622 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in ... */
static void C_ccall f_4648(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4648,c,av);}{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
C_apply_values(3,av2);}}

/* k4653 in a4643 in k4631 in a4628 in k4622 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in ... */
static void C_ccall f_4655(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4655,c,av);}
/* csi.scm:340: ##sys#display-times */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[71]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[71]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* a4656 in k4622 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_4657(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +5,c,2)))){
C_save_and_reclaim((void*)f_4657,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+5);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4661,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:341: history-add */
t4=C_retrieve2(lf[28],C_text("chicken.csi#history-add"));
f_4127(t4,t3,t2);}

/* k4659 in a4656 in k4622 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_4661(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4661,c,av);}{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
C_apply(4,av2);}}

/* k4674 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_4676(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4676,c,av);}
/* csi.scm:346: describe */
t2=C_retrieve2(lf[56],C_text("chicken.csi#describe"));
f_5407(t2,((C_word*)t0)[2],C_fast_retrieve(lf[75]),C_SCHEME_END_OF_LIST);}

/* k4690 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_4692(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4692,c,av);}
t2=C_eqp(t1,C_fix(0));
if(C_truep(C_i_not(t2))){
/* csi.scm:353: printf */
t3=*((C_word*)lf[77]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[78];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4708 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_4710(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4710,c,av);}
/* csi.scm:348: chicken.process#system */
t2=C_fast_retrieve(lf[79]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k4712 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_4714(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4714,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f9390,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:351: read-line */
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=C_retrieve2(lf[9],C_text("chicken.csi#default-editor"));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9394,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:351: read-line */
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4728 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_4730(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4730,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=*((C_word*)lf[29]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4740 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_4742(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4742,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=*((C_word*)lf[29]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4752 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_4754(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4754,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=*((C_word*)lf[29]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4764 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_4766(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4766,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=*((C_word*)lf[29]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4771 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_4773(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4773,c,av);}
a=C_alloc(4);
t2=C_i_numberp(t1);
t3=C_i_not(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7084,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t5=t4;
f_7084(t5,t3);}
else{
t5=C_i_not(C_fast_retrieve(lf[96]));
if(C_truep(t5)){
t6=t4;
f_7084(t6,t5);}
else{
t6=C_fixnum_lessp(t1,C_fix(0));
t7=t4;
f_7084(t7,(C_truep(t6)?t6:C_fixnum_greater_or_equal_p(t1,C_i_length(C_fast_retrieve(lf[96])))));}}}

/* k4784 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_4786(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_4786,c,av);}
a=C_alloc(7);
t2=C_fast_retrieve(lf[96]);
t3=(C_truep(C_fast_retrieve(lf[96]))?C_fast_retrieve(lf[96]):C_SCHEME_END_OF_LIST);
t4=C_i_length(t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7141,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_symbolp(t1))){
t6=t5;
f_7141(t6,C_slot(t1,C_fix(1)));}
else{
if(C_truep(C_i_stringp(t1))){
t6=t5;
f_7141(t6,t1);}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7368,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:865: display */
t7=*((C_word*)lf[94]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[104];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}}}

/* k4793 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_4795(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4795,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4798,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:370: chicken.process#system */
t3=C_fast_retrieve(lf[79]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k4796 in k4793 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_4798(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_4798,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4801,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_list1(&a,1,t1);
/* csi.scm:371: history-add */
t4=C_retrieve2(lf[28],C_text("chicken.csi#history-add"));
f_4127(t4,t2,t3);}

/* k4799 in k4796 in k4793 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_4801(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4801,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4812 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_4814(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_4814,c,av);}
a=C_alloc(8);
t2=C_retrieve2(lf[38],C_text("chicken.csi#command-table"));
t3=C_i_check_list_2(C_retrieve2(lf[38],C_text("chicken.csi#command-table")),lf[101]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4836,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4841,a[2]=t6,tmp=(C_word)a,a+=3,tmp));
t8=((C_word*)t6)[1];
f_4841(t8,t4,C_retrieve2(lf[38],C_text("chicken.csi#command-table")));}

/* k4834 in k4812 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_4836(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4836,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=*((C_word*)lf[29]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* for-each-loop979 in k4812 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_fcall f_4841(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_4841,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4851,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_i_caddr(t4);
if(C_truep(t5)){
/* csi.scm:400: chicken.base#print */
t6=*((C_word*)lf[107]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t3;
av2[2]=C_make_character(32);
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
/* csi.scm:401: chicken.base#print */
t6=*((C_word*)lf[107]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t3;
av2[2]=lf[108];
av2[3]=C_u_i_car(t4);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4849 in for-each-loop979 in k4812 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_4851(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4851,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_4841(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k4863 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_4865(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4865,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=*((C_word*)lf[29]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a4910 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_4911(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4911,c,av);}
/* csi.scm:408: eval */
t2=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* a4916 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_4917(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +5,c,2)))){
C_save_and_reclaim((void*)f_4917,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+5);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4921,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:409: history-add */
t4=C_retrieve2(lf[28],C_text("chicken.csi#history-add"));
f_4127(t4,t3,t2);}

/* k4919 in a4916 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_4921(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4921,c,av);}{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
C_apply(4,av2);}}

/* k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_4937(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_4937,c,av);}
a=C_alloc(9);
t2=C_fast_retrieve(lf[111]);
t3=C_fast_retrieve(lf[112]);
t4=C_fast_retrieve(lf[113]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5082,a[2]=t4,a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* ##sys#peek-c-string */
t6=*((C_word*)lf[378]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_PREFIX);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k4941 in k8709 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 in ... */
static void C_ccall f_4943(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_4943,c,av);}
a=C_alloc(14);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4966,a[2]=t4,a[3]=t5,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5011,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:442: scheme#call-with-current-continuation */
t8=*((C_word*)lf[375]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t6;
av2[2]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}

/* k4955 in map-loop1019 in k4967 in k4964 in k4941 in k8709 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in ... */
static void C_ccall f_4957(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_4957,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4960,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:440: scheme#write */
t3=*((C_word*)lf[175]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k4958 in k4955 in map-loop1019 in k4967 in k4964 in k4941 in k8709 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in ... */
static void C_ccall f_4960(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4960,c,av);}
/* csi.scm:441: chicken.base#get-output-string */
t2=C_fast_retrieve(lf[370]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k4964 in k4941 in k8709 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in ... */
static void C_ccall f_4966(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4966,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4969,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:442: g1042 */
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k4967 in k4964 in k4941 in k8709 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in ... */
static void C_ccall f_4969(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_4969,c,av);}
a=C_alloc(7);
t2=C_i_check_list_2(t1,lf[134]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4977,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_4977(t6,((C_word*)t0)[4],t1);}

/* map-loop1019 in k4967 in k4964 in k4941 in k8709 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in ... */
static void C_fcall f_4977(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,0,2)))){
C_save_and_reclaim_args((void *)trf_4977,3,t0,t1,t2);}
a=C_alloc(13);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4987,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5002,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_slot(t2,C_fix(0));
if(C_truep(C_i_stringp(t5))){
t6=t3;
f_4987(t6,C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST));}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4957,a[2]=t4,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:439: chicken.base#open-output-string */
t7=C_fast_retrieve(lf[371]);{
C_word av2[2];
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4985 in map-loop1019 in k4967 in k4964 in k4941 in k8709 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in ... */
static void C_fcall f_4987(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_4987,2,t0,t1);}
t2=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t1);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t4=((C_word*)((C_word*)t0)[3])[1];
f_4977(t4,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k5000 in map-loop1019 in k4967 in k4964 in k4941 in k8709 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in ... */
static void C_ccall f_5002(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_5002,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
f_4987(t2,C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST));}

/* a5010 in k4941 in k8709 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in ... */
static void C_ccall f_5011(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_5011,c,av);}
a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5017,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5029,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:442: chicken.condition#with-exception-handler */
t5=C_fast_retrieve(lf[374]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* a5016 in a5010 in k4941 in k8709 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in ... */
static void C_ccall f_5017(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5017,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5023,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:442: k1039 */
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a5022 in a5016 in a5010 in k4941 in k8709 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in ... */
static void C_ccall f_5023(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5023,c,av);}
/* csi.scm:442: ##sys#error */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[372];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* a5028 in a5010 in k4941 in k8709 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in ... */
static void C_ccall f_5029(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_5029,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5035,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5068,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:442: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}

/* a5034 in a5028 in a5010 in k4941 in k8709 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in ... */
static void C_ccall f_5035(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5035,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5043,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:443: scheme#read */
t3=*((C_word*)lf[52]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k5041 in a5034 in a5028 in a5010 in k4941 in k8709 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in ... */
static void C_ccall f_5043(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_5043,c,av);}
a=C_alloc(6);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5045,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_5045(t5,((C_word*)t0)[3],t1,C_SCHEME_END_OF_LIST);}

/* doloop1046 in k5041 in a5034 in a5028 in a5010 in k4941 in k8709 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in ... */
static void C_fcall f_5045(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_5045,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_eofp(t2))){
/* csi.scm:445: scheme#reverse */
t4=*((C_word*)lf[373]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5062,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* csi.scm:443: scheme#read */
t5=*((C_word*)lf[52]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* k5060 in doloop1046 in k5041 in a5034 in a5028 in a5010 in k4941 in k8709 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in ... */
static void C_ccall f_5062(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5062,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=((C_word*)((C_word*)t0)[4])[1];
f_5045(t3,((C_word*)t0)[5],t1,t2);}

/* a5067 in a5028 in a5010 in k4941 in k8709 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in ... */
static void C_ccall f_5068(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +3,c,2)))){
C_save_and_reclaim((void*)f_5068,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+3);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5074,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:442: k1039 */
t4=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a5073 in a5067 in a5028 in a5010 in k4941 in k8709 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in ... */
static void C_ccall f_5074(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5074,c,av);}{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=0;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
C_apply_values(3,av2);}}

/* k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_5082(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_5082,c,av);}
a=C_alloc(9);
t2=C_mutate(&lf[61] /* (set! chicken.csi#report ...) */,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5083,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp));
t3=C_mutate(&lf[140] /* (set! chicken.csi#bytevector-data ...) */,lf[141]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5405,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:556: scheme#make-vector */
t5=*((C_word*)lf[377]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_fix(37);
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* chicken.csi#report in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_fcall f_5083(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_5083,3,t0,t1,t2);}
a=C_alloc(5);
t3=C_i_pairp(t2);
t4=(C_truep(t3)?C_u_i_car(t2):*((C_word*)lf[84]+1));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5093,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:458: with-output-to-port */
t6=((C_word*)t0)[5];{
C_word av2[4];
av2[0]=t6;
av2[1]=t1;
av2[2]=t4;
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* a5092 in chicken.csi#report in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_5093(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_5093,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5097,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:460: chicken.gc#gc */
t3=C_fast_retrieve(lf[139]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5095 in a5092 in chicken.csi#report in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 in ... */
static void C_ccall f_5097(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_5097,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5100,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:461: ##sys#symbol-table-info */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[138]);
C_word *av2=av;
av2[0]=*((C_word*)lf[138]+1);
av2[1]=t2;
tp(2,av2);}}

/* k5098 in k5095 in a5092 in chicken.csi#report in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in ... */
static void C_ccall f_5100(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_5100,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5103,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* csi.scm:462: chicken.gc#memory-statistics */
t3=C_fast_retrieve(lf[137]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5101 in k5098 in k5095 in a5092 in chicken.csi#report in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in ... */
static void C_ccall f_5103(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_5103,c,av);}
a=C_alloc(14);
t2=C_mk_bool(C_interrupts_enabled);
t3=C_mk_bool(C_heap_size_is_fixed);
t4=C_mk_bool(C_STACK_GROWS_DOWNWARD);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5105,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5121,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=t3,a[7]=t4,a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=t5,a[11]=((C_word*)t0)[6],tmp=(C_word)a,a+=12,tmp);
/* csi.scm:467: printf */
t7=*((C_word*)lf[77]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[136];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* shorten in k5101 in k5098 in k5095 in a5092 in chicken.csi#report in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in ... */
static void C_fcall f_5105(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(36,0,2)))){
C_save_and_reclaim_args((void *)trf_5105,2,t1,t2);}
a=C_alloc(36);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5113,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=C_s_a_i_times(&a,2,t2,C_fix(100));
/* csi.scm:466: scheme#truncate */
t5=*((C_word*)lf[115]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5111 in shorten in k5101 in k5098 in k5095 in a5092 in chicken.csi#report in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in ... */
static void C_ccall f_5113(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5113,c,av);}
/* ##sys#/-2 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[114]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[114]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_fix(100);
tp(4,av2);}}

/* k5119 in k5101 in k5098 in k5095 in a5092 in chicken.csi#report in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in ... */
static void C_ccall f_5121(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(28,c,3)))){
C_save_and_reclaim((void *)f_5121,c,av);}
a=C_alloc(28);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5124,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_fast_retrieve(lf[126]);
t8=C_fast_retrieve(lf[5]);
t9=C_i_check_list_2(C_fast_retrieve(lf[5]),lf[134]);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5293,a[2]=((C_word*)t0)[11],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5295,a[2]=t5,a[3]=t12,a[4]=t7,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_5295(t14,t10,C_fast_retrieve(lf[5]));}

/* k5122 in k5119 in k5101 in k5098 in k5095 in a5092 in chicken.csi#report in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in ... */
static void C_ccall f_5124(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(22,c,3)))){
C_save_and_reclaim((void *)f_5124,c,av);}
a=C_alloc(22);
t2=C_fix(0);
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5125,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_i_check_list_2(t1,lf[101]);
t6=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5171,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5262,a[2]=t8,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_5262(t10,t6,t1);}

/* g1109 in k5122 in k5119 in k5101 in k5098 in k5095 in a5092 in chicken.csi#report in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in ... */
static void C_fcall f_5125(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_5125,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5129,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:472: printf */
t4=*((C_word*)lf[77]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[118];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k5127 in g1109 in k5122 in k5119 in k5101 in k5098 in k5095 in a5092 in chicken.csi#report in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in ... */
static void C_ccall f_5129(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(99,c,2)))){
C_save_and_reclaim((void *)f_5129,c,av);}
a=C_alloc(99);
t2=C_i_string_length(((C_word*)t0)[2]);
t3=C_a_i_fixnum_difference(&a,2,C_fix(16),t2);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)((C_word*)t0)[3])[1];
t6=C_mutate(((C_word *)((C_word*)t0)[3])+1,C_s_a_i_plus(&a,2,t5,C_fix(1)));
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5139,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_less_or_equalp(((C_word*)t4)[1],C_fix(0)))){
t8=((C_word*)((C_word*)t0)[3])[1];
t9=C_mutate(((C_word *)((C_word*)t0)[3])+1,C_s_a_i_plus(&a,2,t8,C_fix(1)));
t10=C_s_a_i_plus(&a,2,((C_word*)t4)[1],C_fix(18));
t11=C_set_block_item(t4,0,t10);
t12=t7;
f_5139(t12,t11);}
else{
t8=t7;
f_5139(t8,C_SCHEME_UNDEFINED);}}

/* k5137 in k5127 in g1109 in k5122 in k5119 in k5101 in k5098 in k5095 in a5092 in chicken.csi#report in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in ... */
static void C_fcall f_5139(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_5139,2,t0,t1);}
a=C_alloc(4);
if(C_truep(C_i_greater_or_equalp(((C_word*)((C_word*)t0)[2])[1],C_fix(3)))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5148,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:480: scheme#display */
t3=*((C_word*)lf[94]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[116];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5156,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:483: scheme#make-string */
t3=*((C_word*)lf[117]+1);{
C_word av2[4];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[4])[1];
av2[3]=C_make_character(32);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k5146 in k5137 in k5127 in g1109 in k5122 in k5119 in k5101 in k5098 in k5095 in a5092 in chicken.csi#report in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in ... */
static void C_ccall f_5148(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5148,c,av);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_fix(0));
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5154 in k5137 in k5127 in g1109 in k5122 in k5119 in k5101 in k5098 in k5095 in a5092 in chicken.csi#report in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in ... */
static void C_ccall f_5156(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5156,c,av);}
/* csi.scm:483: scheme#display */
t2=*((C_word*)lf[94]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k5169 in k5122 in k5119 in k5101 in k5098 in k5095 in a5092 in chicken.csi#report in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in ... */
static void C_ccall f_5171(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_5171,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5174,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5187,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=t2,a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
/* csi.scm:501: chicken.platform#machine-type */
t4=C_fast_retrieve(lf[133]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5172 in k5169 in k5122 in k5119 in k5101 in k5098 in k5095 in a5092 in chicken.csi#report in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in ... */
static void C_ccall f_5174(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_5174,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5177,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:520: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[90]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[90]+1);
av2[1]=t2;
av2[2]=C_make_character(10);
av2[3]=*((C_word*)lf[84]+1);
tp(4,av2);}}

/* k5175 in k5172 in k5169 in k5122 in k5119 in k5101 in k5098 in k5095 in a5092 in chicken.csi#report in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in ... */
static void C_ccall f_5177(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5177,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5180,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
/* csi.scm:521: scheme#display */
t3=*((C_word*)lf[94]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[119];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5178 in k5175 in k5172 in k5169 in k5122 in k5119 in k5101 in k5098 in k5095 in a5092 in chicken.csi#report in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in ... */
static void C_ccall f_5180(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5180,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k5185 in k5169 in k5122 in k5119 in k5101 in k5098 in k5095 in a5092 in chicken.csi#report in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in ... */
static void C_ccall f_5187(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_5187,c,av);}
a=C_alloc(12);
t2=C_fix((C_word)C_WORD_SIZE);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5192,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=t2,a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],tmp=(C_word)a,a+=12,tmp);
/* csi.scm:503: chicken.platform#software-type */
t4=C_fast_retrieve(lf[132]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5190 in k5185 in k5169 in k5122 in k5119 in k5101 in k5098 in k5095 in a5092 in chicken.csi#report in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in ... */
static void C_ccall f_5192(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_5192,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5196,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* csi.scm:504: chicken.platform#software-version */
t3=C_fast_retrieve(lf[131]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5194 in k5190 in k5185 in k5169 in k5122 in k5119 in k5101 in k5098 in k5095 in a5092 in chicken.csi#report in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in ... */
static void C_ccall f_5196(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_5196,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5200,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* csi.scm:505: chicken.platform#build-platform */
t3=C_fast_retrieve(lf[130]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5198 in k5194 in k5190 in k5185 in k5169 in k5122 in k5119 in k5101 in k5098 in k5095 in a5092 in chicken.csi#report in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in ... */
static void C_ccall f_5200(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_5200,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_5204,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t1,a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
/* csi.scm:507: chicken.platform#installation-repository */
t3=C_fast_retrieve(lf[129]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5202 in k5198 in k5194 in k5190 in k5185 in k5169 in k5122 in k5119 in k5101 in k5098 in k5095 in a5092 in chicken.csi#report in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in ... */
static void C_ccall f_5204(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_5204,c,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_5208,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=t1,a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],tmp=(C_word)a,a+=16,tmp);
/* csi.scm:508: chicken.platform#repository-path */
t3=C_fast_retrieve(lf[128]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5206 in k5202 in k5198 in k5194 in k5190 in k5185 in k5169 in k5122 in k5119 in k5101 in k5098 in k5095 in a5092 in chicken.csi#report in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in ... */
static void C_ccall f_5208(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(20,c,2)))){
C_save_and_reclaim((void *)f_5208,c,av);}
a=C_alloc(20);
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_5212,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=t1,a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],tmp=(C_word)a,a+=17,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5260,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:510: chicken.base#keyword-style */
t4=C_fast_retrieve(lf[127]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5210 in k5206 in k5202 in k5198 in k5194 in k5190 in k5185 in k5169 in k5122 in k5119 in k5101 in k5098 in k5095 in a5092 in chicken.csi#report in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in ... */
static void C_ccall f_5212(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_5212,c,av);}
a=C_alloc(18);
t2=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_5216,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=t1,a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],tmp=(C_word)a,a+=18,tmp);
/* csi.scm:511: shorten */
f_5105(t2,C_i_vector_ref(((C_word*)t0)[2],C_fix(0)));}

/* k5214 in k5210 in k5206 in k5202 in k5198 in k5194 in k5190 in k5185 in k5169 in k5122 in k5119 in k5101 in k5098 in k5095 in a5092 in chicken.csi#report in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in ... */
static void C_ccall f_5216(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_5216,c,av);}
a=C_alloc(18);
t2=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_5220,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=t1,a[17]=((C_word*)t0)[16],tmp=(C_word)a,a+=18,tmp);
/* csi.scm:512: shorten */
f_5105(t2,C_i_vector_ref(((C_word*)t0)[2],C_fix(1)));}

/* k5218 in k5214 in k5210 in k5206 in k5202 in k5198 in k5194 in k5190 in k5185 in k5169 in k5122 in k5119 in k5101 in k5098 in k5095 in a5092 in chicken.csi#report in k5080 in k4935 in k4291 in k3948 in k3866 in ... */
static void C_ccall f_5220(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(20,c,2)))){
C_save_and_reclaim((void *)f_5220,c,av);}
a=C_alloc(20);
t2=C_i_vector_ref(((C_word*)t0)[2],C_fix(2));
t3=C_i_vector_ref(((C_word*)t0)[3],C_fix(0));
t4=(C_truep(((C_word*)t0)[4])?lf[120]:lf[121]);
t5=C_i_vector_ref(((C_word*)t0)[3],C_fix(1));
t6=C_i_vector_ref(((C_word*)t0)[3],C_fix(2));
t7=(C_truep(((C_word*)t0)[5])?lf[122]:lf[123]);
t8=(*a=C_CLOSURE_TYPE|19,a[1]=(C_word)f_5248,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[12],a[9]=((C_word*)t0)[13],a[10]=((C_word*)t0)[14],a[11]=((C_word*)t0)[15],a[12]=((C_word*)t0)[16],a[13]=t1,a[14]=t2,a[15]=t3,a[16]=t4,a[17]=t5,a[18]=t6,a[19]=t7,tmp=(C_word)a,a+=20,tmp);
/* csi.scm:519: argv */
t9=((C_word*)t0)[17];{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}

/* k5246 in k5218 in k5214 in k5210 in k5206 in k5202 in k5198 in k5194 in k5190 in k5185 in k5169 in k5122 in k5119 in k5101 in k5098 in k5095 in a5092 in chicken.csi#report in k5080 in k4935 in k4291 in k3948 in ... */
static void C_ccall f_5248(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,21)))){
C_save_and_reclaim((void *)f_5248,c,av);}
/* csi.scm:485: printf */
t2=*((C_word*)lf[77]+1);{
C_word *av2;
if(c >= 22) {
  av2=av;
} else {
  av2=C_alloc(22);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[124];
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[4];
av2[5]=((C_word*)t0)[5];
av2[6]=((C_word*)t0)[6];
av2[7]=((C_word*)t0)[7];
av2[8]=((C_word*)t0)[8];
av2[9]=((C_word*)t0)[9];
av2[10]=((C_word*)t0)[10];
av2[11]=C_fast_retrieve(lf[125]);
av2[12]=((C_word*)t0)[11];
av2[13]=((C_word*)t0)[12];
av2[14]=((C_word*)t0)[13];
av2[15]=((C_word*)t0)[14];
av2[16]=((C_word*)t0)[15];
av2[17]=((C_word*)t0)[16];
av2[18]=((C_word*)t0)[17];
av2[19]=((C_word*)t0)[18];
av2[20]=((C_word*)t0)[19];
av2[21]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(22,av2);}}

/* k5258 in k5206 in k5202 in k5198 in k5194 in k5190 in k5185 in k5169 in k5122 in k5119 in k5101 in k5098 in k5095 in a5092 in chicken.csi#report in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in ... */
static void C_ccall f_5260(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5260,c,av);}
/* csi.scm:510: chicken.keyword#keyword->string */
t2=C_fast_retrieve(lf[126]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* for-each-loop1108 in k5122 in k5119 in k5101 in k5098 in k5095 in a5092 in chicken.csi#report in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in ... */
static void C_fcall f_5262(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_5262,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5272,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:470: g1109 */
t4=((C_word*)t0)[3];
f_5125(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k5270 in for-each-loop1108 in k5122 in k5119 in k5101 in k5098 in k5095 in a5092 in chicken.csi#report in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in ... */
static void C_ccall f_5272(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5272,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_5262(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k5291 in k5119 in k5101 in k5098 in k5095 in a5092 in chicken.csi#report in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in ... */
static void C_ccall f_5293(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5293,c,av);}
/* csi.scm:468: sort */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=*((C_word*)lf[135]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* map-loop1082 in k5119 in k5101 in k5098 in k5095 in a5092 in chicken.csi#report in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in ... */
static void C_fcall f_5295(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_5295,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5320,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* csi.scm:468: g1088 */
t4=((C_word*)t0)[4];{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_slot(t2,C_fix(0));
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5318 in map-loop1082 in k5119 in k5101 in k5098 in k5095 in a5092 in chicken.csi#report in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in ... */
static void C_ccall f_5320(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5320,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_5295(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* lp in k5709 in k5543 in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in ... */
static C_word C_fcall f_5340(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_pairp(t1))){
t3=C_u_i_cdr(t1);
if(C_truep(C_i_pairp(t3))){
t4=C_u_i_cdr(t3);
t5=C_i_cdr(t2);
t6=C_eqp(t4,t5);
if(C_truep(t6)){
return(t6);}
else{
t8=t4;
t9=t5;
t1=t8;
t2=t9;
goto loop;}}
else{
return(C_SCHEME_FALSE);}}
else{
return(C_SCHEME_FALSE);}}

/* lp in k5709 in k5543 in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in ... */
static C_word C_fcall f_5375(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;
loop:{}
t2=C_i_pairp(t1);
if(C_truep(C_i_not(t2))){
return(C_SCHEME_FALSE);}
else{
t3=C_i_car(t1);
t4=C_eqp(t1,t3);
if(C_truep(t4)){
return(t4);}
else{
t6=C_u_i_cdr(t1);
t1=t6;
goto loop;}}}

/* k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_5405(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(28,c,6)))){
C_save_and_reclaim((void *)f_5405,c,av);}
a=C_alloc(28);
t2=C_mutate(&lf[142] /* (set! chicken.csi#describer-table ...) */,t1);
t3=*((C_word*)lf[143]+1);
t4=*((C_word*)lf[144]+1);
t5=*((C_word*)lf[145]+1);
t6=C_mutate(&lf[56] /* (set! chicken.csi#describe ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5407,a[2]=t5,a[3]=t3,a[4]=t4,tmp=(C_word)a,a+=5,tmp));
t7=C_mutate((C_word*)lf[235]+1 /* (set! chicken.csi#set-describer! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6437,tmp=(C_word)a,a+=2,tmp));
t8=C_mutate(&lf[58] /* (set! chicken.csi#dump ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6446,tmp=(C_word)a,a+=2,tmp));
t9=C_mutate(&lf[210] /* (set! chicken.csi#hexdump ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6594,tmp=(C_word)a,a+=2,tmp));
t10=C_mutate(&lf[92] /* (set! chicken.csi#show-frameinfo ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6799,tmp=(C_word)a,a+=2,tmp));
t11=C_establish_signal_handler(C_fix((C_word)SIGINT),C_fix((C_word)SIGINT));
t12=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8725,tmp=(C_word)a,a+=2,tmp);
t13=C_i_setslot(C_fast_retrieve(lf[254]),C_fix((C_word)SIGINT),t12);
t14=C_mutate(&lf[255] /* (set! chicken.csi#member* ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7373,tmp=(C_word)a,a+=2,tmp));
t15=C_mutate(&lf[256] /* (set! chicken.csi#constant1687 ...) */,lf[257]);
t16=C_mutate(&lf[258] /* (set! chicken.csi#canonicalize-args ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7428,tmp=(C_word)a,a+=2,tmp));
t17=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8717,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t18=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7643,a[2]=t17,tmp=(C_word)a,a+=3,tmp);
t19=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8711,a[2]=t18,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:978: chicken.process-context#get-environment-variable */
t20=C_fast_retrieve(lf[23]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t20;
av2[1]=t19;
av2[2]=lf[376];
((C_proc)(void*)(*((C_word*)t20+1)))(3,av2);}}

/* chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_fcall f_5407(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(17,0,6)))){
C_save_and_reclaim_args((void *)trf_5407,4,t0,t1,t2,t3);}
a=C_alloc(17);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?*((C_word*)lf[84]+1):C_i_car(t3));
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5413,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5545,a[2]=t1,a[3]=t2,a[4]=t5,a[5]=t6,a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_permanentp(t2))){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6429,a[2]=t7,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:590: ##sys#block-address */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[234]);
C_word av2[3];
av2[0]=*((C_word*)lf[234]+1);
av2[1]=t8;
av2[2]=t2;
tp(3,av2);}}
else{
t8=t7;{
C_word av2[2];
av2[0]=t8;
av2[1]=C_SCHEME_UNDEFINED;
f_5545(2,av2);}}}

/* descseq in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 in ... */
static void C_ccall f_5413(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6;
C_word t7;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_5413,c,av);}
a=C_alloc(8);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5542,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=t1,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* csi.scm:567: plen */
t7=t3;{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[3];
((C_proc)C_fast_retrieve_proc(t7))(3,av2);}}

/* k5418 in k5540 in descseq in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in ... */
static void C_ccall f_5420(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_5420,c,av);}
a=C_alloc(10);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5425,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_5425(t5,((C_word*)t0)[7],C_fix(0));}

/* loop1 in k5418 in k5540 in descseq in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in ... */
static void C_fcall f_5425(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,4)))){
C_save_and_reclaim_args((void *)trf_5425,3,t0,t1,t2);}
a=C_alloc(10);
t3=C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]);
if(C_truep(t3)){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_fixnum_greater_or_equal_p(t2,C_fix(40)))){
/* csi.scm:572: fprintf */
t4=*((C_word*)lf[146]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[147];
av2[4]=C_fixnum_difference(((C_word*)t0)[2],t2);
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5448,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=t1,tmp=(C_word)a,a+=10,tmp);
/* csi.scm:574: pref */
t5=((C_word*)t0)[6];{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[7];
av2[3]=C_fixnum_plus(((C_word*)t0)[4],t2);
((C_proc)C_fast_retrieve_proc(t5))(4,av2);}}}}

/* k5446 in loop1 in k5418 in k5540 in descseq in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in ... */
static void C_ccall f_5448(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_5448,c,av);}
a=C_alloc(12);
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=C_fixnum_plus(((C_word*)t0)[3],t2);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5457,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],a[6]=t1,a[7]=t5,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp));
t7=((C_word*)t5)[1];
f_5457(t7,((C_word*)t0)[9],C_fix(1),t3);}

/* loop2 in k5446 in loop1 in k5418 in k5540 in descseq in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in ... */
static void C_fcall f_5457(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_5457,4,t0,t1,t2,t3);}
a=C_alloc(12);
if(C_truep(C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[2]))){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5467,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5499,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:577: ##sys#with-print-length-limit */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[88]);
C_word av2[4];
av2[0]=*((C_word*)lf[88]+1);
av2[1]=t4;
av2[2]=C_fix(1000);
av2[3]=t5;
tp(4,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5527,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=t1,a[5]=t2,a[6]=t3,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* csi.scm:587: pref */
t5=((C_word*)t0)[8];{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[9];
av2[3]=t3;
((C_proc)C_fast_retrieve_proc(t5))(4,av2);}}}

/* k5465 in loop2 in k5446 in loop1 in k5418 in k5540 in descseq in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in ... */
static void C_ccall f_5467(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_5467,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5470,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_greaterp(((C_word*)t0)[5],C_fix(1)))){
t3=C_fixnum_difference(((C_word*)t0)[5],C_fix(1));
t4=C_eqp(((C_word*)t0)[5],C_fix(2));
if(C_truep(t4)){
/* csi.scm:582: fprintf */
t5=*((C_word*)lf[146]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=lf[148];
av2[4]=t3;
av2[5]=lf[149];
((C_proc)(void*)(*((C_word*)t5+1)))(6,av2);}}
else{
/* csi.scm:582: fprintf */
t5=*((C_word*)lf[146]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=lf[148];
av2[4]=t3;
av2[5]=lf[150];
((C_proc)(void*)(*((C_word*)t5+1)))(6,av2);}}}
else{
/* csi.scm:585: scheme#newline */
t3=*((C_word*)lf[86]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k5468 in k5465 in loop2 in k5446 in loop1 in k5418 in k5540 in descseq in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in ... */
static void C_ccall f_5470(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5470,c,av);}
/* csi.scm:586: loop1 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_5425(t2,((C_word*)t0)[3],C_fixnum_plus(((C_word*)t0)[4],((C_word*)t0)[5]));}

/* a5498 in loop2 in k5446 in loop1 in k5418 in k5540 in descseq in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in ... */
static void C_ccall f_5499(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_5499,c,av);}
/* csi.scm:580: fprintf */
t2=*((C_word*)lf[146]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[151];
av2[4]=((C_word*)t0)[3];
av2[5]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k5525 in loop2 in k5446 in loop1 in k5418 in k5540 in descseq in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in ... */
static void C_ccall f_5527(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5527,c,av);}
t2=C_eqp(((C_word*)t0)[2],t1);
if(C_truep(t2)){
/* csi.scm:587: loop2 */
t3=((C_word*)((C_word*)t0)[3])[1];
f_5457(t3,((C_word*)t0)[4],C_fixnum_plus(((C_word*)t0)[5],C_fix(1)),C_fixnum_plus(((C_word*)t0)[6],C_fix(1)));}
else{
/* csi.scm:588: loop2 */
t3=((C_word*)((C_word*)t0)[3])[1];
f_5457(t3,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[7]);}}

/* k5540 in descseq in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in ... */
static void C_ccall f_5542(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_5542,c,av);}
a=C_alloc(8);
t2=C_fixnum_difference(t1,((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5420,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[7])){
/* csi.scm:568: fprintf */
t4=*((C_word*)lf[146]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[152];
av2[4]=((C_word*)t0)[7];
av2[5]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_5420(2,av2);}}}

/* k5543 in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 in ... */
static void C_ccall f_5545(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,7)))){
C_save_and_reclaim((void *)f_5545,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5548,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_charp(((C_word*)t0)[3]))){
t3=C_fix(C_character_code(((C_word*)t0)[3]));
/* csi.scm:593: fprintf */
t4=*((C_word*)lf[146]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[153];
av2[4]=((C_word*)t0)[3];
av2[5]=t3;
av2[6]=t3;
av2[7]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(8,av2);}}
else{
switch(((C_word*)t0)[3]){
case C_SCHEME_TRUE:
/* csi.scm:594: fprintf */
t3=*((C_word*)lf[146]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[154];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}
case C_SCHEME_FALSE:
/* csi.scm:595: fprintf */
t3=*((C_word*)lf[146]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[155];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}
default:
if(C_truep(C_i_nullp(((C_word*)t0)[3]))){
/* csi.scm:596: fprintf */
t3=*((C_word*)lf[146]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[156];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
if(C_truep(C_eofp(((C_word*)t0)[3]))){
/* csi.scm:597: fprintf */
t3=*((C_word*)lf[146]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[157];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=*((C_word*)lf[29]+1);
t4=C_eqp(*((C_word*)lf[29]+1),((C_word*)t0)[3]);
if(C_truep(t4)){
/* csi.scm:598: fprintf */
t5=*((C_word*)lf[146]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[158];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
if(C_truep(C_fixnump(((C_word*)t0)[3]))){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5614,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:600: fprintf */
t6=*((C_word*)lf[146]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[160];
av2[4]=((C_word*)t0)[3];
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[3];
av2[7]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t6+1)))(8,av2);}}
else{
if(C_truep(C_i_bignump(((C_word*)t0)[3]))){
/* csi.scm:606: fprintf */
t5=*((C_word*)lf[146]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[161];
av2[4]=((C_word*)t0)[3];
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[3];
av2[7]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(8,av2);}}
else{
if(C_truep(C_unboundvaluep(((C_word*)t0)[3]))){
/* csi.scm:609: fprintf */
t5=*((C_word*)lf[146]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[162];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
if(C_truep(C_i_flonump(((C_word*)t0)[3]))){
/* csi.scm:610: fprintf */
t5=*((C_word*)lf[146]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[163];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
if(C_truep(C_i_ratnump(((C_word*)t0)[3]))){
/* csi.scm:611: fprintf */
t5=*((C_word*)lf[146]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[164];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
if(C_truep(C_i_cplxnump(((C_word*)t0)[3]))){
if(C_truep(C_i_exactp(((C_word*)t0)[3]))){
/* csi.scm:612: fprintf */
t5=*((C_word*)lf[146]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[165];
av2[4]=lf[166];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(6,av2);}}
else{
/* csi.scm:612: fprintf */
t5=*((C_word*)lf[146]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[165];
av2[4]=lf[167];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(6,av2);}}}
else{
if(C_truep(C_i_numberp(((C_word*)t0)[3]))){
/* csi.scm:614: fprintf */
t5=*((C_word*)lf[146]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[168];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
if(C_truep(C_i_stringp(((C_word*)t0)[3]))){
/* csi.scm:615: descseq */
t5=((C_word*)t0)[5];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=lf[169];
av2[3]=*((C_word*)lf[170]+1);
av2[4]=((C_word*)t0)[6];
av2[5]=C_fix(0);
f_5413(6,av2);}}
else{
if(C_truep(C_i_vectorp(((C_word*)t0)[3]))){
/* csi.scm:616: descseq */
t5=((C_word*)t0)[5];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=lf[171];
av2[3]=*((C_word*)lf[170]+1);
av2[4]=*((C_word*)lf[172]+1);
av2[5]=C_fix(0);
f_5413(6,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5711,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* csi.scm:617: chicken.keyword#keyword? */
t6=C_fast_retrieve(lf[232]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}}}}}}}}}}}}}}}

/* k5546 in k5543 in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in ... */
static void C_ccall f_5548(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5548,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=*((C_word*)lf[29]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k5612 in k5543 in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in ... */
static void C_ccall f_5614(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_5614,c,av);}
a=C_alloc(3);
t2=C_make_character(C_unfix(((C_word*)t0)[2]));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5620,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_fixnum_lessp(((C_word*)t0)[2],C_fix(65536)))){
/* csi.scm:603: fprintf */
t4=*((C_word*)lf[146]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[159];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
/* csi.scm:604: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[90]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[90]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=C_make_character(10);
av2[3]=*((C_word*)lf[84]+1);
tp(4,av2);}}}

/* k5618 in k5612 in k5543 in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in ... */
static void C_ccall f_5620(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5620,c,av);}
/* csi.scm:604: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[90]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[90]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(10);
av2[3]=*((C_word*)lf[84]+1);
tp(4,av2);}}

/* k5709 in k5543 in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in ... */
static void C_ccall f_5711(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_5711,c,av);}
a=C_alloc(12);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5718,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:619: ##sys#symbol->string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[174]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[174]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}
else{
if(C_truep(C_i_symbolp(((C_word*)t0)[4]))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5727,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5798,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:621: ##sys#symbol-has-toplevel-binding? */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[183]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[183]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5340,tmp=(C_word)a,a+=2,tmp);
t3=(
  f_5340(((C_word*)t0)[4],((C_word*)t0)[4])
);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5810,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t3)){
t5=t4;
f_5810(t5,t3);}
else{
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5375,tmp=(C_word)a,a+=2,tmp);
t6=t4;
f_5810(t6,(
  f_5375(((C_word*)t0)[4])
));}}}}

/* k5716 in k5709 in k5543 in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in ... */
static void C_ccall f_5718(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5718,c,av);}
/* csi.scm:618: fprintf */
t2=*((C_word*)lf[146]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[173];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k5725 in k5709 in k5543 in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in ... */
static void C_ccall f_5727(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_5727,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5730,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5795,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:624: ##sys#interned-symbol? */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[181]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[181]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}

/* k5728 in k5725 in k5709 in k5543 in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in ... */
static void C_ccall f_5730(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_5730,c,av);}
a=C_alloc(5);
t2=C_slot(((C_word*)t0)[2],C_fix(2));
if(C_truep(C_i_nullp(t2))){
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=*((C_word*)lf[29]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5742,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:628: scheme#display */
t4=*((C_word*)lf[94]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[177];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k5740 in k5728 in k5725 in k5709 in k5543 in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in ... */
static void C_ccall f_5742(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_5742,c,av);}
a=C_alloc(6);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5747,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_5747(t5,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* doloop1222 in k5740 in k5728 in k5725 in k5709 in k5543 in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in ... */
static void C_fcall f_5747(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_5747,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5757,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:631: fprintf */
t4=*((C_word*)lf[146]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[176];
av2[4]=C_i_car(t2);
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}

/* k5755 in doloop1222 in k5740 in k5728 in k5725 in k5709 in k5543 in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in ... */
static void C_ccall f_5757(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_5757,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5760,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5772,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:632: ##sys#with-print-length-limit */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[88]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[88]+1);
av2[1]=t2;
av2[2]=C_fix(1000);
av2[3]=t3;
tp(4,av2);}}

/* k5758 in k5755 in doloop1222 in k5740 in k5728 in k5725 in k5709 in k5543 in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in ... */
static void C_ccall f_5760(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_5760,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5763,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:636: scheme#newline */
t3=*((C_word*)lf[86]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k5761 in k5758 in k5755 in doloop1222 in k5740 in k5728 in k5725 in k5709 in k5543 in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in ... */
static void C_ccall f_5763(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5763,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_5747(t2,((C_word*)t0)[3],C_i_cddr(((C_word*)t0)[4]));}

/* a5771 in k5755 in doloop1222 in k5740 in k5728 in k5725 in k5709 in k5543 in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in ... */
static void C_ccall f_5772(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5772,c,av);}
/* csi.scm:635: scheme#write */
t2=*((C_word*)lf[175]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=C_i_cadr(((C_word*)t0)[2]);
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k5790 in k5793 in k5725 in k5709 in k5543 in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in ... */
static void C_ccall f_5792(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_5792,c,av);}
/* csi.scm:623: fprintf */
t2=*((C_word*)lf[146]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[180];
av2[4]=((C_word*)t0)[4];
av2[5]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k5793 in k5725 in k5709 in k5543 in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in ... */
static void C_ccall f_5795(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_5795,c,av);}
a=C_alloc(5);
t2=(C_truep(t1)?lf[178]:lf[179]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5792,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:625: ##sys#symbol->string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[174]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[174]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}

/* k5796 in k5709 in k5543 in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in ... */
static void C_ccall f_5798(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5798,c,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_5727(2,av2);}}
else{
/* csi.scm:622: scheme#display */
t2=*((C_word*)lf[94]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[182];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* k5808 in k5709 in k5543 in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in ... */
static void C_fcall f_5810(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,5)))){
C_save_and_reclaim_args((void *)trf_5810,2,t0,t1);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5813,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:638: fprintf */
t3=*((C_word*)lf[146]+1);{
C_word av2[4];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[187];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
if(C_truep(C_i_listp(((C_word*)t0)[2]))){
/* csi.scm:648: descseq */
t2=((C_word*)t0)[5];{
C_word av2[6];
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
av2[2]=lf[188];
av2[3]=((C_word*)t0)[6];
av2[4]=((C_word*)t0)[7];
av2[5]=C_fix(0);
f_5413(6,av2);}}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
/* csi.scm:649: fprintf */
t2=*((C_word*)lf[146]+1);{
C_word av2[6];
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[189];
av2[4]=C_u_i_car(((C_word*)t0)[2]);
av2[5]=C_u_i_cdr(((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}
else{
if(C_truep(C_i_closurep(((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5917,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5921,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:653: ##sys#peek-unsigned-integer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[192]);
C_word av2[4];
av2[0]=*((C_word*)lf[192]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(0);
tp(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5927,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:655: chicken.base#port? */
t3=C_fast_retrieve(lf[231]);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}}}}

/* k5811 in k5808 in k5709 in k5543 in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in ... */
static void C_ccall f_5813(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_5813,c,av);}
a=C_alloc(9);
t2=C_a_i_list1(&a,1,((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5822,a[2]=((C_word*)t0)[3],a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_5822(t6,((C_word*)t0)[4],((C_word*)t0)[2],t2);}

/* loop-print in k5811 in k5808 in k5709 in k5543 in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in ... */
static void C_fcall f_5822(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_5822,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=C_i_not_pair_p(t2);
t5=(C_truep(t4)?t4:C_i_nullp(t2));
if(C_truep(t5)){
/* csi.scm:642: printf */
t6=*((C_word*)lf[77]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t1;
av2[2]=lf[184];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t6=C_i_car(t2);
if(C_truep(C_i_memq(t6,t3))){
/* csi.scm:644: fprintf */
t7=*((C_word*)lf[146]+1);{
C_word av2[4];
av2[0]=t7;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[185];
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
t7=C_i_memq(C_u_i_car(t2),t3);
if(C_truep(C_i_not(t7))){
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5853,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* csi.scm:646: fprintf */
t9=*((C_word*)lf[146]+1);{
C_word av2[5];
av2[0]=t9;
av2[1]=t8;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[186];
av2[4]=C_u_i_car(t2);
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}
else{
t8=C_SCHEME_UNDEFINED;
t9=t1;{
C_word av2[2];
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}}}}

/* k5851 in loop-print in k5811 in k5808 in k5709 in k5543 in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in ... */
static void C_ccall f_5853(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5853,c,av);}
a=C_alloc(3);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_u_i_car(((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[3]);
/* csi.scm:647: loop-print */
t5=((C_word*)((C_word*)t0)[4])[1];
f_5822(t5,((C_word*)t0)[5],t2,t4);}

/* k5915 in k5808 in k5709 in k5543 in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in ... */
static void C_ccall f_5917(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_5917,c,av);}
/* csi.scm:652: descseq */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=*((C_word*)lf[170]+1);
av2[4]=*((C_word*)lf[172]+1);
av2[5]=C_fix(1);
f_5413(6,av2);}}

/* k5919 in k5808 in k5709 in k5543 in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in ... */
static void C_ccall f_5921(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5921,c,av);}
/* csi.scm:653: sprintf */
t2=*((C_word*)lf[190]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[191];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k5925 in k5808 in k5709 in k5543 in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in ... */
static void C_ccall f_5927(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_5927,c,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=(C_truep(t2)?lf[193]:lf[194]);
t4=C_slot(((C_word*)t0)[2],C_fix(7));
t5=C_slot(((C_word*)t0)[2],C_fix(3));
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5946,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=t4,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
/* csi.scm:661: ##sys#peek-unsigned-integer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[192]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[192]+1);
av2[1]=t6;
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(0);
tp(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5955,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:662: ##sys#locative? */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[230]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[230]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}}

/* k5944 in k5925 in k5808 in k5709 in k5543 in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in ... */
static void C_ccall f_5946(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_5946,c,av);}
/* csi.scm:656: fprintf */
t2=*((C_word*)lf[146]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[195];
av2[4]=((C_word*)t0)[4];
av2[5]=((C_word*)t0)[5];
av2[6]=((C_word*)t0)[6];
av2[7]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(8,av2);}}

/* k5953 in k5925 in k5808 in k5709 in k5543 in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in ... */
static void C_ccall f_5955(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_5955,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5962,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:664: ##sys#peek-unsigned-integer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[192]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[192]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(0);
tp(4,av2);}}
else{
if(C_truep(C_anypointerp(((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6079,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:679: ##sys#peek-unsigned-integer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[192]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[192]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(0);
tp(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6085,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:680: ##sys#bytevector? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[229]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[229]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}}}

/* k5960 in k5953 in k5925 in k5808 in k5709 in k5543 in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in ... */
static void C_ccall f_5962(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_5962,c,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_slot(((C_word*)t0)[2],C_fix(2));
switch(t3){
case C_fix(0):
/* csi.scm:663: fprintf */
t4=*((C_word*)lf[146]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[196];
av2[4]=t1;
av2[5]=t2;
av2[6]=lf[197];
((C_proc)(void*)(*((C_word*)t4+1)))(7,av2);}
case C_fix(1):
/* csi.scm:663: fprintf */
t4=*((C_word*)lf[146]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[196];
av2[4]=t1;
av2[5]=t2;
av2[6]=lf[198];
((C_proc)(void*)(*((C_word*)t4+1)))(7,av2);}
case C_fix(2):
/* csi.scm:663: fprintf */
t4=*((C_word*)lf[146]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[196];
av2[4]=t1;
av2[5]=t2;
av2[6]=lf[199];
((C_proc)(void*)(*((C_word*)t4+1)))(7,av2);}
case C_fix(3):
/* csi.scm:663: fprintf */
t4=*((C_word*)lf[146]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[196];
av2[4]=t1;
av2[5]=t2;
av2[6]=lf[200];
((C_proc)(void*)(*((C_word*)t4+1)))(7,av2);}
case C_fix(4):
/* csi.scm:663: fprintf */
t4=*((C_word*)lf[146]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[196];
av2[4]=t1;
av2[5]=t2;
av2[6]=lf[201];
((C_proc)(void*)(*((C_word*)t4+1)))(7,av2);}
case C_fix(5):
/* csi.scm:663: fprintf */
t4=*((C_word*)lf[146]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[196];
av2[4]=t1;
av2[5]=t2;
av2[6]=lf[202];
((C_proc)(void*)(*((C_word*)t4+1)))(7,av2);}
case C_fix(6):
/* csi.scm:663: fprintf */
t4=*((C_word*)lf[146]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[196];
av2[4]=t1;
av2[5]=t2;
av2[6]=lf[203];
((C_proc)(void*)(*((C_word*)t4+1)))(7,av2);}
case C_fix(7):
/* csi.scm:663: fprintf */
t4=*((C_word*)lf[146]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[196];
av2[4]=t1;
av2[5]=t2;
av2[6]=lf[204];
((C_proc)(void*)(*((C_word*)t4+1)))(7,av2);}
case C_fix(8):
/* csi.scm:663: fprintf */
t4=*((C_word*)lf[146]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[196];
av2[4]=t1;
av2[5]=t2;
av2[6]=lf[205];
((C_proc)(void*)(*((C_word*)t4+1)))(7,av2);}
case C_fix(9):
/* csi.scm:663: fprintf */
t4=*((C_word*)lf[146]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[196];
av2[4]=t1;
av2[5]=t2;
av2[6]=lf[206];
((C_proc)(void*)(*((C_word*)t4+1)))(7,av2);}
case C_fix(10):
/* csi.scm:663: fprintf */
t4=*((C_word*)lf[146]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[196];
av2[4]=t1;
av2[5]=t2;
av2[6]=lf[207];
((C_proc)(void*)(*((C_word*)t4+1)))(7,av2);}
case C_fix(11):
/* csi.scm:663: fprintf */
t4=*((C_word*)lf[146]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[196];
av2[4]=t1;
av2[5]=t2;
av2[6]=lf[208];
((C_proc)(void*)(*((C_word*)t4+1)))(7,av2);}
default:
t4=C_SCHEME_UNDEFINED;
/* csi.scm:663: fprintf */
t5=*((C_word*)lf[146]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[196];
av2[4]=t1;
av2[5]=t2;
av2[6]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(7,av2);}}}

/* k6077 in k5953 in k5925 in k5808 in k5709 in k5543 in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in ... */
static void C_ccall f_6079(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6079,c,av);}
/* csi.scm:679: fprintf */
t2=*((C_word*)lf[146]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[209];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k6083 in k5953 in k5925 in k5808 in k5709 in k5543 in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in ... */
static void C_ccall f_6085(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,6)))){
C_save_and_reclaim((void *)f_6085,c,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=C_block_size(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6091,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:682: fprintf */
t4=*((C_word*)lf[146]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[212];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
if(C_truep(C_lambdainfop(((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6104,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:685: ##sys#lambda-info->string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[214]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[214]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}
else{
if(C_truep(C_i_structurep(((C_word*)t0)[2],lf[215]))){
t2=C_slot(((C_word*)t0)[2],C_fix(2));
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6116,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=C_eqp(t2,C_fix(1));
t5=(C_truep(t4)?lf[218]:lf[219]);
/* csi.scm:688: fprintf */
t6=*((C_word*)lf[146]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[220];
av2[4]=t2;
av2[5]=t5;
av2[6]=C_slot(((C_word*)t0)[2],C_fix(3));
((C_proc)(void*)(*((C_word*)t6+1)))(7,av2);}}
else{
if(C_truep(C_i_structurep(((C_word*)t0)[2],lf[221]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6213,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:702: fprintf */
t3=*((C_word*)lf[146]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[224];
av2[4]=C_slot(((C_word*)t0)[2],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
if(C_truep(C_structurep(((C_word*)t0)[2]))){
t2=C_slot(((C_word*)t0)[2],C_fix(0));
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6319,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* csi.scm:718: chicken.internal#hash-table-ref */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[227]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[227]+1);
av2[1]=t3;
av2[2]=C_retrieve2(lf[142],C_text("chicken.csi#describer-table"));
av2[3]=t2;
tp(4,av2);}}
else{
/* csi.scm:725: fprintf */
t2=*((C_word*)lf[146]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[228];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}}}}}

/* k6089 in k6083 in k5953 in k5925 in k5808 in k5709 in k5543 in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in ... */
static void C_ccall f_6091(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_6091,c,av);}
/* csi.scm:683: hexdump */
f_6594(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],*((C_word*)lf[211]+1),((C_word*)t0)[5]);}

/* k6102 in k6083 in k5953 in k5925 in k5808 in k5709 in k5543 in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in ... */
static void C_ccall f_6104(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6104,c,av);}
/* csi.scm:685: fprintf */
t2=*((C_word*)lf[146]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[213];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k6114 in k6083 in k5953 in k5925 in k5808 in k5709 in k5543 in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in ... */
static void C_ccall f_6116(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_6116,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6119,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:690: fprintf */
t3=*((C_word*)lf[146]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[217];
av2[4]=C_slot(((C_word*)t0)[2],C_fix(4));
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k6117 in k6114 in k6083 in k5953 in k5925 in k5808 in k5709 in k5543 in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in ... */
static void C_ccall f_6119(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_6119,c,av);}
a=C_alloc(8);
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_block_size(t2);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6130,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t5,tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_6130(t7,((C_word*)t0)[4],C_fix(0));}

/* doloop1260 in k6117 in k6114 in k6083 in k5953 in k5925 in k5808 in k5709 in k5543 in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in ... */
static void C_fcall f_6130(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,3)))){
C_save_and_reclaim_args((void *)trf_6130,3,t0,t1,t2);}
a=C_alloc(14);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6138,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=C_slot(((C_word*)t0)[4],t2);
t5=C_i_check_list_2(t4,lf[101]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6159,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6168,a[2]=t8,a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_6168(t10,t6,t4);}}

/* g1266 in doloop1260 in k6117 in k6114 in k6083 in k5953 in k5925 in k5808 in k5709 in k5543 in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in ... */
static void C_fcall f_6138(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,5)))){
C_save_and_reclaim_args((void *)trf_6138,3,t0,t1,t2);}
/* csi.scm:698: fprintf */
t3=*((C_word*)lf[146]+1);{
C_word av2[6];
av2[0]=t3;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[216];
av2[4]=C_slot(t2,C_fix(0));
av2[5]=C_slot(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k6157 in doloop1260 in k6117 in k6114 in k6083 in k5953 in k5925 in k5808 in k5709 in k5543 in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in ... */
static void C_ccall f_6159(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6159,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_6130(t2,((C_word*)t0)[3],C_fixnum_plus(((C_word*)t0)[4],C_fix(1)));}

/* for-each-loop1265 in doloop1260 in k6117 in k6114 in k6083 in k5953 in k5925 in k5808 in k5709 in k5543 in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in ... */
static void C_fcall f_6168(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_6168,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6178,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:696: g1266 */
t4=((C_word*)t0)[3];
f_6138(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6176 in for-each-loop1265 in doloop1260 in k6117 in k6114 in k6083 in k5953 in k5925 in k5808 in k5709 in k5543 in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in ... */
static void C_ccall f_6178(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6178,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_6168(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k6211 in k6083 in k5953 in k5925 in k5808 in k5709 in k5543 in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in ... */
static void C_ccall f_6213(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_6213,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6214,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_slot(((C_word*)t0)[2],C_fix(1));
t4=C_i_check_list_2(t3,lf[101]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6282,a[2]=t6,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_6282(t8,((C_word*)t0)[4],t3);}

/* g1288 in k6211 in k6083 in k5953 in k5925 in k5808 in k5709 in k5543 in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in ... */
static void C_fcall f_6214(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_6214,3,t0,t1,t2);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6218,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* csi.scm:705: fprintf */
t4=*((C_word*)lf[146]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[223];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k6216 in g1288 in k6211 in k6083 in k5953 in k5925 in k5808 in k5709 in k5543 in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in ... */
static void C_ccall f_6218(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_6218,c,av);}
a=C_alloc(7);
t2=C_slot(((C_word*)t0)[2],C_fix(2));
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6227,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_6227(t6,((C_word*)t0)[5],t2);}

/* loop in k6216 in g1288 in k6211 in k6083 in k5953 in k5925 in k5808 in k5709 in k5543 in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in ... */
static void C_fcall f_6227(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(13,0,3)))){
C_save_and_reclaim_args((void *)trf_6227,3,t0,t1,t2);}
a=C_alloc(13);
if(C_truep(C_i_nullp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6237,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_i_caar(t2);
t5=C_eqp(((C_word*)t0)[3],t4);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6250,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6255,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:709: ##sys#with-print-length-limit */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[88]);
C_word av2[4];
av2[0]=*((C_word*)lf[88]+1);
av2[1]=t6;
av2[2]=C_fix(100);
av2[3]=t7;
tp(4,av2);}}
else{
/* csi.scm:714: loop */
t9=t1;
t10=C_i_cddr(t2);
t1=t9;
t2=t10;
goto loop;}}}

/* k6235 in loop in k6216 in g1288 in k6211 in k6083 in k5953 in k5925 in k5808 in k5709 in k5543 in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in ... */
static void C_ccall f_6237(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6237,c,av);}
/* csi.scm:714: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_6227(t2,((C_word*)t0)[3],C_i_cddr(((C_word*)t0)[4]));}

/* k6248 in loop in k6216 in g1288 in k6211 in k6083 in k5953 in k5925 in k5808 in k5709 in k5543 in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in ... */
static void C_ccall f_6250(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6250,c,av);}
/* csi.scm:713: scheme#newline */
t2=*((C_word*)lf[86]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* a6254 in loop in k6216 in g1288 in k6211 in k6083 in k5953 in k5925 in k5808 in k5709 in k5543 in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in ... */
static void C_ccall f_6255(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_6255,c,av);}
/* csi.scm:712: fprintf */
t2=*((C_word*)lf[146]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[222];
av2[4]=C_i_cdar(((C_word*)t0)[3]);
av2[5]=C_i_cadr(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* for-each-loop1287 in k6211 in k6083 in k5953 in k5925 in k5808 in k5709 in k5543 in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in ... */
static void C_fcall f_6282(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_6282,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6292,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:703: g1288 */
t4=((C_word*)t0)[3];
f_6214(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6290 in for-each-loop1287 in k6211 in k6083 in k5953 in k5925 in k5808 in k5709 in k5543 in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in ... */
static void C_ccall f_6292(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6292,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_6282(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k6317 in k6083 in k5953 in k5925 in k5808 in k5709 in k5543 in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in ... */
static void C_ccall f_6319(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_6319,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6323,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:718: g1317 */
t3=t2;
f_6323(t3,((C_word*)t0)[4],t1);}
else{
t2=C_i_assq(((C_word*)t0)[5],C_retrieve2(lf[140],C_text("chicken.csi#bytevector-data")));
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6337,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:718: g1328 */
t4=t3;
f_6337(t4,((C_word*)t0)[4],t2);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6402,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:723: fprintf */
t4=*((C_word*)lf[146]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[226];
av2[4]=C_slot(((C_word*)t0)[2],C_fix(0));
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}}

/* g1317 in k6317 in k6083 in k5953 in k5925 in k5808 in k5709 in k5543 in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in ... */
static void C_fcall f_6323(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_6323,3,t0,t1,t2);}
/* csi.scm:718: g1325 */
t3=t2;{
C_word av2[4];
av2[0]=t3;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)t0)[3];
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}

/* g1328 in k6317 in k6083 in k5953 in k5925 in k5808 in k5709 in k5543 in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in ... */
static void C_fcall f_6337(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,0,3)))){
C_save_and_reclaim_args((void *)trf_6337,3,t0,t1,t2);}
a=C_alloc(19);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6345,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=C_i_cdr(t2);
t9=C_i_check_list_2(t8,lf[134]);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6358,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6364,a[2]=t6,a[3]=t12,a[4]=t7,tmp=(C_word)a,a+=5,tmp));
t14=((C_word*)t12)[1];
f_6364(t14,t10,t8);}

/* k6343 in g1328 in k6317 in k6083 in k5953 in k5925 in k5808 in k5709 in k5543 in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in ... */
static void C_ccall f_6345(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6345,c,av);}{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
C_apply(4,av2);}}

/* k6356 in g1328 in k6317 in k6083 in k5953 in k5925 in k5808 in k5709 in k5543 in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in ... */
static void C_ccall f_6358(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_6358,c,av);}
a=C_alloc(3);
t2=C_a_i_list1(&a,1,C_fix(0));
/* csi.scm:721: scheme#append */
t3=*((C_word*)lf[225]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* map-loop1333 in g1328 in k6317 in k6083 in k5953 in k5925 in k5808 in k5709 in k5543 in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in ... */
static void C_fcall f_6364(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_6364,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6389,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* csi.scm:721: g1339 */
t4=*((C_word*)lf[54]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_slot(t2,C_fix(0));
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6387 in map-loop1333 in g1328 in k6317 in k6083 in k5953 in k5925 in k5808 in k5709 in k5543 in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in ... */
static void C_ccall f_6389(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6389,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_6364(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k6400 in k6317 in k6083 in k5953 in k5925 in k5808 in k5709 in k5543 in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in ... */
static void C_ccall f_6402(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_6402,c,av);}
/* csi.scm:724: descseq */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=C_SCHEME_FALSE;
av2[3]=*((C_word*)lf[170]+1);
av2[4]=*((C_word*)lf[172]+1);
av2[5]=C_fix(1);
f_5413(6,av2);}}

/* k6427 in chicken.csi#describe in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 in ... */
static void C_ccall f_6429(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6429,c,av);}
/* csi.scm:590: fprintf */
t2=*((C_word*)lf[146]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[233];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* chicken.csi#set-describer! in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_6437(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6437,c,av);}
t4=C_i_check_symbol_2(t2,lf[236]);
/* csi.scm:730: chicken.internal#hash-table-set! */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[237]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[237]+1);
av2[1]=t1;
av2[2]=C_retrieve2(lf[142],C_text("chicken.csi#describer-table"));
av2[3]=t2;
av2[4]=t3;
tp(5,av2);}}

/* chicken.csi#dump in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_fcall f_6446(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_6446,3,t1,t2,t3);}
a=C_alloc(9);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6448,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6554,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6559,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t3))){
/* csi.scm:737: def-len1372 */
t7=t6;
f_6559(t7,t1);}
else{
t7=C_i_car(t3);
t8=C_u_i_cdr(t3);
if(C_truep(C_i_nullp(t8))){
/* csi.scm:737: def-out1373 */
t9=t5;
f_6554(t9,t1,t7);}
else{
t9=C_i_car(t8);
t10=C_u_i_cdr(t8);
/* csi.scm:737: body1370 */
t11=t4;
f_6448(t11,t1,t7,t9);}}}

/* body1370 in chicken.csi#dump in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 in ... */
static void C_fcall f_6448(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_6448,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6451,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_immp(((C_word*)t0)[2]))){
/* csi.scm:741: ##sys#error */
t5=*((C_word*)lf[31]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t1;
av2[2]=lf[239];
av2[3]=lf[240];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6473,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* csi.scm:742: ##sys#bytevector? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[229]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[229]+1);
av2[1]=t5;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}}

/* bestlen in body1370 in chicken.csi#dump in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in ... */
static void C_fcall f_6451(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_6451,3,t0,t1,t2);}
if(C_truep(((C_word*)t0)[2])){
/* csi.scm:740: scheme#min */
t3=*((C_word*)lf[238]+1);{
C_word av2[4];
av2[0]=t3;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6471 in body1370 in chicken.csi#dump in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in ... */
static void C_ccall f_6473(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,5)))){
C_save_and_reclaim((void *)f_6473,c,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6480,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:742: bestlen */
t3=((C_word*)t0)[5];
f_6451(t3,t2,C_block_size(((C_word*)t0)[3]));}
else{
if(C_truep(C_i_stringp(((C_word*)t0)[3]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6497,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:743: bestlen */
t3=((C_word*)t0)[5];
f_6451(t3,t2,C_block_size(((C_word*)t0)[3]));}
else{
t2=C_immp(((C_word*)t0)[3]);
t3=C_i_not(t2);
t4=(C_truep(t3)?C_anypointerp(((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t4)){
/* csi.scm:745: hexdump */
f_6594(((C_word*)t0)[2],((C_word*)t0)[3],C_fix(32),*((C_word*)lf[241]+1),((C_word*)t0)[4]);}
else{
t5=C_structurep(((C_word*)t0)[3]);
t6=(C_truep(t5)?C_i_assq(C_slot(((C_word*)t0)[3],C_fix(0)),C_retrieve2(lf[140],C_text("chicken.csi#bytevector-data"))):C_SCHEME_FALSE);
if(C_truep(t6)){
t7=C_slot(((C_word*)t0)[3],C_fix(1));
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6526,a[2]=((C_word*)t0)[2],a[3]=t7,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:748: bestlen */
t9=((C_word*)t0)[5];
f_6451(t9,t8,C_block_size(t7));}
else{
/* csi.scm:749: ##sys#error */
t7=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[239];
av2[3]=lf[242];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}}}}}

/* k6478 in k6471 in body1370 in chicken.csi#dump in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in ... */
static void C_ccall f_6480(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_6480,c,av);}
/* csi.scm:742: hexdump */
f_6594(((C_word*)t0)[2],((C_word*)t0)[3],t1,*((C_word*)lf[211]+1),((C_word*)t0)[4]);}

/* k6495 in k6471 in body1370 in chicken.csi#dump in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in ... */
static void C_ccall f_6497(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_6497,c,av);}
/* csi.scm:743: hexdump */
f_6594(((C_word*)t0)[2],((C_word*)t0)[3],t1,*((C_word*)lf[211]+1),((C_word*)t0)[4]);}

/* k6524 in k6471 in body1370 in chicken.csi#dump in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in ... */
static void C_ccall f_6526(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_6526,c,av);}
/* csi.scm:748: hexdump */
f_6594(((C_word*)t0)[2],((C_word*)t0)[3],t1,*((C_word*)lf[211]+1),((C_word*)t0)[4]);}

/* def-out1373 in chicken.csi#dump in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 in ... */
static void C_fcall f_6554(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_6554,3,t0,t1,t2);}
/* csi.scm:737: body1370 */
t3=((C_word*)t0)[2];
f_6448(t3,t1,t2,*((C_word*)lf[84]+1));}

/* def-len1372 in chicken.csi#dump in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 in ... */
static void C_fcall f_6559(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_6559,2,t0,t1);}
/* csi.scm:737: def-out1373 */
t2=((C_word*)t0)[2];
f_6554(t2,t1,C_SCHEME_FALSE);}

/* chicken.csi#hexdump in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_fcall f_6594(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,6)))){
C_save_and_reclaim_args((void *)trf_6594,5,t1,t2,t3,t4,t5);}
a=C_alloc(12);
t6=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6597,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6629,a[2]=t3,a[3]=t8,a[4]=t5,a[5]=t4,a[6]=t2,a[7]=t6,tmp=(C_word)a,a+=8,tmp));
t10=((C_word*)t8)[1];
f_6629(t10,t1,C_fix(0));}

/* justify in chicken.csi#hexdump in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 in ... */
static void C_fcall f_6597(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_6597,5,t1,t2,t3,t4,t5);}
a=C_alloc(5);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6601,a[2]=t3,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[243]);
C_word av2[4];
av2[0]=*((C_word*)lf[243]+1);
av2[1]=t6;
av2[2]=t2;
av2[3]=t4;
tp(4,av2);}}

/* k6599 in justify in chicken.csi#hexdump in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in ... */
static void C_ccall f_6601(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_6601,c,av);}
a=C_alloc(4);
t2=C_block_size(t1);
if(C_truep(C_fixnum_lessp(t2,((C_word*)t0)[2]))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6617,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:762: make-string */
t4=*((C_word*)lf[117]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_fixnum_difference(((C_word*)t0)[2],t2);
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6615 in k6599 in justify in chicken.csi#hexdump in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in ... */
static void C_ccall f_6617(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6617,c,av);}
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[15]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[15]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* doloop1408 in chicken.csi#hexdump in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 in ... */
static void C_fcall f_6629(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,5)))){
C_save_and_reclaim_args((void *)trf_6629,3,t0,t1,t2);}
a=C_alloc(14);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6639,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6797,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:767: justify */
f_6597(t4,t2,C_fix(4),C_fix(10),C_make_character(32));}}

/* k6637 in doloop1408 in chicken.csi#hexdump in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in ... */
static void C_ccall f_6639(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_6639,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6642,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* ##sys#write-char/port */
t3=C_fast_retrieve(lf[244]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(58);
av2[3]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k6640 in k6637 in doloop1408 in chicken.csi#hexdump in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in ... */
static void C_ccall f_6642(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,4)))){
C_save_and_reclaim((void *)f_6642,c,av);}
a=C_alloc(19);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6645,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6714,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[5],a[4]=t4,a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_6714(t6,t2,C_fix(0),((C_word*)t0)[4]);}

/* k6643 in k6640 in k6637 in doloop1408 in chicken.csi#hexdump in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in ... */
static void C_ccall f_6645(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_6645,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6648,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* ##sys#write-char/port */
t3=C_fast_retrieve(lf[244]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(32);
av2[3]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k6646 in k6643 in k6640 in k6637 in doloop1408 in chicken.csi#hexdump in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in ... */
static void C_ccall f_6648(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,4)))){
C_save_and_reclaim((void *)f_6648,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6651,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6663,a[2]=((C_word*)t0)[6],a[3]=t4,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_6663(t6,t2,C_fix(0),((C_word*)t0)[4]);}

/* k6649 in k6646 in k6643 in k6640 in k6637 in doloop1408 in chicken.csi#hexdump in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in ... */
static void C_ccall f_6651(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_6651,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6654,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* ##sys#write-char/port */
t3=C_fast_retrieve(lf[244]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k6652 in k6649 in k6646 in k6643 in k6640 in k6637 in doloop1408 in chicken.csi#hexdump in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in ... */
static void C_ccall f_6654(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6654,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_6629(t2,((C_word*)t0)[3],C_fixnum_plus(((C_word*)t0)[4],C_fix(16)));}

/* doloop1419 in k6646 in k6643 in k6640 in k6637 in doloop1408 in chicken.csi#hexdump in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in ... */
static void C_fcall f_6663(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_6663,4,t0,t1,t2,t3);}
a=C_alloc(7);
t4=C_fixnum_greater_or_equal_p(t2,C_fix(16));
t5=(C_truep(t4)?t4:C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[2]));
if(C_truep(t5)){
t6=C_SCHEME_UNDEFINED;
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6676,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* csi.scm:784: ref */
t7=((C_word*)t0)[5];{
C_word av2[4];
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[6];
av2[3]=t3;
((C_proc)C_fast_retrieve_proc(t7))(4,av2);}}}

/* k6674 in doloop1419 in k6646 in k6643 in k6640 in k6637 in doloop1408 in chicken.csi#hexdump in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in ... */
static void C_ccall f_6676(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_6676,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6679,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_fixnum_greater_or_equal_p(t1,C_fix(32));
t4=(C_truep(t3)?C_fixnum_lessp(t1,C_fix(128)):C_SCHEME_FALSE);
if(C_truep(t4)){
/* ##sys#write-char/port */
t5=C_fast_retrieve(lf[244]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=C_make_character(C_unfix(t1));
av2[3]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
/* ##sys#write-char/port */
t5=C_fast_retrieve(lf[244]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=C_make_character(46);
av2[3]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k6677 in k6674 in doloop1419 in k6646 in k6643 in k6640 in k6637 in doloop1408 in chicken.csi#hexdump in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in ... */
static void C_ccall f_6679(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6679,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_6663(t2,((C_word*)t0)[3],C_fixnum_plus(((C_word*)t0)[4],C_fix(1)),C_fixnum_plus(((C_word*)t0)[5],C_fix(1)));}

/* doloop1418 in k6640 in k6637 in doloop1408 in chicken.csi#hexdump in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in ... */
static void C_fcall f_6714(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,3)))){
C_save_and_reclaim_args((void *)trf_6714,4,t0,t1,t2,t3);}
a=C_alloc(10);
t4=C_fixnum_greater_or_equal_p(t2,C_fix(16));
t5=(C_truep(t4)?t4:C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[2]));
if(C_truep(t5)){
if(C_truep(C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[2]))){
t6=C_fixnum_modulo(((C_word*)t0)[2],C_fix(16));
t7=C_eqp(t6,C_fix(0));
if(C_truep(t7)){
t8=C_SCHEME_UNDEFINED;
t9=t1;{
C_word av2[2];
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t8=C_fixnum_difference(C_fix(16),t6);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6748,a[2]=t10,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp));
t12=((C_word*)t10)[1];
f_6748(t12,t1,t8);}}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}
else{
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6768,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
/* ##sys#write-char/port */
t7=C_fast_retrieve(lf[244]);{
C_word av2[4];
av2[0]=t7;
av2[1]=t6;
av2[2]=C_make_character(32);
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}

/* doloop1427 in doloop1418 in k6640 in k6637 in doloop1408 in chicken.csi#hexdump in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in ... */
static void C_fcall f_6748(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_6748,3,t0,t1,t2);}
a=C_alloc(5);
t3=C_eqp(t2,C_fix(0));
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6758,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:777: display */
t5=*((C_word*)lf[94]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[245];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k6756 in doloop1427 in doloop1418 in k6640 in k6637 in doloop1408 in chicken.csi#hexdump in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in ... */
static void C_ccall f_6758(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6758,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_6748(t2,((C_word*)t0)[3],C_fixnum_difference(((C_word*)t0)[4],C_fix(1)));}

/* k6766 in doloop1418 in k6640 in k6637 in doloop1408 in chicken.csi#hexdump in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in ... */
static void C_ccall f_6768(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_6768,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6771,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6786,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6790,a[2]=((C_word*)t0)[7],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:779: ref */
t5=((C_word*)t0)[8];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[9];
av2[3]=((C_word*)t0)[5];
((C_proc)C_fast_retrieve_proc(t5))(4,av2);}}

/* k6769 in k6766 in doloop1418 in k6640 in k6637 in doloop1408 in chicken.csi#hexdump in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in ... */
static void C_ccall f_6771(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6771,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_6714(t2,((C_word*)t0)[3],C_fixnum_plus(((C_word*)t0)[4],C_fix(1)),C_fixnum_plus(((C_word*)t0)[5],C_fix(1)));}

/* k6784 in k6766 in doloop1418 in k6640 in k6637 in doloop1408 in chicken.csi#hexdump in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in ... */
static void C_ccall f_6786(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6786,c,av);}
/* csi.scm:779: display */
t2=*((C_word*)lf[94]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k6788 in k6766 in doloop1418 in k6640 in k6637 in doloop1408 in chicken.csi#hexdump in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in ... */
static void C_ccall f_6790(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_6790,c,av);}
/* csi.scm:779: justify */
f_6597(((C_word*)t0)[3],t1,C_fix(2),C_fix(16),C_make_character(48));}

/* k6795 in doloop1408 in chicken.csi#hexdump in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in ... */
static void C_ccall f_6797(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6797,c,av);}
/* csi.scm:767: display */
t2=*((C_word*)lf[94]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.csi#show-frameinfo in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_fcall f_6799(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_6799,2,t1,t2);}
a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6802,tmp=(C_word)a,a+=2,tmp);
t4=C_fast_retrieve(lf[96]);
t5=(C_truep(C_fast_retrieve(lf[96]))?C_fast_retrieve(lf[96]):C_SCHEME_END_OF_LIST);
t6=C_i_length(t5);
t7=(C_truep(C_u_i_memq(t2,t5))?t2:C_SCHEME_FALSE);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6825,a[2]=t6,a[3]=t3,a[4]=t1,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t7)){
t9=t8;
f_6825(t9,t7);}
else{
t9=C_fixnum_greaterp(t6,C_fix(0));
t10=t8;
f_6825(t10,(C_truep(t9)?C_i_list_ref(t5,C_fixnum_difference(t6,C_fix(1))):C_SCHEME_FALSE));}}

/* prin1 in chicken.csi#show-frameinfo in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 in ... */
static void C_fcall f_6802(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,3)))){
C_save_and_reclaim_args((void *)trf_6802,2,t1,t2);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6808,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:798: ##sys#with-print-length-limit */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[88]);
C_word av2[4];
av2[0]=*((C_word*)lf[88]+1);
av2[1]=t1;
av2[2]=C_fix(100);
av2[3]=t3;
tp(4,av2);}}

/* a6807 in prin1 in chicken.csi#show-frameinfo in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in ... */
static void C_ccall f_6808(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6808,c,av);}
/* csi.scm:801: ##sys#print */
t2=*((C_word*)lf[87]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=C_SCHEME_TRUE;
av2[4]=*((C_word*)lf[84]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k6823 in chicken.csi#show-frameinfo in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 in ... */
static void C_fcall f_6825(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_6825,2,t0,t1);}
a=C_alloc(6);
t2=C_mutate(&lf[8] /* (set! chicken.csi#selected-frame ...) */,t1);
t3=C_fixnum_difference(((C_word*)t0)[2],C_fix(1));
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6834,a[2]=t5,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_6834(t7,((C_word*)t0)[4],((C_word*)t0)[5],t3);}

/* doloop1464 in k6823 in chicken.csi#show-frameinfo in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in ... */
static void C_fcall f_6834(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,4)))){
C_save_and_reclaim_args((void *)trf_6834,4,t0,t1,t2,t3);}
a=C_alloc(14);
if(C_truep(C_i_nullp(t2))){
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_i_car(t2);
t5=C_eqp(C_retrieve2(lf[8],C_text("chicken.csi#selected-frame")),t4);
t6=C_slot(t4,C_fix(1));
t7=C_slot(t4,C_fix(2));
t8=C_i_structurep(t7,lf[99]);
t9=(C_truep(t8)?C_slot(t7,C_fix(1)):t7);
t10=*((C_word*)lf[84]+1);
t11=*((C_word*)lf[84]+1);
t12=C_i_check_port_2(*((C_word*)lf[84]+1),C_fix(2),C_SCHEME_TRUE,lf[85]);
t13=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6865,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t3,a[6]=t5,a[7]=t8,a[8]=((C_word*)t0)[3],a[9]=t7,a[10]=t6,a[11]=t9,a[12]=t10,a[13]=t4,tmp=(C_word)a,a+=14,tmp);
if(C_truep(t5)){
/* csi.scm:817: ##sys#print */
t14=*((C_word*)lf[87]+1);{
C_word av2[5];
av2[0]=t14;
av2[1]=t13;
av2[2]=C_make_character(42);
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[84]+1);
((C_proc)(void*)(*((C_word*)t14+1)))(5,av2);}}
else{
/* csi.scm:817: ##sys#print */
t14=*((C_word*)lf[87]+1);{
C_word av2[5];
av2[0]=t14;
av2[1]=t13;
av2[2]=C_make_character(32);
av2[3]=C_SCHEME_FALSE;
av2[4]=t10;
((C_proc)(void*)(*((C_word*)t14+1)))(5,av2);}}}}

/* k6863 in doloop1464 in k6823 in chicken.csi#show-frameinfo in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in ... */
static void C_ccall f_6865(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,4)))){
C_save_and_reclaim((void *)f_6865,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6868,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
/* csi.scm:817: ##sys#print */
t3=*((C_word*)lf[87]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[12];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k6866 in k6863 in doloop1464 in k6823 in chicken.csi#show-frameinfo in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in ... */
static void C_ccall f_6868(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_6868,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6871,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
/* csi.scm:817: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[90]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[90]+1);
av2[1]=t2;
av2[2]=C_make_character(58);
av2[3]=((C_word*)t0)[12];
tp(4,av2);}}

/* k6869 in k6866 in k6863 in doloop1464 in k6823 in chicken.csi#show-frameinfo in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in ... */
static void C_ccall f_6871(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,4)))){
C_save_and_reclaim((void *)f_6871,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6874,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
t3=(C_truep(((C_word*)t0)[7])?C_i_pairp(C_slot(((C_word*)t0)[9],C_fix(2))):C_SCHEME_FALSE);
if(C_truep(t3)){
/* csi.scm:817: ##sys#print */
t4=*((C_word*)lf[87]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[251];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[12];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
/* csi.scm:817: ##sys#print */
t4=*((C_word*)lf[87]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[252];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[12];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}

/* k6872 in k6869 in k6866 in k6863 in doloop1464 in k6823 in chicken.csi#show-frameinfo in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in ... */
static void C_ccall f_6874(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_6874,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6877,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
/* csi.scm:817: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[90]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[90]+1);
av2[1]=t2;
av2[2]=C_make_character(9);
av2[3]=((C_word*)t0)[12];
tp(4,av2);}}

/* k6875 in k6872 in k6869 in k6866 in k6863 in doloop1464 in k6823 in chicken.csi#show-frameinfo in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in ... */
static void C_ccall f_6877(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_6877,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6880,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
/* csi.scm:817: ##sys#print */
t3=*((C_word*)lf[87]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_slot(((C_word*)t0)[13],C_fix(0));
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[12];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k6878 in k6875 in k6872 in k6869 in k6866 in k6863 in doloop1464 in k6823 in chicken.csi#show-frameinfo in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in ... */
static void C_ccall f_6880(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_6880,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6883,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* csi.scm:817: ##sys#print */
t3=*((C_word*)lf[87]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[250];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[12];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k6881 in k6878 in k6875 in k6872 in k6869 in k6866 in k6863 in doloop1464 in k6823 in chicken.csi#show-frameinfo in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in ... */
static void C_ccall f_6883(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_6883,c,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6886,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
if(C_truep(((C_word*)t0)[11])){
t3=*((C_word*)lf[84]+1);
t4=*((C_word*)lf[84]+1);
t5=C_i_check_port_2(*((C_word*)lf[84]+1),C_fix(2),C_SCHEME_TRUE,lf[85]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7026,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[11],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:822: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[90]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[90]+1);
av2[1]=t6;
av2[2]=C_make_character(91);
av2[3]=*((C_word*)lf[84]+1);
tp(4,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_6886(2,av2);}}}

/* k6884 in k6881 in k6878 in k6875 in k6872 in k6869 in k6866 in k6863 in doloop1464 in k6823 in chicken.csi#show-frameinfo in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in ... */
static void C_ccall f_6886(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_6886,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6889,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[10])){
/* csi.scm:823: prin1 */
f_6802(t2,((C_word*)t0)[10]);}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_6889(2,av2);}}}

/* k6887 in k6884 in k6881 in k6878 in k6875 in k6872 in k6869 in k6866 in k6863 in doloop1464 in k6823 in chicken.csi#show-frameinfo in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in ... */
static void C_ccall f_6889(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_6889,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6892,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* csi.scm:824: newline */
t3=*((C_word*)lf[86]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k6890 in k6887 in k6884 in k6881 in k6878 in k6875 in k6872 in k6869 in k6866 in k6863 in doloop1464 in k6823 in chicken.csi#show-frameinfo in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in ... */
static void C_ccall f_6892(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,4)))){
C_save_and_reclaim((void *)f_6892,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6895,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(C_truep(((C_word*)t0)[6])?((C_word*)t0)[7]:C_SCHEME_FALSE);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6908,a[2]=((C_word*)t0)[8],tmp=(C_word)a,a+=3,tmp);
t5=C_slot(((C_word*)t0)[9],C_fix(2));
t6=C_slot(((C_word*)t0)[9],C_fix(3));
t7=C_i_check_list_2(t5,lf[101]);
t8=C_i_check_list_2(t6,lf[101]);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6982,a[2]=t10,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t12=((C_word*)t10)[1];
f_6982(t12,t2,t5,t6);}
else{
t4=((C_word*)((C_word*)t0)[2])[1];
f_6834(t4,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[4]),C_fixnum_difference(((C_word*)t0)[5],C_fix(1)));}}

/* k6893 in k6890 in k6887 in k6884 in k6881 in k6878 in k6875 in k6872 in k6869 in k6866 in k6863 in doloop1464 in k6823 in chicken.csi#show-frameinfo in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in ... */
static void C_ccall f_6895(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6895,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_6834(t2,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[4]),C_fixnum_difference(((C_word*)t0)[5],C_fix(1)));}

/* g1502 in k6890 in k6887 in k6884 in k6881 in k6878 in k6875 in k6872 in k6869 in k6866 in k6863 in doloop1464 in k6823 in chicken.csi#show-frameinfo in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in ... */
static void C_fcall f_6908(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_6908,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6918,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* csi.scm:829: display */
t5=*((C_word*)lf[94]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[248];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* k6916 in g1502 in k6890 in k6887 in k6884 in k6881 in k6878 in k6875 in k6872 in k6869 in k6866 in k6863 in doloop1464 in k6823 in chicken.csi#show-frameinfo in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in ... */
static void C_ccall f_6918(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_6918,c,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6923,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_6923(t5,((C_word*)t0)[4],C_fix(0),((C_word*)t0)[5]);}

/* doloop1515 in k6916 in g1502 in k6890 in k6887 in k6884 in k6881 in k6878 in k6875 in k6872 in k6869 in k6866 in k6863 in doloop1464 in k6823 in chicken.csi#show-frameinfo in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in ... */
static void C_fcall f_6923(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_6923,4,t0,t1,t2,t3);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t3))){
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=*((C_word*)lf[84]+1);
t5=*((C_word*)lf[84]+1);
t6=C_i_check_port_2(*((C_word*)lf[84]+1),C_fix(2),C_SCHEME_TRUE,lf[85]);
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6936,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=t4,tmp=(C_word)a,a+=9,tmp);
/* csi.scm:833: ##sys#print */
t8=*((C_word*)lf[87]+1);{
C_word av2[5];
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[247];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[84]+1);
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}}

/* k6934 in doloop1515 in k6916 in g1502 in k6890 in k6887 in k6884 in k6881 in k6878 in k6875 in k6872 in k6869 in k6866 in k6863 in doloop1464 in k6823 in chicken.csi#show-frameinfo in k5403 in k5080 in k4935 in k4291 in k3948 in ... */
static void C_ccall f_6936(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_6936,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6939,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* csi.scm:833: ##sys#print */
t3=*((C_word*)lf[87]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_i_car(((C_word*)t0)[5]);
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k6937 in k6934 in doloop1515 in k6916 in g1502 in k6890 in k6887 in k6884 in k6881 in k6878 in k6875 in k6872 in k6869 in k6866 in k6863 in doloop1464 in k6823 in chicken.csi#show-frameinfo in k5403 in k5080 in k4935 in k4291 in ... */
static void C_ccall f_6939(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_6939,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6942,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* csi.scm:833: ##sys#print */
t3=*((C_word*)lf[87]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[246];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k6940 in k6937 in k6934 in doloop1515 in k6916 in g1502 in k6890 in k6887 in k6884 in k6881 in k6878 in k6875 in k6872 in k6869 in k6866 in k6863 in doloop1464 in k6823 in chicken.csi#show-frameinfo in k5403 in k5080 in k4935 in ... */
static void C_ccall f_6942(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_6942,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6945,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:834: prin1 */
f_6802(t2,C_slot(((C_word*)t0)[7],((C_word*)t0)[4]));}

/* k6943 in k6940 in k6937 in k6934 in doloop1515 in k6916 in g1502 in k6890 in k6887 in k6884 in k6881 in k6878 in k6875 in k6872 in k6869 in k6866 in k6863 in doloop1464 in k6823 in chicken.csi#show-frameinfo in k5403 in k5080 in ... */
static void C_ccall f_6945(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_6945,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6948,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:835: newline */
t3=*((C_word*)lf[86]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k6946 in k6943 in k6940 in k6937 in k6934 in doloop1515 in k6916 in g1502 in k6890 in k6887 in k6884 in k6881 in k6878 in k6875 in k6872 in k6869 in k6866 in k6863 in doloop1464 in k6823 in chicken.csi#show-frameinfo in k5403 in ... */
static void C_ccall f_6948(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6948,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_6923(t2,((C_word*)t0)[3],C_fixnum_plus(((C_word*)t0)[4],C_fix(1)),C_u_i_cdr(((C_word*)t0)[5]));}

/* for-each-loop1501 in k6890 in k6887 in k6884 in k6881 in k6878 in k6875 in k6872 in k6869 in k6866 in k6863 in doloop1464 in k6823 in chicken.csi#show-frameinfo in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in ... */
static void C_fcall f_6982(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_6982,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6992,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* csi.scm:826: g1502 */
t7=((C_word*)t0)[3];
f_6908(t7,t6,C_slot(t2,C_fix(0)),C_slot(t3,C_fix(0)));}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* k6990 in for-each-loop1501 in k6890 in k6887 in k6884 in k6881 in k6878 in k6875 in k6872 in k6869 in k6866 in k6863 in doloop1464 in k6823 in chicken.csi#show-frameinfo in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in ... */
static void C_ccall f_6992(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6992,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_6982(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)),C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k7024 in k6881 in k6878 in k6875 in k6872 in k6869 in k6866 in k6863 in doloop1464 in k6823 in chicken.csi#show-frameinfo in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in ... */
static void C_ccall f_7026(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_7026,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7029,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:822: ##sys#print */
t3=*((C_word*)lf[87]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k7027 in k7024 in k6881 in k6878 in k6875 in k6872 in k6869 in k6866 in k6863 in doloop1464 in k6823 in chicken.csi#show-frameinfo in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in ... */
static void C_ccall f_7029(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7029,c,av);}
/* csi.scm:822: ##sys#print */
t2=*((C_word*)lf[87]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[249];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k7082 in k4771 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_fcall f_7084(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_7084,2,t0,t1);}
if(C_truep(t1)){
/* csi.scm:846: display */
t2=*((C_word*)lf[94]+1);{
C_word av2[3];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[95];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
t2=C_i_length(C_fast_retrieve(lf[96]));
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=C_fixnum_difference(t2,t3);
t5=C_i_list_ref(C_fast_retrieve(lf[96]),t4);
t6=C_mutate(&lf[8] /* (set! chicken.csi#selected-frame ...) */,t5);
/* csi.scm:852: show-frameinfo */
f_6799(((C_word*)t0)[2],C_retrieve2(lf[8],C_text("chicken.csi#selected-frame")));}}

/* k7139 in k4784 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_fcall f_7141(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_7141,2,t0,t1);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7143,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7174,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:873: call/cc */
t4=*((C_word*)lf[103]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t3;
av2[1]=*((C_word*)lf[29]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* compare in k7139 in k4784 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_fcall f_7143(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,4)))){
C_save_and_reclaim_args((void *)trf_7143,3,t0,t1,t2);}
a=C_alloc(4);
t3=C_slot(t2,C_fix(1));
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7154,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=C_i_string_length(((C_word*)t0)[2]);
t6=C_i_string_length(t3);
/* csi.scm:871: scheme#substring */
t7=*((C_word*)lf[13]+1);{
C_word av2[5];
av2[0]=t7;
av2[1]=t4;
av2[2]=t3;
av2[3]=C_fix(0);
av2[4]=C_i_fixnum_min(t5,t6);
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}

/* k7152 in compare in k7139 in k4784 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 in ... */
static void C_ccall f_7154(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7154,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_i_string_equal_p(((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a7173 in k7139 in k4784 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_7174(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_7174,c,av);}
a=C_alloc(12);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7177,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7196,a[2]=t3,a[3]=t5,a[4]=t2,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_7196(t7,t1,((C_word*)t0)[4]);}

/* fail in a7173 in k7139 in k4784 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 in ... */
static void C_fcall f_7177(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_7177,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7181,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:876: display */
t4=*((C_word*)lf[94]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k7179 in fail in a7173 in k7139 in k4784 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in ... */
static void C_ccall f_7181(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_7181,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7184,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:877: newline */
t3=*((C_word*)lf[86]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k7182 in k7179 in fail in a7173 in k7139 in k4784 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in ... */
static void C_ccall f_7184(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7184,c,av);}
t2=*((C_word*)lf[29]+1);
/* csi.scm:878: return */
t3=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=*((C_word*)lf[29]+1);
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* doloop1584 in a7173 in k7139 in k4784 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 in ... */
static void C_fcall f_7196(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(20,0,4)))){
C_save_and_reclaim_args((void *)trf_7196,3,t0,t1,t2);}
a=C_alloc(20);
if(C_truep(C_i_nullp(t2))){
/* csi.scm:880: fail */
t3=((C_word*)t0)[2];
f_7177(t3,t1,lf[98]);}
else{
t3=C_i_car(t2);
t4=C_eqp(C_retrieve2(lf[8],C_text("chicken.csi#selected-frame")),t3);
t5=C_slot(t3,C_fix(2));
t6=C_i_structurep(t5,lf[99]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7221,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t8=(C_truep(t4)?t6:C_SCHEME_FALSE);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7230,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t10=C_slot(t5,C_fix(2));
t11=C_slot(t5,C_fix(3));
t12=C_i_check_list_2(t10,lf[101]);
t13=C_i_check_list_2(t11,lf[101]);
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7306,a[2]=((C_word*)t0)[2],a[3]=t7,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7315,a[2]=t16,a[3]=t9,tmp=(C_word)a,a+=4,tmp));
t18=((C_word*)t16)[1];
f_7315(t18,t14,t10,t11);}
else{
t19=t1;
t20=C_u_i_cdr(t2);
t1=t19;
t2=t20;
goto loop;}}}

/* k7219 in doloop1584 in a7173 in k7139 in k4784 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in ... */
static void C_ccall f_7221(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7221,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_7196(t2,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[4]));}

/* g1599 in doloop1584 in a7173 in k7139 in k4784 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in ... */
static void C_fcall f_7230(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_7230,4,t0,t1,t2,t3);}
a=C_alloc(8);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7236,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_7236(t7,t1,C_fix(0),t2);}

/* doloop1612 in g1599 in doloop1584 in a7173 in k7139 in k4784 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in ... */
static void C_fcall f_7236(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,2)))){
C_save_and_reclaim_args((void *)trf_7236,4,t0,t1,t2,t3);}
a=C_alloc(15);
if(C_truep(C_i_nullp(t3))){
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7246,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7258,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=t3,a[7]=((C_word*)t0)[2],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
/* csi.scm:892: compare */
t6=((C_word*)t0)[5];
f_7143(t6,t5,C_i_car(t3));}}

/* k7244 in doloop1612 in g1599 in doloop1584 in a7173 in k7139 in k4784 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in ... */
static void C_ccall f_7246(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7246,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_7236(t2,((C_word*)t0)[3],C_fixnum_plus(((C_word*)t0)[4],C_fix(1)),C_u_i_cdr(((C_word*)t0)[5]));}

/* k7256 in doloop1612 in g1599 in doloop1584 in a7173 in k7139 in k4784 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in ... */
static void C_ccall f_7258(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_7258,c,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7261,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* csi.scm:893: display */
t3=*((C_word*)lf[94]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[100];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=((C_word*)((C_word*)t0)[7])[1];
f_7236(t2,((C_word*)t0)[8],C_fixnum_plus(((C_word*)t0)[5],C_fix(1)),C_u_i_cdr(((C_word*)t0)[6]));}}

/* k7259 in k7256 in doloop1612 in g1599 in doloop1584 in a7173 in k7139 in k4784 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in ... */
static void C_ccall f_7261(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_7261,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7264,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:894: display */
t3=*((C_word*)lf[94]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_u_i_car(((C_word*)t0)[6]);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k7262 in k7259 in k7256 in doloop1612 in g1599 in doloop1584 in a7173 in k7139 in k4784 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in ... */
static void C_ccall f_7264(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_7264,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7267,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:895: newline */
t3=*((C_word*)lf[86]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k7265 in k7262 in k7259 in k7256 in doloop1612 in g1599 in doloop1584 in a7173 in k7139 in k4784 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in ... */
static void C_ccall f_7267(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_7267,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7270,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_slot(((C_word*)t0)[4],((C_word*)t0)[5]);
t4=C_a_i_list1(&a,1,t3);
/* csi.scm:896: history-add */
t5=C_retrieve2(lf[28],C_text("chicken.csi#history-add"));
f_4127(t5,t2,t4);}

/* k7268 in k7265 in k7262 in k7259 in k7256 in doloop1612 in g1599 in doloop1584 in a7173 in k7139 in k4784 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in ... */
static void C_ccall f_7270(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7270,c,av);}
/* csi.scm:897: return */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=C_slot(((C_word*)t0)[4],((C_word*)t0)[5]);
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}

/* k7304 in doloop1584 in a7173 in k7139 in k4784 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in ... */
static void C_ccall f_7306(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_7306,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7313,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:900: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[15]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[15]+1);
av2[1]=t2;
av2[2]=lf[102];
av2[3]=((C_word*)t0)[4];
tp(4,av2);}}

/* k7311 in k7304 in doloop1584 in a7173 in k7139 in k4784 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in ... */
static void C_ccall f_7313(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7313,c,av);}
/* csi.scm:900: fail */
t2=((C_word*)t0)[2];
f_7177(t2,((C_word*)t0)[3],t1);}

/* for-each-loop1598 in doloop1584 in a7173 in k7139 in k4784 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in ... */
static void C_fcall f_7315(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_7315,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7325,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* csi.scm:887: g1599 */
t7=((C_word*)t0)[3];
f_7230(t7,t6,C_slot(t2,C_fix(0)),C_slot(t3,C_fix(0)));}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* k7323 in for-each-loop1598 in doloop1584 in a7173 in k7139 in k4784 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in ... */
static void C_ccall f_7325(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7325,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_7315(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)),C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k7366 in k4784 in chicken.csi#csi-eval in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_7368(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7368,c,av);}
t2=((C_word*)t0)[2];
f_7141(t2,C_SCHEME_FALSE);}

/* chicken.csi#member* in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_fcall f_7373(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_7373,3,t1,t2,t3);}
a=C_alloc(6);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7379,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_7379(t7,t1,t3);}

/* loop in chicken.csi#member* in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 in ... */
static void C_fcall f_7379(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_7379,3,t0,t1,t2);}
a=C_alloc(7);
if(C_truep(C_i_pairp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7391,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_7391(t6,t1,((C_word*)t0)[3]);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* find in loop in chicken.csi#member* in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in ... */
static void C_fcall f_7391(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_7391,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
/* csi.scm:924: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_7379(t3,t1,C_i_cdr(((C_word*)t0)[3]));}
else{
t3=C_i_car(t2);
t4=C_i_car(((C_word*)t0)[3]);
if(C_truep(C_i_equalp(t3,t4))){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
/* csi.scm:926: find */
t6=t1;
t7=C_u_i_cdr(t2);
t1=t6;
t2=t7;
goto loop;}}}

/* chicken.csi#canonicalize-args in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_fcall f_7428(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_7428,2,t1,t2);}
a=C_alloc(5);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7434,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_7434(t6,t1,t2);}

/* loop in chicken.csi#canonicalize-args in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 in ... */
static void C_fcall f_7434(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_7434,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_car(t2);
if(C_truep((C_truep(C_i_equalp(t3,lf[259]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t3,lf[260]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t3,lf[261]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t3,lf[262]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t3,lf[263]))?C_SCHEME_TRUE:C_SCHEME_FALSE))))))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_block_size(t3);
t5=C_eqp(t4,C_fix(2));
t6=(C_truep(t5)?C_i_char_equalp(C_make_character(45),C_subchar(t3,C_fix(0))):C_SCHEME_FALSE);
if(C_truep(t6)){
if(C_truep(C_i_memq(C_subchar(t3,C_fix(1)),C_retrieve2(lf[256],C_text("chicken.csi#constant1687"))))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7469,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:947: loop */
t11=t7;
t12=C_u_i_cdr(t2);
t1=t11;
t2=t12;
goto loop;}
else{
/* csi.scm:948: ##sys#error */
t7=*((C_word*)lf[31]+1);{
C_word av2[4];
av2[0]=t7;
av2[1]=t1;
av2[2]=lf[264];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}
else{
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7481,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t8=C_block_size(t3);
if(C_truep(C_fixnum_greaterp(t8,C_fix(2)))){
t9=C_i_char_equalp(C_make_character(45),C_subchar(t3,C_fix(0)));
t10=t7;
f_7481(t10,(C_truep(t9)?C_i_not(C_i_member(t3,lf[267])):C_SCHEME_FALSE));}
else{
t9=t7;
f_7481(t9,C_SCHEME_FALSE);}}}}}

/* k7467 in loop in chicken.csi#canonicalize-args in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in ... */
static void C_ccall f_7469(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_7469,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7479 in loop in chicken.csi#canonicalize-args in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in ... */
static void C_fcall f_7481(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_7481,2,t0,t1);}
a=C_alloc(9);
if(C_truep(t1)){
if(C_truep(C_i_char_equalp(C_make_character(58),C_subchar(((C_word*)t0)[2],C_fix(1))))){
/* csi.scm:953: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_7434(t2,((C_word*)t0)[4],C_u_i_cdr(((C_word*)t0)[5]));}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7495,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7563,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:954: scheme#substring */
t4=*((C_word*)lf[13]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(1);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7571,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:958: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_7434(t3,t2,C_u_i_cdr(((C_word*)t0)[5]));}}

/* k7493 in k7479 in loop in chicken.csi#canonicalize-args in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in ... */
static void C_ccall f_7495(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,3)))){
C_save_and_reclaim((void *)f_7495,c,av);}
a=C_alloc(19);
t2=C_retrieve2(lf[256],C_text("chicken.csi#constant1687"));
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7613,tmp=(C_word)a,a+=2,tmp);
t4=(
  f_7613(t1)
);
if(C_truep(t4)){
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7516,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7524,a[2]=t7,a[3]=t11,a[4]=t8,tmp=(C_word)a,a+=5,tmp));
t13=((C_word*)t11)[1];
f_7524(t13,t9,t1);}
else{
/* csi.scm:957: ##sys#error */
t5=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[265];
av2[3]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k7514 in k7493 in k7479 in loop in chicken.csi#canonicalize-args in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in ... */
static void C_ccall f_7516(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_7516,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7520,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:956: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_7434(t3,t2,C_u_i_cdr(((C_word*)t0)[4]));}

/* k7518 in k7514 in k7493 in k7479 in loop in chicken.csi#canonicalize-args in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in ... */
static void C_ccall f_7520(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7520,c,av);}
/* csi.scm:956: scheme#append */
t2=*((C_word*)lf[225]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* map-loop1710 in k7493 in k7479 in loop in chicken.csi#canonicalize-args in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in ... */
static void C_fcall f_7524(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7524,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_string(&a,2,C_make_character(45),t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t9=t1;
t10=C_slot(t2,C_fix(1));
t1=t9;
t2=t10;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7561 in k7479 in loop in chicken.csi#canonicalize-args in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in ... */
static void C_ccall f_7563(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7563,c,av);}
/* ##sys#string->list */
t2=C_fast_retrieve(lf[266]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k7569 in k7479 in loop in chicken.csi#canonicalize-args in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in ... */
static void C_ccall f_7571(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_7571,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop in k7493 in k7479 in loop in chicken.csi#canonicalize-args in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in ... */
static C_word C_fcall f_7613(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:{}
t2=C_i_nullp(t1);
if(C_truep(t2)){
return(t2);}
else{
t3=C_i_car(t1);
if(C_truep(C_i_memq(t3,C_retrieve2(lf[256],C_text("chicken.csi#constant1687"))))){
t5=C_u_i_cdr(t1);
t1=t5;
goto loop;}
else{
return(C_SCHEME_FALSE);}}}

/* k7641 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_7643(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_7643,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7646,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8707,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:979: chicken.process-context#command-line-arguments */
t4=C_fast_retrieve(lf[298]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k7644 in k7641 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 in ... */
static void C_ccall f_7646(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_7646,c,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7649,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:981: member* */
f_7373(t4,lf[368],((C_word*)t3)[1]);}

/* k7647 in k7644 in k7641 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in ... */
static void C_ccall f_7649(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_7649,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7652,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:982: member* */
f_7373(t2,lf[367],((C_word*)((C_word*)t0)[2])[1]);}

/* k7650 in k7647 in k7644 in k7641 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in ... */
static void C_ccall f_7652(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_7652,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7655,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8607,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_cdr(t1);
t5=C_i_pairp(t4);
t6=C_i_not(t5);
if(C_truep(t6)){
if(C_truep(t6)){
/* csi.scm:987: ##sys#error */
t7=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t3;
av2[2]=lf[365];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t7=t3;{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_SCHEME_UNDEFINED;
f_8607(2,av2);}}}
else{
t7=C_i_cadr(t1);
t8=C_i_string_length(t7);
t9=C_eqp(t8,C_fix(0));
if(C_truep(t9)){
if(C_truep(t9)){
/* csi.scm:987: ##sys#error */
t10=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t10;
av2[1]=t3;
av2[2]=lf[365];
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}
else{
t10=t3;{
C_word *av2=av;
av2[0]=t10;
av2[1]=C_SCHEME_UNDEFINED;
f_8607(2,av2);}}}
else{
t10=C_u_i_cdr(t1);
t11=C_i_string_ref(C_u_i_car(t10),C_fix(0));
if(C_truep(C_u_i_char_equalp(C_make_character(45),t11))){
/* csi.scm:987: ##sys#error */
t12=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t12;
av2[1]=t3;
av2[2]=lf[365];
((C_proc)(void*)(*((C_word*)t12+1)))(3,av2);}}
else{
t12=t3;{
C_word *av2=av;
av2[0]=t12;
av2[1]=C_SCHEME_UNDEFINED;
f_8607(2,av2);}}}}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8690,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8703,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:997: canonicalize-args */
f_7428(t4,((C_word*)t0)[5]);}}

/* k7653 in k7650 in k7647 in k7644 in k7641 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in ... */
static void C_fcall f_7655(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_7655,2,t0,t1);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7658,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:1000: member* */
f_7373(t2,lf[362],((C_word*)((C_word*)t0)[3])[1]);}

/* k7656 in k7653 in k7650 in k7647 in k7644 in k7641 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in ... */
static void C_ccall f_7658(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_7658,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7661,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=t2;
f_7661(t3,((C_word*)t0)[2]);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8601,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1001: member* */
f_7373(t3,lf[361],((C_word*)((C_word*)t0)[3])[1]);}}

/* k7659 in k7656 in k7653 in k7650 in k7647 in k7644 in k7641 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in ... */
static void C_fcall f_7661(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_7661,2,t0,t1);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7664,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* csi.scm:1002: member* */
f_7373(t2,lf[360],((C_word*)((C_word*)t0)[4])[1]);}

/* k7662 in k7659 in k7656 in k7653 in k7650 in k7647 in k7644 in k7641 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in ... */
static void C_ccall f_7664(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void *)f_7664,c,av);}
a=C_alloc(19);
t2=(C_truep(((C_word*)t0)[2])?((C_word*)t0)[2]:(C_truep(t1)?t1:((C_word*)t0)[3]));
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_retrieve2(lf[12],C_text("chicken.csi#chop-separator"));
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7673,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[3],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=t5,a[10]=t6,tmp=(C_word)a,a+=11,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8592,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1006: chicken.process-context#get-environment-variable */
t10=C_fast_retrieve(lf[23]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t10;
av2[1]=t9;
av2[2]=lf[359];
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}

/* k7671 in k7662 in k7659 in k7656 in k7653 in k7650 in k7647 in k7644 in k7641 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in ... */
static void C_ccall f_7673(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_7673,c,av);}
a=C_alloc(16);
t2=C_i_check_list_2(t1,lf[134]);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7679,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8556,a[2]=((C_word*)t0)[9],a[3]=t5,a[4]=((C_word*)t0)[10],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_8556(t7,t3,t1);}

/* k7677 in k7671 in k7662 in k7659 in k7656 in k7653 in k7650 in k7647 in k7644 in k7641 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in ... */
static void C_ccall f_7679(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,4)))){
C_save_and_reclaim((void *)f_7679,c,av);}
a=C_alloc(24);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7681,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp));
t7=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7793,tmp=(C_word)a,a+=2,tmp));
t8=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7850,a[2]=((C_word*)t0)[3],a[3]=t5,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=t1,a[11]=t3,tmp=(C_word)a,a+=12,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8548,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1031: member* */
f_7373(t9,lf[357],((C_word*)((C_word*)t0)[2])[1]);}

/* collect-options in k7677 in k7671 in k7662 in k7659 in k7656 in k7653 in k7650 in k7647 in k7644 in k7641 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in ... */
static void C_fcall f_7681(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_7681,3,t0,t1,t2);}
a=C_alloc(6);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7687,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_7687(t6,t1,((C_word*)((C_word*)t0)[2])[1]);}

/* loop in collect-options in k7677 in k7671 in k7662 in k7659 in k7656 in k7653 in k7650 in k7647 in k7644 in k7641 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in ... */
static void C_fcall f_7687(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_7687,3,t0,t1,t2);}
a=C_alloc(4);
t3=C_i_member(((C_word*)t0)[2],t2);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7695,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1009: g1884 */
t5=t4;
f_7695(t5,t1,t3);}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* g1884 in loop in collect-options in k7677 in k7671 in k7662 in k7659 in k7656 in k7653 in k7650 in k7647 in k7644 in k7641 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in ... */
static void C_fcall f_7695(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_7695,3,t0,t1,t2);}
a=C_alloc(4);
t3=C_i_cdr(t2);
if(C_truep(C_i_nullp(t3))){
/* csi.scm:1012: ##sys#error */
t4=*((C_word*)lf[31]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t1;
av2[2]=lf[269];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t4=C_i_cadr(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7716,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_u_i_cdr(t2);
/* csi.scm:1013: loop */
t7=((C_word*)((C_word*)t0)[3])[1];
f_7687(t7,t5,C_u_i_cdr(t6));}}

/* k7714 in g1884 in loop in collect-options in k7677 in k7671 in k7662 in k7659 in k7656 in k7653 in k7650 in k7647 in k7644 in k7641 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in ... */
static void C_ccall f_7716(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_7716,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7730 in k8200 in k7915 in k7912 in k7909 in k7906 in k7903 in k7900 in k7897 in k7894 in k7890 in k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in k7854 in k7851 in k7848 in ... */
static void C_ccall f_7732(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_7732,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7735,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=C_a_i_list2(&a,2,t1,lf[310]);
/* csi.scm:1017: chicken.pathname#make-pathname */
t4=C_fast_retrieve(lf[307]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
av2[3]=C_retrieve2(lf[1],C_text("chicken.csi#constant701"));
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_7735(2,av2);}}}

/* k7733 in k7730 in k8200 in k7915 in k7912 in k7909 in k7906 in k7903 in k7900 in k7897 in k7894 in k7890 in k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in k7854 in k7851 in ... */
static void C_ccall f_7735(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_7735,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7738,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1019: chicken.process-context#get-environment-variable */
t3=C_fast_retrieve(lf[23]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[309];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k7736 in k7733 in k7730 in k8200 in k7915 in k7912 in k7909 in k7906 in k7903 in k7900 in k7897 in k7894 in k7890 in k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in k7854 in ... */
static void C_ccall f_7738(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_7738,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7741,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=C_i_string_equal_p(t1,lf[306]);
if(C_truep(C_i_not(t3))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7778,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=C_retrieve2(lf[1],C_text("chicken.csi#constant701"));
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[15]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[15]+1);
av2[1]=t4;
av2[2]=lf[308];
av2[3]=C_retrieve2(lf[1],C_text("chicken.csi#constant701"));
tp(4,av2);}}
else{
t4=t2;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_7741(2,av2);}}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_7741(2,av2);}}}

/* k7739 in k7736 in k7733 in k7730 in k8200 in k7915 in k7912 in k7909 in k7906 in k7903 in k7900 in k7897 in k7894 in k7890 in k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in ... */
static void C_ccall f_7741(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_7741,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7747,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[3])){
/* csi.scm:1022: chicken.file#file-exists? */
t3=C_fast_retrieve(lf[14]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_7747(2,av2);}}}

/* k7745 in k7739 in k7736 in k7733 in k7730 in k8200 in k7915 in k7912 in k7909 in k7906 in k7903 in k7900 in k7897 in k7894 in k7890 in k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in k7860 in ... */
static void C_ccall f_7747(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_7747,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
/* csi.scm:1023: scheme#load */
t2=*((C_word*)lf[65]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7756,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[4])){
/* csi.scm:1024: chicken.file#file-exists? */
t3=C_fast_retrieve(lf[14]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_7920(2,av2);}}}}

/* k7754 in k7745 in k7739 in k7736 in k7733 in k7730 in k8200 in k7915 in k7912 in k7909 in k7906 in k7903 in k7900 in k7897 in k7894 in k7890 in k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in ... */
static void C_ccall f_7756(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7756,c,av);}
if(C_truep(t1)){
/* csi.scm:1025: scheme#load */
t2=*((C_word*)lf[65]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_7920(2,av2);}}}

/* k7776 in k7736 in k7733 in k7730 in k8200 in k7915 in k7912 in k7909 in k7906 in k7903 in k7900 in k7897 in k7894 in k7890 in k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in ... */
static void C_ccall f_7778(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7778,c,av);}
/* csi.scm:1021: chicken.pathname#make-pathname */
t2=C_fast_retrieve(lf[307]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* evalstring in k7677 in k7671 in k7662 in k7659 in k7656 in k7653 in k7650 in k7647 in k7644 in k7641 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in ... */
static void C_fcall f_7793(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7793,3,t1,t2,t3);}
a=C_alloc(6);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7840,tmp=(C_word)a,a+=2,tmp):C_i_car(t3));
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7800,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1027: chicken.base#open-input-string */
t7=C_fast_retrieve(lf[271]);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k7798 in evalstring in k7677 in k7671 in k7662 in k7659 in k7656 in k7653 in k7650 in k7647 in k7644 in k7641 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in ... */
static void C_ccall f_7800(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_7800,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7807,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:1028: scheme#read */
t3=*((C_word*)lf[52]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k7805 in k7798 in evalstring in k7677 in k7671 in k7662 in k7659 in k7656 in k7653 in k7650 in k7647 in k7644 in k7641 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in ... */
static void C_ccall f_7807(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_7807,c,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7809,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_7809(t5,((C_word*)t0)[4],t1);}

/* doloop1914 in k7805 in k7798 in evalstring in k7677 in k7671 in k7662 in k7659 in k7656 in k7653 in k7650 in k7647 in k7644 in k7641 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in ... */
static void C_fcall f_7809(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_7809,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_eofp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7819,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7830,a[2]=((C_word*)t0)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7832,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1030: ##sys#call-with-values */{
C_word av2[4];
av2[0]=0;
av2[1]=t4;
av2[2]=t5;
av2[3]=*((C_word*)lf[270]+1);
C_call_with_values(4,av2);}}}

/* k7817 in doloop1914 in k7805 in k7798 in evalstring in k7677 in k7671 in k7662 in k7659 in k7656 in k7653 in k7650 in k7647 in k7644 in k7641 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in ... */
static void C_ccall f_7819(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_7819,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7826,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1028: scheme#read */
t3=*((C_word*)lf[52]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k7824 in k7817 in doloop1914 in k7805 in k7798 in evalstring in k7677 in k7671 in k7662 in k7659 in k7656 in k7653 in k7650 in k7647 in k7644 in k7641 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in ... */
static void C_ccall f_7826(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7826,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_7809(t2,((C_word*)t0)[3],t1);}

/* k7828 in doloop1914 in k7805 in k7798 in evalstring in k7677 in k7671 in k7662 in k7659 in k7656 in k7653 in k7650 in k7647 in k7644 in k7641 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in ... */
static void C_ccall f_7830(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7830,c,av);}
/* csi.scm:1030: rec */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}

/* a7831 in doloop1914 in k7805 in k7798 in evalstring in k7677 in k7671 in k7662 in k7659 in k7656 in k7653 in k7650 in k7647 in k7644 in k7641 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in ... */
static void C_ccall f_7832(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7832,c,av);}
/* csi.scm:1030: scheme#eval */
t2=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* f_7840 in evalstring in k7677 in k7671 in k7662 in k7659 in k7656 in k7653 in k7650 in k7647 in k7644 in k7641 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in ... */
static void C_ccall f_7840(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7840,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=*((C_word*)lf[29]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7848 in k7677 in k7671 in k7662 in k7659 in k7656 in k7653 in k7650 in k7647 in k7644 in k7641 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in ... */
static void C_ccall f_7850(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_7850,c,av);}
a=C_alloc(18);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7853,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep(C_i_member(lf[351],((C_word*)((C_word*)t0)[6])[1]))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8542,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9547,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:144: chicken.platform#chicken-version */
t5=C_fast_retrieve(lf[316]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_7853(2,av2);}}}

/* k7851 in k7848 in k7677 in k7671 in k7662 in k7659 in k7656 in k7653 in k7650 in k7647 in k7644 in k7641 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in ... */
static void C_ccall f_7853(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_7853,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7856,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep(C_i_member(lf[349],((C_word*)((C_word*)t0)[6])[1]))){
t3=C_set_block_item(lf[350] /* ##sys#setup-mode */,0,C_SCHEME_TRUE);
t4=t2;
f_7856(t4,t3);}
else{
t3=t2;
f_7856(t3,C_SCHEME_UNDEFINED);}}

/* k7854 in k7851 in k7848 in k7677 in k7671 in k7662 in k7659 in k7656 in k7653 in k7650 in k7647 in k7644 in k7641 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in ... */
static void C_fcall f_7856(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,0,2)))){
C_save_and_reclaim_args((void *)trf_7856,2,t0,t1);}
a=C_alloc(18);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7859,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep(C_i_member(lf[348],((C_word*)((C_word*)t0)[6])[1]))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8525,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8532,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1040: chicken.platform#chicken-version */
t5=C_fast_retrieve(lf[316]);{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t3=t2;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_7859(2,av2);}}}

/* k7857 in k7854 in k7851 in k7848 in k7677 in k7671 in k7662 in k7659 in k7656 in k7653 in k7650 in k7647 in k7644 in k7641 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in ... */
static void C_ccall f_7859(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_7859,c,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7862,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8512,a[2]=t2,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1042: member* */
f_7373(t3,lf[347],((C_word*)((C_word*)t0)[6])[1]);}

/* k7860 in k7857 in k7854 in k7851 in k7848 in k7677 in k7671 in k7662 in k7659 in k7656 in k7653 in k7650 in k7647 in k7644 in k7641 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in ... */
static void C_fcall f_7862(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,0,3)))){
C_save_and_reclaim_args((void *)trf_7862,2,t0,t1);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7865,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8497,a[2]=t2,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1045: member* */
f_7373(t3,lf[344],((C_word*)((C_word*)t0)[6])[1]);}

/* k7863 in k7860 in k7857 in k7854 in k7851 in k7848 in k7677 in k7671 in k7662 in k7659 in k7656 in k7653 in k7650 in k7647 in k7644 in k7641 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in ... */
static void C_ccall f_7865(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_7865,c,av);}
a=C_alloc(13);
t2=C_fast_retrieve(lf[272]);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_7868,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t2,tmp=(C_word)a,a+=13,tmp);
/* csi.scm:1049: collect-options */
t4=((C_word*)((C_word*)t0)[11])[1];
f_7681(t4,t3,lf[341]);}

/* k7866 in k7863 in k7860 in k7857 in k7854 in k7851 in k7848 in k7677 in k7671 in k7662 in k7659 in k7656 in k7653 in k7650 in k7647 in k7644 in k7641 in k5403 in k5080 in k4935 in k4291 in k3948 in ... */
static void C_ccall f_7868(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_7868,c,av);}
a=C_alloc(18);
t2=C_i_check_list_2(t1,lf[101]);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7874,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8473,a[2]=t5,a[3]=((C_word*)t0)[12],tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_8473(t7,t3,t1);}

/* k7872 in k7866 in k7863 in k7860 in k7857 in k7854 in k7851 in k7848 in k7677 in k7671 in k7662 in k7659 in k7656 in k7653 in k7650 in k7647 in k7644 in k7641 in k5403 in k5080 in k4935 in k4291 in ... */
static void C_ccall f_7874(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_7874,c,av);}
a=C_alloc(13);
t2=C_fast_retrieve(lf[272]);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_7877,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t2,tmp=(C_word)a,a+=13,tmp);
/* csi.scm:1050: collect-options */
t4=((C_word*)((C_word*)t0)[11])[1];
f_7681(t4,t3,lf[340]);}

/* k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in k7854 in k7851 in k7848 in k7677 in k7671 in k7662 in k7659 in k7656 in k7653 in k7650 in k7647 in k7644 in k7641 in k5403 in k5080 in k4935 in ... */
static void C_ccall f_7877(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_7877,c,av);}
a=C_alloc(18);
t2=C_i_check_list_2(t1,lf[101]);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7883,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8450,a[2]=t5,a[3]=((C_word*)t0)[12],tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_8450(t7,t3,t1);}

/* k7881 in k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in k7854 in k7851 in k7848 in k7677 in k7671 in k7662 in k7659 in k7656 in k7653 in k7650 in k7647 in k7644 in k7641 in k5403 in k5080 in ... */
static void C_ccall f_7883(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_7883,c,av);}
a=C_alloc(13);
t2=C_fast_retrieve(lf[273]);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_7886,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t2,tmp=(C_word)a,a+=13,tmp);
/* csi.scm:1051: collect-options */
t4=((C_word*)((C_word*)t0)[11])[1];
f_7681(t4,t3,lf[339]);}

/* k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in k7854 in k7851 in k7848 in k7677 in k7671 in k7662 in k7659 in k7656 in k7653 in k7650 in k7647 in k7644 in k7641 in k5403 in ... */
static void C_ccall f_7886(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_7886,c,av);}
a=C_alloc(18);
t2=C_i_check_list_2(t1,lf[101]);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7892,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8427,a[2]=t5,a[3]=((C_word*)t0)[12],tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_8427(t7,t3,t1);}

/* k7890 in k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in k7854 in k7851 in k7848 in k7677 in k7671 in k7662 in k7659 in k7656 in k7653 in k7650 in k7647 in k7644 in k7641 in ... */
static void C_ccall f_7892(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(25,c,2)))){
C_save_and_reclaim((void *)f_7892,c,av);}
a=C_alloc(25);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7896,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8331,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=C_retrieve2(lf[12],C_text("chicken.csi#chop-separator"));
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8338,a[2]=t3,a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[11],a[5]=t6,a[6]=t7,tmp=(C_word)a,a+=7,tmp);
/* csi.scm:1054: collect-options */
t10=((C_word*)((C_word*)t0)[11])[1];
f_7681(t10,t9,lf[338]);}

/* k7894 in k7890 in k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in k7854 in k7851 in k7848 in k7677 in k7671 in k7662 in k7659 in k7656 in k7653 in k7650 in k7647 in k7644 in ... */
static void C_ccall f_7896(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_7896,c,av);}
a=C_alloc(9);
t2=C_mutate((C_word*)lf[125]+1 /* (set! ##sys#include-pathnames ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7899,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[9])){
t4=C_i_cdr(((C_word*)t0)[9]);
t5=C_i_pairp(t4);
if(C_truep(C_i_not(t5))){
/* csi.scm:1061: ##sys#error */
t6=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=lf[331];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t6=C_i_cadr(((C_word*)t0)[9]);
if(C_truep(C_i_string_equal_p(lf[332],t6))){
/* csi.scm:1063: chicken.base#keyword-style */
t7=C_fast_retrieve(lf[127]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t3;
av2[2]=lf[333];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t7=C_u_i_cdr(((C_word*)t0)[9]);
if(C_truep(C_i_string_equal_p(lf[334],C_u_i_car(t7)))){
/* csi.scm:1065: chicken.base#keyword-style */
t8=C_fast_retrieve(lf[127]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t3;
av2[2]=lf[323];
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t8=C_u_i_cdr(((C_word*)t0)[9]);
if(C_truep(C_i_string_equal_p(lf[335],C_u_i_car(t8)))){
/* csi.scm:1067: chicken.base#keyword-style */
t9=C_fast_retrieve(lf[127]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t9;
av2[1]=t3;
av2[2]=lf[336];
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}
else{
t9=t3;{
C_word *av2=av;
av2[0]=t9;
av2[1]=C_SCHEME_UNDEFINED;
f_7899(2,av2);}}}}}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_7899(2,av2);}}}

/* k7897 in k7894 in k7890 in k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in k7854 in k7851 in k7848 in k7677 in k7671 in k7662 in k7659 in k7656 in k7653 in k7650 in k7647 in ... */
static void C_ccall f_7899(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_7899,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7902,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8264,a[2]=t2,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1068: member* */
f_7373(t3,lf[330],((C_word*)((C_word*)t0)[6])[1]);}

/* k7900 in k7897 in k7894 in k7890 in k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in k7854 in k7851 in k7848 in k7677 in k7671 in k7662 in k7659 in k7656 in k7653 in k7650 in ... */
static void C_ccall f_7902(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_7902,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7905,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8252,a[2]=t2,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1071: member* */
f_7373(t3,lf[328],((C_word*)((C_word*)t0)[6])[1]);}

/* k7903 in k7900 in k7897 in k7894 in k7890 in k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in k7854 in k7851 in k7848 in k7677 in k7671 in k7662 in k7659 in k7656 in k7653 in ... */
static void C_ccall f_7905(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_7905,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7908,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8231,a[2]=t2,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1074: member* */
f_7373(t3,lf[326],((C_word*)((C_word*)t0)[6])[1]);}

/* k7906 in k7903 in k7900 in k7897 in k7894 in k7890 in k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in k7854 in k7851 in k7848 in k7677 in k7671 in k7662 in k7659 in k7656 in ... */
static void C_ccall f_7908(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_7908,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7911,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=C_a_i_cons(&a,2,lf[319],C_fast_retrieve(lf[320]));
/* csi.scm:1083: scheme#eval */
t4=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k7909 in k7906 in k7903 in k7900 in k7897 in k7894 in k7890 in k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in k7854 in k7851 in k7848 in k7677 in k7671 in k7662 in k7659 in ... */
static void C_ccall f_7911(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_7911,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7914,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=C_a_i_cons(&a,2,lf[288],C_fast_retrieve(lf[318]));
/* csi.scm:1084: scheme#eval */
t4=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k7912 in k7909 in k7906 in k7903 in k7900 in k7897 in k7894 in k7890 in k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in k7854 in k7851 in k7848 in k7677 in k7671 in k7662 in ... */
static void C_ccall f_7914(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_7914,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7917,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[8])){
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_7917(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8214,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1086: chicken.load#load-verbose */
t4=C_fast_retrieve(lf[317]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k7915 in k7912 in k7909 in k7906 in k7903 in k7900 in k7897 in k7894 in k7890 in k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in k7854 in k7851 in k7848 in k7677 in k7671 in ... */
static void C_ccall f_7917(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_7917,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7920,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8202,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[7],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:1089: member* */
f_7373(t3,lf[312],((C_word*)((C_word*)t0)[6])[1]);}

/* k7918 in k7915 in k7912 in k7909 in k7906 in k7903 in k7900 in k7897 in k7894 in k7890 in k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in k7854 in k7851 in k7848 in k7677 in ... */
static void C_ccall f_7920(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_7920,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7923,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=C_set_block_item(lf[6] /* ##sys#notices-enabled */,0,C_SCHEME_FALSE);
t4=t2;
f_7923(t4,t3);}
else{
t3=t2;
f_7923(t3,C_SCHEME_UNDEFINED);}}

/* k7921 in k7918 in k7915 in k7912 in k7909 in k7906 in k7903 in k7900 in k7897 in k7894 in k7890 in k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in k7854 in k7851 in k7848 in ... */
static void C_fcall f_7923(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_7923,2,t0,t1);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7928,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_7928(t5,((C_word*)t0)[5],((C_word*)((C_word*)t0)[6])[1]);}

/* doloop1874 in k7921 in k7918 in k7915 in k7912 in k7909 in k7906 in k7903 in k7900 in k7897 in k7894 in k7890 in k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in k7854 in k7851 in ... */
static void C_fcall f_7928(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(17,0,4)))){
C_save_and_reclaim_args((void *)trf_7928,3,t0,t1,t2);}
a=C_alloc(17);
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
if(C_truep(C_i_nullp(((C_word*)t3)[1]))){
if(C_truep(((C_word*)t0)[2])){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_fast_retrieve(lf[274]);
t5=C_mutate((C_word*)lf[274]+1 /* (set! ##sys#user-read-hook ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4253,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[276]+1 /* (set! ##sys#sharp-number-hook ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4282,tmp=(C_word)a,a+=2,tmp));
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9476,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1097: chicken.repl#repl */
t8=C_fast_retrieve(lf[277]);{
C_word av2[3];
av2[0]=t8;
av2[1]=t7;
av2[2]=C_retrieve2(lf[47],C_text("chicken.csi#csi-eval"));
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}}
else{
t4=C_i_car(((C_word*)t3)[1]);
t5=C_i_member(t4,lf[278]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7956,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t5)){
t19=t1;
t20=C_i_cdr(((C_word*)t3)[1]);
t1=t19;
t2=t20;
goto loop;}
else{
if(C_truep((C_truep(C_i_equalp(t4,lf[279]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[280]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[281]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[282]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[283]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[284]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[285]))?C_SCHEME_TRUE:C_SCHEME_FALSE))))))))){
t7=C_i_cdr(((C_word*)t3)[1]);
t8=C_set_block_item(t3,0,t7);
t19=t1;
t20=C_i_cdr(((C_word*)t3)[1]);
t1=t19;
t2=t20;
goto loop;}
else{
t7=C_i_string_equal_p(lf[286],t4);
t8=(C_truep(t7)?t7:C_u_i_string_equal_p(lf[287],t4));
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7985,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7997,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1104: scheme#string->symbol */
t11=*((C_word*)lf[289]+1);{
C_word av2[3];
av2[0]=t11;
av2[1]=t10;
av2[2]=C_i_cadr(((C_word*)t3)[1]);
((C_proc)(void*)(*((C_word*)t11+1)))(3,av2);}}
else{
t9=C_u_i_string_equal_p(lf[290],t4);
t10=(C_truep(t9)?t9:C_u_i_string_equal_p(lf[291],t4));
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8012,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:1107: evalstring */
f_7793(t11,C_i_cadr(((C_word*)t3)[1]),C_SCHEME_END_OF_LIST);}
else{
t11=C_u_i_string_equal_p(lf[292],t4);
t12=(C_truep(t11)?t11:C_u_i_string_equal_p(lf[293],t4));
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8031,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t14=C_i_cadr(((C_word*)t3)[1]);
t15=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8041,tmp=(C_word)a,a+=2,tmp);
/* csi.scm:1110: evalstring */
f_7793(t13,t14,C_a_i_list(&a,1,t15));}
else{
t13=C_u_i_string_equal_p(lf[295],t4);
t14=(C_truep(t13)?t13:C_u_i_string_equal_p(lf[296],t4));
if(C_truep(t14)){
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8056,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t16=C_i_cadr(((C_word*)t3)[1]);
t17=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8066,tmp=(C_word)a,a+=2,tmp);
/* csi.scm:1113: evalstring */
f_7793(t15,t16,C_a_i_list(&a,1,t17));}
else{
t15=(C_truep(((C_word*)t0)[5])?C_i_car(((C_word*)t0)[5]):C_SCHEME_FALSE);
t16=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8076,a[2]=t15,a[3]=t6,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_equalp(lf[300],t15))){
t17=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8128,tmp=(C_word)a,a+=2,tmp);
/* csi.scm:1117: scheme#load */
t18=*((C_word*)lf[65]+1);{
C_word av2[4];
av2[0]=t18;
av2[1]=t16;
av2[2]=t4;
av2[3]=t17;
((C_proc)(void*)(*((C_word*)t18+1)))(4,av2);}}
else{
/* csi.scm:1117: scheme#load */
t17=*((C_word*)lf[65]+1);{
C_word av2[4];
av2[0]=t17;
av2[1]=t16;
av2[2]=t4;
av2[3]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t17+1)))(4,av2);}}}}}}}}}}

/* k7954 in doloop1874 in k7921 in k7918 in k7915 in k7912 in k7909 in k7906 in k7903 in k7900 in k7897 in k7894 in k7890 in k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in k7854 in ... */
static void C_ccall f_7956(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7956,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_7928(t2,((C_word*)t0)[3],C_i_cdr(((C_word*)((C_word*)t0)[4])[1]));}

/* k7983 in doloop1874 in k7921 in k7918 in k7915 in k7912 in k7909 in k7906 in k7903 in k7900 in k7897 in k7894 in k7890 in k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in k7854 in ... */
static void C_ccall f_7985(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7985,c,av);}
t2=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=((C_word*)((C_word*)t0)[3])[1];
f_7928(t4,((C_word*)t0)[4],C_i_cdr(((C_word*)((C_word*)t0)[2])[1]));}

/* k7995 in doloop1874 in k7921 in k7918 in k7915 in k7912 in k7909 in k7906 in k7903 in k7900 in k7897 in k7894 in k7890 in k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in k7854 in ... */
static void C_ccall f_7997(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_7997,c,av);}
a=C_alloc(6);
t2=C_a_i_list(&a,2,lf[288],t1);
/* csi.scm:1104: scheme#eval */
t3=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k8010 in doloop1874 in k7921 in k7918 in k7915 in k7912 in k7909 in k7906 in k7903 in k7900 in k7897 in k7894 in k7890 in k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in k7854 in ... */
static void C_ccall f_8012(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8012,c,av);}
t2=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=((C_word*)((C_word*)t0)[3])[1];
f_7928(t4,((C_word*)t0)[4],C_i_cdr(((C_word*)((C_word*)t0)[2])[1]));}

/* k8029 in doloop1874 in k7921 in k7918 in k7915 in k7912 in k7909 in k7906 in k7903 in k7900 in k7897 in k7894 in k7890 in k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in k7854 in ... */
static void C_ccall f_8031(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8031,c,av);}
t2=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=((C_word*)((C_word*)t0)[3])[1];
f_7928(t4,((C_word*)t0)[4],C_i_cdr(((C_word*)((C_word*)t0)[2])[1]));}

/* a8040 in doloop1874 in k7921 in k7918 in k7915 in k7912 in k7909 in k7906 in k7903 in k7900 in k7897 in k7894 in k7890 in k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in k7854 in ... */
static void C_ccall f_8041(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,4)))){
C_save_and_reclaim((void*)f_8041,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+0);
t2=C_build_rest(&a,c,2,av);
C_word t3;{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t1;
av2[2]=*((C_word*)lf[294]+1);
av2[3]=*((C_word*)lf[107]+1);
av2[4]=t2;
C_apply(5,av2);}}

/* k8054 in doloop1874 in k7921 in k7918 in k7915 in k7912 in k7909 in k7906 in k7903 in k7900 in k7897 in k7894 in k7890 in k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in k7854 in ... */
static void C_ccall f_8056(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8056,c,av);}
t2=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=((C_word*)((C_word*)t0)[3])[1];
f_7928(t4,((C_word*)t0)[4],C_i_cdr(((C_word*)((C_word*)t0)[2])[1]));}

/* a8065 in doloop1874 in k7921 in k7918 in k7915 in k7912 in k7909 in k7906 in k7903 in k7900 in k7897 in k7894 in k7890 in k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in k7854 in ... */
static void C_ccall f_8066(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,4)))){
C_save_and_reclaim((void*)f_8066,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+0);
t2=C_build_rest(&a,c,2,av);
C_word t3;{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t1;
av2[2]=*((C_word*)lf[294]+1);
av2[3]=C_fast_retrieve(lf[45]);
av2[4]=t2;
C_apply(5,av2);}}

/* k8074 in doloop1874 in k7921 in k7918 in k7915 in k7912 in k7909 in k7906 in k7903 in k7900 in k7897 in k7894 in k7890 in k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in k7854 in ... */
static void C_ccall f_8076(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_8076,c,av);}
a=C_alloc(4);
if(C_truep(C_i_equalp(lf[297],((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8087,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8100,tmp=(C_word)a,a+=2,tmp);
/* csi.scm:1134: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}
else{
t2=((C_word*)((C_word*)t0)[4])[1];
f_7928(t2,((C_word*)t0)[5],C_i_cdr(((C_word*)((C_word*)t0)[6])[1]));}}

/* a8086 in k8074 in doloop1874 in k7921 in k7918 in k7915 in k7912 in k7909 in k7906 in k7903 in k7900 in k7897 in k7894 in k7890 in k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in ... */
static void C_ccall f_8087(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8087,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8091,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1134: scheme#eval */
t3=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[299];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k8089 in a8086 in k8074 in doloop1874 in k7921 in k7918 in k7915 in k7912 in k7909 in k7906 in k7903 in k7900 in k7897 in k7894 in k7890 in k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in k7860 in ... */
static void C_ccall f_8091(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_8091,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8098,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1134: chicken.process-context#command-line-arguments */
t3=C_fast_retrieve(lf[298]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k8096 in k8089 in a8086 in k8074 in doloop1874 in k7921 in k7918 in k7915 in k7912 in k7909 in k7906 in k7903 in k7900 in k7897 in k7894 in k7890 in k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in ... */
static void C_ccall f_8098(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8098,c,av);}
/* csi.scm:1134: g2087 */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}

/* a8099 in k8074 in doloop1874 in k7921 in k7918 in k7915 in k7912 in k7909 in k7906 in k7903 in k7900 in k7897 in k7894 in k7890 in k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in ... */
static void C_ccall f_8100(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8100,c,av);}
t2=C_rest_nullp(c,2);
t3=(C_truep(t2)?C_SCHEME_FALSE:C_get_rest_arg(c,2,av,2,t0));
if(C_truep(C_fixnump(t3))){
/* csi.scm:1136: chicken.base#exit */
t4=C_fast_retrieve(lf[48]);{
C_word av2[3];
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
/* csi.scm:1136: chicken.base#exit */
t4=C_fast_retrieve(lf[48]);{
C_word av2[3];
av2[0]=t4;
av2[1]=t1;
av2[2]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* f_8128 in doloop1874 in k7921 in k7918 in k7915 in k7912 in k7909 in k7906 in k7903 in k7900 in k7897 in k7894 in k7890 in k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in k7854 in ... */
static void C_ccall f_8128(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_8128,c,av);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8132,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8183,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1121: chicken.port#with-output-to-string */
t5=C_fast_retrieve(lf[305]);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k8130 */
static void C_ccall f_8132(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_8132,c,av);}
a=C_alloc(6);
t2=C_block_size(t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8138,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* csi.scm:1123: chicken.base#flush-output */
t4=*((C_word*)lf[304]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=*((C_word*)lf[84]+1);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k8136 in k8130 */
static void C_ccall f_8138(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_8138,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8141,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:1124: scheme#display */
t3=*((C_word*)lf[94]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[303];
av2[3]=*((C_word*)lf[301]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k8139 in k8136 in k8130 */
static void C_ccall f_8141(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_8141,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8144,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8152,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t4,tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_8152(t6,t2,C_fix(0));}

/* k8142 in k8139 in k8136 in k8130 */
static void C_ccall f_8144(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_8144,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8147,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1131: scheme#newline */
t3=*((C_word*)lf[86]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=*((C_word*)lf[301]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k8145 in k8142 in k8139 in k8136 in k8130 */
static void C_ccall f_8147(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8147,c,av);}
/* csi.scm:1132: scheme#eval */
t2=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* doloop2076 in k8139 in k8136 in k8130 */
static void C_fcall f_8152(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_8152,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=C_i_string_ref(((C_word*)t0)[3],t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8165,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* ##sys#write-char/port */
t5=C_fast_retrieve(lf[244]);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
av2[3]=*((C_word*)lf[301]+1);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k8163 in doloop2076 in k8139 in k8136 in k8130 */
static void C_ccall f_8165(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_8165,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8168,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_u_i_char_equalp(C_make_character(10),((C_word*)t0)[5]))){
/* csi.scm:1130: scheme#display */
t3=*((C_word*)lf[94]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[302];
av2[3]=*((C_word*)lf[301]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
f_8152(t3,((C_word*)t0)[3],C_fixnum_plus(((C_word*)t0)[4],C_fix(1)));}}

/* k8166 in k8163 in doloop2076 in k8139 in k8136 in k8130 */
static void C_ccall f_8168(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8168,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_8152(t2,((C_word*)t0)[3],C_fixnum_plus(((C_word*)t0)[4],C_fix(1)));}

/* a8182 */
static void C_ccall f_8183(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8183,c,av);}
t2=C_fast_retrieve(lf[45]);
/* csi.scm:1121: g2073 */
t3=C_fast_retrieve(lf[45]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k8200 in k7915 in k7912 in k7909 in k7906 in k7903 in k7900 in k7897 in k7894 in k7890 in k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in k7854 in k7851 in k7848 in k7677 in ... */
static void C_ccall f_8202(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8202,c,av);}
a=C_alloc(3);
t2=(C_truep(t1)?t1:(C_truep(((C_word*)t0)[2])?((C_word*)t0)[2]:((C_word*)t0)[3]));
if(C_truep(t2)){
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_7920(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7732,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1016: chicken.platform#system-config-directory */
t4=C_fast_retrieve(lf[311]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k8212 in k7912 in k7909 in k7906 in k7903 in k7900 in k7897 in k7894 in k7890 in k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in k7854 in k7851 in k7848 in k7677 in k7671 in ... */
static void C_ccall f_8214(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_8214,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8217,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9517,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:144: chicken.platform#chicken-version */
t4=C_fast_retrieve(lf[316]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k8215 in k8212 in k7912 in k7909 in k7906 in k7903 in k7900 in k7897 in k7894 in k7890 in k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in k7854 in k7851 in k7848 in k7677 in ... */
static void C_ccall f_8217(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8217,c,av);}
/* csi.scm:1088: chicken.base#print */
t2=*((C_word*)lf[107]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[313];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k8229 in k7903 in k7900 in k7897 in k7894 in k7890 in k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in k7854 in k7851 in k7848 in k7677 in k7671 in k7662 in k7659 in k7656 in ... */
static void C_ccall f_8231(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8231,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8234,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_8234(2,av2);}}
else{
/* csi.scm:1075: scheme#display */
t3=*((C_word*)lf[94]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[325];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_7908(2,av2);}}}

/* k8232 in k8229 in k7903 in k7900 in k7897 in k7894 in k7890 in k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in k7854 in k7851 in k7848 in k7677 in k7671 in k7662 in k7659 in ... */
static void C_ccall f_8234(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8234,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8237,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1076: chicken.base#case-sensitive */
t3=C_fast_retrieve(lf[324]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k8235 in k8232 in k8229 in k7903 in k7900 in k7897 in k7894 in k7890 in k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in k7854 in k7851 in k7848 in k7677 in k7671 in k7662 in ... */
static void C_ccall f_8237(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8237,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8240,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1077: chicken.base#keyword-style */
t3=C_fast_retrieve(lf[127]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[323];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k8238 in k8235 in k8232 in k8229 in k7903 in k7900 in k7897 in k7894 in k7890 in k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in k7854 in k7851 in k7848 in k7677 in k7671 in ... */
static void C_ccall f_8240(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8240,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8243,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1078: chicken.base#parentheses-synonyms */
t3=C_fast_retrieve(lf[322]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k8241 in k8238 in k8235 in k8232 in k8229 in k7903 in k7900 in k7897 in k7894 in k7890 in k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in k7854 in k7851 in k7848 in k7677 in ... */
static void C_ccall f_8243(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8243,c,av);}
/* csi.scm:1079: chicken.base#symbol-escape */
t2=C_fast_retrieve(lf[321]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k8250 in k7900 in k7897 in k7894 in k7890 in k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in k7854 in k7851 in k7848 in k7677 in k7671 in k7662 in k7659 in k7656 in k7653 in ... */
static void C_ccall f_8252(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8252,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8255,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
/* csi.scm:1073: chicken.base#symbol-escape */
t3=C_fast_retrieve(lf[321]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
/* csi.scm:1072: scheme#display */
t3=*((C_word*)lf[94]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[327];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_7905(2,av2);}}}

/* k8253 in k8250 in k7900 in k7897 in k7894 in k7890 in k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in k7854 in k7851 in k7848 in k7677 in k7671 in k7662 in k7659 in k7656 in ... */
static void C_ccall f_8255(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8255,c,av);}
/* csi.scm:1073: chicken.base#symbol-escape */
t2=C_fast_retrieve(lf[321]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k8262 in k7897 in k7894 in k7890 in k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in k7854 in k7851 in k7848 in k7677 in k7671 in k7662 in k7659 in k7656 in k7653 in k7650 in ... */
static void C_ccall f_8264(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8264,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8267,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
/* csi.scm:1070: chicken.base#parentheses-synonyms */
t3=C_fast_retrieve(lf[322]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
/* csi.scm:1069: scheme#display */
t3=*((C_word*)lf[94]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[329];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_7902(2,av2);}}}

/* k8265 in k8262 in k7897 in k7894 in k7890 in k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in k7854 in k7851 in k7848 in k7677 in k7671 in k7662 in k7659 in k7656 in k7653 in ... */
static void C_ccall f_8267(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8267,c,av);}
/* csi.scm:1070: chicken.base#parentheses-synonyms */
t2=C_fast_retrieve(lf[322]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k8329 in k7890 in k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in k7854 in k7851 in k7848 in k7677 in k7671 in k7662 in k7659 in k7656 in k7653 in k7650 in k7647 in k7644 in ... */
static void C_ccall f_8331(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_8331,c,av);}
a=C_alloc(5);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3143,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_3143(t5,((C_word*)t0)[2],t1);}

/* k8336 in k7890 in k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in k7854 in k7851 in k7848 in k7677 in k7671 in k7662 in k7659 in k7656 in k7653 in k7650 in k7647 in k7644 in ... */
static void C_ccall f_8338(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_8338,c,av);}
a=C_alloc(12);
t2=C_i_check_list_2(t1,lf[134]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8344,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8393,a[2]=((C_word*)t0)[5],a[3]=t5,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_8393(t7,t3,t1);}

/* k8342 in k8336 in k7890 in k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in k7854 in k7851 in k7848 in k7677 in k7671 in k7662 in k7659 in k7656 in k7653 in k7650 in k7647 in ... */
static void C_ccall f_8344(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_8344,c,av);}
a=C_alloc(12);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_retrieve2(lf[12],C_text("chicken.csi#chop-separator"));
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8351,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t4,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
/* csi.scm:1055: collect-options */
t8=((C_word*)((C_word*)t0)[4])[1];
f_7681(t8,t7,lf[337]);}

/* k8349 in k8342 in k8336 in k7890 in k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in k7854 in k7851 in k7848 in k7677 in k7671 in k7662 in k7659 in k7656 in k7653 in k7650 in ... */
static void C_ccall f_8351(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_8351,c,av);}
a=C_alloc(12);
t2=C_i_check_list_2(t1,lf[134]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8357,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8359,a[2]=((C_word*)t0)[5],a[3]=t5,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_8359(t7,t3,t1);}

/* k8355 in k8349 in k8342 in k8336 in k7890 in k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in k7854 in k7851 in k7848 in k7677 in k7671 in k7662 in k7659 in k7656 in k7653 in ... */
static void C_ccall f_8357(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_8357,c,av);}
/* csi.scm:1054: scheme#append */
t2=*((C_word*)lf[225]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
av2[4]=C_fast_retrieve(lf[125]);
av2[5]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* map-loop1974 in k8349 in k8342 in k8336 in k7890 in k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in k7854 in k7851 in k7848 in k7677 in k7671 in k7662 in k7659 in k7656 in k7653 in ... */
static void C_fcall f_8359(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_8359,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8384,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* csi.scm:1055: g1980 */
t4=C_retrieve2(lf[12],C_text("chicken.csi#chop-separator"));{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_slot(t2,C_fix(0));
f_3923(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k8382 in map-loop1974 in k8349 in k8342 in k8336 in k7890 in k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in k7854 in k7851 in k7848 in k7677 in k7671 in k7662 in k7659 in k7656 in ... */
static void C_ccall f_8384(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8384,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_8359(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* map-loop1948 in k8336 in k7890 in k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in k7854 in k7851 in k7848 in k7677 in k7671 in k7662 in k7659 in k7656 in k7653 in k7650 in k7647 in ... */
static void C_fcall f_8393(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_8393,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8418,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* csi.scm:1054: g1954 */
t4=C_retrieve2(lf[12],C_text("chicken.csi#chop-separator"));{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_slot(t2,C_fix(0));
f_3923(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k8416 in map-loop1948 in k8336 in k7890 in k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in k7854 in k7851 in k7848 in k7677 in k7671 in k7662 in k7659 in k7656 in k7653 in k7650 in ... */
static void C_ccall f_8418(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8418,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_8393(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* for-each-loop1866 in k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in k7854 in k7851 in k7848 in k7677 in k7671 in k7662 in k7659 in k7656 in k7653 in k7650 in k7647 in k7644 in k7641 in ... */
static void C_fcall f_8427(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_8427,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8437,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:1051: g1867 */
t4=((C_word*)t0)[3];{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_slot(t2,C_fix(0));
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k8435 in for-each-loop1866 in k7884 in k7881 in k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in k7854 in k7851 in k7848 in k7677 in k7671 in k7662 in k7659 in k7656 in k7653 in k7650 in k7647 in k7644 in ... */
static void C_ccall f_8437(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8437,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_8427(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* for-each-loop1856 in k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in k7854 in k7851 in k7848 in k7677 in k7671 in k7662 in k7659 in k7656 in k7653 in k7650 in k7647 in k7644 in k7641 in k5403 in k5080 in ... */
static void C_fcall f_8450(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_8450,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8460,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:1050: g1857 */
t4=((C_word*)t0)[3];{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_slot(t2,C_fix(0));
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k8458 in for-each-loop1856 in k7875 in k7872 in k7866 in k7863 in k7860 in k7857 in k7854 in k7851 in k7848 in k7677 in k7671 in k7662 in k7659 in k7656 in k7653 in k7650 in k7647 in k7644 in k7641 in k5403 in ... */
static void C_ccall f_8460(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8460,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_8450(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* for-each-loop1846 in k7866 in k7863 in k7860 in k7857 in k7854 in k7851 in k7848 in k7677 in k7671 in k7662 in k7659 in k7656 in k7653 in k7650 in k7647 in k7644 in k7641 in k5403 in k5080 in k4935 in k4291 in ... */
static void C_fcall f_8473(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_8473,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8483,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:1049: g1847 */
t4=((C_word*)t0)[3];{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_slot(t2,C_fix(0));
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k8481 in for-each-loop1846 in k7866 in k7863 in k7860 in k7857 in k7854 in k7851 in k7848 in k7677 in k7671 in k7662 in k7659 in k7656 in k7653 in k7650 in k7647 in k7644 in k7641 in k5403 in k5080 in k4935 in ... */
static void C_ccall f_8483(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8483,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_8473(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k8495 in k7860 in k7857 in k7854 in k7851 in k7848 in k7677 in k7671 in k7662 in k7659 in k7656 in k7653 in k7650 in k7647 in k7644 in k7641 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in ... */
static void C_ccall f_8497(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_8497,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8500,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9543,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1047: chicken.platform#register-feature! */
t4=C_fast_retrieve(lf[272]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[342];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
/* csi.scm:1046: scheme#display */
t3=*((C_word*)lf[94]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[343];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_7865(2,av2);}}}

/* k8498 in k8495 in k7860 in k7857 in k7854 in k7851 in k7848 in k7677 in k7671 in k7662 in k7659 in k7656 in k7653 in k7650 in k7647 in k7644 in k7641 in k5403 in k5080 in k4935 in k4291 in k3948 in ... */
static void C_ccall f_8500(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8500,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8503,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1047: chicken.platform#register-feature! */
t3=C_fast_retrieve(lf[272]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[342];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k8501 in k8498 in k8495 in k7860 in k7857 in k7854 in k7851 in k7848 in k7677 in k7671 in k7662 in k7659 in k7656 in k7653 in k7650 in k7647 in k7644 in k7641 in k5403 in k5080 in k4935 in k4291 in ... */
static void C_ccall f_8503(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8503,c,av);}
/* csi.scm:1048: chicken.base#case-sensitive */
t2=C_fast_retrieve(lf[324]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k8510 in k7857 in k7854 in k7851 in k7848 in k7677 in k7671 in k7662 in k7659 in k7656 in k7653 in k7650 in k7647 in k7644 in k7641 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in ... */
static void C_ccall f_8512(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8512,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8515,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=C_set_block_item(lf[345] /* ##sys#warnings-enabled */,0,C_SCHEME_FALSE);
t4=((C_word*)t0)[2];
f_7862(t4,t3);}
else{
/* csi.scm:1043: scheme#display */
t3=*((C_word*)lf[94]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[346];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}
else{
t2=((C_word*)t0)[2];
f_7862(t2,C_SCHEME_UNDEFINED);}}

/* k8513 in k8510 in k7857 in k7854 in k7851 in k7848 in k7677 in k7671 in k7662 in k7659 in k7656 in k7653 in k7650 in k7647 in k7644 in k7641 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in ... */
static void C_ccall f_8515(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8515,c,av);}
t2=C_set_block_item(lf[345] /* ##sys#warnings-enabled */,0,C_SCHEME_FALSE);
t3=((C_word*)t0)[2];
f_7862(t3,t2);}

/* k8523 in k7854 in k7851 in k7848 in k7677 in k7671 in k7662 in k7659 in k7656 in k7653 in k7650 in k7647 in k7644 in k7641 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in ... */
static void C_ccall f_8525(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8525,c,av);}
/* csi.scm:1041: chicken.base#exit */
t2=C_fast_retrieve(lf[48]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(0);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k8530 in k7854 in k7851 in k7848 in k7677 in k7671 in k7662 in k7659 in k7656 in k7653 in k7650 in k7647 in k7644 in k7641 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in ... */
static void C_ccall f_8532(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8532,c,av);}
/* csi.scm:1040: chicken.base#print */
t2=*((C_word*)lf[107]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k8540 in k7848 in k7677 in k7671 in k7662 in k7659 in k7656 in k7653 in k7650 in k7647 in k7644 in k7641 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in ... */
static void C_ccall f_8542(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8542,c,av);}
/* csi.scm:1036: chicken.base#exit */
t2=C_fast_retrieve(lf[48]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(0);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k8546 in k7677 in k7671 in k7662 in k7659 in k7656 in k7653 in k7650 in k7647 in k7644 in k7641 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in ... */
static void C_ccall f_8548(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_8548,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8551,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3874,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:95: scheme#display */
t4=*((C_word*)lf[94]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[356];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_7850(2,av2);}}}

/* k8549 in k8546 in k7677 in k7671 in k7662 in k7659 in k7656 in k7653 in k7650 in k7647 in k7644 in k7641 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in ... */
static void C_ccall f_8551(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8551,c,av);}
/* csi.scm:1033: chicken.base#exit */
t2=C_fast_retrieve(lf[48]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(0);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* map-loop1814 in k7671 in k7662 in k7659 in k7656 in k7653 in k7650 in k7647 in k7644 in k7641 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in ... */
static void C_fcall f_8556(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_8556,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8581,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* csi.scm:1004: g1820 */
t4=C_retrieve2(lf[12],C_text("chicken.csi#chop-separator"));{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_slot(t2,C_fix(0));
f_3923(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k8579 in map-loop1814 in k7671 in k7662 in k7659 in k7656 in k7653 in k7650 in k7647 in k7644 in k7641 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in ... */
static void C_ccall f_8581(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8581,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_8556(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k8590 in k7662 in k7659 in k7656 in k7653 in k7650 in k7647 in k7644 in k7641 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in ... */
static void C_ccall f_8592(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8592,c,av);}
if(C_truep(t1)){
/* csi.scm:1005: ##sys#split-path */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[21]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[21]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}
else{
/* csi.scm:1005: ##sys#split-path */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[21]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[21]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[358];
tp(3,av2);}}}

/* k8599 in k7656 in k7653 in k7650 in k7647 in k7644 in k7641 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in ... */
static void C_ccall f_8601(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8601,c,av);}
t2=((C_word*)t0)[2];
f_7661(t2,(C_truep(t1)?t1:((C_word*)t0)[3]));}

/* k8605 in k7650 in k7647 in k7644 in k7641 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in ... */
static void C_ccall f_8607(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_8607,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8610,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:988: chicken.process-context#program-name */
t3=C_fast_retrieve(lf[364]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_i_cadr(((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k8608 in k8605 in k7650 in k7647 in k7644 in k7641 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in ... */
static void C_ccall f_8610(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_8610,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8613,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_u_i_cdr(((C_word*)t0)[2]);
/* csi.scm:989: chicken.process-context#command-line-arguments */
t4=C_fast_retrieve(lf[298]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=C_u_i_cdr(t3);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k8611 in k8608 in k8605 in k7650 in k7647 in k7644 in k7641 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in ... */
static void C_ccall f_8613(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_8613,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8616,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:991: chicken.platform#register-feature! */
t3=C_fast_retrieve(lf[272]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[363];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k8614 in k8611 in k8608 in k8605 in k7650 in k7647 in k7644 in k7641 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in ... */
static void C_ccall f_8616(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_8616,c,av);}
a=C_alloc(4);
t2=C_i_set_i_slot(C_u_i_cdr(((C_word*)t0)[2]),C_fix(1),C_SCHEME_END_OF_LIST);
if(C_truep(*((C_word*)lf[11]+1))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8625,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:994: lookup-script-file */
t4=C_retrieve2(lf[17],C_text("chicken.csi#lookup-script-file"));
f_4020(t4,t3,C_i_cadr(((C_word*)t0)[2]));}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];
f_7655(t4,t3);}}

/* k8623 in k8614 in k8611 in k8608 in k8605 in k7650 in k7647 in k7644 in k7641 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in ... */
static void C_ccall f_8625(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8625,c,av);}
t2=((C_word*)t0)[2];
f_7655(t2,(C_truep(t1)?C_i_set_car(C_u_i_cdr(((C_word*)t0)[3]),t1):C_SCHEME_FALSE));}

/* k8688 in k7650 in k7647 in k7644 in k7641 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in ... */
static void C_ccall f_8690(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8690,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_i_member(lf[366],((C_word*)((C_word*)t0)[2])[1]);
t4=((C_word*)t0)[3];
f_7655(t4,(C_truep(t3)?C_i_set_cdr(t3,C_SCHEME_END_OF_LIST):C_SCHEME_FALSE));}

/* k8701 in k7650 in k7647 in k7644 in k7641 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in ... */
static void C_ccall f_8703(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8703,c,av);}
/* csi.scm:997: scheme#append */
t2=*((C_word*)lf[225]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k8705 in k7641 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 in ... */
static void C_ccall f_8707(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8707,c,av);}
/* csi.scm:979: canonicalize-args */
f_7428(((C_word*)t0)[2],t1);}

/* k8709 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_8711(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_8711,c,av);}
a=C_alloc(4);
t2=(C_truep(t1)?t1:lf[369]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4943,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:435: chicken.base#open-input-string */
t4=C_fast_retrieve(lf[271]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k8715 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_8717(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8717,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8723,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken.base#implicit-exit-handler */
t3=C_fast_retrieve(lf[268]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k8721 in k8715 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 in ... */
static void C_ccall f_8723(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8723,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a8724 in k5403 in k5080 in k4935 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_8725(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8725,c,av);}
/* csi.scm:915: ##sys#user-interrupt-hook */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[253]);
C_word *av2=av;
av2[0]=*((C_word*)lf[253]+1);
av2[1]=t1;
tp(2,av2);}}

/* a8730 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_8731(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8731,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8735,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:419: scheme#read */
t3=*((C_word*)lf[52]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k8733 in a8730 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_8735(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_8735,c,av);}
a=C_alloc(7);
if(C_truep(C_i_not(t1))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8744,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:421: ##sys#switch-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[380]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[380]+1);
av2[1]=t2;
av2[2]=C_SCHEME_FALSE;
tp(3,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8750,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8771,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:423: ##sys#resolve-module-name */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[384]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[384]+1);
av2[1]=t3;
av2[2]=t1;
av2[3]=C_SCHEME_FALSE;
tp(4,av2);}}}

/* k8742 in k8733 in a8730 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_8744(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8744,c,av);}
/* csi.scm:422: printf */
t2=*((C_word*)lf[77]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[379];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k8748 in k8733 in a8730 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_8750(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_8750,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8754,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:420: g1010 */
t3=t2;
f_8754(t3,((C_word*)t0)[3],t1);}
else{
/* csi.scm:428: printf */
t2=*((C_word*)lf[77]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[382];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* g1010 in k8748 in k8733 in a8730 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_fcall f_8754(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_8754,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8758,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:425: ##sys#switch-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[380]);
C_word av2[3];
av2[0]=*((C_word*)lf[380]+1);
av2[1]=t3;
av2[2]=t2;
tp(3,av2);}}

/* k8756 in g1010 in k8748 in k8733 in a8730 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 in ... */
static void C_ccall f_8758(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8758,c,av);}
/* csi.scm:426: printf */
t2=*((C_word*)lf[77]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[381];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k8769 in k8733 in a8730 in k4291 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_8771(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8771,c,av);}
/* csi.scm:423: ##sys#find-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[383]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[383]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_FALSE;
tp(4,av2);}}

/* a8772 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_8773(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8773,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8781,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:250: ##sys#current-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[391]);
C_word *av2=av;
av2[0]=*((C_word*)lf[391]+1);
av2[1]=t2;
tp(2,av2);}}

/* k8779 in a8772 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_8781(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_8781,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8784,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8791,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:252: ##sys#module-name */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[389]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[389]+1);
av2[1]=t3;
av2[2]=t1;
tp(3,av2);}}
else{
/* csi.scm:249: sprintf */
t3=*((C_word*)lf[190]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[387];
av2[3]=lf[390];
av2[4]=C_retrieve2(lf[26],C_text("chicken.csi#history-count"));
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}

/* k8782 in k8779 in a8772 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_8784(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8784,c,av);}
/* csi.scm:249: sprintf */
t2=*((C_word*)lf[190]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[387];
av2[3]=t1;
av2[4]=C_retrieve2(lf[26],C_text("chicken.csi#history-count"));
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k8789 in k8779 in a8772 in k3948 in k3866 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_8791(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8791,c,av);}
/* csi.scm:252: sprintf */
t2=*((C_word*)lf[190]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[388];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k8793 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_8795(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8795,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_3868(t2,t1);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8804,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:87: chicken.process-context#get-environment-variable */
t3=C_fast_retrieve(lf[23]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[396];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k8802 in k8793 in k3863 in k3858 in k2568 in k2565 in k2562 in k2559 in k2556 in k2553 in k2550 in k2547 in k2544 in k2541 in k2538 in k2535 */
static void C_ccall f_8804(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8804,c,av);}
t2=((C_word*)t0)[2];
f_3868(t2,(C_truep(t1)?lf[394]:lf[395]));}

/* a8805 in k2538 in k2535 */
static void C_ccall f_8806(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_8806,c,av);}
/* csi.scm:43: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[400]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[400]+1);
av2[1]=t1;
av2[2]=lf[401];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[402];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_main_entry_point

void C_ccall C_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("toplevel"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(1983))){
C_save(t1);
C_rereclaim2(1983*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,404);
lf[0]=C_h_intern(&lf[0],12, C_text("chicken.csi#"));
lf[2]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005csirc"));
lf[3]=C_h_intern(&lf[3],29, C_text("##sys#repl-print-length-limit"));
lf[4]=C_h_intern_kw(&lf[4],3, C_text("csi"));
lf[5]=C_h_intern(&lf[5],14, C_text("##sys#features"));
lf[6]=C_h_intern(&lf[6],21, C_text("##sys#notices-enabled"));
lf[7]=C_h_intern(&lf[7],26, C_text("chicken.csi#editor-command"));
lf[11]=C_h_intern(&lf[11],22, C_text("##sys#windows-platform"));
lf[13]=C_h_intern(&lf[13],16, C_text("scheme#substring"));
lf[14]=C_h_intern(&lf[14],25, C_text("chicken.file#file-exists\077"));
lf[15]=C_h_intern(&lf[15],19, C_text("##sys#string-append"));
lf[16]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004.bat"));
lf[18]=C_h_intern(&lf[18],20, C_text("scheme#string-append"));
lf[19]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001/"));
lf[20]=C_h_intern(&lf[20],27, C_text("##sys#peek-nonnull-c-string"));
lf[21]=C_h_intern(&lf[21],16, C_text("##sys#split-path"));
lf[22]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001/"));
lf[23]=C_h_intern(&lf[23],48, C_text("chicken.process-context#get-environment-variable"));
lf[24]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004PATH"));
lf[27]=C_h_intern(&lf[27],26, C_text("chicken.base#vector-resize"));
lf[29]=C_h_intern(&lf[29],21, C_text("##sys#undefined-value"));
lf[31]=C_h_intern(&lf[31],11, C_text("##sys#error"));
lf[32]=C_decode_literal(C_heaptop,C_text("\376B\000\000 history entry index out of range"));
lf[33]=C_h_intern(&lf[33],21, C_text("scheme#inexact->exact"));
lf[34]=C_h_intern(&lf[34],20, C_text("##sys#break-on-error"));
lf[35]=C_h_intern(&lf[35],22, C_text("##sys#read-prompt-hook"));
lf[36]=C_h_intern(&lf[36],15, C_text("##sys#tty-port\077"));
lf[37]=C_h_intern(&lf[37],20, C_text("##sys#standard-input"));
lf[39]=C_h_intern(&lf[39],28, C_text("chicken.csi#toplevel-command"));
lf[40]=C_h_intern(&lf[40],16, C_text("toplevel-command"));
lf[41]=C_h_intern(&lf[41],25, C_text("chicken.load#load-noisily"));
lf[42]=C_h_intern(&lf[42],20, C_text("chicken.io#read-line"));
lf[43]=C_h_intern(&lf[43],27, C_text("chicken.string#string-split"));
lf[44]=C_h_intern(&lf[44],21, C_text("chicken.syntax#expand"));
lf[45]=C_h_intern(&lf[45],33, C_text("chicken.pretty-print#pretty-print"));
lf[46]=C_h_intern(&lf[46],13, C_text("scheme#values"));
lf[48]=C_h_intern(&lf[48],17, C_text("chicken.base#exit"));
lf[49]=C_h_intern(&lf[49],7, C_text("unquote"));
lf[50]=C_h_intern(&lf[50],1, C_text("x"));
lf[51]=C_h_intern(&lf[51],27, C_text("chicken.syntax#strip-syntax"));
lf[52]=C_h_intern(&lf[52],11, C_text("scheme#read"));
lf[53]=C_h_intern(&lf[53],1, C_text("p"));
lf[54]=C_h_intern(&lf[54],11, C_text("scheme#eval"));
lf[55]=C_h_intern(&lf[55],1, C_text("d"));
lf[57]=C_h_intern(&lf[57],2, C_text("du"));
lf[59]=C_h_intern(&lf[59],3, C_text("dur"));
lf[60]=C_h_intern(&lf[60],1, C_text("r"));
lf[62]=C_h_intern(&lf[62],1, C_text("q"));
lf[63]=C_h_intern(&lf[63],17, C_text("chicken.repl#quit"));
lf[64]=C_h_intern(&lf[64],1, C_text("l"));
lf[65]=C_h_intern(&lf[65],11, C_text("scheme#load"));
lf[66]=C_h_intern(&lf[66],2, C_text("ln"));
lf[67]=C_h_intern(&lf[67],19, C_text("chicken.base#print\052"));
lf[68]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004==> "));
lf[69]=C_h_intern_kw(&lf[69],7, C_text("printer"));
lf[70]=C_h_intern(&lf[70],1, C_text("t"));
lf[71]=C_h_intern(&lf[71],19, C_text("##sys#display-times"));
lf[72]=C_h_intern(&lf[72],16, C_text("##sys#stop-timer"));
lf[73]=C_h_intern(&lf[73],17, C_text("##sys#start-timer"));
lf[74]=C_h_intern(&lf[74],3, C_text("exn"));
lf[75]=C_h_intern(&lf[75],20, C_text("##sys#last-exception"));
lf[76]=C_h_intern(&lf[76],1, C_text("e"));
lf[77]=C_h_intern(&lf[77],21, C_text("chicken.format#printf"));
lf[78]=C_decode_literal(C_heaptop,C_text("\376B\000\000,editor returned with non-zero exit status ~a"));
lf[79]=C_h_intern(&lf[79],22, C_text("chicken.process#system"));
lf[80]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001 "));
lf[81]=C_h_intern(&lf[81],2, C_text("ch"));
lf[82]=C_h_intern(&lf[82],19, C_text("scheme#vector-fill!"));
lf[83]=C_h_intern(&lf[83],1, C_text("h"));
lf[84]=C_h_intern(&lf[84],21, C_text("##sys#standard-output"));
lf[85]=C_h_intern(&lf[85],6, C_text("printf"));
lf[86]=C_h_intern(&lf[86],14, C_text("scheme#newline"));
lf[87]=C_h_intern(&lf[87],11, C_text("##sys#print"));
lf[88]=C_h_intern(&lf[88],29, C_text("##sys#with-print-length-limit"));
lf[89]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002: "));
lf[90]=C_h_intern(&lf[90],18, C_text("##sys#write-char-0"));
lf[91]=C_h_intern(&lf[91],1, C_text("c"));
lf[93]=C_h_intern(&lf[93],1, C_text("f"));
lf[94]=C_h_intern(&lf[94],14, C_text("scheme#display"));
lf[95]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016no such frame\012"));
lf[96]=C_h_intern(&lf[96],28, C_text("##sys#repl-recent-call-chain"));
lf[97]=C_h_intern(&lf[97],1, C_text("g"));
lf[98]=C_decode_literal(C_heaptop,C_text("\376B\000\000\027no environment in frame"));
lf[99]=C_h_intern(&lf[99],9, C_text("frameinfo"));
lf[100]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012; getting "));
lf[101]=C_h_intern(&lf[101],8, C_text("for-each"));
lf[102]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022no such variable: "));
lf[103]=C_h_intern(&lf[103],20, C_text("chicken.base#call/cc"));
lf[104]=C_decode_literal(C_heaptop,C_text("\376B\000\000#string or symbol required for `,g\047\012"));
lf[105]=C_h_intern(&lf[105],1, C_text("s"));
lf[106]=C_h_intern(&lf[106],1, C_text("\077"));
lf[107]=C_h_intern(&lf[107],18, C_text("chicken.base#print"));
lf[108]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002 ,"));
lf[109]=C_decode_literal(C_heaptop,C_text("\376B\000\003\266Toplevel commands:\012\012 ,\077                Show this text\012 ,p EXP            Pr"
"etty print evaluated expression EXP\012 ,d EXP            Describe result of evalua"
"ted expression EXP\012 ,du EXP           Dump data of expression EXP\012 ,dur EXP N   "
"     Dump range\012 ,q                Quit interpreter\012 ,l FILENAME ...   Load one "
"or more files\012 ,ln FILENAME ...  Load one or more files and print result of each"
" top-level expression\012 ,r                Show system information\012 ,h            "
"    Show history of expression results\012 ,ch               Clear history of expre"
"ssion results\012 ,e FILENAME       Run external editor\012 ,s TEXT ...       Execute "
"shell-command\012 ,exn              Describe last exception\012 ,c                Show"
" call-chain of most recent error\012 ,f N              Select frame N\012 ,g NAME     "
"      Get variable NAME from current frame\012 ,t EXP            Evaluate form and "
"print elapsed time\012 ,x EXP            Pretty print expanded expression EXP\012"));
lf[110]=C_decode_literal(C_heaptop,C_text("\376B\000\0005undefined toplevel command ~s - enter `,\077\047 for help~%"));
lf[111]=C_h_intern(&lf[111],17, C_text("chicken.sort#sort"));
lf[112]=C_h_intern(&lf[112],32, C_text("chicken.port#with-output-to-port"));
lf[113]=C_h_intern(&lf[113],28, C_text("chicken.process-context#argv"));
lf[114]=C_h_intern(&lf[114],9, C_text("##sys#/-2"));
lf[115]=C_h_intern(&lf[115],15, C_text("scheme#truncate"));
lf[116]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001\012"));
lf[117]=C_h_intern(&lf[117],18, C_text("scheme#make-string"));
lf[118]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004  ~a"));
lf[119]=C_decode_literal(C_heaptop,C_text("\376B\000\000\027interrupts are enabled\012"));
lf[120]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010 (fixed)"));
lf[121]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[122]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010downward"));
lf[123]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006upward"));
lf[124]=C_decode_literal(C_heaptop,C_text("\376B\000\002\362~%~%~\012                   Machine type:    \011~A (~A-bit)~%~\012                 "
"  Software type:   \011~A~%~\012                   Software version:\011~A~%~\012           "
"        Build platform:  \011~A~%~\012                   Installation prefix:\011~A~%~\012  "
"                 Extension installation location:\011~A~%~\012                   Exten"
"sion path:  \011~A~%~\012                   Include path:    \011~A~%~\012                  "
" Keyword style:   \011~A~%~\012                   Symbol-table load:\011~S~%  ~\012         "
"            Avg bucket length:\011~S~%  ~\012                     Total symbol count:\011"
"~S~%~\012                   Memory:\011heap size is ~S bytes~A with ~S bytes currently"
" in use~%~  \012                     nursery size is ~S bytes, stack grows ~A~%~\012  "
"                 Command line:    \011~S~%"));
lf[125]=C_h_intern(&lf[125],23, C_text("##sys#include-pathnames"));
lf[126]=C_h_intern(&lf[126],31, C_text("chicken.keyword#keyword->string"));
lf[127]=C_h_intern(&lf[127],26, C_text("chicken.base#keyword-style"));
lf[128]=C_h_intern(&lf[128],32, C_text("chicken.platform#repository-path"));
lf[129]=C_h_intern(&lf[129],40, C_text("chicken.platform#installation-repository"));
lf[130]=C_h_intern(&lf[130],31, C_text("chicken.platform#build-platform"));
lf[131]=C_h_intern(&lf[131],33, C_text("chicken.platform#software-version"));
lf[132]=C_h_intern(&lf[132],30, C_text("chicken.platform#software-type"));
lf[133]=C_h_intern(&lf[133],29, C_text("chicken.platform#machine-type"));
lf[134]=C_h_intern(&lf[134],3, C_text("map"));
lf[135]=C_h_intern(&lf[135],15, C_text("scheme#string<\077"));
lf[136]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015Features:~%~%"));
lf[137]=C_h_intern(&lf[137],28, C_text("chicken.gc#memory-statistics"));
lf[138]=C_h_intern(&lf[138],23, C_text("##sys#symbol-table-info"));
lf[139]=C_h_intern(&lf[139],13, C_text("chicken.gc#gc"));
lf[141]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001u8vector\376\003\000\000\002\376B\000\000\030vector of unsigned bytes\376\003\000\000\002\376\001\000\000\017\001u8vector-le"
"ngth\376\003\000\000\002\376\001\000\000\014\001u8vector-ref\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001s8vector\376\003\000\000\002\376B\000\000\026vector of signed"
" bytes\376\003\000\000\002\376\001\000\000\017\001s8vector-length\376\003\000\000\002\376\001\000\000\014\001s8vector-ref\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001u16vec"
"tor\376\003\000\000\002\376B\000\000\037vector of unsigned 16-bit words\376\003\000\000\002\376\001\000\000\020\001u16vector-length\376\003\000\000\002\376\001\000\000"
"\015\001u16vector-ref\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001s16vector\376\003\000\000\002\376B\000\000\035vector of signed 16-bit wor"
"ds\376\003\000\000\002\376\001\000\000\020\001s16vector-length\376\003\000\000\002\376\001\000\000\015\001s16vector-ref\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001u32vecto"
"r\376\003\000\000\002\376B\000\000\037vector of unsigned 32-bit words\376\003\000\000\002\376\001\000\000\020\001u32vector-length\376\003\000\000\002\376\001\000\000\015\001"
"u32vector-ref\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001s32vector\376\003\000\000\002\376B\000\000\035vector of signed 32-bit words"
"\376\003\000\000\002\376\001\000\000\020\001s32vector-length\376\003\000\000\002\376\001\000\000\015\001s32vector-ref\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001u64vector\376"
"\003\000\000\002\376B\000\000\037vector of unsigned 64-bit words\376\003\000\000\002\376\001\000\000\020\001u64vector-length\376\003\000\000\002\376\001\000\000\015\001u6"
"4vector-ref\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001s64vector\376\003\000\000\002\376B\000\000\035vector of signed 64-bit words\376\003"
"\000\000\002\376\001\000\000\020\001s64vector-length\376\003\000\000\002\376\001\000\000\015\001s64vector-ref\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001f32vector\376\003\000"
"\000\002\376B\000\000\027vector of 32-bit floats\376\003\000\000\002\376\001\000\000\020\001f32vector-length\376\003\000\000\002\376\001\000\000\015\001f32vector-re"
"f\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001f64vector\376\003\000\000\002\376B\000\000\027vector of 64-bit floats\376\003\000\000\002\376\001\000\000\020\001f64vect"
"or-length\376\003\000\000\002\376\001\000\000\015\001f64vector-ref\376\377\016\376\377\016"));
lf[143]=C_h_intern(&lf[143],13, C_text("scheme#length"));
lf[144]=C_h_intern(&lf[144],15, C_text("scheme#list-ref"));
lf[145]=C_h_intern(&lf[145],17, C_text("scheme#string-ref"));
lf[146]=C_h_intern(&lf[146],22, C_text("chicken.format#fprintf"));
lf[147]=C_decode_literal(C_heaptop,C_text("\376B\000\000 ~% (~A elements not displayed)~%"));
lf[148]=C_decode_literal(C_heaptop,C_text("\376B\000\000.\011(followed by ~A identical instance~a)~% ...~%"));
lf[149]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[150]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001s"));
lf[151]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007 ~S: ~S"));
lf[152]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021~A of length ~S~%"));
lf[153]=C_decode_literal(C_heaptop,C_text("\376B\000\000$character ~S, code: ~S, #x~X, #o~O~%"));
lf[154]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016boolean true~%"));
lf[155]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017boolean false~%"));
lf[156]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014empty list~%"));
lf[157]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024end-of-file object~%"));
lf[158]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024unspecified object~%"));
lf[159]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016, character ~S"));
lf[160]=C_decode_literal(C_heaptop,C_text("\376B\000\0002exact immediate integer ~S~%  #x~X~%  #o~O~%  #b~B"));
lf[161]=C_decode_literal(C_heaptop,C_text("\376B\000\0000exact large integer ~S~%  #x~X~%  #o~O~%  #b~B~%"));
lf[162]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017unbound value~%"));
lf[163]=C_decode_literal(C_heaptop,C_text("\376B\000\000\034inexact rational number ~S~%"));
lf[164]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020exact ratio ~S~%"));
lf[165]=C_decode_literal(C_heaptop,C_text("\376B\000\000\026~A complex number ~S~%"));
lf[166]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005exact"));
lf[167]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007inexact"));
lf[168]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013number ~S~%"));
lf[169]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006string"));
lf[170]=C_h_intern(&lf[170],10, C_text("##sys#size"));
lf[171]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006vector"));
lf[172]=C_h_intern(&lf[172],10, C_text("##sys#slot"));
lf[173]=C_decode_literal(C_heaptop,C_text("\376B\000\000\035keyword symbol with name ~s~%"));
lf[174]=C_h_intern(&lf[174],20, C_text("##sys#symbol->string"));
lf[175]=C_h_intern(&lf[175],12, C_text("scheme#write"));
lf[176]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005  ~s\011"));
lf[177]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020  \012properties:\012\012"));
lf[178]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[179]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013uninterned "));
lf[180]=C_decode_literal(C_heaptop,C_text("\376B\000\000\027~asymbol with name ~S~%"));
lf[181]=C_h_intern(&lf[181],22, C_text("##sys#interned-symbol\077"));
lf[182]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010unbound "));
lf[183]=C_h_intern(&lf[183],34, C_text("##sys#symbol-has-toplevel-binding\077"));
lf[184]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005eol~%"));
lf[185]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012(circle)~%"));
lf[186]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006~S -> "));
lf[187]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024circular structure: "));
lf[188]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004list"));
lf[189]=C_decode_literal(C_heaptop,C_text("\376B\000\000\036pair with car ~S~%and cdr ~S~%"));
lf[190]=C_h_intern(&lf[190],22, C_text("chicken.format#sprintf"));
lf[191]=C_decode_literal(C_heaptop,C_text("\376B\000\000 procedure with code pointer 0x~X"));
lf[192]=C_h_intern(&lf[192],27, C_text("##sys#peek-unsigned-integer"));
lf[193]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005input"));
lf[194]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006output"));
lf[195]=C_decode_literal(C_heaptop,C_text("\376B\000\0005~A port of type ~A with name ~S and file pointer ~X~%"));
lf[196]=C_decode_literal(C_heaptop,C_text("\376B\000\000/locative~%  pointer ~X~%  index ~A~%  type ~A~%"));
lf[197]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004slot"));
lf[198]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004char"));
lf[199]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010u8vector"));
lf[200]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010s8vector"));
lf[201]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011u16vector"));
lf[202]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011s16vector"));
lf[203]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011u32vector"));
lf[204]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011s32vector"));
lf[205]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011u64vector"));
lf[206]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011s64vector"));
lf[207]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011f32vector"));
lf[208]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011f64vector"));
lf[209]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024machine pointer ~X~%"));
lf[211]=C_h_intern(&lf[211],10, C_text("##sys#byte"));
lf[212]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022blob of size ~S:~%"));
lf[213]=C_decode_literal(C_heaptop,C_text("\376B\000\000\030lambda information: ~s~%"));
lf[214]=C_h_intern(&lf[214],25, C_text("##sys#lambda-info->string"));
lf[215]=C_h_intern(&lf[215],10, C_text("hash-table"));
lf[216]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013 ~S\011-> ~S~%"));
lf[217]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025  hash function: ~a~%"));
lf[218]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[219]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001s"));
lf[220]=C_decode_literal(C_heaptop,C_text("\376B\000\000:hash-table with ~S element~a~%  comparison procedure: ~A~%"));
lf[221]=C_h_intern(&lf[221],9, C_text("condition"));
lf[222]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007\011~s: ~s"));
lf[223]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005 ~s~%"));
lf[224]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017condition: ~s~%"));
lf[225]=C_h_intern(&lf[225],13, C_text("scheme#append"));
lf[226]=C_decode_literal(C_heaptop,C_text("\376B\000\000\031structure of type `~S\047:~%"));
lf[227]=C_h_intern(&lf[227],31, C_text("chicken.internal#hash-table-ref"));
lf[228]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020unknown object~%"));
lf[229]=C_h_intern(&lf[229],17, C_text("##sys#bytevector\077"));
lf[230]=C_h_intern(&lf[230],15, C_text("##sys#locative\077"));
lf[231]=C_h_intern(&lf[231],18, C_text("chicken.base#port\077"));
lf[232]=C_h_intern(&lf[232],24, C_text("chicken.keyword#keyword\077"));
lf[233]=C_decode_literal(C_heaptop,C_text("\376B\000\000\034statically allocated (0x~X) "));
lf[234]=C_h_intern(&lf[234],19, C_text("##sys#block-address"));
lf[235]=C_h_intern(&lf[235],26, C_text("chicken.csi#set-describer!"));
lf[236]=C_h_intern(&lf[236],14, C_text("set-describer!"));
lf[237]=C_h_intern(&lf[237],32, C_text("chicken.internal#hash-table-set!"));
lf[238]=C_h_intern(&lf[238],10, C_text("scheme#min"));
lf[239]=C_h_intern(&lf[239],4, C_text("dump"));
lf[240]=C_decode_literal(C_heaptop,C_text("\376B\000\000\034cannot dump immediate object"));
lf[241]=C_h_intern(&lf[241],15, C_text("##sys#peek-byte"));
lf[242]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022cannot dump object"));
lf[243]=C_h_intern(&lf[243],20, C_text("##sys#number->string"));
lf[244]=C_h_intern(&lf[244],21, C_text("##sys#write-char/port"));
lf[245]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003   "));
lf[246]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004:\011  "));
lf[247]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002  "));
lf[248]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006  ---\012"));
lf[249]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002] "));
lf[250]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003\011  "));
lf[251]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002[]"));
lf[252]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002  "));
lf[253]=C_h_intern(&lf[253],25, C_text("##sys#user-interrupt-hook"));
lf[254]=C_h_intern(&lf[254],19, C_text("##sys#signal-vector"));
lf[257]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\377\012\000\000k\376\003\000\000\002\376\377\012\000\000s\376\003\000\000\002\376\377\012\000\000h\376\003\000\000\002\376\377\012\000\000D\376\003\000\000\002\376\377\012\000\000e\376\003\000\000\002\376\377\012\000\000i\376\003\000\000\002\376\377\012\000\000R\376\003\000"
"\000\002\376\377\012\000\000b\376\003\000\000\002\376\377\012\000\000n\376\003\000\000\002\376\377\012\000\000q\376\003\000\000\002\376\377\012\000\000w\376\003\000\000\002\376\377\012\000\000-\376\003\000\000\002\376\377\012\000\000I\376\003\000\000\002\376\377\012\000\000p\376\003\000\000\002\376"
"\377\012\000\000P\376\377\016"));
lf[259]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002-s"));
lf[260]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003-ss"));
lf[261]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007-script"));
lf[262]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003-sx"));
lf[263]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002--"));
lf[264]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016invalid option"));
lf[265]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016invalid option"));
lf[266]=C_h_intern(&lf[266],18, C_text("##sys#string->list"));
lf[267]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\003-ss\376\003\000\000\002\376B\000\000\003-sx\376\003\000\000\002\376B\000\000\007-script\376\003\000\000\002\376B\000\000\010-version\376\003\000\000\002\376B\000\000\005-help\376\003\000\000"
"\002\376B\000\000\006--help\376\003\000\000\002\376B\000\000\010-feature\376\003\000\000\002\376B\000\000\013-no-feature\376\003\000\000\002\376B\000\000\005-eval\376\003\000\000\002\376B\000\000\021-cas"
"e-insensitive\376\003\000\000\002\376B\000\000\016-keyword-style\376\003\000\000\002\376B\000\000\030-no-parentheses-synonyms\376\003\000\000\002\376B\000\000"
"\021-no-symbol-escape\376\003\000\000\002\376B\000\000\014-r5rs-syntax\376\003\000\000\002\376B\000\000\013-setup-mode\376\003\000\000\002\376B\000\000\022-require-"
"extension\376\003\000\000\002\376B\000\000\006-batch\376\003\000\000\002\376B\000\000\006-quiet\376\003\000\000\002\376B\000\000\014-no-warnings\376\003\000\000\002\376B\000\000\010-no-ini"
"t\376\003\000\000\002\376B\000\000\015-include-path\376\003\000\000\002\376B\000\000\010-release\376\003\000\000\002\376B\000\000\006-print\376\003\000\000\002\376B\000\000\015-pretty-prin"
"t\376\003\000\000\002\376B\000\000\002--\376\377\016"));
lf[268]=C_h_intern(&lf[268],34, C_text("chicken.base#implicit-exit-handler"));
lf[269]=C_decode_literal(C_heaptop,C_text("\376B\000\000\047missing argument to command-line option"));
lf[270]=C_h_intern(&lf[270],10, C_text("##sys#list"));
lf[271]=C_h_intern(&lf[271],30, C_text("chicken.base#open-input-string"));
lf[272]=C_h_intern(&lf[272],34, C_text("chicken.platform#register-feature!"));
lf[273]=C_h_intern(&lf[273],36, C_text("chicken.platform#unregister-feature!"));
lf[274]=C_h_intern(&lf[274],20, C_text("##sys#user-read-hook"));
lf[275]=C_h_intern(&lf[275],5, C_text("quote"));
lf[276]=C_h_intern(&lf[276],23, C_text("##sys#sharp-number-hook"));
lf[277]=C_h_intern(&lf[277],17, C_text("chicken.repl#repl"));
lf[278]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\002--\376\003\000\000\002\376B\000\000\002-b\376\003\000\000\002\376B\000\000\006-batch\376\003\000\000\002\376B\000\000\002-q\376\003\000\000\002\376B\000\000\006-quiet\376\003\000\000\002\376B\000\000\002-n"
"\376\003\000\000\002\376B\000\000\010-no-init\376\003\000\000\002\376B\000\000\002-w\376\003\000\000\002\376B\000\000\014-no-warnings\376\003\000\000\002\376B\000\000\002-i\376\003\000\000\002\376B\000\000\021-case-"
"insensitive\376\003\000\000\002\376B\000\000\030-no-parentheses-synonyms\376\003\000\000\002\376B\000\000\021-no-symbol-escape\376\003\000\000\002\376B\000"
"\000\014-r5rs-syntax\376\003\000\000\002\376B\000\000\013-setup-mode\376\003\000\000\002\376B\000\000\003-ss\376\003\000\000\002\376B\000\000\003-sx\376\003\000\000\002\376B\000\000\002-s\376\003\000\000\002\376B"
"\000\000\007-script\376\377\016"));
lf[279]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002-D"));
lf[280]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010-feature"));
lf[281]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002-I"));
lf[282]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015-include-path"));
lf[283]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002-K"));
lf[284]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016-keyword-style"));
lf[285]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013-no-feature"));
lf[286]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002-R"));
lf[287]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022-require-extension"));
lf[288]=C_h_intern(&lf[288],6, C_text("import"));
lf[289]=C_h_intern(&lf[289],21, C_text("scheme#string->symbol"));
lf[290]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002-e"));
lf[291]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005-eval"));
lf[292]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002-p"));
lf[293]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006-print"));
lf[294]=C_h_intern(&lf[294],15, C_text("scheme#for-each"));
lf[295]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002-P"));
lf[296]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015-pretty-print"));
lf[297]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003-ss"));
lf[298]=C_h_intern(&lf[298],46, C_text("chicken.process-context#command-line-arguments"));
lf[299]=C_h_intern(&lf[299],4, C_text("main"));
lf[300]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003-sx"));
lf[301]=C_h_intern(&lf[301],20, C_text("##sys#standard-error"));
lf[302]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002; "));
lf[303]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003\012; "));
lf[304]=C_h_intern(&lf[304],25, C_text("chicken.base#flush-output"));
lf[305]=C_h_intern(&lf[305],34, C_text("chicken.port#with-output-to-string"));
lf[306]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[307]=C_h_intern(&lf[307],30, C_text("chicken.pathname#make-pathname"));
lf[308]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001."));
lf[309]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004HOME"));
lf[310]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007chicken"));
lf[311]=C_h_intern(&lf[311],40, C_text("chicken.platform#system-config-directory"));
lf[312]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\002-n\376\003\000\000\002\376B\000\000\010-no-init\376\377\016"));
lf[313]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021Type ,\077 for help."));
lf[314]=C_decode_literal(C_heaptop,C_text("\376B\000\000KCHICKEN\012(c) 2008-2021, The CHICKEN Team\012(c) 2000-2007, Felix L. Winkelmann\012"
));
lf[315]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001\012"));
lf[316]=C_h_intern(&lf[316],32, C_text("chicken.platform#chicken-version"));
lf[317]=C_h_intern(&lf[317],25, C_text("chicken.load#load-verbose"));
lf[318]=C_h_intern(&lf[318],32, C_text("chicken.internal#default-imports"));
lf[319]=C_h_intern(&lf[319],17, C_text("import-for-syntax"));
lf[320]=C_h_intern(&lf[320],39, C_text("chicken.internal#default-syntax-imports"));
lf[321]=C_h_intern(&lf[321],26, C_text("chicken.base#symbol-escape"));
lf[322]=C_h_intern(&lf[322],33, C_text("chicken.base#parentheses-synonyms"));
lf[323]=C_h_intern_kw(&lf[323],4, C_text("none"));
lf[324]=C_h_intern(&lf[324],27, C_text("chicken.base#case-sensitive"));
lf[325]=C_decode_literal(C_heaptop,C_text("\376B\000\000/Disabled the CHICKEN extensions to R5RS syntax\012"));
lf[326]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\014-r5rs-syntax\376\377\016"));
lf[327]=C_decode_literal(C_heaptop,C_text("\376B\000\000%Disabled support for escaped symbols\012"));
lf[328]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\021-no-symbol-escape\376\377\016"));
lf[329]=C_decode_literal(C_heaptop,C_text("\376B\000\000\052Disabled support for parentheses synonyms\012"));
lf[330]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\030-no-parentheses-synonyms\376\377\016"));
lf[331]=C_decode_literal(C_heaptop,C_text("\376B\000\000+missing argument to `-keyword-style\047 option"));
lf[332]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006prefix"));
lf[333]=C_h_intern_kw(&lf[333],6, C_text("prefix"));
lf[334]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004none"));
lf[335]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006suffix"));
lf[336]=C_h_intern_kw(&lf[336],6, C_text("suffix"));
lf[337]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002-I"));
lf[338]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015-include-path"));
lf[339]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013-no-feature"));
lf[340]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002-D"));
lf[341]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010-feature"));
lf[342]=C_h_intern(&lf[342],16, C_text("case-insensitive"));
lf[343]=C_decode_literal(C_heaptop,C_text("\376B\000\000-Identifiers and symbols are case insensitive\012"));
lf[344]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\002-i\376\003\000\000\002\376B\000\000\021-case-insensitive\376\377\016"));
lf[345]=C_h_intern(&lf[345],22, C_text("##sys#warnings-enabled"));
lf[346]=C_decode_literal(C_heaptop,C_text("\376B\000\000\026Warnings are disabled\012"));
lf[347]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\002-w\376\003\000\000\002\376B\000\000\014-no-warnings\376\377\016"));
lf[348]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010-release"));
lf[349]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013-setup-mode"));
lf[350]=C_h_intern(&lf[350],16, C_text("##sys#setup-mode"));
lf[351]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010-version"));
lf[352]=C_decode_literal(C_heaptop,C_text("\376B\000\004e    -b  -batch                    terminate after command-line processing\012 "
"   -w  -no-warnings              disable all warnings\012    -K  -keyword-style STY"
"LE      enable alternative keyword-syntax\012                                   (pr"
"efix, suffix or none)\012        -no-parentheses-synonyms  disables list delimiter "
"synonyms\012        -no-symbol-escape         disables support for escaped symbols\012"
"        -r5rs-syntax              disables the CHICKEN extensions to\012           "
"                        R5RS syntax\012    -s  -script PATHNAME          use csi as"
" interpreter for Scheme scripts\012        -ss PATHNAME              same as `-s\047, "
"but invoke `main\047 procedure\012        -sx PATHNAME              same as `-s\047, but "
"print each expression\012                                   as it is evaluated\012    "
"    -setup-mode               prefer the current directory when locating extensi"
"ons\012    -R  -require-extension NAME   require extension and import before\012      "
"                             executing code\012    -I  -include-path PATHNAME    ad"
"d PATHNAME to include path\012    --                            ignore all followin"
"g options\012"));
lf[353]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003 \047\012"));
lf[354]=C_decode_literal(C_heaptop,C_text("\376B\000\000D    -n  -no-init                  do not load initialization file ` "));
lf[355]=C_h_intern(&lf[355],21, C_text("##sys#print-to-string"));
lf[356]=C_decode_literal(C_heaptop,C_text("\376B\000\003.usage: csi [OPTION ...] [FILENAME ...]\012\012  `csi\047 is the CHICKEN interpreter."
"\012  \012  FILENAME is a Scheme source file name with optional extension. OPTION may "
"be\012  one of the following:\012\012    -h  -help                     display this text "
"and exit\012        -version                  display version and exit\012        -rel"
"ease                  print release number and exit\012    -i  -case-insensitive   "
"      enable case-insensitive reading\012    -e  -eval EXPRESSION          evaluate"
" given expression\012    -p  -print EXPRESSION         evaluate and print result(s)"
"\012    -P  -pretty-print EXPRESSION  evaluate and print result(s) prettily\012    -D "
" -feature SYMBOL           register feature identifier\012        -no-feature SYMBO"
"L        disable built-in feature identifier\012    -q  -quiet                    d"
"o not print banner\012"));
lf[357]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\002-h\376\003\000\000\002\376B\000\000\005-help\376\003\000\000\002\376B\000\000\006--help\376\377\016"));
lf[358]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[359]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024CHICKEN_INCLUDE_PATH"));
lf[360]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\002-q\376\003\000\000\002\376B\000\000\006-quiet\376\377\016"));
lf[361]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\002-b\376\003\000\000\002\376B\000\000\006-batch\376\377\016"));
lf[362]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\002-e\376\003\000\000\002\376B\000\000\002-p\376\003\000\000\002\376B\000\000\002-P\376\003\000\000\002\376B\000\000\005-eval\376\003\000\000\002\376B\000\000\006-print\376\003\000\000\002\376B\000\000\015-pr"
"etty-print\376\377\016"));
lf[363]=C_h_intern(&lf[363],14, C_text("chicken-script"));
lf[364]=C_h_intern(&lf[364],36, C_text("chicken.process-context#program-name"));
lf[365]=C_decode_literal(C_heaptop,C_text("\376B\000\000\042missing or invalid script argument"));
lf[366]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002--"));
lf[367]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\003-ss\376\003\000\000\002\376B\000\000\003-sx\376\003\000\000\002\376B\000\000\002-s\376\003\000\000\002\376B\000\000\007-script\376\377\016"));
lf[368]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\002-K\376\003\000\000\002\376B\000\000\016-keyword-style\376\377\016"));
lf[369]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[370]=C_h_intern(&lf[370],30, C_text("chicken.base#get-output-string"));
lf[371]=C_h_intern(&lf[371],31, C_text("chicken.base#open-output-string"));
lf[372]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025invalid option syntax"));
lf[373]=C_h_intern(&lf[373],14, C_text("scheme#reverse"));
lf[374]=C_h_intern(&lf[374],40, C_text("chicken.condition#with-exception-handler"));
lf[375]=C_h_intern(&lf[375],37, C_text("scheme#call-with-current-continuation"));
lf[376]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013CSI_OPTIONS"));
lf[377]=C_h_intern(&lf[377],18, C_text("scheme#make-vector"));
lf[378]=C_h_intern(&lf[378],19, C_text("##sys#peek-c-string"));
lf[379]=C_decode_literal(C_heaptop,C_text("\376B\000\000(; resetting current module to toplevel~%"));
lf[380]=C_h_intern(&lf[380],19, C_text("##sys#switch-module"));
lf[381]=C_decode_literal(C_heaptop,C_text("\376B\000\000$; switching current module to `~a\047~%"));
lf[382]=C_decode_literal(C_heaptop,C_text("\376B\000\000\027undefined module `~a\047~%"));
lf[383]=C_h_intern(&lf[383],17, C_text("##sys#find-module"));
lf[384]=C_h_intern(&lf[384],25, C_text("##sys#resolve-module-name"));
lf[385]=C_h_intern(&lf[385],1, C_text("m"));
lf[386]=C_decode_literal(C_heaptop,C_text("\376B\000\0005,m MODULE         switch to module with name `MODULE\047"));
lf[387]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010#;~A~A> "));
lf[388]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003~a:"));
lf[389]=C_h_intern(&lf[389],17, C_text("##sys#module-name"));
lf[390]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[391]=C_h_intern(&lf[391],20, C_text("##sys#current-module"));
lf[392]=C_h_intern(&lf[392],24, C_text("chicken.repl#repl-prompt"));
lf[393]=C_h_intern(&lf[393],17, C_text("##sys#make-string"));
lf[394]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013emacsclient"));
lf[395]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002vi"));
lf[396]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005EMACS"));
lf[397]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006VISUAL"));
lf[398]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006EDITOR"));
lf[399]=C_h_intern(&lf[399],27, C_text("chicken.base#make-parameter"));
lf[400]=C_h_intern(&lf[400],30, C_text("##sys#register-compiled-module"));
lf[401]=C_h_intern(&lf[401],11, C_text("chicken.csi"));
lf[402]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001editor-command\376\001\000\000\032\001chicken.csi#editor-command\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001to"
"plevel-command\376\001\000\000\034\001chicken.csi#toplevel-command\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001set-describer!\376\001"
"\000\000\032\001chicken.csi#set-describer!\376\377\016"));
lf[403]=C_h_intern(&lf[403],22, C_text("##sys#with-environment"));
C_register_lf2(lf,404,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2537,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[500] = {
{C_text("f9390:csi_2escm"),(void*)f9390},
{C_text("f9394:csi_2escm"),(void*)f9394},
{C_text("f9476:csi_2escm"),(void*)f9476},
{C_text("f9517:csi_2escm"),(void*)f9517},
{C_text("f9543:csi_2escm"),(void*)f9543},
{C_text("f9547:csi_2escm"),(void*)f9547},
{C_text("f_2537:csi_2escm"),(void*)f_2537},
{C_text("f_2540:csi_2escm"),(void*)f_2540},
{C_text("f_2543:csi_2escm"),(void*)f_2543},
{C_text("f_2546:csi_2escm"),(void*)f_2546},
{C_text("f_2549:csi_2escm"),(void*)f_2549},
{C_text("f_2552:csi_2escm"),(void*)f_2552},
{C_text("f_2555:csi_2escm"),(void*)f_2555},
{C_text("f_2558:csi_2escm"),(void*)f_2558},
{C_text("f_2561:csi_2escm"),(void*)f_2561},
{C_text("f_2564:csi_2escm"),(void*)f_2564},
{C_text("f_2567:csi_2escm"),(void*)f_2567},
{C_text("f_2570:csi_2escm"),(void*)f_2570},
{C_text("f_3068:csi_2escm"),(void*)f_3068},
{C_text("f_3095:csi_2escm"),(void*)f_3095},
{C_text("f_3143:csi_2escm"),(void*)f_3143},
{C_text("f_3157:csi_2escm"),(void*)f_3157},
{C_text("f_3170:csi_2escm"),(void*)f_3170},
{C_text("f_3860:csi_2escm"),(void*)f_3860},
{C_text("f_3865:csi_2escm"),(void*)f_3865},
{C_text("f_3868:csi_2escm"),(void*)f_3868},
{C_text("f_3874:csi_2escm"),(void*)f_3874},
{C_text("f_3877:csi_2escm"),(void*)f_3877},
{C_text("f_3884:csi_2escm"),(void*)f_3884},
{C_text("f_3908:csi_2escm"),(void*)f_3908},
{C_text("f_3923:csi_2escm"),(void*)f_3923},
{C_text("f_3937:csi_2escm"),(void*)f_3937},
{C_text("f_3950:csi_2escm"),(void*)f_3950},
{C_text("f_3969:csi_2escm"),(void*)f_3969},
{C_text("f_3976:csi_2escm"),(void*)f_3976},
{C_text("f_3979:csi_2escm"),(void*)f_3979},
{C_text("f_3985:csi_2escm"),(void*)f_3985},
{C_text("f_3998:csi_2escm"),(void*)f_3998},
{C_text("f_4011:csi_2escm"),(void*)f_4011},
{C_text("f_4020:csi_2escm"),(void*)f_4020},
{C_text("f_4024:csi_2escm"),(void*)f_4024},
{C_text("f_4036:csi_2escm"),(void*)f_4036},
{C_text("f_4045:csi_2escm"),(void*)f_4045},
{C_text("f_4048:csi_2escm"),(void*)f_4048},
{C_text("f_4055:csi_2escm"),(void*)f_4055},
{C_text("f_4059:csi_2escm"),(void*)f_4059},
{C_text("f_4062:csi_2escm"),(void*)f_4062},
{C_text("f_4068:csi_2escm"),(void*)f_4068},
{C_text("f_4075:csi_2escm"),(void*)f_4075},
{C_text("f_4077:csi_2escm"),(void*)f_4077},
{C_text("f_4087:csi_2escm"),(void*)f_4087},
{C_text("f_4090:csi_2escm"),(void*)f_4090},
{C_text("f_4104:csi_2escm"),(void*)f_4104},
{C_text("f_4127:csi_2escm"),(void*)f_4127},
{C_text("f_4137:csi_2escm"),(void*)f_4137},
{C_text("f_4151:csi_2escm"),(void*)f_4151},
{C_text("f_4182:csi_2escm"),(void*)f_4182},
{C_text("f_4195:csi_2escm"),(void*)f_4195},
{C_text("f_4198:csi_2escm"),(void*)f_4198},
{C_text("f_4201:csi_2escm"),(void*)f_4201},
{C_text("f_4204:csi_2escm"),(void*)f_4204},
{C_text("f_4207:csi_2escm"),(void*)f_4207},
{C_text("f_4216:csi_2escm"),(void*)f_4216},
{C_text("f_4226:csi_2escm"),(void*)f_4226},
{C_text("f_4230:csi_2escm"),(void*)f_4230},
{C_text("f_4253:csi_2escm"),(void*)f_4253},
{C_text("f_4270:csi_2escm"),(void*)f_4270},
{C_text("f_4282:csi_2escm"),(void*)f_4282},
{C_text("f_4290:csi_2escm"),(void*)f_4290},
{C_text("f_4293:csi_2escm"),(void*)f_4293},
{C_text("f_4305:csi_2escm"),(void*)f_4305},
{C_text("f_4312:csi_2escm"),(void*)f_4312},
{C_text("f_4318:csi_2escm"),(void*)f_4318},
{C_text("f_4338:csi_2escm"),(void*)f_4338},
{C_text("f_4368:csi_2escm"),(void*)f_4368},
{C_text("f_4401:csi_2escm"),(void*)f_4401},
{C_text("f_4416:csi_2escm"),(void*)f_4416},
{C_text("f_4419:csi_2escm"),(void*)f_4419},
{C_text("f_4426:csi_2escm"),(void*)f_4426},
{C_text("f_4430:csi_2escm"),(void*)f_4430},
{C_text("f_4439:csi_2escm"),(void*)f_4439},
{C_text("f_4442:csi_2escm"),(void*)f_4442},
{C_text("f_4445:csi_2escm"),(void*)f_4445},
{C_text("f_4457:csi_2escm"),(void*)f_4457},
{C_text("f_4460:csi_2escm"),(void*)f_4460},
{C_text("f_4472:csi_2escm"),(void*)f_4472},
{C_text("f_4475:csi_2escm"),(void*)f_4475},
{C_text("f_4487:csi_2escm"),(void*)f_4487},
{C_text("f_4490:csi_2escm"),(void*)f_4490},
{C_text("f_4493:csi_2escm"),(void*)f_4493},
{C_text("f_4496:csi_2escm"),(void*)f_4496},
{C_text("f_4526:csi_2escm"),(void*)f_4526},
{C_text("f_4529:csi_2escm"),(void*)f_4529},
{C_text("f_4534:csi_2escm"),(void*)f_4534},
{C_text("f_4544:csi_2escm"),(void*)f_4544},
{C_text("f_4559:csi_2escm"),(void*)f_4559},
{C_text("f_4568:csi_2escm"),(void*)f_4568},
{C_text("f_4569:csi_2escm"),(void*)f_4569},
{C_text("f_4575:csi_2escm"),(void*)f_4575},
{C_text("f_4579:csi_2escm"),(void*)f_4579},
{C_text("f_4585:csi_2escm"),(void*)f_4585},
{C_text("f_4590:csi_2escm"),(void*)f_4590},
{C_text("f_4600:csi_2escm"),(void*)f_4600},
{C_text("f_4615:csi_2escm"),(void*)f_4615},
{C_text("f_4624:csi_2escm"),(void*)f_4624},
{C_text("f_4629:csi_2escm"),(void*)f_4629},
{C_text("f_4633:csi_2escm"),(void*)f_4633},
{C_text("f_4638:csi_2escm"),(void*)f_4638},
{C_text("f_4644:csi_2escm"),(void*)f_4644},
{C_text("f_4648:csi_2escm"),(void*)f_4648},
{C_text("f_4655:csi_2escm"),(void*)f_4655},
{C_text("f_4657:csi_2escm"),(void*)f_4657},
{C_text("f_4661:csi_2escm"),(void*)f_4661},
{C_text("f_4676:csi_2escm"),(void*)f_4676},
{C_text("f_4692:csi_2escm"),(void*)f_4692},
{C_text("f_4710:csi_2escm"),(void*)f_4710},
{C_text("f_4714:csi_2escm"),(void*)f_4714},
{C_text("f_4730:csi_2escm"),(void*)f_4730},
{C_text("f_4742:csi_2escm"),(void*)f_4742},
{C_text("f_4754:csi_2escm"),(void*)f_4754},
{C_text("f_4766:csi_2escm"),(void*)f_4766},
{C_text("f_4773:csi_2escm"),(void*)f_4773},
{C_text("f_4786:csi_2escm"),(void*)f_4786},
{C_text("f_4795:csi_2escm"),(void*)f_4795},
{C_text("f_4798:csi_2escm"),(void*)f_4798},
{C_text("f_4801:csi_2escm"),(void*)f_4801},
{C_text("f_4814:csi_2escm"),(void*)f_4814},
{C_text("f_4836:csi_2escm"),(void*)f_4836},
{C_text("f_4841:csi_2escm"),(void*)f_4841},
{C_text("f_4851:csi_2escm"),(void*)f_4851},
{C_text("f_4865:csi_2escm"),(void*)f_4865},
{C_text("f_4911:csi_2escm"),(void*)f_4911},
{C_text("f_4917:csi_2escm"),(void*)f_4917},
{C_text("f_4921:csi_2escm"),(void*)f_4921},
{C_text("f_4937:csi_2escm"),(void*)f_4937},
{C_text("f_4943:csi_2escm"),(void*)f_4943},
{C_text("f_4957:csi_2escm"),(void*)f_4957},
{C_text("f_4960:csi_2escm"),(void*)f_4960},
{C_text("f_4966:csi_2escm"),(void*)f_4966},
{C_text("f_4969:csi_2escm"),(void*)f_4969},
{C_text("f_4977:csi_2escm"),(void*)f_4977},
{C_text("f_4987:csi_2escm"),(void*)f_4987},
{C_text("f_5002:csi_2escm"),(void*)f_5002},
{C_text("f_5011:csi_2escm"),(void*)f_5011},
{C_text("f_5017:csi_2escm"),(void*)f_5017},
{C_text("f_5023:csi_2escm"),(void*)f_5023},
{C_text("f_5029:csi_2escm"),(void*)f_5029},
{C_text("f_5035:csi_2escm"),(void*)f_5035},
{C_text("f_5043:csi_2escm"),(void*)f_5043},
{C_text("f_5045:csi_2escm"),(void*)f_5045},
{C_text("f_5062:csi_2escm"),(void*)f_5062},
{C_text("f_5068:csi_2escm"),(void*)f_5068},
{C_text("f_5074:csi_2escm"),(void*)f_5074},
{C_text("f_5082:csi_2escm"),(void*)f_5082},
{C_text("f_5083:csi_2escm"),(void*)f_5083},
{C_text("f_5093:csi_2escm"),(void*)f_5093},
{C_text("f_5097:csi_2escm"),(void*)f_5097},
{C_text("f_5100:csi_2escm"),(void*)f_5100},
{C_text("f_5103:csi_2escm"),(void*)f_5103},
{C_text("f_5105:csi_2escm"),(void*)f_5105},
{C_text("f_5113:csi_2escm"),(void*)f_5113},
{C_text("f_5121:csi_2escm"),(void*)f_5121},
{C_text("f_5124:csi_2escm"),(void*)f_5124},
{C_text("f_5125:csi_2escm"),(void*)f_5125},
{C_text("f_5129:csi_2escm"),(void*)f_5129},
{C_text("f_5139:csi_2escm"),(void*)f_5139},
{C_text("f_5148:csi_2escm"),(void*)f_5148},
{C_text("f_5156:csi_2escm"),(void*)f_5156},
{C_text("f_5171:csi_2escm"),(void*)f_5171},
{C_text("f_5174:csi_2escm"),(void*)f_5174},
{C_text("f_5177:csi_2escm"),(void*)f_5177},
{C_text("f_5180:csi_2escm"),(void*)f_5180},
{C_text("f_5187:csi_2escm"),(void*)f_5187},
{C_text("f_5192:csi_2escm"),(void*)f_5192},
{C_text("f_5196:csi_2escm"),(void*)f_5196},
{C_text("f_5200:csi_2escm"),(void*)f_5200},
{C_text("f_5204:csi_2escm"),(void*)f_5204},
{C_text("f_5208:csi_2escm"),(void*)f_5208},
{C_text("f_5212:csi_2escm"),(void*)f_5212},
{C_text("f_5216:csi_2escm"),(void*)f_5216},
{C_text("f_5220:csi_2escm"),(void*)f_5220},
{C_text("f_5248:csi_2escm"),(void*)f_5248},
{C_text("f_5260:csi_2escm"),(void*)f_5260},
{C_text("f_5262:csi_2escm"),(void*)f_5262},
{C_text("f_5272:csi_2escm"),(void*)f_5272},
{C_text("f_5293:csi_2escm"),(void*)f_5293},
{C_text("f_5295:csi_2escm"),(void*)f_5295},
{C_text("f_5320:csi_2escm"),(void*)f_5320},
{C_text("f_5340:csi_2escm"),(void*)f_5340},
{C_text("f_5375:csi_2escm"),(void*)f_5375},
{C_text("f_5405:csi_2escm"),(void*)f_5405},
{C_text("f_5407:csi_2escm"),(void*)f_5407},
{C_text("f_5413:csi_2escm"),(void*)f_5413},
{C_text("f_5420:csi_2escm"),(void*)f_5420},
{C_text("f_5425:csi_2escm"),(void*)f_5425},
{C_text("f_5448:csi_2escm"),(void*)f_5448},
{C_text("f_5457:csi_2escm"),(void*)f_5457},
{C_text("f_5467:csi_2escm"),(void*)f_5467},
{C_text("f_5470:csi_2escm"),(void*)f_5470},
{C_text("f_5499:csi_2escm"),(void*)f_5499},
{C_text("f_5527:csi_2escm"),(void*)f_5527},
{C_text("f_5542:csi_2escm"),(void*)f_5542},
{C_text("f_5545:csi_2escm"),(void*)f_5545},
{C_text("f_5548:csi_2escm"),(void*)f_5548},
{C_text("f_5614:csi_2escm"),(void*)f_5614},
{C_text("f_5620:csi_2escm"),(void*)f_5620},
{C_text("f_5711:csi_2escm"),(void*)f_5711},
{C_text("f_5718:csi_2escm"),(void*)f_5718},
{C_text("f_5727:csi_2escm"),(void*)f_5727},
{C_text("f_5730:csi_2escm"),(void*)f_5730},
{C_text("f_5742:csi_2escm"),(void*)f_5742},
{C_text("f_5747:csi_2escm"),(void*)f_5747},
{C_text("f_5757:csi_2escm"),(void*)f_5757},
{C_text("f_5760:csi_2escm"),(void*)f_5760},
{C_text("f_5763:csi_2escm"),(void*)f_5763},
{C_text("f_5772:csi_2escm"),(void*)f_5772},
{C_text("f_5792:csi_2escm"),(void*)f_5792},
{C_text("f_5795:csi_2escm"),(void*)f_5795},
{C_text("f_5798:csi_2escm"),(void*)f_5798},
{C_text("f_5810:csi_2escm"),(void*)f_5810},
{C_text("f_5813:csi_2escm"),(void*)f_5813},
{C_text("f_5822:csi_2escm"),(void*)f_5822},
{C_text("f_5853:csi_2escm"),(void*)f_5853},
{C_text("f_5917:csi_2escm"),(void*)f_5917},
{C_text("f_5921:csi_2escm"),(void*)f_5921},
{C_text("f_5927:csi_2escm"),(void*)f_5927},
{C_text("f_5946:csi_2escm"),(void*)f_5946},
{C_text("f_5955:csi_2escm"),(void*)f_5955},
{C_text("f_5962:csi_2escm"),(void*)f_5962},
{C_text("f_6079:csi_2escm"),(void*)f_6079},
{C_text("f_6085:csi_2escm"),(void*)f_6085},
{C_text("f_6091:csi_2escm"),(void*)f_6091},
{C_text("f_6104:csi_2escm"),(void*)f_6104},
{C_text("f_6116:csi_2escm"),(void*)f_6116},
{C_text("f_6119:csi_2escm"),(void*)f_6119},
{C_text("f_6130:csi_2escm"),(void*)f_6130},
{C_text("f_6138:csi_2escm"),(void*)f_6138},
{C_text("f_6159:csi_2escm"),(void*)f_6159},
{C_text("f_6168:csi_2escm"),(void*)f_6168},
{C_text("f_6178:csi_2escm"),(void*)f_6178},
{C_text("f_6213:csi_2escm"),(void*)f_6213},
{C_text("f_6214:csi_2escm"),(void*)f_6214},
{C_text("f_6218:csi_2escm"),(void*)f_6218},
{C_text("f_6227:csi_2escm"),(void*)f_6227},
{C_text("f_6237:csi_2escm"),(void*)f_6237},
{C_text("f_6250:csi_2escm"),(void*)f_6250},
{C_text("f_6255:csi_2escm"),(void*)f_6255},
{C_text("f_6282:csi_2escm"),(void*)f_6282},
{C_text("f_6292:csi_2escm"),(void*)f_6292},
{C_text("f_6319:csi_2escm"),(void*)f_6319},
{C_text("f_6323:csi_2escm"),(void*)f_6323},
{C_text("f_6337:csi_2escm"),(void*)f_6337},
{C_text("f_6345:csi_2escm"),(void*)f_6345},
{C_text("f_6358:csi_2escm"),(void*)f_6358},
{C_text("f_6364:csi_2escm"),(void*)f_6364},
{C_text("f_6389:csi_2escm"),(void*)f_6389},
{C_text("f_6402:csi_2escm"),(void*)f_6402},
{C_text("f_6429:csi_2escm"),(void*)f_6429},
{C_text("f_6437:csi_2escm"),(void*)f_6437},
{C_text("f_6446:csi_2escm"),(void*)f_6446},
{C_text("f_6448:csi_2escm"),(void*)f_6448},
{C_text("f_6451:csi_2escm"),(void*)f_6451},
{C_text("f_6473:csi_2escm"),(void*)f_6473},
{C_text("f_6480:csi_2escm"),(void*)f_6480},
{C_text("f_6497:csi_2escm"),(void*)f_6497},
{C_text("f_6526:csi_2escm"),(void*)f_6526},
{C_text("f_6554:csi_2escm"),(void*)f_6554},
{C_text("f_6559:csi_2escm"),(void*)f_6559},
{C_text("f_6594:csi_2escm"),(void*)f_6594},
{C_text("f_6597:csi_2escm"),(void*)f_6597},
{C_text("f_6601:csi_2escm"),(void*)f_6601},
{C_text("f_6617:csi_2escm"),(void*)f_6617},
{C_text("f_6629:csi_2escm"),(void*)f_6629},
{C_text("f_6639:csi_2escm"),(void*)f_6639},
{C_text("f_6642:csi_2escm"),(void*)f_6642},
{C_text("f_6645:csi_2escm"),(void*)f_6645},
{C_text("f_6648:csi_2escm"),(void*)f_6648},
{C_text("f_6651:csi_2escm"),(void*)f_6651},
{C_text("f_6654:csi_2escm"),(void*)f_6654},
{C_text("f_6663:csi_2escm"),(void*)f_6663},
{C_text("f_6676:csi_2escm"),(void*)f_6676},
{C_text("f_6679:csi_2escm"),(void*)f_6679},
{C_text("f_6714:csi_2escm"),(void*)f_6714},
{C_text("f_6748:csi_2escm"),(void*)f_6748},
{C_text("f_6758:csi_2escm"),(void*)f_6758},
{C_text("f_6768:csi_2escm"),(void*)f_6768},
{C_text("f_6771:csi_2escm"),(void*)f_6771},
{C_text("f_6786:csi_2escm"),(void*)f_6786},
{C_text("f_6790:csi_2escm"),(void*)f_6790},
{C_text("f_6797:csi_2escm"),(void*)f_6797},
{C_text("f_6799:csi_2escm"),(void*)f_6799},
{C_text("f_6802:csi_2escm"),(void*)f_6802},
{C_text("f_6808:csi_2escm"),(void*)f_6808},
{C_text("f_6825:csi_2escm"),(void*)f_6825},
{C_text("f_6834:csi_2escm"),(void*)f_6834},
{C_text("f_6865:csi_2escm"),(void*)f_6865},
{C_text("f_6868:csi_2escm"),(void*)f_6868},
{C_text("f_6871:csi_2escm"),(void*)f_6871},
{C_text("f_6874:csi_2escm"),(void*)f_6874},
{C_text("f_6877:csi_2escm"),(void*)f_6877},
{C_text("f_6880:csi_2escm"),(void*)f_6880},
{C_text("f_6883:csi_2escm"),(void*)f_6883},
{C_text("f_6886:csi_2escm"),(void*)f_6886},
{C_text("f_6889:csi_2escm"),(void*)f_6889},
{C_text("f_6892:csi_2escm"),(void*)f_6892},
{C_text("f_6895:csi_2escm"),(void*)f_6895},
{C_text("f_6908:csi_2escm"),(void*)f_6908},
{C_text("f_6918:csi_2escm"),(void*)f_6918},
{C_text("f_6923:csi_2escm"),(void*)f_6923},
{C_text("f_6936:csi_2escm"),(void*)f_6936},
{C_text("f_6939:csi_2escm"),(void*)f_6939},
{C_text("f_6942:csi_2escm"),(void*)f_6942},
{C_text("f_6945:csi_2escm"),(void*)f_6945},
{C_text("f_6948:csi_2escm"),(void*)f_6948},
{C_text("f_6982:csi_2escm"),(void*)f_6982},
{C_text("f_6992:csi_2escm"),(void*)f_6992},
{C_text("f_7026:csi_2escm"),(void*)f_7026},
{C_text("f_7029:csi_2escm"),(void*)f_7029},
{C_text("f_7084:csi_2escm"),(void*)f_7084},
{C_text("f_7141:csi_2escm"),(void*)f_7141},
{C_text("f_7143:csi_2escm"),(void*)f_7143},
{C_text("f_7154:csi_2escm"),(void*)f_7154},
{C_text("f_7174:csi_2escm"),(void*)f_7174},
{C_text("f_7177:csi_2escm"),(void*)f_7177},
{C_text("f_7181:csi_2escm"),(void*)f_7181},
{C_text("f_7184:csi_2escm"),(void*)f_7184},
{C_text("f_7196:csi_2escm"),(void*)f_7196},
{C_text("f_7221:csi_2escm"),(void*)f_7221},
{C_text("f_7230:csi_2escm"),(void*)f_7230},
{C_text("f_7236:csi_2escm"),(void*)f_7236},
{C_text("f_7246:csi_2escm"),(void*)f_7246},
{C_text("f_7258:csi_2escm"),(void*)f_7258},
{C_text("f_7261:csi_2escm"),(void*)f_7261},
{C_text("f_7264:csi_2escm"),(void*)f_7264},
{C_text("f_7267:csi_2escm"),(void*)f_7267},
{C_text("f_7270:csi_2escm"),(void*)f_7270},
{C_text("f_7306:csi_2escm"),(void*)f_7306},
{C_text("f_7313:csi_2escm"),(void*)f_7313},
{C_text("f_7315:csi_2escm"),(void*)f_7315},
{C_text("f_7325:csi_2escm"),(void*)f_7325},
{C_text("f_7368:csi_2escm"),(void*)f_7368},
{C_text("f_7373:csi_2escm"),(void*)f_7373},
{C_text("f_7379:csi_2escm"),(void*)f_7379},
{C_text("f_7391:csi_2escm"),(void*)f_7391},
{C_text("f_7428:csi_2escm"),(void*)f_7428},
{C_text("f_7434:csi_2escm"),(void*)f_7434},
{C_text("f_7469:csi_2escm"),(void*)f_7469},
{C_text("f_7481:csi_2escm"),(void*)f_7481},
{C_text("f_7495:csi_2escm"),(void*)f_7495},
{C_text("f_7516:csi_2escm"),(void*)f_7516},
{C_text("f_7520:csi_2escm"),(void*)f_7520},
{C_text("f_7524:csi_2escm"),(void*)f_7524},
{C_text("f_7563:csi_2escm"),(void*)f_7563},
{C_text("f_7571:csi_2escm"),(void*)f_7571},
{C_text("f_7613:csi_2escm"),(void*)f_7613},
{C_text("f_7643:csi_2escm"),(void*)f_7643},
{C_text("f_7646:csi_2escm"),(void*)f_7646},
{C_text("f_7649:csi_2escm"),(void*)f_7649},
{C_text("f_7652:csi_2escm"),(void*)f_7652},
{C_text("f_7655:csi_2escm"),(void*)f_7655},
{C_text("f_7658:csi_2escm"),(void*)f_7658},
{C_text("f_7661:csi_2escm"),(void*)f_7661},
{C_text("f_7664:csi_2escm"),(void*)f_7664},
{C_text("f_7673:csi_2escm"),(void*)f_7673},
{C_text("f_7679:csi_2escm"),(void*)f_7679},
{C_text("f_7681:csi_2escm"),(void*)f_7681},
{C_text("f_7687:csi_2escm"),(void*)f_7687},
{C_text("f_7695:csi_2escm"),(void*)f_7695},
{C_text("f_7716:csi_2escm"),(void*)f_7716},
{C_text("f_7732:csi_2escm"),(void*)f_7732},
{C_text("f_7735:csi_2escm"),(void*)f_7735},
{C_text("f_7738:csi_2escm"),(void*)f_7738},
{C_text("f_7741:csi_2escm"),(void*)f_7741},
{C_text("f_7747:csi_2escm"),(void*)f_7747},
{C_text("f_7756:csi_2escm"),(void*)f_7756},
{C_text("f_7778:csi_2escm"),(void*)f_7778},
{C_text("f_7793:csi_2escm"),(void*)f_7793},
{C_text("f_7800:csi_2escm"),(void*)f_7800},
{C_text("f_7807:csi_2escm"),(void*)f_7807},
{C_text("f_7809:csi_2escm"),(void*)f_7809},
{C_text("f_7819:csi_2escm"),(void*)f_7819},
{C_text("f_7826:csi_2escm"),(void*)f_7826},
{C_text("f_7830:csi_2escm"),(void*)f_7830},
{C_text("f_7832:csi_2escm"),(void*)f_7832},
{C_text("f_7840:csi_2escm"),(void*)f_7840},
{C_text("f_7850:csi_2escm"),(void*)f_7850},
{C_text("f_7853:csi_2escm"),(void*)f_7853},
{C_text("f_7856:csi_2escm"),(void*)f_7856},
{C_text("f_7859:csi_2escm"),(void*)f_7859},
{C_text("f_7862:csi_2escm"),(void*)f_7862},
{C_text("f_7865:csi_2escm"),(void*)f_7865},
{C_text("f_7868:csi_2escm"),(void*)f_7868},
{C_text("f_7874:csi_2escm"),(void*)f_7874},
{C_text("f_7877:csi_2escm"),(void*)f_7877},
{C_text("f_7883:csi_2escm"),(void*)f_7883},
{C_text("f_7886:csi_2escm"),(void*)f_7886},
{C_text("f_7892:csi_2escm"),(void*)f_7892},
{C_text("f_7896:csi_2escm"),(void*)f_7896},
{C_text("f_7899:csi_2escm"),(void*)f_7899},
{C_text("f_7902:csi_2escm"),(void*)f_7902},
{C_text("f_7905:csi_2escm"),(void*)f_7905},
{C_text("f_7908:csi_2escm"),(void*)f_7908},
{C_text("f_7911:csi_2escm"),(void*)f_7911},
{C_text("f_7914:csi_2escm"),(void*)f_7914},
{C_text("f_7917:csi_2escm"),(void*)f_7917},
{C_text("f_7920:csi_2escm"),(void*)f_7920},
{C_text("f_7923:csi_2escm"),(void*)f_7923},
{C_text("f_7928:csi_2escm"),(void*)f_7928},
{C_text("f_7956:csi_2escm"),(void*)f_7956},
{C_text("f_7985:csi_2escm"),(void*)f_7985},
{C_text("f_7997:csi_2escm"),(void*)f_7997},
{C_text("f_8012:csi_2escm"),(void*)f_8012},
{C_text("f_8031:csi_2escm"),(void*)f_8031},
{C_text("f_8041:csi_2escm"),(void*)f_8041},
{C_text("f_8056:csi_2escm"),(void*)f_8056},
{C_text("f_8066:csi_2escm"),(void*)f_8066},
{C_text("f_8076:csi_2escm"),(void*)f_8076},
{C_text("f_8087:csi_2escm"),(void*)f_8087},
{C_text("f_8091:csi_2escm"),(void*)f_8091},
{C_text("f_8098:csi_2escm"),(void*)f_8098},
{C_text("f_8100:csi_2escm"),(void*)f_8100},
{C_text("f_8128:csi_2escm"),(void*)f_8128},
{C_text("f_8132:csi_2escm"),(void*)f_8132},
{C_text("f_8138:csi_2escm"),(void*)f_8138},
{C_text("f_8141:csi_2escm"),(void*)f_8141},
{C_text("f_8144:csi_2escm"),(void*)f_8144},
{C_text("f_8147:csi_2escm"),(void*)f_8147},
{C_text("f_8152:csi_2escm"),(void*)f_8152},
{C_text("f_8165:csi_2escm"),(void*)f_8165},
{C_text("f_8168:csi_2escm"),(void*)f_8168},
{C_text("f_8183:csi_2escm"),(void*)f_8183},
{C_text("f_8202:csi_2escm"),(void*)f_8202},
{C_text("f_8214:csi_2escm"),(void*)f_8214},
{C_text("f_8217:csi_2escm"),(void*)f_8217},
{C_text("f_8231:csi_2escm"),(void*)f_8231},
{C_text("f_8234:csi_2escm"),(void*)f_8234},
{C_text("f_8237:csi_2escm"),(void*)f_8237},
{C_text("f_8240:csi_2escm"),(void*)f_8240},
{C_text("f_8243:csi_2escm"),(void*)f_8243},
{C_text("f_8252:csi_2escm"),(void*)f_8252},
{C_text("f_8255:csi_2escm"),(void*)f_8255},
{C_text("f_8264:csi_2escm"),(void*)f_8264},
{C_text("f_8267:csi_2escm"),(void*)f_8267},
{C_text("f_8331:csi_2escm"),(void*)f_8331},
{C_text("f_8338:csi_2escm"),(void*)f_8338},
{C_text("f_8344:csi_2escm"),(void*)f_8344},
{C_text("f_8351:csi_2escm"),(void*)f_8351},
{C_text("f_8357:csi_2escm"),(void*)f_8357},
{C_text("f_8359:csi_2escm"),(void*)f_8359},
{C_text("f_8384:csi_2escm"),(void*)f_8384},
{C_text("f_8393:csi_2escm"),(void*)f_8393},
{C_text("f_8418:csi_2escm"),(void*)f_8418},
{C_text("f_8427:csi_2escm"),(void*)f_8427},
{C_text("f_8437:csi_2escm"),(void*)f_8437},
{C_text("f_8450:csi_2escm"),(void*)f_8450},
{C_text("f_8460:csi_2escm"),(void*)f_8460},
{C_text("f_8473:csi_2escm"),(void*)f_8473},
{C_text("f_8483:csi_2escm"),(void*)f_8483},
{C_text("f_8497:csi_2escm"),(void*)f_8497},
{C_text("f_8500:csi_2escm"),(void*)f_8500},
{C_text("f_8503:csi_2escm"),(void*)f_8503},
{C_text("f_8512:csi_2escm"),(void*)f_8512},
{C_text("f_8515:csi_2escm"),(void*)f_8515},
{C_text("f_8525:csi_2escm"),(void*)f_8525},
{C_text("f_8532:csi_2escm"),(void*)f_8532},
{C_text("f_8542:csi_2escm"),(void*)f_8542},
{C_text("f_8548:csi_2escm"),(void*)f_8548},
{C_text("f_8551:csi_2escm"),(void*)f_8551},
{C_text("f_8556:csi_2escm"),(void*)f_8556},
{C_text("f_8581:csi_2escm"),(void*)f_8581},
{C_text("f_8592:csi_2escm"),(void*)f_8592},
{C_text("f_8601:csi_2escm"),(void*)f_8601},
{C_text("f_8607:csi_2escm"),(void*)f_8607},
{C_text("f_8610:csi_2escm"),(void*)f_8610},
{C_text("f_8613:csi_2escm"),(void*)f_8613},
{C_text("f_8616:csi_2escm"),(void*)f_8616},
{C_text("f_8625:csi_2escm"),(void*)f_8625},
{C_text("f_8690:csi_2escm"),(void*)f_8690},
{C_text("f_8703:csi_2escm"),(void*)f_8703},
{C_text("f_8707:csi_2escm"),(void*)f_8707},
{C_text("f_8711:csi_2escm"),(void*)f_8711},
{C_text("f_8717:csi_2escm"),(void*)f_8717},
{C_text("f_8723:csi_2escm"),(void*)f_8723},
{C_text("f_8725:csi_2escm"),(void*)f_8725},
{C_text("f_8731:csi_2escm"),(void*)f_8731},
{C_text("f_8735:csi_2escm"),(void*)f_8735},
{C_text("f_8744:csi_2escm"),(void*)f_8744},
{C_text("f_8750:csi_2escm"),(void*)f_8750},
{C_text("f_8754:csi_2escm"),(void*)f_8754},
{C_text("f_8758:csi_2escm"),(void*)f_8758},
{C_text("f_8771:csi_2escm"),(void*)f_8771},
{C_text("f_8773:csi_2escm"),(void*)f_8773},
{C_text("f_8781:csi_2escm"),(void*)f_8781},
{C_text("f_8784:csi_2escm"),(void*)f_8784},
{C_text("f_8791:csi_2escm"),(void*)f_8791},
{C_text("f_8795:csi_2escm"),(void*)f_8795},
{C_text("f_8804:csi_2escm"),(void*)f_8804},
{C_text("f_8806:csi_2escm"),(void*)f_8806},
{C_text("toplevel:csi_2escm"),(void*)C_toplevel},
{NULL,NULL}};
#endif

static C_PTABLE_ENTRY *create_ptable(void){
#ifdef C_ENABLE_PTABLES
return ptable;
#else
return NULL;
#endif
}

/*
o|hiding unexported module binding: chicken.csi#constant214 
o|hiding unexported module binding: chicken.csi#partition 
o|hiding unexported module binding: chicken.csi#span 
o|hiding unexported module binding: chicken.csi#take 
o|hiding unexported module binding: chicken.csi#drop 
o|hiding unexported module binding: chicken.csi#split-at 
o|hiding unexported module binding: chicken.csi#append-map 
o|hiding unexported module binding: chicken.csi#every 
o|hiding unexported module binding: chicken.csi#any 
o|hiding unexported module binding: chicken.csi#cons* 
o|hiding unexported module binding: chicken.csi#concatenate 
o|hiding unexported module binding: chicken.csi#delete 
o|hiding unexported module binding: chicken.csi#first 
o|hiding unexported module binding: chicken.csi#second 
o|hiding unexported module binding: chicken.csi#third 
o|hiding unexported module binding: chicken.csi#fourth 
o|hiding unexported module binding: chicken.csi#fifth 
o|hiding unexported module binding: chicken.csi#delete-duplicates 
o|hiding unexported module binding: chicken.csi#alist-cons 
o|hiding unexported module binding: chicken.csi#filter 
o|hiding unexported module binding: chicken.csi#filter-map 
o|hiding unexported module binding: chicken.csi#remove 
o|hiding unexported module binding: chicken.csi#unzip1 
o|hiding unexported module binding: chicken.csi#last 
o|hiding unexported module binding: chicken.csi#list-index 
o|hiding unexported module binding: chicken.csi#lset-adjoin/eq? 
o|hiding unexported module binding: chicken.csi#lset-difference/eq? 
o|hiding unexported module binding: chicken.csi#lset-union/eq? 
o|hiding unexported module binding: chicken.csi#lset-intersection/eq? 
o|hiding unexported module binding: chicken.csi#list-tabulate 
o|hiding unexported module binding: chicken.csi#lset<=/eq? 
o|hiding unexported module binding: chicken.csi#lset=/eq? 
o|hiding unexported module binding: chicken.csi#length+ 
o|hiding unexported module binding: chicken.csi#find 
o|hiding unexported module binding: chicken.csi#find-tail 
o|hiding unexported module binding: chicken.csi#iota 
o|hiding unexported module binding: chicken.csi#make-list 
o|hiding unexported module binding: chicken.csi#posq 
o|hiding unexported module binding: chicken.csi#posv 
o|hiding unexported module binding: chicken.csi#constant701 
o|hiding unexported module binding: chicken.csi#selected-frame 
o|hiding unexported module binding: chicken.csi#default-editor 
o|hiding unexported module binding: chicken.csi#print-usage 
o|hiding unexported module binding: chicken.csi#print-banner 
o|hiding unexported module binding: chicken.csi#dirseparator? 
o|hiding unexported module binding: chicken.csi#chop-separator 
o|hiding unexported module binding: chicken.csi#lookup-script-file 
o|hiding unexported module binding: chicken.csi#history-list 
o|hiding unexported module binding: chicken.csi#history-count 
o|hiding unexported module binding: chicken.csi#history-add 
o|hiding unexported module binding: chicken.csi#history-clear 
o|hiding unexported module binding: chicken.csi#history-show 
o|hiding unexported module binding: chicken.csi#history-ref 
o|hiding unexported module binding: chicken.csi#register-repl-history! 
o|hiding unexported module binding: chicken.csi#tty-input? 
o|hiding unexported module binding: chicken.csi#command-table 
o|hiding unexported module binding: chicken.csi#csi-eval 
o|hiding unexported module binding: chicken.csi#parse-option-string 
o|hiding unexported module binding: chicken.csi#report 
o|hiding unexported module binding: chicken.csi#bytevector-data 
o|hiding unexported module binding: chicken.csi#circular-list? 
o|hiding unexported module binding: chicken.csi#improper-pairs? 
o|hiding unexported module binding: chicken.csi#describer-table 
o|hiding unexported module binding: chicken.csi#describe 
o|hiding unexported module binding: chicken.csi#dump 
o|hiding unexported module binding: chicken.csi#hexdump 
o|hiding unexported module binding: chicken.csi#show-frameinfo 
o|hiding unexported module binding: chicken.csi#select-frame 
o|hiding unexported module binding: chicken.csi#copy-from-frame 
o|hiding unexported module binding: chicken.csi#defhandler 
o|hiding unexported module binding: chicken.csi#member* 
o|hiding unexported module binding: chicken.csi#constant1687 
o|hiding unexported module binding: chicken.csi#constant1693 
o|hiding unexported module binding: chicken.csi#canonicalize-args 
o|hiding unexported module binding: chicken.csi#findall 
o|hiding unexported module binding: chicken.csi#constant1758 
o|hiding unexported module binding: chicken.csi#constant1766 
o|hiding unexported module binding: chicken.csi#run 
S|applied compiler syntax:
S|  scheme#for-each		11
S|  chicken.format#printf		4
S|  chicken.base#foldl		3
S|  scheme#map		10
S|  chicken.base#foldr		3
o|eliminated procedure checks: 162 
o|eliminated procedure checks: 1 
o|specializations:
o|  1 (scheme#string-length string)
o|  7 (scheme#string=? string string)
o|  1 (scheme#set-cdr! pair *)
o|  2 (scheme#cddr (pair * pair))
o|  2 (scheme#char=? char char)
o|  3 (scheme#cadr (pair * pair))
o|  1 (scheme#min fixnum fixnum)
o|  1 (scheme#memq * list)
o|  1 (scheme#number->string * *)
o|  2 (chicken.base#add1 *)
o|  1 (scheme#- fixnum fixnum)
o|  1 (scheme#/ * *)
o|  1 (scheme#current-output-port)
o|  2 (scheme#zero? integer)
o|  31 (scheme#eqv? * (or eof null fixnum char boolean symbol keyword))
o|  4 (##sys#check-output-port * * *)
o|  1 (scheme#> fixnum fixnum)
o|  5 (scheme#string-append string string)
o|  1 (scheme#make-string fixnum)
o|  1 (chicken.base#sub1 fixnum)
o|  1 (scheme#eqv? * *)
o|  6 (##sys#check-list (or pair list) *)
o|  41 (scheme#cdr pair)
o|  14 (scheme#car pair)
(o e)|safe calls: 1008 
(o e)|assignments to immediate values: 5 
o|removed side-effect free assignment to unused variable: chicken.csi#partition 
o|removed side-effect free assignment to unused variable: chicken.csi#span 
o|removed side-effect free assignment to unused variable: chicken.csi#drop 
o|removed side-effect free assignment to unused variable: chicken.csi#split-at 
o|removed side-effect free assignment to unused variable: chicken.csi#append-map 
o|inlining procedure: k2953 
o|inlining procedure: k2953 
o|inlining procedure: k2984 
o|inlining procedure: k2984 
o|removed side-effect free assignment to unused variable: chicken.csi#cons* 
o|removed side-effect free assignment to unused variable: chicken.csi#concatenate 
o|removed side-effect free assignment to unused variable: chicken.csi#first 
o|removed side-effect free assignment to unused variable: chicken.csi#second 
o|removed side-effect free assignment to unused variable: chicken.csi#third 
o|removed side-effect free assignment to unused variable: chicken.csi#fourth 
o|removed side-effect free assignment to unused variable: chicken.csi#fifth 
o|removed side-effect free assignment to unused variable: chicken.csi#alist-cons 
o|inlining procedure: k3201 
o|inlining procedure: k3201 
o|inlining procedure: k3193 
o|inlining procedure: k3193 
o|removed side-effect free assignment to unused variable: chicken.csi#filter-map 
o|removed side-effect free assignment to unused variable: chicken.csi#remove 
o|removed side-effect free assignment to unused variable: chicken.csi#unzip1 
o|removed side-effect free assignment to unused variable: chicken.csi#last 
o|removed side-effect free assignment to unused variable: chicken.csi#list-index 
o|removed side-effect free assignment to unused variable: chicken.csi#lset-adjoin/eq? 
o|removed side-effect free assignment to unused variable: chicken.csi#lset-difference/eq? 
o|removed side-effect free assignment to unused variable: chicken.csi#lset-union/eq? 
o|removed side-effect free assignment to unused variable: chicken.csi#lset-intersection/eq? 
o|inlining procedure: k3592 
o|inlining procedure: k3592 
o|removed side-effect free assignment to unused variable: chicken.csi#lset<=/eq? 
o|removed side-effect free assignment to unused variable: chicken.csi#lset=/eq? 
o|removed side-effect free assignment to unused variable: chicken.csi#length+ 
o|removed side-effect free assignment to unused variable: chicken.csi#find 
o|removed side-effect free assignment to unused variable: chicken.csi#find-tail 
o|removed side-effect free assignment to unused variable: chicken.csi#iota 
o|removed side-effect free assignment to unused variable: chicken.csi#make-list 
o|removed side-effect free assignment to unused variable: chicken.csi#posq 
o|removed side-effect free assignment to unused variable: chicken.csi#posv 
o|substituted constant variable: chicken.csi#constant214 
o|inlining procedure: k3913 
o|inlining procedure: k3913 
o|inlining procedure: k3932 
o|inlining procedure: k3932 
o|inlining procedure: k3971 
o|inlining procedure: k3971 
o|substituted constant variable: a3987 
o|inlining procedure: k4025 
o|inlining procedure: k4040 
o|contracted procedure: "(csi.scm:184) _getcwd730" 
o|inlining procedure: k4040 
o|inlining procedure: k4079 
o|inlining procedure: k4079 
o|substituted constant variable: a4110 
o|contracted procedure: "(csi.scm:183) string-index741" 
o|inlining procedure: k4000 
o|inlining procedure: k4000 
o|inlining procedure: k4025 
o|substituted constant variable: a4120 
o|inlining procedure: k4184 
o|propagated global variable: out793796 ##sys#standard-output 
o|substituted constant variable: a4191 
o|substituted constant variable: a4192 
o|inlining procedure: k4184 
o|propagated global variable: out793796 ##sys#standard-output 
o|inlining procedure: k4231 
o|inlining procedure: k4231 
o|inlining procedure: k4307 
o|inlining procedure: k4307 
o|contracted procedure: "(csi.scm:268) chicken.csi#tty-input?" 
o|inlining procedure: k4297 
o|inlining procedure: k4297 
o|inlining procedure: k4332 
o|inlining procedure: k4332 
o|inlining procedure: k4370 
o|inlining procedure: k4370 
o|inlining procedure: k4391 
o|contracted procedure: "(csi.scm:298) g885886" 
o|inlining procedure: k4391 
o|inlining procedure: k4431 
o|inlining procedure: k4431 
o|consed rest parameter at call site: "(csi.scm:317) chicken.csi#describe" 2 
o|inlining procedure: k4464 
o|consed rest parameter at call site: "(csi.scm:321) chicken.csi#dump" 2 
o|inlining procedure: k4464 
o|consed rest parameter at call site: "(csi.scm:327) chicken.csi#dump" 2 
o|inlining procedure: k4500 
o|consed rest parameter at call site: "(csi.scm:328) chicken.csi#report" 1 
o|inlining procedure: k4500 
o|inlining procedure: k4518 
o|inlining procedure: k4536 
o|inlining procedure: k4536 
o|inlining procedure: k4518 
o|inlining procedure: k4592 
o|inlining procedure: k4592 
o|inlining procedure: k4616 
o|inlining procedure: k4616 
o|inlining procedure: k4671 
o|consed rest parameter at call site: "(csi.scm:346) chicken.csi#describe" 2 
o|inlining procedure: k4671 
o|inlining procedure: k4684 
o|inlining procedure: k4684 
o|contracted procedure: "(csi.scm:355) chicken.csi#history-clear" 
o|inlining procedure: k4734 
o|inlining procedure: k4734 
o|inlining procedure: k4758 
o|inlining procedure: k4758 
o|inlining procedure: k4787 
o|inlining procedure: k4787 
o|inlining procedure: k4843 
o|contracted procedure: "(csi.scm:396) g980987" 
o|inlining procedure: k4820 
o|inlining procedure: k4820 
o|inlining procedure: k4843 
o|propagated global variable: g986988 chicken.csi#command-table 
o|substituted constant variable: a4870 
o|substituted constant variable: a4872 
o|substituted constant variable: a4874 
o|substituted constant variable: a4876 
o|substituted constant variable: a4878 
o|substituted constant variable: a4880 
o|substituted constant variable: a4882 
o|substituted constant variable: a4884 
o|substituted constant variable: a4886 
o|substituted constant variable: a4888 
o|substituted constant variable: a4890 
o|substituted constant variable: a4892 
o|substituted constant variable: a4894 
o|substituted constant variable: a4896 
o|substituted constant variable: a4898 
o|substituted constant variable: a4900 
o|substituted constant variable: a4902 
o|substituted constant variable: a4904 
o|substituted constant variable: a4906 
o|merged explicitly consed rest parameter: port1067 
o|substituted constant variable: a5114 
o|substituted constant variable: a5133 
o|inlining procedure: k5140 
o|inlining procedure: k5140 
o|inlining procedure: k5178 
o|inlining procedure: k5178 
o|inlining procedure: k5264 
o|inlining procedure: k5264 
o|inlining procedure: k5297 
o|inlining procedure: k5297 
o|propagated global variable: g10941098 ##sys#features 
o|merged explicitly consed rest parameter: rest11771179 
o|inlining procedure: k5430 
o|inlining procedure: k5430 
o|inlining procedure: k5459 
o|inlining procedure: k5489 
o|inlining procedure: k5489 
o|inlining procedure: k5459 
o|inlining procedure: k5546 
o|inlining procedure: k5546 
o|inlining procedure: k5570 
o|inlining procedure: k5570 
o|inlining procedure: k5588 
o|inlining procedure: k5588 
o|inlining procedure: k5606 
o|inlining procedure: k5606 
o|inlining procedure: k5639 
o|inlining procedure: k5639 
o|inlining procedure: k5654 
o|inlining procedure: k5654 
o|inlining procedure: k5673 
o|inlining procedure: k5673 
o|inlining procedure: k5679 
o|inlining procedure: k5679 
o|inlining procedure: k5697 
o|inlining procedure: k5697 
o|inlining procedure: k5719 
o|inlining procedure: k5749 
o|inlining procedure: k5749 
o|inlining procedure: k5719 
o|inlining procedure: k5824 
o|inlining procedure: k5824 
o|inlining procedure: k5845 
o|inlining procedure: k5845 
o|inlining procedure: k5880 
o|inlining procedure: k5880 
o|inlining procedure: k5902 
o|inlining procedure: k5902 
o|inlining procedure: k5950 
o|inlining procedure: k5971 
o|inlining procedure: k5971 
o|inlining procedure: k5983 
o|inlining procedure: k5983 
o|inlining procedure: k5995 
o|inlining procedure: k5995 
o|inlining procedure: k6007 
o|inlining procedure: k6007 
o|inlining procedure: k6019 
o|inlining procedure: k6019 
o|inlining procedure: k6031 
o|inlining procedure: k6031 
o|substituted constant variable: a6044 
o|substituted constant variable: a6046 
o|substituted constant variable: a6048 
o|substituted constant variable: a6050 
o|substituted constant variable: a6052 
o|substituted constant variable: a6054 
o|substituted constant variable: a6056 
o|substituted constant variable: a6058 
o|substituted constant variable: a6060 
o|substituted constant variable: a6062 
o|substituted constant variable: a6064 
o|substituted constant variable: a6066 
o|inlining procedure: k5950 
o|inlining procedure: k6080 
o|inlining procedure: k6080 
o|inlining procedure: k6105 
o|inlining procedure: k6132 
o|inlining procedure: k6132 
o|inlining procedure: k6170 
o|inlining procedure: k6170 
o|inlining procedure: k6105 
o|inlining procedure: k6229 
o|inlining procedure: k6229 
o|inlining procedure: k6284 
o|inlining procedure: k6284 
o|inlining procedure: k6308 
o|inlining procedure: k6366 
o|inlining procedure: k6366 
o|inlining procedure: k6334 
o|inlining procedure: k6334 
o|inlining procedure: k6308 
o|contracted procedure: "(csi.scm:637) chicken.csi#improper-pairs?" 
o|inlining procedure: k5377 
o|inlining procedure: k5377 
o|contracted procedure: "(csi.scm:637) chicken.csi#circular-list?" 
o|inlining procedure: k5342 
o|inlining procedure: k5362 
o|inlining procedure: k5362 
o|inlining procedure: k5342 
o|merged explicitly consed rest parameter: len-out1367 
o|inlining procedure: k6453 
o|inlining procedure: k6453 
o|inlining procedure: k6459 
o|inlining procedure: k6459 
o|inlining procedure: k6485 
o|inlining procedure: k6485 
o|inlining procedure: k6511 
o|inlining procedure: k6511 
o|inlining procedure: k6564 
o|inlining procedure: k6564 
o|inlining procedure: k6605 
o|inlining procedure: k6605 
o|inlining procedure: k6631 
o|inlining procedure: k6631 
o|inlining procedure: k6665 
o|inlining procedure: k6665 
o|inlining procedure: k6716 
o|inlining procedure: k6734 
o|inlining procedure: k6734 
o|inlining procedure: k6750 
o|inlining procedure: k6750 
o|inlining procedure: k6716 
o|inlining procedure: k6836 
o|propagated global variable: out14791482 ##sys#standard-output 
o|substituted constant variable: a6861 
o|substituted constant variable: a6862 
o|inlining procedure: k6836 
o|inlining procedure: k6910 
o|inlining procedure: k6910 
o|inlining procedure: k6925 
o|propagated global variable: out15191522 ##sys#standard-output 
o|substituted constant variable: a6932 
o|substituted constant variable: a6933 
o|inlining procedure: k6925 
o|propagated global variable: out15191522 ##sys#standard-output 
o|inlining procedure: k6984 
o|inlining procedure: k6984 
o|propagated global variable: out14911494 ##sys#standard-output 
o|substituted constant variable: a7022 
o|substituted constant variable: a7023 
o|propagated global variable: out14911494 ##sys#standard-output 
o|inlining procedure: k7038 
o|inlining procedure: k7038 
o|inlining procedure: k7052 
o|propagated global variable: out14791482 ##sys#standard-output 
o|inlining procedure: k7052 
o|inlining procedure: k7058 
o|inlining procedure: k7058 
o|propagated global variable: tmp14601462 ##sys#repl-recent-call-chain 
o|propagated global variable: tmp14601462 ##sys#repl-recent-call-chain 
o|inlining procedure: k7076 
o|inlining procedure: k7076 
o|inlining procedure: k7110 
o|inlining procedure: k7110 
o|inlining procedure: k7167 
o|inlining procedure: k7198 
o|inlining procedure: k7198 
o|inlining procedure: k7238 
o|inlining procedure: k7238 
o|inlining procedure: k7317 
o|inlining procedure: k7317 
o|inlining procedure: k7167 
o|inlining procedure: k7360 
o|inlining procedure: k7360 
o|propagated global variable: tmp15701572 ##sys#repl-recent-call-chain 
o|propagated global variable: tmp15701572 ##sys#repl-recent-call-chain 
o|inlining procedure: k7381 
o|inlining procedure: k7393 
o|inlining procedure: k7393 
o|inlining procedure: k7381 
o|inlining procedure: k7436 
o|inlining procedure: k7436 
o|inlining procedure: k7451 
o|inlining procedure: k7451 
o|inlining procedure: k7482 
o|inlining procedure: k7482 
o|inlining procedure: k7526 
o|contracted procedure: "(csi.scm:956) g17161725" 
o|inlining procedure: k7526 
o|contracted procedure: "(csi.scm:955) chicken.csi#findall" 
o|inlining procedure: k7618 
o|inlining procedure: k7618 
o|inlining procedure: k7577 
o|substituted constant variable: chicken.csi#constant1693 
o|inlining procedure: k7577 
o|contracted procedure: "(csi.scm:1138) chicken.csi#run" 
o|inlining procedure: k7697 
o|inlining procedure: k7697 
o|inlining procedure: k7692 
o|inlining procedure: k7692 
o|merged explicitly consed rest parameter: rest19041906 
o|inlining procedure: k7811 
o|inlining procedure: k7811 
o|inlining procedure: k7930 
o|contracted procedure: "(csi.scm:1096) chicken.csi#register-repl-history!" 
o|inlining procedure: k4255 
o|inlining procedure: k4255 
o|inlining procedure: k7930 
o|inlining procedure: k7964 
o|inlining procedure: k7964 
o|substituted constant variable: a8005 
o|inlining procedure: k8002 
o|consed rest parameter at call site: "(csi.scm:1107) evalstring1843" 2 
o|inlining procedure: k8002 
o|substituted constant variable: a8024 
o|consed rest parameter at call site: "(csi.scm:1110) evalstring1843" 2 
o|substituted constant variable: a8049 
o|inlining procedure: k8046 
o|consed rest parameter at call site: "(csi.scm:1113) evalstring1843" 2 
o|inlining procedure: k8046 
o|inlining procedure: k8109 
o|inlining procedure: k8109 
o|inlining procedure: k8122 
o|inlining procedure: k8154 
o|inlining procedure: k8154 
o|substituted constant variable: a8176 
o|propagated global variable: g20732074 chicken.pretty-print#pretty-print 
o|inlining procedure: k8122 
o|substituted constant variable: a8191 
o|substituted constant variable: a8193 
o|substituted constant variable: a8195 
o|substituted constant variable: a8197 
o|substituted constant variable: chicken.csi#constant1766 
o|substituted constant variable: chicken.csi#constant1758 
o|contracted procedure: "(csi.scm:1090) loadinit1842" 
o|inlining procedure: k7742 
o|inlining procedure: k7742 
o|inlining procedure: k7766 
o|substituted constant variable: a7779 
o|inlining procedure: k7766 
o|inlining procedure: k8209 
o|inlining procedure: k8209 
o|inlining procedure: k8253 
o|inlining procedure: k8253 
o|inlining procedure: k8265 
o|inlining procedure: k8265 
o|inlining procedure: k8274 
o|inlining procedure: k8274 
o|inlining procedure: k8292 
o|inlining procedure: k8292 
o|contracted procedure: "(csi.scm:1053) chicken.csi#delete-duplicates" 
o|inlining procedure: k3145 
o|inlining procedure: k3145 
o|contracted procedure: "(mini-srfi-1.scm:123) chicken.csi#delete" 
o|inlining procedure: k3070 
o|inlining procedure: k3070 
o|inlining procedure: k8361 
o|inlining procedure: k8361 
o|inlining procedure: k8395 
o|inlining procedure: k8395 
o|inlining procedure: k8429 
o|inlining procedure: k8429 
o|inlining procedure: k8452 
o|inlining procedure: k8452 
o|inlining procedure: k8475 
o|inlining procedure: k8475 
o|inlining procedure: k8513 
o|inlining procedure: k8513 
o|contracted procedure: "(csi.scm:1032) chicken.csi#print-usage" 
o|inlining procedure: k8558 
o|inlining procedure: k8558 
o|inlining procedure: k8593 
o|inlining procedure: k8593 
o|inlining procedure: k8596 
o|inlining procedure: k8596 
o|inlining procedure: k8602 
o|inlining procedure: k8602 
o|inlining procedure: k8620 
o|inlining procedure: k8620 
o|substituted constant variable: a8640 
o|inlining procedure: k8660 
o|inlining procedure: k8660 
o|substituted constant variable: a8663 
o|inlining procedure: k8694 
o|inlining procedure: k8694 
o|contracted procedure: "(csi.scm:978) chicken.csi#parse-option-string" 
o|inlining procedure: k4979 
o|contracted procedure: "(csi.scm:436) g10251034" 
o|inlining procedure: k4949 
o|inlining procedure: k4949 
o|inlining procedure: k4979 
o|inlining procedure: k5047 
o|inlining procedure: k5047 
o|inlining procedure: k8736 
o|inlining procedure: k8736 
o|inlining procedure: k8782 
o|inlining procedure: k8782 
o|substituted constant variable: a8792 
o|inlining procedure: k8796 
o|inlining procedure: k8796 
o|replaced variables: 1399 
o|removed binding forms: 408 
o|removed side-effect free assignment to unused variable: chicken.csi#constant214 
o|removed side-effect free assignment to unused variable: chicken.csi#every 
o|removed side-effect free assignment to unused variable: chicken.csi#any 
o|removed side-effect free assignment to unused variable: chicken.csi#filter 
o|removed side-effect free assignment to unused variable: chicken.csi#list-tabulate 
o|substituted constant variable: int732737 
o|substituted constant variable: r40808843 
o|substituted constant variable: r40018844 
o|substituted constant variable: r40268846 
o|contracted procedure: "(csi.scm:358) chicken.csi#history-show" 
o|propagated global variable: out793796 ##sys#standard-output 
o|contracted procedure: "(csi.scm:364) chicken.csi#select-frame" 
o|contracted procedure: "(csi.scm:367) chicken.csi#copy-from-frame" 
o|converted assignments to bindings: (fail1585) 
o|converted assignments to bindings: (compare1580) 
o|substituted constant variable: r73619048 
o|converted assignments to bindings: (shorten1076) 
o|substituted constant variable: r54908910 
o|substituted constant variable: r54908910 
o|substituted constant variable: r54908912 
o|substituted constant variable: r54908912 
o|inlining procedure: k5618 
o|inlining procedure: k5546 
o|substituted constant variable: r56748935 
o|substituted constant variable: r56748935 
o|substituted constant variable: r56748937 
o|substituted constant variable: r56748937 
o|inlining procedure: k5546 
o|removed call to pure procedure with unused result: "(csi.scm:651) ##sys#size" 
o|substituted constant variable: r59728956 
o|substituted constant variable: r59728956 
o|inlining procedure: k5971 
o|inlining procedure: k5971 
o|substituted constant variable: r59848960 
o|inlining procedure: k5971 
o|inlining procedure: k5971 
o|substituted constant variable: r59968962 
o|inlining procedure: k5971 
o|inlining procedure: k5971 
o|substituted constant variable: r60088964 
o|inlining procedure: k5971 
o|inlining procedure: k5971 
o|substituted constant variable: r60208966 
o|inlining procedure: k5971 
o|inlining procedure: k5971 
o|substituted constant variable: r60328968 
o|inlining procedure: k5971 
o|inlining procedure: k5971 
o|substituted constant variable: r53788989 
o|substituted constant variable: r53438994 
o|converted assignments to bindings: (descseq1185) 
o|converted assignments to bindings: (bestlen1386) 
o|converted assignments to bindings: (justify1409) 
o|propagated global variable: out14791482 ##sys#standard-output 
o|propagated global variable: out15191522 ##sys#standard-output 
o|propagated global variable: out14911494 ##sys#standard-output 
o|substituted constant variable: r70399025 
o|substituted constant variable: r70399025 
o|substituted constant variable: r70399027 
o|substituted constant variable: r70399027 
o|substituted constant variable: r70539029 
o|substituted constant variable: r70539029 
o|substituted constant variable: r70539031 
o|substituted constant variable: r70539031 
o|substituted constant variable: r70599034 
o|converted assignments to bindings: (prin11457) 
o|substituted constant variable: r73829052 
o|removed side-effect free assignment to unused variable: chicken.csi#constant1693 
o|substituted constant variable: r74379053 
o|substituted constant variable: r75789064 
o|removed side-effect free assignment to unused variable: chicken.csi#constant1758 
o|removed side-effect free assignment to unused variable: chicken.csi#constant1766 
o|substituted constant variable: r76939068 
o|substituted constant variable: r81109083 
o|substituted constant variable: r81109083 
o|substituted constant variable: r81239089 
o|substituted constant variable: r81239089 
o|substituted constant variable: r77679094 
o|substituted constant variable: r85949145 
o|substituted constant variable: r85949145 
o|substituted constant variable: r86959156 
o|substituted constant variable: r87839167 
o|substituted constant variable: r87839167 
o|converted assignments to bindings: (addext740) 
o|simplifications: ((let . 8)) 
o|replaced variables: 81 
o|removed binding forms: 1168 
o|inlining procedure: k3910 
o|inlining procedure: k4310 
o|inlining procedure: k4715 
o|inlining procedure: k4715 
o|inlining procedure: k7219 
o|contracted procedure: k5908 
o|inlining procedure: k6235 
o|inlining procedure: k7939 
o|inlining procedure: k7954 
o|inlining procedure: k7954 
o|inlining procedure: k7954 
o|inlining procedure: k7954 
o|inlining procedure: k7954 
o|inlining procedure: k7954 
o|inlining procedure: k7954 
o|inlining procedure: k8166 
o|inlining procedure: k7754 
o|inlining procedure: "(csi.scm:1087) chicken.csi#print-banner" 
o|inlining procedure: k8498 
o|inlining procedure: "(csi.scm:1035) chicken.csi#print-banner" 
o|inlining procedure: k8651 
o|inlining procedure: k8651 
o|inlining procedure: k8651 
o|inlining procedure: k5000 
o|replaced variables: 13 
o|removed binding forms: 146 
o|removed side-effect free assignment to unused variable: chicken.csi#print-banner 
o|substituted constant variable: r39119376 
o|substituted constant variable: r39119376 
o|inlining procedure: k3935 
o|substituted constant variable: r59729237 
o|substituted constant variable: r59729239 
o|substituted constant variable: r59729241 
o|substituted constant variable: r59729243 
o|substituted constant variable: r59729245 
o|substituted constant variable: r59729247 
o|substituted constant variable: r59729249 
o|substituted constant variable: r59729251 
o|substituted constant variable: r59729253 
o|substituted constant variable: r59729255 
o|substituted constant variable: r59729257 
o|substituted constant variable: r77559514 
o|replaced variables: 9 
o|removed binding forms: 23 
o|removed conditional forms: 2 
o|substituted constant variable: r39369559 
o|removed binding forms: 22 
o|removed conditional forms: 1 
o|simplifications: ((let . 1)) 
o|removed binding forms: 1 
o|simplifications: ((let . 32) (if . 46) (##core#call . 555)) 
o|  call simplifications:
o|    scheme#make-vector
o|    scheme#set-car!
o|    ##sys#cons	2
o|    scheme#char-whitespace?
o|    ##sys#list	3
o|    chicken.base#void
o|    scheme#member	9
o|    scheme#string->list
o|    scheme#string
o|    scheme#equal?	4
o|    chicken.fixnum#fxmod
o|    scheme#write-char	7
o|    ##sys#immediate?	2
o|    ##sys#permanent?
o|    scheme#char?
o|    chicken.base#fixnum?	2
o|    chicken.base#bignum?
o|    chicken.base#flonum?
o|    chicken.base#ratnum?
o|    chicken.base#cplxnum?
o|    scheme#vector?
o|    scheme#list?
o|    scheme#procedure?
o|    ##sys#pointer?	2
o|    ##sys#generic-structure?	2
o|    scheme#cdr	19
o|    scheme#caar
o|    scheme#cdar
o|    chicken.fixnum#fx=	4
o|    chicken.base#atom?
o|    scheme#memq	4
o|    scheme#cddr	3
o|    scheme#exact?
o|    scheme#integer->char	2
o|    scheme#char->integer
o|    ##sys#setslot	9
o|    scheme#<=
o|    scheme#+
o|    scheme#*
o|    scheme#eof-object?	4
o|    scheme#caddr
o|    scheme#symbol?	2
o|    scheme#string?	4
o|    ##sys#structure?	4
o|    ##sys#check-list	17
o|    scheme#string-length	4
o|    chicken.fixnum#fxmin
o|    scheme#string=?	7
o|    scheme#number?	2
o|    chicken.fixnum#fx<	4
o|    scheme#length	4
o|    chicken.fixnum#fx-	11
o|    scheme#list-ref	2
o|    scheme#>=	2
o|    scheme#eq?	44
o|    scheme#not	11
o|    scheme#apply	5
o|    ##sys#call-with-values	6
o|    ##sys#apply	2
o|    scheme#cadr	13
o|    scheme#car	21
o|    ##sys#check-symbol	2
o|    ##sys#check-string
o|    scheme#assq	4
o|    scheme#cons	27
o|    scheme#list	11
o|    scheme#set-cdr!	2
o|    chicken.fixnum#fx<=
o|    scheme#vector-ref	8
o|    scheme#null?	24
o|    ##sys#void	20
o|    chicken.fixnum#fx*
o|    scheme#vector-set!
o|    chicken.fixnum#fx>=	15
o|    chicken.fixnum#fx+	20
o|    scheme#pair?	31
o|    ##sys#slot	86
o|    ##sys#foreign-block-argument
o|    ##sys#foreign-fixnum-argument
o|    ##sys#size	13
o|    scheme#string-ref	4
o|    chicken.fixnum#fx>	6
o|    scheme#char=?	7
o|contracted procedure: k3853 
o|contracted procedure: k3910 
o|contracted procedure: k3926 
o|contracted procedure: k3929 
o|contracted procedure: k3941 
o|contracted procedure: k4117 
o|contracted procedure: k4028 
o|contracted procedure: k3958 
o|contracted procedure: k3962 
o|contracted procedure: k4082 
o|contracted procedure: k4098 
o|contracted procedure: k4107 
o|contracted procedure: k3991 
o|contracted procedure: k4003 
o|contracted procedure: k4016 
o|contracted procedure: k4113 
o|contracted procedure: k4122 
o|contracted procedure: k4156 
o|contracted procedure: k4129 
o|contracted procedure: k4132 
o|contracted procedure: k4138 
o|contracted procedure: k4142 
o|contracted procedure: k4145 
o|contracted procedure: k4153 
o|contracted procedure: k4243 
o|contracted procedure: k4234 
o|contracted procedure: k4361 
o|contracted procedure: k4320 
o|contracted procedure: k4323 
o|contracted procedure: k4326 
o|contracted procedure: k4329 
o|contracted procedure: k4344 
o|contracted procedure: k4355 
o|contracted procedure: k4351 
o|contracted procedure: k4373 
o|contracted procedure: k4385 
o|contracted procedure: k4388 
o|contracted procedure: k4396 
o|contracted procedure: k4411 
o|contracted procedure: k4434 
o|contracted procedure: k4452 
o|contracted procedure: k4467 
o|contracted procedure: k4482 
o|contracted procedure: k4503 
o|contracted procedure: k4512 
o|contracted procedure: k4521 
o|contracted procedure: k4539 
o|contracted procedure: k4549 
o|contracted procedure: k4553 
o|contracted procedure: k4563 
o|contracted procedure: k4595 
o|contracted procedure: k4605 
o|contracted procedure: k4609 
o|contracted procedure: k4619 
o|contracted procedure: k4668 
o|contracted procedure: k4681 
o|contracted procedure: k4687 
o|contracted procedure: k4703 
o|contracted procedure: k4696 
o|contracted procedure: k4725 
o|contracted procedure: k4172 
o|propagated global variable: r4173 ##sys#undefined-value 
o|contracted procedure: k4737 
o|contracted procedure: k4187 
o|contracted procedure: k4212 
o|contracted procedure: k4222 
o|contracted procedure: k4749 
o|contracted procedure: k4761 
o|contracted procedure: k7127 
o|contracted procedure: k7079 
o|contracted procedure: k7100 
o|contracted procedure: k7104 
o|contracted procedure: k7096 
o|contracted procedure: k7089 
o|contracted procedure: k7107 
o|contracted procedure: k7113 
o|contracted procedure: k7123 
o|contracted procedure: k4777 
o|contracted procedure: k7133 
o|contracted procedure: k7136 
o|contracted procedure: k7145 
o|contracted procedure: k7160 
o|contracted procedure: k7164 
o|contracted procedure: k7156 
o|contracted procedure: k7189 
o|propagated global variable: r7190 ##sys#undefined-value 
o|contracted procedure: k7201 
o|contracted procedure: k7207 
o|contracted procedure: k7210 
o|contracted procedure: k7213 
o|contracted procedure: k7216 
o|contracted procedure: k7227 
o|contracted procedure: k7241 
o|contracted procedure: k7251 
o|contracted procedure: k7275 
o|contracted procedure: k7283 
o|contracted procedure: k7279 
o|contracted procedure: k7289 
o|contracted procedure: k7292 
o|contracted procedure: k7295 
o|contracted procedure: k7298 
o|contracted procedure: k7301 
o|contracted procedure: k7345 
o|contracted procedure: k7320 
o|contracted procedure: k7330 
o|contracted procedure: k7334 
o|contracted procedure: k7338 
o|contracted procedure: k7342 
o|contracted procedure: k7354 
o|contracted procedure: k7363 
o|contracted procedure: k4790 
o|contracted procedure: k4803 
o|contracted procedure: k4809 
o|contracted procedure: k4831 
o|contracted procedure: k4846 
o|contracted procedure: k4856 
o|contracted procedure: k4860 
o|contracted procedure: k4817 
o|propagated global variable: g986988 chicken.csi#command-table 
o|contracted procedure: k4925 
o|contracted procedure: k4932 
o|contracted procedure: k5328 
o|contracted procedure: k5089 
o|contracted procedure: k5116 
o|contracted procedure: k5130 
o|contracted procedure: k5143 
o|contracted procedure: k5157 
o|contracted procedure: k5163 
o|contracted procedure: k5166 
o|contracted procedure: k5222 
o|contracted procedure: k5226 
o|contracted procedure: k5230 
o|contracted procedure: k5234 
o|contracted procedure: k5238 
o|contracted procedure: k5242 
o|contracted procedure: k5250 
o|contracted procedure: k5254 
o|contracted procedure: k5267 
o|contracted procedure: k5277 
o|contracted procedure: k5281 
o|contracted procedure: k5285 
o|contracted procedure: k5288 
o|contracted procedure: k5300 
o|contracted procedure: k5303 
o|contracted procedure: k5306 
o|contracted procedure: k5314 
o|contracted procedure: k5322 
o|propagated global variable: g10941098 ##sys#features 
o|contracted procedure: k6430 
o|contracted procedure: k5409 
o|contracted procedure: k5415 
o|contracted procedure: k5427 
o|contracted procedure: k5436 
o|contracted procedure: k5443 
o|contracted procedure: k5529 
o|contracted procedure: k5453 
o|contracted procedure: k5462 
o|contracted procedure: k5475 
o|contracted procedure: k5478 
o|contracted procedure: k5485 
o|contracted procedure: k5492 
o|contracted procedure: k5507 
o|contracted procedure: k5514 
o|contracted procedure: k5518 
o|contracted procedure: k5533 
o|contracted procedure: k5552 
o|contracted procedure: k5555 
o|contracted procedure: k5564 
o|contracted procedure: k5573 
o|contracted procedure: k5582 
o|contracted procedure: k5591 
o|contracted procedure: k6417 
o|contracted procedure: k5600 
o|propagated global variable: r6418 ##sys#undefined-value 
o|contracted procedure: k5609 
o|contracted procedure: k5615 
o|contracted procedure: k5624 
o|contracted procedure: k5633 
o|contracted procedure: k5648 
o|contracted procedure: k5657 
o|contracted procedure: k5666 
o|contracted procedure: k5676 
o|contracted procedure: k5682 
o|contracted procedure: k5691 
o|contracted procedure: k5700 
o|contracted procedure: k5722 
o|contracted procedure: k5731 
o|contracted procedure: k5737 
o|contracted procedure: k5752 
o|contracted procedure: k5768 
o|contracted procedure: k5778 
o|contracted procedure: k5782 
o|contracted procedure: k5786 
o|contracted procedure: k5818 
o|contracted procedure: k5827 
o|contracted procedure: k5830 
o|contracted procedure: k5874 
o|contracted procedure: k5839 
o|contracted procedure: k5868 
o|contracted procedure: k5848 
o|contracted procedure: k5860 
o|contracted procedure: k5883 
o|contracted procedure: k5892 
o|contracted procedure: k5905 
o|contracted procedure: k5947 
o|contracted procedure: k5932 
o|contracted procedure: k5936 
o|contracted procedure: k5940 
o|contracted procedure: k5964 
o|contracted procedure: k5968 
o|contracted procedure: k5974 
o|contracted procedure: k5980 
o|contracted procedure: k5986 
o|contracted procedure: k5992 
o|contracted procedure: k5998 
o|contracted procedure: k6004 
o|contracted procedure: k6010 
o|contracted procedure: k6016 
o|contracted procedure: k6022 
o|contracted procedure: k6028 
o|contracted procedure: k6034 
o|contracted procedure: k6040 
o|contracted procedure: k6070 
o|contracted procedure: k6086 
o|contracted procedure: k6108 
o|contracted procedure: k6111 
o|contracted procedure: k6120 
o|contracted procedure: k6123 
o|contracted procedure: k6135 
o|contracted procedure: k6144 
o|contracted procedure: k6148 
o|contracted procedure: k6151 
o|contracted procedure: k6154 
o|contracted procedure: k6164 
o|contracted procedure: k6173 
o|contracted procedure: k6183 
o|contracted procedure: k6187 
o|contracted procedure: k6191 
o|contracted procedure: k6202 
o|contracted procedure: k6195 
o|contracted procedure: k6199 
o|contracted procedure: k6208 
o|contracted procedure: k6223 
o|contracted procedure: k6232 
o|contracted procedure: k6242 
o|contracted procedure: k6269 
o|contracted procedure: k6245 
o|contracted procedure: k6261 
o|contracted procedure: k6265 
o|contracted procedure: k62429427 
o|contracted procedure: k6272 
o|contracted procedure: k6275 
o|contracted procedure: k6287 
o|contracted procedure: k6297 
o|contracted procedure: k6301 
o|contracted procedure: k6305 
o|contracted procedure: k6311 
o|contracted procedure: k6314 
o|contracted procedure: k6331 
o|contracted procedure: k6347 
o|contracted procedure: k6350 
o|contracted procedure: k6353 
o|contracted procedure: k6360 
o|contracted procedure: k6369 
o|contracted procedure: k6372 
o|contracted procedure: k6375 
o|contracted procedure: k6383 
o|contracted procedure: k6391 
o|contracted procedure: k6407 
o|contracted procedure: k5399 
o|contracted procedure: k5380 
o|contracted procedure: k5395 
o|contracted procedure: k5383 
o|contracted procedure: k5345 
o|contracted procedure: k5352 
o|contracted procedure: k5356 
o|contracted procedure: k5359 
o|contracted procedure: k6420 
o|contracted procedure: k6439 
o|contracted procedure: k6462 
o|contracted procedure: k6482 
o|contracted procedure: k6488 
o|contracted procedure: k6499 
o|contracted procedure: k6551 
o|contracted procedure: k6544 
o|contracted procedure: k6505 
o|contracted procedure: k6517 
o|contracted procedure: k6528 
o|contracted procedure: k6534 
o|contracted procedure: k6541 
o|contracted procedure: k6567 
o|contracted procedure: k6573 
o|contracted procedure: k6580 
o|contracted procedure: k6586 
o|contracted procedure: k6602 
o|contracted procedure: k6608 
o|contracted procedure: k6620 
o|contracted procedure: k6634 
o|contracted procedure: k6659 
o|contracted procedure: k6668 
o|contracted procedure: k6671 
o|contracted procedure: k6684 
o|contracted procedure: k6688 
o|contracted procedure: k6704 
o|contracted procedure: k6691 
o|contracted procedure: k6698 
o|contracted procedure: k6719 
o|contracted procedure: k6722 
o|contracted procedure: k6728 
o|contracted procedure: k6731 
o|contracted procedure: k6737 
o|contracted procedure: k6744 
o|contracted procedure: k6753 
o|contracted procedure: k6763 
o|contracted procedure: k6776 
o|contracted procedure: k6780 
o|contracted procedure: k6813 
o|contracted procedure: k6816 
o|contracted procedure: k6820 
o|contracted procedure: k6830 
o|contracted procedure: k6839 
o|contracted procedure: k6842 
o|contracted procedure: k6845 
o|contracted procedure: k6848 
o|contracted procedure: k6851 
o|contracted procedure: k6854 
o|contracted procedure: k6857 
o|contracted procedure: k6902 
o|contracted procedure: k6905 
o|contracted procedure: k6913 
o|contracted procedure: k6928 
o|contracted procedure: k6953 
o|contracted procedure: k6959 
o|contracted procedure: k6963 
o|contracted procedure: k6966 
o|contracted procedure: k6969 
o|contracted procedure: k6972 
o|contracted procedure: k6975 
o|contracted procedure: k7012 
o|contracted procedure: k6987 
o|contracted procedure: k6997 
o|contracted procedure: k7001 
o|contracted procedure: k7005 
o|contracted procedure: k7009 
o|contracted procedure: k7034 
o|contracted procedure: k7048 
o|contracted procedure: k7061 
o|contracted procedure: k7068 
o|contracted procedure: k7369 
o|contracted procedure: k7384 
o|contracted procedure: k7396 
o|contracted procedure: k7403 
o|contracted procedure: k7418 
o|contracted procedure: k7422 
o|contracted procedure: k7409 
o|contracted procedure: k7439 
o|contracted procedure: k7442 
o|contracted procedure: k7448 
o|contracted procedure: k7603 
o|contracted procedure: k7595 
o|contracted procedure: k7454 
o|contracted procedure: k7460 
o|contracted procedure: k7485 
o|contracted procedure: k7506 
o|contracted procedure: k7529 
o|contracted procedure: k7551 
o|contracted procedure: k7547 
o|contracted procedure: k7532 
o|contracted procedure: k7535 
o|contracted procedure: k7543 
o|contracted procedure: k7615 
o|contracted procedure: k7633 
o|contracted procedure: k7624 
o|contracted procedure: k7592 
o|contracted procedure: k7574 
o|contracted procedure: k7580 
o|contracted procedure: k7587 
o|contracted procedure: k7665 
o|contracted procedure: k7668 
o|contracted procedure: k7674 
o|contracted procedure: k7689 
o|contracted procedure: k7721 
o|contracted procedure: k7700 
o|contracted procedure: k7710 
o|contracted procedure: k7837 
o|contracted procedure: k7795 
o|contracted procedure: k7814 
o|contracted procedure: k7869 
o|contracted procedure: k7878 
o|contracted procedure: k7887 
o|contracted procedure: k7933 
o|contracted procedure: k4258 
o|contracted procedure: k4261 
o|contracted procedure: k4272 
o|contracted procedure: k7948 
o|contracted procedure: k7951 
o|contracted procedure: k7961 
o|contracted procedure: k79619481 
o|contracted procedure: k7967 
o|contracted procedure: k7971 
o|contracted procedure: k79619485 
o|contracted procedure: k7977 
o|contracted procedure: k7980 
o|contracted procedure: k7987 
o|contracted procedure: k79619489 
o|contracted procedure: k7991 
o|contracted procedure: k7999 
o|contracted procedure: k8007 
o|contracted procedure: k8014 
o|contracted procedure: k79619493 
o|contracted procedure: k8018 
o|contracted procedure: k8026 
o|contracted procedure: k8033 
o|contracted procedure: k79619497 
o|contracted procedure: k8037 
o|contracted procedure: k8051 
o|contracted procedure: k8058 
o|contracted procedure: k79619501 
o|contracted procedure: k8062 
o|contracted procedure: k8071 
o|contracted procedure: k8080 
o|contracted procedure: k8115 
o|contracted procedure: k8102 
o|contracted procedure: k8112 
o|contracted procedure: k79619505 
o|contracted procedure: k8125 
o|contracted procedure: k8133 
o|contracted procedure: k8157 
o|contracted procedure: k8160 
o|contracted procedure: k8173 
o|contracted procedure: k81739509 
o|contracted procedure: k8203 
o|contracted procedure: k7782 
o|contracted procedure: k7769 
o|contracted procedure: k7789 
o|contracted procedure: k8222 
o|contracted procedure: k8226 
o|contracted procedure: k8325 
o|contracted procedure: k8321 
o|contracted procedure: k8277 
o|contracted procedure: k8317 
o|contracted procedure: k8286 
o|contracted procedure: k8295 
o|contracted procedure: k8304 
o|contracted procedure: k3148 
o|contracted procedure: k3151 
o|contracted procedure: k3161 
o|contracted procedure: k3073 
o|contracted procedure: k3099 
o|contracted procedure: k3079 
o|contracted procedure: k8333 
o|contracted procedure: k8339 
o|contracted procedure: k8346 
o|contracted procedure: k8352 
o|contracted procedure: k8364 
o|contracted procedure: k8367 
o|contracted procedure: k8370 
o|contracted procedure: k8378 
o|contracted procedure: k8386 
o|contracted procedure: k8398 
o|contracted procedure: k8401 
o|contracted procedure: k8404 
o|contracted procedure: k8412 
o|contracted procedure: k8420 
o|contracted procedure: k8432 
o|contracted procedure: k8442 
o|contracted procedure: k8446 
o|contracted procedure: k8455 
o|contracted procedure: k8465 
o|contracted procedure: k8469 
o|contracted procedure: k8478 
o|contracted procedure: k8488 
o|contracted procedure: k8492 
o|contracted procedure: k8520 
o|contracted procedure: k8533 
o|contracted procedure: k8537 
o|contracted procedure: k3894 
o|contracted procedure: k3890 
o|contracted procedure: k3886 
o|contracted procedure: k8561 
o|contracted procedure: k8564 
o|contracted procedure: k8567 
o|contracted procedure: k8575 
o|contracted procedure: k8583 
o|contracted procedure: k8617 
o|contracted procedure: k8635 
o|contracted procedure: k8645 
o|contracted procedure: k8684 
o|contracted procedure: k8680 
o|contracted procedure: k8648 
o|contracted procedure: k8676 
o|contracted procedure: k8672 
o|contracted procedure: k8657 
o|contracted procedure: k8665 
o|contracted procedure: k8691 
o|contracted procedure: k8712 
o|contracted procedure: k4944 
o|contracted procedure: k4970 
o|contracted procedure: k4982 
o|contracted procedure: k4988 
o|contracted procedure: k4996 
o|contracted procedure: k5004 
o|contracted procedure: k4952 
o|contracted procedure: k5050 
o|contracted procedure: k5064 
o|contracted procedure: k8739 
o|contracted procedure: k8812 
o|contracted procedure: k8816 
o|contracted procedure: k8820 
o|simplifications: ((if . 8) (let . 225)) 
o|removed binding forms: 504 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest840843 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest840843 0 
o|contracted procedure: k4382 
o|inlining procedure: k7244 
o|contracted procedure: k6514 
o|inlining procedure: k6893 
o|contracted procedure: k7041 
(o x)|known list op on rest arg sublist: ##core#rest-null? rs2089 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rs2089 0 
o|substituted constant variable: r8813 
o|substituted constant variable: r8817 
o|substituted constant variable: r8821 
o|replaced variables: 12 
o|removed binding forms: 3 
o|removed binding forms: 7 
o|direct leaf routine/allocation: g855856 6 
o|direct leaf routine/allocation: lp1160 0 
o|direct leaf routine/allocation: lp1146 0 
o|direct leaf routine/allocation: loop1746 0 
o|contracted procedure: "(csi.scm:275) k4332" 
o|contracted procedure: k5805 
o|converted assignments to bindings: (lp1160) 
o|converted assignments to bindings: (lp1146) 
o|contracted procedure: k7499 
o|converted assignments to bindings: (loop1746) 
o|simplifications: ((let . 3)) 
o|removed binding forms: 3 
o|customizable procedures: (k3866 g10101011 doloop10461047 k4985 map-loop10191052 chicken.csi#canonicalize-args chicken.csi#lookup-script-file k7653 k7659 map-loop18141834 k7854 k7860 for-each-loop18461927 for-each-loop18561934 for-each-loop18661941 map-loop19481965 collect-options1841 map-loop19741991 loop375 loop395 chicken.csi#member* k7921 doloop20762077 evalstring1843 doloop18742022 chicken.csi#history-ref doloop19141915 g18841885 loop1876 k7479 map-loop17101735 loop1697 find1676 loop1673 k6823 g15021510 for-each-loop15011531 prin11457 doloop15151516 doloop14641470 justify1409 doloop14181420 doloop14271428 doloop14191435 doloop14081416 def-len13721394 def-out13731392 body13701379 bestlen1386 k5808 g13281329 map-loop13331350 g13171318 g12881295 for-each-loop12871304 loop1298 g12661273 for-each-loop12651276 doloop12601261 chicken.csi#hexdump loop-print1235 doloop12221223 loop21205 loop11195 map-loop10821099 g11091116 for-each-loop11081130 shorten1076 k5137 for-each-loop979991 k7139 g15991607 for-each-loop15981622 compare1580 doloop16121613 doloop15841589 fail1585 k7082 chicken.csi#show-frameinfo doloop790791 chicken.csi#history-add g933940 for-each-loop932952 for-each-loop913923 chicken.csi#report chicken.csi#dump chicken.csi#describe k4135 loop748 loop767 addext740) 
o|calls to known targets: 252 
o|unused rest argument: rest840843 f_4318 
o|identified direct recursive calls: f_7196 1 
o|identified direct recursive calls: f_5340 1 
o|identified direct recursive calls: f_6227 1 
o|identified direct recursive calls: f_5375 1 
o|identified direct recursive calls: f_7391 1 
o|identified direct recursive calls: f_7613 1 
o|identified direct recursive calls: f_7524 1 
o|identified direct recursive calls: f_7434 1 
o|unused rest argument: _1912 f_7840 
o|unused rest argument: rs2089 f_8100 
o|identified direct recursive calls: f_7928 2 
o|identified direct recursive calls: f_3068 2 
o|fast box initializations: 49 
o|fast global references: 84 
o|fast global assignments: 27 
o|dropping unused closure argument: f_3969 
o|dropping unused closure argument: f_4226 
o|dropping unused closure argument: f_5105 
o|dropping unused closure argument: f_5340 
o|dropping unused closure argument: f_5375 
o|dropping unused closure argument: f_6446 
o|dropping unused closure argument: f_6594 
o|dropping unused closure argument: f_6597 
o|dropping unused closure argument: f_6799 
o|dropping unused closure argument: f_6802 
o|dropping unused closure argument: f_7373 
o|dropping unused closure argument: f_7428 
o|dropping unused closure argument: f_7613 
o|dropping unused closure argument: f_7793 
*/
/* end of file */
