/* Generated from c-platform.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.3.0rc4 ((HEAD detached at 5.3.0rc4)) (rev b6cbb1ba)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: c-platform.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -no-lambda-info -no-trace -emit-import-library chicken.compiler.c-platform -output-file c-platform.c
   unit: c-platform
   uses: eval internal compiler support optimizer library
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_internal_toplevel)
C_externimport void C_ccall C_internal_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_compiler_toplevel)
C_externimport void C_ccall C_compiler_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_support_toplevel)
C_externimport void C_ccall C_support_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_optimizer_toplevel)
C_externimport void C_ccall C_optimizer_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[941];
static double C_possibly_force_alignment;


C_noret_decl(f_1671)
static void C_ccall f_1671(C_word c,C_word *av) C_noret;
C_noret_decl(f_1674)
static void C_ccall f_1674(C_word c,C_word *av) C_noret;
C_noret_decl(f_1677)
static void C_ccall f_1677(C_word c,C_word *av) C_noret;
C_noret_decl(f_1680)
static void C_ccall f_1680(C_word c,C_word *av) C_noret;
C_noret_decl(f_1683)
static void C_ccall f_1683(C_word c,C_word *av) C_noret;
C_noret_decl(f_1686)
static void C_ccall f_1686(C_word c,C_word *av) C_noret;
C_noret_decl(f_2121)
static void C_fcall f_2121(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2127)
static void C_fcall f_2127(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2141)
static void C_ccall f_2141(C_word c,C_word *av) C_noret;
C_noret_decl(f_2297)
static void C_fcall f_2297(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2306)
static void C_fcall f_2306(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2314)
static void C_fcall f_2314(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2321)
static void C_ccall f_2321(C_word c,C_word *av) C_noret;
C_noret_decl(f_2335)
static void C_ccall f_2335(C_word c,C_word *av) C_noret;
C_noret_decl(f_2463)
static C_word C_fcall f_2463(C_word t0);
C_noret_decl(f_2705)
static void C_fcall f_2705(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2719)
static void C_ccall f_2719(C_word c,C_word *av) C_noret;
C_noret_decl(f_2723)
static void C_ccall f_2723(C_word c,C_word *av) C_noret;
C_noret_decl(f_2967)
static void C_ccall f_2967(C_word c,C_word *av) C_noret;
C_noret_decl(f_2975)
static void C_ccall f_2975(C_word c,C_word *av) C_noret;
C_noret_decl(f_2978)
static void C_ccall f_2978(C_word c,C_word *av) C_noret;
C_noret_decl(f_2981)
static void C_ccall f_2981(C_word c,C_word *av) C_noret;
C_noret_decl(f_2996)
static void C_ccall f_2996(C_word c,C_word *av) C_noret;
C_noret_decl(f_3003)
static void C_ccall f_3003(C_word c,C_word *av) C_noret;
C_noret_decl(f_3012)
static void C_ccall f_3012(C_word c,C_word *av) C_noret;
C_noret_decl(f_3014)
static void C_fcall f_3014(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3016)
static void C_ccall f_3016(C_word c,C_word *av) C_noret;
C_noret_decl(f_3038)
static void C_ccall f_3038(C_word c,C_word *av) C_noret;
C_noret_decl(f_3071)
static void C_ccall f_3071(C_word c,C_word *av) C_noret;
C_noret_decl(f_3079)
static void C_ccall f_3079(C_word c,C_word *av) C_noret;
C_noret_decl(f_3082)
static void C_ccall f_3082(C_word c,C_word *av) C_noret;
C_noret_decl(f_3084)
static void C_ccall f_3084(C_word c,C_word *av) C_noret;
C_noret_decl(f_3100)
static void C_ccall f_3100(C_word c,C_word *av) C_noret;
C_noret_decl(f_3109)
static void C_fcall f_3109(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3112)
static void C_fcall f_3112(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3127)
static void C_ccall f_3127(C_word c,C_word *av) C_noret;
C_noret_decl(f_3139)
static void C_ccall f_3139(C_word c,C_word *av) C_noret;
C_noret_decl(f_3153)
static void C_ccall f_3153(C_word c,C_word *av) C_noret;
C_noret_decl(f_3157)
static void C_ccall f_3157(C_word c,C_word *av) C_noret;
C_noret_decl(f_3166)
static void C_ccall f_3166(C_word c,C_word *av) C_noret;
C_noret_decl(f_3180)
static void C_ccall f_3180(C_word c,C_word *av) C_noret;
C_noret_decl(f_3184)
static void C_ccall f_3184(C_word c,C_word *av) C_noret;
C_noret_decl(f_3214)
static void C_ccall f_3214(C_word c,C_word *av) C_noret;
C_noret_decl(f_3218)
static void C_ccall f_3218(C_word c,C_word *av) C_noret;
C_noret_decl(f_3222)
static void C_ccall f_3222(C_word c,C_word *av) C_noret;
C_noret_decl(f_3226)
static void C_ccall f_3226(C_word c,C_word *av) C_noret;
C_noret_decl(f_3230)
static void C_ccall f_3230(C_word c,C_word *av) C_noret;
C_noret_decl(f_3238)
static void C_ccall f_3238(C_word c,C_word *av) C_noret;
C_noret_decl(f_3241)
static void C_ccall f_3241(C_word c,C_word *av) C_noret;
C_noret_decl(f_3244)
static void C_ccall f_3244(C_word c,C_word *av) C_noret;
C_noret_decl(f_3246)
static void C_ccall f_3246(C_word c,C_word *av) C_noret;
C_noret_decl(f_3274)
static void C_ccall f_3274(C_word c,C_word *av) C_noret;
C_noret_decl(f_3282)
static void C_ccall f_3282(C_word c,C_word *av) C_noret;
C_noret_decl(f_3299)
static void C_ccall f_3299(C_word c,C_word *av) C_noret;
C_noret_decl(f_3301)
static void C_fcall f_3301(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3326)
static void C_ccall f_3326(C_word c,C_word *av) C_noret;
C_noret_decl(f_3337)
static void C_ccall f_3337(C_word c,C_word *av) C_noret;
C_noret_decl(f_3341)
static void C_ccall f_3341(C_word c,C_word *av) C_noret;
C_noret_decl(f_3344)
static void C_ccall f_3344(C_word c,C_word *av) C_noret;
C_noret_decl(f_3358)
static void C_ccall f_3358(C_word c,C_word *av) C_noret;
C_noret_decl(f_3362)
static void C_ccall f_3362(C_word c,C_word *av) C_noret;
C_noret_decl(f_3385)
static void C_ccall f_3385(C_word c,C_word *av) C_noret;
C_noret_decl(f_3400)
static void C_ccall f_3400(C_word c,C_word *av) C_noret;
C_noret_decl(f_3408)
static void C_ccall f_3408(C_word c,C_word *av) C_noret;
C_noret_decl(f_3417)
static void C_ccall f_3417(C_word c,C_word *av) C_noret;
C_noret_decl(f_3421)
static void C_ccall f_3421(C_word c,C_word *av) C_noret;
C_noret_decl(f_3424)
static void C_ccall f_3424(C_word c,C_word *av) C_noret;
C_noret_decl(f_3427)
static void C_ccall f_3427(C_word c,C_word *av) C_noret;
C_noret_decl(f_3429)
static void C_fcall f_3429(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3435)
static void C_ccall f_3435(C_word c,C_word *av) C_noret;
C_noret_decl(f_3447)
static void C_ccall f_3447(C_word c,C_word *av) C_noret;
C_noret_decl(f_3466)
static void C_ccall f_3466(C_word c,C_word *av) C_noret;
C_noret_decl(f_3497)
static void C_ccall f_3497(C_word c,C_word *av) C_noret;
C_noret_decl(f_3500)
static void C_ccall f_3500(C_word c,C_word *av) C_noret;
C_noret_decl(f_3503)
static void C_ccall f_3503(C_word c,C_word *av) C_noret;
C_noret_decl(f_3506)
static void C_ccall f_3506(C_word c,C_word *av) C_noret;
C_noret_decl(f_3509)
static void C_ccall f_3509(C_word c,C_word *av) C_noret;
C_noret_decl(f_3512)
static void C_ccall f_3512(C_word c,C_word *av) C_noret;
C_noret_decl(f_3513)
static void C_ccall f_3513(C_word c,C_word *av) C_noret;
C_noret_decl(f_3539)
static void C_ccall f_3539(C_word c,C_word *av) C_noret;
C_noret_decl(f_3542)
static void C_ccall f_3542(C_word c,C_word *av) C_noret;
C_noret_decl(f_3544)
static void C_ccall f_3544(C_word c,C_word *av) C_noret;
C_noret_decl(f_3578)
static void C_ccall f_3578(C_word c,C_word *av) C_noret;
C_noret_decl(f_3605)
static void C_ccall f_3605(C_word c,C_word *av) C_noret;
C_noret_decl(f_3608)
static void C_ccall f_3608(C_word c,C_word *av) C_noret;
C_noret_decl(f_3611)
static void C_ccall f_3611(C_word c,C_word *av) C_noret;
C_noret_decl(f_3626)
static void C_ccall f_3626(C_word c,C_word *av) C_noret;
C_noret_decl(f_3630)
static void C_ccall f_3630(C_word c,C_word *av) C_noret;
C_noret_decl(f_3642)
static void C_ccall f_3642(C_word c,C_word *av) C_noret;
C_noret_decl(f_3654)
static void C_ccall f_3654(C_word c,C_word *av) C_noret;
C_noret_decl(f_3666)
static void C_ccall f_3666(C_word c,C_word *av) C_noret;
C_noret_decl(f_3670)
static void C_ccall f_3670(C_word c,C_word *av) C_noret;
C_noret_decl(f_3678)
static void C_ccall f_3678(C_word c,C_word *av) C_noret;
C_noret_decl(f_3685)
static void C_ccall f_3685(C_word c,C_word *av) C_noret;
C_noret_decl(f_3689)
static void C_ccall f_3689(C_word c,C_word *av) C_noret;
C_noret_decl(f_3693)
static void C_ccall f_3693(C_word c,C_word *av) C_noret;
C_noret_decl(f_3697)
static void C_ccall f_3697(C_word c,C_word *av) C_noret;
C_noret_decl(f_3701)
static void C_ccall f_3701(C_word c,C_word *av) C_noret;
C_noret_decl(f_3709)
static void C_ccall f_3709(C_word c,C_word *av) C_noret;
C_noret_decl(f_3712)
static void C_ccall f_3712(C_word c,C_word *av) C_noret;
C_noret_decl(f_3715)
static void C_ccall f_3715(C_word c,C_word *av) C_noret;
C_noret_decl(f_3718)
static void C_ccall f_3718(C_word c,C_word *av) C_noret;
C_noret_decl(f_3721)
static void C_ccall f_3721(C_word c,C_word *av) C_noret;
C_noret_decl(f_3724)
static void C_ccall f_3724(C_word c,C_word *av) C_noret;
C_noret_decl(f_3727)
static void C_ccall f_3727(C_word c,C_word *av) C_noret;
C_noret_decl(f_3730)
static void C_ccall f_3730(C_word c,C_word *av) C_noret;
C_noret_decl(f_3733)
static void C_ccall f_3733(C_word c,C_word *av) C_noret;
C_noret_decl(f_3736)
static void C_ccall f_3736(C_word c,C_word *av) C_noret;
C_noret_decl(f_3739)
static void C_ccall f_3739(C_word c,C_word *av) C_noret;
C_noret_decl(f_3742)
static void C_ccall f_3742(C_word c,C_word *av) C_noret;
C_noret_decl(f_3745)
static void C_ccall f_3745(C_word c,C_word *av) C_noret;
C_noret_decl(f_3748)
static void C_ccall f_3748(C_word c,C_word *av) C_noret;
C_noret_decl(f_3751)
static void C_ccall f_3751(C_word c,C_word *av) C_noret;
C_noret_decl(f_3754)
static void C_ccall f_3754(C_word c,C_word *av) C_noret;
C_noret_decl(f_3757)
static void C_ccall f_3757(C_word c,C_word *av) C_noret;
C_noret_decl(f_3760)
static void C_ccall f_3760(C_word c,C_word *av) C_noret;
C_noret_decl(f_3763)
static void C_ccall f_3763(C_word c,C_word *av) C_noret;
C_noret_decl(f_3766)
static void C_ccall f_3766(C_word c,C_word *av) C_noret;
C_noret_decl(f_3769)
static void C_ccall f_3769(C_word c,C_word *av) C_noret;
C_noret_decl(f_3772)
static void C_ccall f_3772(C_word c,C_word *av) C_noret;
C_noret_decl(f_3775)
static void C_ccall f_3775(C_word c,C_word *av) C_noret;
C_noret_decl(f_3778)
static void C_ccall f_3778(C_word c,C_word *av) C_noret;
C_noret_decl(f_3781)
static void C_ccall f_3781(C_word c,C_word *av) C_noret;
C_noret_decl(f_3784)
static void C_ccall f_3784(C_word c,C_word *av) C_noret;
C_noret_decl(f_3787)
static void C_ccall f_3787(C_word c,C_word *av) C_noret;
C_noret_decl(f_3790)
static void C_ccall f_3790(C_word c,C_word *av) C_noret;
C_noret_decl(f_3793)
static void C_ccall f_3793(C_word c,C_word *av) C_noret;
C_noret_decl(f_3796)
static void C_ccall f_3796(C_word c,C_word *av) C_noret;
C_noret_decl(f_3799)
static void C_ccall f_3799(C_word c,C_word *av) C_noret;
C_noret_decl(f_3802)
static void C_ccall f_3802(C_word c,C_word *av) C_noret;
C_noret_decl(f_3805)
static void C_ccall f_3805(C_word c,C_word *av) C_noret;
C_noret_decl(f_3808)
static void C_ccall f_3808(C_word c,C_word *av) C_noret;
C_noret_decl(f_3811)
static void C_ccall f_3811(C_word c,C_word *av) C_noret;
C_noret_decl(f_3814)
static void C_ccall f_3814(C_word c,C_word *av) C_noret;
C_noret_decl(f_3817)
static void C_ccall f_3817(C_word c,C_word *av) C_noret;
C_noret_decl(f_3820)
static void C_ccall f_3820(C_word c,C_word *av) C_noret;
C_noret_decl(f_3823)
static void C_ccall f_3823(C_word c,C_word *av) C_noret;
C_noret_decl(f_3826)
static void C_ccall f_3826(C_word c,C_word *av) C_noret;
C_noret_decl(f_3829)
static void C_ccall f_3829(C_word c,C_word *av) C_noret;
C_noret_decl(f_3832)
static void C_ccall f_3832(C_word c,C_word *av) C_noret;
C_noret_decl(f_3835)
static void C_ccall f_3835(C_word c,C_word *av) C_noret;
C_noret_decl(f_3838)
static void C_ccall f_3838(C_word c,C_word *av) C_noret;
C_noret_decl(f_3841)
static void C_ccall f_3841(C_word c,C_word *av) C_noret;
C_noret_decl(f_3844)
static void C_ccall f_3844(C_word c,C_word *av) C_noret;
C_noret_decl(f_3847)
static void C_ccall f_3847(C_word c,C_word *av) C_noret;
C_noret_decl(f_3850)
static void C_ccall f_3850(C_word c,C_word *av) C_noret;
C_noret_decl(f_3853)
static void C_ccall f_3853(C_word c,C_word *av) C_noret;
C_noret_decl(f_3856)
static void C_ccall f_3856(C_word c,C_word *av) C_noret;
C_noret_decl(f_3859)
static void C_ccall f_3859(C_word c,C_word *av) C_noret;
C_noret_decl(f_3862)
static void C_ccall f_3862(C_word c,C_word *av) C_noret;
C_noret_decl(f_3865)
static void C_ccall f_3865(C_word c,C_word *av) C_noret;
C_noret_decl(f_3868)
static void C_ccall f_3868(C_word c,C_word *av) C_noret;
C_noret_decl(f_3871)
static void C_ccall f_3871(C_word c,C_word *av) C_noret;
C_noret_decl(f_3874)
static void C_ccall f_3874(C_word c,C_word *av) C_noret;
C_noret_decl(f_3877)
static void C_ccall f_3877(C_word c,C_word *av) C_noret;
C_noret_decl(f_3880)
static void C_ccall f_3880(C_word c,C_word *av) C_noret;
C_noret_decl(f_3883)
static void C_ccall f_3883(C_word c,C_word *av) C_noret;
C_noret_decl(f_3886)
static void C_ccall f_3886(C_word c,C_word *av) C_noret;
C_noret_decl(f_3889)
static void C_ccall f_3889(C_word c,C_word *av) C_noret;
C_noret_decl(f_3892)
static void C_ccall f_3892(C_word c,C_word *av) C_noret;
C_noret_decl(f_3895)
static void C_ccall f_3895(C_word c,C_word *av) C_noret;
C_noret_decl(f_3898)
static void C_ccall f_3898(C_word c,C_word *av) C_noret;
C_noret_decl(f_3901)
static void C_ccall f_3901(C_word c,C_word *av) C_noret;
C_noret_decl(f_3904)
static void C_ccall f_3904(C_word c,C_word *av) C_noret;
C_noret_decl(f_3907)
static void C_ccall f_3907(C_word c,C_word *av) C_noret;
C_noret_decl(f_3910)
static void C_ccall f_3910(C_word c,C_word *av) C_noret;
C_noret_decl(f_3913)
static void C_ccall f_3913(C_word c,C_word *av) C_noret;
C_noret_decl(f_3916)
static void C_ccall f_3916(C_word c,C_word *av) C_noret;
C_noret_decl(f_3919)
static void C_ccall f_3919(C_word c,C_word *av) C_noret;
C_noret_decl(f_3922)
static void C_ccall f_3922(C_word c,C_word *av) C_noret;
C_noret_decl(f_3925)
static void C_ccall f_3925(C_word c,C_word *av) C_noret;
C_noret_decl(f_3928)
static void C_ccall f_3928(C_word c,C_word *av) C_noret;
C_noret_decl(f_3931)
static void C_ccall f_3931(C_word c,C_word *av) C_noret;
C_noret_decl(f_3934)
static void C_ccall f_3934(C_word c,C_word *av) C_noret;
C_noret_decl(f_3937)
static void C_ccall f_3937(C_word c,C_word *av) C_noret;
C_noret_decl(f_3940)
static void C_ccall f_3940(C_word c,C_word *av) C_noret;
C_noret_decl(f_3943)
static void C_ccall f_3943(C_word c,C_word *av) C_noret;
C_noret_decl(f_3946)
static void C_ccall f_3946(C_word c,C_word *av) C_noret;
C_noret_decl(f_3949)
static void C_ccall f_3949(C_word c,C_word *av) C_noret;
C_noret_decl(f_3952)
static void C_ccall f_3952(C_word c,C_word *av) C_noret;
C_noret_decl(f_3955)
static void C_ccall f_3955(C_word c,C_word *av) C_noret;
C_noret_decl(f_3958)
static void C_ccall f_3958(C_word c,C_word *av) C_noret;
C_noret_decl(f_3961)
static void C_ccall f_3961(C_word c,C_word *av) C_noret;
C_noret_decl(f_3964)
static void C_ccall f_3964(C_word c,C_word *av) C_noret;
C_noret_decl(f_3967)
static void C_ccall f_3967(C_word c,C_word *av) C_noret;
C_noret_decl(f_3970)
static void C_ccall f_3970(C_word c,C_word *av) C_noret;
C_noret_decl(f_3973)
static void C_ccall f_3973(C_word c,C_word *av) C_noret;
C_noret_decl(f_3976)
static void C_ccall f_3976(C_word c,C_word *av) C_noret;
C_noret_decl(f_3979)
static void C_ccall f_3979(C_word c,C_word *av) C_noret;
C_noret_decl(f_3982)
static void C_ccall f_3982(C_word c,C_word *av) C_noret;
C_noret_decl(f_3985)
static void C_ccall f_3985(C_word c,C_word *av) C_noret;
C_noret_decl(f_3988)
static void C_ccall f_3988(C_word c,C_word *av) C_noret;
C_noret_decl(f_3991)
static void C_ccall f_3991(C_word c,C_word *av) C_noret;
C_noret_decl(f_3994)
static void C_ccall f_3994(C_word c,C_word *av) C_noret;
C_noret_decl(f_3997)
static void C_ccall f_3997(C_word c,C_word *av) C_noret;
C_noret_decl(f_4000)
static void C_ccall f_4000(C_word c,C_word *av) C_noret;
C_noret_decl(f_4003)
static void C_ccall f_4003(C_word c,C_word *av) C_noret;
C_noret_decl(f_4006)
static void C_ccall f_4006(C_word c,C_word *av) C_noret;
C_noret_decl(f_4009)
static void C_ccall f_4009(C_word c,C_word *av) C_noret;
C_noret_decl(f_4012)
static void C_ccall f_4012(C_word c,C_word *av) C_noret;
C_noret_decl(f_4015)
static void C_ccall f_4015(C_word c,C_word *av) C_noret;
C_noret_decl(f_4018)
static void C_ccall f_4018(C_word c,C_word *av) C_noret;
C_noret_decl(f_4021)
static void C_ccall f_4021(C_word c,C_word *av) C_noret;
C_noret_decl(f_4024)
static void C_ccall f_4024(C_word c,C_word *av) C_noret;
C_noret_decl(f_4027)
static void C_ccall f_4027(C_word c,C_word *av) C_noret;
C_noret_decl(f_4030)
static void C_ccall f_4030(C_word c,C_word *av) C_noret;
C_noret_decl(f_4033)
static void C_ccall f_4033(C_word c,C_word *av) C_noret;
C_noret_decl(f_4036)
static void C_ccall f_4036(C_word c,C_word *av) C_noret;
C_noret_decl(f_4039)
static void C_ccall f_4039(C_word c,C_word *av) C_noret;
C_noret_decl(f_4042)
static void C_ccall f_4042(C_word c,C_word *av) C_noret;
C_noret_decl(f_4045)
static void C_ccall f_4045(C_word c,C_word *av) C_noret;
C_noret_decl(f_4048)
static void C_ccall f_4048(C_word c,C_word *av) C_noret;
C_noret_decl(f_4051)
static void C_ccall f_4051(C_word c,C_word *av) C_noret;
C_noret_decl(f_4054)
static void C_ccall f_4054(C_word c,C_word *av) C_noret;
C_noret_decl(f_4057)
static void C_ccall f_4057(C_word c,C_word *av) C_noret;
C_noret_decl(f_4060)
static void C_ccall f_4060(C_word c,C_word *av) C_noret;
C_noret_decl(f_4063)
static void C_ccall f_4063(C_word c,C_word *av) C_noret;
C_noret_decl(f_4066)
static void C_ccall f_4066(C_word c,C_word *av) C_noret;
C_noret_decl(f_4069)
static void C_ccall f_4069(C_word c,C_word *av) C_noret;
C_noret_decl(f_4072)
static void C_ccall f_4072(C_word c,C_word *av) C_noret;
C_noret_decl(f_4075)
static void C_ccall f_4075(C_word c,C_word *av) C_noret;
C_noret_decl(f_4078)
static void C_ccall f_4078(C_word c,C_word *av) C_noret;
C_noret_decl(f_4081)
static void C_ccall f_4081(C_word c,C_word *av) C_noret;
C_noret_decl(f_4084)
static void C_ccall f_4084(C_word c,C_word *av) C_noret;
C_noret_decl(f_4087)
static void C_ccall f_4087(C_word c,C_word *av) C_noret;
C_noret_decl(f_4090)
static void C_ccall f_4090(C_word c,C_word *av) C_noret;
C_noret_decl(f_4093)
static void C_ccall f_4093(C_word c,C_word *av) C_noret;
C_noret_decl(f_4096)
static void C_ccall f_4096(C_word c,C_word *av) C_noret;
C_noret_decl(f_4099)
static void C_ccall f_4099(C_word c,C_word *av) C_noret;
C_noret_decl(f_4102)
static void C_ccall f_4102(C_word c,C_word *av) C_noret;
C_noret_decl(f_4105)
static void C_ccall f_4105(C_word c,C_word *av) C_noret;
C_noret_decl(f_4108)
static void C_ccall f_4108(C_word c,C_word *av) C_noret;
C_noret_decl(f_4111)
static void C_ccall f_4111(C_word c,C_word *av) C_noret;
C_noret_decl(f_4114)
static void C_ccall f_4114(C_word c,C_word *av) C_noret;
C_noret_decl(f_4117)
static void C_ccall f_4117(C_word c,C_word *av) C_noret;
C_noret_decl(f_4120)
static void C_ccall f_4120(C_word c,C_word *av) C_noret;
C_noret_decl(f_4123)
static void C_ccall f_4123(C_word c,C_word *av) C_noret;
C_noret_decl(f_4126)
static void C_ccall f_4126(C_word c,C_word *av) C_noret;
C_noret_decl(f_4129)
static void C_ccall f_4129(C_word c,C_word *av) C_noret;
C_noret_decl(f_4132)
static void C_ccall f_4132(C_word c,C_word *av) C_noret;
C_noret_decl(f_4135)
static void C_ccall f_4135(C_word c,C_word *av) C_noret;
C_noret_decl(f_4138)
static void C_ccall f_4138(C_word c,C_word *av) C_noret;
C_noret_decl(f_4141)
static void C_ccall f_4141(C_word c,C_word *av) C_noret;
C_noret_decl(f_4144)
static void C_ccall f_4144(C_word c,C_word *av) C_noret;
C_noret_decl(f_4147)
static void C_ccall f_4147(C_word c,C_word *av) C_noret;
C_noret_decl(f_4150)
static void C_ccall f_4150(C_word c,C_word *av) C_noret;
C_noret_decl(f_4153)
static void C_ccall f_4153(C_word c,C_word *av) C_noret;
C_noret_decl(f_4156)
static void C_ccall f_4156(C_word c,C_word *av) C_noret;
C_noret_decl(f_4159)
static void C_ccall f_4159(C_word c,C_word *av) C_noret;
C_noret_decl(f_4162)
static void C_ccall f_4162(C_word c,C_word *av) C_noret;
C_noret_decl(f_4165)
static void C_ccall f_4165(C_word c,C_word *av) C_noret;
C_noret_decl(f_4168)
static void C_ccall f_4168(C_word c,C_word *av) C_noret;
C_noret_decl(f_4171)
static void C_ccall f_4171(C_word c,C_word *av) C_noret;
C_noret_decl(f_4174)
static void C_ccall f_4174(C_word c,C_word *av) C_noret;
C_noret_decl(f_4177)
static void C_ccall f_4177(C_word c,C_word *av) C_noret;
C_noret_decl(f_4180)
static void C_ccall f_4180(C_word c,C_word *av) C_noret;
C_noret_decl(f_4183)
static void C_ccall f_4183(C_word c,C_word *av) C_noret;
C_noret_decl(f_4186)
static void C_ccall f_4186(C_word c,C_word *av) C_noret;
C_noret_decl(f_4189)
static void C_ccall f_4189(C_word c,C_word *av) C_noret;
C_noret_decl(f_4192)
static void C_ccall f_4192(C_word c,C_word *av) C_noret;
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
C_noret_decl(f_4210)
static void C_ccall f_4210(C_word c,C_word *av) C_noret;
C_noret_decl(f_4213)
static void C_ccall f_4213(C_word c,C_word *av) C_noret;
C_noret_decl(f_4216)
static void C_ccall f_4216(C_word c,C_word *av) C_noret;
C_noret_decl(f_4219)
static void C_ccall f_4219(C_word c,C_word *av) C_noret;
C_noret_decl(f_4222)
static void C_ccall f_4222(C_word c,C_word *av) C_noret;
C_noret_decl(f_4225)
static void C_ccall f_4225(C_word c,C_word *av) C_noret;
C_noret_decl(f_4228)
static void C_ccall f_4228(C_word c,C_word *av) C_noret;
C_noret_decl(f_4231)
static void C_ccall f_4231(C_word c,C_word *av) C_noret;
C_noret_decl(f_4234)
static void C_ccall f_4234(C_word c,C_word *av) C_noret;
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
C_noret_decl(f_4258)
static void C_ccall f_4258(C_word c,C_word *av) C_noret;
C_noret_decl(f_4261)
static void C_ccall f_4261(C_word c,C_word *av) C_noret;
C_noret_decl(f_4264)
static void C_ccall f_4264(C_word c,C_word *av) C_noret;
C_noret_decl(f_4267)
static void C_ccall f_4267(C_word c,C_word *av) C_noret;
C_noret_decl(f_4270)
static void C_ccall f_4270(C_word c,C_word *av) C_noret;
C_noret_decl(f_4273)
static void C_ccall f_4273(C_word c,C_word *av) C_noret;
C_noret_decl(f_4276)
static void C_ccall f_4276(C_word c,C_word *av) C_noret;
C_noret_decl(f_4279)
static void C_ccall f_4279(C_word c,C_word *av) C_noret;
C_noret_decl(f_4282)
static void C_ccall f_4282(C_word c,C_word *av) C_noret;
C_noret_decl(f_4285)
static void C_ccall f_4285(C_word c,C_word *av) C_noret;
C_noret_decl(f_4288)
static void C_ccall f_4288(C_word c,C_word *av) C_noret;
C_noret_decl(f_4291)
static void C_ccall f_4291(C_word c,C_word *av) C_noret;
C_noret_decl(f_4294)
static void C_ccall f_4294(C_word c,C_word *av) C_noret;
C_noret_decl(f_4297)
static void C_ccall f_4297(C_word c,C_word *av) C_noret;
C_noret_decl(f_4300)
static void C_ccall f_4300(C_word c,C_word *av) C_noret;
C_noret_decl(f_4303)
static void C_ccall f_4303(C_word c,C_word *av) C_noret;
C_noret_decl(f_4306)
static void C_ccall f_4306(C_word c,C_word *av) C_noret;
C_noret_decl(f_4309)
static void C_ccall f_4309(C_word c,C_word *av) C_noret;
C_noret_decl(f_4312)
static void C_ccall f_4312(C_word c,C_word *av) C_noret;
C_noret_decl(f_4315)
static void C_ccall f_4315(C_word c,C_word *av) C_noret;
C_noret_decl(f_4318)
static void C_ccall f_4318(C_word c,C_word *av) C_noret;
C_noret_decl(f_4321)
static void C_ccall f_4321(C_word c,C_word *av) C_noret;
C_noret_decl(f_4324)
static void C_ccall f_4324(C_word c,C_word *av) C_noret;
C_noret_decl(f_4327)
static void C_ccall f_4327(C_word c,C_word *av) C_noret;
C_noret_decl(f_4330)
static void C_ccall f_4330(C_word c,C_word *av) C_noret;
C_noret_decl(f_4333)
static void C_ccall f_4333(C_word c,C_word *av) C_noret;
C_noret_decl(f_4336)
static void C_ccall f_4336(C_word c,C_word *av) C_noret;
C_noret_decl(f_4339)
static void C_ccall f_4339(C_word c,C_word *av) C_noret;
C_noret_decl(f_4342)
static void C_ccall f_4342(C_word c,C_word *av) C_noret;
C_noret_decl(f_4345)
static void C_ccall f_4345(C_word c,C_word *av) C_noret;
C_noret_decl(f_4348)
static void C_ccall f_4348(C_word c,C_word *av) C_noret;
C_noret_decl(f_4351)
static void C_ccall f_4351(C_word c,C_word *av) C_noret;
C_noret_decl(f_4354)
static void C_ccall f_4354(C_word c,C_word *av) C_noret;
C_noret_decl(f_4357)
static void C_ccall f_4357(C_word c,C_word *av) C_noret;
C_noret_decl(f_4360)
static void C_ccall f_4360(C_word c,C_word *av) C_noret;
C_noret_decl(f_4363)
static void C_ccall f_4363(C_word c,C_word *av) C_noret;
C_noret_decl(f_4366)
static void C_ccall f_4366(C_word c,C_word *av) C_noret;
C_noret_decl(f_4369)
static void C_ccall f_4369(C_word c,C_word *av) C_noret;
C_noret_decl(f_4372)
static void C_ccall f_4372(C_word c,C_word *av) C_noret;
C_noret_decl(f_4375)
static void C_ccall f_4375(C_word c,C_word *av) C_noret;
C_noret_decl(f_4378)
static void C_ccall f_4378(C_word c,C_word *av) C_noret;
C_noret_decl(f_4381)
static void C_ccall f_4381(C_word c,C_word *av) C_noret;
C_noret_decl(f_4384)
static void C_ccall f_4384(C_word c,C_word *av) C_noret;
C_noret_decl(f_4387)
static void C_ccall f_4387(C_word c,C_word *av) C_noret;
C_noret_decl(f_4390)
static void C_ccall f_4390(C_word c,C_word *av) C_noret;
C_noret_decl(f_4393)
static void C_ccall f_4393(C_word c,C_word *av) C_noret;
C_noret_decl(f_4396)
static void C_ccall f_4396(C_word c,C_word *av) C_noret;
C_noret_decl(f_4399)
static void C_ccall f_4399(C_word c,C_word *av) C_noret;
C_noret_decl(f_4402)
static void C_ccall f_4402(C_word c,C_word *av) C_noret;
C_noret_decl(f_4405)
static void C_ccall f_4405(C_word c,C_word *av) C_noret;
C_noret_decl(f_4408)
static void C_ccall f_4408(C_word c,C_word *av) C_noret;
C_noret_decl(f_4411)
static void C_ccall f_4411(C_word c,C_word *av) C_noret;
C_noret_decl(f_4414)
static void C_ccall f_4414(C_word c,C_word *av) C_noret;
C_noret_decl(f_4417)
static void C_ccall f_4417(C_word c,C_word *av) C_noret;
C_noret_decl(f_4420)
static void C_ccall f_4420(C_word c,C_word *av) C_noret;
C_noret_decl(f_4423)
static void C_ccall f_4423(C_word c,C_word *av) C_noret;
C_noret_decl(f_4426)
static void C_ccall f_4426(C_word c,C_word *av) C_noret;
C_noret_decl(f_4429)
static void C_ccall f_4429(C_word c,C_word *av) C_noret;
C_noret_decl(f_4432)
static void C_ccall f_4432(C_word c,C_word *av) C_noret;
C_noret_decl(f_4435)
static void C_ccall f_4435(C_word c,C_word *av) C_noret;
C_noret_decl(f_4438)
static void C_ccall f_4438(C_word c,C_word *av) C_noret;
C_noret_decl(f_4441)
static void C_ccall f_4441(C_word c,C_word *av) C_noret;
C_noret_decl(f_4443)
static void C_ccall f_4443(C_word c,C_word *av) C_noret;
C_noret_decl(f_4480)
static void C_ccall f_4480(C_word c,C_word *av) C_noret;
C_noret_decl(f_4482)
static void C_ccall f_4482(C_word c,C_word *av) C_noret;
C_noret_decl(f_4489)
static void C_fcall f_4489(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4500)
static void C_ccall f_4500(C_word c,C_word *av) C_noret;
C_noret_decl(f_4521)
static void C_ccall f_4521(C_word c,C_word *av) C_noret;
C_noret_decl(f_4525)
static void C_ccall f_4525(C_word c,C_word *av) C_noret;
C_noret_decl(f_4538)
static void C_ccall f_4538(C_word c,C_word *av) C_noret;
C_noret_decl(f_4540)
static void C_ccall f_4540(C_word c,C_word *av) C_noret;
C_noret_decl(f_4562)
static void C_ccall f_4562(C_word c,C_word *av) C_noret;
C_noret_decl(f_4566)
static void C_ccall f_4566(C_word c,C_word *av) C_noret;
C_noret_decl(f_4576)
static void C_ccall f_4576(C_word c,C_word *av) C_noret;
C_noret_decl(f_4579)
static void C_ccall f_4579(C_word c,C_word *av) C_noret;
C_noret_decl(f_4582)
static void C_ccall f_4582(C_word c,C_word *av) C_noret;
C_noret_decl(f_4585)
static void C_ccall f_4585(C_word c,C_word *av) C_noret;
C_noret_decl(f_4588)
static void C_ccall f_4588(C_word c,C_word *av) C_noret;
C_noret_decl(f_4591)
static void C_ccall f_4591(C_word c,C_word *av) C_noret;
C_noret_decl(f_4594)
static void C_ccall f_4594(C_word c,C_word *av) C_noret;
C_noret_decl(f_4597)
static void C_ccall f_4597(C_word c,C_word *av) C_noret;
C_noret_decl(f_4600)
static void C_ccall f_4600(C_word c,C_word *av) C_noret;
C_noret_decl(f_4603)
static void C_ccall f_4603(C_word c,C_word *av) C_noret;
C_noret_decl(f_4606)
static void C_ccall f_4606(C_word c,C_word *av) C_noret;
C_noret_decl(f_4609)
static void C_ccall f_4609(C_word c,C_word *av) C_noret;
C_noret_decl(f_4612)
static void C_ccall f_4612(C_word c,C_word *av) C_noret;
C_noret_decl(f_4615)
static void C_ccall f_4615(C_word c,C_word *av) C_noret;
C_noret_decl(f_4618)
static void C_ccall f_4618(C_word c,C_word *av) C_noret;
C_noret_decl(f_4621)
static void C_ccall f_4621(C_word c,C_word *av) C_noret;
C_noret_decl(f_4624)
static void C_ccall f_4624(C_word c,C_word *av) C_noret;
C_noret_decl(f_4627)
static void C_ccall f_4627(C_word c,C_word *av) C_noret;
C_noret_decl(f_4630)
static void C_ccall f_4630(C_word c,C_word *av) C_noret;
C_noret_decl(f_4633)
static void C_ccall f_4633(C_word c,C_word *av) C_noret;
C_noret_decl(f_4636)
static void C_ccall f_4636(C_word c,C_word *av) C_noret;
C_noret_decl(f_4639)
static void C_ccall f_4639(C_word c,C_word *av) C_noret;
C_noret_decl(f_4642)
static void C_ccall f_4642(C_word c,C_word *av) C_noret;
C_noret_decl(f_4645)
static void C_ccall f_4645(C_word c,C_word *av) C_noret;
C_noret_decl(f_4648)
static void C_ccall f_4648(C_word c,C_word *av) C_noret;
C_noret_decl(f_4651)
static void C_ccall f_4651(C_word c,C_word *av) C_noret;
C_noret_decl(f_4654)
static void C_ccall f_4654(C_word c,C_word *av) C_noret;
C_noret_decl(f_4657)
static void C_ccall f_4657(C_word c,C_word *av) C_noret;
C_noret_decl(f_4660)
static void C_ccall f_4660(C_word c,C_word *av) C_noret;
C_noret_decl(f_4663)
static void C_ccall f_4663(C_word c,C_word *av) C_noret;
C_noret_decl(f_4666)
static void C_ccall f_4666(C_word c,C_word *av) C_noret;
C_noret_decl(f_4669)
static void C_ccall f_4669(C_word c,C_word *av) C_noret;
C_noret_decl(f_4672)
static void C_ccall f_4672(C_word c,C_word *av) C_noret;
C_noret_decl(f_4675)
static void C_ccall f_4675(C_word c,C_word *av) C_noret;
C_noret_decl(f_4678)
static void C_ccall f_4678(C_word c,C_word *av) C_noret;
C_noret_decl(f_4681)
static void C_ccall f_4681(C_word c,C_word *av) C_noret;
C_noret_decl(f_4684)
static void C_ccall f_4684(C_word c,C_word *av) C_noret;
C_noret_decl(f_4687)
static void C_ccall f_4687(C_word c,C_word *av) C_noret;
C_noret_decl(f_4690)
static void C_ccall f_4690(C_word c,C_word *av) C_noret;
C_noret_decl(f_4693)
static void C_ccall f_4693(C_word c,C_word *av) C_noret;
C_noret_decl(f_4696)
static void C_ccall f_4696(C_word c,C_word *av) C_noret;
C_noret_decl(f_4699)
static void C_ccall f_4699(C_word c,C_word *av) C_noret;
C_noret_decl(f_4702)
static void C_ccall f_4702(C_word c,C_word *av) C_noret;
C_noret_decl(f_4705)
static void C_ccall f_4705(C_word c,C_word *av) C_noret;
C_noret_decl(f_4708)
static void C_ccall f_4708(C_word c,C_word *av) C_noret;
C_noret_decl(f_4711)
static void C_ccall f_4711(C_word c,C_word *av) C_noret;
C_noret_decl(f_4714)
static void C_ccall f_4714(C_word c,C_word *av) C_noret;
C_noret_decl(f_4717)
static void C_ccall f_4717(C_word c,C_word *av) C_noret;
C_noret_decl(f_4720)
static void C_ccall f_4720(C_word c,C_word *av) C_noret;
C_noret_decl(f_4723)
static void C_ccall f_4723(C_word c,C_word *av) C_noret;
C_noret_decl(f_4726)
static void C_ccall f_4726(C_word c,C_word *av) C_noret;
C_noret_decl(f_4729)
static void C_ccall f_4729(C_word c,C_word *av) C_noret;
C_noret_decl(f_4732)
static void C_ccall f_4732(C_word c,C_word *av) C_noret;
C_noret_decl(f_4735)
static void C_ccall f_4735(C_word c,C_word *av) C_noret;
C_noret_decl(f_4738)
static void C_ccall f_4738(C_word c,C_word *av) C_noret;
C_noret_decl(f_4741)
static void C_ccall f_4741(C_word c,C_word *av) C_noret;
C_noret_decl(f_4744)
static void C_ccall f_4744(C_word c,C_word *av) C_noret;
C_noret_decl(f_4747)
static void C_ccall f_4747(C_word c,C_word *av) C_noret;
C_noret_decl(f_4750)
static void C_ccall f_4750(C_word c,C_word *av) C_noret;
C_noret_decl(f_4753)
static void C_ccall f_4753(C_word c,C_word *av) C_noret;
C_noret_decl(f_4756)
static void C_ccall f_4756(C_word c,C_word *av) C_noret;
C_noret_decl(f_4759)
static void C_ccall f_4759(C_word c,C_word *av) C_noret;
C_noret_decl(f_4762)
static void C_ccall f_4762(C_word c,C_word *av) C_noret;
C_noret_decl(f_4765)
static void C_ccall f_4765(C_word c,C_word *av) C_noret;
C_noret_decl(f_4768)
static void C_ccall f_4768(C_word c,C_word *av) C_noret;
C_noret_decl(f_4771)
static void C_ccall f_4771(C_word c,C_word *av) C_noret;
C_noret_decl(f_4774)
static void C_ccall f_4774(C_word c,C_word *av) C_noret;
C_noret_decl(f_4777)
static void C_ccall f_4777(C_word c,C_word *av) C_noret;
C_noret_decl(f_4780)
static void C_ccall f_4780(C_word c,C_word *av) C_noret;
C_noret_decl(f_4783)
static void C_ccall f_4783(C_word c,C_word *av) C_noret;
C_noret_decl(f_4786)
static void C_ccall f_4786(C_word c,C_word *av) C_noret;
C_noret_decl(f_4789)
static void C_ccall f_4789(C_word c,C_word *av) C_noret;
C_noret_decl(f_4792)
static void C_ccall f_4792(C_word c,C_word *av) C_noret;
C_noret_decl(f_4795)
static void C_ccall f_4795(C_word c,C_word *av) C_noret;
C_noret_decl(f_4798)
static void C_ccall f_4798(C_word c,C_word *av) C_noret;
C_noret_decl(f_4801)
static void C_ccall f_4801(C_word c,C_word *av) C_noret;
C_noret_decl(f_4804)
static void C_ccall f_4804(C_word c,C_word *av) C_noret;
C_noret_decl(f_4807)
static void C_ccall f_4807(C_word c,C_word *av) C_noret;
C_noret_decl(f_4810)
static void C_ccall f_4810(C_word c,C_word *av) C_noret;
C_noret_decl(f_4813)
static void C_ccall f_4813(C_word c,C_word *av) C_noret;
C_noret_decl(f_4816)
static void C_ccall f_4816(C_word c,C_word *av) C_noret;
C_noret_decl(f_4819)
static void C_ccall f_4819(C_word c,C_word *av) C_noret;
C_noret_decl(f_4822)
static void C_ccall f_4822(C_word c,C_word *av) C_noret;
C_noret_decl(f_4825)
static void C_ccall f_4825(C_word c,C_word *av) C_noret;
C_noret_decl(f_4828)
static void C_ccall f_4828(C_word c,C_word *av) C_noret;
C_noret_decl(f_4831)
static void C_ccall f_4831(C_word c,C_word *av) C_noret;
C_noret_decl(f_4834)
static void C_ccall f_4834(C_word c,C_word *av) C_noret;
C_noret_decl(f_4837)
static void C_ccall f_4837(C_word c,C_word *av) C_noret;
C_noret_decl(f_4840)
static void C_ccall f_4840(C_word c,C_word *av) C_noret;
C_noret_decl(f_4843)
static void C_ccall f_4843(C_word c,C_word *av) C_noret;
C_noret_decl(f_4846)
static void C_ccall f_4846(C_word c,C_word *av) C_noret;
C_noret_decl(f_4849)
static void C_ccall f_4849(C_word c,C_word *av) C_noret;
C_noret_decl(f_4852)
static void C_ccall f_4852(C_word c,C_word *av) C_noret;
C_noret_decl(f_4855)
static void C_ccall f_4855(C_word c,C_word *av) C_noret;
C_noret_decl(f_4858)
static void C_ccall f_4858(C_word c,C_word *av) C_noret;
C_noret_decl(f_4861)
static void C_ccall f_4861(C_word c,C_word *av) C_noret;
C_noret_decl(f_4864)
static void C_ccall f_4864(C_word c,C_word *av) C_noret;
C_noret_decl(f_4867)
static void C_ccall f_4867(C_word c,C_word *av) C_noret;
C_noret_decl(f_4870)
static void C_ccall f_4870(C_word c,C_word *av) C_noret;
C_noret_decl(f_4873)
static void C_ccall f_4873(C_word c,C_word *av) C_noret;
C_noret_decl(f_4876)
static void C_ccall f_4876(C_word c,C_word *av) C_noret;
C_noret_decl(f_4879)
static void C_ccall f_4879(C_word c,C_word *av) C_noret;
C_noret_decl(f_4882)
static void C_ccall f_4882(C_word c,C_word *av) C_noret;
C_noret_decl(f_4885)
static void C_ccall f_4885(C_word c,C_word *av) C_noret;
C_noret_decl(f_4888)
static void C_ccall f_4888(C_word c,C_word *av) C_noret;
C_noret_decl(f_4891)
static void C_ccall f_4891(C_word c,C_word *av) C_noret;
C_noret_decl(f_4894)
static void C_ccall f_4894(C_word c,C_word *av) C_noret;
C_noret_decl(f_4897)
static void C_ccall f_4897(C_word c,C_word *av) C_noret;
C_noret_decl(f_4900)
static void C_ccall f_4900(C_word c,C_word *av) C_noret;
C_noret_decl(f_4903)
static void C_ccall f_4903(C_word c,C_word *av) C_noret;
C_noret_decl(f_4906)
static void C_ccall f_4906(C_word c,C_word *av) C_noret;
C_noret_decl(f_4909)
static void C_ccall f_4909(C_word c,C_word *av) C_noret;
C_noret_decl(f_4912)
static void C_ccall f_4912(C_word c,C_word *av) C_noret;
C_noret_decl(f_4915)
static void C_ccall f_4915(C_word c,C_word *av) C_noret;
C_noret_decl(f_4918)
static void C_ccall f_4918(C_word c,C_word *av) C_noret;
C_noret_decl(f_4921)
static void C_ccall f_4921(C_word c,C_word *av) C_noret;
C_noret_decl(f_4924)
static void C_ccall f_4924(C_word c,C_word *av) C_noret;
C_noret_decl(f_4927)
static void C_ccall f_4927(C_word c,C_word *av) C_noret;
C_noret_decl(f_4930)
static void C_ccall f_4930(C_word c,C_word *av) C_noret;
C_noret_decl(f_4933)
static void C_ccall f_4933(C_word c,C_word *av) C_noret;
C_noret_decl(f_4936)
static void C_ccall f_4936(C_word c,C_word *av) C_noret;
C_noret_decl(f_4939)
static void C_ccall f_4939(C_word c,C_word *av) C_noret;
C_noret_decl(f_4942)
static void C_ccall f_4942(C_word c,C_word *av) C_noret;
C_noret_decl(f_4945)
static void C_ccall f_4945(C_word c,C_word *av) C_noret;
C_noret_decl(f_4948)
static void C_ccall f_4948(C_word c,C_word *av) C_noret;
C_noret_decl(f_4951)
static void C_ccall f_4951(C_word c,C_word *av) C_noret;
C_noret_decl(f_4954)
static void C_ccall f_4954(C_word c,C_word *av) C_noret;
C_noret_decl(f_4957)
static void C_ccall f_4957(C_word c,C_word *av) C_noret;
C_noret_decl(f_4960)
static void C_ccall f_4960(C_word c,C_word *av) C_noret;
C_noret_decl(f_4963)
static void C_ccall f_4963(C_word c,C_word *av) C_noret;
C_noret_decl(f_4966)
static void C_ccall f_4966(C_word c,C_word *av) C_noret;
C_noret_decl(f_4969)
static void C_ccall f_4969(C_word c,C_word *av) C_noret;
C_noret_decl(f_4972)
static void C_ccall f_4972(C_word c,C_word *av) C_noret;
C_noret_decl(f_4975)
static void C_ccall f_4975(C_word c,C_word *av) C_noret;
C_noret_decl(f_4978)
static void C_ccall f_4978(C_word c,C_word *av) C_noret;
C_noret_decl(f_4981)
static void C_ccall f_4981(C_word c,C_word *av) C_noret;
C_noret_decl(f_4984)
static void C_ccall f_4984(C_word c,C_word *av) C_noret;
C_noret_decl(f_4987)
static void C_ccall f_4987(C_word c,C_word *av) C_noret;
C_noret_decl(f_4990)
static void C_ccall f_4990(C_word c,C_word *av) C_noret;
C_noret_decl(f_4993)
static void C_ccall f_4993(C_word c,C_word *av) C_noret;
C_noret_decl(f_4996)
static void C_ccall f_4996(C_word c,C_word *av) C_noret;
C_noret_decl(f_4999)
static void C_ccall f_4999(C_word c,C_word *av) C_noret;
C_noret_decl(f_5002)
static void C_ccall f_5002(C_word c,C_word *av) C_noret;
C_noret_decl(f_5005)
static void C_ccall f_5005(C_word c,C_word *av) C_noret;
C_noret_decl(f_5008)
static void C_ccall f_5008(C_word c,C_word *av) C_noret;
C_noret_decl(f_5011)
static void C_ccall f_5011(C_word c,C_word *av) C_noret;
C_noret_decl(f_5014)
static void C_ccall f_5014(C_word c,C_word *av) C_noret;
C_noret_decl(f_5017)
static void C_ccall f_5017(C_word c,C_word *av) C_noret;
C_noret_decl(f_5020)
static void C_ccall f_5020(C_word c,C_word *av) C_noret;
C_noret_decl(f_5023)
static void C_ccall f_5023(C_word c,C_word *av) C_noret;
C_noret_decl(f_5026)
static void C_ccall f_5026(C_word c,C_word *av) C_noret;
C_noret_decl(f_5029)
static void C_ccall f_5029(C_word c,C_word *av) C_noret;
C_noret_decl(f_5032)
static void C_ccall f_5032(C_word c,C_word *av) C_noret;
C_noret_decl(f_5035)
static void C_ccall f_5035(C_word c,C_word *av) C_noret;
C_noret_decl(f_5038)
static void C_ccall f_5038(C_word c,C_word *av) C_noret;
C_noret_decl(f_5041)
static void C_ccall f_5041(C_word c,C_word *av) C_noret;
C_noret_decl(f_5044)
static void C_ccall f_5044(C_word c,C_word *av) C_noret;
C_noret_decl(f_5047)
static void C_ccall f_5047(C_word c,C_word *av) C_noret;
C_noret_decl(f_5050)
static void C_ccall f_5050(C_word c,C_word *av) C_noret;
C_noret_decl(f_5053)
static void C_ccall f_5053(C_word c,C_word *av) C_noret;
C_noret_decl(f_5056)
static void C_ccall f_5056(C_word c,C_word *av) C_noret;
C_noret_decl(f_5059)
static void C_ccall f_5059(C_word c,C_word *av) C_noret;
C_noret_decl(f_5062)
static void C_ccall f_5062(C_word c,C_word *av) C_noret;
C_noret_decl(f_5065)
static void C_ccall f_5065(C_word c,C_word *av) C_noret;
C_noret_decl(f_5068)
static void C_ccall f_5068(C_word c,C_word *av) C_noret;
C_noret_decl(f_5071)
static void C_ccall f_5071(C_word c,C_word *av) C_noret;
C_noret_decl(f_5074)
static void C_ccall f_5074(C_word c,C_word *av) C_noret;
C_noret_decl(f_5077)
static void C_ccall f_5077(C_word c,C_word *av) C_noret;
C_noret_decl(f_5080)
static void C_ccall f_5080(C_word c,C_word *av) C_noret;
C_noret_decl(f_5083)
static void C_ccall f_5083(C_word c,C_word *av) C_noret;
C_noret_decl(f_5086)
static void C_ccall f_5086(C_word c,C_word *av) C_noret;
C_noret_decl(f_5089)
static void C_ccall f_5089(C_word c,C_word *av) C_noret;
C_noret_decl(f_5092)
static void C_ccall f_5092(C_word c,C_word *av) C_noret;
C_noret_decl(f_5095)
static void C_ccall f_5095(C_word c,C_word *av) C_noret;
C_noret_decl(f_5098)
static void C_ccall f_5098(C_word c,C_word *av) C_noret;
C_noret_decl(f_5101)
static void C_ccall f_5101(C_word c,C_word *av) C_noret;
C_noret_decl(f_5104)
static void C_ccall f_5104(C_word c,C_word *av) C_noret;
C_noret_decl(f_5107)
static void C_ccall f_5107(C_word c,C_word *av) C_noret;
C_noret_decl(f_5110)
static void C_ccall f_5110(C_word c,C_word *av) C_noret;
C_noret_decl(f_5113)
static void C_ccall f_5113(C_word c,C_word *av) C_noret;
C_noret_decl(f_5116)
static void C_ccall f_5116(C_word c,C_word *av) C_noret;
C_noret_decl(f_5119)
static void C_ccall f_5119(C_word c,C_word *av) C_noret;
C_noret_decl(f_5122)
static void C_ccall f_5122(C_word c,C_word *av) C_noret;
C_noret_decl(f_5125)
static void C_ccall f_5125(C_word c,C_word *av) C_noret;
C_noret_decl(f_5128)
static void C_ccall f_5128(C_word c,C_word *av) C_noret;
C_noret_decl(f_5131)
static void C_ccall f_5131(C_word c,C_word *av) C_noret;
C_noret_decl(f_5134)
static void C_ccall f_5134(C_word c,C_word *av) C_noret;
C_noret_decl(f_5137)
static void C_ccall f_5137(C_word c,C_word *av) C_noret;
C_noret_decl(f_5140)
static void C_ccall f_5140(C_word c,C_word *av) C_noret;
C_noret_decl(f_5143)
static void C_ccall f_5143(C_word c,C_word *av) C_noret;
C_noret_decl(f_5146)
static void C_ccall f_5146(C_word c,C_word *av) C_noret;
C_noret_decl(f_5148)
static void C_ccall f_5148(C_word c,C_word *av) C_noret;
C_noret_decl(f_5170)
static void C_ccall f_5170(C_word c,C_word *av) C_noret;
C_noret_decl(f_5185)
static void C_ccall f_5185(C_word c,C_word *av) C_noret;
C_noret_decl(f_5188)
static void C_ccall f_5188(C_word c,C_word *av) C_noret;
C_noret_decl(f_5203)
static void C_ccall f_5203(C_word c,C_word *av) C_noret;
C_noret_decl(f_5215)
static void C_ccall f_5215(C_word c,C_word *av) C_noret;
C_noret_decl(f_5223)
static void C_ccall f_5223(C_word c,C_word *av) C_noret;
C_noret_decl(f_5225)
static void C_fcall f_5225(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5246)
static void C_ccall f_5246(C_word c,C_word *av) C_noret;
C_noret_decl(f_5250)
static void C_ccall f_5250(C_word c,C_word *av) C_noret;
C_noret_decl(f_5253)
static void C_ccall f_5253(C_word c,C_word *av) C_noret;
C_noret_decl(f_5256)
static void C_ccall f_5256(C_word c,C_word *av) C_noret;
C_noret_decl(f_5258)
static void C_ccall f_5258(C_word c,C_word *av) C_noret;
C_noret_decl(f_5277)
static void C_ccall f_5277(C_word c,C_word *av) C_noret;
C_noret_decl(f_5294)
static void C_ccall f_5294(C_word c,C_word *av) C_noret;
C_noret_decl(f_5337)
static void C_ccall f_5337(C_word c,C_word *av) C_noret;
C_noret_decl(f_5341)
static void C_ccall f_5341(C_word c,C_word *av) C_noret;
C_noret_decl(f_5345)
static void C_ccall f_5345(C_word c,C_word *av) C_noret;
C_noret_decl(f_5349)
static void C_ccall f_5349(C_word c,C_word *av) C_noret;
C_noret_decl(f_5356)
static void C_ccall f_5356(C_word c,C_word *av) C_noret;
C_noret_decl(f_5360)
static void C_ccall f_5360(C_word c,C_word *av) C_noret;
C_noret_decl(f_5368)
static void C_ccall f_5368(C_word c,C_word *av) C_noret;
C_noret_decl(f_5372)
static void C_ccall f_5372(C_word c,C_word *av) C_noret;
C_noret_decl(f_5380)
static void C_ccall f_5380(C_word c,C_word *av) C_noret;
C_noret_decl(f_5383)
static void C_ccall f_5383(C_word c,C_word *av) C_noret;
C_noret_decl(f_5387)
static void C_ccall f_5387(C_word c,C_word *av) C_noret;
C_noret_decl(f_5390)
static void C_ccall f_5390(C_word c,C_word *av) C_noret;
C_noret_decl(f_5393)
static void C_ccall f_5393(C_word c,C_word *av) C_noret;
C_noret_decl(f_5396)
static void C_ccall f_5396(C_word c,C_word *av) C_noret;
C_noret_decl(f_5399)
static void C_ccall f_5399(C_word c,C_word *av) C_noret;
C_noret_decl(f_5402)
static void C_ccall f_5402(C_word c,C_word *av) C_noret;
C_noret_decl(f_5405)
static void C_ccall f_5405(C_word c,C_word *av) C_noret;
C_noret_decl(f_5408)
static void C_ccall f_5408(C_word c,C_word *av) C_noret;
C_noret_decl(f_5411)
static void C_ccall f_5411(C_word c,C_word *av) C_noret;
C_noret_decl(f_5414)
static void C_ccall f_5414(C_word c,C_word *av) C_noret;
C_noret_decl(f_5417)
static void C_ccall f_5417(C_word c,C_word *av) C_noret;
C_noret_decl(f_5420)
static void C_ccall f_5420(C_word c,C_word *av) C_noret;
C_noret_decl(f_5423)
static void C_ccall f_5423(C_word c,C_word *av) C_noret;
C_noret_decl(f_5426)
static void C_ccall f_5426(C_word c,C_word *av) C_noret;
C_noret_decl(f_5429)
static void C_ccall f_5429(C_word c,C_word *av) C_noret;
C_noret_decl(f_5432)
static void C_ccall f_5432(C_word c,C_word *av) C_noret;
C_noret_decl(f_5434)
static void C_ccall f_5434(C_word c,C_word *av) C_noret;
C_noret_decl(f_5456)
static void C_ccall f_5456(C_word c,C_word *av) C_noret;
C_noret_decl(f_5474)
static void C_ccall f_5474(C_word c,C_word *av) C_noret;
C_noret_decl(f_5496)
static void C_ccall f_5496(C_word c,C_word *av) C_noret;
C_noret_decl(f_5514)
static void C_ccall f_5514(C_word c,C_word *av) C_noret;
C_noret_decl(f_5539)
static void C_ccall f_5539(C_word c,C_word *av) C_noret;
C_noret_decl(f_5560)
static void C_ccall f_5560(C_word c,C_word *av) C_noret;
C_noret_decl(f_5568)
static void C_ccall f_5568(C_word c,C_word *av) C_noret;
C_noret_decl(f_5572)
static void C_ccall f_5572(C_word c,C_word *av) C_noret;
C_noret_decl(f_5579)
static void C_ccall f_5579(C_word c,C_word *av) C_noret;
C_noret_decl(f_5607)
static void C_ccall f_5607(C_word c,C_word *av) C_noret;
C_noret_decl(f_5610)
static void C_ccall f_5610(C_word c,C_word *av) C_noret;
C_noret_decl(f_5641)
static void C_fcall f_5641(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5663)
static void C_ccall f_5663(C_word c,C_word *av) C_noret;
C_noret_decl(f_5686)
static void C_ccall f_5686(C_word c,C_word *av) C_noret;
C_noret_decl(f_5690)
static void C_ccall f_5690(C_word c,C_word *av) C_noret;
C_noret_decl(f_5694)
static void C_ccall f_5694(C_word c,C_word *av) C_noret;
C_noret_decl(f_5701)
static void C_ccall f_5701(C_word c,C_word *av) C_noret;
C_noret_decl(f_5723)
static void C_ccall f_5723(C_word c,C_word *av) C_noret;
C_noret_decl(f_5733)
static void C_ccall f_5733(C_word c,C_word *av) C_noret;
C_noret_decl(f_5747)
static void C_ccall f_5747(C_word c,C_word *av) C_noret;
C_noret_decl(f_5751)
static void C_ccall f_5751(C_word c,C_word *av) C_noret;
C_noret_decl(f_5758)
static void C_ccall f_5758(C_word c,C_word *av) C_noret;
C_noret_decl(f_5789)
static void C_ccall f_5789(C_word c,C_word *av) C_noret;
C_noret_decl(f_5792)
static void C_fcall f_5792(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5807)
static void C_ccall f_5807(C_word c,C_word *av) C_noret;
C_noret_decl(f_5824)
static void C_ccall f_5824(C_word c,C_word *av) C_noret;
C_noret_decl(f_5828)
static void C_ccall f_5828(C_word c,C_word *av) C_noret;
C_noret_decl(f_5835)
static void C_ccall f_5835(C_word c,C_word *av) C_noret;
C_noret_decl(f_5866)
static void C_ccall f_5866(C_word c,C_word *av) C_noret;
C_noret_decl(f_5894)
static void C_ccall f_5894(C_word c,C_word *av) C_noret;
C_noret_decl(f_5896)
static void C_ccall f_5896(C_word c,C_word *av) C_noret;
C_noret_decl(f_5919)
static void C_ccall f_5919(C_word c,C_word *av) C_noret;
C_noret_decl(f_5921)
static void C_ccall f_5921(C_word c,C_word *av) C_noret;
C_noret_decl(f_5940)
static void C_ccall f_5940(C_word c,C_word *av) C_noret;
C_noret_decl(f_5944)
static void C_ccall f_5944(C_word c,C_word *av) C_noret;
C_noret_decl(f_5959)
static void C_ccall f_5959(C_word c,C_word *av) C_noret;
C_noret_decl(f_5990)
static void C_ccall f_5990(C_word c,C_word *av) C_noret;
C_noret_decl(f_6018)
static void C_ccall f_6018(C_word c,C_word *av) C_noret;
C_noret_decl(f_6020)
static void C_ccall f_6020(C_word c,C_word *av) C_noret;
C_noret_decl(f_6043)
static void C_ccall f_6043(C_word c,C_word *av) C_noret;
C_noret_decl(f_6045)
static void C_ccall f_6045(C_word c,C_word *av) C_noret;
C_noret_decl(f_6064)
static void C_ccall f_6064(C_word c,C_word *av) C_noret;
C_noret_decl(f_6068)
static void C_ccall f_6068(C_word c,C_word *av) C_noret;
C_noret_decl(f_6083)
static void C_ccall f_6083(C_word c,C_word *av) C_noret;
C_noret_decl(f_6087)
static void C_ccall f_6087(C_word c,C_word *av) C_noret;
C_noret_decl(f_6108)
static void C_ccall f_6108(C_word c,C_word *av) C_noret;
C_noret_decl(f_6150)
static void C_ccall f_6150(C_word c,C_word *av) C_noret;
C_noret_decl(f_6152)
static void C_ccall f_6152(C_word c,C_word *av) C_noret;
C_noret_decl(f_6159)
static void C_fcall f_6159(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6170)
static void C_ccall f_6170(C_word c,C_word *av) C_noret;
C_noret_decl(f_6191)
static void C_ccall f_6191(C_word c,C_word *av) C_noret;
C_noret_decl(f_6195)
static void C_ccall f_6195(C_word c,C_word *av) C_noret;
C_noret_decl(f_6201)
static void C_ccall f_6201(C_word c,C_word *av) C_noret;
C_noret_decl(f_6223)
static void C_ccall f_6223(C_word c,C_word *av) C_noret;
C_noret_decl(f_6227)
static void C_ccall f_6227(C_word c,C_word *av) C_noret;
C_noret_decl(f_6229)
static void C_ccall f_6229(C_word c,C_word *av) C_noret;
C_noret_decl(f_6245)
static void C_ccall f_6245(C_word c,C_word *av) C_noret;
C_noret_decl(f_6251)
static void C_ccall f_6251(C_word c,C_word *av) C_noret;
C_noret_decl(f_6269)
static void C_ccall f_6269(C_word c,C_word *av) C_noret;
C_noret_decl(f_6272)
static void C_fcall f_6272(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6275)
static void C_fcall f_6275(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6290)
static void C_ccall f_6290(C_word c,C_word *av) C_noret;
C_noret_decl(f_6302)
static void C_ccall f_6302(C_word c,C_word *av) C_noret;
C_noret_decl(f_6312)
static void C_ccall f_6312(C_word c,C_word *av) C_noret;
C_noret_decl(f_6316)
static void C_ccall f_6316(C_word c,C_word *av) C_noret;
C_noret_decl(f_6325)
static void C_ccall f_6325(C_word c,C_word *av) C_noret;
C_noret_decl(f_6335)
static void C_ccall f_6335(C_word c,C_word *av) C_noret;
C_noret_decl(f_6339)
static void C_ccall f_6339(C_word c,C_word *av) C_noret;
C_noret_decl(f_6369)
static void C_ccall f_6369(C_word c,C_word *av) C_noret;
C_noret_decl(f_6373)
static void C_ccall f_6373(C_word c,C_word *av) C_noret;
C_noret_decl(f_6377)
static void C_ccall f_6377(C_word c,C_word *av) C_noret;
C_noret_decl(f_6381)
static void C_ccall f_6381(C_word c,C_word *av) C_noret;
C_noret_decl(f_6385)
static void C_ccall f_6385(C_word c,C_word *av) C_noret;
C_noret_decl(f_6394)
static void C_ccall f_6394(C_word c,C_word *av) C_noret;
C_noret_decl(f_6398)
static void C_ccall f_6398(C_word c,C_word *av) C_noret;
C_noret_decl(f_6400)
static void C_fcall f_6400(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6410)
static void C_ccall f_6410(C_word c,C_word *av) C_noret;
C_noret_decl(f_6423)
static void C_fcall f_6423(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6448)
static void C_ccall f_6448(C_word c,C_word *av) C_noret;
C_noret_decl(C_c_2dplatform_toplevel)
C_externexport void C_ccall C_c_2dplatform_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_2121)
static void C_ccall trf_2121(C_word c,C_word *av) C_noret;
static void C_ccall trf_2121(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2121(t0,t1,t2);}

C_noret_decl(trf_2127)
static void C_ccall trf_2127(C_word c,C_word *av) C_noret;
static void C_ccall trf_2127(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2127(t0,t1,t2,t3);}

C_noret_decl(trf_2297)
static void C_ccall trf_2297(C_word c,C_word *av) C_noret;
static void C_ccall trf_2297(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2297(t0,t1,t2);}

C_noret_decl(trf_2306)
static void C_ccall trf_2306(C_word c,C_word *av) C_noret;
static void C_ccall trf_2306(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2306(t0,t1,t2);}

C_noret_decl(trf_2314)
static void C_ccall trf_2314(C_word c,C_word *av) C_noret;
static void C_ccall trf_2314(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2314(t0,t1,t2,t3);}

C_noret_decl(trf_2705)
static void C_ccall trf_2705(C_word c,C_word *av) C_noret;
static void C_ccall trf_2705(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2705(t0,t1,t2);}

C_noret_decl(trf_3014)
static void C_ccall trf_3014(C_word c,C_word *av) C_noret;
static void C_ccall trf_3014(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3014(t0,t1,t2,t3);}

C_noret_decl(trf_3109)
static void C_ccall trf_3109(C_word c,C_word *av) C_noret;
static void C_ccall trf_3109(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3109(t0,t1);}

C_noret_decl(trf_3112)
static void C_ccall trf_3112(C_word c,C_word *av) C_noret;
static void C_ccall trf_3112(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3112(t0,t1);}

C_noret_decl(trf_3301)
static void C_ccall trf_3301(C_word c,C_word *av) C_noret;
static void C_ccall trf_3301(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3301(t0,t1,t2);}

C_noret_decl(trf_3429)
static void C_ccall trf_3429(C_word c,C_word *av) C_noret;
static void C_ccall trf_3429(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3429(t0,t1,t2,t3);}

C_noret_decl(trf_4489)
static void C_ccall trf_4489(C_word c,C_word *av) C_noret;
static void C_ccall trf_4489(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4489(t0,t1);}

C_noret_decl(trf_5225)
static void C_ccall trf_5225(C_word c,C_word *av) C_noret;
static void C_ccall trf_5225(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5225(t0,t1);}

C_noret_decl(trf_5641)
static void C_ccall trf_5641(C_word c,C_word *av) C_noret;
static void C_ccall trf_5641(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5641(t0,t1);}

C_noret_decl(trf_5792)
static void C_ccall trf_5792(C_word c,C_word *av) C_noret;
static void C_ccall trf_5792(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5792(t0,t1);}

C_noret_decl(trf_6159)
static void C_ccall trf_6159(C_word c,C_word *av) C_noret;
static void C_ccall trf_6159(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6159(t0,t1);}

C_noret_decl(trf_6272)
static void C_ccall trf_6272(C_word c,C_word *av) C_noret;
static void C_ccall trf_6272(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6272(t0,t1);}

C_noret_decl(trf_6275)
static void C_ccall trf_6275(C_word c,C_word *av) C_noret;
static void C_ccall trf_6275(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6275(t0,t1);}

C_noret_decl(trf_6400)
static void C_ccall trf_6400(C_word c,C_word *av) C_noret;
static void C_ccall trf_6400(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6400(t0,t1,t2);}

C_noret_decl(trf_6423)
static void C_ccall trf_6423(C_word c,C_word *av) C_noret;
static void C_ccall trf_6423(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6423(t0,t1,t2);}

/* k1669 */
static void C_ccall f_1671(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1671,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1674,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k1672 in k1669 */
static void C_ccall f_1674(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1674,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1677,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_internal_toplevel(2,av2);}}

/* k1675 in k1672 in k1669 */
static void C_ccall f_1677(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1677,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1680,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_optimizer_toplevel(2,av2);}}

/* k1678 in k1675 in k1672 in k1669 */
static void C_ccall f_1680(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1680,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1683,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_support_toplevel(2,av2);}}

/* k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_ccall f_1683(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1683,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1686,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_compiler_toplevel(2,av2);}}

/* k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_ccall f_1686(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1686,c,av);}
a=C_alloc(23);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=C_mutate(&lf[2] /* (set! chicken.compiler.c-platform#cons* ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2121,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate(&lf[3] /* (set! chicken.compiler.c-platform#filter ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2297,tmp=(C_word)a,a+=2,tmp));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2967,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:55: chicken.compiler.optimizer#default-optimization-passes */
t7=*((C_word*)lf[940]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=C_fix(3);
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* chicken.compiler.c-platform#cons* in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_fcall f_2121(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_2121,3,t1,t2,t3);}
a=C_alloc(5);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2127,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_2127(t7,t1,t2,t3);}

/* loop in chicken.compiler.c-platform#cons* in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_fcall f_2127(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_2127,4,t0,t1,t2,t3);}
a=C_alloc(4);
if(C_truep(C_i_nullp(t3))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2141,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* mini-srfi-1.scm:95: loop */
t6=t4;
t7=C_i_car(t3);
t8=C_u_i_cdr(t3);
t1=t6;
t2=t7;
t3=t8;
goto loop;}}

/* k2139 in loop in chicken.compiler.c-platform#cons* in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_ccall f_2141(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2141,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.compiler.c-platform#filter in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_fcall f_2297(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_2297,3,t1,t2,t3);}
a=C_alloc(6);
t4=C_i_check_list_2(t3,lf[4]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2306,a[2]=t2,a[3]=t6,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_2306(t8,t1,t3);}

/* foldr260 in chicken.compiler.c-platform#filter in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_fcall f_2306(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_2306,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2314,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2335,a[2]=t3,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
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

/* g265 in foldr260 in chicken.compiler.c-platform#filter in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_fcall f_2314(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_2314,4,t0,t1,t2,t3);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2321,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* mini-srfi-1.scm:131: pred */
t5=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k2319 in g265 in foldr260 in chicken.compiler.c-platform#filter in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_ccall f_2321(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2321,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(t1)?C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]):((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2333 in foldr260 in chicken.compiler.c-platform#filter in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_ccall f_2335(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2335,c,av);}
/* mini-srfi-1.scm:131: g265 */
t2=((C_word*)t0)[2];
f_2314(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* loop in rewrite-apply in k3242 in k3239 in k3236 in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static C_word C_fcall f_2463(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;
loop:{}
t2=C_i_cdr(t1);
if(C_truep(C_i_nullp(t2))){
return(C_u_i_car(t1));}
else{
t4=C_u_i_cdr(t1);
t1=t4;
goto loop;}}

/* loop in k5186 in k5183 in k5244 in k5168 in k5248 in rewrite-make-vector in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in ... */
static void C_fcall f_2705(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_2705,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2719,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* mini-srfi-1.scm:190: proc */
t4=((C_word*)t0)[4];
f_5225(t4,t3);}}

/* k2717 in loop in k5186 in k5183 in k5244 in k5168 in k5248 in rewrite-make-vector in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in k5117 in k5114 in k5111 in k5108 in k5105 in ... */
static void C_ccall f_2719(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2719,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2723,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* mini-srfi-1.scm:190: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2705(t3,t2,C_fixnum_plus(((C_word*)t0)[4],C_fix(1)));}

/* k2721 in k2717 in loop in k5186 in k5183 in k5244 in k5168 in k5248 in rewrite-make-vector in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in k5117 in k5114 in k5111 in k5108 in ... */
static void C_ccall f_2723(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2723,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_ccall f_2967(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2967,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[5]+1 /* (set! chicken.compiler.c-platform#default-declarations ...) */,lf[6]);
t3=C_mutate((C_word*)lf[7]+1 /* (set! chicken.compiler.c-platform#default-profiling-declarations ...) */,lf[8]);
t4=C_mutate((C_word*)lf[9]+1 /* (set! chicken.compiler.c-platform#default-units ...) */,lf[10]);
t5=C_set_block_item(lf[11] /* chicken.compiler.c-platform#words-per-flonum */,0,C_fix(4));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2975,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:85: chicken.compiler.optimizer#eq-inline-operator */
t7=*((C_word*)lf[938]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[939];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_ccall f_2975(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2975,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2978,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:86: chicken.compiler.optimizer#membership-test-operators */
t3=*((C_word*)lf[936]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[937];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_ccall f_2978(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2978,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2981,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:89: chicken.compiler.optimizer#membership-unfold-limit */
t3=*((C_word*)lf[935]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_fix(20);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_ccall f_2981(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,3)))){
C_save_and_reclaim((void *)f_2981,c,av);}
a=C_alloc(15);
t2=C_mutate((C_word*)lf[12]+1 /* (set! chicken.compiler.c-platform#target-include-file ...) */,lf[13]);
t3=C_mutate((C_word*)lf[14]+1 /* (set! chicken.compiler.c-platform#valid-compiler-options ...) */,lf[15]);
t4=C_mutate((C_word*)lf[16]+1 /* (set! chicken.compiler.c-platform#valid-compiler-options-with-argument ...) */,lf[17]);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2996,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6423,a[2]=t7,a[3]=t11,a[4]=t8,tmp=(C_word)a,a+=5,tmp));
t13=((C_word*)t11)[1];
f_6423(t13,t9,lf[934]);}

/* k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_ccall f_2996(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_2996,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[18]+1 /* (set! chicken.compiler.core#default-standard-bindings ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3003,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:263: scheme#append */
t4=*((C_word*)lf[37]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[929];
av2[3]=lf[930];
av2[4]=lf[931];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_ccall f_3003(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3003,c,av);}
a=C_alloc(8);
t2=C_mutate((C_word*)lf[19]+1 /* (set! chicken.compiler.core#default-extended-bindings ...) */,t1);
t3=C_mutate((C_word*)lf[20]+1 /* (set! chicken.compiler.core#internal-bindings ...) */,lf[21]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3012,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6400,a[2]=t6,tmp=(C_word)a,a+=3,tmp));
t8=((C_word*)t6)[1];
f_6400(t8,t4,lf[928]);}

/* k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_ccall f_3012(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_3012,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3014,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3079,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6398,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:317: op1 */
f_3014(t4,lf[923],lf[924],lf[925]);}

/* op1 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_fcall f_3014(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,6)))){
C_save_and_reclaim_args((void *)trf_3014,4,t1,t2,t3,t4);}
a=C_alloc(5);
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3016,a[2]=t3,a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* f_3016 in op1 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_ccall f_3016(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
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
if(C_unlikely(!C_demand(C_calculate_demand(19,c,4)))){
C_save_and_reclaim((void *)f_3016,c,av);}
a=C_alloc(19);
t6=C_i_length(t5);
t7=C_eqp(t6,C_fix(1));
if(C_truep(t7)){
t8=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3038,a[2]=t4,a[3]=t1,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
t10=C_eqp(lf[24],*((C_word*)lf[25]+1));
if(C_truep(t10)){
t11=(C_truep(*((C_word*)lf[26]+1))?C_a_i_list1(&a,1,((C_word*)t0)[2]):C_a_i_list1(&a,1,((C_word*)t0)[3]));
/* c-platform.scm:313: chicken.compiler.support#make-node */
t12=*((C_word*)lf[22]+1);{
C_word *av2=av;
av2[0]=t12;
av2[1]=t9;
av2[2]=lf[27];
av2[3]=t11;
av2[4]=t5;
((C_proc)(void*)(*((C_word*)t12+1)))(5,av2);}}
else{
t11=C_a_i_list2(&a,2,((C_word*)t0)[4],C_fix(36));
t12=C_i_car(t5);
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3071,a[2]=t12,a[3]=t9,a[4]=t11,tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:316: chicken.compiler.support#qnode */
t14=*((C_word*)lf[29]+1);{
C_word *av2=av;
av2[0]=t14;
av2[1]=t13;
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t14+1)))(3,av2);}}}
else{
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k3036 */
static void C_ccall f_3038(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_3038,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:308: chicken.compiler.support#make-node */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[23];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3069 */
static void C_ccall f_3071(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_3071,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:314: chicken.compiler.support#make-node */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[28];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_ccall f_3079(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_3079,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3082,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6394,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:318: op1 */
f_3014(t3,lf[919],lf[920],lf[921]);}

/* k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_ccall f_3082(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,6)))){
C_save_and_reclaim((void *)f_3082,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3084,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3238,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:341: chicken.compiler.optimizer#rewrite */
t4=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[822];
av2[3]=C_fix(8);
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* eqv?-id in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_ccall f_3084(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_3084,c,av);}
a=C_alloc(13);
t6=C_i_length(t5);
t7=C_eqp(t6,C_fix(2));
if(C_truep(t7)){
t8=C_i_car(t5);
t9=C_i_cadr(t5);
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3100,a[2]=t1,a[3]=t4,a[4]=t5,a[5]=t9,a[6]=t8,tmp=(C_word)a,a+=7,tmp);
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3230,a[2]=t4,a[3]=t10,a[4]=t9,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:328: chicken.compiler.support#node-class */
t12=*((C_word*)lf[34]+1);{
C_word *av2=av;
av2[0]=t12;
av2[1]=t11;
av2[2]=t8;
((C_proc)(void*)(*((C_word*)t12+1)))(3,av2);}}
else{
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k3098 in eqv?-id in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_ccall f_3100(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_3100,c,av);}
a=C_alloc(10);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3109,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3184,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:332: chicken.compiler.support#node-class */
t4=*((C_word*)lf[34]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k3107 in k3098 in eqv?-id in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_fcall f_3109(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_3109,2,t0,t1);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3112,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=t2;
f_3112(t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3157,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:335: chicken.compiler.support#node-class */
t4=*((C_word*)lf[34]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k3110 in k3107 in k3098 in eqv?-id in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_fcall f_3112(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_3112,2,t0,t1);}
a=C_alloc(8);
if(C_truep(t1)){
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3127,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:340: chicken.compiler.support#make-node */
t4=*((C_word*)lf[22]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[27];
av2[3]=lf[30];
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k3125 in k3110 in k3107 in k3098 in eqv?-id in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_ccall f_3127(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_3127,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:338: chicken.compiler.support#make-node */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[23];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3137 in k3151 in k3155 in k3107 in k3098 in eqv?-id in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_ccall f_3139(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3139,c,av);}
t2=((C_word*)t0)[2];
f_3112(t2,(C_truep(t1)?t1:C_i_not(C_i_numberp(((C_word*)t0)[3]))));}

/* k3151 in k3155 in k3107 in k3098 in eqv?-id in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_ccall f_3153(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3153,c,av);}
a=C_alloc(4);
t2=C_i_car(t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3139,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:337: chicken.compiler.support#immediate? */
t4=*((C_word*)lf[32]+1);{
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

/* k3155 in k3107 in k3098 in eqv?-id in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_ccall f_3157(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3157,c,av);}
a=C_alloc(3);
t2=C_eqp(lf[31],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3153,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:336: chicken.compiler.support#node-parameters */
t4=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=((C_word*)t0)[2];
f_3112(t3,C_SCHEME_FALSE);}}

/* k3164 in k3178 in k3182 in k3098 in eqv?-id in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_ccall f_3166(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3166,c,av);}
t2=((C_word*)t0)[2];
f_3109(t2,(C_truep(t1)?t1:C_i_not(C_i_numberp(((C_word*)t0)[3]))));}

/* k3178 in k3182 in k3098 in eqv?-id in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_ccall f_3180(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3180,c,av);}
a=C_alloc(4);
t2=C_i_car(t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3166,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:334: chicken.compiler.support#immediate? */
t4=*((C_word*)lf[32]+1);{
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

/* k3182 in k3098 in eqv?-id in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_ccall f_3184(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3184,c,av);}
a=C_alloc(3);
t2=C_eqp(lf[31],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3180,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:333: chicken.compiler.support#node-parameters */
t4=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=((C_word*)t0)[2];
f_3109(t3,C_SCHEME_FALSE);}}

/* k3212 in k3220 in k3216 in k3224 in k3228 in eqv?-id in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_ccall f_3214(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_3214,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:331: chicken.compiler.support#make-node */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[23];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3216 in k3224 in k3228 in eqv?-id in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_ccall f_3218(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3218,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3222,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:330: chicken.compiler.support#node-parameters */
t3=*((C_word*)lf[33]+1);{
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

/* k3220 in k3216 in k3224 in k3228 in eqv?-id in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_ccall f_3222(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_3222,c,av);}
a=C_alloc(8);
if(C_truep(C_i_equalp(((C_word*)t0)[2],t1))){
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3214,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:331: chicken.compiler.support#qnode */
t4=*((C_word*)lf[29]+1);{
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
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_3100(2,av2);}}}

/* k3224 in k3228 in eqv?-id in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_ccall f_3226(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3226,c,av);}
a=C_alloc(5);
t2=C_eqp(lf[35],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3218,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:330: chicken.compiler.support#node-parameters */
t4=*((C_word*)lf[33]+1);{
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
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_3100(2,av2);}}}

/* k3228 in eqv?-id in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_ccall f_3230(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_3230,c,av);}
a=C_alloc(6);
t2=C_eqp(lf[35],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3226,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:329: chicken.compiler.support#node-class */
t4=*((C_word*)lf[34]+1);{
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
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_3100(2,av2);}}}

/* k3236 in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_ccall f_3238(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3238,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3241,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:342: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[820];
av2[3]=C_fix(8);
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3239 in k3236 in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_ccall f_3241(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,6)))){
C_save_and_reclaim((void *)f_3241,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3244,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6229,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:344: chicken.compiler.optimizer#rewrite */
t4=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[917];
av2[3]=C_fix(8);
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k3242 in k3239 in k3236 in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_ccall f_3244(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,6)))){
C_save_and_reclaim((void *)f_3244,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3246,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3424,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:399: chicken.compiler.optimizer#rewrite */
t4=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[914];
av2[3]=C_fix(8);
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* rewrite-apply in k3242 in k3239 in k3236 in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_ccall f_3246(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_3246,c,av);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t5))){
t6=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2463,tmp=(C_word)a,a+=2,tmp);
t7=(
  f_2463(t5)
);
t8=C_u_i_car(t5);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3421,a[2]=t1,a[3]=t5,a[4]=t4,a[5]=t7,a[6]=t8,tmp=(C_word)a,a+=7,tmp);
/* c-platform.scm:379: chicken.compiler.support#node-class */
t10=*((C_word*)lf[34]+1);{
C_word *av2=av;
av2[0]=t10;
av2[1]=t9;
av2[2]=t7;
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}
else{
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k3272 in k3419 in rewrite-apply in k3242 in k3239 in k3236 in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_ccall f_3274(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3274,c,av);}
/* c-platform.scm:380: chicken.compiler.support#make-node */
t2=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[23];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k3280 in k3419 in rewrite-apply in k3242 in k3239 in k3236 in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_ccall f_3282(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3282,c,av);}
a=C_alloc(6);
/* c-platform.scm:382: cons* */
f_2121(((C_word*)t0)[2],((C_word*)t0)[3],C_a_i_list(&a,2,((C_word*)t0)[4],t1));}

/* k3297 in k3335 in k3339 in k3419 in rewrite-apply in k3242 in k3239 in k3236 in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in ... */
static void C_ccall f_3299(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3299,c,av);}
/* c-platform.scm:384: scheme#append */
t2=*((C_word*)lf[37]+1);{
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

/* map-loop700 in k3335 in k3339 in k3419 in rewrite-apply in k3242 in k3239 in k3236 in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in ... */
static void C_fcall f_3301(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_3301,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3326,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:384: g706 */
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

/* k3324 in map-loop700 in k3335 in k3339 in k3419 in rewrite-apply in k3242 in k3239 in k3236 in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in ... */
static void C_ccall f_3326(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3326,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_3301(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k3335 in k3339 in k3419 in rewrite-apply in k3242 in k3239 in k3236 in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 in ... */
static void C_ccall f_3337(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_3337,c,av);}
a=C_alloc(12);
t2=C_i_car(t1);
t3=C_i_check_list_2(t2,lf[36]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3299,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3301,a[2]=((C_word*)t0)[4],a[3]=t6,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_3301(t8,t4,t2);}

/* k3339 in k3419 in rewrite-apply in k3242 in k3239 in k3236 in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_ccall f_3341(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_3341,c,av);}
a=C_alloc(12);
t2=C_i_cdr(t1);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=*((C_word*)lf[29]+1);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3337,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t5,a[5]=t7,a[6]=t6,tmp=(C_word)a,a+=7,tmp);
/* c-platform.scm:384: chicken.compiler.support#node-parameters */
t9=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* k3342 in k3419 in rewrite-apply in k3242 in k3239 in k3236 in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_ccall f_3344(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_3344,c,av);}
a=C_alloc(12);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3358,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3362,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:397: chicken.compiler.support#make-node */
t5=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[39];
av2[3]=lf[40];
av2[4]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}}

/* k3356 in k3342 in k3419 in rewrite-apply in k3242 in k3239 in k3236 in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 in ... */
static void C_ccall f_3358(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3358,c,av);}
/* c-platform.scm:395: chicken.compiler.support#make-node */
t2=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[23];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k3360 in k3342 in k3419 in rewrite-apply in k3242 in k3239 in k3236 in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 in ... */
static void C_ccall f_3362(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3362,c,av);}
a=C_alloc(6);
/* c-platform.scm:397: cons* */
f_2121(((C_word*)t0)[2],t1,C_a_i_list(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]));}

/* k3383 in k3406 in k3415 in k3419 in rewrite-apply in k3242 in k3239 in k3236 in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in ... */
static void C_ccall f_3385(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_3385,c,av);}
a=C_alloc(9);
if(C_truep(t1)){
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3400,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:392: chicken.compiler.support#make-node */
t4=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[39];
av2[3]=lf[43];
av2[4]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_3344(2,av2);}}}

/* k3398 in k3383 in k3406 in k3415 in k3419 in rewrite-apply in k3242 in k3239 in k3236 in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in ... */
static void C_ccall f_3400(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_3400,c,av);}
a=C_alloc(9);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list3(&a,3,t1,((C_word*)t0)[3],t2);
/* c-platform.scm:390: chicken.compiler.support#make-node */
t4=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[4];
av2[2]=lf[23];
av2[3]=((C_word*)t0)[5];
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k3406 in k3415 in k3419 in rewrite-apply in k3242 in k3239 in k3236 in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 in ... */
static void C_ccall f_3408(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3408,c,av);}
a=C_alloc(5);
t2=C_i_car(t1);
if(C_truep((C_truep(C_eqp(t2,lf[41]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[42]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3385,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:389: chicken.compiler.support#intrinsic? */
t4=*((C_word*)lf[44]+1);{
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
else{
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_3344(2,av2);}}}

/* k3415 in k3419 in rewrite-apply in k3242 in k3239 in k3236 in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_ccall f_3417(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3417,c,av);}
a=C_alloc(5);
t2=C_eqp(lf[35],t1);
if(C_truep(t2)){
t3=C_i_length(((C_word*)t0)[2]);
t4=C_eqp(C_fix(2),t3);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3408,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:387: chicken.compiler.support#node-parameters */
t6=*((C_word*)lf[33]+1);{
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
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
f_3344(2,av2);}}}
else{
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_3344(2,av2);}}}

/* k3419 in rewrite-apply in k3242 in k3239 in k3236 in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_ccall f_3421(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_3421,c,av);}
a=C_alloc(16);
t2=C_eqp(lf[31],t1);
if(C_truep(t2)){
t3=C_a_i_list1(&a,1,C_SCHEME_FALSE);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3274,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_i_car(((C_word*)t0)[3]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3282,a[2]=t4,a[3]=t5,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3341,a[2]=t6,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:384: chicken.base#butlast */
t8=*((C_word*)lf[38]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3344,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3417,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:385: chicken.compiler.support#node-class */
t5=*((C_word*)lf[34]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* k3422 in k3242 in k3239 in k3236 in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_ccall f_3424(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3424,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3427,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:400: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[913];
av2[3]=C_fix(8);
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3425 in k3422 in k3242 in k3239 in k3236 in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_ccall f_3427(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_3427,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3429,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3497,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:421: rewrite-c..r */
f_3429(t3,lf[910],lf[911],lf[912]);}

/* rewrite-c..r in k3425 in k3422 in k3242 in k3239 in k3236 in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_fcall f_3429(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,6)))){
C_save_and_reclaim_args((void *)trf_3429,4,t1,t2,t3,t4);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3435,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:404: chicken.compiler.optimizer#rewrite */
t6=*((C_word*)lf[46]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(8);
av2[4]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* a3434 in rewrite-c..r in k3425 in k3422 in k3242 in k3239 in k3236 in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 in ... */
static void C_ccall f_3435(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3435,c,av);}
a=C_alloc(6);
t6=C_i_length(t5);
t7=C_eqp(t6,C_fix(1));
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3447,a[2]=t5,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:410: scheme#call-with-current-continuation */
t9=*((C_word*)lf[45]+1);{
C_word *av2=av;
av2[0]=t9;
av2[1]=t1;
av2[2]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}
else{
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* a3446 in a3434 in rewrite-c..r in k3425 in k3422 in k3242 in k3239 in k3236 in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in ... */
static void C_ccall f_3447(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_3447,c,av);}
a=C_alloc(11);
t3=C_i_car(((C_word*)t0)[2]);
t4=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3466,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=(C_truep(*((C_word*)lf[26]+1))?((C_word*)t0)[4]:C_SCHEME_FALSE);
if(C_truep(t6)){
t7=C_a_i_list1(&a,1,((C_word*)t0)[4]);
/* c-platform.scm:417: chicken.compiler.support#make-node */
t8=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t8;
av2[1]=t5;
av2[2]=lf[27];
av2[3]=t7;
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}
else{
if(C_truep(((C_word*)t0)[5])){
t7=C_a_i_list1(&a,1,((C_word*)t0)[5]);
/* c-platform.scm:418: chicken.compiler.support#make-node */
t8=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t8;
av2[1]=t5;
av2[2]=lf[27];
av2[3]=t7;
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}
else{
/* c-platform.scm:419: return */
t7=t2;{
C_word *av2=av;
av2[0]=t7;
av2[1]=t5;
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}}}

/* k3464 in a3446 in a3434 in rewrite-c..r in k3425 in k3422 in k3242 in k3239 in k3236 in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in ... */
static void C_ccall f_3466(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_3466,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:413: chicken.compiler.support#make-node */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[23];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3495 in k3425 in k3422 in k3242 in k3239 in k3236 in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_ccall f_3497(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_3497,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3500,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:422: rewrite-c..r */
f_3429(t2,lf[907],lf[908],lf[909]);}

/* k3498 in k3495 in k3425 in k3422 in k3242 in k3239 in k3236 in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 in ... */
static void C_ccall f_3500(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_3500,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3503,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:423: rewrite-c..r */
f_3429(t2,lf[904],lf[905],lf[906]);}

/* k3501 in k3498 in k3495 in k3425 in k3422 in k3242 in k3239 in k3236 in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in ... */
static void C_ccall f_3503(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_3503,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3506,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:424: rewrite-c..r */
f_3429(t2,lf[901],lf[902],lf[903]);}

/* k3504 in k3501 in k3498 in k3495 in k3425 in k3422 in k3242 in k3239 in k3236 in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in ... */
static void C_ccall f_3506(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_3506,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3509,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:425: rewrite-c..r */
f_3429(t2,lf[877],lf[899],lf[900]);}

/* k3507 in k3504 in k3501 in k3498 in k3495 in k3425 in k3422 in k3242 in k3239 in k3236 in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in ... */
static void C_ccall f_3509(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3509,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3512,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:426: rewrite-c..r */
f_3429(t2,lf[856],lf[897],lf[898]);}

/* k3510 in k3507 in k3504 in k3501 in k3498 in k3495 in k3425 in k3422 in k3242 in k3239 in k3236 in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in ... */
static void C_ccall f_3512(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,6)))){
C_save_and_reclaim((void *)f_3512,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3513,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3539,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:433: chicken.compiler.optimizer#rewrite */
t4=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[895];
av2[3]=C_fix(8);
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* rvalues in k3510 in k3507 in k3504 in k3501 in k3498 in k3495 in k3425 in k3422 in k3242 in k3239 in k3236 in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in ... */
static void C_ccall f_3513(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_3513,c,av);}
a=C_alloc(6);
t6=C_i_length(t5);
t7=C_eqp(t6,C_fix(1));
if(C_truep(t7)){
t8=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t9=C_a_i_cons(&a,2,t4,t5);
/* c-platform.scm:432: chicken.compiler.support#make-node */
t10=*((C_word*)lf[22]+1);{
C_word *av2=av;
av2[0]=t10;
av2[1]=t1;
av2[2]=lf[23];
av2[3]=t8;
av2[4]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}
else{
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k3537 in k3510 in k3507 in k3504 in k3501 in k3498 in k3495 in k3425 in k3422 in k3242 in k3239 in k3236 in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in ... */
static void C_ccall f_3539(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3539,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3542,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:434: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[42];
av2[3]=C_fix(8);
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3540 in k3537 in k3510 in k3507 in k3504 in k3501 in k3498 in k3495 in k3425 in k3422 in k3242 in k3239 in k3236 in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in ... */
static void C_ccall f_3542(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,6)))){
C_save_and_reclaim((void *)f_3542,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3544,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3709,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:465: chicken.compiler.optimizer#rewrite */
t4=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[891];
av2[3]=C_fix(8);
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* rewrite-c-w-v in k3540 in k3537 in k3510 in k3507 in k3504 in k3501 in k3498 in k3495 in k3425 in k3422 in k3242 in k3239 in k3236 in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in ... */
static void C_ccall f_3544(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_3544,c,av);}
a=C_alloc(7);
t6=C_i_length(t5);
t7=C_eqp(C_fix(2),t6);
if(C_truep(t7)){
t8=C_i_car(t5);
t9=C_i_cadr(t5);
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3701,a[2]=t1,a[3]=t8,a[4]=t9,a[5]=t4,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* c-platform.scm:443: chicken.compiler.support#node-class */
t11=*((C_word*)lf[34]+1);{
C_word *av2=av;
av2[0]=t11;
av2[1]=t10;
av2[2]=t8;
((C_proc)(void*)(*((C_word*)t11+1)))(3,av2);}}
else{
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k3576 in k3691 in k3695 in k3699 in rewrite-c-w-v in k3540 in k3537 in k3510 in k3507 in k3504 in k3501 in k3498 in k3495 in k3425 in k3422 in k3242 in k3239 in k3236 in k3080 in k3077 in k3010 in k3001 in ... */
static void C_ccall f_3578(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_3578,c,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3689,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* c-platform.scm:447: chicken.compiler.support#node-class */
t3=*((C_word*)lf[34]+1);{
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
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k3603 in k3683 in k3687 in k3576 in k3691 in k3695 in k3699 in rewrite-c-w-v in k3540 in k3537 in k3510 in k3507 in k3504 in k3501 in k3498 in k3495 in k3425 in k3422 in k3242 in k3239 in k3236 in k3080 in ... */
static void C_ccall f_3605(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_3605,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3608,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* c-platform.scm:452: chicken.base#gensym */
t3=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[55];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k3606 in k3603 in k3683 in k3687 in k3576 in k3691 in k3695 in k3699 in rewrite-c-w-v in k3540 in k3537 in k3510 in k3507 in k3504 in k3501 in k3498 in k3495 in k3425 in k3422 in k3242 in k3239 in k3236 in ... */
static void C_ccall f_3608(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_3608,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3611,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3678,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:453: chicken.compiler.support#node-parameters */
t4=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3609 in k3606 in k3603 in k3683 in k3687 in k3576 in k3691 in k3695 in k3699 in rewrite-c-w-v in k3540 in k3537 in k3510 in k3507 in k3504 in k3501 in k3498 in k3495 in k3425 in k3422 in k3242 in k3239 in ... */
static void C_ccall f_3611(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_3611,c,av);}
a=C_alloc(15);
t2=C_a_i_list1(&a,1,((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3626,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3670,a[2]=((C_word*)t0)[5],a[3]=t3,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:458: chicken.base#gensym */
t5=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[51];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k3624 in k3609 in k3606 in k3603 in k3683 in k3687 in k3576 in k3691 in k3695 in k3699 in rewrite-c-w-v in k3540 in k3537 in k3510 in k3507 in k3504 in k3501 in k3498 in k3495 in k3425 in k3422 in k3242 in ... */
static void C_ccall f_3626(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_3626,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3630,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3642,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:464: chicken.compiler.support#varnode */
t5=*((C_word*)lf[49]+1);{
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

/* k3628 in k3624 in k3609 in k3606 in k3603 in k3683 in k3687 in k3576 in k3691 in k3695 in k3699 in rewrite-c-w-v in k3540 in k3537 in k3510 in k3507 in k3504 in k3501 in k3498 in k3495 in k3425 in k3422 in ... */
static void C_ccall f_3630(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_3630,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:454: chicken.compiler.support#make-node */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[48];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3640 in k3624 in k3609 in k3606 in k3603 in k3683 in k3687 in k3576 in k3691 in k3695 in k3699 in rewrite-c-w-v in k3540 in k3537 in k3510 in k3507 in k3504 in k3501 in k3498 in k3495 in k3425 in k3422 in ... */
static void C_ccall f_3642(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_3642,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:462: chicken.compiler.support#make-node */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[23];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3652 in k3668 in k3609 in k3606 in k3603 in k3683 in k3687 in k3576 in k3691 in k3695 in k3699 in rewrite-c-w-v in k3540 in k3537 in k3510 in k3507 in k3504 in k3501 in k3498 in k3495 in k3425 in k3422 in ... */
static void C_ccall f_3654(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3654,c,av);}
a=C_alloc(3);
t2=C_a_i_list1(&a,1,t1);
/* c-platform.scm:456: chicken.compiler.support#make-node */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[47];
av2[3]=((C_word*)t0)[3];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3664 in k3668 in k3609 in k3606 in k3603 in k3683 in k3687 in k3576 in k3691 in k3695 in k3699 in rewrite-c-w-v in k3540 in k3537 in k3510 in k3507 in k3504 in k3501 in k3498 in k3495 in k3425 in k3422 in ... */
static void C_ccall f_3666(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_3666,c,av);}
a=C_alloc(9);
t2=C_a_i_list3(&a,3,((C_word*)t0)[2],((C_word*)t0)[3],t1);
/* c-platform.scm:459: chicken.compiler.support#make-node */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[4];
av2[2]=lf[23];
av2[3]=((C_word*)t0)[5];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3668 in k3609 in k3606 in k3603 in k3683 in k3687 in k3576 in k3691 in k3695 in k3699 in rewrite-c-w-v in k3540 in k3537 in k3510 in k3507 in k3504 in k3501 in k3498 in k3495 in k3425 in k3422 in k3242 in ... */
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(28,c,2)))){
C_save_and_reclaim((void *)f_3670,c,av);}
a=C_alloc(28);
t2=C_a_i_list1(&a,1,((C_word*)t0)[2]);
t3=C_a_i_list4(&a,4,t1,C_SCHEME_FALSE,t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3654,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3666,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t4,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:461: chicken.compiler.support#varnode */
t7=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k3676 in k3606 in k3603 in k3683 in k3687 in k3576 in k3691 in k3695 in k3699 in rewrite-c-w-v in k3540 in k3537 in k3510 in k3507 in k3504 in k3501 in k3498 in k3495 in k3425 in k3422 in k3242 in k3239 in ... */
static void C_ccall f_3678(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3678,c,av);}
/* c-platform.scm:453: chicken.compiler.support#debugging */
t2=*((C_word*)lf[52]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[53];
av2[3]=lf[54];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k3683 in k3687 in k3576 in k3691 in k3695 in k3699 in rewrite-c-w-v in k3540 in k3537 in k3510 in k3507 in k3504 in k3501 in k3498 in k3495 in k3425 in k3422 in k3242 in k3239 in k3236 in k3080 in k3077 in ... */
static void C_ccall f_3685(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_3685,c,av);}
a=C_alloc(7);
t2=C_i_caddr(t1);
if(C_truep(C_i_listp(t2))){
t3=C_eqp(C_fix(2),C_u_i_length(t2));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3605,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* c-platform.scm:451: chicken.base#gensym */
t5=*((C_word*)lf[50]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3687 in k3576 in k3691 in k3695 in k3699 in rewrite-c-w-v in k3540 in k3537 in k3510 in k3507 in k3504 in k3501 in k3498 in k3495 in k3425 in k3422 in k3242 in k3239 in k3236 in k3080 in k3077 in k3010 in ... */
static void C_ccall f_3689(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_3689,c,av);}
a=C_alloc(7);
t2=C_eqp(lf[47],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3685,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* c-platform.scm:448: chicken.compiler.support#node-parameters */
t4=*((C_word*)lf[33]+1);{
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
else{
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3691 in k3695 in k3699 in rewrite-c-w-v in k3540 in k3537 in k3510 in k3507 in k3504 in k3501 in k3498 in k3495 in k3425 in k3422 in k3242 in k3239 in k3236 in k3080 in k3077 in k3010 in k3001 in k2994 in ... */
static void C_ccall f_3693(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_3693,c,av);}
a=C_alloc(6);
t2=C_i_car(t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3578,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:446: chicken.compiler.support#db-get */
t4=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
av2[3]=t2;
av2[4]=lf[57];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3695 in k3699 in rewrite-c-w-v in k3540 in k3537 in k3510 in k3507 in k3504 in k3501 in k3498 in k3495 in k3425 in k3422 in k3242 in k3239 in k3236 in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in ... */
static void C_ccall f_3697(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_3697,c,av);}
a=C_alloc(7);
t2=C_eqp(lf[35],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3693,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* c-platform.scm:445: chicken.compiler.support#node-parameters */
t4=*((C_word*)lf[33]+1);{
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

/* k3699 in rewrite-c-w-v in k3540 in k3537 in k3510 in k3507 in k3504 in k3501 in k3498 in k3495 in k3425 in k3422 in k3242 in k3239 in k3236 in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in ... */
static void C_ccall f_3701(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_3701,c,av);}
a=C_alloc(7);
t2=C_eqp(lf[35],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3697,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* c-platform.scm:444: chicken.compiler.support#node-class */
t4=*((C_word*)lf[34]+1);{
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

/* k3707 in k3540 in k3537 in k3510 in k3507 in k3504 in k3501 in k3498 in k3495 in k3425 in k3422 in k3242 in k3239 in k3236 in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in ... */
static void C_ccall f_3709(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3709,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3712,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:466: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[888];
av2[3]=C_fix(8);
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3710 in k3707 in k3540 in k3537 in k3510 in k3507 in k3504 in k3501 in k3498 in k3495 in k3425 in k3422 in k3242 in k3239 in k3236 in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in ... */
static void C_ccall f_3712(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3712,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3715,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:468: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[895];
av2[3]=C_fix(13);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[896];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3713 in k3710 in k3707 in k3540 in k3537 in k3510 in k3507 in k3504 in k3501 in k3498 in k3495 in k3425 in k3422 in k3242 in k3239 in k3236 in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in ... */
static void C_ccall f_3715(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3715,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3718,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:469: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[42];
av2[3]=C_fix(13);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[894];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3716 in k3713 in k3710 in k3707 in k3540 in k3537 in k3510 in k3507 in k3504 in k3501 in k3498 in k3495 in k3425 in k3422 in k3242 in k3239 in k3236 in k3080 in k3077 in k3010 in k3001 in k2994 in ... */
static void C_ccall f_3718(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3718,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3721,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:470: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[891];
av2[3]=C_fix(13);
av2[4]=C_fix(2);
av2[5]=lf[893];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3719 in k3716 in k3713 in k3710 in k3707 in k3540 in k3537 in k3510 in k3507 in k3504 in k3501 in k3498 in k3495 in k3425 in k3422 in k3242 in k3239 in k3236 in k3080 in k3077 in k3010 in k3001 in ... */
static void C_ccall f_3721(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3721,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3724,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:471: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[891];
av2[3]=C_fix(13);
av2[4]=C_fix(2);
av2[5]=lf[892];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3722 in k3719 in k3716 in k3713 in k3710 in k3707 in k3540 in k3537 in k3510 in k3507 in k3504 in k3501 in k3498 in k3495 in k3425 in k3422 in k3242 in k3239 in k3236 in k3080 in k3077 in k3010 in ... */
static void C_ccall f_3724(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3724,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3727,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:472: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[888];
av2[3]=C_fix(13);
av2[4]=C_fix(2);
av2[5]=lf[890];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3725 in k3722 in k3719 in k3716 in k3713 in k3710 in k3707 in k3540 in k3537 in k3510 in k3507 in k3504 in k3501 in k3498 in k3495 in k3425 in k3422 in k3242 in k3239 in k3236 in k3080 in k3077 in ... */
static void C_ccall f_3727(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3727,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3730,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:473: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[888];
av2[3]=C_fix(13);
av2[4]=C_fix(2);
av2[5]=lf[889];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3728 in k3725 in k3722 in k3719 in k3716 in k3713 in k3710 in k3707 in k3540 in k3537 in k3510 in k3507 in k3504 in k3501 in k3498 in k3495 in k3425 in k3422 in k3242 in k3239 in k3236 in k3080 in ... */
static void C_ccall f_3730(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3730,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3733,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:474: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[886];
av2[3]=C_fix(13);
av2[4]=C_fix(2);
av2[5]=lf[887];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3713 in k3710 in k3707 in k3540 in k3537 in k3510 in k3507 in k3504 in k3501 in k3498 in k3495 in k3425 in k3422 in k3242 in k3239 in k3236 in ... */
static void C_ccall f_3733(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3733,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3736,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:476: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[839];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[885];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3713 in k3710 in k3707 in k3540 in k3537 in k3510 in k3507 in k3504 in k3501 in k3498 in k3495 in k3425 in k3422 in k3242 in k3239 in ... */
static void C_ccall f_3736(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3736,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3739,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:477: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[837];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[884];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3713 in k3710 in k3707 in k3540 in k3537 in k3510 in k3507 in k3504 in k3501 in k3498 in k3495 in k3425 in k3422 in k3242 in ... */
static void C_ccall f_3739(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3739,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3742,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:478: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[835];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[883];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3713 in k3710 in k3707 in k3540 in k3537 in k3510 in k3507 in k3504 in k3501 in k3498 in k3495 in k3425 in k3422 in ... */
static void C_ccall f_3742(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3742,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3745,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:479: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[881];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[882];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3713 in k3710 in k3707 in k3540 in k3537 in k3510 in k3507 in k3504 in k3501 in k3498 in k3495 in k3425 in ... */
static void C_ccall f_3745(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3745,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3748,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:480: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[879];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[880];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3713 in k3710 in k3707 in k3540 in k3537 in k3510 in k3507 in k3504 in k3501 in k3498 in k3495 in ... */
static void C_ccall f_3748(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3748,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3751,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:481: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[877];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[878];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3713 in k3710 in k3707 in k3540 in k3537 in k3510 in k3507 in k3504 in k3501 in k3498 in ... */
static void C_ccall f_3751(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3751,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3754,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:482: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[875];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[876];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3713 in k3710 in k3707 in k3540 in k3537 in k3510 in k3507 in k3504 in k3501 in ... */
static void C_ccall f_3754(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3754,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3757,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:483: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[873];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[874];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3713 in k3710 in k3707 in k3540 in k3537 in k3510 in k3507 in k3504 in ... */
static void C_ccall f_3757(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3757,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3760,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:484: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[871];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[872];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3713 in k3710 in k3707 in k3540 in k3537 in k3510 in k3507 in ... */
static void C_ccall f_3760(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3760,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3763,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:485: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[833];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[870];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3713 in k3710 in k3707 in k3540 in k3537 in k3510 in ... */
static void C_ccall f_3763(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3763,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3766,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:486: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[868];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[869];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3713 in k3710 in k3707 in k3540 in k3537 in ... */
static void C_ccall f_3766(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3766,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3769,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:487: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[866];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[867];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3713 in k3710 in k3707 in k3540 in ... */
static void C_ccall f_3769(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3769,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3772,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:488: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[864];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[865];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3713 in k3710 in k3707 in ... */
static void C_ccall f_3772(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3772,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3775,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:489: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[862];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[863];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3713 in k3710 in ... */
static void C_ccall f_3775(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3775,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3778,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:490: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[860];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[861];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3713 in ... */
static void C_ccall f_3778(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3778,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3781,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:491: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[858];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[859];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in ... */
static void C_ccall f_3781(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3781,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3784,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:492: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[856];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[857];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in ... */
static void C_ccall f_3784(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3784,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3787,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:493: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[854];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[855];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in ... */
static void C_ccall f_3787(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3787,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3790,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:494: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[852];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[853];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in ... */
static void C_ccall f_3790(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3790,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3793,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:495: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[850];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[851];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in ... */
static void C_ccall f_3793(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3793,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3796,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:496: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[848];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[849];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in ... */
static void C_ccall f_3796(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3796,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3799,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:497: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[846];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[847];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in ... */
static void C_ccall f_3799(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3799,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3802,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:498: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[844];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[845];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in ... */
static void C_ccall f_3802(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3802,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3805,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:499: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[842];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[843];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3803 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in ... */
static void C_ccall f_3805(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3805,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3808,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:500: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[831];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[841];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3806 in k3803 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in ... */
static void C_ccall f_3808(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3808,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3811,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:502: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[839];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[840];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3809 in k3806 in k3803 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in ... */
static void C_ccall f_3811(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3811,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3814,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:503: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[837];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[838];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3812 in k3809 in k3806 in k3803 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in ... */
static void C_ccall f_3814(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3814,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3817,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:504: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[835];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[836];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3815 in k3812 in k3809 in k3806 in k3803 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in ... */
static void C_ccall f_3817(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3817,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3820,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:505: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[833];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[834];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3818 in k3815 in k3812 in k3809 in k3806 in k3803 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in ... */
static void C_ccall f_3820(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3820,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3823,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:506: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[831];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[832];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3821 in k3818 in k3815 in k3812 in k3809 in k3806 in k3803 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in ... */
static void C_ccall f_3823(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3823,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3826,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:508: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[828];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[830];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3824 in k3821 in k3818 in k3815 in k3812 in k3809 in k3806 in k3803 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in ... */
static void C_ccall f_3826(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3826,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3829,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:509: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[828];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[829];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3827 in k3824 in k3821 in k3818 in k3815 in k3812 in k3809 in k3806 in k3803 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in ... */
static void C_ccall f_3829(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3829,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3832,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:511: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[826];
av2[3]=C_fix(1);
av2[4]=C_fix(2);
av2[5]=lf[827];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k3830 in k3827 in k3824 in k3821 in k3818 in k3815 in k3812 in k3809 in k3806 in k3803 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in ... */
static void C_ccall f_3832(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3832,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3835,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:512: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[824];
av2[3]=C_fix(1);
av2[4]=C_fix(2);
av2[5]=lf[825];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k3833 in k3830 in k3827 in k3824 in k3821 in k3818 in k3815 in k3812 in k3809 in k3806 in k3803 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in ... */
static void C_ccall f_3835(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3835,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3838,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:513: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[822];
av2[3]=C_fix(1);
av2[4]=C_fix(2);
av2[5]=lf[823];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k3836 in k3833 in k3830 in k3827 in k3824 in k3821 in k3818 in k3815 in k3812 in k3809 in k3806 in k3803 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in ... */
static void C_ccall f_3838(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3838,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3841,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:514: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[820];
av2[3]=C_fix(1);
av2[4]=C_fix(2);
av2[5]=lf[821];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k3839 in k3836 in k3833 in k3830 in k3827 in k3824 in k3821 in k3818 in k3815 in k3812 in k3809 in k3806 in k3803 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in ... */
static void C_ccall f_3841(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3841,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3844,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:516: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[817];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[819];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3842 in k3839 in k3836 in k3833 in k3830 in k3827 in k3824 in k3821 in k3818 in k3815 in k3812 in k3809 in k3806 in k3803 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in ... */
static void C_ccall f_3844(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3844,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3847,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:517: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[817];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[818];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3845 in k3842 in k3839 in k3836 in k3833 in k3830 in k3827 in k3824 in k3821 in k3818 in k3815 in k3812 in k3809 in k3806 in k3803 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in ... */
static void C_ccall f_3847(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3847,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3850,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:518: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[815];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[816];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3848 in k3845 in k3842 in k3839 in k3836 in k3833 in k3830 in k3827 in k3824 in k3821 in k3818 in k3815 in k3812 in k3809 in k3806 in k3803 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in ... */
static void C_ccall f_3850(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3850,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3853,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:519: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[813];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[814];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3851 in k3848 in k3845 in k3842 in k3839 in k3836 in k3833 in k3830 in k3827 in k3824 in k3821 in k3818 in k3815 in k3812 in k3809 in k3806 in k3803 in k3800 in k3797 in k3794 in k3791 in k3788 in ... */
static void C_ccall f_3853(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3853,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3856,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:520: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[811];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[812];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3854 in k3851 in k3848 in k3845 in k3842 in k3839 in k3836 in k3833 in k3830 in k3827 in k3824 in k3821 in k3818 in k3815 in k3812 in k3809 in k3806 in k3803 in k3800 in k3797 in k3794 in k3791 in ... */
static void C_ccall f_3856(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3856,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3859,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:521: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[809];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[810];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3857 in k3854 in k3851 in k3848 in k3845 in k3842 in k3839 in k3836 in k3833 in k3830 in k3827 in k3824 in k3821 in k3818 in k3815 in k3812 in k3809 in k3806 in k3803 in k3800 in k3797 in k3794 in ... */
static void C_ccall f_3859(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3859,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3862,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:522: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[807];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[808];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3860 in k3857 in k3854 in k3851 in k3848 in k3845 in k3842 in k3839 in k3836 in k3833 in k3830 in k3827 in k3824 in k3821 in k3818 in k3815 in k3812 in k3809 in k3806 in k3803 in k3800 in k3797 in ... */
static void C_ccall f_3862(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3862,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3865,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:523: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[805];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[806];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3863 in k3860 in k3857 in k3854 in k3851 in k3848 in k3845 in k3842 in k3839 in k3836 in k3833 in k3830 in k3827 in k3824 in k3821 in k3818 in k3815 in k3812 in k3809 in k3806 in k3803 in k3800 in ... */
static void C_ccall f_3865(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3865,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3868,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:524: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[803];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[804];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3866 in k3863 in k3860 in k3857 in k3854 in k3851 in k3848 in k3845 in k3842 in k3839 in k3836 in k3833 in k3830 in k3827 in k3824 in k3821 in k3818 in k3815 in k3812 in k3809 in k3806 in k3803 in ... */
static void C_ccall f_3868(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3868,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3871,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:525: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[801];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[802];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3869 in k3866 in k3863 in k3860 in k3857 in k3854 in k3851 in k3848 in k3845 in k3842 in k3839 in k3836 in k3833 in k3830 in k3827 in k3824 in k3821 in k3818 in k3815 in k3812 in k3809 in k3806 in ... */
static void C_ccall f_3871(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3871,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3874,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:526: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[799];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[800];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3872 in k3869 in k3866 in k3863 in k3860 in k3857 in k3854 in k3851 in k3848 in k3845 in k3842 in k3839 in k3836 in k3833 in k3830 in k3827 in k3824 in k3821 in k3818 in k3815 in k3812 in k3809 in ... */
static void C_ccall f_3874(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3874,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3877,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:527: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[797];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[798];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3875 in k3872 in k3869 in k3866 in k3863 in k3860 in k3857 in k3854 in k3851 in k3848 in k3845 in k3842 in k3839 in k3836 in k3833 in k3830 in k3827 in k3824 in k3821 in k3818 in k3815 in k3812 in ... */
static void C_ccall f_3877(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3877,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3880,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:528: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[795];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[796];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3878 in k3875 in k3872 in k3869 in k3866 in k3863 in k3860 in k3857 in k3854 in k3851 in k3848 in k3845 in k3842 in k3839 in k3836 in k3833 in k3830 in k3827 in k3824 in k3821 in k3818 in k3815 in ... */
static void C_ccall f_3880(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3880,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3883,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:529: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[793];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[794];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3881 in k3878 in k3875 in k3872 in k3869 in k3866 in k3863 in k3860 in k3857 in k3854 in k3851 in k3848 in k3845 in k3842 in k3839 in k3836 in k3833 in k3830 in k3827 in k3824 in k3821 in k3818 in ... */
static void C_ccall f_3883(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3883,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3886,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:530: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[791];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[792];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3884 in k3881 in k3878 in k3875 in k3872 in k3869 in k3866 in k3863 in k3860 in k3857 in k3854 in k3851 in k3848 in k3845 in k3842 in k3839 in k3836 in k3833 in k3830 in k3827 in k3824 in k3821 in ... */
static void C_ccall f_3886(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3886,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3889,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:531: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[789];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[790];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3887 in k3884 in k3881 in k3878 in k3875 in k3872 in k3869 in k3866 in k3863 in k3860 in k3857 in k3854 in k3851 in k3848 in k3845 in k3842 in k3839 in k3836 in k3833 in k3830 in k3827 in k3824 in ... */
static void C_ccall f_3889(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3889,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3892,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:532: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[787];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[788];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3890 in k3887 in k3884 in k3881 in k3878 in k3875 in k3872 in k3869 in k3866 in k3863 in k3860 in k3857 in k3854 in k3851 in k3848 in k3845 in k3842 in k3839 in k3836 in k3833 in k3830 in k3827 in ... */
static void C_ccall f_3892(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3892,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3895,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:533: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[785];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[786];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3893 in k3890 in k3887 in k3884 in k3881 in k3878 in k3875 in k3872 in k3869 in k3866 in k3863 in k3860 in k3857 in k3854 in k3851 in k3848 in k3845 in k3842 in k3839 in k3836 in k3833 in k3830 in ... */
static void C_ccall f_3895(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3895,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3898,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:534: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[783];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[784];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3896 in k3893 in k3890 in k3887 in k3884 in k3881 in k3878 in k3875 in k3872 in k3869 in k3866 in k3863 in k3860 in k3857 in k3854 in k3851 in k3848 in k3845 in k3842 in k3839 in k3836 in k3833 in ... */
static void C_ccall f_3898(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3898,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3901,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:535: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[781];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[782];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3899 in k3896 in k3893 in k3890 in k3887 in k3884 in k3881 in k3878 in k3875 in k3872 in k3869 in k3866 in k3863 in k3860 in k3857 in k3854 in k3851 in k3848 in k3845 in k3842 in k3839 in k3836 in ... */
static void C_ccall f_3901(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3901,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3904,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:536: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[779];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[780];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3902 in k3899 in k3896 in k3893 in k3890 in k3887 in k3884 in k3881 in k3878 in k3875 in k3872 in k3869 in k3866 in k3863 in k3860 in k3857 in k3854 in k3851 in k3848 in k3845 in k3842 in k3839 in ... */
static void C_ccall f_3904(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3904,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3907,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:537: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[777];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[778];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3905 in k3902 in k3899 in k3896 in k3893 in k3890 in k3887 in k3884 in k3881 in k3878 in k3875 in k3872 in k3869 in k3866 in k3863 in k3860 in k3857 in k3854 in k3851 in k3848 in k3845 in k3842 in ... */
static void C_ccall f_3907(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3907,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3910,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:538: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[775];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[776];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3908 in k3905 in k3902 in k3899 in k3896 in k3893 in k3890 in k3887 in k3884 in k3881 in k3878 in k3875 in k3872 in k3869 in k3866 in k3863 in k3860 in k3857 in k3854 in k3851 in k3848 in k3845 in ... */
static void C_ccall f_3910(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3910,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3913,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:539: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[773];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[774];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3911 in k3908 in k3905 in k3902 in k3899 in k3896 in k3893 in k3890 in k3887 in k3884 in k3881 in k3878 in k3875 in k3872 in k3869 in k3866 in k3863 in k3860 in k3857 in k3854 in k3851 in k3848 in ... */
static void C_ccall f_3913(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3913,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3916,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:540: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[771];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[772];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3914 in k3911 in k3908 in k3905 in k3902 in k3899 in k3896 in k3893 in k3890 in k3887 in k3884 in k3881 in k3878 in k3875 in k3872 in k3869 in k3866 in k3863 in k3860 in k3857 in k3854 in k3851 in ... */
static void C_ccall f_3916(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3916,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3919,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:541: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[769];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[770];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3917 in k3914 in k3911 in k3908 in k3905 in k3902 in k3899 in k3896 in k3893 in k3890 in k3887 in k3884 in k3881 in k3878 in k3875 in k3872 in k3869 in k3866 in k3863 in k3860 in k3857 in k3854 in ... */
static void C_ccall f_3919(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3919,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3922,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:542: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[767];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[768];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3920 in k3917 in k3914 in k3911 in k3908 in k3905 in k3902 in k3899 in k3896 in k3893 in k3890 in k3887 in k3884 in k3881 in k3878 in k3875 in k3872 in k3869 in k3866 in k3863 in k3860 in k3857 in ... */
static void C_ccall f_3922(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3922,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3925,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:543: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[765];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[766];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3923 in k3920 in k3917 in k3914 in k3911 in k3908 in k3905 in k3902 in k3899 in k3896 in k3893 in k3890 in k3887 in k3884 in k3881 in k3878 in k3875 in k3872 in k3869 in k3866 in k3863 in k3860 in ... */
static void C_ccall f_3925(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3925,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3928,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:544: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[763];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[764];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3926 in k3923 in k3920 in k3917 in k3914 in k3911 in k3908 in k3905 in k3902 in k3899 in k3896 in k3893 in k3890 in k3887 in k3884 in k3881 in k3878 in k3875 in k3872 in k3869 in k3866 in k3863 in ... */
static void C_ccall f_3928(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3928,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3931,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:545: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[761];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[762];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3929 in k3926 in k3923 in k3920 in k3917 in k3914 in k3911 in k3908 in k3905 in k3902 in k3899 in k3896 in k3893 in k3890 in k3887 in k3884 in k3881 in k3878 in k3875 in k3872 in k3869 in k3866 in ... */
static void C_ccall f_3931(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3931,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3934,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:546: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[759];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[760];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3932 in k3929 in k3926 in k3923 in k3920 in k3917 in k3914 in k3911 in k3908 in k3905 in k3902 in k3899 in k3896 in k3893 in k3890 in k3887 in k3884 in k3881 in k3878 in k3875 in k3872 in k3869 in ... */
static void C_ccall f_3934(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3934,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3937,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:547: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[757];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[758];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3935 in k3932 in k3929 in k3926 in k3923 in k3920 in k3917 in k3914 in k3911 in k3908 in k3905 in k3902 in k3899 in k3896 in k3893 in k3890 in k3887 in k3884 in k3881 in k3878 in k3875 in k3872 in ... */
static void C_ccall f_3937(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3937,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3940,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:548: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[755];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[756];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3938 in k3935 in k3932 in k3929 in k3926 in k3923 in k3920 in k3917 in k3914 in k3911 in k3908 in k3905 in k3902 in k3899 in k3896 in k3893 in k3890 in k3887 in k3884 in k3881 in k3878 in k3875 in ... */
static void C_ccall f_3940(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3940,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3943,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:549: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[753];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[754];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3941 in k3938 in k3935 in k3932 in k3929 in k3926 in k3923 in k3920 in k3917 in k3914 in k3911 in k3908 in k3905 in k3902 in k3899 in k3896 in k3893 in k3890 in k3887 in k3884 in k3881 in k3878 in ... */
static void C_ccall f_3943(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3943,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3946,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:550: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[751];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[752];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3944 in k3941 in k3938 in k3935 in k3932 in k3929 in k3926 in k3923 in k3920 in k3917 in k3914 in k3911 in k3908 in k3905 in k3902 in k3899 in k3896 in k3893 in k3890 in k3887 in k3884 in k3881 in ... */
static void C_ccall f_3946(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3946,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3949,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:551: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[749];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[750];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3947 in k3944 in k3941 in k3938 in k3935 in k3932 in k3929 in k3926 in k3923 in k3920 in k3917 in k3914 in k3911 in k3908 in k3905 in k3902 in k3899 in k3896 in k3893 in k3890 in k3887 in k3884 in ... */
static void C_ccall f_3949(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3949,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3952,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:552: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[747];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[748];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3950 in k3947 in k3944 in k3941 in k3938 in k3935 in k3932 in k3929 in k3926 in k3923 in k3920 in k3917 in k3914 in k3911 in k3908 in k3905 in k3902 in k3899 in k3896 in k3893 in k3890 in k3887 in ... */
static void C_ccall f_3952(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3952,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3955,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:553: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[745];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[746];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3953 in k3950 in k3947 in k3944 in k3941 in k3938 in k3935 in k3932 in k3929 in k3926 in k3923 in k3920 in k3917 in k3914 in k3911 in k3908 in k3905 in k3902 in k3899 in k3896 in k3893 in k3890 in ... */
static void C_ccall f_3955(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3955,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3958,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:554: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[743];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[744];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3956 in k3953 in k3950 in k3947 in k3944 in k3941 in k3938 in k3935 in k3932 in k3929 in k3926 in k3923 in k3920 in k3917 in k3914 in k3911 in k3908 in k3905 in k3902 in k3899 in k3896 in k3893 in ... */
static void C_ccall f_3958(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3958,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3961,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:555: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[741];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[742];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3959 in k3956 in k3953 in k3950 in k3947 in k3944 in k3941 in k3938 in k3935 in k3932 in k3929 in k3926 in k3923 in k3920 in k3917 in k3914 in k3911 in k3908 in k3905 in k3902 in k3899 in k3896 in ... */
static void C_ccall f_3961(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3961,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3964,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:556: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[739];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[740];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3962 in k3959 in k3956 in k3953 in k3950 in k3947 in k3944 in k3941 in k3938 in k3935 in k3932 in k3929 in k3926 in k3923 in k3920 in k3917 in k3914 in k3911 in k3908 in k3905 in k3902 in k3899 in ... */
static void C_ccall f_3964(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3964,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3967,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:557: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[737];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[738];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3965 in k3962 in k3959 in k3956 in k3953 in k3950 in k3947 in k3944 in k3941 in k3938 in k3935 in k3932 in k3929 in k3926 in k3923 in k3920 in k3917 in k3914 in k3911 in k3908 in k3905 in k3902 in ... */
static void C_ccall f_3967(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3967,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3970,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:558: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[735];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[736];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3968 in k3965 in k3962 in k3959 in k3956 in k3953 in k3950 in k3947 in k3944 in k3941 in k3938 in k3935 in k3932 in k3929 in k3926 in k3923 in k3920 in k3917 in k3914 in k3911 in k3908 in k3905 in ... */
static void C_ccall f_3970(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3970,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3973,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:559: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[733];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[734];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3971 in k3968 in k3965 in k3962 in k3959 in k3956 in k3953 in k3950 in k3947 in k3944 in k3941 in k3938 in k3935 in k3932 in k3929 in k3926 in k3923 in k3920 in k3917 in k3914 in k3911 in k3908 in ... */
static void C_ccall f_3973(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3973,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3976,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:560: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[731];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[732];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3974 in k3971 in k3968 in k3965 in k3962 in k3959 in k3956 in k3953 in k3950 in k3947 in k3944 in k3941 in k3938 in k3935 in k3932 in k3929 in k3926 in k3923 in k3920 in k3917 in k3914 in k3911 in ... */
static void C_ccall f_3976(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3976,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3979,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:561: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[729];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[730];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3977 in k3974 in k3971 in k3968 in k3965 in k3962 in k3959 in k3956 in k3953 in k3950 in k3947 in k3944 in k3941 in k3938 in k3935 in k3932 in k3929 in k3926 in k3923 in k3920 in k3917 in k3914 in ... */
static void C_ccall f_3979(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3979,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3982,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:562: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[726];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[728];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3980 in k3977 in k3974 in k3971 in k3968 in k3965 in k3962 in k3959 in k3956 in k3953 in k3950 in k3947 in k3944 in k3941 in k3938 in k3935 in k3932 in k3929 in k3926 in k3923 in k3920 in k3917 in ... */
static void C_ccall f_3982(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3982,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3985,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:563: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[726];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[727];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3983 in k3980 in k3977 in k3974 in k3971 in k3968 in k3965 in k3962 in k3959 in k3956 in k3953 in k3950 in k3947 in k3944 in k3941 in k3938 in k3935 in k3932 in k3929 in k3926 in k3923 in k3920 in ... */
static void C_ccall f_3985(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3985,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3988,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:564: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[723];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[725];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3986 in k3983 in k3980 in k3977 in k3974 in k3971 in k3968 in k3965 in k3962 in k3959 in k3956 in k3953 in k3950 in k3947 in k3944 in k3941 in k3938 in k3935 in k3932 in k3929 in k3926 in k3923 in ... */
static void C_ccall f_3988(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3988,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3991,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:565: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[723];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[724];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3989 in k3986 in k3983 in k3980 in k3977 in k3974 in k3971 in k3968 in k3965 in k3962 in k3959 in k3956 in k3953 in k3950 in k3947 in k3944 in k3941 in k3938 in k3935 in k3932 in k3929 in k3926 in ... */
static void C_ccall f_3991(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3991,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3994,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:566: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[721];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[722];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3992 in k3989 in k3986 in k3983 in k3980 in k3977 in k3974 in k3971 in k3968 in k3965 in k3962 in k3959 in k3956 in k3953 in k3950 in k3947 in k3944 in k3941 in k3938 in k3935 in k3932 in k3929 in ... */
static void C_ccall f_3994(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3994,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3997,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:567: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[719];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[720];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3995 in k3992 in k3989 in k3986 in k3983 in k3980 in k3977 in k3974 in k3971 in k3968 in k3965 in k3962 in k3959 in k3956 in k3953 in k3950 in k3947 in k3944 in k3941 in k3938 in k3935 in k3932 in ... */
static void C_ccall f_3997(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3997,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4000,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:568: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[716];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[718];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k3998 in k3995 in k3992 in k3989 in k3986 in k3983 in k3980 in k3977 in k3974 in k3971 in k3968 in k3965 in k3962 in k3959 in k3956 in k3953 in k3950 in k3947 in k3944 in k3941 in k3938 in k3935 in ... */
static void C_ccall f_4000(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4000,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4003,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:569: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[716];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[717];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4001 in k3998 in k3995 in k3992 in k3989 in k3986 in k3983 in k3980 in k3977 in k3974 in k3971 in k3968 in k3965 in k3962 in k3959 in k3956 in k3953 in k3950 in k3947 in k3944 in k3941 in k3938 in ... */
static void C_ccall f_4003(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4003,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4006,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:570: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[713];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[715];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4004 in k4001 in k3998 in k3995 in k3992 in k3989 in k3986 in k3983 in k3980 in k3977 in k3974 in k3971 in k3968 in k3965 in k3962 in k3959 in k3956 in k3953 in k3950 in k3947 in k3944 in k3941 in ... */
static void C_ccall f_4006(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4006,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4009,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:571: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[713];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[714];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4007 in k4004 in k4001 in k3998 in k3995 in k3992 in k3989 in k3986 in k3983 in k3980 in k3977 in k3974 in k3971 in k3968 in k3965 in k3962 in k3959 in k3956 in k3953 in k3950 in k3947 in k3944 in ... */
static void C_ccall f_4009(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4009,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4012,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:572: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[710];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[712];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4010 in k4007 in k4004 in k4001 in k3998 in k3995 in k3992 in k3989 in k3986 in k3983 in k3980 in k3977 in k3974 in k3971 in k3968 in k3965 in k3962 in k3959 in k3956 in k3953 in k3950 in k3947 in ... */
static void C_ccall f_4012(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4012,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4015,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:573: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[710];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[711];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4013 in k4010 in k4007 in k4004 in k4001 in k3998 in k3995 in k3992 in k3989 in k3986 in k3983 in k3980 in k3977 in k3974 in k3971 in k3968 in k3965 in k3962 in k3959 in k3956 in k3953 in k3950 in ... */
static void C_ccall f_4015(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4015,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4018,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:574: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[707];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[709];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4016 in k4013 in k4010 in k4007 in k4004 in k4001 in k3998 in k3995 in k3992 in k3989 in k3986 in k3983 in k3980 in k3977 in k3974 in k3971 in k3968 in k3965 in k3962 in k3959 in k3956 in k3953 in ... */
static void C_ccall f_4018(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4018,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4021,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:575: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[707];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[708];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4019 in k4016 in k4013 in k4010 in k4007 in k4004 in k4001 in k3998 in k3995 in k3992 in k3989 in k3986 in k3983 in k3980 in k3977 in k3974 in k3971 in k3968 in k3965 in k3962 in k3959 in k3956 in ... */
static void C_ccall f_4021(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4021,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4024,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:576: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[704];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[706];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4022 in k4019 in k4016 in k4013 in k4010 in k4007 in k4004 in k4001 in k3998 in k3995 in k3992 in k3989 in k3986 in k3983 in k3980 in k3977 in k3974 in k3971 in k3968 in k3965 in k3962 in k3959 in ... */
static void C_ccall f_4024(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4024,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4027,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:577: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[704];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[705];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4025 in k4022 in k4019 in k4016 in k4013 in k4010 in k4007 in k4004 in k4001 in k3998 in k3995 in k3992 in k3989 in k3986 in k3983 in k3980 in k3977 in k3974 in k3971 in k3968 in k3965 in k3962 in ... */
static void C_ccall f_4027(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4027,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4030,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:578: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[701];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[703];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4028 in k4025 in k4022 in k4019 in k4016 in k4013 in k4010 in k4007 in k4004 in k4001 in k3998 in k3995 in k3992 in k3989 in k3986 in k3983 in k3980 in k3977 in k3974 in k3971 in k3968 in k3965 in ... */
static void C_ccall f_4030(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4030,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4033,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:579: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[701];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[702];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4031 in k4028 in k4025 in k4022 in k4019 in k4016 in k4013 in k4010 in k4007 in k4004 in k4001 in k3998 in k3995 in k3992 in k3989 in k3986 in k3983 in k3980 in k3977 in k3974 in k3971 in k3968 in ... */
static void C_ccall f_4033(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4033,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4036,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:580: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[698];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[700];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4034 in k4031 in k4028 in k4025 in k4022 in k4019 in k4016 in k4013 in k4010 in k4007 in k4004 in k4001 in k3998 in k3995 in k3992 in k3989 in k3986 in k3983 in k3980 in k3977 in k3974 in k3971 in ... */
static void C_ccall f_4036(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4036,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4039,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:581: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[698];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[699];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4037 in k4034 in k4031 in k4028 in k4025 in k4022 in k4019 in k4016 in k4013 in k4010 in k4007 in k4004 in k4001 in k3998 in k3995 in k3992 in k3989 in k3986 in k3983 in k3980 in k3977 in k3974 in ... */
static void C_ccall f_4039(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4039,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4042,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:582: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[695];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[697];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4040 in k4037 in k4034 in k4031 in k4028 in k4025 in k4022 in k4019 in k4016 in k4013 in k4010 in k4007 in k4004 in k4001 in k3998 in k3995 in k3992 in k3989 in k3986 in k3983 in k3980 in k3977 in ... */
static void C_ccall f_4042(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4042,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4045,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:583: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[695];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[696];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4043 in k4040 in k4037 in k4034 in k4031 in k4028 in k4025 in k4022 in k4019 in k4016 in k4013 in k4010 in k4007 in k4004 in k4001 in k3998 in k3995 in k3992 in k3989 in k3986 in k3983 in k3980 in ... */
static void C_ccall f_4045(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4045,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4048,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:584: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[693];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[694];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4046 in k4043 in k4040 in k4037 in k4034 in k4031 in k4028 in k4025 in k4022 in k4019 in k4016 in k4013 in k4010 in k4007 in k4004 in k4001 in k3998 in k3995 in k3992 in k3989 in k3986 in k3983 in ... */
static void C_ccall f_4048(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4048,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4051,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:585: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[691];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[692];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4049 in k4046 in k4043 in k4040 in k4037 in k4034 in k4031 in k4028 in k4025 in k4022 in k4019 in k4016 in k4013 in k4010 in k4007 in k4004 in k4001 in k3998 in k3995 in k3992 in k3989 in k3986 in ... */
static void C_ccall f_4051(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4051,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4054,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:586: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[689];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[690];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4052 in k4049 in k4046 in k4043 in k4040 in k4037 in k4034 in k4031 in k4028 in k4025 in k4022 in k4019 in k4016 in k4013 in k4010 in k4007 in k4004 in k4001 in k3998 in k3995 in k3992 in k3989 in ... */
static void C_ccall f_4054(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4054,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4057,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:587: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[687];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[688];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4055 in k4052 in k4049 in k4046 in k4043 in k4040 in k4037 in k4034 in k4031 in k4028 in k4025 in k4022 in k4019 in k4016 in k4013 in k4010 in k4007 in k4004 in k4001 in k3998 in k3995 in k3992 in ... */
static void C_ccall f_4057(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4057,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4060,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:588: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[685];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[686];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4058 in k4055 in k4052 in k4049 in k4046 in k4043 in k4040 in k4037 in k4034 in k4031 in k4028 in k4025 in k4022 in k4019 in k4016 in k4013 in k4010 in k4007 in k4004 in k4001 in k3998 in k3995 in ... */
static void C_ccall f_4060(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4060,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4063,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:589: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[683];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[684];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4061 in k4058 in k4055 in k4052 in k4049 in k4046 in k4043 in k4040 in k4037 in k4034 in k4031 in k4028 in k4025 in k4022 in k4019 in k4016 in k4013 in k4010 in k4007 in k4004 in k4001 in k3998 in ... */
static void C_ccall f_4063(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4063,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4066,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:590: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[681];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[682];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4064 in k4061 in k4058 in k4055 in k4052 in k4049 in k4046 in k4043 in k4040 in k4037 in k4034 in k4031 in k4028 in k4025 in k4022 in k4019 in k4016 in k4013 in k4010 in k4007 in k4004 in k4001 in ... */
static void C_ccall f_4066(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4066,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4069,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:591: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[679];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[680];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in k4049 in k4046 in k4043 in k4040 in k4037 in k4034 in k4031 in k4028 in k4025 in k4022 in k4019 in k4016 in k4013 in k4010 in k4007 in k4004 in ... */
static void C_ccall f_4069(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4069,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4072,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:592: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[677];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[678];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in k4049 in k4046 in k4043 in k4040 in k4037 in k4034 in k4031 in k4028 in k4025 in k4022 in k4019 in k4016 in k4013 in k4010 in k4007 in ... */
static void C_ccall f_4072(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4072,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4075,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:593: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[675];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[676];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in k4049 in k4046 in k4043 in k4040 in k4037 in k4034 in k4031 in k4028 in k4025 in k4022 in k4019 in k4016 in k4013 in k4010 in ... */
static void C_ccall f_4075(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4075,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4078,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:594: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[673];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[674];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4076 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in k4049 in k4046 in k4043 in k4040 in k4037 in k4034 in k4031 in k4028 in k4025 in k4022 in k4019 in k4016 in k4013 in ... */
static void C_ccall f_4078(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4078,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4081,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:595: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[671];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[672];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4079 in k4076 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in k4049 in k4046 in k4043 in k4040 in k4037 in k4034 in k4031 in k4028 in k4025 in k4022 in k4019 in k4016 in ... */
static void C_ccall f_4081(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4081,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4084,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:596: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[669];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[670];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4082 in k4079 in k4076 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in k4049 in k4046 in k4043 in k4040 in k4037 in k4034 in k4031 in k4028 in k4025 in k4022 in k4019 in ... */
static void C_ccall f_4084(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4084,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4087,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:597: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[667];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[668];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in k4049 in k4046 in k4043 in k4040 in k4037 in k4034 in k4031 in k4028 in k4025 in k4022 in ... */
static void C_ccall f_4087(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4087,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4090,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:598: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[665];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[666];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in k4049 in k4046 in k4043 in k4040 in k4037 in k4034 in k4031 in k4028 in k4025 in ... */
static void C_ccall f_4090(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4090,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4093,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:599: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[663];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[664];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in k4049 in k4046 in k4043 in k4040 in k4037 in k4034 in k4031 in k4028 in ... */
static void C_ccall f_4093(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4093,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4096,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:600: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[661];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[662];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4094 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in k4049 in k4046 in k4043 in k4040 in k4037 in k4034 in k4031 in ... */
static void C_ccall f_4096(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4096,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4099,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:601: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[659];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[660];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4097 in k4094 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in k4049 in k4046 in k4043 in k4040 in k4037 in k4034 in ... */
static void C_ccall f_4099(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4099,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4102,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:602: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[657];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[658];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4100 in k4097 in k4094 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in k4049 in k4046 in k4043 in k4040 in k4037 in ... */
static void C_ccall f_4102(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4102,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4105,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:603: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[655];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[656];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4103 in k4100 in k4097 in k4094 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in k4049 in k4046 in k4043 in k4040 in ... */
static void C_ccall f_4105(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4105,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4108,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:604: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[653];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[654];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4106 in k4103 in k4100 in k4097 in k4094 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in k4049 in k4046 in k4043 in ... */
static void C_ccall f_4108(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4108,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4111,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:605: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[651];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[652];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4109 in k4106 in k4103 in k4100 in k4097 in k4094 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in k4049 in k4046 in ... */
static void C_ccall f_4111(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4111,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4114,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:606: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[649];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[650];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4112 in k4109 in k4106 in k4103 in k4100 in k4097 in k4094 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in k4049 in ... */
static void C_ccall f_4114(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4114,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4117,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:607: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[647];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[648];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4115 in k4112 in k4109 in k4106 in k4103 in k4100 in k4097 in k4094 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in ... */
static void C_ccall f_4117(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4117,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4120,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:608: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[645];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[646];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4118 in k4115 in k4112 in k4109 in k4106 in k4103 in k4100 in k4097 in k4094 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in ... */
static void C_ccall f_4120(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4120,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4123,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:609: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[643];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[644];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4121 in k4118 in k4115 in k4112 in k4109 in k4106 in k4103 in k4100 in k4097 in k4094 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in ... */
static void C_ccall f_4123(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4123,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4126,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:610: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[641];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[642];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4124 in k4121 in k4118 in k4115 in k4112 in k4109 in k4106 in k4103 in k4100 in k4097 in k4094 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4067 in k4064 in k4061 in ... */
static void C_ccall f_4126(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4126,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4129,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:611: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[639];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[640];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4127 in k4124 in k4121 in k4118 in k4115 in k4112 in k4109 in k4106 in k4103 in k4100 in k4097 in k4094 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4067 in k4064 in ... */
static void C_ccall f_4129(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4129,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4132,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:612: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[637];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[638];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4130 in k4127 in k4124 in k4121 in k4118 in k4115 in k4112 in k4109 in k4106 in k4103 in k4100 in k4097 in k4094 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4067 in ... */
static void C_ccall f_4132(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4132,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4135,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:613: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[635];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[636];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4133 in k4130 in k4127 in k4124 in k4121 in k4118 in k4115 in k4112 in k4109 in k4106 in k4103 in k4100 in k4097 in k4094 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in ... */
static void C_ccall f_4135(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4135,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4138,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:614: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[633];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[634];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4136 in k4133 in k4130 in k4127 in k4124 in k4121 in k4118 in k4115 in k4112 in k4109 in k4106 in k4103 in k4100 in k4097 in k4094 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in ... */
static void C_ccall f_4138(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4138,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4141,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:615: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[631];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[632];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4139 in k4136 in k4133 in k4130 in k4127 in k4124 in k4121 in k4118 in k4115 in k4112 in k4109 in k4106 in k4103 in k4100 in k4097 in k4094 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in ... */
static void C_ccall f_4141(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4141,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4144,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:616: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[629];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[630];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4142 in k4139 in k4136 in k4133 in k4130 in k4127 in k4124 in k4121 in k4118 in k4115 in k4112 in k4109 in k4106 in k4103 in k4100 in k4097 in k4094 in k4091 in k4088 in k4085 in k4082 in k4079 in ... */
static void C_ccall f_4144(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4144,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4147,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:617: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[627];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[628];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4145 in k4142 in k4139 in k4136 in k4133 in k4130 in k4127 in k4124 in k4121 in k4118 in k4115 in k4112 in k4109 in k4106 in k4103 in k4100 in k4097 in k4094 in k4091 in k4088 in k4085 in k4082 in ... */
static void C_ccall f_4147(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4147,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4150,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:618: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[625];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[626];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4148 in k4145 in k4142 in k4139 in k4136 in k4133 in k4130 in k4127 in k4124 in k4121 in k4118 in k4115 in k4112 in k4109 in k4106 in k4103 in k4100 in k4097 in k4094 in k4091 in k4088 in k4085 in ... */
static void C_ccall f_4150(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4150,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4153,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:619: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[623];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[624];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4151 in k4148 in k4145 in k4142 in k4139 in k4136 in k4133 in k4130 in k4127 in k4124 in k4121 in k4118 in k4115 in k4112 in k4109 in k4106 in k4103 in k4100 in k4097 in k4094 in k4091 in k4088 in ... */
static void C_ccall f_4153(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4153,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4156,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:620: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[621];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[622];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4154 in k4151 in k4148 in k4145 in k4142 in k4139 in k4136 in k4133 in k4130 in k4127 in k4124 in k4121 in k4118 in k4115 in k4112 in k4109 in k4106 in k4103 in k4100 in k4097 in k4094 in k4091 in ... */
static void C_ccall f_4156(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4156,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4159,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:622: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[617];
av2[3]=C_fix(14);
av2[4]=lf[24];
av2[5]=C_fix(2);
av2[6]=lf[619];
av2[7]=lf[620];
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4157 in k4154 in k4151 in k4148 in k4145 in k4142 in k4139 in k4136 in k4133 in k4130 in k4127 in k4124 in k4121 in k4118 in k4115 in k4112 in k4109 in k4106 in k4103 in k4100 in k4097 in k4094 in ... */
static void C_ccall f_4159(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4159,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4162,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:623: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[617];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[618];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4160 in k4157 in k4154 in k4151 in k4148 in k4145 in k4142 in k4139 in k4136 in k4133 in k4130 in k4127 in k4124 in k4121 in k4118 in k4115 in k4112 in k4109 in k4106 in k4103 in k4100 in k4097 in ... */
static void C_ccall f_4162(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4162,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4165,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:624: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[613];
av2[3]=C_fix(14);
av2[4]=lf[24];
av2[5]=C_fix(2);
av2[6]=lf[615];
av2[7]=lf[616];
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4163 in k4160 in k4157 in k4154 in k4151 in k4148 in k4145 in k4142 in k4139 in k4136 in k4133 in k4130 in k4127 in k4124 in k4121 in k4118 in k4115 in k4112 in k4109 in k4106 in k4103 in k4100 in ... */
static void C_ccall f_4165(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4165,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4168,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:625: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[613];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[614];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4166 in k4163 in k4160 in k4157 in k4154 in k4151 in k4148 in k4145 in k4142 in k4139 in k4136 in k4133 in k4130 in k4127 in k4124 in k4121 in k4118 in k4115 in k4112 in k4109 in k4106 in k4103 in ... */
static void C_ccall f_4168(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4168,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4171,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:626: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[610];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[611];
av2[6]=lf[612];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4169 in k4166 in k4163 in k4160 in k4157 in k4154 in k4151 in k4148 in k4145 in k4142 in k4139 in k4136 in k4133 in k4130 in k4127 in k4124 in k4121 in k4118 in k4115 in k4112 in k4109 in k4106 in ... */
static void C_ccall f_4171(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4171,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4174,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:627: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[607];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[608];
av2[6]=lf[609];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4172 in k4169 in k4166 in k4163 in k4160 in k4157 in k4154 in k4151 in k4148 in k4145 in k4142 in k4139 in k4136 in k4133 in k4130 in k4127 in k4124 in k4121 in k4118 in k4115 in k4112 in k4109 in ... */
static void C_ccall f_4174(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4174,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4177,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:628: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[605];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[606];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4175 in k4172 in k4169 in k4166 in k4163 in k4160 in k4157 in k4154 in k4151 in k4148 in k4145 in k4142 in k4139 in k4136 in k4133 in k4130 in k4127 in k4124 in k4121 in k4118 in k4115 in k4112 in ... */
static void C_ccall f_4177(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4177,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4180,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:629: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[603];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[604];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4178 in k4175 in k4172 in k4169 in k4166 in k4163 in k4160 in k4157 in k4154 in k4151 in k4148 in k4145 in k4142 in k4139 in k4136 in k4133 in k4130 in k4127 in k4124 in k4121 in k4118 in k4115 in ... */
static void C_ccall f_4180(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4180,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4183,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:631: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[600];
av2[3]=C_fix(4);
av2[4]=lf[297];
av2[5]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4181 in k4178 in k4175 in k4172 in k4169 in k4166 in k4163 in k4160 in k4157 in k4154 in k4151 in k4148 in k4145 in k4142 in k4139 in k4136 in k4133 in k4130 in k4127 in k4124 in k4121 in k4118 in ... */
static void C_ccall f_4183(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4183,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4186,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:632: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[597];
av2[3]=C_fix(4);
av2[4]=lf[297];
av2[5]=C_fix(1);
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4184 in k4181 in k4178 in k4175 in k4172 in k4169 in k4166 in k4163 in k4160 in k4157 in k4154 in k4151 in k4148 in k4145 in k4142 in k4139 in k4136 in k4133 in k4130 in k4127 in k4124 in k4121 in ... */
static void C_ccall f_4186(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4186,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4189,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:633: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[600];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[601];
av2[6]=lf[602];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4187 in k4184 in k4181 in k4178 in k4175 in k4172 in k4169 in k4166 in k4163 in k4160 in k4157 in k4154 in k4151 in k4148 in k4145 in k4142 in k4139 in k4136 in k4133 in k4130 in k4127 in k4124 in ... */
static void C_ccall f_4189(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4189,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4192,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:634: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[597];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[598];
av2[6]=lf[599];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4190 in k4187 in k4184 in k4181 in k4178 in k4175 in k4172 in k4169 in k4166 in k4163 in k4160 in k4157 in k4154 in k4151 in k4148 in k4145 in k4142 in k4139 in k4136 in k4133 in k4130 in k4127 in ... */
static void C_ccall f_4192(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4192,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4195,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:636: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[594];
av2[3]=C_fix(14);
av2[4]=lf[24];
av2[5]=C_fix(1);
av2[6]=lf[595];
av2[7]=lf[596];
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4193 in k4190 in k4187 in k4184 in k4181 in k4178 in k4175 in k4172 in k4169 in k4166 in k4163 in k4160 in k4157 in k4154 in k4151 in k4148 in k4145 in k4142 in k4139 in k4136 in k4133 in k4130 in ... */
static void C_ccall f_4195(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4195,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4198,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:638: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[590];
av2[3]=C_fix(19);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k4196 in k4193 in k4190 in k4187 in k4184 in k4181 in k4178 in k4175 in k4172 in k4169 in k4166 in k4163 in k4160 in k4157 in k4154 in k4151 in k4148 in k4145 in k4142 in k4139 in k4136 in k4133 in ... */
static void C_ccall f_4198(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4198,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4201,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:639: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[586];
av2[3]=C_fix(19);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k4199 in k4196 in k4193 in k4190 in k4187 in k4184 in k4181 in k4178 in k4175 in k4172 in k4169 in k4166 in k4163 in k4160 in k4157 in k4154 in k4151 in k4148 in k4145 in k4142 in k4139 in k4136 in ... */
static void C_ccall f_4201(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4201,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4204,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:640: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[582];
av2[3]=C_fix(19);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k4202 in k4199 in k4196 in k4193 in k4190 in k4187 in k4184 in k4181 in k4178 in k4175 in k4172 in k4169 in k4166 in k4163 in k4160 in k4157 in k4154 in k4151 in k4148 in k4145 in k4142 in k4139 in ... */
static void C_ccall f_4204(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,8)))){
C_save_and_reclaim((void *)f_4204,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4207,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:642: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[590];
av2[3]=C_fix(21);
av2[4]=C_fix(-1);
av2[5]=lf[591];
av2[6]=lf[592];
av2[7]=lf[593];
av2[8]=C_fix(5);
((C_proc)(void*)(*((C_word*)t3+1)))(9,av2);}}

/* k4205 in k4202 in k4199 in k4196 in k4193 in k4190 in k4187 in k4184 in k4181 in k4178 in k4175 in k4172 in k4169 in k4166 in k4163 in k4160 in k4157 in k4154 in k4151 in k4148 in k4145 in k4142 in ... */
static void C_ccall f_4207(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,8)))){
C_save_and_reclaim((void *)f_4207,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4210,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:643: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[586];
av2[3]=C_fix(21);
av2[4]=C_fix(0);
av2[5]=lf[587];
av2[6]=lf[588];
av2[7]=lf[589];
av2[8]=C_fix(5);
((C_proc)(void*)(*((C_word*)t3+1)))(9,av2);}}

/* k4208 in k4205 in k4202 in k4199 in k4196 in k4193 in k4190 in k4187 in k4184 in k4181 in k4178 in k4175 in k4172 in k4169 in k4166 in k4163 in k4160 in k4157 in k4154 in k4151 in k4148 in k4145 in ... */
static void C_ccall f_4210(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,8)))){
C_save_and_reclaim((void *)f_4210,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4213,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:644: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[582];
av2[3]=C_fix(21);
av2[4]=C_fix(0);
av2[5]=lf[583];
av2[6]=lf[584];
av2[7]=lf[585];
av2[8]=C_fix(5);
((C_proc)(void*)(*((C_word*)t3+1)))(9,av2);}}

/* k4211 in k4208 in k4205 in k4202 in k4199 in k4196 in k4193 in k4190 in k4187 in k4184 in k4181 in k4178 in k4175 in k4172 in k4169 in k4166 in k4163 in k4160 in k4157 in k4154 in k4151 in k4148 in ... */
static void C_ccall f_4213(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,8)))){
C_save_and_reclaim((void *)f_4213,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4216,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:646: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[579];
av2[3]=C_fix(22);
av2[4]=C_fix(1);
av2[5]=lf[580];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_fix(5);
av2[8]=lf[581];
((C_proc)(void*)(*((C_word*)t3+1)))(9,av2);}}

/* k4214 in k4211 in k4208 in k4205 in k4202 in k4199 in k4196 in k4193 in k4190 in k4187 in k4184 in k4181 in k4178 in k4175 in k4172 in k4169 in k4166 in k4163 in k4160 in k4157 in k4154 in k4151 in ... */
static void C_ccall f_4216(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4216,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4219,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:648: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[577];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[578];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[11]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4217 in k4214 in k4211 in k4208 in k4205 in k4202 in k4199 in k4196 in k4193 in k4190 in k4187 in k4184 in k4181 in k4178 in k4175 in k4172 in k4169 in k4166 in k4163 in k4160 in k4157 in k4154 in ... */
static void C_ccall f_4219(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4219,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4222,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:649: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[575];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[576];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[11]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4220 in k4217 in k4214 in k4211 in k4208 in k4205 in k4202 in k4199 in k4196 in k4193 in k4190 in k4187 in k4184 in k4181 in k4178 in k4175 in k4172 in k4169 in k4166 in k4163 in k4160 in k4157 in ... */
static void C_ccall f_4222(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4222,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4225,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:650: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[573];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[574];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[11]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4223 in k4220 in k4217 in k4214 in k4211 in k4208 in k4205 in k4202 in k4199 in k4196 in k4193 in k4190 in k4187 in k4184 in k4181 in k4178 in k4175 in k4172 in k4169 in k4166 in k4163 in k4160 in ... */
static void C_ccall f_4225(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4225,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4228,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:651: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[571];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[572];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[11]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4226 in k4223 in k4220 in k4217 in k4214 in k4211 in k4208 in k4205 in k4202 in k4199 in k4196 in k4193 in k4190 in k4187 in k4184 in k4181 in k4178 in k4175 in k4172 in k4169 in k4166 in k4163 in ... */
static void C_ccall f_4228(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4228,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4231,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:652: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[569];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[570];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[11]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4229 in k4226 in k4223 in k4220 in k4217 in k4214 in k4211 in k4208 in k4205 in k4202 in k4199 in k4196 in k4193 in k4190 in k4187 in k4184 in k4181 in k4178 in k4175 in k4172 in k4169 in k4166 in ... */
static void C_ccall f_4231(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4231,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4234,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:653: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[567];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[568];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[11]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4232 in k4229 in k4226 in k4223 in k4220 in k4217 in k4214 in k4211 in k4208 in k4205 in k4202 in k4199 in k4196 in k4193 in k4190 in k4187 in k4184 in k4181 in k4178 in k4175 in k4172 in k4169 in ... */
static void C_ccall f_4234(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4234,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4237,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:654: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[565];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[566];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[11]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4235 in k4232 in k4229 in k4226 in k4223 in k4220 in k4217 in k4214 in k4211 in k4208 in k4205 in k4202 in k4199 in k4196 in k4193 in k4190 in k4187 in k4184 in k4181 in k4178 in k4175 in k4172 in ... */
static void C_ccall f_4237(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4237,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4240,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:656: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[561];
av2[3]=C_fix(5);
av2[4]=lf[564];
av2[5]=C_fix(0);
av2[6]=lf[24];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4238 in k4235 in k4232 in k4229 in k4226 in k4223 in k4220 in k4217 in k4214 in k4211 in k4208 in k4205 in k4202 in k4199 in k4196 in k4193 in k4190 in k4187 in k4184 in k4181 in k4178 in k4175 in ... */
static void C_ccall f_4240(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4240,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4243,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:657: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[561];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[563];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4241 in k4238 in k4235 in k4232 in k4229 in k4226 in k4223 in k4220 in k4217 in k4214 in k4211 in k4208 in k4205 in k4202 in k4199 in k4196 in k4193 in k4190 in k4187 in k4184 in k4181 in k4178 in ... */
static void C_ccall f_4243(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4243,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4246,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:658: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[561];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[562];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4244 in k4241 in k4238 in k4235 in k4232 in k4229 in k4226 in k4223 in k4220 in k4217 in k4214 in k4211 in k4208 in k4205 in k4202 in k4199 in k4196 in k4193 in k4190 in k4187 in k4184 in k4181 in ... */
static void C_ccall f_4246(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4246,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4249,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:659: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[557];
av2[3]=C_fix(5);
av2[4]=lf[560];
av2[5]=C_fix(0);
av2[6]=lf[24];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4247 in k4244 in k4241 in k4238 in k4235 in k4232 in k4229 in k4226 in k4223 in k4220 in k4217 in k4214 in k4211 in k4208 in k4205 in k4202 in k4199 in k4196 in k4193 in k4190 in k4187 in k4184 in ... */
static void C_ccall f_4249(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4249,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4252,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:660: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[557];
av2[3]=C_fix(5);
av2[4]=lf[559];
av2[5]=C_fix(0);
av2[6]=lf[388];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4250 in k4247 in k4244 in k4241 in k4238 in k4235 in k4232 in k4229 in k4226 in k4223 in k4220 in k4217 in k4214 in k4211 in k4208 in k4205 in k4202 in k4199 in k4196 in k4193 in k4190 in k4187 in ... */
static void C_ccall f_4252(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4252,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4255,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:661: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[557];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[558];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4253 in k4250 in k4247 in k4244 in k4241 in k4238 in k4235 in k4232 in k4229 in k4226 in k4223 in k4220 in k4217 in k4214 in k4211 in k4208 in k4205 in k4202 in k4199 in k4196 in k4193 in k4190 in ... */
static void C_ccall f_4255(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4255,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4258,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:662: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[553];
av2[3]=C_fix(5);
av2[4]=lf[556];
av2[5]=C_fix(0);
av2[6]=lf[24];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4256 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 in k4235 in k4232 in k4229 in k4226 in k4223 in k4220 in k4217 in k4214 in k4211 in k4208 in k4205 in k4202 in k4199 in k4196 in k4193 in ... */
static void C_ccall f_4258(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4258,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4261,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:663: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[553];
av2[3]=C_fix(5);
av2[4]=lf[555];
av2[5]=C_fix(0);
av2[6]=lf[388];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4259 in k4256 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 in k4235 in k4232 in k4229 in k4226 in k4223 in k4220 in k4217 in k4214 in k4211 in k4208 in k4205 in k4202 in k4199 in k4196 in ... */
static void C_ccall f_4261(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4261,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4264,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:664: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[553];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[554];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4262 in k4259 in k4256 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 in k4235 in k4232 in k4229 in k4226 in k4223 in k4220 in k4217 in k4214 in k4211 in k4208 in k4205 in k4202 in k4199 in ... */
static void C_ccall f_4264(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4264,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4267,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:666: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[541];
av2[3]=C_fix(6);
av2[4]=lf[551];
av2[5]=lf[552];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4265 in k4262 in k4259 in k4256 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 in k4235 in k4232 in k4229 in k4226 in k4223 in k4220 in k4217 in k4214 in k4211 in k4208 in k4205 in k4202 in ... */
static void C_ccall f_4267(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4267,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4270,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:667: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[537];
av2[3]=C_fix(6);
av2[4]=lf[549];
av2[5]=lf[550];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4268 in k4265 in k4262 in k4259 in k4256 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 in k4235 in k4232 in k4229 in k4226 in k4223 in k4220 in k4217 in k4214 in k4211 in k4208 in k4205 in ... */
static void C_ccall f_4270(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4270,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4273,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:668: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[546];
av2[3]=C_fix(6);
av2[4]=lf[547];
av2[5]=lf[548];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4271 in k4268 in k4265 in k4262 in k4259 in k4256 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 in k4235 in k4232 in k4229 in k4226 in k4223 in k4220 in k4217 in k4214 in k4211 in k4208 in ... */
static void C_ccall f_4273(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4273,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4276,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:669: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[543];
av2[3]=C_fix(6);
av2[4]=lf[544];
av2[5]=lf[545];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4274 in k4271 in k4268 in k4265 in k4262 in k4259 in k4256 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 in k4235 in k4232 in k4229 in k4226 in k4223 in k4220 in k4217 in k4214 in k4211 in ... */
static void C_ccall f_4276(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4276,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4279,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:671: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[541];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[542];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4277 in k4274 in k4271 in k4268 in k4265 in k4262 in k4259 in k4256 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 in k4235 in k4232 in k4229 in k4226 in k4223 in k4220 in k4217 in k4214 in ... */
static void C_ccall f_4279(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4279,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4282,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:672: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[539];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[540];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4280 in k4277 in k4274 in k4271 in k4268 in k4265 in k4262 in k4259 in k4256 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 in k4235 in k4232 in k4229 in k4226 in k4223 in k4220 in k4217 in ... */
static void C_ccall f_4282(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4282,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4285,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:673: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[537];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[538];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4283 in k4280 in k4277 in k4274 in k4271 in k4268 in k4265 in k4262 in k4259 in k4256 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 in k4235 in k4232 in k4229 in k4226 in k4223 in k4220 in ... */
static void C_ccall f_4285(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4285,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4288,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:675: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[523];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[536];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4286 in k4283 in k4280 in k4277 in k4274 in k4271 in k4268 in k4265 in k4262 in k4259 in k4256 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 in k4235 in k4232 in k4229 in k4226 in k4223 in ... */
static void C_ccall f_4288(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4288,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4291,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:676: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[521];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[535];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4289 in k4286 in k4283 in k4280 in k4277 in k4274 in k4271 in k4268 in k4265 in k4262 in k4259 in k4256 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 in k4235 in k4232 in k4229 in k4226 in ... */
static void C_ccall f_4291(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4291,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4294,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:677: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[519];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[534];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4292 in k4289 in k4286 in k4283 in k4280 in k4277 in k4274 in k4271 in k4268 in k4265 in k4262 in k4259 in k4256 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 in k4235 in k4232 in k4229 in ... */
static void C_ccall f_4294(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4294,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4297,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:678: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[517];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[533];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4295 in k4292 in k4289 in k4286 in k4283 in k4280 in k4277 in k4274 in k4271 in k4268 in k4265 in k4262 in k4259 in k4256 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 in k4235 in k4232 in ... */
static void C_ccall f_4297(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4297,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4300,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:679: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[515];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[532];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4298 in k4295 in k4292 in k4289 in k4286 in k4283 in k4280 in k4277 in k4274 in k4271 in k4268 in k4265 in k4262 in k4259 in k4256 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 in k4235 in ... */
static void C_ccall f_4300(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4300,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4303,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:680: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[513];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[531];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4301 in k4298 in k4295 in k4292 in k4289 in k4286 in k4283 in k4280 in k4277 in k4274 in k4271 in k4268 in k4265 in k4262 in k4259 in k4256 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 in ... */
static void C_ccall f_4303(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4303,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4306,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:681: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[511];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[530];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4304 in k4301 in k4298 in k4295 in k4292 in k4289 in k4286 in k4283 in k4280 in k4277 in k4274 in k4271 in k4268 in k4265 in k4262 in k4259 in k4256 in k4253 in k4250 in k4247 in k4244 in k4241 in ... */
static void C_ccall f_4306(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4306,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4309,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:682: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[509];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[529];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4307 in k4304 in k4301 in k4298 in k4295 in k4292 in k4289 in k4286 in k4283 in k4280 in k4277 in k4274 in k4271 in k4268 in k4265 in k4262 in k4259 in k4256 in k4253 in k4250 in k4247 in k4244 in ... */
static void C_ccall f_4309(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4309,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4312,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:683: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[507];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[528];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4310 in k4307 in k4304 in k4301 in k4298 in k4295 in k4292 in k4289 in k4286 in k4283 in k4280 in k4277 in k4274 in k4271 in k4268 in k4265 in k4262 in k4259 in k4256 in k4253 in k4250 in k4247 in ... */
static void C_ccall f_4312(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4312,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4315,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:684: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[505];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[527];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4313 in k4310 in k4307 in k4304 in k4301 in k4298 in k4295 in k4292 in k4289 in k4286 in k4283 in k4280 in k4277 in k4274 in k4271 in k4268 in k4265 in k4262 in k4259 in k4256 in k4253 in k4250 in ... */
static void C_ccall f_4315(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4315,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4318,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:685: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[503];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[526];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4316 in k4313 in k4310 in k4307 in k4304 in k4301 in k4298 in k4295 in k4292 in k4289 in k4286 in k4283 in k4280 in k4277 in k4274 in k4271 in k4268 in k4265 in k4262 in k4259 in k4256 in k4253 in ... */
static void C_ccall f_4318(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4318,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4321,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:686: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[501];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[525];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4319 in k4316 in k4313 in k4310 in k4307 in k4304 in k4301 in k4298 in k4295 in k4292 in k4289 in k4286 in k4283 in k4280 in k4277 in k4274 in k4271 in k4268 in k4265 in k4262 in k4259 in k4256 in ... */
static void C_ccall f_4321(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4321,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4324,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:687: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[523];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[524];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4322 in k4319 in k4316 in k4313 in k4310 in k4307 in k4304 in k4301 in k4298 in k4295 in k4292 in k4289 in k4286 in k4283 in k4280 in k4277 in k4274 in k4271 in k4268 in k4265 in k4262 in k4259 in ... */
static void C_ccall f_4324(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4324,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4327,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:688: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[521];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[522];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4325 in k4322 in k4319 in k4316 in k4313 in k4310 in k4307 in k4304 in k4301 in k4298 in k4295 in k4292 in k4289 in k4286 in k4283 in k4280 in k4277 in k4274 in k4271 in k4268 in k4265 in k4262 in ... */
static void C_ccall f_4327(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4327,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4330,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:689: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[519];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[520];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4328 in k4325 in k4322 in k4319 in k4316 in k4313 in k4310 in k4307 in k4304 in k4301 in k4298 in k4295 in k4292 in k4289 in k4286 in k4283 in k4280 in k4277 in k4274 in k4271 in k4268 in k4265 in ... */
static void C_ccall f_4330(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4330,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4333,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:690: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[517];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[518];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4331 in k4328 in k4325 in k4322 in k4319 in k4316 in k4313 in k4310 in k4307 in k4304 in k4301 in k4298 in k4295 in k4292 in k4289 in k4286 in k4283 in k4280 in k4277 in k4274 in k4271 in k4268 in ... */
static void C_ccall f_4333(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4333,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4336,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:691: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[515];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[516];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4334 in k4331 in k4328 in k4325 in k4322 in k4319 in k4316 in k4313 in k4310 in k4307 in k4304 in k4301 in k4298 in k4295 in k4292 in k4289 in k4286 in k4283 in k4280 in k4277 in k4274 in k4271 in ... */
static void C_ccall f_4336(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4336,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4339,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:692: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[513];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[514];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4337 in k4334 in k4331 in k4328 in k4325 in k4322 in k4319 in k4316 in k4313 in k4310 in k4307 in k4304 in k4301 in k4298 in k4295 in k4292 in k4289 in k4286 in k4283 in k4280 in k4277 in k4274 in ... */
static void C_ccall f_4339(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4339,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4342,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:693: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[511];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[512];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4340 in k4337 in k4334 in k4331 in k4328 in k4325 in k4322 in k4319 in k4316 in k4313 in k4310 in k4307 in k4304 in k4301 in k4298 in k4295 in k4292 in k4289 in k4286 in k4283 in k4280 in k4277 in ... */
static void C_ccall f_4342(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4342,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4345,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:694: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[509];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[510];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4343 in k4340 in k4337 in k4334 in k4331 in k4328 in k4325 in k4322 in k4319 in k4316 in k4313 in k4310 in k4307 in k4304 in k4301 in k4298 in k4295 in k4292 in k4289 in k4286 in k4283 in k4280 in ... */
static void C_ccall f_4345(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4345,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4348,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:695: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[507];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[508];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4346 in k4343 in k4340 in k4337 in k4334 in k4331 in k4328 in k4325 in k4322 in k4319 in k4316 in k4313 in k4310 in k4307 in k4304 in k4301 in k4298 in k4295 in k4292 in k4289 in k4286 in k4283 in ... */
static void C_ccall f_4348(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4348,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4351,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:696: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[505];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[506];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4349 in k4346 in k4343 in k4340 in k4337 in k4334 in k4331 in k4328 in k4325 in k4322 in k4319 in k4316 in k4313 in k4310 in k4307 in k4304 in k4301 in k4298 in k4295 in k4292 in k4289 in k4286 in ... */
static void C_ccall f_4351(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4351,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4354,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:697: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[503];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[504];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4352 in k4349 in k4346 in k4343 in k4340 in k4337 in k4334 in k4331 in k4328 in k4325 in k4322 in k4319 in k4316 in k4313 in k4310 in k4307 in k4304 in k4301 in k4298 in k4295 in k4292 in k4289 in ... */
static void C_ccall f_4354(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4354,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4357,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:698: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[501];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[502];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4355 in k4352 in k4349 in k4346 in k4343 in k4340 in k4337 in k4334 in k4331 in k4328 in k4325 in k4322 in k4319 in k4316 in k4313 in k4310 in k4307 in k4304 in k4301 in k4298 in k4295 in k4292 in ... */
static void C_ccall f_4357(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4357,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4360,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:700: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[439];
av2[3]=C_fix(9);
av2[4]=lf[499];
av2[5]=lf[500];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4358 in k4355 in k4352 in k4349 in k4346 in k4343 in k4340 in k4337 in k4334 in k4331 in k4328 in k4325 in k4322 in k4319 in k4316 in k4313 in k4310 in k4307 in k4304 in k4301 in k4298 in k4295 in ... */
static void C_ccall f_4360(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4360,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4363,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:701: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[437];
av2[3]=C_fix(9);
av2[4]=lf[497];
av2[5]=lf[498];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4361 in k4358 in k4355 in k4352 in k4349 in k4346 in k4343 in k4340 in k4337 in k4334 in k4331 in k4328 in k4325 in k4322 in k4319 in k4316 in k4313 in k4310 in k4307 in k4304 in k4301 in k4298 in ... */
static void C_ccall f_4363(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4363,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4366,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:702: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[435];
av2[3]=C_fix(9);
av2[4]=lf[495];
av2[5]=lf[496];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4364 in k4361 in k4358 in k4355 in k4352 in k4349 in k4346 in k4343 in k4340 in k4337 in k4334 in k4331 in k4328 in k4325 in k4322 in k4319 in k4316 in k4313 in k4310 in k4307 in k4304 in k4301 in ... */
static void C_ccall f_4366(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4366,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4369,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:703: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[433];
av2[3]=C_fix(9);
av2[4]=lf[493];
av2[5]=lf[494];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4367 in k4364 in k4361 in k4358 in k4355 in k4352 in k4349 in k4346 in k4343 in k4340 in k4337 in k4334 in k4331 in k4328 in k4325 in k4322 in k4319 in k4316 in k4313 in k4310 in k4307 in k4304 in ... */
static void C_ccall f_4369(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4369,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4372,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:704: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[431];
av2[3]=C_fix(9);
av2[4]=lf[491];
av2[5]=lf[492];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4370 in k4367 in k4364 in k4361 in k4358 in k4355 in k4352 in k4349 in k4346 in k4343 in k4340 in k4337 in k4334 in k4331 in k4328 in k4325 in k4322 in k4319 in k4316 in k4313 in k4310 in k4307 in ... */
static void C_ccall f_4372(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4372,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4375,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:706: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[490];
av2[3]=C_fix(11);
av2[4]=C_fix(1);
av2[5]=lf[99];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4373 in k4370 in k4367 in k4364 in k4361 in k4358 in k4355 in k4352 in k4349 in k4346 in k4343 in k4340 in k4337 in k4334 in k4331 in k4328 in k4325 in k4322 in k4319 in k4316 in k4313 in k4310 in ... */
static void C_ccall f_4375(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4375,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4378,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:707: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[488];
av2[3]=C_fix(11);
av2[4]=C_fix(2);
av2[5]=lf[489];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4376 in k4373 in k4370 in k4367 in k4364 in k4361 in k4358 in k4355 in k4352 in k4349 in k4346 in k4343 in k4340 in k4337 in k4334 in k4331 in k4328 in k4325 in k4322 in k4319 in k4316 in k4313 in ... */
static void C_ccall f_4378(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4378,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4381,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:708: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[486];
av2[3]=C_fix(11);
av2[4]=C_fix(2);
av2[5]=lf[487];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4379 in k4376 in k4373 in k4370 in k4367 in k4364 in k4361 in k4358 in k4355 in k4352 in k4349 in k4346 in k4343 in k4340 in k4337 in k4334 in k4331 in k4328 in k4325 in k4322 in k4319 in k4316 in ... */
static void C_ccall f_4381(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4381,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4384,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:709: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[485];
av2[3]=C_fix(11);
av2[4]=C_fix(3);
av2[5]=lf[297];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4382 in k4379 in k4376 in k4373 in k4370 in k4367 in k4364 in k4361 in k4358 in k4355 in k4352 in k4349 in k4346 in k4343 in k4340 in k4337 in k4334 in k4331 in k4328 in k4325 in k4322 in k4319 in ... */
static void C_ccall f_4384(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4384,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4387,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:710: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[484];
av2[3]=C_fix(11);
av2[4]=C_fix(3);
av2[5]=lf[297];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4385 in k4382 in k4379 in k4376 in k4373 in k4370 in k4367 in k4364 in k4361 in k4358 in k4355 in k4352 in k4349 in k4346 in k4343 in k4340 in k4337 in k4334 in k4331 in k4328 in k4325 in k4322 in ... */
static void C_ccall f_4387(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4387,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4390,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:711: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[483];
av2[3]=C_fix(11);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[340];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4388 in k4385 in k4382 in k4379 in k4376 in k4373 in k4370 in k4367 in k4364 in k4361 in k4358 in k4355 in k4352 in k4349 in k4346 in k4343 in k4340 in k4337 in k4334 in k4331 in k4328 in k4325 in ... */
static void C_ccall f_4390(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4390,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4393,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:712: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[481];
av2[3]=C_fix(11);
av2[4]=C_fix(3);
av2[5]=lf[482];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4391 in k4388 in k4385 in k4382 in k4379 in k4376 in k4373 in k4370 in k4367 in k4364 in k4361 in k4358 in k4355 in k4352 in k4349 in k4346 in k4343 in k4340 in k4337 in k4334 in k4331 in k4328 in ... */
static void C_ccall f_4393(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4393,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4396,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:713: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[479];
av2[3]=C_fix(11);
av2[4]=C_fix(2);
av2[5]=lf[480];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4394 in k4391 in k4388 in k4385 in k4382 in k4379 in k4376 in k4373 in k4370 in k4367 in k4364 in k4361 in k4358 in k4355 in k4352 in k4349 in k4346 in k4343 in k4340 in k4337 in k4334 in k4331 in ... */
static void C_ccall f_4396(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4396,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4399,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:714: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[477];
av2[3]=C_fix(11);
av2[4]=C_fix(1);
av2[5]=lf[478];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in k4379 in k4376 in k4373 in k4370 in k4367 in k4364 in k4361 in k4358 in k4355 in k4352 in k4349 in k4346 in k4343 in k4340 in k4337 in k4334 in ... */
static void C_ccall f_4399(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4399,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4402,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:715: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[475];
av2[3]=C_fix(11);
av2[4]=C_fix(1);
av2[5]=lf[476];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in k4379 in k4376 in k4373 in k4370 in k4367 in k4364 in k4361 in k4358 in k4355 in k4352 in k4349 in k4346 in k4343 in k4340 in k4337 in ... */
static void C_ccall f_4402(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4402,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4405,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:717: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[473];
av2[3]=C_fix(11);
av2[4]=C_fix(3);
av2[5]=lf[297];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in k4379 in k4376 in k4373 in k4370 in k4367 in k4364 in k4361 in k4358 in k4355 in k4352 in k4349 in k4346 in k4343 in k4340 in ... */
static void C_ccall f_4405(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4405,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4408,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:718: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[473];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[474];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in k4379 in k4376 in k4373 in k4370 in k4367 in k4364 in k4361 in k4358 in k4355 in k4352 in k4349 in k4346 in k4343 in ... */
static void C_ccall f_4408(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4408,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4411,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:720: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[469];
av2[3]=C_fix(12);
av2[4]=lf[472];
av2[5]=C_SCHEME_TRUE;
av2[6]=C_fix(2);
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in k4379 in k4376 in k4373 in k4370 in k4367 in k4364 in k4361 in k4358 in k4355 in k4352 in k4349 in k4346 in ... */
static void C_ccall f_4411(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4411,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4414,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:721: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[468];
av2[3]=C_fix(12);
av2[4]=lf[471];
av2[5]=C_SCHEME_TRUE;
av2[6]=C_fix(2);
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in k4379 in k4376 in k4373 in k4370 in k4367 in k4364 in k4361 in k4358 in k4355 in k4352 in k4349 in ... */
static void C_ccall f_4414(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4414,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4417,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:722: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[470];
av2[3]=C_fix(12);
av2[4]=C_SCHEME_FALSE;
av2[5]=C_SCHEME_TRUE;
av2[6]=C_fix(1);
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in k4379 in k4376 in k4373 in k4370 in k4367 in k4364 in k4361 in k4358 in k4355 in k4352 in ... */
static void C_ccall f_4417(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4417,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4420,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:724: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[469];
av2[3]=C_fix(19);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in k4379 in k4376 in k4373 in k4370 in k4367 in k4364 in k4361 in k4358 in k4355 in ... */
static void C_ccall f_4420(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4420,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4423,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:725: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[468];
av2[3]=C_fix(19);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in k4379 in k4376 in k4373 in k4370 in k4367 in k4364 in k4361 in k4358 in ... */
static void C_ccall f_4423(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4423,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4426,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:727: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[469];
av2[3]=C_fix(18);
av2[4]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in k4379 in k4376 in k4373 in k4370 in k4367 in k4364 in k4361 in ... */
static void C_ccall f_4426(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4426,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4429,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:728: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[468];
av2[3]=C_fix(18);
av2[4]=C_fix(1);
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in k4379 in k4376 in k4373 in k4370 in k4367 in k4364 in ... */
static void C_ccall f_4429(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4429,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4432,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:729: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[349];
av2[3]=C_fix(18);
av2[4]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in k4379 in k4376 in k4373 in k4370 in k4367 in ... */
static void C_ccall f_4432(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,6)))){
C_save_and_reclaim((void *)f_4432,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4435,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6083,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:731: chicken.compiler.optimizer#rewrite */
t4=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[429];
av2[3]=C_fix(8);
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in k4379 in k4376 in k4373 in k4370 in ... */
static void C_ccall f_4435(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,6)))){
C_save_and_reclaim((void *)f_4435,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4438,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5959,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:761: chicken.compiler.optimizer#rewrite */
t4=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[427];
av2[3]=C_fix(8);
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in k4379 in k4376 in k4373 in ... */
static void C_ccall f_4438(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,6)))){
C_save_and_reclaim((void *)f_4438,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4441,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5835,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:797: chicken.compiler.optimizer#rewrite */
t4=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[424];
av2[3]=C_fix(8);
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in k4379 in k4376 in ... */
static void C_ccall f_4441(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,6)))){
C_save_and_reclaim((void *)f_4441,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4443,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4576,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:859: chicken.compiler.optimizer#rewrite */
t4=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[454];
av2[3]=C_fix(8);
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* rewrite-div in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in k4379 in ... */
static void C_ccall f_4443(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_4443,c,av);}
a=C_alloc(7);
t6=C_eqp(*((C_word*)lf[25]+1),lf[24]);
if(C_truep(t6)){
t7=C_i_length(t5);
if(C_truep(C_fixnum_greater_or_equal_p(t7,C_fix(2)))){
t8=C_i_car(t5);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4538,a[2]=t8,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4540,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:843: filter */
f_2297(t9,t10,C_u_i_cdr(t5));}
else{
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}
else{
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* k4478 in k4536 in rewrite-div in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in ... */
static void C_ccall f_4480(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_4480,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:849: chicken.compiler.support#make-node */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[23];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* a4481 in k4536 in rewrite-div in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in ... */
static void C_ccall f_4482(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_4482,c,av);}
a=C_alloc(9);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4489,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4525,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:855: chicken.compiler.support#node-class */
t6=*((C_word*)lf[34]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k4487 in a4481 in k4536 in rewrite-div in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in ... */
static void C_fcall f_4489(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_4489,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4500,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:856: chicken.compiler.support#qnode */
t3=*((C_word*)lf[29]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],((C_word*)t0)[4]);
/* c-platform.scm:857: chicken.compiler.support#make-node */
t3=*((C_word*)lf[22]+1);{
C_word av2[5];
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[27];
av2[3]=lf[59];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}

/* k4498 in k4487 in a4481 in k4536 in rewrite-div in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in ... */
static void C_ccall f_4500(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_4500,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:856: chicken.compiler.support#make-node */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[27];
av2[3]=lf[58];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4519 in k4523 in a4481 in k4536 in rewrite-div in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in ... */
static void C_ccall f_4521(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4521,c,av);}
t2=((C_word*)t0)[2];
f_4489(t2,C_eqp(C_fix(2),C_i_car(t1)));}

/* k4523 in a4481 in k4536 in rewrite-div in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in ... */
static void C_ccall f_4525(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4525,c,av);}
a=C_alloc(3);
t2=C_eqp(lf[31],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4521,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:855: chicken.compiler.support#node-parameters */
t4=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=((C_word*)t0)[2];
f_4489(t3,C_SCHEME_FALSE);}}

/* k4536 in rewrite-div in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in ... */
static void C_ccall f_4538(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4538,c,av);}
a=C_alloc(13);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_i_length(t2);
if(C_truep(C_fixnum_greater_or_equal_p(t3,C_fix(2)))){
t4=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4480,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4482,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:853: chicken.compiler.support#fold-inner */
t7=*((C_word*)lf[60]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* a4539 in rewrite-div in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in ... */
static void C_ccall f_4540(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4540,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4566,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:845: chicken.compiler.support#node-class */
t4=*((C_word*)lf[34]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4560 in k4564 in a4539 in rewrite-div in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in ... */
static void C_ccall f_4562(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4562,c,av);}
t2=C_i_car(t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_not(C_eqp(C_fix(1),t2));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k4564 in a4539 in rewrite-div in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in ... */
static void C_ccall f_4566(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4566,c,av);}
a=C_alloc(3);
t2=C_eqp(lf[31],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4562,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:846: chicken.compiler.support#node-parameters */
t4=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4574 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in k4379 in ... */
static void C_ccall f_4576(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4576,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4579,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:860: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[457];
av2[3]=C_fix(8);
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4577 in k4574 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in ... */
static void C_ccall f_4579(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,6)))){
C_save_and_reclaim((void *)f_4579,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4582,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5758,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:862: chicken.compiler.optimizer#rewrite */
t4=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[449];
av2[3]=C_fix(8);
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k4580 in k4577 in k4574 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in ... */
static void C_ccall f_4582(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4582,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4585,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:880: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[427];
av2[3]=C_fix(19);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k4583 in k4580 in k4577 in k4574 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in ... */
static void C_ccall f_4585(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4585,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4588,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:881: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[424];
av2[3]=C_fix(19);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k4586 in k4583 in k4580 in k4577 in k4574 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in ... */
static void C_ccall f_4588(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4588,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4591,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:882: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[429];
av2[3]=C_fix(19);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k4589 in k4586 in k4583 in k4580 in k4577 in k4574 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in ... */
static void C_ccall f_4591(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4591,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4594,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:883: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[454];
av2[3]=C_fix(19);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in k4574 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in ... */
static void C_ccall f_4594(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4594,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4597,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:885: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[427];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[453];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_fix(29);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in k4574 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in ... */
static void C_ccall f_4597(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4597,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4600,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:886: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[424];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[452];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_fix(29);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in k4574 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in ... */
static void C_ccall f_4600(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4600,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4603,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:887: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[429];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[451];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_fix(33);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in k4574 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in ... */
static void C_ccall f_4603(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4603,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4606,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:888: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[449];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[450];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_fix(5);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4604 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in k4574 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in ... */
static void C_ccall f_4606(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4606,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4609,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:889: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[400];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[448];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_fix(5);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4607 in k4604 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in k4574 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in ... */
static void C_ccall f_4609(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4609,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4612,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:890: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[446];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[447];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_fix(5);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4610 in k4607 in k4604 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in k4574 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in ... */
static void C_ccall f_4612(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4612,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4615,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:892: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[439];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[445];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4613 in k4610 in k4607 in k4604 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in k4574 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in ... */
static void C_ccall f_4615(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4615,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4618,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:893: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[437];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[444];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4616 in k4613 in k4610 in k4607 in k4604 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in k4574 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in ... */
static void C_ccall f_4618(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4618,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4621,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:894: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[435];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[443];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4619 in k4616 in k4613 in k4610 in k4607 in k4604 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in k4574 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in ... */
static void C_ccall f_4621(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4621,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4624,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:895: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[433];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[442];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4622 in k4619 in k4616 in k4613 in k4610 in k4607 in k4604 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in k4574 in k4439 in k4436 in k4433 in k4430 in k4427 in ... */
static void C_ccall f_4624(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4624,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4627,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:896: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[431];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[441];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4625 in k4622 in k4619 in k4616 in k4613 in k4610 in k4607 in k4604 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in k4574 in k4439 in k4436 in k4433 in k4430 in ... */
static void C_ccall f_4627(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4627,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4630,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:898: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[439];
av2[3]=C_fix(13);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[440];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4628 in k4625 in k4622 in k4619 in k4616 in k4613 in k4610 in k4607 in k4604 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in k4574 in k4439 in k4436 in k4433 in ... */
static void C_ccall f_4630(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4630,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4633,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:899: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[437];
av2[3]=C_fix(13);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[438];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4631 in k4628 in k4625 in k4622 in k4619 in k4616 in k4613 in k4610 in k4607 in k4604 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in k4574 in k4439 in k4436 in ... */
static void C_ccall f_4633(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4633,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4636,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:900: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[435];
av2[3]=C_fix(13);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[436];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4634 in k4631 in k4628 in k4625 in k4622 in k4619 in k4616 in k4613 in k4610 in k4607 in k4604 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in k4574 in k4439 in ... */
static void C_ccall f_4636(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4636,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4639,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:901: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[433];
av2[3]=C_fix(13);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[434];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4637 in k4634 in k4631 in k4628 in k4625 in k4622 in k4619 in k4616 in k4613 in k4610 in k4607 in k4604 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in k4574 in ... */
static void C_ccall f_4639(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4639,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4642,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:902: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[431];
av2[3]=C_fix(13);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[432];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4640 in k4637 in k4634 in k4631 in k4628 in k4625 in k4622 in k4619 in k4616 in k4613 in k4610 in k4607 in k4604 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in ... */
static void C_ccall f_4642(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4642,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4645,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:904: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[429];
av2[3]=C_fix(13);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[430];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4643 in k4640 in k4637 in k4634 in k4631 in k4628 in k4625 in k4622 in k4619 in k4616 in k4613 in k4610 in k4607 in k4604 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in ... */
static void C_ccall f_4645(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4645,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4648,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:905: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[427];
av2[3]=C_fix(13);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[428];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4646 in k4643 in k4640 in k4637 in k4634 in k4631 in k4628 in k4625 in k4622 in k4619 in k4616 in k4613 in k4610 in k4607 in k4604 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in ... */
static void C_ccall f_4648(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4648,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4651,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:906: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[424];
av2[3]=C_fix(13);
av2[4]=lf[425];
av2[5]=lf[426];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4649 in k4646 in k4643 in k4640 in k4637 in k4634 in k4631 in k4628 in k4625 in k4622 in k4619 in k4616 in k4613 in k4610 in k4607 in k4604 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in ... */
static void C_ccall f_4651(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4651,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4654,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:908: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[421];
av2[3]=C_fix(13);
av2[4]=lf[422];
av2[5]=lf[423];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4652 in k4649 in k4646 in k4643 in k4640 in k4637 in k4634 in k4631 in k4628 in k4625 in k4622 in k4619 in k4616 in k4613 in k4610 in k4607 in k4604 in k4601 in k4598 in k4595 in k4592 in k4589 in ... */
static void C_ccall f_4654(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4654,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4657,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:909: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[419];
av2[3]=C_fix(13);
av2[4]=C_fix(1);
av2[5]=lf[420];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4655 in k4652 in k4649 in k4646 in k4643 in k4640 in k4637 in k4634 in k4631 in k4628 in k4625 in k4622 in k4619 in k4616 in k4613 in k4610 in k4607 in k4604 in k4601 in k4598 in k4595 in k4592 in ... */
static void C_ccall f_4657(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4657,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4660,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:910: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[417];
av2[3]=C_fix(13);
av2[4]=C_fix(4);
av2[5]=lf[418];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4658 in k4655 in k4652 in k4649 in k4646 in k4643 in k4640 in k4637 in k4634 in k4631 in k4628 in k4625 in k4622 in k4619 in k4616 in k4613 in k4610 in k4607 in k4604 in k4601 in k4598 in k4595 in ... */
static void C_ccall f_4660(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4660,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4663,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:911: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[415];
av2[3]=C_fix(13);
av2[4]=C_fix(1);
av2[5]=lf[416];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4661 in k4658 in k4655 in k4652 in k4649 in k4646 in k4643 in k4640 in k4637 in k4634 in k4631 in k4628 in k4625 in k4622 in k4619 in k4616 in k4613 in k4610 in k4607 in k4604 in k4601 in k4598 in ... */
static void C_ccall f_4663(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4663,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4666,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:912: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[413];
av2[3]=C_fix(13);
av2[4]=C_fix(0);
av2[5]=lf[414];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4664 in k4661 in k4658 in k4655 in k4652 in k4649 in k4646 in k4643 in k4640 in k4637 in k4634 in k4631 in k4628 in k4625 in k4622 in k4619 in k4616 in k4613 in k4610 in k4607 in k4604 in k4601 in ... */
static void C_ccall f_4666(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4666,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4669,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:913: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[411];
av2[3]=C_fix(13);
av2[4]=C_fix(1);
av2[5]=lf[412];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4667 in k4664 in k4661 in k4658 in k4655 in k4652 in k4649 in k4646 in k4643 in k4640 in k4637 in k4634 in k4631 in k4628 in k4625 in k4622 in k4619 in k4616 in k4613 in k4610 in k4607 in k4604 in ... */
static void C_ccall f_4669(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4669,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4672,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:914: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[409];
av2[3]=C_fix(13);
av2[4]=C_fix(1);
av2[5]=lf[410];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4670 in k4667 in k4664 in k4661 in k4658 in k4655 in k4652 in k4649 in k4646 in k4643 in k4640 in k4637 in k4634 in k4631 in k4628 in k4625 in k4622 in k4619 in k4616 in k4613 in k4610 in k4607 in ... */
static void C_ccall f_4672(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4672,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4675,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:915: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[407];
av2[3]=C_fix(13);
av2[4]=C_fix(1);
av2[5]=lf[408];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4673 in k4670 in k4667 in k4664 in k4661 in k4658 in k4655 in k4652 in k4649 in k4646 in k4643 in k4640 in k4637 in k4634 in k4631 in k4628 in k4625 in k4622 in k4619 in k4616 in k4613 in k4610 in ... */
static void C_ccall f_4675(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4675,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4678,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:917: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[398];
av2[3]=C_fix(14);
av2[4]=lf[24];
av2[5]=C_fix(1);
av2[6]=lf[405];
av2[7]=lf[406];
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4676 in k4673 in k4670 in k4667 in k4664 in k4661 in k4658 in k4655 in k4652 in k4649 in k4646 in k4643 in k4640 in k4637 in k4634 in k4631 in k4628 in k4625 in k4622 in k4619 in k4616 in k4613 in ... */
static void C_ccall f_4678(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4678,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4681,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:918: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[396];
av2[3]=C_fix(14);
av2[4]=lf[24];
av2[5]=C_fix(1);
av2[6]=lf[403];
av2[7]=lf[404];
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4679 in k4676 in k4673 in k4670 in k4667 in k4664 in k4661 in k4658 in k4655 in k4652 in k4649 in k4646 in k4643 in k4640 in k4637 in k4634 in k4631 in k4628 in k4625 in k4622 in k4619 in k4616 in ... */
static void C_ccall f_4681(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4681,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4684,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:919: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[400];
av2[3]=C_fix(14);
av2[4]=lf[24];
av2[5]=C_fix(2);
av2[6]=lf[401];
av2[7]=lf[402];
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4682 in k4679 in k4676 in k4673 in k4670 in k4667 in k4664 in k4661 in k4658 in k4655 in k4652 in k4649 in k4646 in k4643 in k4640 in k4637 in k4634 in k4631 in k4628 in k4625 in k4622 in k4619 in ... */
static void C_ccall f_4684(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4684,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4687,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:921: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[398];
av2[3]=C_fix(17);
av2[4]=C_fix(1);
av2[5]=lf[399];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4685 in k4682 in k4679 in k4676 in k4673 in k4670 in k4667 in k4664 in k4661 in k4658 in k4655 in k4652 in k4649 in k4646 in k4643 in k4640 in k4637 in k4634 in k4631 in k4628 in k4625 in k4622 in ... */
static void C_ccall f_4687(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4687,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4690,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:922: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[396];
av2[3]=C_fix(17);
av2[4]=C_fix(1);
av2[5]=lf[397];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4688 in k4685 in k4682 in k4679 in k4676 in k4673 in k4670 in k4667 in k4664 in k4661 in k4658 in k4655 in k4652 in k4649 in k4646 in k4643 in k4640 in k4637 in k4634 in k4631 in k4628 in k4625 in ... */
static void C_ccall f_4690(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4690,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4693,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:924: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[394];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[395];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4691 in k4688 in k4685 in k4682 in k4679 in k4676 in k4673 in k4670 in k4667 in k4664 in k4661 in k4658 in k4655 in k4652 in k4649 in k4646 in k4643 in k4640 in k4637 in k4634 in k4631 in k4628 in ... */
static void C_ccall f_4693(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4693,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4696,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:925: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[392];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[393];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4694 in k4691 in k4688 in k4685 in k4682 in k4679 in k4676 in k4673 in k4670 in k4667 in k4664 in k4661 in k4658 in k4655 in k4652 in k4649 in k4646 in k4643 in k4640 in k4637 in k4634 in k4631 in ... */
static void C_ccall f_4696(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4696,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4699,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:927: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[390];
av2[3]=C_fix(15);
av2[4]=lf[388];
av2[5]=lf[24];
av2[6]=lf[391];
av2[7]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4697 in k4694 in k4691 in k4688 in k4685 in k4682 in k4679 in k4676 in k4673 in k4670 in k4667 in k4664 in k4661 in k4658 in k4655 in k4652 in k4649 in k4646 in k4643 in k4640 in k4637 in k4634 in ... */
static void C_ccall f_4699(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4699,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4702,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:928: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[389];
av2[3]=C_fix(15);
av2[4]=lf[388];
av2[5]=lf[24];
av2[6]=lf[358];
av2[7]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4700 in k4697 in k4694 in k4691 in k4688 in k4685 in k4682 in k4679 in k4676 in k4673 in k4670 in k4667 in k4664 in k4661 in k4658 in k4655 in k4652 in k4649 in k4646 in k4643 in k4640 in k4637 in ... */
static void C_ccall f_4702(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4702,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4705,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:929: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[387];
av2[3]=C_fix(15);
av2[4]=lf[388];
av2[5]=lf[24];
av2[6]=lf[361];
av2[7]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4685 in k4682 in k4679 in k4676 in k4673 in k4670 in k4667 in k4664 in k4661 in k4658 in k4655 in k4652 in k4649 in k4646 in k4643 in k4640 in ... */
static void C_ccall f_4705(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4705,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4708,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:931: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[385];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[386];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[11]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4685 in k4682 in k4679 in k4676 in k4673 in k4670 in k4667 in k4664 in k4661 in k4658 in k4655 in k4652 in k4649 in k4646 in k4643 in ... */
static void C_ccall f_4708(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4708,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4711,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:932: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[383];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[384];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[11]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4685 in k4682 in k4679 in k4676 in k4673 in k4670 in k4667 in k4664 in k4661 in k4658 in k4655 in k4652 in k4649 in k4646 in ... */
static void C_ccall f_4711(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4711,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4714,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:933: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[381];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[382];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[11]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4712 in k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4685 in k4682 in k4679 in k4676 in k4673 in k4670 in k4667 in k4664 in k4661 in k4658 in k4655 in k4652 in k4649 in ... */
static void C_ccall f_4714(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4714,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4717,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:934: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[379];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[380];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[11]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4715 in k4712 in k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4685 in k4682 in k4679 in k4676 in k4673 in k4670 in k4667 in k4664 in k4661 in k4658 in k4655 in k4652 in ... */
static void C_ccall f_4717(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4717,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4720,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:935: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[377];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[378];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[11]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4718 in k4715 in k4712 in k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4685 in k4682 in k4679 in k4676 in k4673 in k4670 in k4667 in k4664 in k4661 in k4658 in k4655 in ... */
static void C_ccall f_4720(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4720,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4723,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:936: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[375];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[376];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[11]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4721 in k4718 in k4715 in k4712 in k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4685 in k4682 in k4679 in k4676 in k4673 in k4670 in k4667 in k4664 in k4661 in k4658 in ... */
static void C_ccall f_4723(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4723,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4726,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:937: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[373];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[374];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[11]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4724 in k4721 in k4718 in k4715 in k4712 in k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4685 in k4682 in k4679 in k4676 in k4673 in k4670 in k4667 in k4664 in k4661 in ... */
static void C_ccall f_4726(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4726,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4729,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:938: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[371];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[372];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[11]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4727 in k4724 in k4721 in k4718 in k4715 in k4712 in k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4685 in k4682 in k4679 in k4676 in k4673 in k4670 in k4667 in k4664 in ... */
static void C_ccall f_4729(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4729,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4732,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:939: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[369];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[370];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[11]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4730 in k4727 in k4724 in k4721 in k4718 in k4715 in k4712 in k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4685 in k4682 in k4679 in k4676 in k4673 in k4670 in k4667 in ... */
static void C_ccall f_4732(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4732,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4735,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:940: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[367];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[368];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[11]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4733 in k4730 in k4727 in k4724 in k4721 in k4718 in k4715 in k4712 in k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4685 in k4682 in k4679 in k4676 in k4673 in k4670 in ... */
static void C_ccall f_4735(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4735,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4738,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:941: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[365];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[366];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[11]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4736 in k4733 in k4730 in k4727 in k4724 in k4721 in k4718 in k4715 in k4712 in k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4685 in k4682 in k4679 in k4676 in k4673 in ... */
static void C_ccall f_4738(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4738,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4741,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:942: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[363];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[364];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[11]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4739 in k4736 in k4733 in k4730 in k4727 in k4724 in k4721 in k4718 in k4715 in k4712 in k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4685 in k4682 in k4679 in k4676 in ... */
static void C_ccall f_4741(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4741,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4744,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:943: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[361];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[362];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[11]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4742 in k4739 in k4736 in k4733 in k4730 in k4727 in k4724 in k4721 in k4718 in k4715 in k4712 in k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4685 in k4682 in k4679 in ... */
static void C_ccall f_4744(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4744,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4747,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:944: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[356];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[360];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[11]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4745 in k4742 in k4739 in k4736 in k4733 in k4730 in k4727 in k4724 in k4721 in k4718 in k4715 in k4712 in k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4685 in k4682 in ... */
static void C_ccall f_4747(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4747,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4750,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:945: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[358];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[359];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[11]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4748 in k4745 in k4742 in k4739 in k4736 in k4733 in k4730 in k4727 in k4724 in k4721 in k4718 in k4715 in k4712 in k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4685 in ... */
static void C_ccall f_4750(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4750,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4753,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:946: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[356];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[357];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[11]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4751 in k4748 in k4745 in k4742 in k4739 in k4736 in k4733 in k4730 in k4727 in k4724 in k4721 in k4718 in k4715 in k4712 in k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in ... */
static void C_ccall f_4753(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4753,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4756,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:948: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[354];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[355];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_fix(3);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4754 in k4751 in k4748 in k4745 in k4742 in k4739 in k4736 in k4733 in k4730 in k4727 in k4724 in k4721 in k4718 in k4715 in k4712 in k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in ... */
static void C_ccall f_4756(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4756,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4759,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:949: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[352];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[353];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_fix(3);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4757 in k4754 in k4751 in k4748 in k4745 in k4742 in k4739 in k4736 in k4733 in k4730 in k4727 in k4724 in k4721 in k4718 in k4715 in k4712 in k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in ... */
static void C_ccall f_4759(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,8)))){
C_save_and_reclaim((void *)f_4759,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4762,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:950: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[349];
av2[3]=C_fix(16);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[350];
av2[6]=C_SCHEME_TRUE;
av2[7]=lf[351];
av2[8]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(9,av2);}}

/* k4760 in k4757 in k4754 in k4751 in k4748 in k4745 in k4742 in k4739 in k4736 in k4733 in k4730 in k4727 in k4724 in k4721 in k4718 in k4715 in k4712 in k4709 in k4706 in k4703 in k4700 in k4697 in ... */
static void C_ccall f_4762(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4762,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4765,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:951: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[346];
av2[3]=C_fix(16);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[347];
av2[6]=C_SCHEME_TRUE;
av2[7]=lf[348];
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4763 in k4760 in k4757 in k4754 in k4751 in k4748 in k4745 in k4742 in k4739 in k4736 in k4733 in k4730 in k4727 in k4724 in k4721 in k4718 in k4715 in k4712 in k4709 in k4706 in k4703 in k4700 in ... */
static void C_ccall f_4765(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,8)))){
C_save_and_reclaim((void *)f_4765,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4768,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:952: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[344];
av2[3]=C_fix(16);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[345];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_SCHEME_TRUE;
av2[8]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(9,av2);}}

/* k4766 in k4763 in k4760 in k4757 in k4754 in k4751 in k4748 in k4745 in k4742 in k4739 in k4736 in k4733 in k4730 in k4727 in k4724 in k4721 in k4718 in k4715 in k4712 in k4709 in k4706 in k4703 in ... */
static void C_ccall f_4768(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4768,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4771,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:953: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[342];
av2[3]=C_fix(16);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[343];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4769 in k4766 in k4763 in k4760 in k4757 in k4754 in k4751 in k4748 in k4745 in k4742 in k4739 in k4736 in k4733 in k4730 in k4727 in k4724 in k4721 in k4718 in k4715 in k4712 in k4709 in k4706 in ... */
static void C_ccall f_4771(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,8)))){
C_save_and_reclaim((void *)f_4771,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4774,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:954: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[340];
av2[3]=C_fix(16);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[341];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_SCHEME_TRUE;
av2[8]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(9,av2);}}

/* k4772 in k4769 in k4766 in k4763 in k4760 in k4757 in k4754 in k4751 in k4748 in k4745 in k4742 in k4739 in k4736 in k4733 in k4730 in k4727 in k4724 in k4721 in k4718 in k4715 in k4712 in k4709 in ... */
static void C_ccall f_4774(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4774,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4777,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:955: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[338];
av2[3]=C_fix(16);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[339];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4775 in k4772 in k4769 in k4766 in k4763 in k4760 in k4757 in k4754 in k4751 in k4748 in k4745 in k4742 in k4739 in k4736 in k4733 in k4730 in k4727 in k4724 in k4721 in k4718 in k4715 in k4712 in ... */
static void C_ccall f_4777(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4777,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4780,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:956: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[336];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[337];
av2[6]=C_SCHEME_FALSE;
av2[7]=C_fix(2);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4778 in k4775 in k4772 in k4769 in k4766 in k4763 in k4760 in k4757 in k4754 in k4751 in k4748 in k4745 in k4742 in k4739 in k4736 in k4733 in k4730 in k4727 in k4724 in k4721 in k4718 in k4715 in ... */
static void C_ccall f_4780(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4780,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4783,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:957: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[334];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[335];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[11]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4781 in k4778 in k4775 in k4772 in k4769 in k4766 in k4763 in k4760 in k4757 in k4754 in k4751 in k4748 in k4745 in k4742 in k4739 in k4736 in k4733 in k4730 in k4727 in k4724 in k4721 in k4718 in ... */
static void C_ccall f_4783(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4783,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4786,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:958: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[332];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[333];
av2[6]=C_SCHEME_FALSE;
av2[7]=C_fix(2);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4784 in k4781 in k4778 in k4775 in k4772 in k4769 in k4766 in k4763 in k4760 in k4757 in k4754 in k4751 in k4748 in k4745 in k4742 in k4739 in k4736 in k4733 in k4730 in k4727 in k4724 in k4721 in ... */
static void C_ccall f_4786(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4786,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4789,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:959: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[330];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[331];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_fix(6);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4787 in k4784 in k4781 in k4778 in k4775 in k4772 in k4769 in k4766 in k4763 in k4760 in k4757 in k4754 in k4751 in k4748 in k4745 in k4742 in k4739 in k4736 in k4733 in k4730 in k4727 in k4724 in ... */
static void C_ccall f_4789(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4789,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4792,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:961: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[328];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[329];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4790 in k4787 in k4784 in k4781 in k4778 in k4775 in k4772 in k4769 in k4766 in k4763 in k4760 in k4757 in k4754 in k4751 in k4748 in k4745 in k4742 in k4739 in k4736 in k4733 in k4730 in k4727 in ... */
static void C_ccall f_4792(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4792,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4795,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:962: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[326];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[327];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4793 in k4790 in k4787 in k4784 in k4781 in k4778 in k4775 in k4772 in k4769 in k4766 in k4763 in k4760 in k4757 in k4754 in k4751 in k4748 in k4745 in k4742 in k4739 in k4736 in k4733 in k4730 in ... */
static void C_ccall f_4795(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4795,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4798,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:963: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[324];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[325];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4796 in k4793 in k4790 in k4787 in k4784 in k4781 in k4778 in k4775 in k4772 in k4769 in k4766 in k4763 in k4760 in k4757 in k4754 in k4751 in k4748 in k4745 in k4742 in k4739 in k4736 in k4733 in ... */
static void C_ccall f_4798(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4798,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4801,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:964: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[322];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[323];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4799 in k4796 in k4793 in k4790 in k4787 in k4784 in k4781 in k4778 in k4775 in k4772 in k4769 in k4766 in k4763 in k4760 in k4757 in k4754 in k4751 in k4748 in k4745 in k4742 in k4739 in k4736 in ... */
static void C_ccall f_4801(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4801,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4804,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:965: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[320];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[321];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4802 in k4799 in k4796 in k4793 in k4790 in k4787 in k4784 in k4781 in k4778 in k4775 in k4772 in k4769 in k4766 in k4763 in k4760 in k4757 in k4754 in k4751 in k4748 in k4745 in k4742 in k4739 in ... */
static void C_ccall f_4804(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4804,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4807,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:966: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[318];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[319];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4805 in k4802 in k4799 in k4796 in k4793 in k4790 in k4787 in k4784 in k4781 in k4778 in k4775 in k4772 in k4769 in k4766 in k4763 in k4760 in k4757 in k4754 in k4751 in k4748 in k4745 in k4742 in ... */
static void C_ccall f_4807(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4807,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4810,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:967: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[316];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[317];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4808 in k4805 in k4802 in k4799 in k4796 in k4793 in k4790 in k4787 in k4784 in k4781 in k4778 in k4775 in k4772 in k4769 in k4766 in k4763 in k4760 in k4757 in k4754 in k4751 in k4748 in k4745 in ... */
static void C_ccall f_4810(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4810,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4813,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:968: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[314];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[315];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4811 in k4808 in k4805 in k4802 in k4799 in k4796 in k4793 in k4790 in k4787 in k4784 in k4781 in k4778 in k4775 in k4772 in k4769 in k4766 in k4763 in k4760 in k4757 in k4754 in k4751 in k4748 in ... */
static void C_ccall f_4813(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4813,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4816,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:969: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[312];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[313];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4814 in k4811 in k4808 in k4805 in k4802 in k4799 in k4796 in k4793 in k4790 in k4787 in k4784 in k4781 in k4778 in k4775 in k4772 in k4769 in k4766 in k4763 in k4760 in k4757 in k4754 in k4751 in ... */
static void C_ccall f_4816(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4816,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4819,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:970: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[310];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[311];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4817 in k4814 in k4811 in k4808 in k4805 in k4802 in k4799 in k4796 in k4793 in k4790 in k4787 in k4784 in k4781 in k4778 in k4775 in k4772 in k4769 in k4766 in k4763 in k4760 in k4757 in k4754 in ... */
static void C_ccall f_4819(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4819,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4822,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:971: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[308];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[309];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4820 in k4817 in k4814 in k4811 in k4808 in k4805 in k4802 in k4799 in k4796 in k4793 in k4790 in k4787 in k4784 in k4781 in k4778 in k4775 in k4772 in k4769 in k4766 in k4763 in k4760 in k4757 in ... */
static void C_ccall f_4822(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4822,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4825,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:972: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[306];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[307];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4823 in k4820 in k4817 in k4814 in k4811 in k4808 in k4805 in k4802 in k4799 in k4796 in k4793 in k4790 in k4787 in k4784 in k4781 in k4778 in k4775 in k4772 in k4769 in k4766 in k4763 in k4760 in ... */
static void C_ccall f_4825(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4825,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4828,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:976: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[304];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[305];
av2[6]=C_SCHEME_FALSE;
av2[7]=C_fix(5);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4826 in k4823 in k4820 in k4817 in k4814 in k4811 in k4808 in k4805 in k4802 in k4799 in k4796 in k4793 in k4790 in k4787 in k4784 in k4781 in k4778 in k4775 in k4772 in k4769 in k4766 in k4763 in ... */
static void C_ccall f_4828(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4828,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4831,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:977: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[302];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[303];
av2[6]=C_SCHEME_FALSE;
av2[7]=C_fix(5);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4829 in k4826 in k4823 in k4820 in k4817 in k4814 in k4811 in k4808 in k4805 in k4802 in k4799 in k4796 in k4793 in k4790 in k4787 in k4784 in k4781 in k4778 in k4775 in k4772 in k4769 in k4766 in ... */
static void C_ccall f_4831(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4831,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4834,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:979: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[300];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[301];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[11]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4832 in k4829 in k4826 in k4823 in k4820 in k4817 in k4814 in k4811 in k4808 in k4805 in k4802 in k4799 in k4796 in k4793 in k4790 in k4787 in k4784 in k4781 in k4778 in k4775 in k4772 in k4769 in ... */
static void C_ccall f_4834(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4834,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4837,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:980: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[298];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[299];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[11]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4835 in k4832 in k4829 in k4826 in k4823 in k4820 in k4817 in k4814 in k4811 in k4808 in k4805 in k4802 in k4799 in k4796 in k4793 in k4790 in k4787 in k4784 in k4781 in k4778 in k4775 in k4772 in ... */
static void C_ccall f_4837(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,6)))){
C_save_and_reclaim((void *)f_4837,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4840,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5701,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:982: chicken.compiler.optimizer#rewrite */
t4=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[297];
av2[3]=C_fix(8);
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k4838 in k4835 in k4832 in k4829 in k4826 in k4823 in k4820 in k4817 in k4814 in k4811 in k4808 in k4805 in k4802 in k4799 in k4796 in k4793 in k4790 in k4787 in k4784 in k4781 in k4778 in k4775 in ... */
static void C_ccall f_4840(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4840,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4843,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1000: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[292];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[293];
av2[6]=lf[294];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4841 in k4838 in k4835 in k4832 in k4829 in k4826 in k4823 in k4820 in k4817 in k4814 in k4811 in k4808 in k4805 in k4802 in k4799 in k4796 in k4793 in k4790 in k4787 in k4784 in k4781 in k4778 in ... */
static void C_ccall f_4843(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4843,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4846,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1001: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[289];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[290];
av2[6]=lf[291];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4844 in k4841 in k4838 in k4835 in k4832 in k4829 in k4826 in k4823 in k4820 in k4817 in k4814 in k4811 in k4808 in k4805 in k4802 in k4799 in k4796 in k4793 in k4790 in k4787 in k4784 in k4781 in ... */
static void C_ccall f_4846(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4846,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4849,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1002: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[287];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[288];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4847 in k4844 in k4841 in k4838 in k4835 in k4832 in k4829 in k4826 in k4823 in k4820 in k4817 in k4814 in k4811 in k4808 in k4805 in k4802 in k4799 in k4796 in k4793 in k4790 in k4787 in k4784 in ... */
static void C_ccall f_4849(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4849,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4852,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1003: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[285];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[286];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4850 in k4847 in k4844 in k4841 in k4838 in k4835 in k4832 in k4829 in k4826 in k4823 in k4820 in k4817 in k4814 in k4811 in k4808 in k4805 in k4802 in k4799 in k4796 in k4793 in k4790 in k4787 in ... */
static void C_ccall f_4852(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4852,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4855,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1004: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[282];
av2[3]=C_fix(17);
av2[4]=C_fix(1);
av2[5]=lf[283];
av2[6]=lf[284];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4853 in k4850 in k4847 in k4844 in k4841 in k4838 in k4835 in k4832 in k4829 in k4826 in k4823 in k4820 in k4817 in k4814 in k4811 in k4808 in k4805 in k4802 in k4799 in k4796 in k4793 in k4790 in ... */
static void C_ccall f_4855(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4855,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4858,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1005: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[279];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[280];
av2[6]=lf[281];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4856 in k4853 in k4850 in k4847 in k4844 in k4841 in k4838 in k4835 in k4832 in k4829 in k4826 in k4823 in k4820 in k4817 in k4814 in k4811 in k4808 in k4805 in k4802 in k4799 in k4796 in k4793 in ... */
static void C_ccall f_4858(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4858,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4861,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1006: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[276];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[277];
av2[6]=lf[278];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4859 in k4856 in k4853 in k4850 in k4847 in k4844 in k4841 in k4838 in k4835 in k4832 in k4829 in k4826 in k4823 in k4820 in k4817 in k4814 in k4811 in k4808 in k4805 in k4802 in k4799 in k4796 in ... */
static void C_ccall f_4861(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4861,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4864,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1007: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[273];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[274];
av2[6]=lf[275];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4862 in k4859 in k4856 in k4853 in k4850 in k4847 in k4844 in k4841 in k4838 in k4835 in k4832 in k4829 in k4826 in k4823 in k4820 in k4817 in k4814 in k4811 in k4808 in k4805 in k4802 in k4799 in ... */
static void C_ccall f_4864(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4864,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4867,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1008: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[270];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[271];
av2[6]=lf[272];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4865 in k4862 in k4859 in k4856 in k4853 in k4850 in k4847 in k4844 in k4841 in k4838 in k4835 in k4832 in k4829 in k4826 in k4823 in k4820 in k4817 in k4814 in k4811 in k4808 in k4805 in k4802 in ... */
static void C_ccall f_4867(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4867,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4870,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1009: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[267];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[268];
av2[6]=lf[269];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4868 in k4865 in k4862 in k4859 in k4856 in k4853 in k4850 in k4847 in k4844 in k4841 in k4838 in k4835 in k4832 in k4829 in k4826 in k4823 in k4820 in k4817 in k4814 in k4811 in k4808 in k4805 in ... */
static void C_ccall f_4870(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4870,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4873,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1010: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[265];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[266];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4871 in k4868 in k4865 in k4862 in k4859 in k4856 in k4853 in k4850 in k4847 in k4844 in k4841 in k4838 in k4835 in k4832 in k4829 in k4826 in k4823 in k4820 in k4817 in k4814 in k4811 in k4808 in ... */
static void C_ccall f_4873(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,6)))){
C_save_and_reclaim((void *)f_4873,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4876,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5579,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:1012: chicken.compiler.optimizer#rewrite */
t4=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[264];
av2[3]=C_fix(8);
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k4874 in k4871 in k4868 in k4865 in k4862 in k4859 in k4856 in k4853 in k4850 in k4847 in k4844 in k4841 in k4838 in k4835 in k4832 in k4829 in k4826 in k4823 in k4820 in k4817 in k4814 in k4811 in ... */
static void C_ccall f_4876(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4876,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4879,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1046: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[257];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[258];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4877 in k4874 in k4871 in k4868 in k4865 in k4862 in k4859 in k4856 in k4853 in k4850 in k4847 in k4844 in k4841 in k4838 in k4835 in k4832 in k4829 in k4826 in k4823 in k4820 in k4817 in k4814 in ... */
static void C_ccall f_4879(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4879,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4882,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1047: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[255];
av2[3]=C_fix(17);
av2[4]=C_fix(3);
av2[5]=lf[256];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4880 in k4877 in k4874 in k4871 in k4868 in k4865 in k4862 in k4859 in k4856 in k4853 in k4850 in k4847 in k4844 in k4841 in k4838 in k4835 in k4832 in k4829 in k4826 in k4823 in k4820 in k4817 in ... */
static void C_ccall f_4882(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4882,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4885,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1048: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[253];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[254];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4883 in k4880 in k4877 in k4874 in k4871 in k4868 in k4865 in k4862 in k4859 in k4856 in k4853 in k4850 in k4847 in k4844 in k4841 in k4838 in k4835 in k4832 in k4829 in k4826 in k4823 in k4820 in ... */
static void C_ccall f_4885(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4885,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4888,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1049: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[251];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[252];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4886 in k4883 in k4880 in k4877 in k4874 in k4871 in k4868 in k4865 in k4862 in k4859 in k4856 in k4853 in k4850 in k4847 in k4844 in k4841 in k4838 in k4835 in k4832 in k4829 in k4826 in k4823 in ... */
static void C_ccall f_4888(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4888,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4891,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1050: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[249];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[250];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4889 in k4886 in k4883 in k4880 in k4877 in k4874 in k4871 in k4868 in k4865 in k4862 in k4859 in k4856 in k4853 in k4850 in k4847 in k4844 in k4841 in k4838 in k4835 in k4832 in k4829 in k4826 in ... */
static void C_ccall f_4891(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4891,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4894,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1051: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[247];
av2[3]=C_fix(17);
av2[4]=C_fix(3);
av2[5]=lf[248];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4892 in k4889 in k4886 in k4883 in k4880 in k4877 in k4874 in k4871 in k4868 in k4865 in k4862 in k4859 in k4856 in k4853 in k4850 in k4847 in k4844 in k4841 in k4838 in k4835 in k4832 in k4829 in ... */
static void C_ccall f_4894(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4894,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4897,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1052: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[245];
av2[3]=C_fix(17);
av2[4]=C_fix(3);
av2[5]=lf[246];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4895 in k4892 in k4889 in k4886 in k4883 in k4880 in k4877 in k4874 in k4871 in k4868 in k4865 in k4862 in k4859 in k4856 in k4853 in k4850 in k4847 in k4844 in k4841 in k4838 in k4835 in k4832 in ... */
static void C_ccall f_4897(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4897,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4900,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1053: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[243];
av2[3]=C_fix(17);
av2[4]=C_fix(3);
av2[5]=lf[244];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4898 in k4895 in k4892 in k4889 in k4886 in k4883 in k4880 in k4877 in k4874 in k4871 in k4868 in k4865 in k4862 in k4859 in k4856 in k4853 in k4850 in k4847 in k4844 in k4841 in k4838 in k4835 in ... */
static void C_ccall f_4900(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4900,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4903,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1054: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[240];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[241];
av2[6]=lf[242];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4901 in k4898 in k4895 in k4892 in k4889 in k4886 in k4883 in k4880 in k4877 in k4874 in k4871 in k4868 in k4865 in k4862 in k4859 in k4856 in k4853 in k4850 in k4847 in k4844 in k4841 in k4838 in ... */
static void C_ccall f_4903(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4903,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4906,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1055: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[238];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[239];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4904 in k4901 in k4898 in k4895 in k4892 in k4889 in k4886 in k4883 in k4880 in k4877 in k4874 in k4871 in k4868 in k4865 in k4862 in k4859 in k4856 in k4853 in k4850 in k4847 in k4844 in k4841 in ... */
static void C_ccall f_4906(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4906,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4909,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1056: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[236];
av2[3]=C_fix(17);
av2[4]=C_fix(1);
av2[5]=lf[237];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4907 in k4904 in k4901 in k4898 in k4895 in k4892 in k4889 in k4886 in k4883 in k4880 in k4877 in k4874 in k4871 in k4868 in k4865 in k4862 in k4859 in k4856 in k4853 in k4850 in k4847 in k4844 in ... */
static void C_ccall f_4909(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4909,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4912,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1057: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[233];
av2[3]=C_fix(17);
av2[4]=C_fix(1);
av2[5]=lf[234];
av2[6]=lf[235];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4910 in k4907 in k4904 in k4901 in k4898 in k4895 in k4892 in k4889 in k4886 in k4883 in k4880 in k4877 in k4874 in k4871 in k4868 in k4865 in k4862 in k4859 in k4856 in k4853 in k4850 in k4847 in ... */
static void C_ccall f_4912(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4912,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4915,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1058: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[231];
av2[3]=C_fix(17);
av2[4]=C_fix(1);
av2[5]=lf[232];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4913 in k4910 in k4907 in k4904 in k4901 in k4898 in k4895 in k4892 in k4889 in k4886 in k4883 in k4880 in k4877 in k4874 in k4871 in k4868 in k4865 in k4862 in k4859 in k4856 in k4853 in k4850 in ... */
static void C_ccall f_4915(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4915,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4918,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1059: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[229];
av2[3]=C_fix(17);
av2[4]=C_fix(1);
av2[5]=lf[230];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4916 in k4913 in k4910 in k4907 in k4904 in k4901 in k4898 in k4895 in k4892 in k4889 in k4886 in k4883 in k4880 in k4877 in k4874 in k4871 in k4868 in k4865 in k4862 in k4859 in k4856 in k4853 in ... */
static void C_ccall f_4918(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4918,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4921,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1060: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[227];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[228];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4919 in k4916 in k4913 in k4910 in k4907 in k4904 in k4901 in k4898 in k4895 in k4892 in k4889 in k4886 in k4883 in k4880 in k4877 in k4874 in k4871 in k4868 in k4865 in k4862 in k4859 in k4856 in ... */
static void C_ccall f_4921(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4921,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4924,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1061: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[225];
av2[3]=C_fix(17);
av2[4]=C_fix(1);
av2[5]=lf[226];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4922 in k4919 in k4916 in k4913 in k4910 in k4907 in k4904 in k4901 in k4898 in k4895 in k4892 in k4889 in k4886 in k4883 in k4880 in k4877 in k4874 in k4871 in k4868 in k4865 in k4862 in k4859 in ... */
static void C_ccall f_4924(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4924,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4927,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1062: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[223];
av2[3]=C_fix(17);
av2[4]=C_fix(1);
av2[5]=lf[224];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4925 in k4922 in k4919 in k4916 in k4913 in k4910 in k4907 in k4904 in k4901 in k4898 in k4895 in k4892 in k4889 in k4886 in k4883 in k4880 in k4877 in k4874 in k4871 in k4868 in k4865 in k4862 in ... */
static void C_ccall f_4927(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4927,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4930,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1063: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[221];
av2[3]=C_fix(17);
av2[4]=C_fix(1);
av2[5]=lf[222];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4928 in k4925 in k4922 in k4919 in k4916 in k4913 in k4910 in k4907 in k4904 in k4901 in k4898 in k4895 in k4892 in k4889 in k4886 in k4883 in k4880 in k4877 in k4874 in k4871 in k4868 in k4865 in ... */
static void C_ccall f_4930(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4930,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4933,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1064: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[219];
av2[3]=C_fix(17);
av2[4]=C_fix(1);
av2[5]=lf[220];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4931 in k4928 in k4925 in k4922 in k4919 in k4916 in k4913 in k4910 in k4907 in k4904 in k4901 in k4898 in k4895 in k4892 in k4889 in k4886 in k4883 in k4880 in k4877 in k4874 in k4871 in k4868 in ... */
static void C_ccall f_4933(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4933,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4936,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1065: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[217];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[218];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4934 in k4931 in k4928 in k4925 in k4922 in k4919 in k4916 in k4913 in k4910 in k4907 in k4904 in k4901 in k4898 in k4895 in k4892 in k4889 in k4886 in k4883 in k4880 in k4877 in k4874 in k4871 in ... */
static void C_ccall f_4936(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4936,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4939,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1066: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[215];
av2[3]=C_fix(17);
av2[4]=C_fix(1);
av2[5]=lf[216];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4937 in k4934 in k4931 in k4928 in k4925 in k4922 in k4919 in k4916 in k4913 in k4910 in k4907 in k4904 in k4901 in k4898 in k4895 in k4892 in k4889 in k4886 in k4883 in k4880 in k4877 in k4874 in ... */
static void C_ccall f_4939(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4939,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4942,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1067: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[213];
av2[3]=C_fix(17);
av2[4]=C_fix(1);
av2[5]=lf[214];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4940 in k4937 in k4934 in k4931 in k4928 in k4925 in k4922 in k4919 in k4916 in k4913 in k4910 in k4907 in k4904 in k4901 in k4898 in k4895 in k4892 in k4889 in k4886 in k4883 in k4880 in k4877 in ... */
static void C_ccall f_4942(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4942,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4945,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1068: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[211];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[212];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4943 in k4940 in k4937 in k4934 in k4931 in k4928 in k4925 in k4922 in k4919 in k4916 in k4913 in k4910 in k4907 in k4904 in k4901 in k4898 in k4895 in k4892 in k4889 in k4886 in k4883 in k4880 in ... */
static void C_ccall f_4945(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4945,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4948,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1069: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[209];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[210];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4946 in k4943 in k4940 in k4937 in k4934 in k4931 in k4928 in k4925 in k4922 in k4919 in k4916 in k4913 in k4910 in k4907 in k4904 in k4901 in k4898 in k4895 in k4892 in k4889 in k4886 in k4883 in ... */
static void C_ccall f_4948(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4948,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4951,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1071: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[207];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[208];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4949 in k4946 in k4943 in k4940 in k4937 in k4934 in k4931 in k4928 in k4925 in k4922 in k4919 in k4916 in k4913 in k4910 in k4907 in k4904 in k4901 in k4898 in k4895 in k4892 in k4889 in k4886 in ... */
static void C_ccall f_4951(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4951,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4954,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1074: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[204];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[206];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4952 in k4949 in k4946 in k4943 in k4940 in k4937 in k4934 in k4931 in k4928 in k4925 in k4922 in k4919 in k4916 in k4913 in k4910 in k4907 in k4904 in k4901 in k4898 in k4895 in k4892 in k4889 in ... */
static void C_ccall f_4954(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4954,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4957,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1075: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[204];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[205];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4955 in k4952 in k4949 in k4946 in k4943 in k4940 in k4937 in k4934 in k4931 in k4928 in k4925 in k4922 in k4919 in k4916 in k4913 in k4910 in k4907 in k4904 in k4901 in k4898 in k4895 in k4892 in ... */
static void C_ccall f_4957(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4957,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4960,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1076: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[201];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[203];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4958 in k4955 in k4952 in k4949 in k4946 in k4943 in k4940 in k4937 in k4934 in k4931 in k4928 in k4925 in k4922 in k4919 in k4916 in k4913 in k4910 in k4907 in k4904 in k4901 in k4898 in k4895 in ... */
static void C_ccall f_4960(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4960,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4963,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1077: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[201];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[202];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4961 in k4958 in k4955 in k4952 in k4949 in k4946 in k4943 in k4940 in k4937 in k4934 in k4931 in k4928 in k4925 in k4922 in k4919 in k4916 in k4913 in k4910 in k4907 in k4904 in k4901 in k4898 in ... */
static void C_ccall f_4963(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4963,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4966,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1078: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[198];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[200];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4964 in k4961 in k4958 in k4955 in k4952 in k4949 in k4946 in k4943 in k4940 in k4937 in k4934 in k4931 in k4928 in k4925 in k4922 in k4919 in k4916 in k4913 in k4910 in k4907 in k4904 in k4901 in ... */
static void C_ccall f_4966(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4966,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4969,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1079: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[198];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[199];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4967 in k4964 in k4961 in k4958 in k4955 in k4952 in k4949 in k4946 in k4943 in k4940 in k4937 in k4934 in k4931 in k4928 in k4925 in k4922 in k4919 in k4916 in k4913 in k4910 in k4907 in k4904 in ... */
static void C_ccall f_4969(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4969,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4972,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1080: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[195];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[197];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4970 in k4967 in k4964 in k4961 in k4958 in k4955 in k4952 in k4949 in k4946 in k4943 in k4940 in k4937 in k4934 in k4931 in k4928 in k4925 in k4922 in k4919 in k4916 in k4913 in k4910 in k4907 in ... */
static void C_ccall f_4972(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4972,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4975,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1081: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[195];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[196];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4973 in k4970 in k4967 in k4964 in k4961 in k4958 in k4955 in k4952 in k4949 in k4946 in k4943 in k4940 in k4937 in k4934 in k4931 in k4928 in k4925 in k4922 in k4919 in k4916 in k4913 in k4910 in ... */
static void C_ccall f_4975(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4975,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4978,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1083: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[193];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[194];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_fix(5);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4976 in k4973 in k4970 in k4967 in k4964 in k4961 in k4958 in k4955 in k4952 in k4949 in k4946 in k4943 in k4940 in k4937 in k4934 in k4931 in k4928 in k4925 in k4922 in k4919 in k4916 in k4913 in ... */
static void C_ccall f_4978(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4978,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4981,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1084: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[191];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[192];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_fix(5);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4979 in k4976 in k4973 in k4970 in k4967 in k4964 in k4961 in k4958 in k4955 in k4952 in k4949 in k4946 in k4943 in k4940 in k4937 in k4934 in k4931 in k4928 in k4925 in k4922 in k4919 in k4916 in ... */
static void C_ccall f_4981(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4981,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4984,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1086: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[188];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[190];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[11]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4982 in k4979 in k4976 in k4973 in k4970 in k4967 in k4964 in k4961 in k4958 in k4955 in k4952 in k4949 in k4946 in k4943 in k4940 in k4937 in k4934 in k4931 in k4928 in k4925 in k4922 in k4919 in ... */
static void C_ccall f_4984(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4984,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4987,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1087: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[188];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[189];
av2[6]=C_SCHEME_TRUE;
av2[7]=*((C_word*)lf[11]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4985 in k4982 in k4979 in k4976 in k4973 in k4970 in k4967 in k4964 in k4961 in k4958 in k4955 in k4952 in k4949 in k4946 in k4943 in k4940 in k4937 in k4934 in k4931 in k4928 in k4925 in k4922 in ... */
static void C_ccall f_4987(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4987,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4990,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1088: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[185];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[187];
av2[6]=C_SCHEME_FALSE;
av2[7]=*((C_word*)lf[11]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4988 in k4985 in k4982 in k4979 in k4976 in k4973 in k4970 in k4967 in k4964 in k4961 in k4958 in k4955 in k4952 in k4949 in k4946 in k4943 in k4940 in k4937 in k4934 in k4931 in k4928 in k4925 in ... */
static void C_ccall f_4990(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4990,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4993,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1089: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[185];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[186];
av2[6]=C_SCHEME_TRUE;
av2[7]=*((C_word*)lf[11]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k4991 in k4988 in k4985 in k4982 in k4979 in k4976 in k4973 in k4970 in k4967 in k4964 in k4961 in k4958 in k4955 in k4952 in k4949 in k4946 in k4943 in k4940 in k4937 in k4934 in k4931 in k4928 in ... */
static void C_ccall f_4993(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4993,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4996,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1091: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[182];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[184];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4994 in k4991 in k4988 in k4985 in k4982 in k4979 in k4976 in k4973 in k4970 in k4967 in k4964 in k4961 in k4958 in k4955 in k4952 in k4949 in k4946 in k4943 in k4940 in k4937 in k4934 in k4931 in ... */
static void C_ccall f_4996(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4996,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4999,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1092: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[182];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[183];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k4997 in k4994 in k4991 in k4988 in k4985 in k4982 in k4979 in k4976 in k4973 in k4970 in k4967 in k4964 in k4961 in k4958 in k4955 in k4952 in k4949 in k4946 in k4943 in k4940 in k4937 in k4934 in ... */
static void C_ccall f_4999(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4999,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5002,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1093: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[179];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[181];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k5000 in k4997 in k4994 in k4991 in k4988 in k4985 in k4982 in k4979 in k4976 in k4973 in k4970 in k4967 in k4964 in k4961 in k4958 in k4955 in k4952 in k4949 in k4946 in k4943 in k4940 in k4937 in ... */
static void C_ccall f_5002(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5002,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5005,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1094: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[179];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[180];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k5003 in k5000 in k4997 in k4994 in k4991 in k4988 in k4985 in k4982 in k4979 in k4976 in k4973 in k4970 in k4967 in k4964 in k4961 in k4958 in k4955 in k4952 in k4949 in k4946 in k4943 in k4940 in ... */
static void C_ccall f_5005(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5005,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5008,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1095: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[176];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[178];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k5006 in k5003 in k5000 in k4997 in k4994 in k4991 in k4988 in k4985 in k4982 in k4979 in k4976 in k4973 in k4970 in k4967 in k4964 in k4961 in k4958 in k4955 in k4952 in k4949 in k4946 in k4943 in ... */
static void C_ccall f_5008(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5008,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5011,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1096: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[176];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[177];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k5009 in k5006 in k5003 in k5000 in k4997 in k4994 in k4991 in k4988 in k4985 in k4982 in k4979 in k4976 in k4973 in k4970 in k4967 in k4964 in k4961 in k4958 in k4955 in k4952 in k4949 in k4946 in ... */
static void C_ccall f_5011(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5011,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5014,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1097: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[173];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[175];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k5012 in k5009 in k5006 in k5003 in k5000 in k4997 in k4994 in k4991 in k4988 in k4985 in k4982 in k4979 in k4976 in k4973 in k4970 in k4967 in k4964 in k4961 in k4958 in k4955 in k4952 in k4949 in ... */
static void C_ccall f_5014(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5014,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5017,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1098: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[173];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[174];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k5015 in k5012 in k5009 in k5006 in k5003 in k5000 in k4997 in k4994 in k4991 in k4988 in k4985 in k4982 in k4979 in k4976 in k4973 in k4970 in k4967 in k4964 in k4961 in k4958 in k4955 in k4952 in ... */
static void C_ccall f_5017(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5017,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5020,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1099: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[170];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[172];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k5018 in k5015 in k5012 in k5009 in k5006 in k5003 in k5000 in k4997 in k4994 in k4991 in k4988 in k4985 in k4982 in k4979 in k4976 in k4973 in k4970 in k4967 in k4964 in k4961 in k4958 in k4955 in ... */
static void C_ccall f_5020(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5020,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5023,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1100: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[170];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[171];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k5021 in k5018 in k5015 in k5012 in k5009 in k5006 in k5003 in k5000 in k4997 in k4994 in k4991 in k4988 in k4985 in k4982 in k4979 in k4976 in k4973 in k4970 in k4967 in k4964 in k4961 in k4958 in ... */
static void C_ccall f_5023(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5023,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5026,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1101: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[167];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[169];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k5024 in k5021 in k5018 in k5015 in k5012 in k5009 in k5006 in k5003 in k5000 in k4997 in k4994 in k4991 in k4988 in k4985 in k4982 in k4979 in k4976 in k4973 in k4970 in k4967 in k4964 in k4961 in ... */
static void C_ccall f_5026(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5026,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5029,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1102: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[167];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[168];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k5027 in k5024 in k5021 in k5018 in k5015 in k5012 in k5009 in k5006 in k5003 in k5000 in k4997 in k4994 in k4991 in k4988 in k4985 in k4982 in k4979 in k4976 in k4973 in k4970 in k4967 in k4964 in ... */
static void C_ccall f_5029(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5029,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5032,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1103: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[164];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[166];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k5030 in k5027 in k5024 in k5021 in k5018 in k5015 in k5012 in k5009 in k5006 in k5003 in k5000 in k4997 in k4994 in k4991 in k4988 in k4985 in k4982 in k4979 in k4976 in k4973 in k4970 in k4967 in ... */
static void C_ccall f_5032(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5032,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5035,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1104: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[164];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[165];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k5033 in k5030 in k5027 in k5024 in k5021 in k5018 in k5015 in k5012 in k5009 in k5006 in k5003 in k5000 in k4997 in k4994 in k4991 in k4988 in k4985 in k4982 in k4979 in k4976 in k4973 in k4970 in ... */
static void C_ccall f_5035(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5035,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5038,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1105: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[161];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[163];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k5036 in k5033 in k5030 in k5027 in k5024 in k5021 in k5018 in k5015 in k5012 in k5009 in k5006 in k5003 in k5000 in k4997 in k4994 in k4991 in k4988 in k4985 in k4982 in k4979 in k4976 in k4973 in ... */
static void C_ccall f_5038(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5038,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5041,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1106: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[161];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[162];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k5039 in k5036 in k5033 in k5030 in k5027 in k5024 in k5021 in k5018 in k5015 in k5012 in k5009 in k5006 in k5003 in k5000 in k4997 in k4994 in k4991 in k4988 in k4985 in k4982 in k4979 in k4976 in ... */
static void C_ccall f_5041(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5041,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5044,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1107: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[158];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[160];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k5042 in k5039 in k5036 in k5033 in k5030 in k5027 in k5024 in k5021 in k5018 in k5015 in k5012 in k5009 in k5006 in k5003 in k5000 in k4997 in k4994 in k4991 in k4988 in k4985 in k4982 in k4979 in ... */
static void C_ccall f_5044(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5044,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5047,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1108: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[158];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[159];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k5045 in k5042 in k5039 in k5036 in k5033 in k5030 in k5027 in k5024 in k5021 in k5018 in k5015 in k5012 in k5009 in k5006 in k5003 in k5000 in k4997 in k4994 in k4991 in k4988 in k4985 in k4982 in ... */
static void C_ccall f_5047(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5047,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5050,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1109: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[155];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[157];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k5048 in k5045 in k5042 in k5039 in k5036 in k5033 in k5030 in k5027 in k5024 in k5021 in k5018 in k5015 in k5012 in k5009 in k5006 in k5003 in k5000 in k4997 in k4994 in k4991 in k4988 in k4985 in ... */
static void C_ccall f_5050(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5050,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5053,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1110: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[155];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[156];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k5051 in k5048 in k5045 in k5042 in k5039 in k5036 in k5033 in k5030 in k5027 in k5024 in k5021 in k5018 in k5015 in k5012 in k5009 in k5006 in k5003 in k5000 in k4997 in k4994 in k4991 in k4988 in ... */
static void C_ccall f_5053(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5053,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5056,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1112: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[152];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[154];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k5054 in k5051 in k5048 in k5045 in k5042 in k5039 in k5036 in k5033 in k5030 in k5027 in k5024 in k5021 in k5018 in k5015 in k5012 in k5009 in k5006 in k5003 in k5000 in k4997 in k4994 in k4991 in ... */
static void C_ccall f_5056(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5056,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5059,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1113: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[152];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[153];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k5057 in k5054 in k5051 in k5048 in k5045 in k5042 in k5039 in k5036 in k5033 in k5030 in k5027 in k5024 in k5021 in k5018 in k5015 in k5012 in k5009 in k5006 in k5003 in k5000 in k4997 in k4994 in ... */
static void C_ccall f_5059(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5059,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5062,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1114: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[149];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[151];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k5060 in k5057 in k5054 in k5051 in k5048 in k5045 in k5042 in k5039 in k5036 in k5033 in k5030 in k5027 in k5024 in k5021 in k5018 in k5015 in k5012 in k5009 in k5006 in k5003 in k5000 in k4997 in ... */
static void C_ccall f_5062(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5062,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5065,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1115: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[149];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[150];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k5063 in k5060 in k5057 in k5054 in k5051 in k5048 in k5045 in k5042 in k5039 in k5036 in k5033 in k5030 in k5027 in k5024 in k5021 in k5018 in k5015 in k5012 in k5009 in k5006 in k5003 in k5000 in ... */
static void C_ccall f_5065(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5065,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5068,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1116: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[146];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[148];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k5066 in k5063 in k5060 in k5057 in k5054 in k5051 in k5048 in k5045 in k5042 in k5039 in k5036 in k5033 in k5030 in k5027 in k5024 in k5021 in k5018 in k5015 in k5012 in k5009 in k5006 in k5003 in ... */
static void C_ccall f_5068(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5068,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5071,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1117: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[146];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[147];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k5069 in k5066 in k5063 in k5060 in k5057 in k5054 in k5051 in k5048 in k5045 in k5042 in k5039 in k5036 in k5033 in k5030 in k5027 in k5024 in k5021 in k5018 in k5015 in k5012 in k5009 in k5006 in ... */
static void C_ccall f_5071(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5071,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5074,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1118: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[143];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[145];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k5072 in k5069 in k5066 in k5063 in k5060 in k5057 in k5054 in k5051 in k5048 in k5045 in k5042 in k5039 in k5036 in k5033 in k5030 in k5027 in k5024 in k5021 in k5018 in k5015 in k5012 in k5009 in ... */
static void C_ccall f_5074(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5074,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5077,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1119: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[143];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[144];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k5075 in k5072 in k5069 in k5066 in k5063 in k5060 in k5057 in k5054 in k5051 in k5048 in k5045 in k5042 in k5039 in k5036 in k5033 in k5030 in k5027 in k5024 in k5021 in k5018 in k5015 in k5012 in ... */
static void C_ccall f_5077(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5077,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5080,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1120: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[140];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[142];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k5078 in k5075 in k5072 in k5069 in k5066 in k5063 in k5060 in k5057 in k5054 in k5051 in k5048 in k5045 in k5042 in k5039 in k5036 in k5033 in k5030 in k5027 in k5024 in k5021 in k5018 in k5015 in ... */
static void C_ccall f_5080(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5080,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5083,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1121: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[140];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[141];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k5081 in k5078 in k5075 in k5072 in k5069 in k5066 in k5063 in k5060 in k5057 in k5054 in k5051 in k5048 in k5045 in k5042 in k5039 in k5036 in k5033 in k5030 in k5027 in k5024 in k5021 in k5018 in ... */
static void C_ccall f_5083(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5083,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5086,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1122: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[137];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[139];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k5084 in k5081 in k5078 in k5075 in k5072 in k5069 in k5066 in k5063 in k5060 in k5057 in k5054 in k5051 in k5048 in k5045 in k5042 in k5039 in k5036 in k5033 in k5030 in k5027 in k5024 in k5021 in ... */
static void C_ccall f_5086(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5086,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5089,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1123: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[137];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[138];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k5087 in k5084 in k5081 in k5078 in k5075 in k5072 in k5069 in k5066 in k5063 in k5060 in k5057 in k5054 in k5051 in k5048 in k5045 in k5042 in k5039 in k5036 in k5033 in k5030 in k5027 in k5024 in ... */
static void C_ccall f_5089(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5089,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5092,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1124: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[134];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[136];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k5090 in k5087 in k5084 in k5081 in k5078 in k5075 in k5072 in k5069 in k5066 in k5063 in k5060 in k5057 in k5054 in k5051 in k5048 in k5045 in k5042 in k5039 in k5036 in k5033 in k5030 in k5027 in ... */
static void C_ccall f_5092(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5092,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5095,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1125: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[134];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[135];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k5093 in k5090 in k5087 in k5084 in k5081 in k5078 in k5075 in k5072 in k5069 in k5066 in k5063 in k5060 in k5057 in k5054 in k5051 in k5048 in k5045 in k5042 in k5039 in k5036 in k5033 in k5030 in ... */
static void C_ccall f_5095(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5095,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5098,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1126: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[131];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[133];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k5096 in k5093 in k5090 in k5087 in k5084 in k5081 in k5078 in k5075 in k5072 in k5069 in k5066 in k5063 in k5060 in k5057 in k5054 in k5051 in k5048 in k5045 in k5042 in k5039 in k5036 in k5033 in ... */
static void C_ccall f_5098(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5098,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5101,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1127: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[131];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[132];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k5099 in k5096 in k5093 in k5090 in k5087 in k5084 in k5081 in k5078 in k5075 in k5072 in k5069 in k5066 in k5063 in k5060 in k5057 in k5054 in k5051 in k5048 in k5045 in k5042 in k5039 in k5036 in ... */
static void C_ccall f_5101(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5101,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5104,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1128: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[128];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[130];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k5102 in k5099 in k5096 in k5093 in k5090 in k5087 in k5084 in k5081 in k5078 in k5075 in k5072 in k5069 in k5066 in k5063 in k5060 in k5057 in k5054 in k5051 in k5048 in k5045 in k5042 in k5039 in ... */
static void C_ccall f_5104(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5104,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5107,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1129: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[128];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[129];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in k5087 in k5084 in k5081 in k5078 in k5075 in k5072 in k5069 in k5066 in k5063 in k5060 in k5057 in k5054 in k5051 in k5048 in k5045 in k5042 in ... */
static void C_ccall f_5107(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5107,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5110,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1130: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[125];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[127];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in k5087 in k5084 in k5081 in k5078 in k5075 in k5072 in k5069 in k5066 in k5063 in k5060 in k5057 in k5054 in k5051 in k5048 in k5045 in ... */
static void C_ccall f_5110(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5110,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5113,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1131: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[125];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[126];
av2[6]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in k5087 in k5084 in k5081 in k5078 in k5075 in k5072 in k5069 in k5066 in k5063 in k5060 in k5057 in k5054 in k5051 in k5048 in ... */
static void C_ccall f_5113(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_5113,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5116,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1133: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[123];
av2[3]=C_fix(17);
av2[4]=C_fix(1);
av2[5]=lf[124];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in k5087 in k5084 in k5081 in k5078 in k5075 in k5072 in k5069 in k5066 in k5063 in k5060 in k5057 in k5054 in k5051 in ... */
static void C_ccall f_5116(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_5116,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5119,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1135: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[121];
av2[3]=C_fix(7);
av2[4]=C_fix(1);
av2[5]=lf[122];
av2[6]=C_fix(1);
av2[7]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in k5087 in k5084 in k5081 in k5078 in k5075 in k5072 in k5069 in k5066 in k5063 in k5060 in k5057 in k5054 in ... */
static void C_ccall f_5119(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_5119,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5122,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1136: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[119];
av2[3]=C_fix(7);
av2[4]=C_fix(1);
av2[5]=lf[120];
av2[6]=C_fix(1);
av2[7]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k5120 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in k5087 in k5084 in k5081 in k5078 in k5075 in k5072 in k5069 in k5066 in k5063 in k5060 in k5057 in ... */
static void C_ccall f_5122(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_5122,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5125,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1137: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[117];
av2[3]=C_fix(7);
av2[4]=C_fix(1);
av2[5]=lf[118];
av2[6]=C_fix(1);
av2[7]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k5123 in k5120 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in k5087 in k5084 in k5081 in k5078 in k5075 in k5072 in k5069 in k5066 in k5063 in k5060 in ... */
static void C_ccall f_5125(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_5125,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5128,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1138: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[115];
av2[3]=C_fix(7);
av2[4]=C_fix(1);
av2[5]=lf[116];
av2[6]=C_fix(1);
av2[7]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k5126 in k5123 in k5120 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in k5087 in k5084 in k5081 in k5078 in k5075 in k5072 in k5069 in k5066 in k5063 in ... */
static void C_ccall f_5128(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_5128,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5131,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1139: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[113];
av2[3]=C_fix(7);
av2[4]=C_fix(1);
av2[5]=lf[114];
av2[6]=C_fix(1);
av2[7]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k5129 in k5126 in k5123 in k5120 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in k5087 in k5084 in k5081 in k5078 in k5075 in k5072 in k5069 in k5066 in ... */
static void C_ccall f_5131(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_5131,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5134,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1140: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[111];
av2[3]=C_fix(7);
av2[4]=C_fix(1);
av2[5]=lf[112];
av2[6]=C_fix(1);
av2[7]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k5132 in k5129 in k5126 in k5123 in k5120 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in k5087 in k5084 in k5081 in k5078 in k5075 in k5072 in k5069 in ... */
static void C_ccall f_5134(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_5134,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5137,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1141: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[109];
av2[3]=C_fix(7);
av2[4]=C_fix(1);
av2[5]=lf[110];
av2[6]=C_fix(1);
av2[7]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in k5087 in k5084 in k5081 in k5078 in k5075 in k5072 in ... */
static void C_ccall f_5137(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_5137,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5140,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1142: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[107];
av2[3]=C_fix(7);
av2[4]=C_fix(1);
av2[5]=lf[108];
av2[6]=C_fix(1);
av2[7]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in k5087 in k5084 in k5081 in k5078 in k5075 in ... */
static void C_ccall f_5140(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_5140,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5143,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1143: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[105];
av2[3]=C_fix(7);
av2[4]=C_fix(1);
av2[5]=lf[106];
av2[6]=C_fix(1);
av2[7]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in k5087 in k5084 in k5081 in k5078 in ... */
static void C_ccall f_5143(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_5143,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5146,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1144: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[103];
av2[3]=C_fix(7);
av2[4]=C_fix(1);
av2[5]=lf[104];
av2[6]=C_fix(1);
av2[7]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in k5087 in k5084 in k5081 in ... */
static void C_ccall f_5146(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,6)))){
C_save_and_reclaim((void *)f_5146,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5148,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5253,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:1172: chicken.compiler.optimizer#rewrite */
t4=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[102];
av2[3]=C_fix(8);
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* rewrite-make-vector in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in k5087 in k5084 in ... */
static void C_ccall f_5148(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_5148,c,av);}
a=C_alloc(6);
t6=C_i_length(t5);
if(C_truep(C_i_pairp(t5))){
t7=C_i_car(t5);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5250,a[2]=t1,a[3]=t4,a[4]=t5,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:1153: chicken.compiler.support#node-class */
t9=*((C_word*)lf[34]+1);{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
av2[2]=t7;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}
else{
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* k5168 in k5248 in rewrite-make-vector in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in ... */
static void C_ccall f_5170(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_5170,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5246,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:1155: chicken.compiler.support#node-parameters */
t3=*((C_word*)lf[33]+1);{
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

/* k5183 in k5244 in k5168 in k5248 in rewrite-make-vector in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in ... */
static void C_ccall f_5185(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_5185,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5188,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(C_u_i_cdr(((C_word*)t0)[6])))){
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_cadr(((C_word*)t0)[6]);
f_5188(2,av2);}}
else{
/* c-platform.scm:1160: chicken.compiler.support#make-node */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[62];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k5186 in k5183 in k5244 in k5168 in k5248 in rewrite-make-vector in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in ... */
static void C_ccall f_5188(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5188,c,av);}
a=C_alloc(41);
t2=C_a_i_list1(&a,1,((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5203,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5215,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=C_a_i_fixnum_plus(&a,2,((C_word*)t0)[5],C_fix(1));
t7=C_a_i_list2(&a,2,lf[61],t6);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5223,a[2]=t5,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5225,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2705,a[2]=((C_word*)t0)[5],a[3]=t11,a[4]=t9,tmp=(C_word)a,a+=5,tmp));
t13=((C_word*)t11)[1];
f_2705(t13,t8,C_fix(0));}

/* k5201 in k5186 in k5183 in k5244 in k5168 in k5248 in rewrite-make-vector in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in ... */
static void C_ccall f_5203(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_5203,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:1161: chicken.compiler.support#make-node */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[48];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k5213 in k5186 in k5183 in k5244 in k5168 in k5248 in rewrite-make-vector in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in ... */
static void C_ccall f_5215(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_5215,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:1165: chicken.compiler.support#make-node */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[23];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k5221 in k5186 in k5183 in k5244 in k5168 in k5248 in rewrite-make-vector in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in ... */
static void C_ccall f_5223(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5223,c,av);}
/* c-platform.scm:1168: chicken.compiler.support#make-node */
t2=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[28];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a5224 in k5186 in k5183 in k5244 in k5168 in k5248 in rewrite-make-vector in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in ... */
static void C_fcall f_5225(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_5225,2,t0,t1);}
/* c-platform.scm:1171: chicken.compiler.support#varnode */
t2=*((C_word*)lf[49]+1);{
C_word av2[3];
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k5244 in k5168 in k5248 in rewrite-make-vector in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in ... */
static void C_ccall f_5246(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_5246,c,av);}
a=C_alloc(7);
t2=C_i_car(t1);
if(C_truep(C_fixnump(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5185,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* c-platform.scm:1157: scheme#<= */{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t3;
av2[2]=C_fix(0);
av2[3]=t2;
av2[4]=C_fix(32);
C_less_or_equal_p(5,av2);}}
else{
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5248 in rewrite-make-vector in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in k5087 in ... */
static void C_ccall f_5250(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_5250,c,av);}
a=C_alloc(6);
t2=C_eqp(lf[31],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5170,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:1154: chicken.base#gensym */
t4=*((C_word*)lf[50]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5251 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in k5087 in k5084 in ... */
static void C_ccall f_5253(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_5253,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5256,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1173: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[101];
av2[3]=C_fix(8);
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k5254 in k5251 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in k5087 in ... */
static void C_ccall f_5256(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,6)))){
C_save_and_reclaim((void *)f_5256,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5258,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5380,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:1195: chicken.compiler.optimizer#rewrite */
t4=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[45];
av2[3]=C_fix(8);
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* rewrite-call/cc in k5254 in k5251 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in ... */
static void C_ccall f_5258(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_5258,c,av);}
a=C_alloc(6);
t6=C_i_length(t5);
t7=C_eqp(C_fix(1),t6);
if(C_truep(t7)){
t8=C_i_car(t5);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5372,a[2]=t8,a[3]=t4,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:1180: chicken.compiler.support#node-class */
t10=*((C_word*)lf[34]+1);{
C_word *av2=av;
av2[0]=t10;
av2[1]=t9;
av2[2]=t8;
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}
else{
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k5275 in k5370 in rewrite-call/cc in k5254 in k5251 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in ... */
static void C_ccall f_5277(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_5277,c,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5360,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* c-platform.scm:1182: chicken.compiler.support#node-class */
t3=*((C_word*)lf[34]+1);{
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
else{
t2=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* a5293 in k5354 in k5358 in k5275 in k5370 in rewrite-call/cc in k5254 in k5251 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in k5117 in k5114 in k5111 in k5108 in k5105 in ... */
static void C_ccall f_5294(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_5294,c,av);}
a=C_alloc(7);
if(C_truep(C_i_nequalp(t3,C_fix(2)))){
t5=(C_truep(t4)?t4:C_i_cadr(((C_word*)t0)[2]));
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5349,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=t5,tmp=(C_word)a,a+=7,tmp);
/* c-platform.scm:1189: chicken.compiler.support#db-get */
t7=*((C_word*)lf[56]+1);{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[5];
av2[3]=t5;
av2[4]=lf[65];
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}
else{
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k5335 in k5339 in k5343 in k5347 in a5293 in k5354 in k5358 in k5275 in k5370 in rewrite-call/cc in k5254 in k5251 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in k5117 in ... */
static void C_ccall f_5337(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_5337,c,av);}
a=C_alloc(9);
t2=C_a_i_list3(&a,3,((C_word*)t0)[2],((C_word*)t0)[3],t1);
/* c-platform.scm:1192: chicken.compiler.support#make-node */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[4];
av2[2]=lf[23];
av2[3]=((C_word*)t0)[5];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k5339 in k5343 in k5347 in a5293 in k5354 in k5358 in k5275 in k5370 in rewrite-call/cc in k5254 in k5251 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in k5117 in k5114 in ... */
static void C_ccall f_5341(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_5341,c,av);}
a=C_alloc(9);
if(C_truep(C_i_not(t1))){
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5337,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:1194: chicken.compiler.support#qnode */
t4=*((C_word*)lf[29]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k5343 in k5347 in a5293 in k5354 in k5358 in k5275 in k5370 in rewrite-call/cc in k5254 in k5251 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in k5117 in k5114 in k5111 in ... */
static void C_ccall f_5345(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_5345,c,av);}
a=C_alloc(5);
if(C_truep(C_i_not(t1))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5341,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:1191: chicken.compiler.support#db-get */
t3=*((C_word*)lf[56]+1);{
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
av2[4]=lf[63];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k5347 in a5293 in k5354 in k5358 in k5275 in k5370 in rewrite-call/cc in k5254 in k5251 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in k5117 in k5114 in k5111 in k5108 in ... */
static void C_ccall f_5349(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_5349,c,av);}
a=C_alloc(7);
if(C_truep(C_i_not(t1))){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5345,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* c-platform.scm:1190: chicken.compiler.support#db-get */
t3=*((C_word*)lf[56]+1);{
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
av2[4]=lf[64];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k5354 in k5358 in k5275 in k5370 in rewrite-call/cc in k5254 in k5251 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in ... */
static void C_ccall f_5356(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_5356,c,av);}
a=C_alloc(6);
t2=C_i_caddr(t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5294,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:1184: ##sys#decompose-lambda-list */
t4=*((C_word*)lf[66]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[5];
av2[2]=t2;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k5358 in k5275 in k5370 in rewrite-call/cc in k5254 in k5251 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in ... */
static void C_ccall f_5360(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_5360,c,av);}
a=C_alloc(6);
t2=C_eqp(lf[47],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5356,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:1183: chicken.compiler.support#node-parameters */
t4=*((C_word*)lf[33]+1);{
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
else{
t3=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5366 in k5370 in rewrite-call/cc in k5254 in k5251 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in ... */
static void C_ccall f_5368(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5368,c,av);}
/* c-platform.scm:1181: chicken.compiler.support#db-get */
t2=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_i_car(t1);
av2[4]=lf[57];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k5370 in rewrite-call/cc in k5254 in k5251 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in ... */
static void C_ccall f_5372(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_5372,c,av);}
a=C_alloc(10);
t2=C_eqp(lf[35],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5277,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5368,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:1181: chicken.compiler.support#node-parameters */
t5=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t3=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5378 in k5254 in k5251 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in ... */
static void C_ccall f_5380(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_5380,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5383,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1196: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[100];
av2[3]=C_fix(8);
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k5381 in k5378 in k5254 in k5251 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in ... */
static void C_ccall f_5383(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,6)))){
C_save_and_reclaim((void *)f_5383,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5387,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5514,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:1224: chicken.compiler.optimizer#rewrite */
t4=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[99];
av2[3]=C_fix(8);
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k5385 in k5381 in k5378 in k5254 in k5251 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in ... */
static void C_ccall f_5387(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_5387,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5390,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1238: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[97];
av2[3]=C_fix(3);
av2[4]=lf[96];
av2[5]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k5388 in k5385 in k5381 in k5378 in k5254 in k5251 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in ... */
static void C_ccall f_5390(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_5390,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5393,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1239: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[95];
av2[3]=C_fix(3);
av2[4]=lf[96];
av2[5]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k5391 in k5388 in k5385 in k5381 in k5378 in k5254 in k5251 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in ... */
static void C_ccall f_5393(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_5393,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5396,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1240: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[94];
av2[3]=C_fix(3);
av2[4]=lf[84];
av2[5]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k5394 in k5391 in k5388 in k5385 in k5381 in k5378 in k5254 in k5251 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in k5117 in k5114 in k5111 in k5108 in k5105 in ... */
static void C_ccall f_5396(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_5396,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5399,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1241: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[93];
av2[3]=C_fix(3);
av2[4]=lf[81];
av2[5]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k5397 in k5394 in k5391 in k5388 in k5385 in k5381 in k5378 in k5254 in k5251 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in k5117 in k5114 in k5111 in k5108 in ... */
static void C_ccall f_5399(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_5399,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5402,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1242: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[91];
av2[3]=C_fix(3);
av2[4]=lf[92];
av2[5]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k5400 in k5397 in k5394 in k5391 in k5388 in k5385 in k5381 in k5378 in k5254 in k5251 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in k5117 in k5114 in k5111 in ... */
static void C_ccall f_5402(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,6)))){
C_save_and_reclaim((void *)f_5402,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5405,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5474,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:1244: chicken.compiler.optimizer#rewrite */
t4=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[90];
av2[3]=C_fix(8);
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k5403 in k5400 in k5397 in k5394 in k5391 in k5388 in k5385 in k5381 in k5378 in k5254 in k5251 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in k5117 in k5114 in ... */
static void C_ccall f_5405(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,6)))){
C_save_and_reclaim((void *)f_5405,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5408,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5434,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:1256: chicken.compiler.optimizer#rewrite */
t4=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[87];
av2[3]=C_fix(8);
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k5406 in k5403 in k5400 in k5397 in k5394 in k5391 in k5388 in k5385 in k5381 in k5378 in k5254 in k5251 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in k5117 in ... */
static void C_ccall f_5408(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5408,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5411,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1268: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[82];
av2[3]=C_fix(23);
av2[4]=C_fix(0);
av2[5]=lf[83];
av2[6]=lf[84];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k5409 in k5406 in k5403 in k5400 in k5397 in k5394 in k5391 in k5388 in k5385 in k5381 in k5378 in k5254 in k5251 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in ... */
static void C_ccall f_5411(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5411,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5414,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1269: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[79];
av2[3]=C_fix(23);
av2[4]=C_fix(1);
av2[5]=lf[80];
av2[6]=lf[81];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k5412 in k5409 in k5406 in k5403 in k5400 in k5397 in k5394 in k5391 in k5388 in k5385 in k5381 in k5378 in k5254 in k5251 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in ... */
static void C_ccall f_5414(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,8)))){
C_save_and_reclaim((void *)f_5414,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5417,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1270: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[77];
av2[3]=C_fix(23);
av2[4]=C_fix(2);
av2[5]=lf[78];
av2[6]=C_fix(0);
av2[7]=C_fix(0);
av2[8]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(9,av2);}}

/* k5415 in k5412 in k5409 in k5406 in k5403 in k5400 in k5397 in k5394 in k5391 in k5388 in k5385 in k5381 in k5378 in k5254 in k5251 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in ... */
static void C_ccall f_5417(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,8)))){
C_save_and_reclaim((void *)f_5417,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5420,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1271: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[75];
av2[3]=C_fix(23);
av2[4]=C_fix(2);
av2[5]=lf[76];
av2[6]=C_fix(0);
av2[7]=C_fix(0);
av2[8]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(9,av2);}}

/* k5418 in k5415 in k5412 in k5409 in k5406 in k5403 in k5400 in k5397 in k5394 in k5391 in k5388 in k5385 in k5381 in k5378 in k5254 in k5251 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in ... */
static void C_ccall f_5420(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5420,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5423,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1272: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[73];
av2[3]=C_fix(23);
av2[4]=C_fix(2);
av2[5]=lf[74];
av2[6]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k5421 in k5418 in k5415 in k5412 in k5409 in k5406 in k5403 in k5400 in k5397 in k5394 in k5391 in k5388 in k5385 in k5381 in k5378 in k5254 in k5251 in k5144 in k5141 in k5138 in k5135 in k5132 in ... */
static void C_ccall f_5423(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5423,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5426,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1273: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[71];
av2[3]=C_fix(23);
av2[4]=C_fix(2);
av2[5]=lf[72];
av2[6]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}

/* k5424 in k5421 in k5418 in k5415 in k5412 in k5409 in k5406 in k5403 in k5400 in k5397 in k5394 in k5391 in k5388 in k5385 in k5381 in k5378 in k5254 in k5251 in k5144 in k5141 in k5138 in k5135 in ... */
static void C_ccall f_5426(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_5426,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5429,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1275: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[69];
av2[3]=C_fix(7);
av2[4]=C_fix(2);
av2[5]=lf[70];
av2[6]=C_SCHEME_FALSE;
av2[7]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k5427 in k5424 in k5421 in k5418 in k5415 in k5412 in k5409 in k5406 in k5403 in k5400 in k5397 in k5394 in k5391 in k5388 in k5385 in k5381 in k5378 in k5254 in k5251 in k5144 in k5141 in k5138 in ... */
static void C_ccall f_5429(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_5429,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5432,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1276: chicken.compiler.optimizer#rewrite */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[67];
av2[3]=C_fix(7);
av2[4]=C_fix(2);
av2[5]=lf[68];
av2[6]=C_SCHEME_FALSE;
av2[7]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(8,av2);}}

/* k5430 in k5427 in k5424 in k5421 in k5418 in k5415 in k5412 in k5409 in k5406 in k5403 in k5400 in k5397 in k5394 in k5391 in k5388 in k5385 in k5381 in k5378 in k5254 in k5251 in k5144 in k5141 in ... */
static void C_ccall f_5432(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5432,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a5433 in k5403 in k5400 in k5397 in k5394 in k5391 in k5388 in k5385 in k5381 in k5378 in k5254 in k5251 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in k5117 in ... */
static void C_ccall f_5434(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_5434,c,av);}
a=C_alloc(11);
t6=C_i_length(t5);
t7=C_eqp(C_fix(1),t6);
if(C_truep(t7)){
t8=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5456,a[2]=t4,a[3]=t1,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
t10=C_eqp(*((C_word*)lf[25]+1),lf[24]);
t11=(C_truep(t10)?C_a_i_list1(&a,1,lf[85]):C_a_i_list1(&a,1,lf[86]));
/* c-platform.scm:1263: chicken.compiler.support#make-node */
t12=*((C_word*)lf[22]+1);{
C_word *av2=av;
av2[0]=t12;
av2[1]=t9;
av2[2]=lf[27];
av2[3]=t11;
av2[4]=t5;
((C_proc)(void*)(*((C_word*)t12+1)))(5,av2);}}
else{
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k5454 in a5433 in k5403 in k5400 in k5397 in k5394 in k5391 in k5388 in k5385 in k5381 in k5378 in k5254 in k5251 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in ... */
static void C_ccall f_5456(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_5456,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:1260: chicken.compiler.support#make-node */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[23];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* a5473 in k5400 in k5397 in k5394 in k5391 in k5388 in k5385 in k5381 in k5378 in k5254 in k5251 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in k5117 in k5114 in ... */
static void C_ccall f_5474(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_5474,c,av);}
a=C_alloc(11);
t6=C_i_length(t5);
t7=C_eqp(C_fix(2),t6);
if(C_truep(t7)){
t8=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5496,a[2]=t4,a[3]=t1,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
t10=C_eqp(*((C_word*)lf[25]+1),lf[24]);
t11=(C_truep(t10)?C_a_i_list1(&a,1,lf[88]):C_a_i_list1(&a,1,lf[89]));
/* c-platform.scm:1251: chicken.compiler.support#make-node */
t12=*((C_word*)lf[22]+1);{
C_word *av2=av;
av2[0]=t12;
av2[1]=t9;
av2[2]=lf[27];
av2[3]=t11;
av2[4]=t5;
((C_proc)(void*)(*((C_word*)t12+1)))(5,av2);}}
else{
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k5494 in a5473 in k5400 in k5397 in k5394 in k5391 in k5388 in k5385 in k5381 in k5378 in k5254 in k5251 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in k5117 in ... */
static void C_ccall f_5496(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_5496,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:1248: chicken.compiler.support#make-node */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[23];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* a5513 in k5381 in k5378 in k5254 in k5251 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in ... */
static void C_ccall f_5514(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_5514,c,av);}
a=C_alloc(5);
t6=C_i_length(t5);
t7=C_eqp(C_fix(1),t6);
if(C_truep(t7)){
t8=C_i_car(t5);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5572,a[2]=t4,a[3]=t1,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:1230: chicken.compiler.support#node-class */
t10=*((C_word*)lf[34]+1);{
C_word *av2=av;
av2[0]=t10;
av2[1]=t9;
av2[2]=t8;
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}
else{
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k5537 in k5566 in k5570 in a5513 in k5381 in k5378 in k5254 in k5251 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in k5117 in k5114 in k5111 in k5108 in k5105 in ... */
static void C_ccall f_5539(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_5539,c,av);}
a=C_alloc(8);
if(C_truep(t1)){
t2=C_i_assq(((C_word*)t0)[2],lf[98]);
if(C_truep(t2)){
t3=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5560,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:1236: chicken.compiler.support#varnode */
t5=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_i_cdr(t2);
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k5558 in k5537 in k5566 in k5570 in a5513 in k5381 in k5378 in k5254 in k5251 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in k5117 in k5114 in k5111 in k5108 in ... */
static void C_ccall f_5560(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_5560,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:1234: chicken.compiler.support#make-node */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[23];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k5566 in k5570 in a5513 in k5381 in k5378 in k5254 in k5251 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in ... */
static void C_ccall f_5568(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_5568,c,av);}
a=C_alloc(5);
t2=C_i_car(t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5539,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:1232: chicken.compiler.support#intrinsic? */
t4=*((C_word*)lf[44]+1);{
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

/* k5570 in a5513 in k5381 in k5378 in k5254 in k5251 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in ... */
static void C_ccall f_5572(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5572,c,av);}
a=C_alloc(4);
t2=C_eqp(lf[35],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5568,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:1231: chicken.compiler.support#node-parameters */
t4=*((C_word*)lf[33]+1);{
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
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* a5578 in k4871 in k4868 in k4865 in k4862 in k4859 in k4856 in k4853 in k4850 in k4847 in k4844 in k4841 in k4838 in k4835 in k4832 in k4829 in k4826 in k4823 in k4820 in k4817 in k4814 in k4811 in ... */
static void C_ccall f_5579(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_5579,c,av);}
a=C_alloc(10);
t6=C_i_length(t5);
t7=C_eqp(C_fix(2),t6);
if(C_truep(t7)){
t8=C_i_cadr(t5);
t9=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5694,a[2]=t4,a[3]=t1,a[4]=t9,a[5]=t5,a[6]=t8,tmp=(C_word)a,a+=7,tmp);
/* c-platform.scm:1028: chicken.compiler.support#node-class */
t11=*((C_word*)lf[34]+1);{
C_word *av2=av;
av2[0]=t11;
av2[1]=t10;
av2[2]=t8;
((C_proc)(void*)(*((C_word*)t11+1)))(3,av2);}}
else{
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k5605 in k5692 in a5578 in k4871 in k4868 in k4865 in k4862 in k4859 in k4856 in k4853 in k4850 in k4847 in k4844 in k4841 in k4838 in k4835 in k4832 in k4829 in k4826 in k4823 in k4820 in k4817 in ... */
static void C_ccall f_5607(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_5607,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5610,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:1025: chicken.compiler.support#make-node */
t4=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[23];
av2[3]=((C_word*)t0)[4];
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t3=C_eqp(*((C_word*)lf[25]+1),lf[24]);
if(C_truep(t3)){
/* c-platform.scm:1040: chicken.compiler.support#make-node */
t4=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[27];
av2[3]=lf[259];
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t4=C_a_i_list2(&a,2,lf[260],C_fix(5));
/* c-platform.scm:1042: chicken.compiler.support#make-node */
t5=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=lf[28];
av2[3]=t4;
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}}}

/* k5608 in k5605 in k5692 in a5578 in k4871 in k4868 in k4865 in k4862 in k4859 in k4856 in k4853 in k4850 in k4847 in k4844 in k4841 in k4838 in k4835 in k4832 in k4829 in k4826 in k4823 in k4820 in ... */
static void C_ccall f_5610(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_5610,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:1025: chicken.compiler.support#make-node */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[23];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k5639 in k5688 in k5692 in a5578 in k4871 in k4868 in k4865 in k4862 in k4859 in k4856 in k4853 in k4850 in k4847 in k4844 in k4841 in k4838 in k4835 in k4832 in k4829 in k4826 in k4823 in k4820 in ... */
static void C_fcall f_5641(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,0,4)))){
C_save_and_reclaim_args((void *)trf_5641,2,t0,t1);}
a=C_alloc(33);
if(C_truep(t1)){
if(C_truep(C_i_negativep(((C_word*)t0)[2]))){
t2=C_i_car(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5663,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=C_s_a_i_negate(&a,1,((C_word*)t0)[2]);
/* c-platform.scm:1035: chicken.compiler.support#qnode */
t5=*((C_word*)lf[29]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t2=C_i_car(((C_word*)t0)[3]);
t3=C_a_i_list2(&a,2,t2,((C_word*)t0)[5]);
/* c-platform.scm:1036: chicken.compiler.support#make-node */
t4=*((C_word*)lf[22]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=((C_word*)t0)[4];
av2[2]=lf[27];
av2[3]=lf[262];
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}
else{
t2=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_5607(2,av2);}}}

/* k5661 in k5639 in k5688 in k5692 in a5578 in k4871 in k4868 in k4865 in k4862 in k4859 in k4856 in k4853 in k4850 in k4847 in k4844 in k4841 in k4838 in k4835 in k4832 in k4829 in k4826 in k4823 in ... */
static void C_ccall f_5663(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_5663,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:1033: chicken.compiler.support#make-node */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[27];
av2[3]=lf[261];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k5684 in k5688 in k5692 in a5578 in k4871 in k4868 in k4865 in k4862 in k4859 in k4856 in k4853 in k4850 in k4847 in k4844 in k4841 in k4838 in k4835 in k4832 in k4829 in k4826 in k4823 in k4820 in ... */
static void C_ccall f_5686(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5686,c,av);}
t2=((C_word*)t0)[2];
f_5641(t2,C_i_not(t1));}

/* k5688 in k5692 in a5578 in k4871 in k4868 in k4865 in k4862 in k4859 in k4856 in k4853 in k4850 in k4847 in k4844 in k4841 in k4838 in k4835 in k4832 in k4829 in k4826 in k4823 in k4820 in k4817 in ... */
static void C_ccall f_5690(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_5690,c,av);}
a=C_alloc(9);
t2=C_i_car(t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5641,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnump(t2))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5686,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1031: chicken.compiler.support#big-fixnum? */
t5=*((C_word*)lf[263]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t4=t3;
f_5641(t4,C_SCHEME_FALSE);}}
else{
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_5607(2,av2);}}}

/* k5692 in a5578 in k4871 in k4868 in k4865 in k4862 in k4859 in k4856 in k4853 in k4850 in k4847 in k4844 in k4841 in k4838 in k4835 in k4832 in k4829 in k4826 in k4823 in k4820 in k4817 in k4814 in ... */
static void C_ccall f_5694(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_5694,c,av);}
a=C_alloc(11);
t2=C_eqp(lf[31],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5607,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=C_eqp(*((C_word*)lf[25]+1),lf[24]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5690,a[2]=((C_word*)t0)[5],a[3]=t3,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:1030: chicken.compiler.support#node-parameters */
t6=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t5=t3;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
f_5607(2,av2);}}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_5607(2,av2);}}}

/* a5700 in k4835 in k4832 in k4829 in k4826 in k4823 in k4820 in k4817 in k4814 in k4811 in k4808 in k4805 in k4802 in k4799 in k4796 in k4793 in k4790 in k4787 in k4784 in k4781 in k4778 in k4775 in ... */
static void C_ccall f_5701(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_5701,c,av);}
a=C_alloc(16);
t6=C_i_length(t5);
t7=C_eqp(t6,C_fix(3));
if(C_truep(t7)){
t8=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5723,a[2]=t4,a[3]=t1,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
t10=C_i_caddr(t5);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5733,a[2]=t9,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5751,a[2]=t11,a[3]=t10,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:994: chicken.compiler.support#node-class */
t13=*((C_word*)lf[34]+1);{
C_word *av2=av;
av2[0]=t13;
av2[1]=t12;
av2[2]=t10;
((C_proc)(void*)(*((C_word*)t13+1)))(3,av2);}}
else{
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k5721 in a5700 in k4835 in k4832 in k4829 in k4826 in k4823 in k4820 in k4817 in k4814 in k4811 in k4808 in k4805 in k4802 in k4799 in k4796 in k4793 in k4790 in k4787 in k4784 in k4781 in k4778 in ... */
static void C_ccall f_5723(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_5723,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:988: chicken.compiler.support#make-node */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[23];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k5731 in a5700 in k4835 in k4832 in k4829 in k4826 in k4823 in k4820 in k4817 in k4814 in k4811 in k4808 in k4805 in k4802 in k4799 in k4796 in k4793 in k4790 in k4787 in k4784 in k4781 in k4778 in ... */
static void C_ccall f_5733(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5733,c,av);}
if(C_truep(t1)){
/* c-platform.scm:991: chicken.compiler.support#make-node */
t2=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[27];
av2[3]=lf[295];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}
else{
/* c-platform.scm:991: chicken.compiler.support#make-node */
t2=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[27];
av2[3]=lf[296];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}

/* k5745 in k5749 in a5700 in k4835 in k4832 in k4829 in k4826 in k4823 in k4820 in k4817 in k4814 in k4811 in k4808 in k4805 in k4802 in k4799 in k4796 in k4793 in k4790 in k4787 in k4784 in k4781 in ... */
static void C_ccall f_5747(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5747,c,av);}
/* c-platform.scm:995: chicken.compiler.support#immediate? */
t2=*((C_word*)lf[32]+1);{
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

/* k5749 in a5700 in k4835 in k4832 in k4829 in k4826 in k4823 in k4820 in k4817 in k4814 in k4811 in k4808 in k4805 in k4802 in k4799 in k4796 in k4793 in k4790 in k4787 in k4784 in k4781 in k4778 in ... */
static void C_ccall f_5751(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5751,c,av);}
a=C_alloc(3);
t2=C_eqp(lf[31],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5747,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:995: chicken.compiler.support#node-parameters */
t4=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_5733(2,av2);}}}

/* a5757 in k4577 in k4574 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in ... */
static void C_ccall f_5758(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_5758,c,av);}
a=C_alloc(16);
t6=C_eqp(lf[24],*((C_word*)lf[25]+1));
if(C_truep(t6)){
t7=C_i_length(t5);
t8=C_eqp(t7,C_fix(2));
if(C_truep(t8)){
t9=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t10=C_i_cadr(t5);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5789,a[2]=t4,a[3]=t1,a[4]=t9,tmp=(C_word)a,a+=5,tmp);
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5792,a[2]=t5,a[3]=t11,tmp=(C_word)a,a+=4,tmp);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5828,a[2]=t12,a[3]=t10,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:873: chicken.compiler.support#node-class */
t14=*((C_word*)lf[34]+1);{
C_word *av2=av;
av2[0]=t14;
av2[1]=t13;
av2[2]=t10;
((C_proc)(void*)(*((C_word*)t14+1)))(3,av2);}}
else{
t9=t1;{
C_word *av2=av;
av2[0]=t9;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}}
else{
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* k5787 in a5757 in k4577 in k4574 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in ... */
static void C_ccall f_5789(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_5789,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:869: chicken.compiler.support#make-node */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[23];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k5790 in a5757 in k4577 in k4574 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in ... */
static void C_fcall f_5792(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,4)))){
C_save_and_reclaim_args((void *)trf_5792,2,t0,t1);}
a=C_alloc(4);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5807,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:877: chicken.compiler.support#qnode */
t4=*((C_word*)lf[29]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
/* c-platform.scm:878: chicken.compiler.support#make-node */
t2=*((C_word*)lf[22]+1);{
C_word av2[5];
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[27];
av2[3]=lf[456];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}

/* k5805 in k5790 in a5757 in k4577 in k4574 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in ... */
static void C_ccall f_5807(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_5807,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:875: chicken.compiler.support#make-node */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[27];
av2[3]=lf[455];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k5822 in k5826 in a5757 in k4577 in k4574 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in ... */
static void C_ccall f_5824(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5824,c,av);}
t2=((C_word*)t0)[2];
f_5792(t2,C_eqp(C_fix(2),C_i_car(t1)));}

/* k5826 in a5757 in k4577 in k4574 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in ... */
static void C_ccall f_5828(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5828,c,av);}
a=C_alloc(3);
t2=C_eqp(lf[31],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5824,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:874: chicken.compiler.support#node-parameters */
t4=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=((C_word*)t0)[2];
f_5792(t3,C_SCHEME_FALSE);}}

/* a5834 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in k4379 in k4376 in ... */
static void C_ccall f_5835(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_5835,c,av);}
a=C_alloc(8);
t6=C_i_nullp(t5);
t7=(C_truep(t6)?t6:C_i_not(C_eqp(*((C_word*)lf[25]+1),lf[24])));
if(C_truep(t7)){
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t8=C_i_cdr(t5);
if(C_truep(C_i_nullp(t8))){
t9=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5866,a[2]=t4,a[3]=t1,a[4]=t9,tmp=(C_word)a,a+=5,tmp);
if(C_truep(*((C_word*)lf[26]+1))){
/* c-platform.scm:811: chicken.compiler.support#make-node */
t11=*((C_word*)lf[22]+1);{
C_word *av2=av;
av2[0]=t11;
av2[1]=t10;
av2[2]=lf[27];
av2[3]=lf[458];
av2[4]=t5;
((C_proc)(void*)(*((C_word*)t11+1)))(5,av2);}}
else{
/* c-platform.scm:811: chicken.compiler.support#make-node */
t11=*((C_word*)lf[22]+1);{
C_word *av2=av;
av2[0]=t11;
av2[1]=t10;
av2[2]=lf[27];
av2[3]=lf[459];
av2[4]=t5;
((C_proc)(void*)(*((C_word*)t11+1)))(5,av2);}}}
else{
t9=C_u_i_car(t5);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5919,a[2]=t9,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t11=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5921,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:817: filter */
f_2297(t10,t11,C_u_i_cdr(t5));}}}

/* k5864 in a5834 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in k4379 in ... */
static void C_ccall f_5866(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_5866,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:808: chicken.compiler.support#make-node */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[23];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k5892 in k5917 in a5834 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in ... */
static void C_ccall f_5894(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_5894,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:823: chicken.compiler.support#make-node */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[23];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* a5895 in k5917 in a5834 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in ... */
static void C_ccall f_5896(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_5896,c,av);}
a=C_alloc(6);
t4=(C_truep(*((C_word*)lf[26]+1))?lf[460]:lf[461]);
t5=C_a_i_list2(&a,2,t2,t3);
/* c-platform.scm:829: chicken.compiler.support#make-node */
t6=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t1;
av2[2]=lf[27];
av2[3]=t4;
av2[4]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k5917 in a5834 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in k4379 in ... */
static void C_ccall f_5919(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5919,c,av);}
a=C_alloc(13);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_i_length(t2);
if(C_truep(C_fixnum_greater_or_equal_p(t3,C_fix(2)))){
t4=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5894,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5896,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:827: chicken.compiler.support#fold-inner */
t7=*((C_word*)lf[60]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* a5920 in a5834 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in k4379 in ... */
static void C_ccall f_5921(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5921,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5944,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:819: chicken.compiler.support#node-class */
t4=*((C_word*)lf[34]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k5938 in k5942 in a5920 in a5834 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in ... */
static void C_ccall f_5940(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5940,c,av);}
t2=C_i_car(t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_not(C_i_zerop(t2));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5942 in a5920 in a5834 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in ... */
static void C_ccall f_5944(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5944,c,av);}
a=C_alloc(3);
t2=C_eqp(lf[31],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5940,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:820: chicken.compiler.support#node-parameters */
t4=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* a5958 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in k4379 in k4376 in k4373 in ... */
static void C_ccall f_5959(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_5959,c,av);}
a=C_alloc(8);
t6=C_i_nullp(t5);
t7=(C_truep(t6)?t6:C_i_not(C_eqp(*((C_word*)lf[25]+1),lf[24])));
if(C_truep(t7)){
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t8=C_i_cdr(t5);
if(C_truep(C_i_nullp(t8))){
t9=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5990,a[2]=t4,a[3]=t1,a[4]=t9,tmp=(C_word)a,a+=5,tmp);
if(C_truep(*((C_word*)lf[26]+1))){
/* c-platform.scm:774: chicken.compiler.support#make-node */
t11=*((C_word*)lf[22]+1);{
C_word *av2=av;
av2[0]=t11;
av2[1]=t10;
av2[2]=lf[27];
av2[3]=lf[462];
av2[4]=t5;
((C_proc)(void*)(*((C_word*)t11+1)))(5,av2);}}
else{
/* c-platform.scm:774: chicken.compiler.support#make-node */
t11=*((C_word*)lf[22]+1);{
C_word *av2=av;
av2[0]=t11;
av2[1]=t10;
av2[2]=lf[27];
av2[3]=lf[463];
av2[4]=t5;
((C_proc)(void*)(*((C_word*)t11+1)))(5,av2);}}}
else{
t9=C_u_i_car(t5);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6043,a[2]=t9,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t11=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6045,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:780: filter */
f_2297(t10,t11,C_u_i_cdr(t5));}}}

/* k5988 in a5958 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in k4379 in k4376 in ... */
static void C_ccall f_5990(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_5990,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:771: chicken.compiler.support#make-node */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[23];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k6016 in k6041 in a5958 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in k4379 in ... */
static void C_ccall f_6018(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_6018,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:786: chicken.compiler.support#make-node */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[23];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* a6019 in k6041 in a5958 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in k4379 in ... */
static void C_ccall f_6020(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_6020,c,av);}
a=C_alloc(6);
t4=(C_truep(*((C_word*)lf[26]+1))?lf[464]:lf[465]);
t5=C_a_i_list2(&a,2,t2,t3);
/* c-platform.scm:792: chicken.compiler.support#make-node */
t6=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t1;
av2[2]=lf[27];
av2[3]=t4;
av2[4]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k6041 in a5958 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in k4379 in k4376 in ... */
static void C_ccall f_6043(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6043,c,av);}
a=C_alloc(13);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_i_length(t2);
if(C_truep(C_fixnum_greater_or_equal_p(t3,C_fix(2)))){
t4=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6018,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6020,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:790: chicken.compiler.support#fold-inner */
t7=*((C_word*)lf[60]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* a6044 in a5958 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in k4379 in k4376 in ... */
static void C_ccall f_6045(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6045,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6068,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:782: chicken.compiler.support#node-class */
t4=*((C_word*)lf[34]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k6062 in k6066 in a6044 in a5958 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in ... */
static void C_ccall f_6064(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6064,c,av);}
t2=C_i_car(t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_not(C_i_zerop(t2));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k6066 in a6044 in a5958 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in k4379 in ... */
static void C_ccall f_6068(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6068,c,av);}
a=C_alloc(3);
t2=C_eqp(lf[31],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6064,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:783: chicken.compiler.support#node-parameters */
t4=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* a6082 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in k4379 in k4376 in k4373 in k4370 in ... */
static void C_ccall f_6083(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_6083,c,av);}
a=C_alloc(6);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6087,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6201,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:740: filter */
f_2297(t6,t7,t5);}

/* k6085 in a6082 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in k4379 in k4376 in k4373 in ... */
static void C_ccall f_6087(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_6087,c,av);}
a=C_alloc(10);
if(C_truep(C_i_nullp(t1))){
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6108,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:745: chicken.compiler.support#qnode */
t4=*((C_word*)lf[29]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t2=C_i_cdr(t1);
if(C_truep(C_i_nullp(t2))){
t3=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t4=C_i_car(t1);
t5=C_a_i_list2(&a,2,((C_word*)t0)[2],t4);
/* c-platform.scm:747: chicken.compiler.support#make-node */
t6=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[23];
av2[3]=t3;
av2[4]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t3=C_eqp(*((C_word*)lf[25]+1),lf[24]);
if(C_truep(t3)){
t4=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6150,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6152,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:753: chicken.compiler.support#fold-inner */
t7=*((C_word*)lf[60]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}}}

/* k6106 in k6085 in a6082 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in k4379 in k4376 in ... */
static void C_ccall f_6108(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_6108,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:745: chicken.compiler.support#make-node */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[23];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k6148 in k6085 in a6082 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in k4379 in k4376 in ... */
static void C_ccall f_6150(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_6150,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:749: chicken.compiler.support#make-node */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[23];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* a6151 in k6085 in a6082 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in k4379 in k4376 in ... */
static void C_ccall f_6152(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_6152,c,av);}
a=C_alloc(9);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6159,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6195,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:755: chicken.compiler.support#node-class */
t6=*((C_word*)lf[34]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k6157 in a6151 in k6085 in a6082 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in k4379 in ... */
static void C_fcall f_6159(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_6159,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6170,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:756: chicken.compiler.support#qnode */
t3=*((C_word*)lf[29]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],((C_word*)t0)[4]);
/* c-platform.scm:757: chicken.compiler.support#make-node */
t3=*((C_word*)lf[22]+1);{
C_word av2[5];
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[27];
av2[3]=lf[467];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}

/* k6168 in k6157 in a6151 in k6085 in a6082 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in ... */
static void C_ccall f_6170(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_6170,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:756: chicken.compiler.support#make-node */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[27];
av2[3]=lf[466];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k6189 in k6193 in a6151 in k6085 in a6082 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in ... */
static void C_ccall f_6191(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6191,c,av);}
t2=((C_word*)t0)[2];
f_6159(t2,C_eqp(C_fix(2),C_i_car(t1)));}

/* k6193 in a6151 in k6085 in a6082 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in k4379 in ... */
static void C_ccall f_6195(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6195,c,av);}
a=C_alloc(3);
t2=C_eqp(lf[31],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6191,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:755: chicken.compiler.support#node-parameters */
t4=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=((C_word*)t0)[2];
f_6159(t3,C_SCHEME_FALSE);}}

/* a6200 in a6082 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in k4379 in k4376 in k4373 in ... */
static void C_ccall f_6201(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6201,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6227,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:742: chicken.compiler.support#node-class */
t4=*((C_word*)lf[34]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k6221 in k6225 in a6200 in a6082 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in k4379 in ... */
static void C_ccall f_6223(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6223,c,av);}
t2=C_i_car(t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_not(C_eqp(C_fix(1),t2));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k6225 in a6200 in a6082 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in k4379 in k4376 in ... */
static void C_ccall f_6227(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6227,c,av);}
a=C_alloc(3);
t2=C_eqp(lf[31],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6223,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:743: chicken.compiler.support#node-parameters */
t4=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* a6228 in k3239 in k3236 in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_ccall f_6229(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_6229,c,av);}
a=C_alloc(13);
t6=C_i_length(t5);
t7=C_eqp(t6,C_fix(2));
if(C_truep(t7)){
t8=C_i_car(t5);
t9=C_i_cadr(t5);
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6245,a[2]=t1,a[3]=t4,a[4]=t5,a[5]=t9,a[6]=t8,tmp=(C_word)a,a+=7,tmp);
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6385,a[2]=t4,a[3]=t10,a[4]=t9,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:353: chicken.compiler.support#node-class */
t12=*((C_word*)lf[34]+1);{
C_word *av2=av;
av2[0]=t12;
av2[1]=t11;
av2[2]=t8;
((C_proc)(void*)(*((C_word*)t12+1)))(3,av2);}}
else{
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k6243 in a6228 in k3239 in k3236 in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_ccall f_6245(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_6245,c,av);}
a=C_alloc(15);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6251,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6272,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6339,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:357: chicken.compiler.support#node-class */
t5=*((C_word*)lf[34]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* k6249 in k6243 in a6228 in k3239 in k3236 in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_ccall f_6251(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_6251,c,av);}
a=C_alloc(8);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6269,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:368: chicken.compiler.support#make-node */
t4=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[27];
av2[3]=lf[915];
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}

/* k6267 in k6249 in k6243 in a6228 in k3239 in k3236 in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_ccall f_6269(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_6269,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:366: chicken.compiler.support#make-node */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[23];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k6270 in k6243 in a6228 in k3239 in k3236 in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_fcall f_6272(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_6272,2,t0,t1);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6275,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=t2;
f_6275(t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6316,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:360: chicken.compiler.support#node-class */
t4=*((C_word*)lf[34]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k6273 in k6270 in k6243 in a6228 in k3239 in k3236 in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_fcall f_6275(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_6275,2,t0,t1);}
a=C_alloc(8);
if(C_truep(t1)){
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6290,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:365: chicken.compiler.support#make-node */
t4=*((C_word*)lf[22]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[27];
av2[3]=lf[916];
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_6251(2,av2);}}}

/* k6288 in k6273 in k6270 in k6243 in a6228 in k3239 in k3236 in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 in ... */
static void C_ccall f_6290(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_6290,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:363: chicken.compiler.support#make-node */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[23];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k6300 in k6310 in k6314 in k6270 in k6243 in a6228 in k3239 in k3236 in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in ... */
static void C_ccall f_6302(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6302,c,av);}
t2=((C_word*)t0)[2];
f_6275(t2,(C_truep(t1)?t1:C_i_symbolp(((C_word*)t0)[3])));}

/* k6310 in k6314 in k6270 in k6243 in a6228 in k3239 in k3236 in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 in ... */
static void C_ccall f_6312(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6312,c,av);}
a=C_alloc(4);
t2=C_i_car(t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6302,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:362: chicken.compiler.support#immediate? */
t4=*((C_word*)lf[32]+1);{
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

/* k6314 in k6270 in k6243 in a6228 in k3239 in k3236 in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_ccall f_6316(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6316,c,av);}
a=C_alloc(3);
t2=C_eqp(lf[31],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6312,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:361: chicken.compiler.support#node-parameters */
t4=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=((C_word*)t0)[2];
f_6275(t3,C_SCHEME_FALSE);}}

/* k6323 in k6333 in k6337 in k6243 in a6228 in k3239 in k3236 in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 in ... */
static void C_ccall f_6325(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6325,c,av);}
t2=((C_word*)t0)[2];
f_6272(t2,(C_truep(t1)?t1:C_i_symbolp(((C_word*)t0)[3])));}

/* k6333 in k6337 in k6243 in a6228 in k3239 in k3236 in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_ccall f_6335(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6335,c,av);}
a=C_alloc(4);
t2=C_i_car(t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6325,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:359: chicken.compiler.support#immediate? */
t4=*((C_word*)lf[32]+1);{
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

/* k6337 in k6243 in a6228 in k3239 in k3236 in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_ccall f_6339(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6339,c,av);}
a=C_alloc(3);
t2=C_eqp(lf[31],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6335,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:358: chicken.compiler.support#node-parameters */
t4=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=((C_word*)t0)[2];
f_6272(t3,C_SCHEME_FALSE);}}

/* k6367 in k6375 in k6371 in k6379 in k6383 in a6228 in k3239 in k3236 in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in ... */
static void C_ccall f_6369(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_6369,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:356: chicken.compiler.support#make-node */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[23];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k6371 in k6379 in k6383 in a6228 in k3239 in k3236 in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_ccall f_6373(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_6373,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6377,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:355: chicken.compiler.support#node-parameters */
t3=*((C_word*)lf[33]+1);{
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

/* k6375 in k6371 in k6379 in k6383 in a6228 in k3239 in k3236 in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 in ... */
static void C_ccall f_6377(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_6377,c,av);}
a=C_alloc(8);
if(C_truep(C_i_equalp(((C_word*)t0)[2],t1))){
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6369,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:356: chicken.compiler.support#qnode */
t4=*((C_word*)lf[29]+1);{
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
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_6245(2,av2);}}}

/* k6379 in k6383 in a6228 in k3239 in k3236 in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_ccall f_6381(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_6381,c,av);}
a=C_alloc(5);
t2=C_eqp(lf[35],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6373,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:355: chicken.compiler.support#node-parameters */
t4=*((C_word*)lf[33]+1);{
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
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_6245(2,av2);}}}

/* k6383 in a6228 in k3239 in k3236 in k3080 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_ccall f_6385(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_6385,c,av);}
a=C_alloc(6);
t2=C_eqp(lf[35],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6381,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:354: chicken.compiler.support#node-class */
t4=*((C_word*)lf[34]+1);{
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
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_6245(2,av2);}}}

/* k6392 in k3077 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_ccall f_6394(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6394,c,av);}
/* c-platform.scm:318: chicken.compiler.optimizer#rewrite */
t2=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[918];
av2[3]=C_fix(8);
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k6396 in k3010 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_ccall f_6398(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6398,c,av);}
/* c-platform.scm:317: chicken.compiler.optimizer#rewrite */
t2=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[922];
av2[3]=C_fix(8);
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* for-each-loop596 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_fcall f_6400(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_6400,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6410,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=*((C_word*)lf[926]+1);
/* c-platform.scm:289: g612 */
t6=*((C_word*)lf[926]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t3;
av2[2]=t4;
av2[3]=lf[927];
av2[4]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6408 in for-each-loop596 in k3001 in k2994 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_ccall f_6410(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6410,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_6400(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* map-loop558 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_fcall f_6423(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_6423,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6448,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:125: chicken.base#symbol-append */
t4=*((C_word*)lf[932]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[933];
av2[3]=C_slot(t2,C_fix(0));
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6446 in map-loop558 in k2979 in k2976 in k2973 in k2965 in k1684 in k1681 in k1678 in k1675 in k1672 in k1669 */
static void C_ccall f_6448(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6448,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_6423(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_c_2dplatform_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("c-platform"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_c_2dplatform_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(9991))){
C_save(t1);
C_rereclaim2(9991*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,941);
lf[0]=C_h_intern(&lf[0],10, C_text("c-platform"));
lf[1]=C_h_intern(&lf[1],28, C_text("chicken.compiler.c-platform#"));
lf[4]=C_h_intern(&lf[4],5, C_text("foldr"));
lf[5]=C_h_intern(&lf[5],48, C_text("chicken.compiler.c-platform#default-declarations"));
lf[6]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001always-bound\376\003\000\000\002\376\001\000\000\024\001##sys#standard-input\376\003\000\000\002\376\001\000\000\025\001##sys#stan"
"dard-output\376\003\000\000\002\376\001\000\000\024\001##sys#standard-error\376\003\000\000\002\376\001\000\000\025\001##sys#undefined-value\376\377\016\376\003\000"
"\000\002\376\003\000\000\002\376\001\000\000\022\001bound-to-procedure\376\003\000\000\002\376\001\000\000\016\001##sys#for-each\376\003\000\000\002\376\001\000\000\011\001##sys#map\376\003\000\000"
"\002\376\001\000\000\013\001##sys#print\376\003\000\000\002\376\001\000\000\014\001##sys#setter\376\003\000\000\002\376\001\000\000\015\001##sys#setslot\376\003\000\000\002\376\001\000\000\022\001##sy"
"s#dynamic-wind\376\003\000\000\002\376\001\000\000\026\001##sys#call-with-values\376\003\000\000\002\376\001\000\000\021\001##sys#start-timer\376\003\000\000\002"
"\376\001\000\000\020\001##sys#stop-timer\376\003\000\000\002\376\001\000\000\011\001##sys#gcd\376\003\000\000\002\376\001\000\000\011\001##sys#lcm\376\003\000\000\002\376\001\000\000\020\001##sys#s"
"tructure\077\376\003\000\000\002\376\001\000\000\012\001##sys#slot\376\003\000\000\002\376\001\000\000\025\001##sys#allocate-vector\376\003\000\000\002\376\001\000\000\022\001##sys#l"
"ist->vector\376\003\000\000\002\376\001\000\000\017\001##sys#block-ref\376\003\000\000\002\376\001\000\000\020\001##sys#block-set!\376\003\000\000\002\376\001\000\000\012\001##sys"
"#list\376\003\000\000\002\376\001\000\000\012\001##sys#cons\376\003\000\000\002\376\001\000\000\014\001##sys#append\376\003\000\000\002\376\001\000\000\014\001##sys#vector\376\003\000\000\002\376\001\000"
"\000\033\001##sys#foreign-char-argument\376\003\000\000\002\376\001\000\000\035\001##sys#foreign-fixnum-argument\376\003\000\000\002\376\001\000\000\035"
"\001##sys#foreign-flonum-argument\376\003\000\000\002\376\001\000\000\013\001##sys#error\376\003\000\000\002\376\001\000\000\023\001##sys#peek-c-stri"
"ng\376\003\000\000\002\376\001\000\000\033\001##sys#peek-nonnull-c-string\376\003\000\000\002\376\001\000\000\034\001##sys#peek-and-free-c-string\376"
"\003\000\000\002\376\001\000\000$\001##sys#peek-and-free-nonnull-c-string\376\003\000\000\002\376\001\000\000\034\001##sys#foreign-block-arg"
"ument\376\003\000\000\002\376\001\000\000\035\001##sys#foreign-string-argument\376\003\000\000\002\376\001\000\000\036\001##sys#foreign-pointer-ar"
"gument\376\003\000\000\002\376\001\000\000$\001##sys#call-with-current-continuation\376\377\016\376\377\016"));
lf[7]=C_h_intern(&lf[7],58, C_text("chicken.compiler.c-platform#default-profiling-declarations"));
lf[8]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001##core#declare\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001uses\376\003\000\000\002\376\001\000\000\010\001profiler\376\377\016\376\003\000\000\002\376\003\000"
"\000\002\376\001\000\000\022\001bound-to-procedure\376\003\000\000\002\376\001\000\000\023\001##sys#profile-entry\376\003\000\000\002\376\001\000\000\022\001##sys#profile"
"-exit\376\003\000\000\002\376\001\000\000\033\001##sys#register-profile-info\376\003\000\000\002\376\001\000\000\036\001##sys#set-profile-info-vec"
"tor!\376\377\016\376\377\016\376\377\016"));
lf[9]=C_h_intern(&lf[9],41, C_text("chicken.compiler.c-platform#default-units"));
lf[10]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\007\001library\376\003\000\000\002\376\001\000\000\004\001eval\376\377\016"));
lf[11]=C_h_intern(&lf[11],44, C_text("chicken.compiler.c-platform#words-per-flonum"));
lf[12]=C_h_intern(&lf[12],47, C_text("chicken.compiler.c-platform#target-include-file"));
lf[13]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011chicken.h"));
lf[14]=C_h_intern(&lf[14],50, C_text("chicken.compiler.c-platform#valid-compiler-options"));
lf[15]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\005\001-help\376\003\000\000\002\376\001\000\000\001\001h\376\003\000\000\002\376\001\000\000\004\001help\376\003\000\000\002\376\001\000\000\007\001version\376\003\000\000\002\376\001\000\000\007\001verbose\376"
"\003\000\000\002\376\001\000\000\014\001explicit-use\376\003\000\000\002\376\001\000\000\010\001no-trace\376\003\000\000\002\376\001\000\000\013\001no-warnings\376\003\000\000\002\376\001\000\000\006\001unsafe"
"\376\003\000\000\002\376\001\000\000\005\001block\376\003\000\000\002\376\001\000\000\014\001check-syntax\376\003\000\000\002\376\001\000\000\011\001to-stdout\376\003\000\000\002\376\001\000\000\025\001no-usual-i"
"ntegrations\376\003\000\000\002\376\001\000\000\020\001case-insensitive\376\003\000\000\002\376\001\000\000\016\001no-lambda-info\376\003\000\000\002\376\001\000\000\007\001profil"
"e\376\003\000\000\002\376\001\000\000\006\001inline\376\003\000\000\002\376\001\000\000\024\001keep-shadowed-macros\376\003\000\000\002\376\001\000\000\021\001ignore-repository\376\003\000"
"\000\002\376\001\000\000\021\001fixnum-arithmetic\376\003\000\000\002\376\001\000\000\022\001disable-interrupts\376\003\000\000\002\376\001\000\000\026\001optimize-leaf-r"
"outines\376\003\000\000\002\376\001\000\000\016\001compile-syntax\376\003\000\000\002\376\001\000\000\014\001tag-pointers\376\003\000\000\002\376\001\000\000\022\001accumulate-pro"
"file\376\003\000\000\002\376\001\000\000\035\001disable-stack-overflow-checks\376\003\000\000\002\376\001\000\000\003\001raw\376\003\000\000\002\376\001\000\000\012\001specialize\376"
"\003\000\000\002\376\001\000\000\036\001emit-external-prototypes-first\376\003\000\000\002\376\001\000\000\007\001release\376\003\000\000\002\376\001\000\000\005\001local\376\003\000\000\002\376"
"\001\000\000\015\001inline-global\376\003\000\000\002\376\001\000\000\014\001analyze-only\376\003\000\000\002\376\001\000\000\007\001dynamic\376\003\000\000\002\376\001\000\000\006\001static\376\003\000\000"
"\002\376\001\000\000\016\001no-argc-checks\376\003\000\000\002\376\001\000\000\023\001no-procedure-checks\376\003\000\000\002\376\001\000\000\027\001no-parentheses-syn"
"onyms\376\003\000\000\002\376\001\000\000)\001no-procedure-checks-for-toplevel-bindings\376\003\000\000\002\376\001\000\000\017\001no-bound-che"
"cks\376\003\000\000\002\376\001\000\000&\001no-procedure-checks-for-usual-bindings\376\003\000\000\002\376\001\000\000\022\001no-compiler-synta"
"x\376\003\000\000\002\376\001\000\000\027\001no-parentheses-synonyms\376\003\000\000\002\376\001\000\000\020\001no-symbol-escape\376\003\000\000\002\376\001\000\000\013\001r5rs-sy"
"ntax\376\003\000\000\002\376\001\000\000\031\001emit-all-import-libraries\376\003\000\000\002\376\001\000\000\014\001strict-types\376\003\000\000\002\376\001\000\000\012\001cluste"
"ring\376\003\000\000\002\376\001\000\000\004\001lfa2\376\003\000\000\002\376\001\000\000\012\001debug-info\376\003\000\000\002\376\001\000\000\033\001regenerate-import-libraries\376\003"
"\000\000\002\376\001\000\000\012\001setup-mode\376\003\000\000\002\376\001\000\000\023\001module-registration\376\003\000\000\002\376\001\000\000\026\001no-module-registrati"
"on\376\377\016"));
lf[16]=C_h_intern(&lf[16],64, C_text("chicken.compiler.c-platform#valid-compiler-options-with-argument"));
lf[17]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\005\001debug\376\003\000\000\002\376\001\000\000\004\001link\376\003\000\000\002\376\001\000\000\016\001emit-link-file\376\003\000\000\002\376\001\000\000\013\001output-file\376\003"
"\000\000\002\376\001\000\000\014\001include-path\376\003\000\000\002\376\001\000\000\011\001heap-size\376\003\000\000\002\376\001\000\000\012\001stack-size\376\003\000\000\002\376\001\000\000\004\001unit\376\003\000"
"\000\002\376\001\000\000\004\001uses\376\003\000\000\002\376\001\000\000\006\001module\376\003\000\000\002\376\001\000\000\015\001keyword-style\376\003\000\000\002\376\001\000\000\021\001require-extensio"
"n\376\003\000\000\002\376\001\000\000\014\001inline-limit\376\003\000\000\002\376\001\000\000\014\001profile-name\376\003\000\000\002\376\001\000\000\007\001prelude\376\003\000\000\002\376\001\000\000\010\001post"
"lude\376\003\000\000\002\376\001\000\000\010\001prologue\376\003\000\000\002\376\001\000\000\010\001epilogue\376\003\000\000\002\376\001\000\000\007\001nursery\376\003\000\000\002\376\001\000\000\006\001extend\376\003\000"
"\000\002\376\001\000\000\007\001feature\376\003\000\000\002\376\001\000\000\012\001no-feature\376\003\000\000\002\376\001\000\000\014\001unroll-limit\376\003\000\000\002\376\001\000\000\020\001emit-inlin"
"e-file\376\003\000\000\002\376\001\000\000\023\001consult-inline-file\376\003\000\000\002\376\001\000\000\017\001emit-types-file\376\003\000\000\002\376\001\000\000\022\001consult"
"-types-file\376\003\000\000\002\376\001\000\000\023\001emit-import-library\376\377\016"));
lf[18]=C_h_intern(&lf[18],47, C_text("chicken.compiler.core#default-standard-bindings"));
lf[19]=C_h_intern(&lf[19],47, C_text("chicken.compiler.core#default-extended-bindings"));
lf[20]=C_h_intern(&lf[20],39, C_text("chicken.compiler.core#internal-bindings"));
lf[21]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\012\001##sys#slot\376\003\000\000\002\376\001\000\000\015\001##sys#setslot\376\003\000\000\002\376\001\000\000\017\001##sys#block-ref\376\003\000\000\002\376\001\000\000"
"\020\001##sys#block-set!\376\003\000\000\002\376\001\000\000\011\001##sys#/-2\376\003\000\000\002\376\001\000\000$\001##sys#call-with-current-continu"
"ation\376\003\000\000\002\376\001\000\000\012\001##sys#size\376\003\000\000\002\376\001\000\000\012\001##sys#byte\376\003\000\000\002\376\001\000\000\015\001##sys#setbyte\376\003\000\000\002\376\001\000\000"
"\016\001##sys#pointer\077\376\003\000\000\002\376\001\000\000\030\001##sys#generic-structure\077\376\003\000\000\002\376\001\000\000\020\001##sys#structure\077\376\003"
"\000\000\002\376\001\000\000\025\001##sys#check-structure\376\003\000\000\002\376\001\000\000\022\001##sys#check-number\376\003\000\000\002\376\001\000\000\020\001##sys#chec"
"k-list\376\003\000\000\002\376\001\000\000\020\001##sys#check-pair\376\003\000\000\002\376\001\000\000\022\001##sys#check-string\376\003\000\000\002\376\001\000\000\022\001##sys#c"
"heck-symbol\376\003\000\000\002\376\001\000\000\023\001##sys#check-boolean\376\003\000\000\002\376\001\000\000\024\001##sys#check-locative\376\003\000\000\002\376\001\000"
"\000\020\001##sys#check-port\376\003\000\000\002\376\001\000\000\026\001##sys#check-input-port\376\003\000\000\002\376\001\000\000\027\001##sys#check-outpu"
"t-port\376\003\000\000\002\376\001\000\000\025\001##sys#check-open-port\376\003\000\000\002\376\001\000\000\020\001##sys#check-char\376\003\000\000\002\376\001\000\000\022\001##sy"
"s#check-vector\376\003\000\000\002\376\001\000\000\027\001##sys#check-byte-vector\376\003\000\000\002\376\001\000\000\012\001##sys#list\376\003\000\000\002\376\001\000\000\012\001"
"##sys#cons\376\003\000\000\002\376\001\000\000\026\001##sys#call-with-values\376\003\000\000\002\376\001\000\000\035\001##sys#flonum-in-fixnum-ran"
"ge\077\376\003\000\000\002\376\001\000\000\020\001##sys#immediate\077\376\003\000\000\002\376\001\000\000\024\001##sys#context-switch\376\003\000\000\002\376\001\000\000\024\001##sys#ma"
"ke-structure\376\003\000\000\002\376\001\000\000\013\001##sys#apply\376\003\000\000\002\376\001\000\000\022\001##sys#apply-values\376\003\000\000\002\376\001\000\000\047\001chicke"
"n.continuation#continuation-graft\376\003\000\000\002\376\001\000\000\021\001##sys#bytevector\077\376\003\000\000\002\376\001\000\000\021\001##sys#ma"
"ke-vector\376\003\000\000\002\376\001\000\000\014\001##sys#setter\376\003\000\000\002\376\001\000\000\011\001##sys#car\376\003\000\000\002\376\001\000\000\011\001##sys#cdr\376\003\000\000\002\376\001\000"
"\000\013\001##sys#pair\077\376\003\000\000\002\376\001\000\000\011\001##sys#eq\077\376\003\000\000\002\376\001\000\000\013\001##sys#list\077\376\003\000\000\002\376\001\000\000\015\001##sys#vector\077"
"\376\003\000\000\002\376\001\000\000\012\001##sys#eqv\077\376\003\000\000\002\376\001\000\000\021\001##sys#get-keyword\376\003\000\000\002\376\001\000\000\033\001##sys#foreign-char-a"
"rgument\376\003\000\000\002\376\001\000\000\035\001##sys#foreign-fixnum-argument\376\003\000\000\002\376\001\000\000\035\001##sys#foreign-flonum-a"
"rgument\376\003\000\000\002\376\001\000\000\034\001##sys#foreign-block-argument\376\003\000\000\002\376\001\000\000%\001##sys#foreign-struct-wr"
"apper-argument\376\003\000\000\002\376\001\000\000\035\001##sys#foreign-string-argument\376\003\000\000\002\376\001\000\000\036\001##sys#foreign-p"
"ointer-argument\376\003\000\000\002\376\001\000\000\012\001##sys#void\376\003\000\000\002\376\001\000\000%\001##sys#foreign-ranged-integer-argu"
"ment\376\003\000\000\002\376\001\000\000.\001##sys#foreign-unsigned-ranged-integer-argument\376\003\000\000\002\376\001\000\000\021\001##sys#pe"
"ek-fixnum\376\003\000\000\002\376\001\000\000\016\001##sys#setislot\376\003\000\000\002\376\001\000\000\022\001##sys#poke-integer\376\003\000\000\002\376\001\000\000\020\001##sys#"
"permanent\077\376\003\000\000\002\376\001\000\000\014\001##sys#values\376\003\000\000\002\376\001\000\000\021\001##sys#poke-double\376\003\000\000\002\376\001\000\000\023\001##sys#in"
"tern-symbol\376\003\000\000\002\376\001\000\000\023\001##sys#null-pointer\077\376\003\000\000\002\376\001\000\000\017\001##sys#peek-byte\376\003\000\000\002\376\001\000\000\022\001##"
"sys#file-exists\077\376\003\000\000\002\376\001\000\000\025\001##sys#substring-index\376\003\000\000\002\376\001\000\000\030\001##sys#substring-index"
"-ci\376\003\000\000\002\376\001\000\000\011\001##sys#lcm\376\003\000\000\002\376\001\000\000\011\001##sys#gcd\376\377\016"));
lf[22]=C_h_intern(&lf[22],34, C_text("chicken.compiler.support#make-node"));
lf[23]=C_h_intern(&lf[23],11, C_text("##core#call"));
lf[24]=C_h_intern(&lf[24],6, C_text("fixnum"));
lf[25]=C_h_intern(&lf[25],36, C_text("chicken.compiler.support#number-type"));
lf[26]=C_h_intern(&lf[26],31, C_text("chicken.compiler.support#unsafe"));
lf[27]=C_h_intern(&lf[27],13, C_text("##core#inline"));
lf[28]=C_h_intern(&lf[28],22, C_text("##core#inline_allocate"));
lf[29]=C_h_intern(&lf[29],30, C_text("chicken.compiler.support#qnode"));
lf[30]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\005C_eqp\376\377\016"));
lf[31]=C_h_intern(&lf[31],5, C_text("quote"));
lf[32]=C_h_intern(&lf[32],35, C_text("chicken.compiler.support#immediate\077"));
lf[33]=C_h_intern(&lf[33],40, C_text("chicken.compiler.support#node-parameters"));
lf[34]=C_h_intern(&lf[34],35, C_text("chicken.compiler.support#node-class"));
lf[35]=C_h_intern(&lf[35],15, C_text("##core#variable"));
lf[36]=C_h_intern(&lf[36],3, C_text("map"));
lf[37]=C_h_intern(&lf[37],13, C_text("scheme#append"));
lf[38]=C_h_intern(&lf[38],20, C_text("chicken.base#butlast"));
lf[39]=C_h_intern(&lf[39],11, C_text("##core#proc"));
lf[40]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\007C_apply\376\003\000\000\002\376\377\006\001\376\377\016"));
lf[41]=C_h_intern(&lf[41],6, C_text("values"));
lf[42]=C_h_intern(&lf[42],12, C_text("##sys#values"));
lf[43]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\016C_apply_values\376\003\000\000\002\376\377\006\001\376\377\016"));
lf[44]=C_h_intern(&lf[44],35, C_text("chicken.compiler.support#intrinsic\077"));
lf[45]=C_h_intern(&lf[45],37, C_text("scheme#call-with-current-continuation"));
lf[46]=C_h_intern(&lf[46],34, C_text("chicken.compiler.optimizer#rewrite"));
lf[47]=C_h_intern(&lf[47],13, C_text("##core#lambda"));
lf[48]=C_h_intern(&lf[48],3, C_text("let"));
lf[49]=C_h_intern(&lf[49],32, C_text("chicken.compiler.support#varnode"));
lf[50]=C_h_intern(&lf[50],19, C_text("chicken.base#gensym"));
lf[51]=C_h_intern(&lf[51],2, C_text("f_"));
lf[52]=C_h_intern(&lf[52],34, C_text("chicken.compiler.support#debugging"));
lf[53]=C_h_intern(&lf[53],1, C_text("o"));
lf[54]=C_decode_literal(C_heaptop,C_text("\376B\000\000)removing single-valued `call-with-values\047"));
lf[55]=C_h_intern(&lf[55],1, C_text("r"));
lf[56]=C_h_intern(&lf[56],31, C_text("chicken.compiler.support#db-get"));
lf[57]=C_h_intern(&lf[57],5, C_text("value"));
lf[58]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\024C_fixnum_shift_right\376\377\016"));
lf[59]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\017C_fixnum_divide\376\377\016"));
lf[60]=C_h_intern(&lf[60],35, C_text("chicken.compiler.support#fold-inner"));
lf[61]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_a_i_vector"));
lf[62]=C_h_intern(&lf[62],16, C_text("##core#undefined"));
lf[63]=C_h_intern(&lf[63],16, C_text("inline-transient"));
lf[64]=C_h_intern(&lf[64],8, C_text("assigned"));
lf[65]=C_h_intern(&lf[65],10, C_text("references"));
lf[66]=C_h_intern(&lf[66],27, C_text("##sys#decompose-lambda-list"));
lf[67]=C_h_intern(&lf[67],17, C_text("##sys#get-keyword"));
lf[68]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017C_i_get_keyword"));
lf[69]=C_h_intern(&lf[69],27, C_text("chicken.keyword#get-keyword"));
lf[70]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017C_i_get_keyword"));
lf[71]=C_h_intern(&lf[71],33, C_text("chicken.string#substring-index-ci"));
lf[72]=C_h_intern(&lf[72],24, C_text("##sys#substring-index-ci"));
lf[73]=C_h_intern(&lf[73],30, C_text("chicken.string#substring-index"));
lf[74]=C_h_intern(&lf[74],21, C_text("##sys#substring-index"));
lf[75]=C_h_intern(&lf[75],29, C_text("chicken.string#substring-ci=\077"));
lf[76]=C_h_intern(&lf[76],20, C_text("##sys#substring-ci=\077"));
lf[77]=C_h_intern(&lf[77],26, C_text("chicken.string#substring=\077"));
lf[78]=C_h_intern(&lf[78],17, C_text("##sys#substring=\077"));
lf[79]=C_h_intern(&lf[79],17, C_text("scheme#write-char"));
lf[80]=C_h_intern(&lf[80],21, C_text("##sys#write-char/port"));
lf[81]=C_h_intern(&lf[81],21, C_text("##sys#standard-output"));
lf[82]=C_h_intern(&lf[82],16, C_text("scheme#read-char"));
lf[83]=C_h_intern(&lf[83],20, C_text("##sys#read-char/port"));
lf[84]=C_h_intern(&lf[84],20, C_text("##sys#standard-input"));
lf[85]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_i_fixnum_length"));
lf[86]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022C_i_integer_length"));
lf[87]=C_h_intern(&lf[87],30, C_text("chicken.bitwise#integer-length"));
lf[88]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_u_i_bit_to_bool"));
lf[89]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017C_i_bit_to_bool"));
lf[90]=C_h_intern(&lf[90],28, C_text("chicken.bitwise#bit->boolean"));
lf[91]=C_h_intern(&lf[91],31, C_text("chicken.base#current-error-port"));
lf[92]=C_h_intern(&lf[92],20, C_text("##sys#standard-error"));
lf[93]=C_h_intern(&lf[93],26, C_text("scheme#current-output-port"));
lf[94]=C_h_intern(&lf[94],25, C_text("scheme#current-input-port"));
lf[95]=C_h_intern(&lf[95],10, C_text("##sys#void"));
lf[96]=C_h_intern(&lf[96],21, C_text("##sys#undefined-value"));
lf[97]=C_h_intern(&lf[97],17, C_text("chicken.base#void"));
lf[98]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001scheme#car\376\001\000\000\017\001scheme#set-car!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001scheme#cdr\376\001\000\000\017\001s"
"cheme#set-cdr!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001scheme#string-ref\376\001\000\000\022\001scheme#string-set!\376\003\000\000\002\376\003\000\000"
"\002\376\001\000\000\021\001scheme#vector-ref\376\001\000\000\022\001scheme#vector-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023\001srfi-4#u8vector-"
"ref\376\001\000\000\024\001srfi-4#u8vector-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023\001srfi-4#s8vector-ref\376\001\000\000\024\001srfi-4#s8v"
"ector-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024\001srfi-4#u16vector-ref\376\001\000\000\025\001srfi-4#u16vector-set!\376\003\000\000\002\376\003"
"\000\000\002\376\001\000\000\024\001srfi-4#s16vector-ref\376\001\000\000\025\001srfi-4#s16vector-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024\001srfi-4#u"
"32vector-ref\376\001\000\000\025\001srfi-4#u32vector-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024\001srfi-4#s32vector-ref\376\001\000\000\025"
"\001srfi-4#s32vector-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024\001srfi-4#u64vector-ref\376\001\000\000\025\001srfi-4#u64vector"
"-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024\001srfi-4#s64vector-ref\376\001\000\000\025\001srfi-4#s64vector-set!\376\003\000\000\002\376\003\000\000\002\376\001"
"\000\000\024\001srfi-4#f32vector-ref\376\001\000\000\025\001srfi-4#f32vector-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024\001srfi-4#f64vec"
"tor-ref\376\001\000\000\025\001srfi-4#f64vector-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\035\001chicken.locative#locative-ref\376"
"\001\000\000\036\001chicken.locative#locative-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\035\001chicken.memory#pointer-u8-ref"
"\376\001\000\000\036\001chicken.memory#pointer-u8-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\035\001chicken.memory#pointer-s8-re"
"f\376\001\000\000\036\001chicken.memory#pointer-s8-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\036\001chicken.memory#pointer-u16-"
"ref\376\001\000\000\037\001chicken.memory#pointer-u16-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\036\001chicken.memory#pointer-s"
"16-ref\376\001\000\000\037\001chicken.memory#pointer-s16-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\036\001chicken.memory#pointe"
"r-u32-ref\376\001\000\000\037\001chicken.memory#pointer-u32-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\036\001chicken.memory#poi"
"nter-s32-ref\376\001\000\000\037\001chicken.memory#pointer-s32-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\036\001chicken.memory#"
"pointer-f32-ref\376\001\000\000\037\001chicken.memory#pointer-f32-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\036\001chicken.memo"
"ry#pointer-f64-ref\376\001\000\000\037\001chicken.memory#pointer-f64-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\047\001chicken.m"
"emory.representation#block-ref\376\001\000\000(\001chicken.memory.representation#block-set!\376\377\016"));
lf[99]=C_h_intern(&lf[99],12, C_text("##sys#setter"));
lf[100]=C_h_intern(&lf[100],20, C_text("chicken.base#call/cc"));
lf[101]=C_h_intern(&lf[101],17, C_text("##sys#make-vector"));
lf[102]=C_h_intern(&lf[102],18, C_text("scheme#make-vector"));
lf[103]=C_h_intern(&lf[103],29, C_text("srfi-4#f64vector->blob/shared"));
lf[104]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006C_slot"));
lf[105]=C_h_intern(&lf[105],29, C_text("srfi-4#f32vector->blob/shared"));
lf[106]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006C_slot"));
lf[107]=C_h_intern(&lf[107],29, C_text("srfi-4#s64vector->blob/shared"));
lf[108]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006C_slot"));
lf[109]=C_h_intern(&lf[109],29, C_text("srfi-4#u64vector->blob/shared"));
lf[110]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006C_slot"));
lf[111]=C_h_intern(&lf[111],29, C_text("srfi-4#s32vector->blob/shared"));
lf[112]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006C_slot"));
lf[113]=C_h_intern(&lf[113],29, C_text("srfi-4#u32vector->blob/shared"));
lf[114]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006C_slot"));
lf[115]=C_h_intern(&lf[115],29, C_text("srfi-4#s16vector->blob/shared"));
lf[116]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006C_slot"));
lf[117]=C_h_intern(&lf[117],29, C_text("srfi-4#u16vector->blob/shared"));
lf[118]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006C_slot"));
lf[119]=C_h_intern(&lf[119],28, C_text("srfi-4#s8vector->blob/shared"));
lf[120]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006C_slot"));
lf[121]=C_h_intern(&lf[121],28, C_text("srfi-4#u8vector->blob/shared"));
lf[122]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006C_slot"));
lf[123]=C_h_intern(&lf[123],18, C_text("chicken.base#atom\077"));
lf[124]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_i_not_pair_p"));
lf[125]=C_h_intern(&lf[125],23, C_text("srfi-4#f64vector-length"));
lf[126]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024C_i_f64vector_length"));
lf[127]=C_decode_literal(C_heaptop,C_text("\376B\000\000\026C_u_i_f64vector_length"));
lf[128]=C_h_intern(&lf[128],23, C_text("srfi-4#f32vector-length"));
lf[129]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024C_i_f32vector_length"));
lf[130]=C_decode_literal(C_heaptop,C_text("\376B\000\000\026C_u_i_f32vector_length"));
lf[131]=C_h_intern(&lf[131],23, C_text("srfi-4#s64vector-length"));
lf[132]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024C_i_s64vector_length"));
lf[133]=C_decode_literal(C_heaptop,C_text("\376B\000\000\026C_u_i_s64vector_length"));
lf[134]=C_h_intern(&lf[134],23, C_text("srfi-4#u64vector-length"));
lf[135]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024C_i_u64vector_length"));
lf[136]=C_decode_literal(C_heaptop,C_text("\376B\000\000\026C_u_i_u64vector_length"));
lf[137]=C_h_intern(&lf[137],23, C_text("srfi-4#s32vector-length"));
lf[138]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024C_i_s32vector_length"));
lf[139]=C_decode_literal(C_heaptop,C_text("\376B\000\000\026C_u_i_s32vector_length"));
lf[140]=C_h_intern(&lf[140],23, C_text("srfi-4#u32vector-length"));
lf[141]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024C_i_u32vector_length"));
lf[142]=C_decode_literal(C_heaptop,C_text("\376B\000\000\026C_u_i_u32vector_length"));
lf[143]=C_h_intern(&lf[143],23, C_text("srfi-4#s16vector-length"));
lf[144]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024C_i_s16vector_length"));
lf[145]=C_decode_literal(C_heaptop,C_text("\376B\000\000\026C_u_i_s16vector_length"));
lf[146]=C_h_intern(&lf[146],23, C_text("srfi-4#u16vector-length"));
lf[147]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024C_i_u16vector_length"));
lf[148]=C_decode_literal(C_heaptop,C_text("\376B\000\000\026C_u_i_u16vector_length"));
lf[149]=C_h_intern(&lf[149],22, C_text("srfi-4#s8vector-length"));
lf[150]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023C_i_s8vector_length"));
lf[151]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025C_u_i_s8vector_length"));
lf[152]=C_h_intern(&lf[152],22, C_text("srfi-4#u8vector-length"));
lf[153]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023C_i_u8vector_length"));
lf[154]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025C_u_i_u8vector_length"));
lf[155]=C_h_intern(&lf[155],21, C_text("srfi-4#f64vector-set!"));
lf[156]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_i_f64vector_set"));
lf[157]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023C_u_i_f64vector_set"));
lf[158]=C_h_intern(&lf[158],21, C_text("srfi-4#f32vector-set!"));
lf[159]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_i_f32vector_set"));
lf[160]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023C_u_i_f32vector_set"));
lf[161]=C_h_intern(&lf[161],21, C_text("srfi-4#s64vector-set!"));
lf[162]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_i_s64vector_set"));
lf[163]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023C_u_i_s64vector_set"));
lf[164]=C_h_intern(&lf[164],21, C_text("srfi-4#u64vector-set!"));
lf[165]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_i_u64vector_set"));
lf[166]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023C_u_i_u64vector_set"));
lf[167]=C_h_intern(&lf[167],21, C_text("srfi-4#s32vector-set!"));
lf[168]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_i_s32vector_set"));
lf[169]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023C_u_i_s32vector_set"));
lf[170]=C_h_intern(&lf[170],21, C_text("srfi-4#u32vector-set!"));
lf[171]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_i_u32vector_set"));
lf[172]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023C_u_i_u32vector_set"));
lf[173]=C_h_intern(&lf[173],21, C_text("srfi-4#s16vector-set!"));
lf[174]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_i_s16vector_set"));
lf[175]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023C_u_i_s16vector_set"));
lf[176]=C_h_intern(&lf[176],21, C_text("srfi-4#u16vector-set!"));
lf[177]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_i_u16vector_set"));
lf[178]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023C_u_i_u16vector_set"));
lf[179]=C_h_intern(&lf[179],20, C_text("srfi-4#s8vector-set!"));
lf[180]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020C_i_s8vector_set"));
lf[181]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022C_u_i_s8vector_set"));
lf[182]=C_h_intern(&lf[182],20, C_text("srfi-4#u8vector-set!"));
lf[183]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020C_i_u8vector_set"));
lf[184]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022C_u_i_u8vector_set"));
lf[185]=C_h_intern(&lf[185],20, C_text("srfi-4#f64vector-ref"));
lf[186]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023C_a_i_f64vector_ref"));
lf[187]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025C_a_u_i_f64vector_ref"));
lf[188]=C_h_intern(&lf[188],20, C_text("srfi-4#f32vector-ref"));
lf[189]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023C_a_i_f32vector_ref"));
lf[190]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025C_a_u_i_f32vector_ref"));
lf[191]=C_h_intern(&lf[191],20, C_text("srfi-4#s32vector-ref"));
lf[192]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023C_a_i_s32vector_ref"));
lf[193]=C_h_intern(&lf[193],20, C_text("srfi-4#u32vector-ref"));
lf[194]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023C_a_i_u32vector_ref"));
lf[195]=C_h_intern(&lf[195],20, C_text("srfi-4#s16vector-ref"));
lf[196]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_i_s16vector_ref"));
lf[197]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023C_u_i_s16vector_ref"));
lf[198]=C_h_intern(&lf[198],20, C_text("srfi-4#u16vector-ref"));
lf[199]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_i_u16vector_ref"));
lf[200]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023C_u_i_u16vector_ref"));
lf[201]=C_h_intern(&lf[201],19, C_text("srfi-4#s8vector-ref"));
lf[202]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020C_i_s8vector_ref"));
lf[203]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022C_u_i_s8vector_ref"));
lf[204]=C_h_intern(&lf[204],19, C_text("srfi-4#u8vector-ref"));
lf[205]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020C_i_u8vector_ref"));
lf[206]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022C_u_i_u8vector_ref"));
lf[207]=C_h_intern(&lf[207],22, C_text("chicken.blob#blob-size"));
lf[208]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_block_size"));
lf[209]=C_h_intern(&lf[209],46, C_text("##sys#foreign-unsigned-ranged-integer-argument"));
lf[210]=C_decode_literal(C_heaptop,C_text("\376B\000\000-C_i_foreign_unsigned_ranged_integer_argumentp"));
lf[211]=C_h_intern(&lf[211],37, C_text("##sys#foreign-ranged-integer-argument"));
lf[212]=C_decode_literal(C_heaptop,C_text("\376B\000\000$C_i_foreign_ranged_integer_argumentp"));
lf[213]=C_h_intern(&lf[213],30, C_text("##sys#foreign-pointer-argument"));
lf[214]=C_decode_literal(C_heaptop,C_text("\376B\000\000\035C_i_foreign_pointer_argumentp"));
lf[215]=C_h_intern(&lf[215],29, C_text("##sys#foreign-string-argument"));
lf[216]=C_decode_literal(C_heaptop,C_text("\376B\000\000\034C_i_foreign_string_argumentp"));
lf[217]=C_h_intern(&lf[217],37, C_text("##sys#foreign-struct-wrapper-argument"));
lf[218]=C_decode_literal(C_heaptop,C_text("\376B\000\000$C_i_foreign_struct_wrapper_argumentp"));
lf[219]=C_h_intern(&lf[219],28, C_text("##sys#foreign-block-argument"));
lf[220]=C_decode_literal(C_heaptop,C_text("\376B\000\000\033C_i_foreign_block_argumentp"));
lf[221]=C_h_intern(&lf[221],29, C_text("##sys#foreign-flonum-argument"));
lf[222]=C_decode_literal(C_heaptop,C_text("\376B\000\000\034C_i_foreign_flonum_argumentp"));
lf[223]=C_h_intern(&lf[223],27, C_text("##sys#foreign-char-argument"));
lf[224]=C_decode_literal(C_heaptop,C_text("\376B\000\000\032C_i_foreign_char_argumentp"));
lf[225]=C_h_intern(&lf[225],29, C_text("##sys#foreign-fixnum-argument"));
lf[226]=C_decode_literal(C_heaptop,C_text("\376B\000\000\034C_i_foreign_fixnum_argumentp"));
lf[227]=C_h_intern(&lf[227],30, C_text("chicken.locative#locative-set!"));
lf[228]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020C_i_locative_set"));
lf[229]=C_h_intern(&lf[229],33, C_text("chicken.locative#locative->object"));
lf[230]=C_decode_literal(C_heaptop,C_text("\376B\000\000\026C_i_locative_to_object"));
lf[231]=C_h_intern(&lf[231],16, C_text("##sys#immediate\077"));
lf[232]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006C_immp"));
lf[233]=C_h_intern(&lf[233],19, C_text("##sys#null-pointer\077"));
lf[234]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017C_null_pointerp"));
lf[235]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017C_null_pointerp"));
lf[236]=C_h_intern(&lf[236],16, C_text("##sys#permanent\077"));
lf[237]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_permanentp"));
lf[238]=C_h_intern(&lf[238],18, C_text("scheme#string-ci=\077"));
lf[239]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025C_i_string_ci_equal_p"));
lf[240]=C_h_intern(&lf[240],15, C_text("scheme#string=\077"));
lf[241]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022C_i_string_equal_p"));
lf[242]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024C_u_i_string_equal_p"));
lf[243]=C_h_intern(&lf[243],17, C_text("##sys#poke-double"));
lf[244]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015C_poke_double"));
lf[245]=C_h_intern(&lf[245],18, C_text("##sys#poke-integer"));
lf[246]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_poke_integer"));
lf[247]=C_h_intern(&lf[247],14, C_text("##sys#setislot"));
lf[248]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_i_set_i_slot"));
lf[249]=C_h_intern(&lf[249],30, C_text("chicken.memory#pointer->object"));
lf[250]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023C_pointer_to_object"));
lf[251]=C_h_intern(&lf[251],15, C_text("##sys#peek-byte"));
lf[252]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013C_peek_byte"));
lf[253]=C_h_intern(&lf[253],17, C_text("##sys#peek-fixnum"));
lf[254]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015C_peek_fixnum"));
lf[255]=C_h_intern(&lf[255],13, C_text("##sys#setbyte"));
lf[256]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011C_setbyte"));
lf[257]=C_h_intern(&lf[257],10, C_text("##sys#byte"));
lf[258]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011C_subbyte"));
lf[259]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\033C_i_fixnum_arithmetic_shift\376\377\016"));
lf[260]=C_decode_literal(C_heaptop,C_text("\376B\000\000\030C_s_a_i_arithmetic_shift"));
lf[261]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\024C_fixnum_shift_right\376\377\016"));
lf[262]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\023C_fixnum_shift_left\376\377\016"));
lf[263]=C_h_intern(&lf[263],36, C_text("chicken.compiler.support#big-fixnum\077"));
lf[264]=C_h_intern(&lf[264],32, C_text("chicken.bitwise#arithmetic-shift"));
lf[265]=C_h_intern(&lf[265],20, C_text("chicken.fixnum#fxrem"));
lf[266]=C_decode_literal(C_heaptop,C_text("\376B\000\000\034C_i_fixnum_remainder_checked"));
lf[267]=C_h_intern(&lf[267],20, C_text("chicken.fixnum#fxmod"));
lf[268]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017C_fixnum_modulo"));
lf[269]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_u_fixnum_modulo"));
lf[270]=C_h_intern(&lf[270],18, C_text("chicken.fixnum#fx/"));
lf[271]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017C_fixnum_divide"));
lf[272]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_u_fixnum_divide"));
lf[273]=C_h_intern(&lf[273],20, C_text("chicken.fixnum#fxior"));
lf[274]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013C_fixnum_or"));
lf[275]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015C_u_fixnum_or"));
lf[276]=C_h_intern(&lf[276],20, C_text("chicken.fixnum#fxand"));
lf[277]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_fixnum_and"));
lf[278]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_u_fixnum_and"));
lf[279]=C_h_intern(&lf[279],20, C_text("chicken.fixnum#fxxor"));
lf[280]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_fixnum_xor"));
lf[281]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_fixnum_xor"));
lf[282]=C_h_intern(&lf[282],20, C_text("chicken.fixnum#fxneg"));
lf[283]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017C_fixnum_negate"));
lf[284]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_u_fixnum_negate"));
lf[285]=C_h_intern(&lf[285],20, C_text("chicken.fixnum#fxshr"));
lf[286]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024C_fixnum_shift_right"));
lf[287]=C_h_intern(&lf[287],20, C_text("chicken.fixnum#fxshl"));
lf[288]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023C_fixnum_shift_left"));
lf[289]=C_h_intern(&lf[289],18, C_text("chicken.fixnum#fx-"));
lf[290]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023C_fixnum_difference"));
lf[291]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025C_u_fixnum_difference"));
lf[292]=C_h_intern(&lf[292],18, C_text("chicken.fixnum#fx+"));
lf[293]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015C_fixnum_plus"));
lf[294]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017C_u_fixnum_plus"));
lf[295]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\016C_i_set_i_slot\376\377\016"));
lf[296]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\013C_i_setslot\376\377\016"));
lf[297]=C_h_intern(&lf[297],13, C_text("##sys#setslot"));
lf[298]=C_h_intern(&lf[298],30, C_text("chicken.memory#pointer-f64-ref"));
lf[299]=C_decode_literal(C_heaptop,C_text("\376B\000\000\027C_a_u_i_pointer_f64_ref"));
lf[300]=C_h_intern(&lf[300],30, C_text("chicken.memory#pointer-f32-ref"));
lf[301]=C_decode_literal(C_heaptop,C_text("\376B\000\000\027C_a_u_i_pointer_f32_ref"));
lf[302]=C_h_intern(&lf[302],30, C_text("chicken.memory#pointer-s32-ref"));
lf[303]=C_decode_literal(C_heaptop,C_text("\376B\000\000\027C_a_u_i_pointer_s32_ref"));
lf[304]=C_h_intern(&lf[304],30, C_text("chicken.memory#pointer-u32-ref"));
lf[305]=C_decode_literal(C_heaptop,C_text("\376B\000\000\027C_a_u_i_pointer_u32_ref"));
lf[306]=C_h_intern(&lf[306],31, C_text("chicken.memory#pointer-f64-set!"));
lf[307]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025C_u_i_pointer_f64_set"));
lf[308]=C_h_intern(&lf[308],31, C_text("chicken.memory#pointer-f32-set!"));
lf[309]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025C_u_i_pointer_f32_set"));
lf[310]=C_h_intern(&lf[310],31, C_text("chicken.memory#pointer-s32-set!"));
lf[311]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025C_u_i_pointer_s32_set"));
lf[312]=C_h_intern(&lf[312],31, C_text("chicken.memory#pointer-u32-set!"));
lf[313]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025C_u_i_pointer_u32_set"));
lf[314]=C_h_intern(&lf[314],31, C_text("chicken.memory#pointer-s16-set!"));
lf[315]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025C_u_i_pointer_s16_set"));
lf[316]=C_h_intern(&lf[316],31, C_text("chicken.memory#pointer-u16-set!"));
lf[317]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025C_u_i_pointer_u16_set"));
lf[318]=C_h_intern(&lf[318],30, C_text("chicken.memory#pointer-s8-set!"));
lf[319]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024C_u_i_pointer_s8_set"));
lf[320]=C_h_intern(&lf[320],30, C_text("chicken.memory#pointer-u8-set!"));
lf[321]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024C_u_i_pointer_u8_set"));
lf[322]=C_h_intern(&lf[322],30, C_text("chicken.memory#pointer-s16-ref"));
lf[323]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025C_u_i_pointer_s16_ref"));
lf[324]=C_h_intern(&lf[324],30, C_text("chicken.memory#pointer-u16-ref"));
lf[325]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025C_u_i_pointer_u16_ref"));
lf[326]=C_h_intern(&lf[326],29, C_text("chicken.memory#pointer-s8-ref"));
lf[327]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024C_u_i_pointer_s8_ref"));
lf[328]=C_h_intern(&lf[328],29, C_text("chicken.memory#pointer-u8-ref"));
lf[329]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024C_u_i_pointer_u8_ref"));
lf[330]=C_h_intern(&lf[330],29, C_text("chicken.locative#locative-ref"));
lf[331]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022C_a_i_locative_ref"));
lf[332]=C_h_intern(&lf[332],23, C_text("chicken.memory#pointer+"));
lf[333]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023C_a_u_i_pointer_inc"));
lf[334]=C_h_intern(&lf[334],31, C_text("chicken.memory#pointer->address"));
lf[335]=C_decode_literal(C_heaptop,C_text("\376B\000\000\030C_a_i_pointer_to_address"));
lf[336]=C_h_intern(&lf[336],31, C_text("chicken.memory#address->pointer"));
lf[337]=C_decode_literal(C_heaptop,C_text("\376B\000\000\030C_a_i_address_to_pointer"));
lf[338]=C_h_intern(&lf[338],13, C_text("scheme#string"));
lf[339]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_a_i_string"));
lf[340]=C_h_intern(&lf[340],20, C_text("##sys#make-structure"));
lf[341]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_a_i_record"));
lf[342]=C_h_intern(&lf[342],12, C_text("##sys#vector"));
lf[343]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_a_i_vector"));
lf[344]=C_h_intern(&lf[344],13, C_text("scheme#vector"));
lf[345]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_a_i_vector"));
lf[346]=C_h_intern(&lf[346],10, C_text("##sys#list"));
lf[347]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012C_a_i_list"));
lf[348]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\377\001\000\000\000\000\376\003\000\000\002\376\377\001\000\000\000\003\376\377\016"));
lf[349]=C_h_intern(&lf[349],11, C_text("scheme#list"));
lf[350]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012C_a_i_list"));
lf[351]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\377\001\000\000\000\000\376\003\000\000\002\376\377\001\000\000\000\003\376\377\016"));
lf[352]=C_h_intern(&lf[352],10, C_text("##sys#cons"));
lf[353]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012C_a_i_cons"));
lf[354]=C_h_intern(&lf[354],11, C_text("scheme#cons"));
lf[355]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012C_a_i_cons"));
lf[356]=C_h_intern(&lf[356],22, C_text("chicken.flonum#fpround"));
lf[357]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022C_a_i_flonum_floor"));
lf[358]=C_h_intern(&lf[358],24, C_text("chicken.flonum#fpceiling"));
lf[359]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024C_a_i_flonum_ceiling"));
lf[360]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022C_a_i_flonum_round"));
lf[361]=C_h_intern(&lf[361],25, C_text("chicken.flonum#fptruncate"));
lf[362]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025C_a_i_flonum_truncate"));
lf[363]=C_h_intern(&lf[363],20, C_text("chicken.flonum#fpabs"));
lf[364]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020C_a_i_flonum_abs"));
lf[365]=C_h_intern(&lf[365],21, C_text("chicken.flonum#fpsqrt"));
lf[366]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_a_i_flonum_sqrt"));
lf[367]=C_h_intern(&lf[367],20, C_text("chicken.flonum#fplog"));
lf[368]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020C_a_i_flonum_log"));
lf[369]=C_h_intern(&lf[369],21, C_text("chicken.flonum#fpexpt"));
lf[370]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_a_i_flonum_expt"));
lf[371]=C_h_intern(&lf[371],20, C_text("chicken.flonum#fpexp"));
lf[372]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020C_a_i_flonum_exp"));
lf[373]=C_h_intern(&lf[373],22, C_text("chicken.flonum#fpatan2"));
lf[374]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022C_a_i_flonum_atan2"));
lf[375]=C_h_intern(&lf[375],21, C_text("chicken.flonum#fpatan"));
lf[376]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_a_i_flonum_atan"));
lf[377]=C_h_intern(&lf[377],21, C_text("chicken.flonum#fpacos"));
lf[378]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_a_i_flonum_acos"));
lf[379]=C_h_intern(&lf[379],21, C_text("chicken.flonum#fpasin"));
lf[380]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_a_i_flonum_asin"));
lf[381]=C_h_intern(&lf[381],20, C_text("chicken.flonum#fptan"));
lf[382]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020C_a_i_flonum_tan"));
lf[383]=C_h_intern(&lf[383],20, C_text("chicken.flonum#fpcos"));
lf[384]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020C_a_i_flonum_cos"));
lf[385]=C_h_intern(&lf[385],20, C_text("chicken.flonum#fpsin"));
lf[386]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020C_a_i_flonum_sin"));
lf[387]=C_h_intern(&lf[387],15, C_text("scheme#truncate"));
lf[388]=C_h_intern(&lf[388],6, C_text("flonum"));
lf[389]=C_h_intern(&lf[389],14, C_text("scheme#ceiling"));
lf[390]=C_h_intern(&lf[390],12, C_text("scheme#floor"));
lf[391]=C_h_intern(&lf[391],22, C_text("chicken.flonum#fpfloor"));
lf[392]=C_h_intern(&lf[392],22, C_text("chicken.fixnum#fxeven\077"));
lf[393]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017C_i_fixnumevenp"));
lf[394]=C_h_intern(&lf[394],21, C_text("chicken.fixnum#fxodd\077"));
lf[395]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_i_fixnumoddp"));
lf[396]=C_h_intern(&lf[396],11, C_text("scheme#odd\077"));
lf[397]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010C_i_oddp"));
lf[398]=C_h_intern(&lf[398],12, C_text("scheme#even\077"));
lf[399]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011C_i_evenp"));
lf[400]=C_h_intern(&lf[400],16, C_text("scheme#remainder"));
lf[401]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017C_fixnum_modulo"));
lf[402]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017C_fixnum_modulo"));
lf[403]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_i_fixnumoddp"));
lf[404]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_i_fixnumoddp"));
lf[405]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017C_i_fixnumevenp"));
lf[406]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017C_i_fixnumevenp"));
lf[407]=C_h_intern(&lf[407],17, C_text("##sys#make-symbol"));
lf[408]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015C_make_symbol"));
lf[409]=C_h_intern(&lf[409],19, C_text("##sys#intern-symbol"));
lf[410]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022C_string_to_symbol"));
lf[411]=C_h_intern(&lf[411],20, C_text("##sys#context-switch"));
lf[412]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020C_context_switch"));
lf[413]=C_h_intern(&lf[413],31, C_text("chicken.platform#return-to-host"));
lf[414]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020C_return_to_host"));
lf[415]=C_h_intern(&lf[415],25, C_text("##sys#ensure-heap-reserve"));
lf[416]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025C_ensure_heap_reserve"));
lf[417]=C_h_intern(&lf[417],21, C_text("##sys#allocate-vector"));
lf[418]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_allocate_vector"));
lf[419]=C_h_intern(&lf[419],36, C_text("##sys#call-with-current-continuation"));
lf[420]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011C_call_cc"));
lf[421]=C_h_intern(&lf[421],21, C_text("scheme#number->string"));
lf[422]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\377\001\000\000\000\001\376\377\001\000\000\000\002"));
lf[423]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022C_number_to_string"));
lf[424]=C_h_intern(&lf[424],8, C_text("scheme#-"));
lf[425]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\377\001\000\000\000\001\376\377\006\000"));
lf[426]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007C_minus"));
lf[427]=C_h_intern(&lf[427],8, C_text("scheme#+"));
lf[428]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006C_plus"));
lf[429]=C_h_intern(&lf[429],8, C_text("scheme#\052"));
lf[430]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007C_times"));
lf[431]=C_h_intern(&lf[431],9, C_text("scheme#<="));
lf[432]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_less_or_equal_p"));
lf[433]=C_h_intern(&lf[433],9, C_text("scheme#>="));
lf[434]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024C_greater_or_equal_p"));
lf[435]=C_h_intern(&lf[435],8, C_text("scheme#<"));
lf[436]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007C_lessp"));
lf[437]=C_h_intern(&lf[437],8, C_text("scheme#>"));
lf[438]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012C_greaterp"));
lf[439]=C_h_intern(&lf[439],8, C_text("scheme#="));
lf[440]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011C_nequalp"));
lf[441]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022C_i_less_or_equalp"));
lf[442]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025C_i_greater_or_equalp"));
lf[443]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011C_i_lessp"));
lf[444]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_i_greaterp"));
lf[445]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013C_i_nequalp"));
lf[446]=C_h_intern(&lf[446],13, C_text("scheme#modulo"));
lf[447]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_s_a_i_modulo"));
lf[448]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_s_a_i_remainder"));
lf[449]=C_h_intern(&lf[449],15, C_text("scheme#quotient"));
lf[450]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020C_s_a_i_quotient"));
lf[451]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015C_s_a_i_times"));
lf[452]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015C_s_a_i_minus"));
lf[453]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_s_a_i_plus"));
lf[454]=C_h_intern(&lf[454],8, C_text("scheme#/"));
lf[455]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\024C_fixnum_shift_right\376\377\016"));
lf[456]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\017C_fixnum_divide\376\377\016"));
lf[457]=C_h_intern(&lf[457],9, C_text("##sys#/-2"));
lf[458]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\021C_u_fixnum_negate\376\377\016"));
lf[459]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\017C_fixnum_negate\376\377\016"));
lf[460]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\025C_u_fixnum_difference\376\377\016"));
lf[461]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\023C_fixnum_difference\376\377\016"));
lf[462]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\017C_u_fixnum_plus\376\377\016"));
lf[463]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\015C_fixnum_plus\376\377\016"));
lf[464]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\017C_u_fixnum_plus\376\377\016"));
lf[465]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\015C_fixnum_plus\376\377\016"));
lf[466]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\023C_fixnum_shift_left\376\377\016"));
lf[467]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\016C_fixnum_times\376\377\016"));
lf[468]=C_h_intern(&lf[468],10, C_text("scheme#lcm"));
lf[469]=C_h_intern(&lf[469],10, C_text("scheme#gcd"));
lf[470]=C_h_intern(&lf[470],21, C_text("chicken.base#identity"));
lf[471]=C_h_intern(&lf[471],9, C_text("##sys#lcm"));
lf[472]=C_h_intern(&lf[472],9, C_text("##sys#gcd"));
lf[473]=C_h_intern(&lf[473],18, C_text("scheme#vector-set!"));
lf[474]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_i_vector_set"));
lf[475]=C_h_intern(&lf[475],19, C_text("scheme#list->string"));
lf[476]=C_h_intern(&lf[476],18, C_text("##sys#list->string"));
lf[477]=C_h_intern(&lf[477],19, C_text("scheme#string->list"));
lf[478]=C_h_intern(&lf[478],18, C_text("##sys#string->list"));
lf[479]=C_h_intern(&lf[479],20, C_text("scheme#string-append"));
lf[480]=C_h_intern(&lf[480],19, C_text("##sys#string-append"));
lf[481]=C_h_intern(&lf[481],16, C_text("scheme#substring"));
lf[482]=C_h_intern(&lf[482],15, C_text("##sys#substring"));
lf[483]=C_h_intern(&lf[483],50, C_text("chicken.memory.representation#make-record-instance"));
lf[484]=C_h_intern(&lf[484],16, C_text("##sys#block-set!"));
lf[485]=C_h_intern(&lf[485],40, C_text("chicken.memory.representation#block-set!"));
lf[486]=C_h_intern(&lf[486],10, C_text("scheme#map"));
lf[487]=C_h_intern(&lf[487],9, C_text("##sys#map"));
lf[488]=C_h_intern(&lf[488],15, C_text("scheme#for-each"));
lf[489]=C_h_intern(&lf[489],14, C_text("##sys#for-each"));
lf[490]=C_h_intern(&lf[490],6, C_text("setter"));
lf[491]=C_decode_literal(C_heaptop,C_text("\376B\000\000\030C_fixnum_less_or_equal_p"));
lf[492]=C_decode_literal(C_heaptop,C_text("\376B\000\000\030C_flonum_less_or_equal_p"));
lf[493]=C_decode_literal(C_heaptop,C_text("\376B\000\000\033C_fixnum_greater_or_equal_p"));
lf[494]=C_decode_literal(C_heaptop,C_text("\376B\000\000\033C_flonum_greater_or_equal_p"));
lf[495]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_fixnum_lessp"));
lf[496]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_flonum_lessp"));
lf[497]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_fixnum_greaterp"));
lf[498]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_flonum_greaterp"));
lf[499]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005C_eqp"));
lf[500]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012C_i_equalp"));
lf[501]=C_h_intern(&lf[501],16, C_text("##sys#check-char"));
lf[502]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020C_i_check_char_2"));
lf[503]=C_h_intern(&lf[503],21, C_text("##sys#check-structure"));
lf[504]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025C_i_check_structure_2"));
lf[505]=C_h_intern(&lf[505],18, C_text("##sys#check-vector"));
lf[506]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022C_i_check_vector_2"));
lf[507]=C_h_intern(&lf[507],23, C_text("##sys#check-byte-vector"));
lf[508]=C_decode_literal(C_heaptop,C_text("\376B\000\000\026C_i_check_bytevector_2"));
lf[509]=C_h_intern(&lf[509],18, C_text("##sys#check-string"));
lf[510]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022C_i_check_string_2"));
lf[511]=C_h_intern(&lf[511],18, C_text("##sys#check-symbol"));
lf[512]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022C_i_check_symbol_2"));
lf[513]=C_h_intern(&lf[513],20, C_text("##sys#check-locative"));
lf[514]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024C_i_check_locative_2"));
lf[515]=C_h_intern(&lf[515],19, C_text("##sys#check-boolean"));
lf[516]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023C_i_check_boolean_2"));
lf[517]=C_h_intern(&lf[517],16, C_text("##sys#check-pair"));
lf[518]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020C_i_check_pair_2"));
lf[519]=C_h_intern(&lf[519],16, C_text("##sys#check-list"));
lf[520]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020C_i_check_list_2"));
lf[521]=C_h_intern(&lf[521],18, C_text("##sys#check-number"));
lf[522]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022C_i_check_number_2"));
lf[523]=C_h_intern(&lf[523],18, C_text("##sys#check-fixnum"));
lf[524]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022C_i_check_fixnum_2"));
lf[525]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_i_check_char"));
lf[526]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023C_i_check_structure"));
lf[527]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020C_i_check_vector"));
lf[528]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024C_i_check_bytevector"));
lf[529]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020C_i_check_string"));
lf[530]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020C_i_check_symbol"));
lf[531]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022C_i_check_locative"));
lf[532]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_i_check_boolean"));
lf[533]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_i_check_pair"));
lf[534]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_i_check_list"));
lf[535]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020C_i_check_number"));
lf[536]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020C_i_check_fixnum"));
lf[537]=C_h_intern(&lf[537],20, C_text("scheme#string-length"));
lf[538]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_i_string_length"));
lf[539]=C_h_intern(&lf[539],19, C_text("##sys#vector-length"));
lf[540]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_i_vector_length"));
lf[541]=C_h_intern(&lf[541],20, C_text("scheme#vector-length"));
lf[542]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_i_vector_length"));
lf[543]=C_h_intern(&lf[543],20, C_text("scheme#integer->char"));
lf[544]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020C_make_character"));
lf[545]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007C_unfix"));
lf[546]=C_h_intern(&lf[546],20, C_text("scheme#char->integer"));
lf[547]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005C_fix"));
lf[548]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020C_character_code"));
lf[549]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005C_fix"));
lf[550]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015C_header_size"));
lf[551]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005C_fix"));
lf[552]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015C_header_size"));
lf[553]=C_h_intern(&lf[553],16, C_text("scheme#negative\077"));
lf[554]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015C_i_negativep"));
lf[555]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_flonum_lessp"));
lf[556]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_fixnum_lessp"));
lf[557]=C_h_intern(&lf[557],16, C_text("scheme#positive\077"));
lf[558]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015C_i_positivep"));
lf[559]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_flonum_greaterp"));
lf[560]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_fixnum_greaterp"));
lf[561]=C_h_intern(&lf[561],12, C_text("scheme#zero\077"));
lf[562]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011C_i_zerop"));
lf[563]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_u_i_zerop2"));
lf[564]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005C_eqp"));
lf[565]=C_h_intern(&lf[565],20, C_text("chicken.flonum#fpgcd"));
lf[566]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020C_a_i_flonum_gcd"));
lf[567]=C_h_intern(&lf[567],20, C_text("chicken.flonum#fpneg"));
lf[568]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023C_a_i_flonum_negate"));
lf[569]=C_h_intern(&lf[569],19, C_text("chicken.flonum#fp/\077"));
lf[570]=C_decode_literal(C_heaptop,C_text("\376B\000\000\035C_a_i_flonum_quotient_checked"));
lf[571]=C_h_intern(&lf[571],18, C_text("chicken.flonum#fp/"));
lf[572]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025C_a_i_flonum_quotient"));
lf[573]=C_h_intern(&lf[573],18, C_text("chicken.flonum#fp\052"));
lf[574]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022C_a_i_flonum_times"));
lf[575]=C_h_intern(&lf[575],18, C_text("chicken.flonum#fp-"));
lf[576]=C_decode_literal(C_heaptop,C_text("\376B\000\000\027C_a_i_flonum_difference"));
lf[577]=C_h_intern(&lf[577],18, C_text("chicken.flonum#fp+"));
lf[578]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_a_i_flonum_plus"));
lf[579]=C_h_intern(&lf[579],27, C_text("chicken.bitwise#bitwise-not"));
lf[580]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023C_s_a_i_bitwise_not"));
lf[581]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_fixnum_not"));
lf[582]=C_h_intern(&lf[582],27, C_text("chicken.bitwise#bitwise-ior"));
lf[583]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013C_fixnum_or"));
lf[584]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015C_u_fixnum_or"));
lf[585]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023C_s_a_i_bitwise_ior"));
lf[586]=C_h_intern(&lf[586],27, C_text("chicken.bitwise#bitwise-xor"));
lf[587]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_fixnum_xor"));
lf[588]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_fixnum_xor"));
lf[589]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023C_s_a_i_bitwise_xor"));
lf[590]=C_h_intern(&lf[590],27, C_text("chicken.bitwise#bitwise-and"));
lf[591]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_fixnum_and"));
lf[592]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_u_fixnum_and"));
lf[593]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023C_s_a_i_bitwise_and"));
lf[594]=C_h_intern(&lf[594],10, C_text("scheme#abs"));
lf[595]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_fixnum_abs"));
lf[596]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_fixnum_abs"));
lf[597]=C_h_intern(&lf[597],15, C_text("scheme#set-cdr!"));
lf[598]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013C_i_set_cdr"));
lf[599]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015C_u_i_set_cdr"));
lf[600]=C_h_intern(&lf[600],15, C_text("scheme#set-car!"));
lf[601]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013C_i_set_car"));
lf[602]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015C_u_i_set_car"));
lf[603]=C_h_intern(&lf[603],13, C_text("scheme#member"));
lf[604]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012C_i_member"));
lf[605]=C_h_intern(&lf[605],12, C_text("scheme#assoc"));
lf[606]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011C_i_assoc"));
lf[607]=C_h_intern(&lf[607],11, C_text("scheme#memq"));
lf[608]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010C_i_memq"));
lf[609]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012C_u_i_memq"));
lf[610]=C_h_intern(&lf[610],11, C_text("scheme#assq"));
lf[611]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010C_i_assq"));
lf[612]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012C_u_i_assq"));
lf[613]=C_h_intern(&lf[613],11, C_text("scheme#memv"));
lf[614]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010C_i_memv"));
lf[615]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010C_i_memq"));
lf[616]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012C_u_i_memq"));
lf[617]=C_h_intern(&lf[617],11, C_text("scheme#assv"));
lf[618]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010C_i_assv"));
lf[619]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010C_i_assq"));
lf[620]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012C_u_i_assq"));
lf[621]=C_h_intern(&lf[621],45, C_text("chicken.memory.representation#number-of-slots"));
lf[622]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_block_size"));
lf[623]=C_h_intern(&lf[623],39, C_text("chicken.memory.representation#block-ref"));
lf[624]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006C_slot"));
lf[625]=C_h_intern(&lf[625],17, C_text("##sys#bytevector\077"));
lf[626]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015C_bytevectorp"));
lf[627]=C_h_intern(&lf[627],16, C_text("##sys#structure\077"));
lf[628]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_i_structurep"));
lf[629]=C_h_intern(&lf[629],16, C_text("scheme#list-tail"));
lf[630]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015C_i_list_tail"));
lf[631]=C_h_intern(&lf[631],20, C_text("scheme#char-downcase"));
lf[632]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023C_u_i_char_downcase"));
lf[633]=C_h_intern(&lf[633],18, C_text("scheme#char-upcase"));
lf[634]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_u_i_char_upcase"));
lf[635]=C_h_intern(&lf[635],23, C_text("scheme#char-lower-case\077"));
lf[636]=C_decode_literal(C_heaptop,C_text("\376B\000\000\026C_u_i_char_lower_casep"));
lf[637]=C_h_intern(&lf[637],23, C_text("scheme#char-upper-case\077"));
lf[638]=C_decode_literal(C_heaptop,C_text("\376B\000\000\026C_u_i_char_upper_casep"));
lf[639]=C_h_intern(&lf[639],23, C_text("scheme#char-whitespace\077"));
lf[640]=C_decode_literal(C_heaptop,C_text("\376B\000\000\026C_u_i_char_whitespacep"));
lf[641]=C_h_intern(&lf[641],23, C_text("scheme#char-alphabetic\077"));
lf[642]=C_decode_literal(C_heaptop,C_text("\376B\000\000\026C_u_i_char_alphabeticp"));
lf[643]=C_h_intern(&lf[643],20, C_text("scheme#char-numeric\077"));
lf[644]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023C_u_i_char_numericp"));
lf[645]=C_h_intern(&lf[645],20, C_text("chicken.fixnum#fxlen"));
lf[646]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_i_fixnum_length"));
lf[647]=C_h_intern(&lf[647],20, C_text("chicken.fixnum#fxgcd"));
lf[648]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_i_fixnum_gcd"));
lf[649]=C_h_intern(&lf[649],20, C_text("chicken.flonum#fpmin"));
lf[650]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_i_flonum_min"));
lf[651]=C_h_intern(&lf[651],20, C_text("chicken.flonum#fpmax"));
lf[652]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_i_flonum_max"));
lf[653]=C_h_intern(&lf[653],20, C_text("chicken.fixnum#fxmin"));
lf[654]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_i_fixnum_min"));
lf[655]=C_h_intern(&lf[655],20, C_text("chicken.fixnum#fxmax"));
lf[656]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_i_fixnum_max"));
lf[657]=C_h_intern(&lf[657],19, C_text("chicken.flonum#fp<="));
lf[658]=C_decode_literal(C_heaptop,C_text("\376B\000\000\030C_flonum_less_or_equal_p"));
lf[659]=C_h_intern(&lf[659],19, C_text("chicken.flonum#fp>="));
lf[660]=C_decode_literal(C_heaptop,C_text("\376B\000\000\033C_flonum_greater_or_equal_p"));
lf[661]=C_h_intern(&lf[661],18, C_text("chicken.flonum#fp<"));
lf[662]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_flonum_lessp"));
lf[663]=C_h_intern(&lf[663],18, C_text("chicken.flonum#fp>"));
lf[664]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_flonum_greaterp"));
lf[665]=C_h_intern(&lf[665],18, C_text("chicken.flonum#fp="));
lf[666]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017C_flonum_equalp"));
lf[667]=C_h_intern(&lf[667],19, C_text("chicken.fixnum#fx<="));
lf[668]=C_decode_literal(C_heaptop,C_text("\376B\000\000\030C_fixnum_less_or_equal_p"));
lf[669]=C_h_intern(&lf[669],19, C_text("chicken.fixnum#fx>="));
lf[670]=C_decode_literal(C_heaptop,C_text("\376B\000\000\033C_fixnum_greater_or_equal_p"));
lf[671]=C_h_intern(&lf[671],18, C_text("chicken.fixnum#fx<"));
lf[672]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_fixnum_lessp"));
lf[673]=C_h_intern(&lf[673],18, C_text("chicken.fixnum#fx>"));
lf[674]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_fixnum_greaterp"));
lf[675]=C_h_intern(&lf[675],18, C_text("chicken.fixnum#fx="));
lf[676]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005C_eqp"));
lf[677]=C_h_intern(&lf[677],19, C_text("chicken.fixnum#fx/\077"));
lf[678]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025C_i_o_fixnum_quotient"));
lf[679]=C_h_intern(&lf[679],19, C_text("chicken.fixnum#fx\052\077"));
lf[680]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022C_i_o_fixnum_times"));
lf[681]=C_h_intern(&lf[681],19, C_text("chicken.fixnum#fx-\077"));
lf[682]=C_decode_literal(C_heaptop,C_text("\376B\000\000\027C_i_o_fixnum_difference"));
lf[683]=C_h_intern(&lf[683],19, C_text("chicken.fixnum#fx+\077"));
lf[684]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_i_o_fixnum_plus"));
lf[685]=C_h_intern(&lf[685],18, C_text("chicken.fixnum#fx\052"));
lf[686]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_fixnum_times"));
lf[687]=C_h_intern(&lf[687],20, C_text("chicken.fixnum#fxnot"));
lf[688]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_fixnum_not"));
lf[689]=C_h_intern(&lf[689],10, C_text("##sys#size"));
lf[690]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_block_size"));
lf[691]=C_h_intern(&lf[691],15, C_text("##sys#block-ref"));
lf[692]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015C_i_block_ref"));
lf[693]=C_h_intern(&lf[693],10, C_text("##sys#slot"));
lf[694]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006C_slot"));
lf[695]=C_h_intern(&lf[695],14, C_text("scheme#char<=\077"));
lf[696]=C_decode_literal(C_heaptop,C_text("\376B\000\000\030C_i_char_less_or_equal_p"));
lf[697]=C_decode_literal(C_heaptop,C_text("\376B\000\000\032C_u_i_char_less_or_equal_p"));
lf[698]=C_h_intern(&lf[698],14, C_text("scheme#char>=\077"));
lf[699]=C_decode_literal(C_heaptop,C_text("\376B\000\000\033C_i_char_greater_or_equal_p"));
lf[700]=C_decode_literal(C_heaptop,C_text("\376B\000\000\035C_u_i_char_greater_or_equal_p"));
lf[701]=C_h_intern(&lf[701],13, C_text("scheme#char<\077"));
lf[702]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_i_char_lessp"));
lf[703]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020C_u_i_char_lessp"));
lf[704]=C_h_intern(&lf[704],13, C_text("scheme#char>\077"));
lf[705]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_i_char_greaterp"));
lf[706]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023C_u_i_char_greaterp"));
lf[707]=C_h_intern(&lf[707],13, C_text("scheme#char=\077"));
lf[708]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017C_i_char_equalp"));
lf[709]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_u_i_char_equalp"));
lf[710]=C_h_intern(&lf[710],17, C_text("scheme#vector-ref"));
lf[711]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_i_vector_ref"));
lf[712]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006C_slot"));
lf[713]=C_h_intern(&lf[713],18, C_text("scheme#string-set!"));
lf[714]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_i_string_set"));
lf[715]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_setsubchar"));
lf[716]=C_h_intern(&lf[716],17, C_text("scheme#string-ref"));
lf[717]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_i_string_ref"));
lf[718]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011C_subchar"));
lf[719]=C_h_intern(&lf[719],18, C_text("scheme#eof-object\077"));
lf[720]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006C_eofp"));
lf[721]=C_h_intern(&lf[721],12, C_text("scheme#list\077"));
lf[722]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011C_i_listp"));
lf[723]=C_h_intern(&lf[723],15, C_text("scheme#inexact\077"));
lf[724]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_u_i_inexactp"));
lf[725]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_i_inexactp"));
lf[726]=C_h_intern(&lf[726],13, C_text("scheme#exact\077"));
lf[727]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_u_i_exactp"));
lf[728]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012C_i_exactp"));
lf[729]=C_h_intern(&lf[729],24, C_text("##sys#generic-structure\077"));
lf[730]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_structurep"));
lf[731]=C_h_intern(&lf[731],8, C_text("pointer\077"));
lf[732]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_i_safe_pointerp"));
lf[733]=C_h_intern(&lf[733],14, C_text("##sys#pointer\077"));
lf[734]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015C_anypointerp"));
lf[735]=C_h_intern(&lf[735],25, C_text("chicken.flonum#fpinteger\077"));
lf[736]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020C_u_i_fpintegerp"));
lf[737]=C_h_intern(&lf[737],22, C_text("chicken.base#infinite\077"));
lf[738]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015C_i_infinitep"));
lf[739]=C_h_intern(&lf[739],20, C_text("chicken.base#finite\077"));
lf[740]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013C_i_finitep"));
lf[741]=C_h_intern(&lf[741],17, C_text("chicken.base#nan\077"));
lf[742]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010C_i_nanp"));
lf[743]=C_h_intern(&lf[743],20, C_text("chicken.base#ratnum\077"));
lf[744]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013C_i_ratnump"));
lf[745]=C_h_intern(&lf[745],21, C_text("chicken.base#cplxnum\077"));
lf[746]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_i_cplxnump"));
lf[747]=C_h_intern(&lf[747],20, C_text("chicken.base#bignum\077"));
lf[748]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013C_i_bignump"));
lf[749]=C_h_intern(&lf[749],20, C_text("chicken.base#fixnum\077"));
lf[750]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011C_fixnump"));
lf[751]=C_h_intern(&lf[751],20, C_text("chicken.base#flonum\077"));
lf[752]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013C_i_flonump"));
lf[753]=C_h_intern(&lf[753],27, C_text("chicken.base#exact-integer\077"));
lf[754]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022C_i_exact_integerp"));
lf[755]=C_h_intern(&lf[755],15, C_text("scheme#integer\077"));
lf[756]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_i_integerp"));
lf[757]=C_h_intern(&lf[757],12, C_text("scheme#real\077"));
lf[758]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011C_i_realp"));
lf[759]=C_h_intern(&lf[759],16, C_text("scheme#rational\077"));
lf[760]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015C_i_rationalp"));
lf[761]=C_h_intern(&lf[761],15, C_text("scheme#complex\077"));
lf[762]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013C_i_numberp"));
lf[763]=C_h_intern(&lf[763],14, C_text("scheme#number\077"));
lf[764]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013C_i_numberp"));
lf[765]=C_h_intern(&lf[765],15, C_text("scheme#boolean\077"));
lf[766]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012C_booleanp"));
lf[767]=C_h_intern(&lf[767],18, C_text("chicken.base#port\077"));
lf[768]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011C_i_portp"));
lf[769]=C_h_intern(&lf[769],17, C_text("scheme#procedure\077"));
lf[770]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_i_closurep"));
lf[771]=C_h_intern(&lf[771],11, C_text("##sys#pair\077"));
lf[772]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011C_i_pairp"));
lf[773]=C_h_intern(&lf[773],12, C_text("scheme#pair\077"));
lf[774]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011C_i_pairp"));
lf[775]=C_h_intern(&lf[775],17, C_text("srfi-4#f64vector\077"));
lf[776]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_i_f64vectorp"));
lf[777]=C_h_intern(&lf[777],17, C_text("srfi-4#f32vector\077"));
lf[778]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_i_f32vectorp"));
lf[779]=C_h_intern(&lf[779],17, C_text("srfi-4#s64vector\077"));
lf[780]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_i_s64vectorp"));
lf[781]=C_h_intern(&lf[781],17, C_text("srfi-4#u64vector\077"));
lf[782]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_i_u64vectorp"));
lf[783]=C_h_intern(&lf[783],17, C_text("srfi-4#s32vector\077"));
lf[784]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_i_s32vectorp"));
lf[785]=C_h_intern(&lf[785],17, C_text("srfi-4#u32vector\077"));
lf[786]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_i_u32vectorp"));
lf[787]=C_h_intern(&lf[787],17, C_text("srfi-4#s16vector\077"));
lf[788]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_i_s16vectorp"));
lf[789]=C_h_intern(&lf[789],17, C_text("srfi-4#u16vector\077"));
lf[790]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_i_u16vectorp"));
lf[791]=C_h_intern(&lf[791],16, C_text("srfi-4#s8vector\077"));
lf[792]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015C_i_s8vectorp"));
lf[793]=C_h_intern(&lf[793],16, C_text("srfi-4#u8vector\077"));
lf[794]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015C_i_u8vectorp"));
lf[795]=C_h_intern(&lf[795],20, C_text("##sys#srfi-4-vector\077"));
lf[796]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022C_i_srfi_4_vectorp"));
lf[797]=C_h_intern(&lf[797],13, C_text("##sys#vector\077"));
lf[798]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013C_i_vectorp"));
lf[799]=C_h_intern(&lf[799],14, C_text("scheme#vector\077"));
lf[800]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013C_i_vectorp"));
lf[801]=C_h_intern(&lf[801],14, C_text("scheme#symbol\077"));
lf[802]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013C_i_symbolp"));
lf[803]=C_h_intern(&lf[803],26, C_text("chicken.locative#locative\077"));
lf[804]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015C_i_locativep"));
lf[805]=C_h_intern(&lf[805],14, C_text("scheme#string\077"));
lf[806]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013C_i_stringp"));
lf[807]=C_h_intern(&lf[807],12, C_text("scheme#char\077"));
lf[808]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007C_charp"));
lf[809]=C_h_intern(&lf[809],10, C_text("scheme#not"));
lf[810]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007C_i_not"));
lf[811]=C_h_intern(&lf[811],13, C_text("scheme#length"));
lf[812]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012C_i_length"));
lf[813]=C_h_intern(&lf[813],11, C_text("##sys#null\077"));
lf[814]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011C_i_nullp"));
lf[815]=C_h_intern(&lf[815],12, C_text("scheme#null\077"));
lf[816]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011C_i_nullp"));
lf[817]=C_h_intern(&lf[817],15, C_text("scheme#list-ref"));
lf[818]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_i_list_ref"));
lf[819]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016C_u_i_list_ref"));
lf[820]=C_h_intern(&lf[820],10, C_text("##sys#eqv\077"));
lf[821]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010C_i_eqvp"));
lf[822]=C_h_intern(&lf[822],11, C_text("scheme#eqv\077"));
lf[823]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010C_i_eqvp"));
lf[824]=C_h_intern(&lf[824],9, C_text("##sys#eq\077"));
lf[825]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005C_eqp"));
lf[826]=C_h_intern(&lf[826],10, C_text("scheme#eq\077"));
lf[827]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005C_eqp"));
lf[828]=C_h_intern(&lf[828],10, C_text("scheme#cdr"));
lf[829]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007C_i_cdr"));
lf[830]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011C_u_i_cdr"));
lf[831]=C_h_intern(&lf[831],13, C_text("scheme#cddddr"));
lf[832]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012C_i_cddddr"));
lf[833]=C_h_intern(&lf[833],12, C_text("scheme#cdddr"));
lf[834]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011C_i_cdddr"));
lf[835]=C_h_intern(&lf[835],11, C_text("scheme#cddr"));
lf[836]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010C_i_cddr"));
lf[837]=C_h_intern(&lf[837],11, C_text("scheme#cdar"));
lf[838]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010C_i_cdar"));
lf[839]=C_h_intern(&lf[839],11, C_text("scheme#caar"));
lf[840]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010C_i_caar"));
lf[841]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_u_i_cddddr"));
lf[842]=C_h_intern(&lf[842],13, C_text("scheme#cdddar"));
lf[843]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_u_i_cdddar"));
lf[844]=C_h_intern(&lf[844],13, C_text("scheme#cddadr"));
lf[845]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_u_i_cddadr"));
lf[846]=C_h_intern(&lf[846],13, C_text("scheme#cddaar"));
lf[847]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_u_i_cddaar"));
lf[848]=C_h_intern(&lf[848],13, C_text("scheme#cdaddr"));
lf[849]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_u_i_cdaddr"));
lf[850]=C_h_intern(&lf[850],13, C_text("scheme#cdadar"));
lf[851]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_u_i_cdadar"));
lf[852]=C_h_intern(&lf[852],13, C_text("scheme#cdaadr"));
lf[853]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_u_i_cdaadr"));
lf[854]=C_h_intern(&lf[854],13, C_text("scheme#cdaaar"));
lf[855]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_u_i_cdaaar"));
lf[856]=C_h_intern(&lf[856],13, C_text("scheme#cadddr"));
lf[857]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_u_i_cadddr"));
lf[858]=C_h_intern(&lf[858],13, C_text("scheme#caddar"));
lf[859]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_u_i_caddar"));
lf[860]=C_h_intern(&lf[860],13, C_text("scheme#cadadr"));
lf[861]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_u_i_cadadr"));
lf[862]=C_h_intern(&lf[862],13, C_text("scheme#cadaar"));
lf[863]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_u_i_cadaar"));
lf[864]=C_h_intern(&lf[864],13, C_text("scheme#caaddr"));
lf[865]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_u_i_caaddr"));
lf[866]=C_h_intern(&lf[866],13, C_text("scheme#caadar"));
lf[867]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_u_i_caadar"));
lf[868]=C_h_intern(&lf[868],13, C_text("scheme#caaaar"));
lf[869]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_u_i_caaaar"));
lf[870]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013C_u_i_cdddr"));
lf[871]=C_h_intern(&lf[871],12, C_text("scheme#cddar"));
lf[872]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013C_u_i_cddar"));
lf[873]=C_h_intern(&lf[873],12, C_text("scheme#cdadr"));
lf[874]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013C_u_i_cdadr"));
lf[875]=C_h_intern(&lf[875],12, C_text("scheme#cdaar"));
lf[876]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013C_u_i_cdaar"));
lf[877]=C_h_intern(&lf[877],12, C_text("scheme#caddr"));
lf[878]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013C_u_i_caddr"));
lf[879]=C_h_intern(&lf[879],12, C_text("scheme#cadar"));
lf[880]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013C_u_i_cadar"));
lf[881]=C_h_intern(&lf[881],12, C_text("scheme#caaar"));
lf[882]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013C_u_i_caaar"));
lf[883]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012C_u_i_cddr"));
lf[884]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012C_u_i_cdar"));
lf[885]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012C_u_i_caar"));
lf[886]=C_h_intern(&lf[886],39, C_text("chicken.continuation#continuation-graft"));
lf[887]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024C_continuation_graft"));
lf[888]=C_h_intern(&lf[888],22, C_text("##sys#call-with-values"));
lf[889]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022C_call_with_values"));
lf[890]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024C_u_call_with_values"));
lf[891]=C_h_intern(&lf[891],23, C_text("scheme#call-with-values"));
lf[892]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022C_call_with_values"));
lf[893]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024C_u_call_with_values"));
lf[894]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010C_values"));
lf[895]=C_h_intern(&lf[895],13, C_text("scheme#values"));
lf[896]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010C_values"));
lf[897]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012C_i_cadddr"));
lf[898]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_u_i_cadddr"));
lf[899]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011C_i_caddr"));
lf[900]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013C_u_i_caddr"));
lf[901]=C_h_intern(&lf[901],11, C_text("scheme#cadr"));
lf[902]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010C_i_cadr"));
lf[903]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012C_u_i_cadr"));
lf[904]=C_h_intern(&lf[904],9, C_text("##sys#cdr"));
lf[905]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007C_i_cdr"));
lf[906]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011C_u_i_cdr"));
lf[907]=C_h_intern(&lf[907],9, C_text("##sys#car"));
lf[908]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007C_i_car"));
lf[909]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011C_u_i_car"));
lf[910]=C_h_intern(&lf[910],10, C_text("scheme#car"));
lf[911]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007C_i_car"));
lf[912]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011C_u_i_car"));
lf[913]=C_h_intern(&lf[913],11, C_text("##sys#apply"));
lf[914]=C_h_intern(&lf[914],12, C_text("scheme#apply"));
lf[915]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\012C_i_equalp\376\377\016"));
lf[916]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\005C_eqp\376\377\016"));
lf[917]=C_h_intern(&lf[917],13, C_text("scheme#equal\077"));
lf[918]=C_h_intern(&lf[918],17, C_text("chicken.base#sub1"));
lf[919]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_fixnum_decrease"));
lf[920]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023C_u_fixnum_decrease"));
lf[921]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015C_s_a_i_minus"));
lf[922]=C_h_intern(&lf[922],17, C_text("chicken.base#add1"));
lf[923]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021C_fixnum_increase"));
lf[924]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023C_u_fixnum_increase"));
lf[925]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014C_s_a_i_plus"));
lf[926]=C_h_intern(&lf[926],38, C_text("chicken.compiler.support#mark-variable"));
lf[927]=C_h_intern(&lf[927],15, C_text("##compiler#pure"));
lf[928]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\012\001##sys#slot\376\003\000\000\002\376\001\000\000\017\001##sys#block-ref\376\003\000\000\002\376\001\000\000\012\001##sys#size\376\003\000\000\002\376\001\000\000\012\001#"
"#sys#byte\376\003\000\000\002\376\001\000\000\016\001##sys#pointer\077\376\003\000\000\002\376\001\000\000\030\001##sys#generic-structure\077\376\003\000\000\002\376\001\000\000\020\001"
"##sys#immediate\077\376\003\000\000\002\376\001\000\000\021\001##sys#bytevector\077\376\003\000\000\002\376\001\000\000\013\001##sys#pair\077\376\003\000\000\002\376\001\000\000\011\001##s"
"ys#eq\077\376\003\000\000\002\376\001\000\000\013\001##sys#list\077\376\003\000\000\002\376\001\000\000\015\001##sys#vector\077\376\003\000\000\002\376\001\000\000\012\001##sys#eqv\077\376\003\000\000\002\376\001"
"\000\000\021\001##sys#get-keyword\376\003\000\000\002\376\001\000\000\012\001##sys#void\376\003\000\000\002\376\001\000\000\020\001##sys#permanent\077\376\377\016"));
lf[929]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\022\001chicken.fixnum#fx\052\376\003\000\000\002\376\001\000\000\023\001chicken.fixnum#fx\052\077\376\003\000\000\002\376\001\000\000\022\001chicken.fi"
"xnum#fx+\376\003\000\000\002\376\001\000\000\023\001chicken.fixnum#fx+\077\376\003\000\000\002\376\001\000\000\022\001chicken.fixnum#fx-\376\003\000\000\002\376\001\000\000\023\001ch"
"icken.fixnum#fx-\077\376\003\000\000\002\376\001\000\000\022\001chicken.fixnum#fx/\376\003\000\000\002\376\001\000\000\023\001chicken.fixnum#fx/\077\376\003\000\000"
"\002\376\001\000\000\022\001chicken.fixnum#fx<\376\003\000\000\002\376\001\000\000\023\001chicken.fixnum#fx<=\376\003\000\000\002\376\001\000\000\022\001chicken.fixnum"
"#fx=\376\003\000\000\002\376\001\000\000\022\001chicken.fixnum#fx>\376\003\000\000\002\376\001\000\000\023\001chicken.fixnum#fx>=\376\003\000\000\002\376\001\000\000\024\001chicke"
"n.fixnum#fxand\376\003\000\000\002\376\001\000\000\026\001chicken.fixnum#fxeven\077\376\003\000\000\002\376\001\000\000\024\001chicken.fixnum#fxgcd\376\003"
"\000\000\002\376\001\000\000\024\001chicken.fixnum#fxior\376\003\000\000\002\376\001\000\000\024\001chicken.fixnum#fxlen\376\003\000\000\002\376\001\000\000\024\001chicken.f"
"ixnum#fxmax\376\003\000\000\002\376\001\000\000\024\001chicken.fixnum#fxmin\376\003\000\000\002\376\001\000\000\024\001chicken.fixnum#fxmod\376\003\000\000\002\376\001"
"\000\000\024\001chicken.fixnum#fxneg\376\003\000\000\002\376\001\000\000\024\001chicken.fixnum#fxnot\376\003\000\000\002\376\001\000\000\025\001chicken.fixnum"
"#fxodd\077\376\003\000\000\002\376\001\000\000\024\001chicken.fixnum#fxrem\376\003\000\000\002\376\001\000\000\024\001chicken.fixnum#fxshl\376\003\000\000\002\376\001\000\000\024\001"
"chicken.fixnum#fxshr\376\003\000\000\002\376\001\000\000\024\001chicken.fixnum#fxxor\376\377\016"));
lf[930]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\023\001chicken.flonum#fp/\077\376\003\000\000\002\376\001\000\000\022\001chicken.flonum#fp+\376\003\000\000\002\376\001\000\000\022\001chicken.fl"
"onum#fp-\376\003\000\000\002\376\001\000\000\022\001chicken.flonum#fp\052\376\003\000\000\002\376\001\000\000\022\001chicken.flonum#fp/\376\003\000\000\002\376\001\000\000\022\001chi"
"cken.flonum#fp>\376\003\000\000\002\376\001\000\000\022\001chicken.flonum#fp<\376\003\000\000\002\376\001\000\000\022\001chicken.flonum#fp=\376\003\000\000\002\376\001"
"\000\000\023\001chicken.flonum#fp>=\376\003\000\000\002\376\001\000\000\023\001chicken.flonum#fp<=\376\003\000\000\002\376\001\000\000\024\001chicken.flonum#f"
"pmin\376\003\000\000\002\376\001\000\000\024\001chicken.flonum#fpmax\376\003\000\000\002\376\001\000\000\024\001chicken.flonum#fpneg\376\003\000\000\002\376\001\000\000\024\001chi"
"cken.flonum#fpgcd\376\003\000\000\002\376\001\000\000\026\001chicken.flonum#fpfloor\376\003\000\000\002\376\001\000\000\030\001chicken.flonum#fpce"
"iling\376\003\000\000\002\376\001\000\000\031\001chicken.flonum#fptruncate\376\003\000\000\002\376\001\000\000\026\001chicken.flonum#fpround\376\003\000\000\002\376"
"\001\000\000\024\001chicken.flonum#fpsin\376\003\000\000\002\376\001\000\000\024\001chicken.flonum#fpcos\376\003\000\000\002\376\001\000\000\024\001chicken.flonu"
"m#fptan\376\003\000\000\002\376\001\000\000\025\001chicken.flonum#fpasin\376\003\000\000\002\376\001\000\000\025\001chicken.flonum#fpacos\376\003\000\000\002\376\001\000\000"
"\025\001chicken.flonum#fpatan\376\003\000\000\002\376\001\000\000\026\001chicken.flonum#fpatan2\376\003\000\000\002\376\001\000\000\024\001chicken.flonu"
"m#fpexp\376\003\000\000\002\376\001\000\000\025\001chicken.flonum#fpexpt\376\003\000\000\002\376\001\000\000\024\001chicken.flonum#fplog\376\003\000\000\002\376\001\000\000\025"
"\001chicken.flonum#fpsqrt\376\003\000\000\002\376\001\000\000\024\001chicken.flonum#fpabs\376\003\000\000\002\376\001\000\000\031\001chicken.flonum#f"
"pinteger\077\376\377\016"));
lf[931]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\024\001chicken.base#bignum\077\376\003\000\000\002\376\001\000\000\025\001chicken.base#cplxnum\077\376\003\000\000\002\376\001\000\000\024\001chicke"
"n.base#fixnum\077\376\003\000\000\002\376\001\000\000\024\001chicken.base#flonum\077\376\003\000\000\002\376\001\000\000\024\001chicken.base#ratnum\077\376\003\000\000"
"\002\376\001\000\000\021\001chicken.base#add1\376\003\000\000\002\376\001\000\000\021\001chicken.base#sub1\376\003\000\000\002\376\001\000\000\021\001chicken.base#nan\077"
"\376\003\000\000\002\376\001\000\000\024\001chicken.base#finite\077\376\003\000\000\002\376\001\000\000\026\001chicken.base#infinite\077\376\003\000\000\002\376\001\000\000\023\001chick"
"en.base#gensym\376\003\000\000\002\376\001\000\000\021\001chicken.base#void\376\003\000\000\002\376\001\000\000\022\001chicken.base#print\376\003\000\000\002\376\001\000\000"
"\023\001chicken.base#print\052\376\003\000\000\002\376\001\000\000\022\001chicken.base#error\376\003\000\000\002\376\001\000\000\024\001chicken.base#call/c"
"c\376\003\000\000\002\376\001\000\000\026\001chicken.base#char-name\376\003\000\000\002\376\001\000\000\037\001chicken.base#current-error-port\376\003\000\000"
"\002\376\001\000\000\032\001chicken.base#symbol-append\376\003\000\000\002\376\001\000\000\022\001chicken.base#foldl\376\003\000\000\002\376\001\000\000\022\001chicken"
".base#foldr\376\003\000\000\002\376\001\000\000\023\001chicken.base#setter\376\003\000\000\002\376\001\000\000\037\001chicken.base#getter-with-set"
"ter\376\003\000\000\002\376\001\000\000\024\001chicken.base#equal=\077\376\003\000\000\002\376\001\000\000\033\001chicken.base#exact-integer\077\376\003\000\000\002\376\001\000"
"\000\031\001chicken.base#flush-output\376\003\000\000\002\376\001\000\000\025\001chicken.base#identity\376\003\000\000\002\376\001\000\000\016\001chicken.b"
"ase#o\376\003\000\000\002\376\001\000\000\022\001chicken.base#atom\077\376\003\000\000\002\376\001\000\000\026\001chicken.base#alist-ref\376\003\000\000\002\376\001\000\000\023\001ch"
"icken.base#rassoc\376\003\000\000\002\376\001\000\000\036\001chicken.bitwise#integer-length\376\003\000\000\002\376\001\000\000\033\001chicken.bit"
"wise#bitwise-and\376\003\000\000\002\376\001\000\000\033\001chicken.bitwise#bitwise-not\376\003\000\000\002\376\001\000\000\033\001chicken.bitwise"
"#bitwise-ior\376\003\000\000\002\376\001\000\000\033\001chicken.bitwise#bitwise-xor\376\003\000\000\002\376\001\000\000 \001chicken.bitwise#ari"
"thmetic-shift\376\003\000\000\002\376\001\000\000\034\001chicken.bitwise#bit->boolean\376\003\000\000\002\376\001\000\000\026\001chicken.blob#blob"
"-size\376\003\000\000\002\376\001\000\000\023\001chicken.blob#blob=\077\376\003\000\000\002\376\001\000\000\033\001chicken.keyword#get-keyword\376\003\000\000\002\376\001"
"\000\000\020\001srfi-4#u8vector\077\376\003\000\000\002\376\001\000\000\020\001srfi-4#s8vector\077\376\003\000\000\002\376\001\000\000\021\001srfi-4#u16vector\077\376\003\000\000\002"
"\376\001\000\000\021\001srfi-4#s16vector\077\376\003\000\000\002\376\001\000\000\021\001srfi-4#u32vector\077\376\003\000\000\002\376\001\000\000\021\001srfi-4#u64vector\077\376"
"\003\000\000\002\376\001\000\000\021\001srfi-4#s32vector\077\376\003\000\000\002\376\001\000\000\021\001srfi-4#s64vector\077\376\003\000\000\002\376\001\000\000\021\001srfi-4#f32vect"
"or\077\376\003\000\000\002\376\001\000\000\021\001srfi-4#f64vector\077\376\003\000\000\002\376\001\000\000\026\001srfi-4#u8vector-length\376\003\000\000\002\376\001\000\000\026\001srfi-"
"4#s8vector-length\376\003\000\000\002\376\001\000\000\027\001srfi-4#u16vector-length\376\003\000\000\002\376\001\000\000\027\001srfi-4#s16vector-l"
"ength\376\003\000\000\002\376\001\000\000\027\001srfi-4#u32vector-length\376\003\000\000\002\376\001\000\000\027\001srfi-4#u64vector-length\376\003\000\000\002\376\001"
"\000\000\027\001srfi-4#s32vector-length\376\003\000\000\002\376\001\000\000\027\001srfi-4#s64vector-length\376\003\000\000\002\376\001\000\000\027\001srfi-4#f"
"32vector-length\376\003\000\000\002\376\001\000\000\027\001srfi-4#f64vector-length\376\003\000\000\002\376\001\000\000\023\001srfi-4#u8vector-ref\376"
"\003\000\000\002\376\001\000\000\023\001srfi-4#s8vector-ref\376\003\000\000\002\376\001\000\000\024\001srfi-4#u16vector-ref\376\003\000\000\002\376\001\000\000\024\001srfi-4#s1"
"6vector-ref\376\003\000\000\002\376\001\000\000\024\001srfi-4#u32vector-ref\376\003\000\000\002\376\001\000\000\024\001srfi-4#u64vector-ref\376\003\000\000\002\376\001"
"\000\000\024\001srfi-4#s32vector-ref\376\003\000\000\002\376\001\000\000\024\001srfi-4#s64vector-ref\376\003\000\000\002\376\001\000\000\024\001srfi-4#f32vect"
"or-ref\376\003\000\000\002\376\001\000\000\024\001srfi-4#f64vector-ref\376\003\000\000\002\376\001\000\000\024\001srfi-4#u8vector-set!\376\003\000\000\002\376\001\000\000\024\001s"
"rfi-4#s8vector-set!\376\003\000\000\002\376\001\000\000\025\001srfi-4#u16vector-set!\376\003\000\000\002\376\001\000\000\025\001srfi-4#s16vector-s"
"et!\376\003\000\000\002\376\001\000\000\025\001srfi-4#u32vector-set!\376\003\000\000\002\376\001\000\000\025\001srfi-4#u64vector-set!\376\003\000\000\002\376\001\000\000\025\001sr"
"fi-4#s32vector-set!\376\003\000\000\002\376\001\000\000\025\001srfi-4#s64vector-set!\376\003\000\000\002\376\001\000\000\025\001srfi-4#f32vector-s"
"et!\376\003\000\000\002\376\001\000\000\025\001srfi-4#f64vector-set!\376\003\000\000\002\376\001\000\000\034\001srfi-4#u8vector->blob/shared\376\003\000\000\002\376"
"\001\000\000\034\001srfi-4#s8vector->blob/shared\376\003\000\000\002\376\001\000\000\035\001srfi-4#u16vector->blob/shared\376\003\000\000\002\376\001"
"\000\000\035\001srfi-4#s16vector->blob/shared\376\003\000\000\002\376\001\000\000\035\001srfi-4#u32vector->blob/shared\376\003\000\000\002\376\001"
"\000\000\035\001srfi-4#s32vector->blob/shared\376\003\000\000\002\376\001\000\000\035\001srfi-4#u64vector->blob/shared\376\003\000\000\002\376\001"
"\000\000\035\001srfi-4#s64vector->blob/shared\376\003\000\000\002\376\001\000\000\035\001srfi-4#f32vector->blob/shared\376\003\000\000\002\376\001"
"\000\000\035\001srfi-4#f64vector->blob/shared\376\003\000\000\002\376\001\000\000\034\001srfi-4#blob->u8vector/shared\376\003\000\000\002\376\001\000"
"\000\034\001srfi-4#blob->s8vector/shared\376\003\000\000\002\376\001\000\000\035\001srfi-4#blob->u16vector/shared\376\003\000\000\002\376\001\000\000"
"\035\001srfi-4#blob->s16vector/shared\376\003\000\000\002\376\001\000\000\035\001srfi-4#blob->u32vector/shared\376\003\000\000\002\376\001\000\000"
"\035\001srfi-4#blob->s32vector/shared\376\003\000\000\002\376\001\000\000\035\001srfi-4#blob->u64vector/shared\376\003\000\000\002\376\001\000\000"
"\035\001srfi-4#blob->s64vector/shared\376\003\000\000\002\376\001\000\000\035\001srfi-4#blob->f32vector/shared\376\003\000\000\002\376\001\000\000"
"\035\001srfi-4#blob->f64vector/shared\376\003\000\000\002\376\001\000\000\033\001chicken.memory#u8vector-ref\376\003\000\000\002\376\001\000\000\033\001"
"chicken.memory#s8vector-ref\376\003\000\000\002\376\001\000\000\034\001chicken.memory#u16vector-ref\376\003\000\000\002\376\001\000\000\034\001chi"
"cken.memory#s16vector-ref\376\003\000\000\002\376\001\000\000\034\001chicken.memory#u32vector-ref\376\003\000\000\002\376\001\000\000\034\001chick"
"en.memory#s32vector-ref\376\003\000\000\002\376\001\000\000\034\001chicken.memory#u64vector-ref\376\003\000\000\002\376\001\000\000\034\001chicken"
".memory#s64vector-ref\376\003\000\000\002\376\001\000\000\034\001chicken.memory#f32vector-ref\376\003\000\000\002\376\001\000\000\034\001chicken.m"
"emory#f64vector-ref\376\003\000\000\002\376\001\000\000\035\001chicken.memory#f32vector-set!\376\003\000\000\002\376\001\000\000\035\001chicken.me"
"mory#f64vector-set!\376\003\000\000\002\376\001\000\000\034\001chicken.memory#u8vector-set!\376\003\000\000\002\376\001\000\000\034\001chicken.mem"
"ory#s8vector-set!\376\003\000\000\002\376\001\000\000\035\001chicken.memory#u16vector-set!\376\003\000\000\002\376\001\000\000\035\001chicken.memo"
"ry#s16vector-set!\376\003\000\000\002\376\001\000\000\035\001chicken.memory#u32vector-set!\376\003\000\000\002\376\001\000\000\035\001chicken.memo"
"ry#s32vector-set!\376\003\000\000\002\376\001\000\000\035\001chicken.memory#u64vector-set!\376\003\000\000\002\376\001\000\000\035\001chicken.memo"
"ry#s64vector-set!\376\003\000\000\002\376\001\000\000-\001chicken.memory.representation#number-of-slots\376\003\000\000\002\376\001"
"\000\0002\001chicken.memory.representation#make-record-instance\376\003\000\000\002\376\001\000\000\047\001chicken.memory."
"representation#block-ref\376\003\000\000\002\376\001\000\000(\001chicken.memory.representation#block-set!\376\003\000\000\002"
"\376\001\000\000\035\001chicken.locative#locative-ref\376\003\000\000\002\376\001\000\000\036\001chicken.locative#locative-set!\376\003\000\000"
"\002\376\001\000\000!\001chicken.locative#locative->object\376\003\000\000\002\376\001\000\000\032\001chicken.locative#locative\077\376\003\000"
"\000\002\376\001\000\000\027\001chicken.memory#pointer+\376\003\000\000\002\376\001\000\000\030\001chicken.memory#pointer=\077\376\003\000\000\002\376\001\000\000\037\001chi"
"cken.memory#address->pointer\376\003\000\000\002\376\001\000\000\037\001chicken.memory#pointer->address\376\003\000\000\002\376\001\000\000\036"
"\001chicken.memory#pointer->object\376\003\000\000\002\376\001\000\000\036\001chicken.memory#object->pointer\376\003\000\000\002\376\001\000"
"\000\035\001chicken.memory#pointer-u8-ref\376\003\000\000\002\376\001\000\000\035\001chicken.memory#pointer-s8-ref\376\003\000\000\002\376\001\000"
"\000\036\001chicken.memory#pointer-u16-ref\376\003\000\000\002\376\001\000\000\036\001chicken.memory#pointer-s16-ref\376\003\000\000\002\376"
"\001\000\000\036\001chicken.memory#pointer-u32-ref\376\003\000\000\002\376\001\000\000\036\001chicken.memory#pointer-s32-ref\376\003\000\000"
"\002\376\001\000\000\036\001chicken.memory#pointer-f32-ref\376\003\000\000\002\376\001\000\000\036\001chicken.memory#pointer-f64-ref\376\003"
"\000\000\002\376\001\000\000\036\001chicken.memory#pointer-u8-set!\376\003\000\000\002\376\001\000\000\036\001chicken.memory#pointer-s8-set!"
"\376\003\000\000\002\376\001\000\000\037\001chicken.memory#pointer-u16-set!\376\003\000\000\002\376\001\000\000\037\001chicken.memory#pointer-s16-"
"set!\376\003\000\000\002\376\001\000\000\037\001chicken.memory#pointer-u32-set!\376\003\000\000\002\376\001\000\000\037\001chicken.memory#pointer-"
"s32-set!\376\003\000\000\002\376\001\000\000\037\001chicken.memory#pointer-f32-set!\376\003\000\000\002\376\001\000\000\037\001chicken.memory#poin"
"ter-f64-set!\376\003\000\000\002\376\001\000\000\036\001chicken.string#substring-index\376\003\000\000\002\376\001\000\000!\001chicken.string#s"
"ubstring-index-ci\376\003\000\000\002\376\001\000\000\032\001chicken.string#substring=\077\376\003\000\000\002\376\001\000\000\035\001chicken.string#"
"substring-ci=\077\376\003\000\000\002\376\001\000\000\026\001chicken.io#read-string\376\003\000\000\002\376\001\000\000\025\001chicken.format#format\376"
"\003\000\000\002\376\001\000\000\025\001chicken.format#printf\376\003\000\000\002\376\001\000\000\026\001chicken.format#sprintf\376\003\000\000\002\376\001\000\000\026\001chick"
"en.format#fprintf\376\377\016"));
lf[932]=C_h_intern(&lf[932],26, C_text("chicken.base#symbol-append"));
lf[933]=C_h_intern(&lf[933],7, C_text("scheme#"));
lf[934]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\003\001not\376\003\000\000\002\376\001\000\000\010\001boolean\077\376\003\000\000\002\376\001\000\000\005\001apply\376\003\000\000\002\376\001\000\000\036\001call-with-current-co"
"ntinuation\376\003\000\000\002\376\001\000\000\003\001eq\077\376\003\000\000\002\376\001\000\000\004\001eqv\077\376\003\000\000\002\376\001\000\000\006\001equal\077\376\003\000\000\002\376\001\000\000\005\001pair\077\376\003\000\000\002\376\001\000"
"\000\004\001cons\376\003\000\000\002\376\001\000\000\003\001car\376\003\000\000\002\376\001\000\000\003\001cdr\376\003\000\000\002\376\001\000\000\004\001caar\376\003\000\000\002\376\001\000\000\004\001cadr\376\003\000\000\002\376\001\000\000\004\001cdar"
"\376\003\000\000\002\376\001\000\000\004\001cddr\376\003\000\000\002\376\001\000\000\005\001caaar\376\003\000\000\002\376\001\000\000\005\001caadr\376\003\000\000\002\376\001\000\000\005\001cadar\376\003\000\000\002\376\001\000\000\005\001caddr\376"
"\003\000\000\002\376\001\000\000\005\001cdaar\376\003\000\000\002\376\001\000\000\005\001cdadr\376\003\000\000\002\376\001\000\000\005\001cddar\376\003\000\000\002\376\001\000\000\005\001cdddr\376\003\000\000\002\376\001\000\000\006\001caaaar"
"\376\003\000\000\002\376\001\000\000\006\001caaadr\376\003\000\000\002\376\001\000\000\006\001caadar\376\003\000\000\002\376\001\000\000\006\001caaddr\376\003\000\000\002\376\001\000\000\006\001cadaar\376\003\000\000\002\376\001\000\000\006\001c"
"adadr\376\003\000\000\002\376\001\000\000\006\001caddar\376\003\000\000\002\376\001\000\000\006\001cadddr\376\003\000\000\002\376\001\000\000\006\001cdaaar\376\003\000\000\002\376\001\000\000\006\001cdaadr\376\003\000\000\002\376\001"
"\000\000\006\001cdadar\376\003\000\000\002\376\001\000\000\006\001cdaddr\376\003\000\000\002\376\001\000\000\006\001cddaar\376\003\000\000\002\376\001\000\000\006\001cddadr\376\003\000\000\002\376\001\000\000\006\001cdddar\376\003"
"\000\000\002\376\001\000\000\006\001cddddr\376\003\000\000\002\376\001\000\000\010\001set-car!\376\003\000\000\002\376\001\000\000\010\001set-cdr!\376\003\000\000\002\376\001\000\000\005\001null\077\376\003\000\000\002\376\001\000\000\004\001"
"list\376\003\000\000\002\376\001\000\000\005\001list\077\376\003\000\000\002\376\001\000\000\006\001length\376\003\000\000\002\376\001\000\000\005\001zero\077\376\003\000\000\002\376\001\000\000\001\001\052\376\003\000\000\002\376\001\000\000\001\001-\376\003\000"
"\000\002\376\001\000\000\001\001+\376\003\000\000\002\376\001\000\000\001\001/\376\003\000\000\002\376\001\000\000\001\001-\376\003\000\000\002\376\001\000\000\001\001>\376\003\000\000\002\376\001\000\000\001\001<\376\003\000\000\002\376\001\000\000\002\001>=\376\003\000\000\002\376\001\000\000\002"
"\001<=\376\003\000\000\002\376\001\000\000\001\001=\376\003\000\000\002\376\001\000\000\023\001current-output-port\376\003\000\000\002\376\001\000\000\022\001current-input-port\376\003\000\000\002\376"
"\001\000\000\012\001write-char\376\003\000\000\002\376\001\000\000\007\001newline\376\003\000\000\002\376\001\000\000\005\001write\376\003\000\000\002\376\001\000\000\007\001display\376\003\000\000\002\376\001\000\000\006\001ap"
"pend\376\003\000\000\002\376\001\000\000\016\001symbol->string\376\003\000\000\002\376\001\000\000\010\001for-each\376\003\000\000\002\376\001\000\000\003\001map\376\003\000\000\002\376\001\000\000\005\001char\077\376\003"
"\000\000\002\376\001\000\000\015\001char->integer\376\003\000\000\002\376\001\000\000\015\001integer->char\376\003\000\000\002\376\001\000\000\013\001eof-object\077\376\003\000\000\002\376\001\000\000\015\001v"
"ector-length\376\003\000\000\002\376\001\000\000\015\001string-length\376\003\000\000\002\376\001\000\000\012\001string-ref\376\003\000\000\002\376\001\000\000\013\001string-set!\376"
"\003\000\000\002\376\001\000\000\012\001vector-ref\376\003\000\000\002\376\001\000\000\013\001vector-set!\376\003\000\000\002\376\001\000\000\006\001char=\077\376\003\000\000\002\376\001\000\000\006\001char<\077\376\003\000\000"
"\002\376\001\000\000\006\001char>\077\376\003\000\000\002\376\001\000\000\007\001char>=\077\376\003\000\000\002\376\001\000\000\007\001char<=\077\376\003\000\000\002\376\001\000\000\003\001gcd\376\003\000\000\002\376\001\000\000\003\001lcm\376\003\000"
"\000\002\376\001\000\000\007\001reverse\376\003\000\000\002\376\001\000\000\007\001symbol\077\376\003\000\000\002\376\001\000\000\016\001string->symbol\376\003\000\000\002\376\001\000\000\007\001number\077\376\003\000\000"
"\002\376\001\000\000\010\001complex\077\376\003\000\000\002\376\001\000\000\005\001real\077\376\003\000\000\002\376\001\000\000\010\001integer\077\376\003\000\000\002\376\001\000\000\011\001rational\077\376\003\000\000\002\376\001\000\000\004"
"\001odd\077\376\003\000\000\002\376\001\000\000\005\001even\077\376\003\000\000\002\376\001\000\000\011\001positive\077\376\003\000\000\002\376\001\000\000\011\001negative\077\376\003\000\000\002\376\001\000\000\006\001exact\077\376\003"
"\000\000\002\376\001\000\000\010\001inexact\077\376\003\000\000\002\376\001\000\000\003\001max\376\003\000\000\002\376\001\000\000\003\001min\376\003\000\000\002\376\001\000\000\010\001quotient\376\003\000\000\002\376\001\000\000\011\001remai"
"nder\376\003\000\000\002\376\001\000\000\006\001modulo\376\003\000\000\002\376\001\000\000\005\001floor\376\003\000\000\002\376\001\000\000\007\001ceiling\376\003\000\000\002\376\001\000\000\010\001truncate\376\003\000\000\002\376"
"\001\000\000\005\001round\376\003\000\000\002\376\001\000\000\013\001rationalize\376\003\000\000\002\376\001\000\000\016\001exact->inexact\376\003\000\000\002\376\001\000\000\016\001inexact->exa"
"ct\376\003\000\000\002\376\001\000\000\003\001exp\376\003\000\000\002\376\001\000\000\003\001log\376\003\000\000\002\376\001\000\000\003\001sin\376\003\000\000\002\376\001\000\000\004\001expt\376\003\000\000\002\376\001\000\000\004\001sqrt\376\003\000\000\002\376"
"\001\000\000\003\001cos\376\003\000\000\002\376\001\000\000\003\001tan\376\003\000\000\002\376\001\000\000\004\001asin\376\003\000\000\002\376\001\000\000\004\001acos\376\003\000\000\002\376\001\000\000\004\001atan\376\003\000\000\002\376\001\000\000\016\001nu"
"mber->string\376\003\000\000\002\376\001\000\000\016\001string->number\376\003\000\000\002\376\001\000\000\011\001char-ci=\077\376\003\000\000\002\376\001\000\000\011\001char-ci<\077\376\003\000"
"\000\002\376\001\000\000\011\001char-ci>\077\376\003\000\000\002\376\001\000\000\012\001char-ci>=\077\376\003\000\000\002\376\001\000\000\012\001char-ci<=\077\376\003\000\000\002\376\001\000\000\020\001char-alpha"
"betic\077\376\003\000\000\002\376\001\000\000\020\001char-whitespace\077\376\003\000\000\002\376\001\000\000\015\001char-numeric\077\376\003\000\000\002\376\001\000\000\020\001char-lower-c"
"ase\077\376\003\000\000\002\376\001\000\000\020\001char-upper-case\077\376\003\000\000\002\376\001\000\000\013\001char-upcase\376\003\000\000\002\376\001\000\000\015\001char-downcase\376\003\000"
"\000\002\376\001\000\000\007\001string\077\376\003\000\000\002\376\001\000\000\010\001string=\077\376\003\000\000\002\376\001\000\000\010\001string>\077\376\003\000\000\002\376\001\000\000\010\001string<\077\376\003\000\000\002\376\001\000"
"\000\011\001string>=\077\376\003\000\000\002\376\001\000\000\011\001string<=\077\376\003\000\000\002\376\001\000\000\013\001string-ci=\077\376\003\000\000\002\376\001\000\000\013\001string-ci<\077\376\003\000\000"
"\002\376\001\000\000\013\001string-ci>\077\376\003\000\000\002\376\001\000\000\014\001string-ci<=\077\376\003\000\000\002\376\001\000\000\014\001string-ci>=\077\376\003\000\000\002\376\001\000\000\015\001strin"
"g-append\376\003\000\000\002\376\001\000\000\014\001string->list\376\003\000\000\002\376\001\000\000\014\001list->string\376\003\000\000\002\376\001\000\000\007\001vector\077\376\003\000\000\002\376\001\000"
"\000\014\001vector->list\376\003\000\000\002\376\001\000\000\014\001list->vector\376\003\000\000\002\376\001\000\000\006\001string\376\003\000\000\002\376\001\000\000\004\001read\376\003\000\000\002\376\001\000\000\011"
"\001read-char\376\003\000\000\002\376\001\000\000\011\001substring\376\003\000\000\002\376\001\000\000\014\001string-fill!\376\003\000\000\002\376\001\000\000\014\001vector-copy!\376\003\000\000"
"\002\376\001\000\000\014\001vector-fill!\376\003\000\000\002\376\001\000\000\013\001make-string\376\003\000\000\002\376\001\000\000\013\001make-vector\376\003\000\000\002\376\001\000\000\017\001open-i"
"nput-file\376\003\000\000\002\376\001\000\000\020\001open-output-file\376\003\000\000\002\376\001\000\000\024\001call-with-input-file\376\003\000\000\002\376\001\000\000\025\001ca"
"ll-with-output-file\376\003\000\000\002\376\001\000\000\020\001close-input-port\376\003\000\000\002\376\001\000\000\021\001close-output-port\376\003\000\000\002\376"
"\001\000\000\006\001values\376\003\000\000\002\376\001\000\000\020\001call-with-values\376\003\000\000\002\376\001\000\000\006\001vector\376\003\000\000\002\376\001\000\000\012\001procedure\077\376\003\000\000"
"\002\376\001\000\000\004\001memq\376\003\000\000\002\376\001\000\000\004\001memv\376\003\000\000\002\376\001\000\000\006\001member\376\003\000\000\002\376\001\000\000\004\001assq\376\003\000\000\002\376\001\000\000\004\001assv\376\003\000\000\002\376\001"
"\000\000\005\001assoc\376\003\000\000\002\376\001\000\000\011\001list-tail\376\003\000\000\002\376\001\000\000\010\001list-ref\376\003\000\000\002\376\001\000\000\003\001abs\376\003\000\000\002\376\001\000\000\013\001char-re"
"ady\077\376\003\000\000\002\376\001\000\000\011\001peek-char\376\003\000\000\002\376\001\000\000\014\001list->string\376\003\000\000\002\376\001\000\000\014\001string->list\376\003\000\000\002\376\001\000\000\022"
"\001current-input-port\376\003\000\000\002\376\001\000\000\023\001current-output-port\376\003\000\000\002\376\001\000\000\012\001make-polar\376\003\000\000\002\376\001\000\000\020"
"\001make-rectangular\376\003\000\000\002\376\001\000\000\011\001real-part\376\003\000\000\002\376\001\000\000\011\001imag-part\376\003\000\000\002\376\001\000\000\004\001load\376\003\000\000\002\376\001\000"
"\000\004\001eval\376\003\000\000\002\376\001\000\000\027\001interaction-environment\376\003\000\000\002\376\001\000\000\020\001null-environment\376\003\000\000\002\376\001\000\000\031\001s"
"cheme-report-environment\376\377\016"));
lf[935]=C_h_intern(&lf[935],50, C_text("chicken.compiler.optimizer#membership-unfold-limit"));
lf[936]=C_h_intern(&lf[936],52, C_text("chicken.compiler.optimizer#membership-test-operators"));
lf[937]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376B\000\000\010C_i_memq\376B\000\000\005C_eqp\376\003\000\000\002\376\003\000\000\002\376B\000\000\012C_u_i_memq\376B\000\000\005C_eqp\376\003\000\000\002\376\003\000\000\002\376B"
"\000\000\012C_i_member\376B\000\000\012C_i_equalp\376\003\000\000\002\376\003\000\000\002\376B\000\000\010C_i_memv\376B\000\000\010C_i_eqvp\376\377\016"));
lf[938]=C_h_intern(&lf[938],45, C_text("chicken.compiler.optimizer#eq-inline-operator"));
lf[939]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005C_eqp"));
lf[940]=C_h_intern(&lf[940],54, C_text("chicken.compiler.optimizer#default-optimization-passes"));
C_register_lf2(lf,941,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1671,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[668] = {
{C_text("f_1671:c_2dplatform_2escm"),(void*)f_1671},
{C_text("f_1674:c_2dplatform_2escm"),(void*)f_1674},
{C_text("f_1677:c_2dplatform_2escm"),(void*)f_1677},
{C_text("f_1680:c_2dplatform_2escm"),(void*)f_1680},
{C_text("f_1683:c_2dplatform_2escm"),(void*)f_1683},
{C_text("f_1686:c_2dplatform_2escm"),(void*)f_1686},
{C_text("f_2121:c_2dplatform_2escm"),(void*)f_2121},
{C_text("f_2127:c_2dplatform_2escm"),(void*)f_2127},
{C_text("f_2141:c_2dplatform_2escm"),(void*)f_2141},
{C_text("f_2297:c_2dplatform_2escm"),(void*)f_2297},
{C_text("f_2306:c_2dplatform_2escm"),(void*)f_2306},
{C_text("f_2314:c_2dplatform_2escm"),(void*)f_2314},
{C_text("f_2321:c_2dplatform_2escm"),(void*)f_2321},
{C_text("f_2335:c_2dplatform_2escm"),(void*)f_2335},
{C_text("f_2463:c_2dplatform_2escm"),(void*)f_2463},
{C_text("f_2705:c_2dplatform_2escm"),(void*)f_2705},
{C_text("f_2719:c_2dplatform_2escm"),(void*)f_2719},
{C_text("f_2723:c_2dplatform_2escm"),(void*)f_2723},
{C_text("f_2967:c_2dplatform_2escm"),(void*)f_2967},
{C_text("f_2975:c_2dplatform_2escm"),(void*)f_2975},
{C_text("f_2978:c_2dplatform_2escm"),(void*)f_2978},
{C_text("f_2981:c_2dplatform_2escm"),(void*)f_2981},
{C_text("f_2996:c_2dplatform_2escm"),(void*)f_2996},
{C_text("f_3003:c_2dplatform_2escm"),(void*)f_3003},
{C_text("f_3012:c_2dplatform_2escm"),(void*)f_3012},
{C_text("f_3014:c_2dplatform_2escm"),(void*)f_3014},
{C_text("f_3016:c_2dplatform_2escm"),(void*)f_3016},
{C_text("f_3038:c_2dplatform_2escm"),(void*)f_3038},
{C_text("f_3071:c_2dplatform_2escm"),(void*)f_3071},
{C_text("f_3079:c_2dplatform_2escm"),(void*)f_3079},
{C_text("f_3082:c_2dplatform_2escm"),(void*)f_3082},
{C_text("f_3084:c_2dplatform_2escm"),(void*)f_3084},
{C_text("f_3100:c_2dplatform_2escm"),(void*)f_3100},
{C_text("f_3109:c_2dplatform_2escm"),(void*)f_3109},
{C_text("f_3112:c_2dplatform_2escm"),(void*)f_3112},
{C_text("f_3127:c_2dplatform_2escm"),(void*)f_3127},
{C_text("f_3139:c_2dplatform_2escm"),(void*)f_3139},
{C_text("f_3153:c_2dplatform_2escm"),(void*)f_3153},
{C_text("f_3157:c_2dplatform_2escm"),(void*)f_3157},
{C_text("f_3166:c_2dplatform_2escm"),(void*)f_3166},
{C_text("f_3180:c_2dplatform_2escm"),(void*)f_3180},
{C_text("f_3184:c_2dplatform_2escm"),(void*)f_3184},
{C_text("f_3214:c_2dplatform_2escm"),(void*)f_3214},
{C_text("f_3218:c_2dplatform_2escm"),(void*)f_3218},
{C_text("f_3222:c_2dplatform_2escm"),(void*)f_3222},
{C_text("f_3226:c_2dplatform_2escm"),(void*)f_3226},
{C_text("f_3230:c_2dplatform_2escm"),(void*)f_3230},
{C_text("f_3238:c_2dplatform_2escm"),(void*)f_3238},
{C_text("f_3241:c_2dplatform_2escm"),(void*)f_3241},
{C_text("f_3244:c_2dplatform_2escm"),(void*)f_3244},
{C_text("f_3246:c_2dplatform_2escm"),(void*)f_3246},
{C_text("f_3274:c_2dplatform_2escm"),(void*)f_3274},
{C_text("f_3282:c_2dplatform_2escm"),(void*)f_3282},
{C_text("f_3299:c_2dplatform_2escm"),(void*)f_3299},
{C_text("f_3301:c_2dplatform_2escm"),(void*)f_3301},
{C_text("f_3326:c_2dplatform_2escm"),(void*)f_3326},
{C_text("f_3337:c_2dplatform_2escm"),(void*)f_3337},
{C_text("f_3341:c_2dplatform_2escm"),(void*)f_3341},
{C_text("f_3344:c_2dplatform_2escm"),(void*)f_3344},
{C_text("f_3358:c_2dplatform_2escm"),(void*)f_3358},
{C_text("f_3362:c_2dplatform_2escm"),(void*)f_3362},
{C_text("f_3385:c_2dplatform_2escm"),(void*)f_3385},
{C_text("f_3400:c_2dplatform_2escm"),(void*)f_3400},
{C_text("f_3408:c_2dplatform_2escm"),(void*)f_3408},
{C_text("f_3417:c_2dplatform_2escm"),(void*)f_3417},
{C_text("f_3421:c_2dplatform_2escm"),(void*)f_3421},
{C_text("f_3424:c_2dplatform_2escm"),(void*)f_3424},
{C_text("f_3427:c_2dplatform_2escm"),(void*)f_3427},
{C_text("f_3429:c_2dplatform_2escm"),(void*)f_3429},
{C_text("f_3435:c_2dplatform_2escm"),(void*)f_3435},
{C_text("f_3447:c_2dplatform_2escm"),(void*)f_3447},
{C_text("f_3466:c_2dplatform_2escm"),(void*)f_3466},
{C_text("f_3497:c_2dplatform_2escm"),(void*)f_3497},
{C_text("f_3500:c_2dplatform_2escm"),(void*)f_3500},
{C_text("f_3503:c_2dplatform_2escm"),(void*)f_3503},
{C_text("f_3506:c_2dplatform_2escm"),(void*)f_3506},
{C_text("f_3509:c_2dplatform_2escm"),(void*)f_3509},
{C_text("f_3512:c_2dplatform_2escm"),(void*)f_3512},
{C_text("f_3513:c_2dplatform_2escm"),(void*)f_3513},
{C_text("f_3539:c_2dplatform_2escm"),(void*)f_3539},
{C_text("f_3542:c_2dplatform_2escm"),(void*)f_3542},
{C_text("f_3544:c_2dplatform_2escm"),(void*)f_3544},
{C_text("f_3578:c_2dplatform_2escm"),(void*)f_3578},
{C_text("f_3605:c_2dplatform_2escm"),(void*)f_3605},
{C_text("f_3608:c_2dplatform_2escm"),(void*)f_3608},
{C_text("f_3611:c_2dplatform_2escm"),(void*)f_3611},
{C_text("f_3626:c_2dplatform_2escm"),(void*)f_3626},
{C_text("f_3630:c_2dplatform_2escm"),(void*)f_3630},
{C_text("f_3642:c_2dplatform_2escm"),(void*)f_3642},
{C_text("f_3654:c_2dplatform_2escm"),(void*)f_3654},
{C_text("f_3666:c_2dplatform_2escm"),(void*)f_3666},
{C_text("f_3670:c_2dplatform_2escm"),(void*)f_3670},
{C_text("f_3678:c_2dplatform_2escm"),(void*)f_3678},
{C_text("f_3685:c_2dplatform_2escm"),(void*)f_3685},
{C_text("f_3689:c_2dplatform_2escm"),(void*)f_3689},
{C_text("f_3693:c_2dplatform_2escm"),(void*)f_3693},
{C_text("f_3697:c_2dplatform_2escm"),(void*)f_3697},
{C_text("f_3701:c_2dplatform_2escm"),(void*)f_3701},
{C_text("f_3709:c_2dplatform_2escm"),(void*)f_3709},
{C_text("f_3712:c_2dplatform_2escm"),(void*)f_3712},
{C_text("f_3715:c_2dplatform_2escm"),(void*)f_3715},
{C_text("f_3718:c_2dplatform_2escm"),(void*)f_3718},
{C_text("f_3721:c_2dplatform_2escm"),(void*)f_3721},
{C_text("f_3724:c_2dplatform_2escm"),(void*)f_3724},
{C_text("f_3727:c_2dplatform_2escm"),(void*)f_3727},
{C_text("f_3730:c_2dplatform_2escm"),(void*)f_3730},
{C_text("f_3733:c_2dplatform_2escm"),(void*)f_3733},
{C_text("f_3736:c_2dplatform_2escm"),(void*)f_3736},
{C_text("f_3739:c_2dplatform_2escm"),(void*)f_3739},
{C_text("f_3742:c_2dplatform_2escm"),(void*)f_3742},
{C_text("f_3745:c_2dplatform_2escm"),(void*)f_3745},
{C_text("f_3748:c_2dplatform_2escm"),(void*)f_3748},
{C_text("f_3751:c_2dplatform_2escm"),(void*)f_3751},
{C_text("f_3754:c_2dplatform_2escm"),(void*)f_3754},
{C_text("f_3757:c_2dplatform_2escm"),(void*)f_3757},
{C_text("f_3760:c_2dplatform_2escm"),(void*)f_3760},
{C_text("f_3763:c_2dplatform_2escm"),(void*)f_3763},
{C_text("f_3766:c_2dplatform_2escm"),(void*)f_3766},
{C_text("f_3769:c_2dplatform_2escm"),(void*)f_3769},
{C_text("f_3772:c_2dplatform_2escm"),(void*)f_3772},
{C_text("f_3775:c_2dplatform_2escm"),(void*)f_3775},
{C_text("f_3778:c_2dplatform_2escm"),(void*)f_3778},
{C_text("f_3781:c_2dplatform_2escm"),(void*)f_3781},
{C_text("f_3784:c_2dplatform_2escm"),(void*)f_3784},
{C_text("f_3787:c_2dplatform_2escm"),(void*)f_3787},
{C_text("f_3790:c_2dplatform_2escm"),(void*)f_3790},
{C_text("f_3793:c_2dplatform_2escm"),(void*)f_3793},
{C_text("f_3796:c_2dplatform_2escm"),(void*)f_3796},
{C_text("f_3799:c_2dplatform_2escm"),(void*)f_3799},
{C_text("f_3802:c_2dplatform_2escm"),(void*)f_3802},
{C_text("f_3805:c_2dplatform_2escm"),(void*)f_3805},
{C_text("f_3808:c_2dplatform_2escm"),(void*)f_3808},
{C_text("f_3811:c_2dplatform_2escm"),(void*)f_3811},
{C_text("f_3814:c_2dplatform_2escm"),(void*)f_3814},
{C_text("f_3817:c_2dplatform_2escm"),(void*)f_3817},
{C_text("f_3820:c_2dplatform_2escm"),(void*)f_3820},
{C_text("f_3823:c_2dplatform_2escm"),(void*)f_3823},
{C_text("f_3826:c_2dplatform_2escm"),(void*)f_3826},
{C_text("f_3829:c_2dplatform_2escm"),(void*)f_3829},
{C_text("f_3832:c_2dplatform_2escm"),(void*)f_3832},
{C_text("f_3835:c_2dplatform_2escm"),(void*)f_3835},
{C_text("f_3838:c_2dplatform_2escm"),(void*)f_3838},
{C_text("f_3841:c_2dplatform_2escm"),(void*)f_3841},
{C_text("f_3844:c_2dplatform_2escm"),(void*)f_3844},
{C_text("f_3847:c_2dplatform_2escm"),(void*)f_3847},
{C_text("f_3850:c_2dplatform_2escm"),(void*)f_3850},
{C_text("f_3853:c_2dplatform_2escm"),(void*)f_3853},
{C_text("f_3856:c_2dplatform_2escm"),(void*)f_3856},
{C_text("f_3859:c_2dplatform_2escm"),(void*)f_3859},
{C_text("f_3862:c_2dplatform_2escm"),(void*)f_3862},
{C_text("f_3865:c_2dplatform_2escm"),(void*)f_3865},
{C_text("f_3868:c_2dplatform_2escm"),(void*)f_3868},
{C_text("f_3871:c_2dplatform_2escm"),(void*)f_3871},
{C_text("f_3874:c_2dplatform_2escm"),(void*)f_3874},
{C_text("f_3877:c_2dplatform_2escm"),(void*)f_3877},
{C_text("f_3880:c_2dplatform_2escm"),(void*)f_3880},
{C_text("f_3883:c_2dplatform_2escm"),(void*)f_3883},
{C_text("f_3886:c_2dplatform_2escm"),(void*)f_3886},
{C_text("f_3889:c_2dplatform_2escm"),(void*)f_3889},
{C_text("f_3892:c_2dplatform_2escm"),(void*)f_3892},
{C_text("f_3895:c_2dplatform_2escm"),(void*)f_3895},
{C_text("f_3898:c_2dplatform_2escm"),(void*)f_3898},
{C_text("f_3901:c_2dplatform_2escm"),(void*)f_3901},
{C_text("f_3904:c_2dplatform_2escm"),(void*)f_3904},
{C_text("f_3907:c_2dplatform_2escm"),(void*)f_3907},
{C_text("f_3910:c_2dplatform_2escm"),(void*)f_3910},
{C_text("f_3913:c_2dplatform_2escm"),(void*)f_3913},
{C_text("f_3916:c_2dplatform_2escm"),(void*)f_3916},
{C_text("f_3919:c_2dplatform_2escm"),(void*)f_3919},
{C_text("f_3922:c_2dplatform_2escm"),(void*)f_3922},
{C_text("f_3925:c_2dplatform_2escm"),(void*)f_3925},
{C_text("f_3928:c_2dplatform_2escm"),(void*)f_3928},
{C_text("f_3931:c_2dplatform_2escm"),(void*)f_3931},
{C_text("f_3934:c_2dplatform_2escm"),(void*)f_3934},
{C_text("f_3937:c_2dplatform_2escm"),(void*)f_3937},
{C_text("f_3940:c_2dplatform_2escm"),(void*)f_3940},
{C_text("f_3943:c_2dplatform_2escm"),(void*)f_3943},
{C_text("f_3946:c_2dplatform_2escm"),(void*)f_3946},
{C_text("f_3949:c_2dplatform_2escm"),(void*)f_3949},
{C_text("f_3952:c_2dplatform_2escm"),(void*)f_3952},
{C_text("f_3955:c_2dplatform_2escm"),(void*)f_3955},
{C_text("f_3958:c_2dplatform_2escm"),(void*)f_3958},
{C_text("f_3961:c_2dplatform_2escm"),(void*)f_3961},
{C_text("f_3964:c_2dplatform_2escm"),(void*)f_3964},
{C_text("f_3967:c_2dplatform_2escm"),(void*)f_3967},
{C_text("f_3970:c_2dplatform_2escm"),(void*)f_3970},
{C_text("f_3973:c_2dplatform_2escm"),(void*)f_3973},
{C_text("f_3976:c_2dplatform_2escm"),(void*)f_3976},
{C_text("f_3979:c_2dplatform_2escm"),(void*)f_3979},
{C_text("f_3982:c_2dplatform_2escm"),(void*)f_3982},
{C_text("f_3985:c_2dplatform_2escm"),(void*)f_3985},
{C_text("f_3988:c_2dplatform_2escm"),(void*)f_3988},
{C_text("f_3991:c_2dplatform_2escm"),(void*)f_3991},
{C_text("f_3994:c_2dplatform_2escm"),(void*)f_3994},
{C_text("f_3997:c_2dplatform_2escm"),(void*)f_3997},
{C_text("f_4000:c_2dplatform_2escm"),(void*)f_4000},
{C_text("f_4003:c_2dplatform_2escm"),(void*)f_4003},
{C_text("f_4006:c_2dplatform_2escm"),(void*)f_4006},
{C_text("f_4009:c_2dplatform_2escm"),(void*)f_4009},
{C_text("f_4012:c_2dplatform_2escm"),(void*)f_4012},
{C_text("f_4015:c_2dplatform_2escm"),(void*)f_4015},
{C_text("f_4018:c_2dplatform_2escm"),(void*)f_4018},
{C_text("f_4021:c_2dplatform_2escm"),(void*)f_4021},
{C_text("f_4024:c_2dplatform_2escm"),(void*)f_4024},
{C_text("f_4027:c_2dplatform_2escm"),(void*)f_4027},
{C_text("f_4030:c_2dplatform_2escm"),(void*)f_4030},
{C_text("f_4033:c_2dplatform_2escm"),(void*)f_4033},
{C_text("f_4036:c_2dplatform_2escm"),(void*)f_4036},
{C_text("f_4039:c_2dplatform_2escm"),(void*)f_4039},
{C_text("f_4042:c_2dplatform_2escm"),(void*)f_4042},
{C_text("f_4045:c_2dplatform_2escm"),(void*)f_4045},
{C_text("f_4048:c_2dplatform_2escm"),(void*)f_4048},
{C_text("f_4051:c_2dplatform_2escm"),(void*)f_4051},
{C_text("f_4054:c_2dplatform_2escm"),(void*)f_4054},
{C_text("f_4057:c_2dplatform_2escm"),(void*)f_4057},
{C_text("f_4060:c_2dplatform_2escm"),(void*)f_4060},
{C_text("f_4063:c_2dplatform_2escm"),(void*)f_4063},
{C_text("f_4066:c_2dplatform_2escm"),(void*)f_4066},
{C_text("f_4069:c_2dplatform_2escm"),(void*)f_4069},
{C_text("f_4072:c_2dplatform_2escm"),(void*)f_4072},
{C_text("f_4075:c_2dplatform_2escm"),(void*)f_4075},
{C_text("f_4078:c_2dplatform_2escm"),(void*)f_4078},
{C_text("f_4081:c_2dplatform_2escm"),(void*)f_4081},
{C_text("f_4084:c_2dplatform_2escm"),(void*)f_4084},
{C_text("f_4087:c_2dplatform_2escm"),(void*)f_4087},
{C_text("f_4090:c_2dplatform_2escm"),(void*)f_4090},
{C_text("f_4093:c_2dplatform_2escm"),(void*)f_4093},
{C_text("f_4096:c_2dplatform_2escm"),(void*)f_4096},
{C_text("f_4099:c_2dplatform_2escm"),(void*)f_4099},
{C_text("f_4102:c_2dplatform_2escm"),(void*)f_4102},
{C_text("f_4105:c_2dplatform_2escm"),(void*)f_4105},
{C_text("f_4108:c_2dplatform_2escm"),(void*)f_4108},
{C_text("f_4111:c_2dplatform_2escm"),(void*)f_4111},
{C_text("f_4114:c_2dplatform_2escm"),(void*)f_4114},
{C_text("f_4117:c_2dplatform_2escm"),(void*)f_4117},
{C_text("f_4120:c_2dplatform_2escm"),(void*)f_4120},
{C_text("f_4123:c_2dplatform_2escm"),(void*)f_4123},
{C_text("f_4126:c_2dplatform_2escm"),(void*)f_4126},
{C_text("f_4129:c_2dplatform_2escm"),(void*)f_4129},
{C_text("f_4132:c_2dplatform_2escm"),(void*)f_4132},
{C_text("f_4135:c_2dplatform_2escm"),(void*)f_4135},
{C_text("f_4138:c_2dplatform_2escm"),(void*)f_4138},
{C_text("f_4141:c_2dplatform_2escm"),(void*)f_4141},
{C_text("f_4144:c_2dplatform_2escm"),(void*)f_4144},
{C_text("f_4147:c_2dplatform_2escm"),(void*)f_4147},
{C_text("f_4150:c_2dplatform_2escm"),(void*)f_4150},
{C_text("f_4153:c_2dplatform_2escm"),(void*)f_4153},
{C_text("f_4156:c_2dplatform_2escm"),(void*)f_4156},
{C_text("f_4159:c_2dplatform_2escm"),(void*)f_4159},
{C_text("f_4162:c_2dplatform_2escm"),(void*)f_4162},
{C_text("f_4165:c_2dplatform_2escm"),(void*)f_4165},
{C_text("f_4168:c_2dplatform_2escm"),(void*)f_4168},
{C_text("f_4171:c_2dplatform_2escm"),(void*)f_4171},
{C_text("f_4174:c_2dplatform_2escm"),(void*)f_4174},
{C_text("f_4177:c_2dplatform_2escm"),(void*)f_4177},
{C_text("f_4180:c_2dplatform_2escm"),(void*)f_4180},
{C_text("f_4183:c_2dplatform_2escm"),(void*)f_4183},
{C_text("f_4186:c_2dplatform_2escm"),(void*)f_4186},
{C_text("f_4189:c_2dplatform_2escm"),(void*)f_4189},
{C_text("f_4192:c_2dplatform_2escm"),(void*)f_4192},
{C_text("f_4195:c_2dplatform_2escm"),(void*)f_4195},
{C_text("f_4198:c_2dplatform_2escm"),(void*)f_4198},
{C_text("f_4201:c_2dplatform_2escm"),(void*)f_4201},
{C_text("f_4204:c_2dplatform_2escm"),(void*)f_4204},
{C_text("f_4207:c_2dplatform_2escm"),(void*)f_4207},
{C_text("f_4210:c_2dplatform_2escm"),(void*)f_4210},
{C_text("f_4213:c_2dplatform_2escm"),(void*)f_4213},
{C_text("f_4216:c_2dplatform_2escm"),(void*)f_4216},
{C_text("f_4219:c_2dplatform_2escm"),(void*)f_4219},
{C_text("f_4222:c_2dplatform_2escm"),(void*)f_4222},
{C_text("f_4225:c_2dplatform_2escm"),(void*)f_4225},
{C_text("f_4228:c_2dplatform_2escm"),(void*)f_4228},
{C_text("f_4231:c_2dplatform_2escm"),(void*)f_4231},
{C_text("f_4234:c_2dplatform_2escm"),(void*)f_4234},
{C_text("f_4237:c_2dplatform_2escm"),(void*)f_4237},
{C_text("f_4240:c_2dplatform_2escm"),(void*)f_4240},
{C_text("f_4243:c_2dplatform_2escm"),(void*)f_4243},
{C_text("f_4246:c_2dplatform_2escm"),(void*)f_4246},
{C_text("f_4249:c_2dplatform_2escm"),(void*)f_4249},
{C_text("f_4252:c_2dplatform_2escm"),(void*)f_4252},
{C_text("f_4255:c_2dplatform_2escm"),(void*)f_4255},
{C_text("f_4258:c_2dplatform_2escm"),(void*)f_4258},
{C_text("f_4261:c_2dplatform_2escm"),(void*)f_4261},
{C_text("f_4264:c_2dplatform_2escm"),(void*)f_4264},
{C_text("f_4267:c_2dplatform_2escm"),(void*)f_4267},
{C_text("f_4270:c_2dplatform_2escm"),(void*)f_4270},
{C_text("f_4273:c_2dplatform_2escm"),(void*)f_4273},
{C_text("f_4276:c_2dplatform_2escm"),(void*)f_4276},
{C_text("f_4279:c_2dplatform_2escm"),(void*)f_4279},
{C_text("f_4282:c_2dplatform_2escm"),(void*)f_4282},
{C_text("f_4285:c_2dplatform_2escm"),(void*)f_4285},
{C_text("f_4288:c_2dplatform_2escm"),(void*)f_4288},
{C_text("f_4291:c_2dplatform_2escm"),(void*)f_4291},
{C_text("f_4294:c_2dplatform_2escm"),(void*)f_4294},
{C_text("f_4297:c_2dplatform_2escm"),(void*)f_4297},
{C_text("f_4300:c_2dplatform_2escm"),(void*)f_4300},
{C_text("f_4303:c_2dplatform_2escm"),(void*)f_4303},
{C_text("f_4306:c_2dplatform_2escm"),(void*)f_4306},
{C_text("f_4309:c_2dplatform_2escm"),(void*)f_4309},
{C_text("f_4312:c_2dplatform_2escm"),(void*)f_4312},
{C_text("f_4315:c_2dplatform_2escm"),(void*)f_4315},
{C_text("f_4318:c_2dplatform_2escm"),(void*)f_4318},
{C_text("f_4321:c_2dplatform_2escm"),(void*)f_4321},
{C_text("f_4324:c_2dplatform_2escm"),(void*)f_4324},
{C_text("f_4327:c_2dplatform_2escm"),(void*)f_4327},
{C_text("f_4330:c_2dplatform_2escm"),(void*)f_4330},
{C_text("f_4333:c_2dplatform_2escm"),(void*)f_4333},
{C_text("f_4336:c_2dplatform_2escm"),(void*)f_4336},
{C_text("f_4339:c_2dplatform_2escm"),(void*)f_4339},
{C_text("f_4342:c_2dplatform_2escm"),(void*)f_4342},
{C_text("f_4345:c_2dplatform_2escm"),(void*)f_4345},
{C_text("f_4348:c_2dplatform_2escm"),(void*)f_4348},
{C_text("f_4351:c_2dplatform_2escm"),(void*)f_4351},
{C_text("f_4354:c_2dplatform_2escm"),(void*)f_4354},
{C_text("f_4357:c_2dplatform_2escm"),(void*)f_4357},
{C_text("f_4360:c_2dplatform_2escm"),(void*)f_4360},
{C_text("f_4363:c_2dplatform_2escm"),(void*)f_4363},
{C_text("f_4366:c_2dplatform_2escm"),(void*)f_4366},
{C_text("f_4369:c_2dplatform_2escm"),(void*)f_4369},
{C_text("f_4372:c_2dplatform_2escm"),(void*)f_4372},
{C_text("f_4375:c_2dplatform_2escm"),(void*)f_4375},
{C_text("f_4378:c_2dplatform_2escm"),(void*)f_4378},
{C_text("f_4381:c_2dplatform_2escm"),(void*)f_4381},
{C_text("f_4384:c_2dplatform_2escm"),(void*)f_4384},
{C_text("f_4387:c_2dplatform_2escm"),(void*)f_4387},
{C_text("f_4390:c_2dplatform_2escm"),(void*)f_4390},
{C_text("f_4393:c_2dplatform_2escm"),(void*)f_4393},
{C_text("f_4396:c_2dplatform_2escm"),(void*)f_4396},
{C_text("f_4399:c_2dplatform_2escm"),(void*)f_4399},
{C_text("f_4402:c_2dplatform_2escm"),(void*)f_4402},
{C_text("f_4405:c_2dplatform_2escm"),(void*)f_4405},
{C_text("f_4408:c_2dplatform_2escm"),(void*)f_4408},
{C_text("f_4411:c_2dplatform_2escm"),(void*)f_4411},
{C_text("f_4414:c_2dplatform_2escm"),(void*)f_4414},
{C_text("f_4417:c_2dplatform_2escm"),(void*)f_4417},
{C_text("f_4420:c_2dplatform_2escm"),(void*)f_4420},
{C_text("f_4423:c_2dplatform_2escm"),(void*)f_4423},
{C_text("f_4426:c_2dplatform_2escm"),(void*)f_4426},
{C_text("f_4429:c_2dplatform_2escm"),(void*)f_4429},
{C_text("f_4432:c_2dplatform_2escm"),(void*)f_4432},
{C_text("f_4435:c_2dplatform_2escm"),(void*)f_4435},
{C_text("f_4438:c_2dplatform_2escm"),(void*)f_4438},
{C_text("f_4441:c_2dplatform_2escm"),(void*)f_4441},
{C_text("f_4443:c_2dplatform_2escm"),(void*)f_4443},
{C_text("f_4480:c_2dplatform_2escm"),(void*)f_4480},
{C_text("f_4482:c_2dplatform_2escm"),(void*)f_4482},
{C_text("f_4489:c_2dplatform_2escm"),(void*)f_4489},
{C_text("f_4500:c_2dplatform_2escm"),(void*)f_4500},
{C_text("f_4521:c_2dplatform_2escm"),(void*)f_4521},
{C_text("f_4525:c_2dplatform_2escm"),(void*)f_4525},
{C_text("f_4538:c_2dplatform_2escm"),(void*)f_4538},
{C_text("f_4540:c_2dplatform_2escm"),(void*)f_4540},
{C_text("f_4562:c_2dplatform_2escm"),(void*)f_4562},
{C_text("f_4566:c_2dplatform_2escm"),(void*)f_4566},
{C_text("f_4576:c_2dplatform_2escm"),(void*)f_4576},
{C_text("f_4579:c_2dplatform_2escm"),(void*)f_4579},
{C_text("f_4582:c_2dplatform_2escm"),(void*)f_4582},
{C_text("f_4585:c_2dplatform_2escm"),(void*)f_4585},
{C_text("f_4588:c_2dplatform_2escm"),(void*)f_4588},
{C_text("f_4591:c_2dplatform_2escm"),(void*)f_4591},
{C_text("f_4594:c_2dplatform_2escm"),(void*)f_4594},
{C_text("f_4597:c_2dplatform_2escm"),(void*)f_4597},
{C_text("f_4600:c_2dplatform_2escm"),(void*)f_4600},
{C_text("f_4603:c_2dplatform_2escm"),(void*)f_4603},
{C_text("f_4606:c_2dplatform_2escm"),(void*)f_4606},
{C_text("f_4609:c_2dplatform_2escm"),(void*)f_4609},
{C_text("f_4612:c_2dplatform_2escm"),(void*)f_4612},
{C_text("f_4615:c_2dplatform_2escm"),(void*)f_4615},
{C_text("f_4618:c_2dplatform_2escm"),(void*)f_4618},
{C_text("f_4621:c_2dplatform_2escm"),(void*)f_4621},
{C_text("f_4624:c_2dplatform_2escm"),(void*)f_4624},
{C_text("f_4627:c_2dplatform_2escm"),(void*)f_4627},
{C_text("f_4630:c_2dplatform_2escm"),(void*)f_4630},
{C_text("f_4633:c_2dplatform_2escm"),(void*)f_4633},
{C_text("f_4636:c_2dplatform_2escm"),(void*)f_4636},
{C_text("f_4639:c_2dplatform_2escm"),(void*)f_4639},
{C_text("f_4642:c_2dplatform_2escm"),(void*)f_4642},
{C_text("f_4645:c_2dplatform_2escm"),(void*)f_4645},
{C_text("f_4648:c_2dplatform_2escm"),(void*)f_4648},
{C_text("f_4651:c_2dplatform_2escm"),(void*)f_4651},
{C_text("f_4654:c_2dplatform_2escm"),(void*)f_4654},
{C_text("f_4657:c_2dplatform_2escm"),(void*)f_4657},
{C_text("f_4660:c_2dplatform_2escm"),(void*)f_4660},
{C_text("f_4663:c_2dplatform_2escm"),(void*)f_4663},
{C_text("f_4666:c_2dplatform_2escm"),(void*)f_4666},
{C_text("f_4669:c_2dplatform_2escm"),(void*)f_4669},
{C_text("f_4672:c_2dplatform_2escm"),(void*)f_4672},
{C_text("f_4675:c_2dplatform_2escm"),(void*)f_4675},
{C_text("f_4678:c_2dplatform_2escm"),(void*)f_4678},
{C_text("f_4681:c_2dplatform_2escm"),(void*)f_4681},
{C_text("f_4684:c_2dplatform_2escm"),(void*)f_4684},
{C_text("f_4687:c_2dplatform_2escm"),(void*)f_4687},
{C_text("f_4690:c_2dplatform_2escm"),(void*)f_4690},
{C_text("f_4693:c_2dplatform_2escm"),(void*)f_4693},
{C_text("f_4696:c_2dplatform_2escm"),(void*)f_4696},
{C_text("f_4699:c_2dplatform_2escm"),(void*)f_4699},
{C_text("f_4702:c_2dplatform_2escm"),(void*)f_4702},
{C_text("f_4705:c_2dplatform_2escm"),(void*)f_4705},
{C_text("f_4708:c_2dplatform_2escm"),(void*)f_4708},
{C_text("f_4711:c_2dplatform_2escm"),(void*)f_4711},
{C_text("f_4714:c_2dplatform_2escm"),(void*)f_4714},
{C_text("f_4717:c_2dplatform_2escm"),(void*)f_4717},
{C_text("f_4720:c_2dplatform_2escm"),(void*)f_4720},
{C_text("f_4723:c_2dplatform_2escm"),(void*)f_4723},
{C_text("f_4726:c_2dplatform_2escm"),(void*)f_4726},
{C_text("f_4729:c_2dplatform_2escm"),(void*)f_4729},
{C_text("f_4732:c_2dplatform_2escm"),(void*)f_4732},
{C_text("f_4735:c_2dplatform_2escm"),(void*)f_4735},
{C_text("f_4738:c_2dplatform_2escm"),(void*)f_4738},
{C_text("f_4741:c_2dplatform_2escm"),(void*)f_4741},
{C_text("f_4744:c_2dplatform_2escm"),(void*)f_4744},
{C_text("f_4747:c_2dplatform_2escm"),(void*)f_4747},
{C_text("f_4750:c_2dplatform_2escm"),(void*)f_4750},
{C_text("f_4753:c_2dplatform_2escm"),(void*)f_4753},
{C_text("f_4756:c_2dplatform_2escm"),(void*)f_4756},
{C_text("f_4759:c_2dplatform_2escm"),(void*)f_4759},
{C_text("f_4762:c_2dplatform_2escm"),(void*)f_4762},
{C_text("f_4765:c_2dplatform_2escm"),(void*)f_4765},
{C_text("f_4768:c_2dplatform_2escm"),(void*)f_4768},
{C_text("f_4771:c_2dplatform_2escm"),(void*)f_4771},
{C_text("f_4774:c_2dplatform_2escm"),(void*)f_4774},
{C_text("f_4777:c_2dplatform_2escm"),(void*)f_4777},
{C_text("f_4780:c_2dplatform_2escm"),(void*)f_4780},
{C_text("f_4783:c_2dplatform_2escm"),(void*)f_4783},
{C_text("f_4786:c_2dplatform_2escm"),(void*)f_4786},
{C_text("f_4789:c_2dplatform_2escm"),(void*)f_4789},
{C_text("f_4792:c_2dplatform_2escm"),(void*)f_4792},
{C_text("f_4795:c_2dplatform_2escm"),(void*)f_4795},
{C_text("f_4798:c_2dplatform_2escm"),(void*)f_4798},
{C_text("f_4801:c_2dplatform_2escm"),(void*)f_4801},
{C_text("f_4804:c_2dplatform_2escm"),(void*)f_4804},
{C_text("f_4807:c_2dplatform_2escm"),(void*)f_4807},
{C_text("f_4810:c_2dplatform_2escm"),(void*)f_4810},
{C_text("f_4813:c_2dplatform_2escm"),(void*)f_4813},
{C_text("f_4816:c_2dplatform_2escm"),(void*)f_4816},
{C_text("f_4819:c_2dplatform_2escm"),(void*)f_4819},
{C_text("f_4822:c_2dplatform_2escm"),(void*)f_4822},
{C_text("f_4825:c_2dplatform_2escm"),(void*)f_4825},
{C_text("f_4828:c_2dplatform_2escm"),(void*)f_4828},
{C_text("f_4831:c_2dplatform_2escm"),(void*)f_4831},
{C_text("f_4834:c_2dplatform_2escm"),(void*)f_4834},
{C_text("f_4837:c_2dplatform_2escm"),(void*)f_4837},
{C_text("f_4840:c_2dplatform_2escm"),(void*)f_4840},
{C_text("f_4843:c_2dplatform_2escm"),(void*)f_4843},
{C_text("f_4846:c_2dplatform_2escm"),(void*)f_4846},
{C_text("f_4849:c_2dplatform_2escm"),(void*)f_4849},
{C_text("f_4852:c_2dplatform_2escm"),(void*)f_4852},
{C_text("f_4855:c_2dplatform_2escm"),(void*)f_4855},
{C_text("f_4858:c_2dplatform_2escm"),(void*)f_4858},
{C_text("f_4861:c_2dplatform_2escm"),(void*)f_4861},
{C_text("f_4864:c_2dplatform_2escm"),(void*)f_4864},
{C_text("f_4867:c_2dplatform_2escm"),(void*)f_4867},
{C_text("f_4870:c_2dplatform_2escm"),(void*)f_4870},
{C_text("f_4873:c_2dplatform_2escm"),(void*)f_4873},
{C_text("f_4876:c_2dplatform_2escm"),(void*)f_4876},
{C_text("f_4879:c_2dplatform_2escm"),(void*)f_4879},
{C_text("f_4882:c_2dplatform_2escm"),(void*)f_4882},
{C_text("f_4885:c_2dplatform_2escm"),(void*)f_4885},
{C_text("f_4888:c_2dplatform_2escm"),(void*)f_4888},
{C_text("f_4891:c_2dplatform_2escm"),(void*)f_4891},
{C_text("f_4894:c_2dplatform_2escm"),(void*)f_4894},
{C_text("f_4897:c_2dplatform_2escm"),(void*)f_4897},
{C_text("f_4900:c_2dplatform_2escm"),(void*)f_4900},
{C_text("f_4903:c_2dplatform_2escm"),(void*)f_4903},
{C_text("f_4906:c_2dplatform_2escm"),(void*)f_4906},
{C_text("f_4909:c_2dplatform_2escm"),(void*)f_4909},
{C_text("f_4912:c_2dplatform_2escm"),(void*)f_4912},
{C_text("f_4915:c_2dplatform_2escm"),(void*)f_4915},
{C_text("f_4918:c_2dplatform_2escm"),(void*)f_4918},
{C_text("f_4921:c_2dplatform_2escm"),(void*)f_4921},
{C_text("f_4924:c_2dplatform_2escm"),(void*)f_4924},
{C_text("f_4927:c_2dplatform_2escm"),(void*)f_4927},
{C_text("f_4930:c_2dplatform_2escm"),(void*)f_4930},
{C_text("f_4933:c_2dplatform_2escm"),(void*)f_4933},
{C_text("f_4936:c_2dplatform_2escm"),(void*)f_4936},
{C_text("f_4939:c_2dplatform_2escm"),(void*)f_4939},
{C_text("f_4942:c_2dplatform_2escm"),(void*)f_4942},
{C_text("f_4945:c_2dplatform_2escm"),(void*)f_4945},
{C_text("f_4948:c_2dplatform_2escm"),(void*)f_4948},
{C_text("f_4951:c_2dplatform_2escm"),(void*)f_4951},
{C_text("f_4954:c_2dplatform_2escm"),(void*)f_4954},
{C_text("f_4957:c_2dplatform_2escm"),(void*)f_4957},
{C_text("f_4960:c_2dplatform_2escm"),(void*)f_4960},
{C_text("f_4963:c_2dplatform_2escm"),(void*)f_4963},
{C_text("f_4966:c_2dplatform_2escm"),(void*)f_4966},
{C_text("f_4969:c_2dplatform_2escm"),(void*)f_4969},
{C_text("f_4972:c_2dplatform_2escm"),(void*)f_4972},
{C_text("f_4975:c_2dplatform_2escm"),(void*)f_4975},
{C_text("f_4978:c_2dplatform_2escm"),(void*)f_4978},
{C_text("f_4981:c_2dplatform_2escm"),(void*)f_4981},
{C_text("f_4984:c_2dplatform_2escm"),(void*)f_4984},
{C_text("f_4987:c_2dplatform_2escm"),(void*)f_4987},
{C_text("f_4990:c_2dplatform_2escm"),(void*)f_4990},
{C_text("f_4993:c_2dplatform_2escm"),(void*)f_4993},
{C_text("f_4996:c_2dplatform_2escm"),(void*)f_4996},
{C_text("f_4999:c_2dplatform_2escm"),(void*)f_4999},
{C_text("f_5002:c_2dplatform_2escm"),(void*)f_5002},
{C_text("f_5005:c_2dplatform_2escm"),(void*)f_5005},
{C_text("f_5008:c_2dplatform_2escm"),(void*)f_5008},
{C_text("f_5011:c_2dplatform_2escm"),(void*)f_5011},
{C_text("f_5014:c_2dplatform_2escm"),(void*)f_5014},
{C_text("f_5017:c_2dplatform_2escm"),(void*)f_5017},
{C_text("f_5020:c_2dplatform_2escm"),(void*)f_5020},
{C_text("f_5023:c_2dplatform_2escm"),(void*)f_5023},
{C_text("f_5026:c_2dplatform_2escm"),(void*)f_5026},
{C_text("f_5029:c_2dplatform_2escm"),(void*)f_5029},
{C_text("f_5032:c_2dplatform_2escm"),(void*)f_5032},
{C_text("f_5035:c_2dplatform_2escm"),(void*)f_5035},
{C_text("f_5038:c_2dplatform_2escm"),(void*)f_5038},
{C_text("f_5041:c_2dplatform_2escm"),(void*)f_5041},
{C_text("f_5044:c_2dplatform_2escm"),(void*)f_5044},
{C_text("f_5047:c_2dplatform_2escm"),(void*)f_5047},
{C_text("f_5050:c_2dplatform_2escm"),(void*)f_5050},
{C_text("f_5053:c_2dplatform_2escm"),(void*)f_5053},
{C_text("f_5056:c_2dplatform_2escm"),(void*)f_5056},
{C_text("f_5059:c_2dplatform_2escm"),(void*)f_5059},
{C_text("f_5062:c_2dplatform_2escm"),(void*)f_5062},
{C_text("f_5065:c_2dplatform_2escm"),(void*)f_5065},
{C_text("f_5068:c_2dplatform_2escm"),(void*)f_5068},
{C_text("f_5071:c_2dplatform_2escm"),(void*)f_5071},
{C_text("f_5074:c_2dplatform_2escm"),(void*)f_5074},
{C_text("f_5077:c_2dplatform_2escm"),(void*)f_5077},
{C_text("f_5080:c_2dplatform_2escm"),(void*)f_5080},
{C_text("f_5083:c_2dplatform_2escm"),(void*)f_5083},
{C_text("f_5086:c_2dplatform_2escm"),(void*)f_5086},
{C_text("f_5089:c_2dplatform_2escm"),(void*)f_5089},
{C_text("f_5092:c_2dplatform_2escm"),(void*)f_5092},
{C_text("f_5095:c_2dplatform_2escm"),(void*)f_5095},
{C_text("f_5098:c_2dplatform_2escm"),(void*)f_5098},
{C_text("f_5101:c_2dplatform_2escm"),(void*)f_5101},
{C_text("f_5104:c_2dplatform_2escm"),(void*)f_5104},
{C_text("f_5107:c_2dplatform_2escm"),(void*)f_5107},
{C_text("f_5110:c_2dplatform_2escm"),(void*)f_5110},
{C_text("f_5113:c_2dplatform_2escm"),(void*)f_5113},
{C_text("f_5116:c_2dplatform_2escm"),(void*)f_5116},
{C_text("f_5119:c_2dplatform_2escm"),(void*)f_5119},
{C_text("f_5122:c_2dplatform_2escm"),(void*)f_5122},
{C_text("f_5125:c_2dplatform_2escm"),(void*)f_5125},
{C_text("f_5128:c_2dplatform_2escm"),(void*)f_5128},
{C_text("f_5131:c_2dplatform_2escm"),(void*)f_5131},
{C_text("f_5134:c_2dplatform_2escm"),(void*)f_5134},
{C_text("f_5137:c_2dplatform_2escm"),(void*)f_5137},
{C_text("f_5140:c_2dplatform_2escm"),(void*)f_5140},
{C_text("f_5143:c_2dplatform_2escm"),(void*)f_5143},
{C_text("f_5146:c_2dplatform_2escm"),(void*)f_5146},
{C_text("f_5148:c_2dplatform_2escm"),(void*)f_5148},
{C_text("f_5170:c_2dplatform_2escm"),(void*)f_5170},
{C_text("f_5185:c_2dplatform_2escm"),(void*)f_5185},
{C_text("f_5188:c_2dplatform_2escm"),(void*)f_5188},
{C_text("f_5203:c_2dplatform_2escm"),(void*)f_5203},
{C_text("f_5215:c_2dplatform_2escm"),(void*)f_5215},
{C_text("f_5223:c_2dplatform_2escm"),(void*)f_5223},
{C_text("f_5225:c_2dplatform_2escm"),(void*)f_5225},
{C_text("f_5246:c_2dplatform_2escm"),(void*)f_5246},
{C_text("f_5250:c_2dplatform_2escm"),(void*)f_5250},
{C_text("f_5253:c_2dplatform_2escm"),(void*)f_5253},
{C_text("f_5256:c_2dplatform_2escm"),(void*)f_5256},
{C_text("f_5258:c_2dplatform_2escm"),(void*)f_5258},
{C_text("f_5277:c_2dplatform_2escm"),(void*)f_5277},
{C_text("f_5294:c_2dplatform_2escm"),(void*)f_5294},
{C_text("f_5337:c_2dplatform_2escm"),(void*)f_5337},
{C_text("f_5341:c_2dplatform_2escm"),(void*)f_5341},
{C_text("f_5345:c_2dplatform_2escm"),(void*)f_5345},
{C_text("f_5349:c_2dplatform_2escm"),(void*)f_5349},
{C_text("f_5356:c_2dplatform_2escm"),(void*)f_5356},
{C_text("f_5360:c_2dplatform_2escm"),(void*)f_5360},
{C_text("f_5368:c_2dplatform_2escm"),(void*)f_5368},
{C_text("f_5372:c_2dplatform_2escm"),(void*)f_5372},
{C_text("f_5380:c_2dplatform_2escm"),(void*)f_5380},
{C_text("f_5383:c_2dplatform_2escm"),(void*)f_5383},
{C_text("f_5387:c_2dplatform_2escm"),(void*)f_5387},
{C_text("f_5390:c_2dplatform_2escm"),(void*)f_5390},
{C_text("f_5393:c_2dplatform_2escm"),(void*)f_5393},
{C_text("f_5396:c_2dplatform_2escm"),(void*)f_5396},
{C_text("f_5399:c_2dplatform_2escm"),(void*)f_5399},
{C_text("f_5402:c_2dplatform_2escm"),(void*)f_5402},
{C_text("f_5405:c_2dplatform_2escm"),(void*)f_5405},
{C_text("f_5408:c_2dplatform_2escm"),(void*)f_5408},
{C_text("f_5411:c_2dplatform_2escm"),(void*)f_5411},
{C_text("f_5414:c_2dplatform_2escm"),(void*)f_5414},
{C_text("f_5417:c_2dplatform_2escm"),(void*)f_5417},
{C_text("f_5420:c_2dplatform_2escm"),(void*)f_5420},
{C_text("f_5423:c_2dplatform_2escm"),(void*)f_5423},
{C_text("f_5426:c_2dplatform_2escm"),(void*)f_5426},
{C_text("f_5429:c_2dplatform_2escm"),(void*)f_5429},
{C_text("f_5432:c_2dplatform_2escm"),(void*)f_5432},
{C_text("f_5434:c_2dplatform_2escm"),(void*)f_5434},
{C_text("f_5456:c_2dplatform_2escm"),(void*)f_5456},
{C_text("f_5474:c_2dplatform_2escm"),(void*)f_5474},
{C_text("f_5496:c_2dplatform_2escm"),(void*)f_5496},
{C_text("f_5514:c_2dplatform_2escm"),(void*)f_5514},
{C_text("f_5539:c_2dplatform_2escm"),(void*)f_5539},
{C_text("f_5560:c_2dplatform_2escm"),(void*)f_5560},
{C_text("f_5568:c_2dplatform_2escm"),(void*)f_5568},
{C_text("f_5572:c_2dplatform_2escm"),(void*)f_5572},
{C_text("f_5579:c_2dplatform_2escm"),(void*)f_5579},
{C_text("f_5607:c_2dplatform_2escm"),(void*)f_5607},
{C_text("f_5610:c_2dplatform_2escm"),(void*)f_5610},
{C_text("f_5641:c_2dplatform_2escm"),(void*)f_5641},
{C_text("f_5663:c_2dplatform_2escm"),(void*)f_5663},
{C_text("f_5686:c_2dplatform_2escm"),(void*)f_5686},
{C_text("f_5690:c_2dplatform_2escm"),(void*)f_5690},
{C_text("f_5694:c_2dplatform_2escm"),(void*)f_5694},
{C_text("f_5701:c_2dplatform_2escm"),(void*)f_5701},
{C_text("f_5723:c_2dplatform_2escm"),(void*)f_5723},
{C_text("f_5733:c_2dplatform_2escm"),(void*)f_5733},
{C_text("f_5747:c_2dplatform_2escm"),(void*)f_5747},
{C_text("f_5751:c_2dplatform_2escm"),(void*)f_5751},
{C_text("f_5758:c_2dplatform_2escm"),(void*)f_5758},
{C_text("f_5789:c_2dplatform_2escm"),(void*)f_5789},
{C_text("f_5792:c_2dplatform_2escm"),(void*)f_5792},
{C_text("f_5807:c_2dplatform_2escm"),(void*)f_5807},
{C_text("f_5824:c_2dplatform_2escm"),(void*)f_5824},
{C_text("f_5828:c_2dplatform_2escm"),(void*)f_5828},
{C_text("f_5835:c_2dplatform_2escm"),(void*)f_5835},
{C_text("f_5866:c_2dplatform_2escm"),(void*)f_5866},
{C_text("f_5894:c_2dplatform_2escm"),(void*)f_5894},
{C_text("f_5896:c_2dplatform_2escm"),(void*)f_5896},
{C_text("f_5919:c_2dplatform_2escm"),(void*)f_5919},
{C_text("f_5921:c_2dplatform_2escm"),(void*)f_5921},
{C_text("f_5940:c_2dplatform_2escm"),(void*)f_5940},
{C_text("f_5944:c_2dplatform_2escm"),(void*)f_5944},
{C_text("f_5959:c_2dplatform_2escm"),(void*)f_5959},
{C_text("f_5990:c_2dplatform_2escm"),(void*)f_5990},
{C_text("f_6018:c_2dplatform_2escm"),(void*)f_6018},
{C_text("f_6020:c_2dplatform_2escm"),(void*)f_6020},
{C_text("f_6043:c_2dplatform_2escm"),(void*)f_6043},
{C_text("f_6045:c_2dplatform_2escm"),(void*)f_6045},
{C_text("f_6064:c_2dplatform_2escm"),(void*)f_6064},
{C_text("f_6068:c_2dplatform_2escm"),(void*)f_6068},
{C_text("f_6083:c_2dplatform_2escm"),(void*)f_6083},
{C_text("f_6087:c_2dplatform_2escm"),(void*)f_6087},
{C_text("f_6108:c_2dplatform_2escm"),(void*)f_6108},
{C_text("f_6150:c_2dplatform_2escm"),(void*)f_6150},
{C_text("f_6152:c_2dplatform_2escm"),(void*)f_6152},
{C_text("f_6159:c_2dplatform_2escm"),(void*)f_6159},
{C_text("f_6170:c_2dplatform_2escm"),(void*)f_6170},
{C_text("f_6191:c_2dplatform_2escm"),(void*)f_6191},
{C_text("f_6195:c_2dplatform_2escm"),(void*)f_6195},
{C_text("f_6201:c_2dplatform_2escm"),(void*)f_6201},
{C_text("f_6223:c_2dplatform_2escm"),(void*)f_6223},
{C_text("f_6227:c_2dplatform_2escm"),(void*)f_6227},
{C_text("f_6229:c_2dplatform_2escm"),(void*)f_6229},
{C_text("f_6245:c_2dplatform_2escm"),(void*)f_6245},
{C_text("f_6251:c_2dplatform_2escm"),(void*)f_6251},
{C_text("f_6269:c_2dplatform_2escm"),(void*)f_6269},
{C_text("f_6272:c_2dplatform_2escm"),(void*)f_6272},
{C_text("f_6275:c_2dplatform_2escm"),(void*)f_6275},
{C_text("f_6290:c_2dplatform_2escm"),(void*)f_6290},
{C_text("f_6302:c_2dplatform_2escm"),(void*)f_6302},
{C_text("f_6312:c_2dplatform_2escm"),(void*)f_6312},
{C_text("f_6316:c_2dplatform_2escm"),(void*)f_6316},
{C_text("f_6325:c_2dplatform_2escm"),(void*)f_6325},
{C_text("f_6335:c_2dplatform_2escm"),(void*)f_6335},
{C_text("f_6339:c_2dplatform_2escm"),(void*)f_6339},
{C_text("f_6369:c_2dplatform_2escm"),(void*)f_6369},
{C_text("f_6373:c_2dplatform_2escm"),(void*)f_6373},
{C_text("f_6377:c_2dplatform_2escm"),(void*)f_6377},
{C_text("f_6381:c_2dplatform_2escm"),(void*)f_6381},
{C_text("f_6385:c_2dplatform_2escm"),(void*)f_6385},
{C_text("f_6394:c_2dplatform_2escm"),(void*)f_6394},
{C_text("f_6398:c_2dplatform_2escm"),(void*)f_6398},
{C_text("f_6400:c_2dplatform_2escm"),(void*)f_6400},
{C_text("f_6410:c_2dplatform_2escm"),(void*)f_6410},
{C_text("f_6423:c_2dplatform_2escm"),(void*)f_6423},
{C_text("f_6448:c_2dplatform_2escm"),(void*)f_6448},
{C_text("toplevel:c_2dplatform_2escm"),(void*)C_c_2dplatform_toplevel},
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
o|hiding unexported module binding: chicken.compiler.c-platform#partition 
o|hiding unexported module binding: chicken.compiler.c-platform#span 
o|hiding unexported module binding: chicken.compiler.c-platform#take 
o|hiding unexported module binding: chicken.compiler.c-platform#drop 
o|hiding unexported module binding: chicken.compiler.c-platform#split-at 
o|hiding unexported module binding: chicken.compiler.c-platform#append-map 
o|hiding unexported module binding: chicken.compiler.c-platform#every 
o|hiding unexported module binding: chicken.compiler.c-platform#any 
o|hiding unexported module binding: chicken.compiler.c-platform#cons* 
o|hiding unexported module binding: chicken.compiler.c-platform#concatenate 
o|hiding unexported module binding: chicken.compiler.c-platform#delete 
o|hiding unexported module binding: chicken.compiler.c-platform#first 
o|hiding unexported module binding: chicken.compiler.c-platform#second 
o|hiding unexported module binding: chicken.compiler.c-platform#third 
o|hiding unexported module binding: chicken.compiler.c-platform#fourth 
o|hiding unexported module binding: chicken.compiler.c-platform#fifth 
o|hiding unexported module binding: chicken.compiler.c-platform#delete-duplicates 
o|hiding unexported module binding: chicken.compiler.c-platform#alist-cons 
o|hiding unexported module binding: chicken.compiler.c-platform#filter 
o|hiding unexported module binding: chicken.compiler.c-platform#filter-map 
o|hiding unexported module binding: chicken.compiler.c-platform#remove 
o|hiding unexported module binding: chicken.compiler.c-platform#unzip1 
o|hiding unexported module binding: chicken.compiler.c-platform#last 
o|hiding unexported module binding: chicken.compiler.c-platform#list-index 
o|hiding unexported module binding: chicken.compiler.c-platform#lset-adjoin/eq? 
o|hiding unexported module binding: chicken.compiler.c-platform#lset-difference/eq? 
o|hiding unexported module binding: chicken.compiler.c-platform#lset-union/eq? 
o|hiding unexported module binding: chicken.compiler.c-platform#lset-intersection/eq? 
o|hiding unexported module binding: chicken.compiler.c-platform#list-tabulate 
o|hiding unexported module binding: chicken.compiler.c-platform#lset<=/eq? 
o|hiding unexported module binding: chicken.compiler.c-platform#lset=/eq? 
o|hiding unexported module binding: chicken.compiler.c-platform#length+ 
o|hiding unexported module binding: chicken.compiler.c-platform#find 
o|hiding unexported module binding: chicken.compiler.c-platform#find-tail 
o|hiding unexported module binding: chicken.compiler.c-platform#iota 
o|hiding unexported module binding: chicken.compiler.c-platform#make-list 
o|hiding unexported module binding: chicken.compiler.c-platform#posq 
o|hiding unexported module binding: chicken.compiler.c-platform#posv 
o|hiding unexported module binding: chicken.compiler.c-platform#min-words-per-bignum 
o|hiding unexported module binding: chicken.compiler.c-platform#constant584 
o|hiding unexported module binding: chicken.compiler.c-platform#constant588 
o|hiding unexported module binding: chicken.compiler.c-platform#constant592 
o|hiding unexported module binding: chicken.compiler.c-platform#setter-map 
S|applied compiler syntax:
S|  scheme#for-each		1
S|  chicken.base#foldl		3
S|  scheme#map		5
S|  chicken.base#foldr		3
o|eliminated procedure checks: 34 
o|specializations:
o|  1 (chicken.base#add1 fixnum)
o|  1 (scheme#- *)
o|  1 (scheme#negative? *)
o|  4 (scheme#>= fixnum fixnum)
o|  2 (scheme#zero? *)
o|  1 (scheme#length list)
o|  1 (scheme#memq * list)
o|  15 (scheme#= fixnum fixnum)
o|  1 (scheme#eqv? * *)
o|  5 (##sys#check-list (or pair list) *)
o|  26 (scheme#cdr pair)
o|  10 (scheme#car pair)
(o e)|safe calls: 461 
(o e)|assignments to immediate values: 2 
o|safe globals: (chicken.compiler.c-platform#posv chicken.compiler.c-platform#posq chicken.compiler.c-platform#make-list chicken.compiler.c-platform#iota chicken.compiler.c-platform#find-tail chicken.compiler.c-platform#find chicken.compiler.c-platform#length+ chicken.compiler.c-platform#lset=/eq? chicken.compiler.c-platform#lset<=/eq? chicken.compiler.c-platform#list-tabulate chicken.compiler.c-platform#lset-intersection/eq? chicken.compiler.c-platform#lset-union/eq? chicken.compiler.c-platform#lset-difference/eq? chicken.compiler.c-platform#lset-adjoin/eq? chicken.compiler.c-platform#list-index chicken.compiler.c-platform#last chicken.compiler.c-platform#unzip1 chicken.compiler.c-platform#remove chicken.compiler.c-platform#filter-map chicken.compiler.c-platform#filter chicken.compiler.c-platform#alist-cons chicken.compiler.c-platform#delete-duplicates chicken.compiler.c-platform#fifth chicken.compiler.c-platform#fourth chicken.compiler.c-platform#third chicken.compiler.c-platform#second chicken.compiler.c-platform#first chicken.compiler.c-platform#delete chicken.compiler.c-platform#concatenate chicken.compiler.c-platform#cons* chicken.compiler.c-platform#any chicken.compiler.c-platform#every chicken.compiler.c-platform#append-map chicken.compiler.c-platform#split-at chicken.compiler.c-platform#drop chicken.compiler.c-platform#take chicken.compiler.c-platform#span chicken.compiler.c-platform#partition) 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#partition 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#span 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#drop 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#split-at 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#append-map 
o|inlining procedure: k2068 
o|inlining procedure: k2068 
o|inlining procedure: k2099 
o|inlining procedure: k2099 
o|merged explicitly consed rest parameter: xs209 
o|inlining procedure: k2129 
o|inlining procedure: k2129 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#concatenate 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#fourth 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#fifth 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#delete-duplicates 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#alist-cons 
o|inlining procedure: k2316 
o|inlining procedure: k2316 
o|inlining procedure: k2308 
o|inlining procedure: k2308 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#filter-map 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#remove 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#unzip1 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#list-index 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#lset-adjoin/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#lset-difference/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#lset-union/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#lset-intersection/eq? 
o|inlining procedure: k2707 
o|inlining procedure: k2707 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#lset<=/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#lset=/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#length+ 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#find 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#find-tail 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#iota 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#make-list 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#posq 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#posv 
o|inlining procedure: k3018 
o|inlining procedure: k3036 
o|inlining procedure: k3050 
o|inlining procedure: k3050 
o|inlining procedure: k3036 
o|inlining procedure: k3018 
o|substituted constant variable: a3076 
o|inlining procedure: k3086 
o|inlining procedure: k3104 
o|inlining procedure: k3104 
o|inlining procedure: k3128 
o|inlining procedure: "(c-platform.scm:336) chicken.compiler.c-platform#first" 
o|inlining procedure: k3128 
o|inlining procedure: k3167 
o|inlining procedure: k3167 
o|inlining procedure: "(c-platform.scm:333) chicken.compiler.c-platform#first" 
o|inlining procedure: k3188 
o|inlining procedure: k3188 
o|inlining procedure: "(c-platform.scm:327) chicken.compiler.c-platform#second" 
o|inlining procedure: "(c-platform.scm:326) chicken.compiler.c-platform#first" 
o|inlining procedure: k3086 
o|substituted constant variable: a3235 
o|inlining procedure: k3248 
o|consed rest parameter at call site: "(c-platform.scm:382) chicken.compiler.c-platform#cons*" 2 
o|inlining procedure: k3303 
o|inlining procedure: k3303 
o|inlining procedure: "(c-platform.scm:384) chicken.compiler.c-platform#first" 
o|inlining procedure: "(c-platform.scm:382) chicken.compiler.c-platform#first" 
o|inlining procedure: k3345 
o|inlining procedure: k3345 
o|consed rest parameter at call site: "(c-platform.scm:397) chicken.compiler.c-platform#cons*" 2 
o|inlining procedure: k3366 
o|substituted constant variable: a3379 
o|inlining procedure: k3380 
o|inlining procedure: k3380 
o|inlining procedure: k3366 
o|substituted constant variable: a3409 
o|contracted procedure: "(c-platform.scm:377) chicken.compiler.c-platform#last" 
o|inlining procedure: k2465 
o|inlining procedure: k2465 
o|inlining procedure: k3248 
o|inlining procedure: k3437 
o|inlining procedure: k3464 
o|inlining procedure: k3464 
o|inlining procedure: "(c-platform.scm:412) chicken.compiler.c-platform#first" 
o|inlining procedure: k3437 
o|substituted constant variable: a3494 
o|inlining procedure: k3515 
o|inlining procedure: k3515 
o|substituted constant variable: a3536 
o|inlining procedure: k3546 
o|inlining procedure: k3564 
o|inlining procedure: k3579 
o|inlining procedure: k3591 
o|substituted constant variable: a3679 
o|inlining procedure: k3591 
o|inlining procedure: "(c-platform.scm:448) chicken.compiler.c-platform#third" 
o|inlining procedure: k3579 
o|inlining procedure: k3564 
o|inlining procedure: k3546 
o|substituted constant variable: a3702 
o|inlining procedure: k4445 
o|inlining procedure: k4460 
o|inlining procedure: k4484 
o|inlining procedure: k4484 
o|inlining procedure: "(c-platform.scm:855) chicken.compiler.c-platform#first" 
o|inlining procedure: k4460 
o|substituted constant variable: a4530 
o|inlining procedure: k4546 
o|inlining procedure: "(c-platform.scm:846) chicken.compiler.c-platform#first" 
o|inlining procedure: k4546 
o|substituted constant variable: a4573 
o|inlining procedure: k4445 
o|inlining procedure: k5153 
o|inlining procedure: k5174 
o|inlining procedure: "(c-platform.scm:1159) chicken.compiler.c-platform#second" 
o|inlining procedure: k5174 
o|inlining procedure: "(c-platform.scm:1155) chicken.compiler.c-platform#first" 
o|inlining procedure: "(c-platform.scm:1152) chicken.compiler.c-platform#first" 
o|inlining procedure: k5153 
o|inlining procedure: k5260 
o|inlining procedure: k5278 
o|inlining procedure: k5296 
o|inlining procedure: k5311 
o|inlining procedure: k5311 
o|inlining procedure: "(c-platform.scm:1188) chicken.compiler.c-platform#second" 
o|inlining procedure: k5296 
o|inlining procedure: "(c-platform.scm:1183) chicken.compiler.c-platform#third" 
o|inlining procedure: k5278 
o|inlining procedure: "(c-platform.scm:1181) chicken.compiler.c-platform#first" 
o|inlining procedure: "(c-platform.scm:1179) chicken.compiler.c-platform#first" 
o|inlining procedure: k5260 
o|substituted constant variable: a5373 
o|inlining procedure: k5436 
o|inlining procedure: k5462 
o|inlining procedure: k5462 
o|inlining procedure: k5436 
o|substituted constant variable: a5468 
o|inlining procedure: k5476 
o|inlining procedure: k5502 
o|inlining procedure: k5502 
o|inlining procedure: k5476 
o|substituted constant variable: a5508 
o|inlining procedure: k5516 
o|inlining procedure: k5534 
o|substituted constant variable: chicken.compiler.c-platform#setter-map 
o|inlining procedure: k5534 
o|inlining procedure: k5516 
o|substituted constant variable: a5573 
o|substituted constant variable: chicken.compiler.c-platform#min-words-per-bignum 
o|substituted constant variable: chicken.compiler.c-platform#min-words-per-bignum 
o|inlining procedure: k5581 
o|inlining procedure: k5608 
o|inlining procedure: k5608 
o|inlining procedure: k5630 
o|inlining procedure: k5642 
o|inlining procedure: "(c-platform.scm:1035) chicken.compiler.c-platform#first" 
o|inlining procedure: "(c-platform.scm:1038) chicken.compiler.c-platform#first" 
o|inlining procedure: k5642 
o|inlining procedure: "(c-platform.scm:1030) chicken.compiler.c-platform#first" 
o|inlining procedure: k5630 
o|inlining procedure: "(c-platform.scm:1024) chicken.compiler.c-platform#second" 
o|inlining procedure: k5581 
o|substituted constant variable: a5695 
o|inlining procedure: k5703 
o|inlining procedure: k5728 
o|inlining procedure: k5728 
o|inlining procedure: "(c-platform.scm:995) chicken.compiler.c-platform#first" 
o|inlining procedure: "(c-platform.scm:993) chicken.compiler.c-platform#third" 
o|inlining procedure: k5703 
o|substituted constant variable: a5756 
o|substituted constant variable: chicken.compiler.c-platform#min-words-per-bignum 
o|substituted constant variable: chicken.compiler.c-platform#min-words-per-bignum 
o|inlining procedure: k5760 
o|inlining procedure: k5787 
o|inlining procedure: "(c-platform.scm:877) chicken.compiler.c-platform#first" 
o|inlining procedure: k5787 
o|inlining procedure: "(c-platform.scm:874) chicken.compiler.c-platform#first" 
o|inlining procedure: "(c-platform.scm:871) chicken.compiler.c-platform#second" 
o|substituted constant variable: a5833 
o|inlining procedure: k5760 
o|inlining procedure: k5837 
o|inlining procedure: k5837 
o|inlining procedure: k5868 
o|inlining procedure: k5868 
o|inlining procedure: k5874 
o|inlining procedure: k5874 
o|substituted constant variable: a5913 
o|inlining procedure: k5927 
o|inlining procedure: "(c-platform.scm:820) chicken.compiler.c-platform#first" 
o|inlining procedure: k5927 
o|inlining procedure: k5961 
o|inlining procedure: k5961 
o|inlining procedure: k5992 
o|inlining procedure: k5992 
o|inlining procedure: k5998 
o|inlining procedure: k5998 
o|substituted constant variable: a6037 
o|inlining procedure: k6051 
o|inlining procedure: "(c-platform.scm:783) chicken.compiler.c-platform#first" 
o|inlining procedure: k6051 
o|inlining procedure: k6088 
o|inlining procedure: k6088 
o|inlining procedure: "(c-platform.scm:747) chicken.compiler.c-platform#first" 
o|inlining procedure: k6130 
o|inlining procedure: k6154 
o|inlining procedure: k6154 
o|inlining procedure: "(c-platform.scm:755) chicken.compiler.c-platform#first" 
o|inlining procedure: k6130 
o|inlining procedure: k6207 
o|inlining procedure: "(c-platform.scm:743) chicken.compiler.c-platform#first" 
o|inlining procedure: k6207 
o|inlining procedure: k6231 
o|inlining procedure: k6252 
o|inlining procedure: k6252 
o|inlining procedure: k6291 
o|inlining procedure: "(c-platform.scm:361) chicken.compiler.c-platform#first" 
o|inlining procedure: k6291 
o|inlining procedure: k6326 
o|inlining procedure: k6326 
o|inlining procedure: "(c-platform.scm:358) chicken.compiler.c-platform#first" 
o|inlining procedure: k6343 
o|inlining procedure: k6343 
o|inlining procedure: "(c-platform.scm:352) chicken.compiler.c-platform#second" 
o|inlining procedure: "(c-platform.scm:351) chicken.compiler.c-platform#first" 
o|inlining procedure: k6231 
o|substituted constant variable: a6390 
o|inlining procedure: k6402 
o|contracted procedure: "(c-platform.scm:288) g597604" 
o|propagated global variable: g612613 chicken.compiler.support#mark-variable 
o|inlining procedure: k6402 
o|substituted constant variable: chicken.compiler.c-platform#constant588 
o|substituted constant variable: chicken.compiler.c-platform#constant584 
o|substituted constant variable: chicken.compiler.c-platform#constant592 
o|inlining procedure: k6425 
o|contracted procedure: "(c-platform.scm:125) g564573" 
o|inlining procedure: k6425 
o|simplifications: ((if . 1)) 
o|replaced variables: 608 
o|removed binding forms: 579 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#every 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#any 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#first 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#second 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#third 
o|substituted constant variable: r23096465 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#min-words-per-bignum 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#constant584 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#constant588 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#constant592 
o|substituted constant variable: r30196477 
o|substituted constant variable: r31056480 
o|substituted constant variable: r31296487 
o|substituted constant variable: r31896496 
o|substituted constant variable: r30876507 
o|substituted constant variable: r33816525 
o|substituted constant variable: r33676527 
o|substituted constant variable: r32496530 
o|substituted constant variable: r34386541 
o|substituted constant variable: r35166543 
o|substituted constant variable: r35926548 
o|substituted constant variable: r35806554 
o|substituted constant variable: r35656555 
o|substituted constant variable: r35476556 
o|substituted constant variable: r44616566 
o|substituted constant variable: r45476574 
o|substituted constant variable: r45476574 
o|folded constant expression: (scheme#not (quote #f)) 
o|substituted constant variable: r44466576 
o|contracted procedure: "(c-platform.scm:1171) chicken.compiler.c-platform#list-tabulate" 
o|substituted constant variable: r27086466 
o|substituted constant variable: r51756584 
o|substituted constant variable: r51546595 
o|substituted constant variable: r53126600 
o|substituted constant variable: r52976606 
o|substituted constant variable: r52796612 
o|substituted constant variable: r52616623 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#setter-map 
o|substituted constant variable: r54636625 
o|substituted constant variable: r54636625 
o|substituted constant variable: r54636627 
o|substituted constant variable: r54636627 
o|substituted constant variable: r54376629 
o|substituted constant variable: r55036631 
o|substituted constant variable: r55036631 
o|substituted constant variable: r55036633 
o|substituted constant variable: r55036633 
o|substituted constant variable: r54776635 
o|substituted constant variable: r55356638 
o|substituted constant variable: r55176639 
o|converted assignments to bindings: (rewrite-call/cc902) 
o|converted assignments to bindings: (rewrite-make-vector885) 
o|substituted constant variable: r56436657 
o|substituted constant variable: r56316663 
o|substituted constant variable: r55826669 
o|substituted constant variable: r57296671 
o|substituted constant variable: r57296671 
o|substituted constant variable: r57296673 
o|substituted constant variable: r57296673 
o|substituted constant variable: r57046685 
o|substituted constant variable: r57616706 
o|converted assignments to bindings: (rewrite-div833) 
o|substituted constant variable: r58386707 
o|substituted constant variable: r58696709 
o|substituted constant variable: r58696709 
o|substituted constant variable: r58696711 
o|substituted constant variable: r58696711 
o|substituted constant variable: r58756714 
o|substituted constant variable: r59286722 
o|substituted constant variable: r59286722 
o|folded constant expression: (scheme#not (quote #f)) 
o|substituted constant variable: r59626724 
o|substituted constant variable: r59936726 
o|substituted constant variable: r59936726 
o|substituted constant variable: r59936728 
o|substituted constant variable: r59936728 
o|substituted constant variable: r59996731 
o|substituted constant variable: r60526739 
o|substituted constant variable: r60526739 
o|folded constant expression: (scheme#not (quote #f)) 
o|substituted constant variable: r61316756 
o|substituted constant variable: r62086764 
o|substituted constant variable: r62086764 
o|folded constant expression: (scheme#not (quote #f)) 
o|converted assignments to bindings: (rewrite-c-w-v763) 
o|converted assignments to bindings: (rewrite-c..r734) 
o|converted assignments to bindings: (rewrite-apply690) 
o|substituted constant variable: r62926775 
o|substituted constant variable: r63446784 
o|substituted constant variable: r62326795 
o|converted assignments to bindings: (eqv?-id630) 
o|converted assignments to bindings: (op1619) 
o|substituted constant variable: g603605 
o|substituted constant variable: g570574 
o|simplifications: ((let . 8)) 
o|replaced variables: 127 
o|removed binding forms: 548 
o|replaced variables: 3 
o|removed binding forms: 208 
o|removed binding forms: 3 
o|removed unused formal parameters: (i899) 
o|removed unused parameter to known procedure: i899 "(mini-srfi-1.scm:190) a5224" 
o|simplifications: ((if . 10) (let . 10) (##core#call . 280)) 
o|  call simplifications:
o|    scheme#symbol?	2
o|    scheme#assq
o|    scheme#=
o|    chicken.base#fixnum?	2
o|    scheme#<=
o|    chicken.fixnum#fx+
o|    chicken.fixnum#fx>=	5
o|    scheme#caddr	3
o|    scheme#list?
o|    scheme#cdr	6
o|    ##sys#setslot	2
o|    scheme#cadr	8
o|    scheme#equal?	2
o|    scheme#number?	2
o|    scheme#not	12
o|    scheme#length	19
o|    scheme#eq?	56
o|    scheme#list	84
o|    ##sys#check-list	2
o|    scheme#pair?	7
o|    ##sys#slot	10
o|    scheme#null?	8
o|    scheme#car	34
o|    scheme#cons	11
o|contracted procedure: k2132 
o|contracted procedure: k2143 
o|contracted procedure: k2299 
o|contracted procedure: k2311 
o|contracted procedure: k2329 
o|contracted procedure: k2337 
o|contracted procedure: k2986 
o|contracted procedure: k3073 
o|contracted procedure: k3021 
o|contracted procedure: k3028 
o|contracted procedure: k3032 
o|contracted procedure: k3039 
o|contracted procedure: k3046 
o|contracted procedure: k3057 
o|contracted procedure: k3065 
o|contracted procedure: k3061 
o|contracted procedure: k3232 
o|contracted procedure: k3089 
o|contracted procedure: k3092 
o|contracted procedure: k3095 
o|contracted procedure: k3117 
o|contracted procedure: k3121 
o|contracted procedure: k3131 
o|contracted procedure: k3134 
o|contracted procedure: k3147 
o|contracted procedure: k3158 
o|contracted procedure: k3161 
o|contracted procedure: k3174 
o|contracted procedure: k3185 
o|contracted procedure: k3191 
o|contracted procedure: k3197 
o|contracted procedure: k3204 
o|contracted procedure: k3208 
o|contracted procedure: k3251 
o|contracted procedure: k3261 
o|contracted procedure: k3268 
o|contracted procedure: k3276 
o|contracted procedure: k3284 
o|contracted procedure: k3288 
o|contracted procedure: k3291 
o|contracted procedure: k3294 
o|contracted procedure: k3306 
o|contracted procedure: k3309 
o|contracted procedure: k3312 
o|contracted procedure: k3320 
o|contracted procedure: k3328 
o|contracted procedure: k3352 
o|contracted procedure: k3363 
o|contracted procedure: k3411 
o|contracted procedure: k3369 
o|contracted procedure: k3372 
o|contracted procedure: k3390 
o|contracted procedure: k3402 
o|contracted procedure: k3394 
o|contracted procedure: k2478 
o|contracted procedure: k2468 
o|contracted procedure: k3491 
o|contracted procedure: k3440 
o|contracted procedure: k3449 
o|contracted procedure: k3456 
o|contracted procedure: k3460 
o|contracted procedure: k3467 
o|contracted procedure: k3474 
o|contracted procedure: k3484 
o|contracted procedure: k3533 
o|contracted procedure: k3518 
o|contracted procedure: k3525 
o|contracted procedure: k3529 
o|contracted procedure: k3704 
o|contracted procedure: k3549 
o|contracted procedure: k3552 
o|contracted procedure: k3555 
o|contracted procedure: k3561 
o|contracted procedure: k3567 
o|contracted procedure: k3570 
o|contracted procedure: k3585 
o|contracted procedure: k3588 
o|contracted procedure: k3594 
o|contracted procedure: k3600 
o|contracted procedure: k3616 
o|contracted procedure: k3620 
o|contracted procedure: k3632 
o|contracted procedure: k3636 
o|contracted procedure: k3672 
o|contracted procedure: k3644 
o|contracted procedure: k3648 
o|contracted procedure: k3656 
o|contracted procedure: k3660 
o|contracted procedure: k4448 
o|contracted procedure: k4570 
o|contracted procedure: k4454 
o|contracted procedure: k4532 
o|contracted procedure: k4457 
o|contracted procedure: k4527 
o|contracted procedure: k4463 
o|contracted procedure: k4470 
o|contracted procedure: k4474 
o|contracted procedure: k4494 
o|contracted procedure: k4505 
o|contracted procedure: k4508 
o|contracted procedure: k4515 
o|contracted procedure: k4549 
o|contracted procedure: k4556 
o|contracted procedure: k4546 
o|contracted procedure: k5150 
o|contracted procedure: k5156 
o|contracted procedure: k5159 
o|contracted procedure: k5165 
o|contracted procedure: k5171 
o|contracted procedure: k5177 
o|contracted procedure: k5193 
o|contracted procedure: k5197 
o|contracted procedure: k5205 
o|contracted procedure: k5209 
o|contracted procedure: k5217 
o|contracted procedure: k2710 
o|contracted procedure: k2725 
o|contracted procedure: k5232 
o|contracted procedure: k5375 
o|contracted procedure: k5263 
o|contracted procedure: k5266 
o|contracted procedure: k5272 
o|contracted procedure: k5281 
o|contracted procedure: k5287 
o|contracted procedure: k5299 
o|contracted procedure: k5302 
o|contracted procedure: k5308 
o|contracted procedure: k5314 
o|contracted procedure: k5320 
o|contracted procedure: k5327 
o|contracted procedure: k5331 
o|contracted procedure: k5362 
o|contracted procedure: k5470 
o|contracted procedure: k5439 
o|contracted procedure: k5446 
o|contracted procedure: k5450 
o|contracted procedure: k5465 
o|contracted procedure: k5458 
o|contracted procedure: k5510 
o|contracted procedure: k5479 
o|contracted procedure: k5486 
o|contracted procedure: k5490 
o|contracted procedure: k5505 
o|contracted procedure: k5498 
o|contracted procedure: k5575 
o|contracted procedure: k5519 
o|contracted procedure: k5522 
o|contracted procedure: k5528 
o|contracted procedure: k5531 
o|contracted procedure: k5540 
o|contracted procedure: k5550 
o|contracted procedure: k5554 
o|contracted procedure: k5562 
o|contracted procedure: k5697 
o|contracted procedure: k5584 
o|contracted procedure: k5587 
o|contracted procedure: k5594 
o|contracted procedure: k5602 
o|inlining procedure: k5598 
o|inlining procedure: k5598 
o|contracted procedure: k5614 
o|contracted procedure: k5624 
o|contracted procedure: k5627 
o|contracted procedure: k5633 
o|contracted procedure: k5657 
o|contracted procedure: k5653 
o|contracted procedure: k5674 
o|contracted procedure: k5670 
o|contracted procedure: k5677 
o|contracted procedure: k5753 
o|contracted procedure: k5706 
o|contracted procedure: k5713 
o|contracted procedure: k5717 
o|contracted procedure: k5725 
o|contracted procedure: k5734 
o|contracted procedure: k5741 
o|contracted procedure: k5763 
o|contracted procedure: k5830 
o|contracted procedure: k5769 
o|contracted procedure: k5776 
o|contracted procedure: k5780 
o|contracted procedure: k5783 
o|contracted procedure: k5801 
o|contracted procedure: k5797 
o|contracted procedure: k5811 
o|contracted procedure: k5818 
o|contracted procedure: k5840 
o|contracted procedure: k5948 
o|contracted procedure: k5849 
o|contracted procedure: k5856 
o|contracted procedure: k5860 
o|contracted procedure: k5871 
o|contracted procedure: k5910 
o|contracted procedure: k5877 
o|contracted procedure: k5884 
o|contracted procedure: k5888 
o|contracted procedure: k5902 
o|contracted procedure: k5906 
o|contracted procedure: k5930 
o|contracted procedure: k5934 
o|contracted procedure: k5955 
o|contracted procedure: k5964 
o|contracted procedure: k6072 
o|contracted procedure: k5973 
o|contracted procedure: k5980 
o|contracted procedure: k5984 
o|contracted procedure: k5995 
o|contracted procedure: k6034 
o|contracted procedure: k6001 
o|contracted procedure: k6008 
o|contracted procedure: k6012 
o|contracted procedure: k6026 
o|contracted procedure: k6030 
o|contracted procedure: k6054 
o|contracted procedure: k6058 
o|contracted procedure: k6079 
o|contracted procedure: k6091 
o|contracted procedure: k6098 
o|contracted procedure: k6102 
o|contracted procedure: k6197 
o|contracted procedure: k6112 
o|contracted procedure: k6119 
o|contracted procedure: k6127 
o|contracted procedure: k6123 
o|contracted procedure: k6133 
o|contracted procedure: k6140 
o|contracted procedure: k6144 
o|contracted procedure: k6164 
o|contracted procedure: k6175 
o|contracted procedure: k6178 
o|contracted procedure: k6185 
o|contracted procedure: k6210 
o|contracted procedure: k6217 
o|contracted procedure: k6207 
o|contracted procedure: k6387 
o|contracted procedure: k6234 
o|contracted procedure: k6237 
o|contracted procedure: k6240 
o|contracted procedure: k6259 
o|contracted procedure: k6263 
o|contracted procedure: k6280 
o|contracted procedure: k6284 
o|contracted procedure: k6294 
o|contracted procedure: k6297 
o|contracted procedure: k6317 
o|contracted procedure: k6320 
o|contracted procedure: k6340 
o|contracted procedure: k6346 
o|contracted procedure: k6352 
o|contracted procedure: k6359 
o|contracted procedure: k6363 
o|contracted procedure: k6405 
o|contracted procedure: k6415 
o|contracted procedure: k6419 
o|contracted procedure: k6428 
o|contracted procedure: k6431 
o|contracted procedure: k6434 
o|contracted procedure: k6442 
o|contracted procedure: k6450 
o|simplifications: ((if . 4) (let . 47)) 
o|removed binding forms: 257 
o|contracted procedure: k5843 
o|contracted procedure: k5967 
o|removed binding forms: 3 
o|direct leaf routine/allocation: loop333 0 
o|contracted procedure: k3254 
o|converted assignments to bindings: (loop333) 
o|simplifications: ((let . 1)) 
o|removed binding forms: 1 
o|customizable procedures: (map-loop558576 for-each-loop596614 op1619 k6270 k6273 rewrite-c..r734 k6157 k5790 k5639 a5224 loop428 chicken.compiler.c-platform#filter k4487 map-loop700717 chicken.compiler.c-platform#cons* k3107 k3110 foldr260263 g265266 loop210) 
o|calls to known targets: 63 
o|identified direct recursive calls: f_2127 1 
o|identified direct recursive calls: f_2306 1 
o|identified direct recursive calls: f_2463 1 
o|fast box initializations: 6 
o|fast global references: 6 
o|fast global assignments: 2 
o|dropping unused closure argument: f_2121 
o|dropping unused closure argument: f_2297 
o|dropping unused closure argument: f_2463 
o|dropping unused closure argument: f_3014 
o|dropping unused closure argument: f_3429 
*/
/* end of file */
