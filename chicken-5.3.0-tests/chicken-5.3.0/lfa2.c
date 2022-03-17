/* Generated from lfa2.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.3.0rc4 ((HEAD detached at 5.3.0rc4)) (rev b6cbb1ba)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: lfa2.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -no-lambda-info -no-trace -emit-import-library chicken.compiler.lfa2 -output-file lfa2.c
   unit: lfa2
   uses: eval extras support library
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_support_toplevel)
C_externimport void C_ccall C_support_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[102];
static double C_possibly_force_alignment;


C_noret_decl(f5393)
static void C_ccall f5393(C_word c,C_word *av) C_noret;
C_noret_decl(f5451)
static void C_ccall f5451(C_word c,C_word *av) C_noret;
C_noret_decl(f5472)
static void C_ccall f5472(C_word c,C_word *av) C_noret;
C_noret_decl(f5484)
static void C_ccall f5484(C_word c,C_word *av) C_noret;
C_noret_decl(f5491)
static void C_ccall f5491(C_word c,C_word *av) C_noret;
C_noret_decl(f_1457)
static void C_ccall f_1457(C_word c,C_word *av) C_noret;
C_noret_decl(f_1460)
static void C_ccall f_1460(C_word c,C_word *av) C_noret;
C_noret_decl(f_1463)
static void C_ccall f_1463(C_word c,C_word *av) C_noret;
C_noret_decl(f_1466)
static void C_ccall f_1466(C_word c,C_word *av) C_noret;
C_noret_decl(f_2086)
static void C_fcall f_2086(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2094)
static C_word C_fcall f_2094(C_word *a,C_word t0,C_word t1,C_word t2);
C_noret_decl(f_2115)
static void C_ccall f_2115(C_word c,C_word *av) C_noret;
C_noret_decl(f_2130)
static void C_fcall f_2130(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2146)
static C_word C_fcall f_2146(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_2164)
static void C_ccall f_2164(C_word c,C_word *av) C_noret;
C_noret_decl(f_2176)
static C_word C_fcall f_2176(C_word t0,C_word t1);
C_noret_decl(f_2680)
static void C_fcall f_2680(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2686)
static C_word C_fcall f_2686(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_2751)
static void C_ccall f_2751(C_word c,C_word *av) C_noret;
C_noret_decl(f_2767)
static void C_ccall f_2767(C_word c,C_word *av) C_noret;
C_noret_decl(f_2779)
static void C_ccall f_2779(C_word c,C_word *av) C_noret;
C_noret_decl(f_2782)
static void C_ccall f_2782(C_word c,C_word *av) C_noret;
C_noret_decl(f_2882)
static C_word C_fcall f_2882(C_word t0,C_word t1);
C_noret_decl(f_2933)
static C_word C_fcall f_2933(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_2959)
static void C_fcall f_2959(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2965)
static void C_fcall f_2965(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2970)
static void C_ccall f_2970(C_word c,C_word *av) C_noret;
C_noret_decl(f_2996)
static void C_ccall f_2996(C_word c,C_word *av) C_noret;
C_noret_decl(f_3000)
static void C_ccall f_3000(C_word c,C_word *av) C_noret;
C_noret_decl(f_3004)
static void C_ccall f_3004(C_word c,C_word *av) C_noret;
C_noret_decl(f_3006)
static void C_fcall f_3006(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3010)
static void C_ccall f_3010(C_word c,C_word *av) C_noret;
C_noret_decl(f_3013)
static void C_ccall f_3013(C_word c,C_word *av) C_noret;
C_noret_decl(f_3016)
static void C_ccall f_3016(C_word c,C_word *av) C_noret;
C_noret_decl(f_3021)
static void C_fcall f_3021(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3028)
static void C_ccall f_3028(C_word c,C_word *av) C_noret;
C_noret_decl(f_3029)
static void C_fcall f_3029(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3036)
static void C_ccall f_3036(C_word c,C_word *av) C_noret;
C_noret_decl(f_3046)
static void C_ccall f_3046(C_word c,C_word *av) C_noret;
C_noret_decl(f_3063)
static void C_ccall f_3063(C_word c,C_word *av) C_noret;
C_noret_decl(f_3070)
static void C_ccall f_3070(C_word c,C_word *av) C_noret;
C_noret_decl(f_3098)
static void C_ccall f_3098(C_word c,C_word *av) C_noret;
C_noret_decl(f_3100)
static void C_fcall f_3100(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3110)
static void C_ccall f_3110(C_word c,C_word *av) C_noret;
C_noret_decl(f_3129)
static void C_ccall f_3129(C_word c,C_word *av) C_noret;
C_noret_decl(f_3146)
static C_word C_fcall f_3146(C_word t0,C_word t1);
C_noret_decl(f_3192)
static C_word C_fcall f_3192(C_word t0,C_word t1);
C_noret_decl(f_3198)
static void C_fcall f_3198(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3203)
static void C_ccall f_3203(C_word c,C_word *av) C_noret;
C_noret_decl(f_3205)
static C_word C_fcall f_3205(C_word t0,C_word t1);
C_noret_decl(f_3215)
static void C_fcall f_3215(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3222)
static void C_fcall f_3222(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3226)
static void C_fcall f_3226(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3234)
static void C_ccall f_3234(C_word c,C_word *av) C_noret;
C_noret_decl(f_3246)
static void C_ccall f_3246(C_word c,C_word *av) C_noret;
C_noret_decl(f_3263)
static void C_ccall f_3263(C_word c,C_word *av) C_noret;
C_noret_decl(f_3271)
static void C_fcall f_3271(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3277)
static void C_fcall f_3277(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3283)
static void C_fcall f_3283(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3289)
static void C_fcall f_3289(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3293)
static void C_ccall f_3293(C_word c,C_word *av) C_noret;
C_noret_decl(f_3296)
static void C_ccall f_3296(C_word c,C_word *av) C_noret;
C_noret_decl(f_3299)
static void C_ccall f_3299(C_word c,C_word *av) C_noret;
C_noret_decl(f_3308)
static void C_ccall f_3308(C_word c,C_word *av) C_noret;
C_noret_decl(f_3311)
static void C_ccall f_3311(C_word c,C_word *av) C_noret;
C_noret_decl(f_3358)
static void C_ccall f_3358(C_word c,C_word *av) C_noret;
C_noret_decl(f_3361)
static void C_fcall f_3361(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3368)
static void C_ccall f_3368(C_word c,C_word *av) C_noret;
C_noret_decl(f_3372)
static void C_ccall f_3372(C_word c,C_word *av) C_noret;
C_noret_decl(f_3390)
static void C_ccall f_3390(C_word c,C_word *av) C_noret;
C_noret_decl(f_3394)
static void C_ccall f_3394(C_word c,C_word *av) C_noret;
C_noret_decl(f_3402)
static void C_ccall f_3402(C_word c,C_word *av) C_noret;
C_noret_decl(f_3414)
static void C_ccall f_3414(C_word c,C_word *av) C_noret;
C_noret_decl(f_3458)
static void C_ccall f_3458(C_word c,C_word *av) C_noret;
C_noret_decl(f_3461)
static void C_ccall f_3461(C_word c,C_word *av) C_noret;
C_noret_decl(f_3464)
static void C_ccall f_3464(C_word c,C_word *av) C_noret;
C_noret_decl(f_3475)
static void C_fcall f_3475(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3482)
static void C_fcall f_3482(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3496)
static void C_ccall f_3496(C_word c,C_word *av) C_noret;
C_noret_decl(f_3512)
static void C_ccall f_3512(C_word c,C_word *av) C_noret;
C_noret_decl(f_3520)
static void C_ccall f_3520(C_word c,C_word *av) C_noret;
C_noret_decl(f_3526)
static void C_fcall f_3526(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3568)
static void C_ccall f_3568(C_word c,C_word *av) C_noret;
C_noret_decl(f_3587)
static void C_ccall f_3587(C_word c,C_word *av) C_noret;
C_noret_decl(f_3590)
static void C_ccall f_3590(C_word c,C_word *av) C_noret;
C_noret_decl(f_3593)
static void C_fcall f_3593(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3604)
static void C_ccall f_3604(C_word c,C_word *av) C_noret;
C_noret_decl(f_3618)
static void C_ccall f_3618(C_word c,C_word *av) C_noret;
C_noret_decl(f_3643)
static void C_fcall f_3643(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3647)
static void C_ccall f_3647(C_word c,C_word *av) C_noret;
C_noret_decl(f_3659)
static void C_ccall f_3659(C_word c,C_word *av) C_noret;
C_noret_decl(f_3666)
static void C_fcall f_3666(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3670)
static void C_ccall f_3670(C_word c,C_word *av) C_noret;
C_noret_decl(f_3673)
static void C_ccall f_3673(C_word c,C_word *av) C_noret;
C_noret_decl(f_3688)
static void C_fcall f_3688(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3714)
static void C_ccall f_3714(C_word c,C_word *av) C_noret;
C_noret_decl(f_3734)
static void C_ccall f_3734(C_word c,C_word *av) C_noret;
C_noret_decl(f_3796)
static void C_fcall f_3796(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3803)
static void C_ccall f_3803(C_word c,C_word *av) C_noret;
C_noret_decl(f_3806)
static void C_ccall f_3806(C_word c,C_word *av) C_noret;
C_noret_decl(f_3812)
static void C_ccall f_3812(C_word c,C_word *av) C_noret;
C_noret_decl(f_3815)
static void C_ccall f_3815(C_word c,C_word *av) C_noret;
C_noret_decl(f_3822)
static void C_ccall f_3822(C_word c,C_word *av) C_noret;
C_noret_decl(f_3826)
static void C_ccall f_3826(C_word c,C_word *av) C_noret;
C_noret_decl(f_3830)
static void C_ccall f_3830(C_word c,C_word *av) C_noret;
C_noret_decl(f_3844)
static void C_fcall f_3844(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3898)
static void C_ccall f_3898(C_word c,C_word *av) C_noret;
C_noret_decl(f_3906)
static void C_ccall f_3906(C_word c,C_word *av) C_noret;
C_noret_decl(f_3921)
static void C_ccall f_3921(C_word c,C_word *av) C_noret;
C_noret_decl(f_3924)
static void C_ccall f_3924(C_word c,C_word *av) C_noret;
C_noret_decl(f_3927)
static void C_ccall f_3927(C_word c,C_word *av) C_noret;
C_noret_decl(f_3936)
static void C_fcall f_3936(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3962)
static void C_ccall f_3962(C_word c,C_word *av) C_noret;
C_noret_decl(f_3982)
static void C_ccall f_3982(C_word c,C_word *av) C_noret;
C_noret_decl(f_4040)
static void C_fcall f_4040(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4050)
static void C_fcall f_4050(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4066)
static void C_ccall f_4066(C_word c,C_word *av) C_noret;
C_noret_decl(f_4082)
static void C_ccall f_4082(C_word c,C_word *av) C_noret;
C_noret_decl(f_4113)
static void C_fcall f_4113(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4123)
static void C_ccall f_4123(C_word c,C_word *av) C_noret;
C_noret_decl(f_4139)
static void C_fcall f_4139(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4149)
static void C_ccall f_4149(C_word c,C_word *av) C_noret;
C_noret_decl(f_4151)
static void C_fcall f_4151(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4161)
static void C_ccall f_4161(C_word c,C_word *av) C_noret;
C_noret_decl(f_4213)
static void C_ccall f_4213(C_word c,C_word *av) C_noret;
C_noret_decl(f_4216)
static void C_ccall f_4216(C_word c,C_word *av) C_noret;
C_noret_decl(f_4224)
static void C_ccall f_4224(C_word c,C_word *av) C_noret;
C_noret_decl(f_4228)
static void C_ccall f_4228(C_word c,C_word *av) C_noret;
C_noret_decl(f_4236)
static void C_ccall f_4236(C_word c,C_word *av) C_noret;
C_noret_decl(f_4239)
static void C_ccall f_4239(C_word c,C_word *av) C_noret;
C_noret_decl(f_4242)
static void C_ccall f_4242(C_word c,C_word *av) C_noret;
C_noret_decl(f_4245)
static void C_ccall f_4245(C_word c,C_word *av) C_noret;
C_noret_decl(f_4262)
static void C_fcall f_4262(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4272)
static void C_ccall f_4272(C_word c,C_word *av) C_noret;
C_noret_decl(f_4285)
static void C_ccall f_4285(C_word c,C_word *av) C_noret;
C_noret_decl(f_4289)
static void C_ccall f_4289(C_word c,C_word *av) C_noret;
C_noret_decl(f_4291)
static void C_ccall f_4291(C_word c,C_word *av) C_noret;
C_noret_decl(f_4295)
static void C_ccall f_4295(C_word c,C_word *av) C_noret;
C_noret_decl(f_4298)
static void C_ccall f_4298(C_word c,C_word *av) C_noret;
C_noret_decl(f_4301)
static void C_ccall f_4301(C_word c,C_word *av) C_noret;
C_noret_decl(f_4329)
static void C_ccall f_4329(C_word c,C_word *av) C_noret;
C_noret_decl(f_4366)
static void C_fcall f_4366(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4395)
static void C_ccall f_4395(C_word c,C_word *av) C_noret;
C_noret_decl(f_4397)
static void C_fcall f_4397(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4422)
static void C_ccall f_4422(C_word c,C_word *av) C_noret;
C_noret_decl(f_4446)
static void C_ccall f_4446(C_word c,C_word *av) C_noret;
C_noret_decl(f_4456)
static void C_ccall f_4456(C_word c,C_word *av) C_noret;
C_noret_decl(f_4458)
static void C_fcall f_4458(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4483)
static void C_ccall f_4483(C_word c,C_word *av) C_noret;
C_noret_decl(f_4505)
static void C_ccall f_4505(C_word c,C_word *av) C_noret;
C_noret_decl(f_4518)
static void C_ccall f_4518(C_word c,C_word *av) C_noret;
C_noret_decl(f_4522)
static void C_ccall f_4522(C_word c,C_word *av) C_noret;
C_noret_decl(f_4525)
static void C_ccall f_4525(C_word c,C_word *av) C_noret;
C_noret_decl(f_4528)
static void C_ccall f_4528(C_word c,C_word *av) C_noret;
C_noret_decl(f_4537)
static void C_ccall f_4537(C_word c,C_word *av) C_noret;
C_noret_decl(f_4551)
static void C_ccall f_4551(C_word c,C_word *av) C_noret;
C_noret_decl(f_4574)
static void C_ccall f_4574(C_word c,C_word *av) C_noret;
C_noret_decl(f_4592)
static void C_ccall f_4592(C_word c,C_word *av) C_noret;
C_noret_decl(f_4596)
static void C_ccall f_4596(C_word c,C_word *av) C_noret;
C_noret_decl(f_4613)
static void C_ccall f_4613(C_word c,C_word *av) C_noret;
C_noret_decl(f_4615)
static void C_fcall f_4615(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4640)
static void C_ccall f_4640(C_word c,C_word *av) C_noret;
C_noret_decl(f_4663)
static void C_fcall f_4663(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4675)
static void C_ccall f_4675(C_word c,C_word *av) C_noret;
C_noret_decl(f_4707)
static void C_ccall f_4707(C_word c,C_word *av) C_noret;
C_noret_decl(f_4709)
static void C_fcall f_4709(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4734)
static void C_ccall f_4734(C_word c,C_word *av) C_noret;
C_noret_decl(f_4760)
static void C_ccall f_4760(C_word c,C_word *av) C_noret;
C_noret_decl(f_4762)
static void C_fcall f_4762(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4787)
static void C_ccall f_4787(C_word c,C_word *av) C_noret;
C_noret_decl(f_4811)
static void C_ccall f_4811(C_word c,C_word *av) C_noret;
C_noret_decl(f_4813)
static void C_fcall f_4813(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4838)
static void C_ccall f_4838(C_word c,C_word *av) C_noret;
C_noret_decl(f_4859)
static void C_ccall f_4859(C_word c,C_word *av) C_noret;
C_noret_decl(f_4862)
static void C_ccall f_4862(C_word c,C_word *av) C_noret;
C_noret_decl(f_4864)
static void C_ccall f_4864(C_word c,C_word *av) C_noret;
C_noret_decl(f_4871)
static void C_ccall f_4871(C_word c,C_word *av) C_noret;
C_noret_decl(f_4874)
static void C_ccall f_4874(C_word c,C_word *av) C_noret;
C_noret_decl(f_4877)
static void C_ccall f_4877(C_word c,C_word *av) C_noret;
C_noret_decl(f_4883)
static void C_ccall f_4883(C_word c,C_word *av) C_noret;
C_noret_decl(f_4886)
static void C_ccall f_4886(C_word c,C_word *av) C_noret;
C_noret_decl(C_lfa2_toplevel)
C_externexport void C_ccall C_lfa2_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_2086)
static void C_ccall trf_2086(C_word c,C_word *av) C_noret;
static void C_ccall trf_2086(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2086(t0,t1,t2);}

C_noret_decl(trf_2130)
static void C_ccall trf_2130(C_word c,C_word *av) C_noret;
static void C_ccall trf_2130(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2130(t0,t1,t2);}

C_noret_decl(trf_2680)
static void C_ccall trf_2680(C_word c,C_word *av) C_noret;
static void C_ccall trf_2680(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2680(t0,t1,t2);}

C_noret_decl(trf_2959)
static void C_ccall trf_2959(C_word c,C_word *av) C_noret;
static void C_ccall trf_2959(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2959(t0,t1,t2);}

C_noret_decl(trf_2965)
static void C_ccall trf_2965(C_word c,C_word *av) C_noret;
static void C_ccall trf_2965(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2965(t0,t1,t2);}

C_noret_decl(trf_3006)
static void C_ccall trf_3006(C_word c,C_word *av) C_noret;
static void C_ccall trf_3006(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3006(t0,t1,t2);}

C_noret_decl(trf_3021)
static void C_ccall trf_3021(C_word c,C_word *av) C_noret;
static void C_ccall trf_3021(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3021(t0,t1,t2,t3);}

C_noret_decl(trf_3029)
static void C_ccall trf_3029(C_word c,C_word *av) C_noret;
static void C_ccall trf_3029(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3029(t0,t1,t2);}

C_noret_decl(trf_3100)
static void C_ccall trf_3100(C_word c,C_word *av) C_noret;
static void C_ccall trf_3100(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3100(t0,t1,t2);}

C_noret_decl(trf_3198)
static void C_ccall trf_3198(C_word c,C_word *av) C_noret;
static void C_ccall trf_3198(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3198(t0,t1,t2);}

C_noret_decl(trf_3215)
static void C_ccall trf_3215(C_word c,C_word *av) C_noret;
static void C_ccall trf_3215(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_3215(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3222)
static void C_ccall trf_3222(C_word c,C_word *av) C_noret;
static void C_ccall trf_3222(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3222(t0,t1);}

C_noret_decl(trf_3226)
static void C_ccall trf_3226(C_word c,C_word *av) C_noret;
static void C_ccall trf_3226(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3226(t0,t1,t2);}

C_noret_decl(trf_3271)
static void C_ccall trf_3271(C_word c,C_word *av) C_noret;
static void C_ccall trf_3271(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3271(t0,t1,t2);}

C_noret_decl(trf_3277)
static void C_ccall trf_3277(C_word c,C_word *av) C_noret;
static void C_ccall trf_3277(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3277(t0,t1,t2);}

C_noret_decl(trf_3283)
static void C_ccall trf_3283(C_word c,C_word *av) C_noret;
static void C_ccall trf_3283(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3283(t0,t1,t2);}

C_noret_decl(trf_3289)
static void C_ccall trf_3289(C_word c,C_word *av) C_noret;
static void C_ccall trf_3289(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_3289(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3361)
static void C_ccall trf_3361(C_word c,C_word *av) C_noret;
static void C_ccall trf_3361(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3361(t0,t1);}

C_noret_decl(trf_3475)
static void C_ccall trf_3475(C_word c,C_word *av) C_noret;
static void C_ccall trf_3475(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3475(t0,t1);}

C_noret_decl(trf_3482)
static void C_ccall trf_3482(C_word c,C_word *av) C_noret;
static void C_ccall trf_3482(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3482(t0,t1);}

C_noret_decl(trf_3526)
static void C_ccall trf_3526(C_word c,C_word *av) C_noret;
static void C_ccall trf_3526(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3526(t0,t1);}

C_noret_decl(trf_3593)
static void C_ccall trf_3593(C_word c,C_word *av) C_noret;
static void C_ccall trf_3593(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3593(t0,t1);}

C_noret_decl(trf_3643)
static void C_ccall trf_3643(C_word c,C_word *av) C_noret;
static void C_ccall trf_3643(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3643(t0,t1,t2);}

C_noret_decl(trf_3666)
static void C_ccall trf_3666(C_word c,C_word *av) C_noret;
static void C_ccall trf_3666(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3666(t0,t1,t2);}

C_noret_decl(trf_3688)
static void C_ccall trf_3688(C_word c,C_word *av) C_noret;
static void C_ccall trf_3688(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3688(t0,t1);}

C_noret_decl(trf_3796)
static void C_ccall trf_3796(C_word c,C_word *av) C_noret;
static void C_ccall trf_3796(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3796(t0,t1,t2);}

C_noret_decl(trf_3844)
static void C_ccall trf_3844(C_word c,C_word *av) C_noret;
static void C_ccall trf_3844(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3844(t0,t1,t2);}

C_noret_decl(trf_3936)
static void C_ccall trf_3936(C_word c,C_word *av) C_noret;
static void C_ccall trf_3936(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3936(t0,t1);}

C_noret_decl(trf_4040)
static void C_ccall trf_4040(C_word c,C_word *av) C_noret;
static void C_ccall trf_4040(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4040(t0,t1,t2);}

C_noret_decl(trf_4050)
static void C_ccall trf_4050(C_word c,C_word *av) C_noret;
static void C_ccall trf_4050(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4050(t0,t1);}

C_noret_decl(trf_4113)
static void C_ccall trf_4113(C_word c,C_word *av) C_noret;
static void C_ccall trf_4113(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4113(t0,t1,t2);}

C_noret_decl(trf_4139)
static void C_ccall trf_4139(C_word c,C_word *av) C_noret;
static void C_ccall trf_4139(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4139(t0,t1,t2);}

C_noret_decl(trf_4151)
static void C_ccall trf_4151(C_word c,C_word *av) C_noret;
static void C_ccall trf_4151(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4151(t0,t1,t2);}

C_noret_decl(trf_4262)
static void C_ccall trf_4262(C_word c,C_word *av) C_noret;
static void C_ccall trf_4262(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4262(t0,t1,t2);}

C_noret_decl(trf_4366)
static void C_ccall trf_4366(C_word c,C_word *av) C_noret;
static void C_ccall trf_4366(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4366(t0,t1,t2);}

C_noret_decl(trf_4397)
static void C_ccall trf_4397(C_word c,C_word *av) C_noret;
static void C_ccall trf_4397(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4397(t0,t1,t2);}

C_noret_decl(trf_4458)
static void C_ccall trf_4458(C_word c,C_word *av) C_noret;
static void C_ccall trf_4458(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4458(t0,t1,t2);}

C_noret_decl(trf_4615)
static void C_ccall trf_4615(C_word c,C_word *av) C_noret;
static void C_ccall trf_4615(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4615(t0,t1,t2);}

C_noret_decl(trf_4663)
static void C_ccall trf_4663(C_word c,C_word *av) C_noret;
static void C_ccall trf_4663(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4663(t0,t1,t2);}

C_noret_decl(trf_4709)
static void C_ccall trf_4709(C_word c,C_word *av) C_noret;
static void C_ccall trf_4709(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4709(t0,t1,t2);}

C_noret_decl(trf_4762)
static void C_ccall trf_4762(C_word c,C_word *av) C_noret;
static void C_ccall trf_4762(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4762(t0,t1,t2);}

C_noret_decl(trf_4813)
static void C_ccall trf_4813(C_word c,C_word *av) C_noret;
static void C_ccall trf_4813(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4813(t0,t1,t2);}

/* f5393 in k3591 in k3297 in k3294 in k3291 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f5393(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f5393,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=lf[61];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f5451 in count-floatvar in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f5451(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f5451,c,av);}
a=C_alloc(4);
t2=C_eqp(lf[11],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3263,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* lfa2.scm:338: chicken.compiler.support#node-parameters */
t4=*((C_word*)lf[15]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=((C_word*)t0)[2];
f_3222(t3,C_SCHEME_FALSE);}}

