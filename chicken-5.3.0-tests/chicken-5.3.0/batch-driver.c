/* Generated from batch-driver.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.3.0rc4 ((HEAD detached at 5.3.0rc4)) (rev b6cbb1ba)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: batch-driver.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -no-lambda-info -no-trace -emit-import-library chicken.compiler.batch-driver -output-file batch-driver.c
   unit: batch-driver
   uses: user-pass c-backend c-platform lfa2 scrutinizer optimizer compiler compiler-syntax support data-structures pathname eval internal extras library
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_user_2dpass_toplevel)
C_externimport void C_ccall C_user_2dpass_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_c_2dbackend_toplevel)
C_externimport void C_ccall C_c_2dbackend_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_c_2dplatform_toplevel)
C_externimport void C_ccall C_c_2dplatform_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_lfa2_toplevel)
C_externimport void C_ccall C_lfa2_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_scrutinizer_toplevel)
C_externimport void C_ccall C_scrutinizer_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_optimizer_toplevel)
C_externimport void C_ccall C_optimizer_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_compiler_toplevel)
C_externimport void C_ccall C_compiler_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_compiler_2dsyntax_toplevel)
C_externimport void C_ccall C_compiler_2dsyntax_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_support_toplevel)
C_externimport void C_ccall C_support_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_data_2dstructures_toplevel)
C_externimport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_pathname_toplevel)
C_externimport void C_ccall C_pathname_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_internal_toplevel)
C_externimport void C_ccall C_internal_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[490];
static double C_possibly_force_alignment;


C_noret_decl(f8651)
static void C_ccall f8651(C_word c,C_word *av) C_noret;
C_noret_decl(f9122)
static void C_ccall f9122(C_word c,C_word *av) C_noret;
C_noret_decl(f9128)
static void C_ccall f9128(C_word c,C_word *av) C_noret;
C_noret_decl(f9134)
static void C_ccall f9134(C_word c,C_word *av) C_noret;
C_noret_decl(f9140)
static void C_ccall f9140(C_word c,C_word *av) C_noret;
C_noret_decl(f9148)
static void C_ccall f9148(C_word c,C_word *av) C_noret;
C_noret_decl(f9154)
static void C_ccall f9154(C_word c,C_word *av) C_noret;
C_noret_decl(f9166)
static void C_ccall f9166(C_word c,C_word *av) C_noret;
C_noret_decl(f9174)
static void C_ccall f9174(C_word c,C_word *av) C_noret;
C_noret_decl(f9184)
static void C_ccall f9184(C_word c,C_word *av) C_noret;
C_noret_decl(f9204)
static void C_ccall f9204(C_word c,C_word *av) C_noret;
C_noret_decl(f9210)
static void C_ccall f9210(C_word c,C_word *av) C_noret;
C_noret_decl(f9224)
static void C_ccall f9224(C_word c,C_word *av) C_noret;
C_noret_decl(f9230)
static void C_ccall f9230(C_word c,C_word *av) C_noret;
C_noret_decl(f9236)
static void C_ccall f9236(C_word c,C_word *av) C_noret;
C_noret_decl(f9242)
static void C_ccall f9242(C_word c,C_word *av) C_noret;
C_noret_decl(f9248)
static void C_ccall f9248(C_word c,C_word *av) C_noret;
C_noret_decl(f9268)
static void C_ccall f9268(C_word c,C_word *av) C_noret;
C_noret_decl(f9284)
static void C_ccall f9284(C_word c,C_word *av) C_noret;
C_noret_decl(f9290)
static void C_ccall f9290(C_word c,C_word *av) C_noret;
C_noret_decl(f9296)
static void C_ccall f9296(C_word c,C_word *av) C_noret;
C_noret_decl(f9302)
static void C_ccall f9302(C_word c,C_word *av) C_noret;
C_noret_decl(f9308)
static void C_ccall f9308(C_word c,C_word *av) C_noret;
C_noret_decl(f_2688)
static void C_ccall f_2688(C_word c,C_word *av) C_noret;
C_noret_decl(f_2691)
static void C_ccall f_2691(C_word c,C_word *av) C_noret;
C_noret_decl(f_2694)
static void C_ccall f_2694(C_word c,C_word *av) C_noret;
C_noret_decl(f_2697)
static void C_ccall f_2697(C_word c,C_word *av) C_noret;
C_noret_decl(f_2700)
static void C_ccall f_2700(C_word c,C_word *av) C_noret;
C_noret_decl(f_2703)
static void C_ccall f_2703(C_word c,C_word *av) C_noret;
C_noret_decl(f_2706)
static void C_ccall f_2706(C_word c,C_word *av) C_noret;
C_noret_decl(f_2709)
static void C_ccall f_2709(C_word c,C_word *av) C_noret;
C_noret_decl(f_2712)
static void C_ccall f_2712(C_word c,C_word *av) C_noret;
C_noret_decl(f_2715)
static void C_ccall f_2715(C_word c,C_word *av) C_noret;
C_noret_decl(f_2718)
static void C_ccall f_2718(C_word c,C_word *av) C_noret;
C_noret_decl(f_2721)
static void C_ccall f_2721(C_word c,C_word *av) C_noret;
C_noret_decl(f_2724)
static void C_ccall f_2724(C_word c,C_word *av) C_noret;
C_noret_decl(f_2727)
static void C_ccall f_2727(C_word c,C_word *av) C_noret;
C_noret_decl(f_2730)
static void C_ccall f_2730(C_word c,C_word *av) C_noret;
C_noret_decl(f_2931)
static void C_fcall f_2931(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2946)
static void C_fcall f_2946(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2954)
static void C_fcall f_2954(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2962)
static void C_ccall f_2962(C_word c,C_word *av) C_noret;
C_noret_decl(f_2973)
static void C_ccall f_2973(C_word c,C_word *av) C_noret;
C_noret_decl(f_2986)
static void C_fcall f_2986(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2993)
static void C_ccall f_2993(C_word c,C_word *av) C_noret;
C_noret_decl(f_3000)
static void C_ccall f_3000(C_word c,C_word *av) C_noret;
C_noret_decl(f_3004)
static void C_ccall f_3004(C_word c,C_word *av) C_noret;
C_noret_decl(f_3016)
static void C_ccall f_3016(C_word c,C_word *av) C_noret;
C_noret_decl(f_3018)
static void C_fcall f_3018(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3065)
static void C_ccall f_3065(C_word c,C_word *av) C_noret;
C_noret_decl(f_3067)
static void C_fcall f_3067(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3135)
static void C_fcall f_3135(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3141)
static void C_fcall f_3141(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3151)
static void C_ccall f_3151(C_word c,C_word *av) C_noret;
C_noret_decl(f_3227)
static void C_fcall f_3227(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3254)
static void C_ccall f_3254(C_word c,C_word *av) C_noret;
C_noret_decl(f_3652)
static void C_fcall f_3652(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3677)
static void C_fcall f_3677(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3700)
static void C_ccall f_3700(C_word c,C_word *av) C_noret;
C_noret_decl(f_3705)
static void C_ccall f_3705(C_word c,C_word *av) C_noret;
C_noret_decl(f_3719)
static void C_ccall f_3719(C_word c,C_word *av) C_noret;
C_noret_decl(f_4016)
static void C_ccall f_4016(C_word c,C_word *av) C_noret;
C_noret_decl(f_4022)
static void C_ccall f_4022(C_word c,C_word *av) C_noret;
C_noret_decl(f_4029)
static void C_ccall f_4029(C_word c,C_word *av) C_noret;
C_noret_decl(f_4035)
static void C_ccall f_4035(C_word c,C_word *av) C_noret;
C_noret_decl(f_4038)
static void C_ccall f_4038(C_word c,C_word *av) C_noret;
C_noret_decl(f_4041)
static void C_ccall f_4041(C_word c,C_word *av) C_noret;
C_noret_decl(f_4044)
static void C_ccall f_4044(C_word c,C_word *av) C_noret;
C_noret_decl(f_4047)
static void C_ccall f_4047(C_word c,C_word *av) C_noret;
C_noret_decl(f_4053)
static void C_ccall f_4053(C_word c,C_word *av) C_noret;
C_noret_decl(f_4056)
static void C_ccall f_4056(C_word c,C_word *av) C_noret;
C_noret_decl(f_4059)
static void C_ccall f_4059(C_word c,C_word *av) C_noret;
C_noret_decl(f_4065)
static void C_ccall f_4065(C_word c,C_word *av) C_noret;
C_noret_decl(f_4068)
static void C_ccall f_4068(C_word c,C_word *av) C_noret;
C_noret_decl(f_4071)
static void C_ccall f_4071(C_word c,C_word *av) C_noret;
C_noret_decl(f_4077)
static void C_ccall f_4077(C_word c,C_word *av) C_noret;
C_noret_decl(f_4080)
static void C_ccall f_4080(C_word c,C_word *av) C_noret;
C_noret_decl(f_4083)
static void C_ccall f_4083(C_word c,C_word *av) C_noret;
C_noret_decl(f_4089)
static void C_ccall f_4089(C_word c,C_word *av) C_noret;
C_noret_decl(f_4092)
static void C_ccall f_4092(C_word c,C_word *av) C_noret;
C_noret_decl(f_4095)
static void C_ccall f_4095(C_word c,C_word *av) C_noret;
C_noret_decl(f_4101)
static void C_ccall f_4101(C_word c,C_word *av) C_noret;
C_noret_decl(f_4104)
static void C_ccall f_4104(C_word c,C_word *av) C_noret;
C_noret_decl(f_4109)
static void C_fcall f_4109(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4113)
static void C_ccall f_4113(C_word c,C_word *av) C_noret;
C_noret_decl(f_4125)
static void C_ccall f_4125(C_word c,C_word *av) C_noret;
C_noret_decl(f_4136)
static void C_ccall f_4136(C_word c,C_word *av) C_noret;
C_noret_decl(f_4149)
static void C_fcall f_4149(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4159)
static void C_ccall f_4159(C_word c,C_word *av) C_noret;
C_noret_decl(f_4172)
static void C_fcall f_4172(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4182)
static void C_ccall f_4182(C_word c,C_word *av) C_noret;
C_noret_decl(f_4195)
static void C_fcall f_4195(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4205)
static void C_ccall f_4205(C_word c,C_word *av) C_noret;
C_noret_decl(f_4218)
static void C_fcall f_4218(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4222)
static void C_fcall f_4222(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4227)
static void C_ccall f_4227(C_word c,C_word *av) C_noret;
C_noret_decl(f_4237)
static void C_ccall f_4237(C_word c,C_word *av) C_noret;
C_noret_decl(f_4240)
static void C_ccall f_4240(C_word c,C_word *av) C_noret;
C_noret_decl(f_4243)
static void C_ccall f_4243(C_word c,C_word *av) C_noret;
C_noret_decl(f_4246)
static void C_ccall f_4246(C_word c,C_word *av) C_noret;
C_noret_decl(f_4249)
static void C_ccall f_4249(C_word c,C_word *av) C_noret;
C_noret_decl(f_4252)
static void C_ccall f_4252(C_word c,C_word *av) C_noret;
C_noret_decl(f_4255)
static void C_ccall f_4255(C_word c,C_word *av) C_noret;
C_noret_decl(f_4269)
static void C_ccall f_4269(C_word c,C_word *av) C_noret;
C_noret_decl(f_4280)
static void C_ccall f_4280(C_word c,C_word *av) C_noret;
C_noret_decl(f_4284)
static void C_ccall f_4284(C_word c,C_word *av) C_noret;
C_noret_decl(f_4292)
static void C_fcall f_4292(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4302)
static void C_ccall f_4302(C_word c,C_word *av) C_noret;
C_noret_decl(f_4322)
static void C_ccall f_4322(C_word c,C_word *av) C_noret;
C_noret_decl(f_4333)
static void C_ccall f_4333(C_word c,C_word *av) C_noret;
C_noret_decl(f_4337)
static void C_ccall f_4337(C_word c,C_word *av) C_noret;
C_noret_decl(f_4349)
static void C_ccall f_4349(C_word c,C_word *av) C_noret;
C_noret_decl(f_4360)
static void C_ccall f_4360(C_word c,C_word *av) C_noret;
C_noret_decl(f_4364)
static void C_ccall f_4364(C_word c,C_word *av) C_noret;
C_noret_decl(f_4387)
static void C_ccall f_4387(C_word c,C_word *av) C_noret;
C_noret_decl(f_4403)
static void C_ccall f_4403(C_word c,C_word *av) C_noret;
C_noret_decl(f_4419)
static void C_ccall f_4419(C_word c,C_word *av) C_noret;
C_noret_decl(f_4428)
static void C_fcall f_4428(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4441)
static void C_ccall f_4441(C_word c,C_word *av) C_noret;
C_noret_decl(f_4452)
static void C_fcall f_4452(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4458)
static void C_ccall f_4458(C_word c,C_word *av) C_noret;
C_noret_decl(f_4531)
static void C_fcall f_4531(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4537)
static void C_ccall f_4537(C_word c,C_word *av) C_noret;
C_noret_decl(f_4540)
static void C_ccall f_4540(C_word c,C_word *av) C_noret;
C_noret_decl(f_4543)
static void C_ccall f_4543(C_word c,C_word *av) C_noret;
C_noret_decl(f_4853)
static void C_ccall f_4853(C_word c,C_word *av) C_noret;
C_noret_decl(f_4855)
static void C_ccall f_4855(C_word c,C_word *av) C_noret;
C_noret_decl(f_4858)
static void C_fcall f_4858(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4889)
static void C_ccall f_4889(C_word c,C_word *av) C_noret;
C_noret_decl(f_4898)
static void C_fcall f_4898(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4901)
static void C_fcall f_4901(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4904)
static void C_ccall f_4904(C_word c,C_word *av) C_noret;
C_noret_decl(f_4914)
static void C_fcall f_4914(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4919)
static void C_ccall f_4919(C_word c,C_word *av) C_noret;
C_noret_decl(f_4925)
static void C_ccall f_4925(C_word c,C_word *av) C_noret;
C_noret_decl(f_4931)
static void C_ccall f_4931(C_word c,C_word *av) C_noret;
C_noret_decl(f_4934)
static void C_ccall f_4934(C_word c,C_word *av) C_noret;
C_noret_decl(f_4939)
static void C_fcall f_4939(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4964)
static void C_ccall f_4964(C_word c,C_word *av) C_noret;
C_noret_decl(f_4982)
static void C_fcall f_4982(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4986)
static void C_ccall f_4986(C_word c,C_word *av) C_noret;
C_noret_decl(f_4998)
static void C_ccall f_4998(C_word c,C_word *av) C_noret;
C_noret_decl(f_5001)
static void C_ccall f_5001(C_word c,C_word *av) C_noret;
C_noret_decl(f_5004)
static void C_ccall f_5004(C_word c,C_word *av) C_noret;
C_noret_decl(f_5007)
static void C_ccall f_5007(C_word c,C_word *av) C_noret;
C_noret_decl(f_5009)
static void C_fcall f_5009(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5016)
static void C_ccall f_5016(C_word c,C_word *av) C_noret;
C_noret_decl(f_5029)
static void C_ccall f_5029(C_word c,C_word *av) C_noret;
C_noret_decl(f_5031)
static void C_fcall f_5031(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_5038)
static void C_ccall f_5038(C_word c,C_word *av) C_noret;
C_noret_decl(f_5044)
static void C_ccall f_5044(C_word c,C_word *av) C_noret;
C_noret_decl(f_5047)
static void C_ccall f_5047(C_word c,C_word *av) C_noret;
C_noret_decl(f_5050)
static void C_ccall f_5050(C_word c,C_word *av) C_noret;
C_noret_decl(f_5053)
static void C_ccall f_5053(C_word c,C_word *av) C_noret;
C_noret_decl(f_5058)
static void C_fcall f_5058(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5065)
static void C_ccall f_5065(C_word c,C_word *av) C_noret;
C_noret_decl(f_5070)
static void C_ccall f_5070(C_word c,C_word *av) C_noret;
C_noret_decl(f_5081)
static void C_fcall f_5081(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5091)
static void C_ccall f_5091(C_word c,C_word *av) C_noret;
C_noret_decl(f_5104)
static void C_fcall f_5104(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5113)
static void C_ccall f_5113(C_word c,C_word *av) C_noret;
C_noret_decl(f_5144)
static void C_ccall f_5144(C_word c,C_word *av) C_noret;
C_noret_decl(f_5148)
static void C_ccall f_5148(C_word c,C_word *av) C_noret;
C_noret_decl(f_5164)
static void C_ccall f_5164(C_word c,C_word *av) C_noret;
C_noret_decl(f_5168)
static void C_ccall f_5168(C_word c,C_word *av) C_noret;
C_noret_decl(f_5189)
static void C_fcall f_5189(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5195)
static void C_fcall f_5195(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5203)
static void C_fcall f_5203(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5211)
static void C_ccall f_5211(C_word c,C_word *av) C_noret;
C_noret_decl(f_5215)
static void C_ccall f_5215(C_word c,C_word *av) C_noret;
C_noret_decl(f_5224)
static void C_fcall f_5224(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5232)
static void C_ccall f_5232(C_word c,C_word *av) C_noret;
C_noret_decl(f_5234)
static void C_fcall f_5234(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5244)
static void C_ccall f_5244(C_word c,C_word *av) C_noret;
C_noret_decl(f_5247)
static void C_ccall f_5247(C_word c,C_word *av) C_noret;
C_noret_decl(f_5250)
static void C_ccall f_5250(C_word c,C_word *av) C_noret;
C_noret_decl(f_5253)
static void C_ccall f_5253(C_word c,C_word *av) C_noret;
C_noret_decl(f_5260)
static void C_ccall f_5260(C_word c,C_word *av) C_noret;
C_noret_decl(f_5264)
static void C_ccall f_5264(C_word c,C_word *av) C_noret;
C_noret_decl(f_5272)
static void C_ccall f_5272(C_word c,C_word *av) C_noret;
C_noret_decl(f_5274)
static void C_fcall f_5274(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5276)
static void C_fcall f_5276(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5280)
static void C_ccall f_5280(C_word c,C_word *av) C_noret;
C_noret_decl(f_5283)
static void C_ccall f_5283(C_word c,C_word *av) C_noret;
C_noret_decl(f_5288)
static void C_ccall f_5288(C_word c,C_word *av) C_noret;
C_noret_decl(f_5294)
static void C_ccall f_5294(C_word c,C_word *av) C_noret;
C_noret_decl(f_5299)
static void C_fcall f_5299(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5304)
static void C_fcall f_5304(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5340)
static void C_fcall f_5340(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5343)
static void C_fcall f_5343(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5346)
static void C_ccall f_5346(C_word c,C_word *av) C_noret;
C_noret_decl(f_5353)
static void C_ccall f_5353(C_word c,C_word *av) C_noret;
C_noret_decl(f_5356)
static void C_ccall f_5356(C_word c,C_word *av) C_noret;
C_noret_decl(f_5373)
static void C_ccall f_5373(C_word c,C_word *av) C_noret;
C_noret_decl(f_5377)
static void C_ccall f_5377(C_word c,C_word *av) C_noret;
C_noret_decl(f_5382)
static void C_ccall f_5382(C_word c,C_word *av) C_noret;
C_noret_decl(f_5388)
static void C_ccall f_5388(C_word c,C_word *av) C_noret;
C_noret_decl(f_5391)
static void C_fcall f_5391(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5394)
static void C_fcall f_5394(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5397)
static void C_ccall f_5397(C_word c,C_word *av) C_noret;
C_noret_decl(f_5400)
static void C_fcall f_5400(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5403)
static void C_fcall f_5403(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5406)
static void C_fcall f_5406(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5409)
static void C_fcall f_5409(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5412)
static void C_fcall f_5412(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5415)
static void C_fcall f_5415(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5418)
static void C_fcall f_5418(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5421)
static void C_fcall f_5421(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5424)
static void C_fcall f_5424(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5427)
static void C_fcall f_5427(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5430)
static void C_fcall f_5430(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5433)
static void C_fcall f_5433(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5436)
static void C_fcall f_5436(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5439)
static void C_fcall f_5439(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5442)
static void C_fcall f_5442(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5445)
static void C_fcall f_5445(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5448)
static void C_fcall f_5448(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5451)
static void C_fcall f_5451(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5456)
static void C_fcall f_5456(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5461)
static void C_fcall f_5461(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5466)
static void C_fcall f_5466(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5471)
static void C_fcall f_5471(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5476)
static void C_fcall f_5476(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5479)
static void C_ccall f_5479(C_word c,C_word *av) C_noret;
C_noret_decl(f_5482)
static void C_ccall f_5482(C_word c,C_word *av) C_noret;
C_noret_decl(f_5485)
static void C_ccall f_5485(C_word c,C_word *av) C_noret;
C_noret_decl(f_5488)
static void C_ccall f_5488(C_word c,C_word *av) C_noret;
C_noret_decl(f_5491)
static void C_ccall f_5491(C_word c,C_word *av) C_noret;
C_noret_decl(f_5496)
static void C_ccall f_5496(C_word c,C_word *av) C_noret;
C_noret_decl(f_5499)
static void C_ccall f_5499(C_word c,C_word *av) C_noret;
C_noret_decl(f_5502)
static void C_fcall f_5502(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5505)
static void C_fcall f_5505(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5508)
static void C_fcall f_5508(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5511)
static void C_fcall f_5511(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5514)
static void C_fcall f_5514(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5517)
static void C_ccall f_5517(C_word c,C_word *av) C_noret;
C_noret_decl(f_5520)
static void C_ccall f_5520(C_word c,C_word *av) C_noret;
C_noret_decl(f_5523)
static void C_ccall f_5523(C_word c,C_word *av) C_noret;
C_noret_decl(f_5529)
static void C_ccall f_5529(C_word c,C_word *av) C_noret;
C_noret_decl(f_5532)
static void C_ccall f_5532(C_word c,C_word *av) C_noret;
C_noret_decl(f_5538)
static void C_ccall f_5538(C_word c,C_word *av) C_noret;
C_noret_decl(f_5545)
static void C_ccall f_5545(C_word c,C_word *av) C_noret;
C_noret_decl(f_5548)
static void C_ccall f_5548(C_word c,C_word *av) C_noret;
C_noret_decl(f_5553)
static void C_ccall f_5553(C_word c,C_word *av) C_noret;
C_noret_decl(f_5556)
static void C_ccall f_5556(C_word c,C_word *av) C_noret;
C_noret_decl(f_5571)
static void C_ccall f_5571(C_word c,C_word *av) C_noret;
C_noret_decl(f_5575)
static void C_ccall f_5575(C_word c,C_word *av) C_noret;
C_noret_decl(f_5583)
static void C_ccall f_5583(C_word c,C_word *av) C_noret;
C_noret_decl(f_5586)
static void C_ccall f_5586(C_word c,C_word *av) C_noret;
C_noret_decl(f_5589)
static void C_fcall f_5589(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5592)
static void C_ccall f_5592(C_word c,C_word *av) C_noret;
C_noret_decl(f_5596)
static void C_ccall f_5596(C_word c,C_word *av) C_noret;
C_noret_decl(f_5600)
static void C_ccall f_5600(C_word c,C_word *av) C_noret;
C_noret_decl(f_5603)
static void C_fcall f_5603(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5607)
static void C_ccall f_5607(C_word c,C_word *av) C_noret;
C_noret_decl(f_5611)
static void C_ccall f_5611(C_word c,C_word *av) C_noret;
C_noret_decl(f_5622)
static void C_ccall f_5622(C_word c,C_word *av) C_noret;
C_noret_decl(f_5625)
static void C_ccall f_5625(C_word c,C_word *av) C_noret;
C_noret_decl(f_5628)
static void C_fcall f_5628(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5631)
static void C_ccall f_5631(C_word c,C_word *av) C_noret;
C_noret_decl(f_5634)
static void C_ccall f_5634(C_word c,C_word *av) C_noret;
C_noret_decl(f_5637)
static void C_ccall f_5637(C_word c,C_word *av) C_noret;
C_noret_decl(f_5645)
static void C_ccall f_5645(C_word c,C_word *av) C_noret;
C_noret_decl(f_5656)
static void C_fcall f_5656(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5667)
static void C_ccall f_5667(C_word c,C_word *av) C_noret;
C_noret_decl(f_5674)
static void C_ccall f_5674(C_word c,C_word *av) C_noret;
C_noret_decl(f_5683)
static void C_ccall f_5683(C_word c,C_word *av) C_noret;
C_noret_decl(f_5686)
static void C_ccall f_5686(C_word c,C_word *av) C_noret;
C_noret_decl(f_5689)
static void C_ccall f_5689(C_word c,C_word *av) C_noret;
C_noret_decl(f_5695)
static void C_ccall f_5695(C_word c,C_word *av) C_noret;
C_noret_decl(f_5698)
static void C_ccall f_5698(C_word c,C_word *av) C_noret;
C_noret_decl(f_5701)
static void C_ccall f_5701(C_word c,C_word *av) C_noret;
C_noret_decl(f_5704)
static void C_ccall f_5704(C_word c,C_word *av) C_noret;
C_noret_decl(f_5707)
static void C_ccall f_5707(C_word c,C_word *av) C_noret;
C_noret_decl(f_5711)
static void C_ccall f_5711(C_word c,C_word *av) C_noret;
C_noret_decl(f_5715)
static void C_ccall f_5715(C_word c,C_word *av) C_noret;
C_noret_decl(f_5718)
static void C_ccall f_5718(C_word c,C_word *av) C_noret;
C_noret_decl(f_5721)
static void C_ccall f_5721(C_word c,C_word *av) C_noret;
C_noret_decl(f_5724)
static void C_ccall f_5724(C_word c,C_word *av) C_noret;
C_noret_decl(f_5727)
static void C_ccall f_5727(C_word c,C_word *av) C_noret;
C_noret_decl(f_5730)
static void C_ccall f_5730(C_word c,C_word *av) C_noret;
C_noret_decl(f_5733)
static void C_ccall f_5733(C_word c,C_word *av) C_noret;
C_noret_decl(f_5736)
static void C_fcall f_5736(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5739)
static void C_ccall f_5739(C_word c,C_word *av) C_noret;
C_noret_decl(f_5742)
static void C_ccall f_5742(C_word c,C_word *av) C_noret;
C_noret_decl(f_5751)
static void C_ccall f_5751(C_word c,C_word *av) C_noret;
C_noret_decl(f_5755)
static void C_fcall f_5755(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5761)
static void C_ccall f_5761(C_word c,C_word *av) C_noret;
C_noret_decl(f_5766)
static void C_ccall f_5766(C_word c,C_word *av) C_noret;
C_noret_decl(f_5772)
static void C_ccall f_5772(C_word c,C_word *av) C_noret;
C_noret_decl(f_5778)
static void C_ccall f_5778(C_word c,C_word *av) C_noret;
C_noret_decl(f_5781)
static void C_fcall f_5781(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5787)
static void C_ccall f_5787(C_word c,C_word *av) C_noret;
C_noret_decl(f_5802)
static void C_ccall f_5802(C_word c,C_word *av) C_noret;
C_noret_decl(f_5808)
static void C_ccall f_5808(C_word c,C_word *av) C_noret;
C_noret_decl(f_5811)
static void C_ccall f_5811(C_word c,C_word *av) C_noret;
C_noret_decl(f_5814)
static void C_ccall f_5814(C_word c,C_word *av) C_noret;
C_noret_decl(f_5817)
static void C_ccall f_5817(C_word c,C_word *av) C_noret;
C_noret_decl(f_5820)
static void C_ccall f_5820(C_word c,C_word *av) C_noret;
C_noret_decl(f_5823)
static void C_ccall f_5823(C_word c,C_word *av) C_noret;
C_noret_decl(f_5828)
static void C_ccall f_5828(C_word c,C_word *av) C_noret;
C_noret_decl(f_5831)
static void C_ccall f_5831(C_word c,C_word *av) C_noret;
C_noret_decl(f_5834)
static void C_ccall f_5834(C_word c,C_word *av) C_noret;
C_noret_decl(f_5837)
static void C_ccall f_5837(C_word c,C_word *av) C_noret;
C_noret_decl(f_5840)
static void C_ccall f_5840(C_word c,C_word *av) C_noret;
C_noret_decl(f_5843)
static void C_ccall f_5843(C_word c,C_word *av) C_noret;
C_noret_decl(f_5846)
static void C_ccall f_5846(C_word c,C_word *av) C_noret;
C_noret_decl(f_5849)
static void C_ccall f_5849(C_word c,C_word *av) C_noret;
C_noret_decl(f_5852)
static void C_ccall f_5852(C_word c,C_word *av) C_noret;
C_noret_decl(f_5855)
static void C_ccall f_5855(C_word c,C_word *av) C_noret;
C_noret_decl(f_5858)
static void C_ccall f_5858(C_word c,C_word *av) C_noret;
C_noret_decl(f_5861)
static void C_fcall f_5861(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5867)
static void C_ccall f_5867(C_word c,C_word *av) C_noret;
C_noret_decl(f_5870)
static void C_ccall f_5870(C_word c,C_word *av) C_noret;
C_noret_decl(f_5873)
static void C_ccall f_5873(C_word c,C_word *av) C_noret;
C_noret_decl(f_5876)
static void C_ccall f_5876(C_word c,C_word *av) C_noret;
C_noret_decl(f_5879)
static void C_ccall f_5879(C_word c,C_word *av) C_noret;
C_noret_decl(f_5884)
static void C_fcall f_5884(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_5888)
static void C_ccall f_5888(C_word c,C_word *av) C_noret;
C_noret_decl(f_5891)
static void C_ccall f_5891(C_word c,C_word *av) C_noret;
C_noret_decl(f_5894)
static void C_ccall f_5894(C_word c,C_word *av) C_noret;
C_noret_decl(f_5898)
static void C_ccall f_5898(C_word c,C_word *av) C_noret;
C_noret_decl(f_5901)
static void C_ccall f_5901(C_word c,C_word *av) C_noret;
C_noret_decl(f_5904)
static void C_ccall f_5904(C_word c,C_word *av) C_noret;
C_noret_decl(f_5910)
static void C_ccall f_5910(C_word c,C_word *av) C_noret;
C_noret_decl(f_5913)
static void C_ccall f_5913(C_word c,C_word *av) C_noret;
C_noret_decl(f_5918)
static void C_ccall f_5918(C_word c,C_word *av) C_noret;
C_noret_decl(f_5930)
static void C_ccall f_5930(C_word c,C_word *av) C_noret;
C_noret_decl(f_5934)
static void C_ccall f_5934(C_word c,C_word *av) C_noret;
C_noret_decl(f_5937)
static void C_ccall f_5937(C_word c,C_word *av) C_noret;
C_noret_decl(f_5954)
static void C_ccall f_5954(C_word c,C_word *av) C_noret;
C_noret_decl(f_5968)
static void C_ccall f_5968(C_word c,C_word *av) C_noret;
C_noret_decl(f_5980)
static void C_ccall f_5980(C_word c,C_word *av) C_noret;
C_noret_decl(f_5983)
static void C_ccall f_5983(C_word c,C_word *av) C_noret;
C_noret_decl(f_5986)
static void C_ccall f_5986(C_word c,C_word *av) C_noret;
C_noret_decl(f_5989)
static void C_ccall f_5989(C_word c,C_word *av) C_noret;
C_noret_decl(f_5992)
static void C_ccall f_5992(C_word c,C_word *av) C_noret;
C_noret_decl(f_5995)
static void C_ccall f_5995(C_word c,C_word *av) C_noret;
C_noret_decl(f_6011)
static void C_ccall f_6011(C_word c,C_word *av) C_noret;
C_noret_decl(f_6014)
static void C_ccall f_6014(C_word c,C_word *av) C_noret;
C_noret_decl(f_6017)
static void C_ccall f_6017(C_word c,C_word *av) C_noret;
C_noret_decl(f_6020)
static void C_ccall f_6020(C_word c,C_word *av) C_noret;
C_noret_decl(f_6024)
static void C_ccall f_6024(C_word c,C_word *av) C_noret;
C_noret_decl(f_6027)
static void C_ccall f_6027(C_word c,C_word *av) C_noret;
C_noret_decl(f_6030)
static void C_ccall f_6030(C_word c,C_word *av) C_noret;
C_noret_decl(f_6033)
static void C_ccall f_6033(C_word c,C_word *av) C_noret;
C_noret_decl(f_6036)
static void C_ccall f_6036(C_word c,C_word *av) C_noret;
C_noret_decl(f_6039)
static void C_ccall f_6039(C_word c,C_word *av) C_noret;
C_noret_decl(f_6042)
static void C_ccall f_6042(C_word c,C_word *av) C_noret;
C_noret_decl(f_6047)
static void C_ccall f_6047(C_word c,C_word *av) C_noret;
C_noret_decl(f_6053)
static void C_ccall f_6053(C_word c,C_word *av) C_noret;
C_noret_decl(f_6057)
static void C_ccall f_6057(C_word c,C_word *av) C_noret;
C_noret_decl(f_6060)
static void C_ccall f_6060(C_word c,C_word *av) C_noret;
C_noret_decl(f_6063)
static void C_ccall f_6063(C_word c,C_word *av) C_noret;
C_noret_decl(f_6066)
static void C_ccall f_6066(C_word c,C_word *av) C_noret;
C_noret_decl(f_6069)
static void C_ccall f_6069(C_word c,C_word *av) C_noret;
C_noret_decl(f_6072)
static void C_ccall f_6072(C_word c,C_word *av) C_noret;
C_noret_decl(f_6075)
static void C_ccall f_6075(C_word c,C_word *av) C_noret;
C_noret_decl(f_6078)
static void C_ccall f_6078(C_word c,C_word *av) C_noret;
C_noret_decl(f_6081)
static void C_ccall f_6081(C_word c,C_word *av) C_noret;
C_noret_decl(f_6084)
static void C_ccall f_6084(C_word c,C_word *av) C_noret;
C_noret_decl(f_6097)
static void C_ccall f_6097(C_word c,C_word *av) C_noret;
C_noret_decl(f_6106)
static void C_ccall f_6106(C_word c,C_word *av) C_noret;
C_noret_decl(f_6111)
static void C_ccall f_6111(C_word c,C_word *av) C_noret;
C_noret_decl(f_6135)
static void C_ccall f_6135(C_word c,C_word *av) C_noret;
C_noret_decl(f_6141)
static void C_ccall f_6141(C_word c,C_word *av) C_noret;
C_noret_decl(f_6154)
static void C_ccall f_6154(C_word c,C_word *av) C_noret;
C_noret_decl(f_6156)
static void C_fcall f_6156(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6181)
static void C_ccall f_6181(C_word c,C_word *av) C_noret;
C_noret_decl(f_6191)
static void C_ccall f_6191(C_word c,C_word *av) C_noret;
C_noret_decl(f_6194)
static void C_ccall f_6194(C_word c,C_word *av) C_noret;
C_noret_decl(f_6197)
static void C_ccall f_6197(C_word c,C_word *av) C_noret;
C_noret_decl(f_6200)
static void C_ccall f_6200(C_word c,C_word *av) C_noret;
C_noret_decl(f_6212)
static void C_ccall f_6212(C_word c,C_word *av) C_noret;
C_noret_decl(f_6215)
static void C_ccall f_6215(C_word c,C_word *av) C_noret;
C_noret_decl(f_6219)
static void C_ccall f_6219(C_word c,C_word *av) C_noret;
C_noret_decl(f_6228)
static void C_ccall f_6228(C_word c,C_word *av) C_noret;
C_noret_decl(f_6231)
static void C_ccall f_6231(C_word c,C_word *av) C_noret;
C_noret_decl(f_6234)
static void C_ccall f_6234(C_word c,C_word *av) C_noret;
C_noret_decl(f_6237)
static void C_ccall f_6237(C_word c,C_word *av) C_noret;
C_noret_decl(f_6240)
static void C_fcall f_6240(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6246)
static void C_ccall f_6246(C_word c,C_word *av) C_noret;
C_noret_decl(f_6290)
static void C_ccall f_6290(C_word c,C_word *av) C_noret;
C_noret_decl(f_6296)
static void C_ccall f_6296(C_word c,C_word *av) C_noret;
C_noret_decl(f_6301)
static void C_ccall f_6301(C_word c,C_word *av) C_noret;
C_noret_decl(f_6310)
static void C_ccall f_6310(C_word c,C_word *av) C_noret;
C_noret_decl(f_6316)
static void C_ccall f_6316(C_word c,C_word *av) C_noret;
C_noret_decl(f_6325)
static void C_ccall f_6325(C_word c,C_word *av) C_noret;
C_noret_decl(f_6329)
static void C_ccall f_6329(C_word c,C_word *av) C_noret;
C_noret_decl(f_6335)
static void C_ccall f_6335(C_word c,C_word *av) C_noret;
C_noret_decl(f_6338)
static void C_ccall f_6338(C_word c,C_word *av) C_noret;
C_noret_decl(f_6343)
static void C_ccall f_6343(C_word c,C_word *av) C_noret;
C_noret_decl(f_6346)
static void C_ccall f_6346(C_word c,C_word *av) C_noret;
C_noret_decl(f_6349)
static void C_ccall f_6349(C_word c,C_word *av) C_noret;
C_noret_decl(f_6352)
static void C_ccall f_6352(C_word c,C_word *av) C_noret;
C_noret_decl(f_6355)
static void C_ccall f_6355(C_word c,C_word *av) C_noret;
C_noret_decl(f_6358)
static void C_ccall f_6358(C_word c,C_word *av) C_noret;
C_noret_decl(f_6361)
static void C_ccall f_6361(C_word c,C_word *av) C_noret;
C_noret_decl(f_6364)
static void C_ccall f_6364(C_word c,C_word *av) C_noret;
C_noret_decl(f_6370)
static void C_fcall f_6370(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6380)
static void C_ccall f_6380(C_word c,C_word *av) C_noret;
C_noret_decl(f_6393)
static void C_fcall f_6393(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6403)
static void C_ccall f_6403(C_word c,C_word *av) C_noret;
C_noret_decl(f_6422)
static void C_ccall f_6422(C_word c,C_word *av) C_noret;
C_noret_decl(f_6434)
static void C_ccall f_6434(C_word c,C_word *av) C_noret;
C_noret_decl(f_6445)
static void C_fcall f_6445(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6455)
static void C_ccall f_6455(C_word c,C_word *av) C_noret;
C_noret_decl(f_6471)
static void C_ccall f_6471(C_word c,C_word *av) C_noret;
C_noret_decl(f_6477)
static void C_ccall f_6477(C_word c,C_word *av) C_noret;
C_noret_decl(f_6484)
static void C_ccall f_6484(C_word c,C_word *av) C_noret;
C_noret_decl(f_6492)
static void C_fcall f_6492(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6502)
static void C_ccall f_6502(C_word c,C_word *av) C_noret;
C_noret_decl(f_6517)
static void C_ccall f_6517(C_word c,C_word *av) C_noret;
C_noret_decl(f_6521)
static void C_ccall f_6521(C_word c,C_word *av) C_noret;
C_noret_decl(f_6524)
static void C_ccall f_6524(C_word c,C_word *av) C_noret;
C_noret_decl(f_6527)
static void C_ccall f_6527(C_word c,C_word *av) C_noret;
C_noret_decl(f_6537)
static void C_ccall f_6537(C_word c,C_word *av) C_noret;
C_noret_decl(f_6542)
static void C_fcall f_6542(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6567)
static void C_ccall f_6567(C_word c,C_word *av) C_noret;
C_noret_decl(f_6582)
static void C_ccall f_6582(C_word c,C_word *av) C_noret;
C_noret_decl(f_6588)
static void C_ccall f_6588(C_word c,C_word *av) C_noret;
C_noret_decl(f_6599)
static void C_ccall f_6599(C_word c,C_word *av) C_noret;
C_noret_decl(f_6603)
static void C_ccall f_6603(C_word c,C_word *av) C_noret;
C_noret_decl(f_6611)
static void C_ccall f_6611(C_word c,C_word *av) C_noret;
C_noret_decl(f_6614)
static void C_ccall f_6614(C_word c,C_word *av) C_noret;
C_noret_decl(f_6617)
static void C_ccall f_6617(C_word c,C_word *av) C_noret;
C_noret_decl(f_6620)
static void C_ccall f_6620(C_word c,C_word *av) C_noret;
C_noret_decl(f_6637)
static void C_fcall f_6637(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6647)
static void C_ccall f_6647(C_word c,C_word *av) C_noret;
C_noret_decl(f_6668)
static void C_ccall f_6668(C_word c,C_word *av) C_noret;
C_noret_decl(f_6687)
static void C_ccall f_6687(C_word c,C_word *av) C_noret;
C_noret_decl(f_6689)
static void C_fcall f_6689(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6714)
static void C_ccall f_6714(C_word c,C_word *av) C_noret;
C_noret_decl(f_6746)
static void C_ccall f_6746(C_word c,C_word *av) C_noret;
C_noret_decl(f_6750)
static void C_fcall f_6750(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6754)
static void C_ccall f_6754(C_word c,C_word *av) C_noret;
C_noret_decl(f_6780)
static void C_fcall f_6780(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6814)
static void C_fcall f_6814(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6839)
static void C_ccall f_6839(C_word c,C_word *av) C_noret;
C_noret_decl(f_6848)
static void C_fcall f_6848(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6873)
static void C_ccall f_6873(C_word c,C_word *av) C_noret;
C_noret_decl(f_6898)
static void C_ccall f_6898(C_word c,C_word *av) C_noret;
C_noret_decl(f_6904)
static void C_fcall f_6904(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6929)
static void C_ccall f_6929(C_word c,C_word *av) C_noret;
C_noret_decl(f_6939)
static void C_ccall f_6939(C_word c,C_word *av) C_noret;
C_noret_decl(f_6949)
static void C_ccall f_6949(C_word c,C_word *av) C_noret;
C_noret_decl(f_6951)
static void C_fcall f_6951(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6976)
static void C_ccall f_6976(C_word c,C_word *av) C_noret;
C_noret_decl(f_6986)
static void C_ccall f_6986(C_word c,C_word *av) C_noret;
C_noret_decl(f_6990)
static void C_ccall f_6990(C_word c,C_word *av) C_noret;
C_noret_decl(f_6995)
static void C_fcall f_6995(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7006)
static void C_ccall f_7006(C_word c,C_word *av) C_noret;
C_noret_decl(f_7016)
static void C_ccall f_7016(C_word c,C_word *av) C_noret;
C_noret_decl(f_7020)
static void C_ccall f_7020(C_word c,C_word *av) C_noret;
C_noret_decl(f_7030)
static void C_ccall f_7030(C_word c,C_word *av) C_noret;
C_noret_decl(f_7032)
static void C_fcall f_7032(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7057)
static void C_ccall f_7057(C_word c,C_word *av) C_noret;
C_noret_decl(f_7066)
static void C_fcall f_7066(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7091)
static void C_ccall f_7091(C_word c,C_word *av) C_noret;
C_noret_decl(f_7104)
static void C_ccall f_7104(C_word c,C_word *av) C_noret;
C_noret_decl(f_7107)
static void C_ccall f_7107(C_word c,C_word *av) C_noret;
C_noret_decl(f_7114)
static void C_ccall f_7114(C_word c,C_word *av) C_noret;
C_noret_decl(f_7119)
static void C_ccall f_7119(C_word c,C_word *av) C_noret;
C_noret_decl(f_7125)
static void C_fcall f_7125(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7129)
static void C_ccall f_7129(C_word c,C_word *av) C_noret;
C_noret_decl(f_7147)
static void C_ccall f_7147(C_word c,C_word *av) C_noret;
C_noret_decl(f_7154)
static void C_ccall f_7154(C_word c,C_word *av) C_noret;
C_noret_decl(f_7162)
static void C_ccall f_7162(C_word c,C_word *av) C_noret;
C_noret_decl(f_7180)
static void C_ccall f_7180(C_word c,C_word *av) C_noret;
C_noret_decl(f_7186)
static void C_ccall f_7186(C_word c,C_word *av) C_noret;
C_noret_decl(f_7235)
static void C_ccall f_7235(C_word c,C_word *av) C_noret;
C_noret_decl(f_7242)
static void C_ccall f_7242(C_word c,C_word *av) C_noret;
C_noret_decl(f_7258)
static void C_ccall f_7258(C_word c,C_word *av) C_noret;
C_noret_decl(f_7261)
static void C_ccall f_7261(C_word c,C_word *av) C_noret;
C_noret_decl(f_7267)
static void C_ccall f_7267(C_word c,C_word *av) C_noret;
C_noret_decl(f_7269)
static void C_fcall f_7269(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7303)
static void C_ccall f_7303(C_word c,C_word *av) C_noret;
C_noret_decl(f_7310)
static void C_ccall f_7310(C_word c,C_word *av) C_noret;
C_noret_decl(f_7315)
static void C_fcall f_7315(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7340)
static void C_ccall f_7340(C_word c,C_word *av) C_noret;
C_noret_decl(f_7351)
static void C_ccall f_7351(C_word c,C_word *av) C_noret;
C_noret_decl(f_7358)
static void C_ccall f_7358(C_word c,C_word *av) C_noret;
C_noret_decl(f_7372)
static void C_ccall f_7372(C_word c,C_word *av) C_noret;
C_noret_decl(f_7379)
static void C_ccall f_7379(C_word c,C_word *av) C_noret;
C_noret_decl(f_7384)
static void C_fcall f_7384(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7409)
static void C_ccall f_7409(C_word c,C_word *av) C_noret;
C_noret_decl(f_7420)
static void C_ccall f_7420(C_word c,C_word *av) C_noret;
C_noret_decl(f_7422)
static void C_fcall f_7422(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7432)
static void C_ccall f_7432(C_word c,C_word *av) C_noret;
C_noret_decl(f_7445)
static void C_fcall f_7445(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7455)
static void C_ccall f_7455(C_word c,C_word *av) C_noret;
C_noret_decl(f_7468)
static void C_ccall f_7468(C_word c,C_word *av) C_noret;
C_noret_decl(f_7476)
static void C_ccall f_7476(C_word c,C_word *av) C_noret;
C_noret_decl(f_7478)
static void C_fcall f_7478(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7488)
static void C_ccall f_7488(C_word c,C_word *av) C_noret;
C_noret_decl(f_7501)
static void C_ccall f_7501(C_word c,C_word *av) C_noret;
C_noret_decl(f_7509)
static void C_ccall f_7509(C_word c,C_word *av) C_noret;
C_noret_decl(f_7522)
static void C_ccall f_7522(C_word c,C_word *av) C_noret;
C_noret_decl(f_7531)
static void C_ccall f_7531(C_word c,C_word *av) C_noret;
C_noret_decl(f_7536)
static void C_ccall f_7536(C_word c,C_word *av) C_noret;
C_noret_decl(f_7547)
static void C_fcall f_7547(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7557)
static void C_ccall f_7557(C_word c,C_word *av) C_noret;
C_noret_decl(f_7570)
static void C_fcall f_7570(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7580)
static void C_ccall f_7580(C_word c,C_word *av) C_noret;
C_noret_decl(f_7625)
static void C_ccall f_7625(C_word c,C_word *av) C_noret;
C_noret_decl(f_7631)
static void C_ccall f_7631(C_word c,C_word *av) C_noret;
C_noret_decl(f_7633)
static void C_fcall f_7633(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7658)
static void C_ccall f_7658(C_word c,C_word *av) C_noret;
C_noret_decl(f_7670)
static void C_ccall f_7670(C_word c,C_word *av) C_noret;
C_noret_decl(f_7673)
static void C_ccall f_7673(C_word c,C_word *av) C_noret;
C_noret_decl(f_7676)
static void C_ccall f_7676(C_word c,C_word *av) C_noret;
C_noret_decl(f_7679)
static void C_ccall f_7679(C_word c,C_word *av) C_noret;
C_noret_decl(f_7687)
static void C_ccall f_7687(C_word c,C_word *av) C_noret;
C_noret_decl(f_7695)
static void C_ccall f_7695(C_word c,C_word *av) C_noret;
C_noret_decl(f_7701)
static void C_ccall f_7701(C_word c,C_word *av) C_noret;
C_noret_decl(f_7734)
static void C_ccall f_7734(C_word c,C_word *av) C_noret;
C_noret_decl(f_7737)
static void C_ccall f_7737(C_word c,C_word *av) C_noret;
C_noret_decl(f_7744)
static void C_ccall f_7744(C_word c,C_word *av) C_noret;
C_noret_decl(f_7747)
static void C_ccall f_7747(C_word c,C_word *av) C_noret;
C_noret_decl(f_7750)
static void C_ccall f_7750(C_word c,C_word *av) C_noret;
C_noret_decl(f_7757)
static void C_ccall f_7757(C_word c,C_word *av) C_noret;
C_noret_decl(f_7760)
static void C_ccall f_7760(C_word c,C_word *av) C_noret;
C_noret_decl(f_7763)
static void C_ccall f_7763(C_word c,C_word *av) C_noret;
C_noret_decl(f_7770)
static void C_ccall f_7770(C_word c,C_word *av) C_noret;
C_noret_decl(f_7776)
static void C_ccall f_7776(C_word c,C_word *av) C_noret;
C_noret_decl(f_7780)
static void C_ccall f_7780(C_word c,C_word *av) C_noret;
C_noret_decl(f_7812)
static void C_ccall f_7812(C_word c,C_word *av) C_noret;
C_noret_decl(f_7863)
static void C_fcall f_7863(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7901)
static void C_ccall f_7901(C_word c,C_word *av) C_noret;
C_noret_decl(f_7906)
static void C_ccall f_7906(C_word c,C_word *av) C_noret;
C_noret_decl(f_7922)
static void C_ccall f_7922(C_word c,C_word *av) C_noret;
C_noret_decl(f_7927)
static void C_fcall f_7927(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7952)
static void C_ccall f_7952(C_word c,C_word *av) C_noret;
C_noret_decl(f_7963)
static void C_ccall f_7963(C_word c,C_word *av) C_noret;
C_noret_decl(f_7977)
static void C_ccall f_7977(C_word c,C_word *av) C_noret;
C_noret_decl(f_7981)
static void C_ccall f_7981(C_word c,C_word *av) C_noret;
C_noret_decl(f_7998)
static void C_fcall f_7998(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8023)
static void C_ccall f_8023(C_word c,C_word *av) C_noret;
C_noret_decl(f_8034)
static void C_ccall f_8034(C_word c,C_word *av) C_noret;
C_noret_decl(f_8038)
static void C_fcall f_8038(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8042)
static void C_ccall f_8042(C_word c,C_word *av) C_noret;
C_noret_decl(f_8066)
static void C_ccall f_8066(C_word c,C_word *av) C_noret;
C_noret_decl(f_8092)
static void C_ccall f_8092(C_word c,C_word *av) C_noret;
C_noret_decl(f_8100)
static void C_fcall f_8100(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8107)
static void C_fcall f_8107(C_word t0,C_word t1) C_noret;
C_noret_decl(C_batch_2ddriver_toplevel)
C_externexport void C_ccall C_batch_2ddriver_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_2931)
static void C_ccall trf_2931(C_word c,C_word *av) C_noret;
static void C_ccall trf_2931(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2931(t0,t1,t2,t3);}

C_noret_decl(trf_2946)
static void C_ccall trf_2946(C_word c,C_word *av) C_noret;
static void C_ccall trf_2946(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2946(t0,t1,t2);}

C_noret_decl(trf_2954)
static void C_ccall trf_2954(C_word c,C_word *av) C_noret;
static void C_ccall trf_2954(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2954(t0,t1,t2,t3);}

C_noret_decl(trf_2986)
static void C_ccall trf_2986(C_word c,C_word *av) C_noret;
static void C_ccall trf_2986(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2986(t0,t1,t2);}

C_noret_decl(trf_3018)
static void C_ccall trf_3018(C_word c,C_word *av) C_noret;
static void C_ccall trf_3018(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3018(t0,t1,t2);}

C_noret_decl(trf_3067)
static void C_ccall trf_3067(C_word c,C_word *av) C_noret;
static void C_ccall trf_3067(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3067(t0,t1,t2);}

C_noret_decl(trf_3135)
static void C_ccall trf_3135(C_word c,C_word *av) C_noret;
static void C_ccall trf_3135(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3135(t0,t1,t2);}

C_noret_decl(trf_3141)
static void C_ccall trf_3141(C_word c,C_word *av) C_noret;
static void C_ccall trf_3141(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3141(t0,t1,t2);}

C_noret_decl(trf_3227)
static void C_ccall trf_3227(C_word c,C_word *av) C_noret;
static void C_ccall trf_3227(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3227(t0,t1,t2);}

C_noret_decl(trf_3652)
static void C_ccall trf_3652(C_word c,C_word *av) C_noret;
static void C_ccall trf_3652(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3652(t0,t1,t2,t3);}

C_noret_decl(trf_3677)
static void C_ccall trf_3677(C_word c,C_word *av) C_noret;
static void C_ccall trf_3677(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3677(t0,t1,t2,t3);}

C_noret_decl(trf_4109)
static void C_ccall trf_4109(C_word c,C_word *av) C_noret;
static void C_ccall trf_4109(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4109(t0,t1);}

C_noret_decl(trf_4149)
static void C_ccall trf_4149(C_word c,C_word *av) C_noret;
static void C_ccall trf_4149(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4149(t0,t1,t2);}

C_noret_decl(trf_4172)
static void C_ccall trf_4172(C_word c,C_word *av) C_noret;
static void C_ccall trf_4172(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4172(t0,t1,t2);}

C_noret_decl(trf_4195)
static void C_ccall trf_4195(C_word c,C_word *av) C_noret;
static void C_ccall trf_4195(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4195(t0,t1,t2);}

C_noret_decl(trf_4218)
static void C_ccall trf_4218(C_word c,C_word *av) C_noret;
static void C_ccall trf_4218(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4218(t0,t1,t2);}

C_noret_decl(trf_4222)
static void C_ccall trf_4222(C_word c,C_word *av) C_noret;
static void C_ccall trf_4222(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4222(t0,t1);}

C_noret_decl(trf_4292)
static void C_ccall trf_4292(C_word c,C_word *av) C_noret;
static void C_ccall trf_4292(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4292(t0,t1,t2);}

C_noret_decl(trf_4428)
static void C_ccall trf_4428(C_word c,C_word *av) C_noret;
static void C_ccall trf_4428(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4428(t0,t1,t2);}

C_noret_decl(trf_4452)
static void C_ccall trf_4452(C_word c,C_word *av) C_noret;
static void C_ccall trf_4452(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4452(t0,t1);}

C_noret_decl(trf_4531)
static void C_ccall trf_4531(C_word c,C_word *av) C_noret;
static void C_ccall trf_4531(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4531(t0,t1);}

C_noret_decl(trf_4858)
static void C_ccall trf_4858(C_word c,C_word *av) C_noret;
static void C_ccall trf_4858(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4858(t0,t1);}

C_noret_decl(trf_4898)
static void C_ccall trf_4898(C_word c,C_word *av) C_noret;
static void C_ccall trf_4898(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4898(t0,t1);}

C_noret_decl(trf_4901)
static void C_ccall trf_4901(C_word c,C_word *av) C_noret;
static void C_ccall trf_4901(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4901(t0,t1);}

C_noret_decl(trf_4914)
static void C_ccall trf_4914(C_word c,C_word *av) C_noret;
static void C_ccall trf_4914(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4914(t0,t1);}

C_noret_decl(trf_4939)
static void C_ccall trf_4939(C_word c,C_word *av) C_noret;
static void C_ccall trf_4939(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4939(t0,t1);}

C_noret_decl(trf_4982)
static void C_ccall trf_4982(C_word c,C_word *av) C_noret;
static void C_ccall trf_4982(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4982(t0,t1,t2);}

C_noret_decl(trf_5009)
static void C_ccall trf_5009(C_word c,C_word *av) C_noret;
static void C_ccall trf_5009(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_5009(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5031)
static void C_ccall trf_5031(C_word c,C_word *av) C_noret;
static void C_ccall trf_5031(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_5031(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_5058)
static void C_ccall trf_5058(C_word c,C_word *av) C_noret;
static void C_ccall trf_5058(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_5058(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5081)
static void C_ccall trf_5081(C_word c,C_word *av) C_noret;
static void C_ccall trf_5081(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5081(t0,t1,t2);}

C_noret_decl(trf_5104)
static void C_ccall trf_5104(C_word c,C_word *av) C_noret;
static void C_ccall trf_5104(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5104(t0,t1);}

C_noret_decl(trf_5189)
static void C_ccall trf_5189(C_word c,C_word *av) C_noret;
static void C_ccall trf_5189(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5189(t0,t1,t2);}

C_noret_decl(trf_5195)
static void C_ccall trf_5195(C_word c,C_word *av) C_noret;
static void C_ccall trf_5195(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5195(t0,t1,t2);}

C_noret_decl(trf_5203)
static void C_ccall trf_5203(C_word c,C_word *av) C_noret;
static void C_ccall trf_5203(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5203(t0,t1,t2);}

C_noret_decl(trf_5224)
static void C_ccall trf_5224(C_word c,C_word *av) C_noret;
static void C_ccall trf_5224(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5224(t0,t1);}

C_noret_decl(trf_5234)
static void C_ccall trf_5234(C_word c,C_word *av) C_noret;
static void C_ccall trf_5234(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5234(t0,t1,t2);}

C_noret_decl(trf_5274)
static void C_ccall trf_5274(C_word c,C_word *av) C_noret;
static void C_ccall trf_5274(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_5274(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5276)
static void C_ccall trf_5276(C_word c,C_word *av) C_noret;
static void C_ccall trf_5276(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5276(t0,t1,t2,t3);}

C_noret_decl(trf_5299)
static void C_ccall trf_5299(C_word c,C_word *av) C_noret;
static void C_ccall trf_5299(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5299(t0,t1,t2);}

C_noret_decl(trf_5304)
static void C_ccall trf_5304(C_word c,C_word *av) C_noret;
static void C_ccall trf_5304(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5304(t0,t1);}

C_noret_decl(trf_5340)
static void C_ccall trf_5340(C_word c,C_word *av) C_noret;
static void C_ccall trf_5340(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5340(t0,t1);}

C_noret_decl(trf_5343)
static void C_ccall trf_5343(C_word c,C_word *av) C_noret;
static void C_ccall trf_5343(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5343(t0,t1);}

C_noret_decl(trf_5391)
static void C_ccall trf_5391(C_word c,C_word *av) C_noret;
static void C_ccall trf_5391(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5391(t0,t1);}

C_noret_decl(trf_5394)
static void C_ccall trf_5394(C_word c,C_word *av) C_noret;
static void C_ccall trf_5394(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5394(t0,t1);}

C_noret_decl(trf_5400)
static void C_ccall trf_5400(C_word c,C_word *av) C_noret;
static void C_ccall trf_5400(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5400(t0,t1);}

C_noret_decl(trf_5403)
static void C_ccall trf_5403(C_word c,C_word *av) C_noret;
static void C_ccall trf_5403(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5403(t0,t1);}

C_noret_decl(trf_5406)
static void C_ccall trf_5406(C_word c,C_word *av) C_noret;
static void C_ccall trf_5406(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5406(t0,t1);}

C_noret_decl(trf_5409)
static void C_ccall trf_5409(C_word c,C_word *av) C_noret;
static void C_ccall trf_5409(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5409(t0,t1);}

C_noret_decl(trf_5412)
static void C_ccall trf_5412(C_word c,C_word *av) C_noret;
static void C_ccall trf_5412(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5412(t0,t1);}

C_noret_decl(trf_5415)
static void C_ccall trf_5415(C_word c,C_word *av) C_noret;
static void C_ccall trf_5415(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5415(t0,t1);}

C_noret_decl(trf_5418)
static void C_ccall trf_5418(C_word c,C_word *av) C_noret;
static void C_ccall trf_5418(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5418(t0,t1);}

C_noret_decl(trf_5421)
static void C_ccall trf_5421(C_word c,C_word *av) C_noret;
static void C_ccall trf_5421(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5421(t0,t1);}

C_noret_decl(trf_5424)
static void C_ccall trf_5424(C_word c,C_word *av) C_noret;
static void C_ccall trf_5424(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5424(t0,t1);}

C_noret_decl(trf_5427)
static void C_ccall trf_5427(C_word c,C_word *av) C_noret;
static void C_ccall trf_5427(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5427(t0,t1);}

C_noret_decl(trf_5430)
static void C_ccall trf_5430(C_word c,C_word *av) C_noret;
static void C_ccall trf_5430(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5430(t0,t1);}

C_noret_decl(trf_5433)
static void C_ccall trf_5433(C_word c,C_word *av) C_noret;
static void C_ccall trf_5433(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5433(t0,t1);}

C_noret_decl(trf_5436)
static void C_ccall trf_5436(C_word c,C_word *av) C_noret;
static void C_ccall trf_5436(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5436(t0,t1);}

C_noret_decl(trf_5439)
static void C_ccall trf_5439(C_word c,C_word *av) C_noret;
static void C_ccall trf_5439(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5439(t0,t1);}

C_noret_decl(trf_5442)
static void C_ccall trf_5442(C_word c,C_word *av) C_noret;
static void C_ccall trf_5442(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5442(t0,t1);}

C_noret_decl(trf_5445)
static void C_ccall trf_5445(C_word c,C_word *av) C_noret;
static void C_ccall trf_5445(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5445(t0,t1);}

C_noret_decl(trf_5448)
static void C_ccall trf_5448(C_word c,C_word *av) C_noret;
static void C_ccall trf_5448(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5448(t0,t1);}

C_noret_decl(trf_5451)
static void C_ccall trf_5451(C_word c,C_word *av) C_noret;
static void C_ccall trf_5451(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5451(t0,t1);}

C_noret_decl(trf_5456)
static void C_ccall trf_5456(C_word c,C_word *av) C_noret;
static void C_ccall trf_5456(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5456(t0,t1);}

C_noret_decl(trf_5461)
static void C_ccall trf_5461(C_word c,C_word *av) C_noret;
static void C_ccall trf_5461(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5461(t0,t1);}

C_noret_decl(trf_5466)
static void C_ccall trf_5466(C_word c,C_word *av) C_noret;
static void C_ccall trf_5466(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5466(t0,t1);}

C_noret_decl(trf_5471)
static void C_ccall trf_5471(C_word c,C_word *av) C_noret;
static void C_ccall trf_5471(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5471(t0,t1);}

C_noret_decl(trf_5476)
static void C_ccall trf_5476(C_word c,C_word *av) C_noret;
static void C_ccall trf_5476(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5476(t0,t1);}

C_noret_decl(trf_5502)
static void C_ccall trf_5502(C_word c,C_word *av) C_noret;
static void C_ccall trf_5502(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5502(t0,t1);}

C_noret_decl(trf_5505)
static void C_ccall trf_5505(C_word c,C_word *av) C_noret;
static void C_ccall trf_5505(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5505(t0,t1);}

C_noret_decl(trf_5508)
static void C_ccall trf_5508(C_word c,C_word *av) C_noret;
static void C_ccall trf_5508(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5508(t0,t1);}

C_noret_decl(trf_5511)
static void C_ccall trf_5511(C_word c,C_word *av) C_noret;
static void C_ccall trf_5511(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5511(t0,t1);}

C_noret_decl(trf_5514)
static void C_ccall trf_5514(C_word c,C_word *av) C_noret;
static void C_ccall trf_5514(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5514(t0,t1);}

C_noret_decl(trf_5589)
static void C_ccall trf_5589(C_word c,C_word *av) C_noret;
static void C_ccall trf_5589(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5589(t0,t1);}

C_noret_decl(trf_5603)
static void C_ccall trf_5603(C_word c,C_word *av) C_noret;
static void C_ccall trf_5603(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5603(t0,t1);}

C_noret_decl(trf_5628)
static void C_ccall trf_5628(C_word c,C_word *av) C_noret;
static void C_ccall trf_5628(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5628(t0,t1);}

C_noret_decl(trf_5656)
static void C_ccall trf_5656(C_word c,C_word *av) C_noret;
static void C_ccall trf_5656(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5656(t0,t1);}

C_noret_decl(trf_5736)
static void C_ccall trf_5736(C_word c,C_word *av) C_noret;
static void C_ccall trf_5736(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5736(t0,t1);}

C_noret_decl(trf_5755)
static void C_ccall trf_5755(C_word c,C_word *av) C_noret;
static void C_ccall trf_5755(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5755(t0,t1,t2);}

C_noret_decl(trf_5781)
static void C_ccall trf_5781(C_word c,C_word *av) C_noret;
static void C_ccall trf_5781(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5781(t0,t1);}

C_noret_decl(trf_5861)
static void C_ccall trf_5861(C_word c,C_word *av) C_noret;
static void C_ccall trf_5861(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5861(t0,t1);}

C_noret_decl(trf_5884)
static void C_ccall trf_5884(C_word c,C_word *av) C_noret;
static void C_ccall trf_5884(C_word c,C_word *av){
C_word t0=av[6];
C_word t1=av[5];
C_word t2=av[4];
C_word t3=av[3];
C_word t4=av[2];
C_word t5=av[1];
C_word t6=av[0];
f_5884(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_6156)
static void C_ccall trf_6156(C_word c,C_word *av) C_noret;
static void C_ccall trf_6156(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6156(t0,t1,t2);}

C_noret_decl(trf_6240)
static void C_ccall trf_6240(C_word c,C_word *av) C_noret;
static void C_ccall trf_6240(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6240(t0,t1);}

C_noret_decl(trf_6370)
static void C_ccall trf_6370(C_word c,C_word *av) C_noret;
static void C_ccall trf_6370(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6370(t0,t1,t2);}

C_noret_decl(trf_6393)
static void C_ccall trf_6393(C_word c,C_word *av) C_noret;
static void C_ccall trf_6393(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6393(t0,t1,t2);}

C_noret_decl(trf_6445)
static void C_ccall trf_6445(C_word c,C_word *av) C_noret;
static void C_ccall trf_6445(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6445(t0,t1,t2);}

C_noret_decl(trf_6492)
static void C_ccall trf_6492(C_word c,C_word *av) C_noret;
static void C_ccall trf_6492(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6492(t0,t1,t2);}

C_noret_decl(trf_6542)
static void C_ccall trf_6542(C_word c,C_word *av) C_noret;
static void C_ccall trf_6542(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6542(t0,t1,t2);}

C_noret_decl(trf_6637)
static void C_ccall trf_6637(C_word c,C_word *av) C_noret;
static void C_ccall trf_6637(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6637(t0,t1,t2);}

C_noret_decl(trf_6689)
static void C_ccall trf_6689(C_word c,C_word *av) C_noret;
static void C_ccall trf_6689(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6689(t0,t1,t2);}

C_noret_decl(trf_6750)
static void C_ccall trf_6750(C_word c,C_word *av) C_noret;
static void C_ccall trf_6750(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6750(t0,t1);}

C_noret_decl(trf_6780)
static void C_ccall trf_6780(C_word c,C_word *av) C_noret;
static void C_ccall trf_6780(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6780(t0,t1,t2);}

C_noret_decl(trf_6814)
static void C_ccall trf_6814(C_word c,C_word *av) C_noret;
static void C_ccall trf_6814(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6814(t0,t1,t2);}

C_noret_decl(trf_6848)
static void C_ccall trf_6848(C_word c,C_word *av) C_noret;
static void C_ccall trf_6848(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6848(t0,t1,t2);}

C_noret_decl(trf_6904)
static void C_ccall trf_6904(C_word c,C_word *av) C_noret;
static void C_ccall trf_6904(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6904(t0,t1,t2);}

C_noret_decl(trf_6951)
static void C_ccall trf_6951(C_word c,C_word *av) C_noret;
static void C_ccall trf_6951(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6951(t0,t1,t2);}

C_noret_decl(trf_6995)
static void C_ccall trf_6995(C_word c,C_word *av) C_noret;
static void C_ccall trf_6995(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6995(t0,t1,t2);}

C_noret_decl(trf_7032)
static void C_ccall trf_7032(C_word c,C_word *av) C_noret;
static void C_ccall trf_7032(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7032(t0,t1,t2);}

C_noret_decl(trf_7066)
static void C_ccall trf_7066(C_word c,C_word *av) C_noret;
static void C_ccall trf_7066(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7066(t0,t1,t2);}

C_noret_decl(trf_7125)
static void C_ccall trf_7125(C_word c,C_word *av) C_noret;
static void C_ccall trf_7125(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7125(t0,t1);}

C_noret_decl(trf_7269)
static void C_ccall trf_7269(C_word c,C_word *av) C_noret;
static void C_ccall trf_7269(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7269(t0,t1,t2);}

C_noret_decl(trf_7315)
static void C_ccall trf_7315(C_word c,C_word *av) C_noret;
static void C_ccall trf_7315(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7315(t0,t1,t2);}

C_noret_decl(trf_7384)
static void C_ccall trf_7384(C_word c,C_word *av) C_noret;
static void C_ccall trf_7384(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7384(t0,t1,t2);}

C_noret_decl(trf_7422)
static void C_ccall trf_7422(C_word c,C_word *av) C_noret;
static void C_ccall trf_7422(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7422(t0,t1,t2);}

C_noret_decl(trf_7445)
static void C_ccall trf_7445(C_word c,C_word *av) C_noret;
static void C_ccall trf_7445(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7445(t0,t1,t2);}

C_noret_decl(trf_7478)
static void C_ccall trf_7478(C_word c,C_word *av) C_noret;
static void C_ccall trf_7478(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7478(t0,t1,t2);}

C_noret_decl(trf_7547)
static void C_ccall trf_7547(C_word c,C_word *av) C_noret;
static void C_ccall trf_7547(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7547(t0,t1,t2);}

C_noret_decl(trf_7570)
static void C_ccall trf_7570(C_word c,C_word *av) C_noret;
static void C_ccall trf_7570(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7570(t0,t1,t2);}

C_noret_decl(trf_7633)
static void C_ccall trf_7633(C_word c,C_word *av) C_noret;
static void C_ccall trf_7633(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7633(t0,t1,t2);}

C_noret_decl(trf_7863)
static void C_ccall trf_7863(C_word c,C_word *av) C_noret;
static void C_ccall trf_7863(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7863(t0,t1,t2);}

C_noret_decl(trf_7927)
static void C_ccall trf_7927(C_word c,C_word *av) C_noret;
static void C_ccall trf_7927(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7927(t0,t1,t2);}

C_noret_decl(trf_7998)
static void C_ccall trf_7998(C_word c,C_word *av) C_noret;
static void C_ccall trf_7998(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7998(t0,t1,t2);}

C_noret_decl(trf_8038)
static void C_ccall trf_8038(C_word c,C_word *av) C_noret;
static void C_ccall trf_8038(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8038(t0,t1,t2);}

C_noret_decl(trf_8100)
static void C_ccall trf_8100(C_word c,C_word *av) C_noret;
static void C_ccall trf_8100(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8100(t0,t1);}

C_noret_decl(trf_8107)
static void C_ccall trf_8107(C_word c,C_word *av) C_noret;
static void C_ccall trf_8107(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8107(t0,t1);}

/* f8651 in k6076 in k6073 in k6070 in k6067 in k6064 in k6061 in k6058 in k6055 in a6052 in k6040 in k6037 in k6034 in k6031 in k6028 in k6025 in k6022 in k6018 in k6015 in k6012 in k6009 in k5902 in ... */
static void C_ccall f8651(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f8651,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9128,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t2;
av2[2]=*((C_word*)lf[184]+1);
av2[3]=lf[185];
av2[4]=C_SCHEME_END_OF_LIST;
C_apply(5,av2);}}

/* f9122 in k6082 in k6079 in k6076 in k6073 in k6070 in k6067 in k6064 in k6061 in k6058 in k6055 in a6052 in k6040 in k6037 in k6034 in k6031 in k6028 in k6025 in k6022 in k6018 in k6015 in k6012 in ... */
static void C_ccall f9122(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9122,c,av);}
/* batch-driver.scm:257: chicken.compiler.support#debugging */
t2=*((C_word*)lf[104]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[105];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* f9128 */
static void C_ccall f9128(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9128,c,av);}
/* batch-driver.scm:257: chicken.compiler.support#debugging */
t2=*((C_word*)lf[104]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[105];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* f9134 in k6064 in k6061 in k6058 in k6055 in a6052 in k6040 in k6037 in k6034 in k6031 in k6028 in k6025 in k6022 in k6018 in k6015 in k6012 in k6009 in k5902 in k5899 in k5896 in k5892 in k5889 in ... */
static void C_ccall f9134(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9134,c,av);}
/* batch-driver.scm:257: chicken.compiler.support#debugging */
t2=*((C_word*)lf[104]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[105];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* f9140 in k6058 in k6055 in a6052 in k6040 in k6037 in k6034 in k6031 in k6028 in k6025 in k6022 in k6018 in k6015 in k6012 in k6009 in k5902 in k5899 in k5896 in k5892 in k5889 in k5886 in loop in ... */
static void C_ccall f9140(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9140,c,av);}
/* batch-driver.scm:257: chicken.compiler.support#debugging */
t2=*((C_word*)lf[104]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[105];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* f9148 in k6012 in k6009 in k5902 in k5899 in k5896 in k5892 in k5889 in k5886 in loop in k5877 in k5874 in k5871 in k5868 in k5865 in k5859 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in ... */
static void C_ccall f9148(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9148,c,av);}
/* batch-driver.scm:257: chicken.compiler.support#debugging */
t2=*((C_word*)lf[104]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[105];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* f9154 in k6238 in k6235 in k6232 in k6229 in k6226 in k5889 in k5886 in loop in k5877 in k5874 in k5871 in k5868 in k5865 in k5859 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in ... */
static void C_ccall f9154(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9154,c,av);}
/* batch-driver.scm:257: chicken.compiler.support#debugging */
t2=*((C_word*)lf[104]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[105];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* f9166 in for-each-loop1996 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5821 in k5818 in k5815 in k5812 in k5809 in k5806 in k5800 in k5785 in k5779 in k5776 in ... */
static void C_ccall f9166(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9166,c,av);}
/* batch-driver.scm:257: chicken.compiler.support#debugging */
t2=*((C_word*)lf[104]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[105];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* f9174 in k6469 in for-each-loop1974 in k5847 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5821 in k5818 in k5815 in k5812 in k5809 in k5806 in k5800 in k5785 in k5779 in k5776 in k5749 in ... */
static void C_ccall f9174(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9174,c,av);}
/* batch-driver.scm:257: chicken.compiler.support#debugging */
t2=*((C_word*)lf[104]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[105];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* f9184 in k5835 in k5832 in k5829 in k5826 in k5821 in k5818 in k5815 in k5812 in k5809 in k5806 in k5800 in k5785 in k5779 in k5776 in k5749 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in ... */
static void C_ccall f9184(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9184,c,av);}
/* batch-driver.scm:257: chicken.compiler.support#debugging */
t2=*((C_word*)lf[104]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[105];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* f9204 in k5731 in k5728 in k5725 in k5722 in k5719 in k5716 in k5713 in k5709 in k5705 in k5702 in k5699 in k5696 in k5693 in k5654 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5609 in ... */
static void C_ccall f9204(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9204,c,av);}
/* batch-driver.scm:257: chicken.compiler.support#debugging */
t2=*((C_word*)lf[104]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[105];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* f9210 in k5725 in k5722 in k5719 in k5716 in k5713 in k5709 in k5705 in k5702 in k5699 in k5696 in k5693 in k5654 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5609 in k5605 in k5601 in ... */
static void C_ccall f9210(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9210,c,av);}
/* batch-driver.scm:257: chicken.compiler.support#debugging */
t2=*((C_word*)lf[104]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[105];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* f9224 in k5654 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5609 in k5605 in k5601 in k5598 in k5594 in k5590 in k5587 in k5584 in k5581 in k5573 in k5569 in k5546 in k5543 in k5536 in ... */
static void C_ccall f9224(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9224,c,av);}
/* batch-driver.scm:257: chicken.compiler.support#debugging */
t2=*((C_word*)lf[104]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[105];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* f9230 in k7184 in k7178 in k5629 in k5626 in k5623 in k5620 in k5609 in k5605 in k5601 in k5598 in k5594 in k5590 in k5587 in k5584 in k5581 in k5573 in k5569 in k5546 in k5543 in k5536 in k5530 in ... */
static void C_ccall f9230(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9230,c,av);}
/* batch-driver.scm:257: chicken.compiler.support#debugging */
t2=*((C_word*)lf[104]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[105];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* f9236 in k7184 in k7178 in k5629 in k5626 in k5623 in k5620 in k5609 in k5605 in k5601 in k5598 in k5594 in k5590 in k5587 in k5584 in k5581 in k5573 in k5569 in k5546 in k5543 in k5536 in k5530 in ... */
static void C_ccall f9236(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9236,c,av);}
/* batch-driver.scm:257: chicken.compiler.support#debugging */
t2=*((C_word*)lf[104]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[105];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* f9242 in k5626 in k5623 in k5620 in k5609 in k5605 in k5601 in k5598 in k5594 in k5590 in k5587 in k5584 in k5581 in k5573 in k5569 in k5546 in k5543 in k5536 in k5530 in k5527 in k5521 in k5518 in ... */
static void C_ccall f9242(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9242,c,av);}
/* batch-driver.scm:257: chicken.compiler.support#debugging */
t2=*((C_word*)lf[104]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[105];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* f9248 in k5626 in k5623 in k5620 in k5609 in k5605 in k5601 in k5598 in k5594 in k5590 in k5587 in k5584 in k5581 in k5573 in k5569 in k5546 in k5543 in k5536 in k5530 in k5527 in k5521 in k5518 in ... */
static void C_ccall f9248(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9248,c,av);}
/* batch-driver.scm:257: chicken.compiler.support#debugging */
t2=*((C_word*)lf[104]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[105];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* f9268 in k5543 in k5536 in k5530 in k5527 in k5521 in k5518 in k5515 in k5512 in k5509 in k5506 in k5503 in k5500 in k5497 in k5494 in k5489 in k5486 in k5483 in k5480 in k5477 in k5474 in k5469 in ... */
static void C_ccall f9268(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9268,c,av);}
/* batch-driver.scm:257: chicken.compiler.support#debugging */
t2=*((C_word*)lf[104]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[105];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* f9284 in k5486 in k5483 in k5480 in k5477 in k5474 in k5469 in k5464 in k5459 in k5454 in k5449 in k5446 in k5443 in k5440 in k5437 in k5434 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in ... */
static void C_ccall f9284(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9284,c,av);}
/* batch-driver.scm:257: chicken.compiler.support#debugging */
t2=*((C_word*)lf[104]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[105];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* f9290 in k5483 in k5480 in k5477 in k5474 in k5469 in k5464 in k5459 in k5454 in k5449 in k5446 in k5443 in k5440 in k5437 in k5434 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in ... */
static void C_ccall f9290(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9290,c,av);}
/* batch-driver.scm:257: chicken.compiler.support#debugging */
t2=*((C_word*)lf[104]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[105];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* f9296 in k5480 in k5477 in k5474 in k5469 in k5464 in k5459 in k5454 in k5449 in k5446 in k5443 in k5440 in k5437 in k5434 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in ... */
static void C_ccall f9296(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9296,c,av);}
/* batch-driver.scm:257: chicken.compiler.support#debugging */
t2=*((C_word*)lf[104]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[105];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* f9302 in k5474 in k5469 in k5464 in k5459 in k5454 in k5449 in k5446 in k5443 in k5440 in k5437 in k5434 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in ... */
static void C_ccall f9302(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9302,c,av);}
/* batch-driver.scm:257: chicken.compiler.support#debugging */
t2=*((C_word*)lf[104]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[105];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* f9308 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in k5401 in k5398 in k5395 in k5392 in k5389 in k5386 in k5380 in k5354 in k5351 in k5344 in k5341 in k5338 in k4962 in k4937 in k4932 in ... */
static void C_ccall f9308(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9308,c,av);}
/* batch-driver.scm:257: chicken.compiler.support#debugging */
t2=*((C_word*)lf[104]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[105];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k2686 */
static void C_ccall f_2688(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2688,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2691,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k2689 in k2686 */
static void C_ccall f_2691(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2691,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2694,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

/* k2692 in k2689 in k2686 */
static void C_ccall f_2694(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2694,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2697,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_data_2dstructures_toplevel(2,av2);}}

/* k2695 in k2692 in k2689 in k2686 */
static void C_ccall f_2697(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2697,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2700,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_pathname_toplevel(2,av2);}}

/* k2698 in k2695 in k2692 in k2689 in k2686 */
static void C_ccall f_2700(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2700,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2703,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_support_toplevel(2,av2);}}

/* k2701 in k2698 in k2695 in k2692 in k2689 in k2686 */
static void C_ccall f_2703(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2703,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2706,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_compiler_2dsyntax_toplevel(2,av2);}}

/* k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 */
static void C_ccall f_2706(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2706,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2709,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_compiler_toplevel(2,av2);}}

/* k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 */
static void C_ccall f_2709(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2709,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2712,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_optimizer_toplevel(2,av2);}}

/* k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 */
static void C_ccall f_2712(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2712,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2715,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_internal_toplevel(2,av2);}}

/* k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 */
static void C_ccall f_2715(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2715,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2718,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_scrutinizer_toplevel(2,av2);}}

/* k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 */
static void C_ccall f_2718(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2718,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2721,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_lfa2_toplevel(2,av2);}}

/* k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 */
static void C_ccall f_2721(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2721,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2724,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_c_2dplatform_toplevel(2,av2);}}

/* k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 */
static void C_ccall f_2724(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2724,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2727,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_c_2dbackend_toplevel(2,av2);}}

/* k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 */
static void C_ccall f_2727(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2727,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2730,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_user_2dpass_toplevel(2,av2);}}

/* k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 */
static void C_ccall f_2730(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(32,c,5)))){
C_save_and_reclaim((void *)f_2730,c,av);}
a=C_alloc(32);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=C_mutate(&lf[2] /* (set! chicken.compiler.batch-driver#append-map ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2931,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate(&lf[6] /* (set! chicken.compiler.batch-driver#any ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3135,tmp=(C_word)a,a+=2,tmp));
t6=C_SCHEME_TRUE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_mutate(&lf[8] /* (set! chicken.compiler.batch-driver#initialize-analysis-database ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4109,a[2]=t7,tmp=(C_word)a,a+=3,tmp));
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_mutate(&lf[18] /* (set! chicken.compiler.batch-driver#display-analysis-database ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4218,a[2]=t10,tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[79]+1 /* (set! chicken.compiler.batch-driver#compile-source-file ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4855,tmp=(C_word)a,a+=2,tmp));
t13=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t13;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}

/* chicken.compiler.batch-driver#append-map in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 */
static void C_fcall f_2931(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_2931,4,t1,t2,t3,t4);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t4))){
t5=C_i_check_list_2(t3,lf[3]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2946,a[2]=t2,a[3]=t7,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_2946(t9,t1,t3);}
else{
t5=C_a_i_cons(&a,2,t3,t4);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2986,a[2]=t7,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_2986(t9,t1,t5);}}

/* foldr263 in chicken.compiler.batch-driver#append-map in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 */
static void C_fcall f_2946(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_2946,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2954,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2973,a[2]=t3,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t7=t5;
t8=C_slot(t2,C_fix(1));
t1=t7;
t2=t8;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* g268 in foldr263 in chicken.compiler.batch-driver#append-map in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 */
static void C_fcall f_2954(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_2954,4,t0,t1,t2,t3);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2962,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* mini-srfi-1.scm:72: proc */
t5=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k2960 in g268 in foldr263 in chicken.compiler.batch-driver#append-map in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 */
static void C_ccall f_2962(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2962,c,av);}
/* mini-srfi-1.scm:72: scheme#append */
t2=*((C_word*)lf[4]+1);{
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

/* k2971 in foldr263 in chicken.compiler.batch-driver#append-map in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 */
static void C_ccall f_2973(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2973,c,av);}
/* mini-srfi-1.scm:72: g268 */
t2=((C_word*)t0)[2];
f_2954(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* loop in chicken.compiler.batch-driver#append-map in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 */
static void C_fcall f_2986(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_2986,3,t0,t1,t2);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2993,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* mini-srfi-1.scm:74: any */
f_3135(t3,*((C_word*)lf[7]+1),t2);}

/* k2991 in loop in chicken.compiler.batch-driver#append-map in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 */
static void C_ccall f_2993(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,3)))){
C_save_and_reclaim((void *)f_2993,c,av);}
a=C_alloc(21);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3000,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_i_check_list_2(((C_word*)t0)[4],lf[5]);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3065,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3067,a[2]=t5,a[3]=t10,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_3067(t12,t8,((C_word*)t0)[4]);}}

/* k2998 in k2991 in loop in chicken.compiler.batch-driver#append-map in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 */
static void C_ccall f_3000(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(20,c,3)))){
C_save_and_reclaim((void *)f_3000,c,av);}
a=C_alloc(20);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3004,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3016,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3018,a[2]=t5,a[3]=t9,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_3018(t11,t7,((C_word*)t0)[4]);}

/* k3002 in k2998 in k2991 in loop in chicken.compiler.batch-driver#append-map in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 */
static void C_ccall f_3004(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3004,c,av);}
/* mini-srfi-1.scm:76: scheme#append */
t2=*((C_word*)lf[4]+1);{
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

/* k3014 in k2998 in k2991 in loop in chicken.compiler.batch-driver#append-map in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 */
static void C_ccall f_3016(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3016,c,av);}
/* mini-srfi-1.scm:77: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2986(t2,((C_word*)t0)[3],t1);}

/* map-loop305 in k2998 in k2991 in loop in chicken.compiler.batch-driver#append-map in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 */
static void C_fcall f_3018(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_3018,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cdr(t3);
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

/* k3063 in k2991 in loop in chicken.compiler.batch-driver#append-map in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 */
static void C_ccall f_3065(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3065,c,av);}{
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

/* map-loop278 in k2991 in loop in chicken.compiler.batch-driver#append-map in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 */
static void C_fcall f_3067(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_3067,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
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

/* chicken.compiler.batch-driver#any in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 */
static void C_fcall f_3135(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_3135,3,t1,t2,t3);}
a=C_alloc(6);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3141,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_3141(t7,t1,t3);}

/* loop in chicken.compiler.batch-driver#any in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 */
static void C_fcall f_3141(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3141,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3151,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* mini-srfi-1.scm:88: pred */
t4=((C_word*)t0)[3];{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_i_car(t2);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k3149 in loop in chicken.compiler.batch-driver#any in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 */
static void C_ccall f_3151(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3151,c,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* mini-srfi-1.scm:89: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_3141(t2,((C_word*)t0)[2],C_u_i_cdr(((C_word*)t0)[4]));}}

/* loop in k5569 in k5546 in k5543 in k5536 in k5530 in k5527 in k5521 in k5518 in k5515 in k5512 in k5509 in k5506 in k5503 in k5500 in k5497 in k5494 in k5489 in k5486 in k5483 in k5480 in k5477 in ... */
static void C_fcall f_3227(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_3227,3,t0,t1,t2);}
a=C_alloc(4);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_car(t2);
t4=C_eqp(lf[135],t3);
if(C_truep(t4)){
/* mini-srfi-1.scm:107: loop */
t8=t1;
t9=C_u_i_cdr(t2);
t1=t8;
t2=t9;
goto loop;}
else{
t5=C_u_i_car(t2);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3254,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* mini-srfi-1.scm:109: loop */
t8=t6;
t9=C_u_i_cdr(t2);
t1=t8;
t2=t9;
goto loop;}}}

/* k3252 in loop in k5569 in k5546 in k5543 in k5536 in k5530 in k5527 in k5521 in k5518 in k5515 in k5512 in k5509 in k5506 in k5503 in k5500 in k5497 in k5494 in k5489 in k5486 in k5483 in k5480 in ... */
static void C_ccall f_3254(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_3254,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* foldl538 in k5590 in k5587 in k5584 in k5581 in k5573 in k5569 in k5546 in k5543 in k5536 in k5530 in k5527 in k5521 in k5518 in k5515 in k5512 in k5509 in k5506 in k5503 in k5500 in k5497 in k5494 in ... */
static void C_fcall f_3652(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,0,4)))){
C_save_and_reclaim_args((void *)trf_3652,4,t0,t1,t2,t3);}
a=C_alloc(10);
if(C_truep(C_i_pairp(t2))){
t4=C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3719,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=C_slot(t2,C_fix(0));
t7=C_i_check_list_2(t6,lf[372]);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3677,a[2]=t9,tmp=(C_word)a,a+=3,tmp));
t11=((C_word*)t9)[1];
f_3677(t11,t5,t6,t3);}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* foldl554 in foldl538 in k5590 in k5587 in k5584 in k5581 in k5573 in k5569 in k5546 in k5543 in k5536 in k5530 in k5527 in k5521 in k5518 in k5515 in k5512 in k5509 in k5506 in k5503 in k5500 in k5497 in ... */
static void C_fcall f_3677(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,3)))){
C_save_and_reclaim_args((void *)trf_3677,4,t0,t1,t2,t3);}
a=C_alloc(10);
if(C_truep(C_i_pairp(t2))){
t4=C_slot(t2,C_fix(1));
t5=C_slot(t2,C_fix(0));
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3700,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t4,a[5]=t3,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3705,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* mini-srfi-1.scm:175: any */
f_3135(t6,t7,t3);}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3698 in foldl554 in foldl538 in k5590 in k5587 in k5584 in k5581 in k5573 in k5569 in k5546 in k5543 in k5536 in k5530 in k5527 in k5521 in k5518 in k5515 in k5512 in k5509 in k5506 in k5503 in k5500 in ... */
static void C_ccall f_3700(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3700,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=((C_word*)((C_word*)t0)[2])[1];
f_3677(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
t2=C_a_i_cons(&a,2,((C_word*)t0)[6],((C_word*)t0)[5]);
t3=((C_word*)((C_word*)t0)[2])[1];
f_3677(t3,((C_word*)t0)[3],((C_word*)t0)[4],t2);}}

/* a3704 in foldl554 in foldl538 in k5590 in k5587 in k5584 in k5581 in k5573 in k5569 in k5546 in k5543 in k5536 in k5530 in k5527 in k5521 in k5518 in k5515 in k5512 in k5509 in k5506 in k5503 in k5500 in ... */
static void C_ccall f_3705(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3705,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_eqp(t2,((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3717 in foldl538 in k5590 in k5587 in k5584 in k5581 in k5573 in k5569 in k5546 in k5543 in k5536 in k5530 in k5527 in k5521 in k5518 in k5515 in k5512 in k5509 in k5506 in k5503 in k5500 in k5497 in ... */
static void C_ccall f_3719(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3719,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_3652(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* a4015 in k5899 in k5896 in k5892 in k5889 in k5886 in loop in k5877 in k5874 in k5871 in k5868 in k5865 in k5859 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5835 in k5832 in ... */
static void C_ccall f_4016(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4016,c,av);}
/* batch-driver.scm:70: chicken.compiler.core#compute-database-statistics */
t2=*((C_word*)lf[223]+1);{
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

/* a4021 in k5899 in k5896 in k5892 in k5889 in k5886 in loop in k5877 in k5874 in k5871 in k5868 in k5865 in k5859 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5835 in k5832 in ... */
static void C_ccall f_4022(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6=av[6];
C_word t7=av[7];
C_word t8=av[8];
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_4022,c,av);}
a=C_alloc(10);
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4029,a[2]=t1,a[3]=t8,a[4]=t7,a[5]=t6,a[6]=t5,a[7]=t4,a[8]=t3,a[9]=t2,tmp=(C_word)a,a+=10,tmp);
/* batch-driver.scm:71: chicken.compiler.support#debugging */
t10=*((C_word*)lf[104]+1);{
C_word *av2=av;
av2[0]=t10;
av2[1]=t9;
av2[2]=lf[222];
av2[3]=lf[231];
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}

/* k4027 in a4021 in k5899 in k5896 in k5892 in k5889 in k5886 in loop in k5877 in k5874 in k5871 in k5868 in k5865 in k5859 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5835 in ... */
static void C_ccall f_4029(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_4029,c,av);}
a=C_alloc(11);
if(C_truep(t1)){
t2=*((C_word*)lf[20]+1);
t3=*((C_word*)lf[20]+1);
t4=C_i_check_port_2(*((C_word*)lf[20]+1),C_fix(2),C_SCHEME_TRUE,lf[21]);
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4035,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* batch-driver.scm:72: ##sys#print */
t6=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[230];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[20]+1);
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4033 in k4027 in a4021 in k5899 in k5896 in k5892 in k5889 in k5886 in loop in k5877 in k5874 in k5871 in k5868 in k5865 in k5859 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in ... */
static void C_ccall f_4035(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_4035,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4038,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* batch-driver.scm:72: ##sys#print */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[10];
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4036 in k4033 in k4027 in a4021 in k5899 in k5896 in k5892 in k5889 in k5886 in loop in k5877 in k5874 in k5871 in k5868 in k5865 in k5859 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in ... */
static void C_ccall f_4038(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_4038,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4041,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* batch-driver.scm:72: ##sys#print */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[229];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4039 in k4036 in k4033 in k4027 in a4021 in k5899 in k5896 in k5892 in k5889 in k5886 in loop in k5877 in k5874 in k5871 in k5868 in k5865 in k5859 in k5856 in k5853 in k5850 in k5847 in k5844 in ... */
static void C_ccall f_4041(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_4041,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4044,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* batch-driver.scm:72: ##sys#print */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[9];
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4042 in k4039 in k4036 in k4033 in k4027 in a4021 in k5899 in k5896 in k5892 in k5889 in k5886 in loop in k5877 in k5874 in k5871 in k5868 in k5865 in k5859 in k5856 in k5853 in k5850 in k5847 in ... */
static void C_ccall f_4044(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_4044,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4047,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* batch-driver.scm:72: ##sys#write-char-0 */
t3=*((C_word*)lf[34]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k4045 in k4042 in k4039 in k4036 in k4033 in k4027 in a4021 in k5899 in k5896 in k5892 in k5889 in k5886 in loop in k5877 in k5874 in k5871 in k5868 in k5865 in k5859 in k5856 in k5853 in k5850 in ... */
static void C_ccall f_4047(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4047,c,av);}
a=C_alloc(9);
t2=*((C_word*)lf[20]+1);
t3=*((C_word*)lf[20]+1);
t4=C_i_check_port_2(*((C_word*)lf[20]+1),C_fix(2),C_SCHEME_TRUE,lf[21]);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4053,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* batch-driver.scm:73: ##sys#print */
t6=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[228];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[20]+1);
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k4051 in k4045 in k4042 in k4039 in k4036 in k4033 in k4027 in a4021 in k5899 in k5896 in k5892 in k5889 in k5886 in loop in k5877 in k5874 in k5871 in k5868 in k5865 in k5859 in k5856 in k5853 in ... */
static void C_ccall f_4053(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_4053,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4056,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* batch-driver.scm:73: ##sys#print */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[8];
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4054 in k4051 in k4045 in k4042 in k4039 in k4036 in k4033 in k4027 in a4021 in k5899 in k5896 in k5892 in k5889 in k5886 in loop in k5877 in k5874 in k5871 in k5868 in k5865 in k5859 in k5856 in ... */
static void C_ccall f_4056(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_4056,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4059,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* batch-driver.scm:73: ##sys#write-char-0 */
t3=*((C_word*)lf[34]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k4057 in k4054 in k4051 in k4045 in k4042 in k4039 in k4036 in k4033 in k4027 in a4021 in k5899 in k5896 in k5892 in k5889 in k5886 in loop in k5877 in k5874 in k5871 in k5868 in k5865 in k5859 in ... */
static void C_ccall f_4059(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_4059,c,av);}
a=C_alloc(8);
t2=*((C_word*)lf[20]+1);
t3=*((C_word*)lf[20]+1);
t4=C_i_check_port_2(*((C_word*)lf[20]+1),C_fix(2),C_SCHEME_TRUE,lf[21]);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4065,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* batch-driver.scm:74: ##sys#print */
t6=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[227];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[20]+1);
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k4063 in k4057 in k4054 in k4051 in k4045 in k4042 in k4039 in k4036 in k4033 in k4027 in a4021 in k5899 in k5896 in k5892 in k5889 in k5886 in loop in k5877 in k5874 in k5871 in k5868 in k5865 in ... */
static void C_ccall f_4065(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_4065,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4068,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* batch-driver.scm:74: ##sys#print */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4066 in k4063 in k4057 in k4054 in k4051 in k4045 in k4042 in k4039 in k4036 in k4033 in k4027 in a4021 in k5899 in k5896 in k5892 in k5889 in k5886 in loop in k5877 in k5874 in k5871 in k5868 in ... */
static void C_ccall f_4068(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4068,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4071,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:74: ##sys#write-char-0 */
t3=*((C_word*)lf[34]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k4069 in k4066 in k4063 in k4057 in k4054 in k4051 in k4045 in k4042 in k4039 in k4036 in k4033 in k4027 in a4021 in k5899 in k5896 in k5892 in k5889 in k5886 in loop in k5877 in k5874 in k5871 in ... */
static void C_ccall f_4071(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_4071,c,av);}
a=C_alloc(7);
t2=*((C_word*)lf[20]+1);
t3=*((C_word*)lf[20]+1);
t4=C_i_check_port_2(*((C_word*)lf[20]+1),C_fix(2),C_SCHEME_TRUE,lf[21]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4077,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* batch-driver.scm:75: ##sys#print */
t6=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[226];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[20]+1);
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k4075 in k4069 in k4066 in k4063 in k4057 in k4054 in k4051 in k4045 in k4042 in k4039 in k4036 in k4033 in k4027 in a4021 in k5899 in k5896 in k5892 in k5889 in k5886 in loop in k5877 in k5874 in ... */
static void C_ccall f_4077(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_4077,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4080,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:75: ##sys#print */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4078 in k4075 in k4069 in k4066 in k4063 in k4057 in k4054 in k4051 in k4045 in k4042 in k4039 in k4036 in k4033 in k4027 in a4021 in k5899 in k5896 in k5892 in k5889 in k5886 in loop in k5877 in ... */
static void C_ccall f_4080(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4080,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4083,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:75: ##sys#write-char-0 */
t3=*((C_word*)lf[34]+1);{
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

/* k4081 in k4078 in k4075 in k4069 in k4066 in k4063 in k4057 in k4054 in k4051 in k4045 in k4042 in k4039 in k4036 in k4033 in k4027 in a4021 in k5899 in k5896 in k5892 in k5889 in k5886 in loop in ... */
static void C_ccall f_4083(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_4083,c,av);}
a=C_alloc(6);
t2=*((C_word*)lf[20]+1);
t3=*((C_word*)lf[20]+1);
t4=C_i_check_port_2(*((C_word*)lf[20]+1),C_fix(2),C_SCHEME_TRUE,lf[21]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4089,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:76: ##sys#print */
t6=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[225];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[20]+1);
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k4087 in k4081 in k4078 in k4075 in k4069 in k4066 in k4063 in k4057 in k4054 in k4051 in k4045 in k4042 in k4039 in k4036 in k4033 in k4027 in a4021 in k5899 in k5896 in k5892 in k5889 in k5886 in ... */
static void C_ccall f_4089(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_4089,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4092,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:76: ##sys#print */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4090 in k4087 in k4081 in k4078 in k4075 in k4069 in k4066 in k4063 in k4057 in k4054 in k4051 in k4045 in k4042 in k4039 in k4036 in k4033 in k4027 in a4021 in k5899 in k5896 in k5892 in k5889 in ... */
static void C_ccall f_4092(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_4092,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4095,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:76: ##sys#write-char-0 */
t3=*((C_word*)lf[34]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k4093 in k4090 in k4087 in k4081 in k4078 in k4075 in k4069 in k4066 in k4063 in k4057 in k4054 in k4051 in k4045 in k4042 in k4039 in k4036 in k4033 in k4027 in a4021 in k5899 in k5896 in k5892 in ... */
static void C_ccall f_4095(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_4095,c,av);}
a=C_alloc(5);
t2=*((C_word*)lf[20]+1);
t3=*((C_word*)lf[20]+1);
t4=C_i_check_port_2(*((C_word*)lf[20]+1),C_fix(2),C_SCHEME_TRUE,lf[21]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4101,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:77: ##sys#print */
t6=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[224];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[20]+1);
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k4099 in k4093 in k4090 in k4087 in k4081 in k4078 in k4075 in k4069 in k4066 in k4063 in k4057 in k4054 in k4051 in k4045 in k4042 in k4039 in k4036 in k4033 in k4027 in a4021 in k5899 in k5896 in ... */
static void C_ccall f_4101(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_4101,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4104,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:77: ##sys#print */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4102 in k4099 in k4093 in k4090 in k4087 in k4081 in k4078 in k4075 in k4069 in k4066 in k4063 in k4057 in k4054 in k4051 in k4045 in k4042 in k4039 in k4036 in k4033 in k4027 in a4021 in k5899 in ... */
static void C_ccall f_4104(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4104,c,av);}
/* batch-driver.scm:77: ##sys#write-char-0 */
t2=*((C_word*)lf[34]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.compiler.batch-driver#initialize-analysis-database in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 */
static void C_fcall f_4109(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_4109,2,t0,t1);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4113,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=*((C_word*)lf[9]+1);
t4=C_i_check_list_2(*((C_word*)lf[9]+1),lf[10]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4125,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4195,a[2]=t7,tmp=(C_word)a,a+=3,tmp));
t9=((C_word*)t7)[1];
f_4195(t9,t5,*((C_word*)lf[9]+1));}
else{
t3=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4111 in chicken.compiler.batch-driver#initialize-analysis-database in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 */
static void C_ccall f_4113(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4113,c,av);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k4123 in chicken.compiler.batch-driver#initialize-analysis-database in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 */
static void C_ccall f_4125(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4125,c,av);}
a=C_alloc(8);
t2=*((C_word*)lf[11]+1);
t3=C_i_check_list_2(*((C_word*)lf[11]+1),lf[10]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4136,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4172,a[2]=t6,tmp=(C_word)a,a+=3,tmp));
t8=((C_word*)t6)[1];
f_4172(t8,t4,*((C_word*)lf[11]+1));}

/* k4134 in k4123 in chicken.compiler.batch-driver#initialize-analysis-database in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 */
static void C_ccall f_4136(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4136,c,av);}
a=C_alloc(5);
t2=*((C_word*)lf[12]+1);
t3=C_i_check_list_2(*((C_word*)lf[12]+1),lf[10]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4149,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_4149(t7,((C_word*)t0)[2],*((C_word*)lf[12]+1));}

/* for-each-loop796 in k4134 in k4123 in chicken.compiler.batch-driver#initialize-analysis-database in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 */
static void C_fcall f_4149(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_4149,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4159,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:99: chicken.compiler.support#mark-variable */
t4=*((C_word*)lf[13]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_slot(t2,C_fix(0));
av2[3]=lf[14];
av2[4]=lf[15];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4157 in for-each-loop796 in k4134 in k4123 in chicken.compiler.batch-driver#initialize-analysis-database in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 */
static void C_ccall f_4159(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4159,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_4149(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* for-each-loop778 in k4123 in chicken.compiler.batch-driver#initialize-analysis-database in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 */
static void C_fcall f_4172(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_4172,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4182,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:95: chicken.compiler.support#mark-variable */
t4=*((C_word*)lf[13]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_slot(t2,C_fix(0));
av2[3]=lf[14];
av2[4]=lf[16];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4180 in for-each-loop778 in k4123 in chicken.compiler.batch-driver#initialize-analysis-database in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 */
static void C_ccall f_4182(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4182,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_4172(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* for-each-loop760 in chicken.compiler.batch-driver#initialize-analysis-database in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 */
static void C_fcall f_4195(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_4195,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4205,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:91: chicken.compiler.support#mark-variable */
t4=*((C_word*)lf[13]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_slot(t2,C_fix(0));
av2[3]=lf[14];
av2[4]=lf[17];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4203 in for-each-loop760 in chicken.compiler.batch-driver#initialize-analysis-database in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 */
static void C_ccall f_4205(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4205,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_4195(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* chicken.compiler.batch-driver#display-analysis-database in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 */
static void C_fcall f_4218(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_4218,3,t0,t1,t2);}
a=C_alloc(9);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4222,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t4=t3;
f_4222(t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4853,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:120: scheme#append */
t5=*((C_word*)lf[4]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t4;
av2[2]=*((C_word*)lf[77]+1);
av2[3]=*((C_word*)lf[78]+1);
av2[4]=*((C_word*)lf[12]+1);
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}}

/* k4220 in chicken.compiler.batch-driver#display-analysis-database in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 */
static void C_fcall f_4222(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,4)))){
C_save_and_reclaim_args((void *)trf_4222,2,t0,t1);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4227,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:123: chicken.internal#hash-table-for-each */
t3=*((C_word*)lf[76]+1);{
C_word av2[4];
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* a4226 in k4220 in chicken.compiler.batch-driver#display-analysis-database in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 */
static void C_ccall f_4227(C_word c,C_word *av){
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
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(22,c,2)))){
C_save_and_reclaim((void *)f_4227,c,av);}
a=C_alloc(22);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_END_OF_LIST;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_END_OF_LIST;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_SCHEME_END_OF_LIST;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
if(C_truep(C_i_memq(t2,((C_word*)((C_word*)t0)[2])[1]))){
t16=C_SCHEME_UNDEFINED;
t17=t1;{
C_word *av2=av;
av2[0]=t17;
av2[1]=t16;
((C_proc)(void*)(*((C_word*)t17+1)))(2,av2);}}
else{
t16=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4237,a[2]=t1,a[3]=t9,a[4]=t5,a[5]=t7,a[6]=t11,a[7]=t15,a[8]=t13,a[9]=t3,tmp=(C_word)a,a+=10,tmp);
/* batch-driver.scm:132: scheme#write */
t17=*((C_word*)lf[75]+1);{
C_word *av2=av;
av2[0]=t17;
av2[1]=t16;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t17+1)))(3,av2);}}}

/* k4235 in a4226 in k4220 in chicken.compiler.batch-driver#display-analysis-database in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 */
static void C_ccall f_4237(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(20,c,3)))){
C_save_and_reclaim((void *)f_4237,c,av);}
a=C_alloc(20);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4240,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4428,a[2]=t4,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp));
t6=((C_word*)t4)[1];
f_4428(t6,t2,((C_word*)t0)[9]);}

/* k4238 in k4235 in a4226 in k4220 in chicken.compiler.batch-driver#display-analysis-database in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 */
static void C_ccall f_4240(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_4240,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4243,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_pairp(((C_word*)((C_word*)t0)[8])[1]))){
t3=*((C_word*)lf[20]+1);
t4=*((C_word*)lf[20]+1);
t5=C_i_check_port_2(*((C_word*)lf[20]+1),C_fix(2),C_SCHEME_TRUE,lf[21]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4419,a[2]=t2,a[3]=((C_word*)t0)[8],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:160: ##sys#print */
t7=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[31];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[20]+1);
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_4243(2,av2);}}}

/* k4241 in k4238 in k4235 in a4226 in k4220 in chicken.compiler.batch-driver#display-analysis-database in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 */
static void C_ccall f_4243(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4243,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4246,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_pairp(((C_word*)((C_word*)t0)[7])[1]))){
t3=*((C_word*)lf[20]+1);
t4=*((C_word*)lf[20]+1);
t5=C_i_check_port_2(*((C_word*)lf[20]+1),C_fix(2),C_SCHEME_TRUE,lf[21]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4403,a[2]=t2,a[3]=((C_word*)t0)[7],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:161: ##sys#print */
t7=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[30];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[20]+1);
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_4246(2,av2);}}}

/* k4244 in k4241 in k4238 in k4235 in a4226 in k4220 in chicken.compiler.batch-driver#display-analysis-database in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in ... */
static void C_ccall f_4246(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_4246,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4249,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(((C_word*)((C_word*)t0)[6])[1]))){
t3=*((C_word*)lf[20]+1);
t4=*((C_word*)lf[20]+1);
t5=C_i_check_port_2(*((C_word*)lf[20]+1),C_fix(2),C_SCHEME_TRUE,lf[21]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4387,a[2]=t2,a[3]=((C_word*)t0)[6],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:162: ##sys#print */
t7=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[29];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[20]+1);
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_4249(2,av2);}}}

/* k4247 in k4244 in k4241 in k4238 in k4235 in a4226 in k4220 in chicken.compiler.batch-driver#display-analysis-database in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in ... */
static void C_ccall f_4249(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_4249,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4252,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(C_truep(((C_word*)((C_word*)t0)[4])[1])?C_i_not(C_eqp(((C_word*)((C_word*)t0)[4])[1],lf[26])):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=*((C_word*)lf[20]+1);
t5=*((C_word*)lf[20]+1);
t6=C_i_check_port_2(*((C_word*)lf[20]+1),C_fix(2),C_SCHEME_TRUE,lf[21]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4322,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:164: ##sys#print */
t8=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[27];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[20]+1);
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}
else{
t4=(C_truep(((C_word*)((C_word*)t0)[5])[1])?C_i_not(C_eqp(((C_word*)((C_word*)t0)[4])[1],lf[26])):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=*((C_word*)lf[20]+1);
t6=*((C_word*)lf[20]+1);
t7=C_i_check_port_2(*((C_word*)lf[20]+1),C_fix(2),C_SCHEME_TRUE,lf[21]);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4349,a[2]=t2,a[3]=t5,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:166: ##sys#print */
t9=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=lf[28];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[20]+1);
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}
else{
t5=C_SCHEME_UNDEFINED;
t6=t2;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
f_4252(2,av2);}}}}

/* k4250 in k4247 in k4244 in k4241 in k4238 in k4235 in a4226 in k4220 in chicken.compiler.batch-driver#display-analysis-database in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in ... */
static void C_ccall f_4252(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4252,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4255,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_pairp(((C_word*)((C_word*)t0)[3])[1]))){
t3=((C_word*)((C_word*)t0)[3])[1];
t4=C_SCHEME_UNDEFINED;
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4292,a[2]=t6,tmp=(C_word)a,a+=3,tmp));
t8=((C_word*)t6)[1];
f_4292(t8,t2,t3);}
else{
/* batch-driver.scm:172: scheme#newline */
t3=*((C_word*)lf[19]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4253 in k4250 in k4247 in k4244 in k4241 in k4238 in k4235 in a4226 in k4220 in chicken.compiler.batch-driver#display-analysis-database in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in ... */
static void C_ccall f_4255(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4255,c,av);}
/* batch-driver.scm:172: scheme#newline */
t2=*((C_word*)lf[19]+1);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4267 in for-each-loop982 in k4250 in k4247 in k4244 in k4241 in k4238 in k4235 in a4226 in k4220 in chicken.compiler.batch-driver#display-analysis-database in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in ... */
static void C_ccall f_4269(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4269,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4280,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:170: chicken.compiler.support#node-class */
t3=*((C_word*)lf[24]+1);{
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

/* k4278 in k4267 in for-each-loop982 in k4250 in k4247 in k4244 in k4241 in k4238 in k4235 in a4226 in k4220 in chicken.compiler.batch-driver#display-analysis-database in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in ... */
static void C_ccall f_4280(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4280,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4284,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:170: chicken.compiler.support#node-parameters */
t3=*((C_word*)lf[23]+1);{
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

/* k4282 in k4278 in k4267 in for-each-loop982 in k4250 in k4247 in k4244 in k4241 in k4238 in k4235 in a4226 in k4220 in chicken.compiler.batch-driver#display-analysis-database in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in ... */
static void C_ccall f_4284(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4284,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
/* batch-driver.scm:170: ##sys#print */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* for-each-loop982 in k4250 in k4247 in k4244 in k4241 in k4238 in k4235 in a4226 in k4220 in chicken.compiler.batch-driver#display-analysis-database in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in ... */
static void C_fcall f_4292(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,4)))){
C_save_and_reclaim_args((void *)trf_4292,3,t0,t1,t2);}
a=C_alloc(10);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4302,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=*((C_word*)lf[20]+1);
t6=*((C_word*)lf[20]+1);
t7=C_i_check_port_2(*((C_word*)lf[20]+1),C_fix(2),C_SCHEME_TRUE,lf[21]);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4269,a[2]=t3,a[3]=t5,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:170: ##sys#print */
t9=*((C_word*)lf[22]+1);{
C_word av2[5];
av2[0]=t9;
av2[1]=t8;
av2[2]=lf[25];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[20]+1);
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4300 in for-each-loop982 in k4250 in k4247 in k4244 in k4241 in k4238 in k4235 in a4226 in k4220 in chicken.compiler.batch-driver#display-analysis-database in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in ... */
static void C_ccall f_4302(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4302,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_4292(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k4320 in k4247 in k4244 in k4241 in k4238 in k4235 in a4226 in k4220 in chicken.compiler.batch-driver#display-analysis-database in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in ... */
static void C_ccall f_4322(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4322,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4333,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:164: chicken.compiler.support#node-class */
t3=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[4])[1];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k4331 in k4320 in k4247 in k4244 in k4241 in k4238 in k4235 in a4226 in k4220 in chicken.compiler.batch-driver#display-analysis-database in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in ... */
static void C_ccall f_4333(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4333,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4337,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:164: chicken.compiler.support#node-parameters */
t3=*((C_word*)lf[23]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[4])[1];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k4335 in k4331 in k4320 in k4247 in k4244 in k4241 in k4238 in k4235 in a4226 in k4220 in chicken.compiler.batch-driver#display-analysis-database in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in ... */
static void C_ccall f_4337(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4337,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
/* batch-driver.scm:164: ##sys#print */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4347 in k4247 in k4244 in k4241 in k4238 in k4235 in a4226 in k4220 in chicken.compiler.batch-driver#display-analysis-database in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in ... */
static void C_ccall f_4349(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4349,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4360,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:166: chicken.compiler.support#node-class */
t3=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[4])[1];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k4358 in k4347 in k4247 in k4244 in k4241 in k4238 in k4235 in a4226 in k4220 in chicken.compiler.batch-driver#display-analysis-database in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in ... */
static void C_ccall f_4360(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4360,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4364,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:166: chicken.compiler.support#node-parameters */
t3=*((C_word*)lf[23]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[4])[1];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k4362 in k4358 in k4347 in k4247 in k4244 in k4241 in k4238 in k4235 in a4226 in k4220 in chicken.compiler.batch-driver#display-analysis-database in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in ... */
static void C_ccall f_4364(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4364,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
/* batch-driver.scm:166: ##sys#print */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4385 in k4244 in k4241 in k4238 in k4235 in a4226 in k4220 in chicken.compiler.batch-driver#display-analysis-database in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in ... */
static void C_ccall f_4387(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4387,c,av);}
/* batch-driver.scm:162: ##sys#print */
t2=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_i_length(((C_word*)((C_word*)t0)[3])[1]);
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k4401 in k4241 in k4238 in k4235 in a4226 in k4220 in chicken.compiler.batch-driver#display-analysis-database in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in ... */
static void C_ccall f_4403(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4403,c,av);}
/* batch-driver.scm:161: ##sys#print */
t2=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_i_length(((C_word*)((C_word*)t0)[3])[1]);
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k4417 in k4238 in k4235 in a4226 in k4220 in chicken.compiler.batch-driver#display-analysis-database in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 */
static void C_ccall f_4419(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4419,c,av);}
/* batch-driver.scm:160: ##sys#print */
t2=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_i_length(((C_word*)((C_word*)t0)[3])[1]);
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* loop in k4235 in a4226 in k4220 in chicken.compiler.batch-driver#display-analysis-database in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 */
static void C_fcall f_4428(C_word t0,C_word t1,C_word t2){
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
C_word t21;
C_word t22;
C_word t23;
C_word t24;
C_word t25;
C_word t26;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,0,2)))){
C_save_and_reclaim_args((void *)trf_4428,3,t0,t1,t2);}
a=C_alloc(18);
if(C_truep(C_i_pairp(t2))){
t3=C_i_caar(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4441,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=C_eqp(t3,lf[32]);
t6=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4452,a[2]=t2,a[3]=t4,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[2],a[7]=t1,a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],a[12]=((C_word*)t0)[8],tmp=(C_word)a,a+=13,tmp);
if(C_truep(t5)){
t7=t6;
f_4452(t7,t5);}
else{
t7=C_eqp(t3,lf[55]);
if(C_truep(t7)){
t8=t6;
f_4452(t8,t7);}
else{
t8=C_eqp(t3,lf[56]);
if(C_truep(t8)){
t9=t6;
f_4452(t9,t8);}
else{
t9=C_eqp(t3,lf[57]);
if(C_truep(t9)){
t10=t6;
f_4452(t10,t9);}
else{
t10=C_eqp(t3,lf[58]);
if(C_truep(t10)){
t11=t6;
f_4452(t11,t10);}
else{
t11=C_eqp(t3,lf[59]);
if(C_truep(t11)){
t12=t6;
f_4452(t12,t11);}
else{
t12=C_eqp(t3,lf[60]);
if(C_truep(t12)){
t13=t6;
f_4452(t13,t12);}
else{
t13=C_eqp(t3,lf[61]);
if(C_truep(t13)){
t14=t6;
f_4452(t14,t13);}
else{
t14=C_eqp(t3,lf[62]);
if(C_truep(t14)){
t15=t6;
f_4452(t15,t14);}
else{
t15=C_eqp(t3,lf[63]);
if(C_truep(t15)){
t16=t6;
f_4452(t16,t15);}
else{
t16=C_eqp(t3,lf[64]);
if(C_truep(t16)){
t17=t6;
f_4452(t17,t16);}
else{
t17=C_eqp(t3,lf[65]);
if(C_truep(t17)){
t18=t6;
f_4452(t18,t17);}
else{
t18=C_eqp(t3,lf[66]);
if(C_truep(t18)){
t19=t6;
f_4452(t19,t18);}
else{
t19=C_eqp(t3,lf[67]);
if(C_truep(t19)){
t20=t6;
f_4452(t20,t19);}
else{
t20=C_eqp(t3,lf[68]);
if(C_truep(t20)){
t21=t6;
f_4452(t21,t20);}
else{
t21=C_eqp(t3,lf[69]);
if(C_truep(t21)){
t22=t6;
f_4452(t22,t21);}
else{
t22=C_eqp(t3,lf[70]);
if(C_truep(t22)){
t23=t6;
f_4452(t23,t22);}
else{
t23=C_eqp(t3,lf[71]);
if(C_truep(t23)){
t24=t6;
f_4452(t24,t23);}
else{
t24=C_eqp(t3,lf[72]);
if(C_truep(t24)){
t25=t6;
f_4452(t25,t24);}
else{
t25=C_eqp(t3,lf[73]);
t26=t6;
f_4452(t26,(C_truep(t25)?t25:C_eqp(t3,lf[74])));}}}}}}}}}}}}}}}}}}}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4439 in loop in k4235 in a4226 in k4220 in chicken.compiler.batch-driver#display-analysis-database in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 */
static void C_ccall f_4441(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4441,c,av);}
/* batch-driver.scm:159: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_4428(t2,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[4]));}

/* k4450 in loop in k4235 in a4226 in k4220 in chicken.compiler.batch-driver#display-analysis-database in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 */
static void C_fcall f_4452(C_word t0,C_word t1){
C_word tmp;
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,3)))){
C_save_and_reclaim_args((void *)trf_4452,2,t0,t1);}
a=C_alloc(10);
if(C_truep(t1)){
t2=*((C_word*)lf[20]+1);
t3=*((C_word*)lf[20]+1);
t4=C_i_check_port_2(*((C_word*)lf[20]+1),C_fix(2),C_SCHEME_TRUE,lf[21]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4458,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:140: ##sys#write-char-0 */
t6=*((C_word*)lf[34]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t5;
av2[2]=C_make_character(9);
av2[3]=*((C_word*)lf[20]+1);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t2=C_eqp(((C_word*)t0)[4],lf[26]);
if(C_truep(t2)){
t3=C_mutate(((C_word *)((C_word*)t0)[5])+1,lf[26]);
/* batch-driver.scm:159: loop */
t4=((C_word*)((C_word*)t0)[6])[1];
f_4428(t4,((C_word*)t0)[7],C_u_i_cdr(((C_word*)t0)[2]));}
else{
t3=C_eqp(((C_word*)t0)[4],lf[35]);
if(C_truep(t3)){
t4=C_eqp(((C_word*)((C_word*)t0)[5])[1],lf[26]);
if(C_truep(t4)){
/* batch-driver.scm:159: loop */
t5=((C_word*)((C_word*)t0)[6])[1];
f_4428(t5,((C_word*)t0)[7],C_u_i_cdr(((C_word*)t0)[2]));}
else{
t5=C_i_cdar(((C_word*)t0)[2]);
t6=C_mutate(((C_word *)((C_word*)t0)[5])+1,t5);
/* batch-driver.scm:159: loop */
t7=((C_word*)((C_word*)t0)[6])[1];
f_4428(t7,((C_word*)t0)[7],C_u_i_cdr(((C_word*)t0)[2]));}}
else{
t4=C_eqp(((C_word*)t0)[4],lf[36]);
if(C_truep(t4)){
t5=C_eqp(((C_word*)((C_word*)t0)[5])[1],lf[26]);
if(C_truep(t5)){
/* batch-driver.scm:159: loop */
t6=((C_word*)((C_word*)t0)[6])[1];
f_4428(t6,((C_word*)t0)[7],C_u_i_cdr(((C_word*)t0)[2]));}
else{
t6=C_i_cdar(((C_word*)t0)[2]);
t7=C_mutate(((C_word *)((C_word*)t0)[8])+1,t6);
/* batch-driver.scm:159: loop */
t8=((C_word*)((C_word*)t0)[6])[1];
f_4428(t8,((C_word*)t0)[7],C_u_i_cdr(((C_word*)t0)[2]));}}
else{
t5=C_eqp(((C_word*)t0)[4],lf[37]);
if(C_truep(t5)){
t6=C_i_cdar(((C_word*)t0)[2]);
t7=C_mutate(((C_word *)((C_word*)t0)[9])+1,t6);
/* batch-driver.scm:159: loop */
t8=((C_word*)((C_word*)t0)[6])[1];
f_4428(t8,((C_word*)t0)[7],C_u_i_cdr(((C_word*)t0)[2]));}
else{
t6=C_eqp(((C_word*)t0)[4],lf[38]);
t7=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4531,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[12],tmp=(C_word)a,a+=10,tmp);
if(C_truep(t6)){
t8=t7;
f_4531(t8,t6);}
else{
t8=C_eqp(((C_word*)t0)[4],lf[44]);
if(C_truep(t8)){
t9=t7;
f_4531(t9,t8);}
else{
t9=C_eqp(((C_word*)t0)[4],lf[45]);
if(C_truep(t9)){
t10=t7;
f_4531(t10,t9);}
else{
t10=C_eqp(((C_word*)t0)[4],lf[46]);
if(C_truep(t10)){
t11=t7;
f_4531(t11,t10);}
else{
t11=C_eqp(((C_word*)t0)[4],lf[47]);
if(C_truep(t11)){
t12=t7;
f_4531(t12,t11);}
else{
t12=C_eqp(((C_word*)t0)[4],lf[48]);
if(C_truep(t12)){
t13=t7;
f_4531(t13,t12);}
else{
t13=C_eqp(((C_word*)t0)[4],lf[49]);
if(C_truep(t13)){
t14=t7;
f_4531(t14,t13);}
else{
t14=C_eqp(((C_word*)t0)[4],lf[50]);
if(C_truep(t14)){
t15=t7;
f_4531(t15,t14);}
else{
t15=C_eqp(((C_word*)t0)[4],lf[51]);
if(C_truep(t15)){
t16=t7;
f_4531(t16,t15);}
else{
t16=C_eqp(((C_word*)t0)[4],lf[52]);
if(C_truep(t16)){
t17=t7;
f_4531(t17,t16);}
else{
t17=C_eqp(((C_word*)t0)[4],lf[53]);
t18=t7;
f_4531(t18,(C_truep(t17)?t17:C_eqp(((C_word*)t0)[4],lf[54])));}}}}}}}}}}}}}}}}

/* k4456 in k4450 in loop in k4235 in a4226 in k4220 in chicken.compiler.batch-driver#display-analysis-database in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in ... */
static void C_ccall f_4458(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4458,c,av);}
t2=C_i_caar(((C_word*)t0)[2]);
t3=C_i_assq(t2,lf[33]);
/* batch-driver.scm:140: ##sys#print */
t4=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=C_i_cdr(t3);
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k4529 in k4450 in loop in k4235 in a4226 in k4220 in chicken.compiler.batch-driver#display-analysis-database in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in ... */
static void C_fcall f_4531(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_4531,2,t0,t1);}
a=C_alloc(5);
if(C_truep(t1)){
t2=*((C_word*)lf[20]+1);
t3=*((C_word*)lf[20]+1);
t4=C_i_check_port_2(*((C_word*)lf[20]+1),C_fix(2),C_SCHEME_TRUE,lf[21]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4537,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:151: ##sys#write-char-0 */
t6=*((C_word*)lf[34]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t5;
av2[2]=C_make_character(9);
av2[3]=*((C_word*)lf[20]+1);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t2=C_eqp(((C_word*)t0)[4],lf[39]);
if(C_truep(t2)){
t3=C_i_cdar(((C_word*)t0)[3]);
t4=C_mutate(((C_word *)((C_word*)t0)[5])+1,t3);
/* batch-driver.scm:159: loop */
t5=((C_word*)((C_word*)t0)[6])[1];
f_4428(t5,((C_word*)t0)[7],C_u_i_cdr(((C_word*)t0)[3]));}
else{
t3=C_eqp(((C_word*)t0)[4],lf[40]);
if(C_truep(t3)){
t4=C_i_cdar(((C_word*)t0)[3]);
t5=C_mutate(((C_word *)((C_word*)t0)[8])+1,t4);
/* batch-driver.scm:159: loop */
t6=((C_word*)((C_word*)t0)[6])[1];
f_4428(t6,((C_word*)t0)[7],C_u_i_cdr(((C_word*)t0)[3]));}
else{
t4=C_eqp(((C_word*)t0)[4],lf[41]);
if(C_truep(t4)){
t5=C_i_cdar(((C_word*)t0)[3]);
t6=C_mutate(((C_word *)((C_word*)t0)[9])+1,t5);
/* batch-driver.scm:159: loop */
t7=((C_word*)((C_word*)t0)[6])[1];
f_4428(t7,((C_word*)t0)[7],C_u_i_cdr(((C_word*)t0)[3]));}
else{
/* batch-driver.scm:158: chicken.compiler.support#bomb */
t5=*((C_word*)lf[42]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[43];
av2[3]=C_u_i_car(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}}}}

/* k4535 in k4529 in k4450 in loop in k4235 in a4226 in k4220 in chicken.compiler.batch-driver#display-analysis-database in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in ... */
static void C_ccall f_4537(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_4537,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4540,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:151: ##sys#print */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_i_caar(((C_word*)t0)[3]);
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4538 in k4535 in k4529 in k4450 in loop in k4235 in a4226 in k4220 in chicken.compiler.batch-driver#display-analysis-database in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in ... */
static void C_ccall f_4540(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4540,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4543,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:151: ##sys#write-char-0 */
t3=*((C_word*)lf[34]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(61);
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k4541 in k4538 in k4535 in k4529 in k4450 in loop in k4235 in a4226 in k4220 in chicken.compiler.batch-driver#display-analysis-database in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in ... */
static void C_ccall f_4543(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4543,c,av);}
/* batch-driver.scm:151: ##sys#print */
t2=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_i_cdar(((C_word*)t0)[3]);
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k4851 in chicken.compiler.batch-driver#display-analysis-database in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 */
static void C_ccall f_4853(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4853,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_4222(t3,t2);}

/* chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 */
static void C_ccall f_4855(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +9,c,3)))){
C_save_and_reclaim((void*)f_4855,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+9);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
C_word t7;
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4858,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4889,a[2]=t4,a[3]=t5,a[4]=t1,a[5]=t2,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* batch-driver.scm:185: chicken.compiler.core#initialize-compiler */
t7=*((C_word*)lf[489]+1);{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* option-arg in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 */
static void C_fcall f_4858(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_4858,2,t1,t2);}
t3=C_i_cdr(t2);
if(C_truep(C_i_nullp(t3))){
/* batch-driver.scm:180: chicken.compiler.support#quit-compiling */
t4=*((C_word*)lf[80]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t1;
av2[2]=lf[81];
av2[3]=C_u_i_car(t2);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t4=C_i_cadr(t2);
if(C_truep(C_i_symbolp(t4))){
/* batch-driver.scm:183: chicken.compiler.support#quit-compiling */
t5=*((C_word*)lf[80]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t1;
av2[2]=lf[82];
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}}

/* k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 */
static void C_ccall f_4889(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_4889,c,av);}
a=C_alloc(7);
t2=C_mutate((C_word*)lf[83]+1 /* (set! chicken.compiler.core#explicit-use-flag ...) */,C_u_i_memq(lf[84],((C_word*)t0)[2]));
t3=C_mutate((C_word*)lf[85]+1 /* (set! chicken.compiler.core#emit-debug-info ...) */,C_u_i_memq(lf[86],((C_word*)t0)[2]));
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4898,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_u_i_memq(lf[488],((C_word*)t0)[2]))){
t5=C_mutate((C_word*)lf[481]+1 /* (set! chicken.compiler.core#compile-module-registration ...) */,lf[482]);
t6=t4;
f_4898(t6,t5);}
else{
t5=t4;
f_4898(t5,C_SCHEME_UNDEFINED);}}

/* k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 */
static void C_fcall f_4898(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_4898,2,t0,t1);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4901,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_u_i_memq(lf[486],((C_word*)t0)[2]))){
t3=C_mutate((C_word*)lf[481]+1 /* (set! chicken.compiler.core#compile-module-registration ...) */,lf[487]);
t4=t2;
f_4901(t4,t3);}
else{
t3=t2;
f_4901(t3,C_SCHEME_UNDEFINED);}}

/* k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 */
static void C_fcall f_4901(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_4901,2,t0,t1);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4904,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_u_i_memq(lf[484],((C_word*)t0)[2]))){
t3=C_set_block_item(lf[480] /* chicken.compiler.core#static-extensions */,0,C_SCHEME_TRUE);
/* batch-driver.scm:194: chicken.platform#register-feature! */
t4=*((C_word*)lf[133]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[485];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=t2;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_4904(2,av2);}}}

/* k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 */
static void C_ccall f_4904(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,2)))){
C_save_and_reclaim((void *)f_4904,c,av);}
a=C_alloc(21);
t2=C_u_i_memq(lf[87],((C_word*)t0)[2]);
t3=C_u_i_memq(lf[88],((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8092,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=t3,tmp=(C_word)a,a+=9,tmp);
t5=(C_truep(*((C_word*)lf[85]+1))?lf[477]:C_SCHEME_END_OF_LIST);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8100,a[2]=t4,a[3]=t5,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
if(C_truep(*((C_word*)lf[83]+1))){
t7=t6;
f_8100(t7,C_SCHEME_END_OF_LIST);}
else{
t7=C_a_i_cons(&a,2,lf[376],*((C_word*)lf[483]+1));
t8=t6;
f_8100(t8,C_a_i_list(&a,1,t7));}}

/* k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in ... */
static void C_fcall f_4914(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,0,4)))){
C_save_and_reclaim_args((void *)trf_4914,2,t0,t1);}
a=C_alloc(19);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=lf[90];
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_u_i_memq(lf[91],((C_word*)t0)[2]);
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4919,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=t5,a[11]=((C_word*)t0)[9],tmp=(C_word)a,a+=12,tmp);
if(C_truep(t6)){
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8038,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:219: g1051 */
t9=t8;
f_8038(t9,t7,t6);}
else{
if(C_truep(C_u_i_memq(lf[469],((C_word*)t0)[2]))){
t8=t7;{
C_word av2[2];
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
f_4919(2,av2);}}
else{
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8066,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[5])){
/* batch-driver.scm:226: chicken.pathname#pathname-file */
t9=*((C_word*)lf[471]+1);{
C_word av2[3];
av2[0]=t9;
av2[1]=t8;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}
else{
/* batch-driver.scm:226: chicken.pathname#make-pathname */
t9=*((C_word*)lf[265]+1);{
C_word av2[5];
av2[0]=t9;
av2[1]=t7;
av2[2]=C_SCHEME_FALSE;
av2[3]=lf[472];
av2[4]=lf[470];
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}}}}

/* k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in ... */
static void C_ccall f_4919(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(24,c,2)))){
C_save_and_reclaim((void *)f_4919,c,av);}
a=C_alloc(24);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=*((C_word*)lf[92]+1);
t7=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_4925,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=t4,a[14]=t6,a[15]=t5,tmp=(C_word)a,a+=16,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8034,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:229: chicken.process-context#get-environment-variable */
t9=*((C_word*)lf[467]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=lf[468];
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in ... */
static void C_ccall f_4925(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,3)))){
C_save_and_reclaim((void *)f_4925,c,av);}
a=C_alloc(21);
t2=C_i_check_list_2(t1,lf[5]);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4931,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7998,a[2]=((C_word*)t0)[13],a[3]=t5,a[4]=((C_word*)t0)[14],a[5]=((C_word*)t0)[15],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_7998(t7,t3,t1);}

/* k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in ... */
static void C_ccall f_4931(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_4931,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_4934,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t1,a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* batch-driver.scm:230: chicken.compiler.optimizer#default-optimization-passes */
t3=*((C_word*)lf[464]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in ... */
static void C_ccall f_4934(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(26,c,2)))){
C_save_and_reclaim((void *)f_4934,c,av);}
a=C_alloc(26);
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_u_i_memq(lf[93],((C_word*)t0)[2]);
t11=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_4939,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=t3,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],a[13]=t9,a[14]=((C_word*)t0)[11],a[15]=t7,a[16]=((C_word*)t0)[12],a[17]=((C_word*)t0)[13],tmp=(C_word)a,a+=18,tmp);
if(C_truep(t10)){
t12=t11;
f_4939(t12,t10);}
else{
t12=C_u_i_memq(lf[351],((C_word*)t0)[2]);
t13=t11;
f_4939(t13,(C_truep(t12)?t12:C_u_i_memq(lf[94],((C_word*)t0)[2])));}}

/* k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in ... */
static void C_fcall f_4939(C_word t0,C_word t1){
C_word tmp;
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
C_word t21;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(38,0,2)))){
C_save_and_reclaim_args((void *)trf_4939,2,t0,t1);}
a=C_alloc(38);
t2=C_u_i_memq(lf[94],((C_word*)t0)[2]);
t3=(C_truep(t2)?C_i_cadr(t2):C_SCHEME_FALSE);
t4=C_u_i_memq(lf[95],((C_word*)t0)[2]);
t5=C_u_i_memq(lf[96],((C_word*)t0)[2]);
t6=C_u_i_memq(lf[97],((C_word*)t0)[2]);
t7=C_u_i_memq(lf[98],((C_word*)t0)[2]);
t8=C_SCHEME_TRUE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_u_i_memq(lf[99],((C_word*)t0)[2]);
t11=C_SCHEME_FALSE;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_SCHEME_FALSE;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_SCHEME_FALSE;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_u_i_memq(lf[100],((C_word*)t0)[2]);
t18=(C_truep(t17)?t17:C_u_i_memq(lf[101],((C_word*)t0)[2]));
t19=C_u_i_memq(lf[102],((C_word*)t0)[2]);
t20=(*a=C_CLOSURE_TYPE|29,a[1]=(C_word)f_4964,a[2]=t12,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t16,a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=t14,a[12]=((C_word*)t0)[9],a[13]=t6,a[14]=((C_word*)t0)[10],a[15]=((C_word*)t0)[11],a[16]=((C_word*)t0)[12],a[17]=t7,a[18]=((C_word*)t0)[13],a[19]=t10,a[20]=t9,a[21]=((C_word*)t0)[14],a[22]=t3,a[23]=((C_word*)t0)[15],a[24]=t1,a[25]=t18,a[26]=t4,a[27]=((C_word*)t0)[16],a[28]=t5,a[29]=((C_word*)t0)[17],tmp=(C_word)a,a+=30,tmp);
if(C_truep(t19)){
/* batch-driver.scm:252: option-arg */
f_4858(t20,t19);}
else{
t21=t20;{
C_word av2[2];
av2[0]=t21;
av2[1]=C_SCHEME_FALSE;
f_4964(2,av2);}}}

/* k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in ... */
static void C_ccall f_4964(C_word c,C_word *av){
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
C_word t21;
C_word t22;
C_word t23;
C_word t24;
C_word t25;
C_word t26;
C_word t27;
C_word t28;
C_word t29;
C_word t30;
C_word t31;
C_word t32;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(90,c,6)))){
C_save_and_reclaim((void *)f_4964,c,av);}
a=C_alloc(90);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_SCHEME_UNDEFINED;
t19=(*a=C_VECTOR_TYPE|1,a[1]=t18,tmp=(C_word)a,a+=2,tmp);
t20=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4982,tmp=(C_word)a,a+=2,tmp));
t21=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5009,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t22=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5031,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t23=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5058,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t24=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5104,tmp=(C_word)a,a+=2,tmp));
t25=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5189,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp));
t26=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5224,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp));
t27=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5234,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp));
t28=C_set_block_item(t19,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5274,a[2]=((C_word*)t0)[7],tmp=(C_word)a,a+=3,tmp));
t29=(*a=C_CLOSURE_TYPE|36,a[1]=(C_word)f_5340,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[13],a[11]=t17,a[12]=t15,a[13]=t19,a[14]=t5,a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=t7,a[20]=((C_word*)t0)[18],a[21]=((C_word*)t0)[19],a[22]=((C_word*)t0)[20],a[23]=t13,a[24]=t9,a[25]=((C_word*)t0)[21],a[26]=((C_word*)t0)[22],a[27]=t1,a[28]=((C_word*)t0)[23],a[29]=((C_word*)t0)[24],a[30]=((C_word*)t0)[25],a[31]=t11,a[32]=((C_word*)t0)[3],a[33]=((C_word*)t0)[26],a[34]=((C_word*)t0)[27],a[35]=((C_word*)t0)[28],a[36]=((C_word*)t0)[5],tmp=(C_word)a,a+=37,tmp);
if(C_truep(((C_word*)t0)[29])){
t30=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7977,a[2]=t29,tmp=(C_word)a,a+=3,tmp);
t31=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7981,a[2]=t30,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:321: option-arg */
f_4858(t31,((C_word*)t0)[29]);}
else{
t30=t29;
f_5340(t30,C_SCHEME_UNDEFINED);}}

/* print-header in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in ... */
static void C_fcall f_4982(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_4982,3,t1,t2,t3);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4986,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:260: chicken.compiler.support#debugging */
t5=*((C_word*)lf[104]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[105];
av2[3]=lf[106];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k4984 in print-header in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in ... */
static void C_ccall f_4986(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4986,c,av);}
a=C_alloc(5);
if(C_truep(C_i_memq(((C_word*)t0)[2],*((C_word*)lf[103]+1)))){
t2=*((C_word*)lf[20]+1);
t3=*((C_word*)lf[20]+1);
t4=C_i_check_port_2(*((C_word*)lf[20]+1),C_fix(2),C_SCHEME_TRUE,lf[21]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4998,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:263: ##sys#write-char-0 */
t6=*((C_word*)lf[34]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_make_character(91);
av2[3]=*((C_word*)lf[20]+1);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k4996 in k4984 in print-header in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in ... */
static void C_ccall f_4998(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_4998,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5001,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:263: ##sys#print */
t3=*((C_word*)lf[22]+1);{
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

/* k4999 in k4996 in k4984 in print-header in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in ... */
static void C_ccall f_5001(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_5001,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5004,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:263: ##sys#write-char-0 */
t3=*((C_word*)lf[34]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(93);
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k5002 in k4999 in k4996 in k4984 in print-header in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in ... */
static void C_ccall f_5004(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5004,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5007,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:263: ##sys#write-char-0 */
t3=*((C_word*)lf[34]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k5005 in k5002 in k4999 in k4996 in k4984 in print-header in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in ... */
static void C_ccall f_5007(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5007,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* print-node in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in ... */
static void C_fcall f_5009(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_5009,5,t0,t1,t2,t3,t4);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5016,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:267: print-header */
f_4982(t5,t2,t3);}

/* k5014 in print-node in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in ... */
static void C_ccall f_5016(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5016,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
/* batch-driver.scm:269: chicken.compiler.support#dump-nodes */
t2=*((C_word*)lf[107]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5029,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:270: chicken.compiler.support#build-expression-tree */
t3=*((C_word*)lf[109]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5027 in k5014 in print-node in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in ... */
static void C_ccall f_5029(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5029,c,av);}
/* batch-driver.scm:270: chicken.pretty-print#pretty-print */
t2=*((C_word*)lf[108]+1);{
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

/* print-db in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in ... */
static void C_fcall f_5031(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_5031,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(5);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5038,a[2]=t1,a[3]=t4,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:273: print-header */
f_4982(t6,t2,t3);}

/* k5036 in print-db in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in ... */
static void C_ccall f_5038(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_5038,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=*((C_word*)lf[20]+1);
t3=*((C_word*)lf[20]+1);
t4=C_i_check_port_2(*((C_word*)lf[20]+1),C_fix(2),C_SCHEME_TRUE,lf[21]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5044,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:274: ##sys#print */
t6=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[110];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[20]+1);
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5042 in k5036 in print-db in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in ... */
static void C_ccall f_5044(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_5044,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5047,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:274: ##sys#print */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k5045 in k5042 in k5036 in print-db in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in ... */
static void C_ccall f_5047(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_5047,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5050,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:274: ##sys#write-char-0 */
t3=*((C_word*)lf[34]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(41);
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k5048 in k5045 in k5042 in k5036 in print-db in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in ... */
static void C_ccall f_5050(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_5050,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5053,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:274: ##sys#write-char-0 */
t3=*((C_word*)lf[34]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k5051 in k5048 in k5045 in k5042 in k5036 in print-db in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in ... */
static void C_ccall f_5053(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5053,c,av);}
/* batch-driver.scm:275: display-analysis-database */
t2=lf[18];
f_4218(t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* print-expr in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in ... */
static void C_fcall f_5058(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_5058,5,t0,t1,t2,t3,t4);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5065,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:278: print-header */
f_4982(t5,t2,t3);}

/* k5063 in print-expr in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in ... */
static void C_ccall f_5065(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_5065,c,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=C_i_check_list_2(((C_word*)t0)[2],lf[10]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5081,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_5081(t6,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5068 in for-each-loop1191 in k5063 in print-expr in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in ... */
static void C_ccall f_5070(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5070,c,av);}
/* batch-driver.scm:282: scheme#newline */
t2=*((C_word*)lf[19]+1);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* for-each-loop1191 in k5063 in print-expr in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in ... */
static void C_fcall f_5081(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_5081,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5091,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5070,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:281: chicken.pretty-print#pretty-print */
t6=*((C_word*)lf[108]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k5089 in for-each-loop1191 in k5063 in print-expr in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in ... */
static void C_ccall f_5091(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5091,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_5081(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* arg-val in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in ... */
static void C_fcall f_5104(C_word t1,C_word t2){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,0,4)))){
C_save_and_reclaim_args((void *)trf_5104,2,t1,t2);}
a=C_alloc(16);
t3=C_i_string_length(t2);
t4=C_a_i_fixnum_difference(&a,2,t3,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5113,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(t3,C_fix(2)))){
/* batch-driver.scm:289: scheme#string->number */
t6=*((C_word*)lf[112]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t6=C_i_string_ref(t2,t4);
t7=C_eqp(t6,C_make_character(109));
t8=(C_truep(t7)?t7:C_eqp(t6,C_make_character(77)));
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5144,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5148,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:291: scheme#substring */
t11=*((C_word*)lf[113]+1);{
C_word av2[5];
av2[0]=t11;
av2[1]=t10;
av2[2]=t2;
av2[3]=C_fix(0);
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t11+1)))(5,av2);}}
else{
t9=C_eqp(t6,C_make_character(107));
t10=(C_truep(t9)?t9:C_eqp(t6,C_make_character(75)));
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5164,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5168,a[2]=t11,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:292: scheme#substring */
t13=*((C_word*)lf[113]+1);{
C_word av2[5];
av2[0]=t13;
av2[1]=t12;
av2[2]=t2;
av2[3]=C_fix(0);
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t13+1)))(5,av2);}}
else{
/* batch-driver.scm:293: scheme#string->number */
t11=*((C_word*)lf[112]+1);{
C_word av2[3];
av2[0]=t11;
av2[1]=t5;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t11+1)))(3,av2);}}}}}

/* k5111 in arg-val in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in ... */
static void C_ccall f_5113(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5113,c,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* batch-driver.scm:294: chicken.compiler.support#quit-compiling */
t2=*((C_word*)lf[80]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[111];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* k5142 in arg-val in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in ... */
static void C_ccall f_5144(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,3)))){
C_save_and_reclaim((void *)f_5144,c,av);}
a=C_alloc(33);
t2=C_s_a_i_times(&a,2,t1,C_fix(1048576));
if(C_truep(t2)){
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* batch-driver.scm:294: chicken.compiler.support#quit-compiling */
t3=*((C_word*)lf[80]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[111];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k5146 in arg-val in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in ... */
static void C_ccall f_5148(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5148,c,av);}
/* batch-driver.scm:291: scheme#string->number */
t2=*((C_word*)lf[112]+1);{
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

/* k5162 in arg-val in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in ... */
static void C_ccall f_5164(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,3)))){
C_save_and_reclaim((void *)f_5164,c,av);}
a=C_alloc(33);
t2=C_s_a_i_times(&a,2,t1,C_fix(1024));
if(C_truep(t2)){
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* batch-driver.scm:294: chicken.compiler.support#quit-compiling */
t3=*((C_word*)lf[80]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[111];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k5166 in arg-val in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in ... */
static void C_ccall f_5168(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5168,c,av);}
/* batch-driver.scm:292: scheme#string->number */
t2=*((C_word*)lf[112]+1);{
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

/* collect-options in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in ... */
static void C_fcall f_5189(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_5189,3,t0,t1,t2);}
a=C_alloc(7);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5195,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_5195(t6,t1,((C_word*)t0)[3]);}

/* loop in collect-options in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in ... */
static void C_fcall f_5195(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_5195,3,t0,t1,t2);}
a=C_alloc(4);
t3=C_i_memq(((C_word*)t0)[2],t2);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5203,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:298: g1235 */
t5=t4;
f_5203(t5,t1,t3);}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* g1235 in loop in collect-options in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in ... */
static void C_fcall f_5203(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_5203,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5211,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:298: option-arg */
f_4858(t3,t2);}

/* k5209 in g1235 in loop in collect-options in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in ... */
static void C_ccall f_5211(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5211,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5215,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:298: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_5195(t3,t2,C_i_cddr(((C_word*)t0)[4]));}

/* k5213 in k5209 in g1235 in loop in collect-options in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in ... */
static void C_ccall f_5215(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_5215,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* begin-time in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in ... */
static void C_fcall f_5224(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_5224,2,t0,t1);}
a=C_alloc(4);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5232,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:254: chicken.time#current-process-milliseconds */
t3=*((C_word*)lf[114]+1);{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5230 in begin-time in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in ... */
static void C_ccall f_5232(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5232,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* end-time in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in ... */
static void C_fcall f_5234(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_5234,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=*((C_word*)lf[20]+1);
t4=*((C_word*)lf[20]+1);
t5=C_i_check_port_2(*((C_word*)lf[20]+1),C_fix(2),C_SCHEME_TRUE,lf[21]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5244,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:306: ##sys#print */
t7=*((C_word*)lf[22]+1);{
C_word av2[5];
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[118];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[20]+1);
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k5242 in end-time in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in ... */
static void C_ccall f_5244(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_5244,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5247,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:306: ##sys#print */
t3=*((C_word*)lf[22]+1);{
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
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k5245 in k5242 in end-time in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in ... */
static void C_ccall f_5247(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_5247,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5250,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:306: ##sys#print */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[117];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k5248 in k5245 in k5242 in end-time in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in ... */
static void C_ccall f_5250(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_5250,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5253,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5260,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5264,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5272,a[2]=((C_word*)t0)[4],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:254: chicken.time#current-process-milliseconds */
t6=*((C_word*)lf[114]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k5251 in k5248 in k5245 in k5242 in end-time in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in ... */
static void C_ccall f_5253(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5253,c,av);}
/* batch-driver.scm:306: ##sys#write-char-0 */
t2=*((C_word*)lf[34]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k5258 in k5248 in k5245 in k5242 in end-time in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in ... */
static void C_ccall f_5260(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5260,c,av);}
/* batch-driver.scm:306: ##sys#print */
t2=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k5262 in k5248 in k5245 in k5242 in end-time in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in ... */
static void C_ccall f_5264(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5264,c,av);}
/* batch-driver.scm:308: scheme#inexact->exact */
t2=*((C_word*)lf[115]+1);{
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

/* k5270 in k5248 in k5245 in k5242 in end-time in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in ... */
static void C_ccall f_5272(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,2)))){
C_save_and_reclaim((void *)f_5272,c,av);}
a=C_alloc(29);
t2=C_s_a_i_minus(&a,2,t1,((C_word*)((C_word*)t0)[2])[1]);
/* batch-driver.scm:308: scheme#round */
t3=*((C_word*)lf[116]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* analyze in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in ... */
static void C_fcall f_5274(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,4)))){
C_save_and_reclaim_args((void *)trf_5274,5,t0,t1,t2,t3,t4);}
a=C_alloc(11);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5276,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5299,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5304,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t4))){
/* batch-driver.scm:311: def-no1256 */
t8=t7;
f_5304(t8,t1);}
else{
t8=C_i_car(t4);
t9=C_u_i_cdr(t4);
if(C_truep(C_i_nullp(t9))){
/* batch-driver.scm:311: def-contf1257 */
t10=t6;
f_5299(t10,t1,t8);}
else{
t10=C_i_car(t9);
t11=C_u_i_cdr(t9);
/* batch-driver.scm:311: body1254 */
t12=t5;
f_5276(t12,t1,t8,t10);}}}

/* body1254 in analyze in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in ... */
static void C_fcall f_5276(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_5276,4,t0,t1,t2,t3);}
a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5280,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t2,a[7]=t3,tmp=(C_word)a,a+=8,tmp);
/* batch-driver.scm:312: chicken.compiler.core#analyze-expression */
t5=*((C_word*)lf[121]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5278 in body1254 in analyze in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in ... */
static void C_ccall f_5280(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,8)))){
C_save_and_reclaim((void *)f_5280,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5283,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5288,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5294,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:314: upap */
t5=((C_word*)((C_word*)t0)[3])[1];{
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=t1;
av2[4]=((C_word*)t0)[5];
av2[5]=t3;
av2[6]=t4;
av2[7]=((C_word*)t0)[6];
av2[8]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t5+1)))(9,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5281 in k5278 in body1254 in analyze in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in ... */
static void C_ccall f_5283(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5283,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a5287 in k5278 in body1254 in analyze in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in ... */
static void C_ccall f_5288(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5288,c,av);}
t4=*((C_word*)lf[119]+1);
/* batch-driver.scm:315: g1276 */
t5=*((C_word*)lf[119]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* a5293 in k5278 in body1254 in analyze in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in ... */
static void C_ccall f_5294(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_5294,c,av);}
t5=*((C_word*)lf[120]+1);
/* batch-driver.scm:316: g1290 */
t6=*((C_word*)lf[120]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t6;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
av2[4]=t3;
av2[5]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(6,av2);}}

/* def-contf1257 in analyze in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in ... */
static void C_fcall f_5299(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_5299,3,t0,t1,t2);}
/* batch-driver.scm:311: body1254 */
t3=((C_word*)t0)[2];
f_5276(t3,t1,t2,C_SCHEME_TRUE);}

/* def-no1256 in analyze in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in ... */
static void C_fcall f_5304(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_5304,2,t0,t1);}
/* batch-driver.scm:311: def-contf1257 */
t2=((C_word*)t0)[2];
f_5299(t2,t1,C_fix(0));}

/* k5338 in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in ... */
static void C_fcall f_5340(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(37,0,2)))){
C_save_and_reclaim_args((void *)trf_5340,2,t0,t1);}
a=C_alloc(37);
t2=(*a=C_CLOSURE_TYPE|36,a[1]=(C_word)f_5343,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],tmp=(C_word)a,a+=37,tmp);
t3=*((C_word*)lf[313]+1);
if(C_truep(*((C_word*)lf[313]+1))){
t4=*((C_word*)lf[313]+1);
if(C_truep(*((C_word*)lf[313]+1))){
t5=C_set_block_item(lf[310] /* chicken.compiler.core#standalone-executable */,0,C_SCHEME_FALSE);
t6=t2;
f_5343(t6,t5);}
else{
t5=t2;
f_5343(t5,C_SCHEME_UNDEFINED);}}
else{
if(C_truep(((C_word*)t0)[17])){
t4=C_set_block_item(lf[310] /* chicken.compiler.core#standalone-executable */,0,C_SCHEME_FALSE);
t5=t2;
f_5343(t5,t4);}
else{
t4=t2;
f_5343(t4,C_SCHEME_UNDEFINED);}}}

/* k5341 in k5338 in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in ... */
static void C_fcall f_5343(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(37,0,2)))){
C_save_and_reclaim_args((void *)trf_5343,2,t0,t1);}
a=C_alloc(37);
t2=(*a=C_CLOSURE_TYPE|36,a[1]=(C_word)f_5346,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],tmp=(C_word)a,a+=37,tmp);
if(C_truep(C_u_i_memq(lf[270],((C_word*)t0)[2]))){
t3=C_set_block_item(lf[462] /* ##sys#dload-disabled */,0,C_SCHEME_TRUE);
/* batch-driver.scm:326: chicken.platform#repository-path */
t4=*((C_word*)lf[463]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t2;
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=t2;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_5346(2,av2);}}}

/* k5344 in k5341 in k5338 in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in ... */
static void C_ccall f_5346(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(43,c,3)))){
C_save_and_reclaim((void *)f_5346,c,av);}
a=C_alloc(43);
t2=C_mutate((C_word*)lf[122]+1 /* (set! chicken.compiler.core#enable-specialization ...) */,C_u_i_memq(lf[123],((C_word*)t0)[2]));
t3=(*a=C_CLOSURE_TYPE|36,a[1]=(C_word)f_5353,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],tmp=(C_word)a,a+=37,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7906,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7963,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:333: collect-options */
t6=((C_word*)((C_word*)t0)[23])[1];
f_5189(t6,t5,lf[461]);}

/* k5351 in k5344 in k5341 in k5338 in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in ... */
static void C_ccall f_5353(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(40,c,2)))){
C_save_and_reclaim((void *)f_5353,c,av);}
a=C_alloc(40);
t2=C_mutate((C_word*)lf[103]+1 /* (set! chicken.compiler.support#debugging-chicken ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|36,a[1]=(C_word)f_5356,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],tmp=(C_word)a,a+=37,tmp);
if(C_truep(C_i_memq(lf[347],*((C_word*)lf[103]+1)))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7901,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:335: chicken.compiler.support#print-debug-options */
t5=*((C_word*)lf[459]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_5356(2,av2);}}}

/* k5354 in k5351 in k5344 in k5341 in k5338 in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in ... */
static void C_ccall f_5356(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(43,c,2)))){
C_save_and_reclaim((void *)f_5356,c,av);}
a=C_alloc(43);
t2=C_i_memq(lf[124],*((C_word*)lf[103]+1));
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=(*a=C_CLOSURE_TYPE|37,a[1]=(C_word)f_5382,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],a[32]=((C_word*)t0)[33],a[33]=((C_word*)t0)[34],a[34]=((C_word*)t0)[35],a[35]=((C_word*)t0)[36],a[36]=t6,a[37]=t7,tmp=(C_word)a,a+=38,tmp);
/* batch-driver.scm:342: collect-options */
t9=((C_word*)((C_word*)t0)[23])[1];
f_5189(t9,t8,lf[458]);}

/* k5371 in map-loop1335 in k5380 in k5354 in k5351 in k5344 in k5341 in k5338 in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in ... */
static void C_ccall f_5373(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_5373,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5377,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* ##sys#string-append */
t3=*((C_word*)lf[456]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=lf[457];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k5375 in k5371 in map-loop1335 in k5380 in k5354 in k5351 in k5344 in k5341 in k5338 in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in ... */
static void C_ccall f_5377(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_5377,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=C_i_setslot(((C_word*)((C_word*)t0)[3])[1],C_fix(1),t3);
t5=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t6=((C_word*)((C_word*)t0)[4])[1];
f_7863(t6,((C_word*)t0)[5],C_slot(((C_word*)t0)[6],C_fix(1)));}

/* k5380 in k5354 in k5351 in k5344 in k5341 in k5338 in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in ... */
static void C_ccall f_5382(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(43,c,3)))){
C_save_and_reclaim((void *)f_5382,c,av);}
a=C_alloc(43);
t2=C_i_check_list_2(t1,lf[5]);
t3=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_5388,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7863,a[2]=((C_word*)t0)[36],a[3]=t5,a[4]=((C_word*)t0)[37],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_7863(t7,t3,t1);}

/* k5386 in k5380 in k5354 in k5351 in k5344 in k5341 in k5338 in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in ... */
static void C_ccall f_5388(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(36,c,2)))){
C_save_and_reclaim((void *)f_5388,c,av);}
a=C_alloc(36);
t2=C_mutate((C_word*)lf[125]+1 /* (set! chicken.compiler.core#import-libraries ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_5391,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
if(C_truep(C_u_i_memq(lf[454],((C_word*)t0)[2]))){
if(C_truep(C_i_not(((C_word*)t0)[17]))){
t4=C_set_block_item(lf[455] /* chicken.compiler.core#all-import-libraries */,0,C_SCHEME_TRUE);
t5=t3;
f_5391(t5,t4);}
else{
t4=t3;
f_5391(t4,C_SCHEME_UNDEFINED);}}
else{
t4=t3;
f_5391(t4,C_SCHEME_UNDEFINED);}}

/* k5389 in k5386 in k5380 in k5354 in k5351 in k5344 in k5341 in k5338 in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in ... */
static void C_fcall f_5391(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(36,0,2)))){
C_save_and_reclaim_args((void *)trf_5391,2,t0,t1);}
a=C_alloc(36);
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_5394,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
if(C_truep(*((C_word*)lf[122]+1))){
t3=C_set_block_item(((C_word*)t0)[21],0,C_SCHEME_TRUE);
t4=t2;
f_5394(t4,t3);}
else{
t3=t2;
f_5394(t3,C_SCHEME_UNDEFINED);}}

/* k5392 in k5389 in k5386 in k5380 in k5354 in k5351 in k5344 in k5341 in k5338 in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in ... */
static void C_fcall f_5394(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(36,0,2)))){
C_save_and_reclaim_args((void *)trf_5394,2,t0,t1);}
a=C_alloc(36);
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_5397,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
if(C_truep(C_i_memq(lf[187],*((C_word*)lf[103]+1)))){
/* batch-driver.scm:348: ##sys#start-timer */
t3=*((C_word*)lf[453]+1);{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=t2;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_5397(2,av2);}}}

/* k5395 in k5392 in k5389 in k5386 in k5380 in k5354 in k5351 in k5344 in k5341 in k5338 in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in ... */
static void C_ccall f_5397(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(35,c,2)))){
C_save_and_reclaim((void *)f_5397,c,av);}
a=C_alloc(35);
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_5400,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep(C_i_memq(lf[452],*((C_word*)lf[103]+1)))){
t3=C_set_block_item(((C_word*)t0)[35],0,C_SCHEME_TRUE);
t4=t2;
f_5400(t4,t3);}
else{
t3=t2;
f_5400(t3,C_SCHEME_UNDEFINED);}}

/* k5398 in k5395 in k5392 in k5389 in k5386 in k5380 in k5354 in k5351 in k5344 in k5341 in k5338 in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in ... */
static void C_fcall f_5400(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(35,0,2)))){
C_save_and_reclaim_args((void *)trf_5400,2,t0,t1);}
a=C_alloc(35);
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_5403,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep(C_u_i_memq(lf[451],((C_word*)t0)[2]))){
t3=C_set_block_item(lf[83] /* chicken.compiler.core#explicit-use-flag */,0,C_SCHEME_TRUE);
t4=C_set_block_item(((C_word*)t0)[8],0,C_SCHEME_END_OF_LIST);
t5=C_set_block_item(((C_word*)t0)[4],0,C_SCHEME_END_OF_LIST);
t6=C_set_block_item(((C_word*)t0)[24],0,C_SCHEME_END_OF_LIST);
t7=t2;
f_5403(t7,t6);}
else{
t3=t2;
f_5403(t3,C_SCHEME_UNDEFINED);}}

/* k5401 in k5398 in k5395 in k5392 in k5389 in k5386 in k5380 in k5354 in k5351 in k5344 in k5341 in k5338 in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in ... */
static void C_fcall f_5403(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(35,0,2)))){
C_save_and_reclaim_args((void *)trf_5403,2,t0,t1);}
a=C_alloc(35);
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_5406,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep(C_u_i_memq(lf[449],((C_word*)t0)[2]))){
t3=C_set_block_item(lf[450] /* chicken.compiler.core#emit-closure-info */,0,C_SCHEME_FALSE);
t4=t2;
f_5406(t4,t3);}
else{
t3=t2;
f_5406(t3,C_SCHEME_UNDEFINED);}}

/* k5404 in k5401 in k5398 in k5395 in k5392 in k5389 in k5386 in k5380 in k5354 in k5351 in k5344 in k5341 in k5338 in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in ... */
static void C_fcall f_5406(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(35,0,2)))){
C_save_and_reclaim_args((void *)trf_5406,2,t0,t1);}
a=C_alloc(35);
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_5409,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep(C_u_i_memq(lf[447],((C_word*)t0)[2]))){
t3=C_set_block_item(lf[448] /* chicken.compiler.core#compiler-syntax-enabled */,0,C_SCHEME_FALSE);
t4=t2;
f_5409(t4,t3);}
else{
t3=t2;
f_5409(t3,C_SCHEME_UNDEFINED);}}

/* k5407 in k5404 in k5401 in k5398 in k5395 in k5392 in k5389 in k5386 in k5380 in k5354 in k5351 in k5344 in k5341 in k5338 in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in ... */
static void C_fcall f_5409(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(35,0,2)))){
C_save_and_reclaim_args((void *)trf_5409,2,t0,t1);}
a=C_alloc(35);
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_5412,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep(C_u_i_memq(lf[446],((C_word*)t0)[2]))){
t3=C_set_block_item(lf[424] /* chicken.compiler.core#local-definitions */,0,C_SCHEME_TRUE);
t4=t2;
f_5412(t4,t3);}
else{
t3=t2;
f_5412(t3,C_SCHEME_UNDEFINED);}}

/* k5410 in k5407 in k5404 in k5401 in k5398 in k5395 in k5392 in k5389 in k5386 in k5380 in k5354 in k5351 in k5344 in k5341 in k5338 in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in ... */
static void C_fcall f_5412(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(35,0,2)))){
C_save_and_reclaim_args((void *)trf_5412,2,t0,t1);}
a=C_alloc(35);
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_5415,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep(C_u_i_memq(lf[445],((C_word*)t0)[2]))){
t3=C_set_block_item(lf[276] /* chicken.compiler.core#enable-inline-files */,0,C_SCHEME_TRUE);
t4=C_set_block_item(lf[168] /* chicken.compiler.core#inline-locally */,0,C_SCHEME_TRUE);
t5=t2;
f_5415(t5,t4);}
else{
t3=t2;
f_5415(t3,C_SCHEME_UNDEFINED);}}

/* k5413 in k5410 in k5407 in k5404 in k5401 in k5398 in k5395 in k5392 in k5389 in k5386 in k5380 in k5354 in k5351 in k5344 in k5341 in k5338 in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in ... */
static void C_fcall f_5415(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(35,0,2)))){
C_save_and_reclaim_args((void *)trf_5415,2,t0,t1);}
a=C_alloc(35);
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_5418,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep(C_u_i_memq(lf[442],((C_word*)t0)[2]))){
t3=C_set_block_item(lf[443] /* chicken.compiler.core#verbose-mode */,0,C_SCHEME_TRUE);
t4=C_set_block_item(lf[444] /* ##sys#notices-enabled */,0,C_SCHEME_TRUE);
t5=t2;
f_5418(t5,t4);}
else{
t3=t2;
f_5418(t3,C_SCHEME_UNDEFINED);}}

/* k5416 in k5413 in k5410 in k5407 in k5404 in k5401 in k5398 in k5395 in k5392 in k5389 in k5386 in k5380 in k5354 in k5351 in k5344 in k5341 in k5338 in k4962 in k4937 in k4932 in k4929 in k4923 in ... */
static void C_fcall f_5418(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(35,0,2)))){
C_save_and_reclaim_args((void *)trf_5418,2,t0,t1);}
a=C_alloc(35);
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_5421,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep(C_u_i_memq(lf[441],((C_word*)t0)[2]))){
t3=C_set_block_item(lf[258] /* chicken.compiler.core#strict-variable-types */,0,C_SCHEME_TRUE);
t4=C_set_block_item(lf[122] /* chicken.compiler.core#enable-specialization */,0,C_SCHEME_TRUE);
t5=t2;
f_5421(t5,t4);}
else{
t3=t2;
f_5421(t3,C_SCHEME_UNDEFINED);}}

/* k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in k5401 in k5398 in k5395 in k5392 in k5389 in k5386 in k5380 in k5354 in k5351 in k5344 in k5341 in k5338 in k4962 in k4937 in k4932 in k4929 in ... */
static void C_fcall f_5421(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(42,0,4)))){
C_save_and_reclaim_args((void *)trf_5421,2,t0,t1);}
a=C_alloc(42);
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_5424,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep(C_u_i_memq(lf[439],((C_word*)t0)[2]))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7812,a[2]=((C_word*)t0)[21],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9308,a[2]=t3,tmp=(C_word)a,a+=3,tmp);{
C_word av2[5];
av2[0]=0;
av2[1]=t4;
av2[2]=*((C_word*)lf[184]+1);
av2[3]=lf[440];
av2[4]=C_SCHEME_END_OF_LIST;
C_apply(5,av2);}}
else{
t3=t2;
f_5424(t3,C_SCHEME_UNDEFINED);}}

/* k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in k5401 in k5398 in k5395 in k5392 in k5389 in k5386 in k5380 in k5354 in k5351 in k5344 in k5341 in k5338 in k4962 in k4937 in k4932 in ... */
static void C_fcall f_5424(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(35,0,2)))){
C_save_and_reclaim_args((void *)trf_5424,2,t0,t1);}
a=C_alloc(35);
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_5427,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep(C_u_i_memq(lf[438],((C_word*)t0)[2]))){
t3=C_set_block_item(lf[174] /* chicken.compiler.core#optimize-leaf-routines */,0,C_SCHEME_TRUE);
t4=t2;
f_5427(t4,t3);}
else{
t3=t2;
f_5427(t3,C_SCHEME_UNDEFINED);}}

/* k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in k5401 in k5398 in k5395 in k5392 in k5389 in k5386 in k5380 in k5354 in k5351 in k5344 in k5341 in k5338 in k4962 in k4937 in ... */
static void C_fcall f_5427(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(35,0,2)))){
C_save_and_reclaim_args((void *)trf_5427,2,t0,t1);}
a=C_alloc(35);
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_5430,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep(C_u_i_memq(lf[437],((C_word*)t0)[2]))){
t3=C_set_block_item(lf[251] /* chicken.compiler.support#unsafe */,0,C_SCHEME_TRUE);
t4=t2;
f_5430(t4,t3);}
else{
t3=t2;
f_5430(t3,C_SCHEME_UNDEFINED);}}

/* k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in k5401 in k5398 in k5395 in k5392 in k5389 in k5386 in k5380 in k5354 in k5351 in k5344 in k5341 in k5338 in k4962 in ... */
static void C_fcall f_5430(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(35,0,2)))){
C_save_and_reclaim_args((void *)trf_5430,2,t0,t1);}
a=C_alloc(35);
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_5433,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep(C_u_i_memq(lf[435],((C_word*)t0)[2]))){
t3=C_set_block_item(lf[436] /* ##sys#setup-mode */,0,C_SCHEME_TRUE);
t4=t2;
f_5433(t4,t3);}
else{
t3=t2;
f_5433(t3,C_SCHEME_UNDEFINED);}}

/* k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in k5401 in k5398 in k5395 in k5392 in k5389 in k5386 in k5380 in k5354 in k5351 in k5344 in k5341 in k5338 in ... */
static void C_fcall f_5433(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(35,0,2)))){
C_save_and_reclaim_args((void *)trf_5433,2,t0,t1);}
a=C_alloc(35);
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_5436,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep(C_u_i_memq(lf[433],((C_word*)t0)[2]))){
t3=C_set_block_item(lf[434] /* chicken.compiler.core#preserve-unchanged-import-libraries */,0,C_SCHEME_FALSE);
t4=t2;
f_5436(t4,t3);}
else{
t3=t2;
f_5436(t3,C_SCHEME_UNDEFINED);}}

/* k5434 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in k5401 in k5398 in k5395 in k5392 in k5389 in k5386 in k5380 in k5354 in k5351 in k5344 in k5341 in ... */
static void C_fcall f_5436(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(35,0,2)))){
C_save_and_reclaim_args((void *)trf_5436,2,t0,t1);}
a=C_alloc(35);
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_5439,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep(C_u_i_memq(lf[432],((C_word*)t0)[2]))){
t3=C_set_block_item(lf[209] /* chicken.compiler.core#insert-timer-checks */,0,C_SCHEME_FALSE);
t4=t2;
f_5439(t4,t3);}
else{
t3=t2;
f_5439(t3,C_SCHEME_UNDEFINED);}}

/* k5437 in k5434 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in k5401 in k5398 in k5395 in k5392 in k5389 in k5386 in k5380 in k5354 in k5351 in k5344 in ... */
static void C_fcall f_5439(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(35,0,2)))){
C_save_and_reclaim_args((void *)trf_5439,2,t0,t1);}
a=C_alloc(35);
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_5442,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep(C_u_i_memq(lf[429],((C_word*)t0)[2]))){
t3=C_mutate((C_word*)lf[430]+1 /* (set! chicken.compiler.support#number-type ...) */,lf[431]);
t4=t2;
f_5442(t4,t3);}
else{
t3=t2;
f_5442(t3,C_SCHEME_UNDEFINED);}}

/* k5440 in k5437 in k5434 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in k5401 in k5398 in k5395 in k5392 in k5389 in k5386 in k5380 in k5354 in k5351 in ... */
static void C_fcall f_5442(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(35,0,2)))){
C_save_and_reclaim_args((void *)trf_5442,2,t0,t1);}
a=C_alloc(35);
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_5445,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep(C_u_i_memq(lf[428],((C_word*)t0)[2]))){
t3=C_set_block_item(lf[167] /* chicken.compiler.core#block-compilation */,0,C_SCHEME_TRUE);
t4=t2;
f_5445(t4,t3);}
else{
t3=t2;
f_5445(t3,C_SCHEME_UNDEFINED);}}

/* k5443 in k5440 in k5437 in k5434 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in k5401 in k5398 in k5395 in k5392 in k5389 in k5386 in k5380 in k5354 in ... */
static void C_fcall f_5445(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(35,0,2)))){
C_save_and_reclaim_args((void *)trf_5445,2,t0,t1);}
a=C_alloc(35);
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_5448,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep(C_u_i_memq(lf[426],((C_word*)t0)[2]))){
t3=C_set_block_item(lf[427] /* chicken.compiler.core#external-protos-first */,0,C_SCHEME_TRUE);
t4=t2;
f_5448(t4,t3);}
else{
t3=t2;
f_5448(t3,C_SCHEME_UNDEFINED);}}

/* k5446 in k5443 in k5440 in k5437 in k5434 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in k5401 in k5398 in k5395 in k5392 in k5389 in k5386 in k5380 in ... */
static void C_fcall f_5448(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(35,0,2)))){
C_save_and_reclaim_args((void *)trf_5448,2,t0,t1);}
a=C_alloc(35);
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_5451,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep(C_u_i_memq(lf[425],((C_word*)t0)[2]))){
t3=C_set_block_item(lf[168] /* chicken.compiler.core#inline-locally */,0,C_SCHEME_TRUE);
t4=t2;
f_5451(t4,t3);}
else{
t3=t2;
f_5451(t3,C_SCHEME_UNDEFINED);}}

/* k5449 in k5446 in k5443 in k5440 in k5437 in k5434 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in k5401 in k5398 in k5395 in k5392 in k5389 in k5386 in ... */
static void C_fcall f_5451(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(38,0,2)))){
C_save_and_reclaim_args((void *)trf_5451,2,t0,t1);}
a=C_alloc(38);
t2=C_u_i_memq(lf[126],((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_5456,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7780,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:388: option-arg */
f_4858(t4,t2);}
else{
t4=t3;
f_5456(t4,C_SCHEME_FALSE);}}

/* k5454 in k5449 in k5446 in k5443 in k5440 in k5437 in k5434 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in k5401 in k5398 in k5395 in k5392 in k5389 in ... */
static void C_fcall f_5456(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(39,0,2)))){
C_save_and_reclaim_args((void *)trf_5456,2,t0,t1);}
a=C_alloc(39);
t2=C_u_i_memq(lf[127],((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_5461,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep(t2)){
t4=C_set_block_item(lf[168] /* chicken.compiler.core#inline-locally */,0,C_SCHEME_TRUE);
t5=C_set_block_item(lf[424] /* chicken.compiler.core#local-definitions */,0,C_SCHEME_TRUE);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7776,a[2]=((C_word*)t0)[19],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:392: option-arg */
f_4858(t6,t2);}
else{
t4=t3;
f_5461(t4,C_SCHEME_FALSE);}}

/* k5459 in k5454 in k5449 in k5446 in k5443 in k5440 in k5437 in k5434 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in k5401 in k5398 in k5395 in k5392 in ... */
static void C_fcall f_5461(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(38,0,2)))){
C_save_and_reclaim_args((void *)trf_5461,2,t0,t1);}
a=C_alloc(38);
t2=C_u_i_memq(lf[128],((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_5466,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7770,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:394: option-arg */
f_4858(t4,t2);}
else{
t4=t3;
f_5466(t4,C_SCHEME_FALSE);}}

/* k5464 in k5459 in k5454 in k5449 in k5446 in k5443 in k5440 in k5437 in k5434 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in k5401 in k5398 in k5395 in ... */
static void C_fcall f_5466(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(38,0,2)))){
C_save_and_reclaim_args((void *)trf_5466,2,t0,t1);}
a=C_alloc(38);
t2=C_u_i_memq(lf[129],((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_5471,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7757,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:397: option-arg */
f_4858(t4,t2);}
else{
t4=t3;
f_5471(t4,C_SCHEME_FALSE);}}

/* k5469 in k5464 in k5459 in k5454 in k5449 in k5446 in k5443 in k5440 in k5437 in k5434 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in k5401 in k5398 in ... */
static void C_fcall f_5471(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(38,0,2)))){
C_save_and_reclaim_args((void *)trf_5471,2,t0,t1);}
a=C_alloc(38);
t2=C_u_i_memq(lf[130],((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_5476,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7744,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:403: option-arg */
f_4858(t4,t2);}
else{
t4=t3;
f_5476(t4,C_SCHEME_FALSE);}}

/* k5474 in k5469 in k5464 in k5459 in k5454 in k5449 in k5446 in k5443 in k5440 in k5437 in k5434 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in k5401 in ... */
static void C_fcall f_5476(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(41,0,4)))){
C_save_and_reclaim_args((void *)trf_5476,2,t0,t1);}
a=C_alloc(41);
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_5479,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep(C_u_i_memq(lf[420],((C_word*)t0)[4]))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7734,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9302,a[2]=t3,tmp=(C_word)a,a+=3,tmp);{
C_word av2[5];
av2[0]=0;
av2[1]=t4;
av2[2]=*((C_word*)lf[184]+1);
av2[3]=lf[421];
av2[4]=C_SCHEME_END_OF_LIST;
C_apply(5,av2);}}
else{
t3=t2;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_5479(2,av2);}}}

/* k5477 in k5474 in k5469 in k5464 in k5459 in k5454 in k5449 in k5446 in k5443 in k5440 in k5437 in k5434 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in ... */
static void C_ccall f_5479(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(37,c,2)))){
C_save_and_reclaim((void *)f_5479,c,av);}
a=C_alloc(37);
t2=(*a=C_CLOSURE_TYPE|33,a[1]=(C_word)f_5482,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],tmp=(C_word)a,a+=34,tmp);
if(C_truep(((C_word*)t0)[34])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7701,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:412: option-arg */
f_4858(t3,((C_word*)t0)[34]);}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_5482(2,av2);}}}

/* k5480 in k5477 in k5474 in k5469 in k5464 in k5459 in k5454 in k5449 in k5446 in k5443 in k5440 in k5437 in k5434 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in ... */
static void C_ccall f_5482(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(40,c,4)))){
C_save_and_reclaim((void *)f_5482,c,av);}
a=C_alloc(40);
t2=(*a=C_CLOSURE_TYPE|33,a[1]=(C_word)f_5485,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],tmp=(C_word)a,a+=34,tmp);
if(C_truep(C_u_i_memq(lf[412],((C_word*)t0)[4]))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7695,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9296,a[2]=t3,tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t4;
av2[2]=*((C_word*)lf[184]+1);
av2[3]=lf[413];
av2[4]=C_SCHEME_END_OF_LIST;
C_apply(5,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_5485(2,av2);}}}

/* k5483 in k5480 in k5477 in k5474 in k5469 in k5464 in k5459 in k5454 in k5449 in k5446 in k5443 in k5440 in k5437 in k5434 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in ... */
static void C_ccall f_5485(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(40,c,4)))){
C_save_and_reclaim((void *)f_5485,c,av);}
a=C_alloc(40);
t2=(*a=C_CLOSURE_TYPE|33,a[1]=(C_word)f_5488,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],tmp=(C_word)a,a+=34,tmp);
if(C_truep(C_u_i_memq(lf[410],((C_word*)t0)[4]))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7687,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9290,a[2]=t3,tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t4;
av2[2]=*((C_word*)lf[184]+1);
av2[3]=lf[411];
av2[4]=C_SCHEME_END_OF_LIST;
C_apply(5,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_5488(2,av2);}}}

/* k5486 in k5483 in k5480 in k5477 in k5474 in k5469 in k5464 in k5459 in k5454 in k5449 in k5446 in k5443 in k5440 in k5437 in k5434 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in ... */
static void C_ccall f_5488(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(40,c,4)))){
C_save_and_reclaim((void *)f_5488,c,av);}
a=C_alloc(40);
t2=(*a=C_CLOSURE_TYPE|33,a[1]=(C_word)f_5491,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],tmp=(C_word)a,a+=34,tmp);
if(C_truep(C_u_i_memq(lf[403],((C_word*)t0)[4]))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7670,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9284,a[2]=t3,tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t4;
av2[2]=*((C_word*)lf[184]+1);
av2[3]=lf[409];
av2[4]=C_SCHEME_END_OF_LIST;
C_apply(5,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_5491(2,av2);}}}

/* k5489 in k5486 in k5483 in k5480 in k5477 in k5474 in k5469 in k5464 in k5459 in k5454 in k5449 in k5446 in k5443 in k5440 in k5437 in k5434 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in ... */
static void C_ccall f_5491(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(45,c,2)))){
C_save_and_reclaim((void *)f_5491,c,av);}
a=C_alloc(45);
t2=C_set_block_item(lf[131] /* ##sys#read-error-with-line-number */,0,C_SCHEME_TRUE);
t3=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_5496,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=*((C_word*)lf[92]+1);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7625,a[2]=t3,a[3]=((C_word*)t0)[33],a[4]=t6,a[5]=t8,a[6]=t7,tmp=(C_word)a,a+=7,tmp);
/* batch-driver.scm:432: collect-options */
t10=((C_word*)((C_word*)t0)[22])[1];
f_5189(t10,t9,lf[402]);}

/* k5494 in k5489 in k5486 in k5483 in k5480 in k5477 in k5474 in k5469 in k5464 in k5459 in k5454 in k5449 in k5446 in k5443 in k5440 in k5437 in k5434 in k5431 in k5428 in k5425 in k5422 in k5419 in ... */
static void C_ccall f_5496(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,2)))){
C_save_and_reclaim((void *)f_5496,c,av);}
a=C_alloc(33);
t2=C_mutate((C_word*)lf[132]+1 /* (set! ##sys#include-pathnames ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_5499,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
if(C_truep(((C_word*)t0)[14])){
if(C_truep(((C_word*)t0)[6])){
if(C_truep(C_i_string_equal_p(((C_word*)t0)[14],((C_word*)t0)[6]))){
/* batch-driver.scm:436: chicken.compiler.support#quit-compiling */
t4=*((C_word*)lf[80]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[401];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_5499(2,av2);}}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_5499(2,av2);}}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_5499(2,av2);}}}

/* k5497 in k5494 in k5489 in k5486 in k5483 in k5480 in k5477 in k5474 in k5469 in k5464 in k5459 in k5454 in k5449 in k5446 in k5443 in k5440 in k5437 in k5434 in k5431 in k5428 in k5425 in k5422 in ... */
static void C_ccall f_5499(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,2)))){
C_save_and_reclaim((void *)f_5499,c,av);}
a=C_alloc(33);
t2=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_5502,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
if(C_truep(C_u_i_memq(lf[399],((C_word*)t0)[4]))){
t3=C_set_block_item(lf[400] /* chicken.compiler.core#undefine-shadowed-macros */,0,C_SCHEME_FALSE);
t4=t2;
f_5502(t4,t3);}
else{
t3=t2;
f_5502(t3,C_SCHEME_UNDEFINED);}}

/* k5500 in k5497 in k5494 in k5489 in k5486 in k5483 in k5480 in k5477 in k5474 in k5469 in k5464 in k5459 in k5454 in k5449 in k5446 in k5443 in k5440 in k5437 in k5434 in k5431 in k5428 in k5425 in ... */
static void C_fcall f_5502(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,0,2)))){
C_save_and_reclaim_args((void *)trf_5502,2,t0,t1);}
a=C_alloc(33);
t2=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_5505,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
if(C_truep(C_u_i_memq(lf[397],((C_word*)t0)[4]))){
t3=C_set_block_item(lf[398] /* chicken.compiler.core#no-argc-checks */,0,C_SCHEME_TRUE);
t4=t2;
f_5505(t4,t3);}
else{
t3=t2;
f_5505(t3,C_SCHEME_UNDEFINED);}}

/* k5503 in k5500 in k5497 in k5494 in k5489 in k5486 in k5483 in k5480 in k5477 in k5474 in k5469 in k5464 in k5459 in k5454 in k5449 in k5446 in k5443 in k5440 in k5437 in k5434 in k5431 in k5428 in ... */
static void C_fcall f_5505(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,0,2)))){
C_save_and_reclaim_args((void *)trf_5505,2,t0,t1);}
a=C_alloc(33);
t2=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_5508,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
if(C_truep(C_u_i_memq(lf[395],((C_word*)t0)[4]))){
t3=C_set_block_item(lf[396] /* chicken.compiler.core#no-bound-checks */,0,C_SCHEME_TRUE);
t4=t2;
f_5508(t4,t3);}
else{
t3=t2;
f_5508(t3,C_SCHEME_UNDEFINED);}}

/* k5506 in k5503 in k5500 in k5497 in k5494 in k5489 in k5486 in k5483 in k5480 in k5477 in k5474 in k5469 in k5464 in k5459 in k5454 in k5449 in k5446 in k5443 in k5440 in k5437 in k5434 in k5431 in ... */
static void C_fcall f_5508(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,0,2)))){
C_save_and_reclaim_args((void *)trf_5508,2,t0,t1);}
a=C_alloc(33);
t2=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_5511,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
if(C_truep(C_u_i_memq(lf[393],((C_word*)t0)[4]))){
t3=C_set_block_item(lf[394] /* chicken.compiler.core#no-procedure-checks */,0,C_SCHEME_TRUE);
t4=t2;
f_5511(t4,t3);}
else{
t3=t2;
f_5511(t3,C_SCHEME_UNDEFINED);}}

/* k5509 in k5506 in k5503 in k5500 in k5497 in k5494 in k5489 in k5486 in k5483 in k5480 in k5477 in k5474 in k5469 in k5464 in k5459 in k5454 in k5449 in k5446 in k5443 in k5440 in k5437 in k5434 in ... */
static void C_fcall f_5511(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,0,2)))){
C_save_and_reclaim_args((void *)trf_5511,2,t0,t1);}
a=C_alloc(33);
t2=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_5514,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
if(C_truep(C_u_i_memq(lf[391],((C_word*)t0)[4]))){
t3=C_set_block_item(lf[392] /* chicken.compiler.core#no-global-procedure-checks */,0,C_SCHEME_TRUE);
t4=t2;
f_5514(t4,t3);}
else{
t3=t2;
f_5514(t3,C_SCHEME_UNDEFINED);}}

/* k5512 in k5509 in k5506 in k5503 in k5500 in k5497 in k5494 in k5489 in k5486 in k5483 in k5480 in k5477 in k5474 in k5469 in k5464 in k5459 in k5454 in k5449 in k5446 in k5443 in k5440 in k5437 in ... */
static void C_fcall f_5514(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(41,0,3)))){
C_save_and_reclaim_args((void *)trf_5514,2,t0,t1);}
a=C_alloc(41);
t2=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_5517,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
if(C_truep(C_u_i_memq(lf[388],((C_word*)t0)[4]))){
t3=*((C_word*)lf[77]+1);
t4=C_i_check_list_2(*((C_word*)lf[77]+1),lf[10]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7531,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7570,a[2]=t7,tmp=(C_word)a,a+=3,tmp));
t9=((C_word*)t7)[1];
f_7570(t9,t5,*((C_word*)lf[77]+1));}
else{
t3=t2;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_5517(2,av2);}}}

/* k5515 in k5512 in k5509 in k5506 in k5503 in k5500 in k5497 in k5494 in k5489 in k5486 in k5483 in k5480 in k5477 in k5474 in k5469 in k5464 in k5459 in k5454 in k5449 in k5446 in k5443 in k5440 in ... */
static void C_ccall f_5517(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,2)))){
C_save_and_reclaim((void *)f_5517,c,av);}
a=C_alloc(33);
t2=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_5520,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
if(C_truep(C_i_memq(lf[105],*((C_word*)lf[103]+1)))){
/* batch-driver.scm:458: chicken.load#load-verbose */
t3=*((C_word*)lf[387]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_5520(2,av2);}}}

/* k5518 in k5515 in k5512 in k5509 in k5506 in k5503 in k5500 in k5497 in k5494 in k5489 in k5486 in k5483 in k5480 in k5477 in k5474 in k5469 in k5464 in k5459 in k5454 in k5449 in k5446 in k5443 in ... */
static void C_ccall f_5520(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(40,c,3)))){
C_save_and_reclaim((void *)f_5520,c,av);}
a=C_alloc(40);
t2=*((C_word*)lf[133]+1);
t3=(*a=C_CLOSURE_TYPE|33,a[1]=(C_word)f_5523,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=t2,tmp=(C_word)a,a+=34,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7501,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7509,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:463: collect-options */
t6=((C_word*)((C_word*)t0)[22])[1];
f_5189(t6,t5,lf[386]);}

/* k5521 in k5518 in k5515 in k5512 in k5509 in k5506 in k5503 in k5500 in k5497 in k5494 in k5489 in k5486 in k5483 in k5480 in k5477 in k5474 in k5469 in k5464 in k5459 in k5454 in k5449 in k5446 in ... */
static void C_ccall f_5523(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(39,c,3)))){
C_save_and_reclaim((void *)f_5523,c,av);}
a=C_alloc(39);
t2=C_i_check_list_2(t1,lf[10]);
t3=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_5529,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7478,a[2]=t5,a[3]=((C_word*)t0)[33],tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_7478(t7,t3,t1);}

/* k5527 in k5521 in k5518 in k5515 in k5512 in k5509 in k5506 in k5503 in k5500 in k5497 in k5494 in k5489 in k5486 in k5483 in k5480 in k5477 in k5474 in k5469 in k5464 in k5459 in k5454 in k5449 in ... */
static void C_ccall f_5529(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(40,c,3)))){
C_save_and_reclaim((void *)f_5529,c,av);}
a=C_alloc(40);
t2=*((C_word*)lf[134]+1);
t3=(*a=C_CLOSURE_TYPE|33,a[1]=(C_word)f_5532,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=t2,tmp=(C_word)a,a+=34,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7468,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7476,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:466: collect-options */
t6=((C_word*)((C_word*)t0)[22])[1];
f_5189(t6,t5,lf[384]);}

/* k5530 in k5527 in k5521 in k5518 in k5515 in k5512 in k5509 in k5506 in k5503 in k5500 in k5497 in k5494 in k5489 in k5486 in k5483 in k5480 in k5477 in k5474 in k5469 in k5464 in k5459 in k5454 in ... */
static void C_ccall f_5532(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(39,c,3)))){
C_save_and_reclaim((void *)f_5532,c,av);}
a=C_alloc(39);
t2=C_i_check_list_2(t1,lf[10]);
t3=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_5538,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7445,a[2]=t5,a[3]=((C_word*)t0)[33],tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_7445(t7,t3,t1);}

/* k5536 in k5530 in k5527 in k5521 in k5518 in k5515 in k5512 in k5509 in k5506 in k5503 in k5500 in k5497 in k5494 in k5489 in k5486 in k5483 in k5480 in k5477 in k5474 in k5469 in k5464 in k5459 in ... */
static void C_ccall f_5538(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(36,c,2)))){
C_save_and_reclaim((void *)f_5538,c,av);}
a=C_alloc(36);
t2=C_a_i_cons(&a,2,lf[135],*((C_word*)lf[136]+1));
t3=C_mutate((C_word*)lf[136]+1 /* (set! ##sys#features ...) */,t2);
t4=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_5545,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
/* batch-driver.scm:470: collect-options */
t5=((C_word*)((C_word*)t0)[22])[1];
f_5189(t5,t4,lf[382]);}

/* k5543 in k5536 in k5530 in k5527 in k5521 in k5518 in k5515 in k5512 in k5509 in k5506 in k5503 in k5500 in k5497 in k5494 in k5489 in k5486 in k5483 in k5480 in k5477 in k5474 in k5469 in k5464 in ... */
static void C_ccall f_5545(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(37,c,4)))){
C_save_and_reclaim((void *)f_5545,c,av);}
a=C_alloc(37);
t2=(*a=C_CLOSURE_TYPE|33,a[1]=(C_word)f_5548,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],a[23]=((C_word*)t0)[22],a[24]=((C_word*)t0)[23],a[25]=((C_word*)t0)[24],a[26]=((C_word*)t0)[25],a[27]=((C_word*)t0)[26],a[28]=((C_word*)t0)[27],a[29]=((C_word*)t0)[28],a[30]=((C_word*)t0)[29],a[31]=((C_word*)t0)[30],a[32]=((C_word*)t0)[31],a[33]=((C_word*)t0)[32],tmp=(C_word)a,a+=34,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9268,a[2]=t2,tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t3;
av2[2]=*((C_word*)lf[184]+1);
av2[3]=lf[381];
av2[4]=C_SCHEME_END_OF_LIST;
C_apply(5,av2);}}

/* k5546 in k5543 in k5536 in k5530 in k5527 in k5521 in k5518 in k5515 in k5512 in k5509 in k5506 in k5503 in k5500 in k5497 in k5494 in k5489 in k5486 in k5483 in k5480 in k5477 in k5474 in k5469 in ... */
static void C_ccall f_5548(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(38,c,3)))){
C_save_and_reclaim((void *)f_5548,c,av);}
a=C_alloc(38);
t2=C_i_check_list_2(((C_word*)t0)[2],lf[10]);
t3=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_5571,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],a[32]=((C_word*)t0)[33],tmp=(C_word)a,a+=33,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7422,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_7422(t7,t3,((C_word*)t0)[2]);}

/* k5551 in for-each-loop1502 in k5546 in k5543 in k5536 in k5530 in k5527 in k5521 in k5518 in k5515 in k5512 in k5509 in k5506 in k5503 in k5500 in k5497 in k5494 in k5489 in k5486 in k5483 in k5480 in k5477 in ... */
static void C_ccall f_5553(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_5553,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5556,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_not(t1))){
/* batch-driver.scm:475: chicken.compiler.support#quit-compiling */
t3=*((C_word*)lf[80]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[380];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
/* batch-driver.scm:476: scheme#load */
t3=*((C_word*)lf[379]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k5554 in k5551 in for-each-loop1502 in k5546 in k5543 in k5536 in k5530 in k5527 in k5521 in k5518 in k5515 in k5512 in k5509 in k5506 in k5503 in k5500 in k5497 in k5494 in k5489 in k5486 in k5483 in k5480 in ... */
static void C_ccall f_5556(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5556,c,av);}
/* batch-driver.scm:476: scheme#load */
t2=*((C_word*)lf[379]+1);{
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

/* k5569 in k5546 in k5543 in k5536 in k5530 in k5527 in k5521 in k5518 in k5515 in k5512 in k5509 in k5506 in k5503 in k5500 in k5497 in k5494 in k5489 in k5486 in k5483 in k5480 in k5477 in k5474 in ... */
static void C_ccall f_5571(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(38,c,3)))){
C_save_and_reclaim((void *)f_5571,c,av);}
a=C_alloc(38);
t2=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_5575,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
t3=*((C_word*)lf[136]+1);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3227,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_3227(t7,t2,*((C_word*)lf[136]+1));}

/* k5573 in k5569 in k5546 in k5543 in k5536 in k5530 in k5527 in k5521 in k5518 in k5515 in k5512 in k5509 in k5506 in k5503 in k5500 in k5497 in k5494 in k5489 in k5486 in k5483 in k5480 in k5477 in ... */
static void C_ccall f_5575(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(36,c,2)))){
C_save_and_reclaim((void *)f_5575,c,av);}
a=C_alloc(36);
t2=C_mutate((C_word*)lf[136]+1 /* (set! ##sys#features ...) */,t1);
t3=C_a_i_cons(&a,2,lf[137],*((C_word*)lf[136]+1));
t4=C_mutate((C_word*)lf[136]+1 /* (set! ##sys#features ...) */,t3);
t5=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_5583,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
/* batch-driver.scm:480: chicken.compiler.user-pass#user-post-analysis-pass */
t6=*((C_word*)lf[378]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k5581 in k5573 in k5569 in k5546 in k5543 in k5536 in k5530 in k5527 in k5521 in k5518 in k5515 in k5512 in k5509 in k5506 in k5503 in k5500 in k5497 in k5494 in k5489 in k5486 in k5483 in k5480 in ... */
static void C_ccall f_5583(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(38,c,3)))){
C_save_and_reclaim((void *)f_5583,c,av);}
a=C_alloc(38);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|31,a[1]=(C_word)f_5586,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],tmp=(C_word)a,a+=32,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7372,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7420,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:485: collect-options */
t6=((C_word*)((C_word*)t0)[22])[1];
f_5189(t6,t5,lf[376]);}

/* k5584 in k5581 in k5573 in k5569 in k5546 in k5543 in k5536 in k5530 in k5527 in k5521 in k5518 in k5515 in k5512 in k5509 in k5506 in k5503 in k5500 in k5497 in k5494 in k5489 in k5486 in k5483 in ... */
static void C_ccall f_5586(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(48,c,3)))){
C_save_and_reclaim((void *)f_5586,c,av);}
a=C_alloc(48);
t2=(*a=C_CLOSURE_TYPE|31,a[1]=(C_word)f_5589,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],tmp=(C_word)a,a+=32,tmp);
if(C_truep(C_i_nullp(t1))){
t3=t2;
f_5589(t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7358,a[2]=((C_word*)t0)[7],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_cons(&a,2,lf[376],t1);
t5=C_a_i_list(&a,2,lf[89],t4);
t6=C_a_i_list(&a,1,t5);
/* batch-driver.scm:488: scheme#append */
t7=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t0)[7])[1];
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}

/* k5587 in k5584 in k5581 in k5573 in k5569 in k5546 in k5543 in k5536 in k5530 in k5527 in k5521 in k5518 in k5515 in k5512 in k5509 in k5506 in k5503 in k5500 in k5497 in k5494 in k5489 in k5486 in ... */
static void C_fcall f_5589(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(38,0,3)))){
C_save_and_reclaim_args((void *)trf_5589,2,t0,t1);}
a=C_alloc(38);
t2=(*a=C_CLOSURE_TYPE|31,a[1]=(C_word)f_5592,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],tmp=(C_word)a,a+=32,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7303,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7351,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:493: collect-options */
t5=((C_word*)((C_word*)t0)[21])[1];
f_5189(t5,t4,lf[375]);}

/* k5590 in k5587 in k5584 in k5581 in k5573 in k5569 in k5546 in k5543 in k5536 in k5530 in k5527 in k5521 in k5518 in k5515 in k5512 in k5509 in k5506 in k5503 in k5500 in k5497 in k5494 in k5489 in ... */
static void C_ccall f_5592(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(40,c,4)))){
C_save_and_reclaim((void *)f_5592,c,av);}
a=C_alloc(40);
t2=(*a=C_CLOSURE_TYPE|31,a[1]=(C_word)f_5596,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],tmp=(C_word)a,a+=32,tmp);
t3=*((C_word*)lf[138]+1);
t4=C_a_i_list(&a,1,t1);
t5=*((C_word*)lf[138]+1);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3652,a[2]=t7,tmp=(C_word)a,a+=3,tmp));
t9=((C_word*)t7)[1];
f_3652(t9,t2,t4,*((C_word*)lf[138]+1));}

/* k5594 in k5590 in k5587 in k5584 in k5581 in k5573 in k5569 in k5546 in k5543 in k5536 in k5530 in k5527 in k5521 in k5518 in k5515 in k5512 in k5509 in k5506 in k5503 in k5500 in k5497 in k5494 in ... */
static void C_ccall f_5596(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(43,c,2)))){
C_save_and_reclaim((void *)f_5596,c,av);}
a=C_alloc(43);
t2=C_mutate((C_word*)lf[138]+1 /* (set! chicken.compiler.core#linked-libraries ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|31,a[1]=(C_word)f_5600,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],tmp=(C_word)a,a+=32,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7261,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t6,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:501: collect-options */
t9=((C_word*)((C_word*)t0)[21])[1];
f_5189(t9,t8,lf[371]);}

/* k5598 in k5594 in k5590 in k5587 in k5584 in k5581 in k5573 in k5569 in k5546 in k5543 in k5536 in k5530 in k5527 in k5521 in k5518 in k5515 in k5512 in k5509 in k5506 in k5503 in k5500 in k5497 in ... */
static void C_ccall f_5600(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(32,c,2)))){
C_save_and_reclaim((void *)f_5600,c,av);}
a=C_alloc(32);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|31,a[1]=(C_word)f_5603,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[2],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],tmp=(C_word)a,a+=32,tmp);
if(C_truep(C_u_i_memq(lf[368],((C_word*)t0)[3]))){
t4=C_set_block_item(lf[369] /* ##sys#enable-runtime-macros */,0,C_SCHEME_TRUE);
t5=t3;
f_5603(t5,t4);}
else{
t4=t3;
f_5603(t4,C_SCHEME_UNDEFINED);}}

/* k5601 in k5598 in k5594 in k5590 in k5587 in k5584 in k5581 in k5573 in k5569 in k5546 in k5543 in k5536 in k5530 in k5527 in k5521 in k5518 in k5515 in k5512 in k5509 in k5506 in k5503 in k5500 in ... */
static void C_fcall f_5603(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(35,0,2)))){
C_save_and_reclaim_args((void *)trf_5603,2,t0,t1);}
a=C_alloc(35);
t2=(*a=C_CLOSURE_TYPE|30,a[1]=(C_word)f_5607,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],tmp=(C_word)a,a+=31,tmp);
if(C_truep(((C_word*)t0)[31])){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7242,a[2]=((C_word*)t0)[29],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:507: option-arg */
f_4858(t3,((C_word*)t0)[31]);}
else{
t3=t2;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_5607(2,av2);}}}

/* k5605 in k5601 in k5598 in k5594 in k5590 in k5587 in k5584 in k5581 in k5573 in k5569 in k5546 in k5543 in k5536 in k5530 in k5527 in k5521 in k5518 in k5515 in k5512 in k5509 in k5506 in k5503 in ... */
static void C_ccall f_5607(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(32,c,2)))){
C_save_and_reclaim((void *)f_5607,c,av);}
a=C_alloc(32);
t2=C_mutate((C_word*)lf[139]+1 /* (set! chicken.compiler.core#target-heap-size ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|27,a[1]=(C_word)f_5611,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],tmp=(C_word)a,a+=28,tmp);
if(C_truep(((C_word*)t0)[28])){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7235,a[2]=((C_word*)t0)[29],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:510: option-arg */
f_4858(t4,((C_word*)t0)[28]);}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_5611(2,av2);}}}

/* k5609 in k5605 in k5601 in k5598 in k5594 in k5590 in k5587 in k5584 in k5581 in k5573 in k5569 in k5546 in k5543 in k5536 in k5530 in k5527 in k5521 in k5518 in k5515 in k5512 in k5509 in k5506 in ... */
static void C_ccall f_5611(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(28,c,2)))){
C_save_and_reclaim((void *)f_5611,c,av);}
a=C_alloc(28);
t2=C_mutate((C_word*)lf[140]+1 /* (set! chicken.compiler.core#target-stack-size ...) */,t1);
t3=C_i_not(C_u_i_memq(lf[141],((C_word*)t0)[2]));
t4=C_set_block_item(lf[142] /* chicken.compiler.core#emit-trace-info */,0,t3);
t5=C_mutate((C_word*)lf[143]+1 /* (set! chicken.compiler.core#disable-stack-overflow-checking ...) */,C_u_i_memq(lf[144],((C_word*)t0)[2]));
t6=(*a=C_CLOSURE_TYPE|27,a[1]=(C_word)f_5622,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],tmp=(C_word)a,a+=28,tmp);
/* batch-driver.scm:513: chicken.platform#feature? */
t7=*((C_word*)lf[366]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[367];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k5620 in k5609 in k5605 in k5601 in k5598 in k5594 in k5590 in k5587 in k5584 in k5581 in k5573 in k5569 in k5546 in k5543 in k5536 in k5530 in k5527 in k5521 in k5518 in k5515 in k5512 in k5509 in ... */
static void C_ccall f_5622(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(28,c,2)))){
C_save_and_reclaim((void *)f_5622,c,av);}
a=C_alloc(28);
t2=C_set_block_item(lf[145] /* chicken.compiler.core#bootstrap-mode */,0,t1);
t3=(*a=C_CLOSURE_TYPE|27,a[1]=(C_word)f_5625,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],tmp=(C_word)a,a+=28,tmp);
if(C_truep(C_i_memq(lf[364],*((C_word*)lf[103]+1)))){
/* batch-driver.scm:514: chicken.gc#set-gc-report! */
t4=*((C_word*)lf[365]+1);{
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
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_5625(2,av2);}}}

/* k5623 in k5620 in k5609 in k5605 in k5601 in k5598 in k5594 in k5590 in k5587 in k5584 in k5581 in k5573 in k5569 in k5546 in k5543 in k5536 in k5530 in k5527 in k5521 in k5518 in k5515 in k5512 in ... */
static void C_ccall f_5625(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(28,c,2)))){
C_save_and_reclaim((void *)f_5625,c,av);}
a=C_alloc(28);
t2=(*a=C_CLOSURE_TYPE|27,a[1]=(C_word)f_5628,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],tmp=(C_word)a,a+=28,tmp);
if(C_truep(C_u_i_memq(lf[363],((C_word*)t0)[2]))){
t3=C_set_block_item(((C_word*)t0)[19],0,C_SCHEME_FALSE);
t4=t2;
f_5628(t4,t3);}
else{
t3=C_mutate((C_word*)lf[9]+1 /* (set! chicken.compiler.core#standard-bindings ...) */,*((C_word*)lf[77]+1));
t4=C_mutate((C_word*)lf[11]+1 /* (set! chicken.compiler.core#extended-bindings ...) */,*((C_word*)lf[78]+1));
t5=t2;
f_5628(t5,t4);}}

/* k5626 in k5623 in k5620 in k5609 in k5605 in k5601 in k5598 in k5594 in k5590 in k5587 in k5584 in k5581 in k5573 in k5569 in k5546 in k5543 in k5536 in k5530 in k5527 in k5521 in k5518 in k5515 in ... */
static void C_fcall f_5628(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(34,0,4)))){
C_save_and_reclaim_args((void *)trf_5628,2,t0,t1);}
a=C_alloc(34);
t2=(*a=C_CLOSURE_TYPE|27,a[1]=(C_word)f_5631,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],tmp=(C_word)a,a+=28,tmp);
if(C_truep(*((C_word*)lf[142]+1))){
t3=C_a_i_list(&a,1,lf[360]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9242,a[2]=t2,tmp=(C_word)a,a+=3,tmp);{
C_word av2[5];
av2[0]=0;
av2[1]=t4;
av2[2]=*((C_word*)lf[184]+1);
av2[3]=lf[361];
av2[4]=t3;
C_apply(5,av2);}}
else{
t3=C_a_i_list(&a,1,lf[362]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9248,a[2]=t2,tmp=(C_word)a,a+=3,tmp);{
C_word av2[5];
av2[0]=0;
av2[1]=t4;
av2[2]=*((C_word*)lf[184]+1);
av2[3]=lf[361];
av2[4]=t3;
C_apply(5,av2);}}}

/* k5629 in k5626 in k5623 in k5620 in k5609 in k5605 in k5601 in k5598 in k5594 in k5590 in k5587 in k5584 in k5581 in k5573 in k5569 in k5546 in k5543 in k5536 in k5530 in k5527 in k5521 in k5518 in ... */
static void C_ccall f_5631(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(32,c,2)))){
C_save_and_reclaim((void *)f_5631,c,av);}
a=C_alloc(32);
t2=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_5634,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
if(C_truep(((C_word*)t0)[27])){
t3=C_i_car(((C_word*)t0)[27]);
t4=C_eqp(lf[351],t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7180,a[2]=((C_word*)t0)[6],a[3]=t4,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t4)){
if(C_truep(C_i_not(((C_word*)t0)[23]))){
/* batch-driver.scm:527: chicken.compiler.support#quit-compiling */
t6=*((C_word*)lf[80]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[359];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t6=t5;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
f_7180(2,av2);}}}
else{
t6=t5;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
f_7180(2,av2);}}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_5634(2,av2);}}}

/* k5632 in k5629 in k5626 in k5623 in k5620 in k5609 in k5605 in k5601 in k5598 in k5594 in k5590 in k5587 in k5584 in k5581 in k5573 in k5569 in k5546 in k5543 in k5536 in k5530 in k5527 in k5521 in ... */
static void C_ccall f_5634(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,2)))){
C_save_and_reclaim((void *)f_5634,c,av);}
a=C_alloc(27);
t2=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_5637,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
/* batch-driver.scm:541: chicken.compiler.support#load-identifier-database */
t3=*((C_word*)lf[349]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[350];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5609 in k5605 in k5601 in k5598 in k5594 in k5590 in k5587 in k5584 in k5581 in k5573 in k5569 in k5546 in k5543 in k5536 in k5530 in k5527 in ... */
static void C_ccall f_5637(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,2)))){
C_save_and_reclaim((void *)f_5637,c,av);}
a=C_alloc(27);
if(C_truep(C_u_i_memq(lf[146],((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5645,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:544: chicken.compiler.support#print-version */
t3=*((C_word*)lf[147]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=C_u_i_memq(lf[148],((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_5656,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
if(C_truep(t2)){
t4=t3;
f_5656(t4,t2);}
else{
t4=C_u_i_memq(lf[346],((C_word*)t0)[2]);
if(C_truep(t4)){
t5=t3;
f_5656(t5,t4);}
else{
t5=C_u_i_memq(lf[347],((C_word*)t0)[2]);
t6=t3;
f_5656(t6,(C_truep(t5)?t5:C_u_i_memq(lf[348],((C_word*)t0)[2])));}}}}

/* k5643 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5609 in k5605 in k5601 in k5598 in k5594 in k5590 in k5587 in k5584 in k5581 in k5573 in k5569 in k5546 in k5543 in k5536 in k5530 in ... */
static void C_ccall f_5645(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5645,c,av);}
/* batch-driver.scm:545: scheme#newline */
t2=*((C_word*)lf[19]+1);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k5654 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5609 in k5605 in k5601 in k5598 in k5594 in k5590 in k5587 in k5584 in k5581 in k5573 in k5569 in k5546 in k5543 in k5536 in k5530 in ... */
static void C_fcall f_5656(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,0,4)))){
C_save_and_reclaim_args((void *)trf_5656,2,t0,t1);}
a=C_alloc(33);
if(C_truep(t1)){
/* batch-driver.scm:547: chicken.compiler.support#print-usage */
t2=*((C_word*)lf[149]+1);{
C_word av2[2];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(C_u_i_memq(lf[150],((C_word*)t0)[3]))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5667,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5674,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:549: chicken.platform#chicken-version */
t4=*((C_word*)lf[152]+1);{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_i_not(((C_word*)t0)[4]))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5683,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:552: chicken.compiler.support#print-version */
t3=*((C_word*)lf[147]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_5695,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[13],a[12]=((C_word*)t0)[14],a[13]=((C_word*)t0)[15],a[14]=((C_word*)t0)[16],a[15]=((C_word*)t0)[17],a[16]=((C_word*)t0)[18],a[17]=((C_word*)t0)[2],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[3],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
t3=C_a_i_list(&a,1,((C_word*)t0)[4]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9224,a[2]=t2,tmp=(C_word)a,a+=3,tmp);{
C_word av2[5];
av2[0]=0;
av2[1]=t4;
av2[2]=*((C_word*)lf[184]+1);
av2[3]=lf[345];
av2[4]=t3;
C_apply(5,av2);}}}}}

/* k5665 in k5654 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5609 in k5605 in k5601 in k5598 in k5594 in k5590 in k5587 in k5584 in k5581 in k5573 in k5569 in k5546 in k5543 in k5536 in ... */
static void C_ccall f_5667(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5667,c,av);}
/* batch-driver.scm:550: scheme#newline */
t2=*((C_word*)lf[19]+1);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k5672 in k5654 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5609 in k5605 in k5601 in k5598 in k5594 in k5590 in k5587 in k5584 in k5581 in k5573 in k5569 in k5546 in k5543 in k5536 in ... */
static void C_ccall f_5674(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5674,c,av);}
/* batch-driver.scm:549: scheme#display */
t2=*((C_word*)lf[151]+1);{
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

/* k5681 in k5654 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5609 in k5605 in k5601 in k5598 in k5594 in k5590 in k5587 in k5584 in k5581 in k5573 in k5569 in k5546 in k5543 in k5536 in ... */
static void C_ccall f_5683(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5683,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5686,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:553: scheme#display */
t3=*((C_word*)lf[151]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[155];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k5684 in k5681 in k5654 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5609 in k5605 in k5601 in k5598 in k5594 in k5590 in k5587 in k5584 in k5581 in k5573 in k5569 in k5546 in k5543 in ... */
static void C_ccall f_5686(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5686,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5689,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:554: scheme#display */
t3=*((C_word*)lf[151]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[154];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k5687 in k5684 in k5681 in k5654 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5609 in k5605 in k5601 in k5598 in k5594 in k5590 in k5587 in k5584 in k5581 in k5573 in k5569 in k5546 in ... */
static void C_ccall f_5689(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5689,c,av);}
/* batch-driver.scm:555: scheme#display */
t2=*((C_word*)lf[151]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[153];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k5693 in k5654 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5609 in k5605 in k5601 in k5598 in k5594 in k5590 in k5587 in k5584 in k5581 in k5573 in k5569 in k5546 in k5543 in k5536 in ... */
static void C_ccall f_5695(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,4)))){
C_save_and_reclaim((void *)f_5695,c,av);}
a=C_alloc(27);
t2=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_5698,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
/* batch-driver.scm:560: chicken.compiler.support#debugging */
t3=*((C_word*)lf[104]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[340];
av2[3]=lf[344];
av2[4]=((C_word*)t0)[20];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k5696 in k5693 in k5654 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5609 in k5605 in k5601 in k5598 in k5594 in k5590 in k5587 in k5584 in k5581 in k5573 in k5569 in k5546 in k5543 in ... */
static void C_ccall f_5698(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,4)))){
C_save_and_reclaim((void *)f_5698,c,av);}
a=C_alloc(27);
t2=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_5701,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
/* batch-driver.scm:561: chicken.compiler.support#debugging */
t3=*((C_word*)lf[104]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[340];
av2[3]=lf[343];
av2[4]=*((C_word*)lf[103]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k5699 in k5696 in k5693 in k5654 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5609 in k5605 in k5601 in k5598 in k5594 in k5590 in k5587 in k5584 in k5581 in k5573 in k5569 in k5546 in ... */
static void C_ccall f_5701(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,4)))){
C_save_and_reclaim((void *)f_5701,c,av);}
a=C_alloc(27);
t2=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_5704,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
/* batch-driver.scm:562: chicken.compiler.support#debugging */
t3=*((C_word*)lf[104]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[340];
av2[3]=lf[342];
av2[4]=*((C_word*)lf[139]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k5702 in k5699 in k5696 in k5693 in k5654 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5609 in k5605 in k5601 in k5598 in k5594 in k5590 in k5587 in k5584 in k5581 in k5573 in k5569 in ... */
static void C_ccall f_5704(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,4)))){
C_save_and_reclaim((void *)f_5704,c,av);}
a=C_alloc(27);
t2=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_5707,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
/* batch-driver.scm:563: chicken.compiler.support#debugging */
t3=*((C_word*)lf[104]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[340];
av2[3]=lf[341];
av2[4]=*((C_word*)lf[140]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k5705 in k5702 in k5699 in k5696 in k5693 in k5654 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5609 in k5605 in k5601 in k5598 in k5594 in k5590 in k5587 in k5584 in k5581 in k5573 in ... */
static void C_ccall f_5707(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,2)))){
C_save_and_reclaim((void *)f_5707,c,av);}
a=C_alloc(27);
t2=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_5711,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
/* batch-driver.scm:254: chicken.time#current-process-milliseconds */
t3=*((C_word*)lf[114]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5709 in k5705 in k5702 in k5699 in k5696 in k5693 in k5654 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5609 in k5605 in k5601 in k5598 in k5594 in k5590 in k5587 in k5584 in k5581 in ... */
static void C_ccall f_5711(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,3)))){
C_save_and_reclaim((void *)f_5711,c,av);}
a=C_alloc(27);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_5715,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[2],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
/* batch-driver.scm:567: scheme#make-vector */
t4=*((C_word*)lf[338]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=*((C_word*)lf[339]+1);
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k5713 in k5709 in k5705 in k5702 in k5699 in k5696 in k5693 in k5654 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5609 in k5605 in k5601 in k5598 in k5594 in k5590 in k5587 in k5584 in ... */
static void C_ccall f_5715(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,2)))){
C_save_and_reclaim((void *)f_5715,c,av);}
a=C_alloc(27);
t2=C_mutate((C_word*)lf[156]+1 /* (set! ##sys#line-number-database ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_5718,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
/* batch-driver.scm:568: collect-options */
t4=((C_word*)((C_word*)t0)[19])[1];
f_5189(t4,t3,lf[337]);}

/* k5716 in k5713 in k5709 in k5705 in k5702 in k5699 in k5696 in k5693 in k5654 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5609 in k5605 in k5601 in k5598 in k5594 in k5590 in k5587 in ... */
static void C_ccall f_5718(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(28,c,2)))){
C_save_and_reclaim((void *)f_5718,c,av);}
a=C_alloc(28);
t2=(*a=C_CLOSURE_TYPE|27,a[1]=(C_word)f_5721,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=t1,tmp=(C_word)a,a+=28,tmp);
/* batch-driver.scm:569: collect-options */
t3=((C_word*)((C_word*)t0)[19])[1];
f_5189(t3,t2,lf[336]);}

/* k5719 in k5716 in k5713 in k5709 in k5705 in k5702 in k5699 in k5696 in k5693 in k5654 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5609 in k5605 in k5601 in k5598 in k5594 in k5590 in ... */
static void C_ccall f_5721(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(34,c,2)))){
C_save_and_reclaim((void *)f_5721,c,av);}
a=C_alloc(34);
t2=(*a=C_CLOSURE_TYPE|28,a[1]=(C_word)f_5724,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=t1,tmp=(C_word)a,a+=29,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7154,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[19],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:571: collect-options */
t4=((C_word*)((C_word*)t0)[19])[1];
f_5189(t4,t3,lf[335]);}

/* k5722 in k5719 in k5716 in k5713 in k5709 in k5705 in k5702 in k5699 in k5696 in k5693 in k5654 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5609 in k5605 in k5601 in k5598 in k5594 in ... */
static void C_ccall f_5724(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(30,c,2)))){
C_save_and_reclaim((void *)f_5724,c,av);}
a=C_alloc(30);
t2=(*a=C_CLOSURE_TYPE|29,a[1]=(C_word)f_5727,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=t1,a[29]=((C_word*)t0)[28],tmp=(C_word)a,a+=30,tmp);
/* batch-driver.scm:575: chicken.compiler.user-pass#user-read-pass */
t3=*((C_word*)lf[333]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5725 in k5722 in k5719 in k5716 in k5713 in k5709 in k5705 in k5702 in k5699 in k5696 in k5693 in k5654 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5609 in k5605 in k5601 in k5598 in ... */
static void C_ccall f_5727(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(38,c,4)))){
C_save_and_reclaim((void *)f_5727,c,av);}
a=C_alloc(38);
t2=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_5730,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6986,a[2]=((C_word*)t0)[26],a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[27],a[6]=((C_word*)t0)[28],a[7]=((C_word*)t0)[29],tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9210,a[2]=t3,tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t4;
av2[2]=*((C_word*)lf[184]+1);
av2[3]=lf[327];
av2[4]=C_SCHEME_END_OF_LIST;
C_apply(5,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6995,a[2]=((C_word*)t0)[26],a[3]=((C_word*)t0)[27],a[4]=((C_word*)t0)[29],a[5]=t4,tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_6995(t6,t2,((C_word*)t0)[28]);}}

/* k5728 in k5725 in k5722 in k5719 in k5716 in k5713 in k5709 in k5705 in k5702 in k5699 in k5696 in k5693 in k5654 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5609 in k5605 in k5601 in ... */
static void C_ccall f_5730(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,2)))){
C_save_and_reclaim((void *)f_5730,c,av);}
a=C_alloc(27);
t2=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_5733,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
/* batch-driver.scm:598: chicken.compiler.user-pass#user-preprocessor-pass */
t3=*((C_word*)lf[326]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5731 in k5728 in k5725 in k5722 in k5719 in k5716 in k5713 in k5709 in k5705 in k5702 in k5699 in k5696 in k5693 in k5654 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5609 in k5605 in ... */
static void C_ccall f_5733(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(35,c,4)))){
C_save_and_reclaim((void *)f_5733,c,av);}
a=C_alloc(35);
t2=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_5736,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6939,a[2]=((C_word*)t0)[26],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9204,a[2]=t3,tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t4;
av2[2]=*((C_word*)lf[184]+1);
av2[3]=lf[325];
av2[4]=C_SCHEME_END_OF_LIST;
C_apply(5,av2);}}
else{
t3=t2;
f_5736(t3,C_SCHEME_UNDEFINED);}}

/* k5734 in k5731 in k5728 in k5725 in k5722 in k5719 in k5716 in k5713 in k5709 in k5705 in k5702 in k5699 in k5696 in k5693 in k5654 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5609 in ... */
static void C_fcall f_5736(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,0,4)))){
C_save_and_reclaim_args((void *)trf_5736,2,t0,t1);}
a=C_alloc(27);
t2=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_5739,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
/* batch-driver.scm:603: print-expr */
t3=((C_word*)((C_word*)t0)[21])[1];
f_5058(t3,t2,lf[323],lf[324],((C_word*)((C_word*)t0)[26])[1]);}

/* k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5719 in k5716 in k5713 in k5709 in k5705 in k5702 in k5699 in k5696 in k5693 in k5654 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in ... */
static void C_ccall f_5739(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,2)))){
C_save_and_reclaim((void *)f_5739,c,av);}
a=C_alloc(27);
t2=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_5742,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
/* batch-driver.scm:604: begin-time */
t3=((C_word*)((C_word*)t0)[6])[1];
f_5224(t3,t2);}

/* k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5719 in k5716 in k5713 in k5709 in k5705 in k5702 in k5699 in k5696 in k5693 in k5654 in k5635 in k5632 in k5629 in k5626 in k5623 in ... */
static void C_ccall f_5742(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(39,c,3)))){
C_save_and_reclaim((void *)f_5742,c,av);}
a=C_alloc(39);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=*((C_word*)lf[157]+1);
t7=((C_word*)((C_word*)t0)[2])[1];
t8=C_i_check_list_2(t7,lf[5]);
t9=(*a=C_CLOSURE_TYPE|25,a[1]=(C_word)f_5751,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],tmp=(C_word)a,a+=26,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6904,a[2]=t4,a[3]=t11,a[4]=t6,a[5]=t5,tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_6904(t13,t9,t7);}

/* k5749 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5719 in k5716 in k5713 in k5709 in k5705 in k5702 in k5699 in k5696 in k5693 in k5654 in k5635 in k5632 in k5629 in k5626 in ... */
static void C_ccall f_5751(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(36,c,3)))){
C_save_and_reclaim((void *)f_5751,c,av);}
a=C_alloc(36);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5755,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|27,a[1]=(C_word)f_5778,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[2],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=t1,a[23]=((C_word*)t0)[22],a[24]=t4,a[25]=t6,a[26]=t5,a[27]=((C_word*)t0)[23],tmp=(C_word)a,a+=28,tmp);
/* batch-driver.scm:610: scheme#append */
t8=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=((C_word*)((C_word*)t0)[24])[1];
av2[3]=((C_word*)((C_word*)t0)[25])[1];
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* g1782 in k5749 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5719 in k5716 in k5713 in k5709 in k5705 in k5702 in k5699 in k5696 in k5693 in k5654 in k5635 in k5632 in k5629 in ... */
static void C_fcall f_5755(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,0,4)))){
C_save_and_reclaim_args((void *)trf_5755,3,t0,t1,t2);}
a=C_alloc(15);
t3=((C_word*)t0)[2];
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5761,a[2]=t6,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5766,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5772,a[2]=t4,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:608: ##sys#dynamic-wind */
t10=*((C_word*)lf[159]+1);{
C_word av2[5];
av2[0]=t10;
av2[1]=t1;
av2[2]=t7;
av2[3]=t8;
av2[4]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}

/* a5760 in g1782 in k5749 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5719 in k5716 in k5713 in k5709 in k5705 in k5702 in k5699 in k5696 in k5693 in k5654 in k5635 in k5632 in ... */
static void C_ccall f_5761(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5761,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[158]+1));
t3=C_mutate((C_word*)lf[158]+1 /* (set! ##sys#current-source-filename ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a5765 in g1782 in k5749 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5719 in k5716 in k5713 in k5709 in k5705 in k5702 in k5699 in k5696 in k5693 in k5654 in k5635 in k5632 in ... */
static void C_ccall f_5766(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5766,c,av);}
/* batch-driver.scm:609: chicken.compiler.core#canonicalize-expression */
t2=*((C_word*)lf[157]+1);{
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

/* a5771 in g1782 in k5749 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5719 in k5716 in k5713 in k5709 in k5705 in k5702 in k5699 in k5696 in k5693 in k5654 in k5635 in k5632 in ... */
static void C_ccall f_5772(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5772,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[158]+1));
t3=C_mutate((C_word*)lf[158]+1 /* (set! ##sys#current-source-filename ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5776 in k5749 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5719 in k5716 in k5713 in k5709 in k5705 in k5702 in k5699 in k5696 in k5693 in k5654 in k5635 in k5632 in k5629 in ... */
static void C_ccall f_5778(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(31,c,2)))){
C_save_and_reclaim((void *)f_5778,c,av);}
a=C_alloc(31);
t2=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_5781,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
if(C_truep(C_i_not(((C_word*)t0)[27]))){
t3=t2;
f_5781(t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6898,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:614: scheme#string->symbol */
t4=*((C_word*)lf[322]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[27];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k5779 in k5776 in k5749 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5719 in k5716 in k5713 in k5709 in k5705 in k5702 in k5699 in k5696 in k5693 in k5654 in k5635 in k5632 in ... */
static void C_fcall f_5781(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(32,0,3)))){
C_save_and_reclaim_args((void *)trf_5781,2,t0,t1);}
a=C_alloc(32);
t2=C_i_check_list_2(t1,lf[5]);
t3=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_5787,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6848,a[2]=((C_word*)t0)[24],a[3]=t5,a[4]=((C_word*)t0)[25],a[5]=((C_word*)t0)[26],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_6848(t7,t3,t1);}

/* k5785 in k5779 in k5776 in k5749 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5719 in k5716 in k5713 in k5709 in k5705 in k5702 in k5699 in k5696 in k5693 in k5654 in k5635 in ... */
static void C_ccall f_5787(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(32,c,2)))){
C_save_and_reclaim((void *)f_5787,c,av);}
a=C_alloc(32);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_5802,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=t1,a[24]=((C_word*)t0)[23],a[25]=t4,a[26]=t5,tmp=(C_word)a,a+=27,tmp);
/* batch-driver.scm:618: ##sys#fast-reverse */
t7=*((C_word*)lf[319]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=*((C_word*)lf[320]+1);
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k5800 in k5785 in k5779 in k5776 in k5749 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5719 in k5716 in k5713 in k5709 in k5705 in k5702 in k5699 in k5696 in k5693 in k5654 in ... */
static void C_ccall f_5802(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(32,c,3)))){
C_save_and_reclaim((void *)f_5802,c,av);}
a=C_alloc(32);
t2=C_i_check_list_2(t1,lf[5]);
t3=(*a=C_CLOSURE_TYPE|24,a[1]=(C_word)f_5808,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],tmp=(C_word)a,a+=25,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6814,a[2]=((C_word*)t0)[25],a[3]=t5,a[4]=((C_word*)t0)[26],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_6814(t7,t3,t1);}

/* k5806 in k5800 in k5785 in k5779 in k5776 in k5749 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5719 in k5716 in k5713 in k5709 in k5705 in k5702 in k5699 in k5696 in k5693 in ... */
static void C_ccall f_5808(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(41,c,3)))){
C_save_and_reclaim((void *)f_5808,c,av);}
a=C_alloc(41);
t2=(*a=C_CLOSURE_TYPE|20,a[1]=(C_word)f_5811,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],tmp=(C_word)a,a+=21,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=*((C_word*)lf[309]+1);
t8=C_i_check_list_2(*((C_word*)lf[309]+1),lf[5]);
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6746,a[2]=((C_word*)t0)[21],a[3]=t2,a[4]=((C_word*)t0)[22],a[5]=t1,a[6]=((C_word*)t0)[23],a[7]=((C_word*)t0)[24],tmp=(C_word)a,a+=8,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6780,a[2]=t5,a[3]=t11,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t13=((C_word*)t11)[1];
f_6780(t13,t9,*((C_word*)lf[309]+1));}

/* k5809 in k5806 in k5800 in k5785 in k5779 in k5776 in k5749 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5719 in k5716 in k5713 in k5709 in k5705 in k5702 in k5699 in k5696 in ... */
static void C_ccall f_5811(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(42,c,3)))){
C_save_and_reclaim((void *)f_5811,c,av);}
a=C_alloc(42);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_5814,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=t3,a[21]=((C_word*)t0)[20],tmp=(C_word)a,a+=22,tmp);
if(C_truep(C_i_nullp(*((C_word*)lf[125]+1)))){
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_5814(2,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6668,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=*((C_word*)lf[125]+1);
t11=C_i_check_list_2(*((C_word*)lf[125]+1),lf[5]);
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6687,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6689,a[2]=t8,a[3]=t14,a[4]=t9,tmp=(C_word)a,a+=5,tmp));
t16=((C_word*)t14)[1];
f_6689(t16,t12,*((C_word*)lf[125]+1));}}

/* k5812 in k5809 in k5806 in k5800 in k5785 in k5779 in k5776 in k5749 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5719 in k5716 in k5713 in k5709 in k5705 in k5702 in k5699 in ... */
static void C_ccall f_5814(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,3)))){
C_save_and_reclaim((void *)f_5814,c,av);}
a=C_alloc(24);
t2=(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_5817,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],tmp=(C_word)a,a+=22,tmp);
if(C_truep(C_i_pairp(*((C_word*)lf[298]+1)))){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6599,tmp=(C_word)a,a+=2,tmp);
/* batch-driver.scm:642: chicken.compiler.support#with-debugging-output */
t4=*((C_word*)lf[303]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[304];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_5817(2,av2);}}}

/* k5815 in k5812 in k5809 in k5806 in k5800 in k5785 in k5779 in k5776 in k5749 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5719 in k5716 in k5713 in k5709 in k5705 in k5702 in ... */
static void C_ccall f_5817(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(25,c,3)))){
C_save_and_reclaim((void *)f_5817,c,av);}
a=C_alloc(25);
t2=(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_5820,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],tmp=(C_word)a,a+=22,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6588,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:649: chicken.compiler.support#debugging */
t4=*((C_word*)lf[104]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[296];
av2[3]=lf[297];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k5818 in k5815 in k5812 in k5809 in k5806 in k5800 in k5785 in k5779 in k5776 in k5749 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5719 in k5716 in k5713 in k5709 in k5705 in ... */
static void C_ccall f_5820(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(25,c,3)))){
C_save_and_reclaim((void *)f_5820,c,av);}
a=C_alloc(25);
t2=(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_5823,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],tmp=(C_word)a,a+=22,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6582,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:651: chicken.compiler.support#debugging */
t4=*((C_word*)lf[104]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[293];
av2[3]=lf[294];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k5821 in k5818 in k5815 in k5812 in k5809 in k5806 in k5800 in k5785 in k5779 in k5776 in k5749 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5719 in k5716 in k5713 in k5709 in ... */
static void C_ccall f_5823(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(22,c,2)))){
C_save_and_reclaim((void *)f_5823,c,av);}
a=C_alloc(22);
t2=C_mutate((C_word*)lf[156]+1 /* (set! ##sys#line-number-database ...) */,*((C_word*)lf[160]+1));
t3=C_set_block_item(lf[160] /* chicken.compiler.core#line-number-database-2 */,0,C_SCHEME_FALSE);
t4=(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_5828,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],tmp=(C_word)a,a+=22,tmp);
/* batch-driver.scm:657: end-time */
t5=((C_word*)((C_word*)t0)[3])[1];
f_5234(t5,t4,lf[291]);}

/* k5826 in k5821 in k5818 in k5815 in k5812 in k5809 in k5806 in k5800 in k5785 in k5779 in k5776 in k5749 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5719 in k5716 in k5713 in ... */
static void C_ccall f_5828(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,4)))){
C_save_and_reclaim((void *)f_5828,c,av);}
a=C_alloc(21);
t2=(*a=C_CLOSURE_TYPE|20,a[1]=(C_word)f_5831,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],tmp=(C_word)a,a+=21,tmp);
/* batch-driver.scm:658: print-expr */
t3=((C_word*)((C_word*)t0)[21])[1];
f_5058(t3,t2,lf[289],lf[290],((C_word*)((C_word*)t0)[20])[1]);}

/* k5829 in k5826 in k5821 in k5818 in k5815 in k5812 in k5809 in k5806 in k5800 in k5785 in k5779 in k5776 in k5749 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5719 in k5716 in ... */
static void C_ccall f_5831(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,2)))){
C_save_and_reclaim((void *)f_5831,c,av);}
a=C_alloc(21);
t2=(*a=C_CLOSURE_TYPE|20,a[1]=(C_word)f_5834,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],tmp=(C_word)a,a+=21,tmp);
if(C_truep(C_u_i_memq(lf[288],((C_word*)t0)[19]))){
/* batch-driver.scm:660: chicken.base#exit */
t3=*((C_word*)lf[200]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_5834(2,av2);}}}

/* k5832 in k5829 in k5826 in k5821 in k5818 in k5815 in k5812 in k5809 in k5806 in k5800 in k5785 in k5779 in k5776 in k5749 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5719 in ... */
static void C_ccall f_5834(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,2)))){
C_save_and_reclaim((void *)f_5834,c,av);}
a=C_alloc(21);
t2=(*a=C_CLOSURE_TYPE|20,a[1]=(C_word)f_5837,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],tmp=(C_word)a,a+=21,tmp);
/* batch-driver.scm:663: chicken.compiler.user-pass#user-pass */
t3=*((C_word*)lf[287]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5835 in k5832 in k5829 in k5826 in k5821 in k5818 in k5815 in k5812 in k5809 in k5806 in k5800 in k5785 in k5779 in k5776 in k5749 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in ... */
static void C_ccall f_5837(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(31,c,4)))){
C_save_and_reclaim((void *)f_5837,c,av);}
a=C_alloc(31);
t2=(*a=C_CLOSURE_TYPE|20,a[1]=(C_word)f_5840,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],tmp=(C_word)a,a+=21,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6524,a[2]=((C_word*)t0)[20],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9184,a[2]=t3,tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t4;
av2[2]=*((C_word*)lf[184]+1);
av2[3]=lf[286];
av2[4]=C_SCHEME_END_OF_LIST;
C_apply(5,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_5840(2,av2);}}}

/* k5838 in k5835 in k5832 in k5829 in k5826 in k5821 in k5818 in k5815 in k5812 in k5809 in k5806 in k5800 in k5785 in k5779 in k5776 in k5749 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in ... */
static void C_ccall f_5840(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(26,c,2)))){
C_save_and_reclaim((void *)f_5840,c,av);}
a=C_alloc(26);
t2=(*a=C_CLOSURE_TYPE|19,a[1]=(C_word)f_5843,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],tmp=(C_word)a,a+=20,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6517,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6521,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:673: chicken.compiler.support#canonicalize-begin-body */
t5=*((C_word*)lf[284]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)((C_word*)t0)[20])[1];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5821 in k5818 in k5815 in k5812 in k5809 in k5806 in k5800 in k5785 in k5779 in k5776 in k5749 in k5740 in k5737 in k5734 in k5731 in k5728 in ... */
static void C_ccall f_5843(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,4)))){
C_save_and_reclaim((void *)f_5843,c,av);}
a=C_alloc(24);
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_5846,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=t1,a[18]=((C_word*)t0)[17],a[19]=t3,a[20]=((C_word*)t0)[18],a[21]=((C_word*)t0)[19],tmp=(C_word)a,a+=22,tmp);
/* batch-driver.scm:675: print-node */
t5=((C_word*)((C_word*)t0)[6])[1];
f_5009(t5,t4,lf[280],lf[281],t1);}

/* k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5821 in k5818 in k5815 in k5812 in k5809 in k5806 in k5800 in k5785 in k5779 in k5776 in k5749 in k5740 in k5737 in k5734 in k5731 in ... */
static void C_ccall f_5846(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(22,c,2)))){
C_save_and_reclaim((void *)f_5846,c,av);}
a=C_alloc(22);
t2=(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_5849,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],tmp=(C_word)a,a+=22,tmp);
/* batch-driver.scm:676: initialize-analysis-database */
t3=lf[8];
f_4109(t3,t2);}

/* k5847 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5821 in k5818 in k5815 in k5812 in k5809 in k5806 in k5800 in k5785 in k5779 in k5776 in k5749 in k5740 in k5737 in k5734 in ... */
static void C_ccall f_5849(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(28,c,3)))){
C_save_and_reclaim((void *)f_5849,c,av);}
a=C_alloc(28);
t2=*((C_word*)lf[161]+1);
t3=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_5852,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=t2,a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],tmp=(C_word)a,a+=23,tmp);
if(C_truep(*((C_word*)lf[276]+1))){
t4=*((C_word*)lf[161]+1);
t5=C_i_check_list_2(*((C_word*)lf[161]+1),lf[10]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6492,a[2]=t7,tmp=(C_word)a,a+=3,tmp));
t9=((C_word*)t7)[1];
f_6492(t9,t3,*((C_word*)lf[161]+1));}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_5852(2,av2);}}}

/* k5850 in k5847 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5821 in k5818 in k5815 in k5812 in k5809 in k5806 in k5800 in k5785 in k5779 in k5776 in k5749 in k5740 in k5737 in ... */
static void C_ccall f_5852(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(23,c,2)))){
C_save_and_reclaim((void *)f_5852,c,av);}
a=C_alloc(23);
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_5855,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],tmp=(C_word)a,a+=23,tmp);
/* batch-driver.scm:688: collect-options */
t3=((C_word*)((C_word*)t0)[21])[1];
f_5189(t3,t2,lf[275]);}

/* k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5821 in k5818 in k5815 in k5812 in k5809 in k5806 in k5800 in k5785 in k5779 in k5776 in k5749 in k5740 in ... */
static void C_ccall f_5855(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(28,c,3)))){
C_save_and_reclaim((void *)f_5855,c,av);}
a=C_alloc(28);
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_5858,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],tmp=(C_word)a,a+=23,tmp);
if(C_truep(C_i_nullp(t1))){
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_5858(2,av2);}}
else{
t3=C_set_block_item(lf[168] /* chicken.compiler.core#inline-locally */,0,C_SCHEME_TRUE);
t4=C_i_check_list_2(t1,lf[10]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6445,a[2]=t6,tmp=(C_word)a,a+=3,tmp));
t8=((C_word*)t6)[1];
f_6445(t8,t2,t1);}}

/* k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5821 in k5818 in k5815 in k5812 in k5809 in k5806 in k5800 in k5785 in k5779 in k5776 in k5749 in ... */
static void C_ccall f_5858(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(34,c,3)))){
C_save_and_reclaim((void *)f_5858,c,av);}
a=C_alloc(34);
t2=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_5861,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],tmp=(C_word)a,a+=18,tmp);
t3=((C_word*)((C_word*)t0)[18])[1];
t4=(C_truep(t3)?t3:*((C_word*)lf[122]+1));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6296,a[2]=((C_word*)t0)[19],a[3]=((C_word*)t0)[20],a[4]=t2,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[17],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[18],a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[13],a[11]=((C_word*)t0)[5],a[12]=((C_word*)t0)[21],tmp=(C_word)a,a+=13,tmp);
if(C_truep(C_u_i_memq(lf[270],((C_word*)t0)[22]))){
t6=t5;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
f_6296(2,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6422,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:700: chicken.compiler.scrutinizer#load-type-database */
t7=*((C_word*)lf[264]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[272];
av2[3]=*((C_word*)lf[122]+1);
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}
else{
t5=t2;
f_5861(t5,C_SCHEME_UNDEFINED);}}

/* k5859 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5821 in k5818 in k5815 in k5812 in k5809 in k5806 in k5800 in k5785 in k5779 in k5776 in ... */
static void C_fcall f_5861(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,0,2)))){
C_save_and_reclaim_args((void *)trf_5861,2,t0,t1);}
a=C_alloc(21);
t2=C_set_block_item(lf[156] /* ##sys#line-number-database */,0,C_SCHEME_FALSE);
t3=C_set_block_item(lf[162] /* chicken.compiler.core#constant-table */,0,C_SCHEME_FALSE);
t4=C_set_block_item(lf[163] /* chicken.compiler.core#inline-table */,0,C_SCHEME_FALSE);
t5=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_5867,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],tmp=(C_word)a,a+=18,tmp);
if(C_truep(*((C_word*)lf[251]+1))){
t6=t5;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
f_5867(2,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6290,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:736: chicken.compiler.support#node-subexpressions */
t7=*((C_word*)lf[253]+1);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[17];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}}

/* k5865 in k5859 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5821 in k5818 in k5815 in k5812 in k5809 in k5806 in k5800 in k5785 in k5779 in ... */
static void C_ccall f_5867(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_5867,c,av);}
a=C_alloc(18);
t2=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_5870,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],tmp=(C_word)a,a+=18,tmp);
/* batch-driver.scm:738: begin-time */
t3=((C_word*)((C_word*)t0)[4])[1];
f_5224(t3,t2);}

/* k5868 in k5865 in k5859 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5821 in k5818 in k5815 in k5812 in k5809 in k5806 in k5800 in k5785 in ... */
static void C_ccall f_5870(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(17,c,2)))){
C_save_and_reclaim((void *)f_5870,c,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_5873,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
/* batch-driver.scm:740: chicken.compiler.core#perform-cps-conversion */
t3=*((C_word*)lf[250]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[17];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k5871 in k5868 in k5865 in k5859 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5821 in k5818 in k5815 in k5812 in k5809 in k5806 in k5800 in ... */
static void C_ccall f_5873(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_5873,c,av);}
a=C_alloc(18);
t2=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_5876,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=t1,tmp=(C_word)a,a+=18,tmp);
/* batch-driver.scm:741: end-time */
t3=((C_word*)((C_word*)t0)[3])[1];
f_5234(t3,t2,lf[249]);}

/* k5874 in k5871 in k5868 in k5865 in k5859 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5821 in k5818 in k5815 in k5812 in k5809 in k5806 in ... */
static void C_ccall f_5876(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,4)))){
C_save_and_reclaim((void *)f_5876,c,av);}
a=C_alloc(18);
t2=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_5879,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],tmp=(C_word)a,a+=18,tmp);
/* batch-driver.scm:742: print-node */
t3=((C_word*)((C_word*)t0)[6])[1];
f_5009(t3,t2,lf[247],lf[248],((C_word*)t0)[17]);}

/* k5877 in k5874 in k5871 in k5868 in k5865 in k5859 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5821 in k5818 in k5815 in k5812 in k5809 in ... */
static void C_ccall f_5879(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,7)))){
C_save_and_reclaim((void *)f_5879,c,av);}
a=C_alloc(19);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_5884,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],tmp=(C_word)a,a+=17,tmp));
t5=((C_word*)t3)[1];
f_5884(t5,((C_word*)t0)[16],C_fix(1),((C_word*)t0)[17],C_SCHEME_TRUE,C_SCHEME_FALSE,C_SCHEME_FALSE);}

/* loop in k5877 in k5874 in k5871 in k5868 in k5865 in k5859 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5821 in k5818 in k5815 in k5812 in ... */
static void C_fcall f_5884(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(25,0,2)))){
C_save_and_reclaim_args((void *)trf_5884,7,t0,t1,t2,t3,t4,t5,t6);}
a=C_alloc(25);
t7=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_5888,a[2]=t4,a[3]=t5,a[4]=t7,a[5]=t2,a[6]=((C_word*)t0)[2],a[7]=t6,a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[5],a[11]=((C_word*)t0)[6],a[12]=((C_word*)t0)[7],a[13]=t1,a[14]=((C_word*)t0)[8],a[15]=((C_word*)t0)[9],a[16]=((C_word*)t0)[10],a[17]=((C_word*)t0)[11],a[18]=((C_word*)t0)[12],a[19]=((C_word*)t0)[13],a[20]=((C_word*)t0)[14],a[21]=((C_word*)t0)[15],a[22]=((C_word*)t0)[16],tmp=(C_word)a,a+=23,tmp);
/* batch-driver.scm:750: begin-time */
t9=((C_word*)((C_word*)t0)[5])[1];
f_5224(t9,t8);}

/* k5886 in loop in k5877 in k5874 in k5871 in k5868 in k5865 in k5859 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5821 in k5818 in k5815 in ... */
static void C_ccall f_5888(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,4)))){
C_save_and_reclaim((void *)f_5888,c,av);}
a=C_alloc(29);
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_5891,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],tmp=(C_word)a,a+=23,tmp);
/* batch-driver.scm:752: analyze */
t3=((C_word*)((C_word*)t0)[11])[1];
f_5274(t3,t2,lf[246],((C_word*)((C_word*)t0)[4])[1],C_a_i_list(&a,2,((C_word*)t0)[5],((C_word*)t0)[2]));}

/* k5889 in k5886 in loop in k5877 in k5874 in k5871 in k5868 in k5865 in k5859 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5821 in k5818 in ... */
static void C_ccall f_5891(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,2)))){
C_save_and_reclaim((void *)f_5891,c,av);}
a=C_alloc(29);
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_5894,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],a[23]=((C_word*)t0)[22],tmp=(C_word)a,a+=24,tmp);
if(C_truep(*((C_word*)lf[164]+1))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6228,a[2]=t2,a[3]=((C_word*)t0)[15],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_memq(lf[244],*((C_word*)lf[103]+1)))){
/* batch-driver.scm:755: chicken.compiler.support#dump-undefined-globals */
t4=*((C_word*)lf[245]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_6228(2,av2);}}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_5894(2,av2);}}}

/* k5892 in k5889 in k5886 in loop in k5877 in k5874 in k5871 in k5868 in k5865 in k5859 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5821 in ... */
static void C_ccall f_5894(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,2)))){
C_save_and_reclaim((void *)f_5894,c,av);}
a=C_alloc(24);
t2=C_set_block_item(lf[164] /* chicken.compiler.core#first-analysis */,0,C_SCHEME_FALSE);
t3=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_5898,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
/* batch-driver.scm:768: end-time */
t4=((C_word*)((C_word*)t0)[10])[1];
f_5234(t4,t3,lf[234]);}

/* k5896 in k5892 in k5889 in k5886 in loop in k5877 in k5874 in k5871 in k5868 in k5865 in k5859 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in ... */
static void C_ccall f_5898(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,5)))){
C_save_and_reclaim((void *)f_5898,c,av);}
a=C_alloc(24);
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_5901,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
/* batch-driver.scm:769: print-db */
t3=((C_word*)((C_word*)t0)[21])[1];
f_5031(t3,t2,lf[232],lf[233],((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k5899 in k5896 in k5892 in k5889 in k5886 in loop in k5877 in k5874 in k5871 in k5868 in k5865 in k5859 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in ... */
static void C_ccall f_5901(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,9)))){
C_save_and_reclaim((void *)f_5901,c,av);}
a=C_alloc(29);
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_5904,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
if(C_truep(C_i_memq(lf[222],*((C_word*)lf[103]+1)))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4016,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4022,tmp=(C_word)a,a+=2,tmp);
/* batch-driver.scm:69: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t2;
av2[2]=t3;
av2[3]=t4;
C_call_with_values(4,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_5904(2,av2);}}}

/* k5902 in k5899 in k5896 in k5892 in k5889 in k5886 in loop in k5877 in k5874 in k5871 in k5868 in k5865 in k5859 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5835 in k5832 in ... */
static void C_ccall f_5904(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,4)))){
C_save_and_reclaim((void *)f_5904,c,av);}
a=C_alloc(24);
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5910,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],tmp=(C_word)a,a+=14,tmp);
/* batch-driver.scm:776: chicken.compiler.support#debugging */
t3=*((C_word*)lf[104]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[105];
av2[3]=lf[182];
av2[4]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_6011,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[15],a[6]=((C_word*)t0)[16],a[7]=((C_word*)t0)[17],a[8]=((C_word*)t0)[18],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[14],a[11]=((C_word*)t0)[19],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[20],a[14]=((C_word*)t0)[21],a[15]=((C_word*)t0)[6],a[16]=((C_word*)t0)[22],tmp=(C_word)a,a+=17,tmp);
if(C_truep(((C_word*)t0)[23])){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6191,a[2]=((C_word*)t0)[10],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* batch-driver.scm:816: begin-time */
t4=((C_word*)((C_word*)t0)[11])[1];
f_5224(t4,t3);}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_6011(2,av2);}}}}

/* k5908 in k5902 in k5899 in k5896 in k5892 in k5889 in k5886 in loop in k5877 in k5874 in k5871 in k5868 in k5865 in k5859 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5835 in ... */
static void C_ccall f_5910(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_5910,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5913,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
/* batch-driver.scm:777: begin-time */
t3=((C_word*)((C_word*)t0)[10])[1];
f_5224(t3,t2);}

/* k5911 in k5908 in k5902 in k5899 in k5896 in k5892 in k5889 in k5886 in loop in k5877 in k5874 in k5871 in k5868 in k5865 in k5859 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in ... */
static void C_ccall f_5913(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,4)))){
C_save_and_reclaim((void *)f_5913,c,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5918,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5930,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],tmp=(C_word)a,a+=11,tmp);
/* batch-driver.scm:778: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[13];
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}

/* a5917 in k5911 in k5908 in k5902 in k5899 in k5896 in k5892 in k5889 in k5886 in loop in k5877 in k5874 in k5871 in k5868 in k5865 in k5859 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in ... */
static void C_ccall f_5918(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_5918,c,av);}
if(C_truep(((C_word*)t0)[2])){
/* batch-driver.scm:780: chicken.compiler.optimizer#determine-loop-and-dispatch */
t2=*((C_word*)lf[165]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
/* batch-driver.scm:781: chicken.compiler.optimizer#perform-high-level-optimizations */
t2=*((C_word*)lf[166]+1);{
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=((C_word*)t0)[4];
av2[4]=*((C_word*)lf[167]+1);
av2[5]=*((C_word*)lf[168]+1);
av2[6]=*((C_word*)lf[169]+1);
av2[7]=*((C_word*)lf[170]+1);
av2[8]=*((C_word*)lf[171]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(9,av2);}}}

/* a5929 in k5911 in k5908 in k5902 in k5899 in k5896 in k5892 in k5889 in k5886 in loop in k5877 in k5874 in k5871 in k5868 in k5865 in k5859 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in ... */
static void C_ccall f_5930(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_5930,c,av);}
a=C_alloc(14);
t4=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5934,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=t2,a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[8],a[12]=((C_word*)t0)[9],a[13]=((C_word*)t0)[10],tmp=(C_word)a,a+=14,tmp);
/* batch-driver.scm:786: end-time */
t5=((C_word*)((C_word*)t0)[7])[1];
f_5234(t5,t4,lf[181]);}

/* k5932 in a5929 in k5911 in k5908 in k5902 in k5899 in k5896 in k5892 in k5889 in k5886 in loop in k5877 in k5874 in k5871 in k5868 in k5865 in k5859 in k5856 in k5853 in k5850 in k5847 in k5844 in ... */
static void C_ccall f_5934(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_5934,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5937,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
/* batch-driver.scm:787: print-node */
t3=((C_word*)((C_word*)t0)[13])[1];
f_5009(t3,t2,lf[179],lf[180],((C_word*)t0)[6]);}

/* k5935 in k5932 in a5929 in k5911 in k5908 in k5902 in k5899 in k5896 in k5892 in k5889 in k5886 in loop in k5877 in k5874 in k5871 in k5868 in k5865 in k5859 in k5856 in k5853 in k5850 in k5847 in ... */
static void C_ccall f_5937(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,6)))){
C_save_and_reclaim((void *)f_5937,c,av);}
a=C_alloc(29);
if(C_truep(((C_word*)t0)[2])){
t2=C_s_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1));
/* batch-driver.scm:789: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_5884(t3,((C_word*)t0)[5],t2,((C_word*)t0)[6],C_SCHEME_TRUE,C_SCHEME_FALSE,((C_word*)t0)[7]);}
else{
t2=C_i_not(((C_word*)t0)[8]);
t3=(C_truep(t2)?((C_word*)t0)[9]:C_SCHEME_FALSE);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5954,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:791: chicken.compiler.support#debugging */
t5=*((C_word*)lf[104]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[105];
av2[3]=lf[172];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
if(C_truep(C_i_not(*((C_word*)lf[171]+1)))){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5968,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
/* batch-driver.scm:794: chicken.compiler.support#debugging */
t5=*((C_word*)lf[104]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[105];
av2[3]=lf[173];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
if(C_truep(*((C_word*)lf[174]+1))){
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5980,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[12],tmp=(C_word)a,a+=10,tmp);
/* batch-driver.scm:798: begin-time */
t5=((C_word*)((C_word*)t0)[11])[1];
f_5224(t5,t4);}
else{
t4=C_s_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1));
/* batch-driver.scm:811: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_5884(t5,((C_word*)t0)[5],t4,((C_word*)t0)[6],C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[8]);}}}}}

/* k5952 in k5935 in k5932 in a5929 in k5911 in k5908 in k5902 in k5899 in k5896 in k5892 in k5889 in k5886 in loop in k5877 in k5874 in k5871 in k5868 in k5865 in k5859 in k5856 in k5853 in k5850 in ... */
static void C_ccall f_5954(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,6)))){
C_save_and_reclaim((void *)f_5954,c,av);}
a=C_alloc(29);
t2=C_s_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
/* batch-driver.scm:792: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_5884(t3,((C_word*)t0)[4],t2,((C_word*)t0)[5],C_SCHEME_TRUE,C_SCHEME_TRUE,C_SCHEME_TRUE);}

/* k5966 in k5935 in k5932 in a5929 in k5911 in k5908 in k5902 in k5899 in k5896 in k5892 in k5889 in k5886 in loop in k5877 in k5874 in k5871 in k5868 in k5865 in k5859 in k5856 in k5853 in k5850 in ... */
static void C_ccall f_5968(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,6)))){
C_save_and_reclaim((void *)f_5968,c,av);}
a=C_alloc(29);
t2=C_set_block_item(lf[171] /* chicken.compiler.core#inline-substitutions-enabled */,0,C_SCHEME_TRUE);
t3=C_s_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
/* batch-driver.scm:796: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_5884(t4,((C_word*)t0)[4],t3,((C_word*)t0)[5],C_SCHEME_TRUE,C_SCHEME_FALSE,((C_word*)t0)[6]);}

/* k5978 in k5935 in k5932 in a5929 in k5911 in k5908 in k5902 in k5899 in k5896 in k5892 in k5889 in k5886 in loop in k5877 in k5874 in k5871 in k5868 in k5865 in k5859 in k5856 in k5853 in k5850 in ... */
static void C_ccall f_5980(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_5980,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5983,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* batch-driver.scm:799: analyze */
t3=((C_word*)((C_word*)t0)[9])[1];
f_5274(t3,t2,lf[178],((C_word*)t0)[5],C_SCHEME_END_OF_LIST);}

/* k5981 in k5978 in k5935 in k5932 in a5929 in k5911 in k5908 in k5902 in k5899 in k5896 in k5892 in k5889 in k5886 in loop in k5877 in k5874 in k5871 in k5868 in k5865 in k5859 in k5856 in k5853 in ... */
static void C_ccall f_5983(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_5983,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5986,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* batch-driver.scm:800: end-time */
t3=((C_word*)((C_word*)t0)[7])[1];
f_5234(t3,t2,lf[177]);}

/* k5984 in k5981 in k5978 in k5935 in k5932 in a5929 in k5911 in k5908 in k5902 in k5899 in k5896 in k5892 in k5889 in k5886 in loop in k5877 in k5874 in k5871 in k5868 in k5865 in k5859 in k5856 in ... */
static void C_ccall f_5986(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_5986,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5989,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* batch-driver.scm:801: begin-time */
t3=((C_word*)((C_word*)t0)[9])[1];
f_5224(t3,t2);}

/* k5987 in k5984 in k5981 in k5978 in k5935 in k5932 in a5929 in k5911 in k5908 in k5902 in k5899 in k5896 in k5892 in k5889 in k5886 in loop in k5877 in k5874 in k5871 in k5868 in k5865 in k5859 in ... */
static void C_ccall f_5989(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_5989,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5992,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* batch-driver.scm:803: chicken.compiler.optimizer#transform-direct-lambdas! */
t3=*((C_word*)lf[176]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k5990 in k5987 in k5984 in k5981 in k5978 in k5935 in k5932 in a5929 in k5911 in k5908 in k5902 in k5899 in k5896 in k5892 in k5889 in k5886 in loop in k5877 in k5874 in k5871 in k5868 in k5865 in ... */
static void C_ccall f_5992(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_5992,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5995,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* batch-driver.scm:804: end-time */
t3=((C_word*)((C_word*)t0)[7])[1];
f_5234(t3,t2,lf[175]);}

/* k5993 in k5990 in k5987 in k5984 in k5981 in k5978 in k5935 in k5932 in a5929 in k5911 in k5908 in k5902 in k5899 in k5896 in k5892 in k5889 in k5886 in loop in k5877 in k5874 in k5871 in k5868 in ... */
static void C_ccall f_5995(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,6)))){
C_save_and_reclaim((void *)f_5995,c,av);}
a=C_alloc(29);
t2=C_s_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
/* batch-driver.scm:805: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_5884(t3,((C_word*)t0)[4],t2,((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_FALSE,((C_word*)t0)[7]);}

/* k6009 in k5902 in k5899 in k5896 in k5892 in k5889 in k5886 in loop in k5877 in k5874 in k5871 in k5868 in k5865 in k5859 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5835 in ... */
static void C_ccall f_6011(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(17,c,4)))){
C_save_and_reclaim((void *)f_6011,c,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_6014,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
/* batch-driver.scm:825: print-node */
t3=((C_word*)((C_word*)t0)[12])[1];
f_5009(t3,t2,lf[214],lf[215],((C_word*)((C_word*)t0)[2])[1]);}

/* k6012 in k6009 in k5902 in k5899 in k5896 in k5892 in k5889 in k5886 in loop in k5877 in k5874 in k5871 in k5868 in k5865 in k5859 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in ... */
static void C_ccall f_6014(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(28,c,4)))){
C_save_and_reclaim((void *)f_6014,c,av);}
a=C_alloc(28);
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_6017,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],tmp=(C_word)a,a+=16,tmp);
t3=(C_truep(((C_word*)((C_word*)t0)[16])[1])?*((C_word*)lf[209]+1):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=((C_word*)((C_word*)t0)[16])[1];
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6141,a[2]=t2,a[3]=((C_word*)t0)[6],a[4]=t4,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t6=C_a_i_list(&a,1,t4);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9148,a[2]=t5,tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t7;
av2[2]=*((C_word*)lf[184]+1);
av2[3]=lf[213];
av2[4]=t6;
C_apply(5,av2);}}
else{
t4=t2;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_6017(2,av2);}}}

/* k6015 in k6012 in k6009 in k5902 in k5899 in k5896 in k5892 in k5889 in k5886 in loop in k5877 in k5874 in k5871 in k5868 in k5865 in k5859 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in ... */
static void C_ccall f_6017(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_6017,c,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_6020,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],tmp=(C_word)a,a+=16,tmp);
/* batch-driver.scm:835: begin-time */
t3=((C_word*)((C_word*)t0)[9])[1];
f_5224(t3,t2);}

/* k6018 in k6015 in k6012 in k6009 in k5902 in k5899 in k5896 in k5892 in k5889 in k5886 in loop in k5877 in k5874 in k5871 in k5868 in k5865 in k5859 in k5856 in k5853 in k5850 in k5847 in k5844 in ... */
static void C_ccall f_6020(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_6020,c,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_6024,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],tmp=(C_word)a,a+=16,tmp);
/* batch-driver.scm:837: chicken.compiler.core#perform-closure-conversion */
t3=*((C_word*)lf[208]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k6022 in k6018 in k6015 in k6012 in k6009 in k5902 in k5899 in k5896 in k5892 in k5889 in k5886 in loop in k5877 in k5874 in k5871 in k5868 in k5865 in k5859 in k5856 in k5853 in k5850 in k5847 in ... */
static void C_ccall f_6024(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_6024,c,av);}
a=C_alloc(16);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_6027,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],tmp=(C_word)a,a+=16,tmp);
/* batch-driver.scm:838: end-time */
t4=((C_word*)((C_word*)t0)[4])[1];
f_5234(t4,t3,lf[207]);}

/* k6025 in k6022 in k6018 in k6015 in k6012 in k6009 in k5902 in k5899 in k5896 in k5892 in k5889 in k5886 in loop in k5877 in k5874 in k5871 in k5868 in k5865 in k5859 in k5856 in k5853 in k5850 in ... */
static void C_ccall f_6027(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,5)))){
C_save_and_reclaim((void *)f_6027,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6030,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
/* batch-driver.scm:839: print-db */
t3=((C_word*)((C_word*)t0)[14])[1];
f_5031(t3,t2,lf[205],lf[206],((C_word*)t0)[3],((C_word*)t0)[15]);}

/* k6028 in k6025 in k6022 in k6018 in k6015 in k6012 in k6009 in k5902 in k5899 in k5896 in k5892 in k5889 in k5886 in loop in k5877 in k5874 in k5871 in k5868 in k5865 in k5859 in k5856 in k5853 in ... */
static void C_ccall f_6030(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(17,c,2)))){
C_save_and_reclaim((void *)f_6030,c,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6033,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
if(C_truep(*((C_word*)lf[203]+1))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6135,a[2]=((C_word*)t0)[13],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:254: chicken.time#current-process-milliseconds */
t4=*((C_word*)lf[114]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_6033(2,av2);}}}

/* k6031 in k6028 in k6025 in k6022 in k6018 in k6015 in k6012 in k6009 in k5902 in k5899 in k5896 in k5892 in k5889 in k5886 in loop in k5877 in k5874 in k5871 in k5868 in k5865 in k5859 in k5856 in ... */
static void C_ccall f_6033(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_6033,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6036,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* batch-driver.scm:843: print-node */
t3=((C_word*)((C_word*)t0)[12])[1];
f_5009(t3,t2,lf[201],lf[202],((C_word*)((C_word*)t0)[2])[1]);}

/* k6034 in k6031 in k6028 in k6025 in k6022 in k6018 in k6015 in k6012 in k6009 in k5902 in k5899 in k5896 in k5892 in k5889 in k5886 in loop in k5877 in k5874 in k5871 in k5868 in k5865 in k5859 in ... */
static void C_ccall f_6036(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_6036,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6039,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
if(C_truep(((C_word*)t0)[11])){
/* batch-driver.scm:844: chicken.base#exit */
t3=*((C_word*)lf[200]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_6039(2,av2);}}}

/* k6037 in k6034 in k6031 in k6028 in k6025 in k6022 in k6018 in k6015 in k6012 in k6009 in k5902 in k5899 in k5896 in k5892 in k5889 in k5886 in loop in k5877 in k5874 in k5871 in k5868 in k5865 in ... */
static void C_ccall f_6039(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_6039,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6042,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* batch-driver.scm:845: begin-time */
t3=((C_word*)((C_word*)t0)[9])[1];
f_5224(t3,t2);}

/* k6040 in k6037 in k6034 in k6031 in k6028 in k6025 in k6022 in k6018 in k6015 in k6012 in k6009 in k5902 in k5899 in k5896 in k5892 in k5889 in k5886 in loop in k5877 in k5874 in k5871 in k5868 in ... */
static void C_ccall f_6042(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,7)))){
C_save_and_reclaim((void *)f_6042,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6047,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6053,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
/* batch-driver.scm:847: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[10];
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}

/* a6046 in k6040 in k6037 in k6034 in k6031 in k6028 in k6025 in k6022 in k6018 in k6015 in k6012 in k6009 in k5902 in k5899 in k5896 in k5892 in k5889 in k5886 in loop in k5877 in k5874 in k5871 in ... */
static void C_ccall f_6047(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6047,c,av);}
/* batch-driver.scm:848: chicken.compiler.core#prepare-for-code-generation */
t2=*((C_word*)lf[183]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* a6052 in k6040 in k6037 in k6034 in k6031 in k6028 in k6025 in k6022 in k6018 in k6015 in k6012 in k6009 in k5902 in k5899 in k5896 in k5892 in k5889 in k5886 in loop in k5877 in k5874 in k5871 in ... */
static void C_ccall f_6053(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6=av[6];
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_6053,c,av);}
a=C_alloc(14);
t7=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6057,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=t4,a[7]=t5,a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],a[12]=t6,a[13]=((C_word*)t0)[8],tmp=(C_word)a,a+=14,tmp);
/* batch-driver.scm:849: end-time */
t8=((C_word*)((C_word*)t0)[2])[1];
f_5234(t8,t7,lf[199]);}

/* k6055 in a6052 in k6040 in k6037 in k6034 in k6031 in k6028 in k6025 in k6022 in k6018 in k6015 in k6012 in k6009 in k5902 in k5899 in k5896 in k5892 in k5889 in k5886 in loop in k5877 in k5874 in ... */
static void C_ccall f_6057(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_6057,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6060,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
/* batch-driver.scm:850: begin-time */
t3=((C_word*)((C_word*)t0)[13])[1];
f_5224(t3,t2);}

/* k6058 in k6055 in a6052 in k6040 in k6037 in k6034 in k6031 in k6028 in k6025 in k6022 in k6018 in k6015 in k6012 in k6009 in k5902 in k5899 in k5896 in k5892 in k5889 in k5886 in loop in k5877 in ... */
static void C_ccall f_6060(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(23,c,4)))){
C_save_and_reclaim((void *)f_6060,c,av);}
a=C_alloc(23);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6063,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
if(C_truep(*((C_word*)lf[195]+1))){
t3=*((C_word*)lf[161]+1);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6106,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=C_a_i_list(&a,1,*((C_word*)lf[195]+1));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9140,a[2]=t4,tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t6;
av2[2]=*((C_word*)lf[184]+1);
av2[3]=lf[198];
av2[4]=t5;
C_apply(5,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_6063(2,av2);}}}

/* k6061 in k6058 in k6055 in a6052 in k6040 in k6037 in k6034 in k6031 in k6028 in k6025 in k6022 in k6018 in k6015 in k6012 in k6009 in k5902 in k5899 in k5896 in k5892 in k5889 in k5886 in loop in ... */
static void C_ccall f_6063(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_6063,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6066,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
if(C_truep(((C_word*)t0)[4])){
/* batch-driver.scm:859: scheme#open-output-file */
t3=*((C_word*)lf[194]+1);{
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
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=*((C_word*)lf[20]+1);
f_6066(2,av2);}}}

/* k6064 in k6061 in k6058 in k6055 in a6052 in k6040 in k6037 in k6034 in k6031 in k6028 in k6025 in k6022 in k6018 in k6015 in k6012 in k6009 in k5902 in k5899 in k5896 in k5892 in k5889 in k5886 in ... */
static void C_ccall f_6066(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(20,c,4)))){
C_save_and_reclaim((void *)f_6066,c,av);}
a=C_alloc(20);
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6069,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
t3=C_a_i_list(&a,1,((C_word*)t0)[4]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9134,a[2]=t2,tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t4;
av2[2]=*((C_word*)lf[184]+1);
av2[3]=lf[193];
av2[4]=t3;
C_apply(5,av2);}}

/* k6067 in k6064 in k6061 in k6058 in k6055 in a6052 in k6040 in k6037 in k6034 in k6031 in k6028 in k6025 in k6022 in k6018 in k6015 in k6012 in k6009 in k5902 in k5899 in k5896 in k5892 in k5889 in ... */
static void C_ccall f_6069(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,10)))){
C_save_and_reclaim((void *)f_6069,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6072,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:861: chicken.compiler.c-backend#generate-code */
t3=*((C_word*)lf[192]+1);{
C_word *av2;
if(c >= 11) {
  av2=av;
} else {
  av2=C_alloc(11);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=((C_word*)t0)[7];
av2[4]=((C_word*)t0)[8];
av2[5]=((C_word*)t0)[5];
av2[6]=((C_word*)t0)[9];
av2[7]=((C_word*)t0)[10];
av2[8]=((C_word*)t0)[11];
av2[9]=((C_word*)t0)[12];
av2[10]=((C_word*)t0)[13];
((C_proc)(void*)(*((C_word*)t3+1)))(11,av2);}}

/* k6070 in k6067 in k6064 in k6061 in k6058 in k6055 in a6052 in k6040 in k6037 in k6034 in k6031 in k6028 in k6025 in k6022 in k6018 in k6015 in k6012 in k6009 in k5902 in k5899 in k5896 in k5892 in ... */
static void C_ccall f_6072(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6072,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6075,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[4])){
/* batch-driver.scm:864: scheme#close-output-port */
t3=*((C_word*)lf[191]+1);{
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
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_6075(2,av2);}}}

/* k6073 in k6070 in k6067 in k6064 in k6061 in k6058 in k6055 in a6052 in k6040 in k6037 in k6034 in k6031 in k6028 in k6025 in k6022 in k6018 in k6015 in k6012 in k6009 in k5902 in k5899 in k5896 in ... */
static void C_ccall f_6075(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6075,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6078,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:865: end-time */
t3=((C_word*)((C_word*)t0)[3])[1];
f_5234(t3,t2,lf[190]);}

/* k6076 in k6073 in k6070 in k6067 in k6064 in k6061 in k6058 in k6055 in a6052 in k6040 in k6037 in k6034 in k6031 in k6028 in k6025 in k6022 in k6018 in k6015 in k6012 in k6009 in k5902 in k5899 in ... */
static void C_ccall f_6078(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_6078,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6081,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_memq(lf[187],*((C_word*)lf[103]+1)))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6097,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:867: ##sys#stop-timer */
t4=*((C_word*)lf[189]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f8651,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:868: chicken.compiler.support#compiler-cleanup-hook */
t4=*((C_word*)lf[186]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6079 in k6076 in k6073 in k6070 in k6067 in k6064 in k6061 in k6058 in k6055 in a6052 in k6040 in k6037 in k6034 in k6031 in k6028 in k6025 in k6022 in k6018 in k6015 in k6012 in k6009 in k5902 in ... */
static void C_ccall f_6081(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6081,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6084,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:868: chicken.compiler.support#compiler-cleanup-hook */
t3=*((C_word*)lf[186]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k6082 in k6079 in k6076 in k6073 in k6070 in k6067 in k6064 in k6061 in k6058 in k6055 in a6052 in k6040 in k6037 in k6034 in k6031 in k6028 in k6025 in k6022 in k6018 in k6015 in k6012 in k6009 in ... */
static void C_ccall f_6084(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_6084,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9122,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t2;
av2[2]=*((C_word*)lf[184]+1);
av2[3]=lf[185];
av2[4]=C_SCHEME_END_OF_LIST;
C_apply(5,av2);}}

/* k6095 in k6076 in k6073 in k6070 in k6067 in k6064 in k6061 in k6058 in k6055 in a6052 in k6040 in k6037 in k6034 in k6031 in k6028 in k6025 in k6022 in k6018 in k6015 in k6012 in k6009 in k5902 in ... */
static void C_ccall f_6097(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6097,c,av);}
/* batch-driver.scm:867: ##sys#display-times */
t2=*((C_word*)lf[188]+1);{
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

/* k6104 in k6058 in k6055 in a6052 in k6040 in k6037 in k6034 in k6031 in k6028 in k6025 in k6022 in k6018 in k6015 in k6012 in k6009 in k5902 in k5899 in k5896 in k5892 in k5889 in k5886 in loop in ... */
static void C_ccall f_6106(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_6106,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6111,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:856: scheme#with-output-to-file */
t3=*((C_word*)lf[197]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=*((C_word*)lf[195]+1);
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* a6110 in k6104 in k6058 in k6055 in a6052 in k6040 in k6037 in k6034 in k6031 in k6028 in k6025 in k6022 in k6018 in k6015 in k6012 in k6009 in k5902 in k5899 in k5896 in k5892 in k5889 in k5886 in ... */
static void C_ccall f_6111(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6111,c,av);}
t2=*((C_word*)lf[196]+1);
/* batch-driver.scm:856: g2159 */
t3=*((C_word*)lf[196]+1);{
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

/* k6133 in k6028 in k6025 in k6022 in k6018 in k6015 in k6012 in k6009 in k5902 in k5899 in k5896 in k5892 in k5889 in k5886 in loop in k5877 in k5874 in k5871 in k5868 in k5865 in k5859 in k5856 in ... */
static void C_ccall f_6135(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,2)))){
C_save_and_reclaim((void *)f_6135,c,av);}
a=C_alloc(29);
t2=C_s_a_i_minus(&a,2,t1,((C_word*)((C_word*)t0)[2])[1]);
if(C_truep(C_i_greaterp(t2,C_fix(60000)))){
/* batch-driver.scm:842: scheme#display */
t3=*((C_word*)lf[151]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[204];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_6033(2,av2);}}}

/* k6139 in k6012 in k6009 in k5902 in k5899 in k5896 in k5892 in k5889 in k5886 in loop in k5877 in k5874 in k5871 in k5868 in k5865 in k5859 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in ... */
static void C_ccall f_6141(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6141,c,av);}
a=C_alloc(19);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=*((C_word*)lf[210]+1);
t7=*((C_word*)lf[211]+1);
t8=C_i_check_list_2(*((C_word*)lf[211]+1),lf[5]);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6154,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6156,a[2]=t4,a[3]=t11,a[4]=t6,a[5]=t5,tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_6156(t13,t9,*((C_word*)lf[211]+1));}

/* k6152 in k6139 in k6012 in k6009 in k5902 in k5899 in k5896 in k5892 in k5889 in k5886 in loop in k5877 in k5874 in k5871 in k5868 in k5865 in k5859 in k5856 in k5853 in k5850 in k5847 in k5844 in ... */
static void C_ccall f_6154(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_6154,c,av);}
/* batch-driver.scm:831: chicken.compiler.support#emit-global-inline-file */
t2=*((C_word*)lf[212]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
av2[5]=*((C_word*)lf[167]+1);
av2[6]=*((C_word*)lf[169]+1);
av2[7]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(8,av2);}}

/* map-loop2124 in k6139 in k6012 in k6009 in k5902 in k5899 in k5896 in k5892 in k5889 in k5886 in loop in k5877 in k5874 in k5871 in k5868 in k5865 in k5859 in k5856 in k5853 in k5850 in k5847 in k5844 in ... */
static void C_fcall f_6156(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_6156,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6181,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:834: g2130 */
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

/* k6179 in map-loop2124 in k6139 in k6012 in k6009 in k5902 in k5899 in k5896 in k5892 in k5889 in k5886 in loop in k5877 in k5874 in k5871 in k5868 in k5865 in k5859 in k5856 in k5853 in k5850 in k5847 in ... */
static void C_ccall f_6181(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6181,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_6156(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k6189 in k5902 in k5899 in k5896 in k5892 in k5889 in k5886 in loop in k5877 in k5874 in k5871 in k5868 in k5865 in k5859 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5835 in ... */
static void C_ccall f_6191(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_6191,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6194,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* batch-driver.scm:817: chicken.compiler.support#debugging */
t3=*((C_word*)lf[104]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[105];
av2[3]=lf[221];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k6192 in k6189 in k5902 in k5899 in k5896 in k5892 in k5889 in k5886 in loop in k5877 in k5874 in k5871 in k5868 in k5865 in k5859 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in ... */
static void C_ccall f_6194(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_6194,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6197,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:818: chicken.compiler.lfa2#perform-secondary-flow-analysis */
t3=*((C_word*)lf[220]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[4])[1];
av2[3]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k6195 in k6192 in k6189 in k5902 in k5899 in k5896 in k5892 in k5889 in k5886 in loop in k5877 in k5874 in k5871 in k5868 in k5865 in k5859 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in ... */
static void C_ccall f_6197(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6197,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6200,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* batch-driver.scm:819: end-time */
t3=((C_word*)((C_word*)t0)[2])[1];
f_5234(t3,t2,lf[219]);}

/* k6198 in k6195 in k6192 in k6189 in k5902 in k5899 in k5896 in k5892 in k5889 in k5886 in loop in k5877 in k5874 in k5871 in k5868 in k5865 in k5859 in k5856 in k5853 in k5850 in k5847 in k5844 in ... */
static void C_ccall f_6200(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_6200,c,av);}
a=C_alloc(6);
if(C_truep(C_i_nullp(((C_word*)t0)[2]))){
/* batch-driver.scm:824: end-time */
t2=((C_word*)((C_word*)t0)[3])[1];
f_5234(t2,((C_word*)t0)[4],lf[216]);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6212,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:821: begin-time */
t3=((C_word*)((C_word*)t0)[6])[1];
f_5224(t3,t2);}}

/* k6210 in k6198 in k6195 in k6192 in k6189 in k5902 in k5899 in k5896 in k5892 in k5889 in k5886 in loop in k5877 in k5874 in k5871 in k5868 in k5865 in k5859 in k5856 in k5853 in k5850 in k5847 in ... */
static void C_ccall f_6212(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_6212,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6215,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:822: chicken.compiler.support#debugging */
t3=*((C_word*)lf[104]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[105];
av2[3]=lf[218];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k6213 in k6210 in k6198 in k6195 in k6192 in k6189 in k5902 in k5899 in k5896 in k5892 in k5889 in k5886 in loop in k5877 in k5874 in k5871 in k5868 in k5865 in k5859 in k5856 in k5853 in k5850 in ... */
static void C_ccall f_6215(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_6215,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6219,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:823: chicken.compiler.lfa2#perform-unboxing */
t3=*((C_word*)lf[217]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k6217 in k6213 in k6210 in k6198 in k6195 in k6192 in k6189 in k5902 in k5899 in k5896 in k5892 in k5889 in k5886 in loop in k5877 in k5874 in k5871 in k5868 in k5865 in k5859 in k5856 in k5853 in ... */
static void C_ccall f_6219(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6219,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
/* batch-driver.scm:824: end-time */
t3=((C_word*)((C_word*)t0)[3])[1];
f_5234(t3,((C_word*)t0)[4],lf[216]);}

/* k6226 in k5889 in k5886 in loop in k5877 in k5874 in k5871 in k5868 in k5865 in k5859 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5821 in ... */
static void C_ccall f_6228(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_6228,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6231,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_memq(lf[242],*((C_word*)lf[103]+1)))){
/* batch-driver.scm:757: chicken.compiler.support#dump-defined-globals */
t3=*((C_word*)lf[243]+1);{
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
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_6231(2,av2);}}}

/* k6229 in k6226 in k5889 in k5886 in loop in k5877 in k5874 in k5871 in k5868 in k5865 in k5859 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in ... */
static void C_ccall f_6231(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_6231,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6234,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_memq(lf[240],*((C_word*)lf[103]+1)))){
/* batch-driver.scm:759: chicken.compiler.support#dump-global-refs */
t3=*((C_word*)lf[241]+1);{
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
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_6234(2,av2);}}}

/* k6232 in k6229 in k6226 in k5889 in k5886 in loop in k5877 in k5874 in k5871 in k5868 in k5865 in k5859 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in ... */
static void C_ccall f_6234(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_6234,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6237,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_eqp(*((C_word*)lf[237]+1),C_SCHEME_TRUE);
if(C_truep(t3)){
/* batch-driver.scm:762: chicken.pathname#pathname-replace-extension */
t4=*((C_word*)lf[238]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[239];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t4=t2;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_6237(2,av2);}}}

/* k6235 in k6232 in k6229 in k6226 in k5889 in k5886 in loop in k5877 in k5874 in k5871 in k5868 in k5865 in k5859 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5835 in k5832 in ... */
static void C_ccall f_6237(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_6237,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6240,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=t2;
f_6240(t3,t1);}
else{
if(C_truep(C_i_stringp(*((C_word*)lf[237]+1)))){
t3=*((C_word*)lf[237]+1);
t4=t2;
f_6240(t4,*((C_word*)lf[237]+1));}
else{
t3=t2;
f_6240(t3,C_SCHEME_FALSE);}}}

/* k6238 in k6235 in k6232 in k6229 in k6226 in k5889 in k5886 in loop in k5877 in k5874 in k5871 in k5868 in k5865 in k5859 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5835 in ... */
static void C_fcall f_6240(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,4)))){
C_save_and_reclaim_args((void *)trf_6240,2,t0,t1);}
a=C_alloc(12);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6246,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=C_a_i_list(&a,1,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9154,a[2]=t2,tmp=(C_word)a,a+=3,tmp);{
C_word av2[5];
av2[0]=0;
av2[1]=t4;
av2[2]=*((C_word*)lf[184]+1);
av2[3]=lf[236];
av2[4]=t3;
C_apply(5,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_5894(2,av2);}}}

/* k6244 in k6238 in k6235 in k6232 in k6229 in k6226 in k5889 in k5886 in loop in k5877 in k5874 in k5871 in k5868 in k5865 in k5859 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in ... */
static void C_ccall f_6246(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_6246,c,av);}
/* batch-driver.scm:766: chicken.compiler.scrutinizer#emit-types-file */
t2=*((C_word*)lf[235]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
av2[5]=*((C_word*)lf[167]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k6288 in k5859 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5821 in k5818 in k5815 in k5812 in k5809 in k5806 in k5800 in k5785 in k5779 in ... */
static void C_ccall f_6290(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6290,c,av);}
/* batch-driver.scm:736: chicken.compiler.optimizer#scan-toplevel-assignments */
t2=*((C_word*)lf[252]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_i_car(t1);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k6294 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5821 in k5818 in k5815 in k5812 in k5809 in k5806 in k5800 in k5785 in k5779 in k5776 in ... */
static void C_ccall f_6296(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_6296,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6310,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* batch-driver.scm:708: collect-options */
t3=((C_word*)((C_word*)t0)[12])[1];
f_5189(t3,t2,lf[269]);}

/* k6299 in for-each-loop2019 in k6308 in k6294 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5821 in k5818 in k5815 in k5812 in k5809 in k5806 in k5800 in ... */
static void C_ccall f_6301(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6301,c,av);}
if(C_truep(t1)){
t2=((C_word*)((C_word*)t0)[2])[1];
f_6393(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}
else{
/* batch-driver.scm:707: chicken.compiler.support#quit-compiling */
t2=*((C_word*)lf[80]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[5];
av2[2]=lf[268];
av2[3]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* k6308 in k6294 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5821 in k5818 in k5815 in k5812 in k5809 in k5806 in k5800 in k5785 in k5779 in ... */
static void C_ccall f_6310(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,3)))){
C_save_and_reclaim((void *)f_6310,c,av);}
a=C_alloc(17);
t2=C_i_check_list_2(t1,lf[10]);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6316,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6393,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_6393(t7,t3,t1);}

/* k6314 in k6308 in k6294 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5821 in k5818 in k5815 in k5812 in k5809 in k5806 in k5800 in k5785 in ... */
static void C_ccall f_6316(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6316,c,av);}
a=C_alloc(16);
t2=C_i_check_list_2(((C_word*)t0)[2],lf[10]);
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6335,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6370,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_6370(t7,t3,((C_word*)t0)[2]);}

/* k6323 in for-each-loop2040 in k6314 in k6308 in k6294 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5821 in k5818 in k5815 in k5812 in k5809 in k5806 in ... */
static void C_ccall f_6325(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6325,c,av);}
/* batch-driver.scm:711: chicken.compiler.scrutinizer#load-type-database */
t2=*((C_word*)lf[264]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=*((C_word*)lf[122]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k6327 in for-each-loop2040 in k6314 in k6308 in k6294 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5821 in k5818 in k5815 in k5812 in k5809 in k5806 in ... */
static void C_ccall f_6329(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6329,c,av);}
/* batch-driver.scm:712: chicken.pathname#make-pathname */
t2=*((C_word*)lf[265]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_FALSE;
av2[3]=t1;
av2[4]=lf[266];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k6333 in k6314 in k6308 in k6294 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5821 in k5818 in k5815 in k5812 in k5809 in k5806 in k5800 in ... */
static void C_ccall f_6335(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_6335,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6338,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* batch-driver.scm:715: begin-time */
t3=((C_word*)((C_word*)t0)[8])[1];
f_5224(t3,t2);}

/* k6336 in k6333 in k6314 in k6308 in k6294 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5821 in k5818 in k5815 in k5812 in k5809 in k5806 in ... */
static void C_ccall f_6338(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_6338,c,av);}
a=C_alloc(10);
t2=C_set_block_item(lf[164] /* chicken.compiler.core#first-analysis */,0,C_SCHEME_FALSE);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6343,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* batch-driver.scm:717: analyze */
t4=((C_word*)((C_word*)t0)[10])[1];
f_5274(t4,t3,lf[263],((C_word*)t0)[5],C_SCHEME_END_OF_LIST);}

/* k6341 in k6336 in k6333 in k6314 in k6308 in k6294 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5821 in k5818 in k5815 in k5812 in k5809 in ... */
static void C_ccall f_6343(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_6343,c,av);}
a=C_alloc(9);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6346,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* batch-driver.scm:718: print-db */
t4=((C_word*)((C_word*)t0)[9])[1];
f_5031(t4,t3,lf[261],lf[262],((C_word*)((C_word*)t0)[2])[1],C_fix(0));}

/* k6344 in k6341 in k6336 in k6333 in k6314 in k6308 in k6294 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5821 in k5818 in k5815 in k5812 in ... */
static void C_ccall f_6346(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_6346,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6349,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* batch-driver.scm:719: end-time */
t3=((C_word*)((C_word*)t0)[5])[1];
f_5234(t3,t2,lf[260]);}

/* k6347 in k6344 in k6341 in k6336 in k6333 in k6314 in k6308 in k6294 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5821 in k5818 in k5815 in ... */
static void C_ccall f_6349(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_6349,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6352,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* batch-driver.scm:720: begin-time */
t3=((C_word*)((C_word*)t0)[8])[1];
f_5224(t3,t2);}

/* k6350 in k6347 in k6344 in k6341 in k6336 in k6333 in k6314 in k6308 in k6294 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5821 in k5818 in ... */
static void C_ccall f_6352(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_6352,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6355,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* batch-driver.scm:721: chicken.compiler.support#debugging */
t3=*((C_word*)lf[104]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[105];
av2[3]=lf[259];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k6353 in k6350 in k6347 in k6344 in k6341 in k6336 in k6333 in k6314 in k6308 in k6294 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5821 in ... */
static void C_ccall f_6355(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,7)))){
C_save_and_reclaim((void *)f_6355,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6358,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:722: chicken.compiler.scrutinizer#scrutinize */
t3=*((C_word*)lf[257]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)((C_word*)t0)[6])[1];
av2[4]=((C_word*)((C_word*)t0)[7])[1];
av2[5]=*((C_word*)lf[122]+1);
av2[6]=*((C_word*)lf[258]+1);
av2[7]=*((C_word*)lf[167]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k6356 in k6353 in k6350 in k6347 in k6344 in k6341 in k6336 in k6333 in k6314 in k6308 in k6294 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in ... */
static void C_ccall f_6358(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_6358,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6361,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:725: end-time */
t3=((C_word*)((C_word*)t0)[5])[1];
f_5234(t3,t2,lf[256]);}

/* k6359 in k6356 in k6353 in k6350 in k6347 in k6344 in k6341 in k6336 in k6333 in k6314 in k6308 in k6294 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in ... */
static void C_ccall f_6361(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_6361,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6364,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(*((C_word*)lf[122]+1))){
/* batch-driver.scm:727: print-node */
t3=((C_word*)((C_word*)t0)[3])[1];
f_5009(t3,t2,lf[254],lf[255],((C_word*)t0)[4]);}
else{
t3=C_set_block_item(lf[164] /* chicken.compiler.core#first-analysis */,0,C_SCHEME_TRUE);
t4=((C_word*)t0)[2];
f_5861(t4,t3);}}

/* k6362 in k6359 in k6356 in k6353 in k6350 in k6347 in k6344 in k6341 in k6336 in k6333 in k6314 in k6308 in k6294 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5835 in k5832 in ... */
static void C_ccall f_6364(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6364,c,av);}
t2=C_set_block_item(lf[164] /* chicken.compiler.core#first-analysis */,0,C_SCHEME_TRUE);
t3=((C_word*)t0)[2];
f_5861(t3,t2);}

/* for-each-loop2040 in k6314 in k6308 in k6294 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5821 in k5818 in k5815 in k5812 in k5809 in k5806 in k5800 in ... */
static void C_fcall f_6370(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,2)))){
C_save_and_reclaim_args((void *)trf_6370,3,t0,t1,t2);}
a=C_alloc(11);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6380,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6325,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6329,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:712: scheme#symbol->string */
t7=*((C_word*)lf[267]+1);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6378 in for-each-loop2040 in k6314 in k6308 in k6294 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5821 in k5818 in k5815 in k5812 in k5809 in k5806 in ... */
static void C_ccall f_6380(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6380,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_6370(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* for-each-loop2019 in k6308 in k6294 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5821 in k5818 in k5815 in k5812 in k5809 in k5806 in k5800 in k5785 in ... */
static void C_fcall f_6393(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,4)))){
C_save_and_reclaim_args((void *)trf_6393,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6403,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6301,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t3,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* batch-driver.scm:706: chicken.compiler.scrutinizer#load-type-database */
t6=*((C_word*)lf[264]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
av2[3]=*((C_word*)lf[122]+1);
av2[4]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6401 in for-each-loop2019 in k6308 in k6294 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5821 in k5818 in k5815 in k5812 in k5809 in k5806 in k5800 in ... */
static void C_ccall f_6403(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6403,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_6393(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k6420 in k5856 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5821 in k5818 in k5815 in k5812 in k5809 in k5806 in k5800 in k5785 in k5779 in k5776 in ... */
static void C_ccall f_6422(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6422,c,av);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
f_6296(2,av2);}}
else{
/* batch-driver.scm:702: chicken.compiler.support#quit-compiling */
t2=*((C_word*)lf[80]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[271];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* k6432 in for-each-loop1996 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5821 in k5818 in k5815 in k5812 in k5809 in k5806 in k5800 in k5785 in k5779 in k5776 in ... */
static void C_ccall f_6434(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6434,c,av);}
/* batch-driver.scm:694: chicken.compiler.support#load-inline-file */
t2=*((C_word*)lf[273]+1);{
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

/* for-each-loop1996 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5821 in k5818 in k5815 in k5812 in k5809 in k5806 in k5800 in k5785 in k5779 in k5776 in k5749 in ... */
static void C_fcall f_6445(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,4)))){
C_save_and_reclaim_args((void *)trf_6445,3,t0,t1,t2);}
a=C_alloc(15);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6455,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6434,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_a_i_list(&a,1,t4);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9166,a[2]=t5,tmp=(C_word)a,a+=3,tmp);{
C_word av2[5];
av2[0]=0;
av2[1]=t7;
av2[2]=*((C_word*)lf[184]+1);
av2[3]=lf[274];
av2[4]=t6;
C_apply(5,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6453 in for-each-loop1996 in k5853 in k5850 in k5847 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5821 in k5818 in k5815 in k5812 in k5809 in k5806 in k5800 in k5785 in k5779 in k5776 in ... */
static void C_ccall f_6455(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6455,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_6445(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k6469 in for-each-loop1974 in k5847 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5821 in k5818 in k5815 in k5812 in k5809 in k5806 in k5800 in k5785 in k5779 in k5776 in k5749 in k5740 in ... */
static void C_ccall f_6471(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_6471,c,av);}
a=C_alloc(10);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6477,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_list(&a,1,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9174,a[2]=t2,tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t4;
av2[2]=*((C_word*)lf[184]+1);
av2[3]=lf[277];
av2[4]=t3;
C_apply(5,av2);}}
else{
t2=((C_word*)((C_word*)t0)[3])[1];
f_6492(t2,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}}

/* k6475 in k6469 in for-each-loop1974 in k5847 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5821 in k5818 in k5815 in k5812 in k5809 in k5806 in k5800 in k5785 in k5779 in k5776 in k5749 in ... */
static void C_ccall f_6477(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6477,c,av);}
/* batch-driver.scm:686: chicken.compiler.support#load-inline-file */
t2=*((C_word*)lf[273]+1);{
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

/* k6482 in for-each-loop1974 in k5847 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5821 in k5818 in k5815 in k5812 in k5809 in k5806 in k5800 in k5785 in k5779 in k5776 in k5749 in k5740 in ... */
static void C_ccall f_6484(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_6484,c,av);}
/* batch-driver.scm:683: ##sys#resolve-include-filename */
t2=*((C_word*)lf[278]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[279];
av2[4]=C_SCHEME_TRUE;
av2[5]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* for-each-loop1974 in k5847 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5821 in k5818 in k5815 in k5812 in k5809 in k5806 in k5800 in k5785 in k5779 in k5776 in k5749 in k5740 in k5737 in ... */
static void C_fcall f_6492(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,2)))){
C_save_and_reclaim_args((void *)trf_6492,3,t0,t1,t2);}
a=C_alloc(14);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6502,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6471,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6484,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:684: scheme#symbol->string */
t7=*((C_word*)lf[267]+1);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6500 in for-each-loop1974 in k5847 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5821 in k5818 in k5815 in k5812 in k5809 in k5806 in k5800 in k5785 in k5779 in k5776 in k5749 in k5740 in ... */
static void C_ccall f_6502(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6502,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_6492(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k6515 in k5838 in k5835 in k5832 in k5829 in k5826 in k5821 in k5818 in k5815 in k5812 in k5809 in k5806 in k5800 in k5785 in k5779 in k5776 in k5749 in k5740 in k5737 in k5734 in k5731 in k5728 in ... */
static void C_ccall f_6517(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6517,c,av);}
/* batch-driver.scm:671: chicken.compiler.core#build-toplevel-procedure */
t2=*((C_word*)lf[282]+1);{
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

/* k6519 in k5838 in k5835 in k5832 in k5829 in k5826 in k5821 in k5818 in k5815 in k5812 in k5809 in k5806 in k5800 in k5785 in k5779 in k5776 in k5749 in k5740 in k5737 in k5734 in k5731 in k5728 in ... */
static void C_ccall f_6521(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6521,c,av);}
/* batch-driver.scm:672: chicken.compiler.support#build-node-graph */
t2=*((C_word*)lf[283]+1);{
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

/* k6522 in k5835 in k5832 in k5829 in k5826 in k5821 in k5818 in k5815 in k5812 in k5809 in k5806 in k5800 in k5785 in k5779 in k5776 in k5749 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in ... */
static void C_ccall f_6524(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_6524,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6527,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:666: begin-time */
t3=((C_word*)((C_word*)t0)[6])[1];
f_5224(t3,t2);}

/* k6525 in k6522 in k5835 in k5832 in k5829 in k5826 in k5821 in k5818 in k5815 in k5812 in k5809 in k5806 in k5800 in k5785 in k5779 in k5776 in k5749 in k5740 in k5737 in k5734 in k5731 in k5728 in ... */
static void C_ccall f_6527(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_6527,c,av);}
a=C_alloc(18);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=((C_word*)((C_word*)t0)[2])[1];
t7=C_i_check_list_2(t6,lf[5]);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6537,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6542,a[2]=t4,a[3]=t10,a[4]=((C_word*)t0)[5],a[5]=t5,tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_6542(t12,t8,t6);}

/* k6535 in k6525 in k6522 in k5835 in k5832 in k5829 in k5826 in k5821 in k5818 in k5815 in k5812 in k5809 in k5806 in k5800 in k5785 in k5779 in k5776 in k5749 in k5740 in k5737 in k5734 in k5731 in ... */
static void C_ccall f_6537(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6537,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
/* batch-driver.scm:668: end-time */
t3=((C_word*)((C_word*)t0)[3])[1];
f_5234(t3,((C_word*)t0)[4],lf[285]);}

/* map-loop1942 in k6525 in k6522 in k5835 in k5832 in k5829 in k5826 in k5821 in k5818 in k5815 in k5812 in k5809 in k5806 in k5800 in k5785 in k5779 in k5776 in k5749 in k5740 in k5737 in k5734 in k5731 in ... */
static void C_fcall f_6542(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_6542,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6567,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:667: g1948 */
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

/* k6565 in map-loop1942 in k6525 in k6522 in k5835 in k5832 in k5829 in k5826 in k5821 in k5818 in k5815 in k5812 in k5809 in k5806 in k5800 in k5785 in k5779 in k5776 in k5749 in k5740 in k5737 in k5734 in ... */
static void C_ccall f_6567(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6567,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_6542(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k6580 in k5818 in k5815 in k5812 in k5809 in k5806 in k5800 in k5785 in k5779 in k5776 in k5749 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5719 in k5716 in k5713 in k5709 in ... */
static void C_ccall f_6582(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6582,c,av);}
if(C_truep(t1)){
/* batch-driver.scm:652: chicken.compiler.support#display-line-number-database */
t2=*((C_word*)lf[292]+1);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_5823(2,av2);}}}

/* k6586 in k5815 in k5812 in k5809 in k5806 in k5800 in k5785 in k5779 in k5776 in k5749 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5719 in k5716 in k5713 in k5709 in k5705 in ... */
static void C_ccall f_6588(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6588,c,av);}
if(C_truep(t1)){
/* batch-driver.scm:650: chicken.compiler.support#display-real-name-table */
t2=*((C_word*)lf[295]+1);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_5820(2,av2);}}}

/* a6598 in k5812 in k5809 in k5806 in k5800 in k5785 in k5779 in k5776 in k5749 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5719 in k5716 in k5713 in k5709 in k5705 in k5702 in ... */
static void C_ccall f_6599(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6599,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6603,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:645: chicken.base#print */
t3=*((C_word*)lf[301]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[302];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6601 in a6598 in k5812 in k5809 in k5806 in k5800 in k5785 in k5779 in k5776 in k5749 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5719 in k5716 in k5713 in k5709 in k5705 in ... */
static void C_ccall f_6603(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_6603,c,av);}
a=C_alloc(5);
t2=*((C_word*)lf[298]+1);
t3=C_i_check_list_2(*((C_word*)lf[298]+1),lf[10]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6637,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_6637(t7,((C_word*)t0)[2],*((C_word*)lf[298]+1));}

/* k6609 in for-each-loop1913 in k6601 in a6598 in k5812 in k5809 in k5806 in k5800 in k5785 in k5779 in k5776 in k5749 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5719 in k5716 in k5713 in ... */
static void C_ccall f_6611(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_6611,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6614,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:647: ##sys#print */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_i_car(((C_word*)t0)[4]);
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k6612 in k6609 in for-each-loop1913 in k6601 in a6598 in k5812 in k5809 in k5806 in k5800 in k5785 in k5779 in k5776 in k5749 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5719 in k5716 in ... */
static void C_ccall f_6614(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_6614,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6617,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:647: ##sys#print */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[299];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k6615 in k6612 in k6609 in for-each-loop1913 in k6601 in a6598 in k5812 in k5809 in k5806 in k5800 in k5785 in k5779 in k5776 in k5749 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5719 in ... */
static void C_ccall f_6617(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_6617,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6620,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:647: ##sys#print */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_u_i_cdr(((C_word*)t0)[4]);
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k6618 in k6615 in k6612 in k6609 in for-each-loop1913 in k6601 in a6598 in k5812 in k5809 in k5806 in k5800 in k5785 in k5779 in k5776 in k5749 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in ... */
static void C_ccall f_6620(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6620,c,av);}
/* batch-driver.scm:647: ##sys#write-char-0 */
t2=*((C_word*)lf[34]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* for-each-loop1913 in k6601 in a6598 in k5812 in k5809 in k5806 in k5800 in k5785 in k5779 in k5776 in k5749 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5719 in k5716 in k5713 in k5709 in ... */
static void C_fcall f_6637(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,4)))){
C_save_and_reclaim_args((void *)trf_6637,3,t0,t1,t2);}
a=C_alloc(10);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6647,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=*((C_word*)lf[20]+1);
t6=*((C_word*)lf[20]+1);
t7=C_i_check_port_2(*((C_word*)lf[20]+1),C_fix(2),C_SCHEME_TRUE,lf[21]);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6611,a[2]=t3,a[3]=t5,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:647: ##sys#print */
t9=*((C_word*)lf[22]+1);{
C_word av2[5];
av2[0]=t9;
av2[1]=t8;
av2[2]=lf[300];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[20]+1);
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6645 in for-each-loop1913 in k6601 in a6598 in k5812 in k5809 in k5806 in k5800 in k5785 in k5779 in k5776 in k5749 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5719 in k5716 in k5713 in ... */
static void C_ccall f_6647(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6647,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_6637(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k6666 in k5809 in k5806 in k5800 in k5785 in k5779 in k5776 in k5749 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5719 in k5716 in k5713 in k5709 in k5705 in k5702 in k5699 in ... */
static void C_ccall f_6668(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6668,c,av);}
/* batch-driver.scm:634: chicken.compiler.support#quit-compiling */
t2=*((C_word*)lf[80]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[305];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k6685 in k5809 in k5806 in k5800 in k5785 in k5779 in k5776 in k5749 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5719 in k5716 in k5713 in k5709 in k5705 in k5702 in k5699 in ... */
static void C_ccall f_6687(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6687,c,av);}
/* batch-driver.scm:637: chicken.string#string-intersperse */
t2=*((C_word*)lf[306]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[307];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* map-loop1886 in k5809 in k5806 in k5800 in k5785 in k5779 in k5776 in k5749 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5719 in k5716 in k5713 in k5709 in k5705 in k5702 in k5699 in ... */
static void C_fcall f_6689(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_6689,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6714,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* batch-driver.scm:638: chicken.string#->string */
t5=*((C_word*)lf[308]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t3;
av2[2]=C_i_car(t4);
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6712 in map-loop1886 in k5809 in k5806 in k5800 in k5785 in k5779 in k5776 in k5749 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5719 in k5716 in k5713 in k5709 in k5705 in k5702 in ... */
static void C_ccall f_6714(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6714,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_6689(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k6744 in k5806 in k5800 in k5785 in k5779 in k5776 in k5749 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5719 in k5716 in k5713 in k5709 in k5705 in k5702 in k5699 in k5696 in ... */
static void C_ccall f_6746(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_6746,c,av);}
a=C_alloc(18);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6750,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
if(C_truep(*((C_word*)lf[313]+1))){
t3=C_a_i_list(&a,2,lf[315],*((C_word*)lf[313]+1));
t4=t2;
f_6750(t4,C_a_i_list(&a,1,t3));}
else{
t3=t2;
f_6750(t3,C_SCHEME_END_OF_LIST);}}

/* k6748 in k6744 in k5806 in k5800 in k5785 in k5779 in k5776 in k5749 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5719 in k5716 in k5713 in k5709 in k5705 in k5702 in k5699 in ... */
static void C_fcall f_6750(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_6750,2,t0,t1);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6754,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
if(C_truep(*((C_word*)lf[312]+1))){
if(C_truep(C_i_not(*((C_word*)lf[313]+1)))){
if(C_truep(((C_word*)t0)[8])){
/* batch-driver.scm:625: chicken.compiler.support#profiling-prelude-exps */
t3=*((C_word*)lf[314]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
/* batch-driver.scm:625: chicken.compiler.support#profiling-prelude-exps */
t3=*((C_word*)lf[314]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}
else{
/* batch-driver.scm:625: chicken.compiler.support#profiling-prelude-exps */
t3=*((C_word*)lf[314]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}
else{
t3=t2;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
f_6754(2,av2);}}}

/* k6752 in k6748 in k6744 in k5806 in k5800 in k5785 in k5779 in k5776 in k5749 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5719 in k5716 in k5713 in k5709 in k5705 in k5702 in ... */
static void C_ccall f_6754(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_6754,c,av);}
if(C_truep(*((C_word*)lf[310]+1))){
t2=((C_word*)((C_word*)t0)[2])[1];
/* batch-driver.scm:619: scheme#append */
t3=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[5];
av2[4]=((C_word*)t0)[6];
av2[5]=((C_word*)t0)[7];
av2[6]=t1;
av2[7]=((C_word*)t0)[8];
av2[8]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(9,av2);}}
else{
/* batch-driver.scm:619: scheme#append */
t2=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[5];
av2[4]=((C_word*)t0)[6];
av2[5]=((C_word*)t0)[7];
av2[6]=t1;
av2[7]=((C_word*)t0)[8];
av2[8]=lf[311];
((C_proc)(void*)(*((C_word*)t2+1)))(9,av2);}}}

/* map-loop1849 in k5806 in k5800 in k5785 in k5779 in k5776 in k5749 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5719 in k5716 in k5713 in k5709 in k5705 in k5702 in k5699 in k5696 in ... */
static void C_fcall f_6780(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(18,0,2)))){
C_save_and_reclaim_args((void *)trf_6780,3,t0,t1,t2);}
a=C_alloc(18);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cdr(t3);
t5=C_u_i_car(t3);
t6=C_a_i_list(&a,2,lf[316],t5);
t7=C_a_i_list(&a,3,lf[317],t4,t6);
t8=C_a_i_cons(&a,2,t7,C_SCHEME_END_OF_LIST);
t9=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t8);
t10=C_mutate(((C_word *)((C_word*)t0)[2])+1,t8);
t12=t1;
t13=C_slot(t2,C_fix(1));
t1=t12;
t2=t13;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* map-loop1818 in k5800 in k5785 in k5779 in k5776 in k5749 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5719 in k5716 in k5713 in k5709 in k5705 in k5702 in k5699 in k5696 in k5693 in ... */
static void C_fcall f_6814(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_6814,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6839,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_a_i_list(&a,2,lf[318],t4);
/* batch-driver.scm:617: chicken.compiler.core#canonicalize-expression */
t6=*((C_word*)lf[157]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t3;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6837 in map-loop1818 in k5800 in k5785 in k5779 in k5776 in k5749 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5719 in k5716 in k5713 in k5709 in k5705 in k5702 in k5699 in k5696 in ... */
static void C_ccall f_6839(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6839,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_6814(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* map-loop1776 in k5779 in k5776 in k5749 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5719 in k5716 in k5713 in k5709 in k5705 in k5702 in k5699 in k5696 in k5693 in k5654 in k5635 in ... */
static void C_fcall f_6848(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_6848,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6873,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:607: g1782 */
t4=((C_word*)t0)[4];
f_5755(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6871 in map-loop1776 in k5779 in k5776 in k5749 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5719 in k5716 in k5713 in k5709 in k5705 in k5702 in k5699 in k5696 in k5693 in k5654 in ... */
static void C_ccall f_6873(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6873,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_6848(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k6896 in k5776 in k5749 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5719 in k5716 in k5713 in k5709 in k5705 in k5702 in k5699 in k5696 in k5693 in k5654 in k5635 in k5632 in ... */
static void C_ccall f_6898(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_6898,c,av);}
a=C_alloc(12);
t2=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t1,t2);
t4=C_a_i_cons(&a,2,lf[321],t3);
t5=((C_word*)t0)[3];
f_5781(t5,C_a_i_list(&a,1,t4));}

/* map-loop1749 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5719 in k5716 in k5713 in k5709 in k5705 in k5702 in k5699 in k5696 in k5693 in k5654 in k5635 in k5632 in k5629 in k5626 in ... */
static void C_fcall f_6904(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_6904,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6929,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:606: g1755 */
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

/* k6927 in map-loop1749 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5719 in k5716 in k5713 in k5709 in k5705 in k5702 in k5699 in k5696 in k5693 in k5654 in k5635 in k5632 in k5629 in ... */
static void C_ccall f_6929(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6929,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_6904(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k6937 in k5731 in k5728 in k5725 in k5722 in k5719 in k5716 in k5713 in k5709 in k5705 in k5702 in k5699 in k5696 in k5693 in k5654 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5609 in ... */
static void C_ccall f_6939(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,3)))){
C_save_and_reclaim((void *)f_6939,c,av);}
a=C_alloc(17);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=((C_word*)((C_word*)t0)[2])[1];
t7=C_i_check_list_2(t6,lf[5]);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6949,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6951,a[2]=t4,a[3]=t10,a[4]=((C_word*)t0)[4],a[5]=t5,tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_6951(t12,t8,t6);}

/* k6947 in k6937 in k5731 in k5728 in k5725 in k5722 in k5719 in k5716 in k5713 in k5709 in k5705 in k5702 in k5699 in k5696 in k5693 in k5654 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in ... */
static void C_ccall f_6949(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6949,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_5736(t3,t2);}

/* map-loop1721 in k6937 in k5731 in k5728 in k5725 in k5722 in k5719 in k5716 in k5713 in k5709 in k5705 in k5702 in k5699 in k5696 in k5693 in k5654 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in ... */
static void C_fcall f_6951(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_6951,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6976,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:601: g1727 */
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

/* k6974 in map-loop1721 in k6937 in k5731 in k5728 in k5725 in k5722 in k5719 in k5716 in k5713 in k5709 in k5705 in k5702 in k5699 in k5696 in k5693 in k5654 in k5635 in k5632 in k5629 in k5626 in k5623 in ... */
static void C_ccall f_6976(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6976,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_6951(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k6984 in k5725 in k5722 in k5719 in k5716 in k5713 in k5709 in k5705 in k5702 in k5699 in k5696 in k5693 in k5654 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5609 in k5605 in k5601 in ... */
static void C_ccall f_6986(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_6986,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6990,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:578: proc */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=((C_word*)t0)[6];
av2[4]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k6988 in k6984 in k5725 in k5722 in k5719 in k5716 in k5713 in k5709 in k5705 in k5702 in k5699 in k5696 in k5693 in k5654 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5609 in k5605 in ... */
static void C_ccall f_6990(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6990,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
f_5730(2,av2);}}

/* doloop1641 in k5725 in k5722 in k5719 in k5716 in k5713 in k5709 in k5705 in k5702 in k5699 in k5696 in k5693 in k5654 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5609 in k5605 in k5601 in ... */
static void C_fcall f_6995(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,0,3)))){
C_save_and_reclaim_args((void *)trf_6995,3,t0,t1,t2);}
a=C_alloc(22);
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7006,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=*((C_word*)lf[328]+1);
t9=C_i_check_list_2(((C_word*)t0)[3],lf[5]);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7016,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7066,a[2]=t6,a[3]=t12,a[4]=t8,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_7066(t14,t10,((C_word*)t0)[3]);}
else{
t3=C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7104,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=t2,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* batch-driver.scm:587: chicken.compiler.support#check-and-open-input-file */
t5=*((C_word*)lf[332]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* k7004 in doloop1641 in k5725 in k5722 in k5719 in k5716 in k5713 in k5709 in k5705 in k5702 in k5699 in k5696 in k5693 in k5654 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5609 in k5605 in ... */
static void C_ccall f_7006(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7006,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k7014 in doloop1641 in k5725 in k5722 in k5719 in k5716 in k5713 in k5709 in k5705 in k5702 in k5699 in k5696 in k5693 in k5654 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5609 in k5605 in ... */
static void C_ccall f_7016(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_7016,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7020,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:584: scheme#reverse */
t3=*((C_word*)lf[329]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[4])[1];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k7018 in k7014 in doloop1641 in k5725 in k5722 in k5719 in k5716 in k5713 in k5709 in k5705 in k5702 in k5699 in k5696 in k5693 in k5654 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5609 in ... */
static void C_ccall f_7020(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_7020,c,av);}
a=C_alloc(18);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=*((C_word*)lf[328]+1);
t7=C_i_check_list_2(((C_word*)t0)[2],lf[5]);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7030,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7032,a[2]=t4,a[3]=t10,a[4]=t6,a[5]=t5,tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_7032(t12,t8,((C_word*)t0)[2]);}

/* k7028 in k7018 in k7014 in doloop1641 in k5725 in k5722 in k5719 in k5716 in k5713 in k5709 in k5705 in k5702 in k5699 in k5696 in k5693 in k5654 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in ... */
static void C_ccall f_7030(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7030,c,av);}
/* batch-driver.scm:583: scheme#append */
t2=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* map-loop1672 in k7018 in k7014 in doloop1641 in k5725 in k5722 in k5719 in k5716 in k5713 in k5709 in k5705 in k5702 in k5699 in k5696 in k5693 in k5654 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in ... */
static void C_fcall f_7032(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7032,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7057,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:585: g1678 */
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

/* k7055 in map-loop1672 in k7018 in k7014 in doloop1641 in k5725 in k5722 in k5719 in k5716 in k5713 in k5709 in k5705 in k5702 in k5699 in k5696 in k5693 in k5654 in k5635 in k5632 in k5629 in k5626 in k5623 in ... */
static void C_ccall f_7057(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7057,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_7032(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* map-loop1646 in doloop1641 in k5725 in k5722 in k5719 in k5716 in k5713 in k5709 in k5705 in k5702 in k5699 in k5696 in k5693 in k5654 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5609 in k5605 in ... */
static void C_fcall f_7066(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7066,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7091,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:583: g1652 */
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

/* k7089 in map-loop1646 in doloop1641 in k5725 in k5722 in k5719 in k5716 in k5713 in k5709 in k5705 in k5702 in k5699 in k5696 in k5693 in k5654 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5609 in ... */
static void C_ccall f_7091(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7091,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_7066(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k7102 in doloop1641 in k5725 in k5722 in k5719 in k5716 in k5713 in k5709 in k5705 in k5702 in k5699 in k5696 in k5693 in k5654 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5609 in k5605 in ... */
static void C_ccall f_7104(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,4)))){
C_save_and_reclaim((void *)f_7104,c,av);}
a=C_alloc(22);
t2=((C_word*)t0)[2];
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7107,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7114,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7119,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7147,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:588: ##sys#dynamic-wind */
t10=*((C_word*)lf[159]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t10;
av2[1]=t6;
av2[2]=t7;
av2[3]=t8;
av2[4]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}

/* k7105 in k7102 in doloop1641 in k5725 in k5722 in k5719 in k5716 in k5713 in k5709 in k5705 in k5702 in k5699 in k5696 in k5693 in k5654 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5609 in ... */
static void C_ccall f_7107(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7107,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_6995(t2,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[4]));}

/* a7113 in k7102 in doloop1641 in k5725 in k5722 in k5719 in k5716 in k5713 in k5709 in k5705 in k5702 in k5699 in k5696 in k5693 in k5654 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5609 in ... */
static void C_ccall f_7114(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7114,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[158]+1));
t3=C_mutate((C_word*)lf[158]+1 /* (set! ##sys#current-source-filename ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a7118 in k7102 in doloop1641 in k5725 in k5722 in k5719 in k5716 in k5713 in k5709 in k5705 in k5702 in k5699 in k5696 in k5693 in k5654 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5609 in ... */
static void C_ccall f_7119(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_7119,c,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7125,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_7125(t5,t1);}

/* loop in a7118 in k7102 in doloop1641 in k5725 in k5722 in k5719 in k5716 in k5713 in k5709 in k5705 in k5702 in k5699 in k5696 in k5693 in k5654 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in ... */
static void C_fcall f_7125(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_7125,2,t0,t1);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7129,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* batch-driver.scm:590: chicken.compiler.support#read/source-info */
t3=*((C_word*)lf[331]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k7127 in loop in a7118 in k7102 in doloop1641 in k5725 in k5722 in k5719 in k5716 in k5713 in k5709 in k5705 in k5702 in k5699 in k5696 in k5693 in k5654 in k5635 in k5632 in k5629 in k5626 in k5623 in ... */
static void C_ccall f_7129(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_7129,c,av);}
a=C_alloc(3);
if(C_truep(C_eofp(t1))){
/* batch-driver.scm:592: chicken.compiler.support#close-checked-input-file */
t2=*((C_word*)lf[330]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
t2=C_a_i_cons(&a,2,t1,((C_word*)((C_word*)t0)[5])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[5])+1,t2);
/* batch-driver.scm:595: loop */
t4=((C_word*)((C_word*)t0)[6])[1];
f_7125(t4,((C_word*)t0)[2]);}}

/* a7146 in k7102 in doloop1641 in k5725 in k5722 in k5719 in k5716 in k5713 in k5709 in k5705 in k5702 in k5699 in k5696 in k5693 in k5654 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5609 in ... */
static void C_ccall f_7147(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7147,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[158]+1));
t3=C_mutate((C_word*)lf[158]+1 /* (set! ##sys#current-source-filename ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k7152 in k5719 in k5716 in k5713 in k5709 in k5705 in k5702 in k5699 in k5696 in k5693 in k5654 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5609 in k5605 in k5601 in k5598 in k5594 in ... */
static void C_ccall f_7154(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_7154,c,av);}
a=C_alloc(8);
t2=C_a_i_list1(&a,1,((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7162,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:573: collect-options */
t4=((C_word*)((C_word*)t0)[4])[1];
f_5189(t4,t3,lf[334]);}

/* k7160 in k7152 in k5719 in k5716 in k5713 in k5709 in k5705 in k5702 in k5699 in k5696 in k5693 in k5654 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5609 in k5605 in k5601 in k5598 in ... */
static void C_ccall f_7162(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7162,c,av);}
/* batch-driver.scm:570: scheme#append */
t2=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k7178 in k5629 in k5626 in k5623 in k5620 in k5609 in k5605 in k5601 in k5598 in k5594 in k5590 in k5587 in k5584 in k5581 in k5573 in k5569 in k5546 in k5543 in k5536 in k5530 in k5527 in k5521 in ... */
static void C_ccall f_7180(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_7180,c,av);}
a=C_alloc(5);
t2=C_set_block_item(lf[312] /* chicken.compiler.core#emit-profile */,0,C_SCHEME_TRUE);
t3=C_mutate((C_word*)lf[352]+1 /* (set! chicken.compiler.core#profiled-procedures ...) */,lf[353]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7186,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[3])){
/* batch-driver.scm:532: scheme#append */
t5=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=*((C_word*)lf[357]+1);
av2[4]=lf[358];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
/* batch-driver.scm:532: scheme#append */
t5=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=*((C_word*)lf[357]+1);
av2[4]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}}

/* k7184 in k7178 in k5629 in k5626 in k5623 in k5620 in k5609 in k5605 in k5601 in k5598 in k5594 in k5590 in k5587 in k5584 in k5581 in k5573 in k5569 in k5546 in k5543 in k5536 in k5530 in k5527 in ... */
static void C_ccall f_7186(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_7186,c,av);}
a=C_alloc(6);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
if(C_truep(((C_word*)t0)[3])){
t3=C_a_i_list(&a,1,lf[354]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9230,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t4;
av2[2]=*((C_word*)lf[184]+1);
av2[3]=lf[355];
av2[4]=t3;
C_apply(5,av2);}}
else{
t3=C_a_i_list(&a,1,lf[356]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9236,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t4;
av2[2]=*((C_word*)lf[184]+1);
av2[3]=lf[355];
av2[4]=t3;
C_apply(5,av2);}}}

/* k7233 in k5605 in k5601 in k5598 in k5594 in k5590 in k5587 in k5584 in k5581 in k5573 in k5569 in k5546 in k5543 in k5536 in k5530 in k5527 in k5521 in k5518 in k5515 in k5512 in k5509 in k5506 in ... */
static void C_ccall f_7235(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7235,c,av);}
/* batch-driver.scm:510: arg-val */
f_5104(((C_word*)t0)[3],t1);}

/* k7240 in k5601 in k5598 in k5594 in k5590 in k5587 in k5584 in k5581 in k5573 in k5569 in k5546 in k5543 in k5536 in k5530 in k5527 in k5521 in k5518 in k5515 in k5512 in k5509 in k5506 in k5503 in ... */
static void C_ccall f_7242(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7242,c,av);}
/* batch-driver.scm:507: arg-val */
f_5104(((C_word*)t0)[3],t1);}

/* k7256 in map-loop1582 in k7259 in k5594 in k5590 in k5587 in k5584 in k5581 in k5573 in k5569 in k5546 in k5543 in k5536 in k5530 in k5527 in k5521 in k5518 in k5515 in k5512 in k5509 in k5506 in k5503 in ... */
static void C_ccall f_7258(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_7258,c,av);}
a=C_alloc(9);
t2=C_a_i_list(&a,2,lf[370],t1);
t3=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t3);
t5=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
t6=((C_word*)((C_word*)t0)[3])[1];
f_7269(t6,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k7259 in k5594 in k5590 in k5587 in k5584 in k5581 in k5573 in k5569 in k5546 in k5543 in k5536 in k5530 in k5527 in k5521 in k5518 in k5515 in k5512 in k5509 in k5506 in k5503 in k5500 in k5497 in ... */
static void C_ccall f_7261(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_7261,c,av);}
a=C_alloc(11);
t2=C_i_check_list_2(t1,lf[5]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7267,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7269,a[2]=((C_word*)t0)[4],a[3]=t5,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_7269(t7,t3,t1);}

/* k7265 in k7259 in k5594 in k5590 in k5587 in k5584 in k5581 in k5573 in k5569 in k5546 in k5543 in k5536 in k5530 in k5527 in k5521 in k5518 in k5515 in k5512 in k5509 in k5506 in k5503 in k5500 in ... */
static void C_ccall f_7267(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7267,c,av);}
/* batch-driver.scm:498: scheme#append */
t2=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* map-loop1582 in k7259 in k5594 in k5590 in k5587 in k5584 in k5581 in k5573 in k5569 in k5546 in k5543 in k5536 in k5530 in k5527 in k5521 in k5518 in k5515 in k5512 in k5509 in k5506 in k5503 in k5500 in ... */
static void C_fcall f_7269(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7269,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7258,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:500: scheme#string->symbol */
t5=*((C_word*)lf[322]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* a7302 in k5587 in k5584 in k5581 in k5573 in k5569 in k5546 in k5543 in k5536 in k5530 in k5527 in k5521 in k5518 in k5515 in k5512 in k5509 in k5506 in k5503 in k5500 in k5497 in k5494 in k5489 in ... */
static void C_ccall f_7303(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_7303,c,av);}
a=C_alloc(10);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7310,a[2]=t5,a[3]=t6,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:492: chicken.string#string-split */
t8=*((C_word*)lf[373]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=t2;
av2[3]=lf[374];
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* k7308 in a7302 in k5587 in k5584 in k5581 in k5573 in k5569 in k5546 in k5543 in k5536 in k5530 in k5527 in k5521 in k5518 in k5515 in k5512 in k5509 in k5506 in k5503 in k5500 in k5497 in k5494 in ... */
static void C_ccall f_7310(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_7310,c,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7315,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_7315(t5,((C_word*)t0)[4],t1);}

/* map-loop1556 in k7308 in a7302 in k5587 in k5584 in k5581 in k5573 in k5569 in k5546 in k5543 in k5536 in k5530 in k5527 in k5521 in k5518 in k5515 in k5512 in k5509 in k5506 in k5503 in k5500 in k5497 in ... */
static void C_fcall f_7315(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7315,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7340,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:492: g1562 */
t4=*((C_word*)lf[322]+1);{
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

/* k7338 in map-loop1556 in k7308 in a7302 in k5587 in k5584 in k5581 in k5573 in k5569 in k5546 in k5543 in k5536 in k5530 in k5527 in k5521 in k5518 in k5515 in k5512 in k5509 in k5506 in k5503 in k5500 in ... */
static void C_ccall f_7340(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7340,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_7315(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k7349 in k5587 in k5584 in k5581 in k5573 in k5569 in k5546 in k5543 in k5536 in k5530 in k5527 in k5521 in k5518 in k5515 in k5512 in k5509 in k5506 in k5503 in k5500 in k5497 in k5494 in k5489 in ... */
static void C_ccall f_7351(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7351,c,av);}
/* batch-driver.scm:491: append-map */
f_2931(((C_word*)t0)[2],((C_word*)t0)[3],t1,C_SCHEME_END_OF_LIST);}

/* k7356 in k5584 in k5581 in k5573 in k5569 in k5546 in k5543 in k5536 in k5530 in k5527 in k5521 in k5518 in k5515 in k5512 in k5509 in k5506 in k5503 in k5500 in k5497 in k5494 in k5489 in k5486 in ... */
static void C_ccall f_7358(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7358,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_5589(t3,t2);}

/* a7371 in k5581 in k5573 in k5569 in k5546 in k5543 in k5536 in k5530 in k5527 in k5521 in k5518 in k5515 in k5512 in k5509 in k5506 in k5503 in k5500 in k5497 in k5494 in k5489 in k5486 in k5483 in ... */
static void C_ccall f_7372(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_7372,c,av);}
a=C_alloc(10);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7379,a[2]=t5,a[3]=t6,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:484: chicken.string#string-split */
t8=*((C_word*)lf[373]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=t2;
av2[3]=lf[377];
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* k7377 in a7371 in k5581 in k5573 in k5569 in k5546 in k5543 in k5536 in k5530 in k5527 in k5521 in k5518 in k5515 in k5512 in k5509 in k5506 in k5503 in k5500 in k5497 in k5494 in k5489 in k5486 in ... */
static void C_ccall f_7379(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_7379,c,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7384,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_7384(t5,((C_word*)t0)[4],t1);}

/* map-loop1525 in k7377 in a7371 in k5581 in k5573 in k5569 in k5546 in k5543 in k5536 in k5530 in k5527 in k5521 in k5518 in k5515 in k5512 in k5509 in k5506 in k5503 in k5500 in k5497 in k5494 in k5489 in ... */
static void C_fcall f_7384(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7384,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7409,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:484: g1531 */
t4=*((C_word*)lf[322]+1);{
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

/* k7407 in map-loop1525 in k7377 in a7371 in k5581 in k5573 in k5569 in k5546 in k5543 in k5536 in k5530 in k5527 in k5521 in k5518 in k5515 in k5512 in k5509 in k5506 in k5503 in k5500 in k5497 in k5494 in ... */
static void C_ccall f_7409(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7409,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_7384(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k7418 in k5581 in k5573 in k5569 in k5546 in k5543 in k5536 in k5530 in k5527 in k5521 in k5518 in k5515 in k5512 in k5509 in k5506 in k5503 in k5500 in k5497 in k5494 in k5489 in k5486 in k5483 in ... */
static void C_ccall f_7420(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7420,c,av);}
/* batch-driver.scm:483: append-map */
f_2931(((C_word*)t0)[2],((C_word*)t0)[3],t1,C_SCHEME_END_OF_LIST);}

/* for-each-loop1502 in k5546 in k5543 in k5536 in k5530 in k5527 in k5521 in k5518 in k5515 in k5512 in k5509 in k5506 in k5503 in k5500 in k5497 in k5494 in k5489 in k5486 in k5483 in k5480 in k5477 in k5474 in ... */
static void C_fcall f_7422(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,5)))){
C_save_and_reclaim_args((void *)trf_7422,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7432,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5553,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:474: ##sys#resolve-include-filename */
t6=*((C_word*)lf[278]+1);{
C_word av2[6];
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
av2[5]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t6+1)))(6,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k7430 in for-each-loop1502 in k5546 in k5543 in k5536 in k5530 in k5527 in k5521 in k5518 in k5515 in k5512 in k5509 in k5506 in k5503 in k5500 in k5497 in k5494 in k5489 in k5486 in k5483 in k5480 in k5477 in ... */
static void C_ccall f_7432(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7432,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_7422(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* for-each-loop1139 in k5530 in k5527 in k5521 in k5518 in k5515 in k5512 in k5509 in k5506 in k5503 in k5500 in k5497 in k5494 in k5489 in k5486 in k5483 in k5480 in k5477 in k5474 in k5469 in k5464 in k5459 in ... */
static void C_fcall f_7445(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_7445,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7455,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:464: g1140 */
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

/* k7453 in for-each-loop1139 in k5530 in k5527 in k5521 in k5518 in k5515 in k5512 in k5509 in k5506 in k5503 in k5500 in k5497 in k5494 in k5489 in k5486 in k5483 in k5480 in k5477 in k5474 in k5469 in k5464 in ... */
static void C_ccall f_7455(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7455,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_7445(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* a7467 in k5527 in k5521 in k5518 in k5515 in k5512 in k5509 in k5506 in k5503 in k5500 in k5497 in k5494 in k5489 in k5486 in k5483 in k5480 in k5477 in k5474 in k5469 in k5464 in k5459 in k5454 in ... */
static void C_ccall f_7468(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7468,c,av);}
t3=*((C_word*)lf[373]+1);
/* batch-driver.scm:466: g1492 */
t4=*((C_word*)lf[373]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=lf[383];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k7474 in k5527 in k5521 in k5518 in k5515 in k5512 in k5509 in k5506 in k5503 in k5500 in k5497 in k5494 in k5489 in k5486 in k5483 in k5480 in k5477 in k5474 in k5469 in k5464 in k5459 in k5454 in ... */
static void C_ccall f_7476(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7476,c,av);}
/* batch-driver.scm:466: append-map */
f_2931(((C_word*)t0)[2],((C_word*)t0)[3],t1,C_SCHEME_END_OF_LIST);}

/* for-each-loop1129 in k5521 in k5518 in k5515 in k5512 in k5509 in k5506 in k5503 in k5500 in k5497 in k5494 in k5489 in k5486 in k5483 in k5480 in k5477 in k5474 in k5469 in k5464 in k5459 in k5454 in k5449 in ... */
static void C_fcall f_7478(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_7478,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7488,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:461: g1130 */
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

/* k7486 in for-each-loop1129 in k5521 in k5518 in k5515 in k5512 in k5509 in k5506 in k5503 in k5500 in k5497 in k5494 in k5489 in k5486 in k5483 in k5480 in k5477 in k5474 in k5469 in k5464 in k5459 in k5454 in ... */
static void C_ccall f_7488(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7488,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_7478(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* a7500 in k5518 in k5515 in k5512 in k5509 in k5506 in k5503 in k5500 in k5497 in k5494 in k5489 in k5486 in k5483 in k5480 in k5477 in k5474 in k5469 in k5464 in k5459 in k5454 in k5449 in k5446 in ... */
static void C_ccall f_7501(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7501,c,av);}
t3=*((C_word*)lf[373]+1);
/* batch-driver.scm:463: g1477 */
t4=*((C_word*)lf[373]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=lf[385];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k7507 in k5518 in k5515 in k5512 in k5509 in k5506 in k5503 in k5500 in k5497 in k5494 in k5489 in k5486 in k5483 in k5480 in k5477 in k5474 in k5469 in k5464 in k5459 in k5454 in k5449 in k5446 in ... */
static void C_ccall f_7509(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7509,c,av);}
/* batch-driver.scm:463: append-map */
f_2931(((C_word*)t0)[2],((C_word*)t0)[3],t1,C_SCHEME_END_OF_LIST);}

/* k7520 in for-each-loop1432 in k5512 in k5509 in k5506 in k5503 in k5500 in k5497 in k5494 in k5489 in k5486 in k5483 in k5480 in k5477 in k5474 in k5469 in k5464 in k5459 in k5454 in k5449 in k5446 in k5443 in ... */
static void C_ccall f_7522(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7522,c,av);}
/* batch-driver.scm:451: chicken.compiler.support#mark-variable */
t2=*((C_word*)lf[13]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[389];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k7529 in k5512 in k5509 in k5506 in k5503 in k5500 in k5497 in k5494 in k5489 in k5486 in k5483 in k5480 in k5477 in k5474 in k5469 in k5464 in k5459 in k5454 in k5449 in k5446 in k5443 in k5440 in ... */
static void C_ccall f_7531(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_7531,c,av);}
a=C_alloc(5);
t2=*((C_word*)lf[78]+1);
t3=C_i_check_list_2(*((C_word*)lf[78]+1),lf[10]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7547,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_7547(t7,((C_word*)t0)[2],*((C_word*)lf[78]+1));}

/* k7534 in for-each-loop1451 in k7529 in k5512 in k5509 in k5506 in k5503 in k5500 in k5497 in k5494 in k5489 in k5486 in k5483 in k5480 in k5477 in k5474 in k5469 in k5464 in k5459 in k5454 in k5449 in k5446 in ... */
static void C_ccall f_7536(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7536,c,av);}
/* batch-driver.scm:456: chicken.compiler.support#mark-variable */
t2=*((C_word*)lf[13]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[389];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* for-each-loop1451 in k7529 in k5512 in k5509 in k5506 in k5503 in k5500 in k5497 in k5494 in k5489 in k5486 in k5483 in k5480 in k5477 in k5474 in k5469 in k5464 in k5459 in k5454 in k5449 in k5446 in k5443 in ... */
static void C_fcall f_7547(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_7547,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7557,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7536,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:455: chicken.compiler.support#mark-variable */
t6=*((C_word*)lf[13]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
av2[3]=lf[390];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k7555 in for-each-loop1451 in k7529 in k5512 in k5509 in k5506 in k5503 in k5500 in k5497 in k5494 in k5489 in k5486 in k5483 in k5480 in k5477 in k5474 in k5469 in k5464 in k5459 in k5454 in k5449 in k5446 in ... */
static void C_ccall f_7557(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7557,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_7547(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* for-each-loop1432 in k5512 in k5509 in k5506 in k5503 in k5500 in k5497 in k5494 in k5489 in k5486 in k5483 in k5480 in k5477 in k5474 in k5469 in k5464 in k5459 in k5454 in k5449 in k5446 in k5443 in k5440 in ... */
static void C_fcall f_7570(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_7570,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7580,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7522,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:450: chicken.compiler.support#mark-variable */
t6=*((C_word*)lf[13]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
av2[3]=lf[390];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k7578 in for-each-loop1432 in k5512 in k5509 in k5506 in k5503 in k5500 in k5497 in k5494 in k5489 in k5486 in k5483 in k5480 in k5477 in k5474 in k5469 in k5464 in k5459 in k5454 in k5449 in k5446 in k5443 in ... */
static void C_ccall f_7580(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7580,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_7570(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k7623 in k5489 in k5486 in k5483 in k5480 in k5477 in k5474 in k5469 in k5464 in k5459 in k5454 in k5449 in k5446 in k5443 in k5440 in k5437 in k5434 in k5431 in k5428 in k5425 in k5422 in k5419 in ... */
static void C_ccall f_7625(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7625,c,av);}
a=C_alloc(12);
t2=C_i_check_list_2(t1,lf[5]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7631,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7633,a[2]=((C_word*)t0)[4],a[3]=t5,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_7633(t7,t3,t1);}

/* k7629 in k7623 in k5489 in k5486 in k5483 in k5480 in k5477 in k5474 in k5469 in k5464 in k5459 in k5454 in k5449 in k5446 in k5443 in k5440 in k5437 in k5434 in k5431 in k5428 in k5425 in k5422 in ... */
static void C_ccall f_7631(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7631,c,av);}
/* batch-driver.scm:432: scheme#append */
t2=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=*((C_word*)lf[132]+1);
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* map-loop1404 in k7623 in k5489 in k5486 in k5483 in k5480 in k5477 in k5474 in k5469 in k5464 in k5459 in k5454 in k5449 in k5446 in k5443 in k5440 in k5437 in k5434 in k5431 in k5428 in k5425 in k5422 in ... */
static void C_fcall f_7633(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7633,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7658,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:432: g1410 */
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

/* k7656 in map-loop1404 in k7623 in k5489 in k5486 in k5483 in k5480 in k5477 in k5474 in k5469 in k5464 in k5459 in k5454 in k5449 in k5446 in k5443 in k5440 in k5437 in k5434 in k5431 in k5428 in k5425 in ... */
static void C_ccall f_7658(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7658,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_7633(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k7668 in k5486 in k5483 in k5480 in k5477 in k5474 in k5469 in k5464 in k5459 in k5454 in k5449 in k5446 in k5443 in k5440 in k5437 in k5434 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in ... */
static void C_ccall f_7670(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7670,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7673,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:426: chicken.base#case-sensitive */
t3=*((C_word*)lf[408]+1);{
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

/* k7671 in k7668 in k5486 in k5483 in k5480 in k5477 in k5474 in k5469 in k5464 in k5459 in k5454 in k5449 in k5446 in k5443 in k5440 in k5437 in k5434 in k5431 in k5428 in k5425 in k5422 in k5419 in ... */
static void C_ccall f_7673(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7673,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7676,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:427: chicken.base#keyword-style */
t3=*((C_word*)lf[406]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[407];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k7674 in k7671 in k7668 in k5486 in k5483 in k5480 in k5477 in k5474 in k5469 in k5464 in k5459 in k5454 in k5449 in k5446 in k5443 in k5440 in k5437 in k5434 in k5431 in k5428 in k5425 in k5422 in ... */
static void C_ccall f_7676(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7676,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7679,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:428: chicken.base#parentheses-synonyms */
t3=*((C_word*)lf[405]+1);{
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

/* k7677 in k7674 in k7671 in k7668 in k5486 in k5483 in k5480 in k5477 in k5474 in k5469 in k5464 in k5459 in k5454 in k5449 in k5446 in k5443 in k5440 in k5437 in k5434 in k5431 in k5428 in k5425 in ... */
static void C_ccall f_7679(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7679,c,av);}
/* batch-driver.scm:429: chicken.base#symbol-escape */
t2=*((C_word*)lf[404]+1);{
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

/* k7685 in k5483 in k5480 in k5477 in k5474 in k5469 in k5464 in k5459 in k5454 in k5449 in k5446 in k5443 in k5440 in k5437 in k5434 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in ... */
static void C_ccall f_7687(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7687,c,av);}
/* batch-driver.scm:423: chicken.base#symbol-escape */
t2=*((C_word*)lf[404]+1);{
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

/* k7693 in k5480 in k5477 in k5474 in k5469 in k5464 in k5459 in k5454 in k5449 in k5446 in k5443 in k5440 in k5437 in k5434 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in ... */
static void C_ccall f_7695(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7695,c,av);}
/* batch-driver.scm:420: chicken.base#parentheses-synonyms */
t2=*((C_word*)lf[405]+1);{
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

/* k7699 in k5477 in k5474 in k5469 in k5464 in k5459 in k5454 in k5449 in k5446 in k5443 in k5440 in k5437 in k5434 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in ... */
static void C_ccall f_7701(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7701,c,av);}
if(C_truep(C_i_string_equal_p(lf[414],t1))){
/* batch-driver.scm:413: chicken.base#keyword-style */
t2=*((C_word*)lf[406]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[415];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
if(C_truep(C_u_i_string_equal_p(lf[416],t1))){
/* batch-driver.scm:414: chicken.base#keyword-style */
t2=*((C_word*)lf[406]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[407];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
if(C_truep(C_u_i_string_equal_p(lf[417],t1))){
/* batch-driver.scm:415: chicken.base#keyword-style */
t2=*((C_word*)lf[406]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[418];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
/* batch-driver.scm:416: chicken.compiler.support#quit-compiling */
t2=*((C_word*)lf[80]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[419];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}}}

/* k7732 in k5474 in k5469 in k5464 in k5459 in k5454 in k5449 in k5446 in k5443 in k5440 in k5437 in k5434 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in ... */
static void C_ccall f_7734(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7734,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7737,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:409: chicken.platform#register-feature! */
t3=*((C_word*)lf[133]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[420];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k7735 in k7732 in k5474 in k5469 in k5464 in k5459 in k5454 in k5449 in k5446 in k5443 in k5440 in k5437 in k5434 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in ... */
static void C_ccall f_7737(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7737,c,av);}
/* batch-driver.scm:410: chicken.base#case-sensitive */
t2=*((C_word*)lf[408]+1);{
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

/* k7742 in k5469 in k5464 in k5459 in k5454 in k5449 in k5446 in k5443 in k5440 in k5437 in k5434 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in k5401 in ... */
static void C_ccall f_7744(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_7744,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7747,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:404: scheme#string->number */
t3=*((C_word*)lf[112]+1);{
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

/* k7745 in k7742 in k5469 in k5464 in k5459 in k5454 in k5449 in k5446 in k5443 in k5440 in k5437 in k5434 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in ... */
static void C_ccall f_7747(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_7747,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7750,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=C_mutate((C_word*)lf[170]+1 /* (set! chicken.compiler.core#unroll-limit ...) */,t1);
t4=((C_word*)t0)[2];
f_5476(t4,t3);}
else{
/* batch-driver.scm:405: chicken.compiler.support#quit-compiling */
t3=*((C_word*)lf[80]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[422];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k7748 in k7745 in k7742 in k5469 in k5464 in k5459 in k5454 in k5449 in k5446 in k5443 in k5440 in k5437 in k5434 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in ... */
static void C_ccall f_7750(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7750,c,av);}
t2=C_mutate((C_word*)lf[170]+1 /* (set! chicken.compiler.core#unroll-limit ...) */,t1);
t3=((C_word*)t0)[2];
f_5476(t3,t2);}

/* k7755 in k5464 in k5459 in k5454 in k5449 in k5446 in k5443 in k5440 in k5437 in k5434 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in k5401 in k5398 in ... */
static void C_ccall f_7757(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_7757,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7760,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:398: scheme#string->number */
t3=*((C_word*)lf[112]+1);{
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

/* k7758 in k7755 in k5464 in k5459 in k5454 in k5449 in k5446 in k5443 in k5440 in k5437 in k5434 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in k5401 in ... */
static void C_ccall f_7760(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_7760,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7763,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=C_mutate((C_word*)lf[169]+1 /* (set! chicken.compiler.core#inline-max-size ...) */,t1);
t4=((C_word*)t0)[2];
f_5471(t4,t3);}
else{
/* batch-driver.scm:399: chicken.compiler.support#quit-compiling */
t3=*((C_word*)lf[80]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[423];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k7761 in k7758 in k7755 in k5464 in k5459 in k5454 in k5449 in k5446 in k5443 in k5440 in k5437 in k5434 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in ... */
static void C_ccall f_7763(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7763,c,av);}
t2=C_mutate((C_word*)lf[169]+1 /* (set! chicken.compiler.core#inline-max-size ...) */,t1);
t3=((C_word*)t0)[2];
f_5471(t3,t2);}

/* k7768 in k5459 in k5454 in k5449 in k5446 in k5443 in k5440 in k5437 in k5434 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in k5401 in k5398 in k5395 in ... */
static void C_ccall f_7770(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7770,c,av);}
t2=C_mutate((C_word*)lf[237]+1 /* (set! chicken.compiler.core#types-output-file ...) */,t1);
t3=((C_word*)t0)[2];
f_5466(t3,t2);}

/* k7774 in k5454 in k5449 in k5446 in k5443 in k5440 in k5437 in k5434 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in k5401 in k5398 in k5395 in k5392 in ... */
static void C_ccall f_7776(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7776,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_5461(t3,t2);}

/* k7778 in k5449 in k5446 in k5443 in k5440 in k5437 in k5434 in k5431 in k5428 in k5425 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in k5401 in k5398 in k5395 in k5392 in k5389 in ... */
static void C_ccall f_7780(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7780,c,av);}
t2=C_mutate((C_word*)lf[195]+1 /* (set! chicken.compiler.core#emit-link-file ...) */,t1);
t3=((C_word*)t0)[2];
f_5456(t3,t2);}

/* k7810 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in k5401 in k5398 in k5395 in k5392 in k5389 in k5386 in k5380 in k5354 in k5351 in k5344 in k5341 in k5338 in k4962 in k4937 in k4932 in ... */
static void C_ccall f_7812(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7812,c,av);}
t2=C_set_block_item(lf[203] /* ##sys#warnings-enabled */,0,C_SCHEME_FALSE);
t3=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t4=((C_word*)t0)[3];
f_5424(t4,t3);}

/* map-loop1335 in k5380 in k5354 in k5351 in k5344 in k5341 in k5338 in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in ... */
static void C_fcall f_7863(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_7863,3,t0,t1,t2);}
a=C_alloc(7);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5373,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* batch-driver.scm:340: scheme#string->symbol */
t5=*((C_word*)lf[322]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7899 in k5351 in k5344 in k5341 in k5338 in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in ... */
static void C_ccall f_7901(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7901,c,av);}
/* batch-driver.scm:336: chicken.base#exit */
t2=*((C_word*)lf[200]+1);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a7905 in k5344 in k5341 in k5338 in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in ... */
static void C_ccall f_7906(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_7906,c,av);}
a=C_alloc(10);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7922,a[2]=t5,a[3]=t6,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* ##sys#string->list */
t8=*((C_word*)lf[460]+1);{
C_word *av2=av;
av2[0]=t8;
av2[1]=t7;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}

/* k7920 in a7905 in k5344 in k5341 in k5338 in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in ... */
static void C_ccall f_7922(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_7922,c,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7927,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_7927(t5,((C_word*)t0)[4],t1);}

/* map-loop1307 in k7920 in a7905 in k5344 in k5341 in k5338 in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in ... */
static void C_fcall f_7927(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_7927,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7952,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_a_i_string(&a,1,t4);
/* batch-driver.scm:331: scheme#string->symbol */
t6=*((C_word*)lf[322]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t3;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7950 in map-loop1307 in k7920 in a7905 in k5344 in k5341 in k5338 in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in ... */
static void C_ccall f_7952(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7952,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_7927(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k7961 in k5344 in k5341 in k5338 in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in ... */
static void C_ccall f_7963(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7963,c,av);}
/* batch-driver.scm:329: append-map */
f_2931(((C_word*)t0)[2],((C_word*)t0)[3],t1,C_SCHEME_END_OF_LIST);}

/* k7975 in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in ... */
static void C_ccall f_7977(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7977,c,av);}
t2=C_mutate((C_word*)lf[313]+1 /* (set! chicken.compiler.core#unit-name ...) */,t1);
t3=((C_word*)t0)[2];
f_5340(t3,t2);}

/* k7979 in k4962 in k4937 in k4932 in k4929 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in ... */
static void C_ccall f_7981(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7981,c,av);}
/* batch-driver.scm:321: scheme#string->symbol */
t2=*((C_word*)lf[322]+1);{
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

/* map-loop1058 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in ... */
static void C_fcall f_7998(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7998,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8023,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:227: g1064 */
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

/* k8021 in map-loop1058 in k4923 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in ... */
static void C_ccall f_8023(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8023,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_7998(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k8032 in k4917 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in ... */
static void C_ccall f_8034(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8034,c,av);}
if(C_truep(t1)){
/* batch-driver.scm:228: ##sys#split-path */
t2=*((C_word*)lf[465]+1);{
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
else{
/* batch-driver.scm:228: ##sys#split-path */
t2=*((C_word*)lf[465]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[466];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* g1051 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in ... */
static void C_fcall f_8038(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_8038,3,t0,t1,t2);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8042,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:221: option-arg */
f_4858(t3,t2);}

/* k8040 in g1051 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in ... */
static void C_ccall f_8042(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8042,c,av);}
if(C_truep(C_i_symbolp(t1))){
/* batch-driver.scm:223: scheme#symbol->string */
t2=*((C_word*)lf[267]+1);{
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
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k8064 in k4912 in k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in ... */
static void C_ccall f_8066(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8066,c,av);}
/* batch-driver.scm:226: chicken.pathname#make-pathname */
t2=*((C_word*)lf[265]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_FALSE;
av2[3]=t1;
av2[4]=lf[470];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k8090 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 */
static void C_ccall f_8092(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(30,c,2)))){
C_save_and_reclaim((void *)f_8092,c,av);}
a=C_alloc(30);
t2=C_a_i_cons(&a,2,lf[89],t1);
t3=C_a_i_list(&a,1,t2);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4914,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t5,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t7=C_a_i_cons(&a,2,lf[473],*((C_word*)lf[474]+1));
if(C_truep(*((C_word*)lf[83]+1))){
t8=t6;
f_4914(t8,C_a_i_cons(&a,2,t7,C_SCHEME_END_OF_LIST));}
else{
t8=C_a_i_cons(&a,2,lf[475],*((C_word*)lf[476]+1));
t9=C_a_i_list(&a,1,t8);
t10=t6;
f_4914(t10,C_a_i_cons(&a,2,t7,t9));}}

/* k8098 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 */
static void C_fcall f_8100(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_8100,2,t0,t1);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8107,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(*((C_word*)lf[480]+1))){
if(C_truep(C_i_not(((C_word*)t0)[4]))){
if(C_truep(C_i_not(((C_word*)t0)[5]))){
if(C_truep(C_i_not(*((C_word*)lf[83]+1)))){
t3=C_i_not(*((C_word*)lf[481]+1));
t4=t2;
f_8107(t4,(C_truep(t3)?t3:C_eqp(*((C_word*)lf[481]+1),lf[482])));}
else{
t3=t2;
f_8107(t3,C_SCHEME_FALSE);}}
else{
t3=t2;
f_8107(t3,C_SCHEME_FALSE);}}
else{
t3=t2;
f_8107(t3,C_SCHEME_FALSE);}}
else{
t3=t2;
f_8107(t3,C_SCHEME_FALSE);}}

/* k8105 in k8098 in k4902 in k4899 in k4896 in k4887 in chicken.compiler.batch-driver#compile-source-file in k2728 in k2725 in k2722 in k2719 in k2716 in k2713 in k2710 in k2707 in k2704 in k2701 in k2698 in k2695 in k2692 in k2689 in k2686 in ... */
static void C_fcall f_8107(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,5)))){
C_save_and_reclaim_args((void *)trf_8107,2,t0,t1);}
if(C_truep(t1)){
/* batch-driver.scm:198: scheme#append */
t2=*((C_word*)lf[4]+1);{
C_word av2[6];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[478]+1);
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[4];
av2[5]=lf[479];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}
else{
/* batch-driver.scm:198: scheme#append */
t2=*((C_word*)lf[4]+1);{
C_word av2[6];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[478]+1);
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[4];
av2[5]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_batch_2ddriver_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("batch-driver"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_batch_2ddriver_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(3132))){
C_save(t1);
C_rereclaim2(3132*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,490);
lf[0]=C_h_intern(&lf[0],12, C_text("batch-driver"));
lf[1]=C_h_intern(&lf[1],30, C_text("chicken.compiler.batch-driver#"));
lf[3]=C_h_intern(&lf[3],5, C_text("foldr"));
lf[4]=C_h_intern(&lf[4],13, C_text("scheme#append"));
lf[5]=C_h_intern(&lf[5],3, C_text("map"));
lf[7]=C_h_intern(&lf[7],12, C_text("scheme#null\077"));
lf[9]=C_h_intern(&lf[9],39, C_text("chicken.compiler.core#standard-bindings"));
lf[10]=C_h_intern(&lf[10],8, C_text("for-each"));
lf[11]=C_h_intern(&lf[11],39, C_text("chicken.compiler.core#extended-bindings"));
lf[12]=C_h_intern(&lf[12],39, C_text("chicken.compiler.core#internal-bindings"));
lf[13]=C_h_intern(&lf[13],38, C_text("chicken.compiler.support#mark-variable"));
lf[14]=C_h_intern(&lf[14],20, C_text("##compiler#intrinsic"));
lf[15]=C_h_intern(&lf[15],8, C_text("internal"));
lf[16]=C_h_intern(&lf[16],8, C_text("extended"));
lf[17]=C_h_intern(&lf[17],8, C_text("standard"));
lf[19]=C_h_intern(&lf[19],14, C_text("scheme#newline"));
lf[20]=C_h_intern(&lf[20],21, C_text("##sys#standard-output"));
lf[21]=C_h_intern(&lf[21],6, C_text("printf"));
lf[22]=C_h_intern(&lf[22],11, C_text("##sys#print"));
lf[23]=C_h_intern(&lf[23],40, C_text("chicken.compiler.support#node-parameters"));
lf[24]=C_h_intern(&lf[24],35, C_text("chicken.compiler.support#node-class"));
lf[25]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006\011pval="));
lf[26]=C_h_intern(&lf[26],7, C_text("unknown"));
lf[27]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005\011val="));
lf[28]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006\011lval="));
lf[29]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005\011css="));
lf[30]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010\011drvars="));
lf[31]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006\011refs="));
lf[32]=C_h_intern(&lf[32],8, C_text("captured"));
lf[33]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001captured\376\001\000\000\003\001cpt\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001assigned\376\001\000\000\003\001set\376\003\000\000\002\376\003\000\000\002\376\001\000\000"
"\005\001boxed\376\001\000\000\003\001box\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001global\376\001\000\000\003\001glo\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001assigned-locally\376"
"\001\000\000\003\001stl\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001contractable\376\001\000\000\003\001con\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001standard-binding\376\001\000"
"\000\003\001stb\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001simple\376\001\000\000\003\001sim\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001inlinable\376\001\000\000\003\001inl\376\003\000\000\002\376\003\000\000"
"\002\376\001\000\000\013\001collapsable\376\001\000\000\003\001col\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001removable\376\001\000\000\003\001rem\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001con"
"stant\376\001\000\000\003\001con\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001inline-target\376\001\000\000\003\001ilt\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001inline-trans"
"ient\376\001\000\000\003\001itr\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001undefined\376\001\000\000\003\001und\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001replacing\376\001\000\000\003\001rp"
"g\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001unused\376\001\000\000\003\001uud\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001extended-binding\376\001\000\000\003\001xtb\376\003\000\000\002\376\003"
"\000\000\002\376\001\000\000\015\001inline-export\376\001\000\000\003\001ilx\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001hidden-refs\376\001\000\000\003\001hrf\376\003\000\000\002\376\003\000\000\002\376\001\000"
"\000\011\001value-ref\376\001\000\000\003\001vvf\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001customizable\376\001\000\000\003\001cst\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025\001has-un"
"used-parameters\376\001\000\000\003\001hup\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001boxed-rest\376\001\000\000\003\001bxr\376\377\016"));
lf[34]=C_h_intern(&lf[34],18, C_text("##sys#write-char-0"));
lf[35]=C_h_intern(&lf[35],5, C_text("value"));
lf[36]=C_h_intern(&lf[36],11, C_text("local-value"));
lf[37]=C_h_intern(&lf[37],16, C_text("potential-values"));
lf[38]=C_h_intern(&lf[38],10, C_text("replacable"));
lf[39]=C_h_intern(&lf[39],17, C_text("derived-rest-vars"));
lf[40]=C_h_intern(&lf[40],10, C_text("references"));
lf[41]=C_h_intern(&lf[41],10, C_text("call-sites"));
lf[42]=C_h_intern(&lf[42],29, C_text("chicken.compiler.support#bomb"));
lf[43]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020Illegal property"));
lf[44]=C_h_intern(&lf[44],4, C_text("home"));
lf[45]=C_h_intern(&lf[45],8, C_text("contains"));
lf[46]=C_h_intern(&lf[46],12, C_text("contained-in"));
lf[47]=C_h_intern(&lf[47],8, C_text("use-expr"));
lf[48]=C_h_intern(&lf[48],12, C_text("closure-size"));
lf[49]=C_h_intern(&lf[49],14, C_text("rest-parameter"));
lf[50]=C_h_intern(&lf[50],18, C_text("captured-variables"));
lf[51]=C_h_intern(&lf[51],13, C_text("explicit-rest"));
lf[52]=C_h_intern(&lf[52],8, C_text("rest-cdr"));
lf[53]=C_h_intern(&lf[53],10, C_text("rest-null\077"));
lf[54]=C_h_intern(&lf[54],15, C_text("consed-rest-arg"));
lf[55]=C_h_intern(&lf[55],8, C_text("assigned"));
lf[56]=C_h_intern(&lf[56],5, C_text("boxed"));
lf[57]=C_h_intern(&lf[57],6, C_text("global"));
lf[58]=C_h_intern(&lf[58],12, C_text("contractable"));
lf[59]=C_h_intern(&lf[59],16, C_text("standard-binding"));
lf[60]=C_h_intern(&lf[60],16, C_text("assigned-locally"));
lf[61]=C_h_intern(&lf[61],11, C_text("collapsable"));
lf[62]=C_h_intern(&lf[62],9, C_text("removable"));
lf[63]=C_h_intern(&lf[63],9, C_text("undefined"));
lf[64]=C_h_intern(&lf[64],9, C_text("replacing"));
lf[65]=C_h_intern(&lf[65],6, C_text("unused"));
lf[66]=C_h_intern(&lf[66],6, C_text("simple"));
lf[67]=C_h_intern(&lf[67],9, C_text("inlinable"));
lf[68]=C_h_intern(&lf[68],13, C_text("inline-export"));
lf[69]=C_h_intern(&lf[69],21, C_text("has-unused-parameters"));
lf[70]=C_h_intern(&lf[70],16, C_text("extended-binding"));
lf[71]=C_h_intern(&lf[71],12, C_text("customizable"));
lf[72]=C_h_intern(&lf[72],8, C_text("constant"));
lf[73]=C_h_intern(&lf[73],10, C_text("boxed-rest"));
lf[74]=C_h_intern(&lf[74],11, C_text("hidden-refs"));
lf[75]=C_h_intern(&lf[75],12, C_text("scheme#write"));
lf[76]=C_h_intern(&lf[76],36, C_text("chicken.internal#hash-table-for-each"));
lf[77]=C_h_intern(&lf[77],47, C_text("chicken.compiler.core#default-standard-bindings"));
lf[78]=C_h_intern(&lf[78],47, C_text("chicken.compiler.core#default-extended-bindings"));
lf[79]=C_h_intern(&lf[79],49, C_text("chicken.compiler.batch-driver#compile-source-file"));
lf[80]=C_h_intern(&lf[80],39, C_text("chicken.compiler.support#quit-compiling"));
lf[81]=C_decode_literal(C_heaptop,C_text("\376B\000\000 missing argument to `-~A\047 option"));
lf[82]=C_decode_literal(C_heaptop,C_text("\376B\000\000\037invalid argument to `~A\047 option"));
lf[83]=C_h_intern(&lf[83],39, C_text("chicken.compiler.core#explicit-use-flag"));
lf[84]=C_h_intern(&lf[84],12, C_text("explicit-use"));
lf[85]=C_h_intern(&lf[85],37, C_text("chicken.compiler.core#emit-debug-info"));
lf[86]=C_h_intern(&lf[86],10, C_text("debug-info"));
lf[87]=C_h_intern(&lf[87],7, C_text("dynamic"));
lf[88]=C_h_intern(&lf[88],4, C_text("unit"));
lf[89]=C_h_intern(&lf[89],14, C_text("##core#declare"));
lf[90]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\003\000\000\002\376\001\000\000\042\001chicken.base#implicit-exit-handler\376\377\016\376\377\016\376\377\016"));
lf[91]=C_h_intern(&lf[91],11, C_text("output-file"));
lf[92]=C_h_intern(&lf[92],39, C_text("chicken.compiler.support#chop-separator"));
lf[93]=C_h_intern(&lf[93],7, C_text("profile"));
lf[94]=C_h_intern(&lf[94],12, C_text("profile-name"));
lf[95]=C_h_intern(&lf[95],9, C_text("heap-size"));
lf[96]=C_h_intern(&lf[96],13, C_text("keyword-style"));
lf[97]=C_h_intern(&lf[97],10, C_text("clustering"));
lf[98]=C_h_intern(&lf[98],12, C_text("analyze-only"));
lf[99]=C_h_intern(&lf[99],4, C_text("lfa2"));
lf[100]=C_h_intern(&lf[100],7, C_text("nursery"));
lf[101]=C_h_intern(&lf[101],10, C_text("stack-size"));
lf[102]=C_h_intern(&lf[102],6, C_text("module"));
lf[103]=C_h_intern(&lf[103],42, C_text("chicken.compiler.support#debugging-chicken"));
lf[104]=C_h_intern(&lf[104],34, C_text("chicken.compiler.support#debugging"));
lf[105]=C_h_intern(&lf[105],1, C_text("p"));
lf[106]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004pass"));
lf[107]=C_h_intern(&lf[107],35, C_text("chicken.compiler.support#dump-nodes"));
lf[108]=C_h_intern(&lf[108],33, C_text("chicken.pretty-print#pretty-print"));
lf[109]=C_h_intern(&lf[109],46, C_text("chicken.compiler.support#build-expression-tree"));
lf[110]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013(iteration "));
lf[111]=C_decode_literal(C_heaptop,C_text("\376B\000\000\033invalid numeric argument ~S"));
lf[112]=C_h_intern(&lf[112],21, C_text("scheme#string->number"));
lf[113]=C_h_intern(&lf[113],16, C_text("scheme#substring"));
lf[114]=C_h_intern(&lf[114],41, C_text("chicken.time#current-process-milliseconds"));
lf[115]=C_h_intern(&lf[115],21, C_text("scheme#inexact->exact"));
lf[116]=C_h_intern(&lf[116],12, C_text("scheme#round"));
lf[117]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003: \011"));
lf[118]=C_decode_literal(C_heaptop,C_text("\376B\000\000\030milliseconds needed for "));
lf[119]=C_h_intern(&lf[119],31, C_text("chicken.compiler.support#db-get"));
lf[120]=C_h_intern(&lf[120],32, C_text("chicken.compiler.support#db-put!"));
lf[121]=C_h_intern(&lf[121],40, C_text("chicken.compiler.core#analyze-expression"));
lf[122]=C_h_intern(&lf[122],43, C_text("chicken.compiler.core#enable-specialization"));
lf[123]=C_h_intern(&lf[123],10, C_text("specialize"));
lf[124]=C_h_intern(&lf[124],1, C_text("D"));
lf[125]=C_h_intern(&lf[125],38, C_text("chicken.compiler.core#import-libraries"));
lf[126]=C_h_intern(&lf[126],14, C_text("emit-link-file"));
lf[127]=C_h_intern(&lf[127],16, C_text("emit-inline-file"));
lf[128]=C_h_intern(&lf[128],15, C_text("emit-types-file"));
lf[129]=C_h_intern(&lf[129],12, C_text("inline-limit"));
lf[130]=C_h_intern(&lf[130],12, C_text("unroll-limit"));
lf[131]=C_h_intern(&lf[131],33, C_text("##sys#read-error-with-line-number"));
lf[132]=C_h_intern(&lf[132],23, C_text("##sys#include-pathnames"));
lf[133]=C_h_intern(&lf[133],34, C_text("chicken.platform#register-feature!"));
lf[134]=C_h_intern(&lf[134],36, C_text("chicken.platform#unregister-feature!"));
lf[135]=C_h_intern_kw(&lf[135],18, C_text("compiler-extension"));
lf[136]=C_h_intern(&lf[136],14, C_text("##sys#features"));
lf[137]=C_h_intern_kw(&lf[137],9, C_text("compiling"));
lf[138]=C_h_intern(&lf[138],38, C_text("chicken.compiler.core#linked-libraries"));
lf[139]=C_h_intern(&lf[139],38, C_text("chicken.compiler.core#target-heap-size"));
lf[140]=C_h_intern(&lf[140],39, C_text("chicken.compiler.core#target-stack-size"));
lf[141]=C_h_intern(&lf[141],8, C_text("no-trace"));
lf[142]=C_h_intern(&lf[142],37, C_text("chicken.compiler.core#emit-trace-info"));
lf[143]=C_h_intern(&lf[143],53, C_text("chicken.compiler.core#disable-stack-overflow-checking"));
lf[144]=C_h_intern(&lf[144],29, C_text("disable-stack-overflow-checks"));
lf[145]=C_h_intern(&lf[145],36, C_text("chicken.compiler.core#bootstrap-mode"));
lf[146]=C_h_intern(&lf[146],7, C_text("version"));
lf[147]=C_h_intern(&lf[147],38, C_text("chicken.compiler.support#print-version"));
lf[148]=C_h_intern(&lf[148],4, C_text("help"));
lf[149]=C_h_intern(&lf[149],36, C_text("chicken.compiler.support#print-usage"));
lf[150]=C_h_intern(&lf[150],7, C_text("release"));
lf[151]=C_h_intern(&lf[151],14, C_text("scheme#display"));
lf[152]=C_h_intern(&lf[152],32, C_text("chicken.platform#chicken-version"));
lf[153]=C_decode_literal(C_heaptop,C_text("\376B\000\0001\012Run `csi\047 to start the interactive interpreter.\012"));
lf[154]=C_decode_literal(C_heaptop,C_text("\376B\000\000.or try `csc\047 for a more convenient interface.\012"));
lf[155]=C_decode_literal(C_heaptop,C_text("\376B\000\000C\012Enter `chicken -help\047 for information on how to use the compiler,\012"));
lf[156]=C_h_intern(&lf[156],26, C_text("##sys#line-number-database"));
lf[157]=C_h_intern(&lf[157],45, C_text("chicken.compiler.core#canonicalize-expression"));
lf[158]=C_h_intern(&lf[158],29, C_text("##sys#current-source-filename"));
lf[159]=C_h_intern(&lf[159],18, C_text("##sys#dynamic-wind"));
lf[160]=C_h_intern(&lf[160],44, C_text("chicken.compiler.core#line-number-database-2"));
lf[161]=C_h_intern(&lf[161],40, C_text("chicken.compiler.core#required-libraries"));
lf[162]=C_h_intern(&lf[162],36, C_text("chicken.compiler.core#constant-table"));
lf[163]=C_h_intern(&lf[163],34, C_text("chicken.compiler.core#inline-table"));
lf[164]=C_h_intern(&lf[164],36, C_text("chicken.compiler.core#first-analysis"));
lf[165]=C_h_intern(&lf[165],54, C_text("chicken.compiler.optimizer#determine-loop-and-dispatch"));
lf[166]=C_h_intern(&lf[166],59, C_text("chicken.compiler.optimizer#perform-high-level-optimizations"));
lf[167]=C_h_intern(&lf[167],39, C_text("chicken.compiler.core#block-compilation"));
lf[168]=C_h_intern(&lf[168],36, C_text("chicken.compiler.core#inline-locally"));
lf[169]=C_h_intern(&lf[169],37, C_text("chicken.compiler.core#inline-max-size"));
lf[170]=C_h_intern(&lf[170],34, C_text("chicken.compiler.core#unroll-limit"));
lf[171]=C_h_intern(&lf[171],50, C_text("chicken.compiler.core#inline-substitutions-enabled"));
lf[172]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022clustering enabled"));
lf[173]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022rewritings enabled"));
lf[174]=C_h_intern(&lf[174],44, C_text("chicken.compiler.core#optimize-leaf-routines"));
lf[175]=C_decode_literal(C_heaptop,C_text("\376B\000\000\031leaf routine optimization"));
lf[176]=C_h_intern(&lf[176],52, C_text("chicken.compiler.optimizer#transform-direct-lambdas!"));
lf[177]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010analysis"));
lf[178]=C_h_intern(&lf[178],4, C_text("leaf"));
lf[179]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023optimized-iteration"));
lf[180]=C_h_intern(&lf[180],1, C_text("5"));
lf[181]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014optimization"));
lf[182]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021optimization pass"));
lf[183]=C_h_intern(&lf[183],49, C_text("chicken.compiler.core#prepare-for-code-generation"));
lf[184]=C_h_intern(&lf[184],22, C_text("chicken.format#sprintf"));
lf[185]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025compilation finished."));
lf[186]=C_h_intern(&lf[186],46, C_text("chicken.compiler.support#compiler-cleanup-hook"));
lf[187]=C_h_intern(&lf[187],1, C_text("t"));
lf[188]=C_h_intern(&lf[188],19, C_text("##sys#display-times"));
lf[189]=C_h_intern(&lf[189],16, C_text("##sys#stop-timer"));
lf[190]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017code generation"));
lf[191]=C_h_intern(&lf[191],24, C_text("scheme#close-output-port"));
lf[192]=C_h_intern(&lf[192],40, C_text("chicken.compiler.c-backend#generate-code"));
lf[193]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023generating `~A\047 ..."));
lf[194]=C_h_intern(&lf[194],23, C_text("scheme#open-output-file"));
lf[195]=C_h_intern(&lf[195],36, C_text("chicken.compiler.core#emit-link-file"));
lf[196]=C_h_intern(&lf[196],23, C_text("chicken.pretty-print#pp"));
lf[197]=C_h_intern(&lf[197],26, C_text("scheme#with-output-to-file"));
lf[198]=C_decode_literal(C_heaptop,C_text("\376B\000\000\035generating link file `~a\047 ..."));
lf[199]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013preparation"));
lf[200]=C_h_intern(&lf[200],17, C_text("chicken.base#exit"));
lf[201]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021closure-converted"));
lf[202]=C_h_intern(&lf[202],1, C_text("9"));
lf[203]=C_h_intern(&lf[203],22, C_text("##sys#warnings-enabled"));
lf[204]=C_decode_literal(C_heaptop,C_text("\376B\000\000#(don\047t worry - still compiling...)\012"));
lf[205]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016final-analysis"));
lf[206]=C_h_intern(&lf[206],1, C_text("8"));
lf[207]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022closure conversion"));
lf[208]=C_h_intern(&lf[208],48, C_text("chicken.compiler.core#perform-closure-conversion"));
lf[209]=C_h_intern(&lf[209],41, C_text("chicken.compiler.core#insert-timer-checks"));
lf[210]=C_h_intern(&lf[210],37, C_text("chicken.compiler.core#foreign-stub-id"));
lf[211]=C_h_intern(&lf[211],42, C_text("chicken.compiler.core#foreign-lambda-stubs"));
lf[212]=C_h_intern(&lf[212],48, C_text("chicken.compiler.support#emit-global-inline-file"));
lf[213]=C_decode_literal(C_heaptop,C_text("\376B\000\000&generating global inline file `~a\047 ..."));
lf[214]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011optimized"));
lf[215]=C_h_intern(&lf[215],1, C_text("7"));
lf[216]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010unboxing"));
lf[217]=C_h_intern(&lf[217],38, C_text("chicken.compiler.lfa2#perform-unboxing"));
lf[218]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016doing unboxing"));
lf[219]=C_decode_literal(C_heaptop,C_text("\376B\000\000\027secondary flow analysis"));
lf[220]=C_h_intern(&lf[220],53, C_text("chicken.compiler.lfa2#perform-secondary-flow-analysis"));
lf[221]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012doing lfa2"));
lf[222]=C_h_intern(&lf[222],1, C_text("s"));
lf[223]=C_h_intern(&lf[223],49, C_text("chicken.compiler.core#compute-database-statistics"));
lf[224]=C_decode_literal(C_heaptop,C_text("\376B\000\000\027;   database entries: \011"));
lf[225]=C_decode_literal(C_heaptop,C_text("\376B\000\000\027;   known call sites: \011"));
lf[226]=C_decode_literal(C_heaptop,C_text("\376B\000\000\027;   global variables: \011"));
lf[227]=C_decode_literal(C_heaptop,C_text("\376B\000\000\027;   known procedures: \011"));
lf[228]=C_decode_literal(C_heaptop,C_text("\376B\000\000\042;   variables with known values: \011"));
lf[229]=C_decode_literal(C_heaptop,C_text("\376B\000\000\032 \011original program size: \011"));
lf[230]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023;   program size: \011"));
lf[231]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023program statistics:"));
lf[232]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010analysis"));
lf[233]=C_h_intern(&lf[233],1, C_text("4"));
lf[234]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010analysis"));
lf[235]=C_h_intern(&lf[235],44, C_text("chicken.compiler.scrutinizer#emit-types-file"));
lf[236]=C_decode_literal(C_heaptop,C_text("\376B\000\000\035generating type file `~a\047 ..."));
lf[237]=C_h_intern(&lf[237],39, C_text("chicken.compiler.core#types-output-file"));
lf[238]=C_h_intern(&lf[238],43, C_text("chicken.pathname#pathname-replace-extension"));
lf[239]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005types"));
lf[240]=C_h_intern(&lf[240],1, C_text("v"));
lf[241]=C_h_intern(&lf[241],41, C_text("chicken.compiler.support#dump-global-refs"));
lf[242]=C_h_intern(&lf[242],1, C_text("d"));
lf[243]=C_h_intern(&lf[243],45, C_text("chicken.compiler.support#dump-defined-globals"));
lf[244]=C_h_intern(&lf[244],1, C_text("u"));
lf[245]=C_h_intern(&lf[245],47, C_text("chicken.compiler.support#dump-undefined-globals"));
lf[246]=C_h_intern(&lf[246],3, C_text("opt"));
lf[247]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003cps"));
lf[248]=C_h_intern(&lf[248],1, C_text("3"));
lf[249]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016cps conversion"));
lf[250]=C_h_intern(&lf[250],44, C_text("chicken.compiler.core#perform-cps-conversion"));
lf[251]=C_h_intern(&lf[251],31, C_text("chicken.compiler.support#unsafe"));
lf[252]=C_h_intern(&lf[252],52, C_text("chicken.compiler.optimizer#scan-toplevel-assignments"));
lf[253]=C_h_intern(&lf[253],44, C_text("chicken.compiler.support#node-subexpressions"));
lf[254]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016specialization"));
lf[255]=C_h_intern(&lf[255],1, C_text("P"));
lf[256]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010scrutiny"));
lf[257]=C_h_intern(&lf[257],39, C_text("chicken.compiler.scrutinizer#scrutinize"));
lf[258]=C_h_intern(&lf[258],43, C_text("chicken.compiler.core#strict-variable-types"));
lf[259]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023performing scrutiny"));
lf[260]=C_decode_literal(C_heaptop,C_text("\376B\000\000\027pre-analysis (scrutiny)"));
lf[261]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010analysis"));
lf[262]=C_h_intern(&lf[262],1, C_text("0"));
lf[263]=C_h_intern(&lf[263],8, C_text("scrutiny"));
lf[264]=C_h_intern(&lf[264],47, C_text("chicken.compiler.scrutinizer#load-type-database"));
lf[265]=C_h_intern(&lf[265],30, C_text("chicken.pathname#make-pathname"));
lf[266]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005types"));
lf[267]=C_h_intern(&lf[267],21, C_text("scheme#symbol->string"));
lf[268]=C_decode_literal(C_heaptop,C_text("\376B\000\000\034type-database `~a\047 not found"));
lf[269]=C_h_intern(&lf[269],18, C_text("consult-types-file"));
lf[270]=C_h_intern(&lf[270],17, C_text("ignore-repository"));
lf[271]=C_decode_literal(C_heaptop,C_text("\376B\000\000\052default type-database `types.db\047 not found"));
lf[272]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010types.db"));
lf[273]=C_h_intern(&lf[273],41, C_text("chicken.compiler.support#load-inline-file"));
lf[274]=C_decode_literal(C_heaptop,C_text("\376B\000\000\032Loading inline file ~a ..."));
lf[275]=C_h_intern(&lf[275],19, C_text("consult-inline-file"));
lf[276]=C_h_intern(&lf[276],41, C_text("chicken.compiler.core#enable-inline-files"));
lf[277]=C_decode_literal(C_heaptop,C_text("\376B\000\000\032Loading inline file ~a ..."));
lf[278]=C_h_intern(&lf[278],30, C_text("##sys#resolve-include-filename"));
lf[279]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\007.inline\376\377\016"));
lf[280]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021initial node tree"));
lf[281]=C_h_intern(&lf[281],1, C_text("T"));
lf[282]=C_h_intern(&lf[282],46, C_text("chicken.compiler.core#build-toplevel-procedure"));
lf[283]=C_h_intern(&lf[283],41, C_text("chicken.compiler.support#build-node-graph"));
lf[284]=C_h_intern(&lf[284],48, C_text("chicken.compiler.support#canonicalize-begin-body"));
lf[285]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011user pass"));
lf[286]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014User pass..."));
lf[287]=C_h_intern(&lf[287],36, C_text("chicken.compiler.user-pass#user-pass"));
lf[288]=C_h_intern(&lf[288],12, C_text("check-syntax"));
lf[289]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015canonicalized"));
lf[290]=C_h_intern(&lf[290],1, C_text("2"));
lf[291]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020canonicalization"));
lf[292]=C_h_intern(&lf[292],53, C_text("chicken.compiler.support#display-line-number-database"));
lf[293]=C_h_intern(&lf[293],1, C_text("n"));
lf[294]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025line number database:"));
lf[295]=C_h_intern(&lf[295],48, C_text("chicken.compiler.support#display-real-name-table"));
lf[296]=C_h_intern(&lf[296],1, C_text("N"));
lf[297]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020real name table:"));
lf[298]=C_h_intern(&lf[298],59, C_text("chicken.compiler.compiler-syntax#compiler-syntax-statistics"));
lf[299]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002\011\011"));
lf[300]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002  "));
lf[301]=C_h_intern(&lf[301],18, C_text("chicken.base#print"));
lf[302]=C_decode_literal(C_heaptop,C_text("\376B\000\000\030applied compiler syntax:"));
lf[303]=C_h_intern(&lf[303],46, C_text("chicken.compiler.support#with-debugging-output"));
lf[304]=C_h_intern(&lf[304],1, C_text("S"));
lf[305]=C_decode_literal(C_heaptop,C_text("\376B\000\000;No module definition found for import libraries to emit: ~A"));
lf[306]=C_h_intern(&lf[306],33, C_text("chicken.string#string-intersperse"));
lf[307]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002, "));
lf[308]=C_h_intern(&lf[308],23, C_text("chicken.string#->string"));
lf[309]=C_h_intern(&lf[309],41, C_text("chicken.compiler.core#immutable-constants"));
lf[310]=C_h_intern(&lf[310],43, C_text("chicken.compiler.core#standalone-executable"));
lf[311]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001##core#undefined\376\377\016\376\377\016"));
lf[312]=C_h_intern(&lf[312],34, C_text("chicken.compiler.core#emit-profile"));
lf[313]=C_h_intern(&lf[313],31, C_text("chicken.compiler.core#unit-name"));
lf[314]=C_h_intern(&lf[314],47, C_text("chicken.compiler.support#profiling-prelude-exps"));
lf[315]=C_h_intern(&lf[315],14, C_text("##core#provide"));
lf[316]=C_h_intern(&lf[316],5, C_text("quote"));
lf[317]=C_h_intern(&lf[317],4, C_text("set!"));
lf[318]=C_h_intern(&lf[318],14, C_text("##core#require"));
lf[319]=C_h_intern(&lf[319],18, C_text("##sys#fast-reverse"));
lf[320]=C_h_intern(&lf[320],36, C_text("chicken.compiler.core#used-libraries"));
lf[321]=C_h_intern(&lf[321],13, C_text("##core#module"));
lf[322]=C_h_intern(&lf[322],21, C_text("scheme#string->symbol"));
lf[323]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006source"));
lf[324]=C_h_intern(&lf[324],1, C_text("1"));
lf[325]=C_decode_literal(C_heaptop,C_text("\376B\000\000\032User preprocessing pass..."));
lf[326]=C_h_intern(&lf[326],49, C_text("chicken.compiler.user-pass#user-preprocessor-pass"));
lf[327]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021User read pass..."));
lf[328]=C_h_intern(&lf[328],37, C_text("chicken.compiler.support#string->expr"));
lf[329]=C_h_intern(&lf[329],14, C_text("scheme#reverse"));
lf[330]=C_h_intern(&lf[330],49, C_text("chicken.compiler.support#close-checked-input-file"));
lf[331]=C_h_intern(&lf[331],41, C_text("chicken.compiler.support#read/source-info"));
lf[332]=C_h_intern(&lf[332],50, C_text("chicken.compiler.support#check-and-open-input-file"));
lf[333]=C_h_intern(&lf[333],41, C_text("chicken.compiler.user-pass#user-read-pass"));
lf[334]=C_h_intern(&lf[334],8, C_text("epilogue"));
lf[335]=C_h_intern(&lf[335],8, C_text("prologue"));
lf[336]=C_h_intern(&lf[336],8, C_text("postlude"));
lf[337]=C_h_intern(&lf[337],7, C_text("prelude"));
lf[338]=C_h_intern(&lf[338],18, C_text("scheme#make-vector"));
lf[339]=C_h_intern(&lf[339],47, C_text("chicken.compiler.core#line-number-database-size"));
lf[340]=C_h_intern(&lf[340],1, C_text("r"));
lf[341]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021target stack size"));
lf[342]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020target heap size"));
lf[343]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021debugging options"));
lf[344]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007options"));
lf[345]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022compiling `~a\047 ..."));
lf[346]=C_h_intern(&lf[346],5, C_text("-help"));
lf[347]=C_h_intern(&lf[347],1, C_text("h"));
lf[348]=C_h_intern(&lf[348],2, C_text("-h"));
lf[349]=C_h_intern(&lf[349],49, C_text("chicken.compiler.support#load-identifier-database"));
lf[350]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012modules.db"));
lf[351]=C_h_intern(&lf[351],18, C_text("accumulate-profile"));
lf[352]=C_h_intern(&lf[352],41, C_text("chicken.compiler.core#profiled-procedures"));
lf[353]=C_h_intern(&lf[353],3, C_text("all"));
lf[354]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015accumulative "));
lf[355]=C_decode_literal(C_heaptop,C_text("\376B\000\000\032generating ~aprofiled code"));
lf[356]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[357]=C_h_intern(&lf[357],58, C_text("chicken.compiler.c-platform#default-profiling-declarations"));
lf[358]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001set!\376\003\000\000\002\376\001\000\000\031\001##sys#profile-append-mode\376\003\000\000\002\376\377\006\001\376\377\016\376\377\016"));
lf[359]=C_decode_literal(C_heaptop,C_text("\376B\000\000Eyou need to specify -profile-name if using accumulated profiling runs"));
lf[360]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011calltrace"));
lf[361]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022debugging info: ~A"));
lf[362]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004none"));
lf[363]=C_h_intern(&lf[363],21, C_text("no-usual-integrations"));
lf[364]=C_h_intern(&lf[364],1, C_text("m"));
lf[365]=C_h_intern(&lf[365],25, C_text("chicken.gc#set-gc-report!"));
lf[366]=C_h_intern(&lf[366],25, C_text("chicken.platform#feature\077"));
lf[367]=C_h_intern_kw(&lf[367],17, C_text("chicken-bootstrap"));
lf[368]=C_h_intern(&lf[368],14, C_text("compile-syntax"));
lf[369]=C_h_intern(&lf[369],27, C_text("##sys#enable-runtime-macros"));
lf[370]=C_h_intern(&lf[370],6, C_text("import"));
lf[371]=C_h_intern(&lf[371],17, C_text("require-extension"));
lf[372]=C_h_intern(&lf[372],5, C_text("foldl"));
lf[373]=C_h_intern(&lf[373],27, C_text("chicken.string#string-split"));
lf[374]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002, "));
lf[375]=C_h_intern(&lf[375],4, C_text("link"));
lf[376]=C_h_intern(&lf[376],4, C_text("uses"));
lf[377]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002, "));
lf[378]=C_h_intern(&lf[378],50, C_text("chicken.compiler.user-pass#user-post-analysis-pass"));
lf[379]=C_h_intern(&lf[379],11, C_text("scheme#load"));
lf[380]=C_decode_literal(C_heaptop,C_text("\376B\000\000\031cannot load extension: ~a"));
lf[381]=C_decode_literal(C_heaptop,C_text("\376B\000\000\036Loading compiler extensions..."));
lf[382]=C_h_intern(&lf[382],6, C_text("extend"));
lf[383]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001,"));
lf[384]=C_h_intern(&lf[384],10, C_text("no-feature"));
lf[385]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002, "));
lf[386]=C_h_intern(&lf[386],7, C_text("feature"));
lf[387]=C_h_intern(&lf[387],25, C_text("chicken.load#load-verbose"));
lf[388]=C_h_intern(&lf[388],38, C_text("no-procedure-checks-for-usual-bindings"));
lf[389]=C_h_intern(&lf[389],23, C_text("##compiler#always-bound"));
lf[390]=C_h_intern(&lf[390],36, C_text("##compiler#always-bound-to-procedure"));
lf[391]=C_h_intern(&lf[391],41, C_text("no-procedure-checks-for-toplevel-bindings"));
lf[392]=C_h_intern(&lf[392],48, C_text("chicken.compiler.core#no-global-procedure-checks"));
lf[393]=C_h_intern(&lf[393],19, C_text("no-procedure-checks"));
lf[394]=C_h_intern(&lf[394],41, C_text("chicken.compiler.core#no-procedure-checks"));
lf[395]=C_h_intern(&lf[395],15, C_text("no-bound-checks"));
lf[396]=C_h_intern(&lf[396],37, C_text("chicken.compiler.core#no-bound-checks"));
lf[397]=C_h_intern(&lf[397],14, C_text("no-argc-checks"));
lf[398]=C_h_intern(&lf[398],36, C_text("chicken.compiler.core#no-argc-checks"));
lf[399]=C_h_intern(&lf[399],20, C_text("keep-shadowed-macros"));
lf[400]=C_h_intern(&lf[400],46, C_text("chicken.compiler.core#undefine-shadowed-macros"));
lf[401]=C_decode_literal(C_heaptop,C_text("\376B\000\000(source- and output-filename are the same"));
lf[402]=C_h_intern(&lf[402],12, C_text("include-path"));
lf[403]=C_h_intern(&lf[403],11, C_text("r5rs-syntax"));
lf[404]=C_h_intern(&lf[404],26, C_text("chicken.base#symbol-escape"));
lf[405]=C_h_intern(&lf[405],33, C_text("chicken.base#parentheses-synonyms"));
lf[406]=C_h_intern(&lf[406],26, C_text("chicken.base#keyword-style"));
lf[407]=C_h_intern_kw(&lf[407],4, C_text("none"));
lf[408]=C_h_intern(&lf[408],27, C_text("chicken.base#case-sensitive"));
lf[409]=C_decode_literal(C_heaptop,C_text("\376B\000\000.Disabled the CHICKEN extensions to R5RS syntax"));
lf[410]=C_h_intern(&lf[410],16, C_text("no-symbol-escape"));
lf[411]=C_decode_literal(C_heaptop,C_text("\376B\000\000$Disabled support for escaped symbols"));
lf[412]=C_h_intern(&lf[412],23, C_text("no-parentheses-synonyms"));
lf[413]=C_decode_literal(C_heaptop,C_text("\376B\000\000)Disabled support for parentheses synonyms"));
lf[414]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006prefix"));
lf[415]=C_h_intern_kw(&lf[415],6, C_text("prefix"));
lf[416]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004none"));
lf[417]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006suffix"));
lf[418]=C_h_intern_kw(&lf[418],6, C_text("suffix"));
lf[419]=C_decode_literal(C_heaptop,C_text("\376B\000\000+invalid argument to `-keyword-style\047 option"));
lf[420]=C_h_intern(&lf[420],16, C_text("case-insensitive"));
lf[421]=C_decode_literal(C_heaptop,C_text("\376B\000\000,Identifiers and symbols are case insensitive"));
lf[422]=C_decode_literal(C_heaptop,C_text("\376B\000\0000invalid argument to `-unroll-limit\047 option: `~A\047"));
lf[423]=C_decode_literal(C_heaptop,C_text("\376B\000\0000invalid argument to `-inline-limit\047 option: `~A\047"));
lf[424]=C_h_intern(&lf[424],39, C_text("chicken.compiler.core#local-definitions"));
lf[425]=C_h_intern(&lf[425],6, C_text("inline"));
lf[426]=C_h_intern(&lf[426],30, C_text("emit-external-prototypes-first"));
lf[427]=C_h_intern(&lf[427],43, C_text("chicken.compiler.core#external-protos-first"));
lf[428]=C_h_intern(&lf[428],5, C_text("block"));
lf[429]=C_h_intern(&lf[429],17, C_text("fixnum-arithmetic"));
lf[430]=C_h_intern(&lf[430],36, C_text("chicken.compiler.support#number-type"));
lf[431]=C_h_intern(&lf[431],6, C_text("fixnum"));
lf[432]=C_h_intern(&lf[432],18, C_text("disable-interrupts"));
lf[433]=C_h_intern(&lf[433],27, C_text("regenerate-import-libraries"));
lf[434]=C_h_intern(&lf[434],57, C_text("chicken.compiler.core#preserve-unchanged-import-libraries"));
lf[435]=C_h_intern(&lf[435],10, C_text("setup-mode"));
lf[436]=C_h_intern(&lf[436],16, C_text("##sys#setup-mode"));
lf[437]=C_h_intern(&lf[437],6, C_text("unsafe"));
lf[438]=C_h_intern(&lf[438],22, C_text("optimize-leaf-routines"));
lf[439]=C_h_intern(&lf[439],11, C_text("no-warnings"));
lf[440]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025Warnings are disabled"));
lf[441]=C_h_intern(&lf[441],12, C_text("strict-types"));
lf[442]=C_h_intern(&lf[442],7, C_text("verbose"));
lf[443]=C_h_intern(&lf[443],34, C_text("chicken.compiler.core#verbose-mode"));
lf[444]=C_h_intern(&lf[444],21, C_text("##sys#notices-enabled"));
lf[445]=C_h_intern(&lf[445],13, C_text("inline-global"));
lf[446]=C_h_intern(&lf[446],5, C_text("local"));
lf[447]=C_h_intern(&lf[447],18, C_text("no-compiler-syntax"));
lf[448]=C_h_intern(&lf[448],45, C_text("chicken.compiler.core#compiler-syntax-enabled"));
lf[449]=C_h_intern(&lf[449],14, C_text("no-lambda-info"));
lf[450]=C_h_intern(&lf[450],39, C_text("chicken.compiler.core#emit-closure-info"));
lf[451]=C_h_intern(&lf[451],3, C_text("raw"));
lf[452]=C_h_intern(&lf[452],1, C_text("b"));
lf[453]=C_h_intern(&lf[453],17, C_text("##sys#start-timer"));
lf[454]=C_h_intern(&lf[454],25, C_text("emit-all-import-libraries"));
lf[455]=C_h_intern(&lf[455],42, C_text("chicken.compiler.core#all-import-libraries"));
lf[456]=C_h_intern(&lf[456],19, C_text("##sys#string-append"));
lf[457]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013.import.scm"));
lf[458]=C_h_intern(&lf[458],19, C_text("emit-import-library"));
lf[459]=C_h_intern(&lf[459],44, C_text("chicken.compiler.support#print-debug-options"));
lf[460]=C_h_intern(&lf[460],18, C_text("##sys#string->list"));
lf[461]=C_h_intern(&lf[461],5, C_text("debug"));
lf[462]=C_h_intern(&lf[462],20, C_text("##sys#dload-disabled"));
lf[463]=C_h_intern(&lf[463],32, C_text("chicken.platform#repository-path"));
lf[464]=C_h_intern(&lf[464],54, C_text("chicken.compiler.optimizer#default-optimization-passes"));
lf[465]=C_h_intern(&lf[465],16, C_text("##sys#split-path"));
lf[466]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[467]=C_h_intern(&lf[467],48, C_text("chicken.process-context#get-environment-variable"));
lf[468]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024CHICKEN_INCLUDE_PATH"));
lf[469]=C_h_intern(&lf[469],9, C_text("to-stdout"));
lf[470]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001c"));
lf[471]=C_h_intern(&lf[471],30, C_text("chicken.pathname#pathname-file"));
lf[472]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003out"));
lf[473]=C_h_intern(&lf[473],17, C_text("import-for-syntax"));
lf[474]=C_h_intern(&lf[474],39, C_text("chicken.internal#default-syntax-imports"));
lf[475]=C_h_intern(&lf[475],13, C_text("import-syntax"));
lf[476]=C_h_intern(&lf[476],32, C_text("chicken.internal#default-imports"));
lf[477]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001uses\376\003\000\000\002\376\001\000\000\017\001debugger-client\376\377\016\376\377\016"));
lf[478]=C_h_intern(&lf[478],48, C_text("chicken.compiler.c-platform#default-declarations"));
lf[479]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001uses\376\003\000\000\002\376\001\000\000\014\001eval-modules\376\377\016\376\377\016"));
lf[480]=C_h_intern(&lf[480],39, C_text("chicken.compiler.core#static-extensions"));
lf[481]=C_h_intern(&lf[481],49, C_text("chicken.compiler.core#compile-module-registration"));
lf[482]=C_h_intern(&lf[482],3, C_text("yes"));
lf[483]=C_h_intern(&lf[483],41, C_text("chicken.compiler.c-platform#default-units"));
lf[484]=C_h_intern(&lf[484],6, C_text("static"));
lf[485]=C_h_intern(&lf[485],22, C_text("chicken-compile-static"));
lf[486]=C_h_intern(&lf[486],22, C_text("no-module-registration"));
lf[487]=C_h_intern(&lf[487],2, C_text("no"));
lf[488]=C_h_intern(&lf[488],19, C_text("module-registration"));
lf[489]=C_h_intern(&lf[489],41, C_text("chicken.compiler.core#initialize-compiler"));
C_register_lf2(lf,490,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2688,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[547] = {
{C_text("f8651:batch_2ddriver_2escm"),(void*)f8651},
{C_text("f9122:batch_2ddriver_2escm"),(void*)f9122},
{C_text("f9128:batch_2ddriver_2escm"),(void*)f9128},
{C_text("f9134:batch_2ddriver_2escm"),(void*)f9134},
{C_text("f9140:batch_2ddriver_2escm"),(void*)f9140},
{C_text("f9148:batch_2ddriver_2escm"),(void*)f9148},
{C_text("f9154:batch_2ddriver_2escm"),(void*)f9154},
{C_text("f9166:batch_2ddriver_2escm"),(void*)f9166},
{C_text("f9174:batch_2ddriver_2escm"),(void*)f9174},
{C_text("f9184:batch_2ddriver_2escm"),(void*)f9184},
{C_text("f9204:batch_2ddriver_2escm"),(void*)f9204},
{C_text("f9210:batch_2ddriver_2escm"),(void*)f9210},
{C_text("f9224:batch_2ddriver_2escm"),(void*)f9224},
{C_text("f9230:batch_2ddriver_2escm"),(void*)f9230},
{C_text("f9236:batch_2ddriver_2escm"),(void*)f9236},
{C_text("f9242:batch_2ddriver_2escm"),(void*)f9242},
{C_text("f9248:batch_2ddriver_2escm"),(void*)f9248},
{C_text("f9268:batch_2ddriver_2escm"),(void*)f9268},
{C_text("f9284:batch_2ddriver_2escm"),(void*)f9284},
{C_text("f9290:batch_2ddriver_2escm"),(void*)f9290},
{C_text("f9296:batch_2ddriver_2escm"),(void*)f9296},
{C_text("f9302:batch_2ddriver_2escm"),(void*)f9302},
{C_text("f9308:batch_2ddriver_2escm"),(void*)f9308},
{C_text("f_2688:batch_2ddriver_2escm"),(void*)f_2688},
{C_text("f_2691:batch_2ddriver_2escm"),(void*)f_2691},
{C_text("f_2694:batch_2ddriver_2escm"),(void*)f_2694},
{C_text("f_2697:batch_2ddriver_2escm"),(void*)f_2697},
{C_text("f_2700:batch_2ddriver_2escm"),(void*)f_2700},
{C_text("f_2703:batch_2ddriver_2escm"),(void*)f_2703},
{C_text("f_2706:batch_2ddriver_2escm"),(void*)f_2706},
{C_text("f_2709:batch_2ddriver_2escm"),(void*)f_2709},
{C_text("f_2712:batch_2ddriver_2escm"),(void*)f_2712},
{C_text("f_2715:batch_2ddriver_2escm"),(void*)f_2715},
{C_text("f_2718:batch_2ddriver_2escm"),(void*)f_2718},
{C_text("f_2721:batch_2ddriver_2escm"),(void*)f_2721},
{C_text("f_2724:batch_2ddriver_2escm"),(void*)f_2724},
{C_text("f_2727:batch_2ddriver_2escm"),(void*)f_2727},
{C_text("f_2730:batch_2ddriver_2escm"),(void*)f_2730},
{C_text("f_2931:batch_2ddriver_2escm"),(void*)f_2931},
{C_text("f_2946:batch_2ddriver_2escm"),(void*)f_2946},
{C_text("f_2954:batch_2ddriver_2escm"),(void*)f_2954},
{C_text("f_2962:batch_2ddriver_2escm"),(void*)f_2962},
{C_text("f_2973:batch_2ddriver_2escm"),(void*)f_2973},
{C_text("f_2986:batch_2ddriver_2escm"),(void*)f_2986},
{C_text("f_2993:batch_2ddriver_2escm"),(void*)f_2993},
{C_text("f_3000:batch_2ddriver_2escm"),(void*)f_3000},
{C_text("f_3004:batch_2ddriver_2escm"),(void*)f_3004},
{C_text("f_3016:batch_2ddriver_2escm"),(void*)f_3016},
{C_text("f_3018:batch_2ddriver_2escm"),(void*)f_3018},
{C_text("f_3065:batch_2ddriver_2escm"),(void*)f_3065},
{C_text("f_3067:batch_2ddriver_2escm"),(void*)f_3067},
{C_text("f_3135:batch_2ddriver_2escm"),(void*)f_3135},
{C_text("f_3141:batch_2ddriver_2escm"),(void*)f_3141},
{C_text("f_3151:batch_2ddriver_2escm"),(void*)f_3151},
{C_text("f_3227:batch_2ddriver_2escm"),(void*)f_3227},
{C_text("f_3254:batch_2ddriver_2escm"),(void*)f_3254},
{C_text("f_3652:batch_2ddriver_2escm"),(void*)f_3652},
{C_text("f_3677:batch_2ddriver_2escm"),(void*)f_3677},
{C_text("f_3700:batch_2ddriver_2escm"),(void*)f_3700},
{C_text("f_3705:batch_2ddriver_2escm"),(void*)f_3705},
{C_text("f_3719:batch_2ddriver_2escm"),(void*)f_3719},
{C_text("f_4016:batch_2ddriver_2escm"),(void*)f_4016},
{C_text("f_4022:batch_2ddriver_2escm"),(void*)f_4022},
{C_text("f_4029:batch_2ddriver_2escm"),(void*)f_4029},
{C_text("f_4035:batch_2ddriver_2escm"),(void*)f_4035},
{C_text("f_4038:batch_2ddriver_2escm"),(void*)f_4038},
{C_text("f_4041:batch_2ddriver_2escm"),(void*)f_4041},
{C_text("f_4044:batch_2ddriver_2escm"),(void*)f_4044},
{C_text("f_4047:batch_2ddriver_2escm"),(void*)f_4047},
{C_text("f_4053:batch_2ddriver_2escm"),(void*)f_4053},
{C_text("f_4056:batch_2ddriver_2escm"),(void*)f_4056},
{C_text("f_4059:batch_2ddriver_2escm"),(void*)f_4059},
{C_text("f_4065:batch_2ddriver_2escm"),(void*)f_4065},
{C_text("f_4068:batch_2ddriver_2escm"),(void*)f_4068},
{C_text("f_4071:batch_2ddriver_2escm"),(void*)f_4071},
{C_text("f_4077:batch_2ddriver_2escm"),(void*)f_4077},
{C_text("f_4080:batch_2ddriver_2escm"),(void*)f_4080},
{C_text("f_4083:batch_2ddriver_2escm"),(void*)f_4083},
{C_text("f_4089:batch_2ddriver_2escm"),(void*)f_4089},
{C_text("f_4092:batch_2ddriver_2escm"),(void*)f_4092},
{C_text("f_4095:batch_2ddriver_2escm"),(void*)f_4095},
{C_text("f_4101:batch_2ddriver_2escm"),(void*)f_4101},
{C_text("f_4104:batch_2ddriver_2escm"),(void*)f_4104},
{C_text("f_4109:batch_2ddriver_2escm"),(void*)f_4109},
{C_text("f_4113:batch_2ddriver_2escm"),(void*)f_4113},
{C_text("f_4125:batch_2ddriver_2escm"),(void*)f_4125},
{C_text("f_4136:batch_2ddriver_2escm"),(void*)f_4136},
{C_text("f_4149:batch_2ddriver_2escm"),(void*)f_4149},
{C_text("f_4159:batch_2ddriver_2escm"),(void*)f_4159},
{C_text("f_4172:batch_2ddriver_2escm"),(void*)f_4172},
{C_text("f_4182:batch_2ddriver_2escm"),(void*)f_4182},
{C_text("f_4195:batch_2ddriver_2escm"),(void*)f_4195},
{C_text("f_4205:batch_2ddriver_2escm"),(void*)f_4205},
{C_text("f_4218:batch_2ddriver_2escm"),(void*)f_4218},
{C_text("f_4222:batch_2ddriver_2escm"),(void*)f_4222},
{C_text("f_4227:batch_2ddriver_2escm"),(void*)f_4227},
{C_text("f_4237:batch_2ddriver_2escm"),(void*)f_4237},
{C_text("f_4240:batch_2ddriver_2escm"),(void*)f_4240},
{C_text("f_4243:batch_2ddriver_2escm"),(void*)f_4243},
{C_text("f_4246:batch_2ddriver_2escm"),(void*)f_4246},
{C_text("f_4249:batch_2ddriver_2escm"),(void*)f_4249},
{C_text("f_4252:batch_2ddriver_2escm"),(void*)f_4252},
{C_text("f_4255:batch_2ddriver_2escm"),(void*)f_4255},
{C_text("f_4269:batch_2ddriver_2escm"),(void*)f_4269},
{C_text("f_4280:batch_2ddriver_2escm"),(void*)f_4280},
{C_text("f_4284:batch_2ddriver_2escm"),(void*)f_4284},
{C_text("f_4292:batch_2ddriver_2escm"),(void*)f_4292},
{C_text("f_4302:batch_2ddriver_2escm"),(void*)f_4302},
{C_text("f_4322:batch_2ddriver_2escm"),(void*)f_4322},
{C_text("f_4333:batch_2ddriver_2escm"),(void*)f_4333},
{C_text("f_4337:batch_2ddriver_2escm"),(void*)f_4337},
{C_text("f_4349:batch_2ddriver_2escm"),(void*)f_4349},
{C_text("f_4360:batch_2ddriver_2escm"),(void*)f_4360},
{C_text("f_4364:batch_2ddriver_2escm"),(void*)f_4364},
{C_text("f_4387:batch_2ddriver_2escm"),(void*)f_4387},
{C_text("f_4403:batch_2ddriver_2escm"),(void*)f_4403},
{C_text("f_4419:batch_2ddriver_2escm"),(void*)f_4419},
{C_text("f_4428:batch_2ddriver_2escm"),(void*)f_4428},
{C_text("f_4441:batch_2ddriver_2escm"),(void*)f_4441},
{C_text("f_4452:batch_2ddriver_2escm"),(void*)f_4452},
{C_text("f_4458:batch_2ddriver_2escm"),(void*)f_4458},
{C_text("f_4531:batch_2ddriver_2escm"),(void*)f_4531},
{C_text("f_4537:batch_2ddriver_2escm"),(void*)f_4537},
{C_text("f_4540:batch_2ddriver_2escm"),(void*)f_4540},
{C_text("f_4543:batch_2ddriver_2escm"),(void*)f_4543},
{C_text("f_4853:batch_2ddriver_2escm"),(void*)f_4853},
{C_text("f_4855:batch_2ddriver_2escm"),(void*)f_4855},
{C_text("f_4858:batch_2ddriver_2escm"),(void*)f_4858},
{C_text("f_4889:batch_2ddriver_2escm"),(void*)f_4889},
{C_text("f_4898:batch_2ddriver_2escm"),(void*)f_4898},
{C_text("f_4901:batch_2ddriver_2escm"),(void*)f_4901},
{C_text("f_4904:batch_2ddriver_2escm"),(void*)f_4904},
{C_text("f_4914:batch_2ddriver_2escm"),(void*)f_4914},
{C_text("f_4919:batch_2ddriver_2escm"),(void*)f_4919},
{C_text("f_4925:batch_2ddriver_2escm"),(void*)f_4925},
{C_text("f_4931:batch_2ddriver_2escm"),(void*)f_4931},
{C_text("f_4934:batch_2ddriver_2escm"),(void*)f_4934},
{C_text("f_4939:batch_2ddriver_2escm"),(void*)f_4939},
{C_text("f_4964:batch_2ddriver_2escm"),(void*)f_4964},
{C_text("f_4982:batch_2ddriver_2escm"),(void*)f_4982},
{C_text("f_4986:batch_2ddriver_2escm"),(void*)f_4986},
{C_text("f_4998:batch_2ddriver_2escm"),(void*)f_4998},
{C_text("f_5001:batch_2ddriver_2escm"),(void*)f_5001},
{C_text("f_5004:batch_2ddriver_2escm"),(void*)f_5004},
{C_text("f_5007:batch_2ddriver_2escm"),(void*)f_5007},
{C_text("f_5009:batch_2ddriver_2escm"),(void*)f_5009},
{C_text("f_5016:batch_2ddriver_2escm"),(void*)f_5016},
{C_text("f_5029:batch_2ddriver_2escm"),(void*)f_5029},
{C_text("f_5031:batch_2ddriver_2escm"),(void*)f_5031},
{C_text("f_5038:batch_2ddriver_2escm"),(void*)f_5038},
{C_text("f_5044:batch_2ddriver_2escm"),(void*)f_5044},
{C_text("f_5047:batch_2ddriver_2escm"),(void*)f_5047},
{C_text("f_5050:batch_2ddriver_2escm"),(void*)f_5050},
{C_text("f_5053:batch_2ddriver_2escm"),(void*)f_5053},
{C_text("f_5058:batch_2ddriver_2escm"),(void*)f_5058},
{C_text("f_5065:batch_2ddriver_2escm"),(void*)f_5065},
{C_text("f_5070:batch_2ddriver_2escm"),(void*)f_5070},
{C_text("f_5081:batch_2ddriver_2escm"),(void*)f_5081},
{C_text("f_5091:batch_2ddriver_2escm"),(void*)f_5091},
{C_text("f_5104:batch_2ddriver_2escm"),(void*)f_5104},
{C_text("f_5113:batch_2ddriver_2escm"),(void*)f_5113},
{C_text("f_5144:batch_2ddriver_2escm"),(void*)f_5144},
{C_text("f_5148:batch_2ddriver_2escm"),(void*)f_5148},
{C_text("f_5164:batch_2ddriver_2escm"),(void*)f_5164},
{C_text("f_5168:batch_2ddriver_2escm"),(void*)f_5168},
{C_text("f_5189:batch_2ddriver_2escm"),(void*)f_5189},
{C_text("f_5195:batch_2ddriver_2escm"),(void*)f_5195},
{C_text("f_5203:batch_2ddriver_2escm"),(void*)f_5203},
{C_text("f_5211:batch_2ddriver_2escm"),(void*)f_5211},
{C_text("f_5215:batch_2ddriver_2escm"),(void*)f_5215},
{C_text("f_5224:batch_2ddriver_2escm"),(void*)f_5224},
{C_text("f_5232:batch_2ddriver_2escm"),(void*)f_5232},
{C_text("f_5234:batch_2ddriver_2escm"),(void*)f_5234},
{C_text("f_5244:batch_2ddriver_2escm"),(void*)f_5244},
{C_text("f_5247:batch_2ddriver_2escm"),(void*)f_5247},
{C_text("f_5250:batch_2ddriver_2escm"),(void*)f_5250},
{C_text("f_5253:batch_2ddriver_2escm"),(void*)f_5253},
{C_text("f_5260:batch_2ddriver_2escm"),(void*)f_5260},
{C_text("f_5264:batch_2ddriver_2escm"),(void*)f_5264},
{C_text("f_5272:batch_2ddriver_2escm"),(void*)f_5272},
{C_text("f_5274:batch_2ddriver_2escm"),(void*)f_5274},
{C_text("f_5276:batch_2ddriver_2escm"),(void*)f_5276},
{C_text("f_5280:batch_2ddriver_2escm"),(void*)f_5280},
{C_text("f_5283:batch_2ddriver_2escm"),(void*)f_5283},
{C_text("f_5288:batch_2ddriver_2escm"),(void*)f_5288},
{C_text("f_5294:batch_2ddriver_2escm"),(void*)f_5294},
{C_text("f_5299:batch_2ddriver_2escm"),(void*)f_5299},
{C_text("f_5304:batch_2ddriver_2escm"),(void*)f_5304},
{C_text("f_5340:batch_2ddriver_2escm"),(void*)f_5340},
{C_text("f_5343:batch_2ddriver_2escm"),(void*)f_5343},
{C_text("f_5346:batch_2ddriver_2escm"),(void*)f_5346},
{C_text("f_5353:batch_2ddriver_2escm"),(void*)f_5353},
{C_text("f_5356:batch_2ddriver_2escm"),(void*)f_5356},
{C_text("f_5373:batch_2ddriver_2escm"),(void*)f_5373},
{C_text("f_5377:batch_2ddriver_2escm"),(void*)f_5377},
{C_text("f_5382:batch_2ddriver_2escm"),(void*)f_5382},
{C_text("f_5388:batch_2ddriver_2escm"),(void*)f_5388},
{C_text("f_5391:batch_2ddriver_2escm"),(void*)f_5391},
{C_text("f_5394:batch_2ddriver_2escm"),(void*)f_5394},
{C_text("f_5397:batch_2ddriver_2escm"),(void*)f_5397},
{C_text("f_5400:batch_2ddriver_2escm"),(void*)f_5400},
{C_text("f_5403:batch_2ddriver_2escm"),(void*)f_5403},
{C_text("f_5406:batch_2ddriver_2escm"),(void*)f_5406},
{C_text("f_5409:batch_2ddriver_2escm"),(void*)f_5409},
{C_text("f_5412:batch_2ddriver_2escm"),(void*)f_5412},
{C_text("f_5415:batch_2ddriver_2escm"),(void*)f_5415},
{C_text("f_5418:batch_2ddriver_2escm"),(void*)f_5418},
{C_text("f_5421:batch_2ddriver_2escm"),(void*)f_5421},
{C_text("f_5424:batch_2ddriver_2escm"),(void*)f_5424},
{C_text("f_5427:batch_2ddriver_2escm"),(void*)f_5427},
{C_text("f_5430:batch_2ddriver_2escm"),(void*)f_5430},
{C_text("f_5433:batch_2ddriver_2escm"),(void*)f_5433},
{C_text("f_5436:batch_2ddriver_2escm"),(void*)f_5436},
{C_text("f_5439:batch_2ddriver_2escm"),(void*)f_5439},
{C_text("f_5442:batch_2ddriver_2escm"),(void*)f_5442},
{C_text("f_5445:batch_2ddriver_2escm"),(void*)f_5445},
{C_text("f_5448:batch_2ddriver_2escm"),(void*)f_5448},
{C_text("f_5451:batch_2ddriver_2escm"),(void*)f_5451},
{C_text("f_5456:batch_2ddriver_2escm"),(void*)f_5456},
{C_text("f_5461:batch_2ddriver_2escm"),(void*)f_5461},
{C_text("f_5466:batch_2ddriver_2escm"),(void*)f_5466},
{C_text("f_5471:batch_2ddriver_2escm"),(void*)f_5471},
{C_text("f_5476:batch_2ddriver_2escm"),(void*)f_5476},
{C_text("f_5479:batch_2ddriver_2escm"),(void*)f_5479},
{C_text("f_5482:batch_2ddriver_2escm"),(void*)f_5482},
{C_text("f_5485:batch_2ddriver_2escm"),(void*)f_5485},
{C_text("f_5488:batch_2ddriver_2escm"),(void*)f_5488},
{C_text("f_5491:batch_2ddriver_2escm"),(void*)f_5491},
{C_text("f_5496:batch_2ddriver_2escm"),(void*)f_5496},
{C_text("f_5499:batch_2ddriver_2escm"),(void*)f_5499},
{C_text("f_5502:batch_2ddriver_2escm"),(void*)f_5502},
{C_text("f_5505:batch_2ddriver_2escm"),(void*)f_5505},
{C_text("f_5508:batch_2ddriver_2escm"),(void*)f_5508},
{C_text("f_5511:batch_2ddriver_2escm"),(void*)f_5511},
{C_text("f_5514:batch_2ddriver_2escm"),(void*)f_5514},
{C_text("f_5517:batch_2ddriver_2escm"),(void*)f_5517},
{C_text("f_5520:batch_2ddriver_2escm"),(void*)f_5520},
{C_text("f_5523:batch_2ddriver_2escm"),(void*)f_5523},
{C_text("f_5529:batch_2ddriver_2escm"),(void*)f_5529},
{C_text("f_5532:batch_2ddriver_2escm"),(void*)f_5532},
{C_text("f_5538:batch_2ddriver_2escm"),(void*)f_5538},
{C_text("f_5545:batch_2ddriver_2escm"),(void*)f_5545},
{C_text("f_5548:batch_2ddriver_2escm"),(void*)f_5548},
{C_text("f_5553:batch_2ddriver_2escm"),(void*)f_5553},
{C_text("f_5556:batch_2ddriver_2escm"),(void*)f_5556},
{C_text("f_5571:batch_2ddriver_2escm"),(void*)f_5571},
{C_text("f_5575:batch_2ddriver_2escm"),(void*)f_5575},
{C_text("f_5583:batch_2ddriver_2escm"),(void*)f_5583},
{C_text("f_5586:batch_2ddriver_2escm"),(void*)f_5586},
{C_text("f_5589:batch_2ddriver_2escm"),(void*)f_5589},
{C_text("f_5592:batch_2ddriver_2escm"),(void*)f_5592},
{C_text("f_5596:batch_2ddriver_2escm"),(void*)f_5596},
{C_text("f_5600:batch_2ddriver_2escm"),(void*)f_5600},
{C_text("f_5603:batch_2ddriver_2escm"),(void*)f_5603},
{C_text("f_5607:batch_2ddriver_2escm"),(void*)f_5607},
{C_text("f_5611:batch_2ddriver_2escm"),(void*)f_5611},
{C_text("f_5622:batch_2ddriver_2escm"),(void*)f_5622},
{C_text("f_5625:batch_2ddriver_2escm"),(void*)f_5625},
{C_text("f_5628:batch_2ddriver_2escm"),(void*)f_5628},
{C_text("f_5631:batch_2ddriver_2escm"),(void*)f_5631},
{C_text("f_5634:batch_2ddriver_2escm"),(void*)f_5634},
{C_text("f_5637:batch_2ddriver_2escm"),(void*)f_5637},
{C_text("f_5645:batch_2ddriver_2escm"),(void*)f_5645},
{C_text("f_5656:batch_2ddriver_2escm"),(void*)f_5656},
{C_text("f_5667:batch_2ddriver_2escm"),(void*)f_5667},
{C_text("f_5674:batch_2ddriver_2escm"),(void*)f_5674},
{C_text("f_5683:batch_2ddriver_2escm"),(void*)f_5683},
{C_text("f_5686:batch_2ddriver_2escm"),(void*)f_5686},
{C_text("f_5689:batch_2ddriver_2escm"),(void*)f_5689},
{C_text("f_5695:batch_2ddriver_2escm"),(void*)f_5695},
{C_text("f_5698:batch_2ddriver_2escm"),(void*)f_5698},
{C_text("f_5701:batch_2ddriver_2escm"),(void*)f_5701},
{C_text("f_5704:batch_2ddriver_2escm"),(void*)f_5704},
{C_text("f_5707:batch_2ddriver_2escm"),(void*)f_5707},
{C_text("f_5711:batch_2ddriver_2escm"),(void*)f_5711},
{C_text("f_5715:batch_2ddriver_2escm"),(void*)f_5715},
{C_text("f_5718:batch_2ddriver_2escm"),(void*)f_5718},
{C_text("f_5721:batch_2ddriver_2escm"),(void*)f_5721},
{C_text("f_5724:batch_2ddriver_2escm"),(void*)f_5724},
{C_text("f_5727:batch_2ddriver_2escm"),(void*)f_5727},
{C_text("f_5730:batch_2ddriver_2escm"),(void*)f_5730},
{C_text("f_5733:batch_2ddriver_2escm"),(void*)f_5733},
{C_text("f_5736:batch_2ddriver_2escm"),(void*)f_5736},
{C_text("f_5739:batch_2ddriver_2escm"),(void*)f_5739},
{C_text("f_5742:batch_2ddriver_2escm"),(void*)f_5742},
{C_text("f_5751:batch_2ddriver_2escm"),(void*)f_5751},
{C_text("f_5755:batch_2ddriver_2escm"),(void*)f_5755},
{C_text("f_5761:batch_2ddriver_2escm"),(void*)f_5761},
{C_text("f_5766:batch_2ddriver_2escm"),(void*)f_5766},
{C_text("f_5772:batch_2ddriver_2escm"),(void*)f_5772},
{C_text("f_5778:batch_2ddriver_2escm"),(void*)f_5778},
{C_text("f_5781:batch_2ddriver_2escm"),(void*)f_5781},
{C_text("f_5787:batch_2ddriver_2escm"),(void*)f_5787},
{C_text("f_5802:batch_2ddriver_2escm"),(void*)f_5802},
{C_text("f_5808:batch_2ddriver_2escm"),(void*)f_5808},
{C_text("f_5811:batch_2ddriver_2escm"),(void*)f_5811},
{C_text("f_5814:batch_2ddriver_2escm"),(void*)f_5814},
{C_text("f_5817:batch_2ddriver_2escm"),(void*)f_5817},
{C_text("f_5820:batch_2ddriver_2escm"),(void*)f_5820},
{C_text("f_5823:batch_2ddriver_2escm"),(void*)f_5823},
{C_text("f_5828:batch_2ddriver_2escm"),(void*)f_5828},
{C_text("f_5831:batch_2ddriver_2escm"),(void*)f_5831},
{C_text("f_5834:batch_2ddriver_2escm"),(void*)f_5834},
{C_text("f_5837:batch_2ddriver_2escm"),(void*)f_5837},
{C_text("f_5840:batch_2ddriver_2escm"),(void*)f_5840},
{C_text("f_5843:batch_2ddriver_2escm"),(void*)f_5843},
{C_text("f_5846:batch_2ddriver_2escm"),(void*)f_5846},
{C_text("f_5849:batch_2ddriver_2escm"),(void*)f_5849},
{C_text("f_5852:batch_2ddriver_2escm"),(void*)f_5852},
{C_text("f_5855:batch_2ddriver_2escm"),(void*)f_5855},
{C_text("f_5858:batch_2ddriver_2escm"),(void*)f_5858},
{C_text("f_5861:batch_2ddriver_2escm"),(void*)f_5861},
{C_text("f_5867:batch_2ddriver_2escm"),(void*)f_5867},
{C_text("f_5870:batch_2ddriver_2escm"),(void*)f_5870},
{C_text("f_5873:batch_2ddriver_2escm"),(void*)f_5873},
{C_text("f_5876:batch_2ddriver_2escm"),(void*)f_5876},
{C_text("f_5879:batch_2ddriver_2escm"),(void*)f_5879},
{C_text("f_5884:batch_2ddriver_2escm"),(void*)f_5884},
{C_text("f_5888:batch_2ddriver_2escm"),(void*)f_5888},
{C_text("f_5891:batch_2ddriver_2escm"),(void*)f_5891},
{C_text("f_5894:batch_2ddriver_2escm"),(void*)f_5894},
{C_text("f_5898:batch_2ddriver_2escm"),(void*)f_5898},
{C_text("f_5901:batch_2ddriver_2escm"),(void*)f_5901},
{C_text("f_5904:batch_2ddriver_2escm"),(void*)f_5904},
{C_text("f_5910:batch_2ddriver_2escm"),(void*)f_5910},
{C_text("f_5913:batch_2ddriver_2escm"),(void*)f_5913},
{C_text("f_5918:batch_2ddriver_2escm"),(void*)f_5918},
{C_text("f_5930:batch_2ddriver_2escm"),(void*)f_5930},
{C_text("f_5934:batch_2ddriver_2escm"),(void*)f_5934},
{C_text("f_5937:batch_2ddriver_2escm"),(void*)f_5937},
{C_text("f_5954:batch_2ddriver_2escm"),(void*)f_5954},
{C_text("f_5968:batch_2ddriver_2escm"),(void*)f_5968},
{C_text("f_5980:batch_2ddriver_2escm"),(void*)f_5980},
{C_text("f_5983:batch_2ddriver_2escm"),(void*)f_5983},
{C_text("f_5986:batch_2ddriver_2escm"),(void*)f_5986},
{C_text("f_5989:batch_2ddriver_2escm"),(void*)f_5989},
{C_text("f_5992:batch_2ddriver_2escm"),(void*)f_5992},
{C_text("f_5995:batch_2ddriver_2escm"),(void*)f_5995},
{C_text("f_6011:batch_2ddriver_2escm"),(void*)f_6011},
{C_text("f_6014:batch_2ddriver_2escm"),(void*)f_6014},
{C_text("f_6017:batch_2ddriver_2escm"),(void*)f_6017},
{C_text("f_6020:batch_2ddriver_2escm"),(void*)f_6020},
{C_text("f_6024:batch_2ddriver_2escm"),(void*)f_6024},
{C_text("f_6027:batch_2ddriver_2escm"),(void*)f_6027},
{C_text("f_6030:batch_2ddriver_2escm"),(void*)f_6030},
{C_text("f_6033:batch_2ddriver_2escm"),(void*)f_6033},
{C_text("f_6036:batch_2ddriver_2escm"),(void*)f_6036},
{C_text("f_6039:batch_2ddriver_2escm"),(void*)f_6039},
{C_text("f_6042:batch_2ddriver_2escm"),(void*)f_6042},
{C_text("f_6047:batch_2ddriver_2escm"),(void*)f_6047},
{C_text("f_6053:batch_2ddriver_2escm"),(void*)f_6053},
{C_text("f_6057:batch_2ddriver_2escm"),(void*)f_6057},
{C_text("f_6060:batch_2ddriver_2escm"),(void*)f_6060},
{C_text("f_6063:batch_2ddriver_2escm"),(void*)f_6063},
{C_text("f_6066:batch_2ddriver_2escm"),(void*)f_6066},
{C_text("f_6069:batch_2ddriver_2escm"),(void*)f_6069},
{C_text("f_6072:batch_2ddriver_2escm"),(void*)f_6072},
{C_text("f_6075:batch_2ddriver_2escm"),(void*)f_6075},
{C_text("f_6078:batch_2ddriver_2escm"),(void*)f_6078},
{C_text("f_6081:batch_2ddriver_2escm"),(void*)f_6081},
{C_text("f_6084:batch_2ddriver_2escm"),(void*)f_6084},
{C_text("f_6097:batch_2ddriver_2escm"),(void*)f_6097},
{C_text("f_6106:batch_2ddriver_2escm"),(void*)f_6106},
{C_text("f_6111:batch_2ddriver_2escm"),(void*)f_6111},
{C_text("f_6135:batch_2ddriver_2escm"),(void*)f_6135},
{C_text("f_6141:batch_2ddriver_2escm"),(void*)f_6141},
{C_text("f_6154:batch_2ddriver_2escm"),(void*)f_6154},
{C_text("f_6156:batch_2ddriver_2escm"),(void*)f_6156},
{C_text("f_6181:batch_2ddriver_2escm"),(void*)f_6181},
{C_text("f_6191:batch_2ddriver_2escm"),(void*)f_6191},
{C_text("f_6194:batch_2ddriver_2escm"),(void*)f_6194},
{C_text("f_6197:batch_2ddriver_2escm"),(void*)f_6197},
{C_text("f_6200:batch_2ddriver_2escm"),(void*)f_6200},
{C_text("f_6212:batch_2ddriver_2escm"),(void*)f_6212},
{C_text("f_6215:batch_2ddriver_2escm"),(void*)f_6215},
{C_text("f_6219:batch_2ddriver_2escm"),(void*)f_6219},
{C_text("f_6228:batch_2ddriver_2escm"),(void*)f_6228},
{C_text("f_6231:batch_2ddriver_2escm"),(void*)f_6231},
{C_text("f_6234:batch_2ddriver_2escm"),(void*)f_6234},
{C_text("f_6237:batch_2ddriver_2escm"),(void*)f_6237},
{C_text("f_6240:batch_2ddriver_2escm"),(void*)f_6240},
{C_text("f_6246:batch_2ddriver_2escm"),(void*)f_6246},
{C_text("f_6290:batch_2ddriver_2escm"),(void*)f_6290},
{C_text("f_6296:batch_2ddriver_2escm"),(void*)f_6296},
{C_text("f_6301:batch_2ddriver_2escm"),(void*)f_6301},
{C_text("f_6310:batch_2ddriver_2escm"),(void*)f_6310},
{C_text("f_6316:batch_2ddriver_2escm"),(void*)f_6316},
{C_text("f_6325:batch_2ddriver_2escm"),(void*)f_6325},
{C_text("f_6329:batch_2ddriver_2escm"),(void*)f_6329},
{C_text("f_6335:batch_2ddriver_2escm"),(void*)f_6335},
{C_text("f_6338:batch_2ddriver_2escm"),(void*)f_6338},
{C_text("f_6343:batch_2ddriver_2escm"),(void*)f_6343},
{C_text("f_6346:batch_2ddriver_2escm"),(void*)f_6346},
{C_text("f_6349:batch_2ddriver_2escm"),(void*)f_6349},
{C_text("f_6352:batch_2ddriver_2escm"),(void*)f_6352},
{C_text("f_6355:batch_2ddriver_2escm"),(void*)f_6355},
{C_text("f_6358:batch_2ddriver_2escm"),(void*)f_6358},
{C_text("f_6361:batch_2ddriver_2escm"),(void*)f_6361},
{C_text("f_6364:batch_2ddriver_2escm"),(void*)f_6364},
{C_text("f_6370:batch_2ddriver_2escm"),(void*)f_6370},
{C_text("f_6380:batch_2ddriver_2escm"),(void*)f_6380},
{C_text("f_6393:batch_2ddriver_2escm"),(void*)f_6393},
{C_text("f_6403:batch_2ddriver_2escm"),(void*)f_6403},
{C_text("f_6422:batch_2ddriver_2escm"),(void*)f_6422},
{C_text("f_6434:batch_2ddriver_2escm"),(void*)f_6434},
{C_text("f_6445:batch_2ddriver_2escm"),(void*)f_6445},
{C_text("f_6455:batch_2ddriver_2escm"),(void*)f_6455},
{C_text("f_6471:batch_2ddriver_2escm"),(void*)f_6471},
{C_text("f_6477:batch_2ddriver_2escm"),(void*)f_6477},
{C_text("f_6484:batch_2ddriver_2escm"),(void*)f_6484},
{C_text("f_6492:batch_2ddriver_2escm"),(void*)f_6492},
{C_text("f_6502:batch_2ddriver_2escm"),(void*)f_6502},
{C_text("f_6517:batch_2ddriver_2escm"),(void*)f_6517},
{C_text("f_6521:batch_2ddriver_2escm"),(void*)f_6521},
{C_text("f_6524:batch_2ddriver_2escm"),(void*)f_6524},
{C_text("f_6527:batch_2ddriver_2escm"),(void*)f_6527},
{C_text("f_6537:batch_2ddriver_2escm"),(void*)f_6537},
{C_text("f_6542:batch_2ddriver_2escm"),(void*)f_6542},
{C_text("f_6567:batch_2ddriver_2escm"),(void*)f_6567},
{C_text("f_6582:batch_2ddriver_2escm"),(void*)f_6582},
{C_text("f_6588:batch_2ddriver_2escm"),(void*)f_6588},
{C_text("f_6599:batch_2ddriver_2escm"),(void*)f_6599},
{C_text("f_6603:batch_2ddriver_2escm"),(void*)f_6603},
{C_text("f_6611:batch_2ddriver_2escm"),(void*)f_6611},
{C_text("f_6614:batch_2ddriver_2escm"),(void*)f_6614},
{C_text("f_6617:batch_2ddriver_2escm"),(void*)f_6617},
{C_text("f_6620:batch_2ddriver_2escm"),(void*)f_6620},
{C_text("f_6637:batch_2ddriver_2escm"),(void*)f_6637},
{C_text("f_6647:batch_2ddriver_2escm"),(void*)f_6647},
{C_text("f_6668:batch_2ddriver_2escm"),(void*)f_6668},
{C_text("f_6687:batch_2ddriver_2escm"),(void*)f_6687},
{C_text("f_6689:batch_2ddriver_2escm"),(void*)f_6689},
{C_text("f_6714:batch_2ddriver_2escm"),(void*)f_6714},
{C_text("f_6746:batch_2ddriver_2escm"),(void*)f_6746},
{C_text("f_6750:batch_2ddriver_2escm"),(void*)f_6750},
{C_text("f_6754:batch_2ddriver_2escm"),(void*)f_6754},
{C_text("f_6780:batch_2ddriver_2escm"),(void*)f_6780},
{C_text("f_6814:batch_2ddriver_2escm"),(void*)f_6814},
{C_text("f_6839:batch_2ddriver_2escm"),(void*)f_6839},
{C_text("f_6848:batch_2ddriver_2escm"),(void*)f_6848},
{C_text("f_6873:batch_2ddriver_2escm"),(void*)f_6873},
{C_text("f_6898:batch_2ddriver_2escm"),(void*)f_6898},
{C_text("f_6904:batch_2ddriver_2escm"),(void*)f_6904},
{C_text("f_6929:batch_2ddriver_2escm"),(void*)f_6929},
{C_text("f_6939:batch_2ddriver_2escm"),(void*)f_6939},
{C_text("f_6949:batch_2ddriver_2escm"),(void*)f_6949},
{C_text("f_6951:batch_2ddriver_2escm"),(void*)f_6951},
{C_text("f_6976:batch_2ddriver_2escm"),(void*)f_6976},
{C_text("f_6986:batch_2ddriver_2escm"),(void*)f_6986},
{C_text("f_6990:batch_2ddriver_2escm"),(void*)f_6990},
{C_text("f_6995:batch_2ddriver_2escm"),(void*)f_6995},
{C_text("f_7006:batch_2ddriver_2escm"),(void*)f_7006},
{C_text("f_7016:batch_2ddriver_2escm"),(void*)f_7016},
{C_text("f_7020:batch_2ddriver_2escm"),(void*)f_7020},
{C_text("f_7030:batch_2ddriver_2escm"),(void*)f_7030},
{C_text("f_7032:batch_2ddriver_2escm"),(void*)f_7032},
{C_text("f_7057:batch_2ddriver_2escm"),(void*)f_7057},
{C_text("f_7066:batch_2ddriver_2escm"),(void*)f_7066},
{C_text("f_7091:batch_2ddriver_2escm"),(void*)f_7091},
{C_text("f_7104:batch_2ddriver_2escm"),(void*)f_7104},
{C_text("f_7107:batch_2ddriver_2escm"),(void*)f_7107},
{C_text("f_7114:batch_2ddriver_2escm"),(void*)f_7114},
{C_text("f_7119:batch_2ddriver_2escm"),(void*)f_7119},
{C_text("f_7125:batch_2ddriver_2escm"),(void*)f_7125},
{C_text("f_7129:batch_2ddriver_2escm"),(void*)f_7129},
{C_text("f_7147:batch_2ddriver_2escm"),(void*)f_7147},
{C_text("f_7154:batch_2ddriver_2escm"),(void*)f_7154},
{C_text("f_7162:batch_2ddriver_2escm"),(void*)f_7162},
{C_text("f_7180:batch_2ddriver_2escm"),(void*)f_7180},
{C_text("f_7186:batch_2ddriver_2escm"),(void*)f_7186},
{C_text("f_7235:batch_2ddriver_2escm"),(void*)f_7235},
{C_text("f_7242:batch_2ddriver_2escm"),(void*)f_7242},
{C_text("f_7258:batch_2ddriver_2escm"),(void*)f_7258},
{C_text("f_7261:batch_2ddriver_2escm"),(void*)f_7261},
{C_text("f_7267:batch_2ddriver_2escm"),(void*)f_7267},
{C_text("f_7269:batch_2ddriver_2escm"),(void*)f_7269},
{C_text("f_7303:batch_2ddriver_2escm"),(void*)f_7303},
{C_text("f_7310:batch_2ddriver_2escm"),(void*)f_7310},
{C_text("f_7315:batch_2ddriver_2escm"),(void*)f_7315},
{C_text("f_7340:batch_2ddriver_2escm"),(void*)f_7340},
{C_text("f_7351:batch_2ddriver_2escm"),(void*)f_7351},
{C_text("f_7358:batch_2ddriver_2escm"),(void*)f_7358},
{C_text("f_7372:batch_2ddriver_2escm"),(void*)f_7372},
{C_text("f_7379:batch_2ddriver_2escm"),(void*)f_7379},
{C_text("f_7384:batch_2ddriver_2escm"),(void*)f_7384},
{C_text("f_7409:batch_2ddriver_2escm"),(void*)f_7409},
{C_text("f_7420:batch_2ddriver_2escm"),(void*)f_7420},
{C_text("f_7422:batch_2ddriver_2escm"),(void*)f_7422},
{C_text("f_7432:batch_2ddriver_2escm"),(void*)f_7432},
{C_text("f_7445:batch_2ddriver_2escm"),(void*)f_7445},
{C_text("f_7455:batch_2ddriver_2escm"),(void*)f_7455},
{C_text("f_7468:batch_2ddriver_2escm"),(void*)f_7468},
{C_text("f_7476:batch_2ddriver_2escm"),(void*)f_7476},
{C_text("f_7478:batch_2ddriver_2escm"),(void*)f_7478},
{C_text("f_7488:batch_2ddriver_2escm"),(void*)f_7488},
{C_text("f_7501:batch_2ddriver_2escm"),(void*)f_7501},
{C_text("f_7509:batch_2ddriver_2escm"),(void*)f_7509},
{C_text("f_7522:batch_2ddriver_2escm"),(void*)f_7522},
{C_text("f_7531:batch_2ddriver_2escm"),(void*)f_7531},
{C_text("f_7536:batch_2ddriver_2escm"),(void*)f_7536},
{C_text("f_7547:batch_2ddriver_2escm"),(void*)f_7547},
{C_text("f_7557:batch_2ddriver_2escm"),(void*)f_7557},
{C_text("f_7570:batch_2ddriver_2escm"),(void*)f_7570},
{C_text("f_7580:batch_2ddriver_2escm"),(void*)f_7580},
{C_text("f_7625:batch_2ddriver_2escm"),(void*)f_7625},
{C_text("f_7631:batch_2ddriver_2escm"),(void*)f_7631},
{C_text("f_7633:batch_2ddriver_2escm"),(void*)f_7633},
{C_text("f_7658:batch_2ddriver_2escm"),(void*)f_7658},
{C_text("f_7670:batch_2ddriver_2escm"),(void*)f_7670},
{C_text("f_7673:batch_2ddriver_2escm"),(void*)f_7673},
{C_text("f_7676:batch_2ddriver_2escm"),(void*)f_7676},
{C_text("f_7679:batch_2ddriver_2escm"),(void*)f_7679},
{C_text("f_7687:batch_2ddriver_2escm"),(void*)f_7687},
{C_text("f_7695:batch_2ddriver_2escm"),(void*)f_7695},
{C_text("f_7701:batch_2ddriver_2escm"),(void*)f_7701},
{C_text("f_7734:batch_2ddriver_2escm"),(void*)f_7734},
{C_text("f_7737:batch_2ddriver_2escm"),(void*)f_7737},
{C_text("f_7744:batch_2ddriver_2escm"),(void*)f_7744},
{C_text("f_7747:batch_2ddriver_2escm"),(void*)f_7747},
{C_text("f_7750:batch_2ddriver_2escm"),(void*)f_7750},
{C_text("f_7757:batch_2ddriver_2escm"),(void*)f_7757},
{C_text("f_7760:batch_2ddriver_2escm"),(void*)f_7760},
{C_text("f_7763:batch_2ddriver_2escm"),(void*)f_7763},
{C_text("f_7770:batch_2ddriver_2escm"),(void*)f_7770},
{C_text("f_7776:batch_2ddriver_2escm"),(void*)f_7776},
{C_text("f_7780:batch_2ddriver_2escm"),(void*)f_7780},
{C_text("f_7812:batch_2ddriver_2escm"),(void*)f_7812},
{C_text("f_7863:batch_2ddriver_2escm"),(void*)f_7863},
{C_text("f_7901:batch_2ddriver_2escm"),(void*)f_7901},
{C_text("f_7906:batch_2ddriver_2escm"),(void*)f_7906},
{C_text("f_7922:batch_2ddriver_2escm"),(void*)f_7922},
{C_text("f_7927:batch_2ddriver_2escm"),(void*)f_7927},
{C_text("f_7952:batch_2ddriver_2escm"),(void*)f_7952},
{C_text("f_7963:batch_2ddriver_2escm"),(void*)f_7963},
{C_text("f_7977:batch_2ddriver_2escm"),(void*)f_7977},
{C_text("f_7981:batch_2ddriver_2escm"),(void*)f_7981},
{C_text("f_7998:batch_2ddriver_2escm"),(void*)f_7998},
{C_text("f_8023:batch_2ddriver_2escm"),(void*)f_8023},
{C_text("f_8034:batch_2ddriver_2escm"),(void*)f_8034},
{C_text("f_8038:batch_2ddriver_2escm"),(void*)f_8038},
{C_text("f_8042:batch_2ddriver_2escm"),(void*)f_8042},
{C_text("f_8066:batch_2ddriver_2escm"),(void*)f_8066},
{C_text("f_8092:batch_2ddriver_2escm"),(void*)f_8092},
{C_text("f_8100:batch_2ddriver_2escm"),(void*)f_8100},
{C_text("f_8107:batch_2ddriver_2escm"),(void*)f_8107},
{C_text("toplevel:batch_2ddriver_2escm"),(void*)C_batch_2ddriver_toplevel},
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
o|hiding unexported module binding: chicken.compiler.batch-driver#partition 
o|hiding unexported module binding: chicken.compiler.batch-driver#span 
o|hiding unexported module binding: chicken.compiler.batch-driver#take 
o|hiding unexported module binding: chicken.compiler.batch-driver#drop 
o|hiding unexported module binding: chicken.compiler.batch-driver#split-at 
o|hiding unexported module binding: chicken.compiler.batch-driver#append-map 
o|hiding unexported module binding: chicken.compiler.batch-driver#every 
o|hiding unexported module binding: chicken.compiler.batch-driver#any 
o|hiding unexported module binding: chicken.compiler.batch-driver#cons* 
o|hiding unexported module binding: chicken.compiler.batch-driver#concatenate 
o|hiding unexported module binding: chicken.compiler.batch-driver#delete 
o|hiding unexported module binding: chicken.compiler.batch-driver#first 
o|hiding unexported module binding: chicken.compiler.batch-driver#second 
o|hiding unexported module binding: chicken.compiler.batch-driver#third 
o|hiding unexported module binding: chicken.compiler.batch-driver#fourth 
o|hiding unexported module binding: chicken.compiler.batch-driver#fifth 
o|hiding unexported module binding: chicken.compiler.batch-driver#delete-duplicates 
o|hiding unexported module binding: chicken.compiler.batch-driver#alist-cons 
o|hiding unexported module binding: chicken.compiler.batch-driver#filter 
o|hiding unexported module binding: chicken.compiler.batch-driver#filter-map 
o|hiding unexported module binding: chicken.compiler.batch-driver#remove 
o|hiding unexported module binding: chicken.compiler.batch-driver#unzip1 
o|hiding unexported module binding: chicken.compiler.batch-driver#last 
o|hiding unexported module binding: chicken.compiler.batch-driver#list-index 
o|hiding unexported module binding: chicken.compiler.batch-driver#lset-adjoin/eq? 
o|hiding unexported module binding: chicken.compiler.batch-driver#lset-difference/eq? 
o|hiding unexported module binding: chicken.compiler.batch-driver#lset-union/eq? 
o|hiding unexported module binding: chicken.compiler.batch-driver#lset-intersection/eq? 
o|hiding unexported module binding: chicken.compiler.batch-driver#list-tabulate 
o|hiding unexported module binding: chicken.compiler.batch-driver#lset<=/eq? 
o|hiding unexported module binding: chicken.compiler.batch-driver#lset=/eq? 
o|hiding unexported module binding: chicken.compiler.batch-driver#length+ 
o|hiding unexported module binding: chicken.compiler.batch-driver#find 
o|hiding unexported module binding: chicken.compiler.batch-driver#find-tail 
o|hiding unexported module binding: chicken.compiler.batch-driver#iota 
o|hiding unexported module binding: chicken.compiler.batch-driver#make-list 
o|hiding unexported module binding: chicken.compiler.batch-driver#posq 
o|hiding unexported module binding: chicken.compiler.batch-driver#posv 
o|hiding unexported module binding: chicken.compiler.batch-driver#print-program-statistics 
o|hiding unexported module binding: chicken.compiler.batch-driver#initialize-analysis-database 
o|hiding unexported module binding: chicken.compiler.batch-driver#display-analysis-database 
S|applied compiler syntax:
S|  scheme#for-each		15
S|  chicken.format#printf		18
S|  chicken.base#foldl		3
S|  scheme#map		20
S|  chicken.base#foldr		3
o|eliminated procedure checks: 190 
o|folded constant expression: (scheme#* (quote 1024) (quote 1024)) 
o|specializations:
o|  1 (scheme#current-output-port)
o|  5 (chicken.base#add1 *)
o|  2 (scheme#string=? string string)
o|  1 (scheme#string-append string string)
o|  4 (scheme#eqv? (or eof null fixnum char boolean symbol keyword) *)
o|  1 (scheme#< fixnum fixnum)
o|  1 (scheme#- fixnum fixnum)
o|  68 (scheme#memq * list)
o|  40 (scheme#eqv? * (or eof null fixnum char boolean symbol keyword))
o|  18 (##sys#check-output-port * * *)
o|  1 (scheme#eqv? * *)
o|  6 (##sys#check-list (or pair list) *)
o|  27 (scheme#cdr pair)
o|  10 (scheme#car pair)
(o e)|safe calls: 675 
(o e)|assignments to immediate values: 5 
o|safe globals: (chicken.compiler.batch-driver#compile-source-file chicken.compiler.batch-driver#display-analysis-database chicken.compiler.batch-driver#initialize-analysis-database chicken.compiler.batch-driver#print-program-statistics chicken.compiler.batch-driver#posv chicken.compiler.batch-driver#posq chicken.compiler.batch-driver#make-list chicken.compiler.batch-driver#iota chicken.compiler.batch-driver#find-tail chicken.compiler.batch-driver#find chicken.compiler.batch-driver#length+ chicken.compiler.batch-driver#lset=/eq? chicken.compiler.batch-driver#lset<=/eq? chicken.compiler.batch-driver#list-tabulate chicken.compiler.batch-driver#lset-intersection/eq? chicken.compiler.batch-driver#lset-union/eq? chicken.compiler.batch-driver#lset-difference/eq? chicken.compiler.batch-driver#lset-adjoin/eq? chicken.compiler.batch-driver#list-index chicken.compiler.batch-driver#last chicken.compiler.batch-driver#unzip1 chicken.compiler.batch-driver#remove chicken.compiler.batch-driver#filter-map chicken.compiler.batch-driver#filter chicken.compiler.batch-driver#alist-cons chicken.compiler.batch-driver#delete-duplicates chicken.compiler.batch-driver#fifth chicken.compiler.batch-driver#fourth chicken.compiler.batch-driver#third chicken.compiler.batch-driver#second chicken.compiler.batch-driver#first chicken.compiler.batch-driver#delete chicken.compiler.batch-driver#concatenate chicken.compiler.batch-driver#cons* chicken.compiler.batch-driver#any chicken.compiler.batch-driver#every chicken.compiler.batch-driver#append-map chicken.compiler.batch-driver#split-at chicken.compiler.batch-driver#drop chicken.compiler.batch-driver#take chicken.compiler.batch-driver#span chicken.compiler.batch-driver#partition) 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#partition 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#span 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#drop 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#split-at 
o|merged explicitly consed rest parameter: lsts258 
o|inlining procedure: k2933 
o|inlining procedure: k2948 
o|inlining procedure: k2948 
o|inlining procedure: k2933 
o|inlining procedure: k2988 
o|inlining procedure: k2988 
o|inlining procedure: k3020 
o|contracted procedure: "(mini-srfi-1.scm:77) g311320" 
o|inlining procedure: k3020 
o|inlining procedure: k3069 
o|contracted procedure: "(mini-srfi-1.scm:76) g284293" 
o|inlining procedure: k3069 
o|inlining procedure: k3112 
o|inlining procedure: k3112 
o|inlining procedure: k3143 
o|inlining procedure: k3143 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#cons* 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#concatenate 
o|inlining procedure: k3229 
o|inlining procedure: k3229 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#second 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#third 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#fourth 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#fifth 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#delete-duplicates 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#alist-cons 
o|inlining procedure: k3360 
o|inlining procedure: k3360 
o|inlining procedure: k3352 
o|inlining procedure: k3352 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#filter-map 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#remove 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#unzip1 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#last 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#list-index 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#lset-adjoin/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#lset-difference/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#lset-intersection/eq? 
o|inlining procedure: k3751 
o|inlining procedure: k3751 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#lset<=/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#lset=/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#length+ 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#find 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#find-tail 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#iota 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#make-list 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#posq 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#posv 
o|inlining procedure: k4111 
o|inlining procedure: k4151 
o|contracted procedure: "(batch-driver.scm:97) g797804" 
o|inlining procedure: k4151 
o|propagated global variable: g803805 chicken.compiler.core#internal-bindings 
o|inlining procedure: k4174 
o|contracted procedure: "(batch-driver.scm:93) g779786" 
o|inlining procedure: k4174 
o|propagated global variable: g785787 chicken.compiler.core#extended-bindings 
o|inlining procedure: k4197 
o|contracted procedure: "(batch-driver.scm:89) g761768" 
o|inlining procedure: k4197 
o|propagated global variable: g767769 chicken.compiler.core#standard-bindings 
o|inlining procedure: k4111 
o|inlining procedure: k4229 
o|inlining procedure: k4229 
o|inlining procedure: k4294 
o|contracted procedure: "(batch-driver.scm:168) g983990" 
o|propagated global variable: out993996 ##sys#standard-output 
o|substituted constant variable: a4265 
o|substituted constant variable: a4266 
o|propagated global variable: out993996 ##sys#standard-output 
o|inlining procedure: k4294 
o|propagated global variable: out967970 ##sys#standard-output 
o|substituted constant variable: a4318 
o|substituted constant variable: a4319 
o|propagated global variable: out967970 ##sys#standard-output 
o|propagated global variable: out974977 ##sys#standard-output 
o|substituted constant variable: a4345 
o|substituted constant variable: a4346 
o|inlining procedure: k4338 
o|propagated global variable: out974977 ##sys#standard-output 
o|inlining procedure: k4338 
o|propagated global variable: out956959 ##sys#standard-output 
o|substituted constant variable: a4383 
o|substituted constant variable: a4384 
o|propagated global variable: out956959 ##sys#standard-output 
o|propagated global variable: out950953 ##sys#standard-output 
o|substituted constant variable: a4399 
o|substituted constant variable: a4400 
o|propagated global variable: out950953 ##sys#standard-output 
o|propagated global variable: out944947 ##sys#standard-output 
o|substituted constant variable: a4415 
o|substituted constant variable: a4416 
o|propagated global variable: out944947 ##sys#standard-output 
o|inlining procedure: k4430 
o|propagated global variable: out895898 ##sys#standard-output 
o|substituted constant variable: a4454 
o|substituted constant variable: a4455 
o|substituted constant variable: names816 
o|propagated global variable: out895898 ##sys#standard-output 
o|inlining procedure: k4474 
o|inlining procedure: k4474 
o|inlining procedure: k4487 
o|inlining procedure: k4487 
o|inlining procedure: k4497 
o|inlining procedure: k4497 
o|propagated global variable: out934937 ##sys#standard-output 
o|substituted constant variable: a4533 
o|substituted constant variable: a4534 
o|inlining procedure: k4523 
o|propagated global variable: out934937 ##sys#standard-output 
o|inlining procedure: k4523 
o|inlining procedure: k4565 
o|inlining procedure: k4565 
o|substituted constant variable: a4591 
o|substituted constant variable: a4593 
o|substituted constant variable: a4595 
o|inlining procedure: k4599 
o|inlining procedure: k4599 
o|inlining procedure: k4611 
o|inlining procedure: k4611 
o|inlining procedure: k4623 
o|inlining procedure: k4623 
o|inlining procedure: k4635 
o|inlining procedure: k4635 
o|inlining procedure: k4647 
o|inlining procedure: k4647 
o|substituted constant variable: a4660 
o|substituted constant variable: a4662 
o|substituted constant variable: a4664 
o|substituted constant variable: a4666 
o|substituted constant variable: a4668 
o|substituted constant variable: a4670 
o|substituted constant variable: a4672 
o|substituted constant variable: a4674 
o|substituted constant variable: a4676 
o|substituted constant variable: a4678 
o|substituted constant variable: a4680 
o|substituted constant variable: a4682 
o|substituted constant variable: a4684 
o|substituted constant variable: a4686 
o|substituted constant variable: a4688 
o|substituted constant variable: a4690 
o|inlining procedure: k4694 
o|inlining procedure: k4694 
o|inlining procedure: k4706 
o|inlining procedure: k4706 
o|inlining procedure: k4718 
o|inlining procedure: k4718 
o|inlining procedure: k4730 
o|inlining procedure: k4730 
o|inlining procedure: k4742 
o|inlining procedure: k4742 
o|inlining procedure: k4754 
o|inlining procedure: k4754 
o|inlining procedure: k4766 
o|inlining procedure: k4766 
o|inlining procedure: k4778 
o|inlining procedure: k4778 
o|inlining procedure: k4790 
o|inlining procedure: k4790 
o|inlining procedure: k4802 
o|inlining procedure: k4802 
o|substituted constant variable: a4809 
o|substituted constant variable: a4811 
o|substituted constant variable: a4813 
o|substituted constant variable: a4815 
o|substituted constant variable: a4817 
o|substituted constant variable: a4819 
o|substituted constant variable: a4821 
o|substituted constant variable: a4823 
o|substituted constant variable: a4825 
o|substituted constant variable: a4827 
o|substituted constant variable: a4829 
o|substituted constant variable: a4831 
o|substituted constant variable: a4833 
o|substituted constant variable: a4835 
o|substituted constant variable: a4837 
o|substituted constant variable: a4839 
o|substituted constant variable: a4841 
o|substituted constant variable: a4843 
o|substituted constant variable: a4845 
o|substituted constant variable: a4847 
o|substituted constant variable: a4849 
o|inlining procedure: k4430 
o|inlining procedure: k4860 
o|inlining procedure: k4860 
o|substituted constant variable: a4891 
o|substituted constant variable: a4894 
o|substituted constant variable: a4905 
o|substituted constant variable: a4907 
o|substituted constant variable: a4915 
o|substituted constant variable: a4935 
o|substituted constant variable: a4940 
o|substituted constant variable: a4945 
o|substituted constant variable: a4947 
o|substituted constant variable: a4949 
o|substituted constant variable: a4951 
o|substituted constant variable: a4953 
o|substituted constant variable: a4955 
o|substituted constant variable: a4960 
o|merged explicitly consed rest parameter: args1156 
o|propagated global variable: out11601163 ##sys#standard-output 
o|substituted constant variable: a4994 
o|substituted constant variable: a4995 
o|inlining procedure: k4987 
o|propagated global variable: out11601163 ##sys#standard-output 
o|inlining procedure: k4987 
o|inlining procedure: k5011 
o|inlining procedure: k5011 
o|propagated global variable: out11771180 ##sys#standard-output 
o|substituted constant variable: a5040 
o|substituted constant variable: a5041 
o|inlining procedure: k5033 
o|propagated global variable: out11771180 ##sys#standard-output 
o|inlining procedure: k5033 
o|inlining procedure: k5060 
o|inlining procedure: k5083 
o|contracted procedure: "(batch-driver.scm:279) g11921199" 
o|inlining procedure: k5083 
o|inlining procedure: k5060 
o|substituted constant variable: a5110 
o|inlining procedure: k5114 
o|inlining procedure: k5114 
o|inlining procedure: k5129 
o|inlining procedure: k5129 
o|substituted constant variable: a5176 
o|substituted constant variable: a5178 
o|substituted constant variable: a5183 
o|substituted constant variable: a5185 
o|substituted constant variable: a5187 
o|inlining procedure: k5200 
o|inlining procedure: k5200 
o|inlining procedure: k5226 
o|inlining procedure: "(batch-driver.scm:302) cputime1116" 
o|inlining procedure: k5226 
o|propagated global variable: out12401243 ##sys#standard-output 
o|substituted constant variable: a5240 
o|substituted constant variable: a5241 
o|inlining procedure: k5236 
o|inlining procedure: "(batch-driver.scm:308) cputime1116" 
o|propagated global variable: out12401243 ##sys#standard-output 
o|inlining procedure: k5236 
o|merged explicitly consed rest parameter: args1251 
o|inlining procedure: k5281 
o|propagated global variable: g12761277 chicken.compiler.support#db-get 
o|propagated global variable: g12901291 chicken.compiler.support#db-put! 
o|inlining procedure: k5281 
o|inlining procedure: k5309 
o|inlining procedure: k5309 
o|substituted constant variable: a5348 
o|substituted constant variable: a5452 
o|substituted constant variable: a5457 
o|substituted constant variable: a5462 
o|substituted constant variable: a5467 
o|substituted constant variable: a5472 
o|substituted constant variable: a5617 
o|substituted constant variable: a5641 
o|inlining procedure: k5638 
o|inlining procedure: k5638 
o|substituted constant variable: a5652 
o|substituted constant variable: a5663 
o|inlining procedure: k5660 
o|inlining procedure: k5660 
o|inlining procedure: k5905 
o|inlining procedure: k5920 
o|inlining procedure: k5920 
o|inlining procedure: k5938 
o|inlining procedure: k5938 
o|inlining procedure: k5960 
o|inlining procedure: k5960 
o|consed rest parameter at call site: "(batch-driver.scm:799) analyze1126" 3 
o|inlining procedure: k5905 
o|consed rest parameter at call site: "(batch-driver.scm:869) dribble1117" 2 
o|consed rest parameter at call site: "(batch-driver.scm:860) dribble1117" 2 
o|propagated global variable: g21592160 chicken.pretty-print#pp 
o|consed rest parameter at call site: "(batch-driver.scm:855) dribble1117" 2 
o|inlining procedure: "(batch-driver.scm:841) cputime1116" 
o|inlining procedure: k6158 
o|inlining procedure: k6158 
o|propagated global variable: g21362140 chicken.compiler.core#foreign-lambda-stubs 
o|consed rest parameter at call site: "(batch-driver.scm:830) dribble1117" 2 
o|inlining procedure: k6201 
o|inlining procedure: k6201 
o|contracted procedure: "(batch-driver.scm:772) chicken.compiler.batch-driver#print-program-statistics" 
o|propagated global variable: out707710 ##sys#standard-output 
o|substituted constant variable: a4031 
o|substituted constant variable: a4032 
o|propagated global variable: out716719 ##sys#standard-output 
o|substituted constant variable: a4049 
o|substituted constant variable: a4050 
o|propagated global variable: out723726 ##sys#standard-output 
o|substituted constant variable: a4061 
o|substituted constant variable: a4062 
o|propagated global variable: out730733 ##sys#standard-output 
o|substituted constant variable: a4073 
o|substituted constant variable: a4074 
o|propagated global variable: out737740 ##sys#standard-output 
o|substituted constant variable: a4085 
o|substituted constant variable: a4086 
o|propagated global variable: out744747 ##sys#standard-output 
o|substituted constant variable: a4097 
o|substituted constant variable: a4098 
o|inlining procedure: k4024 
o|propagated global variable: out744747 ##sys#standard-output 
o|propagated global variable: out737740 ##sys#standard-output 
o|propagated global variable: out730733 ##sys#standard-output 
o|propagated global variable: out723726 ##sys#standard-output 
o|propagated global variable: out716719 ##sys#standard-output 
o|propagated global variable: out707710 ##sys#standard-output 
o|inlining procedure: k4024 
o|inlining procedure: k6241 
o|consed rest parameter at call site: "(batch-driver.scm:765) dribble1117" 2 
o|inlining procedure: k6241 
o|inlining procedure: k6250 
o|propagated global variable: r62518304 chicken.compiler.core#types-output-file 
o|inlining procedure: k6250 
o|consed rest parameter at call site: "(batch-driver.scm:752) analyze1126" 3 
o|contracted procedure: "(batch-driver.scm:736) chicken.compiler.batch-driver#first" 
o|inlining procedure: k6362 
o|inlining procedure: k6362 
o|consed rest parameter at call site: "(batch-driver.scm:717) analyze1126" 3 
o|inlining procedure: k6372 
o|contracted procedure: "(batch-driver.scm:709) g20412048" 
o|inlining procedure: k6372 
o|inlining procedure: k6395 
o|contracted procedure: "(batch-driver.scm:704) g20202027" 
o|inlining procedure: k6302 
o|inlining procedure: k6302 
o|inlining procedure: k6395 
o|substituted constant variable: a6415 
o|inlining procedure: k6417 
o|inlining procedure: k6417 
o|consed rest parameter at call site: "(batch-driver.scm:693) dribble1117" 2 
o|inlining procedure: k6447 
o|inlining procedure: k6447 
o|inlining procedure: k6472 
o|consed rest parameter at call site: "(batch-driver.scm:685) dribble1117" 2 
o|inlining procedure: k6472 
o|propagated global variable: extensions1971 chicken.compiler.core#required-libraries 
o|inlining procedure: k6494 
o|inlining procedure: k6494 
o|inlining procedure: k6544 
o|inlining procedure: k6544 
o|consed rest parameter at call site: "(batch-driver.scm:665) dribble1117" 2 
o|substituted constant variable: a6575 
o|inlining procedure: k6639 
o|contracted procedure: "(batch-driver.scm:646) g19141921" 
o|propagated global variable: out19241927 ##sys#standard-output 
o|substituted constant variable: a6607 
o|substituted constant variable: a6608 
o|propagated global variable: out19241927 ##sys#standard-output 
o|inlining procedure: k6639 
o|propagated global variable: g19201922 chicken.compiler.compiler-syntax#compiler-syntax-statistics 
o|inlining procedure: k6691 
o|contracted procedure: "(batch-driver.scm:638) g18921901" 
o|inlining procedure: k6691 
o|propagated global variable: g18981902 chicken.compiler.core#import-libraries 
o|inlining procedure: k6763 
o|inlining procedure: k6763 
o|inlining procedure: k6782 
o|contracted procedure: "(batch-driver.scm:620) g18551864" 
o|inlining procedure: k6782 
o|propagated global variable: g18611865 chicken.compiler.core#immutable-constants 
o|inlining procedure: k6816 
o|contracted procedure: "(batch-driver.scm:616) g18241833" 
o|inlining procedure: k6816 
o|inlining procedure: k6850 
o|inlining procedure: k6850 
o|inlining procedure: k6906 
o|inlining procedure: k6906 
o|inlining procedure: k6953 
o|inlining procedure: k6953 
o|consed rest parameter at call site: "(batch-driver.scm:600) dribble1117" 2 
o|consed rest parameter at call site: "(batch-driver.scm:577) dribble1117" 2 
o|inlining procedure: k6997 
o|inlining procedure: k7034 
o|inlining procedure: k7034 
o|inlining procedure: k7068 
o|inlining procedure: k7068 
o|inlining procedure: k6997 
o|inlining procedure: k7130 
o|inlining procedure: k7130 
o|inlining procedure: "(batch-driver.scm:564) cputime1116" 
o|consed rest parameter at call site: "(batch-driver.scm:559) dribble1117" 2 
o|substituted constant variable: a7163 
o|inlining procedure: k7165 
o|substituted constant variable: a7168 
o|inlining procedure: k7165 
o|substituted constant variable: a7173 
o|consed rest parameter at call site: "(batch-driver.scm:538) dribble1117" 2 
o|inlining procedure: k7191 
o|consed rest parameter at call site: "(batch-driver.scm:538) dribble1117" 2 
o|inlining procedure: k7191 
o|consed rest parameter at call site: "(batch-driver.scm:538) dribble1117" 2 
o|inlining procedure: k7195 
o|inlining procedure: k7195 
o|consed rest parameter at call site: "(batch-driver.scm:520) dribble1117" 2 
o|inlining procedure: k7212 
o|consed rest parameter at call site: "(batch-driver.scm:520) dribble1117" 2 
o|inlining procedure: k7212 
o|consed rest parameter at call site: "(batch-driver.scm:520) dribble1117" 2 
o|substituted constant variable: a7215 
o|substituted constant variable: a7227 
o|substituted constant variable: a7243 
o|inlining procedure: k7271 
o|contracted procedure: "(batch-driver.scm:500) g15881597" 
o|inlining procedure: k7271 
o|contracted procedure: "(batch-driver.scm:494) chicken.compiler.batch-driver#lset-union/eq?" 
o|propagated global variable: ls531 chicken.compiler.core#linked-libraries 
o|inlining procedure: k3654 
o|contracted procedure: "(mini-srfi-1.scm:171) g545546" 
o|inlining procedure: k3679 
o|contracted procedure: "(mini-srfi-1.scm:173) g561562" 
o|inlining procedure: k3695 
o|inlining procedure: k3695 
o|inlining procedure: k3679 
o|inlining procedure: k3654 
o|inlining procedure: k7317 
o|inlining procedure: k7317 
o|consed rest parameter at call site: "(batch-driver.scm:491) chicken.compiler.batch-driver#append-map" 3 
o|inlining procedure: k7386 
o|inlining procedure: k7386 
o|consed rest parameter at call site: "(batch-driver.scm:483) chicken.compiler.batch-driver#append-map" 3 
o|inlining procedure: k7424 
o|contracted procedure: "(batch-driver.scm:472) g15031510" 
o|inlining procedure: k5554 
o|inlining procedure: k5554 
o|inlining procedure: k7424 
o|consed rest parameter at call site: "(batch-driver.scm:471) dribble1117" 2 
o|inlining procedure: k7447 
o|inlining procedure: k7447 
o|propagated global variable: g14921493 chicken.string#string-split 
o|consed rest parameter at call site: "(batch-driver.scm:466) chicken.compiler.batch-driver#append-map" 3 
o|inlining procedure: k7480 
o|inlining procedure: k7480 
o|propagated global variable: g14771478 chicken.string#string-split 
o|consed rest parameter at call site: "(batch-driver.scm:463) chicken.compiler.batch-driver#append-map" 3 
o|substituted constant variable: a7516 
o|inlining procedure: k7549 
o|contracted procedure: "(batch-driver.scm:453) g14521459" 
o|inlining procedure: k7549 
o|propagated global variable: g14581460 chicken.compiler.core#default-extended-bindings 
o|inlining procedure: k7572 
o|contracted procedure: "(batch-driver.scm:448) g14331440" 
o|inlining procedure: k7572 
o|propagated global variable: g14391441 chicken.compiler.core#default-standard-bindings 
o|substituted constant variable: a7592 
o|substituted constant variable: a7595 
o|substituted constant variable: a7598 
o|substituted constant variable: a7601 
o|substituted constant variable: a7604 
o|inlining procedure: k7613 
o|inlining procedure: k7613 
o|inlining procedure: k7635 
o|inlining procedure: k7635 
o|substituted constant variable: a7666 
o|consed rest parameter at call site: "(batch-driver.scm:425) dribble1117" 2 
o|substituted constant variable: a7683 
o|consed rest parameter at call site: "(batch-driver.scm:422) dribble1117" 2 
o|substituted constant variable: a7691 
o|consed rest parameter at call site: "(batch-driver.scm:419) dribble1117" 2 
o|inlining procedure: k7702 
o|inlining procedure: k7702 
o|substituted constant variable: a7714 
o|substituted constant variable: a7722 
o|inlining procedure: k7719 
o|inlining procedure: k7719 
o|substituted constant variable: a7730 
o|consed rest parameter at call site: "(batch-driver.scm:408) dribble1117" 2 
o|inlining procedure: k7748 
o|inlining procedure: k7748 
o|inlining procedure: k7761 
o|inlining procedure: k7761 
o|substituted constant variable: a7781 
o|substituted constant variable: a7784 
o|substituted constant variable: a7787 
o|substituted constant variable: a7790 
o|substituted constant variable: a7793 
o|substituted constant variable: a7796 
o|substituted constant variable: a7799 
o|substituted constant variable: a7802 
o|substituted constant variable: a7805 
o|substituted constant variable: a7808 
o|consed rest parameter at call site: "(batch-driver.scm:371) dribble1117" 2 
o|substituted constant variable: a7815 
o|substituted constant variable: a7819 
o|substituted constant variable: a7823 
o|substituted constant variable: a7827 
o|substituted constant variable: a7830 
o|substituted constant variable: a7833 
o|substituted constant variable: a7836 
o|substituted constant variable: a7857 
o|inlining procedure: k7853 
o|inlining procedure: k7853 
o|inlining procedure: k7865 
o|contracted procedure: "(batch-driver.scm:339) g13411350" 
o|substituted constant variable: a5379 
o|inlining procedure: k7865 
o|inlining procedure: k7929 
o|contracted procedure: "(batch-driver.scm:331) g13131322" 
o|inlining procedure: k7929 
o|consed rest parameter at call site: "(batch-driver.scm:329) chicken.compiler.batch-driver#append-map" 3 
o|substituted constant variable: a7964 
o|propagated global variable: tmp13001302 chicken.compiler.core#unit-name 
o|inlining procedure: k7970 
o|propagated global variable: tmp13001302 chicken.compiler.core#unit-name 
o|inlining procedure: k7970 
o|substituted constant variable: a7985 
o|substituted constant variable: a7990 
o|inlining procedure: k7992 
o|inlining procedure: k7992 
o|substituted constant variable: a7995 
o|inlining procedure: k8000 
o|inlining procedure: k8000 
o|inlining procedure: k8035 
o|inlining procedure: k8035 
o|inlining procedure: k8043 
o|inlining procedure: k8043 
o|substituted constant variable: a8058 
o|inlining procedure: k8055 
o|inlining procedure: k8055 
o|inlining procedure: k8064 
o|inlining procedure: k8064 
o|inlining procedure: k8075 
o|inlining procedure: k8075 
o|inlining procedure: k8102 
o|inlining procedure: k8102 
o|inlining procedure: k8108 
o|inlining procedure: k8120 
o|inlining procedure: k8120 
o|inlining procedure: k8108 
o|substituted constant variable: a8142 
o|substituted constant variable: a8148 
o|substituted constant variable: a8151 
o|replaced variables: 1062 
o|removed binding forms: 552 
o|substituted constant variable: r29498156 
o|substituted constant variable: r29898158 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#every 
o|substituted constant variable: r31448166 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#filter 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#list-tabulate 
o|propagated global variable: out993996 ##sys#standard-output 
o|inlining procedure: k4253 
o|propagated global variable: out967970 ##sys#standard-output 
o|propagated global variable: out974977 ##sys#standard-output 
o|propagated global variable: out956959 ##sys#standard-output 
o|propagated global variable: out950953 ##sys#standard-output 
o|propagated global variable: out944947 ##sys#standard-output 
o|propagated global variable: out895898 ##sys#standard-output 
o|propagated global variable: out934937 ##sys#standard-output 
o|removed side-effect free assignment to unused variable: cputime1116 
o|propagated global variable: out11601163 ##sys#standard-output 
o|substituted constant variable: r49888238 
o|substituted constant variable: r49888239 
o|propagated global variable: out11771180 ##sys#standard-output 
o|substituted constant variable: r52018253 
o|propagated global variable: out12401243 ##sys#standard-output 
o|propagated global variable: out707710 ##sys#standard-output 
o|propagated global variable: out716719 ##sys#standard-output 
o|propagated global variable: out723726 ##sys#standard-output 
o|propagated global variable: out730733 ##sys#standard-output 
o|propagated global variable: out737740 ##sys#standard-output 
o|propagated global variable: out744747 ##sys#standard-output 
o|substituted constant variable: r62428303 
o|substituted constant variable: r62518305 
o|substituted constant variable: r64738323 
o|propagated global variable: extensions1971 chicken.compiler.core#required-libraries 
o|propagated global variable: out19241927 ##sys#standard-output 
o|inlining procedure: k6763 
o|substituted constant variable: r67648334 
o|substituted constant variable: r67648334 
o|substituted constant variable: r71928360 
o|substituted constant variable: r71928360 
o|substituted constant variable: r71928362 
o|substituted constant variable: r71928362 
o|substituted constant variable: r71968364 
o|substituted constant variable: r71968364 
o|substituted constant variable: r71968366 
o|substituted constant variable: r71968366 
o|substituted constant variable: r72138368 
o|substituted constant variable: r72138368 
o|substituted constant variable: r72138370 
o|substituted constant variable: r72138370 
o|propagated global variable: ls531 chicken.compiler.core#linked-libraries 
o|contracted procedure: "(batch-driver.scm:478) chicken.compiler.batch-driver#delete" 
o|propagated global variable: lst371 ##sys#features 
o|substituted constant variable: r76148406 
o|substituted constant variable: r78548423 
o|propagated global variable: r79718429 chicken.compiler.core#unit-name 
o|substituted constant variable: r80368439 
o|substituted constant variable: r80368439 
o|substituted constant variable: r80568443 
o|substituted constant variable: r80658447 
o|substituted constant variable: r80658447 
o|substituted constant variable: r80768449 
o|substituted constant variable: r80768449 
o|substituted constant variable: r81038453 
o|substituted constant variable: r81038453 
o|substituted constant variable: r81038455 
o|substituted constant variable: r81038455 
o|substituted constant variable: r81218459 
o|substituted constant variable: r81098460 
o|converted assignments to bindings: (option-arg1016) 
o|simplifications: ((let . 1)) 
o|replaced variables: 109 
o|removed binding forms: 1034 
o|removed conditional forms: 1 
o|inlining procedure: k4439 
o|inlining procedure: k4439 
o|inlining procedure: k4439 
o|inlining procedure: k4439 
o|inlining procedure: k4439 
o|inlining procedure: k4439 
o|inlining procedure: k4439 
o|inlining procedure: k4439 
o|inlining procedure: k4439 
o|inlining procedure: k6079 
o|inlining procedure: k6119 
o|inlining procedure: k6401 
o|inlining procedure: k6756 
o|inlining procedure: k6756 
o|contracted procedure: k6763 
o|inlining procedure: k7198 
o|inlining procedure: k3710 
o|substituted constant variable: x370 
o|inlining procedure: k7607 
o|inlining procedure: k7607 
o|replaced variables: 2 
o|removed binding forms: 148 
o|substituted constant variable: r61208653 
o|substituted constant variable: r67578677 
o|substituted constant variable: r6764 
o|substituted constant variable: r71998696 
o|substituted constant variable: r76088720 
o|substituted constant variable: r76088721 
o|replaced variables: 1 
o|removed binding forms: 16 
o|removed conditional forms: 4 
o|removed binding forms: 8 
o|simplifications: ((if . 13) (let . 19) (##core#call . 405)) 
o|  call simplifications:
o|    scheme#string->list
o|    scheme#string
o|    scheme#string=?	2
o|    scheme#list
o|    scheme#eof-object?
o|    ##sys#cons	10
o|    ##sys#list	12
o|    scheme#string?
o|    scheme#>
o|    ##sys#call-with-values	3
o|    scheme#-	2
o|    scheme#cddr
o|    scheme#string-length
o|    chicken.fixnum#fx<
o|    scheme#string-ref
o|    scheme#*	2
o|    scheme#cadr	2
o|    scheme#symbol?	2
o|    scheme#memq	14
o|    scheme#cdar	7
o|    scheme#caar	3
o|    scheme#assq
o|    scheme#length	3
o|    scheme#eq?	53
o|    scheme#not	15
o|    scheme#null?	11
o|    scheme#car	10
o|    scheme#apply	2
o|    scheme#cdr	4
o|    scheme#cons	49
o|    ##sys#setslot	19
o|    ##sys#check-list	32
o|    scheme#pair?	43
o|    ##sys#slot	94
o|contracted procedure: k2936 
o|contracted procedure: k2939 
o|contracted procedure: k2951 
o|contracted procedure: k2967 
o|contracted procedure: k2975 
o|contracted procedure: k2982 
o|contracted procedure: k3006 
o|contracted procedure: k3023 
o|contracted procedure: k3045 
o|contracted procedure: k3041 
o|contracted procedure: k3026 
o|contracted procedure: k3029 
o|contracted procedure: k3037 
o|contracted procedure: k3052 
o|contracted procedure: k3060 
o|contracted procedure: k3072 
o|contracted procedure: k3094 
o|contracted procedure: k3090 
o|contracted procedure: k3075 
o|contracted procedure: k3078 
o|contracted procedure: k3086 
o|contracted procedure: k3146 
o|contracted procedure: k3161 
o|contracted procedure: k4120 
o|contracted procedure: k4131 
o|contracted procedure: k4142 
o|contracted procedure: k4154 
o|contracted procedure: k4164 
o|contracted procedure: k4168 
o|propagated global variable: g803805 chicken.compiler.core#internal-bindings 
o|contracted procedure: k4177 
o|contracted procedure: k4187 
o|contracted procedure: k4191 
o|propagated global variable: g785787 chicken.compiler.core#extended-bindings 
o|contracted procedure: k4200 
o|contracted procedure: k4210 
o|contracted procedure: k4214 
o|propagated global variable: g767769 chicken.compiler.core#standard-bindings 
o|contracted procedure: k4232 
o|contracted procedure: k4259 
o|contracted procedure: k4285 
o|contracted procedure: k4297 
o|contracted procedure: k4307 
o|contracted procedure: k4311 
o|contracted procedure: k4274 
o|contracted procedure: k4327 
o|contracted procedure: k4354 
o|contracted procedure: k4369 
o|contracted procedure: k4376 
o|contracted procedure: k4379 
o|contracted procedure: k4392 
o|contracted procedure: k4395 
o|contracted procedure: k4408 
o|contracted procedure: k4411 
o|contracted procedure: k4424 
o|contracted procedure: k4433 
o|contracted procedure: k4436 
o|contracted procedure: k4447 
o|contracted procedure: k4471 
o|contracted procedure: k4467 
o|contracted procedure: k4463 
o|contracted procedure: k4477 
o|contracted procedure: k4484 
o|contracted procedure: k4490 
o|contracted procedure: k4494 
o|contracted procedure: k4500 
o|contracted procedure: k4506 
o|contracted procedure: k4510 
o|contracted procedure: k4516 
o|contracted procedure: k4520 
o|contracted procedure: k4526 
o|contracted procedure: k4548 
o|contracted procedure: k4552 
o|contracted procedure: k4558 
o|contracted procedure: k4562 
o|contracted procedure: k4568 
o|contracted procedure: k4572 
o|contracted procedure: k4578 
o|contracted procedure: k4582 
o|contracted procedure: k4596 
o|contracted procedure: k4602 
o|contracted procedure: k4608 
o|contracted procedure: k4614 
o|contracted procedure: k4620 
o|contracted procedure: k4626 
o|contracted procedure: k4632 
o|contracted procedure: k4638 
o|contracted procedure: k4644 
o|contracted procedure: k4650 
o|contracted procedure: k4691 
o|contracted procedure: k4697 
o|contracted procedure: k4703 
o|contracted procedure: k4709 
o|contracted procedure: k4715 
o|contracted procedure: k4721 
o|contracted procedure: k4727 
o|contracted procedure: k4733 
o|contracted procedure: k4739 
o|contracted procedure: k4745 
o|contracted procedure: k4751 
o|contracted procedure: k4757 
o|contracted procedure: k4763 
o|contracted procedure: k4769 
o|contracted procedure: k4775 
o|contracted procedure: k4781 
o|contracted procedure: k4787 
o|contracted procedure: k4793 
o|contracted procedure: k4799 
o|contracted procedure: k4884 
o|contracted procedure: k4863 
o|contracted procedure: k4871 
o|contracted procedure: k4877 
o|contracted procedure: k8086 
o|contracted procedure: k4909 
o|contracted procedure: k4920 
o|contracted procedure: k4926 
o|contracted procedure: k4942 
o|contracted procedure: k4957 
o|contracted procedure: k4990 
o|contracted procedure: k5074 
o|contracted procedure: k5086 
o|contracted procedure: k5096 
o|contracted procedure: k5100 
o|contracted procedure: k5106 
o|contracted procedure: k5120 
o|contracted procedure: k5126 
o|contracted procedure: k5132 
o|contracted procedure: k5135 
o|inlining procedure: k5111 
o|contracted procedure: k5152 
o|contracted procedure: k5155 
o|inlining procedure: k5111 
o|contracted procedure: k5197 
o|contracted procedure: k5217 
o|contracted procedure: k5266 
o|contracted procedure: k5312 
o|contracted procedure: k5318 
o|contracted procedure: k5325 
o|contracted procedure: k5331 
o|contracted procedure: k5358 
o|contracted procedure: k5362 
o|contracted procedure: k5383 
o|contracted procedure: k5524 
o|contracted procedure: k5533 
o|contracted procedure: k5540 
o|contracted procedure: k5566 
o|contracted procedure: k5577 
o|contracted procedure: k5613 
o|contracted procedure: k5678 
o|contracted procedure: k5743 
o|contracted procedure: k5746 
o|contracted procedure: k5752 
o|contracted procedure: k5782 
o|contracted procedure: k5788 
o|contracted procedure: k5803 
o|contracted procedure: k6006 
o|contracted procedure: k5949 
o|contracted procedure: k5963 
o|inlining procedure: "(batch-driver.scm:869) dribble1117" 
o|contracted procedure: k6088 
o|inlining procedure: "(batch-driver.scm:869) dribble1117" 
o|inlining procedure: "(batch-driver.scm:860) dribble1117" 
o|inlining procedure: "(batch-driver.scm:855) dribble1117" 
o|contracted procedure: k6129 
o|contracted procedure: k6119 
o|contracted procedure: k6136 
o|contracted procedure: k6146 
o|contracted procedure: k6149 
o|contracted procedure: k6161 
o|contracted procedure: k6164 
o|contracted procedure: k6167 
o|contracted procedure: k6175 
o|contracted procedure: k6183 
o|propagated global variable: g21362140 chicken.compiler.core#foreign-lambda-stubs 
o|inlining procedure: "(batch-driver.scm:830) dribble1117" 
o|contracted procedure: k6207 
o|contracted procedure: k6220 
o|inlining procedure: "(batch-driver.scm:765) dribble1117" 
o|contracted procedure: k6253 
o|contracted procedure: k6256 
o|contracted procedure: k6262 
o|contracted procedure: k6268 
o|contracted procedure: k6274 
o|contracted procedure: k6284 
o|contracted procedure: k6291 
o|contracted procedure: k6311 
o|contracted procedure: k6330 
o|contracted procedure: k6375 
o|contracted procedure: k6385 
o|contracted procedure: k6389 
o|contracted procedure: k6398 
o|contracted procedure: k6408 
o|contracted procedure: k6412 
o|contracted procedure: k64088663 
o|contracted procedure: k6426 
o|inlining procedure: "(batch-driver.scm:693) dribble1117" 
o|contracted procedure: k6438 
o|contracted procedure: k6450 
o|contracted procedure: k6460 
o|contracted procedure: k6464 
o|inlining procedure: "(batch-driver.scm:685) dribble1117" 
o|contracted procedure: k6485 
o|contracted procedure: k6497 
o|contracted procedure: k6507 
o|contracted procedure: k6511 
o|propagated global variable: extensions1971 chicken.compiler.core#required-libraries 
o|contracted procedure: k6529 
o|contracted procedure: k6532 
o|contracted procedure: k6547 
o|contracted procedure: k6550 
o|contracted procedure: k6553 
o|contracted procedure: k6561 
o|contracted procedure: k6569 
o|inlining procedure: "(batch-driver.scm:665) dribble1117" 
o|contracted procedure: k6592 
o|contracted procedure: k6630 
o|contracted procedure: k6642 
o|contracted procedure: k6652 
o|contracted procedure: k6656 
o|contracted procedure: k6627 
o|propagated global variable: g19201922 chicken.compiler.compiler-syntax#compiler-syntax-statistics 
o|contracted procedure: k6659 
o|contracted procedure: k6670 
o|contracted procedure: k6682 
o|contracted procedure: k6694 
o|contracted procedure: k6697 
o|contracted procedure: k6700 
o|contracted procedure: k6708 
o|contracted procedure: k6716 
o|contracted procedure: k6679 
o|propagated global variable: g18981902 chicken.compiler.core#import-libraries 
o|contracted procedure: k6723 
o|contracted procedure: k6741 
o|contracted procedure: k6766 
o|contracted procedure: k6776 
o|contracted procedure: k6785 
o|contracted procedure: k6807 
o|contracted procedure: k6732 
o|contracted procedure: k6736 
o|contracted procedure: k6803 
o|contracted procedure: k6788 
o|contracted procedure: k6791 
o|contracted procedure: k6799 
o|propagated global variable: g18611865 chicken.compiler.core#immutable-constants 
o|contracted procedure: k6819 
o|contracted procedure: k6822 
o|contracted procedure: k6825 
o|contracted procedure: k6833 
o|contracted procedure: k6841 
o|contracted procedure: k5797 
o|contracted procedure: k6853 
o|contracted procedure: k6856 
o|contracted procedure: k6859 
o|contracted procedure: k6867 
o|contracted procedure: k6875 
o|contracted procedure: k6881 
o|contracted procedure: k6900 
o|contracted procedure: k6892 
o|contracted procedure: k6888 
o|contracted procedure: k6909 
o|contracted procedure: k6912 
o|contracted procedure: k6915 
o|contracted procedure: k6923 
o|contracted procedure: k6931 
o|contracted procedure: k6941 
o|contracted procedure: k6944 
o|contracted procedure: k6956 
o|contracted procedure: k6959 
o|contracted procedure: k6962 
o|contracted procedure: k6970 
o|contracted procedure: k6978 
o|inlining procedure: "(batch-driver.scm:600) dribble1117" 
o|inlining procedure: "(batch-driver.scm:577) dribble1117" 
o|contracted procedure: k7000 
o|contracted procedure: k7008 
o|contracted procedure: k7011 
o|contracted procedure: k7022 
o|contracted procedure: k7025 
o|contracted procedure: k7037 
o|contracted procedure: k7040 
o|contracted procedure: k7043 
o|contracted procedure: k7051 
o|contracted procedure: k7059 
o|contracted procedure: k7071 
o|contracted procedure: k7074 
o|contracted procedure: k7077 
o|contracted procedure: k7085 
o|contracted procedure: k7093 
o|contracted procedure: k7099 
o|contracted procedure: k7133 
o|contracted procedure: k7140 
o|contracted procedure: k7156 
o|inlining procedure: "(batch-driver.scm:559) dribble1117" 
o|contracted procedure: k7208 
o|contracted procedure: k7175 
o|inlining procedure: "(batch-driver.scm:538) dribble1117" 
o|inlining procedure: "(batch-driver.scm:538) dribble1117" 
o|contracted procedure: k7198 
o|inlining procedure: "(batch-driver.scm:520) dribble1117" 
o|inlining procedure: "(batch-driver.scm:520) dribble1117" 
o|contracted procedure: k7220 
o|contracted procedure: k7247 
o|contracted procedure: k7262 
o|contracted procedure: k7274 
o|contracted procedure: k7296 
o|contracted procedure: k7292 
o|contracted procedure: k7277 
o|contracted procedure: k7280 
o|contracted procedure: k7288 
o|contracted procedure: k3657 
o|contracted procedure: k3664 
o|contracted procedure: k3721 
o|contracted procedure: k3670 
o|contracted procedure: k3682 
o|contracted procedure: k3689 
o|contracted procedure: k3714 
o|contracted procedure: k3710 
o|contracted procedure: k7305 
o|contracted procedure: k7320 
o|contracted procedure: k7323 
o|contracted procedure: k7326 
o|contracted procedure: k7334 
o|contracted procedure: k7342 
o|contracted procedure: k7352 
o|contracted procedure: k7368 
o|contracted procedure: k7364 
o|contracted procedure: k7360 
o|contracted procedure: k7374 
o|contracted procedure: k7389 
o|contracted procedure: k7392 
o|contracted procedure: k7395 
o|contracted procedure: k7403 
o|contracted procedure: k7411 
o|contracted procedure: k3232 
o|contracted procedure: k3258 
o|contracted procedure: k3238 
o|contracted procedure: k7427 
o|contracted procedure: k7437 
o|contracted procedure: k7441 
o|contracted procedure: k5560 
o|inlining procedure: "(batch-driver.scm:471) dribble1117" 
o|contracted procedure: k7450 
o|contracted procedure: k7460 
o|contracted procedure: k7464 
o|contracted procedure: k7483 
o|contracted procedure: k7493 
o|contracted procedure: k7497 
o|contracted procedure: k7510 
o|contracted procedure: k7526 
o|contracted procedure: k7540 
o|contracted procedure: k7552 
o|contracted procedure: k7562 
o|contracted procedure: k7566 
o|propagated global variable: g14581460 chicken.compiler.core#default-extended-bindings 
o|contracted procedure: k7575 
o|contracted procedure: k7585 
o|contracted procedure: k7589 
o|propagated global variable: g14391441 chicken.compiler.core#default-standard-bindings 
o|contracted procedure: k7607 
o|contracted procedure: k7620 
o|contracted procedure: k7626 
o|contracted procedure: k7638 
o|contracted procedure: k7641 
o|contracted procedure: k7644 
o|contracted procedure: k7652 
o|contracted procedure: k7660 
o|inlining procedure: "(batch-driver.scm:425) dribble1117" 
o|inlining procedure: "(batch-driver.scm:422) dribble1117" 
o|inlining procedure: "(batch-driver.scm:419) dribble1117" 
o|contracted procedure: k7705 
o|inlining procedure: "(batch-driver.scm:408) dribble1117" 
o|inlining procedure: "(batch-driver.scm:371) dribble1117" 
o|contracted procedure: k7842 
o|contracted procedure: k7846 
o|contracted procedure: k7853 
o|contracted procedure: k7868 
o|contracted procedure: k7890 
o|contracted procedure: k7886 
o|contracted procedure: k7871 
o|contracted procedure: k7874 
o|contracted procedure: k7882 
o|contracted procedure: k7896 
o|contracted procedure: k7908 
o|contracted procedure: k7932 
o|contracted procedure: k7935 
o|contracted procedure: k7938 
o|contracted procedure: k7946 
o|contracted procedure: k7954 
o|contracted procedure: k7917 
o|contracted procedure: k8003 
o|contracted procedure: k8006 
o|contracted procedure: k8009 
o|contracted procedure: k8017 
o|contracted procedure: k8025 
o|contracted procedure: k8046 
o|contracted procedure: k8071 
o|contracted procedure: k8082 
o|contracted procedure: k8075 
o|contracted procedure: k8094 
o|contracted procedure: k8111 
o|contracted procedure: k8117 
o|contracted procedure: k8123 
o|contracted procedure: k8126 
o|contracted procedure: k8139 
o|simplifications: ((if . 2) (let . 151)) 
o|removed binding forms: 370 
o|contracted procedure: k4314 
o|contracted procedure: k4341 
o|removed side-effect free assignment to unused variable: dribble1117 
o|substituted constant variable: fstr11559119 
o|substituted constant variable: args11569120 
o|substituted constant variable: fstr11559125 
o|substituted constant variable: args11569126 
o|substituted constant variable: fstr11559131 
o|substituted constant variable: fstr11559137 
o|substituted constant variable: fstr11559145 
o|substituted constant variable: fstr11559151 
o|contracted procedure: "(batch-driver.scm:691) g19972004" 
o|substituted constant variable: fstr11559163 
o|contracted procedure: "(batch-driver.scm:681) g19751982" 
o|substituted constant variable: fstr11559171 
o|substituted constant variable: fstr11559181 
o|substituted constant variable: args11569182 
o|substituted constant variable: fstr11559201 
o|substituted constant variable: args11569202 
o|substituted constant variable: fstr11559207 
o|substituted constant variable: args11569208 
o|substituted constant variable: fstr11559221 
o|substituted constant variable: fstr11559227 
o|substituted constant variable: fstr11559233 
o|substituted constant variable: fstr11559239 
o|substituted constant variable: fstr11559245 
o|substituted constant variable: fstr11559265 
o|substituted constant variable: args11569266 
o|substituted constant variable: fstr11559281 
o|substituted constant variable: args11569282 
o|substituted constant variable: fstr11559287 
o|substituted constant variable: args11569288 
o|substituted constant variable: fstr11559293 
o|substituted constant variable: args11569294 
o|substituted constant variable: fstr11559299 
o|substituted constant variable: args11569300 
o|substituted constant variable: fstr11559305 
o|substituted constant variable: args11569306 
o|replaced variables: 22 
o|removed binding forms: 4 
o|replaced variables: 3 
o|removed binding forms: 57 
o|inlining procedure: k6500 
o|removed binding forms: 2 
o|removed binding forms: 1 
x|eliminated type checks:
x|  C_i_check_list_2:	1
o|customizable procedures: (k4896 k4899 k8098 k8105 k4912 g10511052 map-loop10581078 k4937 k5338 k5341 map-loop13071325 map-loop13351353 k5389 k5392 k5398 k5401 k5404 k5407 k5410 k5413 k5416 k5419 k5422 k5425 k5428 k5431 k5434 k5437 k5440 k5443 k5446 k5449 k5454 k5459 k5464 k5469 k5474 map-loop14041421 k5500 k5503 k5506 k5509 k5512 for-each-loop14321444 for-each-loop14511463 for-each-loop11291479 for-each-loop11391494 for-each-loop15021515 loop373 map-loop15251542 k5587 chicken.compiler.batch-driver#append-map map-loop15561573 foldl554558 foldl538542 map-loop15821603 k5601 arg-val1122 k5626 k5654 loop1706 doloop16411642 map-loop16461663 map-loop16721689 map-loop17211738 k5734 map-loop17491766 k5779 g17821791 map-loop17761808 map-loop18181839 map-loop18491870 k6748 map-loop18861904 for-each-loop19131933 print-expr1121 map-loop19421959 chicken.compiler.batch-driver#initialize-analysis-database for-each-loop19741988 for-each-loop19962008 collect-options1123 for-each-loop20192033 for-each-loop20402051 k5859 k6238 map-loop21242141 print-db1120 print-node1119 analyze1126 begin-time1124 end-time1125 loop2072 def-no12561295 def-contf12571293 body12541263 g12351236 option-arg1016 loop1227 for-each-loop11911203 chicken.compiler.batch-driver#display-analysis-database print-header1118 k4220 k4450 k4529 loop827 for-each-loop982999 for-each-loop760771 for-each-loop778789 for-each-loop796807 loop347 chicken.compiler.batch-driver#any map-loop278296 map-loop305323 loop274 foldr263266 g268269) 
o|calls to known targets: 392 
o|identified direct recursive calls: f_2946 1 
o|identified direct recursive calls: f_3018 1 
o|identified direct recursive calls: f_3067 1 
o|identified direct recursive calls: f_6780 1 
o|identified direct recursive calls: f_3227 2 
o|fast box initializations: 54 
o|fast global references: 9 
o|fast global assignments: 4 
o|dropping unused closure argument: f_2931 
o|dropping unused closure argument: f_3135 
o|dropping unused closure argument: f_4858 
o|dropping unused closure argument: f_4982 
o|dropping unused closure argument: f_5104 
*/
/* end of file */