/* f5472 in k3473 in k3462 in k3459 in k3456 in k3297 in k3294 in k3291 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f5472(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f5472,c,av);}
a=C_alloc(7);
t2=C_eqp(lf[11],t1);
if(C_truep(t2)){
if(C_truep(C_i_not(((C_word*)t0)[2]))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3512,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3520,a[2]=((C_word*)t0)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* lfa2.scm:387: chicken.compiler.support#node-parameters */
t5=*((C_word*)lf[15]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t3=((C_word*)t0)[3];
f_3482(t3,C_SCHEME_FALSE);}}
else{
t3=((C_word*)t0)[3];
f_3482(t3,C_SCHEME_FALSE);}}

/* f5484 in k3297 in k3294 in k3291 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f5484(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f5484,c,av);}
a=C_alloc(4);
t2=C_eqp(lf[11],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3618,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* lfa2.scm:400: chicken.compiler.support#node-parameters */
t4=*((C_word*)lf[15]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=((C_word*)t0)[2];
f_3593(t3,C_SCHEME_FALSE);}}

/* f5491 in g788 in k3657 in k3297 in k3294 in k3291 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f5491(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f5491,c,av);}
a=C_alloc(7);
t2=C_eqp(lf[11],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3921,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* lfa2.scm:450: chicken.compiler.support#node-parameters */
t4=*((C_word*)lf[15]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3924,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* lfa2.scm:464: walk */
t4=((C_word*)((C_word*)t0)[8])[1];
f_3289(t4,t3,((C_word*)t0)[5],((C_word*)t0)[9],((C_word*)t0)[10]);}}

/* k1455 */
static void C_ccall f_1457(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1457,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1460,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k1458 in k1455 */
static void C_ccall f_1460(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1460,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1463,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

/* k1461 in k1458 in k1455 */
static void C_ccall f_1463(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1463,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1466,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_support_toplevel(2,av2);}}

/* k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_1466(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,4)))){
C_save_and_reclaim((void *)f_1466,c,av);}
a=C_alloc(22);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=C_mutate(&lf[2] /* (set! chicken.compiler.lfa2#posq ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2680,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate(&lf[3] /* (set! chicken.compiler.lfa2#+unboxed-map+ ...) */,lf[4]);
t6=C_mutate((C_word*)lf[5]+1 /* (set! chicken.compiler.lfa2#perform-secondary-flow-analysis ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2751,tmp=(C_word)a,a+=2,tmp));
t7=C_mutate((C_word*)lf[88]+1 /* (set! chicken.compiler.lfa2#perform-unboxing ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4285,tmp=(C_word)a,a+=2,tmp));
t8=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* foldr250 in eliminate-floatvar in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_fcall f_2086(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_2086,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2094,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2115,a[2]=t1,a[3]=t3,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
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

/* g255 in foldr250 in eliminate-floatvar in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static C_word C_fcall f_2094(C_word *a,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_stack_overflow_check;{}
t3=(
/* mini-srfi-1.scm:131: pred */
  f_2176(((C_word*)t0)[2],t1)
);
return((C_truep(t3)?C_a_i_cons(&a,2,t1,t2):t2));}

/* k2113 in foldr250 in eliminate-floatvar in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_2115(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2115,c,av);}
a=C_alloc(3);
/* mini-srfi-1.scm:131: g255 */
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(
/* mini-srfi-1.scm:131: g255 */
  f_2094(C_a_i(&a,3),((C_word*)t0)[3],((C_word*)t0)[4],t1)
);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* foldr268 in chicken.compiler.lfa2#perform-unboxing in k1464 in k1461 in k1458 in k1455 */
static void C_fcall f_2130(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_2130,3,t0,t1,t2);}
a=C_alloc(4);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2164,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=t4;
t7=C_slot(t2,C_fix(1));
t1=t6;
t2=t7;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* g283 in k2162 in foldr268 in chicken.compiler.lfa2#perform-unboxing in k1464 in k1461 in k1458 in k1455 */
static C_word C_fcall f_2146(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_a_i_cons(&a,2,t1,((C_word*)t0)[2]));}

/* k2162 in foldr268 in chicken.compiler.lfa2#perform-unboxing in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_2164(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_2164,c,av);}
a=C_alloc(6);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_i_caddr(((C_word*)t0)[2]);
t4=C_i_nequalp(t2,t3);
t5=(C_truep(t4)?C_u_i_car(((C_word*)t0)[2]):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2146,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* mini-srfi-1.scm:135: g283 */
t7=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t7;
av2[1]=(
/* mini-srfi-1.scm:135: g283 */
  f_2146(C_a_i(&a,3),t6,t5)
);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t6=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* a2175 in eliminate-floatvar in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static C_word C_fcall f_2176(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t2=(
/* mini-srfi-1.scm:141: pred */
  f_3205(((C_word*)t0)[2],t1)
);
return(C_i_not(t2));}

/* chicken.compiler.lfa2#posq in k1464 in k1461 in k1458 in k1455 */
static void C_fcall f_2680(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,3)))){
C_save_and_reclaim_args((void *)trf_2680,3,t1,t2,t3);}
a=C_alloc(3);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2686,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=(
  f_2686(t4,C_fix(0),t3)
);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* loop in chicken.compiler.lfa2#posq in k1464 in k1461 in k1458 in k1455 */
static C_word C_fcall f_2686(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_nullp(t2))){
return(C_SCHEME_FALSE);}
else{
t3=C_i_car(t2);
t4=C_eqp(t3,((C_word*)t0)[2]);
if(C_truep(t4)){
return(t1);}
else{
t6=C_fixnum_plus(t1,C_fix(1));
t7=C_u_i_cdr(t2);
t1=t6;
t2=t7;
goto loop;}}}

/* chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_2751(C_word c,C_word *av){
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
C_word t33;
C_word t34;
C_word t35;
C_word t36;
C_word t37;
C_word t38;
C_word t39;
C_word t40;
C_word t41;
C_word t42;
C_word t43;
C_word t44;
C_word t45;
C_word t46;
C_word t47;
C_word t48;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(83,c,5)))){
C_save_and_reclaim((void *)f_2751,c,av);}
a=C_alloc(83);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_END_OF_LIST;
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
t20=C_SCHEME_UNDEFINED;
t21=(*a=C_VECTOR_TYPE|1,a[1]=t20,tmp=(C_word)a,a+=2,tmp);
t22=C_SCHEME_UNDEFINED;
t23=(*a=C_VECTOR_TYPE|1,a[1]=t22,tmp=(C_word)a,a+=2,tmp);
t24=C_SCHEME_UNDEFINED;
t25=(*a=C_VECTOR_TYPE|1,a[1]=t24,tmp=(C_word)a,a+=2,tmp);
t26=C_SCHEME_UNDEFINED;
t27=(*a=C_VECTOR_TYPE|1,a[1]=t26,tmp=(C_word)a,a+=2,tmp);
t28=C_SCHEME_UNDEFINED;
t29=(*a=C_VECTOR_TYPE|1,a[1]=t28,tmp=(C_word)a,a+=2,tmp);
t30=C_SCHEME_UNDEFINED;
t31=(*a=C_VECTOR_TYPE|1,a[1]=t30,tmp=(C_word)a,a+=2,tmp);
t32=C_SCHEME_UNDEFINED;
t33=(*a=C_VECTOR_TYPE|1,a[1]=t32,tmp=(C_word)a,a+=2,tmp);
t34=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2882,tmp=(C_word)a,a+=2,tmp));
t35=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2933,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t36=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2959,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t37=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2965,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t38=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3006,a[2]=t31,tmp=(C_word)a,a+=3,tmp));
t39=C_set_block_item(t19,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3021,a[2]=t11,a[3]=t17,a[4]=t15,tmp=(C_word)a,a+=5,tmp));
t40=C_set_block_item(t21,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3192,a[2]=t7,tmp=(C_word)a,a+=3,tmp));
t41=C_set_block_item(t23,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3198,a[2]=t7,tmp=(C_word)a,a+=3,tmp));
t42=C_set_block_item(t25,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3215,a[2]=t7,tmp=(C_word)a,a+=3,tmp));
t43=C_set_block_item(t27,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3271,a[2]=t25,tmp=(C_word)a,a+=3,tmp));
t44=C_set_block_item(t29,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3277,a[2]=t25,tmp=(C_word)a,a+=3,tmp));
t45=C_set_block_item(t31,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3283,a[2]=t25,tmp=(C_word)a,a+=3,tmp));
t46=C_set_block_item(t33,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3289,a[2]=t27,a[3]=t21,a[4]=t23,a[5]=t9,a[6]=t33,a[7]=t13,a[8]=t7,a[9]=t29,a[10]=t19,tmp=(C_word)a,a+=11,tmp));
t47=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4213,a[2]=t1,a[3]=t7,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* lfa2.scm:497: walk */
t48=((C_word*)t33)[1];
f_3289(t48,t47,t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}

/* k2765 in k3297 in k3294 in k3291 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_2767(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2767,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=lf[38];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(C_i_symbolp(((C_word*)t0)[3]))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=lf[39];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2779,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* lfa2.scm:245: chicken.compiler.support#big-fixnum? */
t3=*((C_word*)lf[53]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}}

/* k2777 in k2765 in k3297 in k3294 in k3291 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_2779(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2779,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2782,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
f_2782(2,av2);}}
else{
/* lfa2.scm:245: chicken.compiler.support#small-bignum? */
t3=*((C_word*)lf[52]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k2780 in k2777 in k2765 in k3297 in k3294 in k3291 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_2782(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_2782,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=lf[40];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(C_fixnump(((C_word*)t0)[3]))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=lf[41];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(C_i_bignump(((C_word*)t0)[3]))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=lf[42];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(C_i_flonump(((C_word*)t0)[3]))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=lf[43];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(C_i_ratnump(((C_word*)t0)[3]))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=lf[44];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(C_i_cplxnump(((C_word*)t0)[3]))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=lf[45];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(C_booleanp(((C_word*)t0)[3]))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=lf[34];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(C_i_nullp(((C_word*)t0)[3]))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=lf[46];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(C_i_listp(((C_word*)t0)[3]))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=lf[47];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=lf[48];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(C_eofp(((C_word*)t0)[3]))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=lf[49];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(C_i_vectorp(((C_word*)t0)[3]))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=lf[50];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_immp(((C_word*)t0)[3]);
t3=C_i_not(t2);
t4=(C_truep(t3)?C_structurep(((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=C_slot(((C_word*)t0)[3],C_fix(0));
t6=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_list(&a,2,lf[6],t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t5=C_charp(((C_word*)t0)[3]);
t6=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t6;
av2[1]=(C_truep(t5)?lf[51]:lf[7]);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}}}}}}}}}}}}}

/* merge in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static C_word C_fcall f_2882(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_stack_overflow_check;{}
t3=C_eqp(t1,t2);
if(C_truep(t3)){
return(t1);}
else{
if(C_truep(C_i_pairp(t1))){
if(C_truep(C_i_pairp(t2))){
t4=C_eqp(C_u_i_car(t1),lf[6]);
if(C_truep(t4)){
t5=C_eqp(C_u_i_car(t2),lf[6]);
if(C_truep(t5)){
t6=C_i_cadr(t1);
t7=C_i_cadr(t2);
t8=C_eqp(t6,t7);
return((C_truep(t8)?t1:lf[7]));}
else{
return(lf[7]);}}
else{
return(lf[7]);}}
else{
return(lf[7]);}}
else{
return(lf[7]);}}}

/* report in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static C_word C_fcall f_2933(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_overflow_check;{}
t2=C_i_assoc(t1,((C_word*)((C_word*)t0)[2])[1]);
if(C_truep(t2)){
t3=C_i_cdr(t2);
t4=C_s_a_i_plus(&a,2,t3,C_fix(1));
return(C_i_set_cdr(t2,t4));}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=C_a_i_cons(&a,2,t1,C_fix(1));
t5=C_a_i_cons(&a,2,t4,t3);
t6=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
return(t6);}}

/* assigned? in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_fcall f_2959(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_2959,3,t0,t1,t2);}
/* lfa2.scm:277: chicken.compiler.support#db-get */
t3=*((C_word*)lf[8]+1);{
C_word av2[5];
av2[0]=t3;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
av2[4]=lf[9];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* droppable? in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_fcall f_2965(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_2965,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2970,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* lfa2.scm:280: chicken.compiler.support#node-class */
t4=*((C_word*)lf[16]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k2968 in droppable? in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_2970(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_2970,c,av);}
a=C_alloc(5);
t2=C_u_i_memq(t1,lf[10]);
if(C_truep(t2)){
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3004,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* lfa2.scm:282: chicken.compiler.support#node-class */
t4=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k2994 in k2998 in k3002 in k2968 in droppable? in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_2996(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2996,c,av);}
t2=C_i_not(t1);
if(C_truep(t2)){
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* lfa2.scm:285: chicken.compiler.support#variable-mark */
t3=*((C_word*)lf[12]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[13];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k2998 in k3002 in k2968 in droppable? in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_3000(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_3000,c,av);}
a=C_alloc(4);
t2=C_i_car(t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2996,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lfa2.scm:284: chicken.compiler.support#db-get */
t4=*((C_word*)lf[8]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=t2;
av2[4]=lf[14];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k3002 in k2968 in droppable? in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_3004(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3004,c,av);}
a=C_alloc(4);
t2=C_eqp(lf[11],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3000,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* lfa2.scm:283: chicken.compiler.support#node-parameters */
t4=*((C_word*)lf[15]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* drop! in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_fcall f_3006(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_3006,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3010,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lfa2.scm:288: sub-boxed */
t4=((C_word*)((C_word*)t0)[2])[1];
f_3283(t4,t3,t2);}

/* k3008 in drop! in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_3010(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_3010,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3013,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* lfa2.scm:289: chicken.compiler.support#node-class-set! */
t3=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[20];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3011 in k3008 in drop! in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_3013(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_3013,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3016,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* lfa2.scm:290: chicken.compiler.support#node-parameters-set! */
t3=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3014 in k3011 in k3008 in drop! in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_3016(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3016,c,av);}
/* lfa2.scm:291: chicken.compiler.support#node-subexpressions-set! */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* extinguish! in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_fcall f_3021(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_3021,4,t0,t1,t2,t3);}
a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3129,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=t2,a[7]=t3,tmp=(C_word)a,a+=8,tmp);
/* lfa2.scm:294: chicken.compiler.support#node-parameters */
t5=*((C_word*)lf[15]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k3026 in k3127 in extinguish! in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_3028(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,3)))){
C_save_and_reclaim((void *)f_3028,c,av);}
a=C_alloc(20);
t2=C_SCHEME_TRUE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3029,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t5=C_i_check_list_2(t1,lf[21]);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3046,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3100,a[2]=t8,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_3100(t10,t6,t1);}

/* g617 in k3026 in k3127 in extinguish! in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_fcall f_3029(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_3029,3,t0,t1,t2);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3036,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* lfa2.scm:299: droppable? */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2965(t4,t3,t2);}

/* k3034 in g617 in k3026 in k3127 in extinguish! in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_3036(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3036,c,av);}
if(C_truep(t1)){
/* lfa2.scm:300: drop! */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3006(t2,((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t2=C_set_block_item(((C_word*)t0)[5],0,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3044 in k3026 in k3127 in extinguish! in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_3046(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_3046,c,av);}
a=C_alloc(8);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
/* lfa2.scm:304: drop! */
t2=((C_word*)((C_word*)t0)[3])[1];
f_3006(t2,((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3063,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3098,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* lfa2.scm:310: chicken.compiler.support#node-subexpressions */
t4=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k3061 in k3044 in k3026 in k3127 in extinguish! in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_3063(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3063,c,av);}
a=C_alloc(3);
t2=C_a_i_list1(&a,1,t1);
/* lfa2.scm:305: chicken.compiler.support#node-parameters-set! */
t3=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3068 in k3096 in k3044 in k3026 in k3127 in extinguish! in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_3070(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3070,c,av);}
/* lfa2.scm:308: scheme#string-append */
t2=*((C_word*)lf[22]+1);{
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

/* k3096 in k3044 in k3026 in k3127 in extinguish! in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_3098(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_3098,c,av);}
a=C_alloc(4);
t2=C_i_length(t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3070,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
switch(t2){
case C_fix(1):
/* lfa2.scm:308: scheme#string-append */
t4=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[23];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}
case C_fix(2):
/* lfa2.scm:308: scheme#string-append */
t4=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[24];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}
case C_fix(3):
/* lfa2.scm:308: scheme#string-append */
t4=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[25];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}
default:
/* lfa2.scm:314: chicken.compiler.support#bomb */
t4=*((C_word*)lf[26]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[27];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* for-each-loop616 in k3026 in k3127 in extinguish! in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_fcall f_3100(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3100,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3110,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* lfa2.scm:297: g617 */
t4=((C_word*)t0)[3];
f_3029(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3108 in for-each-loop616 in k3026 in k3127 in extinguish! in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_3110(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3110,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_3100(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k3127 in extinguish! in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_3129(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(42,c,2)))){
C_save_and_reclaim((void *)f_3129,c,av);}
a=C_alloc(42);
t2=(
/* lfa2.scm:294: report */
  f_2933(C_a_i(&a,35),((C_word*)((C_word*)t0)[2])[1],C_i_car(t1))
);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3028,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* lfa2.scm:295: chicken.compiler.support#node-subexpressions */
t4=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* loop in k3309 in k3306 in k3297 in k3294 in k3291 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static C_word C_fcall f_3146(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_nullp(t1))){
return(lf[7]);}
else{
t2=C_i_cdar(t1);
t3=C_eqp(((C_word*)t0)[2],t2);
if(C_truep(t3)){
t4=C_u_i_car(t1);
t5=C_i_assq(C_u_i_car(t4),((C_word*)t0)[3]);
if(C_truep(t5)){
return(C_i_cdr(t5));}
else{
t7=C_u_i_cdr(t1);
t1=t7;
goto loop;}}
else{
t7=C_u_i_cdr(t1);
t1=t7;
goto loop;}}}

/* floatvar? in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static C_word C_fcall f_3192(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_i_assq(t1,((C_word*)((C_word*)t0)[2])[1]));}

/* eliminate-floatvar in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_fcall f_3198(C_word t0,C_word t1,C_word t2){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,0,3)))){
C_save_and_reclaim_args((void *)trf_3198,3,t0,t1,t2);}
a=C_alloc(16);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3203,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3205,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=((C_word*)((C_word*)t0)[2])[1];
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2176,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t7=C_i_check_list_2(t5,lf[29]);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2086,a[2]=t6,a[3]=t9,tmp=(C_word)a,a+=4,tmp));
t11=((C_word*)t9)[1];
f_2086(t11,t3,t5);}

/* k3201 in eliminate-floatvar in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_3203(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3203,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a3204 in eliminate-floatvar in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static C_word C_fcall f_3205(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_eqp(((C_word*)t0)[2],C_i_car(t1)));}

/* count-floatvar in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_fcall f_3215(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_3215,5,t0,t1,t2,t3,t4);}
a=C_alloc(10);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_fix(1):C_i_car(t4));
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3222,a[2]=t6,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f5451,a[2]=t7,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* lfa2.scm:327: chicken.compiler.support#node-class */
t9=*((C_word*)lf[16]+1);{
C_word av2[3];
av2[0]=t9;
av2[1]=t8;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* k3220 in count-floatvar in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_fcall f_3222(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_3222,2,t0,t1);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3226,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* lfa2.scm:337: g682 */
t3=t2;
f_3226(t3,((C_word*)t0)[4],t1);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* g682 in k3220 in count-floatvar in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_fcall f_3226(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_3226,3,t0,t1,t2);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3234,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* lfa2.scm:341: acc */
t4=((C_word*)t0)[3];{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3232 in g682 in k3220 in count-floatvar in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_3234(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3234,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3246,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* lfa2.scm:341: acc */
t3=((C_word*)t0)[4];{
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

/* k3244 in k3232 in g682 in k3220 in count-floatvar in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_3246(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,1)))){
C_save_and_reclaim((void *)f_3246,c,av);}
a=C_alloc(29);
t2=C_i_car(t1);
t3=C_s_a_i_plus(&a,2,((C_word*)t0)[2],t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_set_car(((C_word*)t0)[4],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k3261 */
static void C_ccall f_3263(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3263,c,av);}
t2=((C_word*)t0)[2];
f_3222(t2,C_i_assq(C_i_car(t1),((C_word*)((C_word*)t0)[3])[1]));}

/* add-boxed in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_fcall f_3271(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_3271,3,t0,t1,t2);}
/* lfa2.scm:343: count-floatvar */
t3=((C_word*)((C_word*)t0)[2])[1];
f_3215(t3,t1,t2,*((C_word*)lf[30]+1),C_SCHEME_END_OF_LIST);}

/* add-unboxed in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_fcall f_3277(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_3277,3,t0,t1,t2);}
/* lfa2.scm:344: count-floatvar */
t3=((C_word*)((C_word*)t0)[2])[1];
f_3215(t3,t1,t2,*((C_word*)lf[31]+1),C_SCHEME_END_OF_LIST);}

/* sub-boxed in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_fcall f_3283(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,4)))){
C_save_and_reclaim_args((void *)trf_3283,3,t0,t1,t2);}
a=C_alloc(3);
/* lfa2.scm:345: count-floatvar */
t3=((C_word*)((C_word*)t0)[2])[1];
f_3215(t3,t1,t2,*((C_word*)lf[30]+1),C_a_i_list(&a,1,C_fix(-1)));}

/* walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_fcall f_3289(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,2)))){
C_save_and_reclaim_args((void *)trf_3289,5,t0,t1,t2,t3,t4);}
a=C_alloc(15);
t5=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_3293,a[2]=t3,a[3]=t1,a[4]=t4,a[5]=((C_word*)t0)[2],a[6]=t2,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],a[12]=((C_word*)t0)[8],a[13]=((C_word*)t0)[9],a[14]=((C_word*)t0)[10],tmp=(C_word)a,a+=15,tmp);
/* lfa2.scm:348: chicken.compiler.support#node-class */
t6=*((C_word*)lf[16]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k3291 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_3293(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_3293,c,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_3296,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],tmp=(C_word)a,a+=16,tmp);
/* lfa2.scm:349: chicken.compiler.support#node-parameters */
t3=*((C_word*)lf[15]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k3294 in k3291 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_3296(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(17,c,2)))){
C_save_and_reclaim((void *)f_3296,c,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_3299,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],tmp=(C_word)a,a+=17,tmp);
/* lfa2.scm:350: chicken.compiler.support#node-subexpressions */
t3=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k3297 in k3294 in k3291 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_3299(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(23,c,4)))){
C_save_and_reclaim((void *)f_3299,c,av);}
a=C_alloc(23);
t2=C_eqp(((C_word*)t0)[2],lf[11]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3308,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t4=(
/* lfa2.scm:353: floatvar? */
  f_3192(((C_word*)((C_word*)t0)[9])[1],C_i_car(((C_word*)t0)[3]))
);
if(C_truep(t4)){
t5=C_i_car(((C_word*)t0)[3]);
if(C_truep(C_i_not(C_i_assq(t5,((C_word*)t0)[4])))){
/* lfa2.scm:355: eliminate-floatvar */
t6=((C_word*)((C_word*)t0)[10])[1];
f_3198(t6,t3,C_i_car(((C_word*)t0)[3]));}
else{
t6=t3;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
f_3308(2,av2);}}}
else{
t5=t3;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_3308(2,av2);}}}
else{
t3=C_eqp(((C_word*)t0)[2],lf[32]);
t4=(C_truep(t3)?t3:C_eqp(((C_word*)t0)[2],lf[33]));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3358,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[12],a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* lfa2.scm:359: walk */
t6=((C_word*)((C_word*)t0)[12])[1];
f_3289(t6,t5,C_i_car(t1),((C_word*)t0)[4],((C_word*)t0)[6]);}
else{
t5=C_eqp(((C_word*)t0)[2],lf[36]);
if(C_truep(t5)){
t6=C_i_car(((C_word*)t0)[3]);
if(C_truep(C_i_stringp(t6))){
t7=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t7;
av2[1]=lf[37];
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2767,a[2]=((C_word*)t0)[5],a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* lfa2.scm:242: chicken.keyword#keyword? */
t8=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}}
else{
t6=C_eqp(((C_word*)t0)[2],lf[55]);
if(C_truep(t6)){
t7=C_i_car(t1);
t8=C_i_car(((C_word*)t0)[3]);
t9=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_3458,a[2]=t1,a[3]=t8,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[12],a[6]=((C_word*)t0)[5],a[7]=t7,a[8]=((C_word*)t0)[13],a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[14],a[11]=((C_word*)t0)[15],a[12]=((C_word*)t0)[7],a[13]=((C_word*)t0)[9],tmp=(C_word)a,a+=14,tmp);
/* lfa2.scm:373: walk */
t10=((C_word*)((C_word*)t0)[12])[1];
f_3289(t10,t9,t7,((C_word*)t0)[4],((C_word*)t0)[6]);}
else{
t7=C_eqp(((C_word*)t0)[2],lf[56]);
t8=(C_truep(t7)?t7:C_eqp(((C_word*)t0)[2],lf[57]));
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3568,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
/* lfa2.scm:395: walk */
t10=((C_word*)((C_word*)t0)[12])[1];
f_3289(t10,t9,C_i_car(t1),C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}
else{
t9=C_eqp(((C_word*)t0)[2],lf[59]);
t10=(C_truep(t9)?t9:C_eqp(((C_word*)t0)[2],lf[60]));
if(C_truep(t10)){
t11=C_i_car(t1);
t12=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3587,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[12],a[4]=t11,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t13=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3593,a[2]=((C_word*)t0)[10],a[3]=t12,a[4]=t11,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[12],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f5484,a[2]=t13,a[3]=((C_word*)t0)[9],a[4]=t11,tmp=(C_word)a,a+=5,tmp);
/* lfa2.scm:327: chicken.compiler.support#node-class */
t15=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t15;
av2[1]=t14;
av2[2]=t11;
((C_proc)(void*)(*((C_word*)t15+1)))(3,av2);}}
else{
t11=C_eqp(((C_word*)t0)[2],lf[20]);
if(C_truep(t11)){
t12=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t12;
av2[1]=lf[61];
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}
else{
t12=C_eqp(((C_word*)t0)[2],lf[62]);
if(C_truep(t12)){
t13=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t13;
av2[1]=lf[58];
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}
else{
t13=C_eqp(((C_word*)t0)[2],lf[63]);
t14=(C_truep(t13)?t13:C_eqp(((C_word*)t0)[2],lf[64]));
if(C_truep(t14)){
t15=C_i_car(((C_word*)t0)[3]);
t16=C_i_assoc(t15,lf[3]);
t17=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3643,a[2]=t16,a[3]=((C_word*)t0)[15],a[4]=((C_word*)t0)[12],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t18=C_i_check_list_2(t1,lf[21]);
t19=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3659,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[16],a[4]=((C_word*)t0)[8],a[5]=t1,a[6]=((C_word*)t0)[12],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[5],tmp=(C_word)a,a+=10,tmp);
t20=C_SCHEME_UNDEFINED;
t21=(*a=C_VECTOR_TYPE|1,a[1]=t20,tmp=(C_word)a,a+=2,tmp);
t22=C_set_block_item(t21,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4113,a[2]=t21,a[3]=t17,tmp=(C_word)a,a+=4,tmp));
t23=((C_word*)t21)[1];
f_4113(t23,t19,t1);}
else{
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4139,a[2]=((C_word*)t0)[12],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t16=C_i_check_list_2(t1,lf[21]);
t17=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4149,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t18=C_SCHEME_UNDEFINED;
t19=(*a=C_VECTOR_TYPE|1,a[1]=t18,tmp=(C_word)a,a+=2,tmp);
t20=C_set_block_item(t19,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4151,a[2]=t19,a[3]=t15,tmp=(C_word)a,a+=4,tmp));
t21=((C_word*)t19)[1];
f_4151(t21,t17,t1);}}}}}}}}}}

/* k3306 in k3297 in k3294 in k3291 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_3308(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_3308,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3311,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* lfa2.scm:356: add-boxed */
t3=((C_word*)((C_word*)t0)[6])[1];
f_3271(t3,t2,((C_word*)t0)[7]);}

/* k3309 in k3306 in k3297 in k3294 in k3291 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_3311(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3311,c,av);}
a=C_alloc(4);
t2=C_i_car(((C_word*)t0)[2]);
t3=C_i_assq(t2,((C_word*)t0)[3]);
if(C_truep(t3)){
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_cdr(t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3146,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=(
  f_3146(t4,((C_word*)t0)[5])
);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k3356 in k3297 in k3294 in k3291 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_3358(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(23,c,3)))){
C_save_and_reclaim((void *)f_3358,c,av);}
a=C_alloc(23);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3361,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=C_i_pairp(t1);
t4=(C_truep(t3)?C_eqp(lf[34],C_u_i_car(t1)):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3390,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[7],a[7]=t1,a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
t6=C_i_cadr(((C_word*)t0)[5]);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3414,a[2]=((C_word*)t0)[4],a[3]=t5,a[4]=t6,a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
/* lfa2.scm:362: scheme#append */
t8=*((C_word*)lf[35]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=C_i_cadr(t1);
av2[3]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}
else{
t5=t2;
f_3361(t5,C_SCHEME_UNDEFINED);}}

/* k3359 in k3356 in k3297 in k3294 in k3291 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_fcall f_3361(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_3361,2,t0,t1);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3368,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* lfa2.scm:367: walk */
t3=((C_word*)((C_word*)t0)[4])[1];
f_3289(t3,t2,C_i_cadr(((C_word*)t0)[5]),((C_word*)t0)[6],((C_word*)t0)[7]);}

/* k3366 in k3359 in k3356 in k3297 in k3294 in k3291 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_3368(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_3368,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3372,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* lfa2.scm:368: walk */
t3=((C_word*)((C_word*)t0)[4])[1];
f_3289(t3,t2,C_i_caddr(((C_word*)t0)[5]),((C_word*)t0)[6],((C_word*)t0)[7]);}

/* k3370 in k3366 in k3359 in k3356 in k3297 in k3294 in k3291 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_3372(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3372,c,av);}
/* lfa2.scm:367: merge */
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(
/* lfa2.scm:367: merge */
  f_2882(((C_word*)t0)[4],t1)
);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3388 in k3356 in k3297 in k3294 in k3291 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_3390(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_3390,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3394,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=C_i_caddr(((C_word*)t0)[4]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3402,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* lfa2.scm:365: scheme#append */
t5=*((C_word*)lf[35]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_i_caddr(((C_word*)t0)[7]);
av2[3]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k3392 in k3388 in k3356 in k3297 in k3294 in k3291 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_3394(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3394,c,av);}
/* lfa2.scm:361: merge */
t2=((C_word*)t0)[2];
f_3361(t2,(
/* lfa2.scm:361: merge */
  f_2882(((C_word*)t0)[4],t1)
));}

/* k3400 in k3388 in k3356 in k3297 in k3294 in k3291 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_3402(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3402,c,av);}
/* lfa2.scm:364: walk */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3289(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5]);}

/* k3412 in k3356 in k3297 in k3294 in k3291 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_3414(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3414,c,av);}
/* lfa2.scm:361: walk */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3289(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5]);}

/* k3456 in k3297 in k3294 in k3291 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_3458(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_3458,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_3461,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
/* lfa2.scm:374: assigned? */
t3=((C_word*)((C_word*)t0)[8])[1];
f_2959(t3,t2,((C_word*)t0)[3]);}

/* k3459 in k3456 in k3297 in k3294 in k3291 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_3461(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(20,c,2)))){
C_save_and_reclaim((void *)f_3461,c,av);}
a=C_alloc(20);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3464,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3526,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[12],a[5]=t2,a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[13],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_not(t1))){
t4=C_eqp(lf[43],((C_word*)t0)[10]);
if(C_truep(t4)){
t5=(
/* lfa2.scm:377: floatvar? */
  f_3192(((C_word*)((C_word*)t0)[14])[1],((C_word*)t0)[3])
);
t6=t3;
f_3526(t6,C_i_not(t5));}
else{
t5=t3;
f_3526(t5,C_SCHEME_FALSE);}}
else{
t4=t3;
f_3526(t4,C_SCHEME_FALSE);}}

/* k3462 in k3459 in k3456 in k3297 in k3294 in k3291 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_3464(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_3464,c,av);}
a=C_alloc(16);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3475,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[8])){
t4=t3;
f_3475(t4,((C_word*)t0)[10]);}
else{
t4=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[11]);
t5=t3;
f_3475(t5,C_a_i_cons(&a,2,t4,((C_word*)t0)[10]));}}

/* k3473 in k3462 in k3459 in k3456 in k3297 in k3294 in k3291 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_fcall f_3475(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,2)))){
C_save_and_reclaim_args((void *)trf_3475,2,t0,t1);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3482,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f5472,a[2]=((C_word*)t0)[8],a[3]=t2,a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
/* lfa2.scm:327: chicken.compiler.support#node-class */
t4=*((C_word*)lf[16]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3480 in k3473 in k3462 in k3459 in k3456 in k3297 in k3294 in k3291 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_fcall f_3482(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_3482,2,t0,t1);}
a=C_alloc(8);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3496,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* lfa2.scm:388: chicken.compiler.support#node-parameters */
t3=*((C_word*)lf[15]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
/* lfa2.scm:381: walk */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3289(t2,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[3]);}}

/* k3494 in k3480 in k3473 in k3462 in k3459 in k3456 in k3297 in k3294 in k3291 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_3496(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3496,c,av);}
a=C_alloc(12);
t2=C_i_car(t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[3]);
t5=C_a_i_cons(&a,2,((C_word*)t0)[2],t2);
t6=C_a_i_cons(&a,2,t5,t4);
/* lfa2.scm:381: walk */
t7=((C_word*)((C_word*)t0)[4])[1];
f_3289(t7,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],t6);}

/* k3510 */
static void C_ccall f_3512(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3512,c,av);}
t2=((C_word*)t0)[2];
f_3482(t2,C_i_not(t1));}

/* k3518 */
static void C_ccall f_3520(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3520,c,av);}
/* lfa2.scm:387: assigned? */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2959(t2,((C_word*)t0)[3],C_i_car(t1));}

/* k3524 in k3459 in k3456 in k3297 in k3294 in k3291 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_fcall f_3526(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_3526,2,t0,t1);}
a=C_alloc(12);
if(C_truep(t1)){
t2=C_a_i_list3(&a,3,((C_word*)t0)[2],C_fix(0),C_fix(0));
t3=C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[3])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
/* lfa2.scm:379: add-unboxed */
t5=((C_word*)((C_word*)t0)[4])[1];
f_3277(t5,((C_word*)t0)[5],((C_word*)t0)[6]);}
else{
/* lfa2.scm:380: add-boxed */
t2=((C_word*)((C_word*)t0)[7])[1];
f_3271(t2,((C_word*)t0)[5],((C_word*)t0)[6]);}}

/* k3566 in k3297 in k3294 in k3291 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_3568(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3568,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=lf[58];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3585 in k3297 in k3294 in k3291 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_3587(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3587,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3590,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* lfa2.scm:402: walk */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3289(t3,t2,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k3588 in k3585 in k3297 in k3294 in k3291 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_3590(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3590,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=lf[61];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3591 in k3297 in k3294 in k3291 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_fcall f_3593(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,4)))){
C_save_and_reclaim_args((void *)trf_3593,2,t0,t1);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3604,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* lfa2.scm:401: chicken.compiler.support#node-parameters */
t3=*((C_word*)lf[15]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5393,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
/* lfa2.scm:402: walk */
t3=((C_word*)((C_word*)t0)[6])[1];
f_3289(t3,t2,((C_word*)t0)[4],((C_word*)t0)[7],((C_word*)t0)[8]);}}

/* k3602 in k3591 in k3297 in k3294 in k3291 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_3604(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3604,c,av);}
/* lfa2.scm:401: eliminate-floatvar */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3198(t2,((C_word*)t0)[3],C_i_car(t1));}

/* k3616 */
static void C_ccall f_3618(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3618,c,av);}
/* lfa2.scm:400: floatvar? */
t2=((C_word*)t0)[2];
f_3593(t2,(
/* lfa2.scm:400: floatvar? */
  f_3192(((C_word*)((C_word*)t0)[3])[1],C_i_car(t1))
));}

/* g742 in k3297 in k3294 in k3291 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_fcall f_3643(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_3643,3,t0,t1,t2);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3647,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* lfa2.scm:410: walk */
t4=((C_word*)((C_word*)t0)[4])[1];
f_3289(t4,t3,t2,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k3645 in g742 in k3297 in k3294 in k3291 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_3647(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3647,c,av);}
if(C_truep(((C_word*)t0)[2])){
/* lfa2.scm:411: add-unboxed */
t2=((C_word*)((C_word*)t0)[3])[1];
f_3277(t2,((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3657 in k3297 in k3294 in k3291 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_3659(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_3659,c,av);}
a=C_alloc(8);
t2=C_i_car(((C_word*)t0)[2]);
t3=C_i_assoc(t2,lf[65]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3666,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* lfa2.scm:413: g764 */
t5=t4;
f_3666(t5,((C_word*)t0)[9],t3);}
else{
t4=C_i_car(((C_word*)t0)[2]);
t5=C_i_assoc(t4,lf[72]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3796,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
/* lfa2.scm:413: g779 */
t7=t6;
f_3796(t7,((C_word*)t0)[9],t5);}
else{
t6=C_i_car(((C_word*)t0)[2]);
t7=C_i_assoc(t6,lf[73]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3844,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* lfa2.scm:413: g788 */
t9=t8;
f_3844(t9,((C_word*)t0)[9],t7);}
else{
t8=C_i_car(((C_word*)t0)[2]);
t9=C_i_assoc(t8,lf[77]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4040,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
/* lfa2.scm:413: g815 */
t11=t10;
f_4040(t11,((C_word*)t0)[9],t9);}
else{
t10=C_SCHEME_UNDEFINED;
t11=((C_word*)t0)[9];{
C_word *av2=av;
av2[0]=t11;
av2[1]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}}}}}

/* g764 in k3657 in k3297 in k3294 in k3291 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_fcall f_3666(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,4)))){
C_save_and_reclaim_args((void *)trf_3666,3,t0,t1,t2);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3670,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* lfa2.scm:415: walk */
t4=((C_word*)((C_word*)t0)[5])[1];
f_3289(t4,t3,C_i_car(((C_word*)t0)[4]),((C_word*)t0)[6],((C_word*)t0)[7]);}

/* k3668 in g764 in k3657 in k3297 in k3294 in k3291 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_3670(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_3670,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3673,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(*((C_word*)lf[66]+1))){
/* lfa2.scm:417: extinguish! */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3021(t3,t2,((C_word*)t0)[4],lf[67]);}
else{
t3=C_i_cadr(((C_word*)t0)[5]);
t4=C_eqp(lf[68],t3);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3688,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_pairp(t1))){
t6=C_i_car(t1);
t7=C_eqp(lf[6],t6);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3734,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* lfa2.scm:422: chicken.compiler.support#node-class */
t9=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=C_i_cadr(((C_word*)t0)[6]);
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}
else{
t8=t5;
f_3688(t8,C_SCHEME_FALSE);}}
else{
t6=t5;
f_3688(t6,C_SCHEME_FALSE);}}
else{
t5=C_i_pairp(t1);
t6=(C_truep(t5)?C_eqp(lf[34],C_u_i_car(t1)):C_SCHEME_FALSE);
if(C_truep(t6)){
if(C_truep(C_i_memq(lf[34],C_u_i_cdr(((C_word*)t0)[5])))){
/* lfa2.scm:429: extinguish! */
t7=((C_word*)((C_word*)t0)[3])[1];
f_3021(t7,t2,((C_word*)t0)[4],lf[70]);}
else{
t7=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t7;
av2[1]=lf[7];
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}
else{
if(C_truep(C_i_member(t1,C_u_i_cdr(((C_word*)t0)[5])))){
/* lfa2.scm:432: extinguish! */
t7=((C_word*)((C_word*)t0)[3])[1];
f_3021(t7,t2,((C_word*)t0)[4],lf[71]);}
else{
t7=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t7;
av2[1]=lf[7];
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}}}}

/* k3671 in k3668 in g764 in k3657 in k3297 in k3294 in k3291 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_3673(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3673,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=lf[7];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3686 in k3668 in g764 in k3657 in k3297 in k3294 in k3291 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_fcall f_3688(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_3688,2,t0,t1);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3714,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* lfa2.scm:423: chicken.compiler.support#node-parameters */
t3=*((C_word*)lf[15]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=C_i_cadr(((C_word*)t0)[7]);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=((C_word*)t0)[6];{
C_word av2[2];
av2[0]=t2;
av2[1]=lf[7];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k3712 in k3686 in k3668 in g764 in k3657 in k3297 in k3294 in k3291 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_3714(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3714,c,av);}
t2=C_i_car(t1);
if(C_truep(C_i_symbolp(t2))){
t3=C_i_cadr(((C_word*)t0)[2]);
t4=C_eqp(t2,t3);
if(C_truep(t4)){
/* lfa2.scm:426: extinguish! */
t5=((C_word*)((C_word*)t0)[3])[1];
f_3021(t5,((C_word*)t0)[4],((C_word*)t0)[5],lf[69]);}
else{
t5=((C_word*)t0)[6];{
C_word *av2=av;
av2[0]=t5;
av2[1]=lf[7];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
t3=((C_word*)t0)[6];{
C_word *av2=av;
av2[0]=t3;
av2[1]=lf[7];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3732 in k3668 in g764 in k3657 in k3297 in k3294 in k3291 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_3734(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3734,c,av);}
t2=((C_word*)t0)[2];
f_3688(t2,C_eqp(lf[36],t1));}

/* g779 in k3657 in k3297 in k3294 in k3291 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_fcall f_3796(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_3796,3,t0,t1,t2);}
a=C_alloc(6);
t3=C_i_car(((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3803,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* lfa2.scm:437: walk */
t5=((C_word*)((C_word*)t0)[4])[1];
f_3289(t5,t4,t3,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k3801 in g779 in k3657 in k3297 in k3294 in k3291 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_3803(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_3803,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3806,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[3]);
if(C_truep(C_i_member(t1,t3))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3812,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3830,a[2]=t4,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* lfa2.scm:439: chicken.compiler.support#node-class */
t6=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3804 in k3801 in g779 in k3657 in k3297 in k3294 in k3291 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_3806(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3806,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3810 in k3801 in g779 in k3657 in k3297 in k3294 in k3291 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_3812(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_3812,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3815,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3826,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* lfa2.scm:440: chicken.compiler.support#node-parameters */
t4=*((C_word*)lf[15]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3813 in k3810 in k3801 in g779 in k3657 in k3297 in k3294 in k3291 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_3815(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3815,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3822,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* lfa2.scm:441: chicken.compiler.support#node-subexpressions */
t3=*((C_word*)lf[28]+1);{
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

/* k3820 in k3813 in k3810 in k3801 in g779 in k3657 in k3297 in k3294 in k3291 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_3822(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3822,c,av);}
/* lfa2.scm:441: chicken.compiler.support#node-subexpressions-set! */
t2=*((C_word*)lf[17]+1);{
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

/* k3824 in k3810 in k3801 in g779 in k3657 in k3297 in k3294 in k3291 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_3826(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3826,c,av);}
/* lfa2.scm:440: chicken.compiler.support#node-parameters-set! */
t2=*((C_word*)lf[18]+1);{
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

/* k3828 in k3801 in g779 in k3657 in k3297 in k3294 in k3291 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_3830(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3830,c,av);}
/* lfa2.scm:439: chicken.compiler.support#node-class-set! */
t2=*((C_word*)lf[19]+1);{
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

/* g788 in k3657 in k3297 in k3294 in k3291 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_fcall f_3844(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,2)))){
C_save_and_reclaim_args((void *)trf_3844,3,t0,t1,t2);}
a=C_alloc(11);
t3=C_i_car(((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f5491,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],tmp=(C_word)a,a+=11,tmp);
/* lfa2.scm:327: chicken.compiler.support#node-class */
t5=*((C_word*)lf[16]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k3896 in k3904 in k3919 */
static void C_ccall f_3898(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,1)))){
C_save_and_reclaim((void *)f_3898,c,av);}
a=C_alloc(21);
t2=C_i_car(t1);
if(C_truep(C_i_symbolp(t2))){
t3=C_a_i_list(&a,2,lf[6],t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[2],t3);
t5=C_a_i_list(&a,1,t4);
t6=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_list(&a,3,lf[34],t5,C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],lf[6]);
t4=C_a_i_list(&a,1,t3);
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_list(&a,3,lf[34],t4,C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k3904 in k3919 */
static void C_ccall f_3906(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_3906,c,av);}
a=C_alloc(15);
t2=C_eqp(lf[36],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3898,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* lfa2.scm:455: chicken.compiler.support#node-parameters */
t4=*((C_word*)lf[15]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_i_cadr(((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],lf[6]);
t4=C_a_i_list(&a,1,t3);
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_list(&a,3,lf[34],t4,C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k3919 */
static void C_ccall f_3921(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_3921,c,av);}
a=C_alloc(15);
t2=C_i_car(t1);
t3=C_i_cadr(((C_word*)t0)[2]);
t4=C_eqp(lf[68],t3);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3906,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* lfa2.scm:453: chicken.compiler.support#node-class */
t6=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_i_cadr(((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t5=C_i_cadr(((C_word*)t0)[2]);
t6=C_a_i_cons(&a,2,t2,t5);
t7=C_a_i_list(&a,1,t6);
t8=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_a_i_list(&a,3,lf[34],t7,C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k3922 */
static void C_ccall f_3924(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_3924,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3927,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_cadr(((C_word*)t0)[3]);
t4=C_eqp(lf[68],t3);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3936,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_pairp(t1))){
t6=C_i_car(t1);
t7=C_eqp(lf[6],t6);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3982,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* lfa2.scm:469: chicken.compiler.support#node-class */
t9=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=C_i_cadr(((C_word*)t0)[6]);
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}
else{
t8=t5;
f_3936(t8,C_SCHEME_FALSE);}}
else{
t6=t5;
f_3936(t6,C_SCHEME_FALSE);}}
else{
t5=C_i_pairp(t1);
t6=(C_truep(t5)?C_eqp(lf[34],C_u_i_car(t1)):C_SCHEME_FALSE);
if(C_truep(t6)){
if(C_truep(C_i_memq(lf[34],C_u_i_cdr(((C_word*)t0)[3])))){
/* lfa2.scm:477: extinguish! */
t7=((C_word*)((C_word*)t0)[4])[1];
f_3021(t7,t2,((C_word*)t0)[5],lf[75]);}
else{
t7=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t7;
av2[1]=lf[34];
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}
else{
if(C_truep(C_i_member(t1,C_u_i_cdr(((C_word*)t0)[3])))){
/* lfa2.scm:480: extinguish! */
t7=((C_word*)((C_word*)t0)[4])[1];
f_3021(t7,t2,((C_word*)t0)[5],lf[76]);}
else{
t7=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t7;
av2[1]=lf[34];
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}}}

/* k3925 in k3922 */
static void C_ccall f_3927(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3927,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=lf[34];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3934 in k3922 */
static void C_fcall f_3936(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_3936,2,t0,t1);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3962,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* lfa2.scm:471: chicken.compiler.support#node-parameters */
t3=*((C_word*)lf[15]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=C_i_cadr(((C_word*)t0)[7]);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=((C_word*)t0)[6];{
C_word av2[2];
av2[0]=t2;
av2[1]=lf[34];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k3960 in k3934 in k3922 */
static void C_ccall f_3962(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3962,c,av);}
t2=C_i_car(t1);
if(C_truep(C_i_symbolp(t2))){
t3=C_i_cadr(((C_word*)t0)[2]);
t4=C_eqp(t2,t3);
if(C_truep(t4)){
/* lfa2.scm:474: extinguish! */
t5=((C_word*)((C_word*)t0)[3])[1];
f_3021(t5,((C_word*)t0)[4],((C_word*)t0)[5],lf[74]);}
else{
t5=((C_word*)t0)[6];{
C_word *av2=av;
av2[0]=t5;
av2[1]=lf[34];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
t3=((C_word*)t0)[6];{
C_word *av2=av;
av2[0]=t3;
av2[1]=lf[34];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3980 in k3922 */
static void C_ccall f_3982(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3982,c,av);}
t2=((C_word*)t0)[2];
f_3936(t2,C_eqp(lf[36],t1));}

/* g815 in k3657 in k3297 in k3294 in k3291 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_fcall f_4040(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_4040,3,t0,t1,t2);}
a=C_alloc(8);
t3=C_i_pairp(((C_word*)t0)[2]);
t4=(C_truep(t3)?C_i_car(((C_word*)t0)[2]):C_SCHEME_FALSE);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4050,a[2]=t1,a[3]=t4,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t4)){
t6=C_i_cadr(t2);
t7=C_eqp(lf[68],t6);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4082,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* lfa2.scm:487: chicken.compiler.support#node-class */
t9=*((C_word*)lf[16]+1);{
C_word av2[3];
av2[0]=t9;
av2[1]=t8;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}
else{
t8=t5;
f_4050(t8,C_SCHEME_FALSE);}}
else{
t6=t5;
f_4050(t6,C_SCHEME_FALSE);}}

/* k4048 in g815 in k3657 in k3297 in k3294 in k3291 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_fcall f_4050(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_4050,2,t0,t1);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4066,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* lfa2.scm:488: chicken.compiler.support#node-parameters */
t3=*((C_word*)lf[15]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_i_cadr(((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k4064 in k4048 in g815 in k3657 in k3297 in k3294 in k3291 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_4066(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_4066,c,av);}
a=C_alloc(6);
t2=C_i_car(t1);
t3=C_i_symbolp(t2);
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=(C_truep(t3)?C_a_i_list(&a,2,lf[6],t2):lf[6]);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k4080 in g815 in k3657 in k3297 in k3294 in k3291 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_4082(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4082,c,av);}
t2=((C_word*)t0)[2];
f_4050(t2,C_eqp(lf[36],t1));}

/* for-each-loop741 in k3297 in k3294 in k3291 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_fcall f_4113(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_4113,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4123,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* lfa2.scm:408: g742 */
t4=((C_word*)t0)[3];
f_3643(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4121 in for-each-loop741 in k3297 in k3294 in k3291 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_4123(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4123,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_4113(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* g830 in k3297 in k3294 in k3291 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_fcall f_4139(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_4139,3,t0,t1,t2);}
/* lfa2.scm:494: g845 */
t3=((C_word*)((C_word*)t0)[2])[1];
f_3289(t3,t1,t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k4147 in k3297 in k3294 in k3291 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_4149(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4149,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=lf[7];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* for-each-loop829 in k3297 in k3294 in k3291 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_fcall f_4151(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_4151,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4161,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* lfa2.scm:494: g830 */
t4=((C_word*)t0)[3];
f_4139(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4159 in for-each-loop829 in k3297 in k3294 in k3291 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_4161(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4161,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_4151(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k4211 in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_4213(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_4213,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4216,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(((C_word*)((C_word*)t0)[4])[1]))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4224,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* lfa2.scm:499: chicken.compiler.support#with-debugging-output */
t4=*((C_word*)lf[86]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[87];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4214 in k4211 in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_4216(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4216,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a4223 in k4211 in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_4224(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4224,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4228,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* lfa2.scm:502: chicken.base#print */
t3=*((C_word*)lf[84]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[85];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k4226 in a4223 in k4211 in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_4228(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4228,c,av);}
a=C_alloc(5);
t2=((C_word*)((C_word*)t0)[2])[1];
t3=C_i_check_list_2(t2,lf[21]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4262,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_4262(t7,((C_word*)t0)[3],t2);}

/* k4234 in for-each-loop855 in k4226 in a4223 in k4211 in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_4236(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_4236,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4239,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* lfa2.scm:504: ##sys#print */
t3=*((C_word*)lf[81]+1);{
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

/* k4237 in k4234 in for-each-loop855 in k4226 in a4223 in k4211 in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_4239(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_4239,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4242,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* lfa2.scm:504: ##sys#print */
t3=*((C_word*)lf[81]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[82];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4240 in k4237 in k4234 in for-each-loop855 in k4226 in a4223 in k4211 in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_4242(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_4242,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4245,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* lfa2.scm:504: ##sys#print */
t3=*((C_word*)lf[81]+1);{
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

/* k4243 in k4240 in k4237 in k4234 in for-each-loop855 in k4226 in a4223 in k4211 in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_4245(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4245,c,av);}
/* lfa2.scm:504: ##sys#write-char-0 */
t2=*((C_word*)lf[80]+1);{
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

/* for-each-loop855 in k4226 in a4223 in k4211 in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_fcall f_4262(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_4262,3,t0,t1,t2);}
a=C_alloc(10);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4272,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=*((C_word*)lf[78]+1);
t6=*((C_word*)lf[78]+1);
t7=C_i_check_port_2(*((C_word*)lf[78]+1),C_fix(2),C_SCHEME_TRUE,lf[79]);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4236,a[2]=t3,a[3]=t5,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* lfa2.scm:504: ##sys#print */
t9=*((C_word*)lf[81]+1);{
C_word av2[5];
av2[0]=t9;
av2[1]=t8;
av2[2]=lf[83];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[78]+1);
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4270 in for-each-loop855 in k4226 in a4223 in k4211 in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_4272(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4272,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_4262(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* chicken.compiler.lfa2#perform-unboxing in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_4285(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_4285,c,av);}
a=C_alloc(9);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4289,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=C_i_check_list_2(t3,lf[29]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2130,a[2]=t7,tmp=(C_word)a,a+=3,tmp));
t9=((C_word*)t7)[1];
f_2130(t9,t4,t3);}

/* k4287 in chicken.compiler.lfa2#perform-unboxing in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_4289(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(23,c,3)))){
C_save_and_reclaim((void *)f_4289,c,av);}
a=C_alloc(23);
t2=C_fix(0);
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4291,a[2]=t1,a[3]=t3,a[4]=t5,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t9=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4518,a[2]=t1,a[3]=t7,a[4]=t5,a[5]=t3,tmp=(C_word)a,a+=6,tmp));
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4859,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* lfa2.scm:590: walk */
t11=((C_word*)t7)[1];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t11;
av2[1]=t10;
av2[2]=((C_word*)t0)[3];
f_4518(3,av2);}}

/* walk/unbox in k4287 in chicken.compiler.lfa2#perform-unboxing in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_4291(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_4291,c,av);}
a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4295,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* lfa2.scm:518: chicken.compiler.support#node-class */
t4=*((C_word*)lf[16]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4293 in walk/unbox in k4287 in chicken.compiler.lfa2#perform-unboxing in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_4295(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_4295,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4298,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* lfa2.scm:519: chicken.compiler.support#node-parameters */
t3=*((C_word*)lf[15]+1);{
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

/* k4296 in k4293 in walk/unbox in k4287 in chicken.compiler.lfa2#perform-unboxing in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_4298(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_4298,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4301,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* lfa2.scm:520: chicken.compiler.support#node-subexpressions */
t3=*((C_word*)lf[28]+1);{
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

/* k4299 in k4296 in k4293 in walk/unbox in k4287 in chicken.compiler.lfa2#perform-unboxing in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_4301(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,4)))){
C_save_and_reclaim((void *)f_4301,c,av);}
a=C_alloc(21);
t2=C_eqp(((C_word*)t0)[2],lf[36]);
if(C_truep(t2)){
t3=C_i_car(((C_word*)t0)[3]);
if(C_truep(C_i_flonump(t3))){
t4=C_a_i_list1(&a,1,t3);
/* lfa2.scm:525: chicken.compiler.support#make-node */
t5=*((C_word*)lf[89]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[4];
av2[2]=lf[90];
av2[3]=t4;
av2[4]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}
else{
t3=C_eqp(((C_word*)t0)[2],lf[11]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4329,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* lfa2.scm:528: posq */
f_2680(t4,C_i_car(((C_word*)t0)[3]),((C_word*)t0)[6]);}
else{
t4=C_eqp(((C_word*)t0)[2],lf[63]);
t5=(C_truep(t4)?t4:C_eqp(((C_word*)t0)[2],lf[64]));
if(C_truep(t5)){
t6=C_i_car(((C_word*)t0)[3]);
t7=C_i_assoc(t6,lf[3]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4366,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* lfa2.scm:533: g929 */
t9=t8;
f_4366(t9,((C_word*)t0)[4],t7);}
else{
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4446,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t9=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t10=t9;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=((C_word*)t11)[1];
t13=C_i_check_list_2(t1,lf[94]);
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4456,a[2]=t8,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4458,a[2]=t11,a[3]=t16,a[4]=((C_word*)t0)[9],a[5]=t12,tmp=(C_word)a,a+=6,tmp));
t18=((C_word*)t16)[1];
f_4458(t18,t14,t1);}}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4505,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* lfa2.scm:548: walk */
t7=((C_word*)((C_word*)t0)[9])[1];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[5];
f_4518(3,av2);}}}}}

/* k4327 in k4299 in k4296 in k4293 in walk/unbox in k4287 in chicken.compiler.lfa2#perform-unboxing in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_4329(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4329,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
/* lfa2.scm:530: chicken.compiler.support#make-node */
t3=*((C_word*)lf[89]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[91];
av2[3]=t2;
av2[4]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t2=C_a_i_list1(&a,1,((C_word*)t0)[4]);
/* lfa2.scm:531: chicken.compiler.support#make-node */
t3=*((C_word*)lf[89]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[92];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}

/* g929 in k4299 in k4296 in k4293 in walk/unbox in k4287 in chicken.compiler.lfa2#perform-unboxing in k1464 in k1461 in k1458 in k1455 */
static void C_fcall f_4366(C_word t0,C_word t1,C_word t2){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(49,0,3)))){
C_save_and_reclaim_args((void *)trf_4366,3,t0,t1,t2);}
a=C_alloc(49);
t3=C_i_cadr(t2);
t4=C_i_caddr(t2);
t5=((C_word*)((C_word*)t0)[2])[1];
t6=C_mutate(((C_word *)((C_word*)t0)[2])+1,C_s_a_i_plus(&a,2,t5,C_fix(1)));
t7=C_a_i_list1(&a,1,t3);
t8=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t9=t8;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=((C_word*)t10)[1];
t12=C_eqp(t4,lf[93]);
t13=(C_truep(t12)?((C_word*)((C_word*)t0)[3])[1]:((C_word*)((C_word*)t0)[4])[1]);
t14=C_i_check_list_2(((C_word*)t0)[5],lf[94]);
t15=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4395,a[2]=t1,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4397,a[2]=t10,a[3]=t17,a[4]=t13,a[5]=t11,tmp=(C_word)a,a+=6,tmp));
t19=((C_word*)t17)[1];
f_4397(t19,t15,((C_word*)t0)[5]);}

/* k4393 in g929 in k4299 in k4296 in k4293 in walk/unbox in k4287 in chicken.compiler.lfa2#perform-unboxing in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_4395(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4395,c,av);}
/* lfa2.scm:538: chicken.compiler.support#make-node */
t2=*((C_word*)lf[89]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[63];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* map-loop936 in g929 in k4299 in k4296 in k4293 in walk/unbox in k4287 in chicken.compiler.lfa2#perform-unboxing in k1464 in k1461 in k1458 in k1455 */
static void C_fcall f_4397(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_4397,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4422,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* lfa2.scm:540: g942 */
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

/* k4420 in map-loop936 in g929 in k4299 in k4296 in k4293 in walk/unbox in k4287 in chicken.compiler.lfa2#perform-unboxing in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_4422(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4422,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_4397(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k4444 in k4299 in k4296 in k4293 in walk/unbox in k4287 in chicken.compiler.lfa2#perform-unboxing in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_4446(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4446,c,av);}
a=C_alloc(3);
t2=C_a_i_list1(&a,1,t1);
/* lfa2.scm:545: chicken.compiler.support#make-node */
t3=*((C_word*)lf[89]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[92];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4454 in k4299 in k4296 in k4293 in walk/unbox in k4287 in chicken.compiler.lfa2#perform-unboxing in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_4456(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4456,c,av);}
/* lfa2.scm:546: chicken.compiler.support#make-node */
t2=*((C_word*)lf[89]+1);{
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

/* map-loop963 in k4299 in k4296 in k4293 in walk/unbox in k4287 in chicken.compiler.lfa2#perform-unboxing in k1464 in k1461 in k1458 in k1455 */
static void C_fcall f_4458(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_4458,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4483,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* lfa2.scm:547: g969 */
t4=((C_word*)((C_word*)t0)[4])[1];{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_slot(t2,C_fix(0));
f_4518(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4481 in map-loop963 in k4299 in k4296 in k4293 in walk/unbox in k4287 in chicken.compiler.lfa2#perform-unboxing in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_4483(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4483,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_4458(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k4503 in k4299 in k4296 in k4293 in walk/unbox in k4287 in chicken.compiler.lfa2#perform-unboxing in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_4505(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4505,c,av);}
a=C_alloc(3);
t2=C_a_i_list1(&a,1,t1);
/* lfa2.scm:548: chicken.compiler.support#make-node */
t3=*((C_word*)lf[89]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[92];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* walk in k4287 in chicken.compiler.lfa2#perform-unboxing in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_4518(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_4518,c,av);}
a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4522,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* lfa2.scm:551: chicken.compiler.support#node-class */
t4=*((C_word*)lf[16]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4520 in walk in k4287 in chicken.compiler.lfa2#perform-unboxing in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_4522(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_4522,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4525,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* lfa2.scm:552: chicken.compiler.support#node-parameters */
t3=*((C_word*)lf[15]+1);{
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

/* k4523 in k4520 in walk in k4287 in chicken.compiler.lfa2#perform-unboxing in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_4525(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_4525,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4528,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* lfa2.scm:553: chicken.compiler.support#node-subexpressions */
t3=*((C_word*)lf[28]+1);{
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

/* k4526 in k4523 in k4520 in walk in k4287 in chicken.compiler.lfa2#perform-unboxing in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_4528(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_4528,c,av);}
a=C_alloc(18);
t2=C_eqp(((C_word*)t0)[2],lf[11]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4537,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* lfa2.scm:556: posq */
f_2680(t3,C_i_car(((C_word*)t0)[4]),((C_word*)t0)[6]);}
else{
t3=C_eqp(((C_word*)t0)[2],lf[55]);
if(C_truep(t3)){
t4=C_i_car(t1);
t5=C_i_car(((C_word*)t0)[4]);
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4574,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[7],a[5]=t1,a[6]=((C_word*)t0)[8],a[7]=t4,a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
/* lfa2.scm:565: posq */
f_2680(t6,t5,((C_word*)t0)[6]);}
else{
t4=C_eqp(((C_word*)t0)[2],lf[63]);
t5=(C_truep(t4)?t4:C_eqp(((C_word*)t0)[2],lf[64]));
if(C_truep(t5)){
t6=C_i_car(((C_word*)t0)[4]);
t7=C_i_assoc(t6,lf[3]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4663,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* lfa2.scm:572: g1036 */
t9=t8;
f_4663(t9,((C_word*)t0)[3],t7);}
else{
t8=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t9=t8;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=((C_word*)t10)[1];
t12=C_i_check_list_2(t1,lf[94]);
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4760,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4762,a[2]=t10,a[3]=t15,a[4]=((C_word*)t0)[7],a[5]=t11,tmp=(C_word)a,a+=6,tmp));
t17=((C_word*)t15)[1];
f_4762(t17,t13,t1);}}
else{
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=C_i_check_list_2(t1,lf[94]);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4811,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4813,a[2]=t8,a[3]=t13,a[4]=((C_word*)t0)[7],a[5]=t9,tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_4813(t15,t11,t1);}}}}

/* k4535 in k4526 in k4523 in k4520 in walk in k4287 in chicken.compiler.lfa2#perform-unboxing in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_4537(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_4537,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4551,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_cons(&a,2,t1,((C_word*)t0)[3]);
/* lfa2.scm:559: chicken.compiler.support#make-node */
t4=*((C_word*)lf[89]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[91];
av2[3]=t3;
av2[4]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k4549 in k4535 in k4526 in k4523 in k4520 in walk in k4287 in chicken.compiler.lfa2#perform-unboxing in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_4551(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4551,c,av);}
a=C_alloc(3);
t2=C_a_i_list1(&a,1,t1);
/* lfa2.scm:558: chicken.compiler.support#make-node */
t3=*((C_word*)lf[89]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[95];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4572 in k4526 in k4523 in k4520 in walk in k4287 in chicken.compiler.lfa2#perform-unboxing in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_4574(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,3)))){
C_save_and_reclaim((void *)f_4574,c,av);}
a=C_alloc(17);
if(C_truep(t1)){
t2=C_a_i_list2(&a,2,t1,((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4592,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* lfa2.scm:568: walk/unbox */
t4=((C_word*)((C_word*)t0)[6])[1];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[7];
f_4291(3,av2);}}
else{
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(((C_word*)t0)[5],lf[94]);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4613,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4615,a[2]=t4,a[3]=t9,a[4]=((C_word*)t0)[4],a[5]=t5,tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_4615(t11,t7,((C_word*)t0)[5]);}}

/* k4590 in k4572 in k4526 in k4523 in k4520 in walk in k4287 in chicken.compiler.lfa2#perform-unboxing in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_4592(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4592,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4596,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* lfa2.scm:569: walk */
t3=((C_word*)((C_word*)t0)[4])[1];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_i_cadr(((C_word*)t0)[5]);
f_4518(3,av2);}}

/* k4594 in k4590 in k4572 in k4526 in k4523 in k4520 in walk in k4287 in chicken.compiler.lfa2#perform-unboxing in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_4596(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_4596,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* lfa2.scm:567: chicken.compiler.support#make-node */
t3=*((C_word*)lf[89]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[96];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4611 in k4572 in k4526 in k4523 in k4520 in walk in k4287 in chicken.compiler.lfa2#perform-unboxing in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_4613(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4613,c,av);}
/* lfa2.scm:570: chicken.compiler.support#make-node */
t2=*((C_word*)lf[89]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[55];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* map-loop1003 in k4572 in k4526 in k4523 in k4520 in walk in k4287 in chicken.compiler.lfa2#perform-unboxing in k1464 in k1461 in k1458 in k1455 */
static void C_fcall f_4615(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_4615,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4640,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* lfa2.scm:570: g1009 */
t4=((C_word*)((C_word*)t0)[4])[1];{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_slot(t2,C_fix(0));
f_4518(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4638 in map-loop1003 in k4572 in k4526 in k4523 in k4520 in walk in k4287 in chicken.compiler.lfa2#perform-unboxing in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_4640(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4640,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_4615(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* g1036 in k4526 in k4523 in k4520 in walk in k4287 in chicken.compiler.lfa2#perform-unboxing in k1464 in k1461 in k1458 in k1455 */
static void C_fcall f_4663(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(53,0,3)))){
C_save_and_reclaim_args((void *)trf_4663,3,t0,t1,t2);}
a=C_alloc(53);
t3=C_i_cadr(t2);
t4=C_i_caddr(t2);
t5=((C_word*)((C_word*)t0)[2])[1];
t6=C_mutate(((C_word *)((C_word*)t0)[2])+1,C_s_a_i_plus(&a,2,t5,C_fix(1)));
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4675,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t8=C_a_i_list1(&a,1,t3);
t9=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t10=t9;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=((C_word*)t11)[1];
t13=C_eqp(t4,lf[98]);
t14=(C_truep(t13)?((C_word*)((C_word*)t0)[3])[1]:((C_word*)((C_word*)t0)[4])[1]);
t15=C_i_check_list_2(((C_word*)t0)[5],lf[94]);
t16=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4707,a[2]=t7,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
t17=C_SCHEME_UNDEFINED;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4709,a[2]=t11,a[3]=t18,a[4]=t14,a[5]=t12,tmp=(C_word)a,a+=6,tmp));
t20=((C_word*)t18)[1];
f_4709(t20,t16,((C_word*)t0)[5]);}

/* k4673 in g1036 in k4526 in k4523 in k4520 in walk in k4287 in chicken.compiler.lfa2#perform-unboxing in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_4675(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4675,c,av);}
a=C_alloc(3);
t2=C_eqp(((C_word*)t0)[2],lf[97]);
if(C_truep(t2)){
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_a_i_list1(&a,1,t1);
/* lfa2.scm:585: chicken.compiler.support#make-node */
t4=*((C_word*)lf[89]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[95];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}

/* k4705 in g1036 in k4526 in k4523 in k4520 in walk in k4287 in chicken.compiler.lfa2#perform-unboxing in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_4707(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4707,c,av);}
/* lfa2.scm:577: chicken.compiler.support#make-node */
t2=*((C_word*)lf[89]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[63];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* map-loop1044 in g1036 in k4526 in k4523 in k4520 in walk in k4287 in chicken.compiler.lfa2#perform-unboxing in k1464 in k1461 in k1458 in k1455 */
static void C_fcall f_4709(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_4709,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4734,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* lfa2.scm:579: g1050 */
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

/* k4732 in map-loop1044 in g1036 in k4526 in k4523 in k4520 in walk in k4287 in chicken.compiler.lfa2#perform-unboxing in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_4734(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4734,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_4709(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k4758 in k4526 in k4523 in k4520 in walk in k4287 in chicken.compiler.lfa2#perform-unboxing in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_4760(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4760,c,av);}
/* lfa2.scm:587: chicken.compiler.support#make-node */
t2=*((C_word*)lf[89]+1);{
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

/* map-loop1077 in k4526 in k4523 in k4520 in walk in k4287 in chicken.compiler.lfa2#perform-unboxing in k1464 in k1461 in k1458 in k1455 */
static void C_fcall f_4762(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_4762,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4787,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* lfa2.scm:587: g1083 */
t4=((C_word*)((C_word*)t0)[4])[1];{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_slot(t2,C_fix(0));
f_4518(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4785 in map-loop1077 in k4526 in k4523 in k4520 in walk in k4287 in chicken.compiler.lfa2#perform-unboxing in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_4787(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4787,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_4762(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k4809 in k4526 in k4523 in k4520 in walk in k4287 in chicken.compiler.lfa2#perform-unboxing in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_4811(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4811,c,av);}
/* lfa2.scm:588: chicken.compiler.support#make-node */
t2=*((C_word*)lf[89]+1);{
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

/* map-loop1103 in k4526 in k4523 in k4520 in walk in k4287 in chicken.compiler.lfa2#perform-unboxing in k1464 in k1461 in k1458 in k1455 */
static void C_fcall f_4813(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_4813,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4838,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* lfa2.scm:588: g1109 */
t4=((C_word*)((C_word*)t0)[4])[1];{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_slot(t2,C_fix(0));
f_4518(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4836 in map-loop1103 in k4526 in k4523 in k4520 in walk in k4287 in chicken.compiler.lfa2#perform-unboxing in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_4838(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4838,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_4813(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k4857 in k4287 in chicken.compiler.lfa2#perform-unboxing in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_4859(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_4859,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4862,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4864,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* lfa2.scm:591: chicken.compiler.support#with-debugging-output */
t4=*((C_word*)lf[86]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[101];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k4860 in k4857 in k4287 in chicken.compiler.lfa2#perform-unboxing in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_4862(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4862,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a4863 in k4857 in k4287 in chicken.compiler.lfa2#perform-unboxing in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_4864(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4864,c,av);}
a=C_alloc(6);
t2=*((C_word*)lf[78]+1);
t3=*((C_word*)lf[78]+1);
t4=C_i_check_port_2(*((C_word*)lf[78]+1),C_fix(2),C_SCHEME_TRUE,lf[79]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4871,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* lfa2.scm:594: ##sys#print */
t6=*((C_word*)lf[81]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[100];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[78]+1);
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k4869 in a4863 in k4857 in k4287 in chicken.compiler.lfa2#perform-unboxing in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_4871(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_4871,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4874,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* lfa2.scm:594: ##sys#print */
t3=*((C_word*)lf[81]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_i_length(((C_word*)t0)[5]);
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4872 in k4869 in a4863 in k4857 in k4287 in chicken.compiler.lfa2#perform-unboxing in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_4874(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_4874,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4877,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* lfa2.scm:594: ##sys#write-char-0 */
t3=*((C_word*)lf[80]+1);{
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

/* k4875 in k4872 in k4869 in a4863 in k4857 in k4287 in chicken.compiler.lfa2#perform-unboxing in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_4877(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4877,c,av);}
a=C_alloc(5);
t2=*((C_word*)lf[78]+1);
t3=*((C_word*)lf[78]+1);
t4=C_i_check_port_2(*((C_word*)lf[78]+1),C_fix(2),C_SCHEME_TRUE,lf[79]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4883,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* lfa2.scm:596: ##sys#print */
t6=*((C_word*)lf[81]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[99];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[78]+1);
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k4881 in k4875 in k4872 in k4869 in a4863 in k4857 in k4287 in chicken.compiler.lfa2#perform-unboxing in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_4883(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_4883,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4886,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* lfa2.scm:596: ##sys#print */
t3=*((C_word*)lf[81]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[4])[1];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4884 in k4881 in k4875 in k4872 in k4869 in a4863 in k4857 in k4287 in chicken.compiler.lfa2#perform-unboxing in k1464 in k1461 in k1458 in k1455 */
static void C_ccall f_4886(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4886,c,av);}
/* lfa2.scm:596: ##sys#write-char-0 */
t2=*((C_word*)lf[80]+1);{
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

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_lfa2_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("lfa2"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_lfa2_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(3518))){
C_save(t1);
C_rereclaim2(3518*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,102);
lf[0]=C_h_intern(&lf[0],4, C_text("lfa2"));
lf[1]=C_h_intern(&lf[1],22, C_text("chicken.compiler.lfa2#"));
lf[4]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376B\000\000\021C_a_i_flonum_plus\376\003\000\000\002\376B\000\000\022C_ub_i_flonum_plus\376\003\000\000\002\376\001\000\000\002\001op\376\377\016\376\003\000\000"
"\002\376\003\000\000\002\376B\000\000\027C_a_i_flonum_difference\376\003\000\000\002\376B\000\000\030C_ub_i_flonum_difference\376\003\000\000\002\376\001\000\000\002\001o"
"p\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\022C_a_i_flonum_times\376\003\000\000\002\376B\000\000\023C_ub_i_flonum_times\376\003\000\000\002\376\001\000\000\002\001op\376"
"\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\025C_a_i_flonum_quotient\376\003\000\000\002\376B\000\000\026C_ub_i_flonum_quotient\376\003\000\000\002\376\001\000\000\002"
"\001op\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\017C_flonum_equalp\376\003\000\000\002\376B\000\000\024C_ub_i_flonum_equalp\376\003\000\000\002\376\001\000\000\004\001pre"
"d\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\021C_flonum_greaterp\376\003\000\000\002\376B\000\000\026C_ub_i_flonum_greaterp\376\003\000\000\002\376\001\000\000\004\001p"
"red\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\016C_flonum_lessp\376\003\000\000\002\376B\000\000\023C_ub_i_flonum_lessp\376\003\000\000\002\376\001\000\000\004\001pred\376"
"\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\033C_flonum_greater_or_equal_p\376\003\000\000\002\376B\000\000 C_ub_i_flonum_greater_or_e"
"qual_p\376\003\000\000\002\376\001\000\000\004\001pred\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\030C_flonum_less_or_equal_p\376\003\000\000\002\376B\000\000\035C_ub_i_"
"flonum_less_or_equal_p\376\003\000\000\002\376\001\000\000\004\001pred\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\021C_u_i_flonum_nanp\376\003\000\000\002\376B\000"
"\000\022C_ub_i_flonum_nanp\376\003\000\000\002\376\001\000\000\004\001pred\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\026C_u_i_flonum_infinitep\376\003\000\000\002"
"\376B\000\000\027C_ub_i_flonum_infinitep\376\003\000\000\002\376\001\000\000\004\001pred\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\025C_u_i_flonum_finite"
"pp\376\003\000\000\002\376B\000\000\025C_ub_i_flonum_finitep\376\003\000\000\002\376\001\000\000\004\001pred\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\020C_a_i_flonum_s"
"in\376\003\000\000\002\376B\000\000\005C_sin\376\003\000\000\002\376\001\000\000\002\001op\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\020C_a_i_flonum_cos\376\003\000\000\002\376B\000\000\005C_cos\376"
"\003\000\000\002\376\001\000\000\002\001op\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\020C_a_i_flonum_tan\376\003\000\000\002\376B\000\000\005C_tan\376\003\000\000\002\376\001\000\000\002\001op\376\377\016\376\003\000"
"\000\002\376\003\000\000\002\376B\000\000\021C_a_i_flonum_asin\376\003\000\000\002\376B\000\000\006C_asin\376\003\000\000\002\376\001\000\000\002\001op\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\021C_a_"
"i_flonum_acos\376\003\000\000\002\376B\000\000\006C_acos\376\003\000\000\002\376\001\000\000\002\001op\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\021C_a_i_flonum_atan\376\003\000"
"\000\002\376B\000\000\006C_atan\376\003\000\000\002\376\001\000\000\002\001op\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\022C_a_i_flonum_atan2\376\003\000\000\002\376B\000\000\007C_atan2\376"
"\003\000\000\002\376\001\000\000\002\001op\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\020C_a_i_flonum_exp\376\003\000\000\002\376B\000\000\005C_exp\376\003\000\000\002\376\001\000\000\002\001op\376\377\016\376\003\000"
"\000\002\376\003\000\000\002\376B\000\000\021C_a_i_flonum_expr\376\003\000\000\002\376B\000\000\005C_pow\376\003\000\000\002\376\001\000\000\002\001op\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\020C_a_i"
"_flonum_log\376\003\000\000\002\376B\000\000\005C_log\376\003\000\000\002\376\001\000\000\002\001op\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\021C_a_i_flonum_sqrt\376\003\000\000\002\376"
"B\000\000\006C_sqrt\376\003\000\000\002\376\001\000\000\002\001op\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\025C_a_i_flonum_truncate\376\003\000\000\002\376B\000\000\007C_trunc\376"
"\003\000\000\002\376\001\000\000\002\001op\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\024C_a_i_flonum_ceiling\376\003\000\000\002\376B\000\000\006C_ceil\376\003\000\000\002\376\001\000\000\002\001op\376"
"\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\022C_a_i_flonum_floor\376\003\000\000\002\376B\000\000\007C_floor\376\003\000\000\002\376\001\000\000\002\001op\376\377\016\376\003\000\000\002\376\003\000\000\002\376B"
"\000\000\022C_a_i_flonum_round\376\003\000\000\002\376B\000\000\007C_round\376\003\000\000\002\376\001\000\000\002\001op\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\020C_a_i_flonu"
"m_abs\376\003\000\000\002\376B\000\000\006C_fabs\376\003\000\000\002\376\001\000\000\002\001op\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\025C_a_u_i_f32vector_ref\376\003\000\000\002\376B"
"\000\000\024C_ub_i_f32vector_ref\376\003\000\000\002\376\001\000\000\003\001acc\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\025C_a_u_i_f64vector_ref\376\003\000\000"
"\002\376B\000\000\024C_ub_i_f64vector_ref\376\003\000\000\002\376\001\000\000\003\001acc\376\377\016\376\377\016"));
lf[5]=C_h_intern(&lf[5],53, C_text("chicken.compiler.lfa2#perform-secondary-flow-analysis"));
lf[6]=C_h_intern(&lf[6],6, C_text("struct"));
lf[7]=C_h_intern(&lf[7],1, C_text("\052"));
lf[8]=C_h_intern(&lf[8],31, C_text("chicken.compiler.support#db-get"));
lf[9]=C_h_intern(&lf[9],8, C_text("assigned"));
lf[10]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\005\001quote\376\003\000\000\002\376\001\000\000\020\001##core#undefined\376\003\000\000\002\376\001\000\000\020\001##core#primitive\376\003\000\000\002\376\001\000\000\015"
"\001##core#lambda\376\377\016"));
lf[11]=C_h_intern(&lf[11],15, C_text("##core#variable"));
lf[12]=C_h_intern(&lf[12],38, C_text("chicken.compiler.support#variable-mark"));
lf[13]=C_h_intern(&lf[13],23, C_text("##compiler#always-bound"));
lf[14]=C_h_intern(&lf[14],6, C_text("global"));
lf[15]=C_h_intern(&lf[15],40, C_text("chicken.compiler.support#node-parameters"));
lf[16]=C_h_intern(&lf[16],35, C_text("chicken.compiler.support#node-class"));
lf[17]=C_h_intern(&lf[17],49, C_text("chicken.compiler.support#node-subexpressions-set!"));
lf[18]=C_h_intern(&lf[18],45, C_text("chicken.compiler.support#node-parameters-set!"));
lf[19]=C_h_intern(&lf[19],40, C_text("chicken.compiler.support#node-class-set!"));
lf[20]=C_h_intern(&lf[20],16, C_text("##core#undefined"));
lf[21]=C_h_intern(&lf[21],8, C_text("for-each"));
lf[22]=C_h_intern(&lf[22],20, C_text("scheme#string-append"));
lf[23]=C_decode_literal(C_heaptop,C_text("\376B\000\000\0011"));
lf[24]=C_decode_literal(C_heaptop,C_text("\376B\000\000\0012"));
lf[25]=C_decode_literal(C_heaptop,C_text("\376B\000\000\0013"));
lf[26]=C_h_intern(&lf[26],29, C_text("chicken.compiler.support#bomb"));
lf[27]=C_decode_literal(C_heaptop,C_text("\376B\000\0005bad number of arguments to extinguished ##core#inline"));
lf[28]=C_h_intern(&lf[28],44, C_text("chicken.compiler.support#node-subexpressions"));
lf[29]=C_h_intern(&lf[29],5, C_text("foldr"));
lf[30]=C_h_intern(&lf[30],10, C_text("scheme#cdr"));
lf[31]=C_h_intern(&lf[31],11, C_text("scheme#cddr"));
lf[32]=C_h_intern(&lf[32],2, C_text("if"));
lf[33]=C_h_intern(&lf[33],11, C_text("##core#cond"));
lf[34]=C_h_intern(&lf[34],7, C_text("boolean"));
lf[35]=C_h_intern(&lf[35],13, C_text("scheme#append"));
lf[36]=C_h_intern(&lf[36],5, C_text("quote"));
lf[37]=C_h_intern(&lf[37],6, C_text("string"));
lf[38]=C_h_intern(&lf[38],7, C_text("keyword"));
lf[39]=C_h_intern(&lf[39],6, C_text("symbol"));
lf[40]=C_h_intern(&lf[40],7, C_text("integer"));
lf[41]=C_h_intern(&lf[41],6, C_text("fixnum"));
lf[42]=C_h_intern(&lf[42],6, C_text("bignum"));
lf[43]=C_h_intern(&lf[43],5, C_text("float"));
lf[44]=C_h_intern(&lf[44],6, C_text("ratnum"));
lf[45]=C_h_intern(&lf[45],7, C_text("cplxnum"));
lf[46]=C_h_intern(&lf[46],4, C_text("null"));
lf[47]=C_h_intern(&lf[47],4, C_text("list"));
lf[48]=C_h_intern(&lf[48],4, C_text("pair"));
lf[49]=C_h_intern(&lf[49],3, C_text("eof"));
lf[50]=C_h_intern(&lf[50],6, C_text("vector"));
lf[51]=C_h_intern(&lf[51],4, C_text("char"));
lf[52]=C_h_intern(&lf[52],38, C_text("chicken.compiler.support#small-bignum\077"));
lf[53]=C_h_intern(&lf[53],36, C_text("chicken.compiler.support#big-fixnum\077"));
lf[54]=C_h_intern(&lf[54],24, C_text("chicken.keyword#keyword\077"));
lf[55]=C_h_intern(&lf[55],3, C_text("let"));
lf[56]=C_h_intern(&lf[56],13, C_text("##core#lambda"));
lf[57]=C_h_intern(&lf[57],20, C_text("##core#direct_lambda"));
lf[58]=C_h_intern(&lf[58],9, C_text("procedure"));
lf[59]=C_h_intern(&lf[59],4, C_text("set!"));
lf[60]=C_h_intern(&lf[60],11, C_text("##core#set!"));
lf[61]=C_h_intern(&lf[61],9, C_text("undefined"));
lf[62]=C_h_intern(&lf[62],16, C_text("##core#primitive"));
lf[63]=C_h_intern(&lf[63],13, C_text("##core#inline"));
lf[64]=C_h_intern(&lf[64],22, C_text("##core#inline_allocate"));
lf[65]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376B\000\000\021C_i_check_closure\376\003\000\000\002\376\001\000\000\011\001procedure\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\017C_i_check_"
"exact\376\003\000\000\002\376\001\000\000\006\001fixnum\376\003\000\000\002\376\001\000\000\006\001bignum\376\003\000\000\002\376\001\000\000\007\001integer\376\003\000\000\002\376\001\000\000\006\001ratnum\376\377\016\376\003\000"
"\000\002\376\003\000\000\002\376B\000\000\021C_i_check_inexact\376\003\000\000\002\376\001\000\000\005\001float\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\020C_i_check_number\376"
"\003\000\000\002\376\001\000\000\006\001fixnum\376\003\000\000\002\376\001\000\000\007\001integer\376\003\000\000\002\376\001\000\000\006\001bignum\376\003\000\000\002\376\001\000\000\006\001ratnum\376\003\000\000\002\376\001\000\000\005\001f"
"loat\376\003\000\000\002\376\001\000\000\007\001cplxnum\376\003\000\000\002\376\001\000\000\006\001number\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\020C_i_check_string\376\003\000\000\002\376\001"
"\000\000\006\001string\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\024C_i_check_bytevector\376\003\000\000\002\376\001\000\000\004\001blob\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000"
"\020C_i_check_symbol\376\003\000\000\002\376\001\000\000\006\001symbol\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\021C_i_check_keyword\376\003\000\000\002\376\001\000\000\007\001"
"keyword\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\016C_i_check_list\376\003\000\000\002\376\001\000\000\004\001null\376\003\000\000\002\376\001\000\000\004\001pair\376\003\000\000\002\376\001\000\000\004\001"
"list\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\016C_i_check_pair\376\003\000\000\002\376\001\000\000\004\001pair\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\022C_i_check_l"
"ocative\376\003\000\000\002\376\001\000\000\010\001locative\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\021C_i_check_boolean\376\003\000\000\002\376\001\000\000\007\001boolean\376"
"\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\020C_i_check_vector\376\003\000\000\002\376\001\000\000\006\001vector\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\023C_i_check_st"
"ructure\376\003\000\000\002\376\001\000\000\010\001\052struct\052\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\016C_i_check_char\376\003\000\000\002\376\001\000\000\004\001char\376\377\016\376\003\000\000"
"\002\376\003\000\000\002\376B\000\000\023C_i_check_closure_2\376\003\000\000\002\376\001\000\000\011\001procedure\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\021C_i_check_ex"
"act_2\376\003\000\000\002\376\001\000\000\006\001fixnum\376\003\000\000\002\376\001\000\000\006\001bignum\376\003\000\000\002\376\001\000\000\007\001integer\376\003\000\000\002\376\001\000\000\006\001ratnum\376\377\016\376\003\000"
"\000\002\376\003\000\000\002\376B\000\000\023C_i_check_inexact_2\376\003\000\000\002\376\001\000\000\005\001float\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\022C_i_check_numbe"
"r_2\376\003\000\000\002\376\001\000\000\006\001fixnum\376\003\000\000\002\376\001\000\000\007\001integer\376\003\000\000\002\376\001\000\000\006\001bignum\376\003\000\000\002\376\001\000\000\006\001ratnum\376\003\000\000\002\376\001\000"
"\000\005\001float\376\003\000\000\002\376\001\000\000\007\001cplxnum\376\003\000\000\002\376\001\000\000\006\001number\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\022C_i_check_string_2\376"
"\003\000\000\002\376\001\000\000\006\001string\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\026C_i_check_bytevector_2\376\003\000\000\002\376\001\000\000\004\001blob\376\377\016\376\003\000\000\002\376"
"\003\000\000\002\376B\000\000\022C_i_check_symbol_2\376\003\000\000\002\376\001\000\000\006\001symbol\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\023C_i_check_keyword_"
"2\376\003\000\000\002\376\001\000\000\007\001keyword\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\020C_i_check_list_2\376\003\000\000\002\376\001\000\000\004\001null\376\003\000\000\002\376\001\000\000\004\001p"
"air\376\003\000\000\002\376\001\000\000\004\001list\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\020C_i_check_pair_2\376\003\000\000\002\376\001\000\000\004\001pair\376\377\016\376\003\000\000\002\376\003\000\000\002"
"\376B\000\000\024C_i_check_locative_2\376\003\000\000\002\376\001\000\000\010\001locative\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\023C_i_check_boolean_"
"2\376\003\000\000\002\376\001\000\000\007\001boolean\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\022C_i_check_vector_2\376\003\000\000\002\376\001\000\000\006\001vector\376\377\016\376\003\000\000\002"
"\376\003\000\000\002\376B\000\000\025C_i_check_structure_2\376\003\000\000\002\376\001\000\000\010\001\052struct\052\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\020C_i_check_ch"
"ar_2\376\003\000\000\002\376\001\000\000\004\001char\376\377\016\376\377\016"));
lf[66]=C_h_intern(&lf[66],31, C_text("chicken.compiler.support#unsafe"));
lf[67]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010C_i_noop"));
lf[68]=C_h_intern(&lf[68],8, C_text("\052struct\052"));
lf[69]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010C_i_noop"));
lf[70]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010C_i_noop"));
lf[71]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010C_i_noop"));
lf[72]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376B\000\000\034C_i_foreign_fixnum_argumentp\376\003\000\000\002\376\001\000\000\006\001fixnum\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\035C_"
"i_foreign_integer_argumentp\376\003\000\000\002\376\001\000\000\007\001integer\376\003\000\000\002\376\001\000\000\006\001fixnum\376\003\000\000\002\376\001\000\000\006\001bignum\376"
"\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\032C_i_foreign_char_argumentp\376\003\000\000\002\376\001\000\000\004\001char\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\034C_i_"
"foreign_flonum_argumentp\376\003\000\000\002\376\001\000\000\005\001float\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\034C_i_foreign_string_arg"
"umentp\376\003\000\000\002\376\001\000\000\006\001string\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\034C_i_foreign_symbol_argumentp\376\003\000\000\002\376\001\000\000\006\001"
"symbol\376\377\016\376\377\016"));
lf[73]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376B\000\000\014C_i_closurep\376\003\000\000\002\376\001\000\000\011\001procedure\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\011C_fixnump\376\003\000\000\002\376"
"\001\000\000\006\001fixnum\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\011C_bignump\376\003\000\000\002\376\001\000\000\006\001bignum\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\022C_i_exa"
"ct_integerp\376\003\000\000\002\376\001\000\000\007\001integer\376\003\000\000\002\376\001\000\000\006\001fixnum\376\003\000\000\002\376\001\000\000\006\001bignum\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000"
"\013C_i_flonump\376\003\000\000\002\376\001\000\000\005\001float\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\013C_i_numberp\376\003\000\000\002\376\001\000\000\006\001number\376\003\000\000\002\376"
"\001\000\000\006\001fixnum\376\003\000\000\002\376\001\000\000\007\001integer\376\003\000\000\002\376\001\000\000\006\001bignum\376\003\000\000\002\376\001\000\000\006\001ratnum\376\003\000\000\002\376\001\000\000\005\001float\376"
"\003\000\000\002\376\001\000\000\007\001cplxnum\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\013C_i_ratnump\376\003\000\000\002\376\001\000\000\006\001ratnum\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000"
"\014C_i_cplxnump\376\003\000\000\002\376\001\000\000\007\001cplxnum\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\011C_stringp\376\003\000\000\002\376\001\000\000\006\001string\376\377\016\376\003"
"\000\000\002\376\003\000\000\002\376B\000\000\015C_bytevectorp\376\003\000\000\002\376\001\000\000\004\001blob\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\014C_i_keywordp\376\003\000\000\002\376\001\000\000"
"\007\001keyword\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\013C_i_symbolp\376\003\000\000\002\376\001\000\000\006\001symbol\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\011C_i_lis"
"tp\376\003\000\000\002\376\001\000\000\004\001list\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\011C_i_pairp\376\003\000\000\002\376\001\000\000\004\001pair\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\013C_l"
"ocativep\376\003\000\000\002\376\001\000\000\010\001locative\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\012C_booleanp\376\003\000\000\002\376\001\000\000\007\001boolean\376\377\016\376\003\000\000"
"\002\376\003\000\000\002\376B\000\000\013C_i_vectorp\376\003\000\000\002\376\001\000\000\006\001vector\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\014C_structurep\376\003\000\000\002\376\001\000\000\006\001"
"struct\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\016C_i_structurep\376\003\000\000\002\376\001\000\000\010\001\052struct\052\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\007C_cha"
"rp\376\003\000\000\002\376\001\000\000\004\001char\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\011C_i_portp\376\003\000\000\002\376\001\000\000\004\001port\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\011C_i"
"_nullp\376\003\000\000\002\376\001\000\000\004\001null\376\377\016\376\377\016"));
lf[74]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010C_i_true"));
lf[75]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010C_i_true"));
lf[76]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010C_i_true"));
lf[77]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376B\000\000\015C_a_i_record1\376\003\000\000\002\376\001\000\000\010\001\052struct\052\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\015C_a_i_record2\376\003"
"\000\000\002\376\001\000\000\010\001\052struct\052\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\015C_a_i_record3\376\003\000\000\002\376\001\000\000\010\001\052struct\052\376\377\016\376\003\000\000\002\376\003\000\000\002"
"\376B\000\000\015C_a_i_record4\376\003\000\000\002\376\001\000\000\010\001\052struct\052\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\015C_a_i_record5\376\003\000\000\002\376\001\000\000\010\001\052"
"struct\052\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\015C_a_i_record6\376\003\000\000\002\376\001\000\000\010\001\052struct\052\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\015C_a_i"
"_record7\376\003\000\000\002\376\001\000\000\010\001\052struct\052\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\015C_a_i_record8\376\003\000\000\002\376\001\000\000\010\001\052struct\052\376\377\016"
"\376\003\000\000\002\376\003\000\000\002\376B\000\000\014C_a_i_record\376\003\000\000\002\376\001\000\000\010\001\052struct\052\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\014C_a_i_string\376\003\000\000"
"\002\376\001\000\000\006\001string\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\012C_a_i_port\376\003\000\000\002\376\001\000\000\004\001port\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\015C_a_i_"
"vector1\376\003\000\000\002\376\001\000\000\006\001vector\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\015C_a_i_vector2\376\003\000\000\002\376\001\000\000\006\001vector\376\377\016\376\003\000\000\002"
"\376\003\000\000\002\376B\000\000\015C_a_i_vector3\376\003\000\000\002\376\001\000\000\006\001vector\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\015C_a_i_vector4\376\003\000\000\002\376\001\000\000"
"\006\001vector\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\015C_a_i_vector5\376\003\000\000\002\376\001\000\000\006\001vector\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\015C_a_i_"
"vector6\376\003\000\000\002\376\001\000\000\006\001vector\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\015C_a_i_vector7\376\003\000\000\002\376\001\000\000\006\001vector\376\377\016\376\003\000\000\002"
"\376\003\000\000\002\376B\000\000\015C_a_i_vector8\376\003\000\000\002\376\001\000\000\006\001vector\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\010C_a_pair\376\003\000\000\002\376\001\000\000\004\001pai"
"r\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\020C_a_i_bytevector\376\003\000\000\002\376\001\000\000\004\001blob\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\023C_a_i_make_l"
"ocative\376\003\000\000\002\376\001\000\000\010\001locative\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\014C_a_i_vector\376\003\000\000\002\376\001\000\000\006\001vector\376\377\016\376\003\000\000"
"\002\376\003\000\000\002\376B\000\000\013C_a_i_list1\376\003\000\000\002\376\001\000\000\004\001pair\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\013C_a_i_list2\376\003\000\000\002\376\001\000\000\004\001pai"
"r\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\013C_a_i_list3\376\003\000\000\002\376\001\000\000\004\001pair\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\013C_a_i_list4\376\003\000\000\002\376"
"\001\000\000\004\001pair\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\013C_a_i_list5\376\003\000\000\002\376\001\000\000\004\001pair\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\013C_a_i_lis"
"t6\376\003\000\000\002\376\001\000\000\004\001pair\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\013C_a_i_list7\376\003\000\000\002\376\001\000\000\004\001pair\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\013C"
"_a_i_list8\376\003\000\000\002\376\001\000\000\004\001pair\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\012C_a_i_cons\376\003\000\000\002\376\001\000\000\004\001pair\376\377\016\376\003\000\000\002\376\003\000\000"
"\002\376B\000\000\014C_a_i_flonum\376\003\000\000\002\376\001\000\000\005\001float\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\020C_a_i_fix_to_flo\376\003\000\000\002\376\001\000\000\005\001f"
"loat\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\020C_a_i_big_to_flo\376\003\000\000\002\376\001\000\000\005\001float\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\020C_a_i_fi"
"x_to_big\376\003\000\000\002\376\001\000\000\006\001bignum\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\015C_a_i_bignum0\376\003\000\000\002\376\001\000\000\006\001bignum\376\377\016\376\003\000\000"
"\002\376\003\000\000\002\376B\000\000\015C_a_i_bignum1\376\003\000\000\002\376\001\000\000\006\001bignum\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\015C_a_i_bignum2\376\003\000\000\002\376\001\000"
"\000\006\001bignum\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\020C_a_i_flonum_abs\376\003\000\000\002\376\001\000\000\005\001float\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\021C_a"
"_i_flonum_acos\376\003\000\000\002\376\001\000\000\005\001float\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000$C_a_i_flonum_actual_quotient_che"
"cked\376\003\000\000\002\376\001\000\000\005\001float\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\021C_a_i_flonum_asin\376\003\000\000\002\376\001\000\000\005\001float\376\377\016\376\003\000\000\002\376"
"\003\000\000\002\376B\000\000\022C_a_i_flonum_atan2\376\003\000\000\002\376\001\000\000\005\001float\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\021C_a_i_flonum_atan\376\003"
"\000\000\002\376\001\000\000\005\001float\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\024C_a_i_flonum_ceiling\376\003\000\000\002\376\001\000\000\005\001float\376\377\016\376\003\000\000\002\376\003\000\000"
"\002\376B\000\000\020C_a_i_flonum_cos\376\003\000\000\002\376\001\000\000\005\001float\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\027C_a_i_flonum_difference\376"
"\003\000\000\002\376\001\000\000\005\001float\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\020C_a_i_flonum_exp\376\003\000\000\002\376\001\000\000\005\001float\376\377\016\376\003\000\000\002\376\003\000\000\002\376B"
"\000\000\021C_a_i_flonum_expt\376\003\000\000\002\376\001\000\000\005\001float\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\022C_a_i_flonum_floor\376\003\000\000\002\376\001\000"
"\000\005\001float\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\020C_a_i_flonum_gcd\376\003\000\000\002\376\001\000\000\005\001float\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\020C_a_"
"i_flonum_log\376\003\000\000\002\376\001\000\000\005\001float\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\033C_a_i_flonum_modulo_checked\376\003\000\000\002\376\001"
"\000\000\005\001float\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\023C_a_i_flonum_negate\376\003\000\000\002\376\001\000\000\005\001float\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\021"
"C_a_i_flonum_plus\376\003\000\000\002\376\001\000\000\005\001float\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\035C_a_i_flonum_quotient_checked"
"\376\003\000\000\002\376\001\000\000\005\001float\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\025C_a_i_flonum_quotient\376\003\000\000\002\376\001\000\000\005\001float\376\377\016\376\003\000\000\002\376"
"\003\000\000\002\376B\000\000\036C_a_i_flonum_remainder_checked\376\003\000\000\002\376\001\000\000\005\001float\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\022C_a_i_f"
"lonum_round\376\003\000\000\002\376\001\000\000\005\001float\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\031C_a_i_flonum_round_proper\376\003\000\000\002\376\001\000\000\005"
"\001float\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\020C_a_i_flonum_sin\376\003\000\000\002\376\001\000\000\005\001float\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\021C_a_i_"
"flonum_sqrt\376\003\000\000\002\376\001\000\000\005\001float\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\020C_a_i_flonum_tan\376\003\000\000\002\376\001\000\000\005\001float\376\377\016"
"\376\003\000\000\002\376\003\000\000\002\376B\000\000\022C_a_i_flonum_times\376\003\000\000\002\376\001\000\000\005\001float\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\025C_a_i_flonum_"
"truncate\376\003\000\000\002\376\001\000\000\005\001float\376\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\025C_a_u_i_f64vector_ref\376\003\000\000\002\376\001\000\000\005\001float\376"
"\377\016\376\003\000\000\002\376\003\000\000\002\376B\000\000\025C_a_u_i_f32vector_ref\376\003\000\000\002\376\001\000\000\005\001float\376\377\016\376\377\016"));
lf[78]=C_h_intern(&lf[78],21, C_text("##sys#standard-output"));
lf[79]=C_h_intern(&lf[79],6, C_text("printf"));
lf[80]=C_h_intern(&lf[80],18, C_text("##sys#write-char-0"));
lf[81]=C_h_intern(&lf[81],11, C_text("##sys#print"));
lf[82]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002:\011"));
lf[83]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002  "));
lf[84]=C_h_intern(&lf[84],18, C_text("chicken.base#print"));
lf[85]=C_decode_literal(C_heaptop,C_text("\376B\000\000\027eliminated type checks:"));
lf[86]=C_h_intern(&lf[86],46, C_text("chicken.compiler.support#with-debugging-output"));
lf[87]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001x\376\003\000\000\002\376\001\000\000\001\001o\376\377\016"));
lf[88]=C_h_intern(&lf[88],38, C_text("chicken.compiler.lfa2#perform-unboxing"));
lf[89]=C_h_intern(&lf[89],34, C_text("chicken.compiler.support#make-node"));
lf[90]=C_h_intern(&lf[90],12, C_text("##core#float"));
lf[91]=C_h_intern(&lf[91],21, C_text("##core#float-variable"));
lf[92]=C_h_intern(&lf[92],18, C_text("##core#unbox_float"));
lf[93]=C_h_intern(&lf[93],2, C_text("op"));
lf[94]=C_h_intern(&lf[94],3, C_text("map"));
lf[95]=C_h_intern(&lf[95],16, C_text("##core#box_float"));
lf[96]=C_h_intern(&lf[96],16, C_text("##core#let_float"));
lf[97]=C_h_intern(&lf[97],4, C_text("pred"));
lf[98]=C_h_intern(&lf[98],3, C_text("acc"));
lf[99]=C_decode_literal(C_heaptop,C_text("\376B\000\0008number of inline operations replaced with unboxed ones: "));
lf[100]=C_decode_literal(C_heaptop,C_text("\376B\000\000#number of unboxed float variables: "));
lf[101]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001x\376\003\000\000\002\376\001\000\000\001\001o\376\377\016"));
C_register_lf2(lf,102,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1457,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[183] = {
{C_text("f5393:lfa2_2escm"),(void*)f5393},
{C_text("f5451:lfa2_2escm"),(void*)f5451},
{C_text("f5472:lfa2_2escm"),(void*)f5472},
{C_text("f5484:lfa2_2escm"),(void*)f5484},
{C_text("f5491:lfa2_2escm"),(void*)f5491},
{C_text("f_1457:lfa2_2escm"),(void*)f_1457},
{C_text("f_1460:lfa2_2escm"),(void*)f_1460},
{C_text("f_1463:lfa2_2escm"),(void*)f_1463},
{C_text("f_1466:lfa2_2escm"),(void*)f_1466},
{C_text("f_2086:lfa2_2escm"),(void*)f_2086},
{C_text("f_2094:lfa2_2escm"),(void*)f_2094},
{C_text("f_2115:lfa2_2escm"),(void*)f_2115},
{C_text("f_2130:lfa2_2escm"),(void*)f_2130},
{C_text("f_2146:lfa2_2escm"),(void*)f_2146},
{C_text("f_2164:lfa2_2escm"),(void*)f_2164},
{C_text("f_2176:lfa2_2escm"),(void*)f_2176},
{C_text("f_2680:lfa2_2escm"),(void*)f_2680},
{C_text("f_2686:lfa2_2escm"),(void*)f_2686},
{C_text("f_2751:lfa2_2escm"),(void*)f_2751},
{C_text("f_2767:lfa2_2escm"),(void*)f_2767},
{C_text("f_2779:lfa2_2escm"),(void*)f_2779},
{C_text("f_2782:lfa2_2escm"),(void*)f_2782},
{C_text("f_2882:lfa2_2escm"),(void*)f_2882},
{C_text("f_2933:lfa2_2escm"),(void*)f_2933},
{C_text("f_2959:lfa2_2escm"),(void*)f_2959},
{C_text("f_2965:lfa2_2escm"),(void*)f_2965},
{C_text("f_2970:lfa2_2escm"),(void*)f_2970},
{C_text("f_2996:lfa2_2escm"),(void*)f_2996},
{C_text("f_3000:lfa2_2escm"),(void*)f_3000},
{C_text("f_3004:lfa2_2escm"),(void*)f_3004},
{C_text("f_3006:lfa2_2escm"),(void*)f_3006},
{C_text("f_3010:lfa2_2escm"),(void*)f_3010},
{C_text("f_3013:lfa2_2escm"),(void*)f_3013},
{C_text("f_3016:lfa2_2escm"),(void*)f_3016},
{C_text("f_3021:lfa2_2escm"),(void*)f_3021},
{C_text("f_3028:lfa2_2escm"),(void*)f_3028},
{C_text("f_3029:lfa2_2escm"),(void*)f_3029},
{C_text("f_3036:lfa2_2escm"),(void*)f_3036},
{C_text("f_3046:lfa2_2escm"),(void*)f_3046},
{C_text("f_3063:lfa2_2escm"),(void*)f_3063},
{C_text("f_3070:lfa2_2escm"),(void*)f_3070},
{C_text("f_3098:lfa2_2escm"),(void*)f_3098},
{C_text("f_3100:lfa2_2escm"),(void*)f_3100},
{C_text("f_3110:lfa2_2escm"),(void*)f_3110},
{C_text("f_3129:lfa2_2escm"),(void*)f_3129},
{C_text("f_3146:lfa2_2escm"),(void*)f_3146},
{C_text("f_3192:lfa2_2escm"),(void*)f_3192},
{C_text("f_3198:lfa2_2escm"),(void*)f_3198},
{C_text("f_3203:lfa2_2escm"),(void*)f_3203},
{C_text("f_3205:lfa2_2escm"),(void*)f_3205},
{C_text("f_3215:lfa2_2escm"),(void*)f_3215},
{C_text("f_3222:lfa2_2escm"),(void*)f_3222},
{C_text("f_3226:lfa2_2escm"),(void*)f_3226},
{C_text("f_3234:lfa2_2escm"),(void*)f_3234},
{C_text("f_3246:lfa2_2escm"),(void*)f_3246},
{C_text("f_3263:lfa2_2escm"),(void*)f_3263},
{C_text("f_3271:lfa2_2escm"),(void*)f_3271},
{C_text("f_3277:lfa2_2escm"),(void*)f_3277},
{C_text("f_3283:lfa2_2escm"),(void*)f_3283},
{C_text("f_3289:lfa2_2escm"),(void*)f_3289},
{C_text("f_3293:lfa2_2escm"),(void*)f_3293},
{C_text("f_3296:lfa2_2escm"),(void*)f_3296},
{C_text("f_3299:lfa2_2escm"),(void*)f_3299},
{C_text("f_3308:lfa2_2escm"),(void*)f_3308},
{C_text("f_3311:lfa2_2escm"),(void*)f_3311},
{C_text("f_3358:lfa2_2escm"),(void*)f_3358},
{C_text("f_3361:lfa2_2escm"),(void*)f_3361},
{C_text("f_3368:lfa2_2escm"),(void*)f_3368},
{C_text("f_3372:lfa2_2escm"),(void*)f_3372},
{C_text("f_3390:lfa2_2escm"),(void*)f_3390},
{C_text("f_3394:lfa2_2escm"),(void*)f_3394},
{C_text("f_3402:lfa2_2escm"),(void*)f_3402},
{C_text("f_3414:lfa2_2escm"),(void*)f_3414},
{C_text("f_3458:lfa2_2escm"),(void*)f_3458},
{C_text("f_3461:lfa2_2escm"),(void*)f_3461},
{C_text("f_3464:lfa2_2escm"),(void*)f_3464},
{C_text("f_3475:lfa2_2escm"),(void*)f_3475},
{C_text("f_3482:lfa2_2escm"),(void*)f_3482},
{C_text("f_3496:lfa2_2escm"),(void*)f_3496},
{C_text("f_3512:lfa2_2escm"),(void*)f_3512},
{C_text("f_3520:lfa2_2escm"),(void*)f_3520},
{C_text("f_3526:lfa2_2escm"),(void*)f_3526},
{C_text("f_3568:lfa2_2escm"),(void*)f_3568},
{C_text("f_3587:lfa2_2escm"),(void*)f_3587},
{C_text("f_3590:lfa2_2escm"),(void*)f_3590},
{C_text("f_3593:lfa2_2escm"),(void*)f_3593},
{C_text("f_3604:lfa2_2escm"),(void*)f_3604},
{C_text("f_3618:lfa2_2escm"),(void*)f_3618},
{C_text("f_3643:lfa2_2escm"),(void*)f_3643},
{C_text("f_3647:lfa2_2escm"),(void*)f_3647},
{C_text("f_3659:lfa2_2escm"),(void*)f_3659},
{C_text("f_3666:lfa2_2escm"),(void*)f_3666},
{C_text("f_3670:lfa2_2escm"),(void*)f_3670},
{C_text("f_3673:lfa2_2escm"),(void*)f_3673},
{C_text("f_3688:lfa2_2escm"),(void*)f_3688},
{C_text("f_3714:lfa2_2escm"),(void*)f_3714},
{C_text("f_3734:lfa2_2escm"),(void*)f_3734},
{C_text("f_3796:lfa2_2escm"),(void*)f_3796},
{C_text("f_3803:lfa2_2escm"),(void*)f_3803},
{C_text("f_3806:lfa2_2escm"),(void*)f_3806},
{C_text("f_3812:lfa2_2escm"),(void*)f_3812},
{C_text("f_3815:lfa2_2escm"),(void*)f_3815},
{C_text("f_3822:lfa2_2escm"),(void*)f_3822},
{C_text("f_3826:lfa2_2escm"),(void*)f_3826},
{C_text("f_3830:lfa2_2escm"),(void*)f_3830},
{C_text("f_3844:lfa2_2escm"),(void*)f_3844},
{C_text("f_3898:lfa2_2escm"),(void*)f_3898},
{C_text("f_3906:lfa2_2escm"),(void*)f_3906},
{C_text("f_3921:lfa2_2escm"),(void*)f_3921},
{C_text("f_3924:lfa2_2escm"),(void*)f_3924},
{C_text("f_3927:lfa2_2escm"),(void*)f_3927},
{C_text("f_3936:lfa2_2escm"),(void*)f_3936},
{C_text("f_3962:lfa2_2escm"),(void*)f_3962},
{C_text("f_3982:lfa2_2escm"),(void*)f_3982},
{C_text("f_4040:lfa2_2escm"),(void*)f_4040},
{C_text("f_4050:lfa2_2escm"),(void*)f_4050},
{C_text("f_4066:lfa2_2escm"),(void*)f_4066},
{C_text("f_4082:lfa2_2escm"),(void*)f_4082},
{C_text("f_4113:lfa2_2escm"),(void*)f_4113},
{C_text("f_4123:lfa2_2escm"),(void*)f_4123},
{C_text("f_4139:lfa2_2escm"),(void*)f_4139},
{C_text("f_4149:lfa2_2escm"),(void*)f_4149},
{C_text("f_4151:lfa2_2escm"),(void*)f_4151},
{C_text("f_4161:lfa2_2escm"),(void*)f_4161},
{C_text("f_4213:lfa2_2escm"),(void*)f_4213},
{C_text("f_4216:lfa2_2escm"),(void*)f_4216},
{C_text("f_4224:lfa2_2escm"),(void*)f_4224},
{C_text("f_4228:lfa2_2escm"),(void*)f_4228},
{C_text("f_4236:lfa2_2escm"),(void*)f_4236},
{C_text("f_4239:lfa2_2escm"),(void*)f_4239},
{C_text("f_4242:lfa2_2escm"),(void*)f_4242},
{C_text("f_4245:lfa2_2escm"),(void*)f_4245},
{C_text("f_4262:lfa2_2escm"),(void*)f_4262},
{C_text("f_4272:lfa2_2escm"),(void*)f_4272},
{C_text("f_4285:lfa2_2escm"),(void*)f_4285},
{C_text("f_4289:lfa2_2escm"),(void*)f_4289},
{C_text("f_4291:lfa2_2escm"),(void*)f_4291},
{C_text("f_4295:lfa2_2escm"),(void*)f_4295},
{C_text("f_4298:lfa2_2escm"),(void*)f_4298},
{C_text("f_4301:lfa2_2escm"),(void*)f_4301},
{C_text("f_4329:lfa2_2escm"),(void*)f_4329},
{C_text("f_4366:lfa2_2escm"),(void*)f_4366},
{C_text("f_4395:lfa2_2escm"),(void*)f_4395},
{C_text("f_4397:lfa2_2escm"),(void*)f_4397},
{C_text("f_4422:lfa2_2escm"),(void*)f_4422},
{C_text("f_4446:lfa2_2escm"),(void*)f_4446},
{C_text("f_4456:lfa2_2escm"),(void*)f_4456},
{C_text("f_4458:lfa2_2escm"),(void*)f_4458},
{C_text("f_4483:lfa2_2escm"),(void*)f_4483},
{C_text("f_4505:lfa2_2escm"),(void*)f_4505},
{C_text("f_4518:lfa2_2escm"),(void*)f_4518},
{C_text("f_4522:lfa2_2escm"),(void*)f_4522},
{C_text("f_4525:lfa2_2escm"),(void*)f_4525},
{C_text("f_4528:lfa2_2escm"),(void*)f_4528},
{C_text("f_4537:lfa2_2escm"),(void*)f_4537},
{C_text("f_4551:lfa2_2escm"),(void*)f_4551},
{C_text("f_4574:lfa2_2escm"),(void*)f_4574},
{C_text("f_4592:lfa2_2escm"),(void*)f_4592},
{C_text("f_4596:lfa2_2escm"),(void*)f_4596},
{C_text("f_4613:lfa2_2escm"),(void*)f_4613},
{C_text("f_4615:lfa2_2escm"),(void*)f_4615},
{C_text("f_4640:lfa2_2escm"),(void*)f_4640},
{C_text("f_4663:lfa2_2escm"),(void*)f_4663},
{C_text("f_4675:lfa2_2escm"),(void*)f_4675},
{C_text("f_4707:lfa2_2escm"),(void*)f_4707},
{C_text("f_4709:lfa2_2escm"),(void*)f_4709},
{C_text("f_4734:lfa2_2escm"),(void*)f_4734},
{C_text("f_4760:lfa2_2escm"),(void*)f_4760},
{C_text("f_4762:lfa2_2escm"),(void*)f_4762},
{C_text("f_4787:lfa2_2escm"),(void*)f_4787},
{C_text("f_4811:lfa2_2escm"),(void*)f_4811},
{C_text("f_4813:lfa2_2escm"),(void*)f_4813},
{C_text("f_4838:lfa2_2escm"),(void*)f_4838},
{C_text("f_4859:lfa2_2escm"),(void*)f_4859},
{C_text("f_4862:lfa2_2escm"),(void*)f_4862},
{C_text("f_4864:lfa2_2escm"),(void*)f_4864},
{C_text("f_4871:lfa2_2escm"),(void*)f_4871},
{C_text("f_4874:lfa2_2escm"),(void*)f_4874},
{C_text("f_4877:lfa2_2escm"),(void*)f_4877},
{C_text("f_4883:lfa2_2escm"),(void*)f_4883},
{C_text("f_4886:lfa2_2escm"),(void*)f_4886},
{C_text("toplevel:lfa2_2escm"),(void*)C_lfa2_toplevel},
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
o|hiding unexported module binding: chicken.compiler.lfa2#partition 
o|hiding unexported module binding: chicken.compiler.lfa2#span 
o|hiding unexported module binding: chicken.compiler.lfa2#take 
o|hiding unexported module binding: chicken.compiler.lfa2#drop 
o|hiding unexported module binding: chicken.compiler.lfa2#split-at 
o|hiding unexported module binding: chicken.compiler.lfa2#append-map 
o|hiding unexported module binding: chicken.compiler.lfa2#every 
o|hiding unexported module binding: chicken.compiler.lfa2#any 
o|hiding unexported module binding: chicken.compiler.lfa2#cons* 
o|hiding unexported module binding: chicken.compiler.lfa2#concatenate 
o|hiding unexported module binding: chicken.compiler.lfa2#delete 
o|hiding unexported module binding: chicken.compiler.lfa2#first 
o|hiding unexported module binding: chicken.compiler.lfa2#second 
o|hiding unexported module binding: chicken.compiler.lfa2#third 
o|hiding unexported module binding: chicken.compiler.lfa2#fourth 
o|hiding unexported module binding: chicken.compiler.lfa2#fifth 
o|hiding unexported module binding: chicken.compiler.lfa2#delete-duplicates 
o|hiding unexported module binding: chicken.compiler.lfa2#alist-cons 
o|hiding unexported module binding: chicken.compiler.lfa2#filter 
o|hiding unexported module binding: chicken.compiler.lfa2#filter-map 
o|hiding unexported module binding: chicken.compiler.lfa2#remove 
o|hiding unexported module binding: chicken.compiler.lfa2#unzip1 
o|hiding unexported module binding: chicken.compiler.lfa2#last 
o|hiding unexported module binding: chicken.compiler.lfa2#list-index 
o|hiding unexported module binding: chicken.compiler.lfa2#lset-adjoin/eq? 
o|hiding unexported module binding: chicken.compiler.lfa2#lset-difference/eq? 
o|hiding unexported module binding: chicken.compiler.lfa2#lset-union/eq? 
o|hiding unexported module binding: chicken.compiler.lfa2#lset-intersection/eq? 
o|hiding unexported module binding: chicken.compiler.lfa2#list-tabulate 
o|hiding unexported module binding: chicken.compiler.lfa2#lset<=/eq? 
o|hiding unexported module binding: chicken.compiler.lfa2#lset=/eq? 
o|hiding unexported module binding: chicken.compiler.lfa2#length+ 
o|hiding unexported module binding: chicken.compiler.lfa2#find 
o|hiding unexported module binding: chicken.compiler.lfa2#find-tail 
o|hiding unexported module binding: chicken.compiler.lfa2#iota 
o|hiding unexported module binding: chicken.compiler.lfa2#make-list 
o|hiding unexported module binding: chicken.compiler.lfa2#posq 
o|hiding unexported module binding: chicken.compiler.lfa2#posv 
o|hiding unexported module binding: chicken.compiler.lfa2#+type-check-map+ 
o|hiding unexported module binding: chicken.compiler.lfa2#+predicate-map+ 
o|hiding unexported module binding: chicken.compiler.lfa2#+ffi-type-check-map+ 
o|hiding unexported module binding: chicken.compiler.lfa2#+constructor-map+ 
o|hiding unexported module binding: chicken.compiler.lfa2#+unboxed-map+ 
S|applied compiler syntax:
S|  chicken.format#printf		3
S|  scheme#for-each		4
S|  chicken.base#foldl		3
S|  scheme#map		9
S|  chicken.base#foldr		3
o|eliminated procedure checks: 71 
o|specializations:
o|  3 (##sys#check-output-port * * *)
o|  22 (scheme#eqv? * (or eof null fixnum char boolean symbol keyword))
o|  1 (scheme#caar (pair pair *))
o|  3 (scheme#eqv? (or eof null fixnum char boolean symbol keyword) *)
o|  1 (scheme#memq * list)
o|  3 (chicken.base#add1 *)
o|  1 (scheme#eqv? * *)
o|  3 (##sys#check-list (or pair list) *)
o|  28 (scheme#cdr pair)
o|  13 (scheme#car pair)
(o e)|safe calls: 473 
o|safe globals: (chicken.compiler.lfa2#perform-unboxing chicken.compiler.lfa2#perform-secondary-flow-analysis chicken.compiler.lfa2#+unboxed-map+ chicken.compiler.lfa2#+constructor-map+ chicken.compiler.lfa2#+ffi-type-check-map+ chicken.compiler.lfa2#+predicate-map+ chicken.compiler.lfa2#+type-check-map+ chicken.compiler.lfa2#posv chicken.compiler.lfa2#posq chicken.compiler.lfa2#make-list chicken.compiler.lfa2#iota chicken.compiler.lfa2#find-tail chicken.compiler.lfa2#find chicken.compiler.lfa2#length+ chicken.compiler.lfa2#lset=/eq? chicken.compiler.lfa2#lset<=/eq? chicken.compiler.lfa2#list-tabulate chicken.compiler.lfa2#lset-intersection/eq? chicken.compiler.lfa2#lset-union/eq? chicken.compiler.lfa2#lset-difference/eq? chicken.compiler.lfa2#lset-adjoin/eq? chicken.compiler.lfa2#list-index chicken.compiler.lfa2#last chicken.compiler.lfa2#unzip1 chicken.compiler.lfa2#remove chicken.compiler.lfa2#filter-map chicken.compiler.lfa2#filter chicken.compiler.lfa2#alist-cons chicken.compiler.lfa2#delete-duplicates chicken.compiler.lfa2#fifth chicken.compiler.lfa2#fourth chicken.compiler.lfa2#third chicken.compiler.lfa2#second chicken.compiler.lfa2#first chicken.compiler.lfa2#delete chicken.compiler.lfa2#concatenate chicken.compiler.lfa2#cons* chicken.compiler.lfa2#any chicken.compiler.lfa2#every chicken.compiler.lfa2#append-map chicken.compiler.lfa2#split-at chicken.compiler.lfa2#drop chicken.compiler.lfa2#take chicken.compiler.lfa2#span chicken.compiler.lfa2#partition) 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#partition 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#span 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#drop 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#split-at 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#append-map 
o|inlining procedure: k1848 
o|inlining procedure: k1848 
o|inlining procedure: k1879 
o|inlining procedure: k1879 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#cons* 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#concatenate 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#fourth 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#fifth 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#delete-duplicates 
o|inlining procedure: k2096 
o|inlining procedure: k2096 
o|inlining procedure: k2088 
o|inlining procedure: k2088 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#unzip1 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#last 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#list-index 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#lset-adjoin/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#lset-difference/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#lset-union/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#lset-intersection/eq? 
o|inlining procedure: k2487 
o|inlining procedure: k2487 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#lset<=/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#lset=/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#length+ 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#find 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#find-tail 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#iota 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#make-list 
o|inlining procedure: k2688 
o|inlining procedure: k2688 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#posv 
o|inlining procedure: k2884 
o|inlining procedure: k2884 
o|inlining procedure: k2893 
o|inlining procedure: k2905 
o|inlining procedure: k2905 
o|inlining procedure: k2893 
o|inlining procedure: k2938 
o|contracted procedure: "(lfa2.scm:272) g593594" 
o|inlining procedure: k2938 
o|substituted constant variable: a2971 
o|inlining procedure: k2972 
o|inlining procedure: k2972 
o|inlining procedure: k2987 
o|inlining procedure: k2987 
o|inlining procedure: "(lfa2.scm:283) chicken.compiler.lfa2#first" 
o|inlining procedure: k3031 
o|inlining procedure: k3031 
o|inlining procedure: k3047 
o|inlining procedure: k3047 
o|inlining procedure: k3068 
o|inlining procedure: k3068 
o|inlining procedure: k3080 
o|inlining procedure: k3080 
o|substituted constant variable: a3090 
o|substituted constant variable: a3092 
o|substituted constant variable: a3094 
o|inlining procedure: k3102 
o|inlining procedure: k3102 
o|inlining procedure: "(lfa2.scm:294) chicken.compiler.lfa2#first" 
o|contracted procedure: "(lfa2.scm:334) chicken.compiler.lfa2#remove" 
o|merged explicitly consed rest parameter: rest666669 
o|inlining procedure: k3223 
o|inlining procedure: k3223 
o|inlining procedure: "(lfa2.scm:338) chicken.compiler.lfa2#first" 
o|consed rest parameter at call site: "(lfa2.scm:343) count-floatvar559" 3 
o|consed rest parameter at call site: "(lfa2.scm:344) count-floatvar559" 3 
o|consed rest parameter at call site: "(lfa2.scm:345) count-floatvar559" 3 
o|inlining procedure: k3300 
o|contracted procedure: "(lfa2.scm:357) vartype555" 
o|inlining procedure: k3136 
o|inlining procedure: k3136 
o|inlining procedure: k3148 
o|inlining procedure: k3148 
o|inlining procedure: "(lfa2.scm:357) chicken.compiler.lfa2#first" 
o|inlining procedure: "(lfa2.scm:355) chicken.compiler.lfa2#first" 
o|inlining procedure: "(lfa2.scm:354) chicken.compiler.lfa2#first" 
o|inlining procedure: "(lfa2.scm:353) chicken.compiler.lfa2#first" 
o|inlining procedure: k3300 
o|inlining procedure: "(lfa2.scm:368) chicken.compiler.lfa2#third" 
o|inlining procedure: "(lfa2.scm:367) chicken.compiler.lfa2#second" 
o|inlining procedure: "(lfa2.scm:365) chicken.compiler.lfa2#third" 
o|inlining procedure: "(lfa2.scm:364) chicken.compiler.lfa2#third" 
o|inlining procedure: "(lfa2.scm:362) chicken.compiler.lfa2#second" 
o|inlining procedure: "(lfa2.scm:361) chicken.compiler.lfa2#second" 
o|inlining procedure: "(lfa2.scm:359) chicken.compiler.lfa2#first" 
o|inlining procedure: k3431 
o|contracted procedure: "(lfa2.scm:369) constant-result548" 
o|inlining procedure: k2756 
o|inlining procedure: k2756 
o|inlining procedure: k2768 
o|inlining procedure: k2768 
o|inlining procedure: k2783 
o|inlining procedure: k2783 
o|inlining procedure: k2795 
o|inlining procedure: k2795 
o|inlining procedure: k2807 
o|inlining procedure: k2807 
o|inlining procedure: k2819 
o|inlining procedure: k2819 
o|inlining procedure: k2831 
o|inlining procedure: k2831 
o|inlining procedure: k2843 
o|inlining procedure: k2843 
o|inlining procedure: k2862 
o|inlining procedure: k2862 
o|inlining procedure: "(lfa2.scm:369) chicken.compiler.lfa2#first" 
o|inlining procedure: k3431 
o|inlining procedure: k3477 
o|inlining procedure: "(lfa2.scm:388) chicken.compiler.lfa2#first" 
o|inlining procedure: k3477 
o|inlining procedure: k3500 
o|inlining procedure: "(lfa2.scm:387) chicken.compiler.lfa2#first" 
o|inlining procedure: k3500 
o|inlining procedure: "(lfa2.scm:381) chicken.compiler.lfa2#second" 
o|inlining procedure: k3544 
o|inlining procedure: k3544 
o|inlining procedure: "(lfa2.scm:372) chicken.compiler.lfa2#first" 
o|inlining procedure: "(lfa2.scm:371) chicken.compiler.lfa2#first" 
o|inlining procedure: k3557 
o|inlining procedure: "(lfa2.scm:395) chicken.compiler.lfa2#first" 
o|inlining procedure: k3557 
o|inlining procedure: "(lfa2.scm:401) chicken.compiler.lfa2#first" 
o|inlining procedure: "(lfa2.scm:400) chicken.compiler.lfa2#first" 
o|inlining procedure: "(lfa2.scm:398) chicken.compiler.lfa2#first" 
o|inlining procedure: k3619 
o|inlining procedure: k3619 
o|inlining procedure: k3648 
o|inlining procedure: k3648 
o|inlining procedure: k3631 
o|inlining procedure: k3671 
o|inlining procedure: k3671 
o|inlining procedure: k3683 
o|inlining procedure: "(lfa2.scm:425) chicken.compiler.lfa2#second" 
o|inlining procedure: "(lfa2.scm:423) chicken.compiler.lfa2#first" 
o|inlining procedure: "(lfa2.scm:423) chicken.compiler.lfa2#second" 
o|inlining procedure: k3683 
o|inlining procedure: k3722 
o|inlining procedure: "(lfa2.scm:422) chicken.compiler.lfa2#second" 
o|inlining procedure: k3722 
o|inlining procedure: "(lfa2.scm:421) chicken.compiler.lfa2#first" 
o|inlining procedure: k3743 
o|inlining procedure: k3743 
o|inlining procedure: "(lfa2.scm:415) chicken.compiler.lfa2#first" 
o|inlining procedure: k3804 
o|inlining procedure: k3804 
o|inlining procedure: "(lfa2.scm:436) chicken.compiler.lfa2#first" 
o|inlining procedure: k3793 
o|inlining procedure: k3793 
o|inlining procedure: k3849 
o|inlining procedure: k3871 
o|inlining procedure: k3886 
o|inlining procedure: k3886 
o|inlining procedure: "(lfa2.scm:454) chicken.compiler.lfa2#first" 
o|inlining procedure: "(lfa2.scm:456) chicken.compiler.lfa2#second" 
o|inlining procedure: "(lfa2.scm:453) chicken.compiler.lfa2#second" 
o|inlining procedure: k3871 
o|inlining procedure: "(lfa2.scm:450) chicken.compiler.lfa2#first" 
o|inlining procedure: k3849 
o|inlining procedure: k3931 
o|inlining procedure: "(lfa2.scm:473) chicken.compiler.lfa2#second" 
o|inlining procedure: "(lfa2.scm:470) chicken.compiler.lfa2#first" 
o|inlining procedure: "(lfa2.scm:471) chicken.compiler.lfa2#second" 
o|inlining procedure: k3931 
o|inlining procedure: k3970 
o|inlining procedure: "(lfa2.scm:469) chicken.compiler.lfa2#second" 
o|inlining procedure: k3970 
o|inlining procedure: "(lfa2.scm:468) chicken.compiler.lfa2#first" 
o|inlining procedure: k3991 
o|inlining procedure: k3991 
o|inlining procedure: "(lfa2.scm:447) chicken.compiler.lfa2#first" 
o|inlining procedure: k4045 
o|inlining procedure: "(lfa2.scm:488) chicken.compiler.lfa2#first" 
o|inlining procedure: k4045 
o|inlining procedure: k4070 
o|inlining procedure: k4070 
o|inlining procedure: "(lfa2.scm:484) chicken.compiler.lfa2#first" 
o|inlining procedure: k4037 
o|inlining procedure: k4037 
o|substituted constant variable: chicken.compiler.lfa2#+constructor-map+ 
o|inlining procedure: "(lfa2.scm:482) chicken.compiler.lfa2#first" 
o|substituted constant variable: chicken.compiler.lfa2#+predicate-map+ 
o|inlining procedure: "(lfa2.scm:445) chicken.compiler.lfa2#first" 
o|substituted constant variable: chicken.compiler.lfa2#+ffi-type-check-map+ 
o|inlining procedure: "(lfa2.scm:434) chicken.compiler.lfa2#first" 
o|substituted constant variable: chicken.compiler.lfa2#+type-check-map+ 
o|inlining procedure: "(lfa2.scm:413) chicken.compiler.lfa2#first" 
o|inlining procedure: k4115 
o|inlining procedure: k4115 
o|inlining procedure: "(lfa2.scm:407) chicken.compiler.lfa2#first" 
o|inlining procedure: k3631 
o|inlining procedure: k4153 
o|inlining procedure: k4153 
o|substituted constant variable: a4177 
o|substituted constant variable: a4179 
o|substituted constant variable: a4181 
o|substituted constant variable: a4183 
o|substituted constant variable: a4188 
o|substituted constant variable: a4190 
o|substituted constant variable: a4195 
o|substituted constant variable: a4197 
o|substituted constant variable: a4199 
o|substituted constant variable: a4201 
o|substituted constant variable: a4206 
o|substituted constant variable: a4208 
o|substituted constant variable: a4210 
o|inlining procedure: k4214 
o|inlining procedure: k4264 
o|contracted procedure: "(lfa2.scm:503) g856863" 
o|propagated global variable: out866869 ##sys#standard-output 
o|substituted constant variable: a4232 
o|substituted constant variable: a4233 
o|propagated global variable: out866869 ##sys#standard-output 
o|inlining procedure: k4264 
o|inlining procedure: k4214 
o|inlining procedure: k4302 
o|inlining procedure: "(lfa2.scm:523) chicken.compiler.lfa2#first" 
o|inlining procedure: k4302 
o|inlining procedure: k4330 
o|inlining procedure: k4330 
o|inlining procedure: "(lfa2.scm:528) chicken.compiler.lfa2#first" 
o|inlining procedure: k4351 
o|inlining procedure: k4399 
o|inlining procedure: k4399 
o|inlining procedure: "(lfa2.scm:536) chicken.compiler.lfa2#third" 
o|inlining procedure: "(lfa2.scm:535) chicken.compiler.lfa2#second" 
o|inlining procedure: k4460 
o|inlining procedure: k4460 
o|inlining procedure: "(lfa2.scm:533) chicken.compiler.lfa2#first" 
o|inlining procedure: k4351 
o|substituted constant variable: a4510 
o|substituted constant variable: a4512 
o|substituted constant variable: a4514 
o|substituted constant variable: a4516 
o|inlining procedure: k4529 
o|inlining procedure: "(lfa2.scm:556) chicken.compiler.lfa2#first" 
o|inlining procedure: k4529 
o|inlining procedure: k4575 
o|inlining procedure: "(lfa2.scm:569) chicken.compiler.lfa2#second" 
o|inlining procedure: k4575 
o|inlining procedure: k4617 
o|inlining procedure: k4617 
o|inlining procedure: "(lfa2.scm:564) chicken.compiler.lfa2#first" 
o|inlining procedure: "(lfa2.scm:563) chicken.compiler.lfa2#first" 
o|inlining procedure: k4648 
o|inlining procedure: k4676 
o|inlining procedure: k4676 
o|substituted constant variable: a4690 
o|inlining procedure: k4711 
o|inlining procedure: k4711 
o|inlining procedure: "(lfa2.scm:575) chicken.compiler.lfa2#third" 
o|inlining procedure: "(lfa2.scm:574) chicken.compiler.lfa2#second" 
o|inlining procedure: k4764 
o|inlining procedure: k4764 
o|inlining procedure: "(lfa2.scm:572) chicken.compiler.lfa2#first" 
o|inlining procedure: k4648 
o|inlining procedure: k4815 
o|inlining procedure: k4815 
o|substituted constant variable: a4850 
o|substituted constant variable: a4852 
o|substituted constant variable: a4854 
o|substituted constant variable: a4856 
o|propagated global variable: out11281134 ##sys#standard-output 
o|substituted constant variable: a4867 
o|substituted constant variable: a4868 
o|propagated global variable: out11311138 ##sys#standard-output 
o|substituted constant variable: a4879 
o|substituted constant variable: a4880 
o|propagated global variable: out11311138 ##sys#standard-output 
o|propagated global variable: out11281134 ##sys#standard-output 
o|inlining procedure: k4897 
o|inlining procedure: k4897 
o|contracted procedure: "(lfa2.scm:510) chicken.compiler.lfa2#filter-map" 
o|inlining procedure: k2143 
o|inlining procedure: k2143 
o|inlining procedure: k2132 
o|inlining procedure: k2132 
o|replaced variables: 739 
o|removed binding forms: 158 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#every 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#any 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#first 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#second 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#third 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#list-tabulate 
o|substituted constant variable: r26894922 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#+type-check-map+ 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#+predicate-map+ 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#+ffi-type-check-map+ 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#+constructor-map+ 
o|inlining procedure: k2893 
o|inlining procedure: k2893 
o|substituted constant variable: r29064928 
o|inlining procedure: k2893 
o|substituted constant variable: r28944929 
o|substituted constant variable: r30694945 
o|substituted constant variable: r30694945 
o|inlining procedure: k3068 
o|inlining procedure: k3068 
o|substituted constant variable: r30814949 
o|contracted procedure: "(mini-srfi-1.scm:141) chicken.compiler.lfa2#filter" 
o|substituted constant variable: r20894919 
o|substituted constant variable: r31494968 
o|substituted constant variable: r27575027 
o|substituted constant variable: r27695029 
o|substituted constant variable: r27845031 
o|substituted constant variable: r27965033 
o|substituted constant variable: r28085035 
o|substituted constant variable: r28205037 
o|substituted constant variable: r28325039 
o|substituted constant variable: r28445041 
o|substituted constant variable: r28635043 
o|substituted constant variable: r28635044 
o|substituted constant variable: r35015066 
o|substituted constant variable: r35455073 
o|substituted constant variable: r35585084 
o|inlining procedure: k3585 
o|substituted constant variable: r36205106 
o|inlining procedure: k3671 
o|inlining procedure: k3671 
o|substituted constant variable: r37235138 
o|inlining procedure: k3671 
o|inlining procedure: k3671 
o|inlining procedure: k3871 
o|substituted constant variable: r38875166 
o|inlining procedure: k3871 
o|substituted constant variable: r38505189 
o|inlining procedure: k3925 
o|inlining procedure: k3925 
o|substituted constant variable: r39715213 
o|inlining procedure: k3925 
o|inlining procedure: k3925 
o|substituted constant variable: r40715234 
o|substituted constant variable: r36325269 
o|propagated global variable: out866869 ##sys#standard-output 
o|propagated global variable: out11281134 ##sys#standard-output 
o|propagated global variable: out11311138 ##sys#standard-output 
o|substituted constant variable: r48985365 
o|substituted constant variable: r21335369 
o|replaced variables: 247 
o|removed binding forms: 581 
o|removed conditional forms: 1 
o|substituted constant variable: r28945374 
o|substituted constant variable: r28945375 
o|substituted constant variable: r28945376 
o|inlining procedure: "(lfa2.scm:274) chicken.compiler.lfa2#alist-cons" 
o|inlining procedure: "(lfa2.scm:337) varnode?556" 
o|inlining procedure: "(lfa2.scm:389) chicken.compiler.lfa2#alist-cons" 
o|inlining procedure: "(lfa2.scm:389) chicken.compiler.lfa2#alist-cons" 
o|inlining procedure: "(lfa2.scm:385) varnode?556" 
o|inlining procedure: "(lfa2.scm:384) chicken.compiler.lfa2#alist-cons" 
o|inlining procedure: "(lfa2.scm:399) varnode?556" 
o|inlining procedure: k3695 
o|substituted constant variable: r38725399 
o|substituted constant variable: r38725401 
o|substituted constant variable: r385051895404 
o|substituted constant variable: r385051895406 
o|substituted constant variable: r385051895408 
o|substituted constant variable: r385051895410 
o|inlining procedure: "(lfa2.scm:448) varnode?556" 
o|replaced variables: 4 
o|removed binding forms: 261 
o|removed conditional forms: 3 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#alist-cons 
o|substituted constant variable: y2415439 
o|substituted constant variable: r30695377 
o|substituted constant variable: r30695379 
o|removed side-effect free assignment to unused variable: varnode?556 
o|substituted constant variable: r36965486 
o|inlining procedure: k3943 
o|contracted procedure: "(mini-srfi-1.scm:135) a4894" 
o|replaced variables: 22 
o|removed binding forms: 16 
o|removed conditional forms: 1 
o|substituted constant variable: r39445521 
o|contracted procedure: "(mini-srfi-1.scm:134) g273274" 
o|replaced variables: 5 
o|removed binding forms: 31 
o|removed conditional forms: 1 
o|replaced variables: 7 
o|removed binding forms: 3 
o|removed binding forms: 3 
o|simplifications: ((if . 19) (##core#call . 306) (let . 14)) 
o|  call simplifications:
o|    scheme#=
o|    ##sys#setslot	6
o|    ##sys#cons	3
o|    scheme#member	3
o|    scheme#memq	2
o|    scheme#string?
o|    scheme#symbol?	5
o|    chicken.base#fixnum?
o|    chicken.base#bignum?
o|    chicken.base#flonum?
o|    chicken.base#ratnum?
o|    chicken.base#cplxnum?
o|    scheme#boolean?
o|    scheme#list?
o|    scheme#eof-object?
o|    scheme#vector?
o|    ##sys#immediate?
o|    ##sys#generic-structure?
o|    scheme#char?
o|    ##sys#list	5
o|    scheme#caddr	6
o|    scheme#cdar
o|    scheme#+
o|    scheme#set-car!
o|    scheme#assq	5
o|    ##sys#check-list	12
o|    ##sys#slot	31
o|    scheme#length	2
o|    scheme#list	12
o|    scheme#not	8
o|    scheme#assoc	8
o|    scheme#cons	25
o|    scheme#cdr	4
o|    scheme#set-cdr!
o|    scheme#pair?	22
o|    scheme#cadr	24
o|    scheme#null?	4
o|    scheme#car	45
o|    scheme#eq?	55
o|    chicken.fixnum#fx+
o|contracted procedure: k2691 
o|contracted procedure: k2710 
o|contracted procedure: k2697 
o|contracted procedure: k2704 
o|contracted procedure: k2887 
o|contracted procedure: k2896 
o|contracted procedure: k2902 
o|contracted procedure: k2908 
o|contracted procedure: k2914 
o|contracted procedure: k2921 
o|contracted procedure: k2925 
o|contracted procedure: k2893 
o|contracted procedure: k2935 
o|contracted procedure: k2948 
o|contracted procedure: k20735443 
o|contracted procedure: k2955 
o|contracted procedure: k2978 
o|contracted procedure: k2981 
o|contracted procedure: k2984 
o|contracted procedure: k3041 
o|contracted procedure: k3057 
o|contracted procedure: k3065 
o|contracted procedure: k3071 
o|contracted procedure: k3077 
o|contracted procedure: k3083 
o|contracted procedure: k3105 
o|contracted procedure: k3115 
o|contracted procedure: k3119 
o|contracted procedure: k3123 
o|contracted procedure: k3211 
o|contracted procedure: k2079 
o|contracted procedure: k2091 
o|contracted procedure: k2109 
o|contracted procedure: k2117 
o|contracted procedure: k3264 
o|contracted procedure: k3217 
o|contracted procedure: k3240 
o|contracted procedure: k3236 
o|contracted procedure: k3250 
o|contracted procedure: k3257 
o|contracted procedure: k3303 
o|contracted procedure: k3316 
o|contracted procedure: k3133 
o|contracted procedure: k3151 
o|contracted procedure: k3178 
o|contracted procedure: k3168 
o|inlining procedure: k3154 
o|inlining procedure: k3154 
o|contracted procedure: k3326 
o|contracted procedure: k3340 
o|contracted procedure: k3336 
o|contracted procedure: k3344 
o|contracted procedure: k3350 
o|contracted procedure: k3353 
o|contracted procedure: k3374 
o|contracted procedure: k3378 
o|contracted procedure: k3419 
o|contracted procedure: k3381 
o|contracted procedure: k3396 
o|contracted procedure: k3404 
o|contracted procedure: k3408 
o|contracted procedure: k3416 
o|contracted procedure: k3428 
o|contracted procedure: k3434 
o|contracted procedure: k3441 
o|contracted procedure: k2759 
o|contracted procedure: k2771 
o|contracted procedure: k2786 
o|contracted procedure: k2792 
o|contracted procedure: k2798 
o|contracted procedure: k2804 
o|contracted procedure: k2810 
o|contracted procedure: k2816 
o|contracted procedure: k2822 
o|contracted procedure: k2828 
o|contracted procedure: k2834 
o|contracted procedure: k2840 
o|contracted procedure: k2846 
o|contracted procedure: k2875 
o|contracted procedure: k2868 
o|contracted procedure: k2852 
o|contracted procedure: k2859 
o|contracted procedure: k2865 
o|contracted procedure: k3447 
o|contracted procedure: k3450 
o|contracted procedure: k3453 
o|contracted procedure: k3469 
o|contracted procedure: k3483 
o|contracted procedure: k20735468 
o|contracted procedure: k3490 
o|contracted procedure: k20735461 
o|contracted procedure: k3477 
o|contracted procedure: k3497 
o|contracted procedure: k3503 
o|contracted procedure: k3514 
o|contracted procedure: k20735480 
o|contracted procedure: k3535 
o|contracted procedure: k3528 
o|contracted procedure: k3541 
o|contracted procedure: k3547 
o|contracted procedure: k3560 
o|contracted procedure: k3563 
o|contracted procedure: k3570 
o|contracted procedure: k3576 
o|contracted procedure: k3579 
o|contracted procedure: k3582 
o|contracted procedure: k3598 
o|contracted procedure: k3605 
o|contracted procedure: k3612 
o|contracted procedure: k3622 
o|contracted procedure: k3628 
o|contracted procedure: k3634 
o|contracted procedure: k3637 
o|contracted procedure: k4136 
o|contracted procedure: k3640 
o|contracted procedure: k3654 
o|contracted procedure: k4109 
o|contracted procedure: k3660 
o|contracted procedure: k3780 
o|contracted procedure: k3680 
o|contracted procedure: k3689 
o|contracted procedure: k3701 
o|contracted procedure: k3708 
o|contracted procedure: k3695 
o|contracted procedure: k3716 
o|contracted procedure: k3719 
o|contracted procedure: k3740 
o|contracted procedure: k3725 
o|contracted procedure: k3736 
o|contracted procedure: k3771 
o|contracted procedure: k3746 
o|contracted procedure: k3752 
o|contracted procedure: k3763 
o|contracted procedure: k3784 
o|contracted procedure: k4105 
o|contracted procedure: k3790 
o|contracted procedure: k3798 
o|contracted procedure: k3832 
o|contracted procedure: k3807 
o|contracted procedure: k4101 
o|contracted procedure: k3838 
o|contracted procedure: k3846 
o|contracted procedure: k3852 
o|contracted procedure: k3859 
o|contracted procedure: k3867 
o|contracted procedure: k3915 
o|contracted procedure: k3874 
o|contracted procedure: k3880 
o|contracted procedure: k3883 
o|contracted procedure: k3889 
o|inlining procedure: k3871 
o|contracted procedure: k3900 
o|contracted procedure: k3908 
o|inlining procedure: k3871 
o|contracted procedure: k4028 
o|contracted procedure: k3928 
o|contracted procedure: k3937 
o|contracted procedure: k3949 
o|contracted procedure: k3956 
o|contracted procedure: k3943 
o|contracted procedure: k3964 
o|contracted procedure: k3967 
o|contracted procedure: k3988 
o|contracted procedure: k3973 
o|contracted procedure: k3984 
o|contracted procedure: k4019 
o|contracted procedure: k3994 
o|contracted procedure: k4000 
o|contracted procedure: k4011 
o|contracted procedure: k4097 
o|contracted procedure: k4034 
o|contracted procedure: k4087 
o|contracted procedure: k4042 
o|contracted procedure: k4051 
o|contracted procedure: k4057 
o|contracted procedure: k4084 
o|contracted procedure: k4073 
o|contracted procedure: k4118 
o|contracted procedure: k4128 
o|contracted procedure: k4132 
o|contracted procedure: k4144 
o|contracted procedure: k4156 
o|contracted procedure: k4166 
o|contracted procedure: k4170 
o|contracted procedure: k4217 
o|contracted procedure: k4255 
o|contracted procedure: k4267 
o|contracted procedure: k4277 
o|contracted procedure: k4281 
o|contracted procedure: k4252 
o|contracted procedure: k4305 
o|contracted procedure: k4308 
o|contracted procedure: k4318 
o|contracted procedure: k4324 
o|contracted procedure: k4337 
o|contracted procedure: k4344 
o|contracted procedure: k4348 
o|contracted procedure: k4354 
o|contracted procedure: k4357 
o|contracted procedure: k4492 
o|contracted procedure: k4360 
o|contracted procedure: k4368 
o|contracted procedure: k4371 
o|contracted procedure: k4380 
o|contracted procedure: k4384 
o|contracted procedure: k4430 
o|contracted procedure: k4387 
o|contracted procedure: k4390 
o|contracted procedure: k4402 
o|contracted procedure: k4405 
o|contracted procedure: k4408 
o|contracted procedure: k4416 
o|contracted procedure: k4424 
o|contracted procedure: k4440 
o|contracted procedure: k4448 
o|contracted procedure: k4451 
o|contracted procedure: k4463 
o|contracted procedure: k4466 
o|contracted procedure: k4469 
o|contracted procedure: k4477 
o|contracted procedure: k4485 
o|contracted procedure: k4499 
o|contracted procedure: k4532 
o|contracted procedure: k4545 
o|contracted procedure: k4553 
o|contracted procedure: k4557 
o|contracted procedure: k4563 
o|contracted procedure: k4566 
o|contracted procedure: k4569 
o|contracted procedure: k4582 
o|contracted procedure: k4586 
o|contracted procedure: k4598 
o|contracted procedure: k4605 
o|contracted procedure: k4608 
o|contracted procedure: k4620 
o|contracted procedure: k4623 
o|contracted procedure: k4626 
o|contracted procedure: k4634 
o|contracted procedure: k4642 
o|contracted procedure: k4651 
o|contracted procedure: k4654 
o|contracted procedure: k4796 
o|contracted procedure: k4657 
o|contracted procedure: k4665 
o|contracted procedure: k4668 
o|contracted procedure: k4679 
o|contracted procedure: k4686 
o|contracted procedure: k4692 
o|contracted procedure: k4696 
o|contracted procedure: k4742 
o|contracted procedure: k4699 
o|contracted procedure: k4702 
o|contracted procedure: k4714 
o|contracted procedure: k4717 
o|contracted procedure: k4720 
o|contracted procedure: k4728 
o|contracted procedure: k4736 
o|contracted procedure: k4752 
o|contracted procedure: k4755 
o|contracted procedure: k4767 
o|contracted procedure: k4770 
o|contracted procedure: k4773 
o|contracted procedure: k4781 
o|contracted procedure: k4789 
o|contracted procedure: k4803 
o|contracted procedure: k4806 
o|contracted procedure: k4818 
o|contracted procedure: k4821 
o|contracted procedure: k4824 
o|contracted procedure: k4832 
o|contracted procedure: k4840 
o|contracted procedure: k4891 
o|contracted procedure: k2123 
o|contracted procedure: k2135 
o|contracted procedure: k2158 
o|contracted procedure: k4905 
o|contracted procedure: k4909 
o|contracted procedure: k4900 
o|contracted procedure: k2140 
o|contracted procedure: k2166 
o|simplifications: ((let . 93)) 
o|removed binding forms: 276 
o|substituted constant variable: r31555690 
o|substituted constant variable: r31555690 
o|inlining procedure: k3319 
o|inlining procedure: k3319 
o|inlining procedure: k3863 
o|inlining procedure: k3863 
o|inlining procedure: k3863 
o|inlining procedure: k3863 
o|removed binding forms: 2 
o|removed conditional forms: 1 
o|substituted constant variable: r33205724 
o|simplifications: ((let . 1)) 
o|removed binding forms: 3 
o|removed conditional forms: 1 
o|removed binding forms: 1 
o|direct leaf routine/allocation: loop482 0 
o|direct leaf routine/allocation: merge549 0 
o|direct leaf routine/allocation: report550 35 
o|direct leaf routine/allocation: floatvar?557 0 
o|direct leaf routine/allocation: a3204 0 
o|direct leaf routine/allocation: loop649 0 
o|direct leaf routine/allocation: g283284 3 
o|converted assignments to bindings: (loop482) 
o|contracted procedure: "(lfa2.scm:294) k3023" 
o|contracted procedure: "(mini-srfi-1.scm:141) k2182" 
o|converted assignments to bindings: (loop649) 
o|contracted procedure: "(lfa2.scm:353) k3329" 
o|contracted procedure: "(lfa2.scm:377) k3554" 
o|simplifications: ((let . 2)) 
o|removed binding forms: 4 
o|direct leaf routine/allocation: a2175 0 
o|contracted procedure: "(mini-srfi-1.scm:131) k2099" 
o|removed binding forms: 1 
o|direct leaf routine/allocation: g255256 3 
o|customizable procedures: (foldr268271 map-loop11031120 map-loop10771094 g10361037 map-loop10441061 map-loop10031020 map-loop963980 g929930 map-loop936953 chicken.compiler.lfa2#posq for-each-loop855875 g830837 for-each-loop829847 g742749 for-each-loop741753 g815816 k4048 g788789 k3934 g779780 g764765 k3686 extinguish!554 k3591 k3524 add-unboxed561 k3473 assigned?551 k3480 k3359 walk563 eliminate-floatvar558 add-boxed560 count-floatvar559 k3220 g682683 foldr250253 g617624 for-each-loop616627 droppable?552 drop!553 sub-boxed562) 
o|calls to known targets: 110 
o|identified direct recursive calls: f_2686 1 
o|identified direct recursive calls: f_2086 1 
o|identified direct recursive calls: f_3146 2 
o|identified direct recursive calls: f_2130 1 
o|fast box initializations: 27 
o|fast global references: 6 
o|fast global assignments: 2 
o|dropping unused closure argument: f_2680 
o|dropping unused closure argument: f_2882 
*/
/* end of file */
